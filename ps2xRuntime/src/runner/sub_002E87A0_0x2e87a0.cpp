#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E87A0
// Address: 0x2e87a0 - 0x2e8bd0
void sub_002E87A0_0x2e87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E87A0_0x2e87a0");
#endif

    switch (ctx->pc) {
        case 0x2e8b44u: goto label_2e8b44;
        case 0x2e8b70u: goto label_2e8b70;
        case 0x2e8b84u: goto label_2e8b84;
        case 0x2e8bb0u: goto label_2e8bb0;
        default: break;
    }

    ctx->pc = 0x2e87a0u;

    // 0x2e87a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e87a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e87a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e87a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e87ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e87acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e87b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e87b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e87b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e87b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e87b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87bc: 0x90840079  lbu         $a0, 0x79($a0)
    ctx->pc = 0x2e87bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 121)));
    // 0x2e87c0: 0x508300fc  beql        $a0, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x2E87C0u;
    {
        const bool branch_taken_0x2e87c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e87c0) {
            ctx->pc = 0x2E87C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87C0u;
            // 0x2e87c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BB4u;
            goto label_2e8bb4;
        }
    }
    ctx->pc = 0x2E87C8u;
    // 0x2e87c8: 0x9624007a  lhu         $a0, 0x7A($s1)
    ctx->pc = 0x2e87c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2e87cc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e87d0: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E87D0u;
    {
        const bool branch_taken_0x2e87d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e87d0) {
            ctx->pc = 0x2E87D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87D0u;
            // 0x2e87d4: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8810u;
            goto label_2e8810;
        }
    }
    ctx->pc = 0x2E87D8u;
    // 0x2e87d8: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x2e87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2e87dc: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E87DCu;
    {
        const bool branch_taken_0x2e87dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e87dc) {
            ctx->pc = 0x2E87E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87DCu;
            // 0x2e87e0: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8804u;
            goto label_2e8804;
        }
    }
    ctx->pc = 0x2E87E4u;
    // 0x2e87e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e87e8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E87E8u;
    {
        const bool branch_taken_0x2e87e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e87e8) {
            ctx->pc = 0x2E87ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87E8u;
            // 0x2e87ec: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E87F8u;
            goto label_2e87f8;
        }
    }
    ctx->pc = 0x2E87F0u;
    // 0x2e87f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E87F0u;
    {
        const bool branch_taken_0x2e87f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87f0) {
            ctx->pc = 0x2E8818u;
            goto label_2e8818;
        }
    }
    ctx->pc = 0x2E87F8u;
label_2e87f8:
    // 0x2e87f8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e87f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e87fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E87FCu;
    {
        const bool branch_taken_0x2e87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87FCu;
            // 0x2e8800: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87fc) {
            ctx->pc = 0x2E8818u;
            goto label_2e8818;
        }
    }
    ctx->pc = 0x2E8804u;
label_2e8804:
    // 0x2e8804: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e8804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e8808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8808u;
    {
        const bool branch_taken_0x2e8808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8808u;
            // 0x2e880c: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8808) {
            ctx->pc = 0x2E8818u;
            goto label_2e8818;
        }
    }
    ctx->pc = 0x2E8810u;
label_2e8810:
    // 0x2e8810: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e8810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e8814: 0xa2230054  sb          $v1, 0x54($s1)
    ctx->pc = 0x2e8814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
