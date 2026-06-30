#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F7450
// Address: 0x3f7450 - 0x3f7630
void sub_003F7450_0x3f7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7450_0x3f7450");
#endif

    switch (ctx->pc) {
        case 0x3f7450u: goto label_3f7450;
        case 0x3f7454u: goto label_3f7454;
        case 0x3f7458u: goto label_3f7458;
        case 0x3f745cu: goto label_3f745c;
        case 0x3f7460u: goto label_3f7460;
        case 0x3f7464u: goto label_3f7464;
        case 0x3f7468u: goto label_3f7468;
        case 0x3f746cu: goto label_3f746c;
        case 0x3f7470u: goto label_3f7470;
        case 0x3f7474u: goto label_3f7474;
        case 0x3f7478u: goto label_3f7478;
        case 0x3f747cu: goto label_3f747c;
        case 0x3f7480u: goto label_3f7480;
        case 0x3f7484u: goto label_3f7484;
        case 0x3f7488u: goto label_3f7488;
        case 0x3f748cu: goto label_3f748c;
        case 0x3f7490u: goto label_3f7490;
        case 0x3f7494u: goto label_3f7494;
        case 0x3f7498u: goto label_3f7498;
        case 0x3f749cu: goto label_3f749c;
        case 0x3f74a0u: goto label_3f74a0;
        case 0x3f74a4u: goto label_3f74a4;
        case 0x3f74a8u: goto label_3f74a8;
        case 0x3f74acu: goto label_3f74ac;
        case 0x3f74b0u: goto label_3f74b0;
        case 0x3f74b4u: goto label_3f74b4;
        case 0x3f74b8u: goto label_3f74b8;
        case 0x3f74bcu: goto label_3f74bc;
        case 0x3f74c0u: goto label_3f74c0;
        case 0x3f74c4u: goto label_3f74c4;
        case 0x3f74c8u: goto label_3f74c8;
        case 0x3f74ccu: goto label_3f74cc;
        case 0x3f74d0u: goto label_3f74d0;
        case 0x3f74d4u: goto label_3f74d4;
        case 0x3f74d8u: goto label_3f74d8;
        case 0x3f74dcu: goto label_3f74dc;
        case 0x3f74e0u: goto label_3f74e0;
        case 0x3f74e4u: goto label_3f74e4;
        case 0x3f74e8u: goto label_3f74e8;
        case 0x3f74ecu: goto label_3f74ec;
        case 0x3f74f0u: goto label_3f74f0;
        case 0x3f74f4u: goto label_3f74f4;
        case 0x3f74f8u: goto label_3f74f8;
        case 0x3f74fcu: goto label_3f74fc;
        case 0x3f7500u: goto label_3f7500;
        case 0x3f7504u: goto label_3f7504;
        case 0x3f7508u: goto label_3f7508;
        case 0x3f750cu: goto label_3f750c;
        case 0x3f7510u: goto label_3f7510;
        case 0x3f7514u: goto label_3f7514;
        case 0x3f7518u: goto label_3f7518;
        case 0x3f751cu: goto label_3f751c;
        case 0x3f7520u: goto label_3f7520;
        case 0x3f7524u: goto label_3f7524;
        case 0x3f7528u: goto label_3f7528;
        case 0x3f752cu: goto label_3f752c;
        case 0x3f7530u: goto label_3f7530;
        case 0x3f7534u: goto label_3f7534;
        case 0x3f7538u: goto label_3f7538;
        case 0x3f753cu: goto label_3f753c;
        case 0x3f7540u: goto label_3f7540;
        case 0x3f7544u: goto label_3f7544;
        case 0x3f7548u: goto label_3f7548;
        case 0x3f754cu: goto label_3f754c;
        case 0x3f7550u: goto label_3f7550;
        case 0x3f7554u: goto label_3f7554;
        case 0x3f7558u: goto label_3f7558;
        case 0x3f755cu: goto label_3f755c;
        case 0x3f7560u: goto label_3f7560;
        case 0x3f7564u: goto label_3f7564;
        case 0x3f7568u: goto label_3f7568;
        case 0x3f756cu: goto label_3f756c;
        case 0x3f7570u: goto label_3f7570;
        case 0x3f7574u: goto label_3f7574;
        case 0x3f7578u: goto label_3f7578;
        case 0x3f757cu: goto label_3f757c;
        case 0x3f7580u: goto label_3f7580;
        case 0x3f7584u: goto label_3f7584;
        case 0x3f7588u: goto label_3f7588;
        case 0x3f758cu: goto label_3f758c;
        case 0x3f7590u: goto label_3f7590;
        case 0x3f7594u: goto label_3f7594;
        case 0x3f7598u: goto label_3f7598;
        case 0x3f759cu: goto label_3f759c;
        case 0x3f75a0u: goto label_3f75a0;
        case 0x3f75a4u: goto label_3f75a4;
        case 0x3f75a8u: goto label_3f75a8;
        case 0x3f75acu: goto label_3f75ac;
        case 0x3f75b0u: goto label_3f75b0;
        case 0x3f75b4u: goto label_3f75b4;
        case 0x3f75b8u: goto label_3f75b8;
        case 0x3f75bcu: goto label_3f75bc;
        case 0x3f75c0u: goto label_3f75c0;
        case 0x3f75c4u: goto label_3f75c4;
        case 0x3f75c8u: goto label_3f75c8;
        case 0x3f75ccu: goto label_3f75cc;
        case 0x3f75d0u: goto label_3f75d0;
        case 0x3f75d4u: goto label_3f75d4;
        case 0x3f75d8u: goto label_3f75d8;
        case 0x3f75dcu: goto label_3f75dc;
        case 0x3f75e0u: goto label_3f75e0;
        case 0x3f75e4u: goto label_3f75e4;
        case 0x3f75e8u: goto label_3f75e8;
        case 0x3f75ecu: goto label_3f75ec;
        case 0x3f75f0u: goto label_3f75f0;
        case 0x3f75f4u: goto label_3f75f4;
        case 0x3f75f8u: goto label_3f75f8;
        case 0x3f75fcu: goto label_3f75fc;
        case 0x3f7600u: goto label_3f7600;
        case 0x3f7604u: goto label_3f7604;
        case 0x3f7608u: goto label_3f7608;
        case 0x3f760cu: goto label_3f760c;
        case 0x3f7610u: goto label_3f7610;
        case 0x3f7614u: goto label_3f7614;
        case 0x3f7618u: goto label_3f7618;
        case 0x3f761cu: goto label_3f761c;
        case 0x3f7620u: goto label_3f7620;
        case 0x3f7624u: goto label_3f7624;
        case 0x3f7628u: goto label_3f7628;
        case 0x3f762cu: goto label_3f762c;
        default: break;
    }

    ctx->pc = 0x3f7450u;

