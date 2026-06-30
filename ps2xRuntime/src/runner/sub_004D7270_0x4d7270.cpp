#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7270
// Address: 0x4d7270 - 0x4d77f0
void sub_004D7270_0x4d7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7270_0x4d7270");
#endif

    switch (ctx->pc) {
        case 0x4d7270u: goto label_4d7270;
        case 0x4d7274u: goto label_4d7274;
        case 0x4d7278u: goto label_4d7278;
        case 0x4d727cu: goto label_4d727c;
        case 0x4d7280u: goto label_4d7280;
        case 0x4d7284u: goto label_4d7284;
        case 0x4d7288u: goto label_4d7288;
        case 0x4d728cu: goto label_4d728c;
        case 0x4d7290u: goto label_4d7290;
        case 0x4d7294u: goto label_4d7294;
        case 0x4d7298u: goto label_4d7298;
        case 0x4d729cu: goto label_4d729c;
        case 0x4d72a0u: goto label_4d72a0;
        case 0x4d72a4u: goto label_4d72a4;
        case 0x4d72a8u: goto label_4d72a8;
        case 0x4d72acu: goto label_4d72ac;
        case 0x4d72b0u: goto label_4d72b0;
        case 0x4d72b4u: goto label_4d72b4;
        case 0x4d72b8u: goto label_4d72b8;
        case 0x4d72bcu: goto label_4d72bc;
        case 0x4d72c0u: goto label_4d72c0;
        case 0x4d72c4u: goto label_4d72c4;
        case 0x4d72c8u: goto label_4d72c8;
        case 0x4d72ccu: goto label_4d72cc;
        case 0x4d72d0u: goto label_4d72d0;
        case 0x4d72d4u: goto label_4d72d4;
        case 0x4d72d8u: goto label_4d72d8;
        case 0x4d72dcu: goto label_4d72dc;
        case 0x4d72e0u: goto label_4d72e0;
        case 0x4d72e4u: goto label_4d72e4;
        case 0x4d72e8u: goto label_4d72e8;
        case 0x4d72ecu: goto label_4d72ec;
        case 0x4d72f0u: goto label_4d72f0;
        case 0x4d72f4u: goto label_4d72f4;
        case 0x4d72f8u: goto label_4d72f8;
        case 0x4d72fcu: goto label_4d72fc;
        case 0x4d7300u: goto label_4d7300;
        case 0x4d7304u: goto label_4d7304;
        case 0x4d7308u: goto label_4d7308;
        case 0x4d730cu: goto label_4d730c;
        case 0x4d7310u: goto label_4d7310;
        case 0x4d7314u: goto label_4d7314;
        case 0x4d7318u: goto label_4d7318;
        case 0x4d731cu: goto label_4d731c;
        case 0x4d7320u: goto label_4d7320;
        case 0x4d7324u: goto label_4d7324;
        case 0x4d7328u: goto label_4d7328;
        case 0x4d732cu: goto label_4d732c;
        case 0x4d7330u: goto label_4d7330;
        case 0x4d7334u: goto label_4d7334;
        case 0x4d7338u: goto label_4d7338;
        case 0x4d733cu: goto label_4d733c;
        case 0x4d7340u: goto label_4d7340;
        case 0x4d7344u: goto label_4d7344;
        case 0x4d7348u: goto label_4d7348;
        case 0x4d734cu: goto label_4d734c;
        case 0x4d7350u: goto label_4d7350;
        case 0x4d7354u: goto label_4d7354;
        case 0x4d7358u: goto label_4d7358;
        case 0x4d735cu: goto label_4d735c;
        case 0x4d7360u: goto label_4d7360;
        case 0x4d7364u: goto label_4d7364;
        case 0x4d7368u: goto label_4d7368;
        case 0x4d736cu: goto label_4d736c;
        case 0x4d7370u: goto label_4d7370;
        case 0x4d7374u: goto label_4d7374;
        case 0x4d7378u: goto label_4d7378;
        case 0x4d737cu: goto label_4d737c;
        case 0x4d7380u: goto label_4d7380;
        case 0x4d7384u: goto label_4d7384;
        case 0x4d7388u: goto label_4d7388;
        case 0x4d738cu: goto label_4d738c;
        case 0x4d7390u: goto label_4d7390;
        case 0x4d7394u: goto label_4d7394;
        case 0x4d7398u: goto label_4d7398;
        case 0x4d739cu: goto label_4d739c;
        case 0x4d73a0u: goto label_4d73a0;
        case 0x4d73a4u: goto label_4d73a4;
        case 0x4d73a8u: goto label_4d73a8;
        case 0x4d73acu: goto label_4d73ac;
        case 0x4d73b0u: goto label_4d73b0;
        case 0x4d73b4u: goto label_4d73b4;
        case 0x4d73b8u: goto label_4d73b8;
        case 0x4d73bcu: goto label_4d73bc;
        case 0x4d73c0u: goto label_4d73c0;
        case 0x4d73c4u: goto label_4d73c4;
        case 0x4d73c8u: goto label_4d73c8;
        case 0x4d73ccu: goto label_4d73cc;
        case 0x4d73d0u: goto label_4d73d0;
        case 0x4d73d4u: goto label_4d73d4;
        case 0x4d73d8u: goto label_4d73d8;
        case 0x4d73dcu: goto label_4d73dc;
        case 0x4d73e0u: goto label_4d73e0;
        case 0x4d73e4u: goto label_4d73e4;
        case 0x4d73e8u: goto label_4d73e8;
        case 0x4d73ecu: goto label_4d73ec;
        case 0x4d73f0u: goto label_4d73f0;
        case 0x4d73f4u: goto label_4d73f4;
        case 0x4d73f8u: goto label_4d73f8;
        case 0x4d73fcu: goto label_4d73fc;
        case 0x4d7400u: goto label_4d7400;
        case 0x4d7404u: goto label_4d7404;
        case 0x4d7408u: goto label_4d7408;
        case 0x4d740cu: goto label_4d740c;
        case 0x4d7410u: goto label_4d7410;
        case 0x4d7414u: goto label_4d7414;
        case 0x4d7418u: goto label_4d7418;
        case 0x4d741cu: goto label_4d741c;
        case 0x4d7420u: goto label_4d7420;
        case 0x4d7424u: goto label_4d7424;
        case 0x4d7428u: goto label_4d7428;
        case 0x4d742cu: goto label_4d742c;
        case 0x4d7430u: goto label_4d7430;
        case 0x4d7434u: goto label_4d7434;
        case 0x4d7438u: goto label_4d7438;
        case 0x4d743cu: goto label_4d743c;
        case 0x4d7440u: goto label_4d7440;
        case 0x4d7444u: goto label_4d7444;
        case 0x4d7448u: goto label_4d7448;
        case 0x4d744cu: goto label_4d744c;
        case 0x4d7450u: goto label_4d7450;
        case 0x4d7454u: goto label_4d7454;
        case 0x4d7458u: goto label_4d7458;
        case 0x4d745cu: goto label_4d745c;
        case 0x4d7460u: goto label_4d7460;
        case 0x4d7464u: goto label_4d7464;
        case 0x4d7468u: goto label_4d7468;
        case 0x4d746cu: goto label_4d746c;
        case 0x4d7470u: goto label_4d7470;
        case 0x4d7474u: goto label_4d7474;
        case 0x4d7478u: goto label_4d7478;
        case 0x4d747cu: goto label_4d747c;
        case 0x4d7480u: goto label_4d7480;
        case 0x4d7484u: goto label_4d7484;
        case 0x4d7488u: goto label_4d7488;
        case 0x4d748cu: goto label_4d748c;
        case 0x4d7490u: goto label_4d7490;
        case 0x4d7494u: goto label_4d7494;
        case 0x4d7498u: goto label_4d7498;
        case 0x4d749cu: goto label_4d749c;
        case 0x4d74a0u: goto label_4d74a0;
        case 0x4d74a4u: goto label_4d74a4;
        case 0x4d74a8u: goto label_4d74a8;
        case 0x4d74acu: goto label_4d74ac;
        case 0x4d74b0u: goto label_4d74b0;
        case 0x4d74b4u: goto label_4d74b4;
        case 0x4d74b8u: goto label_4d74b8;
        case 0x4d74bcu: goto label_4d74bc;
        case 0x4d74c0u: goto label_4d74c0;
        case 0x4d74c4u: goto label_4d74c4;
        case 0x4d74c8u: goto label_4d74c8;
        case 0x4d74ccu: goto label_4d74cc;
        case 0x4d74d0u: goto label_4d74d0;
        case 0x4d74d4u: goto label_4d74d4;
        case 0x4d74d8u: goto label_4d74d8;
        case 0x4d74dcu: goto label_4d74dc;
        case 0x4d74e0u: goto label_4d74e0;
        case 0x4d74e4u: goto label_4d74e4;
        case 0x4d74e8u: goto label_4d74e8;
        case 0x4d74ecu: goto label_4d74ec;
        case 0x4d74f0u: goto label_4d74f0;
        case 0x4d74f4u: goto label_4d74f4;
        case 0x4d74f8u: goto label_4d74f8;
        case 0x4d74fcu: goto label_4d74fc;
        case 0x4d7500u: goto label_4d7500;
        case 0x4d7504u: goto label_4d7504;
        case 0x4d7508u: goto label_4d7508;
        case 0x4d750cu: goto label_4d750c;
        case 0x4d7510u: goto label_4d7510;
        case 0x4d7514u: goto label_4d7514;
        case 0x4d7518u: goto label_4d7518;
        case 0x4d751cu: goto label_4d751c;
        case 0x4d7520u: goto label_4d7520;
        case 0x4d7524u: goto label_4d7524;
        case 0x4d7528u: goto label_4d7528;
        case 0x4d752cu: goto label_4d752c;
        case 0x4d7530u: goto label_4d7530;
        case 0x4d7534u: goto label_4d7534;
        case 0x4d7538u: goto label_4d7538;
        case 0x4d753cu: goto label_4d753c;
        case 0x4d7540u: goto label_4d7540;
        case 0x4d7544u: goto label_4d7544;
        case 0x4d7548u: goto label_4d7548;
        case 0x4d754cu: goto label_4d754c;
        case 0x4d7550u: goto label_4d7550;
        case 0x4d7554u: goto label_4d7554;
        case 0x4d7558u: goto label_4d7558;
        case 0x4d755cu: goto label_4d755c;
        case 0x4d7560u: goto label_4d7560;
        case 0x4d7564u: goto label_4d7564;
        case 0x4d7568u: goto label_4d7568;
        case 0x4d756cu: goto label_4d756c;
        case 0x4d7570u: goto label_4d7570;
        case 0x4d7574u: goto label_4d7574;
        case 0x4d7578u: goto label_4d7578;
        case 0x4d757cu: goto label_4d757c;
        case 0x4d7580u: goto label_4d7580;
        case 0x4d7584u: goto label_4d7584;
        case 0x4d7588u: goto label_4d7588;
        case 0x4d758cu: goto label_4d758c;
        case 0x4d7590u: goto label_4d7590;
        case 0x4d7594u: goto label_4d7594;
        case 0x4d7598u: goto label_4d7598;
        case 0x4d759cu: goto label_4d759c;
        case 0x4d75a0u: goto label_4d75a0;
        case 0x4d75a4u: goto label_4d75a4;
        case 0x4d75a8u: goto label_4d75a8;
        case 0x4d75acu: goto label_4d75ac;
        case 0x4d75b0u: goto label_4d75b0;
        case 0x4d75b4u: goto label_4d75b4;
        case 0x4d75b8u: goto label_4d75b8;
        case 0x4d75bcu: goto label_4d75bc;
        case 0x4d75c0u: goto label_4d75c0;
        case 0x4d75c4u: goto label_4d75c4;
        case 0x4d75c8u: goto label_4d75c8;
        case 0x4d75ccu: goto label_4d75cc;
        case 0x4d75d0u: goto label_4d75d0;
        case 0x4d75d4u: goto label_4d75d4;
        case 0x4d75d8u: goto label_4d75d8;
        case 0x4d75dcu: goto label_4d75dc;
        case 0x4d75e0u: goto label_4d75e0;
        case 0x4d75e4u: goto label_4d75e4;
        case 0x4d75e8u: goto label_4d75e8;
        case 0x4d75ecu: goto label_4d75ec;
        case 0x4d75f0u: goto label_4d75f0;
        case 0x4d75f4u: goto label_4d75f4;
        case 0x4d75f8u: goto label_4d75f8;
        case 0x4d75fcu: goto label_4d75fc;
        case 0x4d7600u: goto label_4d7600;
        case 0x4d7604u: goto label_4d7604;
        case 0x4d7608u: goto label_4d7608;
        case 0x4d760cu: goto label_4d760c;
        case 0x4d7610u: goto label_4d7610;
        case 0x4d7614u: goto label_4d7614;
        case 0x4d7618u: goto label_4d7618;
        case 0x4d761cu: goto label_4d761c;
        case 0x4d7620u: goto label_4d7620;
        case 0x4d7624u: goto label_4d7624;
        case 0x4d7628u: goto label_4d7628;
        case 0x4d762cu: goto label_4d762c;
        case 0x4d7630u: goto label_4d7630;
        case 0x4d7634u: goto label_4d7634;
        case 0x4d7638u: goto label_4d7638;
        case 0x4d763cu: goto label_4d763c;
        case 0x4d7640u: goto label_4d7640;
        case 0x4d7644u: goto label_4d7644;
        case 0x4d7648u: goto label_4d7648;
        case 0x4d764cu: goto label_4d764c;
        case 0x4d7650u: goto label_4d7650;
        case 0x4d7654u: goto label_4d7654;
        case 0x4d7658u: goto label_4d7658;
        case 0x4d765cu: goto label_4d765c;
        case 0x4d7660u: goto label_4d7660;
        case 0x4d7664u: goto label_4d7664;
        case 0x4d7668u: goto label_4d7668;
        case 0x4d766cu: goto label_4d766c;
        case 0x4d7670u: goto label_4d7670;
        case 0x4d7674u: goto label_4d7674;
        case 0x4d7678u: goto label_4d7678;
        case 0x4d767cu: goto label_4d767c;
        case 0x4d7680u: goto label_4d7680;
        case 0x4d7684u: goto label_4d7684;
        case 0x4d7688u: goto label_4d7688;
        case 0x4d768cu: goto label_4d768c;
        case 0x4d7690u: goto label_4d7690;
        case 0x4d7694u: goto label_4d7694;
        case 0x4d7698u: goto label_4d7698;
        case 0x4d769cu: goto label_4d769c;
        case 0x4d76a0u: goto label_4d76a0;
        case 0x4d76a4u: goto label_4d76a4;
        case 0x4d76a8u: goto label_4d76a8;
        case 0x4d76acu: goto label_4d76ac;
        case 0x4d76b0u: goto label_4d76b0;
        case 0x4d76b4u: goto label_4d76b4;
        case 0x4d76b8u: goto label_4d76b8;
        case 0x4d76bcu: goto label_4d76bc;
        case 0x4d76c0u: goto label_4d76c0;
        case 0x4d76c4u: goto label_4d76c4;
        case 0x4d76c8u: goto label_4d76c8;
        case 0x4d76ccu: goto label_4d76cc;
        case 0x4d76d0u: goto label_4d76d0;
        case 0x4d76d4u: goto label_4d76d4;
        case 0x4d76d8u: goto label_4d76d8;
        case 0x4d76dcu: goto label_4d76dc;
        case 0x4d76e0u: goto label_4d76e0;
        case 0x4d76e4u: goto label_4d76e4;
        case 0x4d76e8u: goto label_4d76e8;
        case 0x4d76ecu: goto label_4d76ec;
        case 0x4d76f0u: goto label_4d76f0;
        case 0x4d76f4u: goto label_4d76f4;
        case 0x4d76f8u: goto label_4d76f8;
        case 0x4d76fcu: goto label_4d76fc;
        case 0x4d7700u: goto label_4d7700;
        case 0x4d7704u: goto label_4d7704;
        case 0x4d7708u: goto label_4d7708;
        case 0x4d770cu: goto label_4d770c;
        case 0x4d7710u: goto label_4d7710;
        case 0x4d7714u: goto label_4d7714;
        case 0x4d7718u: goto label_4d7718;
        case 0x4d771cu: goto label_4d771c;
        case 0x4d7720u: goto label_4d7720;
        case 0x4d7724u: goto label_4d7724;
        case 0x4d7728u: goto label_4d7728;
        case 0x4d772cu: goto label_4d772c;
        case 0x4d7730u: goto label_4d7730;
        case 0x4d7734u: goto label_4d7734;
        case 0x4d7738u: goto label_4d7738;
        case 0x4d773cu: goto label_4d773c;
        case 0x4d7740u: goto label_4d7740;
        case 0x4d7744u: goto label_4d7744;
        case 0x4d7748u: goto label_4d7748;
        case 0x4d774cu: goto label_4d774c;
        case 0x4d7750u: goto label_4d7750;
        case 0x4d7754u: goto label_4d7754;
        case 0x4d7758u: goto label_4d7758;
        case 0x4d775cu: goto label_4d775c;
        case 0x4d7760u: goto label_4d7760;
        case 0x4d7764u: goto label_4d7764;
        case 0x4d7768u: goto label_4d7768;
        case 0x4d776cu: goto label_4d776c;
        case 0x4d7770u: goto label_4d7770;
        case 0x4d7774u: goto label_4d7774;
        case 0x4d7778u: goto label_4d7778;
        case 0x4d777cu: goto label_4d777c;
        case 0x4d7780u: goto label_4d7780;
        case 0x4d7784u: goto label_4d7784;
        case 0x4d7788u: goto label_4d7788;
        case 0x4d778cu: goto label_4d778c;
        case 0x4d7790u: goto label_4d7790;
        case 0x4d7794u: goto label_4d7794;
        case 0x4d7798u: goto label_4d7798;
        case 0x4d779cu: goto label_4d779c;
        case 0x4d77a0u: goto label_4d77a0;
        case 0x4d77a4u: goto label_4d77a4;
        case 0x4d77a8u: goto label_4d77a8;
        case 0x4d77acu: goto label_4d77ac;
        case 0x4d77b0u: goto label_4d77b0;
        case 0x4d77b4u: goto label_4d77b4;
        case 0x4d77b8u: goto label_4d77b8;
        case 0x4d77bcu: goto label_4d77bc;
        case 0x4d77c0u: goto label_4d77c0;
        case 0x4d77c4u: goto label_4d77c4;
        case 0x4d77c8u: goto label_4d77c8;
        case 0x4d77ccu: goto label_4d77cc;
        case 0x4d77d0u: goto label_4d77d0;
        case 0x4d77d4u: goto label_4d77d4;
        case 0x4d77d8u: goto label_4d77d8;
        case 0x4d77dcu: goto label_4d77dc;
        case 0x4d77e0u: goto label_4d77e0;
        case 0x4d77e4u: goto label_4d77e4;
        case 0x4d77e8u: goto label_4d77e8;
        case 0x4d77ecu: goto label_4d77ec;
        default: break;
    }

    ctx->pc = 0x4d7270u;

