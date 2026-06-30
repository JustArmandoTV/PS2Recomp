#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E9C0
// Address: 0x16e9c0 - 0x16e9d8
void sub_0016E9C0_0x16e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E9C0_0x16e9c0");
#endif

    ctx->pc = 0x16e9c0u;

    // 0x16e9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9cc: 0x8060f9a  j           func_183E68
    ctx->pc = 0x16E9CCu;
    ctx->pc = 0x16E9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9CCu;
            // 0x16e9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E68u;
    if (runtime->hasFunction(0x183E68u)) {
        auto targetFn = runtime->lookupFunction(0x183E68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00183E68_0x183e68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E9D4u;
    // 0x16e9d4: 0x0  nop
    ctx->pc = 0x16e9d4u;
    // NOP
}