label_3f7450:
    // 0x3f7450: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3f7454:
    // 0x3f7454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f7458:
    // 0x3f7458: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f745c:
    // 0x3f745c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f7460:
    // 0x3f7460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f7464:
    // 0x3f7464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f7464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f7468:
    // 0x3f7468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f746c:
    // 0x3f746c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f7470:
    // 0x3f7470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7474:
    // 0x3f7474: 0xc04cc08  jal         func_133020
label_3f7478:
    if (ctx->pc == 0x3F7478u) {
        ctx->pc = 0x3F7478u;
            // 0x3f7478: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->pc = 0x3F747Cu;
        goto label_3f747c;
    }
    ctx->pc = 0x3F7474u;
    SET_GPR_U32(ctx, 31, 0x3F747Cu);
    ctx->pc = 0x3F7478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7474u;
            // 0x3f7478: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F747Cu; }
        if (ctx->pc != 0x3F747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F747Cu; }
        if (ctx->pc != 0x3F747Cu) { return; }
    }
    ctx->pc = 0x3F747Cu;
label_3f747c:
    // 0x3f747c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x3f747cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7480:
    // 0x3f7480: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f7480u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f7484:
    // 0x3f7484: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3f7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3f7488:
    // 0x3f7488: 0xc04cc04  jal         func_133010
label_3f748c:
    if (ctx->pc == 0x3F748Cu) {
        ctx->pc = 0x3F748Cu;
            // 0x3f748c: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3F7490u;
        goto label_3f7490;
    }
    ctx->pc = 0x3F7488u;
    SET_GPR_U32(ctx, 31, 0x3F7490u);
    ctx->pc = 0x3F748Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7488u;
            // 0x3f748c: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7490u; }
        if (ctx->pc != 0x3F7490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7490u; }
        if (ctx->pc != 0x3F7490u) { return; }
    }
    ctx->pc = 0x3F7490u;
