#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00311E70
// Address: 0x311e70 - 0x312950
void sub_00311E70_0x311e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311E70_0x311e70");
#endif

    switch (ctx->pc) {
        case 0x311e70u: goto label_311e70;
        case 0x311e74u: goto label_311e74;
        case 0x311e78u: goto label_311e78;
        case 0x311e7cu: goto label_311e7c;
        case 0x311e80u: goto label_311e80;
        case 0x311e84u: goto label_311e84;
        case 0x311e88u: goto label_311e88;
        case 0x311e8cu: goto label_311e8c;
        case 0x311e90u: goto label_311e90;
        case 0x311e94u: goto label_311e94;
        case 0x311e98u: goto label_311e98;
        case 0x311e9cu: goto label_311e9c;
        case 0x311ea0u: goto label_311ea0;
        case 0x311ea4u: goto label_311ea4;
        case 0x311ea8u: goto label_311ea8;
        case 0x311eacu: goto label_311eac;
        case 0x311eb0u: goto label_311eb0;
        case 0x311eb4u: goto label_311eb4;
        case 0x311eb8u: goto label_311eb8;
        case 0x311ebcu: goto label_311ebc;
        case 0x311ec0u: goto label_311ec0;
        case 0x311ec4u: goto label_311ec4;
        case 0x311ec8u: goto label_311ec8;
        case 0x311eccu: goto label_311ecc;
        case 0x311ed0u: goto label_311ed0;
        case 0x311ed4u: goto label_311ed4;
        case 0x311ed8u: goto label_311ed8;
        case 0x311edcu: goto label_311edc;
        case 0x311ee0u: goto label_311ee0;
        case 0x311ee4u: goto label_311ee4;
        case 0x311ee8u: goto label_311ee8;
        case 0x311eecu: goto label_311eec;
        case 0x311ef0u: goto label_311ef0;
        case 0x311ef4u: goto label_311ef4;
        case 0x311ef8u: goto label_311ef8;
        case 0x311efcu: goto label_311efc;
        case 0x311f00u: goto label_311f00;
        case 0x311f04u: goto label_311f04;
        case 0x311f08u: goto label_311f08;
        case 0x311f0cu: goto label_311f0c;
        case 0x311f10u: goto label_311f10;
        case 0x311f14u: goto label_311f14;
        case 0x311f18u: goto label_311f18;
        case 0x311f1cu: goto label_311f1c;
        case 0x311f20u: goto label_311f20;
        case 0x311f24u: goto label_311f24;
        case 0x311f28u: goto label_311f28;
        case 0x311f2cu: goto label_311f2c;
        case 0x311f30u: goto label_311f30;
        case 0x311f34u: goto label_311f34;
        case 0x311f38u: goto label_311f38;
        case 0x311f3cu: goto label_311f3c;
        case 0x311f40u: goto label_311f40;
        case 0x311f44u: goto label_311f44;
        case 0x311f48u: goto label_311f48;
        case 0x311f4cu: goto label_311f4c;
        case 0x311f50u: goto label_311f50;
        case 0x311f54u: goto label_311f54;
        case 0x311f58u: goto label_311f58;
        case 0x311f5cu: goto label_311f5c;
        case 0x311f60u: goto label_311f60;
        case 0x311f64u: goto label_311f64;
        case 0x311f68u: goto label_311f68;
        case 0x311f6cu: goto label_311f6c;
        case 0x311f70u: goto label_311f70;
        case 0x311f74u: goto label_311f74;
        case 0x311f78u: goto label_311f78;
        case 0x311f7cu: goto label_311f7c;
        case 0x311f80u: goto label_311f80;
        case 0x311f84u: goto label_311f84;
        case 0x311f88u: goto label_311f88;
        case 0x311f8cu: goto label_311f8c;
        case 0x311f90u: goto label_311f90;
        case 0x311f94u: goto label_311f94;
        case 0x311f98u: goto label_311f98;
        case 0x311f9cu: goto label_311f9c;
        case 0x311fa0u: goto label_311fa0;
        case 0x311fa4u: goto label_311fa4;
        case 0x311fa8u: goto label_311fa8;
        case 0x311facu: goto label_311fac;
        case 0x311fb0u: goto label_311fb0;
        case 0x311fb4u: goto label_311fb4;
        case 0x311fb8u: goto label_311fb8;
        case 0x311fbcu: goto label_311fbc;
        case 0x311fc0u: goto label_311fc0;
        case 0x311fc4u: goto label_311fc4;
        case 0x311fc8u: goto label_311fc8;
        case 0x311fccu: goto label_311fcc;
        case 0x311fd0u: goto label_311fd0;
        case 0x311fd4u: goto label_311fd4;
        case 0x311fd8u: goto label_311fd8;
        case 0x311fdcu: goto label_311fdc;
        case 0x311fe0u: goto label_311fe0;
        case 0x311fe4u: goto label_311fe4;
        case 0x311fe8u: goto label_311fe8;
        case 0x311fecu: goto label_311fec;
        case 0x311ff0u: goto label_311ff0;
        case 0x311ff4u: goto label_311ff4;
        case 0x311ff8u: goto label_311ff8;
        case 0x311ffcu: goto label_311ffc;
        case 0x312000u: goto label_312000;
        case 0x312004u: goto label_312004;
        case 0x312008u: goto label_312008;
        case 0x31200cu: goto label_31200c;
        case 0x312010u: goto label_312010;
        case 0x312014u: goto label_312014;
        case 0x312018u: goto label_312018;
        case 0x31201cu: goto label_31201c;
        case 0x312020u: goto label_312020;
        case 0x312024u: goto label_312024;
        case 0x312028u: goto label_312028;
        case 0x31202cu: goto label_31202c;
        case 0x312030u: goto label_312030;
        case 0x312034u: goto label_312034;
        case 0x312038u: goto label_312038;
        case 0x31203cu: goto label_31203c;
        case 0x312040u: goto label_312040;
        case 0x312044u: goto label_312044;
        case 0x312048u: goto label_312048;
        case 0x31204cu: goto label_31204c;
        case 0x312050u: goto label_312050;
        case 0x312054u: goto label_312054;
        case 0x312058u: goto label_312058;
        case 0x31205cu: goto label_31205c;
        case 0x312060u: goto label_312060;
        case 0x312064u: goto label_312064;
        case 0x312068u: goto label_312068;
        case 0x31206cu: goto label_31206c;
        case 0x312070u: goto label_312070;
        case 0x312074u: goto label_312074;
        case 0x312078u: goto label_312078;
        case 0x31207cu: goto label_31207c;
        case 0x312080u: goto label_312080;
        case 0x312084u: goto label_312084;
        case 0x312088u: goto label_312088;
        case 0x31208cu: goto label_31208c;
        case 0x312090u: goto label_312090;
        case 0x312094u: goto label_312094;
        case 0x312098u: goto label_312098;
        case 0x31209cu: goto label_31209c;
        case 0x3120a0u: goto label_3120a0;
        case 0x3120a4u: goto label_3120a4;
        case 0x3120a8u: goto label_3120a8;
        case 0x3120acu: goto label_3120ac;
        case 0x3120b0u: goto label_3120b0;
        case 0x3120b4u: goto label_3120b4;
        case 0x3120b8u: goto label_3120b8;
        case 0x3120bcu: goto label_3120bc;
        case 0x3120c0u: goto label_3120c0;
        case 0x3120c4u: goto label_3120c4;
        case 0x3120c8u: goto label_3120c8;
        case 0x3120ccu: goto label_3120cc;
        case 0x3120d0u: goto label_3120d0;
        case 0x3120d4u: goto label_3120d4;
        case 0x3120d8u: goto label_3120d8;
        case 0x3120dcu: goto label_3120dc;
        case 0x3120e0u: goto label_3120e0;
        case 0x3120e4u: goto label_3120e4;
        case 0x3120e8u: goto label_3120e8;
        case 0x3120ecu: goto label_3120ec;
        case 0x3120f0u: goto label_3120f0;
        case 0x3120f4u: goto label_3120f4;
        case 0x3120f8u: goto label_3120f8;
        case 0x3120fcu: goto label_3120fc;
        case 0x312100u: goto label_312100;
        case 0x312104u: goto label_312104;
        case 0x312108u: goto label_312108;
        case 0x31210cu: goto label_31210c;
        case 0x312110u: goto label_312110;
        case 0x312114u: goto label_312114;
        case 0x312118u: goto label_312118;
        case 0x31211cu: goto label_31211c;
        case 0x312120u: goto label_312120;
        case 0x312124u: goto label_312124;
        case 0x312128u: goto label_312128;
        case 0x31212cu: goto label_31212c;
        case 0x312130u: goto label_312130;
        case 0x312134u: goto label_312134;
        case 0x312138u: goto label_312138;
        case 0x31213cu: goto label_31213c;
        case 0x312140u: goto label_312140;
        case 0x312144u: goto label_312144;
        case 0x312148u: goto label_312148;
        case 0x31214cu: goto label_31214c;
        case 0x312150u: goto label_312150;
        case 0x312154u: goto label_312154;
        case 0x312158u: goto label_312158;
        case 0x31215cu: goto label_31215c;
        case 0x312160u: goto label_312160;
        case 0x312164u: goto label_312164;
        case 0x312168u: goto label_312168;
        case 0x31216cu: goto label_31216c;
        case 0x312170u: goto label_312170;
        case 0x312174u: goto label_312174;
        case 0x312178u: goto label_312178;
        case 0x31217cu: goto label_31217c;
        case 0x312180u: goto label_312180;
        case 0x312184u: goto label_312184;
        case 0x312188u: goto label_312188;
        case 0x31218cu: goto label_31218c;
        case 0x312190u: goto label_312190;
        case 0x312194u: goto label_312194;
        case 0x312198u: goto label_312198;
        case 0x31219cu: goto label_31219c;
        case 0x3121a0u: goto label_3121a0;
        case 0x3121a4u: goto label_3121a4;
        case 0x3121a8u: goto label_3121a8;
        case 0x3121acu: goto label_3121ac;
        case 0x3121b0u: goto label_3121b0;
        case 0x3121b4u: goto label_3121b4;
        case 0x3121b8u: goto label_3121b8;
        case 0x3121bcu: goto label_3121bc;
        case 0x3121c0u: goto label_3121c0;
        case 0x3121c4u: goto label_3121c4;
        case 0x3121c8u: goto label_3121c8;
        case 0x3121ccu: goto label_3121cc;
        case 0x3121d0u: goto label_3121d0;
        case 0x3121d4u: goto label_3121d4;
        case 0x3121d8u: goto label_3121d8;
        case 0x3121dcu: goto label_3121dc;
        case 0x3121e0u: goto label_3121e0;
        case 0x3121e4u: goto label_3121e4;
        case 0x3121e8u: goto label_3121e8;
        case 0x3121ecu: goto label_3121ec;
        case 0x3121f0u: goto label_3121f0;
        case 0x3121f4u: goto label_3121f4;
        case 0x3121f8u: goto label_3121f8;
        case 0x3121fcu: goto label_3121fc;
        case 0x312200u: goto label_312200;
        case 0x312204u: goto label_312204;
        case 0x312208u: goto label_312208;
        case 0x31220cu: goto label_31220c;
        case 0x312210u: goto label_312210;
        case 0x312214u: goto label_312214;
        case 0x312218u: goto label_312218;
        case 0x31221cu: goto label_31221c;
        case 0x312220u: goto label_312220;
        case 0x312224u: goto label_312224;
        case 0x312228u: goto label_312228;
        case 0x31222cu: goto label_31222c;
        case 0x312230u: goto label_312230;
        case 0x312234u: goto label_312234;
        case 0x312238u: goto label_312238;
        case 0x31223cu: goto label_31223c;
        case 0x312240u: goto label_312240;
        case 0x312244u: goto label_312244;
        case 0x312248u: goto label_312248;
        case 0x31224cu: goto label_31224c;
        case 0x312250u: goto label_312250;
        case 0x312254u: goto label_312254;
        case 0x312258u: goto label_312258;
        case 0x31225cu: goto label_31225c;
        case 0x312260u: goto label_312260;
        case 0x312264u: goto label_312264;
        case 0x312268u: goto label_312268;
        case 0x31226cu: goto label_31226c;
        case 0x312270u: goto label_312270;
        case 0x312274u: goto label_312274;
        case 0x312278u: goto label_312278;
        case 0x31227cu: goto label_31227c;
        case 0x312280u: goto label_312280;
        case 0x312284u: goto label_312284;
        case 0x312288u: goto label_312288;
        case 0x31228cu: goto label_31228c;
        case 0x312290u: goto label_312290;
        case 0x312294u: goto label_312294;
        case 0x312298u: goto label_312298;
        case 0x31229cu: goto label_31229c;
        case 0x3122a0u: goto label_3122a0;
        case 0x3122a4u: goto label_3122a4;
        case 0x3122a8u: goto label_3122a8;
        case 0x3122acu: goto label_3122ac;
        case 0x3122b0u: goto label_3122b0;
        case 0x3122b4u: goto label_3122b4;
        case 0x3122b8u: goto label_3122b8;
        case 0x3122bcu: goto label_3122bc;
        case 0x3122c0u: goto label_3122c0;
        case 0x3122c4u: goto label_3122c4;
        case 0x3122c8u: goto label_3122c8;
        case 0x3122ccu: goto label_3122cc;
        case 0x3122d0u: goto label_3122d0;
        case 0x3122d4u: goto label_3122d4;
        case 0x3122d8u: goto label_3122d8;
        case 0x3122dcu: goto label_3122dc;
        case 0x3122e0u: goto label_3122e0;
        case 0x3122e4u: goto label_3122e4;
        case 0x3122e8u: goto label_3122e8;
        case 0x3122ecu: goto label_3122ec;
        case 0x3122f0u: goto label_3122f0;
        case 0x3122f4u: goto label_3122f4;
        case 0x3122f8u: goto label_3122f8;
        case 0x3122fcu: goto label_3122fc;
        case 0x312300u: goto label_312300;
        case 0x312304u: goto label_312304;
        case 0x312308u: goto label_312308;
        case 0x31230cu: goto label_31230c;
        case 0x312310u: goto label_312310;
        case 0x312314u: goto label_312314;
        case 0x312318u: goto label_312318;
        case 0x31231cu: goto label_31231c;
        case 0x312320u: goto label_312320;
        case 0x312324u: goto label_312324;
        case 0x312328u: goto label_312328;
        case 0x31232cu: goto label_31232c;
        case 0x312330u: goto label_312330;
        case 0x312334u: goto label_312334;
        case 0x312338u: goto label_312338;
        case 0x31233cu: goto label_31233c;
        case 0x312340u: goto label_312340;
        case 0x312344u: goto label_312344;
        case 0x312348u: goto label_312348;
        case 0x31234cu: goto label_31234c;
        case 0x312350u: goto label_312350;
        case 0x312354u: goto label_312354;
        case 0x312358u: goto label_312358;
        case 0x31235cu: goto label_31235c;
        case 0x312360u: goto label_312360;
        case 0x312364u: goto label_312364;
        case 0x312368u: goto label_312368;
        case 0x31236cu: goto label_31236c;
        case 0x312370u: goto label_312370;
        case 0x312374u: goto label_312374;
        case 0x312378u: goto label_312378;
        case 0x31237cu: goto label_31237c;
        case 0x312380u: goto label_312380;
        case 0x312384u: goto label_312384;
        case 0x312388u: goto label_312388;
        case 0x31238cu: goto label_31238c;
        case 0x312390u: goto label_312390;
        case 0x312394u: goto label_312394;
        case 0x312398u: goto label_312398;
        case 0x31239cu: goto label_31239c;
        case 0x3123a0u: goto label_3123a0;
        case 0x3123a4u: goto label_3123a4;
        case 0x3123a8u: goto label_3123a8;
        case 0x3123acu: goto label_3123ac;
        case 0x3123b0u: goto label_3123b0;
        case 0x3123b4u: goto label_3123b4;
        case 0x3123b8u: goto label_3123b8;
        case 0x3123bcu: goto label_3123bc;
        case 0x3123c0u: goto label_3123c0;
        case 0x3123c4u: goto label_3123c4;
        case 0x3123c8u: goto label_3123c8;
        case 0x3123ccu: goto label_3123cc;
        case 0x3123d0u: goto label_3123d0;
        case 0x3123d4u: goto label_3123d4;
        case 0x3123d8u: goto label_3123d8;
        case 0x3123dcu: goto label_3123dc;
        case 0x3123e0u: goto label_3123e0;
        case 0x3123e4u: goto label_3123e4;
        case 0x3123e8u: goto label_3123e8;
        case 0x3123ecu: goto label_3123ec;
        case 0x3123f0u: goto label_3123f0;
        case 0x3123f4u: goto label_3123f4;
        case 0x3123f8u: goto label_3123f8;
        case 0x3123fcu: goto label_3123fc;
        case 0x312400u: goto label_312400;
        case 0x312404u: goto label_312404;
        case 0x312408u: goto label_312408;
        case 0x31240cu: goto label_31240c;
        case 0x312410u: goto label_312410;
        case 0x312414u: goto label_312414;
        case 0x312418u: goto label_312418;
        case 0x31241cu: goto label_31241c;
        case 0x312420u: goto label_312420;
        case 0x312424u: goto label_312424;
        case 0x312428u: goto label_312428;
        case 0x31242cu: goto label_31242c;
        case 0x312430u: goto label_312430;
        case 0x312434u: goto label_312434;
        case 0x312438u: goto label_312438;
        case 0x31243cu: goto label_31243c;
        case 0x312440u: goto label_312440;
        case 0x312444u: goto label_312444;
        case 0x312448u: goto label_312448;
        case 0x31244cu: goto label_31244c;
        case 0x312450u: goto label_312450;
        case 0x312454u: goto label_312454;
        case 0x312458u: goto label_312458;
        case 0x31245cu: goto label_31245c;
        case 0x312460u: goto label_312460;
        case 0x312464u: goto label_312464;
        case 0x312468u: goto label_312468;
        case 0x31246cu: goto label_31246c;
        case 0x312470u: goto label_312470;
        case 0x312474u: goto label_312474;
        case 0x312478u: goto label_312478;
        case 0x31247cu: goto label_31247c;
        case 0x312480u: goto label_312480;
        case 0x312484u: goto label_312484;
        case 0x312488u: goto label_312488;
        case 0x31248cu: goto label_31248c;
        case 0x312490u: goto label_312490;
        case 0x312494u: goto label_312494;
        case 0x312498u: goto label_312498;
        case 0x31249cu: goto label_31249c;
        case 0x3124a0u: goto label_3124a0;
        case 0x3124a4u: goto label_3124a4;
        case 0x3124a8u: goto label_3124a8;
        case 0x3124acu: goto label_3124ac;
        case 0x3124b0u: goto label_3124b0;
        case 0x3124b4u: goto label_3124b4;
        case 0x3124b8u: goto label_3124b8;
        case 0x3124bcu: goto label_3124bc;
        case 0x3124c0u: goto label_3124c0;
        case 0x3124c4u: goto label_3124c4;
        case 0x3124c8u: goto label_3124c8;
        case 0x3124ccu: goto label_3124cc;
        case 0x3124d0u: goto label_3124d0;
        case 0x3124d4u: goto label_3124d4;
        case 0x3124d8u: goto label_3124d8;
        case 0x3124dcu: goto label_3124dc;
        case 0x3124e0u: goto label_3124e0;
        case 0x3124e4u: goto label_3124e4;
        case 0x3124e8u: goto label_3124e8;
        case 0x3124ecu: goto label_3124ec;
        case 0x3124f0u: goto label_3124f0;
        case 0x3124f4u: goto label_3124f4;
        case 0x3124f8u: goto label_3124f8;
        case 0x3124fcu: goto label_3124fc;
        case 0x312500u: goto label_312500;
        case 0x312504u: goto label_312504;
        case 0x312508u: goto label_312508;
        case 0x31250cu: goto label_31250c;
        case 0x312510u: goto label_312510;
        case 0x312514u: goto label_312514;
        case 0x312518u: goto label_312518;
        case 0x31251cu: goto label_31251c;
        case 0x312520u: goto label_312520;
        case 0x312524u: goto label_312524;
        case 0x312528u: goto label_312528;
        case 0x31252cu: goto label_31252c;
        case 0x312530u: goto label_312530;
        case 0x312534u: goto label_312534;
        case 0x312538u: goto label_312538;
        case 0x31253cu: goto label_31253c;
        case 0x312540u: goto label_312540;
        case 0x312544u: goto label_312544;
        case 0x312548u: goto label_312548;
        case 0x31254cu: goto label_31254c;
        case 0x312550u: goto label_312550;
        case 0x312554u: goto label_312554;
        case 0x312558u: goto label_312558;
        case 0x31255cu: goto label_31255c;
        case 0x312560u: goto label_312560;
        case 0x312564u: goto label_312564;
        case 0x312568u: goto label_312568;
        case 0x31256cu: goto label_31256c;
        case 0x312570u: goto label_312570;
        case 0x312574u: goto label_312574;
        case 0x312578u: goto label_312578;
        case 0x31257cu: goto label_31257c;
        case 0x312580u: goto label_312580;
        case 0x312584u: goto label_312584;
        case 0x312588u: goto label_312588;
        case 0x31258cu: goto label_31258c;
        case 0x312590u: goto label_312590;
        case 0x312594u: goto label_312594;
        case 0x312598u: goto label_312598;
        case 0x31259cu: goto label_31259c;
        case 0x3125a0u: goto label_3125a0;
        case 0x3125a4u: goto label_3125a4;
        case 0x3125a8u: goto label_3125a8;
        case 0x3125acu: goto label_3125ac;
        case 0x3125b0u: goto label_3125b0;
        case 0x3125b4u: goto label_3125b4;
        case 0x3125b8u: goto label_3125b8;
        case 0x3125bcu: goto label_3125bc;
        case 0x3125c0u: goto label_3125c0;
        case 0x3125c4u: goto label_3125c4;
        case 0x3125c8u: goto label_3125c8;
        case 0x3125ccu: goto label_3125cc;
        case 0x3125d0u: goto label_3125d0;
        case 0x3125d4u: goto label_3125d4;
        case 0x3125d8u: goto label_3125d8;
        case 0x3125dcu: goto label_3125dc;
        case 0x3125e0u: goto label_3125e0;
        case 0x3125e4u: goto label_3125e4;
        case 0x3125e8u: goto label_3125e8;
        case 0x3125ecu: goto label_3125ec;
        case 0x3125f0u: goto label_3125f0;
        case 0x3125f4u: goto label_3125f4;
        case 0x3125f8u: goto label_3125f8;
        case 0x3125fcu: goto label_3125fc;
        case 0x312600u: goto label_312600;
        case 0x312604u: goto label_312604;
        case 0x312608u: goto label_312608;
        case 0x31260cu: goto label_31260c;
        case 0x312610u: goto label_312610;
        case 0x312614u: goto label_312614;
        case 0x312618u: goto label_312618;
        case 0x31261cu: goto label_31261c;
        case 0x312620u: goto label_312620;
        case 0x312624u: goto label_312624;
        case 0x312628u: goto label_312628;
        case 0x31262cu: goto label_31262c;
        case 0x312630u: goto label_312630;
        case 0x312634u: goto label_312634;
        case 0x312638u: goto label_312638;
        case 0x31263cu: goto label_31263c;
        case 0x312640u: goto label_312640;
        case 0x312644u: goto label_312644;
        case 0x312648u: goto label_312648;
        case 0x31264cu: goto label_31264c;
        case 0x312650u: goto label_312650;
        case 0x312654u: goto label_312654;
        case 0x312658u: goto label_312658;
        case 0x31265cu: goto label_31265c;
        case 0x312660u: goto label_312660;
        case 0x312664u: goto label_312664;
        case 0x312668u: goto label_312668;
        case 0x31266cu: goto label_31266c;
        case 0x312670u: goto label_312670;
        case 0x312674u: goto label_312674;
        case 0x312678u: goto label_312678;
        case 0x31267cu: goto label_31267c;
        case 0x312680u: goto label_312680;
        case 0x312684u: goto label_312684;
        case 0x312688u: goto label_312688;
        case 0x31268cu: goto label_31268c;
        case 0x312690u: goto label_312690;
        case 0x312694u: goto label_312694;
        case 0x312698u: goto label_312698;
        case 0x31269cu: goto label_31269c;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126a4u: goto label_3126a4;
        case 0x3126a8u: goto label_3126a8;
        case 0x3126acu: goto label_3126ac;
        case 0x3126b0u: goto label_3126b0;
        case 0x3126b4u: goto label_3126b4;
        case 0x3126b8u: goto label_3126b8;
        case 0x3126bcu: goto label_3126bc;
        case 0x3126c0u: goto label_3126c0;
        case 0x3126c4u: goto label_3126c4;
        case 0x3126c8u: goto label_3126c8;
        case 0x3126ccu: goto label_3126cc;
        case 0x3126d0u: goto label_3126d0;
        case 0x3126d4u: goto label_3126d4;
        case 0x3126d8u: goto label_3126d8;
        case 0x3126dcu: goto label_3126dc;
        case 0x3126e0u: goto label_3126e0;
        case 0x3126e4u: goto label_3126e4;
        case 0x3126e8u: goto label_3126e8;
        case 0x3126ecu: goto label_3126ec;
        case 0x3126f0u: goto label_3126f0;
        case 0x3126f4u: goto label_3126f4;
        case 0x3126f8u: goto label_3126f8;
        case 0x3126fcu: goto label_3126fc;
        case 0x312700u: goto label_312700;
        case 0x312704u: goto label_312704;
        case 0x312708u: goto label_312708;
        case 0x31270cu: goto label_31270c;
        case 0x312710u: goto label_312710;
        case 0x312714u: goto label_312714;
        case 0x312718u: goto label_312718;
        case 0x31271cu: goto label_31271c;
        case 0x312720u: goto label_312720;
        case 0x312724u: goto label_312724;
        case 0x312728u: goto label_312728;
        case 0x31272cu: goto label_31272c;
        case 0x312730u: goto label_312730;
        case 0x312734u: goto label_312734;
        case 0x312738u: goto label_312738;
        case 0x31273cu: goto label_31273c;
        case 0x312740u: goto label_312740;
        case 0x312744u: goto label_312744;
        case 0x312748u: goto label_312748;
        case 0x31274cu: goto label_31274c;
        case 0x312750u: goto label_312750;
        case 0x312754u: goto label_312754;
        case 0x312758u: goto label_312758;
        case 0x31275cu: goto label_31275c;
        case 0x312760u: goto label_312760;
        case 0x312764u: goto label_312764;
        case 0x312768u: goto label_312768;
        case 0x31276cu: goto label_31276c;
        case 0x312770u: goto label_312770;
        case 0x312774u: goto label_312774;
        case 0x312778u: goto label_312778;
        case 0x31277cu: goto label_31277c;
        case 0x312780u: goto label_312780;
        case 0x312784u: goto label_312784;
        case 0x312788u: goto label_312788;
        case 0x31278cu: goto label_31278c;
        case 0x312790u: goto label_312790;
        case 0x312794u: goto label_312794;
        case 0x312798u: goto label_312798;
        case 0x31279cu: goto label_31279c;
        case 0x3127a0u: goto label_3127a0;
        case 0x3127a4u: goto label_3127a4;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127acu: goto label_3127ac;
        case 0x3127b0u: goto label_3127b0;
        case 0x3127b4u: goto label_3127b4;
        case 0x3127b8u: goto label_3127b8;
        case 0x3127bcu: goto label_3127bc;
        case 0x3127c0u: goto label_3127c0;
        case 0x3127c4u: goto label_3127c4;
        case 0x3127c8u: goto label_3127c8;
        case 0x3127ccu: goto label_3127cc;
        case 0x3127d0u: goto label_3127d0;
        case 0x3127d4u: goto label_3127d4;
        case 0x3127d8u: goto label_3127d8;
        case 0x3127dcu: goto label_3127dc;
        case 0x3127e0u: goto label_3127e0;
        case 0x3127e4u: goto label_3127e4;
        case 0x3127e8u: goto label_3127e8;
        case 0x3127ecu: goto label_3127ec;
        case 0x3127f0u: goto label_3127f0;
        case 0x3127f4u: goto label_3127f4;
        case 0x3127f8u: goto label_3127f8;
        case 0x3127fcu: goto label_3127fc;
        case 0x312800u: goto label_312800;
        case 0x312804u: goto label_312804;
        case 0x312808u: goto label_312808;
        case 0x31280cu: goto label_31280c;
        case 0x312810u: goto label_312810;
        case 0x312814u: goto label_312814;
        case 0x312818u: goto label_312818;
        case 0x31281cu: goto label_31281c;
        case 0x312820u: goto label_312820;
        case 0x312824u: goto label_312824;
        case 0x312828u: goto label_312828;
        case 0x31282cu: goto label_31282c;
        case 0x312830u: goto label_312830;
        case 0x312834u: goto label_312834;
        case 0x312838u: goto label_312838;
        case 0x31283cu: goto label_31283c;
        case 0x312840u: goto label_312840;
        case 0x312844u: goto label_312844;
        case 0x312848u: goto label_312848;
        case 0x31284cu: goto label_31284c;
        case 0x312850u: goto label_312850;
        case 0x312854u: goto label_312854;
        case 0x312858u: goto label_312858;
        case 0x31285cu: goto label_31285c;
        case 0x312860u: goto label_312860;
        case 0x312864u: goto label_312864;
        case 0x312868u: goto label_312868;
        case 0x31286cu: goto label_31286c;
        case 0x312870u: goto label_312870;
        case 0x312874u: goto label_312874;
        case 0x312878u: goto label_312878;
        case 0x31287cu: goto label_31287c;
        case 0x312880u: goto label_312880;
        case 0x312884u: goto label_312884;
        case 0x312888u: goto label_312888;
        case 0x31288cu: goto label_31288c;
        case 0x312890u: goto label_312890;
        case 0x312894u: goto label_312894;
        case 0x312898u: goto label_312898;
        case 0x31289cu: goto label_31289c;
        case 0x3128a0u: goto label_3128a0;
        case 0x3128a4u: goto label_3128a4;
        case 0x3128a8u: goto label_3128a8;
        case 0x3128acu: goto label_3128ac;
        case 0x3128b0u: goto label_3128b0;
        case 0x3128b4u: goto label_3128b4;
        case 0x3128b8u: goto label_3128b8;
        case 0x3128bcu: goto label_3128bc;
        case 0x3128c0u: goto label_3128c0;
        case 0x3128c4u: goto label_3128c4;
        case 0x3128c8u: goto label_3128c8;
        case 0x3128ccu: goto label_3128cc;
        case 0x3128d0u: goto label_3128d0;
        case 0x3128d4u: goto label_3128d4;
        case 0x3128d8u: goto label_3128d8;
        case 0x3128dcu: goto label_3128dc;
        case 0x3128e0u: goto label_3128e0;
        case 0x3128e4u: goto label_3128e4;
        case 0x3128e8u: goto label_3128e8;
        case 0x3128ecu: goto label_3128ec;
        case 0x3128f0u: goto label_3128f0;
        case 0x3128f4u: goto label_3128f4;
        case 0x3128f8u: goto label_3128f8;
        case 0x3128fcu: goto label_3128fc;
        case 0x312900u: goto label_312900;
        case 0x312904u: goto label_312904;
        case 0x312908u: goto label_312908;
        case 0x31290cu: goto label_31290c;
        case 0x312910u: goto label_312910;
        case 0x312914u: goto label_312914;
        case 0x312918u: goto label_312918;
        case 0x31291cu: goto label_31291c;
        case 0x312920u: goto label_312920;
        case 0x312924u: goto label_312924;
        case 0x312928u: goto label_312928;
        case 0x31292cu: goto label_31292c;
        case 0x312930u: goto label_312930;
        case 0x312934u: goto label_312934;
        case 0x312938u: goto label_312938;
        case 0x31293cu: goto label_31293c;
        case 0x312940u: goto label_312940;
        case 0x312944u: goto label_312944;
        case 0x312948u: goto label_312948;
        case 0x31294cu: goto label_31294c;
        default: break;
    }

    ctx->pc = 0x311e70u;