label_2e8818:
    // 0x2e8818: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e881c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8820: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2e8824: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x2e8828: 0x50a40063  beql        $a1, $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2E8828u;
    {
        const bool branch_taken_0x2e8828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8828) {
            ctx->pc = 0x2E882Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8828u;
            // 0x2e882c: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E8830u;
    // 0x2e8830: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e8830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e8834: 0x50a30058  beql        $a1, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2E8834u;
    {
        const bool branch_taken_0x2e8834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8834) {
            ctx->pc = 0x2E8838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8834u;
            // 0x2e8838: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8998u;
            goto label_2e8998;
        }
    }
    ctx->pc = 0x2E883Cu;
    // 0x2e883c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8840: 0x50a30049  beql        $a1, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2E8840u;
    {
        const bool branch_taken_0x2e8840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8840) {
            ctx->pc = 0x2E8844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8840u;
            // 0x2e8844: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8968u;
            goto label_2e8968;
        }
    }
    ctx->pc = 0x2E8848u;
    // 0x2e8848: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e884c: 0x50a3003e  beql        $a1, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E884Cu;
    {
        const bool branch_taken_0x2e884c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e884c) {
            ctx->pc = 0x2E8850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E884Cu;
            // 0x2e8850: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8948u;
            goto label_2e8948;
        }
    }
    ctx->pc = 0x2E8854u;
    // 0x2e8854: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8858: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E8858u;
    {
        const bool branch_taken_0x2e8858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8858) {
            ctx->pc = 0x2E885Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8858u;
            // 0x2e885c: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8860u;
    // 0x2e8860: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e8860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8864: 0x50a30017  beql        $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E8864u;
    {
        const bool branch_taken_0x2e8864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8864) {
            ctx->pc = 0x2E8868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8864u;
            // 0x2e8868: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E886Cu;
    // 0x2e886c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8870: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8870u;
    {
        const bool branch_taken_0x2e8870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8870) {
            ctx->pc = 0x2E8874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8870u;
            // 0x2e8874: 0x9624007a  lhu         $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E888Cu;
            goto label_2e888c;
        }
    }
    ctx->pc = 0x2E8878u;
    // 0x2e8878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e887c: 0x10a30055  beq         $a1, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2E887Cu;
    {
        const bool branch_taken_0x2e887c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e887c) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E8884u;
    // 0x2e8884: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2E8884u;
    {
        const bool branch_taken_0x2e8884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8884) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E888Cu;
label_2e888c:
    // 0x2e888c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2e8890: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8890u;
    {
        const bool branch_taken_0x2e8890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8890) {
            ctx->pc = 0x2E8894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8890u;
            // 0x2e8894: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E88B8u;
            goto label_2e88b8;
        }
    }
    ctx->pc = 0x2E8898u;
    // 0x2e8898: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e889c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E889Cu;
    {
        const bool branch_taken_0x2e889c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e889c) {
            ctx->pc = 0x2E88A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E889Cu;
            // 0x2e88a0: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E88ACu;
            goto label_2e88ac;
        }
    }
    ctx->pc = 0x2E88A4u;
    // 0x2e88a4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2E88A4u;
    {
        const bool branch_taken_0x2e88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88a4) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E88ACu;
label_2e88ac:
    // 0x2e88ac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e88acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e88b0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2E88B0u;
    {
        const bool branch_taken_0x2e88b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88B0u;
            // 0x2e88b4: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88b0) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E88B8u;
label_2e88b8:
    // 0x2e88b8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e88b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e88bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E88BCu;
    {
        const bool branch_taken_0x2e88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88BCu;
            // 0x2e88c0: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88bc) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E88C4u;
label_2e88c4:
    // 0x2e88c4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2e88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e88c8: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E88C8u;
    {
        const bool branch_taken_0x2e88c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e88c8) {
            ctx->pc = 0x2E88CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88C8u;
            // 0x2e88cc: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8910u;
            goto label_2e8910;
        }
    }
    ctx->pc = 0x2E88D0u;
    // 0x2e88d0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x2e88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2e88d4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E88D4u;
    {
        const bool branch_taken_0x2e88d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e88d4) {
            ctx->pc = 0x2E890Cu;
            goto label_2e890c;
        }
    }
    ctx->pc = 0x2E88DCu;
    // 0x2e88dc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2e88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e88e0: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E88E0u;
    {
        const bool branch_taken_0x2e88e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e88e0) {
            ctx->pc = 0x2E88E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88E0u;
            // 0x2e88e4: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8900u;
            goto label_2e8900;
        }
    }
    ctx->pc = 0x2E88E8u;
    // 0x2e88e8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e88ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E88ECu;
    {
        const bool branch_taken_0x2e88ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e88ec) {
            ctx->pc = 0x2E88FCu;
            goto label_2e88fc;
        }
    }
    ctx->pc = 0x2E88F4u;
    // 0x2e88f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E88F4u;
    {
        const bool branch_taken_0x2e88f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88f4) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E88FCu;
