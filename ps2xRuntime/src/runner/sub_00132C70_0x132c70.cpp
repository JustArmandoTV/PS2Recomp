#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132C70
// Address: 0x132c70 - 0x132c80
void sub_00132C70_0x132c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132C70_0x132c70");
#endif

    ctx->pc = 0x132c70u;

    // 0x132c70: 0x80517bc  j           func_145EF0
    ctx->pc = 0x132C70u;
    ctx->pc = 0x132C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132C70u;
            // 0x132c74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145EF0_0x145ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x132C78u;
    // 0x132c78: 0x0  nop
    ctx->pc = 0x132c78u;
    // NOP
    // 0x132c7c: 0x0  nop
    ctx->pc = 0x132c7cu;
    // NOP
}
