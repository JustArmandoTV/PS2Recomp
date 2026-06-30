#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8770
// Address: 0x2f8770 - 0x2f8960
void sub_002F8770_0x2f8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8770_0x2f8770");
#endif

    switch (ctx->pc) {
        case 0x2f8770u: goto label_2f8770;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8778u: goto label_2f8778;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f8780u: goto label_2f8780;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8788u: goto label_2f8788;
        case 0x2f878cu: goto label_2f878c;
        case 0x2f8790u: goto label_2f8790;
        case 0x2f8794u: goto label_2f8794;
        case 0x2f8798u: goto label_2f8798;
        case 0x2f879cu: goto label_2f879c;
        case 0x2f87a0u: goto label_2f87a0;
        case 0x2f87a4u: goto label_2f87a4;
        case 0x2f87a8u: goto label_2f87a8;
        case 0x2f87acu: goto label_2f87ac;
        case 0x2f87b0u: goto label_2f87b0;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87b8u: goto label_2f87b8;
        case 0x2f87bcu: goto label_2f87bc;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87c4u: goto label_2f87c4;
        case 0x2f87c8u: goto label_2f87c8;
        case 0x2f87ccu: goto label_2f87cc;
        case 0x2f87d0u: goto label_2f87d0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87d8u: goto label_2f87d8;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87e0u: goto label_2f87e0;
        case 0x2f87e4u: goto label_2f87e4;
        case 0x2f87e8u: goto label_2f87e8;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f87f0u: goto label_2f87f0;
        case 0x2f87f4u: goto label_2f87f4;
        case 0x2f87f8u: goto label_2f87f8;
        case 0x2f87fcu: goto label_2f87fc;
        case 0x2f8800u: goto label_2f8800;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8808u: goto label_2f8808;
        case 0x2f880cu: goto label_2f880c;
        case 0x2f8810u: goto label_2f8810;
        case 0x2f8814u: goto label_2f8814;
        case 0x2f8818u: goto label_2f8818;
        case 0x2f881cu: goto label_2f881c;
        case 0x2f8820u: goto label_2f8820;
        case 0x2f8824u: goto label_2f8824;
        case 0x2f8828u: goto label_2f8828;
        case 0x2f882cu: goto label_2f882c;
        case 0x2f8830u: goto label_2f8830;
        case 0x2f8834u: goto label_2f8834;
        case 0x2f8838u: goto label_2f8838;
        case 0x2f883cu: goto label_2f883c;
        case 0x2f8840u: goto label_2f8840;
        case 0x2f8844u: goto label_2f8844;
        case 0x2f8848u: goto label_2f8848;
        case 0x2f884cu: goto label_2f884c;
        case 0x2f8850u: goto label_2f8850;
        case 0x2f8854u: goto label_2f8854;
        case 0x2f8858u: goto label_2f8858;
        case 0x2f885cu: goto label_2f885c;
        case 0x2f8860u: goto label_2f8860;
        case 0x2f8864u: goto label_2f8864;
        case 0x2f8868u: goto label_2f8868;
        case 0x2f886cu: goto label_2f886c;
        case 0x2f8870u: goto label_2f8870;
        case 0x2f8874u: goto label_2f8874;
        case 0x2f8878u: goto label_2f8878;
        case 0x2f887cu: goto label_2f887c;
        case 0x2f8880u: goto label_2f8880;
        case 0x2f8884u: goto label_2f8884;
        case 0x2f8888u: goto label_2f8888;
        case 0x2f888cu: goto label_2f888c;
        case 0x2f8890u: goto label_2f8890;
        case 0x2f8894u: goto label_2f8894;
        case 0x2f8898u: goto label_2f8898;
        case 0x2f889cu: goto label_2f889c;
        case 0x2f88a0u: goto label_2f88a0;
        case 0x2f88a4u: goto label_2f88a4;
        case 0x2f88a8u: goto label_2f88a8;
        case 0x2f88acu: goto label_2f88ac;
        case 0x2f88b0u: goto label_2f88b0;
        case 0x2f88b4u: goto label_2f88b4;
        case 0x2f88b8u: goto label_2f88b8;
        case 0x2f88bcu: goto label_2f88bc;
        case 0x2f88c0u: goto label_2f88c0;
        case 0x2f88c4u: goto label_2f88c4;
        case 0x2f88c8u: goto label_2f88c8;
        case 0x2f88ccu: goto label_2f88cc;
        case 0x2f88d0u: goto label_2f88d0;
        case 0x2f88d4u: goto label_2f88d4;
        case 0x2f88d8u: goto label_2f88d8;
        case 0x2f88dcu: goto label_2f88dc;
        case 0x2f88e0u: goto label_2f88e0;
        case 0x2f88e4u: goto label_2f88e4;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f88ecu: goto label_2f88ec;
        case 0x2f88f0u: goto label_2f88f0;
        case 0x2f88f4u: goto label_2f88f4;
        case 0x2f88f8u: goto label_2f88f8;
        case 0x2f88fcu: goto label_2f88fc;
        case 0x2f8900u: goto label_2f8900;
        case 0x2f8904u: goto label_2f8904;
        case 0x2f8908u: goto label_2f8908;
        case 0x2f890cu: goto label_2f890c;
        case 0x2f8910u: goto label_2f8910;
        case 0x2f8914u: goto label_2f8914;
        case 0x2f8918u: goto label_2f8918;
        case 0x2f891cu: goto label_2f891c;
        case 0x2f8920u: goto label_2f8920;
        case 0x2f8924u: goto label_2f8924;
        case 0x2f8928u: goto label_2f8928;
        case 0x2f892cu: goto label_2f892c;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8934u: goto label_2f8934;
        case 0x2f8938u: goto label_2f8938;
        case 0x2f893cu: goto label_2f893c;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8944u: goto label_2f8944;
        case 0x2f8948u: goto label_2f8948;
        case 0x2f894cu: goto label_2f894c;
        case 0x2f8950u: goto label_2f8950;
        case 0x2f8954u: goto label_2f8954;
        case 0x2f8958u: goto label_2f8958;
        case 0x2f895cu: goto label_2f895c;
        default: break;
    }

    ctx->pc = 0x2f8770u;

