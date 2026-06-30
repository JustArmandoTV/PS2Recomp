#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3D00
// Address: 0x2f3d00 - 0x2f3d10
void sub_002F3D00_0x2f3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D00_0x2f3d00");
#endif

    ctx->pc = 0x2f3d00u;

    // 0x2f3d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D00u;
            // 0x2f3d04: 0x9082007c  lbu         $v0, 0x7C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3D08u;
    // 0x2f3d08: 0x0  nop
    ctx->pc = 0x2f3d08u;
    // NOP
    // 0x2f3d0c: 0x0  nop
    ctx->pc = 0x2f3d0cu;
    // NOP
}
