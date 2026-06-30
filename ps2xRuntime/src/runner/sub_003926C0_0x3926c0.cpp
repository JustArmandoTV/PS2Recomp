#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003926C0
// Address: 0x3926c0 - 0x392880
void sub_003926C0_0x3926c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003926C0_0x3926c0");
#endif

    switch (ctx->pc) {
        case 0x3926c0u: goto label_3926c0;
        case 0x3926c4u: goto label_3926c4;
        case 0x3926c8u: goto label_3926c8;
        case 0x3926ccu: goto label_3926cc;
        case 0x3926d0u: goto label_3926d0;
        case 0x3926d4u: goto label_3926d4;
        case 0x3926d8u: goto label_3926d8;
        case 0x3926dcu: goto label_3926dc;
        case 0x3926e0u: goto label_3926e0;
        case 0x3926e4u: goto label_3926e4;
        case 0x3926e8u: goto label_3926e8;
        case 0x3926ecu: goto label_3926ec;
        case 0x3926f0u: goto label_3926f0;
        case 0x3926f4u: goto label_3926f4;
        case 0x3926f8u: goto label_3926f8;
        case 0x3926fcu: goto label_3926fc;
        case 0x392700u: goto label_392700;
        case 0x392704u: goto label_392704;
        case 0x392708u: goto label_392708;
        case 0x39270cu: goto label_39270c;
        case 0x392710u: goto label_392710;
        case 0x392714u: goto label_392714;
        case 0x392718u: goto label_392718;
        case 0x39271cu: goto label_39271c;
        case 0x392720u: goto label_392720;
        case 0x392724u: goto label_392724;
        case 0x392728u: goto label_392728;
        case 0x39272cu: goto label_39272c;
        case 0x392730u: goto label_392730;
        case 0x392734u: goto label_392734;
        case 0x392738u: goto label_392738;
        case 0x39273cu: goto label_39273c;
        case 0x392740u: goto label_392740;
        case 0x392744u: goto label_392744;
        case 0x392748u: goto label_392748;
        case 0x39274cu: goto label_39274c;
        case 0x392750u: goto label_392750;
        case 0x392754u: goto label_392754;
        case 0x392758u: goto label_392758;
        case 0x39275cu: goto label_39275c;
        case 0x392760u: goto label_392760;
        case 0x392764u: goto label_392764;
        case 0x392768u: goto label_392768;
        case 0x39276cu: goto label_39276c;
        case 0x392770u: goto label_392770;
        case 0x392774u: goto label_392774;
        case 0x392778u: goto label_392778;
        case 0x39277cu: goto label_39277c;
        case 0x392780u: goto label_392780;
        case 0x392784u: goto label_392784;
        case 0x392788u: goto label_392788;
        case 0x39278cu: goto label_39278c;
        case 0x392790u: goto label_392790;
        case 0x392794u: goto label_392794;
        case 0x392798u: goto label_392798;
        case 0x39279cu: goto label_39279c;
        case 0x3927a0u: goto label_3927a0;
        case 0x3927a4u: goto label_3927a4;
        case 0x3927a8u: goto label_3927a8;
        case 0x3927acu: goto label_3927ac;
        case 0x3927b0u: goto label_3927b0;
        case 0x3927b4u: goto label_3927b4;
        case 0x3927b8u: goto label_3927b8;
        case 0x3927bcu: goto label_3927bc;
        case 0x3927c0u: goto label_3927c0;
        case 0x3927c4u: goto label_3927c4;
        case 0x3927c8u: goto label_3927c8;
        case 0x3927ccu: goto label_3927cc;
        case 0x3927d0u: goto label_3927d0;
        case 0x3927d4u: goto label_3927d4;
        case 0x3927d8u: goto label_3927d8;
        case 0x3927dcu: goto label_3927dc;
        case 0x3927e0u: goto label_3927e0;
        case 0x3927e4u: goto label_3927e4;
        case 0x3927e8u: goto label_3927e8;
        case 0x3927ecu: goto label_3927ec;
        case 0x3927f0u: goto label_3927f0;
        case 0x3927f4u: goto label_3927f4;
        case 0x3927f8u: goto label_3927f8;
        case 0x3927fcu: goto label_3927fc;
        case 0x392800u: goto label_392800;
        case 0x392804u: goto label_392804;
        case 0x392808u: goto label_392808;
        case 0x39280cu: goto label_39280c;
        case 0x392810u: goto label_392810;
        case 0x392814u: goto label_392814;
        case 0x392818u: goto label_392818;
        case 0x39281cu: goto label_39281c;
        case 0x392820u: goto label_392820;
        case 0x392824u: goto label_392824;
        case 0x392828u: goto label_392828;
        case 0x39282cu: goto label_39282c;
        case 0x392830u: goto label_392830;
        case 0x392834u: goto label_392834;
        case 0x392838u: goto label_392838;
        case 0x39283cu: goto label_39283c;
        case 0x392840u: goto label_392840;
        case 0x392844u: goto label_392844;
        case 0x392848u: goto label_392848;
        case 0x39284cu: goto label_39284c;
        case 0x392850u: goto label_392850;
        case 0x392854u: goto label_392854;
        case 0x392858u: goto label_392858;
        case 0x39285cu: goto label_39285c;
        case 0x392860u: goto label_392860;
        case 0x392864u: goto label_392864;
        case 0x392868u: goto label_392868;
        case 0x39286cu: goto label_39286c;
        case 0x392870u: goto label_392870;
        case 0x392874u: goto label_392874;
        case 0x392878u: goto label_392878;
        case 0x39287cu: goto label_39287c;
        default: break;
    }

    ctx->pc = 0x3926c0u;

