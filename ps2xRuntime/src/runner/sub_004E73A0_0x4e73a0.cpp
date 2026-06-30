#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E73A0
// Address: 0x4e73a0 - 0x4e78a0
void sub_004E73A0_0x4e73a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E73A0_0x4e73a0");
#endif

    switch (ctx->pc) {
        case 0x4e73a0u: goto label_4e73a0;
        case 0x4e73a4u: goto label_4e73a4;
        case 0x4e73a8u: goto label_4e73a8;
        case 0x4e73acu: goto label_4e73ac;
        case 0x4e73b0u: goto label_4e73b0;
        case 0x4e73b4u: goto label_4e73b4;
        case 0x4e73b8u: goto label_4e73b8;
        case 0x4e73bcu: goto label_4e73bc;
        case 0x4e73c0u: goto label_4e73c0;
        case 0x4e73c4u: goto label_4e73c4;
        case 0x4e73c8u: goto label_4e73c8;
        case 0x4e73ccu: goto label_4e73cc;
        case 0x4e73d0u: goto label_4e73d0;
        case 0x4e73d4u: goto label_4e73d4;
        case 0x4e73d8u: goto label_4e73d8;
        case 0x4e73dcu: goto label_4e73dc;
        case 0x4e73e0u: goto label_4e73e0;
        case 0x4e73e4u: goto label_4e73e4;
        case 0x4e73e8u: goto label_4e73e8;
        case 0x4e73ecu: goto label_4e73ec;
        case 0x4e73f0u: goto label_4e73f0;
        case 0x4e73f4u: goto label_4e73f4;
        case 0x4e73f8u: goto label_4e73f8;
        case 0x4e73fcu: goto label_4e73fc;
        case 0x4e7400u: goto label_4e7400;
        case 0x4e7404u: goto label_4e7404;
        case 0x4e7408u: goto label_4e7408;
        case 0x4e740cu: goto label_4e740c;
        case 0x4e7410u: goto label_4e7410;
        case 0x4e7414u: goto label_4e7414;
        case 0x4e7418u: goto label_4e7418;
        case 0x4e741cu: goto label_4e741c;
        case 0x4e7420u: goto label_4e7420;
        case 0x4e7424u: goto label_4e7424;
        case 0x4e7428u: goto label_4e7428;
        case 0x4e742cu: goto label_4e742c;
        case 0x4e7430u: goto label_4e7430;
        case 0x4e7434u: goto label_4e7434;
        case 0x4e7438u: goto label_4e7438;
        case 0x4e743cu: goto label_4e743c;
        case 0x4e7440u: goto label_4e7440;
        case 0x4e7444u: goto label_4e7444;
        case 0x4e7448u: goto label_4e7448;
        case 0x4e744cu: goto label_4e744c;
        case 0x4e7450u: goto label_4e7450;
        case 0x4e7454u: goto label_4e7454;
        case 0x4e7458u: goto label_4e7458;
        case 0x4e745cu: goto label_4e745c;
        case 0x4e7460u: goto label_4e7460;
        case 0x4e7464u: goto label_4e7464;
        case 0x4e7468u: goto label_4e7468;
        case 0x4e746cu: goto label_4e746c;
        case 0x4e7470u: goto label_4e7470;
        case 0x4e7474u: goto label_4e7474;
        case 0x4e7478u: goto label_4e7478;
        case 0x4e747cu: goto label_4e747c;
        case 0x4e7480u: goto label_4e7480;
        case 0x4e7484u: goto label_4e7484;
        case 0x4e7488u: goto label_4e7488;
        case 0x4e748cu: goto label_4e748c;
        case 0x4e7490u: goto label_4e7490;
        case 0x4e7494u: goto label_4e7494;
        case 0x4e7498u: goto label_4e7498;
        case 0x4e749cu: goto label_4e749c;
        case 0x4e74a0u: goto label_4e74a0;
        case 0x4e74a4u: goto label_4e74a4;
        case 0x4e74a8u: goto label_4e74a8;
        case 0x4e74acu: goto label_4e74ac;
        case 0x4e74b0u: goto label_4e74b0;
        case 0x4e74b4u: goto label_4e74b4;
        case 0x4e74b8u: goto label_4e74b8;
        case 0x4e74bcu: goto label_4e74bc;
        case 0x4e74c0u: goto label_4e74c0;
        case 0x4e74c4u: goto label_4e74c4;
        case 0x4e74c8u: goto label_4e74c8;
        case 0x4e74ccu: goto label_4e74cc;
        case 0x4e74d0u: goto label_4e74d0;
        case 0x4e74d4u: goto label_4e74d4;
        case 0x4e74d8u: goto label_4e74d8;
        case 0x4e74dcu: goto label_4e74dc;
        case 0x4e74e0u: goto label_4e74e0;
        case 0x4e74e4u: goto label_4e74e4;
        case 0x4e74e8u: goto label_4e74e8;
        case 0x4e74ecu: goto label_4e74ec;
        case 0x4e74f0u: goto label_4e74f0;
        case 0x4e74f4u: goto label_4e74f4;
        case 0x4e74f8u: goto label_4e74f8;
        case 0x4e74fcu: goto label_4e74fc;
        case 0x4e7500u: goto label_4e7500;
        case 0x4e7504u: goto label_4e7504;
        case 0x4e7508u: goto label_4e7508;
        case 0x4e750cu: goto label_4e750c;
        case 0x4e7510u: goto label_4e7510;
        case 0x4e7514u: goto label_4e7514;
        case 0x4e7518u: goto label_4e7518;
        case 0x4e751cu: goto label_4e751c;
        case 0x4e7520u: goto label_4e7520;
        case 0x4e7524u: goto label_4e7524;
        case 0x4e7528u: goto label_4e7528;
        case 0x4e752cu: goto label_4e752c;
        case 0x4e7530u: goto label_4e7530;
        case 0x4e7534u: goto label_4e7534;
        case 0x4e7538u: goto label_4e7538;
        case 0x4e753cu: goto label_4e753c;
        case 0x4e7540u: goto label_4e7540;
        case 0x4e7544u: goto label_4e7544;
        case 0x4e7548u: goto label_4e7548;
        case 0x4e754cu: goto label_4e754c;
        case 0x4e7550u: goto label_4e7550;
        case 0x4e7554u: goto label_4e7554;
        case 0x4e7558u: goto label_4e7558;
        case 0x4e755cu: goto label_4e755c;
        case 0x4e7560u: goto label_4e7560;
        case 0x4e7564u: goto label_4e7564;
        case 0x4e7568u: goto label_4e7568;
        case 0x4e756cu: goto label_4e756c;
        case 0x4e7570u: goto label_4e7570;
        case 0x4e7574u: goto label_4e7574;
        case 0x4e7578u: goto label_4e7578;
        case 0x4e757cu: goto label_4e757c;
        case 0x4e7580u: goto label_4e7580;
        case 0x4e7584u: goto label_4e7584;
        case 0x4e7588u: goto label_4e7588;
        case 0x4e758cu: goto label_4e758c;
        case 0x4e7590u: goto label_4e7590;
        case 0x4e7594u: goto label_4e7594;
        case 0x4e7598u: goto label_4e7598;
        case 0x4e759cu: goto label_4e759c;
        case 0x4e75a0u: goto label_4e75a0;
        case 0x4e75a4u: goto label_4e75a4;
        case 0x4e75a8u: goto label_4e75a8;
        case 0x4e75acu: goto label_4e75ac;
        case 0x4e75b0u: goto label_4e75b0;
        case 0x4e75b4u: goto label_4e75b4;
        case 0x4e75b8u: goto label_4e75b8;
        case 0x4e75bcu: goto label_4e75bc;
        case 0x4e75c0u: goto label_4e75c0;
        case 0x4e75c4u: goto label_4e75c4;
        case 0x4e75c8u: goto label_4e75c8;
        case 0x4e75ccu: goto label_4e75cc;
        case 0x4e75d0u: goto label_4e75d0;
        case 0x4e75d4u: goto label_4e75d4;
        case 0x4e75d8u: goto label_4e75d8;
        case 0x4e75dcu: goto label_4e75dc;
        case 0x4e75e0u: goto label_4e75e0;
        case 0x4e75e4u: goto label_4e75e4;
        case 0x4e75e8u: goto label_4e75e8;
        case 0x4e75ecu: goto label_4e75ec;
        case 0x4e75f0u: goto label_4e75f0;
        case 0x4e75f4u: goto label_4e75f4;
        case 0x4e75f8u: goto label_4e75f8;
        case 0x4e75fcu: goto label_4e75fc;
        case 0x4e7600u: goto label_4e7600;
        case 0x4e7604u: goto label_4e7604;
        case 0x4e7608u: goto label_4e7608;
        case 0x4e760cu: goto label_4e760c;
        case 0x4e7610u: goto label_4e7610;
        case 0x4e7614u: goto label_4e7614;
        case 0x4e7618u: goto label_4e7618;
        case 0x4e761cu: goto label_4e761c;
        case 0x4e7620u: goto label_4e7620;
        case 0x4e7624u: goto label_4e7624;
        case 0x4e7628u: goto label_4e7628;
        case 0x4e762cu: goto label_4e762c;
        case 0x4e7630u: goto label_4e7630;
        case 0x4e7634u: goto label_4e7634;
        case 0x4e7638u: goto label_4e7638;
        case 0x4e763cu: goto label_4e763c;
        case 0x4e7640u: goto label_4e7640;
        case 0x4e7644u: goto label_4e7644;
        case 0x4e7648u: goto label_4e7648;
        case 0x4e764cu: goto label_4e764c;
        case 0x4e7650u: goto label_4e7650;
        case 0x4e7654u: goto label_4e7654;
        case 0x4e7658u: goto label_4e7658;
        case 0x4e765cu: goto label_4e765c;
        case 0x4e7660u: goto label_4e7660;
        case 0x4e7664u: goto label_4e7664;
        case 0x4e7668u: goto label_4e7668;
        case 0x4e766cu: goto label_4e766c;
        case 0x4e7670u: goto label_4e7670;
        case 0x4e7674u: goto label_4e7674;
        case 0x4e7678u: goto label_4e7678;
        case 0x4e767cu: goto label_4e767c;
        case 0x4e7680u: goto label_4e7680;
        case 0x4e7684u: goto label_4e7684;
        case 0x4e7688u: goto label_4e7688;
        case 0x4e768cu: goto label_4e768c;
        case 0x4e7690u: goto label_4e7690;
        case 0x4e7694u: goto label_4e7694;
        case 0x4e7698u: goto label_4e7698;
        case 0x4e769cu: goto label_4e769c;
        case 0x4e76a0u: goto label_4e76a0;
        case 0x4e76a4u: goto label_4e76a4;
        case 0x4e76a8u: goto label_4e76a8;
        case 0x4e76acu: goto label_4e76ac;
        case 0x4e76b0u: goto label_4e76b0;
        case 0x4e76b4u: goto label_4e76b4;
        case 0x4e76b8u: goto label_4e76b8;
        case 0x4e76bcu: goto label_4e76bc;
        case 0x4e76c0u: goto label_4e76c0;
        case 0x4e76c4u: goto label_4e76c4;
        case 0x4e76c8u: goto label_4e76c8;
        case 0x4e76ccu: goto label_4e76cc;
        case 0x4e76d0u: goto label_4e76d0;
        case 0x4e76d4u: goto label_4e76d4;
        case 0x4e76d8u: goto label_4e76d8;
        case 0x4e76dcu: goto label_4e76dc;
        case 0x4e76e0u: goto label_4e76e0;
        case 0x4e76e4u: goto label_4e76e4;
        case 0x4e76e8u: goto label_4e76e8;
        case 0x4e76ecu: goto label_4e76ec;
        case 0x4e76f0u: goto label_4e76f0;
        case 0x4e76f4u: goto label_4e76f4;
        case 0x4e76f8u: goto label_4e76f8;
        case 0x4e76fcu: goto label_4e76fc;
        case 0x4e7700u: goto label_4e7700;
        case 0x4e7704u: goto label_4e7704;
        case 0x4e7708u: goto label_4e7708;
        case 0x4e770cu: goto label_4e770c;
        case 0x4e7710u: goto label_4e7710;
        case 0x4e7714u: goto label_4e7714;
        case 0x4e7718u: goto label_4e7718;
        case 0x4e771cu: goto label_4e771c;
        case 0x4e7720u: goto label_4e7720;
        case 0x4e7724u: goto label_4e7724;
        case 0x4e7728u: goto label_4e7728;
        case 0x4e772cu: goto label_4e772c;
        case 0x4e7730u: goto label_4e7730;
        case 0x4e7734u: goto label_4e7734;
        case 0x4e7738u: goto label_4e7738;
        case 0x4e773cu: goto label_4e773c;
        case 0x4e7740u: goto label_4e7740;
        case 0x4e7744u: goto label_4e7744;
        case 0x4e7748u: goto label_4e7748;
        case 0x4e774cu: goto label_4e774c;
        case 0x4e7750u: goto label_4e7750;
        case 0x4e7754u: goto label_4e7754;
        case 0x4e7758u: goto label_4e7758;
        case 0x4e775cu: goto label_4e775c;
        case 0x4e7760u: goto label_4e7760;
        case 0x4e7764u: goto label_4e7764;
        case 0x4e7768u: goto label_4e7768;
        case 0x4e776cu: goto label_4e776c;
        case 0x4e7770u: goto label_4e7770;
        case 0x4e7774u: goto label_4e7774;
        case 0x4e7778u: goto label_4e7778;
        case 0x4e777cu: goto label_4e777c;
        case 0x4e7780u: goto label_4e7780;
        case 0x4e7784u: goto label_4e7784;
        case 0x4e7788u: goto label_4e7788;
        case 0x4e778cu: goto label_4e778c;
        case 0x4e7790u: goto label_4e7790;
        case 0x4e7794u: goto label_4e7794;
        case 0x4e7798u: goto label_4e7798;
        case 0x4e779cu: goto label_4e779c;
        case 0x4e77a0u: goto label_4e77a0;
        case 0x4e77a4u: goto label_4e77a4;
        case 0x4e77a8u: goto label_4e77a8;
        case 0x4e77acu: goto label_4e77ac;
        case 0x4e77b0u: goto label_4e77b0;
        case 0x4e77b4u: goto label_4e77b4;
        case 0x4e77b8u: goto label_4e77b8;
        case 0x4e77bcu: goto label_4e77bc;
        case 0x4e77c0u: goto label_4e77c0;
        case 0x4e77c4u: goto label_4e77c4;
        case 0x4e77c8u: goto label_4e77c8;
        case 0x4e77ccu: goto label_4e77cc;
        case 0x4e77d0u: goto label_4e77d0;
        case 0x4e77d4u: goto label_4e77d4;
        case 0x4e77d8u: goto label_4e77d8;
        case 0x4e77dcu: goto label_4e77dc;
        case 0x4e77e0u: goto label_4e77e0;
        case 0x4e77e4u: goto label_4e77e4;
        case 0x4e77e8u: goto label_4e77e8;
        case 0x4e77ecu: goto label_4e77ec;
        case 0x4e77f0u: goto label_4e77f0;
        case 0x4e77f4u: goto label_4e77f4;
        case 0x4e77f8u: goto label_4e77f8;
        case 0x4e77fcu: goto label_4e77fc;
        case 0x4e7800u: goto label_4e7800;
        case 0x4e7804u: goto label_4e7804;
        case 0x4e7808u: goto label_4e7808;
        case 0x4e780cu: goto label_4e780c;
        case 0x4e7810u: goto label_4e7810;
        case 0x4e7814u: goto label_4e7814;
        case 0x4e7818u: goto label_4e7818;
        case 0x4e781cu: goto label_4e781c;
        case 0x4e7820u: goto label_4e7820;
        case 0x4e7824u: goto label_4e7824;
        case 0x4e7828u: goto label_4e7828;
        case 0x4e782cu: goto label_4e782c;
        case 0x4e7830u: goto label_4e7830;
        case 0x4e7834u: goto label_4e7834;
        case 0x4e7838u: goto label_4e7838;
        case 0x4e783cu: goto label_4e783c;
        case 0x4e7840u: goto label_4e7840;
        case 0x4e7844u: goto label_4e7844;
        case 0x4e7848u: goto label_4e7848;
        case 0x4e784cu: goto label_4e784c;
        case 0x4e7850u: goto label_4e7850;
        case 0x4e7854u: goto label_4e7854;
        case 0x4e7858u: goto label_4e7858;
        case 0x4e785cu: goto label_4e785c;
        case 0x4e7860u: goto label_4e7860;
        case 0x4e7864u: goto label_4e7864;
        case 0x4e7868u: goto label_4e7868;
        case 0x4e786cu: goto label_4e786c;
        case 0x4e7870u: goto label_4e7870;
        case 0x4e7874u: goto label_4e7874;
        case 0x4e7878u: goto label_4e7878;
        case 0x4e787cu: goto label_4e787c;
        case 0x4e7880u: goto label_4e7880;
        case 0x4e7884u: goto label_4e7884;
        case 0x4e7888u: goto label_4e7888;
        case 0x4e788cu: goto label_4e788c;
        case 0x4e7890u: goto label_4e7890;
        case 0x4e7894u: goto label_4e7894;
        case 0x4e7898u: goto label_4e7898;
        case 0x4e789cu: goto label_4e789c;
        default: break;
    }

    ctx->pc = 0x4e73a0u;