label_2f8770:
    // 0x2f8770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f8774:
    // 0x2f8774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8778:
    // 0x2f8778: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f8778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f877c:
    // 0x2f877c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8780:
    // 0x2f8780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f8784:
    // 0x2f8784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f8788:
    // 0x2f8788: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f8788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f878c:
    // 0x2f878c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f8790:
    // 0x2f8790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f8790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f8794:
    // 0x2f8794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f8798:
    // 0x2f8798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f879c:
    // 0x2f879c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2f879cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2f87a0:
    // 0x2f87a0: 0x8cb20020  lw          $s2, 0x20($a1)
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2f87a4:
    // 0x2f87a4: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
label_2f87a8:
    if (ctx->pc == 0x2F87A8u) {
        ctx->pc = 0x2F87A8u;
            // 0x2f87a8: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x2F87ACu;
        goto label_2f87ac;
    }
    ctx->pc = 0x2F87A4u;
    {
        const bool branch_taken_0x2f87a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F87A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87A4u;
            // 0x2f87a8: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87a4) {
            ctx->pc = 0x2F87C8u;
            goto label_2f87c8;
        }
    }
    ctx->pc = 0x2F87ACu;
label_2f87ac:
    // 0x2f87ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f87acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f87b0:
    // 0x2f87b0: 0x52430006  beql        $s2, $v1, . + 4 + (0x6 << 2)
label_2f87b4:
    if (ctx->pc == 0x2F87B4u) {
        ctx->pc = 0x2F87B4u;
            // 0x2f87b4: 0x327100ff  andi        $s1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2F87B8u;
        goto label_2f87b8;
    }
    ctx->pc = 0x2F87B0u;
    {
        const bool branch_taken_0x2f87b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f87b0) {
            ctx->pc = 0x2F87B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87B0u;
            // 0x2f87b4: 0x327100ff  andi        $s1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F87CCu;
            goto label_2f87cc;
        }
    }
    ctx->pc = 0x2F87B8u;
label_2f87b8:
    // 0x2f87b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2f87bc:
    if (ctx->pc == 0x2F87BCu) {
        ctx->pc = 0x2F87C0u;
        goto label_2f87c0;
    }
    ctx->pc = 0x2F87B8u;
    {
        const bool branch_taken_0x2f87b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f87b8) {
            ctx->pc = 0x2F87C8u;
            goto label_2f87c8;
        }
    }
    ctx->pc = 0x2F87C0u;
label_2f87c0:
    // 0x2f87c0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2f87c4:
    if (ctx->pc == 0x2F87C4u) {
        ctx->pc = 0x2F87C8u;
        goto label_2f87c8;
    }
    ctx->pc = 0x2F87C0u;
    {
        const bool branch_taken_0x2f87c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f87c0) {
            ctx->pc = 0x2F8940u;
            goto label_2f8940;
        }
    }
    ctx->pc = 0x2F87C8u;
