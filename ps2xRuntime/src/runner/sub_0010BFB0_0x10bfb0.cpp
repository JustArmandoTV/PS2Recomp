#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010BFB0
// Address: 0x10bfb0 - 0x10c010
void sub_0010BFB0_0x10bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFB0_0x10bfb0");
#endif

    ctx->pc = 0x10bfb0u;

    // 0x10bfb0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10bfb4: 0xc  syscall     0
    ctx->pc = 0x10bfb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFC0u;
    // 0x10bfc0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10bfc4: 0xc  syscall     0
    ctx->pc = 0x10bfc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFD0u;
    // 0x10bfd0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x10bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10bfd4: 0xc  syscall     0
    ctx->pc = 0x10bfd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFE0u;
    // 0x10bfe0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10bfe4: 0xc  syscall     0
    ctx->pc = 0x10bfe4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10bfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFF0u;
    // 0x10bff0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10bff4: 0xc  syscall     0
    ctx->pc = 0x10bff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C000u;
    // 0x10c000: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10c004: 0xc  syscall     0
    ctx->pc = 0x10c004u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c008: 0x3e00008  jr          $ra
    ctx->pc = 0x10C008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C010u;
}
