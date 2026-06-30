#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B6FE0
// Address: 0x4b6fe0 - 0x4b7d30
void sub_004B6FE0_0x4b6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6FE0_0x4b6fe0");
#endif

    switch (ctx->pc) {
        case 0x4b6fe0u: goto label_4b6fe0;
        case 0x4b6fe4u: goto label_4b6fe4;
        case 0x4b6fe8u: goto label_4b6fe8;
        case 0x4b6fecu: goto label_4b6fec;
        case 0x4b6ff0u: goto label_4b6ff0;
        case 0x4b6ff4u: goto label_4b6ff4;
        case 0x4b6ff8u: goto label_4b6ff8;
        case 0x4b6ffcu: goto label_4b6ffc;
        case 0x4b7000u: goto label_4b7000;
        case 0x4b7004u: goto label_4b7004;
        case 0x4b7008u: goto label_4b7008;
        case 0x4b700cu: goto label_4b700c;
        case 0x4b7010u: goto label_4b7010;
        case 0x4b7014u: goto label_4b7014;
        case 0x4b7018u: goto label_4b7018;
        case 0x4b701cu: goto label_4b701c;
        case 0x4b7020u: goto label_4b7020;
        case 0x4b7024u: goto label_4b7024;
        case 0x4b7028u: goto label_4b7028;
        case 0x4b702cu: goto label_4b702c;
        case 0x4b7030u: goto label_4b7030;
        case 0x4b7034u: goto label_4b7034;
        case 0x4b7038u: goto label_4b7038;
        case 0x4b703cu: goto label_4b703c;
        case 0x4b7040u: goto label_4b7040;
        case 0x4b7044u: goto label_4b7044;
        case 0x4b7048u: goto label_4b7048;
        case 0x4b704cu: goto label_4b704c;
        case 0x4b7050u: goto label_4b7050;
        case 0x4b7054u: goto label_4b7054;
        case 0x4b7058u: goto label_4b7058;
        case 0x4b705cu: goto label_4b705c;
        case 0x4b7060u: goto label_4b7060;
        case 0x4b7064u: goto label_4b7064;
        case 0x4b7068u: goto label_4b7068;
        case 0x4b706cu: goto label_4b706c;
        case 0x4b7070u: goto label_4b7070;
        case 0x4b7074u: goto label_4b7074;
        case 0x4b7078u: goto label_4b7078;
        case 0x4b707cu: goto label_4b707c;
        case 0x4b7080u: goto label_4b7080;
        case 0x4b7084u: goto label_4b7084;
        case 0x4b7088u: goto label_4b7088;
        case 0x4b708cu: goto label_4b708c;
        case 0x4b7090u: goto label_4b7090;
        case 0x4b7094u: goto label_4b7094;
        case 0x4b7098u: goto label_4b7098;
        case 0x4b709cu: goto label_4b709c;
        case 0x4b70a0u: goto label_4b70a0;
        case 0x4b70a4u: goto label_4b70a4;
        case 0x4b70a8u: goto label_4b70a8;
        case 0x4b70acu: goto label_4b70ac;
        case 0x4b70b0u: goto label_4b70b0;
        case 0x4b70b4u: goto label_4b70b4;
        case 0x4b70b8u: goto label_4b70b8;
        case 0x4b70bcu: goto label_4b70bc;
        case 0x4b70c0u: goto label_4b70c0;
        case 0x4b70c4u: goto label_4b70c4;
        case 0x4b70c8u: goto label_4b70c8;
        case 0x4b70ccu: goto label_4b70cc;
        case 0x4b70d0u: goto label_4b70d0;
        case 0x4b70d4u: goto label_4b70d4;
        case 0x4b70d8u: goto label_4b70d8;
        case 0x4b70dcu: goto label_4b70dc;
        case 0x4b70e0u: goto label_4b70e0;
        case 0x4b70e4u: goto label_4b70e4;
        case 0x4b70e8u: goto label_4b70e8;
        case 0x4b70ecu: goto label_4b70ec;
        case 0x4b70f0u: goto label_4b70f0;
        case 0x4b70f4u: goto label_4b70f4;
        case 0x4b70f8u: goto label_4b70f8;
        case 0x4b70fcu: goto label_4b70fc;
        case 0x4b7100u: goto label_4b7100;
        case 0x4b7104u: goto label_4b7104;
        case 0x4b7108u: goto label_4b7108;
        case 0x4b710cu: goto label_4b710c;
        case 0x4b7110u: goto label_4b7110;
        case 0x4b7114u: goto label_4b7114;
        case 0x4b7118u: goto label_4b7118;
        case 0x4b711cu: goto label_4b711c;
        case 0x4b7120u: goto label_4b7120;
        case 0x4b7124u: goto label_4b7124;
        case 0x4b7128u: goto label_4b7128;
        case 0x4b712cu: goto label_4b712c;
        case 0x4b7130u: goto label_4b7130;
        case 0x4b7134u: goto label_4b7134;
        case 0x4b7138u: goto label_4b7138;
        case 0x4b713cu: goto label_4b713c;
        case 0x4b7140u: goto label_4b7140;
        case 0x4b7144u: goto label_4b7144;
        case 0x4b7148u: goto label_4b7148;
        case 0x4b714cu: goto label_4b714c;
        case 0x4b7150u: goto label_4b7150;
        case 0x4b7154u: goto label_4b7154;
        case 0x4b7158u: goto label_4b7158;
        case 0x4b715cu: goto label_4b715c;
        case 0x4b7160u: goto label_4b7160;
        case 0x4b7164u: goto label_4b7164;
        case 0x4b7168u: goto label_4b7168;
        case 0x4b716cu: goto label_4b716c;
        case 0x4b7170u: goto label_4b7170;
        case 0x4b7174u: goto label_4b7174;
        case 0x4b7178u: goto label_4b7178;
        case 0x4b717cu: goto label_4b717c;
        case 0x4b7180u: goto label_4b7180;
        case 0x4b7184u: goto label_4b7184;
        case 0x4b7188u: goto label_4b7188;
        case 0x4b718cu: goto label_4b718c;
        case 0x4b7190u: goto label_4b7190;
        case 0x4b7194u: goto label_4b7194;
        case 0x4b7198u: goto label_4b7198;
        case 0x4b719cu: goto label_4b719c;
        case 0x4b71a0u: goto label_4b71a0;
        case 0x4b71a4u: goto label_4b71a4;
        case 0x4b71a8u: goto label_4b71a8;
        case 0x4b71acu: goto label_4b71ac;
        case 0x4b71b0u: goto label_4b71b0;
        case 0x4b71b4u: goto label_4b71b4;
        case 0x4b71b8u: goto label_4b71b8;
        case 0x4b71bcu: goto label_4b71bc;
        case 0x4b71c0u: goto label_4b71c0;
        case 0x4b71c4u: goto label_4b71c4;
        case 0x4b71c8u: goto label_4b71c8;
        case 0x4b71ccu: goto label_4b71cc;
        case 0x4b71d0u: goto label_4b71d0;
        case 0x4b71d4u: goto label_4b71d4;
        case 0x4b71d8u: goto label_4b71d8;
        case 0x4b71dcu: goto label_4b71dc;
        case 0x4b71e0u: goto label_4b71e0;
        case 0x4b71e4u: goto label_4b71e4;
        case 0x4b71e8u: goto label_4b71e8;
        case 0x4b71ecu: goto label_4b71ec;
        case 0x4b71f0u: goto label_4b71f0;
        case 0x4b71f4u: goto label_4b71f4;
        case 0x4b71f8u: goto label_4b71f8;
        case 0x4b71fcu: goto label_4b71fc;
        case 0x4b7200u: goto label_4b7200;
        case 0x4b7204u: goto label_4b7204;
        case 0x4b7208u: goto label_4b7208;
        case 0x4b720cu: goto label_4b720c;
        case 0x4b7210u: goto label_4b7210;
        case 0x4b7214u: goto label_4b7214;
        case 0x4b7218u: goto label_4b7218;
        case 0x4b721cu: goto label_4b721c;
        case 0x4b7220u: goto label_4b7220;
        case 0x4b7224u: goto label_4b7224;
        case 0x4b7228u: goto label_4b7228;
        case 0x4b722cu: goto label_4b722c;
        case 0x4b7230u: goto label_4b7230;
        case 0x4b7234u: goto label_4b7234;
        case 0x4b7238u: goto label_4b7238;
        case 0x4b723cu: goto label_4b723c;
        case 0x4b7240u: goto label_4b7240;
        case 0x4b7244u: goto label_4b7244;
        case 0x4b7248u: goto label_4b7248;
        case 0x4b724cu: goto label_4b724c;
        case 0x4b7250u: goto label_4b7250;
        case 0x4b7254u: goto label_4b7254;
        case 0x4b7258u: goto label_4b7258;
        case 0x4b725cu: goto label_4b725c;
        case 0x4b7260u: goto label_4b7260;
        case 0x4b7264u: goto label_4b7264;
        case 0x4b7268u: goto label_4b7268;
        case 0x4b726cu: goto label_4b726c;
        case 0x4b7270u: goto label_4b7270;
        case 0x4b7274u: goto label_4b7274;
        case 0x4b7278u: goto label_4b7278;
        case 0x4b727cu: goto label_4b727c;
        case 0x4b7280u: goto label_4b7280;
        case 0x4b7284u: goto label_4b7284;
        case 0x4b7288u: goto label_4b7288;
        case 0x4b728cu: goto label_4b728c;
        case 0x4b7290u: goto label_4b7290;
        case 0x4b7294u: goto label_4b7294;
        case 0x4b7298u: goto label_4b7298;
        case 0x4b729cu: goto label_4b729c;
        case 0x4b72a0u: goto label_4b72a0;
        case 0x4b72a4u: goto label_4b72a4;
        case 0x4b72a8u: goto label_4b72a8;
        case 0x4b72acu: goto label_4b72ac;
        case 0x4b72b0u: goto label_4b72b0;
        case 0x4b72b4u: goto label_4b72b4;
        case 0x4b72b8u: goto label_4b72b8;
        case 0x4b72bcu: goto label_4b72bc;
        case 0x4b72c0u: goto label_4b72c0;
        case 0x4b72c4u: goto label_4b72c4;
        case 0x4b72c8u: goto label_4b72c8;
        case 0x4b72ccu: goto label_4b72cc;
        case 0x4b72d0u: goto label_4b72d0;
        case 0x4b72d4u: goto label_4b72d4;
        case 0x4b72d8u: goto label_4b72d8;
        case 0x4b72dcu: goto label_4b72dc;
        case 0x4b72e0u: goto label_4b72e0;
        case 0x4b72e4u: goto label_4b72e4;
        case 0x4b72e8u: goto label_4b72e8;
        case 0x4b72ecu: goto label_4b72ec;
        case 0x4b72f0u: goto label_4b72f0;
        case 0x4b72f4u: goto label_4b72f4;
        case 0x4b72f8u: goto label_4b72f8;
        case 0x4b72fcu: goto label_4b72fc;
        case 0x4b7300u: goto label_4b7300;
        case 0x4b7304u: goto label_4b7304;
        case 0x4b7308u: goto label_4b7308;
        case 0x4b730cu: goto label_4b730c;
        case 0x4b7310u: goto label_4b7310;
        case 0x4b7314u: goto label_4b7314;
        case 0x4b7318u: goto label_4b7318;
        case 0x4b731cu: goto label_4b731c;
        case 0x4b7320u: goto label_4b7320;
        case 0x4b7324u: goto label_4b7324;
        case 0x4b7328u: goto label_4b7328;
        case 0x4b732cu: goto label_4b732c;
        case 0x4b7330u: goto label_4b7330;
        case 0x4b7334u: goto label_4b7334;
        case 0x4b7338u: goto label_4b7338;
        case 0x4b733cu: goto label_4b733c;
        case 0x4b7340u: goto label_4b7340;
        case 0x4b7344u: goto label_4b7344;
        case 0x4b7348u: goto label_4b7348;
        case 0x4b734cu: goto label_4b734c;
        case 0x4b7350u: goto label_4b7350;
        case 0x4b7354u: goto label_4b7354;
        case 0x4b7358u: goto label_4b7358;
        case 0x4b735cu: goto label_4b735c;
        case 0x4b7360u: goto label_4b7360;
        case 0x4b7364u: goto label_4b7364;
        case 0x4b7368u: goto label_4b7368;
        case 0x4b736cu: goto label_4b736c;
        case 0x4b7370u: goto label_4b7370;
        case 0x4b7374u: goto label_4b7374;
        case 0x4b7378u: goto label_4b7378;
        case 0x4b737cu: goto label_4b737c;
        case 0x4b7380u: goto label_4b7380;
        case 0x4b7384u: goto label_4b7384;
        case 0x4b7388u: goto label_4b7388;
        case 0x4b738cu: goto label_4b738c;
        case 0x4b7390u: goto label_4b7390;
        case 0x4b7394u: goto label_4b7394;
        case 0x4b7398u: goto label_4b7398;
        case 0x4b739cu: goto label_4b739c;
        case 0x4b73a0u: goto label_4b73a0;
        case 0x4b73a4u: goto label_4b73a4;
        case 0x4b73a8u: goto label_4b73a8;
        case 0x4b73acu: goto label_4b73ac;
        case 0x4b73b0u: goto label_4b73b0;
        case 0x4b73b4u: goto label_4b73b4;
        case 0x4b73b8u: goto label_4b73b8;
        case 0x4b73bcu: goto label_4b73bc;
        case 0x4b73c0u: goto label_4b73c0;
        case 0x4b73c4u: goto label_4b73c4;
        case 0x4b73c8u: goto label_4b73c8;
        case 0x4b73ccu: goto label_4b73cc;
        case 0x4b73d0u: goto label_4b73d0;
        case 0x4b73d4u: goto label_4b73d4;
        case 0x4b73d8u: goto label_4b73d8;
        case 0x4b73dcu: goto label_4b73dc;
        case 0x4b73e0u: goto label_4b73e0;
        case 0x4b73e4u: goto label_4b73e4;
        case 0x4b73e8u: goto label_4b73e8;
        case 0x4b73ecu: goto label_4b73ec;
        case 0x4b73f0u: goto label_4b73f0;
        case 0x4b73f4u: goto label_4b73f4;
        case 0x4b73f8u: goto label_4b73f8;
        case 0x4b73fcu: goto label_4b73fc;
        case 0x4b7400u: goto label_4b7400;
        case 0x4b7404u: goto label_4b7404;
        case 0x4b7408u: goto label_4b7408;
        case 0x4b740cu: goto label_4b740c;
        case 0x4b7410u: goto label_4b7410;
        case 0x4b7414u: goto label_4b7414;
        case 0x4b7418u: goto label_4b7418;
        case 0x4b741cu: goto label_4b741c;
        case 0x4b7420u: goto label_4b7420;
        case 0x4b7424u: goto label_4b7424;
        case 0x4b7428u: goto label_4b7428;
        case 0x4b742cu: goto label_4b742c;
        case 0x4b7430u: goto label_4b7430;
        case 0x4b7434u: goto label_4b7434;
        case 0x4b7438u: goto label_4b7438;
        case 0x4b743cu: goto label_4b743c;
        case 0x4b7440u: goto label_4b7440;
        case 0x4b7444u: goto label_4b7444;
        case 0x4b7448u: goto label_4b7448;
        case 0x4b744cu: goto label_4b744c;
        case 0x4b7450u: goto label_4b7450;
        case 0x4b7454u: goto label_4b7454;
        case 0x4b7458u: goto label_4b7458;
        case 0x4b745cu: goto label_4b745c;
        case 0x4b7460u: goto label_4b7460;
        case 0x4b7464u: goto label_4b7464;
        case 0x4b7468u: goto label_4b7468;
        case 0x4b746cu: goto label_4b746c;
        case 0x4b7470u: goto label_4b7470;
        case 0x4b7474u: goto label_4b7474;
        case 0x4b7478u: goto label_4b7478;
        case 0x4b747cu: goto label_4b747c;
        case 0x4b7480u: goto label_4b7480;
        case 0x4b7484u: goto label_4b7484;
        case 0x4b7488u: goto label_4b7488;
        case 0x4b748cu: goto label_4b748c;
        case 0x4b7490u: goto label_4b7490;
        case 0x4b7494u: goto label_4b7494;
        case 0x4b7498u: goto label_4b7498;
        case 0x4b749cu: goto label_4b749c;
        case 0x4b74a0u: goto label_4b74a0;
        case 0x4b74a4u: goto label_4b74a4;
        case 0x4b74a8u: goto label_4b74a8;
        case 0x4b74acu: goto label_4b74ac;
        case 0x4b74b0u: goto label_4b74b0;
        case 0x4b74b4u: goto label_4b74b4;
        case 0x4b74b8u: goto label_4b74b8;
        case 0x4b74bcu: goto label_4b74bc;
        case 0x4b74c0u: goto label_4b74c0;
        case 0x4b74c4u: goto label_4b74c4;
        case 0x4b74c8u: goto label_4b74c8;
        case 0x4b74ccu: goto label_4b74cc;
        case 0x4b74d0u: goto label_4b74d0;
        case 0x4b74d4u: goto label_4b74d4;
        case 0x4b74d8u: goto label_4b74d8;
        case 0x4b74dcu: goto label_4b74dc;
        case 0x4b74e0u: goto label_4b74e0;
        case 0x4b74e4u: goto label_4b74e4;
        case 0x4b74e8u: goto label_4b74e8;
        case 0x4b74ecu: goto label_4b74ec;
        case 0x4b74f0u: goto label_4b74f0;
        case 0x4b74f4u: goto label_4b74f4;
        case 0x4b74f8u: goto label_4b74f8;
        case 0x4b74fcu: goto label_4b74fc;
        case 0x4b7500u: goto label_4b7500;
        case 0x4b7504u: goto label_4b7504;
        case 0x4b7508u: goto label_4b7508;
        case 0x4b750cu: goto label_4b750c;
        case 0x4b7510u: goto label_4b7510;
        case 0x4b7514u: goto label_4b7514;
        case 0x4b7518u: goto label_4b7518;
        case 0x4b751cu: goto label_4b751c;
        case 0x4b7520u: goto label_4b7520;
        case 0x4b7524u: goto label_4b7524;
        case 0x4b7528u: goto label_4b7528;
        case 0x4b752cu: goto label_4b752c;
        case 0x4b7530u: goto label_4b7530;
        case 0x4b7534u: goto label_4b7534;
        case 0x4b7538u: goto label_4b7538;
        case 0x4b753cu: goto label_4b753c;
        case 0x4b7540u: goto label_4b7540;
        case 0x4b7544u: goto label_4b7544;
        case 0x4b7548u: goto label_4b7548;
        case 0x4b754cu: goto label_4b754c;
        case 0x4b7550u: goto label_4b7550;
        case 0x4b7554u: goto label_4b7554;
        case 0x4b7558u: goto label_4b7558;
        case 0x4b755cu: goto label_4b755c;
        case 0x4b7560u: goto label_4b7560;
        case 0x4b7564u: goto label_4b7564;
        case 0x4b7568u: goto label_4b7568;
        case 0x4b756cu: goto label_4b756c;
        case 0x4b7570u: goto label_4b7570;
        case 0x4b7574u: goto label_4b7574;
        case 0x4b7578u: goto label_4b7578;
        case 0x4b757cu: goto label_4b757c;
        case 0x4b7580u: goto label_4b7580;
        case 0x4b7584u: goto label_4b7584;
        case 0x4b7588u: goto label_4b7588;
        case 0x4b758cu: goto label_4b758c;
        case 0x4b7590u: goto label_4b7590;
        case 0x4b7594u: goto label_4b7594;
        case 0x4b7598u: goto label_4b7598;
        case 0x4b759cu: goto label_4b759c;
        case 0x4b75a0u: goto label_4b75a0;
        case 0x4b75a4u: goto label_4b75a4;
        case 0x4b75a8u: goto label_4b75a8;
        case 0x4b75acu: goto label_4b75ac;
        case 0x4b75b0u: goto label_4b75b0;
        case 0x4b75b4u: goto label_4b75b4;
        case 0x4b75b8u: goto label_4b75b8;
        case 0x4b75bcu: goto label_4b75bc;
        case 0x4b75c0u: goto label_4b75c0;
        case 0x4b75c4u: goto label_4b75c4;
        case 0x4b75c8u: goto label_4b75c8;
        case 0x4b75ccu: goto label_4b75cc;
        case 0x4b75d0u: goto label_4b75d0;
        case 0x4b75d4u: goto label_4b75d4;
        case 0x4b75d8u: goto label_4b75d8;
        case 0x4b75dcu: goto label_4b75dc;
        case 0x4b75e0u: goto label_4b75e0;
        case 0x4b75e4u: goto label_4b75e4;
        case 0x4b75e8u: goto label_4b75e8;
        case 0x4b75ecu: goto label_4b75ec;
        case 0x4b75f0u: goto label_4b75f0;
        case 0x4b75f4u: goto label_4b75f4;
        case 0x4b75f8u: goto label_4b75f8;
        case 0x4b75fcu: goto label_4b75fc;
        case 0x4b7600u: goto label_4b7600;
        case 0x4b7604u: goto label_4b7604;
        case 0x4b7608u: goto label_4b7608;
        case 0x4b760cu: goto label_4b760c;
        case 0x4b7610u: goto label_4b7610;
        case 0x4b7614u: goto label_4b7614;
        case 0x4b7618u: goto label_4b7618;
        case 0x4b761cu: goto label_4b761c;
        case 0x4b7620u: goto label_4b7620;
        case 0x4b7624u: goto label_4b7624;
        case 0x4b7628u: goto label_4b7628;
        case 0x4b762cu: goto label_4b762c;
        case 0x4b7630u: goto label_4b7630;
        case 0x4b7634u: goto label_4b7634;
        case 0x4b7638u: goto label_4b7638;
        case 0x4b763cu: goto label_4b763c;
        case 0x4b7640u: goto label_4b7640;
        case 0x4b7644u: goto label_4b7644;
        case 0x4b7648u: goto label_4b7648;
        case 0x4b764cu: goto label_4b764c;
        case 0x4b7650u: goto label_4b7650;
        case 0x4b7654u: goto label_4b7654;
        case 0x4b7658u: goto label_4b7658;
        case 0x4b765cu: goto label_4b765c;
        case 0x4b7660u: goto label_4b7660;
        case 0x4b7664u: goto label_4b7664;
        case 0x4b7668u: goto label_4b7668;
        case 0x4b766cu: goto label_4b766c;
        case 0x4b7670u: goto label_4b7670;
        case 0x4b7674u: goto label_4b7674;
        case 0x4b7678u: goto label_4b7678;
        case 0x4b767cu: goto label_4b767c;
        case 0x4b7680u: goto label_4b7680;
        case 0x4b7684u: goto label_4b7684;
        case 0x4b7688u: goto label_4b7688;
        case 0x4b768cu: goto label_4b768c;
        case 0x4b7690u: goto label_4b7690;
        case 0x4b7694u: goto label_4b7694;
        case 0x4b7698u: goto label_4b7698;
        case 0x4b769cu: goto label_4b769c;
        case 0x4b76a0u: goto label_4b76a0;
        case 0x4b76a4u: goto label_4b76a4;
        case 0x4b76a8u: goto label_4b76a8;
        case 0x4b76acu: goto label_4b76ac;
        case 0x4b76b0u: goto label_4b76b0;
        case 0x4b76b4u: goto label_4b76b4;
        case 0x4b76b8u: goto label_4b76b8;
        case 0x4b76bcu: goto label_4b76bc;
        case 0x4b76c0u: goto label_4b76c0;
        case 0x4b76c4u: goto label_4b76c4;
        case 0x4b76c8u: goto label_4b76c8;
        case 0x4b76ccu: goto label_4b76cc;
        case 0x4b76d0u: goto label_4b76d0;
        case 0x4b76d4u: goto label_4b76d4;
        case 0x4b76d8u: goto label_4b76d8;
        case 0x4b76dcu: goto label_4b76dc;
        case 0x4b76e0u: goto label_4b76e0;
        case 0x4b76e4u: goto label_4b76e4;
        case 0x4b76e8u: goto label_4b76e8;
        case 0x4b76ecu: goto label_4b76ec;
        case 0x4b76f0u: goto label_4b76f0;
        case 0x4b76f4u: goto label_4b76f4;
        case 0x4b76f8u: goto label_4b76f8;
        case 0x4b76fcu: goto label_4b76fc;
        case 0x4b7700u: goto label_4b7700;
        case 0x4b7704u: goto label_4b7704;
        case 0x4b7708u: goto label_4b7708;
        case 0x4b770cu: goto label_4b770c;
        case 0x4b7710u: goto label_4b7710;
        case 0x4b7714u: goto label_4b7714;
        case 0x4b7718u: goto label_4b7718;
        case 0x4b771cu: goto label_4b771c;
        case 0x4b7720u: goto label_4b7720;
        case 0x4b7724u: goto label_4b7724;
        case 0x4b7728u: goto label_4b7728;
        case 0x4b772cu: goto label_4b772c;
        case 0x4b7730u: goto label_4b7730;
        case 0x4b7734u: goto label_4b7734;
        case 0x4b7738u: goto label_4b7738;
        case 0x4b773cu: goto label_4b773c;
        case 0x4b7740u: goto label_4b7740;
        case 0x4b7744u: goto label_4b7744;
        case 0x4b7748u: goto label_4b7748;
        case 0x4b774cu: goto label_4b774c;
        case 0x4b7750u: goto label_4b7750;
        case 0x4b7754u: goto label_4b7754;
        case 0x4b7758u: goto label_4b7758;
        case 0x4b775cu: goto label_4b775c;
        case 0x4b7760u: goto label_4b7760;
        case 0x4b7764u: goto label_4b7764;
        case 0x4b7768u: goto label_4b7768;
        case 0x4b776cu: goto label_4b776c;
        case 0x4b7770u: goto label_4b7770;
        case 0x4b7774u: goto label_4b7774;
        case 0x4b7778u: goto label_4b7778;
        case 0x4b777cu: goto label_4b777c;
        case 0x4b7780u: goto label_4b7780;
        case 0x4b7784u: goto label_4b7784;
        case 0x4b7788u: goto label_4b7788;
        case 0x4b778cu: goto label_4b778c;
        case 0x4b7790u: goto label_4b7790;
        case 0x4b7794u: goto label_4b7794;
        case 0x4b7798u: goto label_4b7798;
        case 0x4b779cu: goto label_4b779c;
        case 0x4b77a0u: goto label_4b77a0;
        case 0x4b77a4u: goto label_4b77a4;
        case 0x4b77a8u: goto label_4b77a8;
        case 0x4b77acu: goto label_4b77ac;
        case 0x4b77b0u: goto label_4b77b0;
        case 0x4b77b4u: goto label_4b77b4;
        case 0x4b77b8u: goto label_4b77b8;
        case 0x4b77bcu: goto label_4b77bc;
        case 0x4b77c0u: goto label_4b77c0;
        case 0x4b77c4u: goto label_4b77c4;
        case 0x4b77c8u: goto label_4b77c8;
        case 0x4b77ccu: goto label_4b77cc;
        case 0x4b77d0u: goto label_4b77d0;
        case 0x4b77d4u: goto label_4b77d4;
        case 0x4b77d8u: goto label_4b77d8;
        case 0x4b77dcu: goto label_4b77dc;
        case 0x4b77e0u: goto label_4b77e0;
        case 0x4b77e4u: goto label_4b77e4;
        case 0x4b77e8u: goto label_4b77e8;
        case 0x4b77ecu: goto label_4b77ec;
        case 0x4b77f0u: goto label_4b77f0;
        case 0x4b77f4u: goto label_4b77f4;
        case 0x4b77f8u: goto label_4b77f8;
        case 0x4b77fcu: goto label_4b77fc;
        case 0x4b7800u: goto label_4b7800;
        case 0x4b7804u: goto label_4b7804;
        case 0x4b7808u: goto label_4b7808;
        case 0x4b780cu: goto label_4b780c;
        case 0x4b7810u: goto label_4b7810;
        case 0x4b7814u: goto label_4b7814;
        case 0x4b7818u: goto label_4b7818;
        case 0x4b781cu: goto label_4b781c;
        case 0x4b7820u: goto label_4b7820;
        case 0x4b7824u: goto label_4b7824;
        case 0x4b7828u: goto label_4b7828;
        case 0x4b782cu: goto label_4b782c;
        case 0x4b7830u: goto label_4b7830;
        case 0x4b7834u: goto label_4b7834;
        case 0x4b7838u: goto label_4b7838;
        case 0x4b783cu: goto label_4b783c;
        case 0x4b7840u: goto label_4b7840;
        case 0x4b7844u: goto label_4b7844;
        case 0x4b7848u: goto label_4b7848;
        case 0x4b784cu: goto label_4b784c;
        case 0x4b7850u: goto label_4b7850;
        case 0x4b7854u: goto label_4b7854;
        case 0x4b7858u: goto label_4b7858;
        case 0x4b785cu: goto label_4b785c;
        case 0x4b7860u: goto label_4b7860;
        case 0x4b7864u: goto label_4b7864;
        case 0x4b7868u: goto label_4b7868;
        case 0x4b786cu: goto label_4b786c;
        case 0x4b7870u: goto label_4b7870;
        case 0x4b7874u: goto label_4b7874;
        case 0x4b7878u: goto label_4b7878;
        case 0x4b787cu: goto label_4b787c;
        case 0x4b7880u: goto label_4b7880;
        case 0x4b7884u: goto label_4b7884;
        case 0x4b7888u: goto label_4b7888;
        case 0x4b788cu: goto label_4b788c;
        case 0x4b7890u: goto label_4b7890;
        case 0x4b7894u: goto label_4b7894;
        case 0x4b7898u: goto label_4b7898;
        case 0x4b789cu: goto label_4b789c;
        case 0x4b78a0u: goto label_4b78a0;
        case 0x4b78a4u: goto label_4b78a4;
        case 0x4b78a8u: goto label_4b78a8;
        case 0x4b78acu: goto label_4b78ac;
        case 0x4b78b0u: goto label_4b78b0;
        case 0x4b78b4u: goto label_4b78b4;
        case 0x4b78b8u: goto label_4b78b8;
        case 0x4b78bcu: goto label_4b78bc;
        case 0x4b78c0u: goto label_4b78c0;
        case 0x4b78c4u: goto label_4b78c4;
        case 0x4b78c8u: goto label_4b78c8;
        case 0x4b78ccu: goto label_4b78cc;
        case 0x4b78d0u: goto label_4b78d0;
        case 0x4b78d4u: goto label_4b78d4;
        case 0x4b78d8u: goto label_4b78d8;
        case 0x4b78dcu: goto label_4b78dc;
        case 0x4b78e0u: goto label_4b78e0;
        case 0x4b78e4u: goto label_4b78e4;
        case 0x4b78e8u: goto label_4b78e8;
        case 0x4b78ecu: goto label_4b78ec;
        case 0x4b78f0u: goto label_4b78f0;
        case 0x4b78f4u: goto label_4b78f4;
        case 0x4b78f8u: goto label_4b78f8;
        case 0x4b78fcu: goto label_4b78fc;
        case 0x4b7900u: goto label_4b7900;
        case 0x4b7904u: goto label_4b7904;
        case 0x4b7908u: goto label_4b7908;
        case 0x4b790cu: goto label_4b790c;
        case 0x4b7910u: goto label_4b7910;
        case 0x4b7914u: goto label_4b7914;
        case 0x4b7918u: goto label_4b7918;
        case 0x4b791cu: goto label_4b791c;
        case 0x4b7920u: goto label_4b7920;
        case 0x4b7924u: goto label_4b7924;
        case 0x4b7928u: goto label_4b7928;
        case 0x4b792cu: goto label_4b792c;
        case 0x4b7930u: goto label_4b7930;
        case 0x4b7934u: goto label_4b7934;
        case 0x4b7938u: goto label_4b7938;
        case 0x4b793cu: goto label_4b793c;
        case 0x4b7940u: goto label_4b7940;
        case 0x4b7944u: goto label_4b7944;
        case 0x4b7948u: goto label_4b7948;
        case 0x4b794cu: goto label_4b794c;
        case 0x4b7950u: goto label_4b7950;
        case 0x4b7954u: goto label_4b7954;
        case 0x4b7958u: goto label_4b7958;
        case 0x4b795cu: goto label_4b795c;
        case 0x4b7960u: goto label_4b7960;
        case 0x4b7964u: goto label_4b7964;
        case 0x4b7968u: goto label_4b7968;
        case 0x4b796cu: goto label_4b796c;
        case 0x4b7970u: goto label_4b7970;
        case 0x4b7974u: goto label_4b7974;
        case 0x4b7978u: goto label_4b7978;
        case 0x4b797cu: goto label_4b797c;
        case 0x4b7980u: goto label_4b7980;
        case 0x4b7984u: goto label_4b7984;
        case 0x4b7988u: goto label_4b7988;
        case 0x4b798cu: goto label_4b798c;
        case 0x4b7990u: goto label_4b7990;
        case 0x4b7994u: goto label_4b7994;
        case 0x4b7998u: goto label_4b7998;
        case 0x4b799cu: goto label_4b799c;
        case 0x4b79a0u: goto label_4b79a0;
        case 0x4b79a4u: goto label_4b79a4;
        case 0x4b79a8u: goto label_4b79a8;
        case 0x4b79acu: goto label_4b79ac;
        case 0x4b79b0u: goto label_4b79b0;
        case 0x4b79b4u: goto label_4b79b4;
        case 0x4b79b8u: goto label_4b79b8;
        case 0x4b79bcu: goto label_4b79bc;
        case 0x4b79c0u: goto label_4b79c0;
        case 0x4b79c4u: goto label_4b79c4;
        case 0x4b79c8u: goto label_4b79c8;
        case 0x4b79ccu: goto label_4b79cc;
        case 0x4b79d0u: goto label_4b79d0;
        case 0x4b79d4u: goto label_4b79d4;
        case 0x4b79d8u: goto label_4b79d8;
        case 0x4b79dcu: goto label_4b79dc;
        case 0x4b79e0u: goto label_4b79e0;
        case 0x4b79e4u: goto label_4b79e4;
        case 0x4b79e8u: goto label_4b79e8;
        case 0x4b79ecu: goto label_4b79ec;
        case 0x4b79f0u: goto label_4b79f0;
        case 0x4b79f4u: goto label_4b79f4;
        case 0x4b79f8u: goto label_4b79f8;
        case 0x4b79fcu: goto label_4b79fc;
        case 0x4b7a00u: goto label_4b7a00;
        case 0x4b7a04u: goto label_4b7a04;
        case 0x4b7a08u: goto label_4b7a08;
        case 0x4b7a0cu: goto label_4b7a0c;
        case 0x4b7a10u: goto label_4b7a10;
        case 0x4b7a14u: goto label_4b7a14;
        case 0x4b7a18u: goto label_4b7a18;
        case 0x4b7a1cu: goto label_4b7a1c;
        case 0x4b7a20u: goto label_4b7a20;
        case 0x4b7a24u: goto label_4b7a24;
        case 0x4b7a28u: goto label_4b7a28;
        case 0x4b7a2cu: goto label_4b7a2c;
        case 0x4b7a30u: goto label_4b7a30;
        case 0x4b7a34u: goto label_4b7a34;
        case 0x4b7a38u: goto label_4b7a38;
        case 0x4b7a3cu: goto label_4b7a3c;
        case 0x4b7a40u: goto label_4b7a40;
        case 0x4b7a44u: goto label_4b7a44;
        case 0x4b7a48u: goto label_4b7a48;
        case 0x4b7a4cu: goto label_4b7a4c;
        case 0x4b7a50u: goto label_4b7a50;
        case 0x4b7a54u: goto label_4b7a54;
        case 0x4b7a58u: goto label_4b7a58;
        case 0x4b7a5cu: goto label_4b7a5c;
        case 0x4b7a60u: goto label_4b7a60;
        case 0x4b7a64u: goto label_4b7a64;
        case 0x4b7a68u: goto label_4b7a68;
        case 0x4b7a6cu: goto label_4b7a6c;
        case 0x4b7a70u: goto label_4b7a70;
        case 0x4b7a74u: goto label_4b7a74;
        case 0x4b7a78u: goto label_4b7a78;
        case 0x4b7a7cu: goto label_4b7a7c;
        case 0x4b7a80u: goto label_4b7a80;
        case 0x4b7a84u: goto label_4b7a84;
        case 0x4b7a88u: goto label_4b7a88;
        case 0x4b7a8cu: goto label_4b7a8c;
        case 0x4b7a90u: goto label_4b7a90;
        case 0x4b7a94u: goto label_4b7a94;
        case 0x4b7a98u: goto label_4b7a98;
        case 0x4b7a9cu: goto label_4b7a9c;
        case 0x4b7aa0u: goto label_4b7aa0;
        case 0x4b7aa4u: goto label_4b7aa4;
        case 0x4b7aa8u: goto label_4b7aa8;
        case 0x4b7aacu: goto label_4b7aac;
        case 0x4b7ab0u: goto label_4b7ab0;
        case 0x4b7ab4u: goto label_4b7ab4;
        case 0x4b7ab8u: goto label_4b7ab8;
        case 0x4b7abcu: goto label_4b7abc;
        case 0x4b7ac0u: goto label_4b7ac0;
        case 0x4b7ac4u: goto label_4b7ac4;
        case 0x4b7ac8u: goto label_4b7ac8;
        case 0x4b7accu: goto label_4b7acc;
        case 0x4b7ad0u: goto label_4b7ad0;
        case 0x4b7ad4u: goto label_4b7ad4;
        case 0x4b7ad8u: goto label_4b7ad8;
        case 0x4b7adcu: goto label_4b7adc;
        case 0x4b7ae0u: goto label_4b7ae0;
        case 0x4b7ae4u: goto label_4b7ae4;
        case 0x4b7ae8u: goto label_4b7ae8;
        case 0x4b7aecu: goto label_4b7aec;
        case 0x4b7af0u: goto label_4b7af0;
        case 0x4b7af4u: goto label_4b7af4;
        case 0x4b7af8u: goto label_4b7af8;
        case 0x4b7afcu: goto label_4b7afc;
        case 0x4b7b00u: goto label_4b7b00;
        case 0x4b7b04u: goto label_4b7b04;
        case 0x4b7b08u: goto label_4b7b08;
        case 0x4b7b0cu: goto label_4b7b0c;
        case 0x4b7b10u: goto label_4b7b10;
        case 0x4b7b14u: goto label_4b7b14;
        case 0x4b7b18u: goto label_4b7b18;
        case 0x4b7b1cu: goto label_4b7b1c;
        case 0x4b7b20u: goto label_4b7b20;
        case 0x4b7b24u: goto label_4b7b24;
        case 0x4b7b28u: goto label_4b7b28;
        case 0x4b7b2cu: goto label_4b7b2c;
        case 0x4b7b30u: goto label_4b7b30;
        case 0x4b7b34u: goto label_4b7b34;
        case 0x4b7b38u: goto label_4b7b38;
        case 0x4b7b3cu: goto label_4b7b3c;
        case 0x4b7b40u: goto label_4b7b40;
        case 0x4b7b44u: goto label_4b7b44;
        case 0x4b7b48u: goto label_4b7b48;
        case 0x4b7b4cu: goto label_4b7b4c;
        case 0x4b7b50u: goto label_4b7b50;
        case 0x4b7b54u: goto label_4b7b54;
        case 0x4b7b58u: goto label_4b7b58;
        case 0x4b7b5cu: goto label_4b7b5c;
        case 0x4b7b60u: goto label_4b7b60;
        case 0x4b7b64u: goto label_4b7b64;
        case 0x4b7b68u: goto label_4b7b68;
        case 0x4b7b6cu: goto label_4b7b6c;
        case 0x4b7b70u: goto label_4b7b70;
        case 0x4b7b74u: goto label_4b7b74;
        case 0x4b7b78u: goto label_4b7b78;
        case 0x4b7b7cu: goto label_4b7b7c;
        case 0x4b7b80u: goto label_4b7b80;
        case 0x4b7b84u: goto label_4b7b84;
        case 0x4b7b88u: goto label_4b7b88;
        case 0x4b7b8cu: goto label_4b7b8c;
        case 0x4b7b90u: goto label_4b7b90;
        case 0x4b7b94u: goto label_4b7b94;
        case 0x4b7b98u: goto label_4b7b98;
        case 0x4b7b9cu: goto label_4b7b9c;
        case 0x4b7ba0u: goto label_4b7ba0;
        case 0x4b7ba4u: goto label_4b7ba4;
        case 0x4b7ba8u: goto label_4b7ba8;
        case 0x4b7bacu: goto label_4b7bac;
        case 0x4b7bb0u: goto label_4b7bb0;
        case 0x4b7bb4u: goto label_4b7bb4;
        case 0x4b7bb8u: goto label_4b7bb8;
        case 0x4b7bbcu: goto label_4b7bbc;
        case 0x4b7bc0u: goto label_4b7bc0;
        case 0x4b7bc4u: goto label_4b7bc4;
        case 0x4b7bc8u: goto label_4b7bc8;
        case 0x4b7bccu: goto label_4b7bcc;
        case 0x4b7bd0u: goto label_4b7bd0;
        case 0x4b7bd4u: goto label_4b7bd4;
        case 0x4b7bd8u: goto label_4b7bd8;
        case 0x4b7bdcu: goto label_4b7bdc;
        case 0x4b7be0u: goto label_4b7be0;
        case 0x4b7be4u: goto label_4b7be4;
        case 0x4b7be8u: goto label_4b7be8;
        case 0x4b7becu: goto label_4b7bec;
        case 0x4b7bf0u: goto label_4b7bf0;
        case 0x4b7bf4u: goto label_4b7bf4;
        case 0x4b7bf8u: goto label_4b7bf8;
        case 0x4b7bfcu: goto label_4b7bfc;
        case 0x4b7c00u: goto label_4b7c00;
        case 0x4b7c04u: goto label_4b7c04;
        case 0x4b7c08u: goto label_4b7c08;
        case 0x4b7c0cu: goto label_4b7c0c;
        case 0x4b7c10u: goto label_4b7c10;
        case 0x4b7c14u: goto label_4b7c14;
        case 0x4b7c18u: goto label_4b7c18;
        case 0x4b7c1cu: goto label_4b7c1c;
        case 0x4b7c20u: goto label_4b7c20;
        case 0x4b7c24u: goto label_4b7c24;
        case 0x4b7c28u: goto label_4b7c28;
        case 0x4b7c2cu: goto label_4b7c2c;
        case 0x4b7c30u: goto label_4b7c30;
        case 0x4b7c34u: goto label_4b7c34;
        case 0x4b7c38u: goto label_4b7c38;
        case 0x4b7c3cu: goto label_4b7c3c;
        case 0x4b7c40u: goto label_4b7c40;
        case 0x4b7c44u: goto label_4b7c44;
        case 0x4b7c48u: goto label_4b7c48;
        case 0x4b7c4cu: goto label_4b7c4c;
        case 0x4b7c50u: goto label_4b7c50;
        case 0x4b7c54u: goto label_4b7c54;
        case 0x4b7c58u: goto label_4b7c58;
        case 0x4b7c5cu: goto label_4b7c5c;
        case 0x4b7c60u: goto label_4b7c60;
        case 0x4b7c64u: goto label_4b7c64;
        case 0x4b7c68u: goto label_4b7c68;
        case 0x4b7c6cu: goto label_4b7c6c;
        case 0x4b7c70u: goto label_4b7c70;
        case 0x4b7c74u: goto label_4b7c74;
        case 0x4b7c78u: goto label_4b7c78;
        case 0x4b7c7cu: goto label_4b7c7c;
        case 0x4b7c80u: goto label_4b7c80;
        case 0x4b7c84u: goto label_4b7c84;
        case 0x4b7c88u: goto label_4b7c88;
        case 0x4b7c8cu: goto label_4b7c8c;
        case 0x4b7c90u: goto label_4b7c90;
        case 0x4b7c94u: goto label_4b7c94;
        case 0x4b7c98u: goto label_4b7c98;
        case 0x4b7c9cu: goto label_4b7c9c;
        case 0x4b7ca0u: goto label_4b7ca0;
        case 0x4b7ca4u: goto label_4b7ca4;
        case 0x4b7ca8u: goto label_4b7ca8;
        case 0x4b7cacu: goto label_4b7cac;
        case 0x4b7cb0u: goto label_4b7cb0;
        case 0x4b7cb4u: goto label_4b7cb4;
        case 0x4b7cb8u: goto label_4b7cb8;
        case 0x4b7cbcu: goto label_4b7cbc;
        case 0x4b7cc0u: goto label_4b7cc0;
        case 0x4b7cc4u: goto label_4b7cc4;
        case 0x4b7cc8u: goto label_4b7cc8;
        case 0x4b7cccu: goto label_4b7ccc;
        case 0x4b7cd0u: goto label_4b7cd0;
        case 0x4b7cd4u: goto label_4b7cd4;
        case 0x4b7cd8u: goto label_4b7cd8;
        case 0x4b7cdcu: goto label_4b7cdc;
        case 0x4b7ce0u: goto label_4b7ce0;
        case 0x4b7ce4u: goto label_4b7ce4;
        case 0x4b7ce8u: goto label_4b7ce8;
        case 0x4b7cecu: goto label_4b7cec;
        case 0x4b7cf0u: goto label_4b7cf0;
        case 0x4b7cf4u: goto label_4b7cf4;
        case 0x4b7cf8u: goto label_4b7cf8;
        case 0x4b7cfcu: goto label_4b7cfc;
        case 0x4b7d00u: goto label_4b7d00;
        case 0x4b7d04u: goto label_4b7d04;
        case 0x4b7d08u: goto label_4b7d08;
        case 0x4b7d0cu: goto label_4b7d0c;
        case 0x4b7d10u: goto label_4b7d10;
        case 0x4b7d14u: goto label_4b7d14;
        case 0x4b7d18u: goto label_4b7d18;
        case 0x4b7d1cu: goto label_4b7d1c;
        case 0x4b7d20u: goto label_4b7d20;
        case 0x4b7d24u: goto label_4b7d24;
        case 0x4b7d28u: goto label_4b7d28;
        case 0x4b7d2cu: goto label_4b7d2c;
        default: break;
    }

    ctx->pc = 0x4b6fe0u;

