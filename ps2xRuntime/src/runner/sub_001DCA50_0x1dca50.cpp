#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA50
// Address: 0x1dca50 - 0x1dca60
void sub_001DCA50_0x1dca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA50_0x1dca50");
#endif

    ctx->pc = 0x1dca50u;

    // 0x1dca50: 0x90830e3d  lbu         $v1, 0xE3D($a0)
    ctx->pc = 0x1dca50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3645)));
    // 0x1dca54: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1dca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1dca58: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA58u;
            // 0x1dca5c: 0xa0830e3d  sb          $v1, 0xE3D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3645), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA60u;
}
