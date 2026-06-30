#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001720D0
// Address: 0x1720d0 - 0x1720e8
void sub_001720D0_0x1720d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001720D0_0x1720d0");
#endif

    ctx->pc = 0x1720d0u;

    // 0x1720d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1720d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1720d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1720d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1720d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1720d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720dc: 0x80599d2  j           func_166748
    ctx->pc = 0x1720DCu;
    ctx->pc = 0x1720E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1720DCu;
            // 0x1720e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166748_0x166748(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1720E4u;
    // 0x1720e4: 0x0  nop
    ctx->pc = 0x1720e4u;
    // NOP
}
