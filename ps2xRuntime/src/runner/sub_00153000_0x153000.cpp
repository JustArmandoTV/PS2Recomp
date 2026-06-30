#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153000
// Address: 0x153000 - 0x1530b0
void sub_00153000_0x153000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153000_0x153000");
#endif

    switch (ctx->pc) {
        case 0x15301cu: goto label_15301c;
        case 0x153040u: goto label_153040;
        case 0x153050u: goto label_153050;
        default: break;
    }

    ctx->pc = 0x153000u;

    // 0x153000: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x153004: 0x8ca90038  lw          $t1, 0x38($a1)
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x153008: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x15300c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x15300Cu;
    {
        const bool branch_taken_0x15300c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x153010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15300Cu;
            // 0x153010: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15300c) {
            ctx->pc = 0x153038u;
            goto label_153038;
        }
    }
    ctx->pc = 0x153014u;
    // 0x153014: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153018: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15301c:
    // 0x15301c: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x15301cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x153020: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x153020u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x153024: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x153024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x153028: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x15302c: 0x167382b  sltu        $a3, $t3, $a3
    ctx->pc = 0x15302cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x153030: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x153030u;
    {
        const bool branch_taken_0x153030 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x153030) {
            ctx->pc = 0x15301Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15301c;
        }
    }
    ctx->pc = 0x153038u;
label_153038:
    // 0x153038: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x153038u;
    {
        const bool branch_taken_0x153038 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x15303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153038u;
            // 0x15303c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153038) {
            ctx->pc = 0x1530A0u;
            goto label_1530a0;
        }
    }
    ctx->pc = 0x153040u;
label_153040:
    // 0x153040: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x153044: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x153044u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x153048: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x153048u;
    {
        const bool branch_taken_0x153048 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153048u;
            // 0x15304c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153048) {
            ctx->pc = 0x153090u;
            goto label_153090;
        }
    }
    ctx->pc = 0x153050u;
label_153050:
    // 0x153050: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x153054: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x153054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x153058: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15305c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153060: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x153060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x153064: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153064u;
    {
        const bool branch_taken_0x153064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x153064) {
            ctx->pc = 0x153080u;
            goto label_153080;
        }
    }
    ctx->pc = 0x15306Cu;
    // 0x15306c: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x15306cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x153070: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x153074: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153078: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x153078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15307c: 0x0  nop
    ctx->pc = 0x15307cu;
    // NOP
label_153080:
    // 0x153080: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x153080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x153084: 0x167282b  sltu        $a1, $t3, $a3
    ctx->pc = 0x153084u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x153088: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x153088u;
    {
        const bool branch_taken_0x153088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153088u;
            // 0x15308c: 0x254a0024  addiu       $t2, $t2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153088) {
            ctx->pc = 0x153050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153050;
        }
    }
    ctx->pc = 0x153090u;
label_153090:
    // 0x153090: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x153094: 0x109282b  sltu        $a1, $t0, $t1
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x153098: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x153098u;
    {
        const bool branch_taken_0x153098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153098u;
            // 0x15309c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153098) {
            ctx->pc = 0x153040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153040;
        }
    }
    ctx->pc = 0x1530A0u;
label_1530a0:
    // 0x1530a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1530A8u;
    // 0x1530a8: 0x0  nop
    ctx->pc = 0x1530a8u;
    // NOP
    // 0x1530ac: 0x0  nop
    ctx->pc = 0x1530acu;
    // NOP
}
