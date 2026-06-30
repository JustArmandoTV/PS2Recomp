#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BC720
// Address: 0x3bc720 - 0x3bcbc0
void sub_003BC720_0x3bc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC720_0x3bc720");
#endif

    switch (ctx->pc) {
        case 0x3bc720u: goto label_3bc720;
        case 0x3bc724u: goto label_3bc724;
        case 0x3bc728u: goto label_3bc728;
        case 0x3bc72cu: goto label_3bc72c;
        case 0x3bc730u: goto label_3bc730;
        case 0x3bc734u: goto label_3bc734;
        case 0x3bc738u: goto label_3bc738;
        case 0x3bc73cu: goto label_3bc73c;
        case 0x3bc740u: goto label_3bc740;
        case 0x3bc744u: goto label_3bc744;
        case 0x3bc748u: goto label_3bc748;
        case 0x3bc74cu: goto label_3bc74c;
        case 0x3bc750u: goto label_3bc750;
        case 0x3bc754u: goto label_3bc754;
        case 0x3bc758u: goto label_3bc758;
        case 0x3bc75cu: goto label_3bc75c;
        case 0x3bc760u: goto label_3bc760;
        case 0x3bc764u: goto label_3bc764;
        case 0x3bc768u: goto label_3bc768;
        case 0x3bc76cu: goto label_3bc76c;
        case 0x3bc770u: goto label_3bc770;
        case 0x3bc774u: goto label_3bc774;
        case 0x3bc778u: goto label_3bc778;
        case 0x3bc77cu: goto label_3bc77c;
        case 0x3bc780u: goto label_3bc780;
        case 0x3bc784u: goto label_3bc784;
        case 0x3bc788u: goto label_3bc788;
        case 0x3bc78cu: goto label_3bc78c;
        case 0x3bc790u: goto label_3bc790;
        case 0x3bc794u: goto label_3bc794;
        case 0x3bc798u: goto label_3bc798;
        case 0x3bc79cu: goto label_3bc79c;
        case 0x3bc7a0u: goto label_3bc7a0;
        case 0x3bc7a4u: goto label_3bc7a4;
        case 0x3bc7a8u: goto label_3bc7a8;
        case 0x3bc7acu: goto label_3bc7ac;
        case 0x3bc7b0u: goto label_3bc7b0;
        case 0x3bc7b4u: goto label_3bc7b4;
        case 0x3bc7b8u: goto label_3bc7b8;
        case 0x3bc7bcu: goto label_3bc7bc;
        case 0x3bc7c0u: goto label_3bc7c0;
        case 0x3bc7c4u: goto label_3bc7c4;
        case 0x3bc7c8u: goto label_3bc7c8;
        case 0x3bc7ccu: goto label_3bc7cc;
        case 0x3bc7d0u: goto label_3bc7d0;
        case 0x3bc7d4u: goto label_3bc7d4;
        case 0x3bc7d8u: goto label_3bc7d8;
        case 0x3bc7dcu: goto label_3bc7dc;
        case 0x3bc7e0u: goto label_3bc7e0;
        case 0x3bc7e4u: goto label_3bc7e4;
        case 0x3bc7e8u: goto label_3bc7e8;
        case 0x3bc7ecu: goto label_3bc7ec;
        case 0x3bc7f0u: goto label_3bc7f0;
        case 0x3bc7f4u: goto label_3bc7f4;
        case 0x3bc7f8u: goto label_3bc7f8;
        case 0x3bc7fcu: goto label_3bc7fc;
        case 0x3bc800u: goto label_3bc800;
        case 0x3bc804u: goto label_3bc804;
        case 0x3bc808u: goto label_3bc808;
        case 0x3bc80cu: goto label_3bc80c;
        case 0x3bc810u: goto label_3bc810;
        case 0x3bc814u: goto label_3bc814;
        case 0x3bc818u: goto label_3bc818;
        case 0x3bc81cu: goto label_3bc81c;
        case 0x3bc820u: goto label_3bc820;
        case 0x3bc824u: goto label_3bc824;
        case 0x3bc828u: goto label_3bc828;
        case 0x3bc82cu: goto label_3bc82c;
        case 0x3bc830u: goto label_3bc830;
        case 0x3bc834u: goto label_3bc834;
        case 0x3bc838u: goto label_3bc838;
        case 0x3bc83cu: goto label_3bc83c;
        case 0x3bc840u: goto label_3bc840;
        case 0x3bc844u: goto label_3bc844;
        case 0x3bc848u: goto label_3bc848;
        case 0x3bc84cu: goto label_3bc84c;
        case 0x3bc850u: goto label_3bc850;
        case 0x3bc854u: goto label_3bc854;
        case 0x3bc858u: goto label_3bc858;
        case 0x3bc85cu: goto label_3bc85c;
        case 0x3bc860u: goto label_3bc860;
        case 0x3bc864u: goto label_3bc864;
        case 0x3bc868u: goto label_3bc868;
        case 0x3bc86cu: goto label_3bc86c;
        case 0x3bc870u: goto label_3bc870;
        case 0x3bc874u: goto label_3bc874;
        case 0x3bc878u: goto label_3bc878;
        case 0x3bc87cu: goto label_3bc87c;
        case 0x3bc880u: goto label_3bc880;
        case 0x3bc884u: goto label_3bc884;
        case 0x3bc888u: goto label_3bc888;
        case 0x3bc88cu: goto label_3bc88c;
        case 0x3bc890u: goto label_3bc890;
        case 0x3bc894u: goto label_3bc894;
        case 0x3bc898u: goto label_3bc898;
        case 0x3bc89cu: goto label_3bc89c;
        case 0x3bc8a0u: goto label_3bc8a0;
        case 0x3bc8a4u: goto label_3bc8a4;
        case 0x3bc8a8u: goto label_3bc8a8;
        case 0x3bc8acu: goto label_3bc8ac;
        case 0x3bc8b0u: goto label_3bc8b0;
        case 0x3bc8b4u: goto label_3bc8b4;
        case 0x3bc8b8u: goto label_3bc8b8;
        case 0x3bc8bcu: goto label_3bc8bc;
        case 0x3bc8c0u: goto label_3bc8c0;
        case 0x3bc8c4u: goto label_3bc8c4;
        case 0x3bc8c8u: goto label_3bc8c8;
        case 0x3bc8ccu: goto label_3bc8cc;
        case 0x3bc8d0u: goto label_3bc8d0;
        case 0x3bc8d4u: goto label_3bc8d4;
        case 0x3bc8d8u: goto label_3bc8d8;
        case 0x3bc8dcu: goto label_3bc8dc;
        case 0x3bc8e0u: goto label_3bc8e0;
        case 0x3bc8e4u: goto label_3bc8e4;
        case 0x3bc8e8u: goto label_3bc8e8;
        case 0x3bc8ecu: goto label_3bc8ec;
        case 0x3bc8f0u: goto label_3bc8f0;
        case 0x3bc8f4u: goto label_3bc8f4;
        case 0x3bc8f8u: goto label_3bc8f8;
        case 0x3bc8fcu: goto label_3bc8fc;
        case 0x3bc900u: goto label_3bc900;
        case 0x3bc904u: goto label_3bc904;
        case 0x3bc908u: goto label_3bc908;
        case 0x3bc90cu: goto label_3bc90c;
        case 0x3bc910u: goto label_3bc910;
        case 0x3bc914u: goto label_3bc914;
        case 0x3bc918u: goto label_3bc918;
        case 0x3bc91cu: goto label_3bc91c;
        case 0x3bc920u: goto label_3bc920;
        case 0x3bc924u: goto label_3bc924;
        case 0x3bc928u: goto label_3bc928;
        case 0x3bc92cu: goto label_3bc92c;
        case 0x3bc930u: goto label_3bc930;
        case 0x3bc934u: goto label_3bc934;
        case 0x3bc938u: goto label_3bc938;
        case 0x3bc93cu: goto label_3bc93c;
        case 0x3bc940u: goto label_3bc940;
        case 0x3bc944u: goto label_3bc944;
        case 0x3bc948u: goto label_3bc948;
        case 0x3bc94cu: goto label_3bc94c;
        case 0x3bc950u: goto label_3bc950;
        case 0x3bc954u: goto label_3bc954;
        case 0x3bc958u: goto label_3bc958;
        case 0x3bc95cu: goto label_3bc95c;
        case 0x3bc960u: goto label_3bc960;
        case 0x3bc964u: goto label_3bc964;
        case 0x3bc968u: goto label_3bc968;
        case 0x3bc96cu: goto label_3bc96c;
        case 0x3bc970u: goto label_3bc970;
        case 0x3bc974u: goto label_3bc974;
        case 0x3bc978u: goto label_3bc978;
        case 0x3bc97cu: goto label_3bc97c;
        case 0x3bc980u: goto label_3bc980;
        case 0x3bc984u: goto label_3bc984;
        case 0x3bc988u: goto label_3bc988;
        case 0x3bc98cu: goto label_3bc98c;
        case 0x3bc990u: goto label_3bc990;
        case 0x3bc994u: goto label_3bc994;
        case 0x3bc998u: goto label_3bc998;
        case 0x3bc99cu: goto label_3bc99c;
        case 0x3bc9a0u: goto label_3bc9a0;
        case 0x3bc9a4u: goto label_3bc9a4;
        case 0x3bc9a8u: goto label_3bc9a8;
        case 0x3bc9acu: goto label_3bc9ac;
        case 0x3bc9b0u: goto label_3bc9b0;
        case 0x3bc9b4u: goto label_3bc9b4;
        case 0x3bc9b8u: goto label_3bc9b8;
        case 0x3bc9bcu: goto label_3bc9bc;
        case 0x3bc9c0u: goto label_3bc9c0;
        case 0x3bc9c4u: goto label_3bc9c4;
        case 0x3bc9c8u: goto label_3bc9c8;
        case 0x3bc9ccu: goto label_3bc9cc;
        case 0x3bc9d0u: goto label_3bc9d0;
        case 0x3bc9d4u: goto label_3bc9d4;
        case 0x3bc9d8u: goto label_3bc9d8;
        case 0x3bc9dcu: goto label_3bc9dc;
        case 0x3bc9e0u: goto label_3bc9e0;
        case 0x3bc9e4u: goto label_3bc9e4;
        case 0x3bc9e8u: goto label_3bc9e8;
        case 0x3bc9ecu: goto label_3bc9ec;
        case 0x3bc9f0u: goto label_3bc9f0;
        case 0x3bc9f4u: goto label_3bc9f4;
        case 0x3bc9f8u: goto label_3bc9f8;
        case 0x3bc9fcu: goto label_3bc9fc;
        case 0x3bca00u: goto label_3bca00;
        case 0x3bca04u: goto label_3bca04;
        case 0x3bca08u: goto label_3bca08;
        case 0x3bca0cu: goto label_3bca0c;
        case 0x3bca10u: goto label_3bca10;
        case 0x3bca14u: goto label_3bca14;
        case 0x3bca18u: goto label_3bca18;
        case 0x3bca1cu: goto label_3bca1c;
        case 0x3bca20u: goto label_3bca20;
        case 0x3bca24u: goto label_3bca24;
        case 0x3bca28u: goto label_3bca28;
        case 0x3bca2cu: goto label_3bca2c;
        case 0x3bca30u: goto label_3bca30;
        case 0x3bca34u: goto label_3bca34;
        case 0x3bca38u: goto label_3bca38;
        case 0x3bca3cu: goto label_3bca3c;
        case 0x3bca40u: goto label_3bca40;
        case 0x3bca44u: goto label_3bca44;
        case 0x3bca48u: goto label_3bca48;
        case 0x3bca4cu: goto label_3bca4c;
        case 0x3bca50u: goto label_3bca50;
        case 0x3bca54u: goto label_3bca54;
        case 0x3bca58u: goto label_3bca58;
        case 0x3bca5cu: goto label_3bca5c;
        case 0x3bca60u: goto label_3bca60;
        case 0x3bca64u: goto label_3bca64;
        case 0x3bca68u: goto label_3bca68;
        case 0x3bca6cu: goto label_3bca6c;
        case 0x3bca70u: goto label_3bca70;
        case 0x3bca74u: goto label_3bca74;
        case 0x3bca78u: goto label_3bca78;
        case 0x3bca7cu: goto label_3bca7c;
        case 0x3bca80u: goto label_3bca80;
        case 0x3bca84u: goto label_3bca84;
        case 0x3bca88u: goto label_3bca88;
        case 0x3bca8cu: goto label_3bca8c;
        case 0x3bca90u: goto label_3bca90;
        case 0x3bca94u: goto label_3bca94;
        case 0x3bca98u: goto label_3bca98;
        case 0x3bca9cu: goto label_3bca9c;
        case 0x3bcaa0u: goto label_3bcaa0;
        case 0x3bcaa4u: goto label_3bcaa4;
        case 0x3bcaa8u: goto label_3bcaa8;
        case 0x3bcaacu: goto label_3bcaac;
        case 0x3bcab0u: goto label_3bcab0;
        case 0x3bcab4u: goto label_3bcab4;
        case 0x3bcab8u: goto label_3bcab8;
        case 0x3bcabcu: goto label_3bcabc;
        case 0x3bcac0u: goto label_3bcac0;
        case 0x3bcac4u: goto label_3bcac4;
        case 0x3bcac8u: goto label_3bcac8;
        case 0x3bcaccu: goto label_3bcacc;
        case 0x3bcad0u: goto label_3bcad0;
        case 0x3bcad4u: goto label_3bcad4;
        case 0x3bcad8u: goto label_3bcad8;
        case 0x3bcadcu: goto label_3bcadc;
        case 0x3bcae0u: goto label_3bcae0;
        case 0x3bcae4u: goto label_3bcae4;
        case 0x3bcae8u: goto label_3bcae8;
        case 0x3bcaecu: goto label_3bcaec;
        case 0x3bcaf0u: goto label_3bcaf0;
        case 0x3bcaf4u: goto label_3bcaf4;
        case 0x3bcaf8u: goto label_3bcaf8;
        case 0x3bcafcu: goto label_3bcafc;
        case 0x3bcb00u: goto label_3bcb00;
        case 0x3bcb04u: goto label_3bcb04;
        case 0x3bcb08u: goto label_3bcb08;
        case 0x3bcb0cu: goto label_3bcb0c;
        case 0x3bcb10u: goto label_3bcb10;
        case 0x3bcb14u: goto label_3bcb14;
        case 0x3bcb18u: goto label_3bcb18;
        case 0x3bcb1cu: goto label_3bcb1c;
        case 0x3bcb20u: goto label_3bcb20;
        case 0x3bcb24u: goto label_3bcb24;
        case 0x3bcb28u: goto label_3bcb28;
        case 0x3bcb2cu: goto label_3bcb2c;
        case 0x3bcb30u: goto label_3bcb30;
        case 0x3bcb34u: goto label_3bcb34;
        case 0x3bcb38u: goto label_3bcb38;
        case 0x3bcb3cu: goto label_3bcb3c;
        case 0x3bcb40u: goto label_3bcb40;
        case 0x3bcb44u: goto label_3bcb44;
        case 0x3bcb48u: goto label_3bcb48;
        case 0x3bcb4cu: goto label_3bcb4c;
        case 0x3bcb50u: goto label_3bcb50;
        case 0x3bcb54u: goto label_3bcb54;
        case 0x3bcb58u: goto label_3bcb58;
        case 0x3bcb5cu: goto label_3bcb5c;
        case 0x3bcb60u: goto label_3bcb60;
        case 0x3bcb64u: goto label_3bcb64;
        case 0x3bcb68u: goto label_3bcb68;
        case 0x3bcb6cu: goto label_3bcb6c;
        case 0x3bcb70u: goto label_3bcb70;
        case 0x3bcb74u: goto label_3bcb74;
        case 0x3bcb78u: goto label_3bcb78;
        case 0x3bcb7cu: goto label_3bcb7c;
        case 0x3bcb80u: goto label_3bcb80;
        case 0x3bcb84u: goto label_3bcb84;
        case 0x3bcb88u: goto label_3bcb88;
        case 0x3bcb8cu: goto label_3bcb8c;
        case 0x3bcb90u: goto label_3bcb90;
        case 0x3bcb94u: goto label_3bcb94;
        case 0x3bcb98u: goto label_3bcb98;
        case 0x3bcb9cu: goto label_3bcb9c;
        case 0x3bcba0u: goto label_3bcba0;
        case 0x3bcba4u: goto label_3bcba4;
        case 0x3bcba8u: goto label_3bcba8;
        case 0x3bcbacu: goto label_3bcbac;
        case 0x3bcbb0u: goto label_3bcbb0;
        case 0x3bcbb4u: goto label_3bcbb4;
        case 0x3bcbb8u: goto label_3bcbb8;
        case 0x3bcbbcu: goto label_3bcbbc;
        default: break;
    }

    ctx->pc = 0x3bc720u;

