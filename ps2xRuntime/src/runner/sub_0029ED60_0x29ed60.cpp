#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029ED60
// Address: 0x29ed60 - 0x29eda0
void sub_0029ED60_0x29ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED60_0x29ed60");
#endif

    switch (ctx->pc) {
        case 0x29ed70u: goto label_29ed70;
        default: break;
    }

    ctx->pc = 0x29ed60u;

    // 0x29ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ED68u;
    // 0x29ed68: 0x0  nop
    ctx->pc = 0x29ed68u;
    // NOP
    // 0x29ed6c: 0x0  nop
    ctx->pc = 0x29ed6cu;
    // NOP
label_29ed70:
    // 0x29ed70: 0x0  nop
    ctx->pc = 0x29ed70u;
    // NOP
    // 0x29ed74: 0x0  nop
    ctx->pc = 0x29ed74u;
    // NOP
    // 0x29ed78: 0x0  nop
    ctx->pc = 0x29ed78u;
    // NOP
    // 0x29ed7c: 0x0  nop
    ctx->pc = 0x29ed7cu;
    // NOP
    // 0x29ed80: 0x0  nop
    ctx->pc = 0x29ed80u;
    // NOP
    // 0x29ed84: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x29ED84u;
    {
        const bool branch_taken_0x29ed84 = (false);
        if (branch_taken_0x29ed84) {
            ctx->pc = 0x29ED70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ed70;
        }
    }
    ctx->pc = 0x29ED8Cu;
    // 0x29ed8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ED94u;
    // 0x29ed94: 0x0  nop
    ctx->pc = 0x29ed94u;
    // NOP
    // 0x29ed98: 0x0  nop
    ctx->pc = 0x29ed98u;
    // NOP
    // 0x29ed9c: 0x0  nop
    ctx->pc = 0x29ed9cu;
    // NOP
}
