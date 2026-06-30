#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C1A0
// Address: 0x10c1a0 - 0x10c1b0
void sub_0010C1A0_0x10c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C1A0_0x10c1a0");
#endif

    ctx->pc = 0x10c1a0u;

    // 0x10c1a0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x10c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x10c1a4: 0xc  syscall     0
    ctx->pc = 0x10c1a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1B0u;
}
