#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F70E0
// Address: 0x1f70e0 - 0x1f7630
void sub_001F70E0_0x1f70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F70E0_0x1f70e0");
#endif

    switch (ctx->pc) {
        case 0x1f70e0u: goto label_1f70e0;
        case 0x1f70e4u: goto label_1f70e4;
        case 0x1f70e8u: goto label_1f70e8;
        case 0x1f70ecu: goto label_1f70ec;
        case 0x1f70f0u: goto label_1f70f0;
        case 0x1f70f4u: goto label_1f70f4;
        case 0x1f70f8u: goto label_1f70f8;
        case 0x1f70fcu: goto label_1f70fc;
        case 0x1f7100u: goto label_1f7100;
        case 0x1f7104u: goto label_1f7104;
        case 0x1f7108u: goto label_1f7108;
        case 0x1f710cu: goto label_1f710c;
        case 0x1f7110u: goto label_1f7110;
        case 0x1f7114u: goto label_1f7114;
        case 0x1f7118u: goto label_1f7118;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f7120u: goto label_1f7120;
        case 0x1f7124u: goto label_1f7124;
        case 0x1f7128u: goto label_1f7128;
        case 0x1f712cu: goto label_1f712c;
        case 0x1f7130u: goto label_1f7130;
        case 0x1f7134u: goto label_1f7134;
        case 0x1f7138u: goto label_1f7138;
        case 0x1f713cu: goto label_1f713c;
        case 0x1f7140u: goto label_1f7140;
        case 0x1f7144u: goto label_1f7144;
        case 0x1f7148u: goto label_1f7148;
        case 0x1f714cu: goto label_1f714c;
        case 0x1f7150u: goto label_1f7150;
        case 0x1f7154u: goto label_1f7154;
        case 0x1f7158u: goto label_1f7158;
        case 0x1f715cu: goto label_1f715c;
        case 0x1f7160u: goto label_1f7160;
        case 0x1f7164u: goto label_1f7164;
        case 0x1f7168u: goto label_1f7168;
        case 0x1f716cu: goto label_1f716c;
        case 0x1f7170u: goto label_1f7170;
        case 0x1f7174u: goto label_1f7174;
        case 0x1f7178u: goto label_1f7178;
        case 0x1f717cu: goto label_1f717c;
        case 0x1f7180u: goto label_1f7180;
        case 0x1f7184u: goto label_1f7184;
        case 0x1f7188u: goto label_1f7188;
        case 0x1f718cu: goto label_1f718c;
        case 0x1f7190u: goto label_1f7190;
        case 0x1f7194u: goto label_1f7194;
        case 0x1f7198u: goto label_1f7198;
        case 0x1f719cu: goto label_1f719c;
        case 0x1f71a0u: goto label_1f71a0;
        case 0x1f71a4u: goto label_1f71a4;
        case 0x1f71a8u: goto label_1f71a8;
        case 0x1f71acu: goto label_1f71ac;
        case 0x1f71b0u: goto label_1f71b0;
        case 0x1f71b4u: goto label_1f71b4;
        case 0x1f71b8u: goto label_1f71b8;
        case 0x1f71bcu: goto label_1f71bc;
        case 0x1f71c0u: goto label_1f71c0;
        case 0x1f71c4u: goto label_1f71c4;
        case 0x1f71c8u: goto label_1f71c8;
        case 0x1f71ccu: goto label_1f71cc;
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71d4u: goto label_1f71d4;
        case 0x1f71d8u: goto label_1f71d8;
        case 0x1f71dcu: goto label_1f71dc;
        case 0x1f71e0u: goto label_1f71e0;
        case 0x1f71e4u: goto label_1f71e4;
        case 0x1f71e8u: goto label_1f71e8;
        case 0x1f71ecu: goto label_1f71ec;
        case 0x1f71f0u: goto label_1f71f0;
        case 0x1f71f4u: goto label_1f71f4;
        case 0x1f71f8u: goto label_1f71f8;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f7200u: goto label_1f7200;
        case 0x1f7204u: goto label_1f7204;
        case 0x1f7208u: goto label_1f7208;
        case 0x1f720cu: goto label_1f720c;
        case 0x1f7210u: goto label_1f7210;
        case 0x1f7214u: goto label_1f7214;
        case 0x1f7218u: goto label_1f7218;
        case 0x1f721cu: goto label_1f721c;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7224u: goto label_1f7224;
        case 0x1f7228u: goto label_1f7228;
        case 0x1f722cu: goto label_1f722c;
        case 0x1f7230u: goto label_1f7230;
        case 0x1f7234u: goto label_1f7234;
        case 0x1f7238u: goto label_1f7238;
        case 0x1f723cu: goto label_1f723c;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f7244u: goto label_1f7244;
        case 0x1f7248u: goto label_1f7248;
        case 0x1f724cu: goto label_1f724c;
        case 0x1f7250u: goto label_1f7250;
        case 0x1f7254u: goto label_1f7254;
        case 0x1f7258u: goto label_1f7258;
        case 0x1f725cu: goto label_1f725c;
        case 0x1f7260u: goto label_1f7260;
        case 0x1f7264u: goto label_1f7264;
        case 0x1f7268u: goto label_1f7268;
        case 0x1f726cu: goto label_1f726c;
        case 0x1f7270u: goto label_1f7270;
        case 0x1f7274u: goto label_1f7274;
        case 0x1f7278u: goto label_1f7278;
        case 0x1f727cu: goto label_1f727c;
        case 0x1f7280u: goto label_1f7280;
        case 0x1f7284u: goto label_1f7284;
        case 0x1f7288u: goto label_1f7288;
        case 0x1f728cu: goto label_1f728c;
        case 0x1f7290u: goto label_1f7290;
        case 0x1f7294u: goto label_1f7294;
        case 0x1f7298u: goto label_1f7298;
        case 0x1f729cu: goto label_1f729c;
        case 0x1f72a0u: goto label_1f72a0;
        case 0x1f72a4u: goto label_1f72a4;
        case 0x1f72a8u: goto label_1f72a8;
        case 0x1f72acu: goto label_1f72ac;
        case 0x1f72b0u: goto label_1f72b0;
        case 0x1f72b4u: goto label_1f72b4;
        case 0x1f72b8u: goto label_1f72b8;
        case 0x1f72bcu: goto label_1f72bc;
        case 0x1f72c0u: goto label_1f72c0;
        case 0x1f72c4u: goto label_1f72c4;
        case 0x1f72c8u: goto label_1f72c8;
        case 0x1f72ccu: goto label_1f72cc;
        case 0x1f72d0u: goto label_1f72d0;
        case 0x1f72d4u: goto label_1f72d4;
        case 0x1f72d8u: goto label_1f72d8;
        case 0x1f72dcu: goto label_1f72dc;
        case 0x1f72e0u: goto label_1f72e0;
        case 0x1f72e4u: goto label_1f72e4;
        case 0x1f72e8u: goto label_1f72e8;
        case 0x1f72ecu: goto label_1f72ec;
        case 0x1f72f0u: goto label_1f72f0;
        case 0x1f72f4u: goto label_1f72f4;
        case 0x1f72f8u: goto label_1f72f8;
        case 0x1f72fcu: goto label_1f72fc;
        case 0x1f7300u: goto label_1f7300;
        case 0x1f7304u: goto label_1f7304;
        case 0x1f7308u: goto label_1f7308;
        case 0x1f730cu: goto label_1f730c;
        case 0x1f7310u: goto label_1f7310;
        case 0x1f7314u: goto label_1f7314;
        case 0x1f7318u: goto label_1f7318;
        case 0x1f731cu: goto label_1f731c;
        case 0x1f7320u: goto label_1f7320;
        case 0x1f7324u: goto label_1f7324;
        case 0x1f7328u: goto label_1f7328;
        case 0x1f732cu: goto label_1f732c;
        case 0x1f7330u: goto label_1f7330;
        case 0x1f7334u: goto label_1f7334;
        case 0x1f7338u: goto label_1f7338;
        case 0x1f733cu: goto label_1f733c;
        case 0x1f7340u: goto label_1f7340;
        case 0x1f7344u: goto label_1f7344;
        case 0x1f7348u: goto label_1f7348;
        case 0x1f734cu: goto label_1f734c;
        case 0x1f7350u: goto label_1f7350;
        case 0x1f7354u: goto label_1f7354;
        case 0x1f7358u: goto label_1f7358;
        case 0x1f735cu: goto label_1f735c;
        case 0x1f7360u: goto label_1f7360;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f7368u: goto label_1f7368;
        case 0x1f736cu: goto label_1f736c;
        case 0x1f7370u: goto label_1f7370;
        case 0x1f7374u: goto label_1f7374;
        case 0x1f7378u: goto label_1f7378;
        case 0x1f737cu: goto label_1f737c;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f7384u: goto label_1f7384;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f738cu: goto label_1f738c;
        case 0x1f7390u: goto label_1f7390;
        case 0x1f7394u: goto label_1f7394;
        case 0x1f7398u: goto label_1f7398;
        case 0x1f739cu: goto label_1f739c;
        case 0x1f73a0u: goto label_1f73a0;
        case 0x1f73a4u: goto label_1f73a4;
        case 0x1f73a8u: goto label_1f73a8;
        case 0x1f73acu: goto label_1f73ac;
        case 0x1f73b0u: goto label_1f73b0;
        case 0x1f73b4u: goto label_1f73b4;
        case 0x1f73b8u: goto label_1f73b8;
        case 0x1f73bcu: goto label_1f73bc;
        case 0x1f73c0u: goto label_1f73c0;
        case 0x1f73c4u: goto label_1f73c4;
        case 0x1f73c8u: goto label_1f73c8;
        case 0x1f73ccu: goto label_1f73cc;
        case 0x1f73d0u: goto label_1f73d0;
        case 0x1f73d4u: goto label_1f73d4;
        case 0x1f73d8u: goto label_1f73d8;
        case 0x1f73dcu: goto label_1f73dc;
        case 0x1f73e0u: goto label_1f73e0;
        case 0x1f73e4u: goto label_1f73e4;
        case 0x1f73e8u: goto label_1f73e8;
        case 0x1f73ecu: goto label_1f73ec;
        case 0x1f73f0u: goto label_1f73f0;
        case 0x1f73f4u: goto label_1f73f4;
        case 0x1f73f8u: goto label_1f73f8;
        case 0x1f73fcu: goto label_1f73fc;
        case 0x1f7400u: goto label_1f7400;
        case 0x1f7404u: goto label_1f7404;
        case 0x1f7408u: goto label_1f7408;
        case 0x1f740cu: goto label_1f740c;
        case 0x1f7410u: goto label_1f7410;
        case 0x1f7414u: goto label_1f7414;
        case 0x1f7418u: goto label_1f7418;
        case 0x1f741cu: goto label_1f741c;
        case 0x1f7420u: goto label_1f7420;
        case 0x1f7424u: goto label_1f7424;
        case 0x1f7428u: goto label_1f7428;
        case 0x1f742cu: goto label_1f742c;
        case 0x1f7430u: goto label_1f7430;
        case 0x1f7434u: goto label_1f7434;
        case 0x1f7438u: goto label_1f7438;
        case 0x1f743cu: goto label_1f743c;
        case 0x1f7440u: goto label_1f7440;
        case 0x1f7444u: goto label_1f7444;
        case 0x1f7448u: goto label_1f7448;
        case 0x1f744cu: goto label_1f744c;
        case 0x1f7450u: goto label_1f7450;
        case 0x1f7454u: goto label_1f7454;
        case 0x1f7458u: goto label_1f7458;
        case 0x1f745cu: goto label_1f745c;
        case 0x1f7460u: goto label_1f7460;
        case 0x1f7464u: goto label_1f7464;
        case 0x1f7468u: goto label_1f7468;
        case 0x1f746cu: goto label_1f746c;
        case 0x1f7470u: goto label_1f7470;
        case 0x1f7474u: goto label_1f7474;
        case 0x1f7478u: goto label_1f7478;
        case 0x1f747cu: goto label_1f747c;
        case 0x1f7480u: goto label_1f7480;
        case 0x1f7484u: goto label_1f7484;
        case 0x1f7488u: goto label_1f7488;
        case 0x1f748cu: goto label_1f748c;
        case 0x1f7490u: goto label_1f7490;
        case 0x1f7494u: goto label_1f7494;
        case 0x1f7498u: goto label_1f7498;
        case 0x1f749cu: goto label_1f749c;
        case 0x1f74a0u: goto label_1f74a0;
        case 0x1f74a4u: goto label_1f74a4;
        case 0x1f74a8u: goto label_1f74a8;
        case 0x1f74acu: goto label_1f74ac;
        case 0x1f74b0u: goto label_1f74b0;
        case 0x1f74b4u: goto label_1f74b4;
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f74bcu: goto label_1f74bc;
        case 0x1f74c0u: goto label_1f74c0;
        case 0x1f74c4u: goto label_1f74c4;
        case 0x1f74c8u: goto label_1f74c8;
        case 0x1f74ccu: goto label_1f74cc;
        case 0x1f74d0u: goto label_1f74d0;
        case 0x1f74d4u: goto label_1f74d4;
        case 0x1f74d8u: goto label_1f74d8;
        case 0x1f74dcu: goto label_1f74dc;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f74e4u: goto label_1f74e4;
        case 0x1f74e8u: goto label_1f74e8;
        case 0x1f74ecu: goto label_1f74ec;
        case 0x1f74f0u: goto label_1f74f0;
        case 0x1f74f4u: goto label_1f74f4;
        case 0x1f74f8u: goto label_1f74f8;
        case 0x1f74fcu: goto label_1f74fc;
        case 0x1f7500u: goto label_1f7500;
        case 0x1f7504u: goto label_1f7504;
        case 0x1f7508u: goto label_1f7508;
        case 0x1f750cu: goto label_1f750c;
        case 0x1f7510u: goto label_1f7510;
        case 0x1f7514u: goto label_1f7514;
        case 0x1f7518u: goto label_1f7518;
        case 0x1f751cu: goto label_1f751c;
        case 0x1f7520u: goto label_1f7520;
        case 0x1f7524u: goto label_1f7524;
        case 0x1f7528u: goto label_1f7528;
        case 0x1f752cu: goto label_1f752c;
        case 0x1f7530u: goto label_1f7530;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7538u: goto label_1f7538;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7540u: goto label_1f7540;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7548u: goto label_1f7548;
        case 0x1f754cu: goto label_1f754c;
        case 0x1f7550u: goto label_1f7550;
        case 0x1f7554u: goto label_1f7554;
        case 0x1f7558u: goto label_1f7558;
        case 0x1f755cu: goto label_1f755c;
        case 0x1f7560u: goto label_1f7560;
        case 0x1f7564u: goto label_1f7564;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f756cu: goto label_1f756c;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7584u: goto label_1f7584;
        case 0x1f7588u: goto label_1f7588;
        case 0x1f758cu: goto label_1f758c;
        case 0x1f7590u: goto label_1f7590;
        case 0x1f7594u: goto label_1f7594;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75a0u: goto label_1f75a0;
        case 0x1f75a4u: goto label_1f75a4;
        case 0x1f75a8u: goto label_1f75a8;
        case 0x1f75acu: goto label_1f75ac;
        case 0x1f75b0u: goto label_1f75b0;
        case 0x1f75b4u: goto label_1f75b4;
        case 0x1f75b8u: goto label_1f75b8;
        case 0x1f75bcu: goto label_1f75bc;
        case 0x1f75c0u: goto label_1f75c0;
        case 0x1f75c4u: goto label_1f75c4;
        case 0x1f75c8u: goto label_1f75c8;
        case 0x1f75ccu: goto label_1f75cc;
        case 0x1f75d0u: goto label_1f75d0;
        case 0x1f75d4u: goto label_1f75d4;
        case 0x1f75d8u: goto label_1f75d8;
        case 0x1f75dcu: goto label_1f75dc;
        case 0x1f75e0u: goto label_1f75e0;
        case 0x1f75e4u: goto label_1f75e4;
        case 0x1f75e8u: goto label_1f75e8;
        case 0x1f75ecu: goto label_1f75ec;
        case 0x1f75f0u: goto label_1f75f0;
        case 0x1f75f4u: goto label_1f75f4;
        case 0x1f75f8u: goto label_1f75f8;
        case 0x1f75fcu: goto label_1f75fc;
        case 0x1f7600u: goto label_1f7600;
        case 0x1f7604u: goto label_1f7604;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f760cu: goto label_1f760c;
        case 0x1f7610u: goto label_1f7610;
        case 0x1f7614u: goto label_1f7614;
        case 0x1f7618u: goto label_1f7618;
        case 0x1f761cu: goto label_1f761c;
        case 0x1f7620u: goto label_1f7620;
        case 0x1f7624u: goto label_1f7624;
        case 0x1f7628u: goto label_1f7628;
        case 0x1f762cu: goto label_1f762c;
        default: break;
    }

    ctx->pc = 0x1f70e0u;