label_3f7490:
    // 0x3f7490: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x3f7490u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3f7494:
    // 0x3f7494: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x3f7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7498:
    // 0x3f7498: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x3f7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f749c:
    // 0x3f749c: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x3f749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f74a0:
    // 0x3f74a0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f74a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f74a4:
    // 0x3f74a4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f74a8:
    // 0x3f74a8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3f74a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3f74ac:
    // 0x3f74ac: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3f74acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f74b0:
    // 0x3f74b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f74b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f74b4:
    // 0x3f74b4: 0xc0a5444  jal         func_295110
label_3f74b8:
    if (ctx->pc == 0x3F74B8u) {
        ctx->pc = 0x3F74B8u;
            // 0x3f74b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F74BCu;
        goto label_3f74bc;
    }
    ctx->pc = 0x3F74B4u;
    SET_GPR_U32(ctx, 31, 0x3F74BCu);
    ctx->pc = 0x3F74B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F74B4u;
            // 0x3f74b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F74BCu; }
        if (ctx->pc != 0x3F74BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F74BCu; }
        if (ctx->pc != 0x3F74BCu) { return; }
    }
    ctx->pc = 0x3F74BCu;
label_3f74bc:
    // 0x3f74bc: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f74c0:
    // 0x3f74c0: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f74c4:
    // 0x3f74c4: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f74c8:
    // 0x3f74c8: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f74cc:
    // 0x3f74cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f74d0:
    // 0x3f74d0: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f74d4:
    // 0x3f74d4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f74d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f74d8:
    // 0x3f74d8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f74d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f74dc:
    // 0x3f74dc: 0x320f809  jalr        $t9
label_3f74e0:
    if (ctx->pc == 0x3F74E0u) {
        ctx->pc = 0x3F74E0u;
            // 0x3f74e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F74E4u;
        goto label_3f74e4;
    }
    ctx->pc = 0x3F74DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F74E4u);
        ctx->pc = 0x3F74E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F74DCu;
            // 0x3f74e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F74E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F74E4u; }
            if (ctx->pc != 0x3F74E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3F74E4u;
label_3f74e4:
    // 0x3f74e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f74e8:
    // 0x3f74e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f74ec:
    // 0x3f74ec: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f74f0:
    // 0x3f74f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f74f4:
    // 0x3f74f4: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f74f8:
    // 0x3f74f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f74fc:
    // 0x3f74fc: 0xc04ccf4  jal         func_1333D0
label_3f7500:
    if (ctx->pc == 0x3F7500u) {
        ctx->pc = 0x3F7500u;
            // 0x3f7500: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7504u;
        goto label_3f7504;
    }
    ctx->pc = 0x3F74FCu;
    SET_GPR_U32(ctx, 31, 0x3F7504u);
    ctx->pc = 0x3F7500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F74FCu;
            // 0x3f7500: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7504u; }
        if (ctx->pc != 0x3F7504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7504u; }
        if (ctx->pc != 0x3F7504u) { return; }
    }
    ctx->pc = 0x3F7504u;
label_3f7504:
    // 0x3f7504: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7508:
    // 0x3f7508: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f7508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f750c:
    // 0x3f750c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f7510:
    // 0x3f7510: 0xc04cca0  jal         func_133280
label_3f7514:
    if (ctx->pc == 0x3F7514u) {
        ctx->pc = 0x3F7514u;
            // 0x3f7514: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7518u;
        goto label_3f7518;
    }
    ctx->pc = 0x3F7510u;
    SET_GPR_U32(ctx, 31, 0x3F7518u);
    ctx->pc = 0x3F7514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7510u;
            // 0x3f7514: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7518u; }
        if (ctx->pc != 0x3F7518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7518u; }
        if (ctx->pc != 0x3F7518u) { return; }
    }
    ctx->pc = 0x3F7518u;
