#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116D28
// Address: 0x116d28 - 0x116d38
void sub_00116D28_0x116d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116D28_0x116d28");
#endif

    ctx->pc = 0x116d28u;

    // 0x116d28: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x116d2c: 0xc  syscall     0
    ctx->pc = 0x116d2cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116d30: 0x3e00008  jr          $ra
    ctx->pc = 0x116D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116D38u;
}
