#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8270
// Address: 0x3d8270 - 0x3d8280
void sub_003D8270_0x3d8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8270_0x3d8270");
#endif

    ctx->pc = 0x3d8270u;

    // 0x3d8270: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8270u;
            // 0x3d8274: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8278u;
    // 0x3d8278: 0x0  nop
    ctx->pc = 0x3d8278u;
    // NOP
    // 0x3d827c: 0x0  nop
    ctx->pc = 0x3d827cu;
    // NOP
}