label_4e73a0:
    // 0x4e73a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e73a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e73a4:
    // 0x4e73a4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_4e73a8:
    // 0x4e73a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e73a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e73ac:
    // 0x4e73ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e73acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e73b0:
    // 0x4e73b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e73b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e73b4:
    // 0x4e73b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e73b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e73b8:
    // 0x4e73b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e73bc:
    // 0x4e73bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e73bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e73c0:
    // 0x4e73c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e73c4:
    // 0x4e73c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4e73c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e73c8:
    // 0x4e73c8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e73c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e73cc:
    // 0x4e73cc: 0x34457a1a  ori         $a1, $v0, 0x7A1A
    ctx->pc = 0x4e73ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
label_4e73d0:
    // 0x4e73d0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4e73d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e73d4:
    // 0x4e73d4: 0xc10ca68  jal         func_4329A0
label_4e73d8:
    if (ctx->pc == 0x4E73D8u) {
        ctx->pc = 0x4E73D8u;
            // 0x4e73d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E73DCu;
        goto label_4e73dc;
    }
    ctx->pc = 0x4E73D4u;
    SET_GPR_U32(ctx, 31, 0x4E73DCu);
    ctx->pc = 0x4E73D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E73D4u;
            // 0x4e73d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E73DCu; }
        if (ctx->pc != 0x4E73DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E73DCu; }
        if (ctx->pc != 0x4E73DCu) { return; }
    }
    ctx->pc = 0x4E73DCu;
