#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475750
// Address: 0x475750 - 0x475760
void sub_00475750_0x475750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475750_0x475750");
#endif

    ctx->pc = 0x475750u;

    // 0x475750: 0x811d9a8  j           func_4766A0
    ctx->pc = 0x475750u;
    ctx->pc = 0x475754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475750u;
            // 0x475754: 0x248400ac  addiu       $a0, $a0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4766A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4766A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x475758u;
    // 0x475758: 0x0  nop
    ctx->pc = 0x475758u;
    // NOP
    // 0x47575c: 0x0  nop
    ctx->pc = 0x47575cu;
    // NOP
}
