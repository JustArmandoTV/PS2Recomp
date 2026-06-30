#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B340
// Address: 0x26b340 - 0x26b380
void sub_0026B340_0x26b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B340_0x26b340");
#endif

    switch (ctx->pc) {
        case 0x26b348u: goto label_26b348;
        default: break;
    }

    ctx->pc = 0x26b340u;

    // 0x26b340: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x26B340u;
    {
        const bool branch_taken_0x26b340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B340u;
            // 0x26b344: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b340) {
            ctx->pc = 0x26B370u;
            goto label_26b370;
        }
    }
    ctx->pc = 0x26B348u;
label_26b348:
    // 0x26b348: 0x80a40039  lb          $a0, 0x39($a1)
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
    // 0x26b34c: 0x24a60038  addiu       $a2, $a1, 0x38
    ctx->pc = 0x26b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x26b350: 0x0  nop
    ctx->pc = 0x26b350u;
    // NOP
    // 0x26b354: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B354u;
    {
        const bool branch_taken_0x26b354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b354) {
            ctx->pc = 0x26B370u;
            goto label_26b370;
        }
    }
    ctx->pc = 0x26B35Cu;
    // 0x26b35c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x26b35cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b360: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26b360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26b364: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26B364u;
    {
        const bool branch_taken_0x26b364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b364) {
            ctx->pc = 0x26B348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b348;
        }
    }
    ctx->pc = 0x26B36Cu;
    // 0x26b36c: 0x0  nop
    ctx->pc = 0x26b36cu;
    // NOP
label_26b370:
    // 0x26b370: 0x3e00008  jr          $ra
    ctx->pc = 0x26B370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B378u;
    // 0x26b378: 0x0  nop
    ctx->pc = 0x26b378u;
    // NOP
    // 0x26b37c: 0x0  nop
    ctx->pc = 0x26b37cu;
    // NOP
}