label_2e88fc:
    // 0x2e88fc: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e88fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8900:
    // 0x2e8900: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e8900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e8904: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E8904u;
    {
        const bool branch_taken_0x2e8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8904u;
            // 0x2e8908: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8904) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E890Cu;
label_2e890c:
    // 0x2e890c: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e890cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8910:
    // 0x2e8910: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e8910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e8914: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E8914u;
    {
        const bool branch_taken_0x2e8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8914u;
            // 0x2e8918: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8914) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E891Cu;
label_2e891c:
    // 0x2e891c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2e891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2e8920: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8920u;
    {
        const bool branch_taken_0x2e8920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8920) {
            ctx->pc = 0x2E8944u;
            goto label_2e8944;
        }
    }
    ctx->pc = 0x2E8928u;
    // 0x2e8928: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x2e8928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2e892c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E892Cu;
    {
        const bool branch_taken_0x2e892c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e892c) {
            ctx->pc = 0x2E8930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E892Cu;
            // 0x2e8930: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E893Cu;
            goto label_2e893c;
        }
    }
    ctx->pc = 0x2E8934u;
    // 0x2e8934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8934u;
    {
        const bool branch_taken_0x2e8934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8934) {
            ctx->pc = 0x2E8944u;
            goto label_2e8944;
        }
    }
    ctx->pc = 0x2E893Cu;
label_2e893c:
    // 0x2e893c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e8940: 0xa2230054  sb          $v1, 0x54($s1)
    ctx->pc = 0x2e8940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
label_2e8944:
    // 0x2e8944: 0x9624007a  lhu         $a0, 0x7A($s1)
    ctx->pc = 0x2e8944u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_2e8948:
    // 0x2e8948: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2e894c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E894Cu;
    {
        const bool branch_taken_0x2e894c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e894c) {
            ctx->pc = 0x2E8950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E894Cu;
            // 0x2e8950: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E895Cu;
            goto label_2e895c;
        }
    }
    ctx->pc = 0x2E8954u;
    // 0x2e8954: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E8954u;
    {
        const bool branch_taken_0x2e8954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8954) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E895Cu;
label_2e895c:
    // 0x2e895c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e8960: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8960u;
    {
        const bool branch_taken_0x2e8960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8960u;
            // 0x2e8964: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8960) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E8968u;
label_2e8968:
    // 0x2e8968: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2e8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e896c: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E896Cu;
    {
        const bool branch_taken_0x2e896c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e896c) {
            ctx->pc = 0x2E8970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E896Cu;
            // 0x2e8970: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E898Cu;
            goto label_2e898c;
        }
    }
    ctx->pc = 0x2E8974u;
    // 0x2e8974: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x2e8974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e8978: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8978u;
    {
        const bool branch_taken_0x2e8978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8978) {
            ctx->pc = 0x2E8988u;
            goto label_2e8988;
        }
    }
    ctx->pc = 0x2E8980u;
    // 0x2e8980: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E8980u;
    {
        const bool branch_taken_0x2e8980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8980) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E8988u;
label_2e8988:
    // 0x2e8988: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e8988u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e898c:
    // 0x2e898c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e8990: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8990u;
    {
        const bool branch_taken_0x2e8990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8990u;
            // 0x2e8994: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8990) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E8998u;
label_2e8998:
    // 0x2e8998: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e8998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e899c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E899Cu;
    {
        const bool branch_taken_0x2e899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e899c) {
            ctx->pc = 0x2E89A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E899Cu;
            // 0x2e89a0: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E89ACu;
            goto label_2e89ac;
        }
    }
    ctx->pc = 0x2E89A4u;
    // 0x2e89a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E89A4u;
    {
        const bool branch_taken_0x2e89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89a4) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E89ACu;