label_311e70:
    // 0x311e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_311e74:
    // 0x311e74: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x311e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_311e78:
    // 0x311e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311e7c:
    // 0x311e7c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x311e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_311e80:
    // 0x311e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_311e84:
    // 0x311e84: 0xc075a44  jal         func_1D6910
label_311e88:
    if (ctx->pc == 0x311E88u) {
        ctx->pc = 0x311E88u;
            // 0x311e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311E8Cu;
        goto label_311e8c;
    }
    ctx->pc = 0x311E84u;
    SET_GPR_U32(ctx, 31, 0x311E8Cu);
    ctx->pc = 0x311E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311E84u;
            // 0x311e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (runtime->hasFunction(0x1D6910u)) {
        auto targetFn = runtime->lookupFunction(0x1D6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E8Cu; }
        if (ctx->pc != 0x311E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6910_0x1d6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E8Cu; }
        if (ctx->pc != 0x311E8Cu) { return; }
    }
    ctx->pc = 0x311E8Cu;
label_311e8c:
    // 0x311e8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_311e90:
    // 0x311e90: 0x2403238e  addiu       $v1, $zero, 0x238E
    ctx->pc = 0x311e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9102));
label_311e94:
    // 0x311e94: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x311e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
label_311e98:
    // 0x311e98: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x311e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_311e9c:
    // 0x311e9c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x311e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_311ea0:
    // 0x311ea0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x311ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_311ea4:
    // 0x311ea4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x311ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_311ea8:
    // 0x311ea8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x311ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_311eac:
    // 0x311eac: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x311eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_311eb0:
    // 0x311eb0: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
