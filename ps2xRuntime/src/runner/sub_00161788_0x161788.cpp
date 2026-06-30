#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161788
// Address: 0x161788 - 0x1617a0
void sub_00161788_0x161788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161788_0x161788");
#endif

    ctx->pc = 0x161788u;

    // 0x161788: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x161788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x16178c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x16178cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x161790: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x161790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x161794: 0x3e00008  jr          $ra
    ctx->pc = 0x161794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161794u;
            // 0x161798: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16179Cu;
    // 0x16179c: 0x0  nop
    ctx->pc = 0x16179cu;
    // NOP
}
