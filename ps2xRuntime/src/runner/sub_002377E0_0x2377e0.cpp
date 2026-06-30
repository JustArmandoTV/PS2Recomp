#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002377E0
// Address: 0x2377e0 - 0x237930
void sub_002377E0_0x2377e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002377E0_0x2377e0");
#endif

    switch (ctx->pc) {
        case 0x2377e0u: goto label_2377e0;
        case 0x2377e4u: goto label_2377e4;
        case 0x2377e8u: goto label_2377e8;
        case 0x2377ecu: goto label_2377ec;
        case 0x2377f0u: goto label_2377f0;
        case 0x2377f4u: goto label_2377f4;
        case 0x2377f8u: goto label_2377f8;
        case 0x2377fcu: goto label_2377fc;
        case 0x237800u: goto label_237800;
        case 0x237804u: goto label_237804;
        case 0x237808u: goto label_237808;
        case 0x23780cu: goto label_23780c;
        case 0x237810u: goto label_237810;
        case 0x237814u: goto label_237814;
        case 0x237818u: goto label_237818;
        case 0x23781cu: goto label_23781c;
        case 0x237820u: goto label_237820;
        case 0x237824u: goto label_237824;
        case 0x237828u: goto label_237828;
        case 0x23782cu: goto label_23782c;
        case 0x237830u: goto label_237830;
        case 0x237834u: goto label_237834;
        case 0x237838u: goto label_237838;
        case 0x23783cu: goto label_23783c;
        case 0x237840u: goto label_237840;
        case 0x237844u: goto label_237844;
        case 0x237848u: goto label_237848;
        case 0x23784cu: goto label_23784c;
        case 0x237850u: goto label_237850;
        case 0x237854u: goto label_237854;
        case 0x237858u: goto label_237858;
        case 0x23785cu: goto label_23785c;
        case 0x237860u: goto label_237860;
        case 0x237864u: goto label_237864;
        case 0x237868u: goto label_237868;
        case 0x23786cu: goto label_23786c;
        case 0x237870u: goto label_237870;
        case 0x237874u: goto label_237874;
        case 0x237878u: goto label_237878;
        case 0x23787cu: goto label_23787c;
        case 0x237880u: goto label_237880;
        case 0x237884u: goto label_237884;
        case 0x237888u: goto label_237888;
        case 0x23788cu: goto label_23788c;
        case 0x237890u: goto label_237890;
        case 0x237894u: goto label_237894;
        case 0x237898u: goto label_237898;
        case 0x23789cu: goto label_23789c;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378a4u: goto label_2378a4;
        case 0x2378a8u: goto label_2378a8;
        case 0x2378acu: goto label_2378ac;
        case 0x2378b0u: goto label_2378b0;
        case 0x2378b4u: goto label_2378b4;
        case 0x2378b8u: goto label_2378b8;
        case 0x2378bcu: goto label_2378bc;
        case 0x2378c0u: goto label_2378c0;
        case 0x2378c4u: goto label_2378c4;
        case 0x2378c8u: goto label_2378c8;
        case 0x2378ccu: goto label_2378cc;
        case 0x2378d0u: goto label_2378d0;
        case 0x2378d4u: goto label_2378d4;
        case 0x2378d8u: goto label_2378d8;
        case 0x2378dcu: goto label_2378dc;
        case 0x2378e0u: goto label_2378e0;
        case 0x2378e4u: goto label_2378e4;
        case 0x2378e8u: goto label_2378e8;
        case 0x2378ecu: goto label_2378ec;
        case 0x2378f0u: goto label_2378f0;
        case 0x2378f4u: goto label_2378f4;
        case 0x2378f8u: goto label_2378f8;
        case 0x2378fcu: goto label_2378fc;
        case 0x237900u: goto label_237900;
        case 0x237904u: goto label_237904;
        case 0x237908u: goto label_237908;
        case 0x23790cu: goto label_23790c;
        case 0x237910u: goto label_237910;
        case 0x237914u: goto label_237914;
        case 0x237918u: goto label_237918;
        case 0x23791cu: goto label_23791c;
        case 0x237920u: goto label_237920;
        case 0x237924u: goto label_237924;
        case 0x237928u: goto label_237928;
        case 0x23792cu: goto label_23792c;
        default: break;
    }

    ctx->pc = 0x2377e0u;

