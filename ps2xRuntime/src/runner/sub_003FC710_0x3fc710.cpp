#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FC710
// Address: 0x3fc710 - 0x3fcad0
void sub_003FC710_0x3fc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC710_0x3fc710");
#endif

    switch (ctx->pc) {
        case 0x3fc710u: goto label_3fc710;
        case 0x3fc714u: goto label_3fc714;
        case 0x3fc718u: goto label_3fc718;
        case 0x3fc71cu: goto label_3fc71c;
        case 0x3fc720u: goto label_3fc720;
        case 0x3fc724u: goto label_3fc724;
        case 0x3fc728u: goto label_3fc728;
        case 0x3fc72cu: goto label_3fc72c;
        case 0x3fc730u: goto label_3fc730;
        case 0x3fc734u: goto label_3fc734;
        case 0x3fc738u: goto label_3fc738;
        case 0x3fc73cu: goto label_3fc73c;
        case 0x3fc740u: goto label_3fc740;
        case 0x3fc744u: goto label_3fc744;
        case 0x3fc748u: goto label_3fc748;
        case 0x3fc74cu: goto label_3fc74c;
        case 0x3fc750u: goto label_3fc750;
        case 0x3fc754u: goto label_3fc754;
        case 0x3fc758u: goto label_3fc758;
        case 0x3fc75cu: goto label_3fc75c;
        case 0x3fc760u: goto label_3fc760;
        case 0x3fc764u: goto label_3fc764;
        case 0x3fc768u: goto label_3fc768;
        case 0x3fc76cu: goto label_3fc76c;
        case 0x3fc770u: goto label_3fc770;
        case 0x3fc774u: goto label_3fc774;
        case 0x3fc778u: goto label_3fc778;
        case 0x3fc77cu: goto label_3fc77c;
        case 0x3fc780u: goto label_3fc780;
        case 0x3fc784u: goto label_3fc784;
        case 0x3fc788u: goto label_3fc788;
        case 0x3fc78cu: goto label_3fc78c;
        case 0x3fc790u: goto label_3fc790;
        case 0x3fc794u: goto label_3fc794;
        case 0x3fc798u: goto label_3fc798;
        case 0x3fc79cu: goto label_3fc79c;
        case 0x3fc7a0u: goto label_3fc7a0;
        case 0x3fc7a4u: goto label_3fc7a4;
        case 0x3fc7a8u: goto label_3fc7a8;
        case 0x3fc7acu: goto label_3fc7ac;
        case 0x3fc7b0u: goto label_3fc7b0;
        case 0x3fc7b4u: goto label_3fc7b4;
        case 0x3fc7b8u: goto label_3fc7b8;
        case 0x3fc7bcu: goto label_3fc7bc;
        case 0x3fc7c0u: goto label_3fc7c0;
        case 0x3fc7c4u: goto label_3fc7c4;
        case 0x3fc7c8u: goto label_3fc7c8;
        case 0x3fc7ccu: goto label_3fc7cc;
        case 0x3fc7d0u: goto label_3fc7d0;
        case 0x3fc7d4u: goto label_3fc7d4;
        case 0x3fc7d8u: goto label_3fc7d8;
        case 0x3fc7dcu: goto label_3fc7dc;
        case 0x3fc7e0u: goto label_3fc7e0;
        case 0x3fc7e4u: goto label_3fc7e4;
        case 0x3fc7e8u: goto label_3fc7e8;
        case 0x3fc7ecu: goto label_3fc7ec;
        case 0x3fc7f0u: goto label_3fc7f0;
        case 0x3fc7f4u: goto label_3fc7f4;
        case 0x3fc7f8u: goto label_3fc7f8;
        case 0x3fc7fcu: goto label_3fc7fc;
        case 0x3fc800u: goto label_3fc800;
        case 0x3fc804u: goto label_3fc804;
        case 0x3fc808u: goto label_3fc808;
        case 0x3fc80cu: goto label_3fc80c;
        case 0x3fc810u: goto label_3fc810;
        case 0x3fc814u: goto label_3fc814;
        case 0x3fc818u: goto label_3fc818;
        case 0x3fc81cu: goto label_3fc81c;
        case 0x3fc820u: goto label_3fc820;
        case 0x3fc824u: goto label_3fc824;
        case 0x3fc828u: goto label_3fc828;
        case 0x3fc82cu: goto label_3fc82c;
        case 0x3fc830u: goto label_3fc830;
        case 0x3fc834u: goto label_3fc834;
        case 0x3fc838u: goto label_3fc838;
        case 0x3fc83cu: goto label_3fc83c;
        case 0x3fc840u: goto label_3fc840;
        case 0x3fc844u: goto label_3fc844;
        case 0x3fc848u: goto label_3fc848;
        case 0x3fc84cu: goto label_3fc84c;
        case 0x3fc850u: goto label_3fc850;
        case 0x3fc854u: goto label_3fc854;
        case 0x3fc858u: goto label_3fc858;
        case 0x3fc85cu: goto label_3fc85c;
        case 0x3fc860u: goto label_3fc860;
        case 0x3fc864u: goto label_3fc864;
        case 0x3fc868u: goto label_3fc868;
        case 0x3fc86cu: goto label_3fc86c;
        case 0x3fc870u: goto label_3fc870;
        case 0x3fc874u: goto label_3fc874;
        case 0x3fc878u: goto label_3fc878;
        case 0x3fc87cu: goto label_3fc87c;
        case 0x3fc880u: goto label_3fc880;
        case 0x3fc884u: goto label_3fc884;
        case 0x3fc888u: goto label_3fc888;
        case 0x3fc88cu: goto label_3fc88c;
        case 0x3fc890u: goto label_3fc890;
        case 0x3fc894u: goto label_3fc894;
        case 0x3fc898u: goto label_3fc898;
        case 0x3fc89cu: goto label_3fc89c;
        case 0x3fc8a0u: goto label_3fc8a0;
        case 0x3fc8a4u: goto label_3fc8a4;
        case 0x3fc8a8u: goto label_3fc8a8;
        case 0x3fc8acu: goto label_3fc8ac;
        case 0x3fc8b0u: goto label_3fc8b0;
        case 0x3fc8b4u: goto label_3fc8b4;
        case 0x3fc8b8u: goto label_3fc8b8;
        case 0x3fc8bcu: goto label_3fc8bc;
        case 0x3fc8c0u: goto label_3fc8c0;
        case 0x3fc8c4u: goto label_3fc8c4;
        case 0x3fc8c8u: goto label_3fc8c8;
        case 0x3fc8ccu: goto label_3fc8cc;
        case 0x3fc8d0u: goto label_3fc8d0;
        case 0x3fc8d4u: goto label_3fc8d4;
        case 0x3fc8d8u: goto label_3fc8d8;
        case 0x3fc8dcu: goto label_3fc8dc;
        case 0x3fc8e0u: goto label_3fc8e0;
        case 0x3fc8e4u: goto label_3fc8e4;
        case 0x3fc8e8u: goto label_3fc8e8;
        case 0x3fc8ecu: goto label_3fc8ec;
        case 0x3fc8f0u: goto label_3fc8f0;
        case 0x3fc8f4u: goto label_3fc8f4;
        case 0x3fc8f8u: goto label_3fc8f8;
        case 0x3fc8fcu: goto label_3fc8fc;
        case 0x3fc900u: goto label_3fc900;
        case 0x3fc904u: goto label_3fc904;
        case 0x3fc908u: goto label_3fc908;
        case 0x3fc90cu: goto label_3fc90c;
        case 0x3fc910u: goto label_3fc910;
        case 0x3fc914u: goto label_3fc914;
        case 0x3fc918u: goto label_3fc918;
        case 0x3fc91cu: goto label_3fc91c;
        case 0x3fc920u: goto label_3fc920;
        case 0x3fc924u: goto label_3fc924;
        case 0x3fc928u: goto label_3fc928;
        case 0x3fc92cu: goto label_3fc92c;
        case 0x3fc930u: goto label_3fc930;
        case 0x3fc934u: goto label_3fc934;
        case 0x3fc938u: goto label_3fc938;
        case 0x3fc93cu: goto label_3fc93c;
        case 0x3fc940u: goto label_3fc940;
        case 0x3fc944u: goto label_3fc944;
        case 0x3fc948u: goto label_3fc948;
        case 0x3fc94cu: goto label_3fc94c;
        case 0x3fc950u: goto label_3fc950;
        case 0x3fc954u: goto label_3fc954;
        case 0x3fc958u: goto label_3fc958;
        case 0x3fc95cu: goto label_3fc95c;
        case 0x3fc960u: goto label_3fc960;
        case 0x3fc964u: goto label_3fc964;
        case 0x3fc968u: goto label_3fc968;
        case 0x3fc96cu: goto label_3fc96c;
        case 0x3fc970u: goto label_3fc970;
        case 0x3fc974u: goto label_3fc974;
        case 0x3fc978u: goto label_3fc978;
        case 0x3fc97cu: goto label_3fc97c;
        case 0x3fc980u: goto label_3fc980;
        case 0x3fc984u: goto label_3fc984;
        case 0x3fc988u: goto label_3fc988;
        case 0x3fc98cu: goto label_3fc98c;
        case 0x3fc990u: goto label_3fc990;
        case 0x3fc994u: goto label_3fc994;
        case 0x3fc998u: goto label_3fc998;
        case 0x3fc99cu: goto label_3fc99c;
        case 0x3fc9a0u: goto label_3fc9a0;
        case 0x3fc9a4u: goto label_3fc9a4;
        case 0x3fc9a8u: goto label_3fc9a8;
        case 0x3fc9acu: goto label_3fc9ac;
        case 0x3fc9b0u: goto label_3fc9b0;
        case 0x3fc9b4u: goto label_3fc9b4;
        case 0x3fc9b8u: goto label_3fc9b8;
        case 0x3fc9bcu: goto label_3fc9bc;
        case 0x3fc9c0u: goto label_3fc9c0;
        case 0x3fc9c4u: goto label_3fc9c4;
        case 0x3fc9c8u: goto label_3fc9c8;
        case 0x3fc9ccu: goto label_3fc9cc;
        case 0x3fc9d0u: goto label_3fc9d0;
        case 0x3fc9d4u: goto label_3fc9d4;
        case 0x3fc9d8u: goto label_3fc9d8;
        case 0x3fc9dcu: goto label_3fc9dc;
        case 0x3fc9e0u: goto label_3fc9e0;
        case 0x3fc9e4u: goto label_3fc9e4;
        case 0x3fc9e8u: goto label_3fc9e8;
        case 0x3fc9ecu: goto label_3fc9ec;
        case 0x3fc9f0u: goto label_3fc9f0;
        case 0x3fc9f4u: goto label_3fc9f4;
        case 0x3fc9f8u: goto label_3fc9f8;
        case 0x3fc9fcu: goto label_3fc9fc;
        case 0x3fca00u: goto label_3fca00;
        case 0x3fca04u: goto label_3fca04;
        case 0x3fca08u: goto label_3fca08;
        case 0x3fca0cu: goto label_3fca0c;
        case 0x3fca10u: goto label_3fca10;
        case 0x3fca14u: goto label_3fca14;
        case 0x3fca18u: goto label_3fca18;
        case 0x3fca1cu: goto label_3fca1c;
        case 0x3fca20u: goto label_3fca20;
        case 0x3fca24u: goto label_3fca24;
        case 0x3fca28u: goto label_3fca28;
        case 0x3fca2cu: goto label_3fca2c;
        case 0x3fca30u: goto label_3fca30;
        case 0x3fca34u: goto label_3fca34;
        case 0x3fca38u: goto label_3fca38;
        case 0x3fca3cu: goto label_3fca3c;
        case 0x3fca40u: goto label_3fca40;
        case 0x3fca44u: goto label_3fca44;
        case 0x3fca48u: goto label_3fca48;
        case 0x3fca4cu: goto label_3fca4c;
        case 0x3fca50u: goto label_3fca50;
        case 0x3fca54u: goto label_3fca54;
        case 0x3fca58u: goto label_3fca58;
        case 0x3fca5cu: goto label_3fca5c;
        case 0x3fca60u: goto label_3fca60;
        case 0x3fca64u: goto label_3fca64;
        case 0x3fca68u: goto label_3fca68;
        case 0x3fca6cu: goto label_3fca6c;
        case 0x3fca70u: goto label_3fca70;
        case 0x3fca74u: goto label_3fca74;
        case 0x3fca78u: goto label_3fca78;
        case 0x3fca7cu: goto label_3fca7c;
        case 0x3fca80u: goto label_3fca80;
        case 0x3fca84u: goto label_3fca84;
        case 0x3fca88u: goto label_3fca88;
        case 0x3fca8cu: goto label_3fca8c;
        case 0x3fca90u: goto label_3fca90;
        case 0x3fca94u: goto label_3fca94;
        case 0x3fca98u: goto label_3fca98;
        case 0x3fca9cu: goto label_3fca9c;
        case 0x3fcaa0u: goto label_3fcaa0;
        case 0x3fcaa4u: goto label_3fcaa4;
        case 0x3fcaa8u: goto label_3fcaa8;
        case 0x3fcaacu: goto label_3fcaac;
        case 0x3fcab0u: goto label_3fcab0;
        case 0x3fcab4u: goto label_3fcab4;
        case 0x3fcab8u: goto label_3fcab8;
        case 0x3fcabcu: goto label_3fcabc;
        case 0x3fcac0u: goto label_3fcac0;
        case 0x3fcac4u: goto label_3fcac4;
        case 0x3fcac8u: goto label_3fcac8;
        case 0x3fcaccu: goto label_3fcacc;
        default: break;
    }

    ctx->pc = 0x3fc710u;

