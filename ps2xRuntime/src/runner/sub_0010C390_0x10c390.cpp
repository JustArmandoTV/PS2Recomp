#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C390
// Address: 0x10c390 - 0x10c3a0
void sub_0010C390_0x10c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C390_0x10c390");
#endif

    ctx->pc = 0x10c390u;

    // 0x10c390: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x10c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x10c394: 0xc  syscall     0
    ctx->pc = 0x10c394u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c398: 0x3e00008  jr          $ra
    ctx->pc = 0x10C398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C3A0u;
}
