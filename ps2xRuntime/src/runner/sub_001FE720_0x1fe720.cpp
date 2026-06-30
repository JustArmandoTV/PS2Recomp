#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE720
// Address: 0x1fe720 - 0x1feb40
void sub_001FE720_0x1fe720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE720_0x1fe720");
#endif

    switch (ctx->pc) {
        case 0x1fe720u: goto label_1fe720;
        case 0x1fe724u: goto label_1fe724;
        case 0x1fe728u: goto label_1fe728;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe734u: goto label_1fe734;
        case 0x1fe738u: goto label_1fe738;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe740u: goto label_1fe740;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe74cu: goto label_1fe74c;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe754u: goto label_1fe754;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe75cu: goto label_1fe75c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe764u: goto label_1fe764;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe76cu: goto label_1fe76c;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe774u: goto label_1fe774;
        case 0x1fe778u: goto label_1fe778;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe784u: goto label_1fe784;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe78cu: goto label_1fe78c;
        case 0x1fe790u: goto label_1fe790;
        case 0x1fe794u: goto label_1fe794;
        case 0x1fe798u: goto label_1fe798;
        case 0x1fe79cu: goto label_1fe79c;
        case 0x1fe7a0u: goto label_1fe7a0;
        case 0x1fe7a4u: goto label_1fe7a4;
        case 0x1fe7a8u: goto label_1fe7a8;
        case 0x1fe7acu: goto label_1fe7ac;
        case 0x1fe7b0u: goto label_1fe7b0;
        case 0x1fe7b4u: goto label_1fe7b4;
        case 0x1fe7b8u: goto label_1fe7b8;
        case 0x1fe7bcu: goto label_1fe7bc;
        case 0x1fe7c0u: goto label_1fe7c0;
        case 0x1fe7c4u: goto label_1fe7c4;
        case 0x1fe7c8u: goto label_1fe7c8;
        case 0x1fe7ccu: goto label_1fe7cc;
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7d4u: goto label_1fe7d4;
        case 0x1fe7d8u: goto label_1fe7d8;
        case 0x1fe7dcu: goto label_1fe7dc;
        case 0x1fe7e0u: goto label_1fe7e0;
        case 0x1fe7e4u: goto label_1fe7e4;
        case 0x1fe7e8u: goto label_1fe7e8;
        case 0x1fe7ecu: goto label_1fe7ec;
        case 0x1fe7f0u: goto label_1fe7f0;
        case 0x1fe7f4u: goto label_1fe7f4;
        case 0x1fe7f8u: goto label_1fe7f8;
        case 0x1fe7fcu: goto label_1fe7fc;
        case 0x1fe800u: goto label_1fe800;
        case 0x1fe804u: goto label_1fe804;
        case 0x1fe808u: goto label_1fe808;
        case 0x1fe80cu: goto label_1fe80c;
        case 0x1fe810u: goto label_1fe810;
        case 0x1fe814u: goto label_1fe814;
        case 0x1fe818u: goto label_1fe818;
        case 0x1fe81cu: goto label_1fe81c;
        case 0x1fe820u: goto label_1fe820;
        case 0x1fe824u: goto label_1fe824;
        case 0x1fe828u: goto label_1fe828;
        case 0x1fe82cu: goto label_1fe82c;
        case 0x1fe830u: goto label_1fe830;
        case 0x1fe834u: goto label_1fe834;
        case 0x1fe838u: goto label_1fe838;
        case 0x1fe83cu: goto label_1fe83c;
        case 0x1fe840u: goto label_1fe840;
        case 0x1fe844u: goto label_1fe844;
        case 0x1fe848u: goto label_1fe848;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe850u: goto label_1fe850;
        case 0x1fe854u: goto label_1fe854;
        case 0x1fe858u: goto label_1fe858;
        case 0x1fe85cu: goto label_1fe85c;
        case 0x1fe860u: goto label_1fe860;
        case 0x1fe864u: goto label_1fe864;
        case 0x1fe868u: goto label_1fe868;
        case 0x1fe86cu: goto label_1fe86c;
        case 0x1fe870u: goto label_1fe870;
        case 0x1fe874u: goto label_1fe874;
        case 0x1fe878u: goto label_1fe878;
        case 0x1fe87cu: goto label_1fe87c;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe888u: goto label_1fe888;
        case 0x1fe88cu: goto label_1fe88c;
        case 0x1fe890u: goto label_1fe890;
        case 0x1fe894u: goto label_1fe894;
        case 0x1fe898u: goto label_1fe898;
        case 0x1fe89cu: goto label_1fe89c;
        case 0x1fe8a0u: goto label_1fe8a0;
        case 0x1fe8a4u: goto label_1fe8a4;
        case 0x1fe8a8u: goto label_1fe8a8;
        case 0x1fe8acu: goto label_1fe8ac;
        case 0x1fe8b0u: goto label_1fe8b0;
        case 0x1fe8b4u: goto label_1fe8b4;
        case 0x1fe8b8u: goto label_1fe8b8;
        case 0x1fe8bcu: goto label_1fe8bc;
        case 0x1fe8c0u: goto label_1fe8c0;
        case 0x1fe8c4u: goto label_1fe8c4;
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8dcu: goto label_1fe8dc;
        case 0x1fe8e0u: goto label_1fe8e0;
        case 0x1fe8e4u: goto label_1fe8e4;
        case 0x1fe8e8u: goto label_1fe8e8;
        case 0x1fe8ecu: goto label_1fe8ec;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe8f8u: goto label_1fe8f8;
        case 0x1fe8fcu: goto label_1fe8fc;
        case 0x1fe900u: goto label_1fe900;
        case 0x1fe904u: goto label_1fe904;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe90cu: goto label_1fe90c;
        case 0x1fe910u: goto label_1fe910;
        case 0x1fe914u: goto label_1fe914;
        case 0x1fe918u: goto label_1fe918;
        case 0x1fe91cu: goto label_1fe91c;
        case 0x1fe920u: goto label_1fe920;
        case 0x1fe924u: goto label_1fe924;
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe92cu: goto label_1fe92c;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe934u: goto label_1fe934;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe944u: goto label_1fe944;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe94cu: goto label_1fe94c;
        case 0x1fe950u: goto label_1fe950;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe958u: goto label_1fe958;
        case 0x1fe95cu: goto label_1fe95c;
        case 0x1fe960u: goto label_1fe960;
        case 0x1fe964u: goto label_1fe964;
        case 0x1fe968u: goto label_1fe968;
        case 0x1fe96cu: goto label_1fe96c;
        case 0x1fe970u: goto label_1fe970;
        case 0x1fe974u: goto label_1fe974;
        case 0x1fe978u: goto label_1fe978;
        case 0x1fe97cu: goto label_1fe97c;
        case 0x1fe980u: goto label_1fe980;
        case 0x1fe984u: goto label_1fe984;
        case 0x1fe988u: goto label_1fe988;
        case 0x1fe98cu: goto label_1fe98c;
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d4u: goto label_1fe9d4;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9dcu: goto label_1fe9dc;
        case 0x1fe9e0u: goto label_1fe9e0;
        case 0x1fe9e4u: goto label_1fe9e4;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fe9ecu: goto label_1fe9ec;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1fe9f4u: goto label_1fe9f4;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fe9fcu: goto label_1fe9fc;
        case 0x1fea00u: goto label_1fea00;
        case 0x1fea04u: goto label_1fea04;
        case 0x1fea08u: goto label_1fea08;
        case 0x1fea0cu: goto label_1fea0c;
        case 0x1fea10u: goto label_1fea10;
        case 0x1fea14u: goto label_1fea14;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea1cu: goto label_1fea1c;
        case 0x1fea20u: goto label_1fea20;
        case 0x1fea24u: goto label_1fea24;
        case 0x1fea28u: goto label_1fea28;
        case 0x1fea2cu: goto label_1fea2c;
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea34u: goto label_1fea34;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea40u: goto label_1fea40;
        case 0x1fea44u: goto label_1fea44;
        case 0x1fea48u: goto label_1fea48;
        case 0x1fea4cu: goto label_1fea4c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1fea54u: goto label_1fea54;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea64u: goto label_1fea64;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea6cu: goto label_1fea6c;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea74u: goto label_1fea74;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea7cu: goto label_1fea7c;
        case 0x1fea80u: goto label_1fea80;
        case 0x1fea84u: goto label_1fea84;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea8cu: goto label_1fea8c;
        case 0x1fea90u: goto label_1fea90;
        case 0x1fea94u: goto label_1fea94;
        case 0x1fea98u: goto label_1fea98;
        case 0x1fea9cu: goto label_1fea9c;
        case 0x1feaa0u: goto label_1feaa0;
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feaa8u: goto label_1feaa8;
        case 0x1feaacu: goto label_1feaac;
        case 0x1feab0u: goto label_1feab0;
        case 0x1feab4u: goto label_1feab4;
        case 0x1feab8u: goto label_1feab8;
        case 0x1feabcu: goto label_1feabc;
        case 0x1feac0u: goto label_1feac0;
        case 0x1feac4u: goto label_1feac4;
        case 0x1feac8u: goto label_1feac8;
        case 0x1feaccu: goto label_1feacc;
        case 0x1fead0u: goto label_1fead0;
        case 0x1fead4u: goto label_1fead4;
        case 0x1fead8u: goto label_1fead8;
        case 0x1feadcu: goto label_1feadc;
        case 0x1feae0u: goto label_1feae0;
        case 0x1feae4u: goto label_1feae4;
        case 0x1feae8u: goto label_1feae8;
        case 0x1feaecu: goto label_1feaec;
        case 0x1feaf0u: goto label_1feaf0;
        case 0x1feaf4u: goto label_1feaf4;
        case 0x1feaf8u: goto label_1feaf8;
        case 0x1feafcu: goto label_1feafc;
        case 0x1feb00u: goto label_1feb00;
        case 0x1feb04u: goto label_1feb04;
        case 0x1feb08u: goto label_1feb08;
        case 0x1feb0cu: goto label_1feb0c;
        case 0x1feb10u: goto label_1feb10;
        case 0x1feb14u: goto label_1feb14;
        case 0x1feb18u: goto label_1feb18;
        case 0x1feb1cu: goto label_1feb1c;
        case 0x1feb20u: goto label_1feb20;
        case 0x1feb24u: goto label_1feb24;
        case 0x1feb28u: goto label_1feb28;
        case 0x1feb2cu: goto label_1feb2c;
        case 0x1feb30u: goto label_1feb30;
        case 0x1feb34u: goto label_1feb34;
        case 0x1feb38u: goto label_1feb38;
        case 0x1feb3cu: goto label_1feb3c;
        default: break;
    }

    ctx->pc = 0x1fe720u;

