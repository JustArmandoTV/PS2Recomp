#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109620
// Address: 0x109620 - 0x1098d8
void sub_00109620_0x109620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109620_0x109620");
#endif

    ctx->pc = 0x109620u;

    // 0x109620: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x109620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109624: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x109624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109628: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x109628u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10962c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x10962cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109630: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x109630u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x109634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109638: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x109638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x10963c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x10963cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109640: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x109640u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109644: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x109644u;
    {
        const bool branch_taken_0x109644 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x109648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109644u;
            // 0x109648: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109644) {
            ctx->pc = 0x109758u;
            goto label_109758;
        }
    }
    ctx->pc = 0x10964Cu;
    // 0x10964c: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x10964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x109650: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x109650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x109654: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x109654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x109658: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x109658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x10965c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109660: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x109660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x109664: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x109664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x109668: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x109668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x10966c: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x10966cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x109670: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109670u;
    {
        const bool branch_taken_0x109670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109670u;
            // 0x109674: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109670) {
            ctx->pc = 0x109684u;
            goto label_109684;
        }
    }
    ctx->pc = 0x109678u;
    // 0x109678: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x109678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x10967c: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x10967cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x109680: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x109680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_109684:
    // 0x109684: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x109684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x109688: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x109688u;
    {
        const bool branch_taken_0x109688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109688) {
            ctx->pc = 0x10968Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109688u;
            // 0x10968c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1096A0u;
            goto label_1096a0;
        }
    }
    ctx->pc = 0x109690u;
    // 0x109690: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x109690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x109694: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x109694u;
    {
        const bool branch_taken_0x109694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109694) {
            ctx->pc = 0x109698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109694u;
            // 0x109698: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1096C8u;
            goto label_1096c8;
        }
    }
    ctx->pc = 0x10969Cu;
    // 0x10969c: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x10969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_1096a0:
    // 0x1096a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1096A0u;
    {
        const bool branch_taken_0x1096a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1096a0) {
            ctx->pc = 0x1096A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1096A0u;
            // 0x1096a4: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1096C8u;
            goto label_1096c8;
        }
    }
    ctx->pc = 0x1096A8u;
    // 0x1096a8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1096a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1096ac: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x1096acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1096b0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1096b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1096b4: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x1096b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x1096b8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1096b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1096bc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1096bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1096c0: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x1096c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x1096c4: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x1096c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_1096c8:
    // 0x1096c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1096c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1096cc: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1096CCu;
    {
        const bool branch_taken_0x1096cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1096D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1096CCu;
            // 0x1096d0: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096cc) {
            ctx->pc = 0x1096FCu;
            goto label_1096fc;
        }
    }
    ctx->pc = 0x1096D4u;
    // 0x1096d4: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x1096d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1096d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1096d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1096dc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1096dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1096e0: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1096E0u;
    {
        const bool branch_taken_0x1096e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1096e0) {
            ctx->pc = 0x1096E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1096E0u;
            // 0x1096e4: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109744u;
            goto label_109744;
        }
    }
    ctx->pc = 0x1096E8u;
    // 0x1096e8: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x1096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1096ec: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1096ECu;
    {
        const bool branch_taken_0x1096ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1096ECu;
            // 0x1096f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096ec) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x1096F4u;
    // 0x1096f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1096F4u;
    {
        const bool branch_taken_0x1096f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1096F4u;
            // 0x1096f8: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096f4) {
            ctx->pc = 0x109744u;
            goto label_109744;
        }
    }
    ctx->pc = 0x1096FCu;
label_1096fc:
    // 0x1096fc: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1096fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x109700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109704: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x109704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x109708: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x109708u;
    {
        const bool branch_taken_0x109708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x109708) {
            ctx->pc = 0x10970Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109708u;
            // 0x10970c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109724u;
            goto label_109724;
        }
    }
    ctx->pc = 0x109710u;
    // 0x109710: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x109710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x109714: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x109714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x109718: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109718u;
    {
        const bool branch_taken_0x109718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x109718) {
            ctx->pc = 0x10971Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109718u;
            // 0x10971c: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109730u;
            goto label_109730;
        }
    }
    ctx->pc = 0x109720u;
    // 0x109720: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_109724:
    // 0x109724: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x109724u;
    {
        const bool branch_taken_0x109724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109724u;
            // 0x109728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109724) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x10972Cu;
    // 0x10972c: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_109730:
    // 0x109730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109734: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x109734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x109738: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x109738u;
    {
        const bool branch_taken_0x109738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109738u;
            // 0x10973c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109738) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x109740u;
    // 0x109740: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_109744:
    // 0x109744: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x109744u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109748: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x109748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10974c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x109750: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x109750u;
    {
        const bool branch_taken_0x109750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109750u;
            // 0x109754: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109750) {
            ctx->pc = 0x10980Cu;
            goto label_10980c;
        }
    }
    ctx->pc = 0x109758u;
label_109758:
    // 0x109758: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x109758u;
    {
        const bool branch_taken_0x109758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x109758) {
            ctx->pc = 0x10975Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109758u;
            // 0x10975c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109794u;
            goto label_109794;
        }
    }
    ctx->pc = 0x109760u;
    // 0x109760: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x109764: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x109764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x109768: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x109768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x10976c: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x10976cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x109770: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x109770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x109774: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x109774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x109778: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x109778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10977c: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x10977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x109780: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x109780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x109784: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x109784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x109788: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x109788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x10978c: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x10978cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x109790: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_109794:
    // 0x109794: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x109798: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x10979c: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x10979cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x1097a0: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x1097a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x1097a4: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1097A4u;
    {
        const bool branch_taken_0x1097a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1097A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097A4u;
            // 0x1097a8: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a4) {
            ctx->pc = 0x1097C0u;
            goto label_1097c0;
        }
    }
    ctx->pc = 0x1097ACu;
    // 0x1097ac: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1097ACu;
    {
        const bool branch_taken_0x1097ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x1097ac) {
            ctx->pc = 0x1097B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097ACu;
            // 0x1097b0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10980Cu;
            goto label_10980c;
        }
    }
    ctx->pc = 0x1097B4u;
    // 0x1097b4: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1097b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1097b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1097B8u;
    {
        const bool branch_taken_0x1097b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097B8u;
            // 0x1097bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097b8) {
            ctx->pc = 0x1097FCu;
            goto label_1097fc;
        }
    }
    ctx->pc = 0x1097C0u;