label_1f70e0:
    // 0x1f70e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f70e4:
    // 0x1f70e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f70e8:
    // 0x1f70e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f70ec:
    // 0x1f70ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f70f0:
    // 0x1f70f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f70f4:
    // 0x1f70f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f70f8:
    // 0x1f70f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f70f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f70fc:
    // 0x1f70fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f70fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f7100:
    // 0x1f7100: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f7104:
    // 0x1f7104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7108:
    // 0x1f7108: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f7108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f710c:
    // 0x1f710c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7110:
    // 0x1f7110: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f7110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f7114:
    // 0x1f7114: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f7118:
    // 0x1f7118: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f7118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f711c:
    // 0x1f711c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f7120:
    // 0x1f7120: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f7120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7124:
    // 0x1f7124: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f7128:
    if (ctx->pc == 0x1F7128u) {
        ctx->pc = 0x1F7128u;
            // 0x1f7128: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F712Cu;
        goto label_1f712c;
    }
    ctx->pc = 0x1F7124u;
    {
        const bool branch_taken_0x1f7124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7124u;
            // 0x1f7128: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7124) {
            ctx->pc = 0x1F7154u;
            goto label_1f7154;
        }
    }
    ctx->pc = 0x1F712Cu;
label_1f712c:
    // 0x1f712c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f7130:
    // 0x1f7130: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f7134:
    // 0x1f7134: 0x2442af90  addiu       $v0, $v0, -0x5070
    ctx->pc = 0x1f7134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
