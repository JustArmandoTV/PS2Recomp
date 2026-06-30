#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133010
// Address: 0x133010 - 0x133020
void sub_00133010_0x133010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133010_0x133010");
#endif

    ctx->pc = 0x133010u;

    // 0x133010: 0x80517bc  j           func_145EF0
    ctx->pc = 0x133010u;
    ctx->pc = 0x133014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133010u;
            // 0x133014: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145EF0_0x145ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x133018u;
    // 0x133018: 0x0  nop
    ctx->pc = 0x133018u;
    // NOP
    // 0x13301c: 0x0  nop
    ctx->pc = 0x13301cu;
    // NOP
}
