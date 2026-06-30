#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C610
// Address: 0x10c610 - 0x10c630
void sub_0010C610_0x10c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C610_0x10c610");
#endif

    ctx->pc = 0x10c610u;

    // 0x10c610: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x10c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x10c614: 0xc  syscall     0
    ctx->pc = 0x10c614u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c618: 0x3e00008  jr          $ra
    ctx->pc = 0x10C618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C620u;
    // 0x10c620: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x10c620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x10c624: 0xc  syscall     0
    ctx->pc = 0x10c624u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c628: 0x3e00008  jr          $ra
    ctx->pc = 0x10C628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C630u;
}