label_3bc720:
    // 0x3bc720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bc720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3bc724:
    // 0x3bc724: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3bc724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3bc728:
    // 0x3bc728: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bc728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bc72c:
    // 0x3bc72c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bc730:
    // 0x3bc730: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bc730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3bc734:
    // 0x3bc734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bc734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc738:
    // 0x3bc738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bc738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bc73c:
    // 0x3bc73c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bc73cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bc740:
    // 0x3bc740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bc740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bc744:
    // 0x3bc744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bc748:
    // 0x3bc748: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3bc748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc74c:
    // 0x3bc74c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x3bc74cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bc750:
    // 0x3bc750: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x3bc750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3bc754:
    // 0x3bc754: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x3bc754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_3bc758:
    // 0x3bc758: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x3bc758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_3bc75c:
    // 0x3bc75c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3bc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_3bc760:
    // 0x3bc760: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x3bc760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_3bc764:
    // 0x3bc764: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3bc764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_3bc768:
    // 0x3bc768: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3bc768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_3bc76c:
    // 0x3bc76c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x3bc76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_3bc770:
    // 0x3bc770: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3bc770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_3bc774:
    // 0x3bc774: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3bc774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_3bc778:
    // 0x3bc778: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x3bc778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_3bc77c:
    // 0x3bc77c: 0xa0830058  sb          $v1, 0x58($a0)
    ctx->pc = 0x3bc77cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 3));