label_3926c0:
    // 0x3926c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3926c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3926c4:
    // 0x3926c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3926c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3926c8:
    // 0x3926c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3926c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3926cc:
    // 0x3926cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3926ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3926d0:
    // 0x3926d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3926d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3926d4:
    // 0x3926d4: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x3926d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3926d8:
    // 0x3926d8: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_3926dc:
    if (ctx->pc == 0x3926DCu) {
        ctx->pc = 0x3926DCu;
            // 0x3926dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3926E0u;
        goto label_3926e0;
    }
    ctx->pc = 0x3926D8u;
    {
        const bool branch_taken_0x3926d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3926DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3926D8u;
            // 0x3926dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3926d8) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x3926E0u;
label_3926e0:
    // 0x3926e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3926e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3926e4:
    // 0x3926e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3926e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3926e8:
    // 0x3926e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3926e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3926ec:
    // 0x3926ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3926ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3926f0:
    // 0x3926f0: 0x320f809  jalr        $t9
label_3926f4:
    if (ctx->pc == 0x3926F4u) {
        ctx->pc = 0x3926F8u;
        goto label_3926f8;
    }
    ctx->pc = 0x3926F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3926F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3926F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3926F8u; }
            if (ctx->pc != 0x3926F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3926F8u;
label_3926f8:
    // 0x3926f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3926f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3926fc:
    // 0x3926fc: 0x50430059  beql        $v0, $v1, . + 4 + (0x59 << 2)
label_392700:
    if (ctx->pc == 0x392700u) {
        ctx->pc = 0x392700u;
            // 0x392700: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x392704u;
        goto label_392704;
    }
    ctx->pc = 0x3926FCu;
    {
        const bool branch_taken_0x3926fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3926fc) {
            ctx->pc = 0x392700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3926FCu;
            // 0x392700: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392864u;
            goto label_392864;
        }
    }
    ctx->pc = 0x392704u;
label_392704:
    // 0x392704: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x392704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_392708:
    // 0x392708: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x392708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39270c:
    // 0x39270c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x39270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_392710:
    // 0x392710: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x392710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_392714:
    // 0x392714: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x392714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_392718:
    // 0x392718: 0xc089688  jal         func_225A20
