#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003321D0
// Address: 0x3321d0 - 0x3321e0
void sub_003321D0_0x3321d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003321D0_0x3321d0");
#endif

    ctx->pc = 0x3321d0u;

    // 0x3321d0: 0x24840758  addiu       $a0, $a0, 0x758
    ctx->pc = 0x3321d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
    // 0x3321d4: 0x804a508  j           func_129420
    ctx->pc = 0x3321D4u;
    ctx->pc = 0x3321D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3321D4u;
            // 0x3321d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3321DCu;
    // 0x3321dc: 0x0  nop
    ctx->pc = 0x3321dcu;
    // NOP
}