label_3fc710:
    // 0x3fc710: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x3fc710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_3fc714:
    // 0x3fc714: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3fc714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3fc718:
    // 0x3fc718: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3fc718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3fc71c:
    // 0x3fc71c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3fc71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3fc720:
    // 0x3fc720: 0x7f080  sll         $fp, $a3, 2
    ctx->pc = 0x3fc720u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3fc724:
    // 0x3fc724: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3fc724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3fc728:
    // 0x3fc728: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3fc728u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fc72c:
    // 0x3fc72c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3fc72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3fc730:
    // 0x3fc730: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3fc730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc734:
    // 0x3fc734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fc734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3fc738:
    // 0x3fc738: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3fc738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc73c:
    // 0x3fc73c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fc73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fc740:
    // 0x3fc740: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x3fc740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_3fc744:
    // 0x3fc744: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fc748:
    // 0x3fc748: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3fc748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc74c:
    // 0x3fc74c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fc750:
    // 0x3fc750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fc754:
    // 0x3fc754: 0xc040138  jal         func_1004E0
label_3fc758:
    if (ctx->pc == 0x3FC758u) {
        ctx->pc = 0x3FC758u;
            // 0x3fc758: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3FC75Cu;
        goto label_3fc75c;
    }
    ctx->pc = 0x3FC754u;
    SET_GPR_U32(ctx, 31, 0x3FC75Cu);
    ctx->pc = 0x3FC758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC754u;
            // 0x3fc758: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC75Cu; }
        if (ctx->pc != 0x3FC75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC75Cu; }
        if (ctx->pc != 0x3FC75Cu) { return; }
    }
    ctx->pc = 0x3FC75Cu;
