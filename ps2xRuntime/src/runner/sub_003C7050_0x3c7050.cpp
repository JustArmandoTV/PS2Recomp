#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C7050
// Address: 0x3c7050 - 0x3c7d90
void sub_003C7050_0x3c7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7050_0x3c7050");
#endif

    switch (ctx->pc) {
        case 0x3c7050u: goto label_3c7050;
        case 0x3c7054u: goto label_3c7054;
        case 0x3c7058u: goto label_3c7058;
        case 0x3c705cu: goto label_3c705c;
        case 0x3c7060u: goto label_3c7060;
        case 0x3c7064u: goto label_3c7064;
        case 0x3c7068u: goto label_3c7068;
        case 0x3c706cu: goto label_3c706c;
        case 0x3c7070u: goto label_3c7070;
        case 0x3c7074u: goto label_3c7074;
        case 0x3c7078u: goto label_3c7078;
        case 0x3c707cu: goto label_3c707c;
        case 0x3c7080u: goto label_3c7080;
        case 0x3c7084u: goto label_3c7084;
        case 0x3c7088u: goto label_3c7088;
        case 0x3c708cu: goto label_3c708c;
        case 0x3c7090u: goto label_3c7090;
        case 0x3c7094u: goto label_3c7094;
        case 0x3c7098u: goto label_3c7098;
        case 0x3c709cu: goto label_3c709c;
        case 0x3c70a0u: goto label_3c70a0;
        case 0x3c70a4u: goto label_3c70a4;
        case 0x3c70a8u: goto label_3c70a8;
        case 0x3c70acu: goto label_3c70ac;
        case 0x3c70b0u: goto label_3c70b0;
        case 0x3c70b4u: goto label_3c70b4;
        case 0x3c70b8u: goto label_3c70b8;
        case 0x3c70bcu: goto label_3c70bc;
        case 0x3c70c0u: goto label_3c70c0;
        case 0x3c70c4u: goto label_3c70c4;
        case 0x3c70c8u: goto label_3c70c8;
        case 0x3c70ccu: goto label_3c70cc;
        case 0x3c70d0u: goto label_3c70d0;
        case 0x3c70d4u: goto label_3c70d4;
        case 0x3c70d8u: goto label_3c70d8;
        case 0x3c70dcu: goto label_3c70dc;
        case 0x3c70e0u: goto label_3c70e0;
        case 0x3c70e4u: goto label_3c70e4;
        case 0x3c70e8u: goto label_3c70e8;
        case 0x3c70ecu: goto label_3c70ec;
        case 0x3c70f0u: goto label_3c70f0;
        case 0x3c70f4u: goto label_3c70f4;
        case 0x3c70f8u: goto label_3c70f8;
        case 0x3c70fcu: goto label_3c70fc;
        case 0x3c7100u: goto label_3c7100;
        case 0x3c7104u: goto label_3c7104;
        case 0x3c7108u: goto label_3c7108;
        case 0x3c710cu: goto label_3c710c;
        case 0x3c7110u: goto label_3c7110;
        case 0x3c7114u: goto label_3c7114;
        case 0x3c7118u: goto label_3c7118;
        case 0x3c711cu: goto label_3c711c;
        case 0x3c7120u: goto label_3c7120;
        case 0x3c7124u: goto label_3c7124;
        case 0x3c7128u: goto label_3c7128;
        case 0x3c712cu: goto label_3c712c;
        case 0x3c7130u: goto label_3c7130;
        case 0x3c7134u: goto label_3c7134;
        case 0x3c7138u: goto label_3c7138;
        case 0x3c713cu: goto label_3c713c;
        case 0x3c7140u: goto label_3c7140;
        case 0x3c7144u: goto label_3c7144;
        case 0x3c7148u: goto label_3c7148;
        case 0x3c714cu: goto label_3c714c;
        case 0x3c7150u: goto label_3c7150;
        case 0x3c7154u: goto label_3c7154;
        case 0x3c7158u: goto label_3c7158;
        case 0x3c715cu: goto label_3c715c;
        case 0x3c7160u: goto label_3c7160;
        case 0x3c7164u: goto label_3c7164;
        case 0x3c7168u: goto label_3c7168;
        case 0x3c716cu: goto label_3c716c;
        case 0x3c7170u: goto label_3c7170;
        case 0x3c7174u: goto label_3c7174;
        case 0x3c7178u: goto label_3c7178;
        case 0x3c717cu: goto label_3c717c;
        case 0x3c7180u: goto label_3c7180;
        case 0x3c7184u: goto label_3c7184;
        case 0x3c7188u: goto label_3c7188;
        case 0x3c718cu: goto label_3c718c;
        case 0x3c7190u: goto label_3c7190;
        case 0x3c7194u: goto label_3c7194;
        case 0x3c7198u: goto label_3c7198;
        case 0x3c719cu: goto label_3c719c;
        case 0x3c71a0u: goto label_3c71a0;
        case 0x3c71a4u: goto label_3c71a4;
        case 0x3c71a8u: goto label_3c71a8;
        case 0x3c71acu: goto label_3c71ac;
        case 0x3c71b0u: goto label_3c71b0;
        case 0x3c71b4u: goto label_3c71b4;
        case 0x3c71b8u: goto label_3c71b8;
        case 0x3c71bcu: goto label_3c71bc;
        case 0x3c71c0u: goto label_3c71c0;
        case 0x3c71c4u: goto label_3c71c4;
        case 0x3c71c8u: goto label_3c71c8;
        case 0x3c71ccu: goto label_3c71cc;
        case 0x3c71d0u: goto label_3c71d0;
        case 0x3c71d4u: goto label_3c71d4;
        case 0x3c71d8u: goto label_3c71d8;
        case 0x3c71dcu: goto label_3c71dc;
        case 0x3c71e0u: goto label_3c71e0;
        case 0x3c71e4u: goto label_3c71e4;
        case 0x3c71e8u: goto label_3c71e8;
        case 0x3c71ecu: goto label_3c71ec;
        case 0x3c71f0u: goto label_3c71f0;
        case 0x3c71f4u: goto label_3c71f4;
        case 0x3c71f8u: goto label_3c71f8;
        case 0x3c71fcu: goto label_3c71fc;
        case 0x3c7200u: goto label_3c7200;
        case 0x3c7204u: goto label_3c7204;
        case 0x3c7208u: goto label_3c7208;
        case 0x3c720cu: goto label_3c720c;
        case 0x3c7210u: goto label_3c7210;
        case 0x3c7214u: goto label_3c7214;
        case 0x3c7218u: goto label_3c7218;
        case 0x3c721cu: goto label_3c721c;
        case 0x3c7220u: goto label_3c7220;
        case 0x3c7224u: goto label_3c7224;
        case 0x3c7228u: goto label_3c7228;
        case 0x3c722cu: goto label_3c722c;
        case 0x3c7230u: goto label_3c7230;
        case 0x3c7234u: goto label_3c7234;
        case 0x3c7238u: goto label_3c7238;
        case 0x3c723cu: goto label_3c723c;
        case 0x3c7240u: goto label_3c7240;
        case 0x3c7244u: goto label_3c7244;
        case 0x3c7248u: goto label_3c7248;
        case 0x3c724cu: goto label_3c724c;
        case 0x3c7250u: goto label_3c7250;
        case 0x3c7254u: goto label_3c7254;
        case 0x3c7258u: goto label_3c7258;
        case 0x3c725cu: goto label_3c725c;
        case 0x3c7260u: goto label_3c7260;
        case 0x3c7264u: goto label_3c7264;
        case 0x3c7268u: goto label_3c7268;
        case 0x3c726cu: goto label_3c726c;
        case 0x3c7270u: goto label_3c7270;
        case 0x3c7274u: goto label_3c7274;
        case 0x3c7278u: goto label_3c7278;
        case 0x3c727cu: goto label_3c727c;
        case 0x3c7280u: goto label_3c7280;
        case 0x3c7284u: goto label_3c7284;
        case 0x3c7288u: goto label_3c7288;
        case 0x3c728cu: goto label_3c728c;
        case 0x3c7290u: goto label_3c7290;
        case 0x3c7294u: goto label_3c7294;
        case 0x3c7298u: goto label_3c7298;
        case 0x3c729cu: goto label_3c729c;
        case 0x3c72a0u: goto label_3c72a0;
        case 0x3c72a4u: goto label_3c72a4;
        case 0x3c72a8u: goto label_3c72a8;
        case 0x3c72acu: goto label_3c72ac;
        case 0x3c72b0u: goto label_3c72b0;
        case 0x3c72b4u: goto label_3c72b4;
        case 0x3c72b8u: goto label_3c72b8;
        case 0x3c72bcu: goto label_3c72bc;
        case 0x3c72c0u: goto label_3c72c0;
        case 0x3c72c4u: goto label_3c72c4;
        case 0x3c72c8u: goto label_3c72c8;
        case 0x3c72ccu: goto label_3c72cc;
        case 0x3c72d0u: goto label_3c72d0;
        case 0x3c72d4u: goto label_3c72d4;
        case 0x3c72d8u: goto label_3c72d8;
        case 0x3c72dcu: goto label_3c72dc;
        case 0x3c72e0u: goto label_3c72e0;
        case 0x3c72e4u: goto label_3c72e4;
        case 0x3c72e8u: goto label_3c72e8;
        case 0x3c72ecu: goto label_3c72ec;
        case 0x3c72f0u: goto label_3c72f0;
        case 0x3c72f4u: goto label_3c72f4;
        case 0x3c72f8u: goto label_3c72f8;
        case 0x3c72fcu: goto label_3c72fc;
        case 0x3c7300u: goto label_3c7300;
        case 0x3c7304u: goto label_3c7304;
        case 0x3c7308u: goto label_3c7308;
        case 0x3c730cu: goto label_3c730c;
        case 0x3c7310u: goto label_3c7310;
        case 0x3c7314u: goto label_3c7314;
        case 0x3c7318u: goto label_3c7318;
        case 0x3c731cu: goto label_3c731c;
        case 0x3c7320u: goto label_3c7320;
        case 0x3c7324u: goto label_3c7324;
        case 0x3c7328u: goto label_3c7328;
        case 0x3c732cu: goto label_3c732c;
        case 0x3c7330u: goto label_3c7330;
        case 0x3c7334u: goto label_3c7334;
        case 0x3c7338u: goto label_3c7338;
        case 0x3c733cu: goto label_3c733c;
        case 0x3c7340u: goto label_3c7340;
        case 0x3c7344u: goto label_3c7344;
        case 0x3c7348u: goto label_3c7348;
        case 0x3c734cu: goto label_3c734c;
        case 0x3c7350u: goto label_3c7350;
        case 0x3c7354u: goto label_3c7354;
        case 0x3c7358u: goto label_3c7358;
        case 0x3c735cu: goto label_3c735c;
        case 0x3c7360u: goto label_3c7360;
        case 0x3c7364u: goto label_3c7364;
        case 0x3c7368u: goto label_3c7368;
        case 0x3c736cu: goto label_3c736c;
        case 0x3c7370u: goto label_3c7370;
        case 0x3c7374u: goto label_3c7374;
        case 0x3c7378u: goto label_3c7378;
        case 0x3c737cu: goto label_3c737c;
        case 0x3c7380u: goto label_3c7380;
        case 0x3c7384u: goto label_3c7384;
        case 0x3c7388u: goto label_3c7388;
        case 0x3c738cu: goto label_3c738c;
        case 0x3c7390u: goto label_3c7390;
        case 0x3c7394u: goto label_3c7394;
        case 0x3c7398u: goto label_3c7398;
        case 0x3c739cu: goto label_3c739c;
        case 0x3c73a0u: goto label_3c73a0;
        case 0x3c73a4u: goto label_3c73a4;
        case 0x3c73a8u: goto label_3c73a8;
        case 0x3c73acu: goto label_3c73ac;
        case 0x3c73b0u: goto label_3c73b0;
        case 0x3c73b4u: goto label_3c73b4;
        case 0x3c73b8u: goto label_3c73b8;
        case 0x3c73bcu: goto label_3c73bc;
        case 0x3c73c0u: goto label_3c73c0;
        case 0x3c73c4u: goto label_3c73c4;
        case 0x3c73c8u: goto label_3c73c8;
        case 0x3c73ccu: goto label_3c73cc;
        case 0x3c73d0u: goto label_3c73d0;
        case 0x3c73d4u: goto label_3c73d4;
        case 0x3c73d8u: goto label_3c73d8;
        case 0x3c73dcu: goto label_3c73dc;
        case 0x3c73e0u: goto label_3c73e0;
        case 0x3c73e4u: goto label_3c73e4;
        case 0x3c73e8u: goto label_3c73e8;
        case 0x3c73ecu: goto label_3c73ec;
        case 0x3c73f0u: goto label_3c73f0;
        case 0x3c73f4u: goto label_3c73f4;
        case 0x3c73f8u: goto label_3c73f8;
        case 0x3c73fcu: goto label_3c73fc;
        case 0x3c7400u: goto label_3c7400;
        case 0x3c7404u: goto label_3c7404;
        case 0x3c7408u: goto label_3c7408;
        case 0x3c740cu: goto label_3c740c;
        case 0x3c7410u: goto label_3c7410;
        case 0x3c7414u: goto label_3c7414;
        case 0x3c7418u: goto label_3c7418;
        case 0x3c741cu: goto label_3c741c;
        case 0x3c7420u: goto label_3c7420;
        case 0x3c7424u: goto label_3c7424;
        case 0x3c7428u: goto label_3c7428;
        case 0x3c742cu: goto label_3c742c;
        case 0x3c7430u: goto label_3c7430;
        case 0x3c7434u: goto label_3c7434;
        case 0x3c7438u: goto label_3c7438;
        case 0x3c743cu: goto label_3c743c;
        case 0x3c7440u: goto label_3c7440;
        case 0x3c7444u: goto label_3c7444;
        case 0x3c7448u: goto label_3c7448;
        case 0x3c744cu: goto label_3c744c;
        case 0x3c7450u: goto label_3c7450;
        case 0x3c7454u: goto label_3c7454;
        case 0x3c7458u: goto label_3c7458;
        case 0x3c745cu: goto label_3c745c;
        case 0x3c7460u: goto label_3c7460;
        case 0x3c7464u: goto label_3c7464;
        case 0x3c7468u: goto label_3c7468;
        case 0x3c746cu: goto label_3c746c;
        case 0x3c7470u: goto label_3c7470;
        case 0x3c7474u: goto label_3c7474;
        case 0x3c7478u: goto label_3c7478;
        case 0x3c747cu: goto label_3c747c;
        case 0x3c7480u: goto label_3c7480;
        case 0x3c7484u: goto label_3c7484;
        case 0x3c7488u: goto label_3c7488;
        case 0x3c748cu: goto label_3c748c;
        case 0x3c7490u: goto label_3c7490;
        case 0x3c7494u: goto label_3c7494;
        case 0x3c7498u: goto label_3c7498;
        case 0x3c749cu: goto label_3c749c;
        case 0x3c74a0u: goto label_3c74a0;
        case 0x3c74a4u: goto label_3c74a4;
        case 0x3c74a8u: goto label_3c74a8;
        case 0x3c74acu: goto label_3c74ac;
        case 0x3c74b0u: goto label_3c74b0;
        case 0x3c74b4u: goto label_3c74b4;
        case 0x3c74b8u: goto label_3c74b8;
        case 0x3c74bcu: goto label_3c74bc;
        case 0x3c74c0u: goto label_3c74c0;
        case 0x3c74c4u: goto label_3c74c4;
        case 0x3c74c8u: goto label_3c74c8;
        case 0x3c74ccu: goto label_3c74cc;
        case 0x3c74d0u: goto label_3c74d0;
        case 0x3c74d4u: goto label_3c74d4;
        case 0x3c74d8u: goto label_3c74d8;
        case 0x3c74dcu: goto label_3c74dc;
        case 0x3c74e0u: goto label_3c74e0;
        case 0x3c74e4u: goto label_3c74e4;
        case 0x3c74e8u: goto label_3c74e8;
        case 0x3c74ecu: goto label_3c74ec;
        case 0x3c74f0u: goto label_3c74f0;
        case 0x3c74f4u: goto label_3c74f4;
        case 0x3c74f8u: goto label_3c74f8;
        case 0x3c74fcu: goto label_3c74fc;
        case 0x3c7500u: goto label_3c7500;
        case 0x3c7504u: goto label_3c7504;
        case 0x3c7508u: goto label_3c7508;
        case 0x3c750cu: goto label_3c750c;
        case 0x3c7510u: goto label_3c7510;
        case 0x3c7514u: goto label_3c7514;
        case 0x3c7518u: goto label_3c7518;
        case 0x3c751cu: goto label_3c751c;
        case 0x3c7520u: goto label_3c7520;
        case 0x3c7524u: goto label_3c7524;
        case 0x3c7528u: goto label_3c7528;
        case 0x3c752cu: goto label_3c752c;
        case 0x3c7530u: goto label_3c7530;
        case 0x3c7534u: goto label_3c7534;
        case 0x3c7538u: goto label_3c7538;
        case 0x3c753cu: goto label_3c753c;
        case 0x3c7540u: goto label_3c7540;
        case 0x3c7544u: goto label_3c7544;
        case 0x3c7548u: goto label_3c7548;
        case 0x3c754cu: goto label_3c754c;
        case 0x3c7550u: goto label_3c7550;
        case 0x3c7554u: goto label_3c7554;
        case 0x3c7558u: goto label_3c7558;
        case 0x3c755cu: goto label_3c755c;
        case 0x3c7560u: goto label_3c7560;
        case 0x3c7564u: goto label_3c7564;
        case 0x3c7568u: goto label_3c7568;
        case 0x3c756cu: goto label_3c756c;
        case 0x3c7570u: goto label_3c7570;
        case 0x3c7574u: goto label_3c7574;
        case 0x3c7578u: goto label_3c7578;
        case 0x3c757cu: goto label_3c757c;
        case 0x3c7580u: goto label_3c7580;
        case 0x3c7584u: goto label_3c7584;
        case 0x3c7588u: goto label_3c7588;
        case 0x3c758cu: goto label_3c758c;
        case 0x3c7590u: goto label_3c7590;
        case 0x3c7594u: goto label_3c7594;
        case 0x3c7598u: goto label_3c7598;
        case 0x3c759cu: goto label_3c759c;
        case 0x3c75a0u: goto label_3c75a0;
        case 0x3c75a4u: goto label_3c75a4;
        case 0x3c75a8u: goto label_3c75a8;
        case 0x3c75acu: goto label_3c75ac;
        case 0x3c75b0u: goto label_3c75b0;
        case 0x3c75b4u: goto label_3c75b4;
        case 0x3c75b8u: goto label_3c75b8;
        case 0x3c75bcu: goto label_3c75bc;
        case 0x3c75c0u: goto label_3c75c0;
        case 0x3c75c4u: goto label_3c75c4;
        case 0x3c75c8u: goto label_3c75c8;
        case 0x3c75ccu: goto label_3c75cc;
        case 0x3c75d0u: goto label_3c75d0;
        case 0x3c75d4u: goto label_3c75d4;
        case 0x3c75d8u: goto label_3c75d8;
        case 0x3c75dcu: goto label_3c75dc;
        case 0x3c75e0u: goto label_3c75e0;
        case 0x3c75e4u: goto label_3c75e4;
        case 0x3c75e8u: goto label_3c75e8;
        case 0x3c75ecu: goto label_3c75ec;
        case 0x3c75f0u: goto label_3c75f0;
        case 0x3c75f4u: goto label_3c75f4;
        case 0x3c75f8u: goto label_3c75f8;
        case 0x3c75fcu: goto label_3c75fc;
        case 0x3c7600u: goto label_3c7600;
        case 0x3c7604u: goto label_3c7604;
        case 0x3c7608u: goto label_3c7608;
        case 0x3c760cu: goto label_3c760c;
        case 0x3c7610u: goto label_3c7610;
        case 0x3c7614u: goto label_3c7614;
        case 0x3c7618u: goto label_3c7618;
        case 0x3c761cu: goto label_3c761c;
        case 0x3c7620u: goto label_3c7620;
        case 0x3c7624u: goto label_3c7624;
        case 0x3c7628u: goto label_3c7628;
        case 0x3c762cu: goto label_3c762c;
        case 0x3c7630u: goto label_3c7630;
        case 0x3c7634u: goto label_3c7634;
        case 0x3c7638u: goto label_3c7638;
        case 0x3c763cu: goto label_3c763c;
        case 0x3c7640u: goto label_3c7640;
        case 0x3c7644u: goto label_3c7644;
        case 0x3c7648u: goto label_3c7648;
        case 0x3c764cu: goto label_3c764c;
        case 0x3c7650u: goto label_3c7650;
        case 0x3c7654u: goto label_3c7654;
        case 0x3c7658u: goto label_3c7658;
        case 0x3c765cu: goto label_3c765c;
        case 0x3c7660u: goto label_3c7660;
        case 0x3c7664u: goto label_3c7664;
        case 0x3c7668u: goto label_3c7668;
        case 0x3c766cu: goto label_3c766c;
        case 0x3c7670u: goto label_3c7670;
        case 0x3c7674u: goto label_3c7674;
        case 0x3c7678u: goto label_3c7678;
        case 0x3c767cu: goto label_3c767c;
        case 0x3c7680u: goto label_3c7680;
        case 0x3c7684u: goto label_3c7684;
        case 0x3c7688u: goto label_3c7688;
        case 0x3c768cu: goto label_3c768c;
        case 0x3c7690u: goto label_3c7690;
        case 0x3c7694u: goto label_3c7694;
        case 0x3c7698u: goto label_3c7698;
        case 0x3c769cu: goto label_3c769c;
        case 0x3c76a0u: goto label_3c76a0;
        case 0x3c76a4u: goto label_3c76a4;
        case 0x3c76a8u: goto label_3c76a8;
        case 0x3c76acu: goto label_3c76ac;
        case 0x3c76b0u: goto label_3c76b0;
        case 0x3c76b4u: goto label_3c76b4;
        case 0x3c76b8u: goto label_3c76b8;
        case 0x3c76bcu: goto label_3c76bc;
        case 0x3c76c0u: goto label_3c76c0;
        case 0x3c76c4u: goto label_3c76c4;
        case 0x3c76c8u: goto label_3c76c8;
        case 0x3c76ccu: goto label_3c76cc;
        case 0x3c76d0u: goto label_3c76d0;
        case 0x3c76d4u: goto label_3c76d4;
        case 0x3c76d8u: goto label_3c76d8;
        case 0x3c76dcu: goto label_3c76dc;
        case 0x3c76e0u: goto label_3c76e0;
        case 0x3c76e4u: goto label_3c76e4;
        case 0x3c76e8u: goto label_3c76e8;
        case 0x3c76ecu: goto label_3c76ec;
        case 0x3c76f0u: goto label_3c76f0;
        case 0x3c76f4u: goto label_3c76f4;
        case 0x3c76f8u: goto label_3c76f8;
        case 0x3c76fcu: goto label_3c76fc;
        case 0x3c7700u: goto label_3c7700;
        case 0x3c7704u: goto label_3c7704;
        case 0x3c7708u: goto label_3c7708;
        case 0x3c770cu: goto label_3c770c;
        case 0x3c7710u: goto label_3c7710;
        case 0x3c7714u: goto label_3c7714;
        case 0x3c7718u: goto label_3c7718;
        case 0x3c771cu: goto label_3c771c;
        case 0x3c7720u: goto label_3c7720;
        case 0x3c7724u: goto label_3c7724;
        case 0x3c7728u: goto label_3c7728;
        case 0x3c772cu: goto label_3c772c;
        case 0x3c7730u: goto label_3c7730;
        case 0x3c7734u: goto label_3c7734;
        case 0x3c7738u: goto label_3c7738;
        case 0x3c773cu: goto label_3c773c;
        case 0x3c7740u: goto label_3c7740;
        case 0x3c7744u: goto label_3c7744;
        case 0x3c7748u: goto label_3c7748;
        case 0x3c774cu: goto label_3c774c;
        case 0x3c7750u: goto label_3c7750;
        case 0x3c7754u: goto label_3c7754;
        case 0x3c7758u: goto label_3c7758;
        case 0x3c775cu: goto label_3c775c;
        case 0x3c7760u: goto label_3c7760;
        case 0x3c7764u: goto label_3c7764;
        case 0x3c7768u: goto label_3c7768;
        case 0x3c776cu: goto label_3c776c;
        case 0x3c7770u: goto label_3c7770;
        case 0x3c7774u: goto label_3c7774;
        case 0x3c7778u: goto label_3c7778;
        case 0x3c777cu: goto label_3c777c;
        case 0x3c7780u: goto label_3c7780;
        case 0x3c7784u: goto label_3c7784;
        case 0x3c7788u: goto label_3c7788;
        case 0x3c778cu: goto label_3c778c;
        case 0x3c7790u: goto label_3c7790;
        case 0x3c7794u: goto label_3c7794;
        case 0x3c7798u: goto label_3c7798;
        case 0x3c779cu: goto label_3c779c;
        case 0x3c77a0u: goto label_3c77a0;
        case 0x3c77a4u: goto label_3c77a4;
        case 0x3c77a8u: goto label_3c77a8;
        case 0x3c77acu: goto label_3c77ac;
        case 0x3c77b0u: goto label_3c77b0;
        case 0x3c77b4u: goto label_3c77b4;
        case 0x3c77b8u: goto label_3c77b8;
        case 0x3c77bcu: goto label_3c77bc;
        case 0x3c77c0u: goto label_3c77c0;
        case 0x3c77c4u: goto label_3c77c4;
        case 0x3c77c8u: goto label_3c77c8;
        case 0x3c77ccu: goto label_3c77cc;
        case 0x3c77d0u: goto label_3c77d0;
        case 0x3c77d4u: goto label_3c77d4;
        case 0x3c77d8u: goto label_3c77d8;
        case 0x3c77dcu: goto label_3c77dc;
        case 0x3c77e0u: goto label_3c77e0;
        case 0x3c77e4u: goto label_3c77e4;
        case 0x3c77e8u: goto label_3c77e8;
        case 0x3c77ecu: goto label_3c77ec;
        case 0x3c77f0u: goto label_3c77f0;
        case 0x3c77f4u: goto label_3c77f4;
        case 0x3c77f8u: goto label_3c77f8;
        case 0x3c77fcu: goto label_3c77fc;
        case 0x3c7800u: goto label_3c7800;
        case 0x3c7804u: goto label_3c7804;
        case 0x3c7808u: goto label_3c7808;
        case 0x3c780cu: goto label_3c780c;
        case 0x3c7810u: goto label_3c7810;
        case 0x3c7814u: goto label_3c7814;
        case 0x3c7818u: goto label_3c7818;
        case 0x3c781cu: goto label_3c781c;
        case 0x3c7820u: goto label_3c7820;
        case 0x3c7824u: goto label_3c7824;
        case 0x3c7828u: goto label_3c7828;
        case 0x3c782cu: goto label_3c782c;
        case 0x3c7830u: goto label_3c7830;
        case 0x3c7834u: goto label_3c7834;
        case 0x3c7838u: goto label_3c7838;
        case 0x3c783cu: goto label_3c783c;
        case 0x3c7840u: goto label_3c7840;
        case 0x3c7844u: goto label_3c7844;
        case 0x3c7848u: goto label_3c7848;
        case 0x3c784cu: goto label_3c784c;
        case 0x3c7850u: goto label_3c7850;
        case 0x3c7854u: goto label_3c7854;
        case 0x3c7858u: goto label_3c7858;
        case 0x3c785cu: goto label_3c785c;
        case 0x3c7860u: goto label_3c7860;
        case 0x3c7864u: goto label_3c7864;
        case 0x3c7868u: goto label_3c7868;
        case 0x3c786cu: goto label_3c786c;
        case 0x3c7870u: goto label_3c7870;
        case 0x3c7874u: goto label_3c7874;
        case 0x3c7878u: goto label_3c7878;
        case 0x3c787cu: goto label_3c787c;
        case 0x3c7880u: goto label_3c7880;
        case 0x3c7884u: goto label_3c7884;
        case 0x3c7888u: goto label_3c7888;
        case 0x3c788cu: goto label_3c788c;
        case 0x3c7890u: goto label_3c7890;
        case 0x3c7894u: goto label_3c7894;
        case 0x3c7898u: goto label_3c7898;
        case 0x3c789cu: goto label_3c789c;
        case 0x3c78a0u: goto label_3c78a0;
        case 0x3c78a4u: goto label_3c78a4;
        case 0x3c78a8u: goto label_3c78a8;
        case 0x3c78acu: goto label_3c78ac;
        case 0x3c78b0u: goto label_3c78b0;
        case 0x3c78b4u: goto label_3c78b4;
        case 0x3c78b8u: goto label_3c78b8;
        case 0x3c78bcu: goto label_3c78bc;
        case 0x3c78c0u: goto label_3c78c0;
        case 0x3c78c4u: goto label_3c78c4;
        case 0x3c78c8u: goto label_3c78c8;
        case 0x3c78ccu: goto label_3c78cc;
        case 0x3c78d0u: goto label_3c78d0;
        case 0x3c78d4u: goto label_3c78d4;
        case 0x3c78d8u: goto label_3c78d8;
        case 0x3c78dcu: goto label_3c78dc;
        case 0x3c78e0u: goto label_3c78e0;
        case 0x3c78e4u: goto label_3c78e4;
        case 0x3c78e8u: goto label_3c78e8;
        case 0x3c78ecu: goto label_3c78ec;
        case 0x3c78f0u: goto label_3c78f0;
        case 0x3c78f4u: goto label_3c78f4;
        case 0x3c78f8u: goto label_3c78f8;
        case 0x3c78fcu: goto label_3c78fc;
        case 0x3c7900u: goto label_3c7900;
        case 0x3c7904u: goto label_3c7904;
        case 0x3c7908u: goto label_3c7908;
        case 0x3c790cu: goto label_3c790c;
        case 0x3c7910u: goto label_3c7910;
        case 0x3c7914u: goto label_3c7914;
        case 0x3c7918u: goto label_3c7918;
        case 0x3c791cu: goto label_3c791c;
        case 0x3c7920u: goto label_3c7920;
        case 0x3c7924u: goto label_3c7924;
        case 0x3c7928u: goto label_3c7928;
        case 0x3c792cu: goto label_3c792c;
        case 0x3c7930u: goto label_3c7930;
        case 0x3c7934u: goto label_3c7934;
        case 0x3c7938u: goto label_3c7938;
        case 0x3c793cu: goto label_3c793c;
        case 0x3c7940u: goto label_3c7940;
        case 0x3c7944u: goto label_3c7944;
        case 0x3c7948u: goto label_3c7948;
        case 0x3c794cu: goto label_3c794c;
        case 0x3c7950u: goto label_3c7950;
        case 0x3c7954u: goto label_3c7954;
        case 0x3c7958u: goto label_3c7958;
        case 0x3c795cu: goto label_3c795c;
        case 0x3c7960u: goto label_3c7960;
        case 0x3c7964u: goto label_3c7964;
        case 0x3c7968u: goto label_3c7968;
        case 0x3c796cu: goto label_3c796c;
        case 0x3c7970u: goto label_3c7970;
        case 0x3c7974u: goto label_3c7974;
        case 0x3c7978u: goto label_3c7978;
        case 0x3c797cu: goto label_3c797c;
        case 0x3c7980u: goto label_3c7980;
        case 0x3c7984u: goto label_3c7984;
        case 0x3c7988u: goto label_3c7988;
        case 0x3c798cu: goto label_3c798c;
        case 0x3c7990u: goto label_3c7990;
        case 0x3c7994u: goto label_3c7994;
        case 0x3c7998u: goto label_3c7998;
        case 0x3c799cu: goto label_3c799c;
        case 0x3c79a0u: goto label_3c79a0;
        case 0x3c79a4u: goto label_3c79a4;
        case 0x3c79a8u: goto label_3c79a8;
        case 0x3c79acu: goto label_3c79ac;
        case 0x3c79b0u: goto label_3c79b0;
        case 0x3c79b4u: goto label_3c79b4;
        case 0x3c79b8u: goto label_3c79b8;
        case 0x3c79bcu: goto label_3c79bc;
        case 0x3c79c0u: goto label_3c79c0;
        case 0x3c79c4u: goto label_3c79c4;
        case 0x3c79c8u: goto label_3c79c8;
        case 0x3c79ccu: goto label_3c79cc;
        case 0x3c79d0u: goto label_3c79d0;
        case 0x3c79d4u: goto label_3c79d4;
        case 0x3c79d8u: goto label_3c79d8;
        case 0x3c79dcu: goto label_3c79dc;
        case 0x3c79e0u: goto label_3c79e0;
        case 0x3c79e4u: goto label_3c79e4;
        case 0x3c79e8u: goto label_3c79e8;
        case 0x3c79ecu: goto label_3c79ec;
        case 0x3c79f0u: goto label_3c79f0;
        case 0x3c79f4u: goto label_3c79f4;
        case 0x3c79f8u: goto label_3c79f8;
        case 0x3c79fcu: goto label_3c79fc;
        case 0x3c7a00u: goto label_3c7a00;
        case 0x3c7a04u: goto label_3c7a04;
        case 0x3c7a08u: goto label_3c7a08;
        case 0x3c7a0cu: goto label_3c7a0c;
        case 0x3c7a10u: goto label_3c7a10;
        case 0x3c7a14u: goto label_3c7a14;
        case 0x3c7a18u: goto label_3c7a18;
        case 0x3c7a1cu: goto label_3c7a1c;
        case 0x3c7a20u: goto label_3c7a20;
        case 0x3c7a24u: goto label_3c7a24;
        case 0x3c7a28u: goto label_3c7a28;
        case 0x3c7a2cu: goto label_3c7a2c;
        case 0x3c7a30u: goto label_3c7a30;
        case 0x3c7a34u: goto label_3c7a34;
        case 0x3c7a38u: goto label_3c7a38;
        case 0x3c7a3cu: goto label_3c7a3c;
        case 0x3c7a40u: goto label_3c7a40;
        case 0x3c7a44u: goto label_3c7a44;
        case 0x3c7a48u: goto label_3c7a48;
        case 0x3c7a4cu: goto label_3c7a4c;
        case 0x3c7a50u: goto label_3c7a50;
        case 0x3c7a54u: goto label_3c7a54;
        case 0x3c7a58u: goto label_3c7a58;
        case 0x3c7a5cu: goto label_3c7a5c;
        case 0x3c7a60u: goto label_3c7a60;
        case 0x3c7a64u: goto label_3c7a64;
        case 0x3c7a68u: goto label_3c7a68;
        case 0x3c7a6cu: goto label_3c7a6c;
        case 0x3c7a70u: goto label_3c7a70;
        case 0x3c7a74u: goto label_3c7a74;
        case 0x3c7a78u: goto label_3c7a78;
        case 0x3c7a7cu: goto label_3c7a7c;
        case 0x3c7a80u: goto label_3c7a80;
        case 0x3c7a84u: goto label_3c7a84;
        case 0x3c7a88u: goto label_3c7a88;
        case 0x3c7a8cu: goto label_3c7a8c;
        case 0x3c7a90u: goto label_3c7a90;
        case 0x3c7a94u: goto label_3c7a94;
        case 0x3c7a98u: goto label_3c7a98;
        case 0x3c7a9cu: goto label_3c7a9c;
        case 0x3c7aa0u: goto label_3c7aa0;
        case 0x3c7aa4u: goto label_3c7aa4;
        case 0x3c7aa8u: goto label_3c7aa8;
        case 0x3c7aacu: goto label_3c7aac;
        case 0x3c7ab0u: goto label_3c7ab0;
        case 0x3c7ab4u: goto label_3c7ab4;
        case 0x3c7ab8u: goto label_3c7ab8;
        case 0x3c7abcu: goto label_3c7abc;
        case 0x3c7ac0u: goto label_3c7ac0;
        case 0x3c7ac4u: goto label_3c7ac4;
        case 0x3c7ac8u: goto label_3c7ac8;
        case 0x3c7accu: goto label_3c7acc;
        case 0x3c7ad0u: goto label_3c7ad0;
        case 0x3c7ad4u: goto label_3c7ad4;
        case 0x3c7ad8u: goto label_3c7ad8;
        case 0x3c7adcu: goto label_3c7adc;
        case 0x3c7ae0u: goto label_3c7ae0;
        case 0x3c7ae4u: goto label_3c7ae4;
        case 0x3c7ae8u: goto label_3c7ae8;
        case 0x3c7aecu: goto label_3c7aec;
        case 0x3c7af0u: goto label_3c7af0;
        case 0x3c7af4u: goto label_3c7af4;
        case 0x3c7af8u: goto label_3c7af8;
        case 0x3c7afcu: goto label_3c7afc;
        case 0x3c7b00u: goto label_3c7b00;
        case 0x3c7b04u: goto label_3c7b04;
        case 0x3c7b08u: goto label_3c7b08;
        case 0x3c7b0cu: goto label_3c7b0c;
        case 0x3c7b10u: goto label_3c7b10;
        case 0x3c7b14u: goto label_3c7b14;
        case 0x3c7b18u: goto label_3c7b18;
        case 0x3c7b1cu: goto label_3c7b1c;
        case 0x3c7b20u: goto label_3c7b20;
        case 0x3c7b24u: goto label_3c7b24;
        case 0x3c7b28u: goto label_3c7b28;
        case 0x3c7b2cu: goto label_3c7b2c;
        case 0x3c7b30u: goto label_3c7b30;
        case 0x3c7b34u: goto label_3c7b34;
        case 0x3c7b38u: goto label_3c7b38;
        case 0x3c7b3cu: goto label_3c7b3c;
        case 0x3c7b40u: goto label_3c7b40;
        case 0x3c7b44u: goto label_3c7b44;
        case 0x3c7b48u: goto label_3c7b48;
        case 0x3c7b4cu: goto label_3c7b4c;
        case 0x3c7b50u: goto label_3c7b50;
        case 0x3c7b54u: goto label_3c7b54;
        case 0x3c7b58u: goto label_3c7b58;
        case 0x3c7b5cu: goto label_3c7b5c;
        case 0x3c7b60u: goto label_3c7b60;
        case 0x3c7b64u: goto label_3c7b64;
        case 0x3c7b68u: goto label_3c7b68;
        case 0x3c7b6cu: goto label_3c7b6c;
        case 0x3c7b70u: goto label_3c7b70;
        case 0x3c7b74u: goto label_3c7b74;
        case 0x3c7b78u: goto label_3c7b78;
        case 0x3c7b7cu: goto label_3c7b7c;
        case 0x3c7b80u: goto label_3c7b80;
        case 0x3c7b84u: goto label_3c7b84;
        case 0x3c7b88u: goto label_3c7b88;
        case 0x3c7b8cu: goto label_3c7b8c;
        case 0x3c7b90u: goto label_3c7b90;
        case 0x3c7b94u: goto label_3c7b94;
        case 0x3c7b98u: goto label_3c7b98;
        case 0x3c7b9cu: goto label_3c7b9c;
        case 0x3c7ba0u: goto label_3c7ba0;
        case 0x3c7ba4u: goto label_3c7ba4;
        case 0x3c7ba8u: goto label_3c7ba8;
        case 0x3c7bacu: goto label_3c7bac;
        case 0x3c7bb0u: goto label_3c7bb0;
        case 0x3c7bb4u: goto label_3c7bb4;
        case 0x3c7bb8u: goto label_3c7bb8;
        case 0x3c7bbcu: goto label_3c7bbc;
        case 0x3c7bc0u: goto label_3c7bc0;
        case 0x3c7bc4u: goto label_3c7bc4;
        case 0x3c7bc8u: goto label_3c7bc8;
        case 0x3c7bccu: goto label_3c7bcc;
        case 0x3c7bd0u: goto label_3c7bd0;
        case 0x3c7bd4u: goto label_3c7bd4;
        case 0x3c7bd8u: goto label_3c7bd8;
        case 0x3c7bdcu: goto label_3c7bdc;
        case 0x3c7be0u: goto label_3c7be0;
        case 0x3c7be4u: goto label_3c7be4;
        case 0x3c7be8u: goto label_3c7be8;
        case 0x3c7becu: goto label_3c7bec;
        case 0x3c7bf0u: goto label_3c7bf0;
        case 0x3c7bf4u: goto label_3c7bf4;
        case 0x3c7bf8u: goto label_3c7bf8;
        case 0x3c7bfcu: goto label_3c7bfc;
        case 0x3c7c00u: goto label_3c7c00;
        case 0x3c7c04u: goto label_3c7c04;
        case 0x3c7c08u: goto label_3c7c08;
        case 0x3c7c0cu: goto label_3c7c0c;
        case 0x3c7c10u: goto label_3c7c10;
        case 0x3c7c14u: goto label_3c7c14;
        case 0x3c7c18u: goto label_3c7c18;
        case 0x3c7c1cu: goto label_3c7c1c;
        case 0x3c7c20u: goto label_3c7c20;
        case 0x3c7c24u: goto label_3c7c24;
        case 0x3c7c28u: goto label_3c7c28;
        case 0x3c7c2cu: goto label_3c7c2c;
        case 0x3c7c30u: goto label_3c7c30;
        case 0x3c7c34u: goto label_3c7c34;
        case 0x3c7c38u: goto label_3c7c38;
        case 0x3c7c3cu: goto label_3c7c3c;
        case 0x3c7c40u: goto label_3c7c40;
        case 0x3c7c44u: goto label_3c7c44;
        case 0x3c7c48u: goto label_3c7c48;
        case 0x3c7c4cu: goto label_3c7c4c;
        case 0x3c7c50u: goto label_3c7c50;
        case 0x3c7c54u: goto label_3c7c54;
        case 0x3c7c58u: goto label_3c7c58;
        case 0x3c7c5cu: goto label_3c7c5c;
        case 0x3c7c60u: goto label_3c7c60;
        case 0x3c7c64u: goto label_3c7c64;
        case 0x3c7c68u: goto label_3c7c68;
        case 0x3c7c6cu: goto label_3c7c6c;
        case 0x3c7c70u: goto label_3c7c70;
        case 0x3c7c74u: goto label_3c7c74;
        case 0x3c7c78u: goto label_3c7c78;
        case 0x3c7c7cu: goto label_3c7c7c;
        case 0x3c7c80u: goto label_3c7c80;
        case 0x3c7c84u: goto label_3c7c84;
        case 0x3c7c88u: goto label_3c7c88;
        case 0x3c7c8cu: goto label_3c7c8c;
        case 0x3c7c90u: goto label_3c7c90;
        case 0x3c7c94u: goto label_3c7c94;
        case 0x3c7c98u: goto label_3c7c98;
        case 0x3c7c9cu: goto label_3c7c9c;
        case 0x3c7ca0u: goto label_3c7ca0;
        case 0x3c7ca4u: goto label_3c7ca4;
        case 0x3c7ca8u: goto label_3c7ca8;
        case 0x3c7cacu: goto label_3c7cac;
        case 0x3c7cb0u: goto label_3c7cb0;
        case 0x3c7cb4u: goto label_3c7cb4;
        case 0x3c7cb8u: goto label_3c7cb8;
        case 0x3c7cbcu: goto label_3c7cbc;
        case 0x3c7cc0u: goto label_3c7cc0;
        case 0x3c7cc4u: goto label_3c7cc4;
        case 0x3c7cc8u: goto label_3c7cc8;
        case 0x3c7cccu: goto label_3c7ccc;
        case 0x3c7cd0u: goto label_3c7cd0;
        case 0x3c7cd4u: goto label_3c7cd4;
        case 0x3c7cd8u: goto label_3c7cd8;
        case 0x3c7cdcu: goto label_3c7cdc;
        case 0x3c7ce0u: goto label_3c7ce0;
        case 0x3c7ce4u: goto label_3c7ce4;
        case 0x3c7ce8u: goto label_3c7ce8;
        case 0x3c7cecu: goto label_3c7cec;
        case 0x3c7cf0u: goto label_3c7cf0;
        case 0x3c7cf4u: goto label_3c7cf4;
        case 0x3c7cf8u: goto label_3c7cf8;
        case 0x3c7cfcu: goto label_3c7cfc;
        case 0x3c7d00u: goto label_3c7d00;
        case 0x3c7d04u: goto label_3c7d04;
        case 0x3c7d08u: goto label_3c7d08;
        case 0x3c7d0cu: goto label_3c7d0c;
        case 0x3c7d10u: goto label_3c7d10;
        case 0x3c7d14u: goto label_3c7d14;
        case 0x3c7d18u: goto label_3c7d18;
        case 0x3c7d1cu: goto label_3c7d1c;
        case 0x3c7d20u: goto label_3c7d20;
        case 0x3c7d24u: goto label_3c7d24;
        case 0x3c7d28u: goto label_3c7d28;
        case 0x3c7d2cu: goto label_3c7d2c;
        case 0x3c7d30u: goto label_3c7d30;
        case 0x3c7d34u: goto label_3c7d34;
        case 0x3c7d38u: goto label_3c7d38;
        case 0x3c7d3cu: goto label_3c7d3c;
        case 0x3c7d40u: goto label_3c7d40;
        case 0x3c7d44u: goto label_3c7d44;
        case 0x3c7d48u: goto label_3c7d48;
        case 0x3c7d4cu: goto label_3c7d4c;
        case 0x3c7d50u: goto label_3c7d50;
        case 0x3c7d54u: goto label_3c7d54;
        case 0x3c7d58u: goto label_3c7d58;
        case 0x3c7d5cu: goto label_3c7d5c;
        case 0x3c7d60u: goto label_3c7d60;
        case 0x3c7d64u: goto label_3c7d64;
        case 0x3c7d68u: goto label_3c7d68;
        case 0x3c7d6cu: goto label_3c7d6c;
        case 0x3c7d70u: goto label_3c7d70;
        case 0x3c7d74u: goto label_3c7d74;
        case 0x3c7d78u: goto label_3c7d78;
        case 0x3c7d7cu: goto label_3c7d7c;
        case 0x3c7d80u: goto label_3c7d80;
        case 0x3c7d84u: goto label_3c7d84;
        case 0x3c7d88u: goto label_3c7d88;
        case 0x3c7d8cu: goto label_3c7d8c;
        default: break;
    }

    ctx->pc = 0x3c7050u;

