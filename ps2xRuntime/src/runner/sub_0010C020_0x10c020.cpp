#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C020
// Address: 0x10c020 - 0x10c040
void sub_0010C020_0x10c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C020_0x10c020");
#endif

    ctx->pc = 0x10c020u;

    // 0x10c020: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10c024: 0xc  syscall     0
    ctx->pc = 0x10c024u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c028: 0x3e00008  jr          $ra
    ctx->pc = 0x10C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C030u;
    // 0x10c030: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10c034: 0xc  syscall     0
    ctx->pc = 0x10c034u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c038: 0x3e00008  jr          $ra
    ctx->pc = 0x10C038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C040u;
}
