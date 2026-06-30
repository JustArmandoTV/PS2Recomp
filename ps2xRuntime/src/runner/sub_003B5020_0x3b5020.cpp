#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5020
// Address: 0x3b5020 - 0x3b5030
void sub_003B5020_0x3b5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5020_0x3b5020");
#endif

    ctx->pc = 0x3b5020u;

    // 0x3b5020: 0x804cce8  j           func_1333A0
    ctx->pc = 0x3B5020u;
    ctx->pc = 0x3B5024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5020u;
            // 0x3b5024: 0x24840be0  addiu       $a0, $a0, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001333A0_0x1333a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B5028u;
    // 0x3b5028: 0x0  nop
    ctx->pc = 0x3b5028u;
    // NOP
    // 0x3b502c: 0x0  nop
    ctx->pc = 0x3b502cu;
    // NOP
}