label_3c7050:
    // 0x3c7050: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3c7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_3c7054:
    // 0x3c7054: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c7054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c7058:
    // 0x3c7058: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3c7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3c705c:
    // 0x3c705c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c705cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c7060:
    // 0x3c7060: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3c7060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3c7064:
    // 0x3c7064: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3c7064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c7068:
    // 0x3c7068: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c706c:
    // 0x3c706c: 0x3c1e0064  lui         $fp, 0x64
    ctx->pc = 0x3c706cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)100 << 16));
label_3c7070:
    // 0x3c7070: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c7070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c7074:
    // 0x3c7074: 0x27de2104  addiu       $fp, $fp, 0x2104
    ctx->pc = 0x3c7074u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8452));
label_3c7078:
    // 0x3c7078: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c7078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c707c:
    // 0x3c707c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c7080:
    // 0x3c7080: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c7080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7084:
    // 0x3c7084: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c7084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c7088:
    // 0x3c7088: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c708c:
    // 0x3c708c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c7090:
    // 0x3c7090: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x3c7090u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_3c7094:
    // 0x3c7094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c7098:
    // 0x3c7098: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c7098u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c709c:
    // 0x3c709c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c709cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c70a0:
    // 0x3c70a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c70a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c70a4:
    // 0x3c70a4: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3c70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3c70a8:
    // 0x3c70a8: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x3c70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c70ac:
    // 0x3c70ac: 0x8490007e  lh          $s0, 0x7E($a0)
    ctx->pc = 0x3c70acu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 126)));
