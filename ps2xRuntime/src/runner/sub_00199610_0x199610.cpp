#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199610
// Address: 0x199610 - 0x199630
void sub_00199610_0x199610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199610_0x199610");
#endif

    switch (ctx->pc) {
        case 0x199620u: goto label_199620;
        default: break;
    }

    ctx->pc = 0x199610u;

    // 0x199610: 0x8c820474  lw          $v0, 0x474($a0)
    ctx->pc = 0x199610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x199614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199618: 0x3e00008  jr          $ra
    ctx->pc = 0x199618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199618u;
            // 0x19961c: 0xac820474  sw          $v0, 0x474($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199620u;
label_199620:
    // 0x199620: 0x8c820474  lw          $v0, 0x474($a0)
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x199624: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199628: 0x3e00008  jr          $ra
    ctx->pc = 0x199628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199628u;
            // 0x19962c: 0xac820474  sw          $v0, 0x474($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199630u;
}