label_3f7518:
    // 0x3f7518: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3f7518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3f751c:
    // 0x3f751c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f751cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f7520:
    // 0x3f7520: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f7520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f7524:
    // 0x3f7524: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7528:
    // 0x3f7528: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f752c:
    // 0x3f752c: 0xc04cca0  jal         func_133280
label_3f7530:
    if (ctx->pc == 0x3F7530u) {
        ctx->pc = 0x3F7530u;
            // 0x3f7530: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7534u;
        goto label_3f7534;
    }
    ctx->pc = 0x3F752Cu;
    SET_GPR_U32(ctx, 31, 0x3F7534u);
    ctx->pc = 0x3F7530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F752Cu;
            // 0x3f7530: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7534u; }
        if (ctx->pc != 0x3F7534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7534u; }
        if (ctx->pc != 0x3F7534u) { return; }
    }
    ctx->pc = 0x3F7534u;
label_3f7534:
    // 0x3f7534: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3f7534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7538:
    // 0x3f7538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f753c:
    // 0x3f753c: 0x8ca40d74  lw          $a0, 0xD74($a1)
    ctx->pc = 0x3f753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_3f7540:
    // 0x3f7540: 0x908202c5  lbu         $v0, 0x2C5($a0)
    ctx->pc = 0x3f7540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_3f7544:
    // 0x3f7544: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3f7544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3f7548:
    // 0x3f7548: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3f7548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3f754c:
    // 0x3f754c: 0x90440281  lbu         $a0, 0x281($v0)
    ctx->pc = 0x3f754cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
label_3f7550:
    // 0x3f7550: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_3f7554:
    if (ctx->pc == 0x3F7554u) {
        ctx->pc = 0x3F7554u;
            // 0x3f7554: 0x8ca30db0  lw          $v1, 0xDB0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
        ctx->pc = 0x3F7558u;
        goto label_3f7558;
    }
    ctx->pc = 0x3F7550u;
    {
        const bool branch_taken_0x3f7550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f7550) {
            ctx->pc = 0x3F7554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7550u;
            // 0x3f7554: 0x8ca30db0  lw          $v1, 0xDB0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7574u;
            goto label_3f7574;
        }
    }
    ctx->pc = 0x3F7558u;
label_3f7558:
    // 0x3f7558: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f755c:
    // 0x3f755c: 0x54820022  bnel        $a0, $v0, . + 4 + (0x22 << 2)
label_3f7560:
    if (ctx->pc == 0x3F7560u) {
        ctx->pc = 0x3F7560u;
            // 0x3f7560: 0x3c02bf40  lui         $v0, 0xBF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
        ctx->pc = 0x3F7564u;
        goto label_3f7564;
    }
    ctx->pc = 0x3F755Cu;
    {
        const bool branch_taken_0x3f755c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f755c) {
            ctx->pc = 0x3F7560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F755Cu;
            // 0x3f7560: 0x3c02bf40  lui         $v0, 0xBF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F75E8u;
            goto label_3f75e8;
        }
    }
    ctx->pc = 0x3F7564u;
label_3f7564:
    // 0x3f7564: 0x8ca2069c  lw          $v0, 0x69C($a1)
    ctx->pc = 0x3f7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
label_3f7568:
    // 0x3f7568: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_3f756c:
    if (ctx->pc == 0x3F756Cu) {
        ctx->pc = 0x3F7570u;
        goto label_3f7570;
    }
    ctx->pc = 0x3F7568u;
    {
        const bool branch_taken_0x3f7568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f7568) {
            ctx->pc = 0x3F75E4u;
            goto label_3f75e4;
        }
    }
    ctx->pc = 0x3F7570u;
label_3f7570:
    // 0x3f7570: 0x8ca30db0  lw          $v1, 0xDB0($a1)
    ctx->pc = 0x3f7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_3f7574:
    // 0x3f7574: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3f7574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3f7578:
    // 0x3f7578: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3f757c:
    if (ctx->pc == 0x3F757Cu) {
        ctx->pc = 0x3F757Cu;
            // 0x3f757c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x3F7580u;
        goto label_3f7580;
    }
    ctx->pc = 0x3F7578u;
    {
        const bool branch_taken_0x3f7578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f7578) {
            ctx->pc = 0x3F757Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7578u;
            // 0x3f757c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F759Cu;
            goto label_3f759c;
        }
    }
    ctx->pc = 0x3F7580u;