label_1f7138:
    // 0x1f7138: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f7138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f713c:
    // 0x1f713c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f7140:
    // 0x1f7140: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f7140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f7144:
    // 0x1f7144: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f7148:
    // 0x1f7148: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f714c:
    // 0x1f714c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f714cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f7150:
    // 0x1f7150: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f7150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f7154:
    // 0x1f7154: 0xafb400a0  sw          $s4, 0xA0($sp)
    ctx->pc = 0x1f7154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 20));
label_1f7158:
    // 0x1f7158: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f7158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f715c:
    // 0x1f715c: 0xafb300a4  sw          $s3, 0xA4($sp)
    ctx->pc = 0x1f715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 19));
label_1f7160:
    // 0x1f7160: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1f7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f7164:
    // 0x1f7164: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f7164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f7168:
    // 0x1f7168: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1f716c:
    // 0x1f716c: 0xc0a4608  jal         func_291820
label_1f7170:
    if (ctx->pc == 0x1F7170u) {
        ctx->pc = 0x1F7170u;
            // 0x1f7170: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7174u;
        goto label_1f7174;
    }
    ctx->pc = 0x1F716Cu;
    SET_GPR_U32(ctx, 31, 0x1F7174u);
    ctx->pc = 0x1F7170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F716Cu;
            // 0x1f7170: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291820u;
    if (runtime->hasFunction(0x291820u)) {
        auto targetFn = runtime->lookupFunction(0x291820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7174u; }
        if (ctx->pc != 0x1F7174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291820_0x291820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7174u; }
        if (ctx->pc != 0x1F7174u) { return; }
    }
    ctx->pc = 0x1F7174u;
