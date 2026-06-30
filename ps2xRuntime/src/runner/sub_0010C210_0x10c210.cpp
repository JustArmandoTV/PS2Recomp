#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C210
// Address: 0x10c210 - 0x10c250
void sub_0010C210_0x10c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C210_0x10c210");
#endif

    ctx->pc = 0x10c210u;

    // 0x10c210: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x10c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x10c214: 0xc  syscall     0
    ctx->pc = 0x10c214u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c218: 0x3e00008  jr          $ra
    ctx->pc = 0x10C218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C220u;
    // 0x10c220: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x10c220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10c224: 0xc  syscall     0
    ctx->pc = 0x10c224u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c228: 0x3e00008  jr          $ra
    ctx->pc = 0x10C228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C230u;
    // 0x10c230: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x10c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x10c234: 0xc  syscall     0
    ctx->pc = 0x10c234u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c238: 0x3e00008  jr          $ra
    ctx->pc = 0x10C238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C240u;
    // 0x10c240: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x10c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x10c244: 0xc  syscall     0
    ctx->pc = 0x10c244u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c248: 0x3e00008  jr          $ra
    ctx->pc = 0x10C248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C250u;
}