label_1fe720:
    // 0x1fe720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fe724:
    // 0x1fe724: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe728:
    // 0x1fe728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe72c:
    // 0x1fe72c: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x1fe72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
label_1fe730:
    // 0x1fe730: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fe730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1fe734:
    // 0x1fe734: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fe734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe738:
    // 0x1fe738: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe73c:
    // 0x1fe73c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fe73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe740:
    // 0x1fe740: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
label_1fe744:
    // 0x1fe744: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fe744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe748:
    // 0x1fe748: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1fe748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1fe74c:
    // 0x1fe74c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe750:
    // 0x1fe750: 0xa3a0003d  sb          $zero, 0x3D($sp)
    ctx->pc = 0x1fe750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 0));
label_1fe754:
    // 0x1fe754: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
label_1fe758:
    // 0x1fe758: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1fe758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1fe75c:
    // 0x1fe75c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1fe75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1fe760:
    // 0x1fe760: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe764:
    // 0x1fe764: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1fe764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1fe768:
    // 0x1fe768: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
label_1fe76c:
    // 0x1fe76c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fe76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fe770:
    // 0x1fe770: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe774:
    // 0x1fe774: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x1fe774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_1fe778:
    // 0x1fe778: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1fe778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1fe77c:
    // 0x1fe77c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe780:
    // 0x1fe780: 0x2442e8d0  addiu       $v0, $v0, -0x1730
    ctx->pc = 0x1fe780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961360));
