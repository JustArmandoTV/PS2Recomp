#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6070
// Address: 0x1b6070 - 0x1b60e0
void sub_001B6070_0x1b6070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6070_0x1b6070");
#endif

    switch (ctx->pc) {
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b60a0u: goto label_1b60a0;
        default: break;
    }

    ctx->pc = 0x1b6070u;

    // 0x1b6070: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b6074: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1b6074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6078: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6078u;
            // 0x1b607c: 0x8ca20a0c  lw          $v0, 0xA0C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2572)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6080u;
label_1b6080:
    // 0x1b6080: 0xac850d5c  sw          $a1, 0xD5C($a0)
    ctx->pc = 0x1b6080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3420), GPR_U32(ctx, 5));
    // 0x1b6084: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6084u;
            // 0x1b6088: 0xac860d60  sw          $a2, 0xD60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3424), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B608Cu;
    // 0x1b608c: 0x0  nop
    ctx->pc = 0x1b608cu;
    // NOP
label_1b6090:
    // 0x1b6090: 0xac850d64  sw          $a1, 0xD64($a0)
    ctx->pc = 0x1b6090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3428), GPR_U32(ctx, 5));
    // 0x1b6094: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6094u;
            // 0x1b6098: 0xac860d68  sw          $a2, 0xD68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B609Cu;
    // 0x1b609c: 0x0  nop
    ctx->pc = 0x1b609cu;
    // NOP
label_1b60a0:
    // 0x1b60a0: 0xac850d54  sw          $a1, 0xD54($a0)
    ctx->pc = 0x1b60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3412), GPR_U32(ctx, 5));
    // 0x1b60a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60A4u;
            // 0x1b60a8: 0xac860d58  sw          $a2, 0xD58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60ACu;
    // 0x1b60ac: 0x0  nop
    ctx->pc = 0x1b60acu;
    // NOP
    // 0x1b60b0: 0xac850d34  sw          $a1, 0xD34($a0)
    ctx->pc = 0x1b60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 5));
    // 0x1b60b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60B4u;
            // 0x1b60b8: 0xac860d38  sw          $a2, 0xD38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60BCu;
    // 0x1b60bc: 0x0  nop
    ctx->pc = 0x1b60bcu;
    // NOP
    // 0x1b60c0: 0xac850d3c  sw          $a1, 0xD3C($a0)
    ctx->pc = 0x1b60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3388), GPR_U32(ctx, 5));
    // 0x1b60c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60C4u;
            // 0x1b60c8: 0xac860d40  sw          $a2, 0xD40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3392), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60CCu;
    // 0x1b60cc: 0x0  nop
    ctx->pc = 0x1b60ccu;
    // NOP
    // 0x1b60d0: 0xac850d44  sw          $a1, 0xD44($a0)
    ctx->pc = 0x1b60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3396), GPR_U32(ctx, 5));
    // 0x1b60d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60D4u;
            // 0x1b60d8: 0xac860d48  sw          $a2, 0xD48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3400), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60DCu;
    // 0x1b60dc: 0x0  nop
    ctx->pc = 0x1b60dcu;
    // NOP
}