label_4b6fe0:
    // 0x4b6fe0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4b6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4b6fe4:
    // 0x4b6fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6fe8:
    // 0x4b6fe8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4b6fec:
    // 0x4b6fec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4b6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4b6ff0:
    // 0x4b6ff0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b6ff4:
    // 0x4b6ff4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4b6ff4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b6ff8:
    // 0x4b6ff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b6ffc:
    // 0x4b6ffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b7000:
    // 0x4b7000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b7000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b7004:
    // 0x4b7004: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b7004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7008:
    // 0x4b7008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b700c:
    // 0x4b700c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4b700cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b7010:
    // 0x4b7010: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b7010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b7014:
    // 0x4b7014: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4b7014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4b7018:
    // 0x4b7018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b7018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b701c:
    // 0x4b701c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4b701cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b7020:
    // 0x4b7020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b7020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b7024:
    // 0x4b7024: 0x2438004  sllv        $s0, $v1, $s2
    ctx->pc = 0x4b7024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_4b7028:
    // 0x4b7028: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x4b7028u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_4b702c:
    // 0x4b702c: 0x2002827  not         $a1, $s0
    ctx->pc = 0x4b702cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_4b7030:
    // 0x4b7030: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4b7030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4b7034:
    // 0x4b7034: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b7034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4b7038:
    // 0x4b7038: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x4b7038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_4b703c:
    // 0x4b703c: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4b703cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4b7040:
    // 0x4b7040: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_4b7044:
    if (ctx->pc == 0x4B7044u) {
        ctx->pc = 0x4B7044u;
            // 0x4b7044: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7048u;
        goto label_4b7048;
    }
    ctx->pc = 0x4B7040u;
    {
        const bool branch_taken_0x4b7040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7040u;
            // 0x4b7044: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7040) {
            ctx->pc = 0x4B7218u;
            goto label_4b7218;
        }
    }
    ctx->pc = 0x4B7048u;
