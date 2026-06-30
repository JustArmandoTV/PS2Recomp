#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EB670
// Address: 0x3eb670 - 0x3eb820
void sub_003EB670_0x3eb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB670_0x3eb670");
#endif

    switch (ctx->pc) {
        case 0x3eb684u: goto label_3eb684;
        case 0x3eb6f0u: goto label_3eb6f0;
        default: break;
    }

    ctx->pc = 0x3eb670u;

    // 0x3eb670: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3eb670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eb674: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb678: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3EB678u;
    {
        const bool branch_taken_0x3eb678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EB67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB678u;
            // 0x3eb67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb678) {
            ctx->pc = 0x3EB6ECu;
            goto label_3eb6ec;
        }
    }
    ctx->pc = 0x3EB680u;
    // 0x3eb680: 0x29030008  slti        $v1, $t0, 0x8
    ctx->pc = 0x3eb680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_3eb684:
    // 0x3eb684: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3EB684u;
    {
        const bool branch_taken_0x3eb684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb684) {
            ctx->pc = 0x3EB6B8u;
            goto label_3eb6b8;
        }
    }
    ctx->pc = 0x3EB68Cu;
    // 0x3eb68c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3eb68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb690: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3eb690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb694: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x3eb694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x3eb698: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eb698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb69c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eb6a0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3eb6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eb6a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3eb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3eb6a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3eb6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eb6ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb6b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3EB6B0u;
    {
        const bool branch_taken_0x3eb6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB6B0u;
            // 0x3eb6b4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6b0) {
            ctx->pc = 0x3EB6DCu;
            goto label_3eb6dc;
        }
    }
    ctx->pc = 0x3EB6B8u;
label_3eb6b8:
    // 0x3eb6b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb6bc: 0x682023  subu        $a0, $v1, $t0
    ctx->pc = 0x3eb6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3eb6c0: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x3eb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3eb6c4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3eb6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3eb6c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3eb6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb6cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3eb6ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb6d0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3eb6d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3eb6d4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3EB6D4u;
    {
        const bool branch_taken_0x3eb6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB6D4u;
            // 0x3eb6d8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6d4) {
            ctx->pc = 0x3EB810u;
            goto label_3eb810;
        }
    }
    ctx->pc = 0x3EB6DCu;
label_3eb6dc:
    // 0x3eb6dc: 0x5500ffe9  bnel        $t0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3EB6DCu;
    {
        const bool branch_taken_0x3eb6dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6dc) {
            ctx->pc = 0x3EB6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB6DCu;
            // 0x3eb6e0: 0x29030008  slti        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb684;
        }
    }
    ctx->pc = 0x3EB6E4u;
    // 0x3eb6e4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3EB6E4u;
    {
        const bool branch_taken_0x3eb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6e4) {
            ctx->pc = 0x3EB810u;
            goto label_3eb810;
        }
    }
    ctx->pc = 0x3EB6ECu;
label_3eb6ec:
    // 0x3eb6ec: 0x29030008  slti        $v1, $t0, 0x8
    ctx->pc = 0x3eb6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_3eb6f0:
    // 0x3eb6f0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3EB6F0u;
    {
        const bool branch_taken_0x3eb6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6f0) {
            ctx->pc = 0x3EB748u;
            goto label_3eb748;
        }
    }
    ctx->pc = 0x3EB6F8u;
    // 0x3eb6f8: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x3eb6f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb6fc: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x3eb6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb700: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x3eb700u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eb704: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb708: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x3eb708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x3eb70c: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x3eb70cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3eb710: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x3eb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3eb714: 0x6c2023  subu        $a0, $v1, $t4
    ctx->pc = 0x3eb714u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3eb718: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x3eb718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3eb71c: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x3eb71cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x3eb720: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3eb720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3eb724: 0x1832007  srav        $a0, $v1, $t4
    ctx->pc = 0x3eb724u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 12) & 0x1F));
    // 0x3eb728: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3eb728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eb72c: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x3eb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x3eb730: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x3eb730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3eb734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3eb734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3eb738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb73c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3EB73Cu;
    {
        const bool branch_taken_0x3eb73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB73Cu;
            // 0x3eb740: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb73c) {
            ctx->pc = 0x3EB808u;
            goto label_3eb808;
        }
    }
    ctx->pc = 0x3EB744u;
    // 0x3eb744: 0x0  nop
    ctx->pc = 0x3eb744u;
    // NOP