label_1f7174:
    // 0x1f7174: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1f7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7178:
    // 0x1f7178: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f7178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f717c:
    // 0x1f717c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f7180:
    // 0x1f7180: 0x460001c5  abs.s       $f7, $f0
    ctx->pc = 0x1f7180u;
    ctx->f[7] = FPU_ABS_S(ctx->f[0]);
label_1f7184:
    // 0x1f7184: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1f7184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7188:
    // 0x1f7188: 0x46000185  abs.s       $f6, $f0
    ctx->pc = 0x1f7188u;
    ctx->f[6] = FPU_ABS_S(ctx->f[0]);
label_1f718c:
    // 0x1f718c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1f718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7190:
    // 0x1f7190: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x1f7190u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
label_1f7194:
    // 0x1f7194: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f7194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7198:
    // 0x1f7198: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x1f7198u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
label_1f719c:
    // 0x1f719c: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1f719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f71a0:
    // 0x1f71a0: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x1f71a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f71a4:
    // 0x1f71a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f71a8:
    if (ctx->pc == 0x1F71A8u) {
        ctx->pc = 0x1F71A8u;
            // 0x1f71a8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F71ACu;
        goto label_1f71ac;
    }
    ctx->pc = 0x1F71A4u;
    {
        const bool branch_taken_0x1f71a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F71A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71A4u;
            // 0x1f71a8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71a4) {
            ctx->pc = 0x1F71B0u;
            goto label_1f71b0;
        }
    }
    ctx->pc = 0x1F71ACu;
label_1f71ac:
    // 0x1f71ac: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x1f71acu;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
label_1f71b0:
    // 0x1f71b0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f71b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f71b4:
    // 0x1f71b4: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1f71b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f71b8:
    // 0x1f71b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f71bc:
    if (ctx->pc == 0x1F71BCu) {
        ctx->pc = 0x1F71C0u;
        goto label_1f71c0;
    }
    ctx->pc = 0x1F71B8u;
    {
        const bool branch_taken_0x1f71b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f71b8) {
            ctx->pc = 0x1F71C4u;
            goto label_1f71c4;
        }
    }
    ctx->pc = 0x1F71C0u;
label_1f71c0:
    // 0x1f71c0: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x1f71c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
label_1f71c4:
    // 0x1f71c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f71c8:
    // 0x1f71c8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1f71c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f71cc:
    // 0x1f71cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f71d0:
    if (ctx->pc == 0x1F71D0u) {
        ctx->pc = 0x1F71D4u;
        goto label_1f71d4;
    }
    ctx->pc = 0x1F71CCu;
    {
        const bool branch_taken_0x1f71cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f71cc) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F71D4u;
label_1f71d4:
    // 0x1f71d4: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1f71d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
label_1f71d8:
    // 0x1f71d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1f71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f71dc:
    // 0x1f71dc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1f71dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f71e0:
    // 0x1f71e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f71e4:
    if (ctx->pc == 0x1F71E4u) {
        ctx->pc = 0x1F71E8u;
        goto label_1f71e8;
    }
    ctx->pc = 0x1F71E0u;
    {
        const bool branch_taken_0x1f71e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f71e0) {
            ctx->pc = 0x1F71ECu;
            goto label_1f71ec;
        }
    }
    ctx->pc = 0x1F71E8u;
