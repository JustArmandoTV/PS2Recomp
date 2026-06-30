#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C6D0
// Address: 0x10c6d0 - 0x10c700
void sub_0010C6D0_0x10c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C6D0_0x10c6d0");
#endif

    ctx->pc = 0x10c6d0u;

    // 0x10c6d0: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x10c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x10c6d4: 0xc  syscall     0
    ctx->pc = 0x10c6d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C6E0u;
    // 0x10c6e0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x10c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x10c6e4: 0xc  syscall     0
    ctx->pc = 0x10c6e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C6F0u;
    // 0x10c6f0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x10c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x10c6f4: 0xc  syscall     0
    ctx->pc = 0x10c6f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C700u;
}