label_3bc780:
    // 0x3bc780: 0xa0800059  sb          $zero, 0x59($a0)
    ctx->pc = 0x3bc780u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 0));
label_3bc784:
    // 0x3bc784: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x3bc784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_3bc788:
    // 0x3bc788: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x3bc788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_3bc78c:
    // 0x3bc78c: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x3bc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_3bc790:
    // 0x3bc790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bc790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bc794:
    // 0x3bc794: 0xae400dd8  sw          $zero, 0xDD8($s2)
    ctx->pc = 0x3bc794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3544), GPR_U32(ctx, 0));
label_3bc798:
    // 0x3bc798: 0x8e420d74  lw          $v0, 0xD74($s2)
    ctx->pc = 0x3bc798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3bc79c:
    // 0x3bc79c: 0xc077fb0  jal         func_1DFEC0
label_3bc7a0:
    if (ctx->pc == 0x3BC7A0u) {
        ctx->pc = 0x3BC7A0u;
            // 0x3bc7a0: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->pc = 0x3BC7A4u;
        goto label_3bc7a4;
    }
    ctx->pc = 0x3BC79Cu;
    SET_GPR_U32(ctx, 31, 0x3BC7A4u);
    ctx->pc = 0x3BC7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC79Cu;
            // 0x3bc7a0: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC7A4u; }
        if (ctx->pc != 0x3BC7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC7A4u; }
        if (ctx->pc != 0x3BC7A4u) { return; }
    }
    ctx->pc = 0x3BC7A4u;
label_3bc7a4:
    // 0x3bc7a4: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x3bc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3bc7a8:
    // 0x3bc7a8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3bc7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3bc7ac:
    // 0x3bc7ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3bc7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3bc7b0:
    // 0x3bc7b0: 0x320f809  jalr        $t9
label_3bc7b4:
    if (ctx->pc == 0x3BC7B4u) {
        ctx->pc = 0x3BC7B4u;
            // 0x3bc7b4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3BC7B8u;
        goto label_3bc7b8;
    }
    ctx->pc = 0x3BC7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC7B8u);
        ctx->pc = 0x3BC7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC7B0u;
            // 0x3bc7b4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC7B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC7B8u; }
            if (ctx->pc != 0x3BC7B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC7B8u;
label_3bc7b8:
    // 0x3bc7b8: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x3bc7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3bc7bc:
    // 0x3bc7bc: 0xc0eeb2c  jal         func_3BACB0
label_3bc7c0:
    if (ctx->pc == 0x3BC7C0u) {
        ctx->pc = 0x3BC7C0u;
            // 0x3bc7c0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3BC7C4u;
        goto label_3bc7c4;
    }
    ctx->pc = 0x3BC7BCu;
    SET_GPR_U32(ctx, 31, 0x3BC7C4u);
    ctx->pc = 0x3BC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC7BCu;
            // 0x3bc7c0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC7C4u; }
        if (ctx->pc != 0x3BC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC7C4u; }
        if (ctx->pc != 0x3BC7C4u) { return; }
    }
    ctx->pc = 0x3BC7C4u;
label_3bc7c4:
    // 0x3bc7c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc7c8:
    // 0x3bc7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc7cc:
    // 0x3bc7cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bc7d0:
    // 0x3bc7d0: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x3bc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_3bc7d4:
    // 0x3bc7d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc7d8:
    // 0x3bc7d8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x3bc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_3bc7dc:
    // 0x3bc7dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc7e0:
    // 0x3bc7e0: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x3bc7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