label_39271c:
    if (ctx->pc == 0x39271Cu) {
        ctx->pc = 0x39271Cu;
            // 0x39271c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x392720u;
        goto label_392720;
    }
    ctx->pc = 0x392718u;
    SET_GPR_U32(ctx, 31, 0x392720u);
    ctx->pc = 0x39271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392718u;
            // 0x39271c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392720u; }
        if (ctx->pc != 0x392720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392720u; }
        if (ctx->pc != 0x392720u) { return; }
    }
    ctx->pc = 0x392720u;
label_392720:
    // 0x392720: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x392720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_392724:
    // 0x392724: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x392724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_392728:
    // 0x392728: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x392728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_39272c:
    // 0x39272c: 0xc04cbd8  jal         func_132F60
label_392730:
    if (ctx->pc == 0x392730u) {
        ctx->pc = 0x392730u;
            // 0x392730: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x392734u;
        goto label_392734;
    }
    ctx->pc = 0x39272Cu;
    SET_GPR_U32(ctx, 31, 0x392734u);
    ctx->pc = 0x392730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39272Cu;
            // 0x392730: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392734u; }
        if (ctx->pc != 0x392734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392734u; }
        if (ctx->pc != 0x392734u) { return; }
    }
    ctx->pc = 0x392734u;
label_392734:
    // 0x392734: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x392734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_392738:
    // 0x392738: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x392738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39273c:
    // 0x39273c: 0xc04cc90  jal         func_133240
label_392740:
    if (ctx->pc == 0x392740u) {
        ctx->pc = 0x392740u;
            // 0x392740: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x392744u;
        goto label_392744;
    }
    ctx->pc = 0x39273Cu;
    SET_GPR_U32(ctx, 31, 0x392744u);
    ctx->pc = 0x392740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39273Cu;
            // 0x392740: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392744u; }
        if (ctx->pc != 0x392744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392744u; }
        if (ctx->pc != 0x392744u) { return; }
    }
    ctx->pc = 0x392744u;
label_392744:
    // 0x392744: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x392744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_392748:
    // 0x392748: 0xc04cc44  jal         func_133110
label_39274c:
    if (ctx->pc == 0x39274Cu) {
        ctx->pc = 0x39274Cu;
            // 0x39274c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x392750u;
        goto label_392750;
    }
    ctx->pc = 0x392748u;
    SET_GPR_U32(ctx, 31, 0x392750u);
    ctx->pc = 0x39274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392748u;
            // 0x39274c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392750u; }
        if (ctx->pc != 0x392750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392750u; }
        if (ctx->pc != 0x392750u) { return; }
    }
    ctx->pc = 0x392750u;
label_392750:
    // 0x392750: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x392750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_392754:
    // 0x392754: 0xc04cc08  jal         func_133020
label_392758:
    if (ctx->pc == 0x392758u) {
        ctx->pc = 0x392758u;
            // 0x392758: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->pc = 0x39275Cu;
        goto label_39275c;
    }
    ctx->pc = 0x392754u;
    SET_GPR_U32(ctx, 31, 0x39275Cu);
    ctx->pc = 0x392758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392754u;
            // 0x392758: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39275Cu; }
        if (ctx->pc != 0x39275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39275Cu; }
        if (ctx->pc != 0x39275Cu) { return; }
    }
    ctx->pc = 0x39275Cu;
label_39275c:
    // 0x39275c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39275cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_392760:
    // 0x392760: 0xc04cc2c  jal         func_1330B0
label_392764:
    if (ctx->pc == 0x392764u) {
        ctx->pc = 0x392764u;
            // 0x392764: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x392768u;
        goto label_392768;
    }
    ctx->pc = 0x392760u;
    SET_GPR_U32(ctx, 31, 0x392768u);
    ctx->pc = 0x392764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392760u;
            // 0x392764: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392768u; }
        if (ctx->pc != 0x392768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392768u; }
        if (ctx->pc != 0x392768u) { return; }
    }
    ctx->pc = 0x392768u;