label_4b7048:
    // 0x4b7048: 0x8ea400d0  lw          $a0, 0xD0($s5)
    ctx->pc = 0x4b7048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_4b704c:
    // 0x4b704c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b7050:
    // 0x4b7050: 0x54830072  bnel        $a0, $v1, . + 4 + (0x72 << 2)
label_4b7054:
    if (ctx->pc == 0x4B7054u) {
        ctx->pc = 0x4B7054u;
            // 0x4b7054: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4B7058u;
        goto label_4b7058;
    }
    ctx->pc = 0x4B7050u;
    {
        const bool branch_taken_0x4b7050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b7050) {
            ctx->pc = 0x4B7054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7050u;
            // 0x4b7054: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B721Cu;
            goto label_4b721c;
        }
    }
    ctx->pc = 0x4B7058u;
label_4b7058:
    // 0x4b7058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b705c:
    // 0x4b705c: 0xc04f278  jal         func_13C9E0
label_4b7060:
    if (ctx->pc == 0x4B7060u) {
        ctx->pc = 0x4B7060u;
            // 0x4b7060: 0x26a50100  addiu       $a1, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->pc = 0x4B7064u;
        goto label_4b7064;
    }
    ctx->pc = 0x4B705Cu;
    SET_GPR_U32(ctx, 31, 0x4B7064u);
    ctx->pc = 0x4B7060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B705Cu;
            // 0x4b7060: 0x26a50100  addiu       $a1, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7064u; }
        if (ctx->pc != 0x4B7064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7064u; }
        if (ctx->pc != 0x4B7064u) { return; }
    }
    ctx->pc = 0x4B7064u;
label_4b7064:
    // 0x4b7064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b7068:
    // 0x4b7068: 0xc04ce80  jal         func_133A00
label_4b706c:
    if (ctx->pc == 0x4B706Cu) {
        ctx->pc = 0x4B706Cu;
            // 0x4b706c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4B7070u;
        goto label_4b7070;
    }
    ctx->pc = 0x4B7068u;
    SET_GPR_U32(ctx, 31, 0x4B7070u);
    ctx->pc = 0x4B706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7068u;
            // 0x4b706c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7070u; }
        if (ctx->pc != 0x4B7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7070u; }
        if (ctx->pc != 0x4B7070u) { return; }
    }
    ctx->pc = 0x4B7070u;
label_4b7070:
    // 0x4b7070: 0xc0d4108  jal         func_350420
label_4b7074:
    if (ctx->pc == 0x4B7074u) {
        ctx->pc = 0x4B7074u;
            // 0x4b7074: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4B7078u;
        goto label_4b7078;
    }
    ctx->pc = 0x4B7070u;
    SET_GPR_U32(ctx, 31, 0x4B7078u);
    ctx->pc = 0x4B7074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7070u;
            // 0x4b7074: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7078u; }
        if (ctx->pc != 0x4B7078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7078u; }
        if (ctx->pc != 0x4B7078u) { return; }
    }
    ctx->pc = 0x4B7078u;
label_4b7078:
    // 0x4b7078: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b7078u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b707c:
    // 0x4b707c: 0xc0d4104  jal         func_350410
label_4b7080:
    if (ctx->pc == 0x4B7080u) {
        ctx->pc = 0x4B7080u;
            // 0x4b7080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7084u;
        goto label_4b7084;
    }
    ctx->pc = 0x4B707Cu;
    SET_GPR_U32(ctx, 31, 0x4B7084u);
    ctx->pc = 0x4B7080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B707Cu;
            // 0x4b7080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7084u; }
        if (ctx->pc != 0x4B7084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7084u; }
        if (ctx->pc != 0x4B7084u) { return; }
    }
    ctx->pc = 0x4B7084u;
label_4b7084:
    // 0x4b7084: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4b7084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7088:
    // 0x4b7088: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b7088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b708c:
    // 0x4b708c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b7090:
    // 0x4b7090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b7090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7094:
    // 0x4b7094: 0xc44c64b8  lwc1        $f12, 0x64B8($v0)
    ctx->pc = 0x4b7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b7098:
    // 0x4b7098: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4b7098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b709c:
    // 0x4b709c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4b709cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b70a0:
    // 0x4b70a0: 0xc0d40ac  jal         func_3502B0
label_4b70a4:
    if (ctx->pc == 0x4B70A4u) {
        ctx->pc = 0x4B70A4u;
            // 0x4b70a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B70A8u;
        goto label_4b70a8;
    }
    ctx->pc = 0x4B70A0u;
    SET_GPR_U32(ctx, 31, 0x4B70A8u);
    ctx->pc = 0x4B70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B70A0u;
            // 0x4b70a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B70A8u; }
        if (ctx->pc != 0x4B70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B70A8u; }
        if (ctx->pc != 0x4B70A8u) { return; }
    }
    ctx->pc = 0x4B70A8u;
label_4b70a8:
    // 0x4b70a8: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x4b70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_4b70ac:
    // 0x4b70ac: 0x28520002  slti        $s2, $v0, 0x2
    ctx->pc = 0x4b70acu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b70b0:
    // 0x4b70b0: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x4b70b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4b70b4:
    // 0x4b70b4: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x4b70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_4b70b8:
    // 0x4b70b8: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x4b70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_4b70bc:
    // 0x4b70bc: 0xc0d590c  jal         func_356430
label_4b70c0:
    if (ctx->pc == 0x4B70C0u) {
        ctx->pc = 0x4B70C0u;
            // 0x4b70c0: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x4B70C4u;
        goto label_4b70c4;
    }
    ctx->pc = 0x4B70BCu;
    SET_GPR_U32(ctx, 31, 0x4B70C4u);
    ctx->pc = 0x4B70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B70BCu;
            // 0x4b70c0: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B70C4u; }
        if (ctx->pc != 0x4B70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B70C4u; }
        if (ctx->pc != 0x4B70C4u) { return; }
    }
    ctx->pc = 0x4B70C4u;
label_4b70c4:
    // 0x4b70c4: 0x12400054  beqz        $s2, . + 4 + (0x54 << 2)
label_4b70c8:
    if (ctx->pc == 0x4B70C8u) {
        ctx->pc = 0x4B70CCu;
        goto label_4b70cc;
    }
    ctx->pc = 0x4B70C4u;
    {
        const bool branch_taken_0x4b70c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b70c4) {
            ctx->pc = 0x4B7218u;
            goto label_4b7218;
        }
    }
    ctx->pc = 0x4B70CCu;
label_4b70cc:
    // 0x4b70cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b70d0:
    // 0x4b70d0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4b70d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4b70d4:
    // 0x4b70d4: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x4b70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4b70d8:
    // 0x4b70d8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4b70d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4b70dc:
    // 0x4b70dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b70e0:
    // 0x4b70e0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4b70e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b70e4:
    // 0x4b70e4: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x4b70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4b70e8:
    // 0x4b70e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b70ec:
    // 0x4b70ec: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x4b70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_4b70f0:
    // 0x4b70f0: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x4b70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_4b70f4:
    // 0x4b70f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4b70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4b70f8:
    // 0x4b70f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b70fc:
    // 0x4b70fc: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x4b70fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b7100:
    // 0x4b7100: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x4b7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4b7104:
    // 0x4b7104: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b7104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b7108:
    // 0x4b7108: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x4b7108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_4b710c:
    // 0x4b710c: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x4b710cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_4b7110:
    // 0x4b7110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b7110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b7114:
    // 0x4b7114: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x4b7114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_4b7118:
    // 0x4b7118: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4b7118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4b711c:
    // 0x4b711c: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x4b711cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4b7120:
    // 0x4b7120: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x4b7120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4b7124:
    // 0x4b7124: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x4b7124u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4b7128:
    // 0x4b7128: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x4b7128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4b712c:
    // 0x4b712c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b7130:
    // 0x4b7130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b7130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7134:
    // 0x4b7134: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x4b7134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4b7138:
    // 0x4b7138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b7138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b713c:
    // 0x4b713c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4b713cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4b7140:
    // 0x4b7140: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4b7140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4b7144:
    // 0x4b7144: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4b7144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4b7148:
    // 0x4b7148: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x4b7148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4b714c:
    // 0x4b714c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b7150:
    // 0x4b7150: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4b7150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4b7154:
    // 0x4b7154: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x4b7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4b7158:
    // 0x4b7158: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x4b7158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_4b715c:
    // 0x4b715c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4b715cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4b7160:
    // 0x4b7160: 0xc04e4a4  jal         func_139290
label_4b7164:
    if (ctx->pc == 0x4B7164u) {
        ctx->pc = 0x4B7164u;
            // 0x4b7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7168u;
        goto label_4b7168;
    }
    ctx->pc = 0x4B7160u;
    SET_GPR_U32(ctx, 31, 0x4B7168u);
    ctx->pc = 0x4B7164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7160u;
            // 0x4b7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7168u; }
        if (ctx->pc != 0x4B7168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7168u; }
        if (ctx->pc != 0x4B7168u) { return; }
    }
    ctx->pc = 0x4B7168u;
label_4b7168:
    // 0x4b7168: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x4b7168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_4b716c:
    // 0x4b716c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x4b716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4b7170:
    // 0x4b7170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b7170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b7174:
    // 0x4b7174: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_4b7178:
    if (ctx->pc == 0x4B7178u) {
        ctx->pc = 0x4B7178u;
            // 0x4b7178: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x4B717Cu;
        goto label_4b717c;
    }
    ctx->pc = 0x4B7174u;
    {
        const bool branch_taken_0x4b7174 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x4b7174) {
            ctx->pc = 0x4B7178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7174u;
            // 0x4b7178: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7188u;
            goto label_4b7188;
        }
    }
    ctx->pc = 0x4B717Cu;
label_4b717c:
    // 0x4b717c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4b717cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7180:
    // 0x4b7180: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b7184:
    if (ctx->pc == 0x4B7184u) {
        ctx->pc = 0x4B7184u;
            // 0x4b7184: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B7188u;
        goto label_4b7188;
    }
    ctx->pc = 0x4B7180u;
    {
        const bool branch_taken_0x4b7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7180u;
            // 0x4b7184: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7180) {
            ctx->pc = 0x4B71A0u;
            goto label_4b71a0;
        }
    }
    ctx->pc = 0x4B7188u;
label_4b7188:
    // 0x4b7188: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4b7188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4b718c:
    // 0x4b718c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b7190:
    // 0x4b7190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b7190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7194:
    // 0x4b7194: 0x0  nop
    ctx->pc = 0x4b7194u;
    // NOP
label_4b7198:
    // 0x4b7198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b7198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b719c:
    // 0x4b719c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4b719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4b71a0:
    // 0x4b71a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b71a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b71a4:
    // 0x4b71a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b71a8:
    // 0x4b71a8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b71ac:
    // 0x4b71ac: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b71b0:
    // 0x4b71b0: 0xc0477a8  jal         func_11DEA0
label_4b71b4:
    if (ctx->pc == 0x4B71B4u) {
        ctx->pc = 0x4B71B4u;
            // 0x4b71b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B71B8u;
        goto label_4b71b8;
    }
    ctx->pc = 0x4B71B0u;
    SET_GPR_U32(ctx, 31, 0x4B71B8u);
    ctx->pc = 0x4B71B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B71B0u;
            // 0x4b71b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B71B8u; }
        if (ctx->pc != 0x4B71B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B71B8u; }
        if (ctx->pc != 0x4B71B8u) { return; }
    }
    ctx->pc = 0x4B71B8u;
label_4b71b8:
    // 0x4b71b8: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x4b71b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b71bc:
    // 0x4b71bc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4b71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4b71c0:
    // 0x4b71c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4b71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4b71c4:
    // 0x4b71c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4b71c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b71c8:
    // 0x4b71c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b71c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b71cc:
    // 0x4b71cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4b71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b71d0:
    // 0x4b71d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4b71d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b71d4:
    // 0x4b71d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b71d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b71d8:
    // 0x4b71d8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4b71d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b71dc:
    // 0x4b71dc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x4b71dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4b71e0:
    // 0x4b71e0: 0xc04cd60  jal         func_133580
label_4b71e4:
    if (ctx->pc == 0x4B71E4u) {
        ctx->pc = 0x4B71E4u;
            // 0x4b71e4: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->pc = 0x4B71E8u;
        goto label_4b71e8;
    }
    ctx->pc = 0x4B71E0u;
    SET_GPR_U32(ctx, 31, 0x4B71E8u);
    ctx->pc = 0x4B71E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B71E0u;
            // 0x4b71e4: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B71E8u; }
        if (ctx->pc != 0x4B71E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B71E8u; }
        if (ctx->pc != 0x4B71E8u) { return; }
    }
    ctx->pc = 0x4B71E8u;
label_4b71e8:
    // 0x4b71e8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4b71e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4b71ec:
    // 0x4b71ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4b71ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4b71f0:
    // 0x4b71f0: 0x320f809  jalr        $t9
label_4b71f4:
    if (ctx->pc == 0x4B71F4u) {
        ctx->pc = 0x4B71F4u;
            // 0x4b71f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B71F8u;
        goto label_4b71f8;
    }
    ctx->pc = 0x4B71F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B71F8u);
        ctx->pc = 0x4B71F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B71F0u;
            // 0x4b71f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B71F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B71F8u; }
            if (ctx->pc != 0x4B71F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B71F8u;
label_4b71f8:
    // 0x4b71f8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4b71f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4b71fc:
    // 0x4b71fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b7200:
    // 0x4b7200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7204:
    // 0x4b7204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b7204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7208:
    // 0x4b7208: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4b7208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b720c:
    // 0x4b720c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4b720cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4b7210:
    // 0x4b7210: 0xc04cfcc  jal         func_133F30
label_4b7214:
    if (ctx->pc == 0x4B7214u) {
        ctx->pc = 0x4B7214u;
            // 0x4b7214: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7218u;
        goto label_4b7218;
    }
    ctx->pc = 0x4B7210u;
    SET_GPR_U32(ctx, 31, 0x4B7218u);
    ctx->pc = 0x4B7214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7210u;
            // 0x4b7214: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7218u; }
        if (ctx->pc != 0x4B7218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7218u; }
        if (ctx->pc != 0x4B7218u) { return; }
    }
    ctx->pc = 0x4B7218u;
label_4b7218:
    // 0x4b7218: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b7218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b721c:
    // 0x4b721c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4b721cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4b7220:
    // 0x4b7220: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b7220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b7224:
    // 0x4b7224: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b7224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b7228:
    // 0x4b7228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b7228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b722c:
    // 0x4b722c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b722cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b7230:
    // 0x4b7230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b7230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b7234:
    // 0x4b7234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b7234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b7238:
    // 0x4b7238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b7238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b723c:
    // 0x4b723c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7240:
    // 0x4b7240: 0x3e00008  jr          $ra
