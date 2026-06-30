#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198518
// Address: 0x198518 - 0x198530
void sub_00198518_0x198518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198518_0x198518");
#endif

    ctx->pc = 0x198518u;

    // 0x198518: 0x248203d4  addiu       $v0, $a0, 0x3D4
    ctx->pc = 0x198518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 980));
    // 0x19851c: 0xac8203ec  sw          $v0, 0x3EC($a0)
    ctx->pc = 0x19851cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1004), GPR_U32(ctx, 2));
    // 0x198520: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x198520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x198524: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x198524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x198528: 0x3e00008  jr          $ra
    ctx->pc = 0x198528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198528u;
            // 0x19852c: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198530u;
}
