#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C2F0
// Address: 0x10c2f0 - 0x10c340
void sub_0010C2F0_0x10c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C2F0_0x10c2f0");
#endif

    ctx->pc = 0x10c2f0u;

    // 0x10c2f0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x10c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10c2f4: 0xc  syscall     0
    ctx->pc = 0x10c2f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C300u;
    // 0x10c300: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x10c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x10c304: 0xc  syscall     0
    ctx->pc = 0x10c304u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c308: 0x3e00008  jr          $ra
    ctx->pc = 0x10C308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C310u;
    // 0x10c310: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x10c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x10c314: 0xc  syscall     0
    ctx->pc = 0x10c314u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c318: 0x3e00008  jr          $ra
    ctx->pc = 0x10C318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C320u;
    // 0x10c320: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10c324: 0xc  syscall     0
    ctx->pc = 0x10c324u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c328: 0x3e00008  jr          $ra
    ctx->pc = 0x10C328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C330u;
    // 0x10c330: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x10c330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x10c334: 0xc  syscall     0
    ctx->pc = 0x10c334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c338: 0x3e00008  jr          $ra
    ctx->pc = 0x10C338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C340u;
}