label_311eb4:
    if (ctx->pc == 0x311EB4u) {
        ctx->pc = 0x311EB4u;
            // 0x311eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311EB8u;
        goto label_311eb8;
    }
    ctx->pc = 0x311EB0u;
    {
        const bool branch_taken_0x311eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x311eb0) {
            ctx->pc = 0x311EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311EB0u;
            // 0x311eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311F3Cu;
            goto label_311f3c;
        }
    }
    ctx->pc = 0x311EB8u;
label_311eb8:
    // 0x311eb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311ebc:
    // 0x311ebc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x311ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_311ec0:
    // 0x311ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311ec4:
    // 0x311ec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311ec8:
    // 0x311ec8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x311ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_311ecc:
    // 0x311ecc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x311eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_311ed0:
    // 0x311ed0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x311ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_311ed4:
    // 0x311ed4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311ed8:
    // 0x311ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311edc:
    // 0x311edc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x311edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_311ee0:
    // 0x311ee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x311ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_311ee4:
    // 0x311ee4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x311ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_311ee8:
    // 0x311ee8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311eec:
    // 0x311eec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x311eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311ef0:
    // 0x311ef0: 0xc0748d4  jal         func_1D2350
label_311ef4:
    if (ctx->pc == 0x311EF4u) {
        ctx->pc = 0x311EF4u;
            // 0x311ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311EF8u;
        goto label_311ef8;
    }
    ctx->pc = 0x311EF0u;
    SET_GPR_U32(ctx, 31, 0x311EF8u);
    ctx->pc = 0x311EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311EF0u;
            // 0x311ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2350u;
    if (runtime->hasFunction(0x1D2350u)) {
        auto targetFn = runtime->lookupFunction(0x1D2350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311EF8u; }
        if (ctx->pc != 0x311EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2350_0x1d2350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311EF8u; }
        if (ctx->pc != 0x311EF8u) { return; }
    }
    ctx->pc = 0x311EF8u;
label_311ef8:
    // 0x311ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311efc:
    // 0x311efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x311efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_311f00:
    // 0x311f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311f04:
    // 0x311f04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x311f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311f08:
    // 0x311f08: 0xc0748d4  jal         func_1D2350
label_311f0c:
    if (ctx->pc == 0x311F0Cu) {
        ctx->pc = 0x311F0Cu;
            // 0x311f0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x311F10u;
        goto label_311f10;
    }
    ctx->pc = 0x311F08u;
    SET_GPR_U32(ctx, 31, 0x311F10u);
    ctx->pc = 0x311F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311F08u;
            // 0x311f0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2350u;
    if (runtime->hasFunction(0x1D2350u)) {
        auto targetFn = runtime->lookupFunction(0x1D2350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F10u; }
        if (ctx->pc != 0x311F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2350_0x1d2350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F10u; }
        if (ctx->pc != 0x311F10u) { return; }
    }
    ctx->pc = 0x311F10u;
label_311f10:
    // 0x311f10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311f14:
    // 0x311f14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311f18:
    // 0x311f18: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x311f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_311f1c:
    // 0x311f1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x311f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_311f20:
    // 0x311f20: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x311f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_311f24:
    // 0x311f24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311f28:
    // 0x311f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311f2c:
    // 0x311f2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x311f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_311f30:
    // 0x311f30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x311f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_311f34:
    // 0x311f34: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x311f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_311f38:
    // 0x311f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x311f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311f3c:
    // 0x311f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311f40:
    // 0x311f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311f44:
    // 0x311f44: 0x3e00008  jr          $ra
label_311f48:
    if (ctx->pc == 0x311F48u) {
        ctx->pc = 0x311F48u;
            // 0x311f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x311F4Cu;
        goto label_311f4c;
    }
    ctx->pc = 0x311F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F44u;
            // 0x311f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311F4Cu;
label_311f4c:
    // 0x311f4c: 0x0  nop
    ctx->pc = 0x311f4cu;
    // NOP
label_311f50:
    // 0x311f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_311f54:
    // 0x311f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311f58:
    // 0x311f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_311f5c:
    // 0x311f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311f60:
    // 0x311f60: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_311f64:
    if (ctx->pc == 0x311F64u) {
        ctx->pc = 0x311F64u;
            // 0x311f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311F68u;
        goto label_311f68;
    }
    ctx->pc = 0x311F60u;
    {
        const bool branch_taken_0x311f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x311f60) {
            ctx->pc = 0x311F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311F60u;
            // 0x311f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311FA0u;
            goto label_311fa0;
        }
    }
    ctx->pc = 0x311F68u;
label_311f68:
    // 0x311f68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x311f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_311f6c:
    // 0x311f6c: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x311f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
label_311f70:
    // 0x311f70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_311f74:
    if (ctx->pc == 0x311F74u) {
        ctx->pc = 0x311F74u;
            // 0x311f74: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x311F78u;
        goto label_311f78;
    }
    ctx->pc = 0x311F70u;
    {
        const bool branch_taken_0x311f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F70u;
            // 0x311f74: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f70) {
            ctx->pc = 0x311F84u;
            goto label_311f84;
        }
    }
    ctx->pc = 0x311F78u;
label_311f78:
    // 0x311f78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x311f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_311f7c:
    // 0x311f7c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x311f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_311f80:
    // 0x311f80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x311f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_311f84:
    // 0x311f84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x311f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_311f88:
    // 0x311f88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x311f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_311f8c:
    // 0x311f8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_311f90:
    if (ctx->pc == 0x311F90u) {
        ctx->pc = 0x311F94u;
        goto label_311f94;
    }
    ctx->pc = 0x311F8Cu;
    {
        const bool branch_taken_0x311f8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311f8c) {
            ctx->pc = 0x311F9Cu;
            goto label_311f9c;
        }
    }
    ctx->pc = 0x311F94u;
label_311f94:
    // 0x311f94: 0xc0400a8  jal         func_1002A0
label_311f98:
    if (ctx->pc == 0x311F98u) {
        ctx->pc = 0x311F98u;
            // 0x311f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311F9Cu;
        goto label_311f9c;
    }
    ctx->pc = 0x311F94u;
    SET_GPR_U32(ctx, 31, 0x311F9Cu);
    ctx->pc = 0x311F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311F94u;
            // 0x311f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F9Cu; }
        if (ctx->pc != 0x311F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F9Cu; }
        if (ctx->pc != 0x311F9Cu) { return; }
    }
    ctx->pc = 0x311F9Cu;
label_311f9c:
    // 0x311f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x311f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311fa0:
    // 0x311fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311fa4:
    // 0x311fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311fa8:
    // 0x311fa8: 0x3e00008  jr          $ra
label_311fac:
    if (ctx->pc == 0x311FACu) {
        ctx->pc = 0x311FACu;
            // 0x311fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x311FB0u;
        goto label_311fb0;
    }
    ctx->pc = 0x311FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311FA8u;
            // 0x311fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311FB0u;
label_311fb0:
    // 0x311fb0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x311fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_311fb4:
    // 0x311fb4: 0x3e00008  jr          $ra
