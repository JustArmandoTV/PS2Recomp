#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C330
// Address: 0x15c330 - 0x15c340
void sub_0015C330_0x15c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C330_0x15c330");
#endif

    ctx->pc = 0x15c330u;

    // 0x15c330: 0x8056b14  j           func_15AC50
    ctx->pc = 0x15C330u;
    ctx->pc = 0x15C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C330u;
            // 0x15c334: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC50u;
    {
        auto targetFn = runtime->lookupFunction(0x15AC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15C338u;
    // 0x15c338: 0x0  nop
    ctx->pc = 0x15c338u;
    // NOP
    // 0x15c33c: 0x0  nop
    ctx->pc = 0x15c33cu;
    // NOP
}