label_392768:
    // 0x392768: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x392768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_39276c:
    // 0x39276c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39276cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_392770:
    // 0x392770: 0xc4640184  lwc1        $f4, 0x184($v1)
    ctx->pc = 0x392770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_392774:
    // 0x392774: 0xc4620180  lwc1        $f2, 0x180($v1)
    ctx->pc = 0x392774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_392778:
    // 0x392778: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x392778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39277c:
    // 0x39277c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x39277cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_392780:
    // 0x392780: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x392780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_392784:
    // 0x392784: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x392784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_392788:
    // 0x392788: 0x46010084  c1          0x10084
    ctx->pc = 0x392788u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_39278c:
    // 0x39278c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39278cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_392790:
    // 0x392790: 0x8c65e3e0  lw          $a1, -0x1C20($v1)
    ctx->pc = 0x392790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_392794:
    // 0x392794: 0x8e040a6c  lw          $a0, 0xA6C($s0)
    ctx->pc = 0x392794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2668)));
label_392798:
    // 0x392798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39279c:
    // 0x39279c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x39279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3927a0:
    // 0x3927a0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3927a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_3927a4:
    // 0x3927a4: 0x0  nop
    ctx->pc = 0x3927a4u;
    // NOP
label_3927a8:
    // 0x3927a8: 0x0  nop
    ctx->pc = 0x3927a8u;
    // NOP
label_3927ac:
    // 0x3927ac: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
label_3927b0:
    if (ctx->pc == 0x3927B0u) {
        ctx->pc = 0x3927B4u;
        goto label_3927b4;
    }
    ctx->pc = 0x3927ACu;
    {
        const bool branch_taken_0x3927ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3927ac) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x3927B4u;
label_3927b4:
    // 0x3927b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3927b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3927b8:
    // 0x3927b8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_3927bc:
    if (ctx->pc == 0x3927BCu) {
        ctx->pc = 0x3927BCu;
            // 0x3927bc: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3927C0u;
        goto label_3927c0;
    }
    ctx->pc = 0x3927B8u;
    {
        const bool branch_taken_0x3927b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3927b8) {
            ctx->pc = 0x3927BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3927B8u;
            // 0x3927bc: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3927D4u;
            goto label_3927d4;
        }
    }
    ctx->pc = 0x3927C0u;
label_3927c0:
    // 0x3927c0: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_3927c4:
    if (ctx->pc == 0x3927C4u) {
        ctx->pc = 0x3927C8u;
        goto label_3927c8;
    }
    ctx->pc = 0x3927C0u;
    {
        const bool branch_taken_0x3927c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3927c0) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x3927C8u;
label_3927c8:
    // 0x3927c8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3927cc:
    if (ctx->pc == 0x3927CCu) {
        ctx->pc = 0x3927CCu;
            // 0x3927cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3927D0u;
        goto label_3927d0;
    }
    ctx->pc = 0x3927C8u;
    {
        const bool branch_taken_0x3927c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3927CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3927C8u;
            // 0x3927cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927c8) {
            ctx->pc = 0x39285Cu;
            goto label_39285c;
        }
    }
    ctx->pc = 0x3927D0u;
label_3927d0:
    // 0x3927d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3927d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3927d4:
    // 0x3927d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3927d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3927d8:
    // 0x3927d8: 0x0  nop
    ctx->pc = 0x3927d8u;
    // NOP
label_3927dc:
    // 0x3927dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3927dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3927e0:
    // 0x3927e0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_3927e4:
    if (ctx->pc == 0x3927E4u) {
        ctx->pc = 0x3927E8u;
        goto label_3927e8;
    }
    ctx->pc = 0x3927E0u;
    {
        const bool branch_taken_0x3927e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3927e0) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x3927E8u;
label_3927e8:
    // 0x3927e8: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x3927e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3927ec:
    // 0x3927ec: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_3927f0:
    if (ctx->pc == 0x3927F0u) {
        ctx->pc = 0x3927F0u;
            // 0x3927f0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x3927F4u;
        goto label_3927f4;
    }
    ctx->pc = 0x3927ECu;
    {
        const bool branch_taken_0x3927ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3927ec) {
            ctx->pc = 0x3927F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3927ECu;
            // 0x3927f0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392820u;
            goto label_392820;
        }
    }
    ctx->pc = 0x3927F4u;