label_4b7244:
    if (ctx->pc == 0x4B7244u) {
        ctx->pc = 0x4B7244u;
            // 0x4b7244: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4B7248u;
        goto label_4b7248;
    }
    ctx->pc = 0x4B7240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7240u;
            // 0x4b7244: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7248u;
label_4b7248:
    // 0x4b7248: 0x0  nop
    ctx->pc = 0x4b7248u;
    // NOP
label_4b724c:
    // 0x4b724c: 0x0  nop
    ctx->pc = 0x4b724cu;
    // NOP
label_4b7250:
    // 0x4b7250: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x4b7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_4b7254:
    // 0x4b7254: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b7254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b7258:
    // 0x4b7258: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4b725c:
    // 0x4b725c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b7260:
    // 0x4b7260: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b7264:
    // 0x4b7264: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b7264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7268:
    // 0x4b7268: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b726c:
    // 0x4b726c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b7270:
    // 0x4b7270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b7274:
    // 0x4b7274: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b7274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b7278:
    // 0x4b7278: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x4b7278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4b727c:
    // 0x4b727c: 0x508302a1  beql        $a0, $v1, . + 4 + (0x2A1 << 2)
label_4b7280:
    if (ctx->pc == 0x4B7280u) {
        ctx->pc = 0x4B7280u;
            // 0x4b7280: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4B7284u;
        goto label_4b7284;
    }
    ctx->pc = 0x4B727Cu;
    {
        const bool branch_taken_0x4b727c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b727c) {
            ctx->pc = 0x4B7280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B727Cu;
            // 0x4b7280: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7D04u;
            goto label_4b7d04;
        }
    }
    ctx->pc = 0x4B7284u;
label_4b7284:
    // 0x4b7284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b7288:
    // 0x4b7288: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_4b728c:
    if (ctx->pc == 0x4B728Cu) {
        ctx->pc = 0x4B7290u;
        goto label_4b7290;
    }
    ctx->pc = 0x4B7288u;
    {
        const bool branch_taken_0x4b7288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b7288) {
            ctx->pc = 0x4B7398u;
            goto label_4b7398;
        }
    }
    ctx->pc = 0x4B7290u;
label_4b7290:
    // 0x4b7290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7294:
    // 0x4b7294: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4b7298:
    if (ctx->pc == 0x4B7298u) {
        ctx->pc = 0x4B729Cu;
        goto label_4b729c;
    }
    ctx->pc = 0x4B7294u;
    {
        const bool branch_taken_0x4b7294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b7294) {
            ctx->pc = 0x4B72ACu;
            goto label_4b72ac;
        }
    }
    ctx->pc = 0x4B729Cu;
label_4b729c:
    // 0x4b729c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_4b72a0:
    if (ctx->pc == 0x4B72A0u) {
        ctx->pc = 0x4B72A0u;
            // 0x4b72a0: 0xae8300d0  sw          $v1, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4B72A4u;
        goto label_4b72a4;
    }
    ctx->pc = 0x4B729Cu;
    {
        const bool branch_taken_0x4b729c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b729c) {
            ctx->pc = 0x4B72A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B729Cu;
            // 0x4b72a0: 0xae8300d0  sw          $v1, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B72ACu;
            goto label_4b72ac;
        }
    }
    ctx->pc = 0x4B72A4u;
label_4b72a4:
    // 0x4b72a4: 0x10000296  b           . + 4 + (0x296 << 2)
label_4b72a8:
    if (ctx->pc == 0x4B72A8u) {
        ctx->pc = 0x4B72ACu;
        goto label_4b72ac;
    }
    ctx->pc = 0x4B72A4u;
    {
        const bool branch_taken_0x4b72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b72a4) {
            ctx->pc = 0x4B7D00u;
            goto label_4b7d00;
        }
    }
    ctx->pc = 0x4B72ACu;
label_4b72ac:
    // 0x4b72ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b72acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b72b0:
    // 0x4b72b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b72b4:
    // 0x4b72b4: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x4b72b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b72b8:
    // 0x4b72b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b72b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b72bc:
    // 0x4b72bc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b72c0:
    // 0x4b72c0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b72c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b72c4:
    // 0x4b72c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b72c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b72c8:
    // 0x4b72c8: 0x4500028d  bc1f        . + 4 + (0x28D << 2)
label_4b72cc:
    if (ctx->pc == 0x4B72CCu) {
        ctx->pc = 0x4B72CCu;
            // 0x4b72cc: 0xe68100d8  swc1        $f1, 0xD8($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
        ctx->pc = 0x4B72D0u;
        goto label_4b72d0;
    }
    ctx->pc = 0x4B72C8u;
    {
        const bool branch_taken_0x4b72c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B72CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B72C8u;
            // 0x4b72cc: 0xe68100d8  swc1        $f1, 0xD8($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b72c8) {
            ctx->pc = 0x4B7D00u;
            goto label_4b7d00;
        }
    }
    ctx->pc = 0x4B72D0u;
label_4b72d0:
    // 0x4b72d0: 0xc12e0a4  jal         func_4B8290
label_4b72d4:
    if (ctx->pc == 0x4B72D4u) {
        ctx->pc = 0x4B72D4u;
            // 0x4b72d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B72D8u;
        goto label_4b72d8;
    }
    ctx->pc = 0x4B72D0u;
    SET_GPR_U32(ctx, 31, 0x4B72D8u);
    ctx->pc = 0x4B72D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B72D0u;
            // 0x4b72d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8290u;
    if (runtime->hasFunction(0x4B8290u)) {
        auto targetFn = runtime->lookupFunction(0x4B8290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B72D8u; }
        if (ctx->pc != 0x4B72D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8290_0x4b8290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B72D8u; }
        if (ctx->pc != 0x4B72D8u) { return; }
    }
    ctx->pc = 0x4B72D8u;
label_4b72d8:
    // 0x4b72d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b72d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b72dc:
    // 0x4b72dc: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x4b72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4b72e0:
    // 0x4b72e0: 0xc12e050  jal         func_4B8140
label_4b72e4:
    if (ctx->pc == 0x4B72E4u) {
        ctx->pc = 0x4B72E4u;
            // 0x4b72e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B72E8u;
        goto label_4b72e8;
    }
    ctx->pc = 0x4B72E0u;
    SET_GPR_U32(ctx, 31, 0x4B72E8u);
    ctx->pc = 0x4B72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B72E0u;
            // 0x4b72e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8140u;
    if (runtime->hasFunction(0x4B8140u)) {
        auto targetFn = runtime->lookupFunction(0x4B8140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B72E8u; }
        if (ctx->pc != 0x4B72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8140_0x4b8140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B72E8u; }
        if (ctx->pc != 0x4B72E8u) { return; }
    }
    ctx->pc = 0x4B72E8u;
label_4b72e8:
    // 0x4b72e8: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x4b72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b72ec:
    // 0x4b72ec: 0x26840114  addiu       $a0, $s4, 0x114
    ctx->pc = 0x4b72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
label_4b72f0:
    // 0x4b72f0: 0xc680016c  lwc1        $f0, 0x16C($s4)
    ctx->pc = 0x4b72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b72f4:
    // 0x4b72f4: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4b72f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4b72f8:
    // 0x4b72f8: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4b72f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4b72fc:
    // 0x4b72fc: 0xc0c6250  jal         func_318940
label_4b7300:
    if (ctx->pc == 0x4B7300u) {
        ctx->pc = 0x4B7300u;
            // 0x4b7300: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B7304u;
        goto label_4b7304;
    }
    ctx->pc = 0x4B72FCu;
    SET_GPR_U32(ctx, 31, 0x4B7304u);
    ctx->pc = 0x4B7300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B72FCu;
            // 0x4b7300: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7304u; }
        if (ctx->pc != 0x4B7304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7304u; }
        if (ctx->pc != 0x4B7304u) { return; }
    }
    ctx->pc = 0x4B7304u;
label_4b7304:
    // 0x4b7304: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b7304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b7308:
    // 0x4b7308: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x4b7308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4b730c:
    // 0x4b730c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4b730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b7310:
    // 0x4b7310: 0xc68600e8  lwc1        $f6, 0xE8($s4)
    ctx->pc = 0x4b7310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4b7314:
    // 0x4b7314: 0xc68500e4  lwc1        $f5, 0xE4($s4)
    ctx->pc = 0x4b7314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b7318:
    // 0x4b7318: 0xc68400e0  lwc1        $f4, 0xE0($s4)
    ctx->pc = 0x4b7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b731c:
    // 0x4b731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7320:
    // 0x4b7320: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b7324:
    // 0x4b7324: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b7324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b7328:
    // 0x4b7328: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b7328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b732c:
    // 0x4b732c: 0xe7a40220  swc1        $f4, 0x220($sp)
    ctx->pc = 0x4b732cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_4b7330:
    // 0x4b7330: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x4b7330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
label_4b7334:
    // 0x4b7334: 0xe7a50224  swc1        $f5, 0x224($sp)
    ctx->pc = 0x4b7334u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_4b7338:
    // 0x4b7338: 0xe7a60228  swc1        $f6, 0x228($sp)
    ctx->pc = 0x4b7338u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_4b733c:
    // 0x4b733c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7340:
    // 0x4b7340: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7344:
    // 0x4b7344: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4b7344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b7348:
    // 0x4b7348: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4b7348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b734c:
    // 0x4b734c: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x4b734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_4b7350:
    // 0x4b7350: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4b7350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4b7354:
    // 0x4b7354: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x4b7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_4b7358:
    // 0x4b7358: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x4b7358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4b735c:
    // 0x4b735c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4b735cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4b7360:
    // 0x4b7360: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x4b7360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_4b7364:
    // 0x4b7364: 0xc088b74  jal         func_222DD0
label_4b7368:
    if (ctx->pc == 0x4B7368u) {
        ctx->pc = 0x4B7368u;
            // 0x4b7368: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->pc = 0x4B736Cu;
        goto label_4b736c;
    }
    ctx->pc = 0x4B7364u;
    SET_GPR_U32(ctx, 31, 0x4B736Cu);
    ctx->pc = 0x4B7368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7364u;
            // 0x4b7368: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B736Cu; }
        if (ctx->pc != 0x4B736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B736Cu; }
        if (ctx->pc != 0x4B736Cu) { return; }
    }
    ctx->pc = 0x4B736Cu;
label_4b736c:
    // 0x4b736c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4b736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b7370:
    // 0x4b7370: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4b7370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4b7374:
    // 0x4b7374: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b7374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b7378:
    // 0x4b7378: 0x320f809  jalr        $t9
label_4b737c:
    if (ctx->pc == 0x4B737Cu) {
        ctx->pc = 0x4B737Cu;
            // 0x4b737c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x4B7380u;
        goto label_4b7380;
    }
    ctx->pc = 0x4B7378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B7380u);
        ctx->pc = 0x4B737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7378u;
            // 0x4b737c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B7380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B7380u; }
            if (ctx->pc != 0x4B7380u) { return; }
        }
        }
    }
    ctx->pc = 0x4B7380u;
label_4b7380:
    // 0x4b7380: 0xae800154  sw          $zero, 0x154($s4)
    ctx->pc = 0x4b7380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 0));
label_4b7384:
    // 0x4b7384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b7388:
    // 0x4b7388: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x4b7388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_4b738c:
    // 0x4b738c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7390:
    // 0x4b7390: 0x1000025b  b           . + 4 + (0x25B << 2)
label_4b7394:
    if (ctx->pc == 0x4B7394u) {
        ctx->pc = 0x4B7394u;
            // 0x4b7394: 0xae8300d4  sw          $v1, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4B7398u;
        goto label_4b7398;
    }
    ctx->pc = 0x4B7390u;
    {
        const bool branch_taken_0x4b7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7390u;
            // 0x4b7394: 0xae8300d4  sw          $v1, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7390) {
            ctx->pc = 0x4B7D00u;
            goto label_4b7d00;
        }
    }
    ctx->pc = 0x4B7398u;
label_4b7398:
    // 0x4b7398: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b739c:
    // 0x4b739c: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x4b739cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4b73a0:
    // 0x4b73a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b73a4:
    // 0x4b73a4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x4b73a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4b73a8:
    // 0x4b73a8: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x4b73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b73ac:
    // 0x4b73ac: 0xc0dc9bc  jal         func_3726F0
label_4b73b0:
    if (ctx->pc == 0x4B73B0u) {
        ctx->pc = 0x4B73B0u;
            // 0x4b73b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B73B4u;
        goto label_4b73b4;
    }
    ctx->pc = 0x4B73ACu;
    SET_GPR_U32(ctx, 31, 0x4B73B4u);
    ctx->pc = 0x4B73B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B73ACu;
            // 0x4b73b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B73B4u; }
        if (ctx->pc != 0x4B73B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B73B4u; }
        if (ctx->pc != 0x4B73B4u) { return; }
    }
    ctx->pc = 0x4B73B4u;
label_4b73b4:
    // 0x4b73b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b73b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b73b8:
    // 0x4b73b8: 0xc0dc9a0  jal         func_372680
label_4b73bc:
    if (ctx->pc == 0x4B73BCu) {
        ctx->pc = 0x4B73BCu;
            // 0x4b73bc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4B73C0u;
        goto label_4b73c0;
    }
    ctx->pc = 0x4B73B8u;
    SET_GPR_U32(ctx, 31, 0x4B73C0u);
    ctx->pc = 0x4B73BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B73B8u;
            // 0x4b73bc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B73C0u; }
        if (ctx->pc != 0x4B73C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B73C0u; }
        if (ctx->pc != 0x4B73C0u) { return; }
    }
    ctx->pc = 0x4B73C0u;
label_4b73c0:
    // 0x4b73c0: 0xc6810154  lwc1        $f1, 0x154($s4)
    ctx->pc = 0x4b73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b73c4:
    // 0x4b73c4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4b73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_4b73c8:
    // 0x4b73c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b73c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b73cc:
    // 0x4b73cc: 0x0  nop
    ctx->pc = 0x4b73ccu;
    // NOP
label_4b73d0:
    // 0x4b73d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b73d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b73d4:
    // 0x4b73d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b73d8:
    if (ctx->pc == 0x4B73D8u) {
        ctx->pc = 0x4B73D8u;
            // 0x4b73d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B73DCu;
        goto label_4b73dc;
    }
    ctx->pc = 0x4B73D4u;
    {
        const bool branch_taken_0x4b73d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B73D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B73D4u;
            // 0x4b73d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73d4) {
            ctx->pc = 0x4B73E0u;
            goto label_4b73e0;
        }
    }
    ctx->pc = 0x4B73DCu;
label_4b73dc:
    // 0x4b73dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b73dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b73e0:
    // 0x4b73e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b73e4:
    if (ctx->pc == 0x4B73E4u) {
        ctx->pc = 0x4B73E4u;
            // 0x4b73e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B73E8u;
        goto label_4b73e8;
    }
    ctx->pc = 0x4B73E0u;
    {
        const bool branch_taken_0x4b73e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b73e0) {
            ctx->pc = 0x4B73E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B73E0u;
            // 0x4b73e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B73F4u;
            goto label_4b73f4;
        }
    }
    ctx->pc = 0x4B73E8u;
label_4b73e8:
    // 0x4b73e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b73e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b73ec:
    // 0x4b73ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b73f0:
    if (ctx->pc == 0x4B73F0u) {
        ctx->pc = 0x4B73F0u;
            // 0x4b73f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B73F4u;
        goto label_4b73f4;
    }
    ctx->pc = 0x4B73ECu;
    {
        const bool branch_taken_0x4b73ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B73F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B73ECu;
            // 0x4b73f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73ec) {
            ctx->pc = 0x4B740Cu;
            goto label_4b740c;
        }
    }
    ctx->pc = 0x4B73F4u;
label_4b73f4:
    // 0x4b73f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b73f8:
    // 0x4b73f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b73f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b73fc:
    // 0x4b73fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b73fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7400:
    // 0x4b7400: 0x0  nop
    ctx->pc = 0x4b7400u;
    // NOP
label_4b7404:
    // 0x4b7404: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4b7404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4b7408:
    // 0x4b7408: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4b7408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4b740c:
    // 0x4b740c: 0xc6800154  lwc1        $f0, 0x154($s4)
    ctx->pc = 0x4b740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7410:
    // 0x4b7410: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x4b7410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_4b7414:
    // 0x4b7414: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x4b7414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4b7418:
    // 0x4b7418: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b7418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b741c:
    // 0x4b741c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7420:
    // 0x4b7420: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x4b7420u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4b7424:
    // 0x4b7424: 0x4601a01c  madd.s      $f0, $f20, $f1
    ctx->pc = 0x4b7424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_4b7428:
    // 0x4b7428: 0xe6800154  swc1        $f0, 0x154($s4)
    ctx->pc = 0x4b7428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 340), bits); }
label_4b742c:
    // 0x4b742c: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x4b742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7430:
    // 0x4b7430: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b7430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b7434:
    // 0x4b7434: 0xc680015c  lwc1        $f0, 0x15C($s4)
    ctx->pc = 0x4b7434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7438:
    // 0x4b7438: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x4b7438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b743c:
    // 0x4b743c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b7440:
    if (ctx->pc == 0x4B7440u) {
        ctx->pc = 0x4B7440u;
            // 0x4b7440: 0x46011102  mul.s       $f4, $f2, $f1 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4B7444u;
        goto label_4b7444;
    }
    ctx->pc = 0x4B743Cu;
    {
        const bool branch_taken_0x4b743c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B743Cu;
            // 0x4b7440: 0x46011102  mul.s       $f4, $f2, $f1 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b743c) {
            ctx->pc = 0x4B7448u;
            goto label_4b7448;
        }
    }
    ctx->pc = 0x4B7444u;
label_4b7444:
    // 0x4b7444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b7444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7448:
    // 0x4b7448: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b744c:
    if (ctx->pc == 0x4B744Cu) {
        ctx->pc = 0x4B744Cu;
            // 0x4b744c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B7450u;
        goto label_4b7450;
    }
    ctx->pc = 0x4B7448u;
    {
        const bool branch_taken_0x4b7448 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b7448) {
            ctx->pc = 0x4B744Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7448u;
            // 0x4b744c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B745Cu;
            goto label_4b745c;
        }
    }
    ctx->pc = 0x4B7450u;
label_4b7450:
    // 0x4b7450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b7450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7454:
    // 0x4b7454: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b7458:
    if (ctx->pc == 0x4B7458u) {
        ctx->pc = 0x4B7458u;
            // 0x4b7458: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B745Cu;
        goto label_4b745c;
    }
    ctx->pc = 0x4B7454u;
    {
        const bool branch_taken_0x4b7454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7454u;
            // 0x4b7458: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7454) {
            ctx->pc = 0x4B7474u;
            goto label_4b7474;
        }
    }
    ctx->pc = 0x4B745Cu;
label_4b745c:
    // 0x4b745c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b7460:
    // 0x4b7460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b7460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b7464:
    // 0x4b7464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b7464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7468:
    // 0x4b7468: 0x0  nop
    ctx->pc = 0x4b7468u;
    // NOP
label_4b746c:
    // 0x4b746c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4b746cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4b7470:
    // 0x4b7470: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4b7470u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4b7474:
    // 0x4b7474: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x4b7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7478:
    // 0x4b7478: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4b7478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4b747c:
    // 0x4b747c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b747cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7480:
    // 0x4b7480: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4b7480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4b7484:
    // 0x4b7484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b7484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b7488:
    // 0x4b7488: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x4b7488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4b748c:
    // 0x4b748c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b748cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b7490:
    // 0x4b7490: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x4b7490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_4b7494:
    // 0x4b7494: 0xe6800158  swc1        $f0, 0x158($s4)
    ctx->pc = 0x4b7494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 344), bits); }
label_4b7498:
    // 0x4b7498: 0xc6810154  lwc1        $f1, 0x154($s4)
    ctx->pc = 0x4b7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b749c:
    // 0x4b749c: 0xc6800158  lwc1        $f0, 0x158($s4)
    ctx->pc = 0x4b749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b74a0:
    // 0x4b74a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4b74a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4b74a4:
    // 0x4b74a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4b74a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4b74a8:
    // 0x4b74a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b74a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4b74ac:
    // 0x4b74ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b74acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b74b0:
    // 0x4b74b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4b74b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b74b4:
    // 0x4b74b4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4b74b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4b74b8:
    // 0x4b74b8: 0xc04ca18  jal         func_132860
label_4b74bc:
    if (ctx->pc == 0x4B74BCu) {
        ctx->pc = 0x4B74BCu;
            // 0x4b74bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B74C0u;
        goto label_4b74c0;
    }
    ctx->pc = 0x4B74B8u;
    SET_GPR_U32(ctx, 31, 0x4B74C0u);
    ctx->pc = 0x4B74BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B74B8u;
            // 0x4b74bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74C0u; }
        if (ctx->pc != 0x4B74C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74C0u; }
        if (ctx->pc != 0x4B74C0u) { return; }
    }
    ctx->pc = 0x4B74C0u;
