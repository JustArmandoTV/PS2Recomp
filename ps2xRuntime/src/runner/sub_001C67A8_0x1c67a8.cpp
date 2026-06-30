#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C67A8
// Address: 0x1c67a8 - 0x1c6a48
void sub_001C67A8_0x1c67a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C67A8_0x1c67a8");
#endif

    switch (ctx->pc) {
        case 0x1c6918u: goto label_1c6918;
        case 0x1c69acu: goto label_1c69ac;
        default: break;
    }

    ctx->pc = 0x1c67a8u;

    // 0x1c67a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c67a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c67ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c67b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c67b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c67b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c67b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c67b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c67bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c67bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c67c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c67c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c67cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c67ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c67d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c67d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c67d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c67d8: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1c67dc: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x1c67dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c67e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c67e4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1c67e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c67e8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1c67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1c67ec: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x1c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1c67f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c67f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c67f8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c67fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1c67fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1c6800: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c6800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c6804: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c6804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c6808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c6808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c680c: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1c680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c6810: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c6810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6814: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6814u;
    {
        const bool branch_taken_0x1c6814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C6818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6814u;
            // 0x1c6818: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6814) {
            ctx->pc = 0x1C6860u;
            goto label_1c6860;
        }
    }
    ctx->pc = 0x1C681Cu;
    // 0x1c681c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1c681cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c6820: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6820u;
    {
        const bool branch_taken_0x1c6820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6820u;
            // 0x1c6824: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6820) {
            ctx->pc = 0x1C6840u;
            goto label_1c6840;
        }
    }
    ctx->pc = 0x1C6828u;
    // 0x1c6828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c682c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C682Cu;
    {
        const bool branch_taken_0x1c682c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C682Cu;
            // 0x1c6830: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c682c) {
            ctx->pc = 0x1C6850u;
            goto label_1c6850;
        }
    }
    ctx->pc = 0x1C6834u;
    // 0x1c6834: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1C6834u;
    {
        const bool branch_taken_0x1c6834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6834u;
            // 0x1c6838: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6834) {
            ctx->pc = 0x1C69C4u;
            goto label_1c69c4;
        }
    }
    ctx->pc = 0x1C683Cu;
    // 0x1c683c: 0x0  nop
    ctx->pc = 0x1c683cu;
    // NOP
label_1c6840:
    // 0x1c6840: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6840u;
            // 0x1c6844: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C6870u;
            goto label_1c6870;
        }
    }
    ctx->pc = 0x1C6848u;
    // 0x1c6848: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C6848u;
    {
        const bool branch_taken_0x1c6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6848u;
            // 0x1c684c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6848) {
            ctx->pc = 0x1C69C4u;
            goto label_1c69c4;
        }
    }
    ctx->pc = 0x1C6850u;
label_1c6850:
    // 0x1c6850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6854u;
    {
        const bool branch_taken_0x1c6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6854u;
            // 0x1c6858: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6854) {
            ctx->pc = 0x1C6878u;
            goto label_1c6878;
        }
    }
    ctx->pc = 0x1C685Cu;
    // 0x1c685c: 0x0  nop
    ctx->pc = 0x1c685cu;
    // NOP
label_1c6860:
    // 0x1c6860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6864u;
            // 0x1c6868: 0x2414fffd  addiu       $s4, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C6878u;
            goto label_1c6878;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x0  nop
    ctx->pc = 0x1c686cu;
    // NOP
label_1c6870:
    // 0x1c6870: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c6870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6874: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x1c6874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1c6878:
    // 0x1c6878: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c687c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1c687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1c6880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6884: 0x24050930  addiu       $a1, $zero, 0x930
    ctx->pc = 0x1c6884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2352));
    // 0x1c6888: 0x24070992  addiu       $a3, $zero, 0x992
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2450));
    // 0x1c688c: 0xa2460005  sb          $a2, 0x5($s2)
    ctx->pc = 0x1c688cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c6890: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x1c6890u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6894: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x1c6894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1c6898: 0xa2440008  sb          $a0, 0x8($s2)
    ctx->pc = 0x1c6898u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c689c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68a0: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x1c68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x1c68a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c68a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68a8: 0xae470010  sw          $a3, 0x10($s2)
    ctx->pc = 0x1c68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 7));
    // 0x1c68ac: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x1c68acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1c68b0: 0xa2430007  sb          $v1, 0x7($s2)
    ctx->pc = 0x1c68b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c68b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c68b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68b8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1c68b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c68bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c68bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c68c0: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x1c68c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
    // 0x1c68c4: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x1c68c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1c68c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c68c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c68ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c68d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c68d4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c68d8: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x1c68d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x1c68dc: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1c68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1c68e0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1c68e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1c68e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c68e8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c68ec: 0x246a0010  addiu       $t2, $v1, 0x10
    ctx->pc = 0x1c68ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c68f0: 0x2463080f  addiu       $v1, $v1, 0x80F
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2063));
    // 0x1c68f4: 0x29480000  slti        $t0, $t2, 0x0
    ctx->pc = 0x1c68f4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c68f8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1c68f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68fc: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x1c68fcu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1c6900: 0x28ac3  sra         $s1, $v0, 11
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1c6904: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c6904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6908: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1c6908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x1c690c: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x1c690cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1c6910: 0xc071922  jal         func_1C6488
    ctx->pc = 0x1C6910u;
    SET_GPR_U32(ctx, 31, 0x1C6918u);
    ctx->pc = 0x1C6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6910u;
            // 0x1c6914: 0x1428823  subu        $s1, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6488u;
    if (runtime->hasFunction(0x1C6488u)) {
        auto targetFn = runtime->lookupFunction(0x1C6488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6918u; }
        if (ctx->pc != 0x1C6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6488_0x1c6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6918u; }
        if (ctx->pc != 0x1C6918u) { return; }
    }
    ctx->pc = 0x1C6918u;