label_3bc7e4:
    // 0x3bc7e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc7e8:
    // 0x3bc7e8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3bc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3bc7ec:
    // 0x3bc7ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bc7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3bc7f0:
    // 0x3bc7f0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_3bc7f4:
    if (ctx->pc == 0x3BC7F4u) {
        ctx->pc = 0x3BC7F4u;
            // 0x3bc7f4: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x3BC7F8u;
        goto label_3bc7f8;
    }
    ctx->pc = 0x3BC7F0u;
    {
        const bool branch_taken_0x3bc7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc7f0) {
            ctx->pc = 0x3BC7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC7F0u;
            // 0x3bc7f4: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC868u;
            goto label_3bc868;
        }
    }
    ctx->pc = 0x3BC7F8u;
label_3bc7f8:
    // 0x3bc7f8: 0xc0754b4  jal         func_1D52D0
label_3bc7fc:
    if (ctx->pc == 0x3BC7FCu) {
        ctx->pc = 0x3BC7FCu;
            // 0x3bc7fc: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3BC800u;
        goto label_3bc800;
    }
    ctx->pc = 0x3BC7F8u;
    SET_GPR_U32(ctx, 31, 0x3BC800u);
    ctx->pc = 0x3BC7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC7F8u;
            // 0x3bc7fc: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC800u; }
        if (ctx->pc != 0x3BC800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC800u; }
        if (ctx->pc != 0x3BC800u) { return; }
    }
    ctx->pc = 0x3BC800u;
label_3bc800:
    // 0x3bc800: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3bc800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3bc804:
    // 0x3bc804: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3bc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3bc808:
    // 0x3bc808: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3bc80c:
    if (ctx->pc == 0x3BC80Cu) {
        ctx->pc = 0x3BC810u;
        goto label_3bc810;
    }
    ctx->pc = 0x3BC808u;
    {
        const bool branch_taken_0x3bc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc808) {
            ctx->pc = 0x3BC864u;
            goto label_3bc864;
        }
    }
    ctx->pc = 0x3BC810u;
label_3bc810:
    // 0x3bc810: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc814:
    // 0x3bc814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3bc814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bc818:
    // 0x3bc818: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x3bc818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc81c:
    // 0x3bc81c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3bc81cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bc820:
    // 0x3bc820: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3bc824:
    if (ctx->pc == 0x3BC824u) {
        ctx->pc = 0x3BC824u;
            // 0x3bc824: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3BC828u;
        goto label_3bc828;
    }
    ctx->pc = 0x3BC820u;
    {
        const bool branch_taken_0x3bc820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc820) {
            ctx->pc = 0x3BC824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC820u;
            // 0x3bc824: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC834u;
            goto label_3bc834;
        }
    }
    ctx->pc = 0x3BC828u;
label_3bc828:
    // 0x3bc828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc82c:
    // 0x3bc82c: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x3bc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_3bc830:
    // 0x3bc830: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3bc830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc834:
    // 0x3bc834: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x3bc834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_3bc838:
    // 0x3bc838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bc83c:
    // 0x3bc83c: 0x8e790014  lw          $t9, 0x14($s3)
    ctx->pc = 0x3bc83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3bc840:
    // 0x3bc840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bc840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bc844:
    // 0x3bc844: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3bc844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3bc848:
    // 0x3bc848: 0x320f809  jalr        $t9
label_3bc84c:
    if (ctx->pc == 0x3BC84Cu) {
        ctx->pc = 0x3BC84Cu;
            // 0x3bc84c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3BC850u;
        goto label_3bc850;
    }
    ctx->pc = 0x3BC848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC850u);
        ctx->pc = 0x3BC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC848u;
            // 0x3bc84c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC850u; }
            if (ctx->pc != 0x3BC850u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC850u;
label_3bc850:
    // 0x3bc850: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3bc850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc854:
    // 0x3bc854: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x3bc854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc858:
    // 0x3bc858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bc858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3bc85c:
    // 0x3bc85c: 0xc0eea24  jal         func_3BA890
label_3bc860:
    if (ctx->pc == 0x3BC860u) {
        ctx->pc = 0x3BC860u;
            // 0x3bc860: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->pc = 0x3BC864u;
        goto label_3bc864;
    }
    ctx->pc = 0x3BC85Cu;
    SET_GPR_U32(ctx, 31, 0x3BC864u);
    ctx->pc = 0x3BC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC85Cu;
            // 0x3bc860: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC864u; }
        if (ctx->pc != 0x3BC864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC864u; }
        if (ctx->pc != 0x3BC864u) { return; }
    }
    ctx->pc = 0x3BC864u;
label_3bc864:
    // 0x3bc864: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x3bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3bc868:
    // 0x3bc868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bc868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3bc86c:
    // 0x3bc86c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3bc870:
    if (ctx->pc == 0x3BC870u) {
        ctx->pc = 0x3BC870u;
            // 0x3bc870: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->pc = 0x3BC874u;
        goto label_3bc874;
    }
    ctx->pc = 0x3BC86Cu;
    {
        const bool branch_taken_0x3bc86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc86c) {
            ctx->pc = 0x3BC870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC86Cu;
            // 0x3bc870: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC8C0u;
            goto label_3bc8c0;
        }
    }
    ctx->pc = 0x3BC874u;
label_3bc874:
    // 0x3bc874: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3bc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3bc878:
    // 0x3bc878: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3bc87c:
    if (ctx->pc == 0x3BC87Cu) {
        ctx->pc = 0x3BC880u;
        goto label_3bc880;
    }
    ctx->pc = 0x3BC878u;
    {
        const bool branch_taken_0x3bc878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc878) {
            ctx->pc = 0x3BC8A0u;
            goto label_3bc8a0;
        }
    }
    ctx->pc = 0x3BC880u;
label_3bc880:
    // 0x3bc880: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc884:
    // 0x3bc884: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc888:
    // 0x3bc888: 0xc4606588  lwc1        $f0, 0x6588($v1)
    ctx->pc = 0x3bc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc88c:
    // 0x3bc88c: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3bc88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3bc890:
    // 0x3bc890: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3bc890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3bc894:
    // 0x3bc894: 0xc440658c  lwc1        $f0, 0x658C($v0)
    ctx->pc = 0x3bc894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc898:
    // 0x3bc898: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3bc89c:
    if (ctx->pc == 0x3BC89Cu) {
        ctx->pc = 0x3BC89Cu;
            // 0x3bc89c: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->pc = 0x3BC8A0u;
        goto label_3bc8a0;
    }
    ctx->pc = 0x3BC898u;
    {
        const bool branch_taken_0x3bc898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC898u;
            // 0x3bc89c: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc898) {
            ctx->pc = 0x3BC904u;
            goto label_3bc904;
        }
    }
    ctx->pc = 0x3BC8A0u;
label_3bc8a0:
    // 0x3bc8a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc8a4:
    // 0x3bc8a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc8a8:
    // 0x3bc8a8: 0xc4606590  lwc1        $f0, 0x6590($v1)
    ctx->pc = 0x3bc8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 26000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc8ac:
    // 0x3bc8ac: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3bc8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3bc8b0:
    // 0x3bc8b0: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3bc8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3bc8b4:
    // 0x3bc8b4: 0xc440656c  lwc1        $f0, 0x656C($v0)
    ctx->pc = 0x3bc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc8b8:
    // 0x3bc8b8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3bc8bc:
    if (ctx->pc == 0x3BC8BCu) {
        ctx->pc = 0x3BC8BCu;
            // 0x3bc8bc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->pc = 0x3BC8C0u;
        goto label_3bc8c0;
    }
    ctx->pc = 0x3BC8B8u;
    {
        const bool branch_taken_0x3bc8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC8B8u;
            // 0x3bc8bc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8b8) {
            ctx->pc = 0x3BC904u;
            goto label_3bc904;
        }
    }
    ctx->pc = 0x3BC8C0u;
