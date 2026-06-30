#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B100
// Address: 0x50b100 - 0x50b110
void sub_0050B100_0x50b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B100_0x50b100");
#endif

    ctx->pc = 0x50b100u;

    // 0x50b100: 0x8142e54  j           func_50B950
    ctx->pc = 0x50B100u;
    ctx->pc = 0x50B104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B100u;
            // 0x50b104: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B950u;
    {
        auto targetFn = runtime->lookupFunction(0x50B950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x50B108u;
    // 0x50b108: 0x0  nop
    ctx->pc = 0x50b108u;
    // NOP
    // 0x50b10c: 0x0  nop
    ctx->pc = 0x50b10cu;
    // NOP
}
