#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004127D0
// Address: 0x4127d0 - 0x412a90
void sub_004127D0_0x4127d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004127D0_0x4127d0");
#endif

    switch (ctx->pc) {
        case 0x4127d0u: goto label_4127d0;
        case 0x4127d4u: goto label_4127d4;
        case 0x4127d8u: goto label_4127d8;
        case 0x4127dcu: goto label_4127dc;
        case 0x4127e0u: goto label_4127e0;
        case 0x4127e4u: goto label_4127e4;
        case 0x4127e8u: goto label_4127e8;
        case 0x4127ecu: goto label_4127ec;
        case 0x4127f0u: goto label_4127f0;
        case 0x4127f4u: goto label_4127f4;
        case 0x4127f8u: goto label_4127f8;
        case 0x4127fcu: goto label_4127fc;
        case 0x412800u: goto label_412800;
        case 0x412804u: goto label_412804;
        case 0x412808u: goto label_412808;
        case 0x41280cu: goto label_41280c;
        case 0x412810u: goto label_412810;
        case 0x412814u: goto label_412814;
        case 0x412818u: goto label_412818;
        case 0x41281cu: goto label_41281c;
        case 0x412820u: goto label_412820;
        case 0x412824u: goto label_412824;
        case 0x412828u: goto label_412828;
        case 0x41282cu: goto label_41282c;
        case 0x412830u: goto label_412830;
        case 0x412834u: goto label_412834;
        case 0x412838u: goto label_412838;
        case 0x41283cu: goto label_41283c;
        case 0x412840u: goto label_412840;
        case 0x412844u: goto label_412844;
        case 0x412848u: goto label_412848;
        case 0x41284cu: goto label_41284c;
        case 0x412850u: goto label_412850;
        case 0x412854u: goto label_412854;
        case 0x412858u: goto label_412858;
        case 0x41285cu: goto label_41285c;
        case 0x412860u: goto label_412860;
        case 0x412864u: goto label_412864;
        case 0x412868u: goto label_412868;
        case 0x41286cu: goto label_41286c;
        case 0x412870u: goto label_412870;
        case 0x412874u: goto label_412874;
        case 0x412878u: goto label_412878;
        case 0x41287cu: goto label_41287c;
        case 0x412880u: goto label_412880;
        case 0x412884u: goto label_412884;
        case 0x412888u: goto label_412888;
        case 0x41288cu: goto label_41288c;
        case 0x412890u: goto label_412890;
        case 0x412894u: goto label_412894;
        case 0x412898u: goto label_412898;
        case 0x41289cu: goto label_41289c;
        case 0x4128a0u: goto label_4128a0;
        case 0x4128a4u: goto label_4128a4;
        case 0x4128a8u: goto label_4128a8;
        case 0x4128acu: goto label_4128ac;
        case 0x4128b0u: goto label_4128b0;
        case 0x4128b4u: goto label_4128b4;
        case 0x4128b8u: goto label_4128b8;
        case 0x4128bcu: goto label_4128bc;
        case 0x4128c0u: goto label_4128c0;
        case 0x4128c4u: goto label_4128c4;
        case 0x4128c8u: goto label_4128c8;
        case 0x4128ccu: goto label_4128cc;
        case 0x4128d0u: goto label_4128d0;
        case 0x4128d4u: goto label_4128d4;
        case 0x4128d8u: goto label_4128d8;
        case 0x4128dcu: goto label_4128dc;
        case 0x4128e0u: goto label_4128e0;
        case 0x4128e4u: goto label_4128e4;
        case 0x4128e8u: goto label_4128e8;
        case 0x4128ecu: goto label_4128ec;
        case 0x4128f0u: goto label_4128f0;
        case 0x4128f4u: goto label_4128f4;
        case 0x4128f8u: goto label_4128f8;
        case 0x4128fcu: goto label_4128fc;
        case 0x412900u: goto label_412900;
        case 0x412904u: goto label_412904;
        case 0x412908u: goto label_412908;
        case 0x41290cu: goto label_41290c;
        case 0x412910u: goto label_412910;
        case 0x412914u: goto label_412914;
        case 0x412918u: goto label_412918;
        case 0x41291cu: goto label_41291c;
        case 0x412920u: goto label_412920;
        case 0x412924u: goto label_412924;
        case 0x412928u: goto label_412928;
        case 0x41292cu: goto label_41292c;
        case 0x412930u: goto label_412930;
        case 0x412934u: goto label_412934;
        case 0x412938u: goto label_412938;
        case 0x41293cu: goto label_41293c;
        case 0x412940u: goto label_412940;
        case 0x412944u: goto label_412944;
        case 0x412948u: goto label_412948;
        case 0x41294cu: goto label_41294c;
        case 0x412950u: goto label_412950;
        case 0x412954u: goto label_412954;
        case 0x412958u: goto label_412958;
        case 0x41295cu: goto label_41295c;
        case 0x412960u: goto label_412960;
        case 0x412964u: goto label_412964;
        case 0x412968u: goto label_412968;
        case 0x41296cu: goto label_41296c;
        case 0x412970u: goto label_412970;
        case 0x412974u: goto label_412974;
        case 0x412978u: goto label_412978;
        case 0x41297cu: goto label_41297c;
        case 0x412980u: goto label_412980;
        case 0x412984u: goto label_412984;
        case 0x412988u: goto label_412988;
        case 0x41298cu: goto label_41298c;
        case 0x412990u: goto label_412990;
        case 0x412994u: goto label_412994;
        case 0x412998u: goto label_412998;
        case 0x41299cu: goto label_41299c;
        case 0x4129a0u: goto label_4129a0;
        case 0x4129a4u: goto label_4129a4;
        case 0x4129a8u: goto label_4129a8;
        case 0x4129acu: goto label_4129ac;
        case 0x4129b0u: goto label_4129b0;
        case 0x4129b4u: goto label_4129b4;
        case 0x4129b8u: goto label_4129b8;
        case 0x4129bcu: goto label_4129bc;
        case 0x4129c0u: goto label_4129c0;
        case 0x4129c4u: goto label_4129c4;
        case 0x4129c8u: goto label_4129c8;
        case 0x4129ccu: goto label_4129cc;
        case 0x4129d0u: goto label_4129d0;
        case 0x4129d4u: goto label_4129d4;
        case 0x4129d8u: goto label_4129d8;
        case 0x4129dcu: goto label_4129dc;
        case 0x4129e0u: goto label_4129e0;
        case 0x4129e4u: goto label_4129e4;
        case 0x4129e8u: goto label_4129e8;
        case 0x4129ecu: goto label_4129ec;
        case 0x4129f0u: goto label_4129f0;
        case 0x4129f4u: goto label_4129f4;
        case 0x4129f8u: goto label_4129f8;
        case 0x4129fcu: goto label_4129fc;
        case 0x412a00u: goto label_412a00;
        case 0x412a04u: goto label_412a04;
        case 0x412a08u: goto label_412a08;
        case 0x412a0cu: goto label_412a0c;
        case 0x412a10u: goto label_412a10;
        case 0x412a14u: goto label_412a14;
        case 0x412a18u: goto label_412a18;
        case 0x412a1cu: goto label_412a1c;
        case 0x412a20u: goto label_412a20;
        case 0x412a24u: goto label_412a24;
        case 0x412a28u: goto label_412a28;
        case 0x412a2cu: goto label_412a2c;
        case 0x412a30u: goto label_412a30;
        case 0x412a34u: goto label_412a34;
        case 0x412a38u: goto label_412a38;
        case 0x412a3cu: goto label_412a3c;
        case 0x412a40u: goto label_412a40;
        case 0x412a44u: goto label_412a44;
        case 0x412a48u: goto label_412a48;
        case 0x412a4cu: goto label_412a4c;
        case 0x412a50u: goto label_412a50;
        case 0x412a54u: goto label_412a54;
        case 0x412a58u: goto label_412a58;
        case 0x412a5cu: goto label_412a5c;
        case 0x412a60u: goto label_412a60;
        case 0x412a64u: goto label_412a64;
        case 0x412a68u: goto label_412a68;
        case 0x412a6cu: goto label_412a6c;
        case 0x412a70u: goto label_412a70;
        case 0x412a74u: goto label_412a74;
        case 0x412a78u: goto label_412a78;
        case 0x412a7cu: goto label_412a7c;
        case 0x412a80u: goto label_412a80;
        case 0x412a84u: goto label_412a84;
        case 0x412a88u: goto label_412a88;
        case 0x412a8cu: goto label_412a8c;
        default: break;
    }

    ctx->pc = 0x4127d0u;