label_3fc75c:
    // 0x3fc75c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3fc75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3fc760:
    // 0x3fc760: 0x8ec400b8  lw          $a0, 0xB8($s6)
    ctx->pc = 0x3fc760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
label_3fc764:
    // 0x3fc764: 0xc474c900  lwc1        $f20, -0x3700($v1)
    ctx->pc = 0x3fc764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fc768:
    // 0x3fc768: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3fc768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc76c:
    // 0x3fc76c: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x3fc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_3fc770:
    // 0x3fc770: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fc770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3fc774:
    // 0x3fc774: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc778:
    // 0x3fc778: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3fc778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3fc77c:
    // 0x3fc77c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fc77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fc780:
    // 0x3fc780: 0xc0a7a88  jal         func_29EA20
label_3fc784:
    if (ctx->pc == 0x3FC784u) {
        ctx->pc = 0x3FC784u;
            // 0x3fc784: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3FC788u;
        goto label_3fc788;
    }
    ctx->pc = 0x3FC780u;
    SET_GPR_U32(ctx, 31, 0x3FC788u);
    ctx->pc = 0x3FC784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC780u;
            // 0x3fc784: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC788u; }
        if (ctx->pc != 0x3FC788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC788u; }
        if (ctx->pc != 0x3FC788u) { return; }
    }
    ctx->pc = 0x3FC788u;
