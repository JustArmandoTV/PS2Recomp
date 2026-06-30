#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C790
// Address: 0x10c790 - 0x10c7c0
void sub_0010C790_0x10c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C790_0x10c790");
#endif

    ctx->pc = 0x10c790u;

    // 0x10c790: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x10c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x10c794: 0xc  syscall     0
    ctx->pc = 0x10c794u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c798: 0x3e00008  jr          $ra
    ctx->pc = 0x10C798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C7A0u;
    // 0x10c7a0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x10c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x10c7a4: 0xc  syscall     0
    ctx->pc = 0x10c7a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C7B0u;
    // 0x10c7b0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x10c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x10c7b4: 0xc  syscall     0
    ctx->pc = 0x10c7b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C7C0u;
}
