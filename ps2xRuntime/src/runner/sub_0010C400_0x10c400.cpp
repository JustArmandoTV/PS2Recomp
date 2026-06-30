#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C400
// Address: 0x10c400 - 0x10c410
void sub_0010C400_0x10c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C400_0x10c400");
#endif

    ctx->pc = 0x10c400u;

    // 0x10c400: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x10c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10c404: 0xc  syscall     0
    ctx->pc = 0x10c404u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c408: 0x3e00008  jr          $ra
    ctx->pc = 0x10C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C410u;
}
