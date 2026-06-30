#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C770
// Address: 0x10c770 - 0x10c790
void sub_0010C770_0x10c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C770_0x10c770");
#endif

    switch (ctx->pc) {
        case 0x10c780u: goto label_10c780;
        default: break;
    }

    ctx->pc = 0x10c770u;

    // 0x10c770: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x10c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x10c774: 0xc  syscall     0
    ctx->pc = 0x10c774u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c778: 0x3e00008  jr          $ra
    ctx->pc = 0x10C778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C780u;
label_10c780:
    // 0x10c780: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x10c780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x10c784: 0xc  syscall     0
    ctx->pc = 0x10c784u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c788: 0x3e00008  jr          $ra
    ctx->pc = 0x10C788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C790u;
}
