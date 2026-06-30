#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C270
// Address: 0x10c270 - 0x10c280
void sub_0010C270_0x10c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C270_0x10c270");
#endif

    ctx->pc = 0x10c270u;

    // 0x10c270: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x10c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x10c274: 0xc  syscall     0
    ctx->pc = 0x10c274u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c278: 0x3e00008  jr          $ra
    ctx->pc = 0x10C278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C280u;
}
