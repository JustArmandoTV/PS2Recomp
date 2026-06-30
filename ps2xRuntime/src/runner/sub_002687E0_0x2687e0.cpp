#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002687E0
// Address: 0x2687e0 - 0x268a60
void sub_002687E0_0x2687e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002687E0_0x2687e0");
#endif

    switch (ctx->pc) {
        case 0x2687e0u: goto label_2687e0;
        case 0x2687e4u: goto label_2687e4;
        case 0x2687e8u: goto label_2687e8;
        case 0x2687ecu: goto label_2687ec;
        case 0x2687f0u: goto label_2687f0;
        case 0x2687f4u: goto label_2687f4;
        case 0x2687f8u: goto label_2687f8;
        case 0x2687fcu: goto label_2687fc;
        case 0x268800u: goto label_268800;
        case 0x268804u: goto label_268804;
        case 0x268808u: goto label_268808;
        case 0x26880cu: goto label_26880c;
        case 0x268810u: goto label_268810;
        case 0x268814u: goto label_268814;
        case 0x268818u: goto label_268818;
        case 0x26881cu: goto label_26881c;
        case 0x268820u: goto label_268820;
        case 0x268824u: goto label_268824;
        case 0x268828u: goto label_268828;
        case 0x26882cu: goto label_26882c;
        case 0x268830u: goto label_268830;
        case 0x268834u: goto label_268834;
        case 0x268838u: goto label_268838;
        case 0x26883cu: goto label_26883c;
        case 0x268840u: goto label_268840;
        case 0x268844u: goto label_268844;
        case 0x268848u: goto label_268848;
        case 0x26884cu: goto label_26884c;
        case 0x268850u: goto label_268850;
        case 0x268854u: goto label_268854;
        case 0x268858u: goto label_268858;
        case 0x26885cu: goto label_26885c;
        case 0x268860u: goto label_268860;
        case 0x268864u: goto label_268864;
        case 0x268868u: goto label_268868;
        case 0x26886cu: goto label_26886c;
        case 0x268870u: goto label_268870;
        case 0x268874u: goto label_268874;
        case 0x268878u: goto label_268878;
        case 0x26887cu: goto label_26887c;
        case 0x268880u: goto label_268880;
        case 0x268884u: goto label_268884;
        case 0x268888u: goto label_268888;
        case 0x26888cu: goto label_26888c;
        case 0x268890u: goto label_268890;
        case 0x268894u: goto label_268894;
        case 0x268898u: goto label_268898;
        case 0x26889cu: goto label_26889c;
        case 0x2688a0u: goto label_2688a0;
        case 0x2688a4u: goto label_2688a4;
        case 0x2688a8u: goto label_2688a8;
        case 0x2688acu: goto label_2688ac;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688b4u: goto label_2688b4;
        case 0x2688b8u: goto label_2688b8;
        case 0x2688bcu: goto label_2688bc;
        case 0x2688c0u: goto label_2688c0;
        case 0x2688c4u: goto label_2688c4;
        case 0x2688c8u: goto label_2688c8;
        case 0x2688ccu: goto label_2688cc;
        case 0x2688d0u: goto label_2688d0;
        case 0x2688d4u: goto label_2688d4;
        case 0x2688d8u: goto label_2688d8;
        case 0x2688dcu: goto label_2688dc;
        case 0x2688e0u: goto label_2688e0;
        case 0x2688e4u: goto label_2688e4;
        case 0x2688e8u: goto label_2688e8;
        case 0x2688ecu: goto label_2688ec;
        case 0x2688f0u: goto label_2688f0;
        case 0x2688f4u: goto label_2688f4;
        case 0x2688f8u: goto label_2688f8;
        case 0x2688fcu: goto label_2688fc;
        case 0x268900u: goto label_268900;
        case 0x268904u: goto label_268904;
        case 0x268908u: goto label_268908;
        case 0x26890cu: goto label_26890c;
        case 0x268910u: goto label_268910;
        case 0x268914u: goto label_268914;
        case 0x268918u: goto label_268918;
        case 0x26891cu: goto label_26891c;
        case 0x268920u: goto label_268920;
        case 0x268924u: goto label_268924;
        case 0x268928u: goto label_268928;
        case 0x26892cu: goto label_26892c;
        case 0x268930u: goto label_268930;
        case 0x268934u: goto label_268934;
        case 0x268938u: goto label_268938;
        case 0x26893cu: goto label_26893c;
        case 0x268940u: goto label_268940;
        case 0x268944u: goto label_268944;
        case 0x268948u: goto label_268948;
        case 0x26894cu: goto label_26894c;
        case 0x268950u: goto label_268950;
        case 0x268954u: goto label_268954;
        case 0x268958u: goto label_268958;
        case 0x26895cu: goto label_26895c;
        case 0x268960u: goto label_268960;
        case 0x268964u: goto label_268964;
        case 0x268968u: goto label_268968;
        case 0x26896cu: goto label_26896c;
        case 0x268970u: goto label_268970;
        case 0x268974u: goto label_268974;
        case 0x268978u: goto label_268978;
        case 0x26897cu: goto label_26897c;
        case 0x268980u: goto label_268980;
        case 0x268984u: goto label_268984;
        case 0x268988u: goto label_268988;
        case 0x26898cu: goto label_26898c;
        case 0x268990u: goto label_268990;
        case 0x268994u: goto label_268994;
        case 0x268998u: goto label_268998;
        case 0x26899cu: goto label_26899c;
        case 0x2689a0u: goto label_2689a0;
        case 0x2689a4u: goto label_2689a4;
        case 0x2689a8u: goto label_2689a8;
        case 0x2689acu: goto label_2689ac;
        case 0x2689b0u: goto label_2689b0;
        case 0x2689b4u: goto label_2689b4;
        case 0x2689b8u: goto label_2689b8;
        case 0x2689bcu: goto label_2689bc;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689c4u: goto label_2689c4;
        case 0x2689c8u: goto label_2689c8;
        case 0x2689ccu: goto label_2689cc;
        case 0x2689d0u: goto label_2689d0;
        case 0x2689d4u: goto label_2689d4;
        case 0x2689d8u: goto label_2689d8;
        case 0x2689dcu: goto label_2689dc;
        case 0x2689e0u: goto label_2689e0;
        case 0x2689e4u: goto label_2689e4;
        case 0x2689e8u: goto label_2689e8;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689f0u: goto label_2689f0;
        case 0x2689f4u: goto label_2689f4;
        case 0x2689f8u: goto label_2689f8;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a00u: goto label_268a00;
        case 0x268a04u: goto label_268a04;
        case 0x268a08u: goto label_268a08;
        case 0x268a0cu: goto label_268a0c;
        case 0x268a10u: goto label_268a10;
        case 0x268a14u: goto label_268a14;
        case 0x268a18u: goto label_268a18;
        case 0x268a1cu: goto label_268a1c;
        case 0x268a20u: goto label_268a20;
        case 0x268a24u: goto label_268a24;
        case 0x268a28u: goto label_268a28;
        case 0x268a2cu: goto label_268a2c;
        case 0x268a30u: goto label_268a30;
        case 0x268a34u: goto label_268a34;
        case 0x268a38u: goto label_268a38;
        case 0x268a3cu: goto label_268a3c;
        case 0x268a40u: goto label_268a40;
        case 0x268a44u: goto label_268a44;
        case 0x268a48u: goto label_268a48;
        case 0x268a4cu: goto label_268a4c;
        case 0x268a50u: goto label_268a50;
        case 0x268a54u: goto label_268a54;
        case 0x268a58u: goto label_268a58;
        case 0x268a5cu: goto label_268a5c;
        default: break;
    }

    ctx->pc = 0x2687e0u;