label_4d7270:
    // 0x4d7270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d7274:
    // 0x4d7274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d7274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d7278:
    // 0x4d7278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d727c:
    // 0x4d727c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d7280:
    // 0x4d7280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d7280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d7284:
    // 0x4d7284: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d7288:
    if (ctx->pc == 0x4D7288u) {
        ctx->pc = 0x4D7288u;
            // 0x4d7288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D728Cu;
        goto label_4d728c;
    }
    ctx->pc = 0x4D7284u;
    {
        const bool branch_taken_0x4d7284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7284u;
            // 0x4d7288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7284) {
            ctx->pc = 0x4D73B8u;
            goto label_4d73b8;
        }
    }
    ctx->pc = 0x4D728Cu;
label_4d728c:
    // 0x4d728c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d7290:
    // 0x4d7290: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d7294:
    // 0x4d7294: 0x24632950  addiu       $v1, $v1, 0x2950
    ctx->pc = 0x4d7294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
label_4d7298:
    // 0x4d7298: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d729c:
    // 0x4d729c: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x4d729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
label_4d72a0:
    // 0x4d72a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d72a4:
    // 0x4d72a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d72a8:
    // 0x4d72a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d72ac:
    // 0x4d72ac: 0xc0407c0  jal         func_101F00
label_4d72b0:
    if (ctx->pc == 0x4D72B0u) {
        ctx->pc = 0x4D72B0u;
            // 0x4d72b0: 0x24a573d0  addiu       $a1, $a1, 0x73D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29648));
        ctx->pc = 0x4D72B4u;
        goto label_4d72b4;
    }
    ctx->pc = 0x4D72ACu;
    SET_GPR_U32(ctx, 31, 0x4D72B4u);
    ctx->pc = 0x4D72B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D72ACu;
            // 0x4d72b0: 0x24a573d0  addiu       $a1, $a1, 0x73D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72B4u; }
        if (ctx->pc != 0x4D72B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72B4u; }
        if (ctx->pc != 0x4D72B4u) { return; }
    }
    ctx->pc = 0x4D72B4u;
