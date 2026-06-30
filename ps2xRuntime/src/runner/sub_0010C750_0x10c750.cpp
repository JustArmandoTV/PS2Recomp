#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C750
// Address: 0x10c750 - 0x10c760
void sub_0010C750_0x10c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C750_0x10c750");
#endif

    ctx->pc = 0x10c750u;

    // 0x10c750: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x10c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x10c754: 0xc  syscall     0
    ctx->pc = 0x10c754u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c758: 0x3e00008  jr          $ra
    ctx->pc = 0x10C758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C760u;
}