label_2e89ac:
    // 0x2e89ac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e89acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e89b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E89B0u;
    {
        const bool branch_taken_0x2e89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89B0u;
            // 0x2e89b4: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89b0) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E89B8u;
label_2e89b8:
    // 0x2e89b8: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2e89bc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E89BCu;
    {
        const bool branch_taken_0x2e89bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e89bc) {
            ctx->pc = 0x2E89C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89BCu;
            // 0x2e89c0: 0x92230054  lbu         $v1, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E89CCu;
            goto label_2e89cc;
        }
    }
    ctx->pc = 0x2E89C4u;
    // 0x2e89c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E89C4u;
    {
        const bool branch_taken_0x2e89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89c4) {
            ctx->pc = 0x2E89D4u;
            goto label_2e89d4;
        }
    }
    ctx->pc = 0x2E89CCu;
label_2e89cc:
    // 0x2e89cc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e89ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e89d0: 0xa2230054  sb          $v1, 0x54($s1)
    ctx->pc = 0x2e89d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
label_2e89d4:
    // 0x2e89d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e89d8: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2e89d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2e89dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e89e0: 0x94640f00  lhu         $a0, 0xF00($v1)
    ctx->pc = 0x2e89e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2e89e4: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x2e89e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2e89e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e89e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e89ec: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2e89ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2e89f0: 0x67202a  slt         $a0, $v1, $a3
    ctx->pc = 0x2e89f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e89f4: 0x1480006e  bnez        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2E89F4u;
    {
        const bool branch_taken_0x2e89f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89F4u;
            // 0x2e89f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89f4) {
            ctx->pc = 0x2E8BB0u;
            goto label_2e8bb0;
        }
    }
    ctx->pc = 0x2E89FCu;
    // 0x2e89fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2e89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2e8a00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e8a04: 0x8c8489d0  lw          $a0, -0x7630($a0)
    ctx->pc = 0x2e8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937040)));
    // 0x2e8a08: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x2e8a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2e8a0c: 0x10c50068  beq         $a2, $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2E8A0Cu;
    {
        const bool branch_taken_0x2e8a0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e8a0c) {
            ctx->pc = 0x2E8BB0u;
            goto label_2e8bb0;
        }
    }
    ctx->pc = 0x2E8A14u;
    // 0x2e8a14: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e8a18: 0x10c40065  beq         $a2, $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E8A18u;
    {
        const bool branch_taken_0x2e8a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a18) {
            ctx->pc = 0x2E8BB0u;
            goto label_2e8bb0;
        }
    }
    ctx->pc = 0x2E8A20u;
    // 0x2e8a20: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e8a24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e8a28: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x2e8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
    // 0x2e8a2c: 0x8c860968  lw          $a2, 0x968($a0)
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x2e8a30: 0x10c50036  beq         $a2, $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E8A30u;
    {
        const bool branch_taken_0x2e8a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e8a30) {
            ctx->pc = 0x2E8B0Cu;
            goto label_2e8b0c;
        }
    }
    ctx->pc = 0x2E8A38u;
    // 0x2e8a38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e8a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e8a3c: 0x50c40022  beql        $a2, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E8A3Cu;
    {
        const bool branch_taken_0x2e8a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a3c) {
            ctx->pc = 0x2E8A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A3Cu;
            // 0x2e8a40: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8AC8u;
            goto label_2e8ac8;
        }
    }
    ctx->pc = 0x2E8A44u;
    // 0x2e8a44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8a48: 0x50c40011  beql        $a2, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E8A48u;
    {
        const bool branch_taken_0x2e8a48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a48) {
            ctx->pc = 0x2E8A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A48u;
            // 0x2e8a4c: 0x24e40004  addiu       $a0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A90u;
            goto label_2e8a90;
        }
    }
    ctx->pc = 0x2E8A50u;
    // 0x2e8a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8a54: 0x10c40003  beq         $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A54u;
    {
        const bool branch_taken_0x2e8a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a54) {
            ctx->pc = 0x2E8A64u;
            goto label_2e8a64;
        }
    }
    ctx->pc = 0x2E8A5Cu;
    // 0x2e8a5c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2E8A5Cu;
    {
        const bool branch_taken_0x2e8a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a5c) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8A64u;
