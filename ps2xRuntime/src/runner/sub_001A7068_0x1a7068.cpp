#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7068
// Address: 0x1a7068 - 0x1a7158
void sub_001A7068_0x1a7068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7068_0x1a7068");
#endif

    switch (ctx->pc) {
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70c4u: goto label_1a70c4;
        case 0x1a70e8u: goto label_1a70e8;
        default: break;
    }

    ctx->pc = 0x1a7068u;

    // 0x1a7068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a706c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7070: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a707c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7080: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a7080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7084: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a7088: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a7088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a708c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7090: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a7090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a7094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7094u;
    {
        const bool branch_taken_0x1a7094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7094u;
            // 0x1a7098: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7094) {
            ctx->pc = 0x1A70B8u;
            goto label_1a70b8;
        }
    }
    ctx->pc = 0x1A709Cu;
    // 0x1a709c: 0x0  nop
    ctx->pc = 0x1a709cu;
    // NOP
label_1a70a0:
    // 0x1a70a0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1a70a4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A70A4u;
    {
        const bool branch_taken_0x1a70a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70A4u;
            // 0x1a70a8: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70a4) {
            ctx->pc = 0x1A7134u;
            goto label_1a7134;
        }
    }
    ctx->pc = 0x1A70ACu;
    // 0x1a70ac: 0x5a000022  blezl       $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A70ACu;
    {
        const bool branch_taken_0x1a70ac = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1a70ac) {
            ctx->pc = 0x1A70B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70ACu;
            // 0x1a70b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7138u;
            goto label_1a7138;
        }
    }
    ctx->pc = 0x1A70B4u;
    // 0x1a70b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a70b8:
    // 0x1a70b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a70b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70bc: 0xc069ec2  jal         func_1A7B08
    ctx->pc = 0x1A70BCu;
    SET_GPR_U32(ctx, 31, 0x1A70C4u);
    ctx->pc = 0x1A70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70BCu;
            // 0x1a70c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7B08u;
    if (runtime->hasFunction(0x1A7B08u)) {
        auto targetFn = runtime->lookupFunction(0x1A7B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70C4u; }
        if (ctx->pc != 0x1A70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7B08_0x1a7b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70C4u; }
        if (ctx->pc != 0x1A70C4u) { return; }
    }
    ctx->pc = 0x1A70C4u;
label_1a70c4:
    // 0x1a70c4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A70C4u;
    {
        const bool branch_taken_0x1a70c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70C4u;
            // 0x1a70c8: 0x2a630003  slti        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70c4) {
            ctx->pc = 0x1A70A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a70a0;
        }
    }
    ctx->pc = 0x1A70CCu;
    // 0x1a70cc: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a70d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a70d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70d4: 0x2451c6b8  addiu       $s1, $v0, -0x3948
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952632));
    // 0x1a70d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a70d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a70e0: 0xc069c56  jal         func_1A7158
    ctx->pc = 0x1A70E0u;
    SET_GPR_U32(ctx, 31, 0x1A70E8u);
    ctx->pc = 0x1A70E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70E0u;
            // 0x1a70e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7158u;
    if (runtime->hasFunction(0x1A7158u)) {
        auto targetFn = runtime->lookupFunction(0x1A7158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70E8u; }
        if (ctx->pc != 0x1A70E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7158_0x1a7158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70E8u; }
        if (ctx->pc != 0x1A70E8u) { return; }
    }
    ctx->pc = 0x1A70E8u;
label_1a70e8:
    // 0x1a70e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a70ec: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A70ECu;
    {
        const bool branch_taken_0x1a70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70ec) {
            ctx->pc = 0x1A70F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70ECu;
            // 0x1a70f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7138u;
            goto label_1a7138;
        }
    }
    ctx->pc = 0x1A70F4u;
    // 0x1a70f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a70f8: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A70F8u;
    {
        const bool branch_taken_0x1a70f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a70f8) {
            ctx->pc = 0x1A70FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70F8u;
            // 0x1a70fc: 0xae82001c  sw          $v0, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7100u;
            goto label_1a7100;
        }
    }
    ctx->pc = 0x1A7100u;
label_1a7100:
    // 0x1a7100: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1a7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1a7104: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A7104u;
    {
        const bool branch_taken_0x1a7104 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a7104) {
            ctx->pc = 0x1A7108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7104u;
            // 0x1a7108: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A710Cu;
            goto label_1a710c;
        }
    }
    ctx->pc = 0x1A710Cu;
label_1a710c:
    // 0x1a710c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1a7110: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A7110u;
    {
        const bool branch_taken_0x1a7110 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a7110) {
            ctx->pc = 0x1A7114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7110u;
            // 0x1a7114: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7118u;
            goto label_1a7118;
        }
    }
    ctx->pc = 0x1A7118u;
label_1a7118:
    // 0x1a7118: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1a711c: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A711Cu;
    {
        const bool branch_taken_0x1a711c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1A7120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A711Cu;
            // 0x1a7120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a711c) {
            ctx->pc = 0x1A7138u;
            goto label_1a7138;
        }
    }
    ctx->pc = 0x1A7124u;
    // 0x1a7124: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a7128: 0xae860020  sw          $a2, 0x20($s4)
    ctx->pc = 0x1a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 6));
    // 0x1a712c: 0x2442abb0  addiu       $v0, $v0, -0x5450
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x1a7130: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1a7130u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1a7134:
    // 0x1a7134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7138:
    // 0x1a7138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a713c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a713cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7140: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7144: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7144u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7148: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a7148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a714c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A714Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A714Cu;
            // 0x1a7150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7154u;
    // 0x1a7154: 0x0  nop
    ctx->pc = 0x1a7154u;
    // NOP
}