label_4d72b4:
    // 0x4d72b4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d72b8:
    // 0x4d72b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d72bc:
    if (ctx->pc == 0x4D72BCu) {
        ctx->pc = 0x4D72BCu;
            // 0x4d72bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D72C0u;
        goto label_4d72c0;
    }
    ctx->pc = 0x4D72B8u;
    {
        const bool branch_taken_0x4d72b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72b8) {
            ctx->pc = 0x4D72BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D72B8u;
            // 0x4d72bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D72CCu;
            goto label_4d72cc;
        }
    }
    ctx->pc = 0x4D72C0u;
label_4d72c0:
    // 0x4d72c0: 0xc07507c  jal         func_1D41F0
label_4d72c4:
    if (ctx->pc == 0x4D72C4u) {
        ctx->pc = 0x4D72C4u;
            // 0x4d72c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D72C8u;
        goto label_4d72c8;
    }
    ctx->pc = 0x4D72C0u;
    SET_GPR_U32(ctx, 31, 0x4D72C8u);
    ctx->pc = 0x4D72C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D72C0u;
            // 0x4d72c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72C8u; }
        if (ctx->pc != 0x4D72C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72C8u; }
        if (ctx->pc != 0x4D72C8u) { return; }
    }
    ctx->pc = 0x4D72C8u;
label_4d72c8:
    // 0x4d72c8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d72cc:
    // 0x4d72cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d72d0:
    if (ctx->pc == 0x4D72D0u) {
        ctx->pc = 0x4D72D0u;
            // 0x4d72d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D72D4u;
        goto label_4d72d4;
    }
    ctx->pc = 0x4D72CCu;
    {
        const bool branch_taken_0x4d72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72cc) {
            ctx->pc = 0x4D72D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D72CCu;
            // 0x4d72d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D72FCu;
            goto label_4d72fc;
        }
    }
    ctx->pc = 0x4D72D4u;
label_4d72d4:
    // 0x4d72d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d72d8:
    if (ctx->pc == 0x4D72D8u) {
        ctx->pc = 0x4D72DCu;
        goto label_4d72dc;
    }
    ctx->pc = 0x4D72D4u;
    {
        const bool branch_taken_0x4d72d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72d4) {
            ctx->pc = 0x4D72F8u;
            goto label_4d72f8;
        }
    }
    ctx->pc = 0x4D72DCu;
label_4d72dc:
    // 0x4d72dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d72e0:
    if (ctx->pc == 0x4D72E0u) {
        ctx->pc = 0x4D72E4u;
        goto label_4d72e4;
    }
    ctx->pc = 0x4D72DCu;
    {
        const bool branch_taken_0x4d72dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72dc) {
            ctx->pc = 0x4D72F8u;
            goto label_4d72f8;
        }
    }
    ctx->pc = 0x4D72E4u;
label_4d72e4:
    // 0x4d72e4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d72e8:
    // 0x4d72e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d72ec:
    if (ctx->pc == 0x4D72ECu) {
        ctx->pc = 0x4D72F0u;
        goto label_4d72f0;
    }
    ctx->pc = 0x4D72E8u;
    {
        const bool branch_taken_0x4d72e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72e8) {
            ctx->pc = 0x4D72F8u;
            goto label_4d72f8;
        }
    }
    ctx->pc = 0x4D72F0u;
label_4d72f0:
    // 0x4d72f0: 0xc0400a8  jal         func_1002A0
label_4d72f4:
    if (ctx->pc == 0x4D72F4u) {
        ctx->pc = 0x4D72F8u;
        goto label_4d72f8;
    }
    ctx->pc = 0x4D72F0u;
    SET_GPR_U32(ctx, 31, 0x4D72F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72F8u; }
        if (ctx->pc != 0x4D72F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D72F8u; }
        if (ctx->pc != 0x4D72F8u) { return; }
    }
    ctx->pc = 0x4D72F8u;
label_4d72f8:
    // 0x4d72f8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d72fc:
    // 0x4d72fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d7300:
    if (ctx->pc == 0x4D7300u) {
        ctx->pc = 0x4D7300u;
            // 0x4d7300: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D7304u;
        goto label_4d7304;
    }
    ctx->pc = 0x4D72FCu;
    {
        const bool branch_taken_0x4d72fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d72fc) {
            ctx->pc = 0x4D7300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D72FCu;
            // 0x4d7300: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D732Cu;
            goto label_4d732c;
        }
    }
    ctx->pc = 0x4D7304u;
label_4d7304:
    // 0x4d7304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d7308:
    if (ctx->pc == 0x4D7308u) {
        ctx->pc = 0x4D730Cu;
        goto label_4d730c;
    }
    ctx->pc = 0x4D7304u;
    {
        const bool branch_taken_0x4d7304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7304) {
            ctx->pc = 0x4D7328u;
            goto label_4d7328;
        }
    }
    ctx->pc = 0x4D730Cu;
label_4d730c:
    // 0x4d730c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d7310:
    if (ctx->pc == 0x4D7310u) {
        ctx->pc = 0x4D7314u;
        goto label_4d7314;
    }
    ctx->pc = 0x4D730Cu;
    {
        const bool branch_taken_0x4d730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d730c) {
            ctx->pc = 0x4D7328u;
            goto label_4d7328;
        }
    }
    ctx->pc = 0x4D7314u;
