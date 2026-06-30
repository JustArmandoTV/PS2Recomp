#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA60
// Address: 0x1dca60 - 0x1dca70
void sub_001DCA60_0x1dca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA60_0x1dca60");
#endif

    ctx->pc = 0x1dca60u;

    // 0x1dca60: 0x80c7550  j           func_31D540
    ctx->pc = 0x1DCA60u;
    ctx->pc = 0x1DCA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA60u;
            // 0x1dca64: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D540u;
    if (runtime->hasFunction(0x31D540u)) {
        auto targetFn = runtime->lookupFunction(0x31D540u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D540_0x31d540(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DCA68u;
    // 0x1dca68: 0x0  nop
    ctx->pc = 0x1dca68u;
    // NOP
    // 0x1dca6c: 0x0  nop
    ctx->pc = 0x1dca6cu;
    // NOP
}