label_3c70b0:
    // 0x3c70b0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3c70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_3c70b4:
    // 0x3c70b4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3c70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3c70b8:
    // 0x3c70b8: 0x90770116  lbu         $s7, 0x116($v1)
    ctx->pc = 0x3c70b8u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3c70bc:
    // 0x3c70bc: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x3c70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
label_3c70c0:
    // 0x3c70c0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3c70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3c70c4:
    // 0x3c70c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c70c8:
    // 0x3c70c8: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x3c70c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c70cc:
    // 0x3c70cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c70d0:
    // 0x3c70d0: 0x244264c8  addiu       $v0, $v0, 0x64C8
    ctx->pc = 0x3c70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25800));
label_3c70d4:
    // 0x3c70d4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3c70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3c70d8:
    // 0x3c70d8: 0x8482007c  lh          $v0, 0x7C($a0)
    ctx->pc = 0x3c70d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 124)));
label_3c70dc:
    // 0x3c70dc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3c70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3c70e0:
    // 0x3c70e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c70e4:
    // 0x3c70e4: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c70e8:
    // 0x3c70e8: 0xc0506ac  jal         func_141AB0
label_3c70ec:
    if (ctx->pc == 0x3C70ECu) {
        ctx->pc = 0x3C70ECu;
            // 0x3c70ec: 0x26522118  addiu       $s2, $s2, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8472));
        ctx->pc = 0x3C70F0u;
        goto label_3c70f0;
    }
    ctx->pc = 0x3C70E8u;
    SET_GPR_U32(ctx, 31, 0x3C70F0u);
    ctx->pc = 0x3C70ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C70E8u;
            // 0x3c70ec: 0x26522118  addiu       $s2, $s2, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C70F0u; }
        if (ctx->pc != 0x3C70F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C70F0u; }
        if (ctx->pc != 0x3C70F0u) { return; }
    }
    ctx->pc = 0x3C70F0u;
label_3c70f0:
    // 0x3c70f0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3c70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3c70f4:
    // 0x3c70f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c70f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c70f8:
    // 0x3c70f8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c70f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c70fc:
    // 0x3c70fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c70fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c7100:
    // 0x3c7100: 0x320f809  jalr        $t9
label_3c7104:
    if (ctx->pc == 0x3C7104u) {
        ctx->pc = 0x3C7104u;
            // 0x3c7104: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C7108u;
        goto label_3c7108;
    }
    ctx->pc = 0x3C7100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7108u);
        ctx->pc = 0x3C7104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7100u;
            // 0x3c7104: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7108u; }
            if (ctx->pc != 0x3C7108u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7108u;
label_3c7108:
    // 0x3c7108: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x3c7108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3c710c:
    // 0x3c710c: 0x86a30084  lh          $v1, 0x84($s5)
    ctx->pc = 0x3c710cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
label_3c7110:
    // 0x3c7110: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3c7110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_3c7114:
    // 0x3c7114: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3c7114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3c7118:
    // 0x3c7118: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3c7118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c711c:
    // 0x3c711c: 0x24a59b80  addiu       $a1, $a1, -0x6480
    ctx->pc = 0x3c711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941568));
label_3c7120:
    // 0x3c7120: 0x86a40080  lh          $a0, 0x80($s5)
    ctx->pc = 0x3c7120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_3c7124:
    // 0x3c7124: 0x2035021  addu        $t2, $s0, $v1
    ctx->pc = 0x3c7124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3c7128:
    // 0x3c7128: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3c7128u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_3c712c:
    // 0x3c712c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c712cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7130:
    // 0x3c7130: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3c7130u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_3c7134:
    // 0x3c7134: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3c7134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c7138:
    // 0x3c7138: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x3c7138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c713c:
    // 0x3c713c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3c713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3c7140:
    // 0x3c7140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7144:
    // 0x3c7144: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c7144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3c7148:
    // 0x3c7148: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3c7148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3c714c:
    // 0x3c714c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3c714cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7150:
    // 0x3c7150: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c7150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c7154:
    // 0x3c7154: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3c7154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3c7158:
    // 0x3c7158: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3c7158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c715c:
    // 0x3c715c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c7160:
    // 0x3c7160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c7160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7164:
    // 0x3c7164: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3c7164u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7168:
    // 0x3c7168: 0x0  nop
    ctx->pc = 0x3c7168u;
    // NOP
label_3c716c:
    // 0x3c716c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3c716cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3c7170:
    // 0x3c7170: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c7170u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7174:
    // 0x3c7174: 0x0  nop
    ctx->pc = 0x3c7174u;
    // NOP
label_3c7178:
    // 0x3c7178: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c717c:
    // 0x3c717c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c717cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7180:
    // 0x3c7180: 0x0  nop
    ctx->pc = 0x3c7180u;
    // NOP
label_3c7184:
    // 0x3c7184: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c7184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c7188:
    // 0x3c7188: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3c7188u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c718c:
    // 0x3c718c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c718cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7190:
    // 0x3c7190: 0xc0bc284  jal         func_2F0A10
label_3c7194:
    if (ctx->pc == 0x3C7194u) {
        ctx->pc = 0x3C7194u;
            // 0x3c7194: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7198u;
        goto label_3c7198;
    }
    ctx->pc = 0x3C7190u;
    SET_GPR_U32(ctx, 31, 0x3C7198u);
    ctx->pc = 0x3C7194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7190u;
            // 0x3c7194: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7198u; }
        if (ctx->pc != 0x3C7198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7198u; }
        if (ctx->pc != 0x3C7198u) { return; }
    }
    ctx->pc = 0x3C7198u;
label_3c7198:
    // 0x3c7198: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3c7198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c719c:
    // 0x3c719c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c719cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c71a0:
    // 0x3c71a0: 0x86a60084  lh          $a2, 0x84($s5)
    ctx->pc = 0x3c71a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
label_3c71a4:
    // 0x3c71a4: 0x86a50080  lh          $a1, 0x80($s5)
    ctx->pc = 0x3c71a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_3c71a8:
    // 0x3c71a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c71a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c71ac:
    // 0x3c71ac: 0x86a40082  lh          $a0, 0x82($s5)
    ctx->pc = 0x3c71acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_3c71b0:
    // 0x3c71b0: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x3c71b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_3c71b4:
    // 0x3c71b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3c71b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c71b8:
    // 0x3c71b8: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3c71b8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_3c71bc:
    // 0x3c71bc: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3c71bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_3c71c0:
    // 0x3c71c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c71c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c71c4:
    // 0x3c71c4: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x3c71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3c71c8:
    // 0x3c71c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c71cc:
    // 0x3c71cc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3c71ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c71d0:
    // 0x3c71d0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3c71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3c71d4:
    // 0x3c71d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c71d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c71d8:
    // 0x3c71d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3c71d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c71dc:
    // 0x3c71dc: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3c71dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3c71e0:
    // 0x3c71e0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3c71e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3c71e4:
    // 0x3c71e4: 0x24a59b90  addiu       $a1, $a1, -0x6470
    ctx->pc = 0x3c71e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941584));