label_311fb8:
    if (ctx->pc == 0x311FB8u) {
        ctx->pc = 0x311FB8u;
            // 0x311fb8: 0xc440bc50  lwc1        $f0, -0x43B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x311FBCu;
        goto label_311fbc;
    }
    ctx->pc = 0x311FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311FB4u;
            // 0x311fb8: 0xc440bc50  lwc1        $f0, -0x43B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311FBCu;
label_311fbc:
    // 0x311fbc: 0x0  nop
    ctx->pc = 0x311fbcu;
    // NOP
label_311fc0:
    // 0x311fc0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x311fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_311fc4:
    // 0x311fc4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x311fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311fc8:
    // 0x311fc8: 0xc440bc50  lwc1        $f0, -0x43B0($v0)
    ctx->pc = 0x311fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311fcc:
    // 0x311fcc: 0x3e00008  jr          $ra
label_311fd0:
    if (ctx->pc == 0x311FD0u) {
        ctx->pc = 0x311FD0u;
            // 0x311fd0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x311FD4u;
        goto label_311fd4;
    }
    ctx->pc = 0x311FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311FCCu;
            // 0x311fd0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311FD4u;
label_311fd4:
    // 0x311fd4: 0x0  nop
    ctx->pc = 0x311fd4u;
    // NOP
label_311fd8:
    // 0x311fd8: 0x0  nop
    ctx->pc = 0x311fd8u;
    // NOP
label_311fdc:
    // 0x311fdc: 0x0  nop
    ctx->pc = 0x311fdcu;
    // NOP
label_311fe0:
    // 0x311fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_311fe4:
    // 0x311fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311fe8:
    // 0x311fe8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x311fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_311fec:
    // 0x311fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_311ff0:
    // 0x311ff0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x311ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_311ff4:
    // 0x311ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311ff8:
    // 0x311ff8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x311ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_311ffc:
    // 0x311ffc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x311ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_312000:
    // 0x312000: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312004:
    // 0x312004: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x312004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
label_312008:
    // 0x312008: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31200c:
    // 0x31200c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31200cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_312010:
    // 0x312010: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x312010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_312014:
    // 0x312014: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312018:
    // 0x312018: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x312018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_31201c:
    // 0x31201c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_312020:
    // 0x312020: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x312020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_312024:
    // 0x312024: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x312024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_312028:
    // 0x312028: 0xc075128  jal         func_1D44A0
label_31202c:
    if (ctx->pc == 0x31202Cu) {
        ctx->pc = 0x31202Cu;
            // 0x31202c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x312030u;
        goto label_312030;
    }
    ctx->pc = 0x312028u;
    SET_GPR_U32(ctx, 31, 0x312030u);
    ctx->pc = 0x31202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312028u;
            // 0x31202c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312030u; }
        if (ctx->pc != 0x312030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312030u; }
        if (ctx->pc != 0x312030u) { return; }
    }
    ctx->pc = 0x312030u;
label_312030:
    // 0x312030: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312034:
    // 0x312034: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312038:
    // 0x312038: 0x8c86f690  lw          $a2, -0x970($a0)
    ctx->pc = 0x312038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964880)));
label_31203c:
    // 0x31203c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x31203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_312040:
    // 0x312040: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x312040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_312044:
    // 0x312044: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312048:
    // 0x312048: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31204c:
    if (ctx->pc == 0x31204Cu) {
        ctx->pc = 0x312050u;
        goto label_312050;
    }
    ctx->pc = 0x312048u;
    {
        const bool branch_taken_0x312048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312048) {
            ctx->pc = 0x312058u;
            goto label_312058;
        }
    }
    ctx->pc = 0x312050u;
label_312050:
    // 0x312050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312054:
    // 0x312054: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x312054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_312058:
    // 0x312058: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31205c:
    // 0x31205c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x31205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_312060:
    // 0x312060: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x312060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_312064:
    // 0x312064: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312068:
    // 0x312068: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31206c:
    if (ctx->pc == 0x31206Cu) {
        ctx->pc = 0x31206Cu;
            // 0x31206c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x312070u;
        goto label_312070;
    }
    ctx->pc = 0x312068u;
    {
        const bool branch_taken_0x312068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312068u;
            // 0x31206c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312068) {
            ctx->pc = 0x312078u;
            goto label_312078;
        }
    }
    ctx->pc = 0x312070u;
label_312070:
    // 0x312070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312074:
    // 0x312074: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x312074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_312078:
    // 0x312078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31207c:
    // 0x31207c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_312080:
    // 0x312080: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x312080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_312084:
    // 0x312084: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312088:
    // 0x312088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31208c:
    if (ctx->pc == 0x31208Cu) {
        ctx->pc = 0x312090u;
        goto label_312090;
    }
    ctx->pc = 0x312088u;
    {
        const bool branch_taken_0x312088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312088) {
            ctx->pc = 0x312098u;
            goto label_312098;
        }
    }
    ctx->pc = 0x312090u;
label_312090:
    // 0x312090: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312094:
    // 0x312094: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x312094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_312098:
    // 0x312098: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31209c:
    // 0x31209c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3120a0:
    // 0x3120a0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x3120a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_3120a4:
    // 0x3120a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3120a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3120a8:
    // 0x3120a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3120ac:
    if (ctx->pc == 0x3120ACu) {
        ctx->pc = 0x3120B0u;
        goto label_3120b0;
    }
    ctx->pc = 0x3120A8u;
    {
        const bool branch_taken_0x3120a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3120a8) {
            ctx->pc = 0x3120B8u;
            goto label_3120b8;
        }
    }
    ctx->pc = 0x3120B0u;
label_3120b0:
    // 0x3120b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3120b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3120b4:
    // 0x3120b4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x3120b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_3120b8:
    // 0x3120b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3120b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3120bc:
    // 0x3120bc: 0x8c63f590  lw          $v1, -0xA70($v1)
    ctx->pc = 0x3120bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964624)));
label_3120c0:
    // 0x3120c0: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_3120c4:
    if (ctx->pc == 0x3120C4u) {
        ctx->pc = 0x3120C4u;
            // 0x3120c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3120C8u;
        goto label_3120c8;
    }
    ctx->pc = 0x3120C0u;
    {
        const bool branch_taken_0x3120c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3120c0) {
            ctx->pc = 0x3120C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3120C0u;
            // 0x3120c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31219Cu;
            goto label_31219c;
        }
    }
    ctx->pc = 0x3120C8u;
label_3120c8:
    // 0x3120c8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3120c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3120cc:
    // 0x3120cc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3120ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3120d0:
    // 0x3120d0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3120d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3120d4:
    // 0x3120d4: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x3120d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
label_3120d8:
    // 0x3120d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3120d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3120dc:
    // 0x3120dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3120dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3120e0:
    // 0x3120e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3120e4:
    // 0x3120e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3120e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3120e8:
    // 0x3120e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3120e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3120ec:
    // 0x3120ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3120f0:
    // 0x3120f0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3120f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3120f4:
    // 0x3120f4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3120f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3120f8:
    // 0x3120f8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3120f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3120fc:
    // 0x3120fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3120fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312100:
    // 0x312100: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x312100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_312104:
    // 0x312104: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x312104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_312108:
    // 0x312108: 0xc075128  jal         func_1D44A0
label_31210c:
    if (ctx->pc == 0x31210Cu) {
        ctx->pc = 0x31210Cu;
            // 0x31210c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x312110u;
        goto label_312110;
    }
    ctx->pc = 0x312108u;
    SET_GPR_U32(ctx, 31, 0x312110u);
    ctx->pc = 0x31210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312108u;
            // 0x31210c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312110u; }
        if (ctx->pc != 0x312110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312110u; }
        if (ctx->pc != 0x312110u) { return; }
    }
    ctx->pc = 0x312110u;
label_312110:
    // 0x312110: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312114:
    // 0x312114: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312118:
    // 0x312118: 0x8c86f590  lw          $a2, -0xA70($a0)
    ctx->pc = 0x312118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964624)));
label_31211c:
    // 0x31211c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x31211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_312120:
    // 0x312120: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x312120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_312124:
    // 0x312124: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312128:
    // 0x312128: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31212c:
    if (ctx->pc == 0x31212Cu) {
        ctx->pc = 0x312130u;
        goto label_312130;
    }
    ctx->pc = 0x312128u;
    {
        const bool branch_taken_0x312128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312128) {
            ctx->pc = 0x312138u;
            goto label_312138;
        }
    }
    ctx->pc = 0x312130u;
label_312130:
    // 0x312130: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312134:
    // 0x312134: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x312134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_312138:
    // 0x312138: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31213c:
    // 0x31213c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x31213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_312140:
    // 0x312140: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x312140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_312144:
    // 0x312144: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312148:
    // 0x312148: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31214c:
    if (ctx->pc == 0x31214Cu) {
        ctx->pc = 0x31214Cu;
            // 0x31214c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x312150u;
        goto label_312150;
    }
    ctx->pc = 0x312148u;
    {
        const bool branch_taken_0x312148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312148u;
            // 0x31214c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312148) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312150u;
label_312150:
    // 0x312150: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312154:
    // 0x312154: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x312154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_312158:
    // 0x312158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31215c:
    // 0x31215c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_312160:
    // 0x312160: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x312160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_312164:
    // 0x312164: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312168:
    // 0x312168: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31216c:
    if (ctx->pc == 0x31216Cu) {
        ctx->pc = 0x312170u;
        goto label_312170;
    }
    ctx->pc = 0x312168u;
    {
        const bool branch_taken_0x312168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312168) {
            ctx->pc = 0x312178u;
            goto label_312178;
        }
    }
    ctx->pc = 0x312170u;
label_312170:
    // 0x312170: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312174:
    // 0x312174: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x312174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_312178:
    // 0x312178: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31217c:
    // 0x31217c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_312180:
    // 0x312180: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x312180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_312184:
    // 0x312184: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312188:
    // 0x312188: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31218c:
    if (ctx->pc == 0x31218Cu) {
        ctx->pc = 0x312190u;
        goto label_312190;
    }
    ctx->pc = 0x312188u;
    {
        const bool branch_taken_0x312188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312188) {
            ctx->pc = 0x312198u;
            goto label_312198;
        }
    }
    ctx->pc = 0x312190u;
label_312190:
    // 0x312190: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312194:
    // 0x312194: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x312194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_312198:
    // 0x312198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31219c:
    // 0x31219c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31219cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3121a0:
    // 0x3121a0: 0x3e00008  jr          $ra
label_3121a4:
    if (ctx->pc == 0x3121A4u) {
        ctx->pc = 0x3121A4u;
            // 0x3121a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3121A8u;
        goto label_3121a8;
    }
    ctx->pc = 0x3121A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3121A0u;
            // 0x3121a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3121A8u;
label_3121a8:
    // 0x3121a8: 0x0  nop
    ctx->pc = 0x3121a8u;
    // NOP
label_3121ac:
    // 0x3121ac: 0x0  nop
    ctx->pc = 0x3121acu;
    // NOP
label_3121b0:
    // 0x3121b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3121b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3121b4:
    // 0x3121b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3121b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3121b8:
    // 0x3121b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3121b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3121bc:
    // 0x3121bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3121bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3121c0:
    // 0x3121c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3121c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3121c4:
    // 0x3121c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3121c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3121c8:
    // 0x3121c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3121c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3121cc:
    // 0x3121cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3121ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3121d0:
    // 0x3121d0: 0xc075740  jal         func_1D5D00
label_3121d4:
    if (ctx->pc == 0x3121D4u) {
        ctx->pc = 0x3121D4u;
            // 0x3121d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3121D8u;
        goto label_3121d8;
    }
    ctx->pc = 0x3121D0u;
    SET_GPR_U32(ctx, 31, 0x3121D8u);
    ctx->pc = 0x3121D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3121D0u;
            // 0x3121d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121D8u; }
        if (ctx->pc != 0x3121D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121D8u; }
        if (ctx->pc != 0x3121D8u) { return; }
    }
    ctx->pc = 0x3121D8u;
label_3121d8:
    // 0x3121d8: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3121d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3121dc:
    // 0x3121dc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3121dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3121e0:
    // 0x3121e0: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x3121e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_3121e4:
    // 0x3121e4: 0x54830061  bnel        $a0, $v1, . + 4 + (0x61 << 2)
label_3121e8:
    if (ctx->pc == 0x3121E8u) {
        ctx->pc = 0x3121E8u;
            // 0x3121e8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3121ECu;
        goto label_3121ec;
    }
    ctx->pc = 0x3121E4u;
    {
        const bool branch_taken_0x3121e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3121e4) {
            ctx->pc = 0x3121E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3121E4u;
            // 0x3121e8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31236Cu;
            goto label_31236c;
        }
    }
    ctx->pc = 0x3121ECu;
label_3121ec:
    // 0x3121ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3121ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3121f0:
    // 0x3121f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3121f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3121f4:
    // 0x3121f4: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x3121f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3121f8:
    // 0x3121f8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3121f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_3121fc:
    // 0x3121fc: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x3121fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_312200:
    // 0x312200: 0x2610f690  addiu       $s0, $s0, -0x970
    ctx->pc = 0x312200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964880));
label_312204:
    // 0x312204: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x312204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_312208:
    // 0x312208: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x312208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_31220c:
    // 0x31220c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x31220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_312210:
    // 0x312210: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x312210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_312214:
    // 0x312214: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x312214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_312218:
    // 0x312218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x312218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31221c:
    // 0x31221c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x31221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_312220:
    // 0x312220: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x312220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_312224:
    // 0x312224: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x312224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_312228:
    // 0x312228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x312228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31222c:
    // 0x31222c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_312230:
    // 0x312230: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x312230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_312234:
    // 0x312234: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x312234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_312238:
    // 0x312238: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31223c:
    if (ctx->pc == 0x31223Cu) {
        ctx->pc = 0x31223Cu;
            // 0x31223c: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x312240u;
        goto label_312240;
    }
    ctx->pc = 0x312238u;
    {
        const bool branch_taken_0x312238 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312238u;
            // 0x31223c: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312238) {
            ctx->pc = 0x31224Cu;
            goto label_31224c;
        }
    }
    ctx->pc = 0x312240u;
