#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C680
// Address: 0x10c680 - 0x10c690
void sub_0010C680_0x10c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C680_0x10c680");
#endif

    ctx->pc = 0x10c680u;

    // 0x10c680: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10c684: 0xc  syscall     0
    ctx->pc = 0x10c684u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c688: 0x3e00008  jr          $ra
    ctx->pc = 0x10C688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C690u;
}