label_4d7314:
    // 0x4d7314: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d7314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d7318:
    // 0x4d7318: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d731c:
    if (ctx->pc == 0x4D731Cu) {
        ctx->pc = 0x4D7320u;
        goto label_4d7320;
    }
    ctx->pc = 0x4D7318u;
    {
        const bool branch_taken_0x4d7318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7318) {
            ctx->pc = 0x4D7328u;
            goto label_4d7328;
        }
    }
    ctx->pc = 0x4D7320u;
label_4d7320:
    // 0x4d7320: 0xc0400a8  jal         func_1002A0
label_4d7324:
    if (ctx->pc == 0x4D7324u) {
        ctx->pc = 0x4D7328u;
        goto label_4d7328;
    }
    ctx->pc = 0x4D7320u;
    SET_GPR_U32(ctx, 31, 0x4D7328u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7328u; }
        if (ctx->pc != 0x4D7328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7328u; }
        if (ctx->pc != 0x4D7328u) { return; }
    }
    ctx->pc = 0x4D7328u;
label_4d7328:
    // 0x4d7328: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d732c:
    // 0x4d732c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d7330:
    if (ctx->pc == 0x4D7330u) {
        ctx->pc = 0x4D7334u;
        goto label_4d7334;
    }
    ctx->pc = 0x4D732Cu;
    {
        const bool branch_taken_0x4d732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d732c) {
            ctx->pc = 0x4D7348u;
            goto label_4d7348;
        }
    }
    ctx->pc = 0x4D7334u;
label_4d7334:
    // 0x4d7334: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d7338:
    // 0x4d7338: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d733c:
    // 0x4d733c: 0x24632938  addiu       $v1, $v1, 0x2938
    ctx->pc = 0x4d733cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10552));
label_4d7340:
    // 0x4d7340: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d7340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d7344:
    // 0x4d7344: 0xac401d98  sw          $zero, 0x1D98($v0)
    ctx->pc = 0x4d7344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7576), GPR_U32(ctx, 0));
label_4d7348:
    // 0x4d7348: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d734c:
    if (ctx->pc == 0x4D734Cu) {
        ctx->pc = 0x4D734Cu;
            // 0x4d734c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D7350u;
        goto label_4d7350;
    }
    ctx->pc = 0x4D7348u;
    {
        const bool branch_taken_0x4d7348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7348) {
            ctx->pc = 0x4D734Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7348u;
            // 0x4d734c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D73A4u;
            goto label_4d73a4;
        }
    }
    ctx->pc = 0x4D7350u;
label_4d7350:
    // 0x4d7350: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d7350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d7354:
    // 0x4d7354: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d7358:
    // 0x4d7358: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d7358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d735c:
    // 0x4d735c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d7360:
    // 0x4d7360: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d7364:
    if (ctx->pc == 0x4D7364u) {
        ctx->pc = 0x4D7364u;
            // 0x4d7364: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D7368u;
        goto label_4d7368;
    }
    ctx->pc = 0x4D7360u;
    {
        const bool branch_taken_0x4d7360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7360) {
            ctx->pc = 0x4D7364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7360u;
            // 0x4d7364: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D737Cu;
            goto label_4d737c;
        }
    }
    ctx->pc = 0x4D7368u;
label_4d7368:
    // 0x4d7368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d736c:
    // 0x4d736c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d7370:
    // 0x4d7370: 0x320f809  jalr        $t9
label_4d7374:
    if (ctx->pc == 0x4D7374u) {
        ctx->pc = 0x4D7374u;
            // 0x4d7374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D7378u;
        goto label_4d7378;
    }
    ctx->pc = 0x4D7370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7378u);
        ctx->pc = 0x4D7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7370u;
            // 0x4d7374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7378u; }
            if (ctx->pc != 0x4D7378u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7378u;
label_4d7378:
    // 0x4d7378: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d7378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d737c:
    // 0x4d737c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d7380:
    if (ctx->pc == 0x4D7380u) {
        ctx->pc = 0x4D7380u;
            // 0x4d7380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7384u;
        goto label_4d7384;
    }
    ctx->pc = 0x4D737Cu;
    {
        const bool branch_taken_0x4d737c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d737c) {
            ctx->pc = 0x4D7380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D737Cu;
            // 0x4d7380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7398u;
            goto label_4d7398;
        }
    }
    ctx->pc = 0x4D7384u;
label_4d7384:
    // 0x4d7384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d7388:
    // 0x4d7388: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d7388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d738c:
    // 0x4d738c: 0x320f809  jalr        $t9
label_4d7390:
    if (ctx->pc == 0x4D7390u) {
        ctx->pc = 0x4D7390u;
            // 0x4d7390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D7394u;
        goto label_4d7394;
    }
    ctx->pc = 0x4D738Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7394u);
        ctx->pc = 0x4D7390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D738Cu;
            // 0x4d7390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7394u; }
            if (ctx->pc != 0x4D7394u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7394u;
label_4d7394:
    // 0x4d7394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d7398:
    // 0x4d7398: 0xc075bf8  jal         func_1D6FE0
label_4d739c:
    if (ctx->pc == 0x4D739Cu) {
        ctx->pc = 0x4D739Cu;
            // 0x4d739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D73A0u;
        goto label_4d73a0;
    }
    ctx->pc = 0x4D7398u;
    SET_GPR_U32(ctx, 31, 0x4D73A0u);
    ctx->pc = 0x4D739Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7398u;
            // 0x4d739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D73A0u; }
        if (ctx->pc != 0x4D73A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D73A0u; }
        if (ctx->pc != 0x4D73A0u) { return; }
    }
    ctx->pc = 0x4D73A0u;
label_4d73a0:
    // 0x4d73a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d73a4:
    // 0x4d73a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d73a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d73a8:
    // 0x4d73a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d73ac:
    if (ctx->pc == 0x4D73ACu) {
        ctx->pc = 0x4D73ACu;
            // 0x4d73ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D73B0u;
        goto label_4d73b0;
    }
    ctx->pc = 0x4D73A8u;
    {
        const bool branch_taken_0x4d73a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d73a8) {
            ctx->pc = 0x4D73ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D73A8u;
            // 0x4d73ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D73BCu;
            goto label_4d73bc;
        }
    }
    ctx->pc = 0x4D73B0u;
label_4d73b0:
    // 0x4d73b0: 0xc0400a8  jal         func_1002A0
label_4d73b4:
    if (ctx->pc == 0x4D73B4u) {
        ctx->pc = 0x4D73B4u;
            // 0x4d73b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D73B8u;
        goto label_4d73b8;
    }
    ctx->pc = 0x4D73B0u;
    SET_GPR_U32(ctx, 31, 0x4D73B8u);
    ctx->pc = 0x4D73B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D73B0u;
            // 0x4d73b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D73B8u; }
        if (ctx->pc != 0x4D73B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D73B8u; }
        if (ctx->pc != 0x4D73B8u) { return; }
    }
    ctx->pc = 0x4D73B8u;
label_4d73b8:
    // 0x4d73b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d73b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d73bc:
    // 0x4d73bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d73bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d73c0:
    // 0x4d73c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d73c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d73c4:
    // 0x4d73c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d73c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d73c8:
    // 0x4d73c8: 0x3e00008  jr          $ra
label_4d73cc:
    if (ctx->pc == 0x4D73CCu) {
        ctx->pc = 0x4D73CCu;
            // 0x4d73cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D73D0u;
        goto label_4d73d0;
    }
    ctx->pc = 0x4D73C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D73CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D73C8u;
            // 0x4d73cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D73D0u;
label_4d73d0:
    // 0x4d73d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d73d4:
    // 0x4d73d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d73d8:
    // 0x4d73d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d73dc:
    // 0x4d73dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d73dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d73e0:
    // 0x4d73e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d73e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d73e4:
    // 0x4d73e4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d73e8:
    if (ctx->pc == 0x4D73E8u) {
        ctx->pc = 0x4D73E8u;
            // 0x4d73e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D73ECu;
        goto label_4d73ec;
    }
    ctx->pc = 0x4D73E4u;
    {
        const bool branch_taken_0x4d73e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D73E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D73E4u;
            // 0x4d73e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d73e4) {
            ctx->pc = 0x4D7438u;
            goto label_4d7438;
        }
    }
    ctx->pc = 0x4D73ECu;
label_4d73ec:
    // 0x4d73ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d73f0:
    // 0x4d73f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d73f4:
    // 0x4d73f4: 0x246329f0  addiu       $v1, $v1, 0x29F0
    ctx->pc = 0x4d73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10736));
label_4d73f8:
    // 0x4d73f8: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x4d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_4d73fc:
    // 0x4d73fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d7400:
    // 0x4d7400: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d7400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d7404:
    // 0x4d7404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d7408:
    // 0x4d7408: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d7408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d740c:
    // 0x4d740c: 0x320f809  jalr        $t9
