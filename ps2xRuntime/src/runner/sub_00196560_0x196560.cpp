#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196560
// Address: 0x196560 - 0x1965b0
void sub_00196560_0x196560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196560_0x196560");
#endif

    switch (ctx->pc) {
        case 0x196580u: goto label_196580;
        default: break;
    }

    ctx->pc = 0x196560u;

    // 0x196560: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x196564: 0x2442fed8  addiu       $v0, $v0, -0x128
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x196568: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x19656c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x19656Cu;
    {
        const bool branch_taken_0x19656c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x196570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19656Cu;
            // 0x196570: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19656c) {
            ctx->pc = 0x1965A4u;
            goto label_1965a4;
        }
    }
    ctx->pc = 0x196574u;
    // 0x196574: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x196574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x196578: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x196578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19657c: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_196580:
    // 0x196580: 0x8c620188  lw          $v0, 0x188($v1)
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x196584: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x196584u;
    {
        const bool branch_taken_0x196584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x196588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196584u;
            // 0x196588: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196584) {
            ctx->pc = 0x196594u;
            goto label_196594;
        }
    }
    ctx->pc = 0x19658Cu;
    // 0x19658c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196590: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x196590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_196594:
    // 0x196594: 0x0  nop
    ctx->pc = 0x196594u;
    // NOP
    // 0x196598: 0x0  nop
    ctx->pc = 0x196598u;
    // NOP
    // 0x19659c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19659Cu;
    {
        const bool branch_taken_0x19659c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1965A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19659Cu;
            // 0x1965a0: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19659c) {
            ctx->pc = 0x196580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196580;
        }
    }
    ctx->pc = 0x1965A4u;
label_1965a4:
    // 0x1965a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1965A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1965ACu;
    // 0x1965ac: 0x0  nop
    ctx->pc = 0x1965acu;
    // NOP
}