label_312240:
    // 0x312240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312244:
    // 0x312244: 0x10000008  b           . + 4 + (0x8 << 2)
label_312248:
    if (ctx->pc == 0x312248u) {
        ctx->pc = 0x312248u;
            // 0x312248: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31224Cu;
        goto label_31224c;
    }
    ctx->pc = 0x312244u;
    {
        const bool branch_taken_0x312244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312244u;
            // 0x312248: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312244) {
            ctx->pc = 0x312268u;
            goto label_312268;
        }
    }
    ctx->pc = 0x31224Cu;
label_31224c:
    // 0x31224c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x31224cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_312250:
    // 0x312250: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x312250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_312254:
    // 0x312254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_312258:
    // 0x312258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x312258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31225c:
    // 0x31225c: 0x0  nop
    ctx->pc = 0x31225cu;
    // NOP
label_312260:
    // 0x312260: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x312260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_312264:
    // 0x312264: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x312264u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_312268:
    // 0x312268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x312268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_31226c:
    // 0x31226c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x31226cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_312270:
    // 0x312270: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x312270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_312274:
    // 0x312274: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x312274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_312278:
    // 0x312278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x312278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31227c:
    // 0x31227c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31227cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_312280:
    // 0x312280: 0x0  nop
    ctx->pc = 0x312280u;
    // NOP
label_312284:
    // 0x312284: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x312284u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_312288:
    // 0x312288: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x312288u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_31228c:
    // 0x31228c: 0xc04f3f4  jal         func_13CFD0
label_312290:
    if (ctx->pc == 0x312290u) {
        ctx->pc = 0x312290u;
            // 0x312290: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x312294u;
        goto label_312294;
    }
    ctx->pc = 0x31228Cu;
    SET_GPR_U32(ctx, 31, 0x312294u);
    ctx->pc = 0x312290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31228Cu;
            // 0x312290: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312294u; }
        if (ctx->pc != 0x312294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312294u; }
        if (ctx->pc != 0x312294u) { return; }
    }
    ctx->pc = 0x312294u;
label_312294:
    // 0x312294: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x312294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_312298:
    // 0x312298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31229c:
    // 0x31229c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x31229cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3122a0:
    // 0x3122a0: 0x320f809  jalr        $t9
label_3122a4:
    if (ctx->pc == 0x3122A4u) {
        ctx->pc = 0x3122A4u;
            // 0x3122a4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x3122A8u;
        goto label_3122a8;
    }
    ctx->pc = 0x3122A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3122A8u);
        ctx->pc = 0x3122A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3122A0u;
            // 0x3122a4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3122A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3122A8u; }
            if (ctx->pc != 0x3122A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3122A8u;
label_3122a8:
    // 0x3122a8: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x3122a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_3122ac:
    // 0x3122ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3122acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3122b0:
    // 0x3122b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3122b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3122b4:
    // 0x3122b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3122b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3122b8:
    // 0x3122b8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3122b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3122bc:
    // 0x3122bc: 0xc04e4a4  jal         func_139290
label_3122c0:
    if (ctx->pc == 0x3122C0u) {
        ctx->pc = 0x3122C0u;
            // 0x3122c0: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->pc = 0x3122C4u;
        goto label_3122c4;
    }
    ctx->pc = 0x3122BCu;
    SET_GPR_U32(ctx, 31, 0x3122C4u);
    ctx->pc = 0x3122C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3122BCu;
            // 0x3122c0: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122C4u; }
        if (ctx->pc != 0x3122C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122C4u; }
        if (ctx->pc != 0x3122C4u) { return; }
    }
    ctx->pc = 0x3122C4u;
label_3122c4:
    // 0x3122c4: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x3122c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3122c8:
    // 0x3122c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3122c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3122cc:
    // 0x3122cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3122ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3122d0:
    // 0x3122d0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3122d4:
    // 0x3122d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3122d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3122d8:
    // 0x3122d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3122dc:
    // 0x3122dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3122e0:
    // 0x3122e0: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3122e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3122e4:
    // 0x3122e4: 0xc0517b0  jal         func_145EC0
label_3122e8:
    if (ctx->pc == 0x3122E8u) {
        ctx->pc = 0x3122E8u;
            // 0x3122e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3122ECu;
        goto label_3122ec;
    }
    ctx->pc = 0x3122E4u;
    SET_GPR_U32(ctx, 31, 0x3122ECu);
    ctx->pc = 0x3122E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3122E4u;
            // 0x3122e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122ECu; }
        if (ctx->pc != 0x3122ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122ECu; }
        if (ctx->pc != 0x3122ECu) { return; }
    }
    ctx->pc = 0x3122ECu;
label_3122ec:
    // 0x3122ec: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x3122ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_3122f0:
    // 0x3122f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3122f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3122f4:
    // 0x3122f4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3122f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3122f8:
    // 0x3122f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3122f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3122fc:
    // 0x3122fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3122fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_312300:
    // 0x312300: 0xc04cd60  jal         func_133580
label_312304:
    if (ctx->pc == 0x312304u) {
        ctx->pc = 0x312304u;
            // 0x312304: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x312308u;
        goto label_312308;
    }
    ctx->pc = 0x312300u;
    SET_GPR_U32(ctx, 31, 0x312308u);
    ctx->pc = 0x312304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312300u;
            // 0x312304: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312308u; }
        if (ctx->pc != 0x312308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312308u; }
        if (ctx->pc != 0x312308u) { return; }
    }
    ctx->pc = 0x312308u;
label_312308:
    // 0x312308: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x312308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_31230c:
    // 0x31230c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x31230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_312310:
    // 0x312310: 0xc04cd60  jal         func_133580
label_312314:
    if (ctx->pc == 0x312314u) {
        ctx->pc = 0x312314u;
            // 0x312314: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312318u;
        goto label_312318;
    }
    ctx->pc = 0x312310u;
    SET_GPR_U32(ctx, 31, 0x312318u);
    ctx->pc = 0x312314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312310u;
            // 0x312314: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312318u; }
        if (ctx->pc != 0x312318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312318u; }
        if (ctx->pc != 0x312318u) { return; }
    }
    ctx->pc = 0x312318u;
label_312318:
    // 0x312318: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x312318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_31231c:
    // 0x31231c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312320:
    // 0x312320: 0xc04cd60  jal         func_133580
label_312324:
    if (ctx->pc == 0x312324u) {
        ctx->pc = 0x312324u;
            // 0x312324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312328u;
        goto label_312328;
    }
    ctx->pc = 0x312320u;
    SET_GPR_U32(ctx, 31, 0x312328u);
    ctx->pc = 0x312324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312320u;
            // 0x312324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312328u; }
        if (ctx->pc != 0x312328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312328u; }
        if (ctx->pc != 0x312328u) { return; }
    }
    ctx->pc = 0x312328u;
label_312328:
    // 0x312328: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x312328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31232c:
    // 0x31232c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x31232cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_312330:
    // 0x312330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x312330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_312334:
    // 0x312334: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x312334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_312338:
    // 0x312338: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x312338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_31233c:
    // 0x31233c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x31233cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_312340:
    // 0x312340: 0xc04cfcc  jal         func_133F30
label_312344:
    if (ctx->pc == 0x312344u) {
        ctx->pc = 0x312344u;
            // 0x312344: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312348u;
        goto label_312348;
    }
    ctx->pc = 0x312340u;
    SET_GPR_U32(ctx, 31, 0x312348u);
    ctx->pc = 0x312344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312340u;
            // 0x312344: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312348u; }
        if (ctx->pc != 0x312348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312348u; }
        if (ctx->pc != 0x312348u) { return; }
    }
    ctx->pc = 0x312348u;
label_312348:
    // 0x312348: 0xc04e738  jal         func_139CE0
label_31234c:
    if (ctx->pc == 0x31234Cu) {
        ctx->pc = 0x31234Cu;
            // 0x31234c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x312350u;
        goto label_312350;
    }
    ctx->pc = 0x312348u;
    SET_GPR_U32(ctx, 31, 0x312350u);
    ctx->pc = 0x31234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312348u;
            // 0x31234c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312350u; }
        if (ctx->pc != 0x312350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312350u; }
        if (ctx->pc != 0x312350u) { return; }
    }
    ctx->pc = 0x312350u;
label_312350:
    // 0x312350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x312350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_312354:
    // 0x312354: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x312354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_312358:
    // 0x312358: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x312358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31235c:
    // 0x31235c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x31235cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_312360:
    // 0x312360: 0xc050044  jal         func_140110
label_312364:
    if (ctx->pc == 0x312364u) {
        ctx->pc = 0x312364u;
            // 0x312364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312368u;
        goto label_312368;
    }
    ctx->pc = 0x312360u;
    SET_GPR_U32(ctx, 31, 0x312368u);
    ctx->pc = 0x312364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312360u;
            // 0x312364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312368u; }
        if (ctx->pc != 0x312368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312368u; }
        if (ctx->pc != 0x312368u) { return; }
    }
    ctx->pc = 0x312368u;
label_312368:
    // 0x312368: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x312368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31236c:
    // 0x31236c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31236cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_312370:
    // 0x312370: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x312370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_312374:
    // 0x312374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x312374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_312378:
    // 0x312378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x312378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31237c:
    // 0x31237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312380:
    // 0x312380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_312384:
    // 0x312384: 0x3e00008  jr          $ra
label_312388:
    if (ctx->pc == 0x312388u) {
        ctx->pc = 0x312388u;
            // 0x312388: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x31238Cu;
        goto label_31238c;
    }
    ctx->pc = 0x312384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312384u;
            // 0x312388: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31238Cu;
label_31238c:
    // 0x31238c: 0x0  nop
    ctx->pc = 0x31238cu;
    // NOP
label_312390:
    // 0x312390: 0x3e00008  jr          $ra
label_312394:
    if (ctx->pc == 0x312394u) {
        ctx->pc = 0x312398u;
        goto label_312398;
    }
    ctx->pc = 0x312390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312398u;
label_312398:
    // 0x312398: 0x0  nop
    ctx->pc = 0x312398u;
    // NOP
label_31239c:
    // 0x31239c: 0x0  nop
    ctx->pc = 0x31239cu;
    // NOP
label_3123a0:
    // 0x3123a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3123a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3123a4:
    // 0x3123a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3123a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3123a8:
    // 0x3123a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3123a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3123ac:
    // 0x3123ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3123acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3123b0:
    // 0x3123b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3123b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3123b4:
    // 0x3123b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3123b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3123b8:
    // 0x3123b8: 0xc075830  jal         func_1D60C0
label_3123bc:
    if (ctx->pc == 0x3123BCu) {
        ctx->pc = 0x3123BCu;
            // 0x3123bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3123C0u;
        goto label_3123c0;
    }
    ctx->pc = 0x3123B8u;
    SET_GPR_U32(ctx, 31, 0x3123C0u);
    ctx->pc = 0x3123BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123B8u;
            // 0x3123bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123C0u; }
        if (ctx->pc != 0x3123C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123C0u; }
        if (ctx->pc != 0x3123C0u) { return; }
    }
    ctx->pc = 0x3123C0u;
label_3123c0:
    // 0x3123c0: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x3123c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3123c4:
    // 0x3123c4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3123c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3123c8:
    // 0x3123c8: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3123c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3123cc:
    // 0x3123cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3123ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3123d0:
    // 0x3123d0: 0x820511ad  lb          $a1, 0x11AD($s0)
    ctx->pc = 0x3123d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_3123d4:
    // 0x3123d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3123d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3123d8:
    // 0x3123d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3123d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3123dc:
    // 0x3123dc: 0x10430068  beq         $v0, $v1, . + 4 + (0x68 << 2)
label_3123e0:
    if (ctx->pc == 0x3123E0u) {
        ctx->pc = 0x3123E0u;
            // 0x3123e0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3123E4u;
        goto label_3123e4;
    }
    ctx->pc = 0x3123DCu;
    {
        const bool branch_taken_0x3123dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3123E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3123DCu;
            // 0x3123e0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123dc) {
            ctx->pc = 0x312580u;
            goto label_312580;
        }
    }
    ctx->pc = 0x3123E4u;
label_3123e4:
    // 0x3123e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3123e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3123e8:
    // 0x3123e8: 0x50430037  beql        $v0, $v1, . + 4 + (0x37 << 2)
label_3123ec:
    if (ctx->pc == 0x3123ECu) {
        ctx->pc = 0x3123ECu;
            // 0x3123ec: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3123F0u;
        goto label_3123f0;
    }
    ctx->pc = 0x3123E8u;
    {
        const bool branch_taken_0x3123e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3123e8) {
            ctx->pc = 0x3123ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3123E8u;
            // 0x3123ec: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3124C8u;
            goto label_3124c8;
        }
    }
    ctx->pc = 0x3123F0u;
label_3123f0:
    // 0x3123f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3123f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3123f4:
    // 0x3123f4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3123f8:
    if (ctx->pc == 0x3123F8u) {
        ctx->pc = 0x3123F8u;
            // 0x3123f8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3123FCu;
        goto label_3123fc;
    }
    ctx->pc = 0x3123F4u;
    {
        const bool branch_taken_0x3123f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3123f4) {
            ctx->pc = 0x3123F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3123F4u;
            // 0x3123f8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312404u;
            goto label_312404;
        }
    }
    ctx->pc = 0x3123FCu;
label_3123fc:
    // 0x3123fc: 0x10000065  b           . + 4 + (0x65 << 2)
