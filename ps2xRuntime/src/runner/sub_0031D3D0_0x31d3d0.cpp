#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D3D0
// Address: 0x31d3d0 - 0x31d3e0
void sub_0031D3D0_0x31d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D3D0_0x31d3d0");
#endif

    ctx->pc = 0x31d3d0u;

    // 0x31d3d0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x31d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x31d3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31D3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D3D4u;
            // 0x31d3d8: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D3DCu;
    // 0x31d3dc: 0x0  nop
    ctx->pc = 0x31d3dcu;
    // NOP
}
