#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301740
// Address: 0x301740 - 0x301750
void sub_00301740_0x301740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301740_0x301740");
#endif

    ctx->pc = 0x301740u;

    // 0x301740: 0x80b9210  j           func_2E4840
    ctx->pc = 0x301740u;
    ctx->pc = 0x301744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301740u;
            // 0x301744: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4840_0x2e4840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x301748u;
    // 0x301748: 0x0  nop
    ctx->pc = 0x301748u;
    // NOP
    // 0x30174c: 0x0  nop
    ctx->pc = 0x30174cu;
    // NOP
}