label_312400:
    if (ctx->pc == 0x312400u) {
        ctx->pc = 0x312400u;
            // 0x312400: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x312404u;
        goto label_312404;
    }
    ctx->pc = 0x3123FCu;
    {
        const bool branch_taken_0x3123fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3123FCu;
            // 0x312400: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123fc) {
            ctx->pc = 0x312594u;
            goto label_312594;
        }
    }
    ctx->pc = 0x312404u;
label_312404:
    // 0x312404: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312404u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312408:
    // 0x312408: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_31240c:
    if (ctx->pc == 0x31240Cu) {
        ctx->pc = 0x31240Cu;
            // 0x31240c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312410u;
        goto label_312410;
    }
    ctx->pc = 0x312408u;
    {
        const bool branch_taken_0x312408 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x31240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312408u;
            // 0x31240c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312408) {
            ctx->pc = 0x312420u;
            goto label_312420;
        }
    }
    ctx->pc = 0x312410u;
label_312410:
    // 0x312410: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312414:
    // 0x312414: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312418:
    if (ctx->pc == 0x312418u) {
        ctx->pc = 0x31241Cu;
        goto label_31241c;
    }
    ctx->pc = 0x312414u;
    {
        const bool branch_taken_0x312414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312414) {
            ctx->pc = 0x312420u;
            goto label_312420;
        }
    }
    ctx->pc = 0x31241Cu;
label_31241c:
    // 0x31241c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312420:
    // 0x312420: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312424:
    if (ctx->pc == 0x312424u) {
        ctx->pc = 0x312428u;
        goto label_312428;
    }
    ctx->pc = 0x312420u;
    {
        const bool branch_taken_0x312420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312420) {
            ctx->pc = 0x31243Cu;
            goto label_31243c;
        }
    }
    ctx->pc = 0x312428u;
label_312428:
    // 0x312428: 0xc075eb4  jal         func_1D7AD0
label_31242c:
    if (ctx->pc == 0x31242Cu) {
        ctx->pc = 0x31242Cu;
            // 0x31242c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312430u;
        goto label_312430;
    }
    ctx->pc = 0x312428u;
    SET_GPR_U32(ctx, 31, 0x312430u);
    ctx->pc = 0x31242Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312428u;
            // 0x31242c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312430u; }
        if (ctx->pc != 0x312430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312430u; }
        if (ctx->pc != 0x312430u) { return; }
    }
    ctx->pc = 0x312430u;
label_312430:
    // 0x312430: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312434:
    if (ctx->pc == 0x312434u) {
        ctx->pc = 0x312438u;
        goto label_312438;
    }
    ctx->pc = 0x312430u;
    {
        const bool branch_taken_0x312430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312430) {
            ctx->pc = 0x31243Cu;
            goto label_31243c;
        }
    }
    ctx->pc = 0x312438u;
label_312438:
    // 0x312438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31243c:
    // 0x31243c: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_312440:
    if (ctx->pc == 0x312440u) {
        ctx->pc = 0x312440u;
            // 0x312440: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->pc = 0x312444u;
        goto label_312444;
    }
    ctx->pc = 0x31243Cu;
    {
        const bool branch_taken_0x31243c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31243c) {
            ctx->pc = 0x312440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31243Cu;
            // 0x312440: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3124ACu;
            goto label_3124ac;
        }
    }
    ctx->pc = 0x312444u;
label_312444:
    // 0x312444: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x312444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_312448:
    // 0x312448: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31244c:
    // 0x31244c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_312450:
    if (ctx->pc == 0x312450u) {
        ctx->pc = 0x312454u;
        goto label_312454;
    }
    ctx->pc = 0x31244Cu;
    {
        const bool branch_taken_0x31244c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31244c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x312454u;
label_312454:
    // 0x312454: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x312454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312458:
    // 0x312458: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312458u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31245c:
    // 0x31245c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312460:
    if (ctx->pc == 0x312460u) {
        ctx->pc = 0x312460u;
            // 0x312460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312464u;
        goto label_312464;
    }
    ctx->pc = 0x31245Cu;
    {
        const bool branch_taken_0x31245c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31245Cu;
            // 0x312460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31245c) {
            ctx->pc = 0x312474u;
            goto label_312474;
        }
    }
    ctx->pc = 0x312464u;
label_312464:
    // 0x312464: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312468:
    // 0x312468: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_31246c:
    if (ctx->pc == 0x31246Cu) {
        ctx->pc = 0x312470u;
        goto label_312470;
    }
    ctx->pc = 0x312468u;
    {
        const bool branch_taken_0x312468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312468) {
            ctx->pc = 0x312474u;
            goto label_312474;
        }
    }
    ctx->pc = 0x312470u;
label_312470:
    // 0x312470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312474:
    // 0x312474: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312478:
    if (ctx->pc == 0x312478u) {
        ctx->pc = 0x31247Cu;
        goto label_31247c;
    }
    ctx->pc = 0x312474u;
    {
        const bool branch_taken_0x312474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312474) {
            ctx->pc = 0x312490u;
            goto label_312490;
        }
    }
    ctx->pc = 0x31247Cu;
label_31247c:
    // 0x31247c: 0xc075eb4  jal         func_1D7AD0
label_312480:
    if (ctx->pc == 0x312480u) {
        ctx->pc = 0x312480u;
            // 0x312480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312484u;
        goto label_312484;
    }
    ctx->pc = 0x31247Cu;
    SET_GPR_U32(ctx, 31, 0x312484u);
    ctx->pc = 0x312480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31247Cu;
            // 0x312480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312484u; }
        if (ctx->pc != 0x312484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312484u; }
        if (ctx->pc != 0x312484u) { return; }
    }
    ctx->pc = 0x312484u;
label_312484:
    // 0x312484: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312488:
    if (ctx->pc == 0x312488u) {
        ctx->pc = 0x31248Cu;
        goto label_31248c;
    }
    ctx->pc = 0x312484u;
    {
        const bool branch_taken_0x312484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312484) {
            ctx->pc = 0x312490u;
            goto label_312490;
        }
    }
    ctx->pc = 0x31248Cu;
label_31248c:
    // 0x31248c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31248cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312490:
    // 0x312490: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_312494:
    if (ctx->pc == 0x312494u) {
        ctx->pc = 0x312498u;
        goto label_312498;
    }
    ctx->pc = 0x312490u;
    {
        const bool branch_taken_0x312490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312490) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x312498u;
label_312498:
    // 0x312498: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x312498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_31249c:
    // 0x31249c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3124a0:
    // 0x3124a0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3124a4:
    if (ctx->pc == 0x3124A4u) {
        ctx->pc = 0x3124A4u;
            // 0x3124a4: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x3124A8u;
        goto label_3124a8;
    }
    ctx->pc = 0x3124A0u;
    {
        const bool branch_taken_0x3124a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3124a0) {
            ctx->pc = 0x3124A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3124A0u;
            // 0x3124a4: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3124B8u;
            goto label_3124b8;
        }
    }
    ctx->pc = 0x3124A8u;
label_3124a8:
    // 0x3124a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x3124a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_3124ac:
    // 0x3124ac: 0xc073234  jal         func_1CC8D0
label_3124b0:
    if (ctx->pc == 0x3124B0u) {
        ctx->pc = 0x3124B0u;
            // 0x3124b0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3124B4u;
        goto label_3124b4;
    }
    ctx->pc = 0x3124ACu;
    SET_GPR_U32(ctx, 31, 0x3124B4u);
    ctx->pc = 0x3124B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3124ACu;
            // 0x3124b0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124B4u; }
        if (ctx->pc != 0x3124B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124B4u; }
        if (ctx->pc != 0x3124B4u) { return; }
    }
    ctx->pc = 0x3124B4u;
label_3124b4:
    // 0x3124b4: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3124b8:
    // 0x3124b8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3124b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3124bc:
    // 0x3124bc: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x3124bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_3124c0:
    // 0x3124c0: 0x10000033  b           . + 4 + (0x33 << 2)
label_3124c4:
    if (ctx->pc == 0x3124C4u) {
        ctx->pc = 0x3124C4u;
            // 0x3124c4: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3124C8u;
        goto label_3124c8;
    }
    ctx->pc = 0x3124C0u;
    {
        const bool branch_taken_0x3124c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3124C0u;
            // 0x3124c4: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124c0) {
            ctx->pc = 0x312590u;
            goto label_312590;
        }
    }
    ctx->pc = 0x3124C8u;
label_3124c8:
    // 0x3124c8: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3124c8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3124cc:
    // 0x3124cc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3124d0:
    if (ctx->pc == 0x3124D0u) {
        ctx->pc = 0x3124D0u;
            // 0x3124d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3124D4u;
        goto label_3124d4;
    }
    ctx->pc = 0x3124CCu;
    {
        const bool branch_taken_0x3124cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3124D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3124CCu;
            // 0x3124d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124cc) {
            ctx->pc = 0x3124E4u;
            goto label_3124e4;
        }
    }
    ctx->pc = 0x3124D4u;
label_3124d4:
    // 0x3124d4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3124d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3124d8:
    // 0x3124d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3124dc:
    if (ctx->pc == 0x3124DCu) {
        ctx->pc = 0x3124E0u;
        goto label_3124e0;
    }
    ctx->pc = 0x3124D8u;
    {
        const bool branch_taken_0x3124d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3124d8) {
            ctx->pc = 0x3124E4u;
            goto label_3124e4;
        }
    }
    ctx->pc = 0x3124E0u;
label_3124e0:
    // 0x3124e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3124e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3124e4:
    // 0x3124e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3124e8:
    if (ctx->pc == 0x3124E8u) {
        ctx->pc = 0x3124ECu;
        goto label_3124ec;
    }
    ctx->pc = 0x3124E4u;
    {
        const bool branch_taken_0x3124e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3124e4) {
            ctx->pc = 0x312500u;
            goto label_312500;
        }
    }
    ctx->pc = 0x3124ECu;
label_3124ec:
    // 0x3124ec: 0xc075eb4  jal         func_1D7AD0
label_3124f0:
    if (ctx->pc == 0x3124F0u) {
        ctx->pc = 0x3124F0u;
            // 0x3124f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3124F4u;
        goto label_3124f4;
    }
    ctx->pc = 0x3124ECu;
    SET_GPR_U32(ctx, 31, 0x3124F4u);
    ctx->pc = 0x3124F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3124ECu;
            // 0x3124f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124F4u; }
        if (ctx->pc != 0x3124F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124F4u; }
        if (ctx->pc != 0x3124F4u) { return; }
    }
    ctx->pc = 0x3124F4u;
label_3124f4:
    // 0x3124f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3124f8:
    if (ctx->pc == 0x3124F8u) {
        ctx->pc = 0x3124FCu;
        goto label_3124fc;
    }
    ctx->pc = 0x3124F4u;
    {
        const bool branch_taken_0x3124f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3124f4) {
            ctx->pc = 0x312500u;
            goto label_312500;
        }
    }
    ctx->pc = 0x3124FCu;
label_3124fc:
    // 0x3124fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3124fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312500:
    // 0x312500: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_312504:
    if (ctx->pc == 0x312504u) {
        ctx->pc = 0x312504u;
            // 0x312504: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->pc = 0x312508u;
        goto label_312508;
    }
    ctx->pc = 0x312500u;
    {
        const bool branch_taken_0x312500 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312500) {
            ctx->pc = 0x312504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312500u;
            // 0x312504: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312570u;
            goto label_312570;
        }
    }
    ctx->pc = 0x312508u;
label_312508:
    // 0x312508: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x312508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_31250c:
    // 0x31250c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312510:
    // 0x312510: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_312514:
    if (ctx->pc == 0x312514u) {
        ctx->pc = 0x312518u;
        goto label_312518;
    }
    ctx->pc = 0x312510u;
    {
        const bool branch_taken_0x312510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x312510) {
            ctx->pc = 0x31256Cu;
            goto label_31256c;
        }
    }
    ctx->pc = 0x312518u;
label_312518:
    // 0x312518: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x312518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_31251c:
    // 0x31251c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x31251cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312520:
    // 0x312520: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312524:
    if (ctx->pc == 0x312524u) {
        ctx->pc = 0x312524u;
            // 0x312524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312528u;
        goto label_312528;
    }
    ctx->pc = 0x312520u;
    {
        const bool branch_taken_0x312520 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312520u;
            // 0x312524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312520) {
            ctx->pc = 0x312538u;
            goto label_312538;
        }
    }
    ctx->pc = 0x312528u;
label_312528:
    // 0x312528: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_31252c:
    // 0x31252c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312530:
    if (ctx->pc == 0x312530u) {
        ctx->pc = 0x312534u;
        goto label_312534;
    }
    ctx->pc = 0x31252Cu;
    {
        const bool branch_taken_0x31252c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31252c) {
            ctx->pc = 0x312538u;
            goto label_312538;
        }
    }
    ctx->pc = 0x312534u;
label_312534:
    // 0x312534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312538:
    // 0x312538: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_31253c:
    if (ctx->pc == 0x31253Cu) {
        ctx->pc = 0x312540u;
        goto label_312540;
    }
    ctx->pc = 0x312538u;
    {
        const bool branch_taken_0x312538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312538) {
            ctx->pc = 0x312554u;
            goto label_312554;
        }
    }
    ctx->pc = 0x312540u;
label_312540:
    // 0x312540: 0xc075eb4  jal         func_1D7AD0
label_312544:
    if (ctx->pc == 0x312544u) {
        ctx->pc = 0x312544u;
            // 0x312544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312548u;
        goto label_312548;
    }
    ctx->pc = 0x312540u;
    SET_GPR_U32(ctx, 31, 0x312548u);
    ctx->pc = 0x312544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312540u;
            // 0x312544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312548u; }
        if (ctx->pc != 0x312548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312548u; }
        if (ctx->pc != 0x312548u) { return; }
    }
    ctx->pc = 0x312548u;
