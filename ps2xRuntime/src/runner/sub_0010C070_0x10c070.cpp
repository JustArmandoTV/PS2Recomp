#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C070
// Address: 0x10c070 - 0x10c080
void sub_0010C070_0x10c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C070_0x10c070");
#endif

    ctx->pc = 0x10c070u;

    // 0x10c070: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x10c074: 0xc  syscall     0
    ctx->pc = 0x10c074u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c078: 0x3e00008  jr          $ra
    ctx->pc = 0x10C078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C080u;
}