label_3eb748:
    // 0x3eb748: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3eb748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eb74c: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x3eb74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3eb750: 0x54200016  bnel        $at, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3EB750u;
    {
        const bool branch_taken_0x3eb750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb750) {
            ctx->pc = 0x3EB754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB750u;
            // 0x3eb754: 0x1021804  sllv        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB7ACu;
            goto label_3eb7ac;
        }
    }
    ctx->pc = 0x3EB758u;
    // 0x3eb758: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3eb758u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb75c: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x3eb75cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb760: 0x1444823  subu        $t1, $t2, $a0
    ctx->pc = 0x3eb760u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x3eb764: 0x881823  subu        $v1, $a0, $t0
    ctx->pc = 0x3eb764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3eb768: 0x1482023  subu        $a0, $t2, $t0
    ctx->pc = 0x3eb768u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3eb76c: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x3eb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3eb770: 0x91680000  lbu         $t0, 0x0($t3)
    ctx->pc = 0x3eb770u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3eb774: 0x1284004  sllv        $t0, $t0, $t1
    ctx->pc = 0x3eb774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
    // 0x3eb778: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3eb778u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3eb77c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3eb77cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3eb780: 0x882007  srav        $a0, $t0, $a0
    ctx->pc = 0x3eb780u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x3eb784: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3EB784u;
    {
        const bool branch_taken_0x3eb784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB784u;
            // 0x3eb788: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb784) {
            ctx->pc = 0x3EB810u;
            goto label_3eb810;
        }
    }
    ctx->pc = 0x3EB78Cu;
    // 0x3eb78c: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x3eb78cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x3eb790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3eb790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eb794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eb798: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3eb798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3eb79c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3eb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eb7a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb7a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3EB7A4u;
    {
        const bool branch_taken_0x3eb7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB7A4u;
            // 0x3eb7a8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7a4) {
            ctx->pc = 0x3EB810u;
            goto label_3eb810;
        }
    }
    ctx->pc = 0x3EB7ACu;
label_3eb7ac:
    // 0x3eb7ac: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x3eb7acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb7b0: 0x1045823  subu        $t3, $t0, $a0
    ctx->pc = 0x3eb7b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3eb7b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb7b8: 0x4b5023  subu        $t2, $v0, $t3
    ctx->pc = 0x3eb7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3eb7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb7c0: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x3eb7c0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3eb7c4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3eb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3eb7c8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3eb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3eb7cc: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x3eb7ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3eb7d0: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x3eb7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x3eb7d4: 0x1642004  sllv        $a0, $a0, $t3
    ctx->pc = 0x3eb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 11) & 0x1F));
    // 0x3eb7d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3eb7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3eb7dc: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x3eb7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x3eb7e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3eb7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3eb7e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3eb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eb7e8: 0x1421007  srav        $v0, $v0, $t2
    ctx->pc = 0x3eb7e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x3eb7ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3eb7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3eb7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eb7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eb7f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3eb7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3eb7f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3eb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eb7fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB800u;
    {
        const bool branch_taken_0x3eb800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB800u;
            // 0x3eb804: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb800) {
            ctx->pc = 0x3EB810u;
            goto label_3eb810;
        }
    }
    ctx->pc = 0x3EB808u;
label_3eb808:
    // 0x3eb808: 0x5500ffb9  bnel        $t0, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3EB808u;
    {
        const bool branch_taken_0x3eb808 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb808) {
            ctx->pc = 0x3EB80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB808u;
            // 0x3eb80c: 0x29030008  slti        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb6f0;
        }
    }
    ctx->pc = 0x3EB810u;
label_3eb810:
    // 0x3eb810: 0x3e00008  jr          $ra
    ctx->pc = 0x3EB810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EB818u;
    // 0x3eb818: 0x0  nop
    ctx->pc = 0x3eb818u;
    // NOP
    // 0x3eb81c: 0x0  nop
    ctx->pc = 0x3eb81cu;
    // NOP
}