label_312548:
    // 0x312548: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_31254c:
    if (ctx->pc == 0x31254Cu) {
        ctx->pc = 0x312550u;
        goto label_312550;
    }
    ctx->pc = 0x312548u;
    {
        const bool branch_taken_0x312548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312548) {
            ctx->pc = 0x312554u;
            goto label_312554;
        }
    }
    ctx->pc = 0x312550u;
label_312550:
    // 0x312550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312554:
    // 0x312554: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_312558:
    if (ctx->pc == 0x312558u) {
        ctx->pc = 0x31255Cu;
        goto label_31255c;
    }
    ctx->pc = 0x312554u;
    {
        const bool branch_taken_0x312554 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312554) {
            ctx->pc = 0x31256Cu;
            goto label_31256c;
        }
    }
    ctx->pc = 0x31255Cu;
label_31255c:
    // 0x31255c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x31255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312560:
    // 0x312560: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312564:
    // 0x312564: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_312568:
    if (ctx->pc == 0x312568u) {
        ctx->pc = 0x31256Cu;
        goto label_31256c;
    }
    ctx->pc = 0x312564u;
    {
        const bool branch_taken_0x312564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312564) {
            ctx->pc = 0x312590u;
            goto label_312590;
        }
    }
    ctx->pc = 0x31256Cu;
label_31256c:
    // 0x31256c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x31256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_312570:
    // 0x312570: 0xc073234  jal         func_1CC8D0
label_312574:
    if (ctx->pc == 0x312574u) {
        ctx->pc = 0x312574u;
            // 0x312574: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x312578u;
        goto label_312578;
    }
    ctx->pc = 0x312570u;
    SET_GPR_U32(ctx, 31, 0x312578u);
    ctx->pc = 0x312574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312570u;
            // 0x312574: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312578u; }
        if (ctx->pc != 0x312578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312578u; }
        if (ctx->pc != 0x312578u) { return; }
    }
    ctx->pc = 0x312578u;
label_312578:
    // 0x312578: 0x10000005  b           . + 4 + (0x5 << 2)
label_31257c:
    if (ctx->pc == 0x31257Cu) {
        ctx->pc = 0x312580u;
        goto label_312580;
    }
    ctx->pc = 0x312578u;
    {
        const bool branch_taken_0x312578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312578) {
            ctx->pc = 0x312590u;
            goto label_312590;
        }
    }
    ctx->pc = 0x312580u;
label_312580:
    // 0x312580: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x312580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_312584:
    // 0x312584: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x312584u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_312588:
    // 0x312588: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x312588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_31258c:
    // 0x31258c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x31258cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_312590:
    // 0x312590: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x312590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_312594:
    // 0x312594: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x312594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_312598:
    // 0x312598: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_31259c:
    if (ctx->pc == 0x31259Cu) {
        ctx->pc = 0x31259Cu;
            // 0x31259c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x3125A0u;
        goto label_3125a0;
    }
    ctx->pc = 0x312598u;
    {
        const bool branch_taken_0x312598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312598) {
            ctx->pc = 0x31259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312598u;
            // 0x31259c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3125BCu;
            goto label_3125bc;
        }
    }
    ctx->pc = 0x3125A0u;
label_3125a0:
    // 0x3125a0: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x3125a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3125a4:
    // 0x3125a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3125a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3125a8:
    // 0x3125a8: 0x0  nop
    ctx->pc = 0x3125a8u;
    // NOP
label_3125ac:
    // 0x3125ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3125acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3125b0:
    // 0x3125b0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3125b4:
    if (ctx->pc == 0x3125B4u) {
        ctx->pc = 0x3125B4u;
            // 0x3125b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3125B8u;
        goto label_3125b8;
    }
    ctx->pc = 0x3125B0u;
    {
        const bool branch_taken_0x3125b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3125b0) {
            ctx->pc = 0x3125B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3125B0u;
            // 0x3125b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3125ECu;
            goto label_3125ec;
        }
    }
    ctx->pc = 0x3125B8u;
label_3125b8:
    // 0x3125b8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3125b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3125bc:
    // 0x3125bc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3125c0:
    if (ctx->pc == 0x3125C0u) {
        ctx->pc = 0x3125C0u;
            // 0x3125c0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x3125C4u;
        goto label_3125c4;
    }
    ctx->pc = 0x3125BCu;
    {
        const bool branch_taken_0x3125bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3125bc) {
            ctx->pc = 0x3125C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3125BCu;
            // 0x3125c0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3125D8u;
            goto label_3125d8;
        }
    }
    ctx->pc = 0x3125C4u;
label_3125c4:
    // 0x3125c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3125c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3125c8:
    // 0x3125c8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3125c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3125cc:
    // 0x3125cc: 0xc057b7c  jal         func_15EDF0
label_3125d0:
    if (ctx->pc == 0x3125D0u) {
        ctx->pc = 0x3125D0u;
            // 0x3125d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3125D4u;
        goto label_3125d4;
    }
    ctx->pc = 0x3125CCu;
    SET_GPR_U32(ctx, 31, 0x3125D4u);
    ctx->pc = 0x3125D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3125CCu;
            // 0x3125d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3125D4u; }
        if (ctx->pc != 0x3125D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3125D4u; }
        if (ctx->pc != 0x3125D4u) { return; }
    }
    ctx->pc = 0x3125D4u;
label_3125d4:
    // 0x3125d4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3125d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3125d8:
    // 0x3125d8: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x3125d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3125dc:
    // 0x3125dc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3125dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3125e0:
    // 0x3125e0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3125e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3125e4:
    // 0x3125e4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3125e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3125e8:
    // 0x3125e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3125e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3125ec:
    // 0x3125ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3125ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3125f0:
    // 0x3125f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3125f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3125f4:
    // 0x3125f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3125f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3125f8:
    // 0x3125f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3125f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3125fc:
    // 0x3125fc: 0x3e00008  jr          $ra
label_312600:
    if (ctx->pc == 0x312600u) {
        ctx->pc = 0x312600u;
            // 0x312600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x312604u;
        goto label_312604;
    }
    ctx->pc = 0x3125FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3125FCu;
            // 0x312600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312604u;
label_312604:
    // 0x312604: 0x0  nop
    ctx->pc = 0x312604u;
    // NOP
label_312608:
    // 0x312608: 0x0  nop
    ctx->pc = 0x312608u;
    // NOP
label_31260c:
    // 0x31260c: 0x0  nop
    ctx->pc = 0x31260cu;
    // NOP
label_312610:
    // 0x312610: 0x3e00008  jr          $ra
label_312614:
    if (ctx->pc == 0x312614u) {
        ctx->pc = 0x312618u;
        goto label_312618;
    }
    ctx->pc = 0x312610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312618u;
label_312618:
    // 0x312618: 0x0  nop
    ctx->pc = 0x312618u;
    // NOP
label_31261c:
    // 0x31261c: 0x0  nop
    ctx->pc = 0x31261cu;
    // NOP
label_312620:
    // 0x312620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_312624:
    // 0x312624: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x312624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_312628:
    // 0x312628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x312628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31262c:
    // 0x31262c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312630:
    // 0x312630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_312634:
    // 0x312634: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x312634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_312638:
    // 0x312638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31263c:
    // 0x31263c: 0xc12ca3c  jal         func_4B28F0
label_312640:
    if (ctx->pc == 0x312640u) {
        ctx->pc = 0x312640u;
            // 0x312640: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x312644u;
        goto label_312644;
    }
    ctx->pc = 0x31263Cu;
    SET_GPR_U32(ctx, 31, 0x312644u);
    ctx->pc = 0x312640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31263Cu;
            // 0x312640: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312644u; }
        if (ctx->pc != 0x312644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312644u; }
        if (ctx->pc != 0x312644u) { return; }
    }
    ctx->pc = 0x312644u;
label_312644:
    // 0x312644: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x312644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_312648:
    // 0x312648: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_31264c:
    if (ctx->pc == 0x31264Cu) {
        ctx->pc = 0x31264Cu;
            // 0x31264c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x312650u;
        goto label_312650;
    }
    ctx->pc = 0x312648u;
    {
        const bool branch_taken_0x312648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312648) {
            ctx->pc = 0x31264Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312648u;
            // 0x31264c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31269Cu;
            goto label_31269c;
        }
    }
    ctx->pc = 0x312650u;
label_312650:
    // 0x312650: 0xc040180  jal         func_100600
label_312654:
    if (ctx->pc == 0x312654u) {
        ctx->pc = 0x312654u;
            // 0x312654: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x312658u;
        goto label_312658;
    }
    ctx->pc = 0x312650u;
    SET_GPR_U32(ctx, 31, 0x312658u);
    ctx->pc = 0x312654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312650u;
            // 0x312654: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312658u; }
        if (ctx->pc != 0x312658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312658u; }
        if (ctx->pc != 0x312658u) { return; }
    }
    ctx->pc = 0x312658u;
label_312658:
    // 0x312658: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31265c:
    if (ctx->pc == 0x31265Cu) {
        ctx->pc = 0x31265Cu;
            // 0x31265c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312660u;
        goto label_312660;
    }
    ctx->pc = 0x312658u;
    {
        const bool branch_taken_0x312658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312658u;
            // 0x31265c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312658) {
            ctx->pc = 0x312694u;
            goto label_312694;
        }
    }
    ctx->pc = 0x312660u;
label_312660:
    // 0x312660: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_312664:
    // 0x312664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312668:
    // 0x312668: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x312668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_31266c:
    // 0x31266c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312670:
    // 0x312670: 0xc10ca68  jal         func_4329A0
label_312674:
    if (ctx->pc == 0x312674u) {
        ctx->pc = 0x312674u;
            // 0x312674: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312678u;
        goto label_312678;
    }
    ctx->pc = 0x312670u;
    SET_GPR_U32(ctx, 31, 0x312678u);
    ctx->pc = 0x312674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312670u;
            // 0x312674: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312678u; }
        if (ctx->pc != 0x312678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312678u; }
        if (ctx->pc != 0x312678u) { return; }
    }
    ctx->pc = 0x312678u;
label_312678:
    // 0x312678: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x312678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_31267c:
    // 0x31267c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x31267cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_312680:
    // 0x312680: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x312680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_312684:
    // 0x312684: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x312684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_312688:
    // 0x312688: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x312688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_31268c:
    // 0x31268c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31268cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_312690:
    // 0x312690: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x312690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_312694:
    // 0x312694: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x312694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_312698:
    // 0x312698: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x312698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31269c:
    // 0x31269c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31269cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3126a0:
    // 0x3126a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3126a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3126a4:
    // 0x3126a4: 0x3e00008  jr          $ra
label_3126a8:
    if (ctx->pc == 0x3126A8u) {
        ctx->pc = 0x3126A8u;
            // 0x3126a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3126ACu;
        goto label_3126ac;
    }
    ctx->pc = 0x3126A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3126A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3126A4u;
            // 0x3126a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3126ACu;
label_3126ac:
    // 0x3126ac: 0x0  nop
    ctx->pc = 0x3126acu;
    // NOP
label_3126b0:
    // 0x3126b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3126b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3126b4:
    // 0x3126b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3126b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3126b8:
    // 0x3126b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3126b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3126bc:
    // 0x3126bc: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x3126bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_3126c0:
    // 0x3126c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3126c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3126c4:
    // 0x3126c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3126c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3126c8:
    // 0x3126c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3126c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3126cc:
    // 0x3126cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3126ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3126d0:
    // 0x3126d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3126d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3126d4:
    // 0x3126d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3126d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3126d8:
    // 0x3126d8: 0xc075728  jal         func_1D5CA0
label_3126dc:
    if (ctx->pc == 0x3126DCu) {
        ctx->pc = 0x3126DCu;
            // 0x3126dc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3126E0u;
        goto label_3126e0;
    }
    ctx->pc = 0x3126D8u;
    SET_GPR_U32(ctx, 31, 0x3126E0u);
    ctx->pc = 0x3126DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3126D8u;
            // 0x3126dc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126E0u; }
        if (ctx->pc != 0x3126E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126E0u; }
        if (ctx->pc != 0x3126E0u) { return; }
    }
    ctx->pc = 0x3126E0u;
label_3126e0:
    // 0x3126e0: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
label_3126e4:
    if (ctx->pc == 0x3126E4u) {
        ctx->pc = 0x3126E4u;
            // 0x3126e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3126E8u;
        goto label_3126e8;
    }
    ctx->pc = 0x3126E0u;
    {
        const bool branch_taken_0x3126e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3126e0) {
            ctx->pc = 0x3126E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3126E0u;
            // 0x3126e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31292Cu;
            goto label_31292c;
        }
    }
    ctx->pc = 0x3126E8u;
label_3126e8:
    // 0x3126e8: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3126e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3126ec:
    // 0x3126ec: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x3126ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3126f0:
    // 0x3126f0: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3126f4:
    // 0x3126f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3126f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3126f8:
    // 0x3126f8: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x3126f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3126fc:
    // 0x3126fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3126fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_312700:
    // 0x312700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x312700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_312704:
    // 0x312704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_312708:
    // 0x312708: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x312708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31270c:
    // 0x31270c: 0x320f809  jalr        $t9
label_312710:
    if (ctx->pc == 0x312710u) {
        ctx->pc = 0x312710u;
            // 0x312710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312714u;
        goto label_312714;
    }
    ctx->pc = 0x31270Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x312714u);
        ctx->pc = 0x312710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31270Cu;
            // 0x312710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x312714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x312714u; }
            if (ctx->pc != 0x312714u) { return; }
        }
        }
    }
    ctx->pc = 0x312714u;
