#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C700
// Address: 0x10c700 - 0x10c720
void sub_0010C700_0x10c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C700_0x10c700");
#endif

    ctx->pc = 0x10c700u;

    // 0x10c700: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x10c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10c704: 0xc  syscall     0
    ctx->pc = 0x10c704u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c708: 0x3e00008  jr          $ra
    ctx->pc = 0x10C708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C710u;
    // 0x10c710: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x10c714: 0xc  syscall     0
    ctx->pc = 0x10c714u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c718: 0x3e00008  jr          $ra
    ctx->pc = 0x10C718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C720u;
}