label_4127d0:
    // 0x4127d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4127d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4127d4:
    // 0x4127d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4127d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4127d8:
    // 0x4127d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4127d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4127dc:
    // 0x4127dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4127dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4127e0:
    // 0x4127e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4127e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4127e4:
    // 0x4127e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4127e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4127e8:
    // 0x4127e8: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x4127e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_4127ec:
    // 0x4127ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4127ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4127f0:
    // 0x4127f0: 0x2673c250  addiu       $s3, $s3, -0x3DB0
    ctx->pc = 0x4127f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951504));
label_4127f4:
    // 0x4127f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4127f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4127f8:
    // 0x4127f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4127f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4127fc:
    // 0x4127fc: 0x261200c8  addiu       $s2, $s0, 0xC8
    ctx->pc = 0x4127fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_412800:
    // 0x412800: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x412800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_412804:
    // 0x412804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412808:
    // 0x412808: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x412808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41280c:
    // 0x41280c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_412810:
    // 0x412810: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x412810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412814:
    // 0x412814: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x412814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_412818:
    // 0x412818: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x412818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_41281c:
    // 0x41281c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x41281cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_412820:
    // 0x412820: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x412820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_412824:
    // 0x412824: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x412824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_412828:
    // 0x412828: 0xc0a7a88  jal         func_29EA20