label_4d7410:
    if (ctx->pc == 0x4D7410u) {
        ctx->pc = 0x4D7414u;
        goto label_4d7414;
    }
    ctx->pc = 0x4D740Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7414u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7414u; }
            if (ctx->pc != 0x4D7414u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7414u;
label_4d7414:
    // 0x4d7414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d7414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d7418:
    // 0x4d7418: 0xc12e684  jal         func_4B9A10
label_4d741c:
    if (ctx->pc == 0x4D741Cu) {
        ctx->pc = 0x4D741Cu;
            // 0x4d741c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7420u;
        goto label_4d7420;
    }
    ctx->pc = 0x4D7418u;
    SET_GPR_U32(ctx, 31, 0x4D7420u);
    ctx->pc = 0x4D741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7418u;
            // 0x4d741c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7420u; }
        if (ctx->pc != 0x4D7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7420u; }
        if (ctx->pc != 0x4D7420u) { return; }
    }
    ctx->pc = 0x4D7420u;
label_4d7420:
    // 0x4d7420: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d7420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d7424:
    // 0x4d7424: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d7424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d7428:
    // 0x4d7428: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d742c:
    if (ctx->pc == 0x4D742Cu) {
        ctx->pc = 0x4D742Cu;
            // 0x4d742c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7430u;
        goto label_4d7430;
    }
    ctx->pc = 0x4D7428u;
    {
        const bool branch_taken_0x4d7428 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d7428) {
            ctx->pc = 0x4D742Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7428u;
            // 0x4d742c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D743Cu;
            goto label_4d743c;
        }
    }
    ctx->pc = 0x4D7430u;
label_4d7430:
    // 0x4d7430: 0xc0400a8  jal         func_1002A0
label_4d7434:
    if (ctx->pc == 0x4D7434u) {
        ctx->pc = 0x4D7434u;
            // 0x4d7434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7438u;
        goto label_4d7438;
    }
    ctx->pc = 0x4D7430u;
    SET_GPR_U32(ctx, 31, 0x4D7438u);
    ctx->pc = 0x4D7434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7430u;
            // 0x4d7434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7438u; }
        if (ctx->pc != 0x4D7438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7438u; }
        if (ctx->pc != 0x4D7438u) { return; }
    }
    ctx->pc = 0x4D7438u;
label_4d7438:
    // 0x4d7438: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d7438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d743c:
    // 0x4d743c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d743cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d7440:
    // 0x4d7440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d7440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d7444:
    // 0x4d7444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7448:
    // 0x4d7448: 0x3e00008  jr          $ra
label_4d744c:
    if (ctx->pc == 0x4D744Cu) {
        ctx->pc = 0x4D744Cu;
            // 0x4d744c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D7450u;
        goto label_4d7450;
    }
    ctx->pc = 0x4D7448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7448u;
            // 0x4d744c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7450u;
label_4d7450:
    // 0x4d7450: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x4d7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_4d7454:
    // 0x4d7454: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d7458:
    // 0x4d7458: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4d7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4d745c:
    // 0x4d745c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4d745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4d7460:
    // 0x4d7460: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4d7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4d7464:
    // 0x4d7464: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d7464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4d7468:
    // 0x4d7468: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d7468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4d746c:
    // 0x4d746c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4d7470:
    // 0x4d7470: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4d7474:
    // 0x4d7474: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d7474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4d7478:
    // 0x4d7478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d7478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d747c:
    // 0x4d747c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d7480:
    // 0x4d7480: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d7480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d7484:
    // 0x4d7484: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d7484u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d7488:
    // 0x4d7488: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4d748c:
    if (ctx->pc == 0x4D748Cu) {
        ctx->pc = 0x4D748Cu;
            // 0x4d748c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7490u;
        goto label_4d7490;
    }
    ctx->pc = 0x4D7488u;
    {
        const bool branch_taken_0x4d7488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7488u;
            // 0x4d748c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7488) {
            ctx->pc = 0x4D74D8u;
            goto label_4d74d8;
        }
    }
    ctx->pc = 0x4D7490u;
label_4d7490:
    // 0x4d7490: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d7490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d7494:
    // 0x4d7494: 0x10a300c8  beq         $a1, $v1, . + 4 + (0xC8 << 2)
label_4d7498:
    if (ctx->pc == 0x4D7498u) {
        ctx->pc = 0x4D749Cu;
        goto label_4d749c;
    }
    ctx->pc = 0x4D7494u;
    {
        const bool branch_taken_0x4d7494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d7494) {
            ctx->pc = 0x4D77B8u;
            goto label_4d77b8;
        }
    }
    ctx->pc = 0x4D749Cu;
label_4d749c:
    // 0x4d749c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d74a0:
    // 0x4d74a0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d74a4:
    if (ctx->pc == 0x4D74A4u) {
        ctx->pc = 0x4D74A8u;
        goto label_4d74a8;
    }
    ctx->pc = 0x4D74A0u;
    {
        const bool branch_taken_0x4d74a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d74a0) {
            ctx->pc = 0x4D74B0u;
            goto label_4d74b0;
        }
    }
    ctx->pc = 0x4D74A8u;
label_4d74a8:
    // 0x4d74a8: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_4d74ac:
    if (ctx->pc == 0x4D74ACu) {
        ctx->pc = 0x4D74B0u;
        goto label_4d74b0;
    }
    ctx->pc = 0x4D74A8u;
    {
        const bool branch_taken_0x4d74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d74a8) {
            ctx->pc = 0x4D77B8u;
            goto label_4d77b8;
        }
    }
    ctx->pc = 0x4D74B0u;
label_4d74b0:
    // 0x4d74b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d74b4:
    // 0x4d74b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d74b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d74b8:
    // 0x4d74b8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d74bc:
    // 0x4d74bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d74bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d74c0:
    // 0x4d74c0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d74c4:
    // 0x4d74c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d74c8:
    // 0x4d74c8: 0x320f809  jalr        $t9
label_4d74cc:
    if (ctx->pc == 0x4D74CCu) {
        ctx->pc = 0x4D74CCu;
            // 0x4d74cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D74D0u;
        goto label_4d74d0;
    }
    ctx->pc = 0x4D74C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D74D0u);
        ctx->pc = 0x4D74CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D74C8u;
            // 0x4d74cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D74D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D74D0u; }
            if (ctx->pc != 0x4D74D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D74D0u;
label_4d74d0:
    // 0x4d74d0: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_4d74d4:
    if (ctx->pc == 0x4D74D4u) {
        ctx->pc = 0x4D74D8u;
        goto label_4d74d8;
    }
    ctx->pc = 0x4D74D0u;
    {
        const bool branch_taken_0x4d74d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d74d0) {
            ctx->pc = 0x4D77B8u;
            goto label_4d77b8;
        }
    }
    ctx->pc = 0x4D74D8u;
label_4d74d8:
    // 0x4d74d8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x4d74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_4d74dc:
    // 0x4d74dc: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_4d74e0:
    if (ctx->pc == 0x4D74E0u) {
        ctx->pc = 0x4D74E0u;
            // 0x4d74e0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x4D74E4u;
        goto label_4d74e4;
    }
    ctx->pc = 0x4D74DCu;
    {
        const bool branch_taken_0x4d74dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D74E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D74DCu;
            // 0x4d74e0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74dc) {
            ctx->pc = 0x4D77B8u;
            goto label_4d77b8;
        }
    }
    ctx->pc = 0x4D74E4u;
label_4d74e4:
    // 0x4d74e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d74e8:
    // 0x4d74e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d74ec:
    // 0x4d74ec: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4d74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d74f0:
    // 0x4d74f0: 0x27d00084  addiu       $s0, $fp, 0x84
    ctx->pc = 0x4d74f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_4d74f4:
    // 0x4d74f4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d74f8:
    // 0x4d74f8: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x4d74f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_4d74fc:
    // 0x4d74fc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4d74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4d7500:
    // 0x4d7500: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4d7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4d7504:
    // 0x4d7504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d7504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d7508:
    // 0x4d7508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d750c:
    // 0x4d750c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d7510:
    // 0x4d7510: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4d7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d7514:
    // 0x4d7514: 0xc04e738  jal         func_139CE0
label_4d7518:
    if (ctx->pc == 0x4D7518u) {
        ctx->pc = 0x4D7518u;
            // 0x4d7518: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x4D751Cu;
        goto label_4d751c;
    }
    ctx->pc = 0x4D7514u;
    SET_GPR_U32(ctx, 31, 0x4D751Cu);
    ctx->pc = 0x4D7518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7514u;
            // 0x4d7518: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D751Cu; }
        if (ctx->pc != 0x4D751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D751Cu; }
        if (ctx->pc != 0x4D751Cu) { return; }
    }
    ctx->pc = 0x4D751Cu;
label_4d751c:
    // 0x4d751c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d7520:
    // 0x4d7520: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4d7520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7524:
    // 0x4d7524: 0xc4547e58  lwc1        $f20, 0x7E58($v0)
    ctx->pc = 0x4d7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d7528:
    // 0x4d7528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d7528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d752c:
    // 0x4d752c: 0x27a301ac  addiu       $v1, $sp, 0x1AC
    ctx->pc = 0x4d752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_4d7530:
    // 0x4d7530: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x4d7530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4d7534:
    // 0x4d7534: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x4d7534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_4d7538:
    // 0x4d7538: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x4d7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_4d753c:
    // 0x4d753c: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x4d753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_4d7540:
    // 0x4d7540: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d7544:
    // 0x4d7544: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4d7544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d7548:
    // 0x4d7548: 0xc0d639c  jal         func_358E70