label_1f71e8:
    // 0x1f71e8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1f71e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1f71ec:
    // 0x1f71ec: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1f71ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1f71f0:
    // 0x1f71f0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1f71f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f71f4:
    // 0x1f71f4: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x1f71f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_1f71f8:
    // 0x1f71f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f71f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f71fc:
    // 0x1f71fc: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1f71fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1f7200:
    // 0x1f7200: 0x460610c1  sub.s       $f3, $f2, $f6
    ctx->pc = 0x1f7200u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1f7204:
    // 0x1f7204: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1f7204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f7208:
    // 0x1f7208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f720c:
    // 0x1f720c: 0x0  nop
    ctx->pc = 0x1f720cu;
    // NOP
label_1f7210:
    // 0x1f7210: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f7210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7214:
    // 0x1f7214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f7218:
    if (ctx->pc == 0x1F7218u) {
        ctx->pc = 0x1F7218u;
            // 0x1f7218: 0xe7a30064  swc1        $f3, 0x64($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x1F721Cu;
        goto label_1f721c;
    }
    ctx->pc = 0x1F7214u;
    {
        const bool branch_taken_0x1f7214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7214u;
            // 0x1f7218: 0xe7a30064  swc1        $f3, 0x64($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7214) {
            ctx->pc = 0x1F7224u;
            goto label_1f7224;
        }
    }
    ctx->pc = 0x1F721Cu;
label_1f721c:
    // 0x1f721c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f7220:
    if (ctx->pc == 0x1F7220u) {
        ctx->pc = 0x1F7220u;
            // 0x1f7220: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F7224u;
        goto label_1f7224;
    }
    ctx->pc = 0x1F721Cu;
    {
        const bool branch_taken_0x1f721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F721Cu;
            // 0x1f7220: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f721c) {
            ctx->pc = 0x1F7228u;
            goto label_1f7228;
        }
    }
    ctx->pc = 0x1F7224u;
label_1f7224:
    // 0x1f7224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7228:
    // 0x1f7228: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1f7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f722c:
    // 0x1f722c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f722cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7230:
    // 0x1f7230: 0x0  nop
    ctx->pc = 0x1f7230u;
    // NOP
label_1f7234:
    // 0x1f7234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7238:
    // 0x1f7238: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f723c:
    if (ctx->pc == 0x1F723Cu) {
        ctx->pc = 0x1F723Cu;
            // 0x1f723c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7240u;
        goto label_1f7240;
    }
    ctx->pc = 0x1F7238u;
    {
        const bool branch_taken_0x1f7238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7238) {
            ctx->pc = 0x1F723Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7238u;
            // 0x1f723c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7244u;
            goto label_1f7244;
        }
    }
    ctx->pc = 0x1F7240u;
label_1f7240:
    // 0x1f7240: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f7244:
    // 0x1f7244: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1f7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7248:
    // 0x1f7248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f724c:
    // 0x1f724c: 0x0  nop
    ctx->pc = 0x1f724cu;
    // NOP
label_1f7250:
    // 0x1f7250: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f7250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7254:
    // 0x1f7254: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f7258:
    if (ctx->pc == 0x1F7258u) {
        ctx->pc = 0x1F7258u;
            // 0x1f7258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F725Cu;
        goto label_1f725c;
    }
    ctx->pc = 0x1F7254u;
    {
        const bool branch_taken_0x1f7254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7254) {
            ctx->pc = 0x1F7258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7254u;
            // 0x1f7258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7260u;
            goto label_1f7260;
        }
    }
    ctx->pc = 0x1F725Cu;
label_1f725c:
    // 0x1f725c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7260:
    // 0x1f7260: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7264:
    // 0x1f7264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7268:
    // 0x1f7268: 0x0  nop
    ctx->pc = 0x1f7268u;
    // NOP
label_1f726c:
    // 0x1f726c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f726cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7270:
    // 0x1f7270: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f7274:
    if (ctx->pc == 0x1F7274u) {
        ctx->pc = 0x1F7274u;
            // 0x1f7274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F7278u;
        goto label_1f7278;
    }
    ctx->pc = 0x1F7270u;
    {
        const bool branch_taken_0x1f7270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7270u;
            // 0x1f7274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7270) {
            ctx->pc = 0x1F727Cu;
            goto label_1f727c;
        }
    }
    ctx->pc = 0x1F7278u;
label_1f7278:
    // 0x1f7278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f727c:
    // 0x1f727c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_1f7280:
    // 0x1f7280: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f7280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f7284:
    // 0x1f7284: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x1f7284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1f7288:
    // 0x1f7288: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1f7288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1f728c:
    // 0x1f728c: 0x30a5000e  andi        $a1, $a1, 0xE
    ctx->pc = 0x1f728cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)14);
label_1f7290:
    // 0x1f7290: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
label_1f7294:
    if (ctx->pc == 0x1F7294u) {
        ctx->pc = 0x1F7294u;
            // 0x1f7294: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F7298u;
        goto label_1f7298;
    }
    ctx->pc = 0x1F7290u;
    {
        const bool branch_taken_0x1f7290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7290) {
            ctx->pc = 0x1F7294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7290u;
            // 0x1f7294: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F740Cu;
            goto label_1f740c;
        }
    }
    ctx->pc = 0x1F7298u;
label_1f7298:
    // 0x1f7298: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x1f7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f729c:
    // 0x1f729c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1f729cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1f72a0:
    // 0x1f72a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72a4:
    // 0x1f72a4: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x1f72a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1f72a8:
    // 0x1f72a8: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x1f72a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f72ac:
    // 0x1f72ac: 0x460101c4  c1          0x101C4
    ctx->pc = 0x1f72acu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
label_1f72b0:
    // 0x1f72b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f72b4:
    // 0x1f72b4: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x1f72b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f72b8:
    // 0x1f72b8: 0x0  nop
    ctx->pc = 0x1f72b8u;
    // NOP
label_1f72bc:
    // 0x1f72bc: 0x46072143  div.s       $f5, $f4, $f7
    ctx->pc = 0x1f72bcu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[7];
