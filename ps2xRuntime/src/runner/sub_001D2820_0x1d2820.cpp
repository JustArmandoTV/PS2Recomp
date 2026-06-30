#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2820
// Address: 0x1d2820 - 0x1d2890
void sub_001D2820_0x1d2820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2820_0x1d2820");
#endif

    switch (ctx->pc) {
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2854u: goto label_1d2854;
        default: break;
    }

    ctx->pc = 0x1d2820u;

    // 0x1d2820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d282c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2834: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2834u;
    {
        const bool branch_taken_0x1d2834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2834u;
            // 0x1d2838: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2834) {
            ctx->pc = 0x1D2844u;
            goto label_1d2844;
        }
    }
    ctx->pc = 0x1D283Cu;
    // 0x1d283c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D283Cu;
    {
        const bool branch_taken_0x1d283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D283Cu;
            // 0x1d2840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d283c) {
            ctx->pc = 0x1D286Cu;
            goto label_1d286c;
        }
    }
    ctx->pc = 0x1D2844u;
label_1d2844:
    // 0x1d2844: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d2848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d2848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d284c:
    // 0x1d284c: 0xc04e7d4  jal         func_139F50
    ctx->pc = 0x1D284Cu;
    SET_GPR_U32(ctx, 31, 0x1D2854u);
    ctx->pc = 0x1D2850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D284Cu;
            // 0x1d2850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139F50u;
    if (runtime->hasFunction(0x139F50u)) {
        auto targetFn = runtime->lookupFunction(0x139F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2854u; }
        if (ctx->pc != 0x1D2854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139F50_0x139f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2854u; }
        if (ctx->pc != 0x1D2854u) { return; }
    }
    ctx->pc = 0x1D2854u;
label_1d2854:
    // 0x1d2854: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d285c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d285cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2860: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2860u;
    {
        const bool branch_taken_0x1d2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2860u;
            // 0x1d2864: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2860) {
            ctx->pc = 0x1D284Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d284c;
        }
    }
    ctx->pc = 0x1D2868u;
    // 0x1d2868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d286c:
    // 0x1d286c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d286cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d287c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D287Cu;
            // 0x1d2880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2884u;
    // 0x1d2884: 0x0  nop
    ctx->pc = 0x1d2884u;
    // NOP
    // 0x1d2888: 0x0  nop
    ctx->pc = 0x1d2888u;
    // NOP
    // 0x1d288c: 0x0  nop
    ctx->pc = 0x1d288cu;
    // NOP
}