label_4d754c:
    if (ctx->pc == 0x4D754Cu) {
        ctx->pc = 0x4D754Cu;
            // 0x4d754c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x4D7550u;
        goto label_4d7550;
    }
    ctx->pc = 0x4D7548u;
    SET_GPR_U32(ctx, 31, 0x4D7550u);
    ctx->pc = 0x4D754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7548u;
            // 0x4d754c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7550u; }
        if (ctx->pc != 0x4D7550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7550u; }
        if (ctx->pc != 0x4D7550u) { return; }
    }
    ctx->pc = 0x4D7550u;
label_4d7550:
    // 0x4d7550: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_4d7554:
    if (ctx->pc == 0x4D7554u) {
        ctx->pc = 0x4D7558u;
        goto label_4d7558;
    }
    ctx->pc = 0x4D7550u;
    {
        const bool branch_taken_0x4d7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7550) {
            ctx->pc = 0x4D77A0u;
            goto label_4d77a0;
        }
    }
    ctx->pc = 0x4D7558u;
label_4d7558:
    // 0x4d7558: 0xc0d1c14  jal         func_347050
label_4d755c:
    if (ctx->pc == 0x4D755Cu) {
        ctx->pc = 0x4D755Cu;
            // 0x4d755c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7560u;
        goto label_4d7560;
    }
    ctx->pc = 0x4D7558u;
    SET_GPR_U32(ctx, 31, 0x4D7560u);
    ctx->pc = 0x4D755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7558u;
            // 0x4d755c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7560u; }
        if (ctx->pc != 0x4D7560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7560u; }
        if (ctx->pc != 0x4D7560u) { return; }
    }
    ctx->pc = 0x4D7560u;
label_4d7560:
    // 0x4d7560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d7560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d7564:
    // 0x4d7564: 0xc04f278  jal         func_13C9E0
label_4d7568:
    if (ctx->pc == 0x4D7568u) {
        ctx->pc = 0x4D7568u;
            // 0x4d7568: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4D756Cu;
        goto label_4d756c;
    }
    ctx->pc = 0x4D7564u;
    SET_GPR_U32(ctx, 31, 0x4D756Cu);
    ctx->pc = 0x4D7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7564u;
            // 0x4d7568: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D756Cu; }
        if (ctx->pc != 0x4D756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D756Cu; }
        if (ctx->pc != 0x4D756Cu) { return; }
    }
    ctx->pc = 0x4D756Cu;
label_4d756c:
    // 0x4d756c: 0xc0d1c10  jal         func_347040
label_4d7570:
    if (ctx->pc == 0x4D7570u) {
        ctx->pc = 0x4D7570u;
            // 0x4d7570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7574u;
        goto label_4d7574;
    }
    ctx->pc = 0x4D756Cu;
    SET_GPR_U32(ctx, 31, 0x4D7574u);
    ctx->pc = 0x4D7570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D756Cu;
            // 0x4d7570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7574u; }
        if (ctx->pc != 0x4D7574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7574u; }
        if (ctx->pc != 0x4D7574u) { return; }
    }
    ctx->pc = 0x4D7574u;
label_4d7574:
    // 0x4d7574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d7574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d7578:
    // 0x4d7578: 0xc04ce80  jal         func_133A00
label_4d757c:
    if (ctx->pc == 0x4D757Cu) {
        ctx->pc = 0x4D757Cu;
            // 0x4d757c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4D7580u;
        goto label_4d7580;
    }
    ctx->pc = 0x4D7578u;
    SET_GPR_U32(ctx, 31, 0x4D7580u);
    ctx->pc = 0x4D757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7578u;
            // 0x4d757c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7580u; }
        if (ctx->pc != 0x4D7580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7580u; }
        if (ctx->pc != 0x4D7580u) { return; }
    }
    ctx->pc = 0x4D7580u;
label_4d7580:
    // 0x4d7580: 0xc0d4108  jal         func_350420
label_4d7584:
    if (ctx->pc == 0x4D7584u) {
        ctx->pc = 0x4D7588u;
        goto label_4d7588;
    }
    ctx->pc = 0x4D7580u;
    SET_GPR_U32(ctx, 31, 0x4D7588u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7588u; }
        if (ctx->pc != 0x4D7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7588u; }
        if (ctx->pc != 0x4D7588u) { return; }
    }
    ctx->pc = 0x4D7588u;
label_4d7588:
    // 0x4d7588: 0xc0b36b4  jal         func_2CDAD0
label_4d758c:
    if (ctx->pc == 0x4D758Cu) {
        ctx->pc = 0x4D758Cu;
            // 0x4d758c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7590u;
        goto label_4d7590;
    }
    ctx->pc = 0x4D7588u;
    SET_GPR_U32(ctx, 31, 0x4D7590u);
    ctx->pc = 0x4D758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7588u;
            // 0x4d758c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7590u; }
        if (ctx->pc != 0x4D7590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7590u; }
        if (ctx->pc != 0x4D7590u) { return; }
    }
    ctx->pc = 0x4D7590u;
label_4d7590:
    // 0x4d7590: 0xc0b9c64  jal         func_2E7190
label_4d7594:
    if (ctx->pc == 0x4D7594u) {
        ctx->pc = 0x4D7594u;
            // 0x4d7594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7598u;
        goto label_4d7598;
    }
    ctx->pc = 0x4D7590u;
    SET_GPR_U32(ctx, 31, 0x4D7598u);
    ctx->pc = 0x4D7594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7590u;
            // 0x4d7594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7598u; }
        if (ctx->pc != 0x4D7598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7598u; }
        if (ctx->pc != 0x4D7598u) { return; }
    }
    ctx->pc = 0x4D7598u;
label_4d7598:
    // 0x4d7598: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4d7598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d759c:
    // 0x4d759c: 0xc0d4104  jal         func_350410
label_4d75a0:
    if (ctx->pc == 0x4D75A0u) {
        ctx->pc = 0x4D75A0u;
            // 0x4d75a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D75A4u;
        goto label_4d75a4;
    }
    ctx->pc = 0x4D759Cu;
    SET_GPR_U32(ctx, 31, 0x4D75A4u);
    ctx->pc = 0x4D75A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D759Cu;
            // 0x4d75a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75A4u; }
        if (ctx->pc != 0x4D75A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75A4u; }
        if (ctx->pc != 0x4D75A4u) { return; }
    }
    ctx->pc = 0x4D75A4u;
label_4d75a4:
    // 0x4d75a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4d75a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d75a8:
    // 0x4d75a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d75a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d75ac:
    // 0x4d75ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4d75acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4d75b0:
    // 0x4d75b0: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x4d75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4d75b4:
    // 0x4d75b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d75b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d75b8:
    // 0x4d75b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d75b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d75bc:
    // 0x4d75bc: 0xc0d40ac  jal         func_3502B0
label_4d75c0:
    if (ctx->pc == 0x4D75C0u) {
        ctx->pc = 0x4D75C0u;
            // 0x4d75c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4D75C4u;
        goto label_4d75c4;
    }
    ctx->pc = 0x4D75BCu;
    SET_GPR_U32(ctx, 31, 0x4D75C4u);
    ctx->pc = 0x4D75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D75BCu;
            // 0x4d75c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75C4u; }
        if (ctx->pc != 0x4D75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75C4u; }
        if (ctx->pc != 0x4D75C4u) { return; }
    }
    ctx->pc = 0x4D75C4u;
label_4d75c4:
    // 0x4d75c4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d75c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d75c8:
    // 0x4d75c8: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_4d75cc:
    if (ctx->pc == 0x4D75CCu) {
        ctx->pc = 0x4D75CCu;
            // 0x4d75cc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D75D0u;
        goto label_4d75d0;
    }
    ctx->pc = 0x4D75C8u;
    {
        const bool branch_taken_0x4d75c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D75C8u;
            // 0x4d75cc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d75c8) {
            ctx->pc = 0x4D77A0u;
            goto label_4d77a0;
        }
    }
    ctx->pc = 0x4D75D0u;
label_4d75d0:
    // 0x4d75d0: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x4d75d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d75d4:
    // 0x4d75d4: 0xc135e24  jal         func_4D7890
label_4d75d8:
    if (ctx->pc == 0x4D75D8u) {
        ctx->pc = 0x4D75D8u;
            // 0x4d75d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D75DCu;
        goto label_4d75dc;
    }
    ctx->pc = 0x4D75D4u;
    SET_GPR_U32(ctx, 31, 0x4D75DCu);
    ctx->pc = 0x4D75D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D75D4u;
            // 0x4d75d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7890u;
    if (runtime->hasFunction(0x4D7890u)) {
        auto targetFn = runtime->lookupFunction(0x4D7890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75DCu; }
        if (ctx->pc != 0x4D75DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7890_0x4d7890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D75DCu; }
        if (ctx->pc != 0x4D75DCu) { return; }
    }
    ctx->pc = 0x4D75DCu;