label_41282c:
    if (ctx->pc == 0x41282Cu) {
        ctx->pc = 0x41282Cu;
            // 0x41282c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x412830u;
        goto label_412830;
    }
    ctx->pc = 0x412828u;
    SET_GPR_U32(ctx, 31, 0x412830u);
    ctx->pc = 0x41282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412828u;
            // 0x41282c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412830u; }
        if (ctx->pc != 0x412830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412830u; }
        if (ctx->pc != 0x412830u) { return; }
    }
    ctx->pc = 0x412830u;
label_412830:
    // 0x412830: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x412830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_412834:
    // 0x412834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x412834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412838:
    // 0x412838: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_41283c:
    if (ctx->pc == 0x41283Cu) {
        ctx->pc = 0x41283Cu;
            // 0x41283c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x412840u;
        goto label_412840;
    }
    ctx->pc = 0x412838u;
    {
        const bool branch_taken_0x412838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412838u;
            // 0x41283c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412838) {
            ctx->pc = 0x412858u;
            goto label_412858;
        }
    }
    ctx->pc = 0x412840u;
label_412840:
    // 0x412840: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x412840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_412844:
    // 0x412844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x412844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412848:
    // 0x412848: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x412848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41284c:
    // 0x41284c: 0xc0804bc  jal         func_2012F0
label_412850:
    if (ctx->pc == 0x412850u) {
        ctx->pc = 0x412850u;
            // 0x412850: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x412854u;
        goto label_412854;
    }
    ctx->pc = 0x41284Cu;
    SET_GPR_U32(ctx, 31, 0x412854u);
    ctx->pc = 0x412850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41284Cu;
            // 0x412850: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412854u; }
        if (ctx->pc != 0x412854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412854u; }
        if (ctx->pc != 0x412854u) { return; }
    }
    ctx->pc = 0x412854u;
label_412854:
    // 0x412854: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x412854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412858:
    // 0x412858: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x412858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_41285c:
    // 0x41285c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x41285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_412860:
    // 0x412860: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x412860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_412864:
    // 0x412864: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x412864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_412868:
    // 0x412868: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x412868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41286c:
    // 0x41286c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x41286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412870:
    // 0x412870: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x412870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_412874:
    // 0x412874: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x412874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_412878:
    // 0x412878: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x412878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_41287c:
    // 0x41287c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41287cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_412880:
    // 0x412880: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x412880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_412884:
    // 0x412884: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x412884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_412888:
    // 0x412888: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x412888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_41288c:
    // 0x41288c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x41288cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_412890:
    // 0x412890: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x412890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_412894:
    // 0x412894: 0xc04ca18  jal         func_132860
label_412898:
    if (ctx->pc == 0x412898u) {
        ctx->pc = 0x412898u;
            // 0x412898: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41289Cu;
        goto label_41289c;
    }
    ctx->pc = 0x412894u;
    SET_GPR_U32(ctx, 31, 0x41289Cu);
    ctx->pc = 0x412898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412894u;
            // 0x412898: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41289Cu; }
        if (ctx->pc != 0x41289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41289Cu; }
        if (ctx->pc != 0x41289Cu) { return; }
    }
    ctx->pc = 0x41289Cu;
