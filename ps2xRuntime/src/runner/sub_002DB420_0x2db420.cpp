#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB420
// Address: 0x2db420 - 0x2db450
void sub_002DB420_0x2db420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB420_0x2db420");
#endif

    ctx->pc = 0x2db420u;

    // 0x2db420: 0x908202c5  lbu         $v0, 0x2C5($a0)
    ctx->pc = 0x2db420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x2db424: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2db424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2db428: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2db428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2db42c: 0xa08202c5  sb          $v0, 0x2C5($a0)
    ctx->pc = 0x2db42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 709), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db430: 0x908202c5  lbu         $v0, 0x2C5($a0)
    ctx->pc = 0x2db430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x2db434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2db434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2db438: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2db438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2db43c: 0x804a508  j           func_129420
    ctx->pc = 0x2DB43Cu;
    ctx->pc = 0x2DB440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB43Cu;
            // 0x2db440: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DB444u;
    // 0x2db444: 0x0  nop
    ctx->pc = 0x2db444u;
    // NOP
    // 0x2db448: 0x0  nop
    ctx->pc = 0x2db448u;
    // NOP
    // 0x2db44c: 0x0  nop
    ctx->pc = 0x2db44cu;
    // NOP
}
