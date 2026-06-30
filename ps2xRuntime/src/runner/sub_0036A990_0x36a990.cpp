#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A990
// Address: 0x36a990 - 0x36a9b0
void sub_0036A990_0x36a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A990_0x36a990");
#endif

    ctx->pc = 0x36a990u;

    // 0x36a990: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a994: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a998: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x36a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x36a99c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x36a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36a9a4: 0x8074ea0  j           func_1D3A80
    ctx->pc = 0x36A9A4u;
    ctx->pc = 0x36A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A9A4u;
            // 0x36a9a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36A9ACu;
    // 0x36a9ac: 0x0  nop
    ctx->pc = 0x36a9acu;
    // NOP
}