label_1fe784:
    // 0x1fe784: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1fe784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1fe788:
    // 0x1fe788: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe78c:
    // 0x1fe78c: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x1fe78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
label_1fe790:
    // 0x1fe790: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1fe790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1fe794:
    // 0x1fe794: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe798:
    // 0x1fe798: 0x2442e940  addiu       $v0, $v0, -0x16C0
    ctx->pc = 0x1fe798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
label_1fe79c:
    // 0x1fe79c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1fe79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1fe7a0:
    // 0x1fe7a0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fe7a4:
    // 0x1fe7a4: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x1fe7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
label_1fe7a8:
    // 0x1fe7a8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1fe7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1fe7ac:
    // 0x1fe7ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe7b0:
    // 0x1fe7b0: 0xc07ffd4  jal         func_1FFF50
label_1fe7b4:
    if (ctx->pc == 0x1FE7B4u) {
        ctx->pc = 0x1FE7B4u;
            // 0x1fe7b4: 0xa3a2003c  sb          $v0, 0x3C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FE7B8u;
        goto label_1fe7b8;
    }
    ctx->pc = 0x1FE7B0u;
    SET_GPR_U32(ctx, 31, 0x1FE7B8u);
    ctx->pc = 0x1FE7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7B0u;
            // 0x1fe7b4: 0xa3a2003c  sb          $v0, 0x3C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7B8u; }
        if (ctx->pc != 0x1FE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7B8u; }
        if (ctx->pc != 0x1FE7B8u) { return; }
    }
    ctx->pc = 0x1FE7B8u;
label_1fe7b8:
    // 0x1fe7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe7bc:
    // 0x1fe7bc: 0x3e00008  jr          $ra
label_1fe7c0:
    if (ctx->pc == 0x1FE7C0u) {
        ctx->pc = 0x1FE7C0u;
            // 0x1fe7c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FE7C4u;
        goto label_1fe7c4;
    }
    ctx->pc = 0x1FE7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7BCu;
            // 0x1fe7c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE7C4u;
label_1fe7c4:
    // 0x1fe7c4: 0x0  nop
    ctx->pc = 0x1fe7c4u;
    // NOP
label_1fe7c8:
    // 0x1fe7c8: 0x0  nop
    ctx->pc = 0x1fe7c8u;
    // NOP