label_3fc788:
    // 0x3fc788: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3fc788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3fc78c:
    // 0x3fc78c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fc78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc790:
    // 0x3fc790: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_3fc794:
    if (ctx->pc == 0x3FC794u) {
        ctx->pc = 0x3FC794u;
            // 0x3fc794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FC798u;
        goto label_3fc798;
    }
    ctx->pc = 0x3FC790u;
    {
        const bool branch_taken_0x3fc790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC790u;
            // 0x3fc794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc790) {
            ctx->pc = 0x3FC7C8u;
            goto label_3fc7c8;
        }
    }
    ctx->pc = 0x3FC798u;
label_3fc798:
    // 0x3fc798: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3fc798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3fc79c:
    // 0x3fc79c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc7a0:
    // 0x3fc7a0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3fc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fc7a4:
    // 0x3fc7a4: 0xc081fa8  jal         func_207EA0
label_3fc7a8:
    if (ctx->pc == 0x3FC7A8u) {
        ctx->pc = 0x3FC7A8u;
            // 0x3fc7a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3FC7ACu;
        goto label_3fc7ac;
    }
    ctx->pc = 0x3FC7A4u;
    SET_GPR_U32(ctx, 31, 0x3FC7ACu);
    ctx->pc = 0x3FC7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC7A4u;
            // 0x3fc7a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EA0u;
    if (runtime->hasFunction(0x207EA0u)) {
        auto targetFn = runtime->lookupFunction(0x207EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC7ACu; }
        if (ctx->pc != 0x3FC7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EA0_0x207ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC7ACu; }
        if (ctx->pc != 0x3FC7ACu) { return; }
    }
    ctx->pc = 0x3FC7ACu;
label_3fc7ac:
    // 0x3fc7ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fc7b0:
    // 0x3fc7b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fc7b4:
    // 0x3fc7b4: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x3fc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_3fc7b8:
    // 0x3fc7b8: 0x2442e328  addiu       $v0, $v0, -0x1CD8
    ctx->pc = 0x3fc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
label_3fc7bc:
    // 0x3fc7bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3fc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3fc7c0:
    // 0x3fc7c0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3fc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3fc7c4:
    // 0x3fc7c4: 0x0  nop
    ctx->pc = 0x3fc7c4u;
    // NOP
label_3fc7c8:
    // 0x3fc7c8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3fc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_3fc7cc:
    // 0x3fc7cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3fc7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3fc7d0:
    // 0x3fc7d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fc7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc7d4:
    // 0x3fc7d4: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x3fc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_3fc7d8:
    // 0x3fc7d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fc7dc:
    // 0x3fc7dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3fc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fc7e0:
    // 0x3fc7e0: 0xa3a701b1  sb          $a3, 0x1B1($sp)
    ctx->pc = 0x3fc7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 433), (uint8_t)GPR_U32(ctx, 7));
label_3fc7e4:
    // 0x3fc7e4: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x3fc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_3fc7e8:
    // 0x3fc7e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc7ec:
    // 0x3fc7ec: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x3fc7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
label_3fc7f0:
    // 0x3fc7f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fc7f4:
    // 0x3fc7f4: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x3fc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_3fc7f8:
    // 0x3fc7f8: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x3fc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
label_3fc7fc:
    // 0x3fc7fc: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x3fc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
label_3fc800:
    // 0x3fc800: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x3fc800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_3fc804:
    // 0x3fc804: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x3fc804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_3fc808:
    // 0x3fc808: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x3fc808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fc80c:
    // 0x3fc80c: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x3fc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
label_3fc810:
    // 0x3fc810: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x3fc810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
label_3fc814:
    // 0x3fc814: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3fc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3fc818:
    // 0x3fc818: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x3fc818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_3fc81c:
    // 0x3fc81c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3fc81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3fc820:
    // 0x3fc820: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x3fc820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
label_3fc824:
    // 0x3fc824: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x3fc824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_3fc828:
    // 0x3fc828: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3fc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3fc82c:
    // 0x3fc82c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x3fc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_3fc830:
    // 0x3fc830: 0xa3a701b0  sb          $a3, 0x1B0($sp)
    ctx->pc = 0x3fc830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 7));
label_3fc834:
    // 0x3fc834: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3fc834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fc838:
    // 0x3fc838: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x3fc838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_3fc83c:
    // 0x3fc83c: 0x320f809  jalr        $t9
label_3fc840:
    if (ctx->pc == 0x3FC840u) {
        ctx->pc = 0x3FC840u;
            // 0x3fc840: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x3FC844u;
        goto label_3fc844;
    }
    ctx->pc = 0x3FC83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FC844u);
        ctx->pc = 0x3FC840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC83Cu;
            // 0x3fc840: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FC844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FC844u; }
            if (ctx->pc != 0x3FC844u) { return; }
        }
        }
    }
    ctx->pc = 0x3FC844u;
label_3fc844:
    // 0x3fc844: 0xc082544  jal         func_209510
label_3fc848:
    if (ctx->pc == 0x3FC848u) {
        ctx->pc = 0x3FC848u;
            // 0x3fc848: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3FC84Cu;
        goto label_3fc84c;
    }
    ctx->pc = 0x3FC844u;
    SET_GPR_U32(ctx, 31, 0x3FC84Cu);
    ctx->pc = 0x3FC848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC844u;
            // 0x3fc848: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209510u;
    if (runtime->hasFunction(0x209510u)) {
        auto targetFn = runtime->lookupFunction(0x209510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC84Cu; }
        if (ctx->pc != 0x3FC84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209510_0x209510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC84Cu; }
        if (ctx->pc != 0x3FC84Cu) { return; }
    }
    ctx->pc = 0x3FC84Cu;
