#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159790
// Address: 0x159790 - 0x159b50
void sub_00159790_0x159790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159790_0x159790");
#endif

    switch (ctx->pc) {
        case 0x1598bcu: goto label_1598bc;
        case 0x1598f4u: goto label_1598f4;
        case 0x15992cu: goto label_15992c;
        case 0x159964u: goto label_159964;
        case 0x159988u: goto label_159988;
        case 0x1599c4u: goto label_1599c4;
        case 0x1599f0u: goto label_1599f0;
        case 0x159a10u: goto label_159a10;
        case 0x159a3cu: goto label_159a3c;
        case 0x159adcu: goto label_159adc;
        case 0x159b0cu: goto label_159b0c;
        default: break;
    }

    ctx->pc = 0x159790u;

    // 0x159790: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x159794: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x159794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x159798: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x159798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15979c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1597a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1597a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1597a4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1597a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1597a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1597ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1597acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1597b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1597b4: 0x24046d00  addiu       $a0, $zero, 0x6D00
    ctx->pc = 0x1597b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27904));
    // 0x1597b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1597b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1597bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1597bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1597c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1597c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1597c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1597c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1597c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1597cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1597ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597d0: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x1597d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1597d4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x1597d8: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x1597d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1597dc: 0x24e72310  addiu       $a3, $a3, 0x2310
    ctx->pc = 0x1597dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8976));
    // 0x1597e0: 0x94d4000c  lhu         $s4, 0xC($a2)
    ctx->pc = 0x1597e0u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1597e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1597e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597e8: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1597e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1597ec: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x1597ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x1597f0: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1597f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1597f4: 0x94d3000e  lhu         $s3, 0xE($a2)
    ctx->pc = 0x1597f4u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1597f8: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x1597f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1597fc: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x1597fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x159800: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x159800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x159804: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x159804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x159808: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x159808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15980c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x15980cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x159810: 0x90d20000  lbu         $s2, 0x0($a2)
    ctx->pc = 0x159810u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159814: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x159814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x159818: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x159818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x15981c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x15981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x159820: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x159820u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x159824: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x159824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x159828: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x159828u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x15982c: 0x10a40042  beq         $a1, $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x15982Cu;
    {
        const bool branch_taken_0x15982c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x159830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15982Cu;
            // 0x159830: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15982c) {
            ctx->pc = 0x159938u;
            goto label_159938;
        }
    }
    ctx->pc = 0x159834u;
    // 0x159834: 0x24036c00  addiu       $v1, $zero, 0x6C00
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x159838: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x159838u;
    {
        const bool branch_taken_0x159838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159838) {
            ctx->pc = 0x15983Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159838u;
            // 0x15983c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15993Cu;
            goto label_15993c;
        }
    }
    ctx->pc = 0x159840u;
    // 0x159840: 0x24036b00  addiu       $v1, $zero, 0x6B00
    ctx->pc = 0x159840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27392));
    // 0x159844: 0x50a3002f  beql        $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x159844u;
    {
        const bool branch_taken_0x159844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159844) {
            ctx->pc = 0x159848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159844u;
            // 0x159848: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159904u;
            goto label_159904;
        }
    }
    ctx->pc = 0x15984Cu;
    // 0x15984c: 0x24036a00  addiu       $v1, $zero, 0x6A00
    ctx->pc = 0x15984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x159850: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x159850u;
    {
        const bool branch_taken_0x159850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159850) {
            ctx->pc = 0x159900u;
            goto label_159900;
        }
    }
    ctx->pc = 0x159858u;
    // 0x159858: 0x24036900  addiu       $v1, $zero, 0x6900
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
    // 0x15985c: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x15985Cu;
    {
        const bool branch_taken_0x15985c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15985c) {
            ctx->pc = 0x159860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15985Cu;
            // 0x159860: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1598CCu;
            goto label_1598cc;
        }
    }
    ctx->pc = 0x159864u;
    // 0x159864: 0x24036800  addiu       $v1, $zero, 0x6800
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x159868: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x159868u;
    {
        const bool branch_taken_0x159868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159868) {
            ctx->pc = 0x1598C8u;
            goto label_1598c8;
        }
    }
    ctx->pc = 0x159870u;
    // 0x159870: 0x24036700  addiu       $v1, $zero, 0x6700
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    // 0x159874: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159874u;
    {
        const bool branch_taken_0x159874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159874) {
            ctx->pc = 0x159878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159874u;
            // 0x159878: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159894u;
            goto label_159894;
        }
    }
    ctx->pc = 0x15987Cu;
    // 0x15987c: 0x24036600  addiu       $v1, $zero, 0x6600
    ctx->pc = 0x15987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x159880: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159880u;
    {
        const bool branch_taken_0x159880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159880) {
            ctx->pc = 0x159890u;
            goto label_159890;
        }
    }
    ctx->pc = 0x159888u;
    // 0x159888: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x159888u;
    {
        const bool branch_taken_0x159888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159888u;
            // 0x15988c: 0x7ba300f0  lq          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159888) {
            ctx->pc = 0x159970u;
            goto label_159970;
        }
    }
    ctx->pc = 0x159890u;
