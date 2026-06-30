#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C2A0
// Address: 0x10c2a0 - 0x10c2d0
void sub_0010C2A0_0x10c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C2A0_0x10c2a0");
#endif

    ctx->pc = 0x10c2a0u;

    // 0x10c2a0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x10c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x10c2a4: 0xc  syscall     0
    ctx->pc = 0x10c2a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C2B0u;
    // 0x10c2b0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10c2b4: 0xc  syscall     0
    ctx->pc = 0x10c2b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C2C0u;
    // 0x10c2c0: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x10c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x10c2c4: 0xc  syscall     0
    ctx->pc = 0x10c2c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C2D0u;
}
