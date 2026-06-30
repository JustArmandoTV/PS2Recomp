#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7B10
// Address: 0x1d7b10 - 0x1d7b30
void sub_001D7B10_0x1d7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7B10_0x1d7b10");
#endif

    ctx->pc = 0x1d7b10u;

    // 0x1d7b10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d7b14: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1d7b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1d7b18: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x1d7b1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7b20: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1d7b24: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d7b28: 0x804cce8  j           func_1333A0
    ctx->pc = 0x1D7B28u;
    ctx->pc = 0x1D7B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B28u;
            // 0x1d7b2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001333A0_0x1333a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D7B30u;
}