label_159890:
    // 0x159890: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x159890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159894:
    // 0x159894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159898: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15989c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15989cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1598a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1598a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1598a8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1598a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598ac: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1598acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598b0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1598b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598b4: 0xc056704  jal         func_159C10
    ctx->pc = 0x1598B4u;
    SET_GPR_U32(ctx, 31, 0x1598BCu);
    ctx->pc = 0x1598B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1598B4u;
            // 0x1598b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598BCu; }
        if (ctx->pc != 0x1598BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598BCu; }
        if (ctx->pc != 0x1598BCu) { return; }
    }
    ctx->pc = 0x1598BCu;
label_1598bc:
    // 0x1598bc: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1598c0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1598C0u;
    {
        const bool branch_taken_0x1598c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598C0u;
            // 0x1598c4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598c0) {
            ctx->pc = 0x15996Cu;
            goto label_15996c;
        }
    }
    ctx->pc = 0x1598C8u;
label_1598c8:
    // 0x1598c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1598c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1598cc:
    // 0x1598cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1598ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1598d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1598d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598d8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1598dc: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1598e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1598e4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1598e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598e8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1598e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598ec: 0xc056704  jal         func_159C10
    ctx->pc = 0x1598ECu;
    SET_GPR_U32(ctx, 31, 0x1598F4u);
    ctx->pc = 0x1598F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1598ECu;
            // 0x1598f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598F4u; }
        if (ctx->pc != 0x1598F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598F4u; }
        if (ctx->pc != 0x1598F4u) { return; }
    }
    ctx->pc = 0x1598F4u;
label_1598f4:
    // 0x1598f4: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x1598f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1598f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1598F8u;
    {
        const bool branch_taken_0x1598f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598F8u;
            // 0x1598fc: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f8) {
            ctx->pc = 0x15996Cu;
            goto label_15996c;
        }
    }
    ctx->pc = 0x159900u;
label_159900:
    // 0x159900: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x159900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_159904:
    // 0x159904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159908: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15990c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159910: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159914: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159918: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15991c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x15991cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159920: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159920u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159924: 0xc056704  jal         func_159C10
    ctx->pc = 0x159924u;
    SET_GPR_U32(ctx, 31, 0x15992Cu);
    ctx->pc = 0x159928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159924u;
            // 0x159928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15992Cu; }
        if (ctx->pc != 0x15992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15992Cu; }
        if (ctx->pc != 0x15992Cu) { return; }
    }
    ctx->pc = 0x15992Cu;
label_15992c:
    // 0x15992c: 0x26b50200  addiu       $s5, $s5, 0x200
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x159930: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x159930u;
    {
        const bool branch_taken_0x159930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159930u;
            // 0x159934: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159930) {
            ctx->pc = 0x15996Cu;
            goto label_15996c;
        }
    }
    ctx->pc = 0x159938u;
label_159938:
    // 0x159938: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15993c:
    // 0x15993c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159940: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159944: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x159944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15994c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x15994cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x159950: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x159950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159954: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159958: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159958u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15995c: 0xc056704  jal         func_159C10
    ctx->pc = 0x15995Cu;
    SET_GPR_U32(ctx, 31, 0x159964u);
    ctx->pc = 0x159960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15995Cu;
            // 0x159960: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159964u; }
        if (ctx->pc != 0x159964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159964u; }
        if (ctx->pc != 0x159964u) { return; }
    }
    ctx->pc = 0x159964u;
