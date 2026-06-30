#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181D68
// Address: 0x181d68 - 0x181d80
void sub_00181D68_0x181d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D68_0x181d68");
#endif

    ctx->pc = 0x181d68u;

    // 0x181d68: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x181d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x181d6c: 0x2463bf18  addiu       $v1, $v1, -0x40E8
    ctx->pc = 0x181d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950680));
    // 0x181d70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181d74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181d78: 0x3e00008  jr          $ra
    ctx->pc = 0x181D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D78u;
            // 0x181d7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181D80u;
}
