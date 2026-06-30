#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050ADF0
// Address: 0x50adf0 - 0x50ae00
void sub_0050ADF0_0x50adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050ADF0_0x50adf0");
#endif

    ctx->pc = 0x50adf0u;

    // 0x50adf0: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x50adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x50adf4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x50adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x50adf8: 0x804a508  j           func_129420
    ctx->pc = 0x50ADF8u;
    ctx->pc = 0x50ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ADF8u;
            // 0x50adfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x50AE00u;
}