label_3fc84c:
    // 0x3fc84c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_3fc850:
    if (ctx->pc == 0x3FC850u) {
        ctx->pc = 0x3FC850u;
            // 0x3fc850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FC854u;
        goto label_3fc854;
    }
    ctx->pc = 0x3FC84Cu;
    {
        const bool branch_taken_0x3fc84c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC84Cu;
            // 0x3fc850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc84c) {
            ctx->pc = 0x3FC858u;
            goto label_3fc858;
        }
    }
    ctx->pc = 0x3FC854u;
label_3fc854:
    // 0x3fc854: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x3fc854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3fc858:
    // 0x3fc858: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3fc858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3fc85c:
    // 0x3fc85c: 0xc082650  jal         func_209940
label_3fc860:
    if (ctx->pc == 0x3FC860u) {
        ctx->pc = 0x3FC860u;
            // 0x3fc860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FC864u;
        goto label_3fc864;
    }
    ctx->pc = 0x3FC85Cu;
    SET_GPR_U32(ctx, 31, 0x3FC864u);
    ctx->pc = 0x3FC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC85Cu;
            // 0x3fc860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209940u;
    if (runtime->hasFunction(0x209940u)) {
        auto targetFn = runtime->lookupFunction(0x209940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC864u; }
        if (ctx->pc != 0x3FC864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209940_0x209940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC864u; }
        if (ctx->pc != 0x3FC864u) { return; }
    }
    ctx->pc = 0x3FC864u;
label_3fc864:
    // 0x3fc864: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fc864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc868:
    // 0x3fc868: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3fc868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3fc86c:
    // 0x3fc86c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc870:
    // 0x3fc870: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fc870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fc874:
    // 0x3fc874: 0xc0a7a88  jal         func_29EA20
label_3fc878:
    if (ctx->pc == 0x3FC878u) {
        ctx->pc = 0x3FC878u;
            // 0x3fc878: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3FC87Cu;
        goto label_3fc87c;
    }
    ctx->pc = 0x3FC874u;
    SET_GPR_U32(ctx, 31, 0x3FC87Cu);
    ctx->pc = 0x3FC878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC874u;
            // 0x3fc878: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC87Cu; }
        if (ctx->pc != 0x3FC87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC87Cu; }
        if (ctx->pc != 0x3FC87Cu) { return; }
    }
    ctx->pc = 0x3FC87Cu;
label_3fc87c:
    // 0x3fc87c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3fc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3fc880:
    // 0x3fc880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fc880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc884:
    // 0x3fc884: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3fc888:
    if (ctx->pc == 0x3FC888u) {
        ctx->pc = 0x3FC888u;
            // 0x3fc888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FC88Cu;
        goto label_3fc88c;
    }
    ctx->pc = 0x3FC884u;
    {
        const bool branch_taken_0x3fc884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC884u;
            // 0x3fc888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc884) {
            ctx->pc = 0x3FC8A0u;
            goto label_3fc8a0;
        }
    }
    ctx->pc = 0x3FC88Cu;
label_3fc88c:
    // 0x3fc88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc890:
    // 0x3fc890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fc890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc894:
    // 0x3fc894: 0xc0822a8  jal         func_208AA0
label_3fc898:
    if (ctx->pc == 0x3FC898u) {
        ctx->pc = 0x3FC898u;
            // 0x3fc898: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FC89Cu;
        goto label_3fc89c;
    }
    ctx->pc = 0x3FC894u;
    SET_GPR_U32(ctx, 31, 0x3FC89Cu);
    ctx->pc = 0x3FC898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC894u;
            // 0x3fc898: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208AA0u;
    if (runtime->hasFunction(0x208AA0u)) {
        auto targetFn = runtime->lookupFunction(0x208AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC89Cu; }
        if (ctx->pc != 0x3FC89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208AA0_0x208aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC89Cu; }
        if (ctx->pc != 0x3FC89Cu) { return; }
    }
    ctx->pc = 0x3FC89Cu;
label_3fc89c:
    // 0x3fc89c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fc89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc8a0:
    // 0x3fc8a0: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x3fc8a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_3fc8a4:
    // 0x3fc8a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3fc8a8:
    if (ctx->pc == 0x3FC8A8u) {
        ctx->pc = 0x3FC8ACu;
        goto label_3fc8ac;
    }
    ctx->pc = 0x3FC8A4u;
    {
        const bool branch_taken_0x3fc8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8a4) {
            ctx->pc = 0x3FC8E8u;
            goto label_3fc8e8;
        }
    }
    ctx->pc = 0x3FC8ACu;
label_3fc8ac:
    // 0x3fc8ac: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x3fc8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_3fc8b0:
    // 0x3fc8b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fc8b4:
    // 0x3fc8b4: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x3fc8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_3fc8b8:
    // 0x3fc8b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3fc8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3fc8bc:
    // 0x3fc8bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3fc8bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3fc8c0:
    // 0x3fc8c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3fc8c4:
    if (ctx->pc == 0x3FC8C4u) {
        ctx->pc = 0x3FC8C8u;
        goto label_3fc8c8;
    }
    ctx->pc = 0x3FC8C0u;
    {
        const bool branch_taken_0x3fc8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8c0) {
            ctx->pc = 0x3FC8E8u;
            goto label_3fc8e8;
        }
    }
    ctx->pc = 0x3FC8C8u;