label_2e8a64:
    // 0x2e8a64: 0x50670005  beql        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8A64u;
    {
        const bool branch_taken_0x2e8a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e8a64) {
            ctx->pc = 0x2E8A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A64u;
            // 0x2e8a68: 0x92240054  lbu         $a0, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A7Cu;
            goto label_2e8a7c;
        }
    }
    ctx->pc = 0x2E8A6Cu;
    // 0x2e8a6c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e8a70: 0x14640030  bne         $v1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E8A70u;
    {
        const bool branch_taken_0x2e8a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a70) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8A78u;
    // 0x2e8a78: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2e8a78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8a7c:
    // 0x2e8a7c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2e8a80: 0x34700aae  ori         $s0, $v1, 0xAAE
    ctx->pc = 0x2e8a80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2734);
    // 0x2e8a84: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x2e8a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x2e8a88: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E8A88u;
    {
        const bool branch_taken_0x2e8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A88u;
            // 0x2e8a8c: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a88) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8A90u;
label_2e8a90:
    // 0x2e8a90: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8A90u;
    {
        const bool branch_taken_0x2e8a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a90) {
            ctx->pc = 0x2E8A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A90u;
            // 0x2e8a94: 0x92240054  lbu         $a0, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8AB4u;
            goto label_2e8ab4;
        }
    }
    ctx->pc = 0x2E8A98u;
    // 0x2e8a98: 0x24e40005  addiu       $a0, $a3, 0x5
    ctx->pc = 0x2e8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x2e8a9c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8A9Cu;
    {
        const bool branch_taken_0x2e8a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8a9c) {
            ctx->pc = 0x2E8AB0u;
            goto label_2e8ab0;
        }
    }
    ctx->pc = 0x2E8AA4u;
    // 0x2e8aa4: 0x24e40006  addiu       $a0, $a3, 0x6
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x2e8aa8: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E8AA8u;
    {
        const bool branch_taken_0x2e8aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8aa8) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8AB0u;
label_2e8ab0:
    // 0x2e8ab0: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2e8ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8ab4:
    // 0x2e8ab4: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x2e8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x2e8ab8: 0x34700cae  ori         $s0, $v1, 0xCAE
    ctx->pc = 0x2e8ab8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3246);
    // 0x2e8abc: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x2e8abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x2e8ac0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8AC0u;
    {
        const bool branch_taken_0x2e8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AC0u;
            // 0x2e8ac4: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ac0) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E8AC8u;
    {
        const bool branch_taken_0x2e8ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8ac8) {
            ctx->pc = 0x2E8ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AC8u;
            // 0x2e8acc: 0x92240054  lbu         $a0, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8AF8u;
            goto label_2e8af8;
        }
    }
    ctx->pc = 0x2E8AD0u;
    // 0x2e8ad0: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2e8ad4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8AD4u;
    {
        const bool branch_taken_0x2e8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8ad4) {
            ctx->pc = 0x2E8AF4u;
            goto label_2e8af4;
        }
    }
    ctx->pc = 0x2E8ADCu;
    // 0x2e8adc: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x2e8adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2e8ae0: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8AE0u;
    {
        const bool branch_taken_0x2e8ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e8ae0) {
            ctx->pc = 0x2E8AF4u;
            goto label_2e8af4;
        }
    }
    ctx->pc = 0x2E8AE8u;
    // 0x2e8ae8: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x2e8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e8aec: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E8AECu;
    {
        const bool branch_taken_0x2e8aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8aec) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2e8af4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8af8:
    // 0x2e8af8: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x2e8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x2e8afc: 0x34700fae  ori         $s0, $v1, 0xFAE
    ctx->pc = 0x2e8afcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4014);
    // 0x2e8b00: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x2e8b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x2e8b04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E8B04u;
    {
        const bool branch_taken_0x2e8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B04u;
            // 0x2e8b08: 0xa2230054  sb          $v1, 0x54($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b04) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8B0Cu;
label_2e8b0c:
    // 0x2e8b0c: 0x50670005  beql        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8B0Cu;
    {
        const bool branch_taken_0x2e8b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e8b0c) {
            ctx->pc = 0x2E8B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B0Cu;
            // 0x2e8b10: 0x92240054  lbu         $a0, 0x54($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8B14u;
    // 0x2e8b14: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x2e8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e8b18: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8B18u;
    {
        const bool branch_taken_0x2e8b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8b18) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8B20u;
    // 0x2e8b20: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2e8b20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8b24:
    // 0x2e8b24: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x2e8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x2e8b28: 0x347012ae  ori         $s0, $v1, 0x12AE
    ctx->pc = 0x2e8b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4782);
    // 0x2e8b2c: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x2e8b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x2e8b30: 0xa2230054  sb          $v1, 0x54($s1)
    ctx->pc = 0x2e8b30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 3));
