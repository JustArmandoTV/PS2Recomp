#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116CD0
// Address: 0x116cd0 - 0x116ce0
void sub_00116CD0_0x116cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116CD0_0x116cd0");
#endif

    ctx->pc = 0x116cd0u;

    // 0x116cd0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x116cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x116cd4: 0xc  syscall     0
    ctx->pc = 0x116cd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x116CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116CE0u;
}
