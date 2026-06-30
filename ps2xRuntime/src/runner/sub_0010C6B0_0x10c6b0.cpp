#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C6B0
// Address: 0x10c6b0 - 0x10c6d0
void sub_0010C6B0_0x10c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C6B0_0x10c6b0");
#endif

    ctx->pc = 0x10c6b0u;

    // 0x10c6b0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x10c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x10c6b4: 0xc  syscall     0
    ctx->pc = 0x10c6b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C6C0u;
    // 0x10c6c0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x10c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x10c6c4: 0xc  syscall     0
    ctx->pc = 0x10c6c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C6D0u;
}
