#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144BC0
// Address: 0x144bc0 - 0x144bd0
void sub_00144BC0_0x144bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144BC0_0x144bc0");
#endif

    ctx->pc = 0x144bc0u;

    // 0x144bc0: 0x805717c  j           func_15C5F0
    ctx->pc = 0x144BC0u;
    ctx->pc = 0x144BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BC0u;
            // 0x144bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5F0u;
    {
        auto targetFn = runtime->lookupFunction(0x15C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x144BC8u;
    // 0x144bc8: 0x0  nop
    ctx->pc = 0x144bc8u;
    // NOP
    // 0x144bcc: 0x0  nop
    ctx->pc = 0x144bccu;
    // NOP
}