label_2f87c8:
    // 0x2f87c8: 0x327100ff  andi        $s1, $s3, 0xFF
    ctx->pc = 0x2f87c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f87cc:
    // 0x2f87cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2f87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f87d0:
    // 0x2f87d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f87d4:
    // 0x2f87d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2f87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f87d8:
    // 0x2f87d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f87d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f87dc:
    // 0x2f87dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f87dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f87e0:
    // 0x2f87e0: 0x320f809  jalr        $t9
label_2f87e4:
    if (ctx->pc == 0x2F87E4u) {
        ctx->pc = 0x2F87E4u;
            // 0x2f87e4: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F87E8u;
        goto label_2f87e8;
    }
    ctx->pc = 0x2F87E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F87E8u);
        ctx->pc = 0x2F87E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87E0u;
            // 0x2f87e4: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F87E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F87E8u; }
            if (ctx->pc != 0x2F87E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F87E8u;
label_2f87e8:
    // 0x2f87e8: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2f87e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2f87ec:
    // 0x2f87ec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2f87f0:
    if (ctx->pc == 0x2F87F0u) {
        ctx->pc = 0x2F87F4u;
        goto label_2f87f4;
    }
    ctx->pc = 0x2F87ECu;
    {
        const bool branch_taken_0x2f87ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f87ec) {
            ctx->pc = 0x2F8838u;
            goto label_2f8838;
        }
    }
    ctx->pc = 0x2F87F4u;
label_2f87f4:
    // 0x2f87f4: 0x8e840044  lw          $a0, 0x44($s4)
    ctx->pc = 0x2f87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_2f87f8:
    // 0x2f87f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f87fc:
    if (ctx->pc == 0x2F87FCu) {
        ctx->pc = 0x2F87FCu;
            // 0x2f87fc: 0x8e820030  lw          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->pc = 0x2F8800u;
        goto label_2f8800;
    }
    ctx->pc = 0x2F87F8u;
    {
        const bool branch_taken_0x2f87f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f87f8) {
            ctx->pc = 0x2F87FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87F8u;
            // 0x2f87fc: 0x8e820030  lw          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8814u;
            goto label_2f8814;
        }
    }
    ctx->pc = 0x2F8800u;
label_2f8800:
    // 0x2f8800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8804:
    // 0x2f8804: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8808:
    // 0x2f8808: 0x320f809  jalr        $t9
label_2f880c:
    if (ctx->pc == 0x2F880Cu) {
        ctx->pc = 0x2F8810u;
        goto label_2f8810;
    }
    ctx->pc = 0x2F8808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8810u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8810u; }
            if (ctx->pc != 0x2F8810u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8810u;
label_2f8810:
    // 0x2f8810: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2f8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2f8814:
    // 0x2f8814: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x2f8814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_2f8818:
    // 0x2f8818: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f8818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f881c:
    // 0x2f881c: 0xae840030  sw          $a0, 0x30($s4)
    ctx->pc = 0x2f881cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 4));
label_2f8820:
    // 0x2f8820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8824:
    // 0x2f8824: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8828:
    // 0x2f8828: 0x320f809  jalr        $t9
label_2f882c:
    if (ctx->pc == 0x2F882Cu) {
        ctx->pc = 0x2F8830u;
        goto label_2f8830;
    }
    ctx->pc = 0x2F8828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8830u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8830u; }
            if (ctx->pc != 0x2F8830u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8830u;
label_2f8830:
    // 0x2f8830: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2f8834:
    if (ctx->pc == 0x2F8834u) {
        ctx->pc = 0x2F8834u;
            // 0x2f8834: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F8838u;
        goto label_2f8838;
    }
    ctx->pc = 0x2F8830u;
    {
        const bool branch_taken_0x2f8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8830u;
            // 0x2f8834: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8830) {
            ctx->pc = 0x2F88F0u;
            goto label_2f88f0;
        }
    }
    ctx->pc = 0x2F8838u;
label_2f8838:
    // 0x2f8838: 0x56400013  bnel        $s2, $zero, . + 4 + (0x13 << 2)
label_2f883c:
    if (ctx->pc == 0x2F883Cu) {
        ctx->pc = 0x2F883Cu;
            // 0x2f883c: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x2F8840u;
        goto label_2f8840;
    }
    ctx->pc = 0x2F8838u;
    {
        const bool branch_taken_0x2f8838 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8838) {
            ctx->pc = 0x2F883Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8838u;
            // 0x2f883c: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8888u;
            goto label_2f8888;
        }
    }
    ctx->pc = 0x2F8840u;
