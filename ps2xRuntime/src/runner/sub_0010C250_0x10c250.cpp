#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C250
// Address: 0x10c250 - 0x10c260
void sub_0010C250_0x10c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C250_0x10c250");
#endif

    ctx->pc = 0x10c250u;

    // 0x10c250: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x10c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x10c254: 0xc  syscall     0
    ctx->pc = 0x10c254u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c258: 0x3e00008  jr          $ra
    ctx->pc = 0x10C258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C260u;
}
