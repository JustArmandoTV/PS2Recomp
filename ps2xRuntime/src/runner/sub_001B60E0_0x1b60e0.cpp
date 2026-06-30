#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B60E0
// Address: 0x1b60e0 - 0x1b6120
void sub_001B60E0_0x1b60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B60E0_0x1b60e0");
#endif

    switch (ctx->pc) {
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6110u: goto label_1b6110;
        default: break;
    }

    ctx->pc = 0x1b60e0u;

    // 0x1b60e0: 0xac850d4c  sw          $a1, 0xD4C($a0)
    ctx->pc = 0x1b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3404), GPR_U32(ctx, 5));
    // 0x1b60e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60E4u;
            // 0x1b60e8: 0xac860d50  sw          $a2, 0xD50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60ECu;
    // 0x1b60ec: 0x0  nop
    ctx->pc = 0x1b60ecu;
    // NOP
label_1b60f0:
    // 0x1b60f0: 0xac850d6c  sw          $a1, 0xD6C($a0)
    ctx->pc = 0x1b60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3436), GPR_U32(ctx, 5));
    // 0x1b60f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60F4u;
            // 0x1b60f8: 0xac860d70  sw          $a2, 0xD70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3440), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60FCu;
    // 0x1b60fc: 0x0  nop
    ctx->pc = 0x1b60fcu;
    // NOP
label_1b6100:
    // 0x1b6100: 0xac850d2c  sw          $a1, 0xD2C($a0)
    ctx->pc = 0x1b6100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 5));
    // 0x1b6104: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6104u;
            // 0x1b6108: 0xac860d30  sw          $a2, 0xD30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B610Cu;
    // 0x1b610c: 0x0  nop
    ctx->pc = 0x1b610cu;
    // NOP
label_1b6110:
    // 0x1b6110: 0xac860d84  sw          $a2, 0xD84($a0)
    ctx->pc = 0x1b6110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3460), GPR_U32(ctx, 6));
    // 0x1b6114: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6114u;
            // 0x1b6118: 0xac850d80  sw          $a1, 0xD80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3456), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B611Cu;
    // 0x1b611c: 0x0  nop
    ctx->pc = 0x1b611cu;
    // NOP
}