label_1fe7cc:
    // 0x1fe7cc: 0x0  nop
    ctx->pc = 0x1fe7ccu;
    // NOP
label_1fe7d0:
    // 0x1fe7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fe7d4:
    // 0x1fe7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fe7d8:
    // 0x1fe7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fe7dc:
    // 0x1fe7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fe7e0:
    // 0x1fe7e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7e4:
    // 0x1fe7e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fe7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7e8:
    // 0x1fe7e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1fe7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe7ec:
    // 0x1fe7ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1fe7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe7f0:
    // 0x1fe7f0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fe7f4:
    // 0x1fe7f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fe7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fe7f8:
    // 0x1fe7f8: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1fe7fc:
    // 0x1fe7fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fe7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe800:
    // 0x1fe800: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fe804:
    // 0x1fe804: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fe804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fe808:
    // 0x1fe808: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1fe808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe80c:
    // 0x1fe80c: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1fe80cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1fe810:
    // 0x1fe810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fe814:
    if (ctx->pc == 0x1FE814u) {
        ctx->pc = 0x1FE814u;
            // 0x1fe814: 0x8cca0000  lw          $t2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x1FE818u;
        goto label_1fe818;
    }
    ctx->pc = 0x1FE810u;
    {
        const bool branch_taken_0x1fe810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE810u;
            // 0x1fe814: 0x8cca0000  lw          $t2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe810) {
            ctx->pc = 0x1FE820u;
            goto label_1fe820;
        }
    }
    ctx->pc = 0x1FE818u;
label_1fe818:
    // 0x1fe818: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe81c:
    if (ctx->pc == 0x1FE81Cu) {
        ctx->pc = 0x1FE81Cu;
            // 0x1fe81c: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->pc = 0x1FE820u;
        goto label_1fe820;
    }
    ctx->pc = 0x1FE818u;
    {
        const bool branch_taken_0x1fe818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE818u;
            // 0x1fe81c: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe818) {
            ctx->pc = 0x1FE824u;
            goto label_1fe824;
        }
    }
    ctx->pc = 0x1FE820u;
label_1fe820:
    // 0x1fe820: 0x254301a0  addiu       $v1, $t2, 0x1A0
    ctx->pc = 0x1fe820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 416));
label_1fe824:
    // 0x1fe824: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1fe824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1fe828:
    // 0x1fe828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fe82c:
    // 0x1fe82c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fe830:
    // 0x1fe830: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fe830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe834:
    // 0x1fe834: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fe834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe838:
    // 0x1fe838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe83c:
    // 0x1fe83c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fe840:
    // 0x1fe840: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1fe844:
    // 0x1fe844: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1fe844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1fe848:
    // 0x1fe848: 0x40f809  jalr        $v0