label_4d75dc:
    // 0x4d75dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d75e0:
    // 0x4d75e0: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_4d75e4:
    if (ctx->pc == 0x4D75E4u) {
        ctx->pc = 0x4D75E8u;
        goto label_4d75e8;
    }
    ctx->pc = 0x4D75E0u;
    {
        const bool branch_taken_0x4d75e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d75e0) {
            ctx->pc = 0x4D7630u;
            goto label_4d7630;
        }
    }
    ctx->pc = 0x4D75E8u;
label_4d75e8:
    // 0x4d75e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d75ec:
    // 0x4d75ec: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_4d75f0:
    if (ctx->pc == 0x4D75F0u) {
        ctx->pc = 0x4D75F4u;
        goto label_4d75f4;
    }
    ctx->pc = 0x4D75ECu;
    {
        const bool branch_taken_0x4d75ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d75ec) {
            ctx->pc = 0x4D7620u;
            goto label_4d7620;
        }
    }
    ctx->pc = 0x4D75F4u;
label_4d75f4:
    // 0x4d75f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d75f8:
    // 0x4d75f8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_4d75fc:
    if (ctx->pc == 0x4D75FCu) {
        ctx->pc = 0x4D7600u;
        goto label_4d7600;
    }
    ctx->pc = 0x4D75F8u;
    {
        const bool branch_taken_0x4d75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d75f8) {
            ctx->pc = 0x4D7620u;
            goto label_4d7620;
        }
    }
    ctx->pc = 0x4D7600u;
label_4d7600:
    // 0x4d7600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4d7604:
    if (ctx->pc == 0x4D7604u) {
        ctx->pc = 0x4D7608u;
        goto label_4d7608;
    }
    ctx->pc = 0x4D7600u;
    {
        const bool branch_taken_0x4d7600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7600) {
            ctx->pc = 0x4D7610u;
            goto label_4d7610;
        }
    }
    ctx->pc = 0x4D7608u;
label_4d7608:
    // 0x4d7608: 0x1000000b  b           . + 4 + (0xB << 2)
label_4d760c:
    if (ctx->pc == 0x4D760Cu) {
        ctx->pc = 0x4D7610u;
        goto label_4d7610;
    }
    ctx->pc = 0x4D7608u;
    {
        const bool branch_taken_0x4d7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7608) {
            ctx->pc = 0x4D7638u;
            goto label_4d7638;
        }
    }
    ctx->pc = 0x4D7610u;
label_4d7610:
    // 0x4d7610: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4d7610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d7614:
    // 0x4d7614: 0x10000008  b           . + 4 + (0x8 << 2)
label_4d7618:
    if (ctx->pc == 0x4D7618u) {
        ctx->pc = 0x4D7618u;
            // 0x4d7618: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4D761Cu;
        goto label_4d761c;
    }
    ctx->pc = 0x4D7614u;
    {
        const bool branch_taken_0x4d7614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7614u;
            // 0x4d7618: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7614) {
            ctx->pc = 0x4D7638u;
            goto label_4d7638;
        }
    }
    ctx->pc = 0x4D761Cu;
label_4d761c:
    // 0x4d761c: 0x0  nop
    ctx->pc = 0x4d761cu;
    // NOP
label_4d7620:
    // 0x4d7620: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x4d7620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4d7624:
    // 0x4d7624: 0x10000004  b           . + 4 + (0x4 << 2)
label_4d7628:
    if (ctx->pc == 0x4D7628u) {
        ctx->pc = 0x4D7628u;
            // 0x4d7628: 0x2413001b  addiu       $s3, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x4D762Cu;
        goto label_4d762c;
    }
    ctx->pc = 0x4D7624u;
    {
        const bool branch_taken_0x4d7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7624u;
            // 0x4d7628: 0x2413001b  addiu       $s3, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7624) {
            ctx->pc = 0x4D7638u;
            goto label_4d7638;
        }
    }
    ctx->pc = 0x4D762Cu;
label_4d762c:
    // 0x4d762c: 0x0  nop
    ctx->pc = 0x4d762cu;
    // NOP
label_4d7630:
    // 0x4d7630: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x4d7630u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4d7634:
    // 0x4d7634: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x4d7634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4d7638:
    // 0x4d7638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4d7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d763c:
    // 0x4d763c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4d763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4d7640:
    // 0x4d7640: 0xc135dfc  jal         func_4D77F0
label_4d7644:
    if (ctx->pc == 0x4D7644u) {
        ctx->pc = 0x4D7644u;
            // 0x4d7644: 0x27a601a8  addiu       $a2, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->pc = 0x4D7648u;
        goto label_4d7648;
    }
    ctx->pc = 0x4D7640u;
    SET_GPR_U32(ctx, 31, 0x4D7648u);
    ctx->pc = 0x4D7644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7640u;
            // 0x4d7644: 0x27a601a8  addiu       $a2, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D77F0u;
    if (runtime->hasFunction(0x4D77F0u)) {
        auto targetFn = runtime->lookupFunction(0x4D77F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7648u; }
        if (ctx->pc != 0x4D7648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D77F0_0x4d77f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7648u; }
        if (ctx->pc != 0x4D7648u) { return; }
    }
    ctx->pc = 0x4D7648u;
label_4d7648:
    // 0x4d7648: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x4d7648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4d764c:
    // 0x4d764c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4d764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4d7650:
    // 0x4d7650: 0xc04cd60  jal         func_133580
label_4d7654:
    if (ctx->pc == 0x4D7654u) {
        ctx->pc = 0x4D7654u;
            // 0x4d7654: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4D7658u;
        goto label_4d7658;
    }
    ctx->pc = 0x4D7650u;
    SET_GPR_U32(ctx, 31, 0x4D7658u);
    ctx->pc = 0x4D7654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7650u;
            // 0x4d7654: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7658u; }
        if (ctx->pc != 0x4D7658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7658u; }
        if (ctx->pc != 0x4D7658u) { return; }
    }
    ctx->pc = 0x4D7658u;
label_4d7658:
    // 0x4d7658: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d765c:
    // 0x4d765c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x4d765cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d7660:
    // 0x4d7660: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d7660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d7664:
    // 0x4d7664: 0xc04e4a4  jal         func_139290
label_4d7668:
    if (ctx->pc == 0x4D7668u) {
        ctx->pc = 0x4D7668u;
            // 0x4d7668: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D766Cu;
        goto label_4d766c;
    }
    ctx->pc = 0x4D7664u;
    SET_GPR_U32(ctx, 31, 0x4D766Cu);
    ctx->pc = 0x4D7668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7664u;
            // 0x4d7668: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D766Cu; }
        if (ctx->pc != 0x4D766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D766Cu; }
        if (ctx->pc != 0x4D766Cu) { return; }
    }
    ctx->pc = 0x4D766Cu;
label_4d766c:
    // 0x4d766c: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x4d766cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4d7670:
    // 0x4d7670: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_4d7674:
    if (ctx->pc == 0x4D7674u) {
        ctx->pc = 0x4D7674u;
            // 0x4d7674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7678u;
        goto label_4d7678;
    }
    ctx->pc = 0x4D7670u;
    {
        const bool branch_taken_0x4d7670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7670u;
            // 0x4d7674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7670) {
            ctx->pc = 0x4D7738u;
            goto label_4d7738;
        }
    }
    ctx->pc = 0x4D7678u;
label_4d7678:
    // 0x4d7678: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x4d7678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_4d767c:
    // 0x4d767c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x4d767cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4d7680:
    // 0x4d7680: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_4d7684:
    if (ctx->pc == 0x4D7684u) {
        ctx->pc = 0x4D7684u;
            // 0x4d7684: 0x2662fff8  addiu       $v0, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->pc = 0x4D7688u;
        goto label_4d7688;
    }
    ctx->pc = 0x4D7680u;
    {
        const bool branch_taken_0x4d7680 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7680u;
            // 0x4d7684: 0x2662fff8  addiu       $v0, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7680) {
            ctx->pc = 0x4D7708u;
            goto label_4d7708;
        }
    }
    ctx->pc = 0x4D7688u;
label_4d7688:
    // 0x4d7688: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x4d7688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4d768c:
    // 0x4d768c: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_4d7690:
    if (ctx->pc == 0x4D7690u) {
        ctx->pc = 0x4D7694u;
        goto label_4d7694;
    }
    ctx->pc = 0x4D768Cu;
    {
        const bool branch_taken_0x4d768c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d768c) {
            ctx->pc = 0x4D7708u;
            goto label_4d7708;
        }
    }
    ctx->pc = 0x4D7694u;
