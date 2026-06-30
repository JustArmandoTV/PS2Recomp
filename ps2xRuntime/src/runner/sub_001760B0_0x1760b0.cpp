#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001760B0
// Address: 0x1760b0 - 0x176168
void sub_001760B0_0x1760b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001760B0_0x1760b0");
#endif

    switch (ctx->pc) {
        case 0x176110u: goto label_176110;
        case 0x17611cu: goto label_17611c;
        default: break;
    }

    ctx->pc = 0x1760b0u;

    // 0x1760b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1760b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1760b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1760b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1760b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1760b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1760bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1760c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1760c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1760c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1760c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1760c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1760ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1760d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1760d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1760D4u;
    {
        const bool branch_taken_0x1760d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760D4u;
            // 0x1760d8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760d4) {
            ctx->pc = 0x1760E4u;
            goto label_1760e4;
        }
    }
    ctx->pc = 0x1760DCu;
    // 0x1760dc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1760DCu;
    {
        const bool branch_taken_0x1760dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1760dc) {
            ctx->pc = 0x176108u;
            goto label_176108;
        }
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1760e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1760e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1760e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1760ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1760ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1760f0: 0x24844928  addiu       $a0, $a0, 0x4928
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18728));
    // 0x1760f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1760f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1760f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1760fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1760fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176100: 0x8059f4e  j           func_167D38
    ctx->pc = 0x176100u;
    ctx->pc = 0x176104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176100u;
            // 0x176104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176108u;
label_176108:
    // 0x176108: 0xc05cc84  jal         func_173210
    ctx->pc = 0x176108u;
    SET_GPR_U32(ctx, 31, 0x176110u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176110u; }
        if (ctx->pc != 0x176110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176110u; }
        if (ctx->pc != 0x176110u) { return; }
    }
    ctx->pc = 0x176110u;
label_176110:
    // 0x176110: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x176114: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x176114u;
    SET_GPR_U32(ctx, 31, 0x17611Cu);
    ctx->pc = 0x176118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176114u;
            // 0x176118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17611Cu; }
        if (ctx->pc != 0x17611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17611Cu; }
        if (ctx->pc != 0x17611Cu) { return; }
    }
    ctx->pc = 0x17611Cu;
label_17611c:
    // 0x17611c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x17611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x176120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176124: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x176124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x176128: 0xae1300c0  sw          $s3, 0xC0($s0)
    ctx->pc = 0x176128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 19));
    // 0x17612c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176130: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x176134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176138: 0xa20200ac  sb          $v0, 0xAC($s0)
    ctx->pc = 0x176138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x17613c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x17613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x176140: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x176140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x176144: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x176144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x176148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17614c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17614cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176154: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x176154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17615c: 0x805d5c0  j           func_175700
    ctx->pc = 0x17615Cu;
    ctx->pc = 0x176160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17615Cu;
            // 0x176160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175700_0x175700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176164u;
    // 0x176164: 0x0  nop
    ctx->pc = 0x176164u;
    // NOP
}