label_1f72c0:
    // 0x1f72c0: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1f72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f72c4:
    // 0x1f72c4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f72c8:
    // 0x1f72c8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1f72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f72cc:
    // 0x1f72cc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1f72ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1f72d0:
    // 0x1f72d0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1f72d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_1f72d4:
    // 0x1f72d4: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x1f72d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f72d8:
    // 0x1f72d8: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f72d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f72dc:
    // 0x1f72dc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f72dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f72e0:
    // 0x1f72e0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1f72e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f72e4:
    // 0x1f72e4: 0x46053102  mul.s       $f4, $f6, $f5
    ctx->pc = 0x1f72e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_1f72e8:
    // 0x1f72e8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f72ec:
    // 0x1f72ec: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1f72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f72f0:
    // 0x1f72f0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1f72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f72f4:
    // 0x1f72f4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1f72f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1f72f8:
    // 0x1f72f8: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1f72f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1f72fc:
    // 0x1f72fc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1f72fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7300:
    // 0x1f7300: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f7304:
    if (ctx->pc == 0x1F7304u) {
        ctx->pc = 0x1F7304u;
            // 0x1f7304: 0xe7a40060  swc1        $f4, 0x60($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x1F7308u;
        goto label_1f7308;
    }
    ctx->pc = 0x1F7300u;
    {
        const bool branch_taken_0x1f7300 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7300u;
            // 0x1f7304: 0xe7a40060  swc1        $f4, 0x60($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7300) {
            ctx->pc = 0x1F7310u;
            goto label_1f7310;
        }
    }
    ctx->pc = 0x1F7308u;
label_1f7308:
    // 0x1f7308: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1f730c:
    if (ctx->pc == 0x1F730Cu) {
        ctx->pc = 0x1F730Cu;
            // 0x1f730c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7310u;
        goto label_1f7310;
    }
    ctx->pc = 0x1F7308u;
    {
        const bool branch_taken_0x1f7308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7308u;
            // 0x1f730c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7308) {
            ctx->pc = 0x1F7598u;
            goto label_1f7598;
        }
    }
    ctx->pc = 0x1F7310u;
label_1f7310:
    // 0x1f7310: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f7314:
    // 0x1f7314: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1f7314u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_1f7318:
    // 0x1f7318: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1f731c:
    // 0x1f731c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1f731cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f7320:
    // 0x1f7320: 0xca4024  and         $t0, $a2, $t2
    ctx->pc = 0x1f7320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
label_1f7324:
    // 0x1f7324: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x1f7324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1f7328:
    // 0x1f7328: 0xa84026  xor         $t0, $a1, $t0
    ctx->pc = 0x1f7328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
label_1f732c:
    // 0x1f732c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1f732cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1f7330:
    // 0x1f7330: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1f7330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1f7334:
    // 0x1f7334: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1f7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7338:
    // 0x1f7338: 0xea4824  and         $t1, $a3, $t2
    ctx->pc = 0x1f7338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
label_1f733c:
    // 0x1f733c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x1f733cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1f7340:
    // 0x1f7340: 0xca3824  and         $a3, $a2, $t2
    ctx->pc = 0x1f7340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
label_1f7344:
    // 0x1f7344: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f7348:
    // 0x1f7348: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1f7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f734c:
    // 0x1f734c: 0xaa3024  and         $a2, $a1, $t2
    ctx->pc = 0x1f734cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
label_1f7350:
    // 0x1f7350: 0x1092826  xor         $a1, $t0, $t1
    ctx->pc = 0x1f7350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
label_1f7354:
    // 0x1f7354: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x1f7354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_1f7358:
    // 0x1f7358: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x1f7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f735c:
    // 0x1f735c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1f735cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1f7360:
    // 0x1f7360: 0xa72826  xor         $a1, $a1, $a3
    ctx->pc = 0x1f7360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 7));
label_1f7364:
    // 0x1f7364: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1f7364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_1f7368:
    // 0x1f7368: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1f736c:
    // 0x1f736c: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x1f736cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_1f7370:
    // 0x1f7370: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x1f7370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_1f7374:
    // 0x1f7374: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1f7374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f7378:
    // 0x1f7378: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x1f7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f737c:
    // 0x1f737c: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x1f737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f7380:
    // 0x1f7380: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1f7380u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1f7384:
    // 0x1f7384: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f7384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f7388:
    // 0x1f7388: 0x46002a07  neg.s       $f8, $f5
    ctx->pc = 0x1f7388u;
    ctx->f[8] = FPU_NEG_S(ctx->f[5]);
label_1f738c:
    // 0x1f738c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f738cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f7390:
    // 0x1f7390: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f7390u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f7394:
    // 0x1f7394: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1f7394u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_1f7398:
    // 0x1f7398: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f7398u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f739c:
    // 0x1f739c: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f739cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f73a0:
    // 0x1f73a0: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1f73a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f73a4:
    // 0x1f73a4: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x1f73a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f73a8:
    // 0x1f73a8: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x1f73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f73ac:
    // 0x1f73ac: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1f73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f73b0:
    // 0x1f73b0: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f73b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f73b4:
    // 0x1f73b4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f73b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f73b8:
    // 0x1f73b8: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f73b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f73bc:
    // 0x1f73bc: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x1f73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f73c0:
    // 0x1f73c0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f73c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f73c4:
    // 0x1f73c4: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1f73c4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_1f73c8:
    // 0x1f73c8: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f73c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f73cc:
    // 0x1f73cc: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1f73ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f73d0:
    // 0x1f73d0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1f73d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f73d4:
    // 0x1f73d4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f73d8:
    // 0x1f73d8: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x1f73d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f73dc:
    // 0x1f73dc: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f73dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f73e0:
    // 0x1f73e0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f73e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f73e4:
    // 0x1f73e4: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f73e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f73e8:
    // 0x1f73e8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f73e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f73ec:
    // 0x1f73ec: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f73ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f73f0:
    // 0x1f73f0: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f73f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f73f4:
    // 0x1f73f4: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x1f73f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f73f8:
    // 0x1f73f8: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x1f73f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f73fc:
    // 0x1f73fc: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x1f73fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f7400:
    // 0x1f7400: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1f7400u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f7404:
    // 0x1f7404: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1f7408:
    if (ctx->pc == 0x1F7408u) {
        ctx->pc = 0x1F7408u;
            // 0x1f7408: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x1F740Cu;
        goto label_1f740c;
    }
    ctx->pc = 0x1F7404u;
    {
        const bool branch_taken_0x1f7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7404u;
            // 0x1f7408: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7404) {
            ctx->pc = 0x1F7530u;
            goto label_1f7530;
        }
    }
    ctx->pc = 0x1F740Cu;