label_2687e0:
    // 0x2687e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2687e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2687e4:
    // 0x2687e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2687e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2687e8:
    // 0x2687e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2687e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2687ec:
    // 0x2687ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2687ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2687f0:
    // 0x2687f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2687f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2687f4:
    // 0x2687f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2687f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2687f8:
    // 0x2687f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2687f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2687fc:
    // 0x2687fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2687fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_268800:
    // 0x268800: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x268800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_268804:
    // 0x268804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_268808:
    // 0x268808: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x268808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26880c:
    // 0x26880c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_268810:
    // 0x268810: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x268810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_268814:
    // 0x268814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_268818:
    // 0x268818: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_26881c:
    // 0x26881c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x26881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268820:
    // 0x268820: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268820u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_268824:
    // 0x268824: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x268824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_268828:
    // 0x268828: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x268828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26882c:
    // 0x26882c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26882cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_268830:
    // 0x268830: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x268830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_268834:
    // 0x268834: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x268834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268838:
    // 0x268838: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268838u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26883c:
    // 0x26883c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x26883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_268840:
    // 0x268840: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x268840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268844:
    // 0x268844: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_268848:
    // 0x268848: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x268848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_26884c:
    // 0x26884c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26884cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_268850:
    // 0x268850: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_268854:
    // 0x268854: 0x320f809  jalr        $t9
