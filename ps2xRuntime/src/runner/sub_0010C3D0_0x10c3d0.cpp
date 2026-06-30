#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C3D0
// Address: 0x10c3d0 - 0x10c400
void sub_0010C3D0_0x10c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C3D0_0x10c3d0");
#endif

    ctx->pc = 0x10c3d0u;

    // 0x10c3d0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x10c3d4: 0xc  syscall     0
    ctx->pc = 0x10c3d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C3E0u;
    // 0x10c3e0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x10c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x10c3e4: 0xc  syscall     0
    ctx->pc = 0x10c3e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C3F0u;
    // 0x10c3f0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10c3f4: 0xc  syscall     0
    ctx->pc = 0x10c3f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C400u;
}