label_1f740c:
    // 0x1f740c: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1f740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7410:
    // 0x1f7410: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1f7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7414:
    // 0x1f7414: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x1f7414u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_1f7418:
    // 0x1f7418: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x1f7418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_1f741c:
    // 0x1f741c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1f741cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7420:
    // 0x1f7420: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1f7424:
    if (ctx->pc == 0x1F7424u) {
        ctx->pc = 0x1F7424u;
            // 0x1f7424: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x1F7428u;
        goto label_1f7428;
    }
    ctx->pc = 0x1F7420u;
    {
        const bool branch_taken_0x1f7420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7420u;
            // 0x1f7424: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7420) {
            ctx->pc = 0x1F747Cu;
            goto label_1f747c;
        }
    }
    ctx->pc = 0x1F7428u;
label_1f7428:
    // 0x1f7428: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f7428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f742c:
    // 0x1f742c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1f7430:
    if (ctx->pc == 0x1F7430u) {
        ctx->pc = 0x1F7430u;
            // 0x1f7430: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F7434u;
        goto label_1f7434;
    }
    ctx->pc = 0x1F742Cu;
    {
        const bool branch_taken_0x1f742c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f742c) {
            ctx->pc = 0x1F7430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F742Cu;
            // 0x1f7430: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7458u;
            goto label_1f7458;
        }
    }
    ctx->pc = 0x1F7434u;
label_1f7434:
    // 0x1f7434: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f7434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f7438:
    // 0x1f7438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f743c:
    // 0x1f743c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7440:
    // 0x1f7440: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f7440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f7444:
    // 0x1f7444: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1f7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7448:
    // 0x1f7448: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f7448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f744c:
    // 0x1f744c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1f744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7450:
    // 0x1f7450: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f7454:
    if (ctx->pc == 0x1F7454u) {
        ctx->pc = 0x1F7454u;
            // 0x1f7454: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F7458u;
        goto label_1f7458;
    }
    ctx->pc = 0x1F7450u;
    {
        const bool branch_taken_0x1f7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7450u;
            // 0x1f7454: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7450) {
            ctx->pc = 0x1F74D0u;
            goto label_1f74d0;
        }
    }
    ctx->pc = 0x1F7458u;
label_1f7458:
    // 0x1f7458: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f7458u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f745c:
    // 0x1f745c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7460:
    // 0x1f7460: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7464:
    // 0x1f7464: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f7464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f7468:
    // 0x1f7468: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f7468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f746c:
    // 0x1f746c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f746cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f7470:
    // 0x1f7470: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f7470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7474:
    // 0x1f7474: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f7478:
    if (ctx->pc == 0x1F7478u) {
        ctx->pc = 0x1F7478u;
            // 0x1f7478: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F747Cu;
        goto label_1f747c;
    }
    ctx->pc = 0x1F7474u;
    {
        const bool branch_taken_0x1f7474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7474u;
            // 0x1f7478: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7474) {
            ctx->pc = 0x1F74D0u;
            goto label_1f74d0;
        }
    }
    ctx->pc = 0x1F747Cu;
label_1f747c:
    // 0x1f747c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f747cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7480:
    // 0x1f7480: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_1f7484:
    if (ctx->pc == 0x1F7484u) {
        ctx->pc = 0x1F7484u;
            // 0x1f7484: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F7488u;
        goto label_1f7488;
    }
    ctx->pc = 0x1F7480u;
    {
        const bool branch_taken_0x1f7480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7480) {
            ctx->pc = 0x1F7484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7480u;
            // 0x1f7484: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F74B0u;
            goto label_1f74b0;
        }
    }
    ctx->pc = 0x1F7488u;
label_1f7488:
    // 0x1f7488: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f7488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f748c:
    // 0x1f748c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1f748cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1f7490:
    // 0x1f7490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7494:
    // 0x1f7494: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1f7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7498:
    // 0x1f7498: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f7498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f749c:
    // 0x1f749c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1f749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74a0:
    // 0x1f74a0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f74a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f74a4:
    // 0x1f74a4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1f74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74a8:
    // 0x1f74a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f74ac:
    if (ctx->pc == 0x1F74ACu) {
        ctx->pc = 0x1F74ACu;
            // 0x1f74ac: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F74B0u;
        goto label_1f74b0;
    }
    ctx->pc = 0x1F74A8u;
    {
        const bool branch_taken_0x1f74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74A8u;
            // 0x1f74ac: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74a8) {
            ctx->pc = 0x1F74D0u;
            goto label_1f74d0;
        }
    }
    ctx->pc = 0x1F74B0u;
label_1f74b0:
    // 0x1f74b0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f74b0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f74b4:
    // 0x1f74b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f74b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f74b8:
    // 0x1f74b8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f74b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74bc:
    // 0x1f74bc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f74bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f74c0:
    // 0x1f74c0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74c4:
    // 0x1f74c4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f74c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f74c8:
    // 0x1f74c8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f74c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74cc:
    // 0x1f74cc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f74ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f74d0:
    // 0x1f74d0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f74d4:
    // 0x1f74d4: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f74d8:
    // 0x1f74d8: 0xc4a10070  lwc1        $f1, 0x70($a1)
    ctx->pc = 0x1f74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f74dc:
    // 0x1f74dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f74dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f74e0:
    // 0x1f74e0: 0x0  nop
    ctx->pc = 0x1f74e0u;
    // NOP
