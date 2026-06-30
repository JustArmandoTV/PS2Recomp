#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C040
// Address: 0x10c040 - 0x10c050
void sub_0010C040_0x10c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C040_0x10c040");
#endif

    ctx->pc = 0x10c040u;

    // 0x10c040: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10c044: 0xc  syscall     0
    ctx->pc = 0x10c044u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c048: 0x3e00008  jr          $ra
    ctx->pc = 0x10C048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C050u;
}