label_3fc8c8:
    // 0x3fc8c8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_3fc8cc:
    if (ctx->pc == 0x3FC8CCu) {
        ctx->pc = 0x3FC8D0u;
        goto label_3fc8d0;
    }
    ctx->pc = 0x3FC8C8u;
    {
        const bool branch_taken_0x3fc8c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8c8) {
            ctx->pc = 0x3FC8E8u;
            goto label_3fc8e8;
        }
    }
    ctx->pc = 0x3FC8D0u;
label_3fc8d0:
    // 0x3fc8d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3fc8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc8d4:
    // 0x3fc8d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fc8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc8d8:
    // 0x3fc8d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fc8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fc8dc:
    // 0x3fc8dc: 0x320f809  jalr        $t9
label_3fc8e0:
    if (ctx->pc == 0x3FC8E0u) {
        ctx->pc = 0x3FC8E0u;
            // 0x3fc8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FC8E4u;
        goto label_3fc8e4;
    }
    ctx->pc = 0x3FC8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FC8E4u);
        ctx->pc = 0x3FC8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC8DCu;
            // 0x3fc8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FC8E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FC8E4u; }
            if (ctx->pc != 0x3FC8E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3FC8E4u;
label_3fc8e4:
    // 0x3fc8e4: 0x0  nop
    ctx->pc = 0x3fc8e4u;
    // NOP
label_3fc8e8:
    // 0x3fc8e8: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x3fc8e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_3fc8ec:
    // 0x3fc8ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3fc8f0:
    if (ctx->pc == 0x3FC8F0u) {
        ctx->pc = 0x3FC8F4u;
        goto label_3fc8f4;
    }
    ctx->pc = 0x3FC8ECu;
    {
        const bool branch_taken_0x3fc8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8ec) {
            ctx->pc = 0x3FC930u;
            goto label_3fc930;
        }
    }
    ctx->pc = 0x3FC8F4u;
label_3fc8f4:
    // 0x3fc8f4: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x3fc8f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_3fc8f8:
    // 0x3fc8f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fc8fc:
    // 0x3fc8fc: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x3fc8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
label_3fc900:
    // 0x3fc900: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3fc900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3fc904:
    // 0x3fc904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3fc904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3fc908:
    // 0x3fc908: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3fc90c:
    if (ctx->pc == 0x3FC90Cu) {
        ctx->pc = 0x3FC910u;
        goto label_3fc910;
    }
    ctx->pc = 0x3FC908u;
    {
        const bool branch_taken_0x3fc908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc908) {
            ctx->pc = 0x3FC930u;
            goto label_3fc930;
        }
    }
    ctx->pc = 0x3FC910u;
label_3fc910:
    // 0x3fc910: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_3fc914:
    if (ctx->pc == 0x3FC914u) {
        ctx->pc = 0x3FC918u;
        goto label_3fc918;
    }
    ctx->pc = 0x3FC910u;
    {
        const bool branch_taken_0x3fc910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc910) {
            ctx->pc = 0x3FC930u;
            goto label_3fc930;
        }
    }
    ctx->pc = 0x3FC918u;
label_3fc918:
    // 0x3fc918: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3fc918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fc91c:
    // 0x3fc91c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc920:
    // 0x3fc920: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fc920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fc924:
    // 0x3fc924: 0x320f809  jalr        $t9
label_3fc928:
    if (ctx->pc == 0x3FC928u) {
        ctx->pc = 0x3FC928u;
            // 0x3fc928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FC92Cu;
        goto label_3fc92c;
    }
    ctx->pc = 0x3FC924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FC92Cu);
        ctx->pc = 0x3FC928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC924u;
            // 0x3fc928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FC92Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FC92Cu; }
            if (ctx->pc != 0x3FC92Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FC92Cu;
label_3fc92c:
    // 0x3fc92c: 0x0  nop
    ctx->pc = 0x3fc92cu;
    // NOP
label_3fc930:
    // 0x3fc930: 0xc0892d0  jal         func_224B40
label_3fc934:
    if (ctx->pc == 0x3FC934u) {
        ctx->pc = 0x3FC934u;
            // 0x3fc934: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FC938u;
        goto label_3fc938;
    }
    ctx->pc = 0x3FC930u;
    SET_GPR_U32(ctx, 31, 0x3FC938u);
    ctx->pc = 0x3FC934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC930u;
            // 0x3fc934: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC938u; }
        if (ctx->pc != 0x3FC938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC938u; }
        if (ctx->pc != 0x3FC938u) { return; }
    }
    ctx->pc = 0x3FC938u;
label_3fc938:
    // 0x3fc938: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x3fc938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_3fc93c:
    // 0x3fc93c: 0xafb100b4  sw          $s1, 0xB4($sp)
    ctx->pc = 0x3fc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 17));
label_3fc940:
    // 0x3fc940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3fc940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3fc944:
    // 0x3fc944: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3fc944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3fc948:
    // 0x3fc948: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3fc948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3fc94c:
    // 0x3fc94c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x3fc94cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3fc950:
    // 0x3fc950: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3fc950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3fc954:
    // 0x3fc954: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3fc954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3fc958:
    // 0x3fc958: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3fc958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3fc95c:
    // 0x3fc95c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3fc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3fc960:
    // 0x3fc960: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x3fc960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_3fc964:
    // 0x3fc964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fc964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc968:
    // 0x3fc968: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3fc968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fc96c:
    // 0x3fc96c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x3fc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_3fc970:
    // 0x3fc970: 0xa3a20160  sb          $v0, 0x160($sp)
    ctx->pc = 0x3fc970u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 2));