label_1f74e4:
    // 0x1f74e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f74e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f74e8:
    // 0x1f74e8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1f74ec:
    if (ctx->pc == 0x1F74ECu) {
        ctx->pc = 0x1F74ECu;
            // 0x1f74ec: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F74F0u;
        goto label_1f74f0;
    }
    ctx->pc = 0x1F74E8u;
    {
        const bool branch_taken_0x1f74e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f74e8) {
            ctx->pc = 0x1F74ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74E8u;
            // 0x1f74ec: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7524u;
            goto label_1f7524;
        }
    }
    ctx->pc = 0x1F74F0u;
label_1f74f0:
    // 0x1f74f0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f74f4:
    // 0x1f74f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f74f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f74f8:
    // 0x1f74f8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f74f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f74fc:
    // 0x1f74fc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f74fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7500:
    // 0x1f7500: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7500u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f7504:
    // 0x1f7504: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f7504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f7508:
    // 0x1f7508: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f750c:
    // 0x1f750c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f750cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f7510:
    // 0x1f7510: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f7510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f7514:
    // 0x1f7514: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f7514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7518:
    // 0x1f7518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f751c:
    // 0x1f751c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f751cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f7520:
    // 0x1f7520: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7524:
    // 0x1f7524: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1f7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7528:
    // 0x1f7528: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f7528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f752c:
    // 0x1f752c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f752cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f7530:
    // 0x1f7530: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1f7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f7534:
    // 0x1f7534: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x1f7534u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_1f7538:
    // 0x1f7538: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f753c:
    // 0x1f753c: 0x46041901  sub.s       $f4, $f3, $f4
    ctx->pc = 0x1f753cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1f7540:
    // 0x1f7540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7544:
    // 0x1f7544: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f7544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f7548:
    // 0x1f7548: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1f7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f754c:
    // 0x1f754c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f754cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7550:
    // 0x1f7550: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7554:
    // 0x1f7554: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f7554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f7558:
    // 0x1f7558: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f755c:
    // 0x1f755c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1f755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7560:
    // 0x1f7560: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7560u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7564:
    // 0x1f7564: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7568:
    // 0x1f7568: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1f7568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f756c:
    // 0x1f756c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7570:
    // 0x1f7570: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1f7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7574:
    // 0x1f7574: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7574u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7578:
    // 0x1f7578: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f757c:
    // 0x1f757c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f7580:
    // 0x1f7580: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7584:
    // 0x1f7584: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1f7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7588:
    // 0x1f7588: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7588u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f758c:
    // 0x1f758c: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f758cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7590:
    // 0x1f7590: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f7590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f7594:
    // 0x1f7594: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f7594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f7598:
    // 0x1f7598: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1f7598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1f759c:
    // 0x1f759c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1f759cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1f75a0:
    // 0x1f75a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f75a4:
    if (ctx->pc == 0x1F75A4u) {
        ctx->pc = 0x1F75A8u;
        goto label_1f75a8;
    }
    ctx->pc = 0x1F75A0u;
    {
        const bool branch_taken_0x1f75a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75a0) {
            ctx->pc = 0x1F75BCu;
            goto label_1f75bc;
        }
    }
    ctx->pc = 0x1F75A8u;
label_1f75a8:
    // 0x1f75a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f75a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f75ac:
    // 0x1f75ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f75acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f75b0:
    // 0x1f75b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f75b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f75b4:
    // 0x1f75b4: 0x320f809  jalr        $t9
label_1f75b8:
    if (ctx->pc == 0x1F75B8u) {
        ctx->pc = 0x1F75B8u;
            // 0x1f75b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1F75BCu;
        goto label_1f75bc;
    }
    ctx->pc = 0x1F75B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F75BCu);
        ctx->pc = 0x1F75B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75B4u;
            // 0x1f75b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F75BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F75BCu; }
            if (ctx->pc != 0x1F75BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F75BCu;
label_1f75bc:
    // 0x1f75bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f75c0:
    // 0x1f75c0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f75c4:
    // 0x1f75c4: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f75c8:
    // 0x1f75c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f75cc:
    // 0x1f75cc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f75d0:
    // 0x1f75d0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f75d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f75d4:
    // 0x1f75d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f75d8:
    if (ctx->pc == 0x1F75D8u) {
        ctx->pc = 0x1F75D8u;
            // 0x1f75d8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F75DCu;
        goto label_1f75dc;
    }
    ctx->pc = 0x1F75D4u;
    {
        const bool branch_taken_0x1f75d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75D4u;
            // 0x1f75d8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75d4) {
            ctx->pc = 0x1F7604u;
            goto label_1f7604;
        }
    }
    ctx->pc = 0x1F75DCu;
label_1f75dc:
    // 0x1f75dc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f75e0:
    // 0x1f75e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f75e4:
    // 0x1f75e4: 0x2463afa0  addiu       $v1, $v1, -0x5060
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
label_1f75e8:
    // 0x1f75e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f75ec:
    // 0x1f75ec: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f75f0:
    // 0x1f75f0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f75f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f75f4:
    // 0x1f75f4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f75f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f75f8:
    // 0x1f75f8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f75fc:
    // 0x1f75fc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f7600:
    // 0x1f7600: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f7600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f7604:
    // 0x1f7604: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f7604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7608:
    // 0x1f7608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f7608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f760c:
    // 0x1f760c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f760cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7610:
    // 0x1f7610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7614:
    // 0x1f7614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7618:
    // 0x1f7618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f761c:
    // 0x1f761c: 0x3e00008  jr          $ra
label_1f7620:
    if (ctx->pc == 0x1F7620u) {
        ctx->pc = 0x1F7620u;
            // 0x1f7620: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F7624u;
        goto label_1f7624;
    }
    ctx->pc = 0x1F761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F761Cu;
            // 0x1f7620: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7624u;
label_1f7624:
    // 0x1f7624: 0x0  nop
    ctx->pc = 0x1f7624u;
    // NOP
label_1f7628:
    // 0x1f7628: 0x0  nop
    ctx->pc = 0x1f7628u;
    // NOP
label_1f762c:
    // 0x1f762c: 0x0  nop
    ctx->pc = 0x1f762cu;
    // NOP
}