label_1097c0:
    // 0x1097c0: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x1097c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x1097c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1097c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1097c8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1097c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1097cc: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1097CCu;
    {
        const bool branch_taken_0x1097cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097CCu;
            // 0x1097d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097cc) {
            ctx->pc = 0x109808u;
            goto label_109808;
        }
    }
    ctx->pc = 0x1097D4u;
    // 0x1097d4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1097D4u;
    {
        const bool branch_taken_0x1097d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097d4) {
            ctx->pc = 0x1097D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097D4u;
            // 0x1097d8: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1097ECu;
            goto label_1097ec;
        }
    }
    ctx->pc = 0x1097DCu;
    // 0x1097dc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1097dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1097e0: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1097E0u;
    {
        const bool branch_taken_0x1097e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1097e0) {
            ctx->pc = 0x1097E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097E0u;
            // 0x1097e4: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10980Cu;
            goto label_10980c;
        }
    }
    ctx->pc = 0x1097E8u;
    // 0x1097e8: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1097e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1097ec:
    // 0x1097ec: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1097ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1097f0: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1097F0u;
    {
        const bool branch_taken_0x1097f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1097F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097F0u;
            // 0x1097f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097f0) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x1097F8u;
    // 0x1097f8: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x1097f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_1097fc:
    // 0x1097fc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1097fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x109800: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109800u;
    {
        const bool branch_taken_0x109800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x109804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109800u;
            // 0x109804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109800) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x109808u;
label_109808:
    // 0x109808: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x109808u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10980c:
    // 0x10980c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_109810:
    // 0x109810: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109810u;
    {
        const bool branch_taken_0x109810 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x109814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109810u;
            // 0x109814: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109810) {
            ctx->pc = 0x109844u;
            goto label_109844;
        }
    }
    ctx->pc = 0x109818u;
    // 0x109818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109818u;
    {
        const bool branch_taken_0x109818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109818u;
            // 0x10981c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109818) {
            ctx->pc = 0x109830u;
            goto label_109830;
        }
    }
    ctx->pc = 0x109820u;
    // 0x109820: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x109820u;
    {
        const bool branch_taken_0x109820 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x109820) {
            ctx->pc = 0x109824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109820u;
            // 0x109824: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109848u;
            goto label_109848;
        }
    }
    ctx->pc = 0x109828u;
    // 0x109828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109828u;
    {
        const bool branch_taken_0x109828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109828u;
            // 0x10982c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109828) {
            ctx->pc = 0x10984Cu;
            goto label_10984c;
        }
    }
    ctx->pc = 0x109830u;
label_109830:
    // 0x109830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109834: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109834u;
    {
        const bool branch_taken_0x109834 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x109834) {
            ctx->pc = 0x109838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109834u;
            // 0x109838: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109848u;
            goto label_109848;
        }
    }
    ctx->pc = 0x10983Cu;
    // 0x10983c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10983Cu;
    {
        const bool branch_taken_0x10983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10983Cu;
            // 0x109840: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10983c) {
            ctx->pc = 0x10984Cu;
            goto label_10984c;
        }
    }
    ctx->pc = 0x109844u;
label_109844:
    // 0x109844: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x109844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_109848:
    // 0x109848: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x109848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_10984c:
    // 0x10984c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x10984cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109850: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x109850u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x109854: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x109854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x109858: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x109858u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x10985c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x10985cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x109860: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x109860u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x109864: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x109864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x109868: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x109868u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x10986c: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x10986cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x109870: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x109874: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x109874u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x109878: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x109878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x10987c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x10987cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x109880: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x109880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x109884: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x109884u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x109888: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x109888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x10988c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x10988cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x109890: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x109890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x109894: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x109894u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x109898: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x10989c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x10989cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x1098a0: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x1098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x1098a4: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x1098a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x1098a8: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x1098a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x1098ac: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x1098acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x1098b0: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x1098b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x1098b4: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x1098b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x1098b8: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x1098b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x1098bc: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x1098bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x1098c0: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x1098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x1098c4: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x1098c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x1098c8: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x1098c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x1098cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1098CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1098D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1098CCu;
            // 0x1098d0: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1098D4u;
    // 0x1098d4: 0x0  nop
    ctx->pc = 0x1098d4u;
    // NOP
}
