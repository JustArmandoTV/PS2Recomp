#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348D20
// Address: 0x348d20 - 0x348d30
void sub_00348D20_0x348d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D20_0x348d20");
#endif

    ctx->pc = 0x348d20u;

    // 0x348d20: 0x80d2604  j           func_349810
    ctx->pc = 0x348D20u;
    ctx->pc = 0x348D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348D20u;
            // 0x348d24: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x349810u;
    {
        auto targetFn = runtime->lookupFunction(0x349810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x348D28u;
    // 0x348d28: 0x0  nop
    ctx->pc = 0x348d28u;
    // NOP
    // 0x348d2c: 0x0  nop
    ctx->pc = 0x348d2cu;
    // NOP
}
