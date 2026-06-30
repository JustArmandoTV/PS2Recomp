#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C1B0
// Address: 0x10c1b0 - 0x10c1f0
void sub_0010C1B0_0x10c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C1B0_0x10c1b0");
#endif

    ctx->pc = 0x10c1b0u;

    // 0x10c1b0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x10c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x10c1b4: 0xc  syscall     0
    ctx->pc = 0x10c1b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1C0u;
    // 0x10c1c0: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x10c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x10c1c4: 0xc  syscall     0
    ctx->pc = 0x10c1c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1D0u;
    // 0x10c1d0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x10c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x10c1d4: 0xc  syscall     0
    ctx->pc = 0x10c1d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1E0u;
    // 0x10c1e0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x10c1e4: 0xc  syscall     0
    ctx->pc = 0x10c1e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1F0u;
}