label_3f7580:
    // 0x3f7580: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x3f7580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_3f7584:
    // 0x3f7584: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f7584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f7588:
    // 0x3f7588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f7588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f758c:
    // 0x3f758c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3f758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f7590:
    // 0x3f7590: 0xc0bdf94  jal         func_2F7E50
label_3f7594:
    if (ctx->pc == 0x3F7594u) {
        ctx->pc = 0x3F7594u;
            // 0x3f7594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F7598u;
        goto label_3f7598;
    }
    ctx->pc = 0x3F7590u;
    SET_GPR_U32(ctx, 31, 0x3F7598u);
    ctx->pc = 0x3F7594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7590u;
            // 0x3f7594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7598u; }
        if (ctx->pc != 0x3F7598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7598u; }
        if (ctx->pc != 0x3F7598u) { return; }
    }
    ctx->pc = 0x3F7598u;
label_3f7598:
    // 0x3f7598: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f759c:
    // 0x3f759c: 0x8c820d70  lw          $v0, 0xD70($a0)
    ctx->pc = 0x3f759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3f75a0:
    // 0x3f75a0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3f75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f75a4:
    // 0x3f75a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3f75a8:
    if (ctx->pc == 0x3F75A8u) {
        ctx->pc = 0x3F75A8u;
            // 0x3f75a8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F75ACu;
        goto label_3f75ac;
    }
    ctx->pc = 0x3F75A4u;
    {
        const bool branch_taken_0x3f75a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f75a4) {
            ctx->pc = 0x3F75A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75A4u;
            // 0x3f75a8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F75C4u;
            goto label_3f75c4;
        }
    }
    ctx->pc = 0x3F75ACu;
label_3f75ac:
    // 0x3f75ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f75acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f75b0:
    // 0x3f75b0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f75b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f75b4:
    // 0x3f75b4: 0x320f809  jalr        $t9
label_3f75b8:
    if (ctx->pc == 0x3F75B8u) {
        ctx->pc = 0x3F75B8u;
            // 0x3f75b8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3F75BCu;
        goto label_3f75bc;
    }
    ctx->pc = 0x3F75B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F75BCu);
        ctx->pc = 0x3F75B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75B4u;
            // 0x3f75b8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F75BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F75BCu; }
            if (ctx->pc != 0x3F75BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3F75BCu;
label_3f75bc:
    // 0x3f75bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f75c0:
    if (ctx->pc == 0x3F75C0u) {
        ctx->pc = 0x3F75C0u;
            // 0x3f75c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F75C4u;
        goto label_3f75c4;
    }
    ctx->pc = 0x3F75BCu;
    {
        const bool branch_taken_0x3f75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F75C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75BCu;
            // 0x3f75c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f75bc) {
            ctx->pc = 0x3F75D4u;
            goto label_3f75d4;
        }
    }
    ctx->pc = 0x3F75C4u;
label_3f75c4:
    // 0x3f75c4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f75c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f75c8:
    // 0x3f75c8: 0x320f809  jalr        $t9
label_3f75cc:
    if (ctx->pc == 0x3F75CCu) {
        ctx->pc = 0x3F75CCu;
            // 0x3f75cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3F75D0u;
        goto label_3f75d0;
    }
    ctx->pc = 0x3F75C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F75D0u);
        ctx->pc = 0x3F75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75C8u;
            // 0x3f75cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F75D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F75D0u; }
            if (ctx->pc != 0x3F75D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F75D0u;
label_3f75d0:
    // 0x3f75d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f75d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f75d4:
    // 0x3f75d4: 0xc0fda3c  jal         func_3F68F0
label_3f75d8:
    if (ctx->pc == 0x3F75D8u) {
        ctx->pc = 0x3F75DCu;
        goto label_3f75dc;
    }
    ctx->pc = 0x3F75D4u;
    SET_GPR_U32(ctx, 31, 0x3F75DCu);
    ctx->pc = 0x3F68F0u;
    if (runtime->hasFunction(0x3F68F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F75DCu; }
        if (ctx->pc != 0x3F75DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F68F0_0x3f68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F75DCu; }
        if (ctx->pc != 0x3F75DCu) { return; }
    }
    ctx->pc = 0x3F75DCu;
label_3f75dc:
    // 0x3f75dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f75e0:
    if (ctx->pc == 0x3F75E0u) {
        ctx->pc = 0x3F75E0u;
            // 0x3f75e0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F75E4u;
        goto label_3f75e4;
    }
    ctx->pc = 0x3F75DCu;
    {
        const bool branch_taken_0x3f75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F75E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75DCu;
            // 0x3f75e0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f75dc) {
            ctx->pc = 0x3F7618u;
            goto label_3f7618;
        }
    }
    ctx->pc = 0x3F75E4u;