label_1fe84c:
    if (ctx->pc == 0x1FE84Cu) {
        ctx->pc = 0x1FE850u;
        goto label_1fe850;
    }
    ctx->pc = 0x1FE848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE850u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE850u; }
            if (ctx->pc != 0x1FE850u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE850u;
label_1fe850:
    // 0x1fe850: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fe850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fe854:
    // 0x1fe854: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fe854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fe858:
    // 0x1fe858: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fe858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fe85c:
    // 0x1fe85c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1fe85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1fe860:
    // 0x1fe860: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1fe860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_1fe864:
    // 0x1fe864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe868:
    // 0x1fe868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe86c:
    // 0x1fe86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe870:
    // 0x1fe870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe874:
    // 0x1fe874: 0x3e00008  jr          $ra
label_1fe878:
    if (ctx->pc == 0x1FE878u) {
        ctx->pc = 0x1FE878u;
            // 0x1fe878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FE87Cu;
        goto label_1fe87c;
    }
    ctx->pc = 0x1FE874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE874u;
            // 0x1fe878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE87Cu;
label_1fe87c:
    // 0x1fe87c: 0x0  nop
    ctx->pc = 0x1fe87cu;
    // NOP
label_1fe880:
    // 0x1fe880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fe884:
    // 0x1fe884: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe888:
    // 0x1fe888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fe88c:
    // 0x1fe88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fe890:
    // 0x1fe890: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fe894:
    // 0x1fe894: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fe894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe898:
    // 0x1fe898: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fe89c:
    // 0x1fe89c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe8a0:
    // 0x1fe8a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fe8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe8a4:
    // 0x1fe8a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1fe8a8:
    // 0x1fe8a8: 0x320f809  jalr        $t9
label_1fe8ac:
    if (ctx->pc == 0x1FE8ACu) {
        ctx->pc = 0x1FE8ACu;
            // 0x1fe8ac: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1FE8B0u;
        goto label_1fe8b0;
    }
    ctx->pc = 0x1FE8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE8B0u);
        ctx->pc = 0x1FE8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8A8u;
            // 0x1fe8ac: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8B0u; }
            if (ctx->pc != 0x1FE8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE8B0u;
label_1fe8b0:
    // 0x1fe8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8b4:
    // 0x1fe8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe8b8:
    // 0x1fe8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe8bc:
    // 0x1fe8bc: 0x3e00008  jr          $ra
label_1fe8c0:
    if (ctx->pc == 0x1FE8C0u) {
        ctx->pc = 0x1FE8C0u;
            // 0x1fe8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FE8C4u;
        goto label_1fe8c4;
    }
    ctx->pc = 0x1FE8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8BCu;
            // 0x1fe8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE8C4u;
label_1fe8c4:
    // 0x1fe8c4: 0x0  nop
    ctx->pc = 0x1fe8c4u;
    // NOP
label_1fe8c8:
    // 0x1fe8c8: 0x0  nop
    ctx->pc = 0x1fe8c8u;
    // NOP
label_1fe8cc:
    // 0x1fe8cc: 0x0  nop
    ctx->pc = 0x1fe8ccu;
    // NOP
label_1fe8d0:
    // 0x1fe8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe8d4:
    // 0x1fe8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe8d8:
    // 0x1fe8d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe8dc:
    // 0x1fe8dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe8e0:
    // 0x1fe8e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1fe8e4:
    // 0x1fe8e4: 0x320f809  jalr        $t9
label_1fe8e8:
    if (ctx->pc == 0x1FE8E8u) {
        ctx->pc = 0x1FE8E8u;
            // 0x1fe8e8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8ECu;
        goto label_1fe8ec;
    }
    ctx->pc = 0x1FE8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE8ECu);
        ctx->pc = 0x1FE8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8E4u;
            // 0x1fe8e8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8ECu; }
            if (ctx->pc != 0x1FE8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE8ECu;
label_1fe8ec:
    // 0x1fe8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe8f0:
    // 0x1fe8f0: 0x3e00008  jr          $ra
label_1fe8f4:
    if (ctx->pc == 0x1FE8F4u) {
        ctx->pc = 0x1FE8F4u;
            // 0x1fe8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE8F8u;
        goto label_1fe8f8;
    }
    ctx->pc = 0x1FE8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8F0u;
            // 0x1fe8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE8F8u;
label_1fe8f8:
    // 0x1fe8f8: 0x0  nop
    ctx->pc = 0x1fe8f8u;
    // NOP
label_1fe8fc:
    // 0x1fe8fc: 0x0  nop
    ctx->pc = 0x1fe8fcu;
    // NOP
label_1fe900:
    // 0x1fe900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe904:
    // 0x1fe904: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fe904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe908:
    // 0x1fe908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe90c:
    // 0x1fe90c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1fe90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fe910:
    // 0x1fe910: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe914:
    // 0x1fe914: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1fe914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fe918:
    // 0x1fe918: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe91c:
    // 0x1fe91c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1fe91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1fe920:
    // 0x1fe920: 0x320f809  jalr        $t9
label_1fe924:
    if (ctx->pc == 0x1FE924u) {
        ctx->pc = 0x1FE924u;
            // 0x1fe924: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE928u;
        goto label_1fe928;
    }
    ctx->pc = 0x1FE920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE928u);
        ctx->pc = 0x1FE924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE920u;
            // 0x1fe924: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE928u; }
            if (ctx->pc != 0x1FE928u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE928u;
label_1fe928:
    // 0x1fe928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe92c:
    // 0x1fe92c: 0x3e00008  jr          $ra
label_1fe930:
    if (ctx->pc == 0x1FE930u) {
        ctx->pc = 0x1FE930u;
            // 0x1fe930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE934u;
        goto label_1fe934;
    }
    ctx->pc = 0x1FE92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE92Cu;
            // 0x1fe930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE934u;
label_1fe934:
    // 0x1fe934: 0x0  nop
    ctx->pc = 0x1fe934u;
    // NOP
label_1fe938:
    // 0x1fe938: 0x0  nop
    ctx->pc = 0x1fe938u;
    // NOP
label_1fe93c:
    // 0x1fe93c: 0x0  nop
    ctx->pc = 0x1fe93cu;
    // NOP
label_1fe940:
    // 0x1fe940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe944:
    // 0x1fe944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe948:
    // 0x1fe948: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe94c:
    // 0x1fe94c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe950:
    // 0x1fe950: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1fe950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1fe954:
    // 0x1fe954: 0x320f809  jalr        $t9
label_1fe958:
    if (ctx->pc == 0x1FE958u) {
        ctx->pc = 0x1FE958u;
            // 0x1fe958: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE95Cu;
        goto label_1fe95c;
    }
    ctx->pc = 0x1FE954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE95Cu);
        ctx->pc = 0x1FE958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE954u;
            // 0x1fe958: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE95Cu; }
            if (ctx->pc != 0x1FE95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE95Cu;
label_1fe95c:
    // 0x1fe95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe960:
    // 0x1fe960: 0x3e00008  jr          $ra
label_1fe964:
    if (ctx->pc == 0x1FE964u) {
        ctx->pc = 0x1FE964u;
            // 0x1fe964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE968u;
        goto label_1fe968;
    }
    ctx->pc = 0x1FE960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE960u;
            // 0x1fe964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE968u;
label_1fe968:
    // 0x1fe968: 0x0  nop
    ctx->pc = 0x1fe968u;
    // NOP
label_1fe96c:
    // 0x1fe96c: 0x0  nop
    ctx->pc = 0x1fe96cu;
    // NOP
label_1fe970:
    // 0x1fe970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe974:
    // 0x1fe974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe978:
    // 0x1fe978: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe97c:
    // 0x1fe97c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe980:
    // 0x1fe980: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1fe984:
    // 0x1fe984: 0x320f809  jalr        $t9
label_1fe988:
    if (ctx->pc == 0x1FE988u) {
        ctx->pc = 0x1FE988u;
            // 0x1fe988: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE98Cu;
        goto label_1fe98c;
    }
    ctx->pc = 0x1FE984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE98Cu);
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE984u;
            // 0x1fe988: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE98Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE98Cu; }
            if (ctx->pc != 0x1FE98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE98Cu;
label_1fe98c:
    // 0x1fe98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe990:
    // 0x1fe990: 0x3e00008  jr          $ra
label_1fe994:
    if (ctx->pc == 0x1FE994u) {
        ctx->pc = 0x1FE994u;
            // 0x1fe994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE998u;
        goto label_1fe998;
    }
    ctx->pc = 0x1FE990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE990u;
            // 0x1fe994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE998u;
label_1fe998:
    // 0x1fe998: 0x0  nop
    ctx->pc = 0x1fe998u;
    // NOP
label_1fe99c:
    // 0x1fe99c: 0x0  nop
    ctx->pc = 0x1fe99cu;
    // NOP
label_1fe9a0:
    // 0x1fe9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe9a4:
    // 0x1fe9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe9a8:
    // 0x1fe9a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe9ac:
    // 0x1fe9ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe9b0:
    // 0x1fe9b0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1fe9b4:
    // 0x1fe9b4: 0x320f809  jalr        $t9
label_1fe9b8:
    if (ctx->pc == 0x1FE9B8u) {
        ctx->pc = 0x1FE9B8u;
            // 0x1fe9b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9BCu;
        goto label_1fe9bc;
    }
    ctx->pc = 0x1FE9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE9BCu);
        ctx->pc = 0x1FE9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9B4u;
            // 0x1fe9b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9BCu; }
            if (ctx->pc != 0x1FE9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE9BCu;
label_1fe9bc:
    // 0x1fe9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe9c0:
    // 0x1fe9c0: 0x3e00008  jr          $ra
label_1fe9c4:
    if (ctx->pc == 0x1FE9C4u) {
        ctx->pc = 0x1FE9C4u;
            // 0x1fe9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE9C8u;
        goto label_1fe9c8;
    }
    ctx->pc = 0x1FE9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9C0u;
            // 0x1fe9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9C8u;
label_1fe9c8:
    // 0x1fe9c8: 0x0  nop
    ctx->pc = 0x1fe9c8u;
    // NOP
label_1fe9cc:
    // 0x1fe9cc: 0x0  nop
    ctx->pc = 0x1fe9ccu;
    // NOP
label_1fe9d0:
    // 0x1fe9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe9d4:
    // 0x1fe9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe9d8:
    // 0x1fe9d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fe9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe9dc:
    // 0x1fe9dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe9e0:
    // 0x1fe9e0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1fe9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1fe9e4:
    // 0x1fe9e4: 0x320f809  jalr        $t9
label_1fe9e8:
    if (ctx->pc == 0x1FE9E8u) {
        ctx->pc = 0x1FE9E8u;
            // 0x1fe9e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9ECu;
        goto label_1fe9ec;
    }
    ctx->pc = 0x1FE9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FE9ECu);
        ctx->pc = 0x1FE9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9E4u;
            // 0x1fe9e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9ECu; }
            if (ctx->pc != 0x1FE9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE9ECu;
label_1fe9ec:
    // 0x1fe9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe9f0:
    // 0x1fe9f0: 0x3e00008  jr          $ra
label_1fe9f4:
    if (ctx->pc == 0x1FE9F4u) {
        ctx->pc = 0x1FE9F4u;
            // 0x1fe9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FE9F8u;
        goto label_1fe9f8;
    }
    ctx->pc = 0x1FE9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9F0u;
            // 0x1fe9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9F8u;
label_1fe9f8:
    // 0x1fe9f8: 0x0  nop
    ctx->pc = 0x1fe9f8u;
    // NOP
label_1fe9fc:
    // 0x1fe9fc: 0x0  nop
    ctx->pc = 0x1fe9fcu;
    // NOP
label_1fea00:
    // 0x1fea00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fea04:
    // 0x1fea04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fea08:
    // 0x1fea08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fea0c:
    // 0x1fea0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fea10:
    // 0x1fea10: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1fea10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1fea14:
    // 0x1fea14: 0x320f809  jalr        $t9
label_1fea18:
    if (ctx->pc == 0x1FEA18u) {
        ctx->pc = 0x1FEA18u;
            // 0x1fea18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA1Cu;
        goto label_1fea1c;
    }
    ctx->pc = 0x1FEA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FEA1Cu);
        ctx->pc = 0x1FEA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA14u;
            // 0x1fea18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FEA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA1Cu; }
            if (ctx->pc != 0x1FEA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FEA1Cu;
label_1fea1c:
    // 0x1fea1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fea20:
    // 0x1fea20: 0x3e00008  jr          $ra
label_1fea24:
    if (ctx->pc == 0x1FEA24u) {
        ctx->pc = 0x1FEA24u;
            // 0x1fea24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FEA28u;
        goto label_1fea28;
    }
    ctx->pc = 0x1FEA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA20u;
            // 0x1fea24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA28u;
label_1fea28:
    // 0x1fea28: 0x0  nop
    ctx->pc = 0x1fea28u;
    // NOP
label_1fea2c:
    // 0x1fea2c: 0x0  nop
    ctx->pc = 0x1fea2cu;
    // NOP
label_1fea30:
    // 0x1fea30: 0x3e00008  jr          $ra
label_1fea34:
    if (ctx->pc == 0x1FEA34u) {
        ctx->pc = 0x1FEA38u;
        goto label_1fea38;
    }
    ctx->pc = 0x1FEA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA38u;
label_1fea38:
    // 0x1fea38: 0x0  nop
    ctx->pc = 0x1fea38u;
    // NOP
label_1fea3c:
    // 0x1fea3c: 0x0  nop
    ctx->pc = 0x1fea3cu;
    // NOP
label_1fea40:
    // 0x1fea40: 0x3e00008  jr          $ra
label_1fea44:
    if (ctx->pc == 0x1FEA44u) {
        ctx->pc = 0x1FEA48u;
        goto label_1fea48;
    }
    ctx->pc = 0x1FEA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA48u;
label_1fea48:
    // 0x1fea48: 0x0  nop
    ctx->pc = 0x1fea48u;
    // NOP
label_1fea4c:
    // 0x1fea4c: 0x0  nop
    ctx->pc = 0x1fea4cu;
    // NOP
label_1fea50:
    // 0x1fea50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fea54:
    // 0x1fea54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fea58:
    // 0x1fea58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fea5c:
    // 0x1fea5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fea5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fea60:
    // 0x1fea60: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1fea64:
    if (ctx->pc == 0x1FEA64u) {
        ctx->pc = 0x1FEA64u;
            // 0x1fea64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1FEA68u;
        goto label_1fea68;
    }
    ctx->pc = 0x1FEA60u;
    {
        const bool branch_taken_0x1fea60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA60u;
            // 0x1fea64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea60) {
            ctx->pc = 0x1FEAD8u;
            goto label_1fead8;
        }
    }
    ctx->pc = 0x1FEA68u;
