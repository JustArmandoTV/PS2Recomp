#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166748
// Address: 0x166748 - 0x166760
void sub_00166748_0x166748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166748_0x166748");
#endif

    ctx->pc = 0x166748u;

    // 0x166748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16674c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166754: 0x8061f74  j           func_187DD0
    ctx->pc = 0x166754u;
    ctx->pc = 0x166758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166754u;
            // 0x166758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DD0_0x187dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16675Cu;
    // 0x16675c: 0x0  nop
    ctx->pc = 0x16675cu;
    // NOP
}
