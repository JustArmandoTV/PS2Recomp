#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F7630
// Address: 0x3f7630 - 0x3f7780
void sub_003F7630_0x3f7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7630_0x3f7630");
#endif

    switch (ctx->pc) {
        case 0x3f7630u: goto label_3f7630;
        case 0x3f7634u: goto label_3f7634;
        case 0x3f7638u: goto label_3f7638;
        case 0x3f763cu: goto label_3f763c;
        case 0x3f7640u: goto label_3f7640;
        case 0x3f7644u: goto label_3f7644;
        case 0x3f7648u: goto label_3f7648;
        case 0x3f764cu: goto label_3f764c;
        case 0x3f7650u: goto label_3f7650;
        case 0x3f7654u: goto label_3f7654;
        case 0x3f7658u: goto label_3f7658;
        case 0x3f765cu: goto label_3f765c;
        case 0x3f7660u: goto label_3f7660;
        case 0x3f7664u: goto label_3f7664;
        case 0x3f7668u: goto label_3f7668;
        case 0x3f766cu: goto label_3f766c;
        case 0x3f7670u: goto label_3f7670;
        case 0x3f7674u: goto label_3f7674;
        case 0x3f7678u: goto label_3f7678;
        case 0x3f767cu: goto label_3f767c;
        case 0x3f7680u: goto label_3f7680;
        case 0x3f7684u: goto label_3f7684;
        case 0x3f7688u: goto label_3f7688;
        case 0x3f768cu: goto label_3f768c;
        case 0x3f7690u: goto label_3f7690;
        case 0x3f7694u: goto label_3f7694;
        case 0x3f7698u: goto label_3f7698;
        case 0x3f769cu: goto label_3f769c;
        case 0x3f76a0u: goto label_3f76a0;
        case 0x3f76a4u: goto label_3f76a4;
        case 0x3f76a8u: goto label_3f76a8;
        case 0x3f76acu: goto label_3f76ac;
        case 0x3f76b0u: goto label_3f76b0;
        case 0x3f76b4u: goto label_3f76b4;
        case 0x3f76b8u: goto label_3f76b8;
        case 0x3f76bcu: goto label_3f76bc;
        case 0x3f76c0u: goto label_3f76c0;
        case 0x3f76c4u: goto label_3f76c4;
        case 0x3f76c8u: goto label_3f76c8;
        case 0x3f76ccu: goto label_3f76cc;
        case 0x3f76d0u: goto label_3f76d0;
        case 0x3f76d4u: goto label_3f76d4;
        case 0x3f76d8u: goto label_3f76d8;
        case 0x3f76dcu: goto label_3f76dc;
        case 0x3f76e0u: goto label_3f76e0;
        case 0x3f76e4u: goto label_3f76e4;
        case 0x3f76e8u: goto label_3f76e8;
        case 0x3f76ecu: goto label_3f76ec;
        case 0x3f76f0u: goto label_3f76f0;
        case 0x3f76f4u: goto label_3f76f4;
        case 0x3f76f8u: goto label_3f76f8;
        case 0x3f76fcu: goto label_3f76fc;
        case 0x3f7700u: goto label_3f7700;
        case 0x3f7704u: goto label_3f7704;
        case 0x3f7708u: goto label_3f7708;
        case 0x3f770cu: goto label_3f770c;
        case 0x3f7710u: goto label_3f7710;
        case 0x3f7714u: goto label_3f7714;
        case 0x3f7718u: goto label_3f7718;
        case 0x3f771cu: goto label_3f771c;
        case 0x3f7720u: goto label_3f7720;
        case 0x3f7724u: goto label_3f7724;
        case 0x3f7728u: goto label_3f7728;
        case 0x3f772cu: goto label_3f772c;
        case 0x3f7730u: goto label_3f7730;
        case 0x3f7734u: goto label_3f7734;
        case 0x3f7738u: goto label_3f7738;
        case 0x3f773cu: goto label_3f773c;
        case 0x3f7740u: goto label_3f7740;
        case 0x3f7744u: goto label_3f7744;
        case 0x3f7748u: goto label_3f7748;
        case 0x3f774cu: goto label_3f774c;
        case 0x3f7750u: goto label_3f7750;
        case 0x3f7754u: goto label_3f7754;
        case 0x3f7758u: goto label_3f7758;
        case 0x3f775cu: goto label_3f775c;
        case 0x3f7760u: goto label_3f7760;
        case 0x3f7764u: goto label_3f7764;
        case 0x3f7768u: goto label_3f7768;
        case 0x3f776cu: goto label_3f776c;
        case 0x3f7770u: goto label_3f7770;
        case 0x3f7774u: goto label_3f7774;
        case 0x3f7778u: goto label_3f7778;
        case 0x3f777cu: goto label_3f777c;
        default: break;
    }

    ctx->pc = 0x3f7630u;

label_3f7630:
    // 0x3f7630: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f7634:
    // 0x3f7634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f7638:
    // 0x3f7638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f763c:
    // 0x3f763c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f7640:
    // 0x3f7640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f7644:
    // 0x3f7644: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x3f7644u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f7648:
    // 0x3f7648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f764c:
    // 0x3f764c: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3f764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3f7650:
    // 0x3f7650: 0xc04cc04  jal         func_133010
