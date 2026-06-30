#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C180
// Address: 0x10c180 - 0x10c1a0
void sub_0010C180_0x10c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C180_0x10c180");
#endif

    ctx->pc = 0x10c180u;

    // 0x10c180: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x10c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10c184: 0xc  syscall     0
    ctx->pc = 0x10c184u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c188: 0x3e00008  jr          $ra
    ctx->pc = 0x10C188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C190u;
    // 0x10c190: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x10c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x10c194: 0xc  syscall     0
    ctx->pc = 0x10c194u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c198: 0x3e00008  jr          $ra
    ctx->pc = 0x10C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C1A0u;
}