label_2e8b34:
    // 0x2e8b34: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E8B34u;
    {
        const bool branch_taken_0x2e8b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b34) {
            ctx->pc = 0x2E8BB0u;
            goto label_2e8bb0;
        }
    }
    ctx->pc = 0x2E8B3Cu;
    // 0x2e8b3c: 0xc040180  jal         func_100600
    ctx->pc = 0x2E8B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B44u);
    ctx->pc = 0x2E8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B3Cu;
            // 0x2e8b40: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B44u; }
        if (ctx->pc != 0x2E8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B44u; }
        if (ctx->pc != 0x2E8B44u) { return; }
    }
    ctx->pc = 0x2E8B44u;
label_2e8b44:
    // 0x2e8b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e8b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b48: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E8B48u;
    {
        const bool branch_taken_0x2e8b48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b48) {
            ctx->pc = 0x2E8B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B48u;
            // 0x2e8b4c: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B88u;
            goto label_2e8b88;
        }
    }
    ctx->pc = 0x2E8B50u;
    // 0x2e8b50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2e8b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8b58: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x2e8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x2e8b5c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e8b60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2e8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2e8b64: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2e8b68: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2E8B68u;
    SET_GPR_U32(ctx, 31, 0x2E8B70u);
    ctx->pc = 0x2E8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B68u;
            // 0x2e8b6c: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B70u; }
        if (ctx->pc != 0x2E8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B70u; }
        if (ctx->pc != 0x2E8B70u) { return; }
    }
    ctx->pc = 0x2E8B70u;
label_2e8b70:
    // 0x2e8b70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e8b74: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x2e8b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2e8b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b7c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2E8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B84u);
    ctx->pc = 0x2E8B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B7Cu;
            // 0x2e8b80: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B84u; }
        if (ctx->pc != 0x2E8B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B84u; }
        if (ctx->pc != 0x2E8B84u) { return; }
    }
    ctx->pc = 0x2E8B84u;
label_2e8b84:
    // 0x2e8b84: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x2e8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_2e8b88:
    // 0x2e8b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b8c: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x2e8b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x2e8b90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e8b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e8b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e8ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ba4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e8ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e8ba8: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x2E8BA8u;
    SET_GPR_U32(ctx, 31, 0x2E8BB0u);
    ctx->pc = 0x2E8BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BA8u;
            // 0x2e8bac: 0xae3200e4  sw          $s2, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BB0u; }
        if (ctx->pc != 0x2E8BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BB0u; }
        if (ctx->pc != 0x2E8BB0u) { return; }
    }
    ctx->pc = 0x2E8BB0u;
label_2e8bb0:
    // 0x2e8bb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8bb4:
    // 0x2e8bb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BC0u;
            // 0x2e8bc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8BC8u;
    // 0x2e8bc8: 0x0  nop
    ctx->pc = 0x2e8bc8u;
    // NOP
    // 0x2e8bcc: 0x0  nop
    ctx->pc = 0x2e8bccu;
    // NOP
}