label_268858:
    if (ctx->pc == 0x268858u) {
        ctx->pc = 0x268858u;
            // 0x268858: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x26885Cu;
        goto label_26885c;
    }
    ctx->pc = 0x268854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26885Cu);
        ctx->pc = 0x268858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268854u;
            // 0x268858: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26885Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26885Cu; }
            if (ctx->pc != 0x26885Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26885Cu;
label_26885c:
    // 0x26885c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x26885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268860:
    // 0x268860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_268864:
    // 0x268864: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x268864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268868:
    // 0x268868: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26886c:
    // 0x26886c: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x26886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_268870:
    // 0x268870: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x268870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_268874:
    // 0x268874: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x268874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268878:
    // 0x268878: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x268878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_26887c:
    // 0x26887c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x26887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_268880:
    // 0x268880: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_268884:
    // 0x268884: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x268884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268888:
    // 0x268888: 0x26900024  addiu       $s0, $s4, 0x24
    ctx->pc = 0x268888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_26888c:
    // 0x26888c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x26888cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_268890:
    // 0x268890: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x268890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_268894:
    // 0x268894: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x268894u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_268898:
    // 0x268898: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x268898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26889c:
    // 0x26889c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x26889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2688a0:
    // 0x2688a0: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x2688a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2688a4:
    // 0x2688a4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x2688a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2688a8:
    // 0x2688a8: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x2688a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2688ac:
    // 0x2688ac: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2688acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2688b0:
    // 0x2688b0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2688b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2688b4:
    // 0x2688b4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2688b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2688b8:
    // 0x2688b8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2688b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2688bc:
    // 0x2688bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2688bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2688c0:
    // 0x2688c0: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x2688c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2688c4:
    // 0x2688c4: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x2688c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2688c8:
    // 0x2688c8: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x2688c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2688cc:
    // 0x2688cc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2688ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2688d0:
    // 0x2688d0: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2688d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_2688d4:
    // 0x2688d4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2688d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2688d8:
    // 0x2688d8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2688d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2688dc:
    // 0x2688dc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2688dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2688e0:
    // 0x2688e0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2688e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2688e4:
    // 0x2688e4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2688e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2688e8:
    // 0x2688e8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2688e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2688ec:
    // 0x2688ec: 0x320f809  jalr        $t9
label_2688f0:
    if (ctx->pc == 0x2688F0u) {
        ctx->pc = 0x2688F0u;
            // 0x2688f0: 0x26970028  addiu       $s7, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->pc = 0x2688F4u;
        goto label_2688f4;
    }
    ctx->pc = 0x2688ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2688F4u);
        ctx->pc = 0x2688F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2688ECu;
            // 0x2688f0: 0x26970028  addiu       $s7, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2688F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2688F4u; }
            if (ctx->pc != 0x2688F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2688F4u;
label_2688f4:
    // 0x2688f4: 0xc7ab00a0  lwc1        $f11, 0xA0($sp)
    ctx->pc = 0x2688f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2688f8:
    // 0x2688f8: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x2688f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2688fc:
    // 0x2688fc: 0xc7aa00a4  lwc1        $f10, 0xA4($sp)
    ctx->pc = 0x2688fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_268900:
    // 0x268900: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x268900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268904:
    // 0x268904: 0xc7a900a8  lwc1        $f9, 0xA8($sp)
    ctx->pc = 0x268904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_268908:
    // 0x268908: 0xc6840020  lwc1        $f4, 0x20($s4)
    ctx->pc = 0x268908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26890c:
    // 0x26890c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268910:
    // 0x268910: 0x46035982  mul.s       $f6, $f11, $f3
    ctx->pc = 0x268910u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
label_268914:
    // 0x268914: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x268914u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_268918:
    // 0x268918: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x268918u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_26891c:
    // 0x26891c: 0x4604491c  madd.s      $f4, $f9, $f4
    ctx->pc = 0x26891cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[4]));
label_268920:
    // 0x268920: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x268920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_268924:
    // 0x268924: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x268924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_268928:
    // 0x268928: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x268928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26892c:
    // 0x26892c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x26892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268930:
    // 0x268930: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x268930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268934:
    // 0x268934: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x268934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_268938:
    // 0x268938: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x268938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26893c:
    // 0x26893c: 0xc6850034  lwc1        $f5, 0x34($s4)
    ctx->pc = 0x26893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268940:
    // 0x268940: 0x460451c2  mul.s       $f7, $f10, $f4
    ctx->pc = 0x268940u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_268944:
    // 0x268944: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x268944u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_268948:
    // 0x268948: 0x46085802  mul.s       $f0, $f11, $f8
    ctx->pc = 0x268948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