label_3c71e8:
    // 0x3c71e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3c71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c71ec:
    // 0x3c71ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c71f0:
    // 0x3c71f0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3c71f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c71f4:
    // 0x3c71f4: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x3c71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_3c71f8:
    // 0x3c71f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c71fc:
    // 0x3c71fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c71fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7200:
    // 0x3c7200: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7204:
    // 0x3c7204: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3c7204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3c7208:
    // 0x3c7208: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c7208u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c720c:
    // 0x3c720c: 0x0  nop
    ctx->pc = 0x3c720cu;
    // NOP
label_3c7210:
    // 0x3c7210: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c7214:
    // 0x3c7214: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c7214u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7218:
    // 0x3c7218: 0x0  nop
    ctx->pc = 0x3c7218u;
    // NOP
label_3c721c:
    // 0x3c721c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c721cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c7220:
    // 0x3c7220: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c7220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7224:
    // 0x3c7224: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3c7224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c7228:
    // 0x3c7228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c722c:
    // 0x3c722c: 0xc0bc284  jal         func_2F0A10
label_3c7230:
    if (ctx->pc == 0x3C7230u) {
        ctx->pc = 0x3C7230u;
            // 0x3c7230: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7234u;
        goto label_3c7234;
    }
    ctx->pc = 0x3C722Cu;
    SET_GPR_U32(ctx, 31, 0x3C7234u);
    ctx->pc = 0x3C7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C722Cu;
            // 0x3c7230: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7234u; }
        if (ctx->pc != 0x3C7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7234u; }
        if (ctx->pc != 0x3C7234u) { return; }
    }
    ctx->pc = 0x3C7234u;
label_3c7234:
    // 0x3c7234: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3c7234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3c7238:
    // 0x3c7238: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c7238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c723c:
    // 0x3c723c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c723cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c7240:
    // 0x3c7240: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c7240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c7244:
    // 0x3c7244: 0x320f809  jalr        $t9
label_3c7248:
    if (ctx->pc == 0x3C7248u) {
        ctx->pc = 0x3C724Cu;
        goto label_3c724c;
    }
    ctx->pc = 0x3C7244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C724Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C724Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C724Cu; }
            if (ctx->pc != 0x3C724Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C724Cu;
label_3c724c:
    // 0x3c724c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c7250:
    // 0x3c7250: 0xc45564dc  lwc1        $f21, 0x64DC($v0)
    ctx->pc = 0x3c7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c7254:
    // 0x3c7254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7258:
    // 0x3c7258: 0x0  nop
    ctx->pc = 0x3c7258u;
    // NOP
label_3c725c:
    // 0x3c725c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x3c725cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7260:
    // 0x3c7260: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_3c7264:
    if (ctx->pc == 0x3C7264u) {
        ctx->pc = 0x3C7268u;
        goto label_3c7268;
    }
    ctx->pc = 0x3C7260u;
    {
        const bool branch_taken_0x3c7260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7260) {
            ctx->pc = 0x3C7298u;
            goto label_3c7298;
        }
    }
    ctx->pc = 0x3C7268u;
label_3c7268:
    // 0x3c7268: 0xc04f26c  jal         func_13C9B0
label_3c726c:
    if (ctx->pc == 0x3C726Cu) {
        ctx->pc = 0x3C726Cu;
            // 0x3c726c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3C7270u;
        goto label_3c7270;
    }
    ctx->pc = 0x3C7268u;
    SET_GPR_U32(ctx, 31, 0x3C7270u);
    ctx->pc = 0x3C726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7268u;
            // 0x3c726c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7270u; }
        if (ctx->pc != 0x3C7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7270u; }
        if (ctx->pc != 0x3C7270u) { return; }
    }
    ctx->pc = 0x3C7270u;
label_3c7270:
    // 0x3c7270: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3c7274:
    // 0x3c7274: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3c7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3c7278:
    // 0x3c7278: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3c7278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3c727c:
    // 0x3c727c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c727cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7280:
    // 0x3c7280: 0x0  nop
    ctx->pc = 0x3c7280u;
    // NOP
label_3c7284:
    // 0x3c7284: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3c7284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3c7288:
    // 0x3c7288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c728c:
    // 0x3c728c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c728cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3c7290:
    // 0x3c7290: 0xc04cdf0  jal         func_1337C0
label_3c7294:
    if (ctx->pc == 0x3C7294u) {
        ctx->pc = 0x3C7294u;
            // 0x3c7294: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7298u;
        goto label_3c7298;
    }
    ctx->pc = 0x3C7290u;
    SET_GPR_U32(ctx, 31, 0x3C7298u);
    ctx->pc = 0x3C7294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7290u;
            // 0x3c7294: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7298u; }
        if (ctx->pc != 0x3C7298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7298u; }
        if (ctx->pc != 0x3C7298u) { return; }
    }
    ctx->pc = 0x3C7298u;
label_3c7298:
    // 0x3c7298: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c729c:
    // 0x3c729c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c72a0:
    // 0x3c72a0: 0xc0506ac  jal         func_141AB0
label_3c72a4:
    if (ctx->pc == 0x3C72A4u) {
        ctx->pc = 0x3C72A4u;
            // 0x3c72a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C72A8u;
        goto label_3c72a8;
    }
    ctx->pc = 0x3C72A0u;
    SET_GPR_U32(ctx, 31, 0x3C72A8u);
    ctx->pc = 0x3C72A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C72A0u;
            // 0x3c72a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C72A8u; }
        if (ctx->pc != 0x3C72A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C72A8u; }
        if (ctx->pc != 0x3C72A8u) { return; }
    }
    ctx->pc = 0x3C72A8u;
label_3c72a8:
    // 0x3c72a8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3c72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3c72ac:
    // 0x3c72ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c72acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c72b0:
    // 0x3c72b0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c72b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c72b4:
    // 0x3c72b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c72b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c72b8:
    // 0x3c72b8: 0x320f809  jalr        $t9
label_3c72bc:
    if (ctx->pc == 0x3C72BCu) {
        ctx->pc = 0x3C72BCu;
            // 0x3c72bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C72C0u;
        goto label_3c72c0;
    }
    ctx->pc = 0x3C72B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C72C0u);
        ctx->pc = 0x3C72BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C72B8u;
            // 0x3c72bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C72C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C72C0u; }
            if (ctx->pc != 0x3C72C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C72C0u;
label_3c72c0:
    // 0x3c72c0: 0x8e23077c  lw          $v1, 0x77C($s1)
    ctx->pc = 0x3c72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_3c72c4:
    // 0x3c72c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c72c8:
    // 0x3c72c8: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3c72cc:
    // 0x3c72cc: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x3c72ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c72d0:
    // 0x3c72d0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x3c72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3c72d4:
    // 0x3c72d4: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x3c72d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c72d8:
    // 0x3c72d8: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x3c72d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3c72dc:
    // 0x3c72dc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3c72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3c72e0:
    // 0x3c72e0: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x3c72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_3c72e4:
    // 0x3c72e4: 0x90720010  lbu         $s2, 0x10($v1)
    ctx->pc = 0x3c72e4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3c72e8:
    // 0x3c72e8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_3c72ec:
    if (ctx->pc == 0x3C72ECu) {
        ctx->pc = 0x3C72F0u;
        goto label_3c72f0;
    }
    ctx->pc = 0x3C72E8u;
    {
        const bool branch_taken_0x3c72e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c72e8) {
            ctx->pc = 0x3C72F8u;
            goto label_3c72f8;
        }
    }
    ctx->pc = 0x3C72F0u;
label_3c72f0:
    // 0x3c72f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c72f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c72f4:
    // 0x3c72f4: 0x0  nop
    ctx->pc = 0x3c72f4u;
    // NOP
label_3c72f8:
    // 0x3c72f8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3c72f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c72fc:
    // 0x3c72fc: 0xc66202c0  lwc1        $f2, 0x2C0($s3)
    ctx->pc = 0x3c72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7300:
    // 0x3c7300: 0x926311a1  lbu         $v1, 0x11A1($s3)
    ctx->pc = 0x3c7300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4513)));
label_3c7304:
    // 0x3c7304: 0xc66002c8  lwc1        $f0, 0x2C8($s3)
    ctx->pc = 0x3c7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7308:
    // 0x3c7308: 0x32f100ff  andi        $s1, $s7, 0xFF
    ctx->pc = 0x3c7308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3c730c:
    // 0x3c730c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3c730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c7310:
    // 0x3c7310: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3c7310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7314:
    // 0x3c7314: 0x46021d81  sub.s       $f22, $f3, $f2
    ctx->pc = 0x3c7314u;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3c7318:
    // 0x3c7318: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_3c731c:
    if (ctx->pc == 0x3C731Cu) {
        ctx->pc = 0x3C731Cu;
            // 0x3c731c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C7320u;
        goto label_3c7320;
    }
    ctx->pc = 0x3C7318u;
    {
        const bool branch_taken_0x3c7318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7318u;
            // 0x3c731c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7318) {
            ctx->pc = 0x3C7478u;
            goto label_3c7478;
        }
    }
    ctx->pc = 0x3C7320u;
label_3c7320:
    // 0x3c7320: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3c7320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c7324:
    // 0x3c7324: 0x0  nop
    ctx->pc = 0x3c7324u;
    // NOP
label_3c7328:
    // 0x3c7328: 0x460ea832  c.eq.s      $f21, $f14
    ctx->pc = 0x3c7328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c732c:
    // 0x3c732c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_3c7330:
    if (ctx->pc == 0x3C7330u) {
        ctx->pc = 0x3C7334u;
        goto label_3c7334;
    }
    ctx->pc = 0x3C732Cu;
    {
        const bool branch_taken_0x3c732c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c732c) {
            ctx->pc = 0x3C7360u;
            goto label_3c7360;
        }
    }
    ctx->pc = 0x3C7334u;
label_3c7334:
    // 0x3c7334: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c7334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c7338:
    // 0x3c7338: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3c7338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3c733c:
    // 0x3c733c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c733cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c7340:
    // 0x3c7340: 0xc04ce64  jal         func_133990
label_3c7344:
    if (ctx->pc == 0x3C7344u) {
        ctx->pc = 0x3C7344u;
            // 0x3c7344: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3C7348u;
        goto label_3c7348;
    }
    ctx->pc = 0x3C7340u;
    SET_GPR_U32(ctx, 31, 0x3C7348u);
    ctx->pc = 0x3C7344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7340u;
            // 0x3c7344: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7348u; }
        if (ctx->pc != 0x3C7348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7348u; }
        if (ctx->pc != 0x3C7348u) { return; }
    }
    ctx->pc = 0x3C7348u;
label_3c7348:
    // 0x3c7348: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3c7348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3c734c:
    // 0x3c734c: 0xc04cce4  jal         func_133390
label_3c7350:
    if (ctx->pc == 0x3C7350u) {
        ctx->pc = 0x3C7350u;
            // 0x3c7350: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3C7354u;
        goto label_3c7354;
    }
    ctx->pc = 0x3C734Cu;
    SET_GPR_U32(ctx, 31, 0x3C7354u);
    ctx->pc = 0x3C7350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C734Cu;
            // 0x3c7350: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7354u; }
        if (ctx->pc != 0x3C7354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7354u; }
        if (ctx->pc != 0x3C7354u) { return; }
    }
    ctx->pc = 0x3C7354u;
label_3c7354:
    // 0x3c7354: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3c7354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c7358:
    // 0x3c7358: 0xc7b40114  lwc1        $f20, 0x114($sp)
    ctx->pc = 0x3c7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c735c:
    // 0x3c735c: 0x0  nop
    ctx->pc = 0x3c735cu;
    // NOP
label_3c7360:
    // 0x3c7360: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x3c7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_3c7364:
    // 0x3c7364: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3c7364u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3c7368:
    // 0x3c7368: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3c736c:
    if (ctx->pc == 0x3C736Cu) {
        ctx->pc = 0x3C736Cu;
            // 0x3c736c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7370u;
        goto label_3c7370;
    }
    ctx->pc = 0x3C7368u;
    {
        const bool branch_taken_0x3c7368 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7368u;
            // 0x3c736c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7368) {
            ctx->pc = 0x3C7380u;
            goto label_3c7380;
        }
    }
    ctx->pc = 0x3C7370u;
label_3c7370:
    // 0x3c7370: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3c7370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3c7374:
    // 0x3c7374: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c7378:
    if (ctx->pc == 0x3C7378u) {
        ctx->pc = 0x3C737Cu;
        goto label_3c737c;
    }
    ctx->pc = 0x3C7374u;
    {
        const bool branch_taken_0x3c7374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7374) {
            ctx->pc = 0x3C7380u;
            goto label_3c7380;
        }
    }
    ctx->pc = 0x3C737Cu;
label_3c737c:
    // 0x3c737c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3c737cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7380:
    // 0x3c7380: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c7384:
    if (ctx->pc == 0x3C7384u) {
        ctx->pc = 0x3C7388u;
        goto label_3c7388;
    }
    ctx->pc = 0x3C7380u;
    {
        const bool branch_taken_0x3c7380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7380) {
            ctx->pc = 0x3C73A0u;
            goto label_3c73a0;
        }
    }
    ctx->pc = 0x3C7388u;
label_3c7388:
    // 0x3c7388: 0xc075eb4  jal         func_1D7AD0
label_3c738c:
    if (ctx->pc == 0x3C738Cu) {
        ctx->pc = 0x3C738Cu;
            // 0x3c738c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7390u;
        goto label_3c7390;
    }
    ctx->pc = 0x3C7388u;
    SET_GPR_U32(ctx, 31, 0x3C7390u);
    ctx->pc = 0x3C738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7388u;
            // 0x3c738c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7390u; }
        if (ctx->pc != 0x3C7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7390u; }
        if (ctx->pc != 0x3C7390u) { return; }
    }
    ctx->pc = 0x3C7390u;
label_3c7390:
    // 0x3c7390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c7394:
    if (ctx->pc == 0x3C7394u) {
        ctx->pc = 0x3C7398u;
        goto label_3c7398;
    }
    ctx->pc = 0x3C7390u;
    {
        const bool branch_taken_0x3c7390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7390) {
            ctx->pc = 0x3C73A0u;
            goto label_3c73a0;
        }
    }
    ctx->pc = 0x3C7398u;
label_3c7398:
    // 0x3c7398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c7398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c739c:
    // 0x3c739c: 0x0  nop
    ctx->pc = 0x3c739cu;
    // NOP
label_3c73a0:
    // 0x3c73a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3c73a4:
    if (ctx->pc == 0x3C73A4u) {
        ctx->pc = 0x3C73A8u;
        goto label_3c73a8;
    }
    ctx->pc = 0x3C73A0u;
    {
        const bool branch_taken_0x3c73a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c73a0) {
            ctx->pc = 0x3C73C0u;
            goto label_3c73c0;
        }
    }
    ctx->pc = 0x3C73A8u;
label_3c73a8:
    // 0x3c73a8: 0x92b1005f  lbu         $s1, 0x5F($s5)
    ctx->pc = 0x3c73a8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 95)));
label_3c73ac:
    // 0x3c73ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3c73b0:
    // 0x3c73b0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x3c73b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3c73b4:
    // 0x3c73b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c73b8:
    if (ctx->pc == 0x3C73B8u) {
        ctx->pc = 0x3C73BCu;
        goto label_3c73bc;
    }
    ctx->pc = 0x3C73B4u;
    {
        const bool branch_taken_0x3c73b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c73b4) {
            ctx->pc = 0x3C73C0u;
            goto label_3c73c0;
        }
    }
    ctx->pc = 0x3C73BCu;
label_3c73bc:
    // 0x3c73bc: 0x32f100ff  andi        $s1, $s7, 0xFF
    ctx->pc = 0x3c73bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3c73c0:
    // 0x3c73c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3c73c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3c73c4:
    // 0x3c73c4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3c73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c73c8:
    // 0x3c73c8: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x3c73c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_3c73cc:
    // 0x3c73cc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3c73ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c73d0:
    // 0x3c73d0: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x3c73d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c73d4:
    // 0x3c73d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3c73d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3c73d8:
    // 0x3c73d8: 0x87c90000  lh          $t1, 0x0($fp)
    ctx->pc = 0x3c73d8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_3c73dc:
    // 0x3c73dc: 0x87c80002  lh          $t0, 0x2($fp)
    ctx->pc = 0x3c73dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_3c73e0:
    // 0x3c73e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c73e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c73e4:
    // 0x3c73e4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x3c73e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c73e8:
    // 0x3c73e8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3c73ec:
    // 0x3c73ec: 0x86a40080  lh          $a0, 0x80($s5)
    ctx->pc = 0x3c73ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_3c73f0:
    // 0x3c73f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c73f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c73f4:
    // 0x3c73f4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c73f8:
    // 0x3c73f8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3c73f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c73fc:
    // 0x3c73fc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3c73fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3c7400:
    // 0x3c7400: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3c7400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c7404:
    // 0x3c7404: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x3c7404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_3c7408:
    // 0x3c7408: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3c7408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3c740c:
    // 0x3c740c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c7410:
    // 0x3c7410: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7414:
    // 0x3c7414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7418:
    // 0x3c7418: 0x0  nop
    ctx->pc = 0x3c7418u;
    // NOP
label_3c741c:
    // 0x3c741c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c741cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7420:
    // 0x3c7420: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3c7420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c7424:
    // 0x3c7424: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c7424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c7428:
    // 0x3c7428: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c7428u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c742c:
    // 0x3c742c: 0x0  nop
    ctx->pc = 0x3c742cu;
    // NOP
label_3c7430:
    // 0x3c7430: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c7434:
    // 0x3c7434: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c7434u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7438:
    // 0x3c7438: 0x0  nop
    ctx->pc = 0x3c7438u;
    // NOP
label_3c743c:
    // 0x3c743c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c743cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c7440:
    // 0x3c7440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7444:
    // 0x3c7444: 0x0  nop
    ctx->pc = 0x3c7444u;
    // NOP
label_3c7448:
    // 0x3c7448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c744c:
    // 0x3c744c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3c744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c7450:
    // 0x3c7450: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x3c7450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7454:
    // 0x3c7454: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3c7454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3c7458:
    // 0x3c7458: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3c7458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3c745c:
    // 0x3c745c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c745cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3c7460:
    // 0x3c7460: 0x46030b01  sub.s       $f12, $f1, $f3
    ctx->pc = 0x3c7460u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3c7464:
    // 0x3c7464: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x3c7464u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3c7468:
    // 0x3c7468: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x3c7468u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3c746c:
    // 0x3c746c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3c746cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7470:
    // 0x3c7470: 0xc0bc284  jal         func_2F0A10