label_2f8840:
    // 0x2f8840: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x2f8840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2f8844:
    // 0x2f8844: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f8848:
    if (ctx->pc == 0x2F8848u) {
        ctx->pc = 0x2F8848u;
            // 0x2f8848: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F884Cu;
        goto label_2f884c;
    }
    ctx->pc = 0x2F8844u;
    {
        const bool branch_taken_0x2f8844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8844u;
            // 0x2f8848: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8844) {
            ctx->pc = 0x2F8870u;
            goto label_2f8870;
        }
    }
    ctx->pc = 0x2F884Cu;
label_2f884c:
    // 0x2f884c: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x2f884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2f8850:
    // 0x2f8850: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2f8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2f8854:
    // 0x2f8854: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f8854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f8858:
    // 0x2f8858: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2f8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2f885c:
    // 0x2f885c: 0x0  nop
    ctx->pc = 0x2f885cu;
    // NOP
label_2f8860:
    // 0x2f8860: 0x0  nop
    ctx->pc = 0x2f8860u;
    // NOP
label_2f8864:
    // 0x2f8864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2f8868:
    if (ctx->pc == 0x2F8868u) {
        ctx->pc = 0x2F886Cu;
        goto label_2f886c;
    }
    ctx->pc = 0x2F8864u;
    {
        const bool branch_taken_0x2f8864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8864) {
            ctx->pc = 0x2F8850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8850;
        }
    }
    ctx->pc = 0x2F886Cu;
label_2f886c:
    // 0x2f886c: 0x0  nop
    ctx->pc = 0x2f886cu;
    // NOP
label_2f8870:
    // 0x2f8870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8874:
    // 0x2f8874: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f8874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f8878:
    // 0x2f8878: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f8878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f887c:
    // 0x2f887c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2f887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_2f8880:
    // 0x2f8880: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f8884:
    if (ctx->pc == 0x2F8884u) {
        ctx->pc = 0x2F8884u;
            // 0x2f8884: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x2F8888u;
        goto label_2f8888;
    }
    ctx->pc = 0x2F8880u;
    {
        const bool branch_taken_0x2f8880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8880u;
            // 0x2f8884: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8880) {
            ctx->pc = 0x2F88B0u;
            goto label_2f88b0;
        }
    }
    ctx->pc = 0x2F8888u;
label_2f8888:
    // 0x2f8888: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2f888c:
    if (ctx->pc == 0x2F888Cu) {
        ctx->pc = 0x2F888Cu;
            // 0x2f888c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F8890u;
        goto label_2f8890;
    }
    ctx->pc = 0x2F8888u;
    {
        const bool branch_taken_0x2f8888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8888) {
            ctx->pc = 0x2F888Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8888u;
            // 0x2f888c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F88A4u;
            goto label_2f88a4;
        }
    }
    ctx->pc = 0x2F8890u;
label_2f8890:
    // 0x2f8890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8894:
    // 0x2f8894: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2f8898:
    if (ctx->pc == 0x2F8898u) {
        ctx->pc = 0x2F889Cu;
        goto label_2f889c;
    }
    ctx->pc = 0x2F8894u;
    {
        const bool branch_taken_0x2f8894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8894) {
            ctx->pc = 0x2F88A0u;
            goto label_2f88a0;
        }
    }
    ctx->pc = 0x2F889Cu;
label_2f889c:
    // 0x2f889c: 0xae830048  sw          $v1, 0x48($s4)
    ctx->pc = 0x2f889cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
label_2f88a0:
    // 0x2f88a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f88a4:
    // 0x2f88a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f88a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f88a8:
    // 0x2f88a8: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x2f88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_2f88ac:
    // 0x2f88ac: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x2f88acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_2f88b0:
    // 0x2f88b0: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x2f88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_2f88b4:
    // 0x2f88b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f88b8:
    if (ctx->pc == 0x2F88B8u) {
        ctx->pc = 0x2F88B8u;
            // 0x2f88b8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x2F88BCu;
        goto label_2f88bc;
    }
    ctx->pc = 0x2F88B4u;
    {
        const bool branch_taken_0x2f88b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f88b4) {
            ctx->pc = 0x2F88B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88B4u;
            // 0x2f88b8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F88D0u;
            goto label_2f88d0;
        }
    }
    ctx->pc = 0x2F88BCu;
label_2f88bc:
    // 0x2f88bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f88bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f88c0:
    // 0x2f88c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f88c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f88c4:
    // 0x2f88c4: 0x320f809  jalr        $t9