label_3bc8c0:
    // 0x3bc8c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3bc8c4:
    if (ctx->pc == 0x3BC8C4u) {
        ctx->pc = 0x3BC8C8u;
        goto label_3bc8c8;
    }
    ctx->pc = 0x3BC8C0u;
    {
        const bool branch_taken_0x3bc8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc8c0) {
            ctx->pc = 0x3BC8E8u;
            goto label_3bc8e8;
        }
    }
    ctx->pc = 0x3BC8C8u;
label_3bc8c8:
    // 0x3bc8c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc8cc:
    // 0x3bc8cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc8d0:
    // 0x3bc8d0: 0xc4606520  lwc1        $f0, 0x6520($v1)
    ctx->pc = 0x3bc8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc8d4:
    // 0x3bc8d4: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3bc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3bc8d8:
    // 0x3bc8d8: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3bc8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3bc8dc:
    // 0x3bc8dc: 0xc440653c  lwc1        $f0, 0x653C($v0)
    ctx->pc = 0x3bc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc8e0:
    // 0x3bc8e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3bc8e4:
    if (ctx->pc == 0x3BC8E4u) {
        ctx->pc = 0x3BC8E4u;
            // 0x3bc8e4: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->pc = 0x3BC8E8u;
        goto label_3bc8e8;
    }
    ctx->pc = 0x3BC8E0u;
    {
        const bool branch_taken_0x3bc8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC8E0u;
            // 0x3bc8e4: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8e0) {
            ctx->pc = 0x3BC904u;
            goto label_3bc904;
        }
    }
    ctx->pc = 0x3BC8E8u;
label_3bc8e8:
    // 0x3bc8e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc8ec:
    // 0x3bc8ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc8f0:
    // 0x3bc8f0: 0xc4606558  lwc1        $f0, 0x6558($v1)
    ctx->pc = 0x3bc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc8f4:
    // 0x3bc8f4: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3bc8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3bc8f8:
    // 0x3bc8f8: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3bc8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3bc8fc:
    // 0x3bc8fc: 0xc440656c  lwc1        $f0, 0x656C($v0)
    ctx->pc = 0x3bc8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc900:
    // 0x3bc900: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x3bc900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_3bc904:
    // 0x3bc904: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x3bc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3bc908:
    // 0x3bc908: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3bc908u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bc90c:
    // 0x3bc90c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3bc910:
    if (ctx->pc == 0x3BC910u) {
        ctx->pc = 0x3BC910u;
            // 0x3bc910: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC914u;
        goto label_3bc914;
    }
    ctx->pc = 0x3BC90Cu;
    {
        const bool branch_taken_0x3bc90c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BC910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC90Cu;
            // 0x3bc910: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc90c) {
            ctx->pc = 0x3BC924u;
            goto label_3bc924;
        }
    }
    ctx->pc = 0x3BC914u;
label_3bc914:
    // 0x3bc914: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3bc914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bc918:
    // 0x3bc918: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bc91c:
    if (ctx->pc == 0x3BC91Cu) {
        ctx->pc = 0x3BC920u;
        goto label_3bc920;
    }
    ctx->pc = 0x3BC918u;
    {
        const bool branch_taken_0x3bc918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc918) {
            ctx->pc = 0x3BC924u;
            goto label_3bc924;
        }
    }
    ctx->pc = 0x3BC920u;
label_3bc920:
    // 0x3bc920: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3bc920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc924:
    // 0x3bc924: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3bc928:
    if (ctx->pc == 0x3BC928u) {
        ctx->pc = 0x3BC92Cu;
        goto label_3bc92c;
    }
    ctx->pc = 0x3BC924u;
    {
        const bool branch_taken_0x3bc924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc924) {
            ctx->pc = 0x3BC940u;
            goto label_3bc940;
        }
    }
    ctx->pc = 0x3BC92Cu;
label_3bc92c:
    // 0x3bc92c: 0xc075eb4  jal         func_1D7AD0
label_3bc930:
    if (ctx->pc == 0x3BC930u) {
        ctx->pc = 0x3BC930u;
            // 0x3bc930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC934u;
        goto label_3bc934;
    }
    ctx->pc = 0x3BC92Cu;
    SET_GPR_U32(ctx, 31, 0x3BC934u);
    ctx->pc = 0x3BC930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC92Cu;
            // 0x3bc930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC934u; }
        if (ctx->pc != 0x3BC934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC934u; }
        if (ctx->pc != 0x3BC934u) { return; }
    }
    ctx->pc = 0x3BC934u;
label_3bc934:
    // 0x3bc934: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bc938:
    if (ctx->pc == 0x3BC938u) {
        ctx->pc = 0x3BC93Cu;
        goto label_3bc93c;
    }
    ctx->pc = 0x3BC934u;
    {
        const bool branch_taken_0x3bc934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc934) {
            ctx->pc = 0x3BC940u;
            goto label_3bc940;
        }
    }
    ctx->pc = 0x3BC93Cu;
label_3bc93c:
    // 0x3bc93c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bc93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc940:
    // 0x3bc940: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3bc944:
    if (ctx->pc == 0x3BC944u) {
        ctx->pc = 0x3BC944u;
            // 0x3bc944: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x3BC948u;
        goto label_3bc948;
    }
    ctx->pc = 0x3BC940u;
    {
        const bool branch_taken_0x3bc940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc940) {
            ctx->pc = 0x3BC944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC940u;
            // 0x3bc944: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC95Cu;
            goto label_3bc95c;
        }
    }
    ctx->pc = 0x3BC948u;
label_3bc948:
    // 0x3bc948: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x3bc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3bc94c:
    // 0x3bc94c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc950:
    // 0x3bc950: 0x54620057  bnel        $v1, $v0, . + 4 + (0x57 << 2)
label_3bc954:
    if (ctx->pc == 0x3BC954u) {
        ctx->pc = 0x3BC954u;
            // 0x3bc954: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3BC958u;
        goto label_3bc958;
    }
    ctx->pc = 0x3BC950u;
    {
        const bool branch_taken_0x3bc950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bc950) {
            ctx->pc = 0x3BC954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC950u;
            // 0x3bc954: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BCAB0u;
            goto label_3bcab0;
        }
    }
    ctx->pc = 0x3BC958u;
label_3bc958:
    // 0x3bc958: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x3bc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3bc95c:
    // 0x3bc95c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bc95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3bc960:
    // 0x3bc960: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_3bc964:
    if (ctx->pc == 0x3BC964u) {
        ctx->pc = 0x3BC968u;
        goto label_3bc968;
    }
    ctx->pc = 0x3BC960u;
    {
        const bool branch_taken_0x3bc960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc960) {
            ctx->pc = 0x3BCAACu;
            goto label_3bcaac;
        }
    }
    ctx->pc = 0x3BC968u;