label_4b74c0:
    // 0x4b74c0: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x4b74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_4b74c4:
    // 0x4b74c4: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4b74c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4b74c8:
    // 0x4b74c8: 0xc04c72c  jal         func_131CB0
label_4b74cc:
    if (ctx->pc == 0x4B74CCu) {
        ctx->pc = 0x4B74CCu;
            // 0x4b74cc: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x4B74D0u;
        goto label_4b74d0;
    }
    ctx->pc = 0x4B74C8u;
    SET_GPR_U32(ctx, 31, 0x4B74D0u);
    ctx->pc = 0x4B74CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B74C8u;
            // 0x4b74cc: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74D0u; }
        if (ctx->pc != 0x4B74D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74D0u; }
        if (ctx->pc != 0x4B74D0u) { return; }
    }
    ctx->pc = 0x4B74D0u;
label_4b74d0:
    // 0x4b74d0: 0x8e840168  lw          $a0, 0x168($s4)
    ctx->pc = 0x4b74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
label_4b74d4:
    // 0x4b74d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b74d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b74d8:
    // 0x4b74d8: 0xc122d2c  jal         func_48B4B0
label_4b74dc:
    if (ctx->pc == 0x4B74DCu) {
        ctx->pc = 0x4B74DCu;
            // 0x4b74dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4B74E0u;
        goto label_4b74e0;
    }
    ctx->pc = 0x4B74D8u;
    SET_GPR_U32(ctx, 31, 0x4B74E0u);
    ctx->pc = 0x4B74DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B74D8u;
            // 0x4b74dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74E0u; }
        if (ctx->pc != 0x4B74E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B74E0u; }
        if (ctx->pc != 0x4B74E0u) { return; }
    }
    ctx->pc = 0x4B74E0u;
label_4b74e0:
    // 0x4b74e0: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x4b74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_4b74e4:
    // 0x4b74e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4b74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b74e8:
    // 0x4b74e8: 0x506201ba  beql        $v1, $v0, . + 4 + (0x1BA << 2)
label_4b74ec:
    if (ctx->pc == 0x4B74ECu) {
        ctx->pc = 0x4B74ECu;
            // 0x4b74ec: 0x8e840168  lw          $a0, 0x168($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
        ctx->pc = 0x4B74F0u;
        goto label_4b74f0;
    }
    ctx->pc = 0x4B74E8u;
    {
        const bool branch_taken_0x4b74e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b74e8) {
            ctx->pc = 0x4B74ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B74E8u;
            // 0x4b74ec: 0x8e840168  lw          $a0, 0x168($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7BD4u;
            goto label_4b7bd4;
        }
    }
    ctx->pc = 0x4B74F0u;
label_4b74f0:
    // 0x4b74f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b74f4:
    // 0x4b74f4: 0x506200f7  beql        $v1, $v0, . + 4 + (0xF7 << 2)
label_4b74f8:
    if (ctx->pc == 0x4B74F8u) {
        ctx->pc = 0x4B74F8u;
            // 0x4b74f8: 0x8e840168  lw          $a0, 0x168($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
        ctx->pc = 0x4B74FCu;
        goto label_4b74fc;
    }
    ctx->pc = 0x4B74F4u;
    {
        const bool branch_taken_0x4b74f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b74f4) {
            ctx->pc = 0x4B74F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B74F4u;
            // 0x4b74f8: 0x8e840168  lw          $a0, 0x168($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B78D4u;
            goto label_4b78d4;
        }
    }
    ctx->pc = 0x4B74FCu;
label_4b74fc:
    // 0x4b74fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7500:
    // 0x4b7500: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_4b7504:
    if (ctx->pc == 0x4B7504u) {
        ctx->pc = 0x4B7504u;
            // 0x4b7504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7508u;
        goto label_4b7508;
    }
    ctx->pc = 0x4B7500u;
    {
        const bool branch_taken_0x4b7500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b7500) {
            ctx->pc = 0x4B7504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7500u;
            // 0x4b7504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7518u;
            goto label_4b7518;
        }
    }
    ctx->pc = 0x4B7508u;
label_4b7508:
    // 0x4b7508: 0x506001c4  beql        $v1, $zero, . + 4 + (0x1C4 << 2)
label_4b750c:
    if (ctx->pc == 0x4B750Cu) {
        ctx->pc = 0x4B750Cu;
            // 0x4b750c: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x4B7510u;
        goto label_4b7510;
    }
    ctx->pc = 0x4B7508u;
    {
        const bool branch_taken_0x4b7508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7508) {
            ctx->pc = 0x4B750Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7508u;
            // 0x4b750c: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7C1Cu;
            goto label_4b7c1c;
        }
    }
    ctx->pc = 0x4B7510u;
label_4b7510:
    // 0x4b7510: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_4b7514:
    if (ctx->pc == 0x4B7514u) {
        ctx->pc = 0x4B7518u;
        goto label_4b7518;
    }
    ctx->pc = 0x4B7510u;
    {
        const bool branch_taken_0x4b7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7510) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7518u;
label_4b7518:
    // 0x4b7518: 0xc088b74  jal         func_222DD0
label_4b751c:
    if (ctx->pc == 0x4B751Cu) {
        ctx->pc = 0x4B7520u;
        goto label_4b7520;
    }
    ctx->pc = 0x4B7518u;
    SET_GPR_U32(ctx, 31, 0x4B7520u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7520u; }
        if (ctx->pc != 0x4B7520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7520u; }
        if (ctx->pc != 0x4B7520u) { return; }
    }
    ctx->pc = 0x4B7520u;
label_4b7520:
    // 0x4b7520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b7524:
    // 0x4b7524: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b7528:
    // 0x4b7528: 0xc68000d8  lwc1        $f0, 0xD8($s4)
    ctx->pc = 0x4b7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b752c:
    // 0x4b752c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4b752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7530:
    // 0x4b7530: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x4b7530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4b7534:
    // 0x4b7534: 0xe68200d8  swc1        $f2, 0xD8($s4)
    ctx->pc = 0x4b7534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
label_4b7538:
    // 0x4b7538: 0xc680016c  lwc1        $f0, 0x16C($s4)
    ctx->pc = 0x4b7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b753c:
    // 0x4b753c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x4b753cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7540:
    // 0x4b7540: 0x450001b5  bc1f        . + 4 + (0x1B5 << 2)
label_4b7544:
    if (ctx->pc == 0x4B7544u) {
        ctx->pc = 0x4B7548u;
        goto label_4b7548;
    }
    ctx->pc = 0x4B7540u;
    {
        const bool branch_taken_0x4b7540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7540) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7548u;
label_4b7548:
    // 0x4b7548: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x4b7548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_4b754c:
    // 0x4b754c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b7550:
    // 0x4b7550: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_4b7554:
    if (ctx->pc == 0x4B7554u) {
        ctx->pc = 0x4B7554u;
            // 0x4b7554: 0x3c0340a0  lui         $v1, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x4B7558u;
        goto label_4b7558;
    }
    ctx->pc = 0x4B7550u;
    {
        const bool branch_taken_0x4b7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7550) {
            ctx->pc = 0x4B7554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7550u;
            // 0x4b7554: 0x3c0340a0  lui         $v1, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7618u;
            goto label_4b7618;
        }
    }
    ctx->pc = 0x4B7558u;
label_4b7558:
    // 0x4b7558: 0xc6800170  lwc1        $f0, 0x170($s4)
    ctx->pc = 0x4b7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b755c:
    // 0x4b755c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b7560:
    // 0x4b7560: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x4b7560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_4b7564:
    // 0x4b7564: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x4b7564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7568:
    // 0x4b7568: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_4b756c:
    if (ctx->pc == 0x4B756Cu) {
        ctx->pc = 0x4B756Cu;
            // 0x4b756c: 0xe6800170  swc1        $f0, 0x170($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
        ctx->pc = 0x4B7570u;
        goto label_4b7570;
    }
    ctx->pc = 0x4B7568u;
    {
        const bool branch_taken_0x4b7568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7568u;
            // 0x4b756c: 0xe6800170  swc1        $f0, 0x170($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7568) {
            ctx->pc = 0x4B75C8u;
            goto label_4b75c8;
        }
    }
    ctx->pc = 0x4B7570u;
label_4b7570:
    // 0x4b7570: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x4b7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_4b7574:
    // 0x4b7574: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4b7574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4b7578:
    // 0x4b7578: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_4b757c:
    if (ctx->pc == 0x4B757Cu) {
        ctx->pc = 0x4B757Cu;
            // 0x4b757c: 0xc682015c  lwc1        $f2, 0x15C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4B7580u;
        goto label_4b7580;
    }
    ctx->pc = 0x4B7578u;
    {
        const bool branch_taken_0x4b7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7578) {
            ctx->pc = 0x4B757Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7578u;
            // 0x4b757c: 0xc682015c  lwc1        $f2, 0x15C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B75CCu;
            goto label_4b75cc;
        }
    }
    ctx->pc = 0x4B7580u;
label_4b7580:
    // 0x4b7580: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4b7580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4b7584:
    // 0x4b7584: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4b7584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4b7588:
    // 0x4b7588: 0xae830174  sw          $v1, 0x174($s4)
    ctx->pc = 0x4b7588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 372), GPR_U32(ctx, 3));
label_4b758c:
    // 0x4b758c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b7590:
    // 0x4b7590: 0xc68200dc  lwc1        $f2, 0xDC($s4)
    ctx->pc = 0x4b7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b7594:
    // 0x4b7594: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x4b7594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_4b7598:
    // 0x4b7598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b7598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b759c:
    // 0x4b759c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b75a0:
    // 0x4b75a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4b75a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4b75a4:
    // 0x4b75a4: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x4b75a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_4b75a8:
    // 0x4b75a8: 0x46000d1d  msub.s      $f20, $f1, $f0
    ctx->pc = 0x4b75a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_4b75ac:
    // 0x4b75ac: 0xc12e010  jal         func_4B8040
label_4b75b0:
    if (ctx->pc == 0x4B75B0u) {
        ctx->pc = 0x4B75B0u;
            // 0x4b75b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4B75B4u;
        goto label_4b75b4;
    }
    ctx->pc = 0x4B75ACu;
    SET_GPR_U32(ctx, 31, 0x4B75B4u);
    ctx->pc = 0x4B75B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B75ACu;
            // 0x4b75b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8040u;
    if (runtime->hasFunction(0x4B8040u)) {
        auto targetFn = runtime->lookupFunction(0x4B8040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B75B4u; }
        if (ctx->pc != 0x4B75B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8040_0x4b8040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B75B4u; }
        if (ctx->pc != 0x4B75B4u) { return; }
    }
    ctx->pc = 0x4B75B4u;
label_4b75b4:
    // 0x4b75b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4b75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4b75b8:
    // 0x4b75b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b75b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b75bc:
    // 0x4b75bc: 0x0  nop
    ctx->pc = 0x4b75bcu;
    // NOP
label_4b75c0:
    // 0x4b75c0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x4b75c0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_4b75c4:
    // 0x4b75c4: 0xe6800170  swc1        $f0, 0x170($s4)
    ctx->pc = 0x4b75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
label_4b75c8:
    // 0x4b75c8: 0xc682015c  lwc1        $f2, 0x15C($s4)
    ctx->pc = 0x4b75c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b75cc:
    // 0x4b75cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b75d0:
    // 0x4b75d0: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x4b75d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b75d4:
    // 0x4b75d4: 0x26830158  addiu       $v1, $s4, 0x158
    ctx->pc = 0x4b75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 344));
label_4b75d8:
    // 0x4b75d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b75d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b75dc:
    // 0x4b75dc: 0x0  nop
    ctx->pc = 0x4b75dcu;
    // NOP
label_4b75e0:
    // 0x4b75e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b75e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b75e4:
    // 0x4b75e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b75e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b75e8:
    // 0x4b75e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4b75ec:
    if (ctx->pc == 0x4B75ECu) {
        ctx->pc = 0x4B75ECu;
            // 0x4b75ec: 0xe6810158  swc1        $f1, 0x158($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 344), bits); }
        ctx->pc = 0x4B75F0u;
        goto label_4b75f0;
    }
    ctx->pc = 0x4B75E8u;
    {
        const bool branch_taken_0x4b75e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B75ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B75E8u;
            // 0x4b75ec: 0xe6810158  swc1        $f1, 0x158($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b75e8) {
            ctx->pc = 0x4B75F8u;
            goto label_4b75f8;
        }
    }
    ctx->pc = 0x4B75F0u;
label_4b75f0:
    // 0x4b75f0: 0x10000046  b           . + 4 + (0x46 << 2)
label_4b75f4:
    if (ctx->pc == 0x4B75F4u) {
        ctx->pc = 0x4B75F4u;
            // 0x4b75f4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x4B75F8u;
        goto label_4b75f8;
    }
    ctx->pc = 0x4B75F0u;
    {
        const bool branch_taken_0x4b75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B75F0u;
            // 0x4b75f4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b75f0) {
            ctx->pc = 0x4B770Cu;
            goto label_4b770c;
        }
    }
    ctx->pc = 0x4B75F8u;
label_4b75f8:
    // 0x4b75f8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x4b75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_4b75fc:
    // 0x4b75fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7600:
    // 0x4b7600: 0x0  nop
    ctx->pc = 0x4b7600u;
    // NOP
label_4b7604:
    // 0x4b7604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b7604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7608:
    // 0x4b7608: 0x45020041  bc1fl       . + 4 + (0x41 << 2)
label_4b760c:
    if (ctx->pc == 0x4B760Cu) {
        ctx->pc = 0x4B760Cu;
            // 0x4b760c: 0xc68000d8  lwc1        $f0, 0xD8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4B7610u;
        goto label_4b7610;
    }
    ctx->pc = 0x4B7608u;
    {
        const bool branch_taken_0x4b7608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7608) {
            ctx->pc = 0x4B760Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7608u;
            // 0x4b760c: 0xc68000d8  lwc1        $f0, 0xD8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7710u;
            goto label_4b7710;
        }
    }
    ctx->pc = 0x4B7610u;
label_4b7610:
    // 0x4b7610: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4b7614:
    if (ctx->pc == 0x4B7614u) {
        ctx->pc = 0x4B7614u;
            // 0x4b7614: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x4B7618u;
        goto label_4b7618;
    }
    ctx->pc = 0x4B7610u;
    {
        const bool branch_taken_0x4b7610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7610u;
            // 0x4b7614: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7610) {
            ctx->pc = 0x4B770Cu;
            goto label_4b770c;
        }
    }
    ctx->pc = 0x4B7618u;
label_4b7618:
    // 0x4b7618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b7618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b761c:
    // 0x4b761c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b761cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7620:
    // 0x4b7620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b7620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b7624:
    // 0x4b7624: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4b7624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4b7628:
    // 0x4b7628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b7628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b762c:
    // 0x4b762c: 0x0  nop
    ctx->pc = 0x4b762cu;
    // NOP
label_4b7630:
    // 0x4b7630: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4b7630u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4b7634:
    // 0x4b7634: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x4b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_4b7638:
    // 0x4b7638: 0xe6800148  swc1        $f0, 0x148($s4)
    ctx->pc = 0x4b7638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 328), bits); }
label_4b763c:
    // 0x4b763c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b7640:
    // 0x4b7640: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x4b7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_4b7644:
    // 0x4b7644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b7644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7648:
    // 0x4b7648: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4b7648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_4b764c:
    // 0x4b764c: 0xae820174  sw          $v0, 0x174($s4)
    ctx->pc = 0x4b764cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 372), GPR_U32(ctx, 2));
label_4b7650:
    // 0x4b7650: 0xc68200dc  lwc1        $f2, 0xDC($s4)
    ctx->pc = 0x4b7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b7654:
    // 0x4b7654: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x4b7654u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4b7658:
    // 0x4b7658: 0x46020d1d  msub.s      $f20, $f1, $f2
    ctx->pc = 0x4b7658u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_4b765c:
    // 0x4b765c: 0xc12e010  jal         func_4B8040
label_4b7660:
    if (ctx->pc == 0x4B7660u) {
        ctx->pc = 0x4B7660u;
            // 0x4b7660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4B7664u;
        goto label_4b7664;
    }
    ctx->pc = 0x4B765Cu;
    SET_GPR_U32(ctx, 31, 0x4B7664u);
    ctx->pc = 0x4B7660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B765Cu;
            // 0x4b7660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8040u;
    if (runtime->hasFunction(0x4B8040u)) {
        auto targetFn = runtime->lookupFunction(0x4B8040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7664u; }
        if (ctx->pc != 0x4B7664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8040_0x4b8040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7664u; }
        if (ctx->pc != 0x4B7664u) { return; }
    }
    ctx->pc = 0x4B7664u;
label_4b7664:
    // 0x4b7664: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4b7664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4b7668:
    // 0x4b7668: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4b7668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4b766c:
    // 0x4b766c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b766cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7670:
    // 0x4b7670: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4b7670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4b7674:
    // 0x4b7674: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x4b7674u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_4b7678:
    // 0x4b7678: 0x0  nop
    ctx->pc = 0x4b7678u;
    // NOP
label_4b767c:
    // 0x4b767c: 0x0  nop
    ctx->pc = 0x4b767cu;
    // NOP
label_4b7680:
    // 0x4b7680: 0xc04f278  jal         func_13C9E0
label_4b7684:
    if (ctx->pc == 0x4B7684u) {
        ctx->pc = 0x4B7684u;
            // 0x4b7684: 0xe6800170  swc1        $f0, 0x170($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
        ctx->pc = 0x4B7688u;
        goto label_4b7688;
    }
    ctx->pc = 0x4B7680u;
    SET_GPR_U32(ctx, 31, 0x4B7688u);
    ctx->pc = 0x4B7684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7680u;
            // 0x4b7684: 0xe6800170  swc1        $f0, 0x170($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7688u; }
        if (ctx->pc != 0x4B7688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7688u; }
        if (ctx->pc != 0x4B7688u) { return; }
    }
    ctx->pc = 0x4B7688u;
label_4b7688:
    // 0x4b7688: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4b7688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4b768c:
    // 0x4b768c: 0xc04ccf4  jal         func_1333D0
label_4b7690:
    if (ctx->pc == 0x4B7690u) {
        ctx->pc = 0x4B7690u;
            // 0x4b7690: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4B7694u;
        goto label_4b7694;
    }
    ctx->pc = 0x4B768Cu;
    SET_GPR_U32(ctx, 31, 0x4B7694u);
    ctx->pc = 0x4B7690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B768Cu;
            // 0x4b7690: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7694u; }
        if (ctx->pc != 0x4B7694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7694u; }
        if (ctx->pc != 0x4B7694u) { return; }
    }
    ctx->pc = 0x4B7694u;
label_4b7694:
    // 0x4b7694: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b7698:
    // 0x4b7698: 0xc04f278  jal         func_13C9E0
label_4b769c:
    if (ctx->pc == 0x4B769Cu) {
        ctx->pc = 0x4B769Cu;
            // 0x4b769c: 0x26850124  addiu       $a1, $s4, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
        ctx->pc = 0x4B76A0u;
        goto label_4b76a0;
    }
    ctx->pc = 0x4B7698u;
    SET_GPR_U32(ctx, 31, 0x4B76A0u);
    ctx->pc = 0x4B769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7698u;
            // 0x4b769c: 0x26850124  addiu       $a1, $s4, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76A0u; }
        if (ctx->pc != 0x4B76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76A0u; }
        if (ctx->pc != 0x4B76A0u) { return; }
    }
    ctx->pc = 0x4B76A0u;
label_4b76a0:
    // 0x4b76a0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b76a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4b76a4:
    // 0x4b76a4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x4b76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4b76a8:
    // 0x4b76a8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4b76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b76ac:
    // 0x4b76ac: 0xc04cca0  jal         func_133280
label_4b76b0:
    if (ctx->pc == 0x4B76B0u) {
        ctx->pc = 0x4B76B0u;
            // 0x4b76b0: 0x24c66530  addiu       $a2, $a2, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25904));
        ctx->pc = 0x4B76B4u;
        goto label_4b76b4;
    }
    ctx->pc = 0x4B76ACu;
    SET_GPR_U32(ctx, 31, 0x4B76B4u);
    ctx->pc = 0x4B76B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B76ACu;
            // 0x4b76b0: 0x24c66530  addiu       $a2, $a2, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76B4u; }
        if (ctx->pc != 0x4B76B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76B4u; }
        if (ctx->pc != 0x4B76B4u) { return; }
    }
    ctx->pc = 0x4B76B4u;
label_4b76b4:
    // 0x4b76b4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x4b76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4b76b8:
    // 0x4b76b8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x4b76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4b76bc:
    // 0x4b76bc: 0xc04cca0  jal         func_133280
label_4b76c0:
    if (ctx->pc == 0x4B76C0u) {
        ctx->pc = 0x4B76C0u;
            // 0x4b76c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B76C4u;
        goto label_4b76c4;
    }
    ctx->pc = 0x4B76BCu;
    SET_GPR_U32(ctx, 31, 0x4B76C4u);
    ctx->pc = 0x4B76C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B76BCu;
            // 0x4b76c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76C4u; }
        if (ctx->pc != 0x4B76C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76C4u; }
        if (ctx->pc != 0x4B76C4u) { return; }
    }
    ctx->pc = 0x4B76C4u;
