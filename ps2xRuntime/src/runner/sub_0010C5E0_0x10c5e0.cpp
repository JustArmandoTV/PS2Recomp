#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C5E0
// Address: 0x10c5e0 - 0x10c610
void sub_0010C5E0_0x10c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C5E0_0x10c5e0");
#endif

    ctx->pc = 0x10c5e0u;

    // 0x10c5e0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x10c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10c5e4: 0xc  syscall     0
    ctx->pc = 0x10c5e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5F0u;
    // 0x10c5f0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x10c5f4: 0xc  syscall     0
    ctx->pc = 0x10c5f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C600u;
    // 0x10c600: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x10c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x10c604: 0xc  syscall     0
    ctx->pc = 0x10c604u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c608: 0x3e00008  jr          $ra
    ctx->pc = 0x10C608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C610u;
}