label_3927f4:
    // 0x3927f4: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x3927f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_3927f8:
    // 0x3927f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3927f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3927fc:
    // 0x3927fc: 0x0  nop
    ctx->pc = 0x3927fcu;
    // NOP
label_392800:
    // 0x392800: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x392800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_392804:
    // 0x392804: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_392808:
    if (ctx->pc == 0x392808u) {
        ctx->pc = 0x39280Cu;
        goto label_39280c;
    }
    ctx->pc = 0x392804u;
    {
        const bool branch_taken_0x392804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x392804) {
            ctx->pc = 0x39281Cu;
            goto label_39281c;
        }
    }
    ctx->pc = 0x39280Cu;
label_39280c:
    // 0x39280c: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x39280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_392810:
    // 0x392810: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x392810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_392814:
    // 0x392814: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_392818:
    if (ctx->pc == 0x392818u) {
        ctx->pc = 0x39281Cu;
        goto label_39281c;
    }
    ctx->pc = 0x392814u;
    {
        const bool branch_taken_0x392814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x392814) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x39281Cu;
label_39281c:
    // 0x39281c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x39281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_392820:
    // 0x392820: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x392820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392824:
    // 0x392824: 0x0  nop
    ctx->pc = 0x392824u;
    // NOP
label_392828:
    // 0x392828: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x392828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39282c:
    // 0x39282c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_392830:
    if (ctx->pc == 0x392830u) {
        ctx->pc = 0x392834u;
        goto label_392834;
    }
    ctx->pc = 0x39282Cu;
    {
        const bool branch_taken_0x39282c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39282c) {
            ctx->pc = 0x392858u;
            goto label_392858;
        }
    }
    ctx->pc = 0x392834u;
label_392834:
    // 0x392834: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x392834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
label_392838:
    // 0x392838: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x392838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_39283c:
    // 0x39283c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39283cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392840:
    // 0x392840: 0x0  nop
    ctx->pc = 0x392840u;
    // NOP
label_392844:
    // 0x392844: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x392844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_392848:
    // 0x392848: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_39284c:
    if (ctx->pc == 0x39284Cu) {
        ctx->pc = 0x392850u;
        goto label_392850;
    }
    ctx->pc = 0x392848u;
    {
        const bool branch_taken_0x392848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x392848) {
            ctx->pc = 0x392858u;
            goto label_392858;
        }
    }
    ctx->pc = 0x392850u;
label_392850:
    // 0x392850: 0x10000003  b           . + 4 + (0x3 << 2)
label_392854:
    if (ctx->pc == 0x392854u) {
        ctx->pc = 0x392858u;
        goto label_392858;
    }
    ctx->pc = 0x392850u;
    {
        const bool branch_taken_0x392850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392850) {
            ctx->pc = 0x392860u;
            goto label_392860;
        }
    }
    ctx->pc = 0x392858u;
label_392858:
    // 0x392858: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x392858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39285c:
    // 0x39285c: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x39285cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_392860:
    // 0x392860: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x392860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_392864:
    // 0x392864: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x392864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392868:
    // 0x392868: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x392868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39286c:
    // 0x39286c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39286cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392870:
    // 0x392870: 0x3e00008  jr          $ra
label_392874:
    if (ctx->pc == 0x392874u) {
        ctx->pc = 0x392874u;
            // 0x392874: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x392878u;
        goto label_392878;
    }
    ctx->pc = 0x392870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392870u;
            // 0x392874: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392878u;
label_392878:
    // 0x392878: 0x0  nop
    ctx->pc = 0x392878u;
    // NOP
label_39287c:
    // 0x39287c: 0x0  nop
    ctx->pc = 0x39287cu;
    // NOP
}