label_3f75e4:
    // 0x3f75e4: 0x3c02bf40  lui         $v0, 0xBF40
    ctx->pc = 0x3f75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
label_3f75e8:
    // 0x3f75e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f75e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f75ec:
    // 0x3f75ec: 0x0  nop
    ctx->pc = 0x3f75ecu;
    // NOP
label_3f75f0:
    // 0x3f75f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f75f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f75f4:
    // 0x3f75f4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3f75f8:
    if (ctx->pc == 0x3F75F8u) {
        ctx->pc = 0x3F75F8u;
            // 0x3f75f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F75FCu;
        goto label_3f75fc;
    }
    ctx->pc = 0x3F75F4u;
    {
        const bool branch_taken_0x3f75f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f75f4) {
            ctx->pc = 0x3F75F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75F4u;
            // 0x3f75f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F760Cu;
            goto label_3f760c;
        }
    }
    ctx->pc = 0x3F75FCu;
label_3f75fc:
    // 0x3f75fc: 0xc0fda3c  jal         func_3F68F0
label_3f7600:
    if (ctx->pc == 0x3F7600u) {
        ctx->pc = 0x3F7600u;
            // 0x3f7600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7604u;
        goto label_3f7604;
    }
    ctx->pc = 0x3F75FCu;
    SET_GPR_U32(ctx, 31, 0x3F7604u);
    ctx->pc = 0x3F7600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F75FCu;
            // 0x3f7600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F68F0u;
    if (runtime->hasFunction(0x3F68F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7604u; }
        if (ctx->pc != 0x3F7604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F68F0_0x3f68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7604u; }
        if (ctx->pc != 0x3F7604u) { return; }
    }
    ctx->pc = 0x3F7604u;
label_3f7604:
    // 0x3f7604: 0x10000003  b           . + 4 + (0x3 << 2)
label_3f7608:
    if (ctx->pc == 0x3F7608u) {
        ctx->pc = 0x3F760Cu;
        goto label_3f760c;
    }
    ctx->pc = 0x3F7604u;
    {
        const bool branch_taken_0x3f7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7604) {
            ctx->pc = 0x3F7614u;
            goto label_3f7614;
        }
    }
    ctx->pc = 0x3F760Cu;
label_3f760c:
    // 0x3f760c: 0xc0fdabc  jal         func_3F6AF0
label_3f7610:
    if (ctx->pc == 0x3F7610u) {
        ctx->pc = 0x3F7614u;
        goto label_3f7614;
    }
    ctx->pc = 0x3F760Cu;
    SET_GPR_U32(ctx, 31, 0x3F7614u);
    ctx->pc = 0x3F6AF0u;
    if (runtime->hasFunction(0x3F6AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3F6AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7614u; }
        if (ctx->pc != 0x3F7614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F6AF0_0x3f6af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7614u; }
        if (ctx->pc != 0x3F7614u) { return; }
    }
    ctx->pc = 0x3F7614u;
label_3f7614:
    // 0x3f7614: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f7614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f7618:
    // 0x3f7618: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f7618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f761c:
    // 0x3f761c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f761cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7620:
    // 0x3f7620: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f7620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7624:
    // 0x3f7624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f7624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7628:
    // 0x3f7628: 0x3e00008  jr          $ra
label_3f762c:
    if (ctx->pc == 0x3F762Cu) {
        ctx->pc = 0x3F762Cu;
            // 0x3f762c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3F7630u;
        goto label_fallthrough_0x3f7628;
    }
    ctx->pc = 0x3F7628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7628u;
            // 0x3f762c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f7628:
    ctx->pc = 0x3F7630u;
}