label_3c7474:
    if (ctx->pc == 0x3C7474u) {
        ctx->pc = 0x3C7474u;
            // 0x3c7474: 0x460013c0  add.s       $f15, $f2, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x3C7478u;
        goto label_3c7478;
    }
    ctx->pc = 0x3C7470u;
    SET_GPR_U32(ctx, 31, 0x3C7478u);
    ctx->pc = 0x3C7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7470u;
            // 0x3c7474: 0x460013c0  add.s       $f15, $f2, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7478u; }
        if (ctx->pc != 0x3C7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7478u; }
        if (ctx->pc != 0x3C7478u) { return; }
    }
    ctx->pc = 0x3C7478u;
label_3c7478:
    // 0x3c7478: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c7478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c747c:
    // 0x3c747c: 0x681ff96  bgez        $s4, . + 4 + (-0x6A << 2)
label_3c7480:
    if (ctx->pc == 0x3C7480u) {
        ctx->pc = 0x3C7480u;
            // 0x3c7480: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
        ctx->pc = 0x3C7484u;
        goto label_3c7484;
    }
    ctx->pc = 0x3C747Cu;
    {
        const bool branch_taken_0x3c747c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x3C7480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C747Cu;
            // 0x3c7480: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c747c) {
            ctx->pc = 0x3C72D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c72d8;
        }
    }
    ctx->pc = 0x3C7484u;
label_3c7484:
    // 0x3c7484: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3c7484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3c7488:
    // 0x3c7488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c7488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c748c:
    // 0x3c748c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c748cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c7490:
    // 0x3c7490: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c7490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c7494:
    // 0x3c7494: 0x320f809  jalr        $t9
label_3c7498:
    if (ctx->pc == 0x3C7498u) {
        ctx->pc = 0x3C749Cu;
        goto label_3c749c;
    }
    ctx->pc = 0x3C7494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C749Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C749Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C749Cu; }
            if (ctx->pc != 0x3C749Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C749Cu;
label_3c749c:
    // 0x3c749c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3c749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3c74a0:
    // 0x3c74a0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c74a4:
    // 0x3c74a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3c74a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c74a8:
    // 0x3c74a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c74ac:
    // 0x3c74ac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c74acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c74b0:
    // 0x3c74b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c74b4:
    // 0x3c74b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c74b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c74b8:
    // 0x3c74b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c74b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c74bc:
    // 0x3c74bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c74bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c74c0:
    // 0x3c74c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c74c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c74c4:
    // 0x3c74c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c74c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c74c8:
    // 0x3c74c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c74c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c74cc:
    // 0x3c74cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c74ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c74d0:
    // 0x3c74d0: 0x3e00008  jr          $ra
label_3c74d4:
    if (ctx->pc == 0x3C74D4u) {
        ctx->pc = 0x3C74D4u;
            // 0x3c74d4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x3C74D8u;
        goto label_3c74d8;
    }
    ctx->pc = 0x3C74D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C74D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C74D0u;
            // 0x3c74d4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C74D8u;
label_3c74d8:
    // 0x3c74d8: 0x0  nop
    ctx->pc = 0x3c74d8u;
    // NOP
label_3c74dc:
    // 0x3c74dc: 0x0  nop
    ctx->pc = 0x3c74dcu;
    // NOP
label_3c74e0:
    // 0x3c74e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c74e4:
    // 0x3c74e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c74e8:
    // 0x3c74e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c74e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c74ec:
    // 0x3c74ec: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3c74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3c74f0:
    // 0x3c74f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c74f4:
    // 0x3c74f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c74f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c74f8:
    // 0x3c74f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c74fc:
    // 0x3c74fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c7500:
    // 0x3c7500: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c7500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7504:
    // 0x3c7504: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c7504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c7508:
    // 0x3c7508: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c750c:
    // 0x3c750c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c7510:
    // 0x3c7510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c7514:
    // 0x3c7514: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3c7514u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3c7518:
    // 0x3c7518: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c7518u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c751c:
    // 0x3c751c: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3c751cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3c7520:
    // 0x3c7520: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c7520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c7524:
    // 0x3c7524: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3c7524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_3c7528:
    // 0x3c7528: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c752c:
    // 0x3c752c: 0x8c720e80  lw          $s2, 0xE80($v1)
    ctx->pc = 0x3c752cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c7530:
    // 0x3c7530: 0x8cb489e0  lw          $s4, -0x7620($a1)
    ctx->pc = 0x3c7530u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937056)));
label_3c7534:
    // 0x3c7534: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c7534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c7538:
    // 0x3c7538: 0x8c660eac  lw          $a2, 0xEAC($v1)
    ctx->pc = 0x3c7538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c753c:
    // 0x3c753c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c753cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c7540:
    // 0x3c7540: 0x90d30116  lbu         $s3, 0x116($a2)
    ctx->pc = 0x3c7540u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 278)));
label_3c7544:
    // 0x3c7544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c7544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7548:
    // 0x3c7548: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3c754c:
    if (ctx->pc == 0x3C754Cu) {
        ctx->pc = 0x3C754Cu;
            // 0x3c754c: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
        ctx->pc = 0x3C7550u;
        goto label_3c7550;
    }
    ctx->pc = 0x3C7548u;
    {
        const bool branch_taken_0x3c7548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7548u;
            // 0x3c754c: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7548) {
            ctx->pc = 0x3C7558u;
            goto label_3c7558;
        }
    }
    ctx->pc = 0x3C7550u;
label_3c7550:
    // 0x3c7550: 0x10000165  b           . + 4 + (0x165 << 2)
label_3c7554:
    if (ctx->pc == 0x3C7554u) {
        ctx->pc = 0x3C7554u;
            // 0x3c7554: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3C7558u;
        goto label_3c7558;
    }
    ctx->pc = 0x3C7550u;
    {
        const bool branch_taken_0x3c7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7550u;
            // 0x3c7554: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7550) {
            ctx->pc = 0x3C7AE8u;
            goto label_3c7ae8;
        }
    }
    ctx->pc = 0x3C7558u;
label_3c7558:
    // 0x3c7558: 0x8e420cb4  lw          $v0, 0xCB4($s2)
    ctx->pc = 0x3c7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
label_3c755c:
    // 0x3c755c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x3c755cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c7560:
    // 0x3c7560: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c7564:
    if (ctx->pc == 0x3C7564u) {
        ctx->pc = 0x3C7564u;
            // 0x3c7564: 0xc6a10068  lwc1        $f1, 0x68($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C7568u;
        goto label_3c7568;
    }
    ctx->pc = 0x3C7560u;
    {
        const bool branch_taken_0x3c7560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7560) {
            ctx->pc = 0x3C7564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7560u;
            // 0x3c7564: 0xc6a10068  lwc1        $f1, 0x68($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7580u;
            goto label_3c7580;
        }
    }
    ctx->pc = 0x3C7568u;
label_3c7568:
    // 0x3c7568: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c7568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c756c:
    // 0x3c756c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c756cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c7570:
    // 0x3c7570: 0x320f809  jalr        $t9
label_3c7574:
    if (ctx->pc == 0x3C7574u) {
        ctx->pc = 0x3C7574u;
            // 0x3c7574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7578u;
        goto label_3c7578;
    }
    ctx->pc = 0x3C7570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7578u);
        ctx->pc = 0x3C7574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7570u;
            // 0x3c7574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7578u; }
            if (ctx->pc != 0x3C7578u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7578u;
label_3c7578:
    // 0x3c7578: 0x1000015a  b           . + 4 + (0x15A << 2)
label_3c757c:
    if (ctx->pc == 0x3C757Cu) {
        ctx->pc = 0x3C757Cu;
            // 0x3c757c: 0xa2a00058  sb          $zero, 0x58($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3C7580u;
        goto label_3c7580;
    }
    ctx->pc = 0x3C7578u;
    {
        const bool branch_taken_0x3c7578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7578u;
            // 0x3c757c: 0xa2a00058  sb          $zero, 0x58($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7578) {
            ctx->pc = 0x3C7AE4u;
            goto label_3c7ae4;
        }
    }
    ctx->pc = 0x3C7580u;
label_3c7580:
    // 0x3c7580: 0x86a2005a  lh          $v0, 0x5A($s5)
    ctx->pc = 0x3c7580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 90)));
label_3c7584:
    // 0x3c7584: 0xc6a00070  lwc1        $f0, 0x70($s5)
    ctx->pc = 0x3c7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7588:
    // 0x3c7588: 0x86a4005c  lh          $a0, 0x5C($s5)
    ctx->pc = 0x3c7588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 92)));
label_3c758c:
    // 0x3c758c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c7590:
    // 0x3c7590: 0x8e57081c  lw          $s7, 0x81C($s2)
    ctx->pc = 0x3c7590u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2076)));
label_3c7594:
    // 0x3c7594: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c7594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7598:
    // 0x3c7598: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c7598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c759c:
    // 0x3c759c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3c75a0:
    // 0x3c75a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c75a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c75a4:
    // 0x3c75a4: 0x0  nop
    ctx->pc = 0x3c75a4u;
    // NOP
label_3c75a8:
    // 0x3c75a8: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3c75a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3c75ac:
    // 0x3c75ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c75acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c75b0:
    // 0x3c75b0: 0x0  nop
    ctx->pc = 0x3c75b0u;
    // NOP
label_3c75b4:
    // 0x3c75b4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x3c75b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c75b8:
    // 0x3c75b8: 0xc6410820  lwc1        $f1, 0x820($s2)
    ctx->pc = 0x3c75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c75bc:
    // 0x3c75bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c75bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c75c0:
    // 0x3c75c0: 0x0  nop
    ctx->pc = 0x3c75c0u;
    // NOP
label_3c75c4:
    // 0x3c75c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c75c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c75c8:
    // 0x3c75c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3c75cc:
    if (ctx->pc == 0x3C75CCu) {
        ctx->pc = 0x3C75CCu;
            // 0x3c75cc: 0x468015a0  cvt.s.w     $f22, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C75D0u;
        goto label_3c75d0;
    }
    ctx->pc = 0x3C75C8u;
    {
        const bool branch_taken_0x3c75c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C75C8u;
            // 0x3c75cc: 0x468015a0  cvt.s.w     $f22, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75c8) {
            ctx->pc = 0x3C75E0u;
            goto label_3c75e0;
        }
    }
    ctx->pc = 0x3C75D0u;
label_3c75d0:
    // 0x3c75d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c75d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c75d4:
    // 0x3c75d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c75d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c75d8:
    // 0x3c75d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c75dc:
    if (ctx->pc == 0x3C75DCu) {
        ctx->pc = 0x3C75DCu;
            // 0x3c75dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x3C75E0u;
        goto label_3c75e0;
    }
    ctx->pc = 0x3C75D8u;
    {
        const bool branch_taken_0x3c75d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C75DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C75D8u;
            // 0x3c75dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75d8) {
            ctx->pc = 0x3C75FCu;
            goto label_3c75fc;
        }
    }
    ctx->pc = 0x3C75E0u;
label_3c75e0:
    // 0x3c75e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c75e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c75e4:
    // 0x3c75e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3c75e8:
    // 0x3c75e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c75e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c75ec:
    // 0x3c75ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c75ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c75f0:
    // 0x3c75f0: 0x0  nop
    ctx->pc = 0x3c75f0u;
    // NOP
label_3c75f4:
    // 0x3c75f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c75f8:
    // 0x3c75f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3c75f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3c75fc:
    // 0x3c75fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c7600:
    // 0x3c7600: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x3c7600u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3c7604:
    // 0x3c7604: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c7604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c7608:
    // 0x3c7608: 0xc0506ac  jal         func_141AB0
label_3c760c:
    if (ctx->pc == 0x3C760Cu) {
        ctx->pc = 0x3C760Cu;
            // 0x3c760c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7610u;
        goto label_3c7610;
    }
    ctx->pc = 0x3C7608u;
    SET_GPR_U32(ctx, 31, 0x3C7610u);
    ctx->pc = 0x3C760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7608u;
            // 0x3c760c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7610u; }
        if (ctx->pc != 0x3C7610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7610u; }
        if (ctx->pc != 0x3C7610u) { return; }
    }
    ctx->pc = 0x3C7610u;
label_3c7610:
    // 0x3c7610: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3c7610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c7614:
    // 0x3c7614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7618:
    // 0x3c7618: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c7618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c761c:
    // 0x3c761c: 0x320f809  jalr        $t9
label_3c7620:
    if (ctx->pc == 0x3C7620u) {
        ctx->pc = 0x3C7620u;
            // 0x3c7620: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C7624u;
        goto label_3c7624;
    }
    ctx->pc = 0x3C761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7624u);
        ctx->pc = 0x3C7620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C761Cu;
            // 0x3c7620: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7624u; }
            if (ctx->pc != 0x3C7624u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7624u;
label_3c7624:
    // 0x3c7624: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x3c7624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3c7628:
    // 0x3c7628: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3c7628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3c762c:
    // 0x3c762c: 0x2444002f  addiu       $a0, $v0, 0x2F
    ctx->pc = 0x3c762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_3c7630:
    // 0x3c7630: 0x92a60061  lbu         $a2, 0x61($s5)
    ctx->pc = 0x3c7630u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_3c7634:
    // 0x3c7634: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c7638:
    // 0x3c7638: 0xc6a00070  lwc1        $f0, 0x70($s5)
    ctx->pc = 0x3c7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c763c:
    // 0x3c763c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3c763cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c7640:
    // 0x3c7640: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3c7640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3c7644:
    // 0x3c7644: 0x92a40060  lbu         $a0, 0x60($s5)
    ctx->pc = 0x3c7644u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 96)));
label_3c7648:
    // 0x3c7648: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3c7648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3c764c:
    // 0x3c764c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3c7650:
    if (ctx->pc == 0x3C7650u) {
        ctx->pc = 0x3C7650u;
            // 0x3c7650: 0x46140080  add.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x3C7654u;
        goto label_3c7654;
    }
    ctx->pc = 0x3C764Cu;
    {
        const bool branch_taken_0x3c764c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3C7650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C764Cu;
            // 0x3c7650: 0x46140080  add.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c764c) {
            ctx->pc = 0x3C7660u;
            goto label_3c7660;
        }
    }
    ctx->pc = 0x3C7654u;
label_3c7654:
    // 0x3c7654: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c7654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7658:
    // 0x3c7658: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c765c:
    if (ctx->pc == 0x3C765Cu) {
        ctx->pc = 0x3C765Cu;
            // 0x3c765c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7660u;
        goto label_3c7660;
    }
    ctx->pc = 0x3C7658u;
    {
        const bool branch_taken_0x3c7658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7658u;
            // 0x3c765c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7658) {
            ctx->pc = 0x3C767Cu;
            goto label_3c767c;
        }
    }
    ctx->pc = 0x3C7660u;
label_3c7660:
    // 0x3c7660: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3c7660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3c7664:
    // 0x3c7664: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3c7664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3c7668:
    // 0x3c7668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c766c:
    // 0x3c766c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c766cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7670:
    // 0x3c7670: 0x0  nop
    ctx->pc = 0x3c7670u;
    // NOP
label_3c7674:
    // 0x3c7674: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c7678:
    // 0x3c7678: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c767c:
    // 0x3c767c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c767cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7680:
    // 0x3c7680: 0x0  nop
    ctx->pc = 0x3c7680u;
    // NOP
label_3c7684:
    // 0x3c7684: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c7684u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c7688:
    // 0x3c7688: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_3c768c:
    if (ctx->pc == 0x3C768Cu) {
        ctx->pc = 0x3C768Cu;
            // 0x3c768c: 0x46140b1d  msub.s      $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->pc = 0x3C7690u;
        goto label_3c7690;
    }
    ctx->pc = 0x3C7688u;
    {
        const bool branch_taken_0x3c7688 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3C768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7688u;
            // 0x3c768c: 0x46140b1d  msub.s      $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7688) {
            ctx->pc = 0x3C769Cu;
            goto label_3c769c;
        }
    }
    ctx->pc = 0x3C7690u;
label_3c7690:
    // 0x3c7690: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c7690u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7694:
    // 0x3c7694: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7698:
    if (ctx->pc == 0x3C7698u) {
        ctx->pc = 0x3C7698u;
            // 0x3c7698: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C769Cu;
        goto label_3c769c;
    }
    ctx->pc = 0x3C7694u;
    {
        const bool branch_taken_0x3c7694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7694u;
            // 0x3c7698: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7694) {
            ctx->pc = 0x3C76B8u;
            goto label_3c76b8;
        }
    }
    ctx->pc = 0x3C769Cu;
label_3c769c:
    // 0x3c769c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3c769cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3c76a0:
    // 0x3c76a0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3c76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3c76a4:
    // 0x3c76a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c76a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c76a8:
    // 0x3c76a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c76a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c76ac:
    // 0x3c76ac: 0x0  nop
    ctx->pc = 0x3c76acu;
    // NOP
label_3c76b0:
    // 0x3c76b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c76b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c76b4:
    // 0x3c76b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c76b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c76b8:
    // 0x3c76b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c76b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c76bc:
    // 0x3c76bc: 0x0  nop
    ctx->pc = 0x3c76bcu;
    // NOP
label_3c76c0:
    // 0x3c76c0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3c76c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3c76c4:
    // 0x3c76c4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3c76c8:
    if (ctx->pc == 0x3C76C8u) {
        ctx->pc = 0x3C76C8u;
            // 0x3c76c8: 0x46140b5d  msub.s      $f13, $f1, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->pc = 0x3C76CCu;
        goto label_3c76cc;
    }
    ctx->pc = 0x3C76C4u;
    {
        const bool branch_taken_0x3c76c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3C76C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C76C4u;
            // 0x3c76c8: 0x46140b5d  msub.s      $f13, $f1, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76c4) {
            ctx->pc = 0x3C76D8u;
            goto label_3c76d8;
        }
    }
    ctx->pc = 0x3C76CCu;