label_3fc974:
    // 0x3fc974: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3fc974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3fc978:
    // 0x3fc978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc97c:
    // 0x3fc97c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fc980:
    // 0x3fc980: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x3fc980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
label_3fc984:
    // 0x3fc984: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3fc984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3fc988:
    // 0x3fc988: 0xc0a7a88  jal         func_29EA20
label_3fc98c:
    if (ctx->pc == 0x3FC98Cu) {
        ctx->pc = 0x3FC98Cu;
            // 0x3fc98c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3FC990u;
        goto label_3fc990;
    }
    ctx->pc = 0x3FC988u;
    SET_GPR_U32(ctx, 31, 0x3FC990u);
    ctx->pc = 0x3FC98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC988u;
            // 0x3fc98c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC990u; }
        if (ctx->pc != 0x3FC990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC990u; }
        if (ctx->pc != 0x3FC990u) { return; }
    }
    ctx->pc = 0x3FC990u;
label_3fc990:
    // 0x3fc990: 0x24030210  addiu       $v1, $zero, 0x210
    ctx->pc = 0x3fc990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_3fc994:
    // 0x3fc994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fc994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc998:
    // 0x3fc998: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3fc99c:
    if (ctx->pc == 0x3FC99Cu) {
        ctx->pc = 0x3FC99Cu;
            // 0x3fc99c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FC9A0u;
        goto label_3fc9a0;
    }
    ctx->pc = 0x3FC998u;
    {
        const bool branch_taken_0x3fc998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC998u;
            // 0x3fc99c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc998) {
            ctx->pc = 0x3FC9C0u;
            goto label_3fc9c0;
        }
    }
    ctx->pc = 0x3FC9A0u;
label_3fc9a0:
    // 0x3fc9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fc9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9a4:
    // 0x3fc9a4: 0xc088ef4  jal         func_223BD0
label_3fc9a8:
    if (ctx->pc == 0x3FC9A8u) {
        ctx->pc = 0x3FC9A8u;
            // 0x3fc9a8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FC9ACu;
        goto label_3fc9ac;
    }
    ctx->pc = 0x3FC9A4u;
    SET_GPR_U32(ctx, 31, 0x3FC9ACu);
    ctx->pc = 0x3FC9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC9A4u;
            // 0x3fc9a8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC9ACu; }
        if (ctx->pc != 0x3FC9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC9ACu; }
        if (ctx->pc != 0x3FC9ACu) { return; }
    }
    ctx->pc = 0x3FC9ACu;
label_3fc9ac:
    // 0x3fc9ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fc9b0:
    // 0x3fc9b0: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3fc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3fc9b4:
    // 0x3fc9b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3fc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3fc9b8:
    // 0x3fc9b8: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x3fc9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_3fc9bc:
    // 0x3fc9bc: 0x0  nop
    ctx->pc = 0x3fc9bcu;
    // NOP
label_3fc9c0:
    // 0x3fc9c0: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x3fc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3fc9c4:
    // 0x3fc9c4: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x3fc9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_3fc9c8:
    // 0x3fc9c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fc9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9cc:
    // 0x3fc9cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc9d0:
    // 0x3fc9d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fc9d4:
    // 0x3fc9d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fc9d8:
    // 0x3fc9d8: 0xc08c164  jal         func_230590
label_3fc9dc:
    if (ctx->pc == 0x3FC9DCu) {
        ctx->pc = 0x3FC9DCu;
            // 0x3fc9dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FC9E0u;
        goto label_3fc9e0;
    }
    ctx->pc = 0x3FC9D8u;
    SET_GPR_U32(ctx, 31, 0x3FC9E0u);
    ctx->pc = 0x3FC9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC9D8u;
            // 0x3fc9dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC9E0u; }
        if (ctx->pc != 0x3FC9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC9E0u; }
        if (ctx->pc != 0x3FC9E0u) { return; }
    }
    ctx->pc = 0x3FC9E0u;
label_3fc9e0:
    // 0x3fc9e0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3fc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3fc9e4:
    // 0x3fc9e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc9e8:
    // 0x3fc9e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fc9ec:
    // 0x3fc9ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fc9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9f0:
    // 0x3fc9f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fc9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc9f4:
    // 0x3fc9f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fc9f8:
    // 0x3fc9f8: 0xc08bff0  jal         func_22FFC0
label_3fc9fc:
    if (ctx->pc == 0x3FC9FCu) {
        ctx->pc = 0x3FC9FCu;
            // 0x3fc9fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA00u;
        goto label_3fca00;
    }
    ctx->pc = 0x3FC9F8u;
    SET_GPR_U32(ctx, 31, 0x3FCA00u);
    ctx->pc = 0x3FC9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC9F8u;
            // 0x3fc9fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCA00u; }
        if (ctx->pc != 0x3FCA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCA00u; }
        if (ctx->pc != 0x3FCA00u) { return; }
    }
    ctx->pc = 0x3FCA00u;
label_3fca00:
    // 0x3fca00: 0x8ec300b8  lw          $v1, 0xB8($s6)
    ctx->pc = 0x3fca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
label_3fca04:
    // 0x3fca04: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x3fca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_3fca08:
    // 0x3fca08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fca0c:
    // 0x3fca0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3fca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3fca10:
    // 0x3fca10: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x3fca10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_3fca14:
    // 0x3fca14: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x3fca14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3fca18:
    // 0x3fca18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3fca1c:
    if (ctx->pc == 0x3FCA1Cu) {
        ctx->pc = 0x3FCA20u;
        goto label_3fca20;
    }
    ctx->pc = 0x3FCA18u;
    {
        const bool branch_taken_0x3fca18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fca18) {
            ctx->pc = 0x3FCA58u;
            goto label_3fca58;
        }
    }
    ctx->pc = 0x3FCA20u;