label_4e73dc:
    // 0x4e73dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e73e0:
    // 0x4e73e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e73e4:
    // 0x4e73e4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e73e8:
    // 0x4e73e8: 0x24423bb0  addiu       $v0, $v0, 0x3BB0
    ctx->pc = 0x4e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15280));
label_4e73ec:
    // 0x4e73ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e73ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e73f0:
    // 0x4e73f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4e73f4:
    // 0x4e73f4: 0x2663007b  addiu       $v1, $s3, 0x7B
    ctx->pc = 0x4e73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 123));
label_4e73f8:
    // 0x4e73f8: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x4e73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
label_4e73fc:
    // 0x4e73fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4e73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_4e7400:
    // 0x4e7400: 0xa6710064  sh          $s1, 0x64($s3)
    ctx->pc = 0x4e7400u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 17));
label_4e7404:
    // 0x4e7404: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4e7404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e7408:
    // 0x4e7408: 0xa6600066  sh          $zero, 0x66($s3)
    ctx->pc = 0x4e7408u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 0));
label_4e740c:
    // 0x4e740c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e740cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e7410:
    // 0x4e7410: 0xa2700068  sb          $s0, 0x68($s3)
    ctx->pc = 0x4e7410u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 16));
label_4e7414:
    // 0x4e7414: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x4e7414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