label_41289c:
    // 0x41289c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4128a0:
    // 0x4128a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4128a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4128a4:
    // 0x4128a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4128a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4128a8:
    // 0x4128a8: 0xc0d37ec  jal         func_34DFB0
label_4128ac:
    if (ctx->pc == 0x4128ACu) {
        ctx->pc = 0x4128ACu;
            // 0x4128ac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4128B0u;
        goto label_4128b0;
    }
    ctx->pc = 0x4128A8u;
    SET_GPR_U32(ctx, 31, 0x4128B0u);
    ctx->pc = 0x4128ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4128A8u;
            // 0x4128ac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4128B0u; }
        if (ctx->pc != 0x4128B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4128B0u; }
        if (ctx->pc != 0x4128B0u) { return; }
    }
    ctx->pc = 0x4128B0u;
label_4128b0:
    // 0x4128b0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x4128b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_4128b4:
    // 0x4128b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4128b8:
    if (ctx->pc == 0x4128B8u) {
        ctx->pc = 0x4128BCu;
        goto label_4128bc;
    }
    ctx->pc = 0x4128B4u;
    {
        const bool branch_taken_0x4128b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4128b4) {
            ctx->pc = 0x4128F8u;
            goto label_4128f8;
        }
    }
    ctx->pc = 0x4128BCu;
label_4128bc:
    // 0x4128bc: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x4128bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_4128c0:
    // 0x4128c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4128c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4128c4:
    // 0x4128c4: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x4128c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_4128c8:
    // 0x4128c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4128c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4128cc:
    // 0x4128cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4128ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4128d0:
    // 0x4128d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_4128d4:
    if (ctx->pc == 0x4128D4u) {
        ctx->pc = 0x4128D8u;
        goto label_4128d8;
    }
    ctx->pc = 0x4128D0u;
    {
        const bool branch_taken_0x4128d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4128d0) {
            ctx->pc = 0x4128F8u;
            goto label_4128f8;
        }
    }
    ctx->pc = 0x4128D8u;
label_4128d8:
    // 0x4128d8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_4128dc:
    if (ctx->pc == 0x4128DCu) {
        ctx->pc = 0x4128E0u;
        goto label_4128e0;
    }
    ctx->pc = 0x4128D8u;
    {
        const bool branch_taken_0x4128d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4128d8) {
            ctx->pc = 0x4128F8u;
            goto label_4128f8;
        }
    }
    ctx->pc = 0x4128E0u;
label_4128e0:
    // 0x4128e0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4128e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4128e4:
    // 0x4128e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4128e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4128e8:
    // 0x4128e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4128e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4128ec:
    // 0x4128ec: 0x320f809  jalr        $t9
label_4128f0:
    if (ctx->pc == 0x4128F0u) {
        ctx->pc = 0x4128F0u;
            // 0x4128f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4128F4u;
        goto label_4128f4;
    }
    ctx->pc = 0x4128ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4128F4u);
        ctx->pc = 0x4128F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4128ECu;
            // 0x4128f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4128F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4128F4u; }
            if (ctx->pc != 0x4128F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4128F4u;
label_4128f4:
    // 0x4128f4: 0x0  nop
    ctx->pc = 0x4128f4u;
    // NOP
label_4128f8:
    // 0x4128f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4128f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4128fc:
    // 0x4128fc: 0x2e830006  sltiu       $v1, $s4, 0x6
    ctx->pc = 0x4128fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_412900:
    // 0x412900: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x412900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_412904:
    // 0x412904: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
label_412908:
    if (ctx->pc == 0x412908u) {
        ctx->pc = 0x412908u;
            // 0x412908: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x41290Cu;
        goto label_41290c;
    }
    ctx->pc = 0x412904u;
    {
        const bool branch_taken_0x412904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x412908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412904u;
            // 0x412908: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412904) {
            ctx->pc = 0x412800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_412800;
        }
    }
    ctx->pc = 0x41290Cu;
label_41290c:
    // 0x41290c: 0x260400c8  addiu       $a0, $s0, 0xC8
    ctx->pc = 0x41290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_412910:
    // 0x412910: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x412910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_412914:
    // 0x412914: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x412914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_412918:
    // 0x412918: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x412918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_41291c:
    // 0x41291c: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x41291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_412920:
    // 0x412920: 0x0  nop
    ctx->pc = 0x412920u;
    // NOP
label_412924:
    // 0x412924: 0x0  nop
    ctx->pc = 0x412924u;
    // NOP