label_3fca20:
    // 0x3fca20: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3fca20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3fca24:
    // 0x3fca24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3fca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3fca28:
    // 0x3fca28: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x3fca28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_3fca2c:
    // 0x3fca2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3fca2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3fca30:
    // 0x3fca30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3fca30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3fca34:
    // 0x3fca34: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3fca38:
    if (ctx->pc == 0x3FCA38u) {
        ctx->pc = 0x3FCA3Cu;
        goto label_3fca3c;
    }
    ctx->pc = 0x3FCA34u;
    {
        const bool branch_taken_0x3fca34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fca34) {
            ctx->pc = 0x3FCA58u;
            goto label_3fca58;
        }
    }
    ctx->pc = 0x3FCA3Cu;
label_3fca3c:
    // 0x3fca3c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3fca40:
    if (ctx->pc == 0x3FCA40u) {
        ctx->pc = 0x3FCA44u;
        goto label_3fca44;
    }
    ctx->pc = 0x3FCA3Cu;
    {
        const bool branch_taken_0x3fca3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fca3c) {
            ctx->pc = 0x3FCA58u;
            goto label_3fca58;
        }
    }
    ctx->pc = 0x3FCA44u;
label_3fca44:
    // 0x3fca44: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3fca44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fca48:
    // 0x3fca48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fca4c:
    // 0x3fca4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fca4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fca50:
    // 0x3fca50: 0x320f809  jalr        $t9
label_3fca54:
    if (ctx->pc == 0x3FCA54u) {
        ctx->pc = 0x3FCA54u;
            // 0x3fca54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FCA58u;
        goto label_3fca58;
    }
    ctx->pc = 0x3FCA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FCA58u);
        ctx->pc = 0x3FCA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCA50u;
            // 0x3fca54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FCA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FCA58u; }
            if (ctx->pc != 0x3FCA58u) { return; }
        }
        }
    }
    ctx->pc = 0x3FCA58u;
label_3fca58:
    // 0x3fca58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3fca58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3fca5c:
    // 0x3fca5c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x3fca5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_3fca60:
    // 0x3fca60: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x3fca60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_3fca64:
    // 0x3fca64: 0x1460ff43  bnez        $v1, . + 4 + (-0xBD << 2)
label_3fca68:
    if (ctx->pc == 0x3FCA68u) {
        ctx->pc = 0x3FCA68u;
            // 0x3fca68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3FCA6Cu;
        goto label_3fca6c;
    }
    ctx->pc = 0x3FCA64u;
    {
        const bool branch_taken_0x3fca64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCA64u;
            // 0x3fca68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca64) {
            ctx->pc = 0x3FC774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc774;
        }
    }
    ctx->pc = 0x3FCA6Cu;
label_3fca6c:
    // 0x3fca6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3fca6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3fca70:
    // 0x3fca70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3fca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fca74:
    // 0x3fca74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3fca74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fca78:
    // 0x3fca78: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3fca78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fca7c:
    // 0x3fca7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3fca7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fca80:
    // 0x3fca80: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3fca80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fca84:
    // 0x3fca84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fca84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fca88:
    // 0x3fca88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fca88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fca8c:
    // 0x3fca8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fca8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fca90:
    // 0x3fca90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fca90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fca94:
    // 0x3fca94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fca94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fca98:
    // 0x3fca98: 0x3e00008  jr          $ra
label_3fca9c:
    if (ctx->pc == 0x3FCA9Cu) {
        ctx->pc = 0x3FCA9Cu;
            // 0x3fca9c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3FCAA0u;
        goto label_3fcaa0;
    }
    ctx->pc = 0x3FCA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCA98u;
            // 0x3fca9c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FCAA0u;
label_3fcaa0:
    // 0x3fcaa0: 0x3e00008  jr          $ra
label_3fcaa4:
    if (ctx->pc == 0x3FCAA4u) {
        ctx->pc = 0x3FCAA8u;
        goto label_3fcaa8;
    }
    ctx->pc = 0x3FCAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FCAA8u;
label_3fcaa8:
    // 0x3fcaa8: 0x0  nop
    ctx->pc = 0x3fcaa8u;
    // NOP
label_3fcaac:
    // 0x3fcaac: 0x0  nop
    ctx->pc = 0x3fcaacu;
    // NOP
label_3fcab0:
    // 0x3fcab0: 0x248400c4  addiu       $a0, $a0, 0xC4
    ctx->pc = 0x3fcab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_3fcab4:
    // 0x3fcab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fcab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fcab8:
    // 0x3fcab8: 0x2406d8e4  addiu       $a2, $zero, -0x271C
    ctx->pc = 0x3fcab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957284));
label_3fcabc:
    // 0x3fcabc: 0x804cab0  j           func_132AC0
label_3fcac0:
    if (ctx->pc == 0x3FCAC0u) {
        ctx->pc = 0x3FCAC0u;
            // 0x3fcac0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FCAC4u;
        goto label_3fcac4;
    }
    ctx->pc = 0x3FCABCu;
    ctx->pc = 0x3FCAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCABCu;
            // 0x3fcac0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00132AC0_0x132ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3FCAC4u;
label_3fcac4:
    // 0x3fcac4: 0x0  nop
    ctx->pc = 0x3fcac4u;
    // NOP
label_3fcac8:
    // 0x3fcac8: 0x0  nop
    ctx->pc = 0x3fcac8u;
    // NOP
label_3fcacc:
    // 0x3fcacc: 0x0  nop
    ctx->pc = 0x3fcaccu;
    // NOP
}
