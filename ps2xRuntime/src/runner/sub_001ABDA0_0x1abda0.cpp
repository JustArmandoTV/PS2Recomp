#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABDA0
// Address: 0x1abda0 - 0x1abe28
void sub_001ABDA0_0x1abda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABDA0_0x1abda0");
#endif

    switch (ctx->pc) {
        case 0x1abdc4u: goto label_1abdc4;
        case 0x1abdd4u: goto label_1abdd4;
        default: break;
    }

    ctx->pc = 0x1abda0u;

    // 0x1abda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abda8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1abdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1abdb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1abdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1abdb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1abdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1abdb8: 0x8e122038  lw          $s2, 0x2038($s0)
    ctx->pc = 0x1abdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8248)));
    // 0x1abdbc: 0xc069754  jal         func_1A5D50
    ctx->pc = 0x1ABDBCu;
    SET_GPR_U32(ctx, 31, 0x1ABDC4u);
    ctx->pc = 0x1ABDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDBCu;
            // 0x1abdc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D50u;
    if (runtime->hasFunction(0x1A5D50u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDC4u; }
        if (ctx->pc != 0x1ABDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D50_0x1a5d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDC4u; }
        if (ctx->pc != 0x1ABDC4u) { return; }
    }
    ctx->pc = 0x1ABDC4u;
label_1abdc4:
    // 0x1abdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1abdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdcc: 0xc069970  jal         func_1A65C0
    ctx->pc = 0x1ABDCCu;
    SET_GPR_U32(ctx, 31, 0x1ABDD4u);
    ctx->pc = 0x1ABDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDCCu;
            // 0x1abdd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A65C0u;
    if (runtime->hasFunction(0x1A65C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A65C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD4u; }
        if (ctx->pc != 0x1ABDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A65C0_0x1a65c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD4u; }
        if (ctx->pc != 0x1ABDD4u) { return; }
    }
    ctx->pc = 0x1ABDD4u;
label_1abdd4:
    // 0x1abdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdd8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1abddc: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1abde0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1abde4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abde8: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x1abde8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1abdec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABDECu;
    {
        const bool branch_taken_0x1abdec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDECu;
            // 0x1abdf0: 0x34a50f1c  ori         $a1, $a1, 0xF1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdec) {
            ctx->pc = 0x1ABE10u;
            goto label_1abe10;
        }
    }
    ctx->pc = 0x1ABDF4u;
    // 0x1abdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abdf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1abdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abdfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1abdfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1abe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abe04: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1ABE04u;
    ctx->pc = 0x1ABE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE04u;
            // 0x1abe08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ABE0Cu;
    // 0x1abe0c: 0x0  nop
    ctx->pc = 0x1abe0cu;
    // NOP
label_1abe10:
    // 0x1abe10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1abe14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abe18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1abe18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1abe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abe20: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE20u;
            // 0x1abe24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABE28u;
}