label_312714:
    // 0x312714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x312714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_312718:
    // 0x312718: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x312718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_31271c:
    // 0x31271c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x31271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_312720:
    // 0x312720: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x312720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_312724:
    // 0x312724: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x312724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_312728:
    // 0x312728: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x312728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31272c:
    // 0x31272c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x31272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_312730:
    // 0x312730: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x312730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_312734:
    // 0x312734: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x312734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_312738:
    // 0x312738: 0x0  nop
    ctx->pc = 0x312738u;
    // NOP
label_31273c:
    // 0x31273c: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x31273cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_312740:
    // 0x312740: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x312740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_312744:
    // 0x312744: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x312744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_312748:
    // 0x312748: 0xc6210dbc  lwc1        $f1, 0xDBC($s1)
    ctx->pc = 0x312748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31274c:
    // 0x31274c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x31274cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_312750:
    // 0x312750: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x312750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_312754:
    // 0x312754: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x312754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_312758:
    // 0x312758: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x312758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_31275c:
    // 0x31275c: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x31275cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_312760:
    // 0x312760: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x312760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_312764:
    // 0x312764: 0xc6620060  lwc1        $f2, 0x60($s3)
    ctx->pc = 0x312764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_312768:
    // 0x312768: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x312768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31276c:
    // 0x31276c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31276cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312770:
    // 0x312770: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x312770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_312774:
    // 0x312774: 0x46022818  adda.s      $f5, $f2
    ctx->pc = 0x312774u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_312778:
    // 0x312778: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x312778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_31277c:
    // 0x31277c: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x31277cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_312780:
    // 0x312780: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x312780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_312784:
    // 0x312784: 0xe6620060  swc1        $f2, 0x60($s3)
    ctx->pc = 0x312784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_312788:
    // 0x312788: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x312788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31278c:
    // 0x31278c: 0x46141d5d  msub.s      $f21, $f3, $f20
    ctx->pc = 0x31278cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_312790:
    // 0x312790: 0xc0477a8  jal         func_11DEA0
label_312794:
    if (ctx->pc == 0x312794u) {
        ctx->pc = 0x312794u;
            // 0x312794: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x312798u;
        goto label_312798;
    }
    ctx->pc = 0x312790u;
    SET_GPR_U32(ctx, 31, 0x312798u);
    ctx->pc = 0x312794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312790u;
            // 0x312794: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312798u; }
        if (ctx->pc != 0x312798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312798u; }
        if (ctx->pc != 0x312798u) { return; }
    }
    ctx->pc = 0x312798u;
label_312798:
    // 0x312798: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x312798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_31279c:
    // 0x31279c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3127a0:
    // 0x3127a0: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x3127a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_3127a4:
    // 0x3127a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3127a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3127a8:
    // 0x3127a8: 0x0  nop
    ctx->pc = 0x3127a8u;
    // NOP
label_3127ac:
    // 0x3127ac: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3127acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_3127b0:
    // 0x3127b0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3127b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3127b4:
    // 0x3127b4: 0xc6210dc0  lwc1        $f1, 0xDC0($s1)
    ctx->pc = 0x3127b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3127b8:
    // 0x3127b8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x3127b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_3127bc:
    // 0x3127bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3127bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3127c0:
    // 0x3127c0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3127c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3127c4:
    // 0x3127c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3127c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3127c8:
    // 0x3127c8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3127c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3127cc:
    // 0x3127cc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3127ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3127d0:
    // 0x3127d0: 0xc04cab0  jal         func_132AC0
label_3127d4:
    if (ctx->pc == 0x3127D4u) {
        ctx->pc = 0x3127D4u;
            // 0x3127d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3127D8u;
        goto label_3127d8;
    }
    ctx->pc = 0x3127D0u;
    SET_GPR_U32(ctx, 31, 0x3127D8u);
    ctx->pc = 0x3127D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127D0u;
            // 0x3127d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127D8u; }
        if (ctx->pc != 0x3127D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127D8u; }
        if (ctx->pc != 0x3127D8u) { return; }
    }
    ctx->pc = 0x3127D8u;
label_3127d8:
    // 0x3127d8: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3127d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3127dc:
    // 0x3127dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3127dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3127e0:
    // 0x3127e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3127e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3127e4:
    // 0x3127e4: 0x320f809  jalr        $t9
label_3127e8:
    if (ctx->pc == 0x3127E8u) {
        ctx->pc = 0x3127E8u;
            // 0x3127e8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3127ECu;
        goto label_3127ec;
    }
    ctx->pc = 0x3127E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3127ECu);
        ctx->pc = 0x3127E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3127E4u;
            // 0x3127e8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3127ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3127ECu; }
            if (ctx->pc != 0x3127ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3127ECu;
label_3127ec:
    // 0x3127ec: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3127ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3127f0:
    // 0x3127f0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3127f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3127f4:
    // 0x3127f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3127f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3127f8:
    // 0x3127f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3127fc:
    // 0x3127fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3127fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_312800:
    // 0x312800: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x312800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_312804:
    // 0x312804: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x312804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_312808:
    // 0x312808: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x312808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_31280c:
    // 0x31280c: 0xc04c72c  jal         func_131CB0
label_312810:
    if (ctx->pc == 0x312810u) {
        ctx->pc = 0x312810u;
            // 0x312810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312814u;
        goto label_312814;
    }
    ctx->pc = 0x31280Cu;
    SET_GPR_U32(ctx, 31, 0x312814u);
    ctx->pc = 0x312810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31280Cu;
            // 0x312810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312814u; }
        if (ctx->pc != 0x312814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312814u; }
        if (ctx->pc != 0x312814u) { return; }
    }
    ctx->pc = 0x312814u;
label_312814:
    // 0x312814: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312818:
    // 0x312818: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x312818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31281c:
    // 0x31281c: 0xc6750060  lwc1        $f21, 0x60($s3)
    ctx->pc = 0x31281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_312820:
    // 0x312820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_312824:
    // 0x312824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_312828:
    // 0x312828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x312828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31282c:
    // 0x31282c: 0x0  nop
    ctx->pc = 0x31282cu;
    // NOP
label_312830:
    // 0x312830: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x312830u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_312834:
    // 0x312834: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x312834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_312838:
    // 0x312838: 0xc0477a8  jal         func_11DEA0
label_31283c:
    if (ctx->pc == 0x31283Cu) {
        ctx->pc = 0x31283Cu;
            // 0x31283c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x312840u;
        goto label_312840;
    }
    ctx->pc = 0x312838u;
    SET_GPR_U32(ctx, 31, 0x312840u);
    ctx->pc = 0x31283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312838u;
            // 0x31283c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312840u; }
        if (ctx->pc != 0x312840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312840u; }
        if (ctx->pc != 0x312840u) { return; }
    }
    ctx->pc = 0x312840u;
label_312840:
    // 0x312840: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x312840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_312844:
    // 0x312844: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_312848:
    // 0x312848: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x312848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_31284c:
    // 0x31284c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31284cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312850:
    // 0x312850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_312854:
    // 0x312854: 0x0  nop
    ctx->pc = 0x312854u;
    // NOP
label_312858:
    // 0x312858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31285c:
    // 0x31285c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31285cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_312860:
    // 0x312860: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_312864:
    // 0x312864: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x312864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_312868:
    // 0x312868: 0xc04cab0  jal         func_132AC0
label_31286c:
    if (ctx->pc == 0x31286Cu) {
        ctx->pc = 0x31286Cu;
            // 0x31286c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312870u;
        goto label_312870;
    }
    ctx->pc = 0x312868u;
    SET_GPR_U32(ctx, 31, 0x312870u);
    ctx->pc = 0x31286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312868u;
            // 0x31286c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312870u; }
        if (ctx->pc != 0x312870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312870u; }
        if (ctx->pc != 0x312870u) { return; }
    }
    ctx->pc = 0x312870u;
label_312870:
    // 0x312870: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x312870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_312874:
    // 0x312874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x312874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312878:
    // 0x312878: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x312878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31287c:
    // 0x31287c: 0x320f809  jalr        $t9
label_312880:
    if (ctx->pc == 0x312880u) {
        ctx->pc = 0x312880u;
            // 0x312880: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x312884u;
        goto label_312884;
    }
    ctx->pc = 0x31287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x312884u);
        ctx->pc = 0x312880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31287Cu;
            // 0x312880: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x312884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x312884u; }
            if (ctx->pc != 0x312884u) { return; }
        }
        }
    }
    ctx->pc = 0x312884u;
label_312884:
    // 0x312884: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x312884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_312888:
    // 0x312888: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x312888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31288c:
    // 0x31288c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31288cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_312890:
    // 0x312890: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x312890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_312894:
    // 0x312894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_312898:
    // 0x312898: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x312898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31289c:
    // 0x31289c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3128a0:
    // 0x3128a0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3128a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3128a4:
    // 0x3128a4: 0xc04c72c  jal         func_131CB0
label_3128a8:
    if (ctx->pc == 0x3128A8u) {
        ctx->pc = 0x3128A8u;
            // 0x3128a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3128ACu;
        goto label_3128ac;
    }
    ctx->pc = 0x3128A4u;
    SET_GPR_U32(ctx, 31, 0x3128ACu);
    ctx->pc = 0x3128A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3128A4u;
            // 0x3128a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128ACu; }
        if (ctx->pc != 0x3128ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128ACu; }
        if (ctx->pc != 0x3128ACu) { return; }
    }
    ctx->pc = 0x3128ACu;
label_3128ac:
    // 0x3128ac: 0x3c02c1c0  lui         $v0, 0xC1C0
    ctx->pc = 0x3128acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49600 << 16));
label_3128b0:
    // 0x3128b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3128b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3128b4:
    // 0x3128b4: 0xc0477a8  jal         func_11DEA0
label_3128b8:
    if (ctx->pc == 0x3128B8u) {
        ctx->pc = 0x3128B8u;
            // 0x3128b8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3128BCu;
        goto label_3128bc;
    }
    ctx->pc = 0x3128B4u;
    SET_GPR_U32(ctx, 31, 0x3128BCu);
    ctx->pc = 0x3128B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3128B4u;
            // 0x3128b8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128BCu; }
        if (ctx->pc != 0x3128BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128BCu; }
        if (ctx->pc != 0x3128BCu) { return; }
    }
    ctx->pc = 0x3128BCu;
label_3128bc:
    // 0x3128bc: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
label_3128c0:
    // 0x3128c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3128c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3128c4:
    // 0x3128c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3128c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3128c8:
    // 0x3128c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3128c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3128cc:
    // 0x3128cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3128ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3128d0:
    // 0x3128d0: 0x0  nop
    ctx->pc = 0x3128d0u;
    // NOP
label_3128d4:
    // 0x3128d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3128d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3128d8:
    // 0x3128d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3128d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3128dc:
    // 0x3128dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3128dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3128e0:
    // 0x3128e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3128e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3128e4:
    // 0x3128e4: 0xc04cab0  jal         func_132AC0
label_3128e8:
    if (ctx->pc == 0x3128E8u) {
        ctx->pc = 0x3128E8u;
            // 0x3128e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3128ECu;
        goto label_3128ec;
    }
    ctx->pc = 0x3128E4u;
    SET_GPR_U32(ctx, 31, 0x3128ECu);
    ctx->pc = 0x3128E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3128E4u;
            // 0x3128e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128ECu; }
        if (ctx->pc != 0x3128ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128ECu; }
        if (ctx->pc != 0x3128ECu) { return; }
    }
    ctx->pc = 0x3128ECu;
label_3128ec:
    // 0x3128ec: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3128ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3128f0:
    // 0x3128f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3128f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3128f4:
    // 0x3128f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3128f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3128f8:
    // 0x3128f8: 0x320f809  jalr        $t9
label_3128fc:
    if (ctx->pc == 0x3128FCu) {
        ctx->pc = 0x3128FCu;
            // 0x3128fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x312900u;
        goto label_312900;
    }
    ctx->pc = 0x3128F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x312900u);
        ctx->pc = 0x3128FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3128F8u;
            // 0x3128fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x312900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x312900u; }
            if (ctx->pc != 0x312900u) { return; }
        }
        }
    }
    ctx->pc = 0x312900u;
label_312900:
    // 0x312900: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x312900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_312904:
    // 0x312904: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x312904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_312908:
    // 0x312908: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x312908u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_31290c:
    // 0x31290c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_312910:
    // 0x312910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_312914:
    // 0x312914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x312914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_312918:
    // 0x312918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x312918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31291c:
    // 0x31291c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x31291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_312920:
    // 0x312920: 0xc04c72c  jal         func_131CB0
label_312924:
    if (ctx->pc == 0x312924u) {
        ctx->pc = 0x312924u;
            // 0x312924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312928u;
        goto label_312928;
    }
    ctx->pc = 0x312920u;
    SET_GPR_U32(ctx, 31, 0x312928u);
    ctx->pc = 0x312924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312920u;
            // 0x312924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312928u; }
        if (ctx->pc != 0x312928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312928u; }
        if (ctx->pc != 0x312928u) { return; }
    }
    ctx->pc = 0x312928u;
label_312928:
    // 0x312928: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x312928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31292c:
    // 0x31292c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_312930:
    // 0x312930: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x312930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_312934:
    // 0x312934: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x312934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_312938:
    // 0x312938: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x312938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31293c:
    // 0x31293c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31293cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312940:
    // 0x312940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312944:
    // 0x312944: 0x3e00008  jr          $ra
label_312948:
    if (ctx->pc == 0x312948u) {
        ctx->pc = 0x312948u;
            // 0x312948: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x31294Cu;
        goto label_31294c;
    }
    ctx->pc = 0x312944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312944u;
            // 0x312948: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31294Cu;
label_31294c:
    // 0x31294c: 0x0  nop
    ctx->pc = 0x31294cu;
    // NOP
}