label_159964:
    // 0x159964: 0x26b50400  addiu       $s5, $s5, 0x400
    ctx->pc = 0x159964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x159968: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x159968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_15996c:
    // 0x15996c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x15996cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_159970:
    // 0x159970: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x159970u;
    {
        const bool branch_taken_0x159970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159970) {
            ctx->pc = 0x159974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159970u;
            // 0x159974: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159A90u;
            goto label_159a90;
        }
    }
    ctx->pc = 0x159978u;
    // 0x159978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15997c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x15997Cu;
    {
        const bool branch_taken_0x15997c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15997Cu;
            // 0x159980: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15997c) {
            ctx->pc = 0x159B0Cu;
            goto label_159b0c;
        }
    }
    ctx->pc = 0x159984u;
    // 0x159984: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x159984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_159988:
    // 0x159988: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x159988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15998c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x15998Cu;
    {
        const bool branch_taken_0x15998c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15998c) {
            ctx->pc = 0x1599F8u;
            goto label_1599f8;
        }
    }
    ctx->pc = 0x159994u;
    // 0x159994: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x159994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159998: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x159998u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15999c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x15999Cu;
    {
        const bool branch_taken_0x15999c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15999c) {
            ctx->pc = 0x1599F8u;
            goto label_1599f8;
        }
    }
    ctx->pc = 0x1599A4u;
    // 0x1599a4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1599a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1599a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1599ac: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1599b0: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x1599b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1599b4: 0x542806  srlv        $a1, $s4, $v0
    ctx->pc = 0x1599b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x1599b8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1599b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1599bc: 0xc0566d4  jal         func_159B50
    ctx->pc = 0x1599BCu;
    SET_GPR_U32(ctx, 31, 0x1599C4u);
    ctx->pc = 0x1599C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599BCu;
            // 0x1599c0: 0x533006  srlv        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159B50u;
    if (runtime->hasFunction(0x159B50u)) {
        auto targetFn = runtime->lookupFunction(0x159B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599C4u; }
        if (ctx->pc != 0x1599C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159B50_0x159b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599C4u; }
        if (ctx->pc != 0x1599C4u) { return; }
    }
    ctx->pc = 0x1599C4u;
label_1599c4:
    // 0x1599c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1599c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1599c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1599c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599cc: 0x8fa8011c  lw          $t0, 0x11C($sp)
    ctx->pc = 0x1599ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1599d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1599d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599d4: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1599d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1599d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1599dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599e0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1599e4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1599e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599e8: 0xc05701c  jal         func_15C070
    ctx->pc = 0x1599E8u;
    SET_GPR_U32(ctx, 31, 0x1599F0u);
    ctx->pc = 0x1599ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599E8u;
            // 0x1599ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C070u;
    if (runtime->hasFunction(0x15C070u)) {
        auto targetFn = runtime->lookupFunction(0x15C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599F0u; }
        if (ctx->pc != 0x1599F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C070_0x15c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599F0u; }
        if (ctx->pc != 0x1599F0u) { return; }
    }
    ctx->pc = 0x1599F0u;
label_1599f0:
    // 0x1599f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1599F0u;
            // 0x1599f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x159A40u;
            goto label_159a40;
        }
    }
    ctx->pc = 0x1599F8u;
label_1599f8:
    // 0x1599f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1599f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1599fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x159a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a04: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x159a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x159a08: 0xc0566d4  jal         func_159B50
    ctx->pc = 0x159A08u;
    SET_GPR_U32(ctx, 31, 0x159A10u);
    ctx->pc = 0x159A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A08u;
            // 0x159a0c: 0x27a80118  addiu       $t0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159B50u;
    if (runtime->hasFunction(0x159B50u)) {
        auto targetFn = runtime->lookupFunction(0x159B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A10u; }
        if (ctx->pc != 0x159A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159B50_0x159b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A10u; }
        if (ctx->pc != 0x159A10u) { return; }
    }
    ctx->pc = 0x159A10u;
label_159a10:
    // 0x159a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159a14: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159a14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a18: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x159a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x159a1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a20: 0x8fa8011c  lw          $t0, 0x11C($sp)
    ctx->pc = 0x159a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x159a24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x159a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a28: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x159a28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x159a2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x159a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a30: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a34: 0xc05701c  jal         func_15C070
    ctx->pc = 0x159A34u;
    SET_GPR_U32(ctx, 31, 0x159A3Cu);
    ctx->pc = 0x159A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A34u;
            // 0x159a38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C070u;
    if (runtime->hasFunction(0x15C070u)) {
        auto targetFn = runtime->lookupFunction(0x15C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A3Cu; }
        if (ctx->pc != 0x159A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C070_0x15c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A3Cu; }
        if (ctx->pc != 0x159A3Cu) { return; }
    }
    ctx->pc = 0x159A3Cu;