label_412928:
    // 0x412928: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_41292c:
    if (ctx->pc == 0x41292Cu) {
        ctx->pc = 0x412930u;
        goto label_412930;
    }
    ctx->pc = 0x412928u;
    {
        const bool branch_taken_0x412928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x412928) {
            ctx->pc = 0x412914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_412914;
        }
    }
    ctx->pc = 0x412930u;
label_412930:
    // 0x412930: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x412930u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_412934:
    // 0x412934: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_412938:
    if (ctx->pc == 0x412938u) {
        ctx->pc = 0x412938u;
            // 0x412938: 0x261200c8  addiu       $s2, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->pc = 0x41293Cu;
        goto label_41293c;
    }
    ctx->pc = 0x412934u;
    {
        const bool branch_taken_0x412934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x412938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412934u;
            // 0x412938: 0x261200c8  addiu       $s2, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412934) {
            ctx->pc = 0x4129E0u;
            goto label_4129e0;
        }
    }
    ctx->pc = 0x41293Cu;
label_41293c:
    // 0x41293c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x41293cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412940:
    // 0x412940: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x412940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412944:
    // 0x412944: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x412944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_412948:
    // 0x412948: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x412948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_41294c:
    // 0x41294c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41294cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_412950:
    // 0x412950: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x412950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_412954:
    // 0x412954: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x412954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412958:
    // 0x412958: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x412958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41295c:
    // 0x41295c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41295cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_412960:
    // 0x412960: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_412964:
    if (ctx->pc == 0x412964u) {
        ctx->pc = 0x412964u;
            // 0x412964: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x412968u;
        goto label_412968;
    }
    ctx->pc = 0x412960u;
    {
        const bool branch_taken_0x412960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x412960) {
            ctx->pc = 0x412964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412960u;
            // 0x412964: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x412978u;
            goto label_412978;
        }
    }
    ctx->pc = 0x412968u;
label_412968:
    // 0x412968: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x412968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41296c:
    // 0x41296c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x41296cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_412970:
    // 0x412970: 0x10000007  b           . + 4 + (0x7 << 2)
label_412974:
    if (ctx->pc == 0x412974u) {
        ctx->pc = 0x412974u;
            // 0x412974: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x412978u;
        goto label_412978;
    }
    ctx->pc = 0x412970u;
    {
        const bool branch_taken_0x412970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412970u;
            // 0x412974: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412970) {
            ctx->pc = 0x412990u;
            goto label_412990;
        }
    }
    ctx->pc = 0x412978u;
label_412978:
    // 0x412978: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x412978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_41297c:
    // 0x41297c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41297cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_412980:
    // 0x412980: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x412980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_412984:
    // 0x412984: 0x0  nop
    ctx->pc = 0x412984u;
    // NOP
label_412988:
    // 0x412988: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x412988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41298c:
    // 0x41298c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x41298cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_412990:
    // 0x412990: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x412990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_412994:
    // 0x412994: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x412994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_412998:
    // 0x412998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41299c:
    // 0x41299c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x41299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4129a0:
    // 0x4129a0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x4129a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4129a4:
    // 0x4129a4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4129a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4129a8:
    // 0x4129a8: 0x2c610014  sltiu       $at, $v1, 0x14
    ctx->pc = 0x4129a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_4129ac:
    // 0x4129ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_4129b0:
    if (ctx->pc == 0x4129B0u) {
        ctx->pc = 0x4129B4u;
        goto label_4129b4;
    }
    ctx->pc = 0x4129ACu;
    {
        const bool branch_taken_0x4129ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4129ac) {
            ctx->pc = 0x4129D0u;
            goto label_4129d0;
        }
    }
    ctx->pc = 0x4129B4u;
label_4129b4:
    // 0x4129b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4129b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4129b8:
    // 0x4129b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4129b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4129bc:
    // 0x4129bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4129bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4129c0:
    // 0x4129c0: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x4129c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_4129c4:
    // 0x4129c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4129c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4129c8:
    // 0x4129c8: 0xc0b4904  jal         func_2D2410
label_4129cc:
    if (ctx->pc == 0x4129CCu) {
        ctx->pc = 0x4129CCu;
            // 0x4129cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4129D0u;
        goto label_4129d0;
    }
    ctx->pc = 0x4129C8u;
    SET_GPR_U32(ctx, 31, 0x4129D0u);
    ctx->pc = 0x4129CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4129C8u;
            // 0x4129cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4129D0u; }
        if (ctx->pc != 0x4129D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4129D0u; }
        if (ctx->pc != 0x4129D0u) { return; }
    }
    ctx->pc = 0x4129D0u;