label_1c6918:
    // 0x1c6918: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c691c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c6920: 0xac703040  sw          $s0, 0x3040($v1)
    ctx->pc = 0x1c6920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12352), GPR_U32(ctx, 16));
    // 0x1c6924: 0xac513044  sw          $s1, 0x3044($v0)
    ctx->pc = 0x1c6924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12356), GPR_U32(ctx, 17));
    // 0x1c6928: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1c6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1c692c: 0x26470024  addiu       $a3, $s2, 0x24
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1c6930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6934: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1c6934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c693c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c693cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6940: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c6940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6944: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x1c6944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
    // 0x1c6948: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1c694c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6954: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c6954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c6958: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c6958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c695c: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x1c695cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x1c6960: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1c6960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1c6964: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1c6964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1c6968: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c6968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c696c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c6970: 0x3c0a0005  lui         $t2, 0x5
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5 << 16));
    // 0x1c6974: 0x354a6230  ori         $t2, $t2, 0x6230
    ctx->pc = 0x1c6974u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)25136);
    // 0x1c6978: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1c6978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1c697c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x1c697cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x1c6980: 0x34216a2f  ori         $at, $at, 0x6A2F
    ctx->pc = 0x1c6980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27183);
    // 0x1c6984: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1c6984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1c6988: 0x29480000  slti        $t0, $t2, 0x0
    ctx->pc = 0x1c6988u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c698c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1c698cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6990: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x1c6990u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1c6994: 0x28ac3  sra         $s1, $v0, 11
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1c6998: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c6998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c699c: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x1c699cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x1c69a0: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x1c69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1c69a4: 0xc071922  jal         func_1C6488
    ctx->pc = 0x1C69A4u;
    SET_GPR_U32(ctx, 31, 0x1C69ACu);
    ctx->pc = 0x1C69A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69A4u;
            // 0x1c69a8: 0x1428823  subu        $s1, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6488u;
    if (runtime->hasFunction(0x1C6488u)) {
        auto targetFn = runtime->lookupFunction(0x1C6488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69ACu; }
        if (ctx->pc != 0x1C69ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6488_0x1c6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69ACu; }
        if (ctx->pc != 0x1C69ACu) { return; }
    }
    ctx->pc = 0x1C69ACu;
label_1c69ac:
    // 0x1c69ac: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c69b0: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c69b4: 0xac703048  sw          $s0, 0x3048($v1)
    ctx->pc = 0x1c69b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12360), GPR_U32(ctx, 16));
    // 0x1c69b8: 0xac51304c  sw          $s1, 0x304C($v0)
    ctx->pc = 0x1c69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12364), GPR_U32(ctx, 17));
    // 0x1c69bc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c69bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c69c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c69c4:
    // 0x1c69c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c69c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c69c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c69c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c69cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c69ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c69d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c69d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c69d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c69d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c69d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C69D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69D8u;
            // 0x1c69dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C69E0u;
    // 0x1c69e0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c69e4: 0x8c623048  lw          $v0, 0x3048($v1)
    ctx->pc = 0x1c69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12360)));
    // 0x1c69e8: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c69ec: 0x232c0  sll         $a2, $v0, 11
    ctx->pc = 0x1c69ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c69f0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c69f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c69f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69F4u;
    {
        const bool branch_taken_0x1c69f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c69f4) {
            ctx->pc = 0x1C69F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69F4u;
            // 0x1c69f8: 0x3c03006e  lui         $v1, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6A10u;
            goto label_1c6a10;
        }
    }
    ctx->pc = 0x1C69FCu;
    // 0x1c69fc: 0x24030930  addiu       $v1, $zero, 0x930
    ctx->pc = 0x1c69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2352));
    // 0x1c6a00: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c6a04: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1c6a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c6a08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6A08u;
    {
        const bool branch_taken_0x1c6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A08u;
            // 0x1c6a0c: 0x8c82304c  lw          $v0, 0x304C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a08) {
            ctx->pc = 0x1C6A34u;
            goto label_1c6a34;
        }
    }
    ctx->pc = 0x1C6A10u;
label_1c6a10:
    // 0x1c6a10: 0x8c623040  lw          $v0, 0x3040($v1)
    ctx->pc = 0x1c6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12352)));
    // 0x1c6a14: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x1c6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c6a18: 0x232c0  sll         $a2, $v0, 11
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c6a1c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c6a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c6a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6A20u;
    {
        const bool branch_taken_0x1c6a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A20u;
            // 0x1c6a24: 0x24030930  addiu       $v1, $zero, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a20) {
            ctx->pc = 0x1C6A40u;
            goto label_1c6a40;
        }
    }
    ctx->pc = 0x1C6A28u;
    // 0x1c6a28: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c6a2c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1c6a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c6a30: 0x8c823044  lw          $v0, 0x3044($a0)
    ctx->pc = 0x1c6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12356)));
label_1c6a34:
    // 0x1c6a34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c6a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A38u;
            // 0x1c6a3c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6A40u;
label_1c6a40:
    // 0x1c6a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A40u;
            // 0x1c6a44: 0x412c0  sll         $v0, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6A48u;
}