label_3bc968:
    // 0x3bc968: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3bc968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3bc96c:
    // 0x3bc96c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3bc970:
    if (ctx->pc == 0x3BC970u) {
        ctx->pc = 0x3BC970u;
            // 0x3bc970: 0x8e620044  lw          $v0, 0x44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->pc = 0x3BC974u;
        goto label_3bc974;
    }
    ctx->pc = 0x3BC96Cu;
    {
        const bool branch_taken_0x3bc96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc96c) {
            ctx->pc = 0x3BC970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC96Cu;
            // 0x3bc970: 0x8e620044  lw          $v0, 0x44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC9C4u;
            goto label_3bc9c4;
        }
    }
    ctx->pc = 0x3BC974u;
label_3bc974:
    // 0x3bc974: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc978:
    // 0x3bc978: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bc978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc97c:
    // 0x3bc97c: 0xc040180  jal         func_100600
label_3bc980:
    if (ctx->pc == 0x3BC980u) {
        ctx->pc = 0x3BC980u;
            // 0x3bc980: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x3BC984u;
        goto label_3bc984;
    }
    ctx->pc = 0x3BC97Cu;
    SET_GPR_U32(ctx, 31, 0x3BC984u);
    ctx->pc = 0x3BC980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC97Cu;
            // 0x3bc980: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC984u; }
        if (ctx->pc != 0x3BC984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC984u; }
        if (ctx->pc != 0x3BC984u) { return; }
    }
    ctx->pc = 0x3BC984u;
label_3bc984:
    // 0x3bc984: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3bc988:
    if (ctx->pc == 0x3BC988u) {
        ctx->pc = 0x3BC988u;
            // 0x3bc988: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x3BC98Cu;
        goto label_3bc98c;
    }
    ctx->pc = 0x3BC984u;
    {
        const bool branch_taken_0x3bc984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc984) {
            ctx->pc = 0x3BC988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC984u;
            // 0x3bc988: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC9C0u;
            goto label_3bc9c0;
        }
    }
    ctx->pc = 0x3BC98Cu;
label_3bc98c:
    // 0x3bc98c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc990:
    // 0x3bc990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bc990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc994:
    // 0x3bc994: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3bc994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3bc998:
    // 0x3bc998: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3bc998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3bc99c:
    // 0x3bc99c: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x3bc99cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3bc9a0:
    // 0x3bc9a0: 0x3445abb0  ori         $a1, $v0, 0xABB0
    ctx->pc = 0x3bc9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43952);
label_3bc9a4:
    // 0x3bc9a4: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x3bc9a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3bc9a8:
    // 0x3bc9a8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3bc9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc9ac:
    // 0x3bc9ac: 0x246703f8  addiu       $a3, $v1, 0x3F8
    ctx->pc = 0x3bc9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1016));
label_3bc9b0:
    // 0x3bc9b0: 0x2408208b  addiu       $t0, $zero, 0x208B
    ctx->pc = 0x3bc9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8331));
label_3bc9b4:
    // 0x3bc9b4: 0xc0ca5d0  jal         func_329740
label_3bc9b8:
    if (ctx->pc == 0x3BC9B8u) {
        ctx->pc = 0x3BC9B8u;
            // 0x3bc9b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3BC9BCu;
        goto label_3bc9bc;
    }
    ctx->pc = 0x3BC9B4u;
    SET_GPR_U32(ctx, 31, 0x3BC9BCu);
    ctx->pc = 0x3BC9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC9B4u;
            // 0x3bc9b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329740u;
    if (runtime->hasFunction(0x329740u)) {
        auto targetFn = runtime->lookupFunction(0x329740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC9BCu; }
        if (ctx->pc != 0x3BC9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329740_0x329740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC9BCu; }
        if (ctx->pc != 0x3BC9BCu) { return; }
    }
    ctx->pc = 0x3BC9BCu;
label_3bc9bc:
    // 0x3bc9bc: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x3bc9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
label_3bc9c0:
    // 0x3bc9c0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x3bc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3bc9c4:
    // 0x3bc9c4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3bc9c8:
    if (ctx->pc == 0x3BC9C8u) {
        ctx->pc = 0x3BC9C8u;
            // 0x3bc9c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3BC9CCu;
        goto label_3bc9cc;
    }
    ctx->pc = 0x3BC9C4u;
    {
        const bool branch_taken_0x3bc9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc9c4) {
            ctx->pc = 0x3BC9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC9C4u;
            // 0x3bc9c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BCA20u;
            goto label_3bca20;
        }
    }
    ctx->pc = 0x3BC9CCu;
label_3bc9cc:
    // 0x3bc9cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc9d0:
    // 0x3bc9d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bc9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc9d4:
    // 0x3bc9d4: 0xc040180  jal         func_100600
label_3bc9d8:
    if (ctx->pc == 0x3BC9D8u) {
        ctx->pc = 0x3BC9D8u;
            // 0x3bc9d8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x3BC9DCu;
        goto label_3bc9dc;
    }
    ctx->pc = 0x3BC9D4u;
    SET_GPR_U32(ctx, 31, 0x3BC9DCu);
    ctx->pc = 0x3BC9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC9D4u;
            // 0x3bc9d8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC9DCu; }
        if (ctx->pc != 0x3BC9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC9DCu; }
        if (ctx->pc != 0x3BC9DCu) { return; }
    }
    ctx->pc = 0x3BC9DCu;
label_3bc9dc:
    // 0x3bc9dc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3bc9e0:
    if (ctx->pc == 0x3BC9E0u) {
        ctx->pc = 0x3BC9E0u;
            // 0x3bc9e0: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3BC9E4u;
        goto label_3bc9e4;
    }
    ctx->pc = 0x3BC9DCu;
    {
        const bool branch_taken_0x3bc9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc9dc) {
            ctx->pc = 0x3BC9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC9DCu;
            // 0x3bc9e0: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BCA1Cu;
            goto label_3bca1c;
        }
    }
    ctx->pc = 0x3BC9E4u;
label_3bc9e4:
    // 0x3bc9e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc9e8:
    // 0x3bc9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bc9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9ec:
    // 0x3bc9ec: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3bc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3bc9f0:
    // 0x3bc9f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3bc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3bc9f4:
    // 0x3bc9f4: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x3bc9f4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3bc9f8:
    // 0x3bc9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc9fc:
    // 0x3bc9fc: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x3bc9fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3bca00:
    // 0x3bca00: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3bca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bca04:
    // 0x3bca04: 0x3445ab92  ori         $a1, $v0, 0xAB92
    ctx->pc = 0x3bca04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43922);
label_3bca08:
    // 0x3bca08: 0x24670418  addiu       $a3, $v1, 0x418
    ctx->pc = 0x3bca08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1048));
label_3bca0c:
    // 0x3bca0c: 0x24082095  addiu       $t0, $zero, 0x2095
    ctx->pc = 0x3bca0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8341));
label_3bca10:
    // 0x3bca10: 0xc0b9404  jal         func_2E5010
label_3bca14:
    if (ctx->pc == 0x3BCA14u) {
        ctx->pc = 0x3BCA14u;
            // 0x3bca14: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3BCA18u;
        goto label_3bca18;
    }
    ctx->pc = 0x3BCA10u;
    SET_GPR_U32(ctx, 31, 0x3BCA18u);
    ctx->pc = 0x3BCA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA10u;
            // 0x3bca14: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA18u; }
        if (ctx->pc != 0x3BCA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA18u; }
        if (ctx->pc != 0x3BCA18u) { return; }
    }
    ctx->pc = 0x3BCA18u;