label_1fea68:
    // 0x1fea68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fea6c:
    // 0x1fea6c: 0x2442dff0  addiu       $v0, $v0, -0x2010
    ctx->pc = 0x1fea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_1fea70:
    // 0x1fea70: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1fea74:
    if (ctx->pc == 0x1FEA74u) {
        ctx->pc = 0x1FEA74u;
            // 0x1fea74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FEA78u;
        goto label_1fea78;
    }
    ctx->pc = 0x1FEA70u;
    {
        const bool branch_taken_0x1fea70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA70u;
            // 0x1fea74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea70) {
            ctx->pc = 0x1FEA84u;
            goto label_1fea84;
        }
    }
    ctx->pc = 0x1FEA78u;
label_1fea78:
    // 0x1fea78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fea7c:
    // 0x1fea7c: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x1fea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_1fea80:
    // 0x1fea80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fea84:
    // 0x1fea84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fea88:
    // 0x1fea88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fea88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fea8c:
    // 0x1fea8c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1fea90:
    if (ctx->pc == 0x1FEA90u) {
        ctx->pc = 0x1FEA90u;
            // 0x1fea90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA94u;
        goto label_1fea94;
    }
    ctx->pc = 0x1FEA8Cu;
    {
        const bool branch_taken_0x1fea8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fea8c) {
            ctx->pc = 0x1FEA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA8Cu;
            // 0x1fea90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEADCu;
            goto label_1feadc;
        }
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fea98:
    // 0x1fea98: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fea98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fea9c:
    // 0x1fea9c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1fea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1feaa0:
    // 0x1feaa0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1feaa4:
    // 0x1feaa4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1feaa8:
    // 0x1feaa8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1feaac:
    if (ctx->pc == 0x1FEAACu) {
        ctx->pc = 0x1FEAACu;
            // 0x1feaac: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1FEAB0u;
        goto label_1feab0;
    }
    ctx->pc = 0x1FEAA8u;
    {
        const bool branch_taken_0x1feaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feaa8) {
            ctx->pc = 0x1FEAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAA8u;
            // 0x1feaac: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEAC4u;
            goto label_1feac4;
        }
    }
    ctx->pc = 0x1FEAB0u;
