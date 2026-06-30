#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C0D0
// Address: 0x10c0d0 - 0x10c100
void sub_0010C0D0_0x10c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C0D0_0x10c0d0");
#endif

    ctx->pc = 0x10c0d0u;

    // 0x10c0d0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x10c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10c0d4: 0xc  syscall     0
    ctx->pc = 0x10c0d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C0E0u;
    // 0x10c0e0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x10c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x10c0e4: 0xc  syscall     0
    ctx->pc = 0x10c0e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C0F0u;
    // 0x10c0f0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x10c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x10c0f4: 0xc  syscall     0
    ctx->pc = 0x10c0f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C100u;
}
