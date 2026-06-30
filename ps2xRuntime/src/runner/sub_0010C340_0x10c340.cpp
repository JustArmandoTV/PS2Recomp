#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C340
// Address: 0x10c340 - 0x10c360
void sub_0010C340_0x10c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C340_0x10c340");
#endif

    ctx->pc = 0x10c340u;

    // 0x10c340: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x10c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x10c344: 0xc  syscall     0
    ctx->pc = 0x10c344u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c348: 0x3e00008  jr          $ra
    ctx->pc = 0x10C348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C350u;
    // 0x10c350: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10c354: 0xc  syscall     0
    ctx->pc = 0x10c354u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c358: 0x3e00008  jr          $ra
    ctx->pc = 0x10C358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C360u;
}
