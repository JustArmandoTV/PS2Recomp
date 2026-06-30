#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046EDB0
// Address: 0x46edb0 - 0x46edc0
void sub_0046EDB0_0x46edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EDB0_0x46edb0");
#endif

    ctx->pc = 0x46edb0u;

    // 0x46edb0: 0x80b90e0  j           func_2E4380
    ctx->pc = 0x46EDB0u;
    ctx->pc = 0x46EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EDB0u;
            // 0x46edb4: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4380_0x2e4380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x46EDB8u;
    // 0x46edb8: 0x0  nop
    ctx->pc = 0x46edb8u;
    // NOP
    // 0x46edbc: 0x0  nop
    ctx->pc = 0x46edbcu;
    // NOP
}
