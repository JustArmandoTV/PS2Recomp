#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCF40
// Address: 0x2dcf40 - 0x2dcfb0
void sub_002DCF40_0x2dcf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCF40_0x2dcf40");
#endif

    switch (ctx->pc) {
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf90u: goto label_2dcf90;
        default: break;
    }

    ctx->pc = 0x2dcf40u;

    // 0x2dcf40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dcf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dcf44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dcf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcf4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcf50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcf54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf58: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2dcf5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dcf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf60: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2dcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2dcf64: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x2dcf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x2dcf68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf6c: 0xc0bd5f8  jal         func_2F57E0
    ctx->pc = 0x2DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF74u);
    ctx->pc = 0x2DCF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF6Cu;
            // 0x2dcf70: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F57E0u;
    if (runtime->hasFunction(0x2F57E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F57E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF74u; }
        if (ctx->pc != 0x2DCF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F57E0_0x2f57e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF74u; }
        if (ctx->pc != 0x2DCF74u) { return; }
    }
    ctx->pc = 0x2DCF74u;
label_2dcf74:
    // 0x2dcf74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dcf78: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2dcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2dcf7c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2dcf80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf88: 0xc0bd5f8  jal         func_2F57E0
    ctx->pc = 0x2DCF88u;
    SET_GPR_U32(ctx, 31, 0x2DCF90u);
    ctx->pc = 0x2DCF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF88u;
            // 0x2dcf8c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F57E0u;
    if (runtime->hasFunction(0x2F57E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F57E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF90u; }
        if (ctx->pc != 0x2DCF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F57E0_0x2f57e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF90u; }
        if (ctx->pc != 0x2DCF90u) { return; }
    }
    ctx->pc = 0x2DCF90u;
label_2dcf90:
    // 0x2dcf90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcf94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF9Cu;
            // 0x2dcfa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCFA4u;
    // 0x2dcfa4: 0x0  nop
    ctx->pc = 0x2dcfa4u;
    // NOP
    // 0x2dcfa8: 0x0  nop
    ctx->pc = 0x2dcfa8u;
    // NOP
    // 0x2dcfac: 0x0  nop
    ctx->pc = 0x2dcfacu;
    // NOP
}