label_3f7654:
    if (ctx->pc == 0x3F7654u) {
        ctx->pc = 0x3F7654u;
            // 0x3f7654: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3F7658u;
        goto label_3f7658;
    }
    ctx->pc = 0x3F7650u;
    SET_GPR_U32(ctx, 31, 0x3F7658u);
    ctx->pc = 0x3F7654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7650u;
            // 0x3f7654: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7658u; }
        if (ctx->pc != 0x3F7658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7658u; }
        if (ctx->pc != 0x3F7658u) { return; }
    }
    ctx->pc = 0x3F7658u;
label_3f7658:
    // 0x3f7658: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x3f7658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3f765c:
    // 0x3f765c: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x3f765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7660:
    // 0x3f7660: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x3f7660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7664:
    // 0x3f7664: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x3f7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7668:
    // 0x3f7668: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3f7668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3f766c:
    // 0x3f766c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3f766cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3f7670:
    // 0x3f7670: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3f7670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3f7674:
    // 0x3f7674: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3f7674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3f7678:
    // 0x3f7678: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f7678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f767c:
    // 0x3f767c: 0xc0a5444  jal         func_295110
label_3f7680:
    if (ctx->pc == 0x3F7680u) {
        ctx->pc = 0x3F7680u;
            // 0x3f7680: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F7684u;
        goto label_3f7684;
    }
    ctx->pc = 0x3F767Cu;
    SET_GPR_U32(ctx, 31, 0x3F7684u);
    ctx->pc = 0x3F7680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F767Cu;
            // 0x3f7680: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7684u; }
        if (ctx->pc != 0x3F7684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7684u; }
        if (ctx->pc != 0x3F7684u) { return; }
    }
    ctx->pc = 0x3F7684u;
label_3f7684:
    // 0x3f7684: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f7684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f7688:
    // 0x3f7688: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f7688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f768c:
    // 0x3f768c: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f768cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f7690:
    // 0x3f7690: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f7690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f7694:
    // 0x3f7694: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7698:
    // 0x3f7698: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f7698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f769c:
    // 0x3f769c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f769cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f76a0:
    // 0x3f76a0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f76a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f76a4:
    // 0x3f76a4: 0x320f809  jalr        $t9
label_3f76a8:
    if (ctx->pc == 0x3F76A8u) {
        ctx->pc = 0x3F76A8u;
            // 0x3f76a8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F76ACu;
        goto label_3f76ac;
    }
    ctx->pc = 0x3F76A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F76ACu);
        ctx->pc = 0x3F76A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F76A4u;
            // 0x3f76a8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F76ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F76ACu; }
            if (ctx->pc != 0x3F76ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3F76ACu;
label_3f76ac:
    // 0x3f76ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f76b0:
    // 0x3f76b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f76b4:
    // 0x3f76b4: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f76b8:
    // 0x3f76b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f76bc:
    // 0x3f76bc: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f76c0:
    // 0x3f76c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f76c4:
    // 0x3f76c4: 0xc04ccf4  jal         func_1333D0
label_3f76c8:
    if (ctx->pc == 0x3F76C8u) {
        ctx->pc = 0x3F76C8u;
            // 0x3f76c8: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F76CCu;
        goto label_3f76cc;
    }
    ctx->pc = 0x3F76C4u;
    SET_GPR_U32(ctx, 31, 0x3F76CCu);
    ctx->pc = 0x3F76C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F76C4u;
            // 0x3f76c8: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76CCu; }
        if (ctx->pc != 0x3F76CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76CCu; }
        if (ctx->pc != 0x3F76CCu) { return; }
    }
    ctx->pc = 0x3F76CCu;
label_3f76cc:
    // 0x3f76cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f76d0:
    // 0x3f76d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f76d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f76d4:
    // 0x3f76d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f76d8:
    // 0x3f76d8: 0xc04cca0  jal         func_133280
label_3f76dc:
    if (ctx->pc == 0x3F76DCu) {
        ctx->pc = 0x3F76DCu;
            // 0x3f76dc: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F76E0u;
        goto label_3f76e0;
    }
    ctx->pc = 0x3F76D8u;
    SET_GPR_U32(ctx, 31, 0x3F76E0u);
    ctx->pc = 0x3F76DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F76D8u;
            // 0x3f76dc: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76E0u; }
        if (ctx->pc != 0x3F76E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76E0u; }
        if (ctx->pc != 0x3F76E0u) { return; }
    }
    ctx->pc = 0x3F76E0u;
label_3f76e0:
    // 0x3f76e0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f76e4:
    // 0x3f76e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f76e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f76e8:
    // 0x3f76e8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3f76ec:
    // 0x3f76ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f76f0:
    // 0x3f76f0: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f76f4:
    // 0x3f76f4: 0xc04cca0  jal         func_133280