label_3c76cc:
    // 0x3c76cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c76ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c76d0:
    // 0x3c76d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c76d4:
    if (ctx->pc == 0x3C76D4u) {
        ctx->pc = 0x3C76D4u;
            // 0x3c76d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C76D8u;
        goto label_3c76d8;
    }
    ctx->pc = 0x3C76D0u;
    {
        const bool branch_taken_0x3c76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C76D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C76D0u;
            // 0x3c76d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76d0) {
            ctx->pc = 0x3C76F4u;
            goto label_3c76f4;
        }
    }
    ctx->pc = 0x3C76D8u;
label_3c76d8:
    // 0x3c76d8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3c76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3c76dc:
    // 0x3c76dc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3c76dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3c76e0:
    // 0x3c76e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c76e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c76e4:
    // 0x3c76e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c76e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c76e8:
    // 0x3c76e8: 0x0  nop
    ctx->pc = 0x3c76e8u;
    // NOP
label_3c76ec:
    // 0x3c76ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c76ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c76f0:
    // 0x3c76f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c76f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c76f4:
    // 0x3c76f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c76f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c76f8:
    // 0x3c76f8: 0x0  nop
    ctx->pc = 0x3c76f8u;
    // NOP
label_3c76fc:
    // 0x3c76fc: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c76fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c7700:
    // 0x3c7700: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_3c7704:
    if (ctx->pc == 0x3C7704u) {
        ctx->pc = 0x3C7704u;
            // 0x3c7704: 0x46020b9c  madd.s      $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3C7708u;
        goto label_3c7708;
    }
    ctx->pc = 0x3C7700u;
    {
        const bool branch_taken_0x3c7700 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3C7704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7700u;
            // 0x3c7704: 0x46020b9c  madd.s      $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7700) {
            ctx->pc = 0x3C7714u;
            goto label_3c7714;
        }
    }
    ctx->pc = 0x3C7708u;
label_3c7708:
    // 0x3c7708: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c7708u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c770c:
    // 0x3c770c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7710:
    if (ctx->pc == 0x3C7710u) {
        ctx->pc = 0x3C7710u;
            // 0x3c7710: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7714u;
        goto label_3c7714;
    }
    ctx->pc = 0x3C770Cu;
    {
        const bool branch_taken_0x3c770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C770Cu;
            // 0x3c7710: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c770c) {
            ctx->pc = 0x3C7730u;
            goto label_3c7730;
        }
    }
    ctx->pc = 0x3C7714u;
label_3c7714:
    // 0x3c7714: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3c7714u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3c7718:
    // 0x3c7718: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3c7718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3c771c:
    // 0x3c771c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c7720:
    // 0x3c7720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7724:
    // 0x3c7724: 0x0  nop
    ctx->pc = 0x3c7724u;
    // NOP
label_3c7728:
    // 0x3c7728: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c772c:
    // 0x3c772c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c772cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c7730:
    // 0x3c7730: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3c7730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7734:
    // 0x3c7734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7738:
    // 0x3c7738: 0x0  nop
    ctx->pc = 0x3c7738u;
    // NOP
label_3c773c:
    // 0x3c773c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3c773cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3c7740:
    // 0x3c7740: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c7744:
    // 0x3c7744: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3c7744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c7748:
    // 0x3c7748: 0x46020bdc  madd.s      $f15, $f1, $f2
    ctx->pc = 0x3c7748u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3c774c:
    // 0x3c774c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c774cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7750:
    // 0x3c7750: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c7750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c7754:
    // 0x3c7754: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c7758:
    // 0x3c7758: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c775c:
    // 0x3c775c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c775cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7760:
    // 0x3c7760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7764:
    // 0x3c7764: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c7764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7768:
    // 0x3c7768: 0xc0bc284  jal         func_2F0A10
label_3c776c:
    if (ctx->pc == 0x3C776Cu) {
        ctx->pc = 0x3C776Cu;
            // 0x3c776c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7770u;
        goto label_3c7770;
    }
    ctx->pc = 0x3C7768u;
    SET_GPR_U32(ctx, 31, 0x3C7770u);
    ctx->pc = 0x3C776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7768u;
            // 0x3c776c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7770u; }
        if (ctx->pc != 0x3C7770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7770u; }
        if (ctx->pc != 0x3C7770u) { return; }
    }
    ctx->pc = 0x3C7770u;
label_3c7770:
    // 0x3c7770: 0x92a20060  lbu         $v0, 0x60($s5)
    ctx->pc = 0x3c7770u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 96)));
label_3c7774:
    // 0x3c7774: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c7778:
    if (ctx->pc == 0x3C7778u) {
        ctx->pc = 0x3C7778u;
            // 0x3c7778: 0xc6a30070  lwc1        $f3, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3C777Cu;
        goto label_3c777c;
    }
    ctx->pc = 0x3C7774u;
    {
        const bool branch_taken_0x3c7774 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C7778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7774u;
            // 0x3c7778: 0xc6a30070  lwc1        $f3, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7774) {
            ctx->pc = 0x3C7788u;
            goto label_3c7788;
        }
    }
    ctx->pc = 0x3C777Cu;
label_3c777c:
    // 0x3c777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7780:
    // 0x3c7780: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7784:
    if (ctx->pc == 0x3C7784u) {
        ctx->pc = 0x3C7784u;
            // 0x3c7784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7788u;
        goto label_3c7788;
    }
    ctx->pc = 0x3C7780u;
    {
        const bool branch_taken_0x3c7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7780u;
            // 0x3c7784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7780) {
            ctx->pc = 0x3C77A4u;
            goto label_3c77a4;
        }
    }
    ctx->pc = 0x3C7788u;
label_3c7788:
    // 0x3c7788: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c7788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c778c:
    // 0x3c778c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c7790:
    // 0x3c7790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c7794:
    // 0x3c7794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7798:
    // 0x3c7798: 0x0  nop
    ctx->pc = 0x3c7798u;
    // NOP
label_3c779c:
    // 0x3c779c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c779cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c77a0:
    // 0x3c77a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c77a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c77a4:
    // 0x3c77a4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3c77a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3c77a8:
    // 0x3c77a8: 0x92a20064  lbu         $v0, 0x64($s5)
    ctx->pc = 0x3c77a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 100)));
label_3c77ac:
    // 0x3c77ac: 0x26250440  addiu       $a1, $s1, 0x440
    ctx->pc = 0x3c77acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_3c77b0:
    // 0x3c77b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c77b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c77b4:
    // 0x3c77b4: 0xc6a10074  lwc1        $f1, 0x74($s5)
    ctx->pc = 0x3c77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c77b8:
    // 0x3c77b8: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c77b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c77bc:
    // 0x3c77bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c77c0:
    if (ctx->pc == 0x3C77C0u) {
        ctx->pc = 0x3C77C0u;
            // 0x3c77c0: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3C77C4u;
        goto label_3c77c4;
    }
    ctx->pc = 0x3C77BCu;
    {
        const bool branch_taken_0x3c77bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C77C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C77BCu;
            // 0x3c77c0: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77bc) {
            ctx->pc = 0x3C77D0u;
            goto label_3c77d0;
        }
    }
    ctx->pc = 0x3C77C4u;
label_3c77c4:
    // 0x3c77c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c77c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c77c8:
    // 0x3c77c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c77cc:
    if (ctx->pc == 0x3C77CCu) {
        ctx->pc = 0x3C77CCu;
            // 0x3c77cc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C77D0u;
        goto label_3c77d0;
    }
    ctx->pc = 0x3C77C8u;
    {
        const bool branch_taken_0x3c77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C77CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C77C8u;
            // 0x3c77cc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77c8) {
            ctx->pc = 0x3C77ECu;
            goto label_3c77ec;
        }
    }
    ctx->pc = 0x3C77D0u;
label_3c77d0:
    // 0x3c77d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c77d4:
    // 0x3c77d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c77d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c77d8:
    // 0x3c77d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c77dc:
    // 0x3c77dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c77dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c77e0:
    // 0x3c77e0: 0x0  nop
    ctx->pc = 0x3c77e0u;
    // NOP
label_3c77e4:
    // 0x3c77e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c77e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c77e8:
    // 0x3c77e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c77e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c77ec:
    // 0x3c77ec: 0x92a20065  lbu         $v0, 0x65($s5)
    ctx->pc = 0x3c77ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 101)));
label_3c77f0:
    // 0x3c77f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c77f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c77f4:
    // 0x3c77f4: 0x0  nop
    ctx->pc = 0x3c77f4u;
    // NOP
label_3c77f8:
    // 0x3c77f8: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c77f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c77fc:
    // 0x3c77fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c7800:
    if (ctx->pc == 0x3C7800u) {
        ctx->pc = 0x3C7800u;
            // 0x3c7800: 0x46030b9c  madd.s      $f14, $f1, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->pc = 0x3C7804u;
        goto label_3c7804;
    }
    ctx->pc = 0x3C77FCu;
    {
        const bool branch_taken_0x3c77fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C7800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C77FCu;
            // 0x3c7800: 0x46030b9c  madd.s      $f14, $f1, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77fc) {
            ctx->pc = 0x3C7810u;
            goto label_3c7810;
        }
    }
    ctx->pc = 0x3C7804u;
label_3c7804:
    // 0x3c7804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7808:
    // 0x3c7808: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c780c:
    if (ctx->pc == 0x3C780Cu) {
        ctx->pc = 0x3C780Cu;
            // 0x3c780c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7810u;
        goto label_3c7810;
    }
    ctx->pc = 0x3C7808u;
    {
        const bool branch_taken_0x3c7808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7808u;
            // 0x3c780c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7808) {
            ctx->pc = 0x3C782Cu;
            goto label_3c782c;
        }
    }
    ctx->pc = 0x3C7810u;
label_3c7810:
    // 0x3c7810: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c7810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c7814:
    // 0x3c7814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c7814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c7818:
    // 0x3c7818: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c781c:
    // 0x3c781c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c781cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7820:
    // 0x3c7820: 0x0  nop
    ctx->pc = 0x3c7820u;
    // NOP
label_3c7824:
    // 0x3c7824: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c7828:
    // 0x3c7828: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c782c:
    // 0x3c782c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3c782cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7830:
    // 0x3c7830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7834:
    // 0x3c7834: 0x0  nop
    ctx->pc = 0x3c7834u;
    // NOP
label_3c7838:
    // 0x3c7838: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3c7838u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3c783c:
    // 0x3c783c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c7840:
    // 0x3c7840: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3c7840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c7844:
    // 0x3c7844: 0x46030bdc  madd.s      $f15, $f1, $f3
    ctx->pc = 0x3c7844u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_3c7848:
    // 0x3c7848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c7848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c784c:
    // 0x3c784c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c784cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c7850:
    // 0x3c7850: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c7854:
    // 0x3c7854: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7858:
    // 0x3c7858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c7858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c785c:
    // 0x3c785c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c785cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7860:
    // 0x3c7860: 0x0  nop
    ctx->pc = 0x3c7860u;
    // NOP
label_3c7864:
    // 0x3c7864: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c7864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c7868:
    // 0x3c7868: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c7868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c786c:
    // 0x3c786c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c786cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7870:
    // 0x3c7870: 0xc0bc284  jal         func_2F0A10
label_3c7874:
    if (ctx->pc == 0x3C7874u) {
        ctx->pc = 0x3C7874u;
            // 0x3c7874: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3C7878u;
        goto label_3c7878;
    }
    ctx->pc = 0x3C7870u;
    SET_GPR_U32(ctx, 31, 0x3C7878u);
    ctx->pc = 0x3C7874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7870u;
            // 0x3c7874: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7878u; }
        if (ctx->pc != 0x3C7878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7878u; }
        if (ctx->pc != 0x3C7878u) { return; }
    }
    ctx->pc = 0x3C7878u;
label_3c7878:
    // 0x3c7878: 0x92a20064  lbu         $v0, 0x64($s5)
    ctx->pc = 0x3c7878u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 100)));
label_3c787c:
    // 0x3c787c: 0xc6a30074  lwc1        $f3, 0x74($s5)
    ctx->pc = 0x3c787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c7880:
    // 0x3c7880: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c7884:
    if (ctx->pc == 0x3C7884u) {
        ctx->pc = 0x3C7884u;
            // 0x3c7884: 0xc6a40070  lwc1        $f4, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x3C7888u;
        goto label_3c7888;
    }
    ctx->pc = 0x3C7880u;
    {
        const bool branch_taken_0x3c7880 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C7884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7880u;
            // 0x3c7884: 0xc6a40070  lwc1        $f4, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7880) {
            ctx->pc = 0x3C7894u;
            goto label_3c7894;
        }
    }
    ctx->pc = 0x3C7888u;
label_3c7888:
    // 0x3c7888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c788c:
    // 0x3c788c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7890:
    if (ctx->pc == 0x3C7890u) {
        ctx->pc = 0x3C7890u;
            // 0x3c7890: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7894u;
        goto label_3c7894;
    }
    ctx->pc = 0x3C788Cu;
    {
        const bool branch_taken_0x3c788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C788Cu;
            // 0x3c7890: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c788c) {
            ctx->pc = 0x3C78B0u;
            goto label_3c78b0;
        }
    }
    ctx->pc = 0x3C7894u;
label_3c7894:
    // 0x3c7894: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c7894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c7898:
    // 0x3c7898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c7898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c789c:
    // 0x3c789c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c78a0:
    // 0x3c78a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c78a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c78a4:
    // 0x3c78a4: 0x0  nop
    ctx->pc = 0x3c78a4u;
    // NOP
label_3c78a8:
    // 0x3c78a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c78a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c78ac:
    // 0x3c78ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c78acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c78b0:
    // 0x3c78b0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3c78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3c78b4:
    // 0x3c78b4: 0x32c6ffff  andi        $a2, $s6, 0xFFFF
    ctx->pc = 0x3c78b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_3c78b8:
    // 0x3c78b8: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x3c78b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_3c78bc:
    // 0x3c78bc: 0x92a20063  lbu         $v0, 0x63($s5)
    ctx->pc = 0x3c78bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 99)));
label_3c78c0:
    // 0x3c78c0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x3c78c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3c78c4:
    // 0x3c78c4: 0x92a70061  lbu         $a3, 0x61($s5)
    ctx->pc = 0x3c78c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_3c78c8:
    // 0x3c78c8: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3c78c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3c78cc:
    // 0x3c78cc: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x3c78ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_3c78d0:
    // 0x3c78d0: 0x92a30062  lbu         $v1, 0x62($s5)
    ctx->pc = 0x3c78d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 98)));
label_3c78d4:
    // 0x3c78d4: 0xe22023  subu        $a0, $a3, $v0
    ctx->pc = 0x3c78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3c78d8:
    // 0x3c78d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c78d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c78dc:
    // 0x3c78dc: 0x0  nop
    ctx->pc = 0x3c78dcu;
    // NOP
label_3c78e0:
    // 0x3c78e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c78e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c78e4:
    // 0x3c78e4: 0x2010  mfhi        $a0
    ctx->pc = 0x3c78e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c78e8:
    // 0x3c78e8: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x3c78e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_3c78ec:
    // 0x3c78ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3c78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c78f0:
    // 0x3c78f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3c78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3c78f4:
    // 0x3c78f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c78f8:
    // 0x3c78f8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3c78f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3c78fc:
    // 0x3c78fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3c78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3c7900:
    // 0x3c7900: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3c7900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3c7904:
    // 0x3c7904: 0x2c42023  subu        $a0, $s6, $a0
    ctx->pc = 0x3c7904u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_3c7908:
    // 0x3c7908: 0x3096ffff  andi        $s6, $a0, 0xFFFF
    ctx->pc = 0x3c7908u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3c790c:
    // 0x3c790c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c790cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c7910:
    // 0x3c7910: 0x0  nop
    ctx->pc = 0x3c7910u;
    // NOP
label_3c7914:
    // 0x3c7914: 0x46160818  adda.s      $f1, $f22
    ctx->pc = 0x3c7914u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_3c7918:
    // 0x3c7918: 0x46021d9c  madd.s      $f22, $f3, $f2
    ctx->pc = 0x3c7918u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3c791c:
    // 0x3c791c: 0x46150818  adda.s      $f1, $f21
    ctx->pc = 0x3c791cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3c7920:
    // 0x3c7920: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3c7924:
    if (ctx->pc == 0x3C7924u) {
        ctx->pc = 0x3C7924u;
            // 0x3c7924: 0x46001d5c  madd.s      $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->pc = 0x3C7928u;
        goto label_3c7928;
    }
    ctx->pc = 0x3C7920u;
    {
        const bool branch_taken_0x3c7920 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7920u;
            // 0x3c7924: 0x46001d5c  madd.s      $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7920) {
            ctx->pc = 0x3C7934u;
            goto label_3c7934;
        }
    }
    ctx->pc = 0x3C7928u;
label_3c7928:
    // 0x3c7928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c792c:
    // 0x3c792c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7930:
    if (ctx->pc == 0x3C7930u) {
        ctx->pc = 0x3C7930u;
            // 0x3c7930: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7934u;
        goto label_3c7934;
    }
    ctx->pc = 0x3C792Cu;
    {
        const bool branch_taken_0x3c792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C792Cu;
            // 0x3c7930: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c792c) {
            ctx->pc = 0x3C7950u;
            goto label_3c7950;
        }
    }
    ctx->pc = 0x3C7934u;
label_3c7934:
    // 0x3c7934: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3c7934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3c7938:
    // 0x3c7938: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c7938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c793c:
    // 0x3c793c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c793cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c7940:
    // 0x3c7940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c7940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7944:
    // 0x3c7944: 0x0  nop
    ctx->pc = 0x3c7944u;
    // NOP
label_3c7948:
    // 0x3c7948: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c794c:
    // 0x3c794c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c794cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c7950:
    // 0x3c7950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7954:
    // 0x3c7954: 0x0  nop
    ctx->pc = 0x3c7954u;
    // NOP
label_3c7958:
    // 0x3c7958: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c7958u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c795c:
    // 0x3c795c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c7960:
    if (ctx->pc == 0x3C7960u) {
        ctx->pc = 0x3C7960u;
            // 0x3c7960: 0x46040b9c  madd.s      $f14, $f1, $f4 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->pc = 0x3C7964u;
        goto label_3c7964;
    }
    ctx->pc = 0x3C795Cu;
    {
        const bool branch_taken_0x3c795c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C7960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C795Cu;
            // 0x3c7960: 0x46040b9c  madd.s      $f14, $f1, $f4 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c795c) {
            ctx->pc = 0x3C7970u;
            goto label_3c7970;
        }
    }
    ctx->pc = 0x3C7964u;
