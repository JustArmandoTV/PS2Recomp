#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4000
// Address: 0x3e4000 - 0x3e4010
void sub_003E4000_0x3e4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4000_0x3e4000");
#endif

    ctx->pc = 0x3e4000u;

    // 0x3e4000: 0x805d7c2  j           func_175F08
    ctx->pc = 0x3E4000u;
    ctx->pc = 0x3E4004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4000u;
            // 0x3e4004: 0x8c840194  lw          $a0, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175F08_0x175f08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E4008u;
    // 0x3e4008: 0x0  nop
    ctx->pc = 0x3e4008u;
    // NOP
    // 0x3e400c: 0x0  nop
    ctx->pc = 0x3e400cu;
    // NOP
}