label_3f76f8:
    if (ctx->pc == 0x3F76F8u) {
        ctx->pc = 0x3F76F8u;
            // 0x3f76f8: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F76FCu;
        goto label_3f76fc;
    }
    ctx->pc = 0x3F76F4u;
    SET_GPR_U32(ctx, 31, 0x3F76FCu);
    ctx->pc = 0x3F76F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F76F4u;
            // 0x3f76f8: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76FCu; }
        if (ctx->pc != 0x3F76FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F76FCu; }
        if (ctx->pc != 0x3F76FCu) { return; }
    }
    ctx->pc = 0x3F76FCu;
label_3f76fc:
    // 0x3f76fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7700:
    // 0x3f7700: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3f7700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f7704:
    // 0x3f7704: 0xc04ccf4  jal         func_1333D0
label_3f7708:
    if (ctx->pc == 0x3F7708u) {
        ctx->pc = 0x3F7708u;
            // 0x3f7708: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3F770Cu;
        goto label_3f770c;
    }
    ctx->pc = 0x3F7704u;
    SET_GPR_U32(ctx, 31, 0x3F770Cu);
    ctx->pc = 0x3F7708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7704u;
            // 0x3f7708: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F770Cu; }
        if (ctx->pc != 0x3F770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F770Cu; }
        if (ctx->pc != 0x3F770Cu) { return; }
    }
    ctx->pc = 0x3F770Cu;
label_3f770c:
    // 0x3f770c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3f770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f7710:
    // 0x3f7710: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3f7710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f7714:
    // 0x3f7714: 0xc04cca0  jal         func_133280
label_3f7718:
    if (ctx->pc == 0x3F7718u) {
        ctx->pc = 0x3F7718u;
            // 0x3f7718: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F771Cu;
        goto label_3f771c;
    }
    ctx->pc = 0x3F7714u;
    SET_GPR_U32(ctx, 31, 0x3F771Cu);
    ctx->pc = 0x3F7718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7714u;
            // 0x3f7718: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F771Cu; }
        if (ctx->pc != 0x3F771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F771Cu; }
        if (ctx->pc != 0x3F771Cu) { return; }
    }
    ctx->pc = 0x3F771Cu;
label_3f771c:
    // 0x3f771c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x3f771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_3f7720:
    // 0x3f7720: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3f7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f7724:
    // 0x3f7724: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7728:
    // 0x3f7728: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3f7728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f772c:
    // 0x3f772c: 0xc04cca0  jal         func_133280
label_3f7730:
    if (ctx->pc == 0x3F7730u) {
        ctx->pc = 0x3F7730u;
            // 0x3f7730: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3F7734u;
        goto label_3f7734;
    }
    ctx->pc = 0x3F772Cu;
    SET_GPR_U32(ctx, 31, 0x3F7734u);
    ctx->pc = 0x3F7730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F772Cu;
            // 0x3f7730: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7734u; }
        if (ctx->pc != 0x3F7734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7734u; }
        if (ctx->pc != 0x3F7734u) { return; }
    }
    ctx->pc = 0x3F7734u;
label_3f7734:
    // 0x3f7734: 0x3c033ed5  lui         $v1, 0x3ED5
    ctx->pc = 0x3f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
label_3f7738:
    // 0x3f7738: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f773c:
    // 0x3f773c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f7740:
    // 0x3f7740: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x3f7740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_3f7744:
    // 0x3f7744: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f7744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7748:
    // 0x3f7748: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f774c:
    // 0x3f774c: 0xc0767f0  jal         func_1D9FC0
label_3f7750:
    if (ctx->pc == 0x3F7750u) {
        ctx->pc = 0x3F7750u;
            // 0x3f7750: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3F7754u;
        goto label_3f7754;
    }
    ctx->pc = 0x3F774Cu;
    SET_GPR_U32(ctx, 31, 0x3F7754u);
    ctx->pc = 0x3F7750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F774Cu;
            // 0x3f7750: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7754u; }
        if (ctx->pc != 0x3F7754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7754u; }
        if (ctx->pc != 0x3F7754u) { return; }
    }
    ctx->pc = 0x3F7754u;
label_3f7754:
    // 0x3f7754: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7758:
    // 0x3f7758: 0xac600de4  sw          $zero, 0xDE4($v1)
    ctx->pc = 0x3f7758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 0));
label_3f775c:
    // 0x3f775c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f775cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7760:
    // 0x3f7760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f7760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7764:
    // 0x3f7764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f7764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7768:
    // 0x3f7768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f7768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f776c:
    // 0x3f776c: 0x3e00008  jr          $ra
label_3f7770:
    if (ctx->pc == 0x3F7770u) {
        ctx->pc = 0x3F7770u;
            // 0x3f7770: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3F7774u;
        goto label_3f7774;
    }
    ctx->pc = 0x3F776Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F776Cu;
            // 0x3f7770: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F7774u;
label_3f7774:
    // 0x3f7774: 0x0  nop
    ctx->pc = 0x3f7774u;
    // NOP
label_3f7778:
    // 0x3f7778: 0x0  nop
    ctx->pc = 0x3f7778u;
    // NOP
label_3f777c:
    // 0x3f777c: 0x0  nop
    ctx->pc = 0x3f777cu;
    // NOP
}