label_4e7418:
    // 0x4e7418: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x4e7418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_4e741c:
    // 0x4e741c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4e741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4e7420:
    // 0x4e7420: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4e7420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4e7424:
    // 0x4e7424: 0xae640058  sw          $a0, 0x58($s3)
    ctx->pc = 0x4e7424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 4));
label_4e7428:
    // 0x4e7428: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x4e7428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_4e742c:
    // 0x4e742c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e7430:
    // 0x4e7430: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4e7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4e7434:
    // 0x4e7434: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x4e7434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
label_4e7438:
    // 0x4e7438: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e743c:
    // 0x4e743c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e743cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7440:
    // 0x4e7440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e7440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7444:
    // 0x4e7444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e7444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7448:
    // 0x4e7448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e744c:
    // 0x4e744c: 0x3e00008  jr          $ra
label_4e7450:
    if (ctx->pc == 0x4E7450u) {
        ctx->pc = 0x4E7450u;
            // 0x4e7450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E7454u;
        goto label_4e7454;
    }
    ctx->pc = 0x4E744Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E744Cu;
            // 0x4e7450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7454u;
label_4e7454:
    // 0x4e7454: 0x0  nop
    ctx->pc = 0x4e7454u;
    // NOP
label_4e7458:
    // 0x4e7458: 0x0  nop
    ctx->pc = 0x4e7458u;
    // NOP
label_4e745c:
    // 0x4e745c: 0x0  nop
    ctx->pc = 0x4e745cu;
    // NOP
label_4e7460:
    // 0x4e7460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e7460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e7464:
    // 0x4e7464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e7464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7468:
    // 0x4e7468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e746c:
    // 0x4e746c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4e746cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4e7470:
    // 0x4e7470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e7474:
    // 0x4e7474: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4e7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e7478:
    // 0x4e7478: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e7478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e747c:
    // 0x4e747c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4e747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4e7480:
    // 0x4e7480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e7480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e7484:
    // 0x4e7484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e7488:
    // 0x4e7488: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4e7488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4e748c:
    // 0x4e748c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4e748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7490:
    // 0x4e7490: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4e7490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4e7494:
    // 0x4e7494: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4e7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7498:
    // 0x4e7498: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4e7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4e749c:
    // 0x4e749c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4e749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4e74a0:
    // 0x4e74a0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4e74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e74a4:
    // 0x4e74a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e74a8:
    // 0x4e74a8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4e74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4e74ac:
    // 0x4e74ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4e74acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e74b0:
    // 0x4e74b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4e74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4e74b4:
    // 0x4e74b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e74b8:
    // 0x4e74b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4e74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e74bc:
    // 0x4e74bc: 0xc0a997c  jal         func_2A65F0
label_4e74c0:
    if (ctx->pc == 0x4E74C0u) {
        ctx->pc = 0x4E74C0u;
            // 0x4e74c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4E74C4u;
        goto label_4e74c4;
    }
    ctx->pc = 0x4E74BCu;
    SET_GPR_U32(ctx, 31, 0x4E74C4u);
    ctx->pc = 0x4E74C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E74BCu;
            // 0x4e74c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E74C4u; }
        if (ctx->pc != 0x4E74C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E74C4u; }
        if (ctx->pc != 0x4E74C4u) { return; }
    }
    ctx->pc = 0x4E74C4u;
label_4e74c4:
    // 0x4e74c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4e74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4e74c8:
    // 0x4e74c8: 0xc0d879c  jal         func_361E70
label_4e74cc:
    if (ctx->pc == 0x4E74CCu) {
        ctx->pc = 0x4E74CCu;
            // 0x4e74cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E74D0u;
        goto label_4e74d0;
    }
    ctx->pc = 0x4E74C8u;
    SET_GPR_U32(ctx, 31, 0x4E74D0u);
    ctx->pc = 0x4E74CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E74C8u;
            // 0x4e74cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E74D0u; }
        if (ctx->pc != 0x4E74D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E74D0u; }
        if (ctx->pc != 0x4E74D0u) { return; }
    }
    ctx->pc = 0x4E74D0u;
label_4e74d0:
    // 0x4e74d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e74d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e74d4:
    // 0x4e74d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e74d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e74d8:
    // 0x4e74d8: 0x3e00008  jr          $ra
label_4e74dc:
    if (ctx->pc == 0x4E74DCu) {
        ctx->pc = 0x4E74DCu;
            // 0x4e74dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E74E0u;
        goto label_4e74e0;
    }
    ctx->pc = 0x4E74D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E74DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E74D8u;
            // 0x4e74dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E74E0u;
label_4e74e0:
    // 0x4e74e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e74e4:
    // 0x4e74e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e74e8:
    // 0x4e74e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e74ec:
    // 0x4e74ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4e74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4e74f0:
    // 0x4e74f0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4e74f4:
    if (ctx->pc == 0x4E74F4u) {
        ctx->pc = 0x4E74F4u;
            // 0x4e74f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E74F8u;
        goto label_4e74f8;
    }
    ctx->pc = 0x4E74F0u;
    {
        const bool branch_taken_0x4e74f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E74F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E74F0u;
            // 0x4e74f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e74f0) {
            ctx->pc = 0x4E7610u;
            goto label_4e7610;
        }
    }
    ctx->pc = 0x4E74F8u;