label_3bca18:
    // 0x3bca18: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x3bca18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_3bca1c:
    // 0x3bca1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bca20:
    // 0x3bca20: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3bca24:
    // 0x3bca24: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_3bca28:
    if (ctx->pc == 0x3BCA28u) {
        ctx->pc = 0x3BCA28u;
            // 0x3bca28: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3BCA2Cu;
        goto label_3bca2c;
    }
    ctx->pc = 0x3BCA24u;
    {
        const bool branch_taken_0x3bca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA24u;
            // 0x3bca28: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca24) {
            ctx->pc = 0x3BCAACu;
            goto label_3bcaac;
        }
    }
    ctx->pc = 0x3BCA2Cu;
label_3bca2c:
    // 0x3bca2c: 0xc0754b4  jal         func_1D52D0
label_3bca30:
    if (ctx->pc == 0x3BCA30u) {
        ctx->pc = 0x3BCA30u;
            // 0x3bca30: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x3BCA34u;
        goto label_3bca34;
    }
    ctx->pc = 0x3BCA2Cu;
    SET_GPR_U32(ctx, 31, 0x3BCA34u);
    ctx->pc = 0x3BCA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA2Cu;
            // 0x3bca30: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA34u; }
        if (ctx->pc != 0x3BCA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA34u; }
        if (ctx->pc != 0x3BCA34u) { return; }
    }
    ctx->pc = 0x3BCA34u;
label_3bca34:
    // 0x3bca34: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3bca38:
    // 0x3bca38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3bca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3bca3c:
    // 0x3bca3c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_3bca40:
    if (ctx->pc == 0x3BCA40u) {
        ctx->pc = 0x3BCA44u;
        goto label_3bca44;
    }
    ctx->pc = 0x3BCA3Cu;
    {
        const bool branch_taken_0x3bca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bca3c) {
            ctx->pc = 0x3BCAACu;
            goto label_3bcaac;
        }
    }
    ctx->pc = 0x3BCA44u;
label_3bca44:
    // 0x3bca44: 0xc040180  jal         func_100600
label_3bca48:
    if (ctx->pc == 0x3BCA48u) {
        ctx->pc = 0x3BCA48u;
            // 0x3bca48: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x3BCA4Cu;
        goto label_3bca4c;
    }
    ctx->pc = 0x3BCA44u;
    SET_GPR_U32(ctx, 31, 0x3BCA4Cu);
    ctx->pc = 0x3BCA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA44u;
            // 0x3bca48: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA4Cu; }
        if (ctx->pc != 0x3BCA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA4Cu; }
        if (ctx->pc != 0x3BCA4Cu) { return; }
    }
    ctx->pc = 0x3BCA4Cu;
label_3bca4c:
    // 0x3bca4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3bca50:
    if (ctx->pc == 0x3BCA50u) {
        ctx->pc = 0x3BCA50u;
            // 0x3bca50: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x3BCA54u;
        goto label_3bca54;
    }
    ctx->pc = 0x3BCA4Cu;
    {
        const bool branch_taken_0x3bca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bca4c) {
            ctx->pc = 0x3BCA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA4Cu;
            // 0x3bca50: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BCA70u;
            goto label_3bca70;
        }
    }
    ctx->pc = 0x3BCA54u;
label_3bca54:
    // 0x3bca54: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x3bca54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3bca58:
    // 0x3bca58: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3bca58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3bca5c:
    // 0x3bca5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bca60:
    // 0x3bca60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bca64:
    // 0x3bca64: 0xc0c3f60  jal         func_30FD80
label_3bca68:
    if (ctx->pc == 0x3BCA68u) {
        ctx->pc = 0x3BCA68u;
            // 0x3bca68: 0x24c68370  addiu       $a2, $a2, -0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935408));
        ctx->pc = 0x3BCA6Cu;
        goto label_3bca6c;
    }
    ctx->pc = 0x3BCA64u;
    SET_GPR_U32(ctx, 31, 0x3BCA6Cu);
    ctx->pc = 0x3BCA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCA64u;
            // 0x3bca68: 0x24c68370  addiu       $a2, $a2, -0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA6Cu; }
        if (ctx->pc != 0x3BCA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCA6Cu; }
        if (ctx->pc != 0x3BCA6Cu) { return; }
    }
    ctx->pc = 0x3BCA6Cu;
label_3bca6c:
    // 0x3bca6c: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x3bca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_3bca70:
    // 0x3bca70: 0x26050ed0  addiu       $a1, $s0, 0xED0
    ctx->pc = 0x3bca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3792));
label_3bca74:
    // 0x3bca74: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x3bca74u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_3bca78:
    // 0x3bca78: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x3bca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_3bca7c:
    // 0x3bca7c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3bca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3bca80:
    // 0x3bca80: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x3bca80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_3bca84:
    // 0x3bca84: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x3bca84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_3bca88:
    // 0x3bca88: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x3bca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_3bca8c:
    // 0x3bca8c: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x3bca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_3bca90:
    // 0x3bca90: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x3bca90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_3bca94:
    // 0x3bca94: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x3bca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3bca98:
    // 0x3bca98: 0x820411aa  lb          $a0, 0x11AA($s0)
    ctx->pc = 0x3bca98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3bca9c:
    // 0x3bca9c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3bca9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3bcaa0:
    // 0x3bcaa0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bcaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3bcaa4:
    // 0x3bcaa4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3bcaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3bcaa8:
    // 0x3bcaa8: 0xac640098  sw          $a0, 0x98($v1)
    ctx->pc = 0x3bcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 4));
label_3bcaac:
    // 0x3bcaac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bcab0:
    // 0x3bcab0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3bcab0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bcab4:
    // 0x3bcab4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3bcab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bcab8:
    // 0x3bcab8: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x3bcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_3bcabc:
    // 0x3bcabc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3bcac0:
    if (ctx->pc == 0x3BCAC0u) {
        ctx->pc = 0x3BCAC0u;
            // 0x3bcac0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAC4u;
        goto label_3bcac4;
    }
    ctx->pc = 0x3BCABCu;
    {
        const bool branch_taken_0x3bcabc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BCAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCABCu;
            // 0x3bcac0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcabc) {
            ctx->pc = 0x3BCAD4u;
            goto label_3bcad4;
        }
    }
    ctx->pc = 0x3BCAC4u;
label_3bcac4:
    // 0x3bcac4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3bcac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bcac8:
    // 0x3bcac8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bcacc:
    if (ctx->pc == 0x3BCACCu) {
        ctx->pc = 0x3BCAD0u;
        goto label_3bcad0;
    }
    ctx->pc = 0x3BCAC8u;
    {
        const bool branch_taken_0x3bcac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcac8) {
            ctx->pc = 0x3BCAD4u;
            goto label_3bcad4;
        }
    }
    ctx->pc = 0x3BCAD0u;
label_3bcad0:
    // 0x3bcad0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3bcad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bcad4:
    // 0x3bcad4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3bcad8:
    if (ctx->pc == 0x3BCAD8u) {
        ctx->pc = 0x3BCADCu;
        goto label_3bcadc;
    }
    ctx->pc = 0x3BCAD4u;
    {
        const bool branch_taken_0x3bcad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcad4) {
            ctx->pc = 0x3BCAF0u;
            goto label_3bcaf0;
        }
    }
    ctx->pc = 0x3BCADCu;
label_3bcadc:
    // 0x3bcadc: 0xc075eb4  jal         func_1D7AD0