label_1feab0:
    // 0x1feab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1feab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1feab4:
    // 0x1feab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1feab8:
    // 0x1feab8: 0xc0a79ec  jal         func_29E7B0
label_1feabc:
    if (ctx->pc == 0x1FEABCu) {
        ctx->pc = 0x1FEABCu;
            // 0x1feabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAC0u;
        goto label_1feac0;
    }
    ctx->pc = 0x1FEAB8u;
    SET_GPR_U32(ctx, 31, 0x1FEAC0u);
    ctx->pc = 0x1FEABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAB8u;
            // 0x1feabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAC0u; }
        if (ctx->pc != 0x1FEAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAC0u; }
        if (ctx->pc != 0x1FEAC0u) { return; }
    }
    ctx->pc = 0x1FEAC0u;
label_1feac0:
    // 0x1feac0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1feac4:
    // 0x1feac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1feac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1feac8:
    // 0x1feac8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1feac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1feacc:
    // 0x1feacc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1feaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1fead0:
    // 0x1fead0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fead0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fead4:
    // 0x1fead4: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1fead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_1fead8:
    // 0x1fead8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fead8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1feadc:
    // 0x1feadc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1feadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1feae0:
    // 0x1feae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1feae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1feae4:
    // 0x1feae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1feae8:
    // 0x1feae8: 0x3e00008  jr          $ra
