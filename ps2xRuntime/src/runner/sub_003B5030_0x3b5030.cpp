#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5030
// Address: 0x3b5030 - 0x3b5040
void sub_003B5030_0x3b5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5030_0x3b5030");
#endif

    ctx->pc = 0x3b5030u;

    // 0x3b5030: 0x804cce8  j           func_1333A0
    ctx->pc = 0x3B5030u;
    ctx->pc = 0x3B5034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5030u;
            // 0x3b5034: 0x24840ba0  addiu       $a0, $a0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001333A0_0x1333a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B5038u;
    // 0x3b5038: 0x0  nop
    ctx->pc = 0x3b5038u;
    // NOP
    // 0x3b503c: 0x0  nop
    ctx->pc = 0x3b503cu;
    // NOP
}
