#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1A80
// Address: 0x1d1a80 - 0x1d1ae0
void sub_001D1A80_0x1d1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1A80_0x1d1a80");
#endif

    switch (ctx->pc) {
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac8u: goto label_1d1ac8;
        default: break;
    }

    ctx->pc = 0x1d1a80u;

    // 0x1d1a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1a8c: 0x8c8701ac  lw          $a3, 0x1AC($a0)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1d1a90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a9c: 0xc05a1ee  jal         func_1687B8
    ctx->pc = 0x1D1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AA4u);
    ctx->pc = 0x1D1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A9Cu;
            // 0x1d1aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1687B8u;
    if (runtime->hasFunction(0x1687B8u)) {
        auto targetFn = runtime->lookupFunction(0x1687B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AA4u; }
        if (ctx->pc != 0x1D1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001687B8_0x1687b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AA4u; }
        if (ctx->pc != 0x1D1AA4u) { return; }
    }
    ctx->pc = 0x1D1AA4u;
label_1d1aa4:
    // 0x1d1aa4: 0xc05a476  jal         func_1691D8
    ctx->pc = 0x1D1AA4u;
    SET_GPR_U32(ctx, 31, 0x1D1AACu);
    ctx->pc = 0x1D1AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AA4u;
            // 0x1d1aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1691D8u;
    if (runtime->hasFunction(0x1691D8u)) {
        auto targetFn = runtime->lookupFunction(0x1691D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AACu; }
        if (ctx->pc != 0x1D1AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001691D8_0x1691d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AACu; }
        if (ctx->pc != 0x1D1AACu) { return; }
    }
    ctx->pc = 0x1D1AACu;
label_1d1aac:
    // 0x1d1aac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1ab0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1AB0u;
    {
        const bool branch_taken_0x1d1ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1ab0) {
            ctx->pc = 0x1D1AD0u;
            goto label_1d1ad0;
        }
    }
    ctx->pc = 0x1D1AB8u;
    // 0x1d1ab8: 0xc05b774  jal         func_16DDD0
    ctx->pc = 0x1D1AB8u;
    SET_GPR_U32(ctx, 31, 0x1D1AC0u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC0u; }
        if (ctx->pc != 0x1D1AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC0u; }
        if (ctx->pc != 0x1D1AC0u) { return; }
    }
    ctx->pc = 0x1D1AC0u;
label_1d1ac0:
    // 0x1d1ac0: 0xc05b7c6  jal         func_16DF18
    ctx->pc = 0x1D1AC0u;
    SET_GPR_U32(ctx, 31, 0x1D1AC8u);
    ctx->pc = 0x16DF18u;
    if (runtime->hasFunction(0x16DF18u)) {
        auto targetFn = runtime->lookupFunction(0x16DF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC8u; }
        if (ctx->pc != 0x1D1AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DF18_0x16df18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC8u; }
        if (ctx->pc != 0x1D1AC8u) { return; }
    }
    ctx->pc = 0x1D1AC8u;
label_1d1ac8:
    // 0x1d1ac8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1D1AC8u;
    {
        const bool branch_taken_0x1d1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ac8) {
            ctx->pc = 0x1D1AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D1AD0u;
label_1d1ad0:
    // 0x1d1ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AD8u;
            // 0x1d1adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1AE0u;
}
