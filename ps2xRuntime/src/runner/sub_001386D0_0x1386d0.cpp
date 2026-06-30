#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001386D0
// Address: 0x1386d0 - 0x1386e0
void sub_001386D0_0x1386d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386D0_0x1386d0");
#endif

    ctx->pc = 0x1386d0u;

    // 0x1386d0: 0x804cce8  j           func_1333A0
    ctx->pc = 0x1386D0u;
    ctx->pc = 0x1386D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386D0u;
            // 0x1386d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001333A0_0x1333a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1386D8u;
    // 0x1386d8: 0x0  nop
    ctx->pc = 0x1386d8u;
    // NOP
    // 0x1386dc: 0x0  nop
    ctx->pc = 0x1386dcu;
    // NOP
}