label_159a3c:
    // 0x159a3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x159a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159a40:
    // 0x159a40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x159a44: 0x2932018  mult        $a0, $s4, $s3
    ctx->pc = 0x159a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159a48: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x159a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159a4c: 0x14a042  srl         $s4, $s4, 1
    ctx->pc = 0x159a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x159a50: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x159a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x159a54: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x159a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x159a58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x159a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x159a5c: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x159A5Cu;
    {
        const bool branch_taken_0x159a5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A5Cu;
            // 0x159a60: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a5c) {
            ctx->pc = 0x159B1Cu;
            goto label_159b1c;
        }
    }
    ctx->pc = 0x159A64u;
    // 0x159a64: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x159a64u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x159a68: 0x5260002d  beql        $s3, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x159A68u;
    {
        const bool branch_taken_0x159a68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x159a68) {
            ctx->pc = 0x159A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159A68u;
            // 0x159a6c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A70u;
    // 0x159a70: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x159a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x159a74: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x159a74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x159a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159a7c: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x159a7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x159a80: 0x5460ffc1  bnel        $v1, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x159A80u;
    {
        const bool branch_taken_0x159a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a80) {
            ctx->pc = 0x159A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159A80u;
            // 0x159a84: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159988;
        }
    }
    ctx->pc = 0x159A88u;
    // 0x159a88: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x159A88u;
    {
        const bool branch_taken_0x159a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A88u;
            // 0x159a8c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a88) {
            ctx->pc = 0x159B10u;
            goto label_159b10;
        }
    }
    ctx->pc = 0x159A90u;
label_159a90:
    // 0x159a90: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x159a90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x159a94: 0x54200014  bnel        $at, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x159A94u;
    {
        const bool branch_taken_0x159a94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a94) {
            ctx->pc = 0x159A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159A94u;
            // 0x159a98: 0x8fa60100  lw          $a2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159AE8u;
            goto label_159ae8;
        }
    }
    ctx->pc = 0x159A9Cu;
    // 0x159a9c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x159a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159aa0: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x159aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x159aa4: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x159AA4u;
    {
        const bool branch_taken_0x159aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x159aa4) {
            ctx->pc = 0x159AE4u;
            goto label_159ae4;
        }
    }
    ctx->pc = 0x159AACu;
    // 0x159aac: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x159aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x159ab0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ab4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159ab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ab8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159ab8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159abc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x159abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ac4: 0x544006  srlv        $t0, $s4, $v0
    ctx->pc = 0x159ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x159ac8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x159acc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x159accu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x159ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159ad4: 0xc05701c  jal         func_15C070
    ctx->pc = 0x159AD4u;
    SET_GPR_U32(ctx, 31, 0x159ADCu);
    ctx->pc = 0x159AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159AD4u;
            // 0x159ad8: 0x534806  srlv        $t1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C070u;
    if (runtime->hasFunction(0x15C070u)) {
        auto targetFn = runtime->lookupFunction(0x15C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ADCu; }
        if (ctx->pc != 0x159ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C070_0x15c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ADCu; }
        if (ctx->pc != 0x159ADCu) { return; }
    }
    ctx->pc = 0x159ADCu;
label_159adc:
    // 0x159adc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159ADCu;
    {
        const bool branch_taken_0x159adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159adc) {
            ctx->pc = 0x159B0Cu;
            goto label_159b0c;
        }
    }
    ctx->pc = 0x159AE4u;
label_159ae4:
    // 0x159ae4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x159ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_159ae8:
    // 0x159ae8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159aec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x159aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x159af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159afc: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159afcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x159b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b04: 0xc05701c  jal         func_15C070
    ctx->pc = 0x159B04u;
    SET_GPR_U32(ctx, 31, 0x159B0Cu);
    ctx->pc = 0x159B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159B04u;
            // 0x159b08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C070u;
    if (runtime->hasFunction(0x15C070u)) {
        auto targetFn = runtime->lookupFunction(0x15C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B0Cu; }
        if (ctx->pc != 0x159B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C070_0x15c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B0Cu; }
        if (ctx->pc != 0x159B0Cu) { return; }
    }
    ctx->pc = 0x159B0Cu;
label_159b0c:
    // 0x159b0c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_159b10:
    // 0x159b10: 0xdc83ffe0  ld          $v1, -0x20($a0)
    ctx->pc = 0x159b10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x159b14: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x159b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x159b18: 0xfc83ffe0  sd          $v1, -0x20($a0)
    ctx->pc = 0x159b18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U64(ctx, 3));
label_159b1c:
    // 0x159b1c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x159b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_159b20:
    // 0x159b20: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x159b20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159b24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x159b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159b28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x159b28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159b2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x159b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159b30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x159b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x159b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159b38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x159b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159b40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159b44: 0x3e00008  jr          $ra
    ctx->pc = 0x159B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B44u;
            // 0x159b48: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159B4Cu;
    // 0x159b4c: 0x0  nop
    ctx->pc = 0x159b4cu;
    // NOP
}