label_4d7694:
    // 0x4d7694: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4d7694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4d7698:
    // 0x4d7698: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d7698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d769c:
    // 0x4d769c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4d769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4d76a0:
    // 0x4d76a0: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x4d76a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d76a4:
    // 0x4d76a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76a8:
    // 0x4d76a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4d76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_4d76ac:
    // 0x4d76ac: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76b0:
    // 0x4d76b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76b4:
    // 0x4d76b4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x4d76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_4d76b8:
    // 0x4d76b8: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76bc:
    // 0x4d76bc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76c0:
    // 0x4d76c0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4d76c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_4d76c4:
    // 0x4d76c4: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76c8:
    // 0x4d76c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76cc:
    // 0x4d76cc: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x4d76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_4d76d0:
    // 0x4d76d0: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76d4:
    // 0x4d76d4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76d8:
    // 0x4d76d8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x4d76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_4d76dc:
    // 0x4d76dc: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76e0:
    // 0x4d76e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76e4:
    // 0x4d76e4: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x4d76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_4d76e8:
    // 0x4d76e8: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76ec:
    // 0x4d76ec: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76f0:
    // 0x4d76f0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x4d76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_4d76f4:
    // 0x4d76f4: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d76f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d76f8:
    // 0x4d76f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4d76f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4d76fc:
    // 0x4d76fc: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x4d76fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_4d7700:
    // 0x4d7700: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
label_4d7704:
    if (ctx->pc == 0x4D7704u) {
        ctx->pc = 0x4D7704u;
            // 0x4d7704: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x4D7708u;
        goto label_4d7708;
    }
    ctx->pc = 0x4D7700u;
    {
        const bool branch_taken_0x4d7700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7700u;
            // 0x4d7704: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7700) {
            ctx->pc = 0x4D7698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d7698;
        }
    }
    ctx->pc = 0x4D7708u;
label_4d7708:
    // 0x4d7708: 0x93082b  sltu        $at, $a0, $s3
    ctx->pc = 0x4d7708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4d770c:
    // 0x4d770c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_4d7710:
    if (ctx->pc == 0x4D7710u) {
        ctx->pc = 0x4D7714u;
        goto label_4d7714;
    }
    ctx->pc = 0x4D770Cu;
    {
        const bool branch_taken_0x4d770c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d770c) {
            ctx->pc = 0x4D7738u;
            goto label_4d7738;
        }
    }
    ctx->pc = 0x4D7714u;
label_4d7714:
    // 0x4d7714: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x4d7714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4d7718:
    // 0x4d7718: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x4d7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d771c:
    // 0x4d771c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4d7720:
    // 0x4d7720: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x4d7720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4d7724:
    // 0x4d7724: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d7724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4d7728:
    // 0x4d7728: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4d7728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4d772c:
    // 0x4d772c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4d7730:
    if (ctx->pc == 0x4D7730u) {
        ctx->pc = 0x4D7730u;
            // 0x4d7730: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D7734u;
        goto label_4d7734;
    }
    ctx->pc = 0x4D772Cu;
    {
        const bool branch_taken_0x4d772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D772Cu;
            // 0x4d7730: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d772c) {
            ctx->pc = 0x4D7718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d7718;
        }
    }
    ctx->pc = 0x4D7734u;
label_4d7734:
    // 0x4d7734: 0x0  nop
    ctx->pc = 0x4d7734u;
    // NOP
label_4d7738:
    // 0x4d7738: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4d7738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d773c:
    // 0x4d773c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d773cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d7740:
    // 0x4d7740: 0x320f809  jalr        $t9
label_4d7744:
    if (ctx->pc == 0x4D7744u) {
        ctx->pc = 0x4D7744u;
            // 0x4d7744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7748u;
        goto label_4d7748;
    }
    ctx->pc = 0x4D7740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7748u);
        ctx->pc = 0x4D7744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7740u;
            // 0x4d7744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7748u; }
            if (ctx->pc != 0x4D7748u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7748u;
label_4d7748:
    // 0x4d7748: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x4d7748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4d774c:
    // 0x4d774c: 0xc64c00e4  lwc1        $f12, 0xE4($s2)
    ctx->pc = 0x4d774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d7750:
    // 0x4d7750: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d7750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d7754:
    // 0x4d7754: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x4d7754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d7758:
    // 0x4d7758: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4d7758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4d775c:
    // 0x4d775c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4d775cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d7760:
    // 0x4d7760: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d7760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d7764:
    // 0x4d7764: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x4d7764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4d7768:
    // 0x4d7768: 0xc04cff4  jal         func_133FD0
label_4d776c:
    if (ctx->pc == 0x4D776Cu) {
        ctx->pc = 0x4D776Cu;
            // 0x4d776c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4D7770u;
        goto label_4d7770;
    }
    ctx->pc = 0x4D7768u;
    SET_GPR_U32(ctx, 31, 0x4D7770u);
    ctx->pc = 0x4D776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7768u;
            // 0x4d776c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7770u; }
        if (ctx->pc != 0x4D7770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7770u; }
        if (ctx->pc != 0x4D7770u) { return; }
    }
    ctx->pc = 0x4D7770u;
label_4d7770:
    // 0x4d7770: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4d7770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4d7774:
    // 0x4d7774: 0xc64c00e0  lwc1        $f12, 0xE0($s2)
    ctx->pc = 0x4d7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d7778:
    // 0x4d7778: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4d7778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4d777c:
    // 0x4d777c: 0xc054bbc  jal         func_152EF0
label_4d7780:
    if (ctx->pc == 0x4D7780u) {
        ctx->pc = 0x4D7780u;
            // 0x4d7780: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7784u;
        goto label_4d7784;
    }
    ctx->pc = 0x4D777Cu;
    SET_GPR_U32(ctx, 31, 0x4D7784u);
    ctx->pc = 0x4D7780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D777Cu;
            // 0x4d7780: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7784u; }
        if (ctx->pc != 0x4D7784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7784u; }
        if (ctx->pc != 0x4D7784u) { return; }
    }
    ctx->pc = 0x4D7784u;
label_4d7784:
    // 0x4d7784: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4d7784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4d7788:
    // 0x4d7788: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d7788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d778c:
    // 0x4d778c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x4d778cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4d7790:
    // 0x4d7790: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x4d7790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4d7794:
    // 0x4d7794: 0xc054c2c  jal         func_1530B0
label_4d7798:
    if (ctx->pc == 0x4D7798u) {
        ctx->pc = 0x4D7798u;
            // 0x4d7798: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4D779Cu;
        goto label_4d779c;
    }
    ctx->pc = 0x4D7794u;
    SET_GPR_U32(ctx, 31, 0x4D779Cu);
    ctx->pc = 0x4D7798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7794u;
            // 0x4d7798: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D779Cu; }
        if (ctx->pc != 0x4D779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D779Cu; }
        if (ctx->pc != 0x4D779Cu) { return; }
    }
    ctx->pc = 0x4D779Cu;
label_4d779c:
    // 0x4d779c: 0x0  nop
    ctx->pc = 0x4d779cu;
    // NOP
label_4d77a0:
    // 0x4d77a0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x4d77a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4d77a4:
    // 0x4d77a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4d77a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4d77a8:
    // 0x4d77a8: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x4d77a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d77ac:
    // 0x4d77ac: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
label_4d77b0:
    if (ctx->pc == 0x4D77B0u) {
        ctx->pc = 0x4D77B0u;
            // 0x4d77b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D77B4u;
        goto label_4d77b4;
    }
    ctx->pc = 0x4D77ACu;
    {
        const bool branch_taken_0x4d77ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D77B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D77ACu;
            // 0x4d77b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d77ac) {
            ctx->pc = 0x4D752Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d752c;
        }
    }
    ctx->pc = 0x4D77B4u;
label_4d77b4:
    // 0x4d77b4: 0x0  nop
    ctx->pc = 0x4d77b4u;
    // NOP
label_4d77b8:
    // 0x4d77b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4d77b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d77bc:
    // 0x4d77bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4d77bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d77c0:
    // 0x4d77c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d77c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d77c4:
    // 0x4d77c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4d77c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4d77c8:
    // 0x4d77c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d77c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d77cc:
    // 0x4d77cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d77ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d77d0:
    // 0x4d77d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d77d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d77d4:
    // 0x4d77d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d77d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d77d8:
    // 0x4d77d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d77d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d77dc:
    // 0x4d77dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d77dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d77e0:
    // 0x4d77e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d77e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d77e4:
    // 0x4d77e4: 0x3e00008  jr          $ra
label_4d77e8:
    if (ctx->pc == 0x4D77E8u) {
        ctx->pc = 0x4D77E8u;
            // 0x4d77e8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x4D77ECu;
        goto label_4d77ec;
    }
    ctx->pc = 0x4D77E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D77E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D77E4u;
            // 0x4d77e8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D77ECu;
label_4d77ec:
    // 0x4d77ec: 0x0  nop
    ctx->pc = 0x4d77ecu;
    // NOP
}