label_26894c:
    // 0x26894c: 0x46070018  adda.s      $f0, $f7
    ctx->pc = 0x26894cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_268950:
    // 0x268950: 0x4606481c  madd.s      $f0, $f9, $f6
    ctx->pc = 0x268950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[6]));
label_268954:
    // 0x268954: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x268954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_268958:
    // 0x268958: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x268958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_26895c:
    // 0x26895c: 0xc6c60000  lwc1        $f6, 0x0($s6)
    ctx->pc = 0x26895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_268960:
    // 0x268960: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x268960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_268964:
    // 0x268964: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x268964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268968:
    // 0x268968: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x268968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26896c:
    // 0x26896c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x26896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268970:
    // 0x268970: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x268970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268974:
    // 0x268974: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x268974u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_268978:
    // 0x268978: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x268978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_26897c:
    // 0x26897c: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x26897cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
label_268980:
    // 0x268980: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x268980u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_268984:
    // 0x268984: 0x4605495c  madd.s      $f5, $f9, $f5
    ctx->pc = 0x268984u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
label_268988:
    // 0x268988: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x268988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_26898c:
    // 0x26898c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x26898cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_268990:
    // 0x268990: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x268990u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_268994:
    // 0x268994: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x268994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_268998:
    // 0x268998: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x268998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26899c:
    // 0x26899c: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x26899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2689a0:
    // 0x2689a0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2689a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2689a4:
    // 0x2689a4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2689a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2689a8:
    // 0x2689a8: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2689a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689ac:
    // 0x2689ac: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2689acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_2689b0:
    // 0x2689b0: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x2689b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2689b4:
    // 0x2689b4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2689b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2689b8:
    // 0x2689b8: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x2689b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_2689bc:
    // 0x2689bc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x2689bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2689c0:
    // 0x2689c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2689c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2689c4:
    // 0x2689c4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_2689c8:
    if (ctx->pc == 0x2689C8u) {
        ctx->pc = 0x2689C8u;
            // 0x2689c8: 0x2643002c  addiu       $v1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->pc = 0x2689CCu;
        goto label_2689cc;
    }
    ctx->pc = 0x2689C4u;
    {
        const bool branch_taken_0x2689c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2689C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2689C4u;
            // 0x2689c8: 0x2643002c  addiu       $v1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689c4) {
            ctx->pc = 0x268A30u;
            goto label_268a30;
        }
    }
    ctx->pc = 0x2689CCu;
label_2689cc:
    // 0x2689cc: 0xe6470020  swc1        $f7, 0x20($s2)
    ctx->pc = 0x2689ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_2689d0:
    // 0x2689d0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2689d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689d4:
    // 0x2689d4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2689d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_2689d8:
    // 0x2689d8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689dc:
    // 0x2689dc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2689dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_2689e0:
    // 0x2689e0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2689e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689e4:
    // 0x2689e4: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x2689e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_2689e8:
    // 0x2689e8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2689e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689ec:
    // 0x2689ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2689ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2689f0:
    // 0x2689f0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2689f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689f4:
    // 0x2689f4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2689f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2689f8:
    // 0x2689f8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2689f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2689fc:
    // 0x2689fc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2689fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_268a00:
    // 0x268a00: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x268a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268a04:
    // 0x268a04: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x268a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_268a08:
    // 0x268a08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x268a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268a0c:
    // 0x268a0c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x268a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_268a10:
    // 0x268a10: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x268a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268a14:
    // 0x268a14: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x268a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_268a18:
    // 0x268a18: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x268a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268a1c:
    // 0x268a1c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x268a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_268a20:
    // 0x268a20: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x268a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268a24:
    // 0x268a24: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x268a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_268a28:
    // 0x268a28: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x268a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_268a2c:
    // 0x268a2c: 0x0  nop
    ctx->pc = 0x268a2cu;
    // NOP
label_268a30:
    // 0x268a30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x268a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_268a34:
    // 0x268a34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x268a34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_268a38:
    // 0x268a38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x268a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_268a3c:
    // 0x268a3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x268a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_268a40:
    // 0x268a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x268a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_268a44:
    // 0x268a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_268a48:
    // 0x268a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_268a4c:
    // 0x268a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268a50:
    // 0x268a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268a54:
    // 0x268a54: 0x3e00008  jr          $ra
label_268a58:
    if (ctx->pc == 0x268A58u) {
        ctx->pc = 0x268A58u;
            // 0x268a58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x268A5Cu;
        goto label_268a5c;
    }
    ctx->pc = 0x268A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268A54u;
            // 0x268a58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268A5Cu;
label_268a5c:
    // 0x268a5c: 0x0  nop
    ctx->pc = 0x268a5cu;
    // NOP
}
