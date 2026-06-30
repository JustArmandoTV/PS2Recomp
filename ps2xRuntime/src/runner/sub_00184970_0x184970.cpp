#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184970
// Address: 0x184970 - 0x184988
void sub_00184970_0x184970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184970_0x184970");
#endif

    ctx->pc = 0x184970u;

    // 0x184970: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x184974: 0x24630248  addiu       $v1, $v1, 0x248
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 584));
    // 0x184978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18497c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x184980: 0x3e00008  jr          $ra
    ctx->pc = 0x184980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184980u;
            // 0x184984: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184988u;
}