label_3bcae0:
    if (ctx->pc == 0x3BCAE0u) {
        ctx->pc = 0x3BCAE0u;
            // 0x3bcae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAE4u;
        goto label_3bcae4;
    }
    ctx->pc = 0x3BCADCu;
    SET_GPR_U32(ctx, 31, 0x3BCAE4u);
    ctx->pc = 0x3BCAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCADCu;
            // 0x3bcae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCAE4u; }
        if (ctx->pc != 0x3BCAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCAE4u; }
        if (ctx->pc != 0x3BCAE4u) { return; }
    }
    ctx->pc = 0x3BCAE4u;
label_3bcae4:
    // 0x3bcae4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bcae8:
    if (ctx->pc == 0x3BCAE8u) {
        ctx->pc = 0x3BCAECu;
        goto label_3bcaec;
    }
    ctx->pc = 0x3BCAE4u;
    {
        const bool branch_taken_0x3bcae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcae4) {
            ctx->pc = 0x3BCAF0u;
            goto label_3bcaf0;
        }
    }
    ctx->pc = 0x3BCAECu;
label_3bcaec:
    // 0x3bcaec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bcaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcaf0:
    // 0x3bcaf0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3bcaf4:
    if (ctx->pc == 0x3BCAF4u) {
        ctx->pc = 0x3BCAF4u;
            // 0x3bcaf4: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x3BCAF8u;
        goto label_3bcaf8;
    }
    ctx->pc = 0x3BCAF0u;
    {
        const bool branch_taken_0x3bcaf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcaf0) {
            ctx->pc = 0x3BCAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCAF0u;
            // 0x3bcaf4: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BCB30u;
            goto label_3bcb30;
        }
    }
    ctx->pc = 0x3BCAF8u;
label_3bcaf8:
    // 0x3bcaf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bcafc:
    // 0x3bcafc: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x3bcafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bcb00:
    // 0x3bcb00: 0x8c433e58  lw          $v1, 0x3E58($v0)
    ctx->pc = 0x3bcb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_3bcb04:
    // 0x3bcb04: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3bcb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bcb08:
    // 0x3bcb08: 0x904200c0  lbu         $v0, 0xC0($v0)
    ctx->pc = 0x3bcb08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
label_3bcb0c:
    // 0x3bcb0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3bcb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3bcb10:
    // 0x3bcb10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3bcb14:
    if (ctx->pc == 0x3BCB14u) {
        ctx->pc = 0x3BCB18u;
        goto label_3bcb18;
    }
    ctx->pc = 0x3BCB10u;
    {
        const bool branch_taken_0x3bcb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcb10) {
            ctx->pc = 0x3BCB2Cu;
            goto label_3bcb2c;
        }
    }
    ctx->pc = 0x3BCB18u;
label_3bcb18:
    // 0x3bcb18: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3bcb1c:
    // 0x3bcb1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bcb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcb20:
    // 0x3bcb20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3bcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3bcb24:
    // 0x3bcb24: 0xa04300b0  sb          $v1, 0xB0($v0)
    ctx->pc = 0x3bcb24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 3));
label_3bcb28:
    // 0x3bcb28: 0xa04000b4  sb          $zero, 0xB4($v0)
    ctx->pc = 0x3bcb28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 180), (uint8_t)GPR_U32(ctx, 0));
label_3bcb2c:
    // 0x3bcb2c: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x3bcb2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_3bcb30:
    // 0x3bcb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcb34:
    // 0x3bcb34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3bcb38:
    // 0x3bcb38: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3bcb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bcb3c:
    // 0x3bcb3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3bcb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bcb40:
    // 0x3bcb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bcb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bcb44:
    // 0x3bcb44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3bcb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3bcb48:
    // 0x3bcb48: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x3bcb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3bcb4c:
    // 0x3bcb4c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3bcb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3bcb50:
    // 0x3bcb50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3bcb54:
    // 0x3bcb54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3bcb58:
    // 0x3bcb58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3bcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3bcb5c:
    // 0x3bcb5c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3bcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3bcb60:
    // 0x3bcb60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bcb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bcb64:
    // 0x3bcb64: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3bcb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3bcb68:
    // 0x3bcb68: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x3bcb68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_3bcb6c:
    // 0x3bcb6c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3bcb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3bcb70:
    // 0x3bcb70: 0x320f809  jalr        $t9
label_3bcb74:
    if (ctx->pc == 0x3BCB74u) {
        ctx->pc = 0x3BCB74u;
            // 0x3bcb74: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3BCB78u;
        goto label_3bcb78;
    }
    ctx->pc = 0x3BCB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BCB78u);
        ctx->pc = 0x3BCB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCB70u;
            // 0x3bcb74: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BCB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BCB78u; }
            if (ctx->pc != 0x3BCB78u) { return; }
        }
        }
    }
    ctx->pc = 0x3BCB78u;
label_3bcb78:
    // 0x3bcb78: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3bcb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3bcb7c:
    // 0x3bcb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bcb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bcb80:
    // 0x3bcb80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3bcb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bcb84:
    // 0x3bcb84: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3bcb84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3bcb88:
    // 0x3bcb88: 0x320f809  jalr        $t9
label_3bcb8c:
    if (ctx->pc == 0x3BCB8Cu) {
        ctx->pc = 0x3BCB8Cu;
            // 0x3bcb8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3BCB90u;
        goto label_3bcb90;
    }
    ctx->pc = 0x3BCB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BCB90u);
        ctx->pc = 0x3BCB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCB88u;
            // 0x3bcb8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BCB90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BCB90u; }
            if (ctx->pc != 0x3BCB90u) { return; }
        }
        }
    }
    ctx->pc = 0x3BCB90u;
label_3bcb90:
    // 0x3bcb90: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x3bcb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
label_3bcb94:
    // 0x3bcb94: 0xc12ca3c  jal         func_4B28F0
label_3bcb98:
    if (ctx->pc == 0x3BCB98u) {
        ctx->pc = 0x3BCB98u;
            // 0x3bcb98: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3BCB9Cu;
        goto label_3bcb9c;
    }
    ctx->pc = 0x3BCB94u;
    SET_GPR_U32(ctx, 31, 0x3BCB9Cu);
    ctx->pc = 0x3BCB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCB94u;
            // 0x3bcb98: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCB9Cu; }
        if (ctx->pc != 0x3BCB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BCB9Cu; }
        if (ctx->pc != 0x3BCB9Cu) { return; }
    }
    ctx->pc = 0x3BCB9Cu;
label_3bcb9c:
    // 0x3bcb9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bcb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bcba0:
    // 0x3bcba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bcba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bcba4:
    // 0x3bcba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bcba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bcba8:
    // 0x3bcba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bcba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bcbac:
    // 0x3bcbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bcbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bcbb0:
    // 0x3bcbb0: 0x3e00008  jr          $ra
label_3bcbb4:
    if (ctx->pc == 0x3BCBB4u) {
        ctx->pc = 0x3BCBB4u;
            // 0x3bcbb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3BCBB8u;
        goto label_3bcbb8;
    }
    ctx->pc = 0x3BCBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BCBB0u;
            // 0x3bcbb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BCBB8u;
label_3bcbb8:
    // 0x3bcbb8: 0x0  nop
    ctx->pc = 0x3bcbb8u;
    // NOP
label_3bcbbc:
    // 0x3bcbbc: 0x0  nop
    ctx->pc = 0x3bcbbcu;
    // NOP
}