label_4b76c4:
    // 0x4b76c4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x4b76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4b76c8:
    // 0x4b76c8: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x4b76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_4b76cc:
    // 0x4b76cc: 0xc04cc44  jal         func_133110
label_4b76d0:
    if (ctx->pc == 0x4B76D0u) {
        ctx->pc = 0x4B76D0u;
            // 0x4b76d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B76D4u;
        goto label_4b76d4;
    }
    ctx->pc = 0x4B76CCu;
    SET_GPR_U32(ctx, 31, 0x4B76D4u);
    ctx->pc = 0x4B76D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B76CCu;
            // 0x4b76d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76D4u; }
        if (ctx->pc != 0x4B76D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B76D4u; }
        if (ctx->pc != 0x4B76D4u) { return; }
    }
    ctx->pc = 0x4B76D4u;
label_4b76d4:
    // 0x4b76d4: 0xc6810148  lwc1        $f1, 0x148($s4)
    ctx->pc = 0x4b76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b76d8:
    // 0x4b76d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b76dc:
    // 0x4b76dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b76dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b76e0:
    // 0x4b76e0: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x4b76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b76e4:
    // 0x4b76e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b76e8:
    // 0x4b76e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4b76e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4b76ec:
    // 0x4b76ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b76ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_4b76f0:
    // 0x4b76f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b76f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b76f4:
    // 0x4b76f4: 0xe680015c  swc1        $f0, 0x15C($s4)
    ctx->pc = 0x4b76f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 348), bits); }
label_4b76f8:
    // 0x4b76f8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b76fc:
    // 0x4b76fc: 0xc680015c  lwc1        $f0, 0x15C($s4)
    ctx->pc = 0x4b76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7700:
    // 0x4b7700: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4b7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7704:
    // 0x4b7704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b7704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b7708:
    // 0x4b7708: 0xe680015c  swc1        $f0, 0x15C($s4)
    ctx->pc = 0x4b7708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 348), bits); }
label_4b770c:
    // 0x4b770c: 0xc68000d8  lwc1        $f0, 0xD8($s4)
    ctx->pc = 0x4b770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7710:
    // 0x4b7710: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x4b7710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_4b7714:
    // 0x4b7714: 0x0  nop
    ctx->pc = 0x4b7714u;
    // NOP
label_4b7718:
    // 0x4b7718: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x4b7718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b771c:
    // 0x4b771c: 0x4500013e  bc1f        . + 4 + (0x13E << 2)
label_4b7720:
    if (ctx->pc == 0x4B7720u) {
        ctx->pc = 0x4B7724u;
        goto label_4b7724;
    }
    ctx->pc = 0x4B771Cu;
    {
        const bool branch_taken_0x4b771c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b771c) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7724u;
label_4b7724:
    // 0x4b7724: 0xe686015c  swc1        $f6, 0x15C($s4)
    ctx->pc = 0x4b7724u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 348), bits); }
label_4b7728:
    // 0x4b7728: 0x9282017d  lbu         $v0, 0x17D($s4)
    ctx->pc = 0x4b7728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 381)));
label_4b772c:
    // 0x4b772c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b7730:
    // 0x4b7730: 0xa282017d  sb          $v0, 0x17D($s4)
    ctx->pc = 0x4b7730u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 381), (uint8_t)GPR_U32(ctx, 2));
label_4b7734:
    // 0x4b7734: 0x9284017d  lbu         $a0, 0x17D($s4)
    ctx->pc = 0x4b7734u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 381)));
label_4b7738:
    // 0x4b7738: 0x9282017c  lbu         $v0, 0x17C($s4)
    ctx->pc = 0x4b7738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 380)));
label_4b773c:
    // 0x4b773c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4b773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b7740:
    // 0x4b7740: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4b7740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4b7744:
    // 0x4b7744: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4b7748:
    if (ctx->pc == 0x4B7748u) {
        ctx->pc = 0x4B7748u;
            // 0x4b7748: 0x42940  sll         $a1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->pc = 0x4B774Cu;
        goto label_4b774c;
    }
    ctx->pc = 0x4B7744u;
    {
        const bool branch_taken_0x4b7744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7744) {
            ctx->pc = 0x4B7748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7744u;
            // 0x4b7748: 0x42940  sll         $a1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7764u;
            goto label_4b7764;
        }
    }
    ctx->pc = 0x4B774Cu;
label_4b774c:
    // 0x4b774c: 0x8e840168  lw          $a0, 0x168($s4)
    ctx->pc = 0x4b774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
label_4b7750:
    // 0x4b7750: 0xc122c5c  jal         func_48B170
label_4b7754:
    if (ctx->pc == 0x4B7754u) {
        ctx->pc = 0x4B7754u;
            // 0x4b7754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7758u;
        goto label_4b7758;
    }
    ctx->pc = 0x4B7750u;
    SET_GPR_U32(ctx, 31, 0x4B7758u);
    ctx->pc = 0x4B7754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7750u;
            // 0x4b7754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7758u; }
        if (ctx->pc != 0x4B7758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7758u; }
        if (ctx->pc != 0x4B7758u) { return; }
    }
    ctx->pc = 0x4B7758u;
label_4b7758:
    // 0x4b7758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b775c:
    // 0x4b775c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_4b7760:
    if (ctx->pc == 0x4B7760u) {
        ctx->pc = 0x4B7760u;
            // 0x4b7760: 0xae8200d0  sw          $v0, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x4B7764u;
        goto label_4b7764;
    }
    ctx->pc = 0x4B775Cu;
    {
        const bool branch_taken_0x4b775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B775Cu;
            // 0x4b7760: 0xae8200d0  sw          $v0, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b775c) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7764u;
label_4b7764:
    // 0x4b7764: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b7768:
    // 0x4b7768: 0x8e840150  lw          $a0, 0x150($s4)
    ctx->pc = 0x4b7768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
label_4b776c:
    // 0x4b776c: 0x8c43c740  lw          $v1, -0x38C0($v0)
    ctx->pc = 0x4b776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952768)));
label_4b7770:
    // 0x4b7770: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b7770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b7774:
    // 0x4b7774: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x4b7774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_4b7778:
    // 0x4b7778: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b7778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b777c:
    // 0x4b777c: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
label_4b7780:
    if (ctx->pc == 0x4B7780u) {
        ctx->pc = 0x4B7780u;
            // 0x4b7780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7784u;
        goto label_4b7784;
    }
    ctx->pc = 0x4B777Cu;
    {
        const bool branch_taken_0x4b777c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b777c) {
            ctx->pc = 0x4B7780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B777Cu;
            // 0x4b7780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7820u;
            goto label_4b7820;
        }
    }
    ctx->pc = 0x4B7784u;
label_4b7784:
    // 0x4b7784: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b7784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b7788:
    // 0x4b7788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b778c:
    // 0x4b778c: 0xc4456550  lwc1        $f5, 0x6550($v0)
    ctx->pc = 0x4b778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b7790:
    // 0x4b7790: 0xa283017a  sb          $v1, 0x17A($s4)
    ctx->pc = 0x4b7790u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 378), (uint8_t)GPR_U32(ctx, 3));
label_4b7794:
    // 0x4b7794: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4b7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7798:
    // 0x4b7798: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b7798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b779c:
    // 0x4b779c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b77a0:
    // 0x4b77a0: 0xc4446554  lwc1        $f4, 0x6554($v0)
    ctx->pc = 0x4b77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b77a4:
    // 0x4b77a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b77a8:
    // 0x4b77a8: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x4b77a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
label_4b77ac:
    // 0x4b77ac: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x4b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4b77b0:
    // 0x4b77b0: 0xe7a50180  swc1        $f5, 0x180($sp)
    ctx->pc = 0x4b77b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_4b77b4:
    // 0x4b77b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b77b8:
    // 0x4b77b8: 0xc4436558  lwc1        $f3, 0x6558($v0)
    ctx->pc = 0x4b77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b77bc:
    // 0x4b77bc: 0xe7a40184  swc1        $f4, 0x184($sp)
    ctx->pc = 0x4b77bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_4b77c0:
    // 0x4b77c0: 0xe7a6018c  swc1        $f6, 0x18C($sp)
    ctx->pc = 0x4b77c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_4b77c4:
    // 0x4b77c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b77c8:
    // 0x4b77c8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b77cc:
    // 0x4b77cc: 0xe7a30188  swc1        $f3, 0x188($sp)
    ctx->pc = 0x4b77ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_4b77d0:
    // 0x4b77d0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b77d4:
    // 0x4b77d4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b77d8:
    // 0x4b77d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4b77d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b77dc:
    // 0x4b77dc: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4b77dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4b77e0:
    // 0x4b77e0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x4b77e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_4b77e4:
    // 0x4b77e4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4b77e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b77e8:
    // 0x4b77e8: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x4b77e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_4b77ec:
    // 0x4b77ec: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x4b77ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4b77f0:
    // 0x4b77f0: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4b77f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4b77f4:
    // 0x4b77f4: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x4b77f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_4b77f8:
    // 0x4b77f8: 0xc088b74  jal         func_222DD0
label_4b77fc:
    if (ctx->pc == 0x4B77FCu) {
        ctx->pc = 0x4B77FCu;
            // 0x4b77fc: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x4B7800u;
        goto label_4b7800;
    }
    ctx->pc = 0x4B77F8u;
    SET_GPR_U32(ctx, 31, 0x4B7800u);
    ctx->pc = 0x4B77FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B77F8u;
            // 0x4b77fc: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7800u; }
        if (ctx->pc != 0x4B7800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7800u; }
        if (ctx->pc != 0x4B7800u) { return; }
    }
    ctx->pc = 0x4B7800u;
label_4b7800:
    // 0x4b7800: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4b7800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b7804:
    // 0x4b7804: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4b7804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4b7808:
    // 0x4b7808: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b7808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b780c:
    // 0x4b780c: 0x320f809  jalr        $t9
label_4b7810:
    if (ctx->pc == 0x4B7810u) {
        ctx->pc = 0x4B7810u;
            // 0x4b7810: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4B7814u;
        goto label_4b7814;
    }
    ctx->pc = 0x4B780Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B7814u);
        ctx->pc = 0x4B7810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B780Cu;
            // 0x4b7810: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B7814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B7814u; }
            if (ctx->pc != 0x4B7814u) { return; }
        }
        }
    }
    ctx->pc = 0x4B7814u;
label_4b7814:
    // 0x4b7814: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b7818:
    // 0x4b7818: 0x100000ff  b           . + 4 + (0xFF << 2)
label_4b781c:
    if (ctx->pc == 0x4B781Cu) {
        ctx->pc = 0x4B781Cu;
            // 0x4b781c: 0xae8200d4  sw          $v0, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x4B7820u;
        goto label_4b7820;
    }
    ctx->pc = 0x4B7818u;
    {
        const bool branch_taken_0x4b7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7818u;
            // 0x4b781c: 0xae8200d4  sw          $v0, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7818) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7820u;
label_4b7820:
    // 0x4b7820: 0xc12e0a4  jal         func_4B8290
label_4b7824:
    if (ctx->pc == 0x4B7824u) {
        ctx->pc = 0x4B7828u;
        goto label_4b7828;
    }
    ctx->pc = 0x4B7820u;
    SET_GPR_U32(ctx, 31, 0x4B7828u);
    ctx->pc = 0x4B8290u;
    if (runtime->hasFunction(0x4B8290u)) {
        auto targetFn = runtime->lookupFunction(0x4B8290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7828u; }
        if (ctx->pc != 0x4B7828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8290_0x4b8290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7828u; }
        if (ctx->pc != 0x4B7828u) { return; }
    }
    ctx->pc = 0x4B7828u;
label_4b7828:
    // 0x4b7828: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b7828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b782c:
    // 0x4b782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7830:
    // 0x4b7830: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4b7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b7834:
    // 0x4b7834: 0xc68600e8  lwc1        $f6, 0xE8($s4)
    ctx->pc = 0x4b7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4b7838:
    // 0x4b7838: 0xc68500e4  lwc1        $f5, 0xE4($s4)
    ctx->pc = 0x4b7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b783c:
    // 0x4b783c: 0xc68400e0  lwc1        $f4, 0xE0($s4)
    ctx->pc = 0x4b783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b7840:
    // 0x4b7840: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b7844:
    // 0x4b7844: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b7848:
    // 0x4b7848: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b7848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b784c:
    // 0x4b784c: 0xe7a40170  swc1        $f4, 0x170($sp)
    ctx->pc = 0x4b784cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4b7850:
    // 0x4b7850: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x4b7850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_4b7854:
    // 0x4b7854: 0xe7a50174  swc1        $f5, 0x174($sp)
    ctx->pc = 0x4b7854u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_4b7858:
    // 0x4b7858: 0xe7a60178  swc1        $f6, 0x178($sp)
    ctx->pc = 0x4b7858u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_4b785c:
    // 0x4b785c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7860:
    // 0x4b7860: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7864:
    // 0x4b7864: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4b7864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b7868:
    // 0x4b7868: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4b7868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b786c:
    // 0x4b786c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x4b786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4b7870:
    // 0x4b7870: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4b7870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4b7874:
    // 0x4b7874: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x4b7874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_4b7878:
    // 0x4b7878: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x4b7878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4b787c:
    // 0x4b787c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4b787cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4b7880:
    // 0x4b7880: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x4b7880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_4b7884:
    // 0x4b7884: 0xc088b74  jal         func_222DD0
label_4b7888:
    if (ctx->pc == 0x4B7888u) {
        ctx->pc = 0x4B7888u;
            // 0x4b7888: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x4B788Cu;
        goto label_4b788c;
    }
    ctx->pc = 0x4B7884u;
    SET_GPR_U32(ctx, 31, 0x4B788Cu);
    ctx->pc = 0x4B7888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7884u;
            // 0x4b7888: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B788Cu; }
        if (ctx->pc != 0x4B788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B788Cu; }
        if (ctx->pc != 0x4B788Cu) { return; }
    }
    ctx->pc = 0x4B788Cu;
label_4b788c:
    // 0x4b788c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4b788cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b7890:
    // 0x4b7890: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4b7890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4b7894:
    // 0x4b7894: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b7894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b7898:
    // 0x4b7898: 0x320f809  jalr        $t9
label_4b789c:
    if (ctx->pc == 0x4B789Cu) {
        ctx->pc = 0x4B789Cu;
            // 0x4b789c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4B78A0u;
        goto label_4b78a0;
    }
    ctx->pc = 0x4B7898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B78A0u);
        ctx->pc = 0x4B789Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7898u;
            // 0x4b789c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B78A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B78A0u; }
            if (ctx->pc != 0x4B78A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B78A0u;
label_4b78a0:
    // 0x4b78a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b78a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b78a4:
    // 0x4b78a4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x4b78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_4b78a8:
    // 0x4b78a8: 0xc12e050  jal         func_4B8140
label_4b78ac:
    if (ctx->pc == 0x4B78ACu) {
        ctx->pc = 0x4B78ACu;
            // 0x4b78ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B78B0u;
        goto label_4b78b0;
    }
    ctx->pc = 0x4B78A8u;
    SET_GPR_U32(ctx, 31, 0x4B78B0u);
    ctx->pc = 0x4B78ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B78A8u;
            // 0x4b78ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8140u;
    if (runtime->hasFunction(0x4B8140u)) {
        auto targetFn = runtime->lookupFunction(0x4B8140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78B0u; }
        if (ctx->pc != 0x4B78B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8140_0x4b8140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78B0u; }
        if (ctx->pc != 0x4B78B0u) { return; }
    }
    ctx->pc = 0x4B78B0u;
label_4b78b0:
    // 0x4b78b0: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x4b78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b78b4:
    // 0x4b78b4: 0x26840114  addiu       $a0, $s4, 0x114
    ctx->pc = 0x4b78b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
label_4b78b8:
    // 0x4b78b8: 0xc680016c  lwc1        $f0, 0x16C($s4)
    ctx->pc = 0x4b78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b78bc:
    // 0x4b78bc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4b78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4b78c0:
    // 0x4b78c0: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x4b78c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_4b78c4:
    // 0x4b78c4: 0xc0c6250  jal         func_318940
label_4b78c8:
    if (ctx->pc == 0x4B78C8u) {
        ctx->pc = 0x4B78C8u;
            // 0x4b78c8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B78CCu;
        goto label_4b78cc;
    }
    ctx->pc = 0x4B78C4u;
    SET_GPR_U32(ctx, 31, 0x4B78CCu);
    ctx->pc = 0x4B78C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B78C4u;
            // 0x4b78c8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78CCu; }
        if (ctx->pc != 0x4B78CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78CCu; }
        if (ctx->pc != 0x4B78CCu) { return; }
    }
    ctx->pc = 0x4B78CCu;
label_4b78cc:
    // 0x4b78cc: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_4b78d0:
    if (ctx->pc == 0x4B78D0u) {
        ctx->pc = 0x4B78D4u;
        goto label_4b78d4;
    }
    ctx->pc = 0x4B78CCu;
    {
        const bool branch_taken_0x4b78cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b78cc) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B78D4u;
label_4b78d4:
    // 0x4b78d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b78d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b78d8:
    // 0x4b78d8: 0xc122d2c  jal         func_48B4B0
label_4b78dc:
    if (ctx->pc == 0x4B78DCu) {
        ctx->pc = 0x4B78DCu;
            // 0x4b78dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4B78E0u;
        goto label_4b78e0;
    }
    ctx->pc = 0x4B78D8u;
    SET_GPR_U32(ctx, 31, 0x4B78E0u);
    ctx->pc = 0x4B78DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B78D8u;
            // 0x4b78dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78E0u; }
        if (ctx->pc != 0x4B78E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B78E0u; }
        if (ctx->pc != 0x4B78E0u) { return; }
    }
    ctx->pc = 0x4B78E0u;
label_4b78e0:
    // 0x4b78e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b78e4:
    // 0x4b78e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b78e8:
    // 0x4b78e8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b78ec:
    // 0x4b78ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b78ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b78f0:
    // 0x4b78f0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4b78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b78f4:
    // 0x4b78f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4b78f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b78f8:
    // 0x4b78f8: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_4b78fc:
    if (ctx->pc == 0x4B78FCu) {
        ctx->pc = 0x4B78FCu;
            // 0x4b78fc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4B7900u;
        goto label_4b7900;
    }
    ctx->pc = 0x4B78F8u;
    {
        const bool branch_taken_0x4b78f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b78f8) {
            ctx->pc = 0x4B78FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B78F8u;
            // 0x4b78fc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7950u;
            goto label_4b7950;
        }
    }
    ctx->pc = 0x4B7900u;
label_4b7900:
    // 0x4b7900: 0xc6810160  lwc1        $f1, 0x160($s4)
    ctx->pc = 0x4b7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7904:
    // 0x4b7904: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4b7904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4b7908:
    // 0x4b7908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b7908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b790c:
    // 0x4b790c: 0x0  nop
    ctx->pc = 0x4b790cu;
    // NOP
label_4b7910:
    // 0x4b7910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b7910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7914:
    // 0x4b7914: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4b7918:
    if (ctx->pc == 0x4B7918u) {
        ctx->pc = 0x4B7918u;
            // 0x4b7918: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B791Cu;
        goto label_4b791c;
    }
    ctx->pc = 0x4B7914u;
    {
        const bool branch_taken_0x4b7914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7914) {
            ctx->pc = 0x4B7918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7914u;
            // 0x4b7918: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B792Cu;
            goto label_4b792c;
        }
    }
    ctx->pc = 0x4B791Cu;
label_4b791c:
    // 0x4b791c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b791cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b7920:
    // 0x4b7920: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b7920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b7924:
    // 0x4b7924: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b7928:
    if (ctx->pc == 0x4B7928u) {
        ctx->pc = 0x4B7928u;
            // 0x4b7928: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4B792Cu;
        goto label_4b792c;
    }
    ctx->pc = 0x4B7924u;
    {
        const bool branch_taken_0x4b7924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7924u;
            // 0x4b7928: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7924) {
            ctx->pc = 0x4B7944u;
            goto label_4b7944;
        }
    }
    ctx->pc = 0x4B792Cu;
label_4b792c:
    // 0x4b792c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4b792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4b7930:
    // 0x4b7930: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b7930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b7934:
    // 0x4b7934: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b7934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b7938:
    // 0x4b7938: 0x0  nop
    ctx->pc = 0x4b7938u;
    // NOP
label_4b793c:
    // 0x4b793c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b7940:
    // 0x4b7940: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b7940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b7944:
    // 0x4b7944: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_4b7948:
    if (ctx->pc == 0x4B7948u) {
        ctx->pc = 0x4B794Cu;
        goto label_4b794c;
    }
    ctx->pc = 0x4B7944u;
    {
        const bool branch_taken_0x4b7944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7944) {
            ctx->pc = 0x4B7A30u;
            goto label_4b7a30;
        }
    }
    ctx->pc = 0x4B794Cu;