label_2377e0:
    // 0x2377e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2377e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2377e4:
    // 0x2377e4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2377e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2377e8:
    // 0x2377e8: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2377e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2377ec:
    // 0x2377ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2377ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2377f0:
    // 0x2377f0: 0xc08de64  jal         func_237990
label_2377f4:
    if (ctx->pc == 0x2377F4u) {
        ctx->pc = 0x2377F4u;
            // 0x2377f4: 0x2508ce08  addiu       $t0, $t0, -0x31F8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954504));
        ctx->pc = 0x2377F8u;
        goto label_2377f8;
    }
    ctx->pc = 0x2377F0u;
    SET_GPR_U32(ctx, 31, 0x2377F8u);
    ctx->pc = 0x2377F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2377F0u;
            // 0x2377f4: 0x2508ce08  addiu       $t0, $t0, -0x31F8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237990u;
    if (runtime->hasFunction(0x237990u)) {
        auto targetFn = runtime->lookupFunction(0x237990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2377F8u; }
        if (ctx->pc != 0x2377F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237990_0x237990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2377F8u; }
        if (ctx->pc != 0x2377F8u) { return; }
    }
    ctx->pc = 0x2377F8u;
label_2377f8:
    // 0x2377f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2377f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2377fc:
    // 0x2377fc: 0x3e00008  jr          $ra
label_237800:
    if (ctx->pc == 0x237800u) {
        ctx->pc = 0x237800u;
            // 0x237800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x237804u;
        goto label_237804;
    }
    ctx->pc = 0x2377FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2377FCu;
            // 0x237800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237804u;
label_237804:
    // 0x237804: 0x0  nop
    ctx->pc = 0x237804u;
    // NOP
label_237808:
    // 0x237808: 0x0  nop
    ctx->pc = 0x237808u;
    // NOP
label_23780c:
    // 0x23780c: 0x0  nop
    ctx->pc = 0x23780cu;
    // NOP
label_237810:
    // 0x237810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_237814:
    // 0x237814: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_237818:
    // 0x237818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x237818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23781c:
    // 0x23781c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x23781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_237820:
    // 0x237820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x237820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_237824:
    // 0x237824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237828:
    // 0x237828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x237828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23782c:
    // 0x23782c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_237830:
    // 0x237830: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x237830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_237834:
    // 0x237834: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x237834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_237838:
    // 0x237838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23783c:
    // 0x23783c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x23783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_237840:
    // 0x237840: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x237840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_237844:
    // 0x237844: 0xace23030  sw          $v0, 0x3030($a3)
    ctx->pc = 0x237844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12336), GPR_U32(ctx, 2));
label_237848:
    // 0x237848: 0xace03050  sw          $zero, 0x3050($a3)
    ctx->pc = 0x237848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12368), GPR_U32(ctx, 0));
label_23784c:
    // 0x23784c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237850:
    // 0x237850: 0x24421a8c  addiu       $v0, $v0, 0x1A8C
    ctx->pc = 0x237850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6796));
label_237854:
    // 0x237854: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x237854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_237858:
    // 0x237858: 0x80a70010  lb          $a3, 0x10($a1)
    ctx->pc = 0x237858u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_23785c:
    // 0x23785c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237860:
    // 0x237860: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_237864:
    // 0x237864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237868:
    // 0x237868: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x237868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_23786c:
    // 0x23786c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_237870:
    // 0x237870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237874:
    // 0x237874: 0x90421a60  lbu         $v0, 0x1A60($v0)
    ctx->pc = 0x237874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6752)));
label_237878:
    // 0x237878: 0xa0c20010  sb          $v0, 0x10($a2)
    ctx->pc = 0x237878u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
label_23787c:
    // 0x23787c: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_237880:
    // 0x237880: 0xc092544  jal         func_249510
label_237884:
    if (ctx->pc == 0x237884u) {
        ctx->pc = 0x237884u;
            // 0x237884: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237888u;
        goto label_237888;
    }
    ctx->pc = 0x237880u;
    SET_GPR_U32(ctx, 31, 0x237888u);
    ctx->pc = 0x237884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237880u;
            // 0x237884: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249510u;
    if (runtime->hasFunction(0x249510u)) {
        auto targetFn = runtime->lookupFunction(0x249510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237888u; }
        if (ctx->pc != 0x237888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249510_0x249510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237888u; }
        if (ctx->pc != 0x237888u) { return; }
    }
    ctx->pc = 0x237888u;