label_4e74f8:
    // 0x4e74f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e74fc:
    // 0x4e74fc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4e7500:
    // 0x4e7500: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e7500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e7504:
    // 0x4e7504: 0xc075128  jal         func_1D44A0
label_4e7508:
    if (ctx->pc == 0x4E7508u) {
        ctx->pc = 0x4E7508u;
            // 0x4e7508: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4E750Cu;
        goto label_4e750c;
    }
    ctx->pc = 0x4E7504u;
    SET_GPR_U32(ctx, 31, 0x4E750Cu);
    ctx->pc = 0x4E7508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7504u;
            // 0x4e7508: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E750Cu; }
        if (ctx->pc != 0x4E750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E750Cu; }
        if (ctx->pc != 0x4E750Cu) { return; }
    }
    ctx->pc = 0x4E750Cu;
label_4e750c:
    // 0x4e750c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4e750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e7510:
    // 0x4e7510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7514:
    // 0x4e7514: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4e7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4e7518:
    // 0x4e7518: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e751c:
    // 0x4e751c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e751cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e7520:
    // 0x4e7520: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e7524:
    if (ctx->pc == 0x4E7524u) {
        ctx->pc = 0x4E7524u;
            // 0x4e7524: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4E7528u;
        goto label_4e7528;
    }
    ctx->pc = 0x4E7520u;
    {
        const bool branch_taken_0x4e7520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7520u;
            // 0x4e7524: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7520) {
            ctx->pc = 0x4E7530u;
            goto label_4e7530;
        }
    }
    ctx->pc = 0x4E7528u;
label_4e7528:
    // 0x4e7528: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e752c:
    // 0x4e752c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4e752cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4e7530:
    // 0x4e7530: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e7530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e7534:
    // 0x4e7534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7538:
    // 0x4e7538: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4e7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4e753c:
    // 0x4e753c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e7540:
    // 0x4e7540: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e7540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e7544:
    // 0x4e7544: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e7548:
    if (ctx->pc == 0x4E7548u) {
        ctx->pc = 0x4E7548u;
            // 0x4e7548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E754Cu;
        goto label_4e754c;
    }
    ctx->pc = 0x4E7544u;
    {
        const bool branch_taken_0x4e7544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7544) {
            ctx->pc = 0x4E7548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7544u;
            // 0x4e7548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7558u;
            goto label_4e7558;
        }
    }
    ctx->pc = 0x4E754Cu;
label_4e754c:
    // 0x4e754c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7550:
    // 0x4e7550: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4e7550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4e7554:
    // 0x4e7554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e7554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e7558:
    // 0x4e7558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e755c:
    // 0x4e755c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4e755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4e7560:
    // 0x4e7560: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e7564:
    // 0x4e7564: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e7564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e7568:
    // 0x4e7568: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e756c:
    if (ctx->pc == 0x4E756Cu) {
        ctx->pc = 0x4E756Cu;
            // 0x4e756c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E7570u;
        goto label_4e7570;
    }
    ctx->pc = 0x4E7568u;
    {
        const bool branch_taken_0x4e7568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7568) {
            ctx->pc = 0x4E756Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7568u;
            // 0x4e756c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E757Cu;
            goto label_4e757c;
        }
    }
    ctx->pc = 0x4E7570u;
label_4e7570:
    // 0x4e7570: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7574:
    // 0x4e7574: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4e7574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4e7578:
    // 0x4e7578: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e7578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e757c:
    // 0x4e757c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e757cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e7580:
    // 0x4e7580: 0x320f809  jalr        $t9
label_4e7584:
    if (ctx->pc == 0x4E7584u) {
        ctx->pc = 0x4E7584u;
            // 0x4e7584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7588u;
        goto label_4e7588;
    }
    ctx->pc = 0x4E7580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7588u);
        ctx->pc = 0x4E7584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7580u;
            // 0x4e7584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7588u; }
            if (ctx->pc != 0x4E7588u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7588u;
label_4e7588:
    // 0x4e7588: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e7588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e758c:
    // 0x4e758c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e7590:
    // 0x4e7590: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e7590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e7594:
    // 0x4e7594: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e7598:
    // 0x4e7598: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e7598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e759c:
    // 0x4e759c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e759cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e75a0:
    // 0x4e75a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e75a4:
    if (ctx->pc == 0x4E75A4u) {
        ctx->pc = 0x4E75A4u;
            // 0x4e75a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4E75A8u;
        goto label_4e75a8;
    }
    ctx->pc = 0x4E75A0u;
    {
        const bool branch_taken_0x4e75a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e75a0) {
            ctx->pc = 0x4E75A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E75A0u;
            // 0x4e75a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E75B4u;
            goto label_4e75b4;
        }
    }
    ctx->pc = 0x4E75A8u;
label_4e75a8:
    // 0x4e75a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75ac:
    // 0x4e75ac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e75acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e75b0:
    // 0x4e75b0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e75b4:
    // 0x4e75b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75b8:
    // 0x4e75b8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e75bc:
    // 0x4e75bc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e75c0:
    // 0x4e75c0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e75c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e75c4:
    // 0x4e75c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e75c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e75c8:
    // 0x4e75c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e75cc:
    if (ctx->pc == 0x4E75CCu) {
        ctx->pc = 0x4E75D0u;
        goto label_4e75d0;
    }
    ctx->pc = 0x4E75C8u;
    {
        const bool branch_taken_0x4e75c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e75c8) {
            ctx->pc = 0x4E75D8u;
            goto label_4e75d8;
        }
    }
    ctx->pc = 0x4E75D0u;
label_4e75d0:
    // 0x4e75d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75d4:
    // 0x4e75d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e75d8:
    // 0x4e75d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75dc:
    // 0x4e75dc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4e75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4e75e0:
    // 0x4e75e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e75e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e75e4:
    // 0x4e75e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e75e8:
    if (ctx->pc == 0x4E75E8u) {
        ctx->pc = 0x4E75ECu;
        goto label_4e75ec;
    }
    ctx->pc = 0x4E75E4u;
    {
        const bool branch_taken_0x4e75e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e75e4) {
            ctx->pc = 0x4E75F4u;
            goto label_4e75f4;
        }
    }
    ctx->pc = 0x4E75ECu;