label_3c7964:
    // 0x3c7964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7968:
    // 0x3c7968: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c796c:
    if (ctx->pc == 0x3C796Cu) {
        ctx->pc = 0x3C796Cu;
            // 0x3c796c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7970u;
        goto label_3c7970;
    }
    ctx->pc = 0x3C7968u;
    {
        const bool branch_taken_0x3c7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7968u;
            // 0x3c796c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7968) {
            ctx->pc = 0x3C798Cu;
            goto label_3c798c;
        }
    }
    ctx->pc = 0x3C7970u;
label_3c7970:
    // 0x3c7970: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c7970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c7974:
    // 0x3c7974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c7978:
    // 0x3c7978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c797c:
    // 0x3c797c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c797cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7980:
    // 0x3c7980: 0x0  nop
    ctx->pc = 0x3c7980u;
    // NOP
label_3c7984:
    // 0x3c7984: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c7988:
    // 0x3c7988: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c798c:
    // 0x3c798c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3c798cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7990:
    // 0x3c7990: 0x24a2002f  addiu       $v0, $a1, 0x2F
    ctx->pc = 0x3c7990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
label_3c7994:
    // 0x3c7994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c7998:
    // 0x3c7998: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3c7998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c799c:
    // 0x3c799c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3c799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3c79a0:
    // 0x3c79a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c79a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c79a4:
    // 0x3c79a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c79a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c79a8:
    // 0x3c79a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c79ac:
    // 0x3c79ac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c79acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c79b0:
    // 0x3c79b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c79b4:
    // 0x3c79b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c79b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c79b8:
    // 0x3c79b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c79b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c79bc:
    // 0x3c79bc: 0x0  nop
    ctx->pc = 0x3c79bcu;
    // NOP
label_3c79c0:
    // 0x3c79c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c79c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c79c4:
    // 0x3c79c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c79c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c79c8:
    // 0x3c79c8: 0x0  nop
    ctx->pc = 0x3c79c8u;
    // NOP
label_3c79cc:
    // 0x3c79cc: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3c79ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3c79d0:
    // 0x3c79d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c79d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c79d4:
    // 0x3c79d4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c79d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c79d8:
    // 0x3c79d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c79d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c79dc:
    // 0x3c79dc: 0xc0bc284  jal         func_2F0A10
label_3c79e0:
    if (ctx->pc == 0x3C79E0u) {
        ctx->pc = 0x3C79E0u;
            // 0x3c79e0: 0x46040bdc  madd.s      $f15, $f1, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->pc = 0x3C79E4u;
        goto label_3c79e4;
    }
    ctx->pc = 0x3C79DCu;
    SET_GPR_U32(ctx, 31, 0x3C79E4u);
    ctx->pc = 0x3C79E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C79DCu;
            // 0x3c79e0: 0x46040bdc  madd.s      $f15, $f1, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C79E4u; }
        if (ctx->pc != 0x3C79E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C79E4u; }
        if (ctx->pc != 0x3C79E4u) { return; }
    }
    ctx->pc = 0x3C79E4u;
label_3c79e4:
    // 0x3c79e4: 0x92a20062  lbu         $v0, 0x62($s5)
    ctx->pc = 0x3c79e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 98)));
label_3c79e8:
    // 0x3c79e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c79ec:
    if (ctx->pc == 0x3C79ECu) {
        ctx->pc = 0x3C79ECu;
            // 0x3c79ec: 0xc6a30070  lwc1        $f3, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3C79F0u;
        goto label_3c79f0;
    }
    ctx->pc = 0x3C79E8u;
    {
        const bool branch_taken_0x3c79e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C79ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C79E8u;
            // 0x3c79ec: 0xc6a30070  lwc1        $f3, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c79e8) {
            ctx->pc = 0x3C79FCu;
            goto label_3c79fc;
        }
    }
    ctx->pc = 0x3C79F0u;
label_3c79f0:
    // 0x3c79f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c79f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c79f4:
    // 0x3c79f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c79f8:
    if (ctx->pc == 0x3C79F8u) {
        ctx->pc = 0x3C79F8u;
            // 0x3c79f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C79FCu;
        goto label_3c79fc;
    }
    ctx->pc = 0x3C79F4u;
    {
        const bool branch_taken_0x3c79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C79F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C79F4u;
            // 0x3c79f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c79f4) {
            ctx->pc = 0x3C7A18u;
            goto label_3c7a18;
        }
    }
    ctx->pc = 0x3C79FCu;
label_3c79fc:
    // 0x3c79fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c7a00:
    // 0x3c7a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c7a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c7a04:
    // 0x3c7a04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c7a08:
    // 0x3c7a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a0c:
    // 0x3c7a0c: 0x0  nop
    ctx->pc = 0x3c7a0cu;
    // NOP
label_3c7a10:
    // 0x3c7a10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7a14:
    // 0x3c7a14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c7a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c7a18:
    // 0x3c7a18: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3c7a18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3c7a1c:
    // 0x3c7a1c: 0x92a20063  lbu         $v0, 0x63($s5)
    ctx->pc = 0x3c7a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 99)));
label_3c7a20:
    // 0x3c7a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a24:
    // 0x3c7a24: 0xc6a10074  lwc1        $f1, 0x74($s5)
    ctx->pc = 0x3c7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7a28:
    // 0x3c7a28: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c7a28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c7a2c:
    // 0x3c7a2c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c7a30:
    if (ctx->pc == 0x3C7A30u) {
        ctx->pc = 0x3C7A30u;
            // 0x3c7a30: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3C7A34u;
        goto label_3c7a34;
    }
    ctx->pc = 0x3C7A2Cu;
    {
        const bool branch_taken_0x3c7a2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C7A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7A2Cu;
            // 0x3c7a30: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a2c) {
            ctx->pc = 0x3C7A40u;
            goto label_3c7a40;
        }
    }
    ctx->pc = 0x3C7A34u;
label_3c7a34:
    // 0x3c7a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a38:
    // 0x3c7a38: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7a3c:
    if (ctx->pc == 0x3C7A3Cu) {
        ctx->pc = 0x3C7A3Cu;
            // 0x3c7a3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7A40u;
        goto label_3c7a40;
    }
    ctx->pc = 0x3C7A38u;
    {
        const bool branch_taken_0x3c7a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7A38u;
            // 0x3c7a3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a38) {
            ctx->pc = 0x3C7A5Cu;
            goto label_3c7a5c;
        }
    }
    ctx->pc = 0x3C7A40u;
label_3c7a40:
    // 0x3c7a40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3c7a44:
    // 0x3c7a44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c7a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c7a48:
    // 0x3c7a48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c7a4c:
    // 0x3c7a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a50:
    // 0x3c7a50: 0x0  nop
    ctx->pc = 0x3c7a50u;
    // NOP
label_3c7a54:
    // 0x3c7a54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c7a58:
    // 0x3c7a58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c7a5c:
    // 0x3c7a5c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3c7a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7a60:
    // 0x3c7a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a64:
    // 0x3c7a64: 0x0  nop
    ctx->pc = 0x3c7a64u;
    // NOP
label_3c7a68:
    // 0x3c7a68: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3c7a68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3c7a6c:
    // 0x3c7a6c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x3c7a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_3c7a70:
    // 0x3c7a70: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x3c7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_3c7a74:
    // 0x3c7a74: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3c7a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c7a78:
    // 0x3c7a78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c7a78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a7c:
    // 0x3c7a7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c7a80:
    // 0x3c7a80: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c7a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c7a84:
    // 0x3c7a84: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3c7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3c7a88:
    // 0x3c7a88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c7a8c:
    // 0x3c7a8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c7a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a90:
    // 0x3c7a90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7a94:
    // 0x3c7a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c7a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a98:
    // 0x3c7a98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7a9c:
    // 0x3c7a9c: 0x0  nop
    ctx->pc = 0x3c7a9cu;
    // NOP
label_3c7aa0:
    // 0x3c7aa0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c7aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c7aa4:
    // 0x3c7aa4: 0x4602b380  add.s       $f14, $f22, $f2
    ctx->pc = 0x3c7aa4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_3c7aa8:
    // 0x3c7aa8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c7aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c7aac:
    // 0x3c7aac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c7aacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c7ab0:
    // 0x3c7ab0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c7ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c7ab4:
    // 0x3c7ab4: 0xc0bc284  jal         func_2F0A10
label_3c7ab8:
    if (ctx->pc == 0x3C7AB8u) {
        ctx->pc = 0x3C7AB8u;
            // 0x3c7ab8: 0x46030bdc  madd.s      $f15, $f1, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->pc = 0x3C7ABCu;
        goto label_3c7abc;
    }
    ctx->pc = 0x3C7AB4u;
    SET_GPR_U32(ctx, 31, 0x3C7ABCu);
    ctx->pc = 0x3C7AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7AB4u;
            // 0x3c7ab8: 0x46030bdc  madd.s      $f15, $f1, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7ABCu; }
        if (ctx->pc != 0x3C7ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7ABCu; }
        if (ctx->pc != 0x3C7ABCu) { return; }
    }
    ctx->pc = 0x3C7ABCu;
label_3c7abc:
    // 0x3c7abc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3c7abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c7ac0:
    // 0x3c7ac0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c7ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c7ac4:
    // 0x3c7ac4: 0x320f809  jalr        $t9
label_3c7ac8:
    if (ctx->pc == 0x3C7AC8u) {
        ctx->pc = 0x3C7AC8u;
            // 0x3c7ac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7ACCu;
        goto label_3c7acc;
    }
    ctx->pc = 0x3C7AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7ACCu);
        ctx->pc = 0x3C7AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7AC4u;
            // 0x3c7ac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7ACCu; }
            if (ctx->pc != 0x3C7ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C7ACCu;
label_3c7acc:
    // 0x3c7acc: 0x8e430960  lw          $v1, 0x960($s2)
    ctx->pc = 0x3c7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_3c7ad0:
    // 0x3c7ad0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3c7ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_3c7ad4:
    // 0x3c7ad4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c7ad8:
    if (ctx->pc == 0x3C7AD8u) {
        ctx->pc = 0x3C7ADCu;
        goto label_3c7adc;
    }
    ctx->pc = 0x3C7AD4u;
    {
        const bool branch_taken_0x3c7ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ad4) {
            ctx->pc = 0x3C7AE4u;
            goto label_3c7ae4;
        }
    }
    ctx->pc = 0x3C7ADCu;
label_3c7adc:
    // 0x3c7adc: 0xc0f1c14  jal         func_3C7050
label_3c7ae0:
    if (ctx->pc == 0x3C7AE0u) {
        ctx->pc = 0x3C7AE0u;
            // 0x3c7ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7AE4u;
        goto label_3c7ae4;
    }
    ctx->pc = 0x3C7ADCu;
    SET_GPR_U32(ctx, 31, 0x3C7AE4u);
    ctx->pc = 0x3C7AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7ADCu;
            // 0x3c7ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C7050u;
    goto label_3c7050;
    ctx->pc = 0x3C7AE4u;
label_3c7ae4:
    // 0x3c7ae4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c7ae8:
    // 0x3c7ae8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c7aec:
    // 0x3c7aec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c7aecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c7af0:
    // 0x3c7af0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c7af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c7af4:
    // 0x3c7af4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c7af4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c7af8:
    // 0x3c7af8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c7afc:
    // 0x3c7afc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c7afcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c7b00:
    // 0x3c7b00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c7b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c7b04:
    // 0x3c7b04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c7b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7b08:
    // 0x3c7b08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c7b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7b0c:
    // 0x3c7b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c7b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7b10:
    // 0x3c7b10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7b14:
    // 0x3c7b14: 0x3e00008  jr          $ra
label_3c7b18:
    if (ctx->pc == 0x3C7B18u) {
        ctx->pc = 0x3C7B18u;
            // 0x3c7b18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3C7B1Cu;
        goto label_3c7b1c;
    }
    ctx->pc = 0x3C7B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B14u;
            // 0x3c7b18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C7B1Cu;
label_3c7b1c:
    // 0x3c7b1c: 0x0  nop
    ctx->pc = 0x3c7b1cu;
    // NOP
label_3c7b20:
    // 0x3c7b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c7b24:
    // 0x3c7b24: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3c7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3c7b28:
    // 0x3c7b28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c7b2c:
    // 0x3c7b2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c7b30:
    // 0x3c7b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c7b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c7b34:
    // 0x3c7b34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c7b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c7b38:
    // 0x3c7b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c7b3c:
    // 0x3c7b3c: 0x8cb10e80  lw          $s1, 0xE80($a1)
    ctx->pc = 0x3c7b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
label_3c7b40:
    // 0x3c7b40: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3c7b40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c7b44:
    // 0x3c7b44: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x3c7b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3c7b48:
    // 0x3c7b48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c7b4c:
    // 0x3c7b4c: 0x10c50063  beq         $a2, $a1, . + 4 + (0x63 << 2)
label_3c7b50:
    if (ctx->pc == 0x3C7B50u) {
        ctx->pc = 0x3C7B50u;
            // 0x3c7b50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B54u;
        goto label_3c7b54;
    }
    ctx->pc = 0x3C7B4Cu;
    {
        const bool branch_taken_0x3c7b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3C7B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B4Cu;
            // 0x3c7b50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b4c) {
            ctx->pc = 0x3C7CDCu;
            goto label_3c7cdc;
        }
    }
    ctx->pc = 0x3C7B54u;
label_3c7b54:
    // 0x3c7b54: 0x50c0005c  beql        $a2, $zero, . + 4 + (0x5C << 2)
label_3c7b58:
    if (ctx->pc == 0x3C7B58u) {
        ctx->pc = 0x3C7B58u;
            // 0x3c7b58: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C7B5Cu;
        goto label_3c7b5c;
    }
    ctx->pc = 0x3C7B54u;
    {
        const bool branch_taken_0x3c7b54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7b54) {
            ctx->pc = 0x3C7B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B54u;
            // 0x3c7b58: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7CC8u;
            goto label_3c7cc8;
        }
    }
    ctx->pc = 0x3C7B5Cu;
label_3c7b5c:
    // 0x3c7b5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7b60:
    // 0x3c7b60: 0x50c3000a  beql        $a2, $v1, . + 4 + (0xA << 2)
label_3c7b64:
    if (ctx->pc == 0x3C7B64u) {
        ctx->pc = 0x3C7B64u;
            // 0x3c7b64: 0x92230835  lbu         $v1, 0x835($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2101)));
        ctx->pc = 0x3C7B68u;
        goto label_3c7b68;
    }
    ctx->pc = 0x3C7B60u;
    {
        const bool branch_taken_0x3c7b60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7b60) {
            ctx->pc = 0x3C7B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B60u;
            // 0x3c7b64: 0x92230835  lbu         $v1, 0x835($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2101)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7B8Cu;
            goto label_3c7b8c;
        }
    }
    ctx->pc = 0x3C7B68u;
label_3c7b68:
    // 0x3c7b68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c7b6c:
    // 0x3c7b6c: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_3c7b70:
    if (ctx->pc == 0x3C7B70u) {
        ctx->pc = 0x3C7B70u;
            // 0x3c7b70: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C7B74u;
        goto label_3c7b74;
    }
    ctx->pc = 0x3C7B6Cu;
    {
        const bool branch_taken_0x3c7b6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7b6c) {
            ctx->pc = 0x3C7B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B6Cu;
            // 0x3c7b70: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7B7Cu;
            goto label_3c7b7c;
        }
    }
    ctx->pc = 0x3C7B74u;
label_3c7b74:
    // 0x3c7b74: 0x10000069  b           . + 4 + (0x69 << 2)
label_3c7b78:
    if (ctx->pc == 0x3C7B78u) {
        ctx->pc = 0x3C7B78u;
            // 0x3c7b78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3C7B7Cu;
        goto label_3c7b7c;
    }
    ctx->pc = 0x3C7B74u;
    {
        const bool branch_taken_0x3c7b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B74u;
            // 0x3c7b78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b74) {
            ctx->pc = 0x3C7D1Cu;
            goto label_3c7d1c;
        }
    }
    ctx->pc = 0x3C7B7Cu;
label_3c7b7c:
    // 0x3c7b7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c7b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c7b80:
    // 0x3c7b80: 0x320f809  jalr        $t9
label_3c7b84:
    if (ctx->pc == 0x3C7B84u) {
        ctx->pc = 0x3C7B88u;
        goto label_3c7b88;
    }
    ctx->pc = 0x3C7B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7B88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7B88u; }
            if (ctx->pc != 0x3C7B88u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7B88u;
label_3c7b88:
    // 0x3c7b88: 0x92230835  lbu         $v1, 0x835($s1)
    ctx->pc = 0x3c7b88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2101)));
label_3c7b8c:
    // 0x3c7b8c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3c7b90:
    if (ctx->pc == 0x3C7B90u) {
        ctx->pc = 0x3C7B90u;
            // 0x3c7b90: 0xc6420054  lwc1        $f2, 0x54($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3C7B94u;
        goto label_3c7b94;
    }
    ctx->pc = 0x3C7B8Cu;
    {
        const bool branch_taken_0x3c7b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7b8c) {
            ctx->pc = 0x3C7B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7B8Cu;
            // 0x3c7b90: 0xc6420054  lwc1        $f2, 0x54($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7BB0u;
            goto label_3c7bb0;
        }
    }
    ctx->pc = 0x3C7B94u;
label_3c7b94:
    // 0x3c7b94: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c7b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c7b98:
    // 0x3c7b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c7b9c:
    // 0x3c7b9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c7b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c7ba0:
    // 0x3c7ba0: 0x320f809  jalr        $t9
label_3c7ba4:
    if (ctx->pc == 0x3C7BA4u) {
        ctx->pc = 0x3C7BA4u;
            // 0x3c7ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7BA8u;
        goto label_3c7ba8;
    }
    ctx->pc = 0x3C7BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7BA8u);
        ctx->pc = 0x3C7BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7BA0u;
            // 0x3c7ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7BA8u; }
            if (ctx->pc != 0x3C7BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7BA8u;
label_3c7ba8:
    // 0x3c7ba8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3c7bac:
    if (ctx->pc == 0x3C7BACu) {
        ctx->pc = 0x3C7BB0u;
        goto label_3c7bb0;
    }
    ctx->pc = 0x3C7BA8u;
    {
        const bool branch_taken_0x3c7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ba8) {
            ctx->pc = 0x3C7D18u;
            goto label_3c7d18;
        }
    }
    ctx->pc = 0x3C7BB0u;