label_1feaec:
    if (ctx->pc == 0x1FEAECu) {
        ctx->pc = 0x1FEAECu;
            // 0x1feaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FEAF0u;
        goto label_1feaf0;
    }
    ctx->pc = 0x1FEAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAE8u;
            // 0x1feaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAF0u;
label_1feaf0:
    // 0x1feaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1feaf4:
    // 0x1feaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1feaf8:
    // 0x1feaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1feafc:
    // 0x1feafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1feafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1feb00:
    // 0x1feb00: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1feb04:
    if (ctx->pc == 0x1FEB04u) {
        ctx->pc = 0x1FEB04u;
            // 0x1feb04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB08u;
        goto label_1feb08;
    }
    ctx->pc = 0x1FEB00u;
    {
        const bool branch_taken_0x1feb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb00) {
            ctx->pc = 0x1FEB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB00u;
            // 0x1feb04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB2Cu;
            goto label_1feb2c;
        }
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1feb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1feb0c:
    // 0x1feb0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1feb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1feb10:
    // 0x1feb10: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x1feb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
label_1feb14:
    // 0x1feb14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1feb14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1feb18:
    // 0x1feb18: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1feb1c:
    if (ctx->pc == 0x1FEB1Cu) {
        ctx->pc = 0x1FEB1Cu;
            // 0x1feb1c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1FEB20u;
        goto label_1feb20;
    }
    ctx->pc = 0x1FEB18u;
    {
        const bool branch_taken_0x1feb18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FEB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB18u;
            // 0x1feb1c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb18) {
            ctx->pc = 0x1FEB28u;
            goto label_1feb28;
        }
    }
    ctx->pc = 0x1FEB20u;
label_1feb20:
    // 0x1feb20: 0xc0400a8  jal         func_1002A0
label_1feb24:
    if (ctx->pc == 0x1FEB24u) {
        ctx->pc = 0x1FEB28u;
        goto label_1feb28;
    }
    ctx->pc = 0x1FEB20u;
    SET_GPR_U32(ctx, 31, 0x1FEB28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB28u; }
        if (ctx->pc != 0x1FEB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB28u; }
        if (ctx->pc != 0x1FEB28u) { return; }
    }
    ctx->pc = 0x1FEB28u;
label_1feb28:
    // 0x1feb28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1feb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1feb2c:
    // 0x1feb2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1feb30:
    // 0x1feb30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1feb34:
    // 0x1feb34: 0x3e00008  jr          $ra
label_1feb38:
    if (ctx->pc == 0x1FEB38u) {
        ctx->pc = 0x1FEB38u;
            // 0x1feb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FEB3Cu;
        goto label_1feb3c;
    }
    ctx->pc = 0x1FEB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB34u;
            // 0x1feb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEB3Cu;
label_1feb3c:
    // 0x1feb3c: 0x0  nop
    ctx->pc = 0x1feb3cu;
    // NOP
}
