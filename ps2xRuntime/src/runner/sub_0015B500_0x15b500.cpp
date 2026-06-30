#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B500
// Address: 0x15b500 - 0x15b580
void sub_0015B500_0x15b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B500_0x15b500");
#endif

    switch (ctx->pc) {
        case 0x15b524u: goto label_15b524;
        case 0x15b558u: goto label_15b558;
        default: break;
    }

    ctx->pc = 0x15b500u;

    // 0x15b500: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x15b500u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b504: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15b508: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15b50c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15b510: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x15B510u;
    {
        const bool branch_taken_0x15b510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B510u;
            // 0x15b514: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b510) {
            ctx->pc = 0x15B540u;
            goto label_15b540;
        }
    }
    ctx->pc = 0x15B518u;
    // 0x15b518: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B518u;
    {
        const bool branch_taken_0x15b518 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b518) {
            ctx->pc = 0x15B540u;
            goto label_15b540;
        }
    }
    ctx->pc = 0x15B520u;
    // 0x15b520: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x15b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b524:
    // 0x15b524: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15b528: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x15b528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x15b52c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15b530: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x15b530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x15b534: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x15b538: 0x5500fffa  bnel        $t0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B538u;
    {
        const bool branch_taken_0x15b538 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b538) {
            ctx->pc = 0x15B53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B538u;
            // 0x15b53c: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b524;
        }
    }
    ctx->pc = 0x15B540u;
label_15b540:
    // 0x15b540: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15b544: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x15B544u;
    {
        const bool branch_taken_0x15b544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b544) {
            ctx->pc = 0x15B578u;
            goto label_15b578;
        }
    }
    ctx->pc = 0x15B54Cu;
    // 0x15b54c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15B54Cu;
    {
        const bool branch_taken_0x15b54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b54c) {
            ctx->pc = 0x15B578u;
            goto label_15b578;
        }
    }
    ctx->pc = 0x15B554u;
    // 0x15b554: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b558:
    // 0x15b558: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15b55c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x15b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x15b560: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15b564: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x15b564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x15b568: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x15b56c: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B56Cu;
    {
        const bool branch_taken_0x15b56c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b56c) {
            ctx->pc = 0x15B570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B56Cu;
            // 0x15b570: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B574u;
    // 0x15b574: 0x0  nop
    ctx->pc = 0x15b574u;
    // NOP
label_15b578:
    // 0x15b578: 0x3e00008  jr          $ra
    ctx->pc = 0x15B578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B580u;
}