label_3c7bb0:
    // 0x3c7bb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c7bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c7bb4:
    // 0x3c7bb4: 0x0  nop
    ctx->pc = 0x3c7bb4u;
    // NOP
label_3c7bb8:
    // 0x3c7bb8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3c7bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7bbc:
    // 0x3c7bbc: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_3c7bc0:
    if (ctx->pc == 0x3C7BC0u) {
        ctx->pc = 0x3C7BC0u;
            // 0x3c7bc0: 0x9224081c  lbu         $a0, 0x81C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2076)));
        ctx->pc = 0x3C7BC4u;
        goto label_3c7bc4;
    }
    ctx->pc = 0x3C7BBCu;
    {
        const bool branch_taken_0x3c7bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7bbc) {
            ctx->pc = 0x3C7BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7BBCu;
            // 0x3c7bc0: 0x9224081c  lbu         $a0, 0x81C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2076)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7C0Cu;
            goto label_3c7c0c;
        }
    }
    ctx->pc = 0x3C7BC4u;
label_3c7bc4:
    // 0x3c7bc4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3c7bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7bc8:
    // 0x3c7bc8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x3c7bc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c7bcc:
    // 0x3c7bcc: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3c7bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7bd0:
    // 0x3c7bd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3c7bd4:
    if (ctx->pc == 0x3C7BD4u) {
        ctx->pc = 0x3C7BD4u;
            // 0x3c7bd4: 0xe6430054  swc1        $f3, 0x54($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->pc = 0x3C7BD8u;
        goto label_3c7bd8;
    }
    ctx->pc = 0x3C7BD0u;
    {
        const bool branch_taken_0x3c7bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7BD0u;
            // 0x3c7bd4: 0xe6430054  swc1        $f3, 0x54($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7bd0) {
            ctx->pc = 0x3C7BE8u;
            goto label_3c7be8;
        }
    }
    ctx->pc = 0x3C7BD8u;
label_3c7bd8:
    // 0x3c7bd8: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x3c7bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_3c7bdc:
    // 0x3c7bdc: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3c7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7be0:
    // 0x3c7be0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c7be4:
    if (ctx->pc == 0x3C7BE4u) {
        ctx->pc = 0x3C7BE4u;
            // 0x3c7be4: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->pc = 0x3C7BE8u;
        goto label_3c7be8;
    }
    ctx->pc = 0x3C7BE0u;
    {
        const bool branch_taken_0x3c7be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7BE0u;
            // 0x3c7be4: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7be0) {
            ctx->pc = 0x3C7C08u;
            goto label_3c7c08;
        }
    }
    ctx->pc = 0x3C7BE8u;
label_3c7be8:
    // 0x3c7be8: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x3c7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7bec:
    // 0x3c7bec: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x3c7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7bf0:
    // 0x3c7bf0: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x3c7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7bf4:
    // 0x3c7bf4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c7bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3c7bf8:
    // 0x3c7bf8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c7bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3c7bfc:
    // 0x3c7bfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3c7bfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3c7c00:
    // 0x3c7c00: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3c7c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c7c04:
    // 0x3c7c04: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3c7c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3c7c08:
    // 0x3c7c08: 0x9224081c  lbu         $a0, 0x81C($s1)
    ctx->pc = 0x3c7c08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2076)));
label_3c7c0c:
    // 0x3c7c0c: 0x9243005e  lbu         $v1, 0x5E($s2)
    ctx->pc = 0x3c7c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_3c7c10:
    // 0x3c7c10: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_3c7c14:
    if (ctx->pc == 0x3C7C14u) {
        ctx->pc = 0x3C7C14u;
            // 0x3c7c14: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x3C7C18u;
        goto label_3c7c18;
    }
    ctx->pc = 0x3C7C10u;
    {
        const bool branch_taken_0x3c7c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7c10) {
            ctx->pc = 0x3C7C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7C10u;
            // 0x3c7c14: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7C3Cu;
            goto label_3c7c3c;
        }
    }
    ctx->pc = 0x3C7C18u;
label_3c7c18:
    // 0x3c7c18: 0xa244005e  sb          $a0, 0x5E($s2)
    ctx->pc = 0x3c7c18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 94), (uint8_t)GPR_U32(ctx, 4));
label_3c7c1c:
    // 0x3c7c1c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3c7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_3c7c20:
    // 0x3c7c20: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x3c7c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7c24:
    // 0x3c7c24: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x3c7c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_3c7c28:
    // 0x3c7c28: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x3c7c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_3c7c2c:
    // 0x3c7c2c: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x3c7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7c30:
    // 0x3c7c30: 0xc073234  jal         func_1CC8D0
label_3c7c34:
    if (ctx->pc == 0x3C7C34u) {
        ctx->pc = 0x3C7C34u;
            // 0x3c7c34: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->pc = 0x3C7C38u;
        goto label_3c7c38;
    }
    ctx->pc = 0x3C7C30u;
    SET_GPR_U32(ctx, 31, 0x3C7C38u);
    ctx->pc = 0x3C7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7C30u;
            // 0x3c7c34: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7C38u; }
        if (ctx->pc != 0x3C7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7C38u; }
        if (ctx->pc != 0x3C7C38u) { return; }
    }
    ctx->pc = 0x3C7C38u;
label_3c7c38:
    // 0x3c7c38: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3c7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_3c7c3c:
    // 0x3c7c3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c7c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7c40:
    // 0x3c7c40: 0x9243005f  lbu         $v1, 0x5F($s2)
    ctx->pc = 0x3c7c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 95)));
label_3c7c44:
    // 0x3c7c44: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3c7c48:
    if (ctx->pc == 0x3C7C48u) {
        ctx->pc = 0x3C7C48u;
            // 0x3c7c48: 0xc6030018  lwc1        $f3, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3C7C4Cu;
        goto label_3c7c4c;
    }
    ctx->pc = 0x3C7C44u;
    {
        const bool branch_taken_0x3c7c44 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C7C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7C44u;
            // 0x3c7c48: 0xc6030018  lwc1        $f3, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c44) {
            ctx->pc = 0x3C7C58u;
            goto label_3c7c58;
        }
    }
    ctx->pc = 0x3C7C4Cu;
label_3c7c4c:
    // 0x3c7c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7c50:
    // 0x3c7c50: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7c54:
    if (ctx->pc == 0x3C7C54u) {
        ctx->pc = 0x3C7C54u;
            // 0x3c7c54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C7C58u;
        goto label_3c7c58;
    }
    ctx->pc = 0x3C7C50u;
    {
        const bool branch_taken_0x3c7c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7C50u;
            // 0x3c7c54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c50) {
            ctx->pc = 0x3C7C74u;
            goto label_3c7c74;
        }
    }
    ctx->pc = 0x3C7C58u;
label_3c7c58:
    // 0x3c7c58: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3c7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3c7c5c:
    // 0x3c7c5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c7c60:
    // 0x3c7c60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c7c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c7c64:
    // 0x3c7c64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c7c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7c68:
    // 0x3c7c68: 0x0  nop
    ctx->pc = 0x3c7c68u;
    // NOP
label_3c7c6c:
    // 0x3c7c6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c7c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c7c70:
    // 0x3c7c70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7c70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c7c74:
    // 0x3c7c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7c78:
    // 0x3c7c78: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c7c7c:
    // 0x3c7c7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c7c7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c7c80:
    // 0x3c7c80: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x3c7c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3c7c84:
    // 0x3c7c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c7c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7c88:
    // 0x3c7c88: 0x0  nop
    ctx->pc = 0x3c7c88u;
    // NOP
label_3c7c8c:
    // 0x3c7c8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c7c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7c90:
    // 0x3c7c90: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c7c94:
    if (ctx->pc == 0x3C7C94u) {
        ctx->pc = 0x3C7C94u;
            // 0x3c7c94: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C7C98u;
        goto label_3c7c98;
    }
    ctx->pc = 0x3C7C90u;
    {
        const bool branch_taken_0x3c7c90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7c90) {
            ctx->pc = 0x3C7C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7C90u;
            // 0x3c7c94: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7CA8u;
            goto label_3c7ca8;
        }
    }
    ctx->pc = 0x3C7C98u;
label_3c7c98:
    // 0x3c7c98: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7c98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7c9c:
    // 0x3c7c9c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c7c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c7ca0:
    // 0x3c7ca0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c7ca4:
    if (ctx->pc == 0x3C7CA4u) {
        ctx->pc = 0x3C7CA4u;
            // 0x3c7ca4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C7CA8u;
        goto label_3c7ca8;
    }
    ctx->pc = 0x3C7CA0u;
    {
        const bool branch_taken_0x3c7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7CA0u;
            // 0x3c7ca4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ca0) {
            ctx->pc = 0x3C7CC0u;
            goto label_3c7cc0;
        }
    }
    ctx->pc = 0x3C7CA8u;
label_3c7ca8:
    // 0x3c7ca8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c7cac:
    // 0x3c7cac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7cb0:
    // 0x3c7cb0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c7cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c7cb4:
    // 0x3c7cb4: 0x0  nop
    ctx->pc = 0x3c7cb4u;
    // NOP
label_3c7cb8:
    // 0x3c7cb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c7cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c7cbc:
    // 0x3c7cbc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c7cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c7cc0:
    // 0x3c7cc0: 0x10000015  b           . + 4 + (0x15 << 2)
label_3c7cc4:
    if (ctx->pc == 0x3C7CC4u) {
        ctx->pc = 0x3C7CC4u;
            // 0x3c7cc4: 0xa244005f  sb          $a0, 0x5F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3C7CC8u;
        goto label_3c7cc8;
    }
    ctx->pc = 0x3C7CC0u;
    {
        const bool branch_taken_0x3c7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7CC0u;
            // 0x3c7cc4: 0xa244005f  sb          $a0, 0x5F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7cc0) {
            ctx->pc = 0x3C7D18u;
            goto label_3c7d18;
        }
    }
    ctx->pc = 0x3C7CC8u;
label_3c7cc8:
    // 0x3c7cc8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c7cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c7ccc:
    // 0x3c7ccc: 0x320f809  jalr        $t9
label_3c7cd0:
    if (ctx->pc == 0x3C7CD0u) {
        ctx->pc = 0x3C7CD4u;
        goto label_3c7cd4;
    }
    ctx->pc = 0x3C7CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C7CD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C7CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C7CD4u; }
            if (ctx->pc != 0x3C7CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C7CD4u;
label_3c7cd4:
    // 0x3c7cd4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c7cd8:
    if (ctx->pc == 0x3C7CD8u) {
        ctx->pc = 0x3C7CDCu;
        goto label_3c7cdc;
    }
    ctx->pc = 0x3C7CD4u;
    {
        const bool branch_taken_0x3c7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7cd4) {
            ctx->pc = 0x3C7D18u;
            goto label_3c7d18;
        }
    }
    ctx->pc = 0x3C7CDCu;
label_3c7cdc:
    // 0x3c7cdc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c7ce0:
    // 0x3c7ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c7ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c7ce4:
    // 0x3c7ce4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3c7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3c7ce8:
    // 0x3c7ce8: 0xc057b7c  jal         func_15EDF0
label_3c7cec:
    if (ctx->pc == 0x3C7CECu) {
        ctx->pc = 0x3C7CECu;
            // 0x3c7cec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C7CF0u;
        goto label_3c7cf0;
    }
    ctx->pc = 0x3C7CE8u;
    SET_GPR_U32(ctx, 31, 0x3C7CF0u);
    ctx->pc = 0x3C7CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7CE8u;
            // 0x3c7cec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7CF0u; }
        if (ctx->pc != 0x3C7CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7CF0u; }
        if (ctx->pc != 0x3C7CF0u) { return; }
    }
    ctx->pc = 0x3C7CF0u;
label_3c7cf0:
    // 0x3c7cf0: 0x92430058  lbu         $v1, 0x58($s2)
    ctx->pc = 0x3c7cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_3c7cf4:
    // 0x3c7cf4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3c7cf8:
    if (ctx->pc == 0x3C7CF8u) {
        ctx->pc = 0x3C7CFCu;
        goto label_3c7cfc;
    }
    ctx->pc = 0x3C7CF4u;
    {
        const bool branch_taken_0x3c7cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7cf4) {
            ctx->pc = 0x3C7D18u;
            goto label_3c7d18;
        }
    }
    ctx->pc = 0x3C7CFCu;
label_3c7cfc:
    // 0x3c7cfc: 0xc040180  jal         func_100600
label_3c7d00:
    if (ctx->pc == 0x3C7D00u) {
        ctx->pc = 0x3C7D00u;
            // 0x3c7d00: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x3C7D04u;
        goto label_3c7d04;
    }
    ctx->pc = 0x3C7CFCu;
    SET_GPR_U32(ctx, 31, 0x3C7D04u);
    ctx->pc = 0x3C7D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7CFCu;
            // 0x3c7d00: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D04u; }
        if (ctx->pc != 0x3C7D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D04u; }
        if (ctx->pc != 0x3C7D04u) { return; }
    }
    ctx->pc = 0x3C7D04u;
label_3c7d04:
    // 0x3c7d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d08:
    // 0x3c7d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3c7d0c:
    if (ctx->pc == 0x3C7D0Cu) {
        ctx->pc = 0x3C7D10u;
        goto label_3c7d10;
    }
    ctx->pc = 0x3C7D08u;
    {
        const bool branch_taken_0x3c7d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7d08) {
            ctx->pc = 0x3C7D18u;
            goto label_3c7d18;
        }
    }
    ctx->pc = 0x3C7D10u;
label_3c7d10:
    // 0x3c7d10: 0xc0f1bdc  jal         func_3C6F70
label_3c7d14:
    if (ctx->pc == 0x3C7D14u) {
        ctx->pc = 0x3C7D18u;
        goto label_3c7d18;
    }
    ctx->pc = 0x3C7D10u;
    SET_GPR_U32(ctx, 31, 0x3C7D18u);
    ctx->pc = 0x3C6F70u;
    if (runtime->hasFunction(0x3C6F70u)) {
        auto targetFn = runtime->lookupFunction(0x3C6F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D18u; }
        if (ctx->pc != 0x3C7D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C6F70_0x3c6f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D18u; }
        if (ctx->pc != 0x3C7D18u) { return; }
    }
    ctx->pc = 0x3C7D18u;
label_3c7d18:
    // 0x3c7d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c7d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7d1c:
    // 0x3c7d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7d20:
    // 0x3c7d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c7d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7d24:
    // 0x3c7d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7d28:
    // 0x3c7d28: 0x3e00008  jr          $ra
label_3c7d2c:
    if (ctx->pc == 0x3C7D2Cu) {
        ctx->pc = 0x3C7D2Cu;
            // 0x3c7d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C7D30u;
        goto label_3c7d30;
    }
    ctx->pc = 0x3C7D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D28u;
            // 0x3c7d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C7D30u;
label_3c7d30:
    // 0x3c7d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c7d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c7d34:
    // 0x3c7d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c7d38:
    // 0x3c7d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c7d3c:
    // 0x3c7d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c7d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c7d40:
    // 0x3c7d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c7d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d44:
    // 0x3c7d44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3c7d48:
    if (ctx->pc == 0x3C7D48u) {
        ctx->pc = 0x3C7D48u;
            // 0x3c7d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D4Cu;
        goto label_3c7d4c;
    }
    ctx->pc = 0x3C7D44u;
    {
        const bool branch_taken_0x3c7d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D44u;
            // 0x3c7d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d44) {
            ctx->pc = 0x3C7D78u;
            goto label_3c7d78;
        }
    }
    ctx->pc = 0x3C7D4Cu;
label_3c7d4c:
    // 0x3c7d4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c7d50:
    // 0x3c7d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c7d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d54:
    // 0x3c7d54: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x3c7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
label_3c7d58:
    // 0x3c7d58: 0xc0ee744  jal         func_3B9D10
label_3c7d5c:
    if (ctx->pc == 0x3C7D5Cu) {
        ctx->pc = 0x3C7D5Cu;
            // 0x3c7d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C7D60u;
        goto label_3c7d60;
    }
    ctx->pc = 0x3C7D58u;
    SET_GPR_U32(ctx, 31, 0x3C7D60u);
    ctx->pc = 0x3C7D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D58u;
            // 0x3c7d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D60u; }
        if (ctx->pc != 0x3C7D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D60u; }
        if (ctx->pc != 0x3C7D60u) { return; }
    }
    ctx->pc = 0x3C7D60u;
label_3c7d60:
    // 0x3c7d60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c7d64:
    // 0x3c7d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c7d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c7d68:
    // 0x3c7d68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c7d6c:
    if (ctx->pc == 0x3C7D6Cu) {
        ctx->pc = 0x3C7D6Cu;
            // 0x3c7d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D70u;
        goto label_3c7d70;
    }
    ctx->pc = 0x3C7D68u;
    {
        const bool branch_taken_0x3c7d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c7d68) {
            ctx->pc = 0x3C7D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D68u;
            // 0x3c7d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7D7Cu;
            goto label_3c7d7c;
        }
    }
    ctx->pc = 0x3C7D70u;
label_3c7d70:
    // 0x3c7d70: 0xc0400a8  jal         func_1002A0
label_3c7d74:
    if (ctx->pc == 0x3C7D74u) {
        ctx->pc = 0x3C7D74u;
            // 0x3c7d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D78u;
        goto label_3c7d78;
    }
    ctx->pc = 0x3C7D70u;
    SET_GPR_U32(ctx, 31, 0x3C7D78u);
    ctx->pc = 0x3C7D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D70u;
            // 0x3c7d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D78u; }
        if (ctx->pc != 0x3C7D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7D78u; }
        if (ctx->pc != 0x3C7D78u) { return; }
    }
    ctx->pc = 0x3C7D78u;
label_3c7d78:
    // 0x3c7d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c7d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d7c:
    // 0x3c7d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c7d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7d80:
    // 0x3c7d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c7d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7d84:
    // 0x3c7d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7d88:
    // 0x3c7d88: 0x3e00008  jr          $ra
label_3c7d8c:
    if (ctx->pc == 0x3C7D8Cu) {
        ctx->pc = 0x3C7D8Cu;
            // 0x3c7d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C7D90u;
        goto label_fallthrough_0x3c7d88;
    }
    ctx->pc = 0x3C7D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7D88u;
            // 0x3c7d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c7d88:
    ctx->pc = 0x3C7D90u;
}