label_4e75ec:
    // 0x4e75ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75f0:
    // 0x4e75f0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4e75f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4e75f4:
    // 0x4e75f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e75f8:
    // 0x4e75f8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e75fc:
    // 0x4e75fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e75fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e7600:
    // 0x4e7600: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e7604:
    if (ctx->pc == 0x4E7604u) {
        ctx->pc = 0x4E7604u;
            // 0x4e7604: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E7608u;
        goto label_4e7608;
    }
    ctx->pc = 0x4E7600u;
    {
        const bool branch_taken_0x4e7600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7600) {
            ctx->pc = 0x4E7604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7600u;
            // 0x4e7604: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7614u;
            goto label_4e7614;
        }
    }
    ctx->pc = 0x4E7608u;
label_4e7608:
    // 0x4e7608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e7608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e760c:
    // 0x4e760c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4e760cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4e7610:
    // 0x4e7610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7614:
    // 0x4e7614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7618:
    // 0x4e7618: 0x3e00008  jr          $ra
label_4e761c:
    if (ctx->pc == 0x4E761Cu) {
        ctx->pc = 0x4E761Cu;
            // 0x4e761c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E7620u;
        goto label_4e7620;
    }
    ctx->pc = 0x4E7618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7618u;
            // 0x4e761c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7620u;
label_4e7620:
    // 0x4e7620: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e7624:
    // 0x4e7624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4e7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4e7628:
    // 0x4e7628: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4e7628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4e762c:
    // 0x4e762c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4e762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4e7630:
    // 0x4e7630: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4e7630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4e7634:
    // 0x4e7634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4e7638:
    // 0x4e7638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e763c:
    // 0x4e763c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e7640:
    // 0x4e7640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e7644:
    // 0x4e7644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e7644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e7648:
    // 0x4e7648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e7648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e764c:
    // 0x4e764c: 0x84830066  lh          $v1, 0x66($a0)
    ctx->pc = 0x4e764cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
label_4e7650:
    // 0x4e7650: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
label_4e7654:
    if (ctx->pc == 0x4E7654u) {
        ctx->pc = 0x4E7654u;
            // 0x4e7654: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7658u;
        goto label_4e7658;
    }
    ctx->pc = 0x4E7650u;
    {
        const bool branch_taken_0x4e7650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7650u;
            // 0x4e7654: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7650) {
            ctx->pc = 0x4E77F0u;
            goto label_4e77f0;
        }
    }
    ctx->pc = 0x4E7658u;
label_4e7658:
    // 0x4e7658: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x4e7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_4e765c:
    // 0x4e765c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4e765cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7660:
    // 0x4e7660: 0xc139e40  jal         func_4E7900
label_4e7664:
    if (ctx->pc == 0x4E7664u) {
        ctx->pc = 0x4E7664u;
            // 0x4e7664: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7668u;
        goto label_4e7668;
    }
    ctx->pc = 0x4E7660u;
    SET_GPR_U32(ctx, 31, 0x4E7668u);
    ctx->pc = 0x4E7664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7660u;
            // 0x4e7664: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E7900u;
    if (runtime->hasFunction(0x4E7900u)) {
        auto targetFn = runtime->lookupFunction(0x4E7900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7668u; }
        if (ctx->pc != 0x4E7668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E7900_0x4e7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7668u; }
        if (ctx->pc != 0x4E7668u) { return; }
    }
    ctx->pc = 0x4E7668u;
label_4e7668:
    // 0x4e7668: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e7668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e766c:
    // 0x4e766c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e766cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e7670:
    // 0x4e7670: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4e7670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e7674:
    // 0x4e7674: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4e7674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e7678:
    // 0x4e7678: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4e7678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4e767c:
    // 0x4e767c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x4e767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_4e7680:
    // 0x4e7680: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4e7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e7684:
    // 0x4e7684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e7684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e7688:
    // 0x4e7688: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e768c:
    // 0x4e768c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e7690:
    // 0x4e7690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7694:
    // 0x4e7694: 0xc04e738  jal         func_139CE0
label_4e7698:
    if (ctx->pc == 0x4E7698u) {
        ctx->pc = 0x4E7698u;
            // 0x4e7698: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4E769Cu;
        goto label_4e769c;
    }
    ctx->pc = 0x4E7694u;
    SET_GPR_U32(ctx, 31, 0x4E769Cu);
    ctx->pc = 0x4E7698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7694u;
            // 0x4e7698: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E769Cu; }
        if (ctx->pc != 0x4E769Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E769Cu; }
        if (ctx->pc != 0x4E769Cu) { return; }
    }
    ctx->pc = 0x4E769Cu;
label_4e769c:
    // 0x4e769c: 0x8eb10054  lw          $s1, 0x54($s5)
    ctx->pc = 0x4e769cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4e76a0:
    // 0x4e76a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e76a4:
    // 0x4e76a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e76a8:
    // 0x4e76a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4e76a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e76ac:
    // 0x4e76ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4e76acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e76b0:
    // 0x4e76b0: 0x269e0028  addiu       $fp, $s4, 0x28
    ctx->pc = 0x4e76b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_4e76b4:
    // 0x4e76b4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4e76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4e76b8:
    // 0x4e76b8: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4e76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4e76bc:
    // 0x4e76bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e76c0:
    // 0x4e76c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e76c4:
    // 0x4e76c4: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x4e76c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e76c8:
    // 0x4e76c8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e76c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4e76cc:
    // 0x4e76cc: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x4e76ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4e76d0:
    // 0x4e76d0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e76d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e76d4:
    // 0x4e76d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e76d8:
    // 0x4e76d8: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x4e76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_4e76dc:
    // 0x4e76dc: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4e76dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4e76e0:
    // 0x4e76e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e76e4:
    // 0x4e76e4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4e76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e76e8:
    // 0x4e76e8: 0x879021  addu        $s2, $a0, $a3
    ctx->pc = 0x4e76e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4e76ec:
    // 0x4e76ec: 0x8c66e3b0  lw          $a2, -0x1C50($v1)
    ctx->pc = 0x4e76ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e76f0:
    // 0x4e76f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e76f4:
    // 0x4e76f4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e76f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4e76f8:
    // 0x4e76f8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e76f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4e76fc:
    // 0x4e76fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e7700:
    // 0x4e7700: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x4e7700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_4e7704:
    // 0x4e7704: 0x8caae3d8  lw          $t2, -0x1C28($a1)
    ctx->pc = 0x4e7704u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_4e7708:
    // 0x4e7708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e7708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e770c:
    // 0x4e770c: 0x8c69e378  lw          $t1, -0x1C88($v1)
    ctx->pc = 0x4e770cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e7710:
    // 0x4e7710: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4e7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4e7714:
    // 0x4e7714: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4e7714u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4e7718:
    // 0x4e7718: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e7718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4e771c:
    // 0x4e771c: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x4e771cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4e7720:
    // 0x4e7720: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e7720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e7724:
    // 0x4e7724: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4e7728:
    // 0x4e7728: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x4e7728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_4e772c:
    // 0x4e772c: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x4e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4e7730:
    // 0x4e7730: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x4e7730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4e7734:
    // 0x4e7734: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4e7734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e7738:
    // 0x4e7738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4e773c:
    // 0x4e773c: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x4e773cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_4e7740:
    // 0x4e7740: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x4e7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4e7744:
    // 0x4e7744: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x4e7744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
