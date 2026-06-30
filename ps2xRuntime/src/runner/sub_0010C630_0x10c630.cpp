#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C630
// Address: 0x10c630 - 0x10c670
void sub_0010C630_0x10c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C630_0x10c630");
#endif

    ctx->pc = 0x10c630u;

    // 0x10c630: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x10c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x10c634: 0xc  syscall     0
    ctx->pc = 0x10c634u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c638: 0x3e00008  jr          $ra
    ctx->pc = 0x10C638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C640u;
    // 0x10c640: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x10c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x10c644: 0xc  syscall     0
    ctx->pc = 0x10c644u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c648: 0x3e00008  jr          $ra
    ctx->pc = 0x10C648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C650u;
    // 0x10c650: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x10c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x10c654: 0xc  syscall     0
    ctx->pc = 0x10c654u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c658: 0x3e00008  jr          $ra
    ctx->pc = 0x10C658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C660u;
    // 0x10c660: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x10c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x10c664: 0xc  syscall     0
    ctx->pc = 0x10c664u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c668: 0x3e00008  jr          $ra
    ctx->pc = 0x10C668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C670u;
}
