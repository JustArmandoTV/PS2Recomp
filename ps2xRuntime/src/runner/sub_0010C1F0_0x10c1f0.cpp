#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C1F0
// Address: 0x10c1f0 - 0x10c210
void sub_0010C1F0_0x10c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C1F0_0x10c1f0");
#endif

    ctx->pc = 0x10c1f0u;

    // 0x10c1f0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x10c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x10c1f4: 0xc  syscall     0
    ctx->pc = 0x10c1f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C200u;
    // 0x10c200: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x10c204: 0xc  syscall     0
    ctx->pc = 0x10c204u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c208: 0x3e00008  jr          $ra
    ctx->pc = 0x10C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C210u;
}