label_4e7748:
    // 0x4e7748: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x4e7748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_4e774c:
    // 0x4e774c: 0xc04e4a4  jal         func_139290
label_4e7750:
    if (ctx->pc == 0x4E7750u) {
        ctx->pc = 0x4E7750u;
            // 0x4e7750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7754u;
        goto label_4e7754;
    }
    ctx->pc = 0x4E774Cu;
    SET_GPR_U32(ctx, 31, 0x4E7754u);
    ctx->pc = 0x4E7750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E774Cu;
            // 0x4e7750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7754u; }
        if (ctx->pc != 0x4E7754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7754u; }
        if (ctx->pc != 0x4E7754u) { return; }
    }
    ctx->pc = 0x4E7754u;
label_4e7754:
    // 0x4e7754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e7754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7758:
    // 0x4e7758: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4e7758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e775c:
    // 0x4e775c: 0xc04cd60  jal         func_133580
label_4e7760:
    if (ctx->pc == 0x4E7760u) {
        ctx->pc = 0x4E7760u;
            // 0x4e7760: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7764u;
        goto label_4e7764;
    }
    ctx->pc = 0x4E775Cu;
    SET_GPR_U32(ctx, 31, 0x4E7764u);
    ctx->pc = 0x4E7760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E775Cu;
            // 0x4e7760: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7764u; }
        if (ctx->pc != 0x4E7764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7764u; }
        if (ctx->pc != 0x4E7764u) { return; }
    }
    ctx->pc = 0x4E7764u;
label_4e7764:
    // 0x4e7764: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x4e7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_4e7768:
    // 0x4e7768: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e7768u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e776c:
    // 0x4e776c: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x4e776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_4e7770:
    // 0x4e7770: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e7770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e7774:
    // 0x4e7774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e7774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7778:
    // 0x4e7778: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4e7778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e777c:
    // 0x4e777c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4e777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4e7780:
    // 0x4e7780: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e7780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e7784:
    // 0x4e7784: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x4e7784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e7788:
    // 0x4e7788: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4e7788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e778c:
    // 0x4e778c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4e778cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4e7790:
    // 0x4e7790: 0xc04cff4  jal         func_133FD0
label_4e7794:
    if (ctx->pc == 0x4E7794u) {
        ctx->pc = 0x4E7794u;
            // 0x4e7794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7798u;
        goto label_4e7798;
    }
    ctx->pc = 0x4E7790u;
    SET_GPR_U32(ctx, 31, 0x4E7798u);
    ctx->pc = 0x4E7794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7790u;
            // 0x4e7794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7798u; }
        if (ctx->pc != 0x4E7798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7798u; }
        if (ctx->pc != 0x4E7798u) { return; }
    }
    ctx->pc = 0x4E7798u;
label_4e7798:
    // 0x4e7798: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x4e7798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_4e779c:
    // 0x4e779c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4e779cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4e77a0:
    // 0x4e77a0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x4e77a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4e77a4:
    // 0x4e77a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4e77a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4e77a8:
    // 0x4e77a8: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_4e77ac:
    if (ctx->pc == 0x4E77ACu) {
        ctx->pc = 0x4E77ACu;
            // 0x4e77ac: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x4E77B0u;
        goto label_4e77b0;
    }
    ctx->pc = 0x4E77A8u;
    {
        const bool branch_taken_0x4e77a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E77ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E77A8u;
            // 0x4e77ac: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e77a8) {
            ctx->pc = 0x4E76BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e76bc;
        }
    }
    ctx->pc = 0x4E77B0u;
label_4e77b0:
    // 0x4e77b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e77b4:
    // 0x4e77b4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4e77b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e77b8:
    // 0x4e77b8: 0x5920000a  blezl       $t1, . + 4 + (0xA << 2)
label_4e77bc:
    if (ctx->pc == 0x4E77BCu) {
        ctx->pc = 0x4E77BCu;
            // 0x4e77bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E77C0u;
        goto label_4e77c0;
    }
    ctx->pc = 0x4E77B8u;
    {
        const bool branch_taken_0x4e77b8 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x4e77b8) {
            ctx->pc = 0x4E77BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E77B8u;
            // 0x4e77bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E77E4u;
            goto label_4e77e4;
        }
    }
    ctx->pc = 0x4E77C0u;
label_4e77c0:
    // 0x4e77c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e77c4:
    // 0x4e77c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e77c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e77c8:
    // 0x4e77c8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4e77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4e77cc:
    // 0x4e77cc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e77ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e77d0:
    // 0x4e77d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e77d4:
    // 0x4e77d4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e77d8:
    // 0x4e77d8: 0xc055754  jal         func_155D50
label_4e77dc:
    if (ctx->pc == 0x4E77DCu) {
        ctx->pc = 0x4E77DCu;
            // 0x4e77dc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4E77E0u;
        goto label_4e77e0;
    }
    ctx->pc = 0x4E77D8u;
    SET_GPR_U32(ctx, 31, 0x4E77E0u);
    ctx->pc = 0x4E77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E77D8u;
            // 0x4e77dc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E77E0u; }
        if (ctx->pc != 0x4E77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E77E0u; }
        if (ctx->pc != 0x4E77E0u) { return; }
    }
    ctx->pc = 0x4E77E0u;
label_4e77e0:
    // 0x4e77e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e77e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e77e4:
    // 0x4e77e4: 0xc139e28  jal         func_4E78A0
