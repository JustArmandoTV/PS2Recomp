#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C130
// Address: 0x10c130 - 0x10c160
void sub_0010C130_0x10c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C130_0x10c130");
#endif

    ctx->pc = 0x10c130u;

    // 0x10c130: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x10c134: 0xc  syscall     0
    ctx->pc = 0x10c134u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c138: 0x3e00008  jr          $ra
    ctx->pc = 0x10C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C140u;
    // 0x10c140: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x10c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x10c144: 0xc  syscall     0
    ctx->pc = 0x10c144u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c148: 0x3e00008  jr          $ra
    ctx->pc = 0x10C148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C150u;
    // 0x10c150: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x10c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x10c154: 0xc  syscall     0
    ctx->pc = 0x10c154u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c158: 0x3e00008  jr          $ra
    ctx->pc = 0x10C158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C160u;
}