label_237888:
    // 0x237888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23788c:
    // 0x23788c: 0x8c66ea20  lw          $a2, -0x15E0($v1)
    ctx->pc = 0x23788cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_237890:
    // 0x237890: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_237894:
    // 0x237894: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_237898:
    // 0x237898: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x237898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23789c:
    // 0x23789c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x23789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2378a0:
    // 0x2378a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2378a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2378a4:
    // 0x2378a4: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
label_2378a8:
    if (ctx->pc == 0x2378A8u) {
        ctx->pc = 0x2378A8u;
            // 0x2378a8: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x2378ACu;
        goto label_2378ac;
    }
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2378A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2378A4u;
            // 0x2378a8: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2378B0u;
            goto label_2378b0;
        }
    }
    ctx->pc = 0x2378ACu;
label_2378ac:
    // 0x2378ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2378acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2378b0:
    // 0x2378b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2378b4:
    if (ctx->pc == 0x2378B4u) {
        ctx->pc = 0x2378B8u;
        goto label_2378b8;
    }
    ctx->pc = 0x2378B0u;
    {
        const bool branch_taken_0x2378b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2378b0) {
            ctx->pc = 0x2378C0u;
            goto label_2378c0;
        }
    }
    ctx->pc = 0x2378B8u;
label_2378b8:
    // 0x2378b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2378bc:
    // 0x2378bc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2378bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2378c0:
    // 0x2378c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2378c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2378c4:
    // 0x2378c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2378c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2378c8:
    // 0x2378c8: 0x8c63ea20  lw          $v1, -0x15E0($v1)
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_2378cc:
    // 0x2378cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2378ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2378d0:
    // 0x2378d0: 0x50640010  beql        $v1, $a0, . + 4 + (0x10 << 2)
label_2378d4:
    if (ctx->pc == 0x2378D4u) {
        ctx->pc = 0x2378D4u;
            // 0x2378d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2378D8u;
        goto label_2378d8;
    }
    ctx->pc = 0x2378D0u;
    {
        const bool branch_taken_0x2378d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2378d0) {
            ctx->pc = 0x2378D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2378D0u;
            // 0x2378d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237914u;
            goto label_237914;
        }
    }
    ctx->pc = 0x2378D8u;
label_2378d8:
    // 0x2378d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2378dc:
    // 0x2378dc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2378e0:
    // 0x2378e0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2378e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_2378e4:
    // 0x2378e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2378e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2378e8:
    // 0x2378e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2378ec:
    if (ctx->pc == 0x2378ECu) {
        ctx->pc = 0x2378F0u;
        goto label_2378f0;
    }
    ctx->pc = 0x2378E8u;
    {
        const bool branch_taken_0x2378e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2378e8) {
            ctx->pc = 0x237910u;
            goto label_237910;
        }
    }
    ctx->pc = 0x2378F0u;
label_2378f0:
    // 0x2378f0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2378f4:
    // 0x2378f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2378f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2378f8:
    // 0x2378f8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2378fc:
    // 0x2378fc: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x2378fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_237900:
    // 0x237900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_237904:
    // 0x237904: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x237904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_237908:
    // 0x237908: 0x320f809  jalr        $t9
label_23790c:
    if (ctx->pc == 0x23790Cu) {
        ctx->pc = 0x23790Cu;
            // 0x23790c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237910u;
        goto label_237910;
    }
    ctx->pc = 0x237908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237910u);
        ctx->pc = 0x23790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237908u;
            // 0x23790c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x237910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x237910u; }
            if (ctx->pc != 0x237910u) { return; }
        }
        }
    }
    ctx->pc = 0x237910u;
label_237910:
    // 0x237910: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237914:
    // 0x237914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237918:
    // 0x237918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23791c:
    // 0x23791c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23791cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_237920:
    // 0x237920: 0x3e00008  jr          $ra
label_237924:
    if (ctx->pc == 0x237924u) {
        ctx->pc = 0x237924u;
            // 0x237924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x237928u;
        goto label_237928;
    }
    ctx->pc = 0x237920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237920u;
            // 0x237924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237928u;
label_237928:
    // 0x237928: 0x0  nop
    ctx->pc = 0x237928u;
    // NOP
label_23792c:
    // 0x23792c: 0x0  nop
    ctx->pc = 0x23792cu;
    // NOP
}