label_4b794c:
    // 0x4b794c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4b794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4b7950:
    // 0x4b7950: 0xc04f278  jal         func_13C9E0
label_4b7954:
    if (ctx->pc == 0x4B7954u) {
        ctx->pc = 0x4B7954u;
            // 0x4b7954: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4B7958u;
        goto label_4b7958;
    }
    ctx->pc = 0x4B7950u;
    SET_GPR_U32(ctx, 31, 0x4B7958u);
    ctx->pc = 0x4B7954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7950u;
            // 0x4b7954: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7958u; }
        if (ctx->pc != 0x4B7958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7958u; }
        if (ctx->pc != 0x4B7958u) { return; }
    }
    ctx->pc = 0x4B7958u;
label_4b7958:
    // 0x4b7958: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4b7958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4b795c:
    // 0x4b795c: 0xc04ce80  jal         func_133A00
label_4b7960:
    if (ctx->pc == 0x4B7960u) {
        ctx->pc = 0x4B7960u;
            // 0x4b7960: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4B7964u;
        goto label_4b7964;
    }
    ctx->pc = 0x4B795Cu;
    SET_GPR_U32(ctx, 31, 0x4B7964u);
    ctx->pc = 0x4B7960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B795Cu;
            // 0x4b7960: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7964u; }
        if (ctx->pc != 0x4B7964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7964u; }
        if (ctx->pc != 0x4B7964u) { return; }
    }
    ctx->pc = 0x4B7964u;
label_4b7964:
    // 0x4b7964: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x4b7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_4b7968:
    // 0x4b7968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b7968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b796c:
    // 0x4b796c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4b796cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b7970:
    // 0x4b7970: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4b7970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4b7974:
    // 0x4b7974: 0xc04f308  jal         func_13CC20
label_4b7978:
    if (ctx->pc == 0x4B7978u) {
        ctx->pc = 0x4B7978u;
            // 0x4b7978: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4B797Cu;
        goto label_4b797c;
    }
    ctx->pc = 0x4B7974u;
    SET_GPR_U32(ctx, 31, 0x4B797Cu);
    ctx->pc = 0x4B7978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7974u;
            // 0x4b7978: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B797Cu; }
        if (ctx->pc != 0x4B797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B797Cu; }
        if (ctx->pc != 0x4B797Cu) { return; }
    }
    ctx->pc = 0x4B797Cu;
label_4b797c:
    // 0x4b797c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b797cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4b7980:
    // 0x4b7980: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4b7980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4b7984:
    // 0x4b7984: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4b7984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4b7988:
    // 0x4b7988: 0xc04cca0  jal         func_133280
label_4b798c:
    if (ctx->pc == 0x4B798Cu) {
        ctx->pc = 0x4B798Cu;
            // 0x4b798c: 0x24c66530  addiu       $a2, $a2, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25904));
        ctx->pc = 0x4B7990u;
        goto label_4b7990;
    }
    ctx->pc = 0x4B7988u;
    SET_GPR_U32(ctx, 31, 0x4B7990u);
    ctx->pc = 0x4B798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7988u;
            // 0x4b798c: 0x24c66530  addiu       $a2, $a2, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7990u; }
        if (ctx->pc != 0x4B7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7990u; }
        if (ctx->pc != 0x4B7990u) { return; }
    }
    ctx->pc = 0x4B7990u;
label_4b7990:
    // 0x4b7990: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4b7990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_4b7994:
    // 0x4b7994: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4b7994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4b7998:
    // 0x4b7998: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b7998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b799c:
    // 0x4b799c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b799cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b79a0:
    // 0x4b79a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b79a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b79a4:
    // 0x4b79a4: 0xc04cc7c  jal         func_1331F0
label_4b79a8:
    if (ctx->pc == 0x4B79A8u) {
        ctx->pc = 0x4B79A8u;
            // 0x4b79a8: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
        ctx->pc = 0x4B79ACu;
        goto label_4b79ac;
    }
    ctx->pc = 0x4B79A4u;
    SET_GPR_U32(ctx, 31, 0x4B79ACu);
    ctx->pc = 0x4B79A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B79A4u;
            // 0x4b79a8: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B79ACu; }
        if (ctx->pc != 0x4B79ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B79ACu; }
        if (ctx->pc != 0x4B79ACu) { return; }
    }
    ctx->pc = 0x4B79ACu;
label_4b79ac:
    // 0x4b79ac: 0x268400f0  addiu       $a0, $s4, 0xF0
    ctx->pc = 0x4b79acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
label_4b79b0:
    // 0x4b79b0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x4b79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4b79b4:
    // 0x4b79b4: 0xc04cca0  jal         func_133280
label_4b79b8:
    if (ctx->pc == 0x4B79B8u) {
        ctx->pc = 0x4B79B8u;
            // 0x4b79b8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4B79BCu;
        goto label_4b79bc;
    }
    ctx->pc = 0x4B79B4u;
    SET_GPR_U32(ctx, 31, 0x4B79BCu);
    ctx->pc = 0x4B79B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B79B4u;
            // 0x4b79b8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B79BCu; }
        if (ctx->pc != 0x4B79BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B79BCu; }
        if (ctx->pc != 0x4B79BCu) { return; }
    }
    ctx->pc = 0x4B79BCu;
label_4b79bc:
    // 0x4b79bc: 0x96820178  lhu         $v0, 0x178($s4)
    ctx->pc = 0x4b79bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 376)));
label_4b79c0:
    // 0x4b79c0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_4b79c4:
    if (ctx->pc == 0x4B79C4u) {
        ctx->pc = 0x4B79C4u;
            // 0x4b79c4: 0xc6800164  lwc1        $f0, 0x164($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4B79C8u;
        goto label_4b79c8;
    }
    ctx->pc = 0x4B79C0u;
    {
        const bool branch_taken_0x4b79c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b79c0) {
            ctx->pc = 0x4B79C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B79C0u;
            // 0x4b79c4: 0xc6800164  lwc1        $f0, 0x164($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7A2Cu;
            goto label_4b7a2c;
        }
    }
    ctx->pc = 0x4B79C8u;
label_4b79c8:
    // 0x4b79c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4b79c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4b79cc:
    // 0x4b79cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b79ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b79d0:
    // 0x4b79d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b79d4:
    // 0x4b79d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b79d8:
    // 0x4b79d8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b79dc:
    // 0x4b79dc: 0x8c44077c  lw          $a0, 0x77C($v0)
    ctx->pc = 0x4b79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_4b79e0:
    // 0x4b79e0: 0xc31004  sllv        $v0, $v1, $a2
    ctx->pc = 0x4b79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_4b79e4:
    // 0x4b79e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4b79e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4b79e8:
    // 0x4b79e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b79ec:
    if (ctx->pc == 0x4B79ECu) {
        ctx->pc = 0x4B79F0u;
        goto label_4b79f0;
    }
    ctx->pc = 0x4B79E8u;
    {
        const bool branch_taken_0x4b79e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b79e8) {
            ctx->pc = 0x4B7A00u;
            goto label_4b7a00;
        }
    }
    ctx->pc = 0x4B79F0u;
label_4b79f0:
    // 0x4b79f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4b79f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4b79f4:
    // 0x4b79f4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4b79f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b79f8:
    // 0x4b79f8: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4b79fc:
    if (ctx->pc == 0x4B79FCu) {
        ctx->pc = 0x4B79FCu;
            // 0x4b79fc: 0xc31004  sllv        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
        ctx->pc = 0x4B7A00u;
        goto label_4b7a00;
    }
    ctx->pc = 0x4B79F8u;
    {
        const bool branch_taken_0x4b79f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b79f8) {
            ctx->pc = 0x4B79FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B79F8u;
            // 0x4b79fc: 0xc31004  sllv        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B79E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b79e4;
        }
    }
    ctx->pc = 0x4B7A00u;
label_4b7a00:
    // 0x4b7a00: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b7a04:
    // 0x4b7a04: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4b7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4b7a08:
    // 0x4b7a08: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4b7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4b7a0c:
    // 0x4b7a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b7a10:
    // 0x4b7a10: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4b7a14:
    // 0x4b7a14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b7a18:
    // 0x4b7a18: 0xc440c958  lwc1        $f0, -0x36A8($v0)
    ctx->pc = 0x4b7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7a1c:
    // 0x4b7a1c: 0xc46102c4  lwc1        $f1, 0x2C4($v1)
    ctx->pc = 0x4b7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7a20:
    // 0x4b7a20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4b7a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b7a24:
    // 0x4b7a24: 0xe6800164  swc1        $f0, 0x164($s4)
    ctx->pc = 0x4b7a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 356), bits); }
label_4b7a28:
    // 0x4b7a28: 0xc6800164  lwc1        $f0, 0x164($s4)
    ctx->pc = 0x4b7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7a2c:
    // 0x4b7a2c: 0xe68000f4  swc1        $f0, 0xF4($s4)
    ctx->pc = 0x4b7a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 244), bits); }
label_4b7a30:
    // 0x4b7a30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b7a34:
    // 0x4b7a34: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x4b7a34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_4b7a38:
    // 0x4b7a38: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4b7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b7a3c:
    // 0x4b7a3c: 0xc68000d8  lwc1        $f0, 0xD8($s4)
    ctx->pc = 0x4b7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7a40:
    // 0x4b7a40: 0x26730e84  addiu       $s3, $s3, 0xE84
    ctx->pc = 0x4b7a40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
label_4b7a44:
    // 0x4b7a44: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x4b7a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4b7a48:
    // 0x4b7a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b7a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7a4c:
    // 0x4b7a4c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4b7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7a50:
    // 0x4b7a50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b7a54:
    // 0x4b7a54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4b7a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4b7a58:
    // 0x4b7a58: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x4b7a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
label_4b7a5c:
    // 0x4b7a5c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b7a60:
    // 0x4b7a60: 0x8c52077c  lw          $s2, 0x77C($v0)
    ctx->pc = 0x4b7a60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_4b7a64:
    // 0x4b7a64: 0xa6800178  sh          $zero, 0x178($s4)
    ctx->pc = 0x4b7a64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 376), (uint16_t)GPR_U32(ctx, 0));
label_4b7a68:
    // 0x4b7a68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b7a6c:
    // 0x4b7a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b7a70:
    // 0x4b7a70: 0xc04cc34  jal         func_1330D0
label_4b7a74:
    if (ctx->pc == 0x4B7A74u) {
        ctx->pc = 0x4B7A74u;
            // 0x4b7a74: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x4B7A78u;
        goto label_4b7a78;
    }
    ctx->pc = 0x4B7A70u;
    SET_GPR_U32(ctx, 31, 0x4B7A78u);
    ctx->pc = 0x4B7A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7A70u;
            // 0x4b7a74: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7A78u; }
        if (ctx->pc != 0x4B7A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7A78u; }
        if (ctx->pc != 0x4B7A78u) { return; }
    }
    ctx->pc = 0x4B7A78u;
label_4b7a78:
    // 0x4b7a78: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x4b7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
label_4b7a7c:
    // 0x4b7a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b7a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b7a80:
    // 0x4b7a80: 0x0  nop
    ctx->pc = 0x4b7a80u;
    // NOP
label_4b7a84:
    // 0x4b7a84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b7a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7a88:
    // 0x4b7a88: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_4b7a8c:
    if (ctx->pc == 0x4B7A8Cu) {
        ctx->pc = 0x4B7A90u;
        goto label_4b7a90;
    }
    ctx->pc = 0x4B7A88u;
    {
        const bool branch_taken_0x4b7a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7a88) {
            ctx->pc = 0x4B7AC8u;
            goto label_4b7ac8;
        }
    }
    ctx->pc = 0x4B7A90u;
label_4b7a90:
    // 0x4b7a90: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b7a94:
    // 0x4b7a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7a98:
    // 0x4b7a98: 0x96820178  lhu         $v0, 0x178($s4)
    ctx->pc = 0x4b7a98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 376)));
label_4b7a9c:
    // 0x4b7a9c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4b7a9cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4b7aa0:
    // 0x4b7aa0: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x4b7aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4b7aa4:
    // 0x4b7aa4: 0x8ca50d98  lw          $a1, 0xD98($a1)
    ctx->pc = 0x4b7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_4b7aa8:
    // 0x4b7aa8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4b7aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4b7aac:
    // 0x4b7aac: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4b7aacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b7ab0:
    // 0x4b7ab0: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x4b7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_4b7ab4:
    // 0x4b7ab4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4b7ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4b7ab8:
    // 0x4b7ab8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4b7abc:
    // 0x4b7abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4b7ac0:
    // 0x4b7ac0: 0xa6820178  sh          $v0, 0x178($s4)
    ctx->pc = 0x4b7ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 376), (uint16_t)GPR_U32(ctx, 2));
label_4b7ac4:
    // 0x4b7ac4: 0x0  nop
    ctx->pc = 0x4b7ac4u;
    // NOP
label_4b7ac8:
    // 0x4b7ac8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b7ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b7acc:
    // 0x4b7acc: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
label_4b7ad0:
    if (ctx->pc == 0x4B7AD0u) {
        ctx->pc = 0x4B7AD0u;
            // 0x4b7ad0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4B7AD4u;
        goto label_4b7ad4;
    }
    ctx->pc = 0x4B7ACCu;
    {
        const bool branch_taken_0x4b7acc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7ACCu;
            // 0x4b7ad0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7acc) {
            ctx->pc = 0x4B7A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b7a68;
        }
    }
    ctx->pc = 0x4B7AD4u;
label_4b7ad4:
    // 0x4b7ad4: 0xc6810164  lwc1        $f1, 0x164($s4)
    ctx->pc = 0x4b7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7ad8:
    // 0x4b7ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b7ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7adc:
    // 0x4b7adc: 0x0  nop
    ctx->pc = 0x4b7adcu;
    // NOP
label_4b7ae0:
    // 0x4b7ae0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4b7ae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7ae4:
    // 0x4b7ae4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b7ae8:
    if (ctx->pc == 0x4B7AE8u) {
        ctx->pc = 0x4B7AE8u;
            // 0x4b7ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B7AECu;
        goto label_4b7aec;
    }
    ctx->pc = 0x4B7AE4u;
    {
        const bool branch_taken_0x4b7ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B7AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7AE4u;
            // 0x4b7ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7ae4) {
            ctx->pc = 0x4B7AF0u;
            goto label_4b7af0;
        }
    }
    ctx->pc = 0x4B7AECu;
label_4b7aec:
    // 0x4b7aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b7aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7af0:
    // 0x4b7af0: 0x16000049  bnez        $s0, . + 4 + (0x49 << 2)
label_4b7af4:
    if (ctx->pc == 0x4B7AF4u) {
        ctx->pc = 0x4B7AF4u;
            // 0x4b7af4: 0xa282017b  sb          $v0, 0x17B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 379), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4B7AF8u;
        goto label_4b7af8;
    }
    ctx->pc = 0x4B7AF0u;
    {
        const bool branch_taken_0x4b7af0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7AF0u;
            // 0x4b7af4: 0xa282017b  sb          $v0, 0x17B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 379), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7af0) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7AF8u;
label_4b7af8:
    // 0x4b7af8: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x4b7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7afc:
    // 0x4b7afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b7afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b7b00:
    // 0x4b7b00: 0x0  nop
    ctx->pc = 0x4b7b00u;
    // NOP
label_4b7b04:
    // 0x4b7b04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b7b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b7b08:
    // 0x4b7b08: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_4b7b0c:
    if (ctx->pc == 0x4B7B0Cu) {
        ctx->pc = 0x4B7B10u;
        goto label_4b7b10;
    }
    ctx->pc = 0x4B7B08u;
    {
        const bool branch_taken_0x4b7b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7b08) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7B10u;
label_4b7b10:
    // 0x4b7b10: 0xa280017a  sb          $zero, 0x17A($s4)
    ctx->pc = 0x4b7b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 378), (uint8_t)GPR_U32(ctx, 0));
label_4b7b14:
    // 0x4b7b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b7b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b7b18:
    // 0x4b7b18: 0xc12e0a4  jal         func_4B8290
label_4b7b1c:
    if (ctx->pc == 0x4B7B1Cu) {
        ctx->pc = 0x4B7B1Cu;
            // 0x4b7b1c: 0xa280017b  sb          $zero, 0x17B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 379), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4B7B20u;
        goto label_4b7b20;
    }
    ctx->pc = 0x4B7B18u;
    SET_GPR_U32(ctx, 31, 0x4B7B20u);
    ctx->pc = 0x4B7B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7B18u;
            // 0x4b7b1c: 0xa280017b  sb          $zero, 0x17B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 379), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8290u;
    if (runtime->hasFunction(0x4B8290u)) {
        auto targetFn = runtime->lookupFunction(0x4B8290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7B20u; }
        if (ctx->pc != 0x4B7B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8290_0x4b8290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7B20u; }
        if (ctx->pc != 0x4B7B20u) { return; }
    }
    ctx->pc = 0x4B7B20u;
label_4b7b20:
    // 0x4b7b20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b7b24:
    // 0x4b7b24: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x4b7b24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4b7b28:
    // 0x4b7b28: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4b7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b7b2c:
    // 0x4b7b2c: 0xc68600e8  lwc1        $f6, 0xE8($s4)
    ctx->pc = 0x4b7b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4b7b30:
    // 0x4b7b30: 0xc68500e4  lwc1        $f5, 0xE4($s4)
    ctx->pc = 0x4b7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b7b34:
    // 0x4b7b34: 0xc68400e0  lwc1        $f4, 0xE0($s4)
    ctx->pc = 0x4b7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b7b38:
    // 0x4b7b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7b3c:
    // 0x4b7b3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b7b40:
    // 0x4b7b40: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b7b44:
    // 0x4b7b44: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b7b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b7b48:
    // 0x4b7b48: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x4b7b48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b7b4c:
    // 0x4b7b4c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4b7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4b7b50:
    // 0x4b7b50: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x4b7b50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4b7b54:
    // 0x4b7b54: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x4b7b54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b7b58:
    // 0x4b7b58: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b7b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7b5c:
    // 0x4b7b5c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b7b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7b60:
    // 0x4b7b60: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4b7b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b7b64:
    // 0x4b7b64: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4b7b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b7b68:
    // 0x4b7b68: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x4b7b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b7b6c:
    // 0x4b7b6c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4b7b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4b7b70:
    // 0x4b7b70: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4b7b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4b7b74:
    // 0x4b7b74: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x4b7b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4b7b78:
    // 0x4b7b78: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4b7b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4b7b7c:
    // 0x4b7b7c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4b7b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b7b80:
    // 0x4b7b80: 0xc088b74  jal         func_222DD0
label_4b7b84:
    if (ctx->pc == 0x4B7B84u) {
        ctx->pc = 0x4B7B84u;
            // 0x4b7b84: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x4B7B88u;
        goto label_4b7b88;
    }
    ctx->pc = 0x4B7B80u;
    SET_GPR_U32(ctx, 31, 0x4B7B88u);
    ctx->pc = 0x4B7B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7B80u;
            // 0x4b7b84: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7B88u; }
        if (ctx->pc != 0x4B7B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7B88u; }
        if (ctx->pc != 0x4B7B88u) { return; }
    }
    ctx->pc = 0x4B7B88u;
label_4b7b88:
    // 0x4b7b88: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4b7b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b7b8c:
    // 0x4b7b8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4b7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4b7b90:
    // 0x4b7b90: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b7b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b7b94:
    // 0x4b7b94: 0x320f809  jalr        $t9
label_4b7b98:
    if (ctx->pc == 0x4B7B98u) {
        ctx->pc = 0x4B7B98u;
            // 0x4b7b98: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4B7B9Cu;
        goto label_4b7b9c;
    }
    ctx->pc = 0x4B7B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B7B9Cu);
        ctx->pc = 0x4B7B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7B94u;
            // 0x4b7b98: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B7B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B7B9Cu; }
            if (ctx->pc != 0x4B7B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B7B9Cu;
label_4b7b9c:
    // 0x4b7b9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b7ba0:
    // 0x4b7ba0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x4b7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_4b7ba4:
    // 0x4b7ba4: 0xc12e050  jal         func_4B8140
label_4b7ba8:
    if (ctx->pc == 0x4B7BA8u) {
        ctx->pc = 0x4B7BA8u;
            // 0x4b7ba8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B7BACu;
        goto label_4b7bac;
    }
    ctx->pc = 0x4B7BA4u;
    SET_GPR_U32(ctx, 31, 0x4B7BACu);
    ctx->pc = 0x4B7BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7BA4u;
            // 0x4b7ba8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8140u;
    if (runtime->hasFunction(0x4B8140u)) {
        auto targetFn = runtime->lookupFunction(0x4B8140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BACu; }
        if (ctx->pc != 0x4B7BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8140_0x4b8140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BACu; }
        if (ctx->pc != 0x4B7BACu) { return; }
    }
    ctx->pc = 0x4B7BACu;
label_4b7bac:
    // 0x4b7bac: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x4b7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b7bb0:
    // 0x4b7bb0: 0x26840114  addiu       $a0, $s4, 0x114
    ctx->pc = 0x4b7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
label_4b7bb4:
    // 0x4b7bb4: 0xc680016c  lwc1        $f0, 0x16C($s4)
    ctx->pc = 0x4b7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7bb8:
    // 0x4b7bb8: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4b7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4b7bbc:
    // 0x4b7bbc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x4b7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_4b7bc0:
    // 0x4b7bc0: 0xc0c6250  jal         func_318940
label_4b7bc4:
    if (ctx->pc == 0x4B7BC4u) {
        ctx->pc = 0x4B7BC4u;
            // 0x4b7bc4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B7BC8u;
        goto label_4b7bc8;
    }
    ctx->pc = 0x4B7BC0u;
    SET_GPR_U32(ctx, 31, 0x4B7BC8u);
    ctx->pc = 0x4B7BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7BC0u;
            // 0x4b7bc4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BC8u; }
        if (ctx->pc != 0x4B7BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BC8u; }
        if (ctx->pc != 0x4B7BC8u) { return; }
    }
    ctx->pc = 0x4B7BC8u;