label_4129d0:
    // 0x4129d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4129d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4129d4:
    // 0x4129d4: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x4129d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4129d8:
    // 0x4129d8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_4129dc:
    if (ctx->pc == 0x4129DCu) {
        ctx->pc = 0x4129DCu;
            // 0x4129dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4129E0u;
        goto label_4129e0;
    }
    ctx->pc = 0x4129D8u;
    {
        const bool branch_taken_0x4129d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4129DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4129D8u;
            // 0x4129dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4129d8) {
            ctx->pc = 0x412944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_412944;
        }
    }
    ctx->pc = 0x4129E0u;
label_4129e0:
    // 0x4129e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4129e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4129e4:
    // 0x4129e4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4129e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4129e8:
    // 0x4129e8: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x4129e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_4129ec:
    // 0x4129ec: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x4129ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4129f0:
    // 0x4129f0: 0x5020001e  beql        $at, $zero, . + 4 + (0x1E << 2)
label_4129f4:
    if (ctx->pc == 0x4129F4u) {
        ctx->pc = 0x4129F4u;
            // 0x4129f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4129F8u;
        goto label_4129f8;
    }
    ctx->pc = 0x4129F0u;
    {
        const bool branch_taken_0x4129f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4129f0) {
            ctx->pc = 0x4129F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4129F0u;
            // 0x4129f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412A6Cu;
            goto label_412a6c;
        }
    }
    ctx->pc = 0x4129F8u;
label_4129f8:
    // 0x4129f8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x4129f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4129fc:
    // 0x4129fc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4129fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_412a00:
    // 0x412a00: 0x8c64fca8  lw          $a0, -0x358($v1)
    ctx->pc = 0x412a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966440)));
label_412a04:
    // 0x412a04: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x412a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_412a08:
    // 0x412a08: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x412a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_412a0c:
    // 0x412a0c: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x412a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_412a10:
    // 0x412a10: 0x802827  not         $a1, $a0
    ctx->pc = 0x412a10u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_412a14:
    // 0x412a14: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x412a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_412a18:
    // 0x412a18: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x412a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_412a1c:
    // 0x412a1c: 0xacc40050  sw          $a0, 0x50($a2)
    ctx->pc = 0x412a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 4));
label_412a20:
    // 0x412a20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x412a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_412a24:
    // 0x412a24: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x412a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_412a28:
    // 0x412a28: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x412a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_412a2c:
    // 0x412a2c: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x412a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
label_412a30:
    // 0x412a30: 0xae040200  sw          $a0, 0x200($s0)
    ctx->pc = 0x412a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 4));
label_412a34:
    // 0x412a34: 0x8c63fcb0  lw          $v1, -0x350($v1)
    ctx->pc = 0x412a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966448)));
label_412a38:
    // 0x412a38: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x412a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_412a3c:
    // 0x412a3c: 0x602027  not         $a0, $v1
    ctx->pc = 0x412a3cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_412a40:
    // 0x412a40: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x412a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_412a44:
    // 0x412a44: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x412a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_412a48:
    // 0x412a48: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x412a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_412a4c:
    // 0x412a4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x412a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_412a50:
    // 0x412a50: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x412a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_412a54:
    // 0x412a54: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x412a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_412a58:
    // 0x412a58: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x412a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_412a5c:
    // 0x412a5c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x412a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_412a60:
    // 0x412a60: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x412a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_412a64:
    // 0x412a64: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x412a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
label_412a68:
    // 0x412a68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x412a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_412a6c:
    // 0x412a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x412a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412a70:
    // 0x412a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412a74:
    // 0x412a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x412a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412a78:
    // 0x412a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x412a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412a7c:
    // 0x412a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x412a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_412a80:
    // 0x412a80: 0x3e00008  jr          $ra
label_412a84:
    if (ctx->pc == 0x412A84u) {
        ctx->pc = 0x412A84u;
            // 0x412a84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x412A88u;
        goto label_412a88;
    }
    ctx->pc = 0x412A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412A80u;
            // 0x412a84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412A88u;
label_412a88:
    // 0x412a88: 0x0  nop
    ctx->pc = 0x412a88u;
    // NOP
label_412a8c:
    // 0x412a8c: 0x0  nop
    ctx->pc = 0x412a8cu;
    // NOP
}