label_4e77e8:
    if (ctx->pc == 0x4E77E8u) {
        ctx->pc = 0x4E77E8u;
            // 0x4e77e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E77ECu;
        goto label_4e77ec;
    }
    ctx->pc = 0x4E77E4u;
    SET_GPR_U32(ctx, 31, 0x4E77ECu);
    ctx->pc = 0x4E77E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E77E4u;
            // 0x4e77e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E78A0u;
    if (runtime->hasFunction(0x4E78A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E78A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E77ECu; }
        if (ctx->pc != 0x4E77ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E78A0_0x4e78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E77ECu; }
        if (ctx->pc != 0x4E77ECu) { return; }
    }
    ctx->pc = 0x4E77ECu;
label_4e77ec:
    // 0x4e77ec: 0xa6a00066  sh          $zero, 0x66($s5)
    ctx->pc = 0x4e77ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 0));
label_4e77f0:
    // 0x4e77f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4e77f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4e77f4:
    // 0x4e77f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4e77f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e77f8:
    // 0x4e77f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4e77f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e77fc:
    // 0x4e77fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4e77fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e7800:
    // 0x4e7800: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e7800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e7804:
    // 0x4e7804: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e7804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7808:
    // 0x4e7808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e7808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e780c:
    // 0x4e780c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e780cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7810:
    // 0x4e7810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e7810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7814:
    // 0x4e7814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7818:
    // 0x4e7818: 0x3e00008  jr          $ra
label_4e781c:
    if (ctx->pc == 0x4E781Cu) {
        ctx->pc = 0x4E781Cu;
            // 0x4e781c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4E7820u;
        goto label_4e7820;
    }
    ctx->pc = 0x4E7818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7818u;
            // 0x4e781c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7820u;
label_4e7820:
    // 0x4e7820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e7824:
    // 0x4e7824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e7828:
    // 0x4e7828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e7828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e782c:
    // 0x4e782c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e7830:
    // 0x4e7830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e7830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7834:
    // 0x4e7834: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4e7838:
    if (ctx->pc == 0x4E7838u) {
        ctx->pc = 0x4E7838u;
            // 0x4e7838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E783Cu;
        goto label_4e783c;
    }
    ctx->pc = 0x4E7834u;
    {
        const bool branch_taken_0x4e7834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7834u;
            // 0x4e7838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7834) {
            ctx->pc = 0x4E7878u;
            goto label_4e7878;
        }
    }
    ctx->pc = 0x4E783Cu;
label_4e783c:
    // 0x4e783c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e7840:
    // 0x4e7840: 0x24423bb0  addiu       $v0, $v0, 0x3BB0
    ctx->pc = 0x4e7840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15280));
label_4e7844:
    // 0x4e7844: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4e7848:
    if (ctx->pc == 0x4E7848u) {
        ctx->pc = 0x4E7848u;
            // 0x4e7848: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E784Cu;
        goto label_4e784c;
    }
    ctx->pc = 0x4E7844u;
    {
        const bool branch_taken_0x4e7844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7844u;
            // 0x4e7848: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7844) {
            ctx->pc = 0x4E7860u;
            goto label_4e7860;
        }
    }
    ctx->pc = 0x4E784Cu;
label_4e784c:
    // 0x4e784c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e7850:
    // 0x4e7850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e7850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7854:
    // 0x4e7854: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4e7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4e7858:
    // 0x4e7858: 0xc057a68  jal         func_15E9A0
label_4e785c:
    if (ctx->pc == 0x4E785Cu) {
        ctx->pc = 0x4E785Cu;
            // 0x4e785c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E7860u;
        goto label_4e7860;
    }
    ctx->pc = 0x4E7858u;
    SET_GPR_U32(ctx, 31, 0x4E7860u);
    ctx->pc = 0x4E785Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7858u;
            // 0x4e785c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7860u; }
        if (ctx->pc != 0x4E7860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7860u; }
        if (ctx->pc != 0x4E7860u) { return; }
    }
    ctx->pc = 0x4E7860u;
label_4e7860:
    // 0x4e7860: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e7864:
    // 0x4e7864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e7864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e7868:
    // 0x4e7868: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e786c:
    if (ctx->pc == 0x4E786Cu) {
        ctx->pc = 0x4E786Cu;
            // 0x4e786c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7870u;
        goto label_4e7870;
    }
    ctx->pc = 0x4E7868u;
    {
        const bool branch_taken_0x4e7868 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e7868) {
            ctx->pc = 0x4E786Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7868u;
            // 0x4e786c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E787Cu;
            goto label_4e787c;
        }
    }
    ctx->pc = 0x4E7870u;
label_4e7870:
    // 0x4e7870: 0xc0400a8  jal         func_1002A0
label_4e7874:
    if (ctx->pc == 0x4E7874u) {
        ctx->pc = 0x4E7874u;
            // 0x4e7874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7878u;
        goto label_4e7878;
    }
    ctx->pc = 0x4E7870u;
    SET_GPR_U32(ctx, 31, 0x4E7878u);
    ctx->pc = 0x4E7874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7870u;
            // 0x4e7874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7878u; }
        if (ctx->pc != 0x4E7878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7878u; }
        if (ctx->pc != 0x4E7878u) { return; }
    }
    ctx->pc = 0x4E7878u;
label_4e7878:
    // 0x4e7878: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e7878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e787c:
    // 0x4e787c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e787cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7880:
    // 0x4e7880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e7880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7884:
    // 0x4e7884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7888:
    // 0x4e7888: 0x3e00008  jr          $ra
label_4e788c:
    if (ctx->pc == 0x4E788Cu) {
        ctx->pc = 0x4E788Cu;
            // 0x4e788c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E7890u;
        goto label_4e7890;
    }
    ctx->pc = 0x4E7888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7888u;
            // 0x4e788c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7890u;
label_4e7890:
    // 0x4e7890: 0x3e00008  jr          $ra
label_4e7894:
    if (ctx->pc == 0x4E7894u) {
        ctx->pc = 0x4E7894u;
            // 0x4e7894: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E7898u;
        goto label_4e7898;
    }
    ctx->pc = 0x4E7890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7890u;
            // 0x4e7894: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7898u;
label_4e7898:
    // 0x4e7898: 0x0  nop
    ctx->pc = 0x4e7898u;
    // NOP
label_4e789c:
    // 0x4e789c: 0x0  nop
    ctx->pc = 0x4e789cu;
    // NOP
}