label_4b7bc8:
    // 0x4b7bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7bcc:
    // 0x4b7bcc: 0x10000012  b           . + 4 + (0x12 << 2)
label_4b7bd0:
    if (ctx->pc == 0x4B7BD0u) {
        ctx->pc = 0x4B7BD0u;
            // 0x4b7bd0: 0xae8200d4  sw          $v0, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x4B7BD4u;
        goto label_4b7bd4;
    }
    ctx->pc = 0x4B7BCCu;
    {
        const bool branch_taken_0x4b7bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7BCCu;
            // 0x4b7bd0: 0xae8200d4  sw          $v0, 0xD4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7bcc) {
            ctx->pc = 0x4B7C18u;
            goto label_4b7c18;
        }
    }
    ctx->pc = 0x4B7BD4u;
label_4b7bd4:
    // 0x4b7bd4: 0xc122c5c  jal         func_48B170
label_4b7bd8:
    if (ctx->pc == 0x4B7BD8u) {
        ctx->pc = 0x4B7BD8u;
            // 0x4b7bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7BDCu;
        goto label_4b7bdc;
    }
    ctx->pc = 0x4B7BD4u;
    SET_GPR_U32(ctx, 31, 0x4B7BDCu);
    ctx->pc = 0x4B7BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7BD4u;
            // 0x4b7bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BDCu; }
        if (ctx->pc != 0x4B7BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BDCu; }
        if (ctx->pc != 0x4B7BDCu) { return; }
    }
    ctx->pc = 0x4B7BDCu;
label_4b7bdc:
    // 0x4b7bdc: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x4b7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4b7be0:
    // 0x4b7be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7be4:
    // 0x4b7be4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4b7be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b7be8:
    // 0x4b7be8: 0xc08914c  jal         func_224530
label_4b7bec:
    if (ctx->pc == 0x4B7BECu) {
        ctx->pc = 0x4B7BECu;
            // 0x4b7bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7BF0u;
        goto label_4b7bf0;
    }
    ctx->pc = 0x4B7BE8u;
    SET_GPR_U32(ctx, 31, 0x4B7BF0u);
    ctx->pc = 0x4B7BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7BE8u;
            // 0x4b7bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BF0u; }
        if (ctx->pc != 0x4B7BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7BF0u; }
        if (ctx->pc != 0x4B7BF0u) { return; }
    }
    ctx->pc = 0x4B7BF0u;
label_4b7bf0:
    // 0x4b7bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7bf4:
    // 0x4b7bf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b7bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b7bf8:
    // 0x4b7bf8: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x4b7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_4b7bfc:
    // 0x4b7bfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4b7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b7c00:
    // 0x4b7c00: 0xc6800078  lwc1        $f0, 0x78($s4)
    ctx->pc = 0x4b7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b7c04:
    // 0x4b7c04: 0xc0e32a4  jal         func_38CA90
label_4b7c08:
    if (ctx->pc == 0x4B7C08u) {
        ctx->pc = 0x4B7C08u;
            // 0x4b7c08: 0xe6800074  swc1        $f0, 0x74($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
        ctx->pc = 0x4B7C0Cu;
        goto label_4b7c0c;
    }
    ctx->pc = 0x4B7C04u;
    SET_GPR_U32(ctx, 31, 0x4B7C0Cu);
    ctx->pc = 0x4B7C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C04u;
            // 0x4b7c08: 0xe6800074  swc1        $f0, 0x74($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C0Cu; }
        if (ctx->pc != 0x4B7C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C0Cu; }
        if (ctx->pc != 0x4B7C0Cu) { return; }
    }
    ctx->pc = 0x4B7C0Cu;
label_4b7c0c:
    // 0x4b7c0c: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x4b7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
label_4b7c10:
    // 0x4b7c10: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4b7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4b7c14:
    // 0x4b7c14: 0xa282004c  sb          $v0, 0x4C($s4)
    ctx->pc = 0x4b7c14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 2));
label_4b7c18:
    // 0x4b7c18: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x4b7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_4b7c1c:
    // 0x4b7c1c: 0xc0dc408  jal         func_371020
label_4b7c20:
    if (ctx->pc == 0x4B7C20u) {
        ctx->pc = 0x4B7C24u;
        goto label_4b7c24;
    }
    ctx->pc = 0x4B7C1Cu;
    SET_GPR_U32(ctx, 31, 0x4B7C24u);
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C24u; }
        if (ctx->pc != 0x4B7C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C24u; }
        if (ctx->pc != 0x4B7C24u) { return; }
    }
    ctx->pc = 0x4B7C24u;
label_4b7c24:
    // 0x4b7c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b7c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7c28:
    // 0x4b7c28: 0xc0b6e68  jal         func_2DB9A0
label_4b7c2c:
    if (ctx->pc == 0x4B7C2Cu) {
        ctx->pc = 0x4B7C2Cu;
            // 0x4b7c2c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7C30u;
        goto label_4b7c30;
    }
    ctx->pc = 0x4B7C28u;
    SET_GPR_U32(ctx, 31, 0x4B7C30u);
    ctx->pc = 0x4B7C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C28u;
            // 0x4b7c2c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C30u; }
        if (ctx->pc != 0x4B7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C30u; }
        if (ctx->pc != 0x4B7C30u) { return; }
    }
    ctx->pc = 0x4B7C30u;
label_4b7c30:
    // 0x4b7c30: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x4b7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_4b7c34:
    // 0x4b7c34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b7c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b7c38:
    // 0x4b7c38: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_4b7c3c:
    if (ctx->pc == 0x4B7C3Cu) {
        ctx->pc = 0x4B7C40u;
        goto label_4b7c40;
    }
    ctx->pc = 0x4B7C38u;
    {
        const bool branch_taken_0x4b7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7c38) {
            ctx->pc = 0x4B7D00u;
            goto label_4b7d00;
        }
    }
    ctx->pc = 0x4B7C40u;
label_4b7c40:
    // 0x4b7c40: 0x26910114  addiu       $s1, $s4, 0x114
    ctx->pc = 0x4b7c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
label_4b7c44:
    // 0x4b7c44: 0xc12dfd4  jal         func_4B7F50
label_4b7c48:
    if (ctx->pc == 0x4B7C48u) {
        ctx->pc = 0x4B7C48u;
            // 0x4b7c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C4Cu;
        goto label_4b7c4c;
    }
    ctx->pc = 0x4B7C44u;
    SET_GPR_U32(ctx, 31, 0x4B7C4Cu);
    ctx->pc = 0x4B7C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C44u;
            // 0x4b7c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F50u;
    if (runtime->hasFunction(0x4B7F50u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C4Cu; }
        if (ctx->pc != 0x4B7C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F50_0x4b7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C4Cu; }
        if (ctx->pc != 0x4B7C4Cu) { return; }
    }
    ctx->pc = 0x4B7C4Cu;
label_4b7c4c:
    // 0x4b7c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b7c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7c50:
    // 0x4b7c50: 0xc0c6278  jal         func_3189E0
label_4b7c54:
    if (ctx->pc == 0x4B7C54u) {
        ctx->pc = 0x4B7C54u;
            // 0x4b7c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C58u;
        goto label_4b7c58;
    }
    ctx->pc = 0x4B7C50u;
    SET_GPR_U32(ctx, 31, 0x4B7C58u);
    ctx->pc = 0x4B7C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C50u;
            // 0x4b7c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C58u; }
        if (ctx->pc != 0x4B7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C58u; }
        if (ctx->pc != 0x4B7C58u) { return; }
    }
    ctx->pc = 0x4B7C58u;
label_4b7c58:
    // 0x4b7c58: 0xc12dfd0  jal         func_4B7F40
label_4b7c5c:
    if (ctx->pc == 0x4B7C5Cu) {
        ctx->pc = 0x4B7C5Cu;
            // 0x4b7c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C60u;
        goto label_4b7c60;
    }
    ctx->pc = 0x4B7C58u;
    SET_GPR_U32(ctx, 31, 0x4B7C60u);
    ctx->pc = 0x4B7C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C58u;
            // 0x4b7c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F40u;
    if (runtime->hasFunction(0x4B7F40u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C60u; }
        if (ctx->pc != 0x4B7C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F40_0x4b7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C60u; }
        if (ctx->pc != 0x4B7C60u) { return; }
    }
    ctx->pc = 0x4B7C60u;
label_4b7c60:
    // 0x4b7c60: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_4b7c64:
    if (ctx->pc == 0x4B7C64u) {
        ctx->pc = 0x4B7C64u;
            // 0x4b7c64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7C68u;
        goto label_4b7c68;
    }
    ctx->pc = 0x4B7C60u;
    {
        const bool branch_taken_0x4b7c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7c60) {
            ctx->pc = 0x4B7C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C60u;
            // 0x4b7c64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7CDCu;
            goto label_4b7cdc;
        }
    }
    ctx->pc = 0x4B7C68u;
label_4b7c68:
    // 0x4b7c68: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x4b7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b7c6c:
    // 0x4b7c6c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x4b7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4b7c70:
    // 0x4b7c70: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x4b7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4b7c74:
    // 0x4b7c74: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x4b7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_4b7c78:
    // 0x4b7c78: 0xc12dfc8  jal         func_4B7F20
label_4b7c7c:
    if (ctx->pc == 0x4B7C7Cu) {
        ctx->pc = 0x4B7C7Cu;
            // 0x4b7c7c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B7C80u;
        goto label_4b7c80;
    }
    ctx->pc = 0x4B7C78u;
    SET_GPR_U32(ctx, 31, 0x4B7C80u);
    ctx->pc = 0x4B7C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C78u;
            // 0x4b7c7c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F20u;
    if (runtime->hasFunction(0x4B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C80u; }
        if (ctx->pc != 0x4B7C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F20_0x4b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C80u; }
        if (ctx->pc != 0x4B7C80u) { return; }
    }
    ctx->pc = 0x4B7C80u;
label_4b7c80:
    // 0x4b7c80: 0xc12dfc4  jal         func_4B7F10
label_4b7c84:
    if (ctx->pc == 0x4B7C84u) {
        ctx->pc = 0x4B7C84u;
            // 0x4b7c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C88u;
        goto label_4b7c88;
    }
    ctx->pc = 0x4B7C80u;
    SET_GPR_U32(ctx, 31, 0x4B7C88u);
    ctx->pc = 0x4B7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C80u;
            // 0x4b7c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F10u;
    if (runtime->hasFunction(0x4B7F10u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C88u; }
        if (ctx->pc != 0x4B7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F10_0x4b7f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C88u; }
        if (ctx->pc != 0x4B7C88u) { return; }
    }
    ctx->pc = 0x4B7C88u;
label_4b7c88:
    // 0x4b7c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7c8c:
    // 0x4b7c8c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4b7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4b7c90:
    // 0x4b7c90: 0xc12df58  jal         func_4B7D60
label_4b7c94:
    if (ctx->pc == 0x4B7C94u) {
        ctx->pc = 0x4B7C94u;
            // 0x4b7c94: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7C98u;
        goto label_4b7c98;
    }
    ctx->pc = 0x4B7C90u;
    SET_GPR_U32(ctx, 31, 0x4B7C98u);
    ctx->pc = 0x4B7C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C90u;
            // 0x4b7c94: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D60u;
    if (runtime->hasFunction(0x4B7D60u)) {
        auto targetFn = runtime->lookupFunction(0x4B7D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C98u; }
        if (ctx->pc != 0x4B7C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7D60_0x4b7d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7C98u; }
        if (ctx->pc != 0x4B7C98u) { return; }
    }
    ctx->pc = 0x4B7C98u;
label_4b7c98:
    // 0x4b7c98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4b7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b7c9c:
    // 0x4b7c9c: 0xc12df54  jal         func_4B7D50
label_4b7ca0:
    if (ctx->pc == 0x4B7CA0u) {
        ctx->pc = 0x4B7CA0u;
            // 0x4b7ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7CA4u;
        goto label_4b7ca4;
    }
    ctx->pc = 0x4B7C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B7CA4u);
    ctx->pc = 0x4B7CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7C9Cu;
            // 0x4b7ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D50u;
    if (runtime->hasFunction(0x4B7D50u)) {
        auto targetFn = runtime->lookupFunction(0x4B7D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CA4u; }
        if (ctx->pc != 0x4B7CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7D50_0x4b7d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CA4u; }
        if (ctx->pc != 0x4B7CA4u) { return; }
    }
    ctx->pc = 0x4B7CA4u;
label_4b7ca4:
    // 0x4b7ca4: 0xc0b6e84  jal         func_2DBA10
label_4b7ca8:
    if (ctx->pc == 0x4B7CA8u) {
        ctx->pc = 0x4B7CACu;
        goto label_4b7cac;
    }
    ctx->pc = 0x4B7CA4u;
    SET_GPR_U32(ctx, 31, 0x4B7CACu);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CACu; }
        if (ctx->pc != 0x4B7CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CACu; }
        if (ctx->pc != 0x4B7CACu) { return; }
    }
    ctx->pc = 0x4B7CACu;
label_4b7cac:
    // 0x4b7cac: 0xc0b6e60  jal         func_2DB980
label_4b7cb0:
    if (ctx->pc == 0x4B7CB0u) {
        ctx->pc = 0x4B7CB0u;
            // 0x4b7cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B7CB4u;
        goto label_4b7cb4;
    }
    ctx->pc = 0x4B7CACu;
    SET_GPR_U32(ctx, 31, 0x4B7CB4u);
    ctx->pc = 0x4B7CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CACu;
            // 0x4b7cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CB4u; }
        if (ctx->pc != 0x4B7CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CB4u; }
        if (ctx->pc != 0x4B7CB4u) { return; }
    }
    ctx->pc = 0x4B7CB4u;
label_4b7cb4:
    // 0x4b7cb4: 0xc0b6e38  jal         func_2DB8E0
label_4b7cb8:
    if (ctx->pc == 0x4B7CB8u) {
        ctx->pc = 0x4B7CB8u;
            // 0x4b7cb8: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4B7CBCu;
        goto label_4b7cbc;
    }
    ctx->pc = 0x4B7CB4u;
    SET_GPR_U32(ctx, 31, 0x4B7CBCu);
    ctx->pc = 0x4B7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CB4u;
            // 0x4b7cb8: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CBCu; }
        if (ctx->pc != 0x4B7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CBCu; }
        if (ctx->pc != 0x4B7CBCu) { return; }
    }
    ctx->pc = 0x4B7CBCu;
label_4b7cbc:
    // 0x4b7cbc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4b7cbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_4b7cc0:
    // 0x4b7cc0: 0xc0b6e28  jal         func_2DB8A0
label_4b7cc4:
    if (ctx->pc == 0x4B7CC4u) {
        ctx->pc = 0x4B7CC4u;
            // 0x4b7cc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7CC8u;
        goto label_4b7cc8;
    }
    ctx->pc = 0x4B7CC0u;
    SET_GPR_U32(ctx, 31, 0x4B7CC8u);
    ctx->pc = 0x4B7CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CC0u;
            // 0x4b7cc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CC8u; }
        if (ctx->pc != 0x4B7CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CC8u; }
        if (ctx->pc != 0x4B7CC8u) { return; }
    }
    ctx->pc = 0x4B7CC8u;
label_4b7cc8:
    // 0x4b7cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b7cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7ccc:
    // 0x4b7ccc: 0xc0dc3f4  jal         func_370FD0
label_4b7cd0:
    if (ctx->pc == 0x4B7CD0u) {
        ctx->pc = 0x4B7CD0u;
            // 0x4b7cd0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7CD4u;
        goto label_4b7cd4;
    }
    ctx->pc = 0x4B7CCCu;
    SET_GPR_U32(ctx, 31, 0x4B7CD4u);
    ctx->pc = 0x4B7CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CCCu;
            // 0x4b7cd0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CD4u; }
        if (ctx->pc != 0x4B7CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CD4u; }
        if (ctx->pc != 0x4B7CD4u) { return; }
    }
    ctx->pc = 0x4B7CD4u;
label_4b7cd4:
    // 0x4b7cd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b7cd8:
    if (ctx->pc == 0x4B7CD8u) {
        ctx->pc = 0x4B7CDCu;
        goto label_4b7cdc;
    }
    ctx->pc = 0x4B7CD4u;
    {
        const bool branch_taken_0x4b7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7cd4) {
            ctx->pc = 0x4B7D00u;
            goto label_4b7d00;
        }
    }
    ctx->pc = 0x4B7CDCu;
label_4b7cdc:
    // 0x4b7cdc: 0xc0cac94  jal         func_32B250
label_4b7ce0:
    if (ctx->pc == 0x4B7CE0u) {
        ctx->pc = 0x4B7CE4u;
        goto label_4b7ce4;
    }
    ctx->pc = 0x4B7CDCu;
    SET_GPR_U32(ctx, 31, 0x4B7CE4u);
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CE4u; }
        if (ctx->pc != 0x4B7CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CE4u; }
        if (ctx->pc != 0x4B7CE4u) { return; }
    }
    ctx->pc = 0x4B7CE4u;
label_4b7ce4:
    // 0x4b7ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b7ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7ce8:
    // 0x4b7ce8: 0xc0dc3f4  jal         func_370FD0
label_4b7cec:
    if (ctx->pc == 0x4B7CECu) {
        ctx->pc = 0x4B7CECu;
            // 0x4b7cec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B7CF0u;
        goto label_4b7cf0;
    }
    ctx->pc = 0x4B7CE8u;
    SET_GPR_U32(ctx, 31, 0x4B7CF0u);
    ctx->pc = 0x4B7CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CE8u;
            // 0x4b7cec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CF0u; }
        if (ctx->pc != 0x4B7CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7CF0u; }
        if (ctx->pc != 0x4B7CF0u) { return; }
    }
    ctx->pc = 0x4B7CF0u;
label_4b7cf0:
    // 0x4b7cf0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4b7cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4b7cf4:
    // 0x4b7cf4: 0x26840174  addiu       $a0, $s4, 0x174
    ctx->pc = 0x4b7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 372));
label_4b7cf8:
    // 0x4b7cf8: 0xc12df4c  jal         func_4B7D30
label_4b7cfc:
    if (ctx->pc == 0x4B7CFCu) {
        ctx->pc = 0x4B7CFCu;
            // 0x4b7cfc: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->pc = 0x4B7D00u;
        goto label_4b7d00;
    }
    ctx->pc = 0x4B7CF8u;
    SET_GPR_U32(ctx, 31, 0x4B7D00u);
    ctx->pc = 0x4B7CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7CF8u;
            // 0x4b7cfc: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D30u;
    if (runtime->hasFunction(0x4B7D30u)) {
        auto targetFn = runtime->lookupFunction(0x4B7D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7D00u; }
        if (ctx->pc != 0x4B7D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7D30_0x4b7d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7D00u; }
        if (ctx->pc != 0x4B7D00u) { return; }
    }
    ctx->pc = 0x4B7D00u;
label_4b7d00:
    // 0x4b7d00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b7d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4b7d04:
    // 0x4b7d04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b7d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b7d08:
    // 0x4b7d08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4b7d08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b7d0c:
    // 0x4b7d0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4b7d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b7d10:
    // 0x4b7d10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b7d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b7d14:
    // 0x4b7d14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b7d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b7d18:
    // 0x4b7d18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b7d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b7d1c:
    // 0x4b7d1c: 0x3e00008  jr          $ra
label_4b7d20:
    if (ctx->pc == 0x4B7D20u) {
        ctx->pc = 0x4B7D20u;
            // 0x4b7d20: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x4B7D24u;
        goto label_4b7d24;
    }
    ctx->pc = 0x4B7D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7D1Cu;
            // 0x4b7d20: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7D24u;
label_4b7d24:
    // 0x4b7d24: 0x0  nop
    ctx->pc = 0x4b7d24u;
    // NOP
label_4b7d28:
    // 0x4b7d28: 0x0  nop
    ctx->pc = 0x4b7d28u;
    // NOP
label_4b7d2c:
    // 0x4b7d2c: 0x0  nop
    ctx->pc = 0x4b7d2cu;
    // NOP
}