label_2f88c8:
    if (ctx->pc == 0x2F88C8u) {
        ctx->pc = 0x2F88CCu;
        goto label_2f88cc;
    }
    ctx->pc = 0x2F88C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F88CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F88CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F88CCu; }
            if (ctx->pc != 0x2F88CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F88CCu;
label_2f88cc:
    // 0x2f88cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f88d0:
    // 0x2f88d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f88d4:
    // 0x2f88d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2f88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2f88d8:
    // 0x2f88d8: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x2f88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
label_2f88dc:
    // 0x2f88dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f88e0:
    // 0x2f88e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f88e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f88e4:
    // 0x2f88e4: 0x320f809  jalr        $t9
label_2f88e8:
    if (ctx->pc == 0x2F88E8u) {
        ctx->pc = 0x2F88ECu;
        goto label_2f88ec;
    }
    ctx->pc = 0x2F88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F88ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F88ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F88ECu; }
            if (ctx->pc != 0x2F88ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2F88ECu;
label_2f88ec:
    // 0x2f88ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f88f0:
    // 0x2f88f0: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x2f88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_2f88f4:
    // 0x2f88f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f88f8:
    // 0x2f88f8: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2f88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2f88fc:
    // 0x2f88fc: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_2f8900:
    if (ctx->pc == 0x2F8900u) {
        ctx->pc = 0x2F8900u;
            // 0x2f8900: 0x928600d8  lbu         $a2, 0xD8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->pc = 0x2F8904u;
        goto label_2f8904;
    }
    ctx->pc = 0x2F88FCu;
    {
        const bool branch_taken_0x2f88fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f88fc) {
            ctx->pc = 0x2F8900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88FCu;
            // 0x2f8900: 0x928600d8  lbu         $a2, 0xD8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8914u;
            goto label_2f8914;
        }
    }
    ctx->pc = 0x2F8904u;
label_2f8904:
    // 0x2f8904: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2f8904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2f8908:
    // 0x2f8908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f890c:
    // 0x2f890c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f8910:
    if (ctx->pc == 0x2F8910u) {
        ctx->pc = 0x2F8910u;
            // 0x2f8910: 0xa0640018  sb          $a0, 0x18($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2F8914u;
        goto label_2f8914;
    }
    ctx->pc = 0x2F890Cu;
    {
        const bool branch_taken_0x2f890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F890Cu;
            // 0x2f8910: 0xa0640018  sb          $a0, 0x18($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f890c) {
            ctx->pc = 0x2F8940u;
            goto label_2f8940;
        }
    }
    ctx->pc = 0x2F8914u;
label_2f8914:
    // 0x2f8914: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2f8914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f8918:
    // 0x2f8918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f8918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f891c:
    // 0x2f891c: 0xe52026  xor         $a0, $a3, $a1
    ctx->pc = 0x2f891cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
label_2f8920:
    // 0x2f8920: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_2f8924:
    // 0x2f8924: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2f8924u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8928:
    // 0x2f8928: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f8928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2f892c:
    // 0x2f892c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x2f892cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
label_2f8930:
    // 0x2f8930: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2f8930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2f8934:
    // 0x2f8934: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_2f8938:
    if (ctx->pc == 0x2F8938u) {
        ctx->pc = 0x2F8938u;
            // 0x2f8938: 0xe52026  xor         $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x2F893Cu;
        goto label_2f893c;
    }
    ctx->pc = 0x2F8934u;
    {
        const bool branch_taken_0x2f8934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8934) {
            ctx->pc = 0x2F8938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8934u;
            // 0x2f8938: 0xe52026  xor         $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8920;
        }
    }
    ctx->pc = 0x2F893Cu;
label_2f893c:
    // 0x2f893c: 0x0  nop
    ctx->pc = 0x2f893cu;
    // NOP
label_2f8940:
    // 0x2f8940: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8944:
    // 0x2f8944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f8944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8948:
    // 0x2f8948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f894c:
    // 0x2f894c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f894cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8950:
    // 0x2f8950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8954:
    // 0x2f8954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8958:
    // 0x2f8958: 0x3e00008  jr          $ra
label_2f895c:
    if (ctx->pc == 0x2F895Cu) {
        ctx->pc = 0x2F895Cu;
            // 0x2f895c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F8960u;
        goto label_fallthrough_0x2f8958;
    }
    ctx->pc = 0x2F8958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8958u;
            // 0x2f895c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8958:
    ctx->pc = 0x2F8960u;
}
