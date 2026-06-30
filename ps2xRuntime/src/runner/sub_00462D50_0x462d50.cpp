#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00462D50
// Address: 0x462d50 - 0x463a60
void sub_00462D50_0x462d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462D50_0x462d50");
#endif

    switch (ctx->pc) {
        case 0x462d50u: goto label_462d50;
        case 0x462d54u: goto label_462d54;
        case 0x462d58u: goto label_462d58;
        case 0x462d5cu: goto label_462d5c;
        case 0x462d60u: goto label_462d60;
        case 0x462d64u: goto label_462d64;
        case 0x462d68u: goto label_462d68;
        case 0x462d6cu: goto label_462d6c;
        case 0x462d70u: goto label_462d70;
        case 0x462d74u: goto label_462d74;
        case 0x462d78u: goto label_462d78;
        case 0x462d7cu: goto label_462d7c;
        case 0x462d80u: goto label_462d80;
        case 0x462d84u: goto label_462d84;
        case 0x462d88u: goto label_462d88;
        case 0x462d8cu: goto label_462d8c;
        case 0x462d90u: goto label_462d90;
        case 0x462d94u: goto label_462d94;
        case 0x462d98u: goto label_462d98;
        case 0x462d9cu: goto label_462d9c;
        case 0x462da0u: goto label_462da0;
        case 0x462da4u: goto label_462da4;
        case 0x462da8u: goto label_462da8;
        case 0x462dacu: goto label_462dac;
        case 0x462db0u: goto label_462db0;
        case 0x462db4u: goto label_462db4;
        case 0x462db8u: goto label_462db8;
        case 0x462dbcu: goto label_462dbc;
        case 0x462dc0u: goto label_462dc0;
        case 0x462dc4u: goto label_462dc4;
        case 0x462dc8u: goto label_462dc8;
        case 0x462dccu: goto label_462dcc;
        case 0x462dd0u: goto label_462dd0;
        case 0x462dd4u: goto label_462dd4;
        case 0x462dd8u: goto label_462dd8;
        case 0x462ddcu: goto label_462ddc;
        case 0x462de0u: goto label_462de0;
        case 0x462de4u: goto label_462de4;
        case 0x462de8u: goto label_462de8;
        case 0x462decu: goto label_462dec;
        case 0x462df0u: goto label_462df0;
        case 0x462df4u: goto label_462df4;
        case 0x462df8u: goto label_462df8;
        case 0x462dfcu: goto label_462dfc;
        case 0x462e00u: goto label_462e00;
        case 0x462e04u: goto label_462e04;
        case 0x462e08u: goto label_462e08;
        case 0x462e0cu: goto label_462e0c;
        case 0x462e10u: goto label_462e10;
        case 0x462e14u: goto label_462e14;
        case 0x462e18u: goto label_462e18;
        case 0x462e1cu: goto label_462e1c;
        case 0x462e20u: goto label_462e20;
        case 0x462e24u: goto label_462e24;
        case 0x462e28u: goto label_462e28;
        case 0x462e2cu: goto label_462e2c;
        case 0x462e30u: goto label_462e30;
        case 0x462e34u: goto label_462e34;
        case 0x462e38u: goto label_462e38;
        case 0x462e3cu: goto label_462e3c;
        case 0x462e40u: goto label_462e40;
        case 0x462e44u: goto label_462e44;
        case 0x462e48u: goto label_462e48;
        case 0x462e4cu: goto label_462e4c;
        case 0x462e50u: goto label_462e50;
        case 0x462e54u: goto label_462e54;
        case 0x462e58u: goto label_462e58;
        case 0x462e5cu: goto label_462e5c;
        case 0x462e60u: goto label_462e60;
        case 0x462e64u: goto label_462e64;
        case 0x462e68u: goto label_462e68;
        case 0x462e6cu: goto label_462e6c;
        case 0x462e70u: goto label_462e70;
        case 0x462e74u: goto label_462e74;
        case 0x462e78u: goto label_462e78;
        case 0x462e7cu: goto label_462e7c;
        case 0x462e80u: goto label_462e80;
        case 0x462e84u: goto label_462e84;
        case 0x462e88u: goto label_462e88;
        case 0x462e8cu: goto label_462e8c;
        case 0x462e90u: goto label_462e90;
        case 0x462e94u: goto label_462e94;
        case 0x462e98u: goto label_462e98;
        case 0x462e9cu: goto label_462e9c;
        case 0x462ea0u: goto label_462ea0;
        case 0x462ea4u: goto label_462ea4;
        case 0x462ea8u: goto label_462ea8;
        case 0x462eacu: goto label_462eac;
        case 0x462eb0u: goto label_462eb0;
        case 0x462eb4u: goto label_462eb4;
        case 0x462eb8u: goto label_462eb8;
        case 0x462ebcu: goto label_462ebc;
        case 0x462ec0u: goto label_462ec0;
        case 0x462ec4u: goto label_462ec4;
        case 0x462ec8u: goto label_462ec8;
        case 0x462eccu: goto label_462ecc;
        case 0x462ed0u: goto label_462ed0;
        case 0x462ed4u: goto label_462ed4;
        case 0x462ed8u: goto label_462ed8;
        case 0x462edcu: goto label_462edc;
        case 0x462ee0u: goto label_462ee0;
        case 0x462ee4u: goto label_462ee4;
        case 0x462ee8u: goto label_462ee8;
        case 0x462eecu: goto label_462eec;
        case 0x462ef0u: goto label_462ef0;
        case 0x462ef4u: goto label_462ef4;
        case 0x462ef8u: goto label_462ef8;
        case 0x462efcu: goto label_462efc;
        case 0x462f00u: goto label_462f00;
        case 0x462f04u: goto label_462f04;
        case 0x462f08u: goto label_462f08;
        case 0x462f0cu: goto label_462f0c;
        case 0x462f10u: goto label_462f10;
        case 0x462f14u: goto label_462f14;
        case 0x462f18u: goto label_462f18;
        case 0x462f1cu: goto label_462f1c;
        case 0x462f20u: goto label_462f20;
        case 0x462f24u: goto label_462f24;
        case 0x462f28u: goto label_462f28;
        case 0x462f2cu: goto label_462f2c;
        case 0x462f30u: goto label_462f30;
        case 0x462f34u: goto label_462f34;
        case 0x462f38u: goto label_462f38;
        case 0x462f3cu: goto label_462f3c;
        case 0x462f40u: goto label_462f40;
        case 0x462f44u: goto label_462f44;
        case 0x462f48u: goto label_462f48;
        case 0x462f4cu: goto label_462f4c;
        case 0x462f50u: goto label_462f50;
        case 0x462f54u: goto label_462f54;
        case 0x462f58u: goto label_462f58;
        case 0x462f5cu: goto label_462f5c;
        case 0x462f60u: goto label_462f60;
        case 0x462f64u: goto label_462f64;
        case 0x462f68u: goto label_462f68;
        case 0x462f6cu: goto label_462f6c;
        case 0x462f70u: goto label_462f70;
        case 0x462f74u: goto label_462f74;
        case 0x462f78u: goto label_462f78;
        case 0x462f7cu: goto label_462f7c;
        case 0x462f80u: goto label_462f80;
        case 0x462f84u: goto label_462f84;
        case 0x462f88u: goto label_462f88;
        case 0x462f8cu: goto label_462f8c;
        case 0x462f90u: goto label_462f90;
        case 0x462f94u: goto label_462f94;
        case 0x462f98u: goto label_462f98;
        case 0x462f9cu: goto label_462f9c;
        case 0x462fa0u: goto label_462fa0;
        case 0x462fa4u: goto label_462fa4;
        case 0x462fa8u: goto label_462fa8;
        case 0x462facu: goto label_462fac;
        case 0x462fb0u: goto label_462fb0;
        case 0x462fb4u: goto label_462fb4;
        case 0x462fb8u: goto label_462fb8;
        case 0x462fbcu: goto label_462fbc;
        case 0x462fc0u: goto label_462fc0;
        case 0x462fc4u: goto label_462fc4;
        case 0x462fc8u: goto label_462fc8;
        case 0x462fccu: goto label_462fcc;
        case 0x462fd0u: goto label_462fd0;
        case 0x462fd4u: goto label_462fd4;
        case 0x462fd8u: goto label_462fd8;
        case 0x462fdcu: goto label_462fdc;
        case 0x462fe0u: goto label_462fe0;
        case 0x462fe4u: goto label_462fe4;
        case 0x462fe8u: goto label_462fe8;
        case 0x462fecu: goto label_462fec;
        case 0x462ff0u: goto label_462ff0;
        case 0x462ff4u: goto label_462ff4;
        case 0x462ff8u: goto label_462ff8;
        case 0x462ffcu: goto label_462ffc;
        case 0x463000u: goto label_463000;
        case 0x463004u: goto label_463004;
        case 0x463008u: goto label_463008;
        case 0x46300cu: goto label_46300c;
        case 0x463010u: goto label_463010;
        case 0x463014u: goto label_463014;
        case 0x463018u: goto label_463018;
        case 0x46301cu: goto label_46301c;
        case 0x463020u: goto label_463020;
        case 0x463024u: goto label_463024;
        case 0x463028u: goto label_463028;
        case 0x46302cu: goto label_46302c;
        case 0x463030u: goto label_463030;
        case 0x463034u: goto label_463034;
        case 0x463038u: goto label_463038;
        case 0x46303cu: goto label_46303c;
        case 0x463040u: goto label_463040;
        case 0x463044u: goto label_463044;
        case 0x463048u: goto label_463048;
        case 0x46304cu: goto label_46304c;
        case 0x463050u: goto label_463050;
        case 0x463054u: goto label_463054;
        case 0x463058u: goto label_463058;
        case 0x46305cu: goto label_46305c;
        case 0x463060u: goto label_463060;
        case 0x463064u: goto label_463064;
        case 0x463068u: goto label_463068;
        case 0x46306cu: goto label_46306c;
        case 0x463070u: goto label_463070;
        case 0x463074u: goto label_463074;
        case 0x463078u: goto label_463078;
        case 0x46307cu: goto label_46307c;
        case 0x463080u: goto label_463080;
        case 0x463084u: goto label_463084;
        case 0x463088u: goto label_463088;
        case 0x46308cu: goto label_46308c;
        case 0x463090u: goto label_463090;
        case 0x463094u: goto label_463094;
        case 0x463098u: goto label_463098;
        case 0x46309cu: goto label_46309c;
        case 0x4630a0u: goto label_4630a0;
        case 0x4630a4u: goto label_4630a4;
        case 0x4630a8u: goto label_4630a8;
        case 0x4630acu: goto label_4630ac;
        case 0x4630b0u: goto label_4630b0;
        case 0x4630b4u: goto label_4630b4;
        case 0x4630b8u: goto label_4630b8;
        case 0x4630bcu: goto label_4630bc;
        case 0x4630c0u: goto label_4630c0;
        case 0x4630c4u: goto label_4630c4;
        case 0x4630c8u: goto label_4630c8;
        case 0x4630ccu: goto label_4630cc;
        case 0x4630d0u: goto label_4630d0;
        case 0x4630d4u: goto label_4630d4;
        case 0x4630d8u: goto label_4630d8;
        case 0x4630dcu: goto label_4630dc;
        case 0x4630e0u: goto label_4630e0;
        case 0x4630e4u: goto label_4630e4;
        case 0x4630e8u: goto label_4630e8;
        case 0x4630ecu: goto label_4630ec;
        case 0x4630f0u: goto label_4630f0;
        case 0x4630f4u: goto label_4630f4;
        case 0x4630f8u: goto label_4630f8;
        case 0x4630fcu: goto label_4630fc;
        case 0x463100u: goto label_463100;
        case 0x463104u: goto label_463104;
        case 0x463108u: goto label_463108;
        case 0x46310cu: goto label_46310c;
        case 0x463110u: goto label_463110;
        case 0x463114u: goto label_463114;
        case 0x463118u: goto label_463118;
        case 0x46311cu: goto label_46311c;
        case 0x463120u: goto label_463120;
        case 0x463124u: goto label_463124;
        case 0x463128u: goto label_463128;
        case 0x46312cu: goto label_46312c;
        case 0x463130u: goto label_463130;
        case 0x463134u: goto label_463134;
        case 0x463138u: goto label_463138;
        case 0x46313cu: goto label_46313c;
        case 0x463140u: goto label_463140;
        case 0x463144u: goto label_463144;
        case 0x463148u: goto label_463148;
        case 0x46314cu: goto label_46314c;
        case 0x463150u: goto label_463150;
        case 0x463154u: goto label_463154;
        case 0x463158u: goto label_463158;
        case 0x46315cu: goto label_46315c;
        case 0x463160u: goto label_463160;
        case 0x463164u: goto label_463164;
        case 0x463168u: goto label_463168;
        case 0x46316cu: goto label_46316c;
        case 0x463170u: goto label_463170;
        case 0x463174u: goto label_463174;
        case 0x463178u: goto label_463178;
        case 0x46317cu: goto label_46317c;
        case 0x463180u: goto label_463180;
        case 0x463184u: goto label_463184;
        case 0x463188u: goto label_463188;
        case 0x46318cu: goto label_46318c;
        case 0x463190u: goto label_463190;
        case 0x463194u: goto label_463194;
        case 0x463198u: goto label_463198;
        case 0x46319cu: goto label_46319c;
        case 0x4631a0u: goto label_4631a0;
        case 0x4631a4u: goto label_4631a4;
        case 0x4631a8u: goto label_4631a8;
        case 0x4631acu: goto label_4631ac;
        case 0x4631b0u: goto label_4631b0;
        case 0x4631b4u: goto label_4631b4;
        case 0x4631b8u: goto label_4631b8;
        case 0x4631bcu: goto label_4631bc;
        case 0x4631c0u: goto label_4631c0;
        case 0x4631c4u: goto label_4631c4;
        case 0x4631c8u: goto label_4631c8;
        case 0x4631ccu: goto label_4631cc;
        case 0x4631d0u: goto label_4631d0;
        case 0x4631d4u: goto label_4631d4;
        case 0x4631d8u: goto label_4631d8;
        case 0x4631dcu: goto label_4631dc;
        case 0x4631e0u: goto label_4631e0;
        case 0x4631e4u: goto label_4631e4;
        case 0x4631e8u: goto label_4631e8;
        case 0x4631ecu: goto label_4631ec;
        case 0x4631f0u: goto label_4631f0;
        case 0x4631f4u: goto label_4631f4;
        case 0x4631f8u: goto label_4631f8;
        case 0x4631fcu: goto label_4631fc;
        case 0x463200u: goto label_463200;
        case 0x463204u: goto label_463204;
        case 0x463208u: goto label_463208;
        case 0x46320cu: goto label_46320c;
        case 0x463210u: goto label_463210;
        case 0x463214u: goto label_463214;
        case 0x463218u: goto label_463218;
        case 0x46321cu: goto label_46321c;
        case 0x463220u: goto label_463220;
        case 0x463224u: goto label_463224;
        case 0x463228u: goto label_463228;
        case 0x46322cu: goto label_46322c;
        case 0x463230u: goto label_463230;
        case 0x463234u: goto label_463234;
        case 0x463238u: goto label_463238;
        case 0x46323cu: goto label_46323c;
        case 0x463240u: goto label_463240;
        case 0x463244u: goto label_463244;
        case 0x463248u: goto label_463248;
        case 0x46324cu: goto label_46324c;
        case 0x463250u: goto label_463250;
        case 0x463254u: goto label_463254;
        case 0x463258u: goto label_463258;
        case 0x46325cu: goto label_46325c;
        case 0x463260u: goto label_463260;
        case 0x463264u: goto label_463264;
        case 0x463268u: goto label_463268;
        case 0x46326cu: goto label_46326c;
        case 0x463270u: goto label_463270;
        case 0x463274u: goto label_463274;
        case 0x463278u: goto label_463278;
        case 0x46327cu: goto label_46327c;
        case 0x463280u: goto label_463280;
        case 0x463284u: goto label_463284;
        case 0x463288u: goto label_463288;
        case 0x46328cu: goto label_46328c;
        case 0x463290u: goto label_463290;
        case 0x463294u: goto label_463294;
        case 0x463298u: goto label_463298;
        case 0x46329cu: goto label_46329c;
        case 0x4632a0u: goto label_4632a0;
        case 0x4632a4u: goto label_4632a4;
        case 0x4632a8u: goto label_4632a8;
        case 0x4632acu: goto label_4632ac;
        case 0x4632b0u: goto label_4632b0;
        case 0x4632b4u: goto label_4632b4;
        case 0x4632b8u: goto label_4632b8;
        case 0x4632bcu: goto label_4632bc;
        case 0x4632c0u: goto label_4632c0;
        case 0x4632c4u: goto label_4632c4;
        case 0x4632c8u: goto label_4632c8;
        case 0x4632ccu: goto label_4632cc;
        case 0x4632d0u: goto label_4632d0;
        case 0x4632d4u: goto label_4632d4;
        case 0x4632d8u: goto label_4632d8;
        case 0x4632dcu: goto label_4632dc;
        case 0x4632e0u: goto label_4632e0;
        case 0x4632e4u: goto label_4632e4;
        case 0x4632e8u: goto label_4632e8;
        case 0x4632ecu: goto label_4632ec;
        case 0x4632f0u: goto label_4632f0;
        case 0x4632f4u: goto label_4632f4;
        case 0x4632f8u: goto label_4632f8;
        case 0x4632fcu: goto label_4632fc;
        case 0x463300u: goto label_463300;
        case 0x463304u: goto label_463304;
        case 0x463308u: goto label_463308;
        case 0x46330cu: goto label_46330c;
        case 0x463310u: goto label_463310;
        case 0x463314u: goto label_463314;
        case 0x463318u: goto label_463318;
        case 0x46331cu: goto label_46331c;
        case 0x463320u: goto label_463320;
        case 0x463324u: goto label_463324;
        case 0x463328u: goto label_463328;
        case 0x46332cu: goto label_46332c;
        case 0x463330u: goto label_463330;
        case 0x463334u: goto label_463334;
        case 0x463338u: goto label_463338;
        case 0x46333cu: goto label_46333c;
        case 0x463340u: goto label_463340;
        case 0x463344u: goto label_463344;
        case 0x463348u: goto label_463348;
        case 0x46334cu: goto label_46334c;
        case 0x463350u: goto label_463350;
        case 0x463354u: goto label_463354;
        case 0x463358u: goto label_463358;
        case 0x46335cu: goto label_46335c;
        case 0x463360u: goto label_463360;
        case 0x463364u: goto label_463364;
        case 0x463368u: goto label_463368;
        case 0x46336cu: goto label_46336c;
        case 0x463370u: goto label_463370;
        case 0x463374u: goto label_463374;
        case 0x463378u: goto label_463378;
        case 0x46337cu: goto label_46337c;
        case 0x463380u: goto label_463380;
        case 0x463384u: goto label_463384;
        case 0x463388u: goto label_463388;
        case 0x46338cu: goto label_46338c;
        case 0x463390u: goto label_463390;
        case 0x463394u: goto label_463394;
        case 0x463398u: goto label_463398;
        case 0x46339cu: goto label_46339c;
        case 0x4633a0u: goto label_4633a0;
        case 0x4633a4u: goto label_4633a4;
        case 0x4633a8u: goto label_4633a8;
        case 0x4633acu: goto label_4633ac;
        case 0x4633b0u: goto label_4633b0;
        case 0x4633b4u: goto label_4633b4;
        case 0x4633b8u: goto label_4633b8;
        case 0x4633bcu: goto label_4633bc;
        case 0x4633c0u: goto label_4633c0;
        case 0x4633c4u: goto label_4633c4;
        case 0x4633c8u: goto label_4633c8;
        case 0x4633ccu: goto label_4633cc;
        case 0x4633d0u: goto label_4633d0;
        case 0x4633d4u: goto label_4633d4;
        case 0x4633d8u: goto label_4633d8;
        case 0x4633dcu: goto label_4633dc;
        case 0x4633e0u: goto label_4633e0;
        case 0x4633e4u: goto label_4633e4;
        case 0x4633e8u: goto label_4633e8;
        case 0x4633ecu: goto label_4633ec;
        case 0x4633f0u: goto label_4633f0;
        case 0x4633f4u: goto label_4633f4;
        case 0x4633f8u: goto label_4633f8;
        case 0x4633fcu: goto label_4633fc;
        case 0x463400u: goto label_463400;
        case 0x463404u: goto label_463404;
        case 0x463408u: goto label_463408;
        case 0x46340cu: goto label_46340c;
        case 0x463410u: goto label_463410;
        case 0x463414u: goto label_463414;
        case 0x463418u: goto label_463418;
        case 0x46341cu: goto label_46341c;
        case 0x463420u: goto label_463420;
        case 0x463424u: goto label_463424;
        case 0x463428u: goto label_463428;
        case 0x46342cu: goto label_46342c;
        case 0x463430u: goto label_463430;
        case 0x463434u: goto label_463434;
        case 0x463438u: goto label_463438;
        case 0x46343cu: goto label_46343c;
        case 0x463440u: goto label_463440;
        case 0x463444u: goto label_463444;
        case 0x463448u: goto label_463448;
        case 0x46344cu: goto label_46344c;
        case 0x463450u: goto label_463450;
        case 0x463454u: goto label_463454;
        case 0x463458u: goto label_463458;
        case 0x46345cu: goto label_46345c;
        case 0x463460u: goto label_463460;
        case 0x463464u: goto label_463464;
        case 0x463468u: goto label_463468;
        case 0x46346cu: goto label_46346c;
        case 0x463470u: goto label_463470;
        case 0x463474u: goto label_463474;
        case 0x463478u: goto label_463478;
        case 0x46347cu: goto label_46347c;
        case 0x463480u: goto label_463480;
        case 0x463484u: goto label_463484;
        case 0x463488u: goto label_463488;
        case 0x46348cu: goto label_46348c;
        case 0x463490u: goto label_463490;
        case 0x463494u: goto label_463494;
        case 0x463498u: goto label_463498;
        case 0x46349cu: goto label_46349c;
        case 0x4634a0u: goto label_4634a0;
        case 0x4634a4u: goto label_4634a4;
        case 0x4634a8u: goto label_4634a8;
        case 0x4634acu: goto label_4634ac;
        case 0x4634b0u: goto label_4634b0;
        case 0x4634b4u: goto label_4634b4;
        case 0x4634b8u: goto label_4634b8;
        case 0x4634bcu: goto label_4634bc;
        case 0x4634c0u: goto label_4634c0;
        case 0x4634c4u: goto label_4634c4;
        case 0x4634c8u: goto label_4634c8;
        case 0x4634ccu: goto label_4634cc;
        case 0x4634d0u: goto label_4634d0;
        case 0x4634d4u: goto label_4634d4;
        case 0x4634d8u: goto label_4634d8;
        case 0x4634dcu: goto label_4634dc;
        case 0x4634e0u: goto label_4634e0;
        case 0x4634e4u: goto label_4634e4;
        case 0x4634e8u: goto label_4634e8;
        case 0x4634ecu: goto label_4634ec;
        case 0x4634f0u: goto label_4634f0;
        case 0x4634f4u: goto label_4634f4;
        case 0x4634f8u: goto label_4634f8;
        case 0x4634fcu: goto label_4634fc;
        case 0x463500u: goto label_463500;
        case 0x463504u: goto label_463504;
        case 0x463508u: goto label_463508;
        case 0x46350cu: goto label_46350c;
        case 0x463510u: goto label_463510;
        case 0x463514u: goto label_463514;
        case 0x463518u: goto label_463518;
        case 0x46351cu: goto label_46351c;
        case 0x463520u: goto label_463520;
        case 0x463524u: goto label_463524;
        case 0x463528u: goto label_463528;
        case 0x46352cu: goto label_46352c;
        case 0x463530u: goto label_463530;
        case 0x463534u: goto label_463534;
        case 0x463538u: goto label_463538;
        case 0x46353cu: goto label_46353c;
        case 0x463540u: goto label_463540;
        case 0x463544u: goto label_463544;
        case 0x463548u: goto label_463548;
        case 0x46354cu: goto label_46354c;
        case 0x463550u: goto label_463550;
        case 0x463554u: goto label_463554;
        case 0x463558u: goto label_463558;
        case 0x46355cu: goto label_46355c;
        case 0x463560u: goto label_463560;
        case 0x463564u: goto label_463564;
        case 0x463568u: goto label_463568;
        case 0x46356cu: goto label_46356c;
        case 0x463570u: goto label_463570;
        case 0x463574u: goto label_463574;
        case 0x463578u: goto label_463578;
        case 0x46357cu: goto label_46357c;
        case 0x463580u: goto label_463580;
        case 0x463584u: goto label_463584;
        case 0x463588u: goto label_463588;
        case 0x46358cu: goto label_46358c;
        case 0x463590u: goto label_463590;
        case 0x463594u: goto label_463594;
        case 0x463598u: goto label_463598;
        case 0x46359cu: goto label_46359c;
        case 0x4635a0u: goto label_4635a0;
        case 0x4635a4u: goto label_4635a4;
        case 0x4635a8u: goto label_4635a8;
        case 0x4635acu: goto label_4635ac;
        case 0x4635b0u: goto label_4635b0;
        case 0x4635b4u: goto label_4635b4;
        case 0x4635b8u: goto label_4635b8;
        case 0x4635bcu: goto label_4635bc;
        case 0x4635c0u: goto label_4635c0;
        case 0x4635c4u: goto label_4635c4;
        case 0x4635c8u: goto label_4635c8;
        case 0x4635ccu: goto label_4635cc;
        case 0x4635d0u: goto label_4635d0;
        case 0x4635d4u: goto label_4635d4;
        case 0x4635d8u: goto label_4635d8;
        case 0x4635dcu: goto label_4635dc;
        case 0x4635e0u: goto label_4635e0;
        case 0x4635e4u: goto label_4635e4;
        case 0x4635e8u: goto label_4635e8;
        case 0x4635ecu: goto label_4635ec;
        case 0x4635f0u: goto label_4635f0;
        case 0x4635f4u: goto label_4635f4;
        case 0x4635f8u: goto label_4635f8;
        case 0x4635fcu: goto label_4635fc;
        case 0x463600u: goto label_463600;
        case 0x463604u: goto label_463604;
        case 0x463608u: goto label_463608;
        case 0x46360cu: goto label_46360c;
        case 0x463610u: goto label_463610;
        case 0x463614u: goto label_463614;
        case 0x463618u: goto label_463618;
        case 0x46361cu: goto label_46361c;
        case 0x463620u: goto label_463620;
        case 0x463624u: goto label_463624;
        case 0x463628u: goto label_463628;
        case 0x46362cu: goto label_46362c;
        case 0x463630u: goto label_463630;
        case 0x463634u: goto label_463634;
        case 0x463638u: goto label_463638;
        case 0x46363cu: goto label_46363c;
        case 0x463640u: goto label_463640;
        case 0x463644u: goto label_463644;
        case 0x463648u: goto label_463648;
        case 0x46364cu: goto label_46364c;
        case 0x463650u: goto label_463650;
        case 0x463654u: goto label_463654;
        case 0x463658u: goto label_463658;
        case 0x46365cu: goto label_46365c;
        case 0x463660u: goto label_463660;
        case 0x463664u: goto label_463664;
        case 0x463668u: goto label_463668;
        case 0x46366cu: goto label_46366c;
        case 0x463670u: goto label_463670;
        case 0x463674u: goto label_463674;
        case 0x463678u: goto label_463678;
        case 0x46367cu: goto label_46367c;
        case 0x463680u: goto label_463680;
        case 0x463684u: goto label_463684;
        case 0x463688u: goto label_463688;
        case 0x46368cu: goto label_46368c;
        case 0x463690u: goto label_463690;
        case 0x463694u: goto label_463694;
        case 0x463698u: goto label_463698;
        case 0x46369cu: goto label_46369c;
        case 0x4636a0u: goto label_4636a0;
        case 0x4636a4u: goto label_4636a4;
        case 0x4636a8u: goto label_4636a8;
        case 0x4636acu: goto label_4636ac;
        case 0x4636b0u: goto label_4636b0;
        case 0x4636b4u: goto label_4636b4;
        case 0x4636b8u: goto label_4636b8;
        case 0x4636bcu: goto label_4636bc;
        case 0x4636c0u: goto label_4636c0;
        case 0x4636c4u: goto label_4636c4;
        case 0x4636c8u: goto label_4636c8;
        case 0x4636ccu: goto label_4636cc;
        case 0x4636d0u: goto label_4636d0;
        case 0x4636d4u: goto label_4636d4;
        case 0x4636d8u: goto label_4636d8;
        case 0x4636dcu: goto label_4636dc;
        case 0x4636e0u: goto label_4636e0;
        case 0x4636e4u: goto label_4636e4;
        case 0x4636e8u: goto label_4636e8;
        case 0x4636ecu: goto label_4636ec;
        case 0x4636f0u: goto label_4636f0;
        case 0x4636f4u: goto label_4636f4;
        case 0x4636f8u: goto label_4636f8;
        case 0x4636fcu: goto label_4636fc;
        case 0x463700u: goto label_463700;
        case 0x463704u: goto label_463704;
        case 0x463708u: goto label_463708;
        case 0x46370cu: goto label_46370c;
        case 0x463710u: goto label_463710;
        case 0x463714u: goto label_463714;
        case 0x463718u: goto label_463718;
        case 0x46371cu: goto label_46371c;
        case 0x463720u: goto label_463720;
        case 0x463724u: goto label_463724;
        case 0x463728u: goto label_463728;
        case 0x46372cu: goto label_46372c;
        case 0x463730u: goto label_463730;
        case 0x463734u: goto label_463734;
        case 0x463738u: goto label_463738;
        case 0x46373cu: goto label_46373c;
        case 0x463740u: goto label_463740;
        case 0x463744u: goto label_463744;
        case 0x463748u: goto label_463748;
        case 0x46374cu: goto label_46374c;
        case 0x463750u: goto label_463750;
        case 0x463754u: goto label_463754;
        case 0x463758u: goto label_463758;
        case 0x46375cu: goto label_46375c;
        case 0x463760u: goto label_463760;
        case 0x463764u: goto label_463764;
        case 0x463768u: goto label_463768;
        case 0x46376cu: goto label_46376c;
        case 0x463770u: goto label_463770;
        case 0x463774u: goto label_463774;
        case 0x463778u: goto label_463778;
        case 0x46377cu: goto label_46377c;
        case 0x463780u: goto label_463780;
        case 0x463784u: goto label_463784;
        case 0x463788u: goto label_463788;
        case 0x46378cu: goto label_46378c;
        case 0x463790u: goto label_463790;
        case 0x463794u: goto label_463794;
        case 0x463798u: goto label_463798;
        case 0x46379cu: goto label_46379c;
        case 0x4637a0u: goto label_4637a0;
        case 0x4637a4u: goto label_4637a4;
        case 0x4637a8u: goto label_4637a8;
        case 0x4637acu: goto label_4637ac;
        case 0x4637b0u: goto label_4637b0;
        case 0x4637b4u: goto label_4637b4;
        case 0x4637b8u: goto label_4637b8;
        case 0x4637bcu: goto label_4637bc;
        case 0x4637c0u: goto label_4637c0;
        case 0x4637c4u: goto label_4637c4;
        case 0x4637c8u: goto label_4637c8;
        case 0x4637ccu: goto label_4637cc;
        case 0x4637d0u: goto label_4637d0;
        case 0x4637d4u: goto label_4637d4;
        case 0x4637d8u: goto label_4637d8;
        case 0x4637dcu: goto label_4637dc;
        case 0x4637e0u: goto label_4637e0;
        case 0x4637e4u: goto label_4637e4;
        case 0x4637e8u: goto label_4637e8;
        case 0x4637ecu: goto label_4637ec;
        case 0x4637f0u: goto label_4637f0;
        case 0x4637f4u: goto label_4637f4;
        case 0x4637f8u: goto label_4637f8;
        case 0x4637fcu: goto label_4637fc;
        case 0x463800u: goto label_463800;
        case 0x463804u: goto label_463804;
        case 0x463808u: goto label_463808;
        case 0x46380cu: goto label_46380c;
        case 0x463810u: goto label_463810;
        case 0x463814u: goto label_463814;
        case 0x463818u: goto label_463818;
        case 0x46381cu: goto label_46381c;
        case 0x463820u: goto label_463820;
        case 0x463824u: goto label_463824;
        case 0x463828u: goto label_463828;
        case 0x46382cu: goto label_46382c;
        case 0x463830u: goto label_463830;
        case 0x463834u: goto label_463834;
        case 0x463838u: goto label_463838;
        case 0x46383cu: goto label_46383c;
        case 0x463840u: goto label_463840;
        case 0x463844u: goto label_463844;
        case 0x463848u: goto label_463848;
        case 0x46384cu: goto label_46384c;
        case 0x463850u: goto label_463850;
        case 0x463854u: goto label_463854;
        case 0x463858u: goto label_463858;
        case 0x46385cu: goto label_46385c;
        case 0x463860u: goto label_463860;
        case 0x463864u: goto label_463864;
        case 0x463868u: goto label_463868;
        case 0x46386cu: goto label_46386c;
        case 0x463870u: goto label_463870;
        case 0x463874u: goto label_463874;
        case 0x463878u: goto label_463878;
        case 0x46387cu: goto label_46387c;
        case 0x463880u: goto label_463880;
        case 0x463884u: goto label_463884;
        case 0x463888u: goto label_463888;
        case 0x46388cu: goto label_46388c;
        case 0x463890u: goto label_463890;
        case 0x463894u: goto label_463894;
        case 0x463898u: goto label_463898;
        case 0x46389cu: goto label_46389c;
        case 0x4638a0u: goto label_4638a0;
        case 0x4638a4u: goto label_4638a4;
        case 0x4638a8u: goto label_4638a8;
        case 0x4638acu: goto label_4638ac;
        case 0x4638b0u: goto label_4638b0;
        case 0x4638b4u: goto label_4638b4;
        case 0x4638b8u: goto label_4638b8;
        case 0x4638bcu: goto label_4638bc;
        case 0x4638c0u: goto label_4638c0;
        case 0x4638c4u: goto label_4638c4;
        case 0x4638c8u: goto label_4638c8;
        case 0x4638ccu: goto label_4638cc;
        case 0x4638d0u: goto label_4638d0;
        case 0x4638d4u: goto label_4638d4;
        case 0x4638d8u: goto label_4638d8;
        case 0x4638dcu: goto label_4638dc;
        case 0x4638e0u: goto label_4638e0;
        case 0x4638e4u: goto label_4638e4;
        case 0x4638e8u: goto label_4638e8;
        case 0x4638ecu: goto label_4638ec;
        case 0x4638f0u: goto label_4638f0;
        case 0x4638f4u: goto label_4638f4;
        case 0x4638f8u: goto label_4638f8;
        case 0x4638fcu: goto label_4638fc;
        case 0x463900u: goto label_463900;
        case 0x463904u: goto label_463904;
        case 0x463908u: goto label_463908;
        case 0x46390cu: goto label_46390c;
        case 0x463910u: goto label_463910;
        case 0x463914u: goto label_463914;
        case 0x463918u: goto label_463918;
        case 0x46391cu: goto label_46391c;
        case 0x463920u: goto label_463920;
        case 0x463924u: goto label_463924;
        case 0x463928u: goto label_463928;
        case 0x46392cu: goto label_46392c;
        case 0x463930u: goto label_463930;
        case 0x463934u: goto label_463934;
        case 0x463938u: goto label_463938;
        case 0x46393cu: goto label_46393c;
        case 0x463940u: goto label_463940;
        case 0x463944u: goto label_463944;
        case 0x463948u: goto label_463948;
        case 0x46394cu: goto label_46394c;
        case 0x463950u: goto label_463950;
        case 0x463954u: goto label_463954;
        case 0x463958u: goto label_463958;
        case 0x46395cu: goto label_46395c;
        case 0x463960u: goto label_463960;
        case 0x463964u: goto label_463964;
        case 0x463968u: goto label_463968;
        case 0x46396cu: goto label_46396c;
        case 0x463970u: goto label_463970;
        case 0x463974u: goto label_463974;
        case 0x463978u: goto label_463978;
        case 0x46397cu: goto label_46397c;
        case 0x463980u: goto label_463980;
        case 0x463984u: goto label_463984;
        case 0x463988u: goto label_463988;
        case 0x46398cu: goto label_46398c;
        case 0x463990u: goto label_463990;
        case 0x463994u: goto label_463994;
        case 0x463998u: goto label_463998;
        case 0x46399cu: goto label_46399c;
        case 0x4639a0u: goto label_4639a0;
        case 0x4639a4u: goto label_4639a4;
        case 0x4639a8u: goto label_4639a8;
        case 0x4639acu: goto label_4639ac;
        case 0x4639b0u: goto label_4639b0;
        case 0x4639b4u: goto label_4639b4;
        case 0x4639b8u: goto label_4639b8;
        case 0x4639bcu: goto label_4639bc;
        case 0x4639c0u: goto label_4639c0;
        case 0x4639c4u: goto label_4639c4;
        case 0x4639c8u: goto label_4639c8;
        case 0x4639ccu: goto label_4639cc;
        case 0x4639d0u: goto label_4639d0;
        case 0x4639d4u: goto label_4639d4;
        case 0x4639d8u: goto label_4639d8;
        case 0x4639dcu: goto label_4639dc;
        case 0x4639e0u: goto label_4639e0;
        case 0x4639e4u: goto label_4639e4;
        case 0x4639e8u: goto label_4639e8;
        case 0x4639ecu: goto label_4639ec;
        case 0x4639f0u: goto label_4639f0;
        case 0x4639f4u: goto label_4639f4;
        case 0x4639f8u: goto label_4639f8;
        case 0x4639fcu: goto label_4639fc;
        case 0x463a00u: goto label_463a00;
        case 0x463a04u: goto label_463a04;
        case 0x463a08u: goto label_463a08;
        case 0x463a0cu: goto label_463a0c;
        case 0x463a10u: goto label_463a10;
        case 0x463a14u: goto label_463a14;
        case 0x463a18u: goto label_463a18;
        case 0x463a1cu: goto label_463a1c;
        case 0x463a20u: goto label_463a20;
        case 0x463a24u: goto label_463a24;
        case 0x463a28u: goto label_463a28;
        case 0x463a2cu: goto label_463a2c;
        case 0x463a30u: goto label_463a30;
        case 0x463a34u: goto label_463a34;
        case 0x463a38u: goto label_463a38;
        case 0x463a3cu: goto label_463a3c;
        case 0x463a40u: goto label_463a40;
        case 0x463a44u: goto label_463a44;
        case 0x463a48u: goto label_463a48;
        case 0x463a4cu: goto label_463a4c;
        case 0x463a50u: goto label_463a50;
        case 0x463a54u: goto label_463a54;
        case 0x463a58u: goto label_463a58;
        case 0x463a5cu: goto label_463a5c;
        default: break;
    }

    ctx->pc = 0x462d50u;

label_462d50:
    // 0x462d50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x462d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_462d54:
    // 0x462d54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x462d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_462d58:
    // 0x462d58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x462d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_462d5c:
    // 0x462d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x462d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_462d60:
    // 0x462d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x462d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_462d64:
    // 0x462d64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x462d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462d68:
    // 0x462d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x462d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_462d6c:
    // 0x462d6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x462d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_462d70:
    // 0x462d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x462d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_462d74:
    // 0x462d74: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x462d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_462d78:
    // 0x462d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462d7c:
    // 0x462d7c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x462d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_462d80:
    // 0x462d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462d84:
    // 0x462d84: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x462d84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_462d88:
    // 0x462d88: 0x1060013c  beqz        $v1, . + 4 + (0x13C << 2)
label_462d8c:
    if (ctx->pc == 0x462D8Cu) {
        ctx->pc = 0x462D8Cu;
            // 0x462d8c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462D90u;
        goto label_462d90;
    }
    ctx->pc = 0x462D88u;
    {
        const bool branch_taken_0x462d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x462D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462D88u;
            // 0x462d8c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462d88) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x462D90u;
label_462d90:
    // 0x462d90: 0x8ea30210  lw          $v1, 0x210($s5)
    ctx->pc = 0x462d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
label_462d94:
    // 0x462d94: 0x5060013a  beql        $v1, $zero, . + 4 + (0x13A << 2)
label_462d98:
    if (ctx->pc == 0x462D98u) {
        ctx->pc = 0x462D98u;
            // 0x462d98: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x462D9Cu;
        goto label_462d9c;
    }
    ctx->pc = 0x462D94u;
    {
        const bool branch_taken_0x462d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462d94) {
            ctx->pc = 0x462D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462D94u;
            // 0x462d98: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463280u;
            goto label_463280;
        }
    }
    ctx->pc = 0x462D9Cu;
label_462d9c:
    // 0x462d9c: 0x8ea400d8  lw          $a0, 0xD8($s5)
    ctx->pc = 0x462d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_462da0:
    // 0x462da0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x462da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_462da4:
    // 0x462da4: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_462da8:
    if (ctx->pc == 0x462DA8u) {
        ctx->pc = 0x462DA8u;
            // 0x462da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462DACu;
        goto label_462dac;
    }
    ctx->pc = 0x462DA4u;
    {
        const bool branch_taken_0x462da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x462da4) {
            ctx->pc = 0x462DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462DA4u;
            // 0x462da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462DB8u;
            goto label_462db8;
        }
    }
    ctx->pc = 0x462DACu;
label_462dac:
    // 0x462dac: 0x10000133  b           . + 4 + (0x133 << 2)
label_462db0:
    if (ctx->pc == 0x462DB0u) {
        ctx->pc = 0x462DB4u;
        goto label_462db4;
    }
    ctx->pc = 0x462DACu;
    {
        const bool branch_taken_0x462dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462dac) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x462DB4u;
label_462db4:
    // 0x462db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x462db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462db8:
    // 0x462db8: 0xc04f278  jal         func_13C9E0
label_462dbc:
    if (ctx->pc == 0x462DBCu) {
        ctx->pc = 0x462DBCu;
            // 0x462dbc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x462DC0u;
        goto label_462dc0;
    }
    ctx->pc = 0x462DB8u;
    SET_GPR_U32(ctx, 31, 0x462DC0u);
    ctx->pc = 0x462DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462DB8u;
            // 0x462dbc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462DC0u; }
        if (ctx->pc != 0x462DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462DC0u; }
        if (ctx->pc != 0x462DC0u) { return; }
    }
    ctx->pc = 0x462DC0u;
label_462dc0:
    // 0x462dc0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x462dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_462dc4:
    // 0x462dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x462dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462dc8:
    // 0x462dc8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x462dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_462dcc:
    // 0x462dcc: 0xc6a002a8  lwc1        $f0, 0x2A8($s5)
    ctx->pc = 0x462dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_462dd0:
    // 0x462dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x462dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_462dd4:
    // 0x462dd4: 0x0  nop
    ctx->pc = 0x462dd4u;
    // NOP
label_462dd8:
    // 0x462dd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x462dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_462ddc:
    // 0x462ddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x462ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_462de0:
    // 0x462de0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x462de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_462de4:
    // 0x462de4: 0xc04cdf0  jal         func_1337C0
label_462de8:
    if (ctx->pc == 0x462DE8u) {
        ctx->pc = 0x462DE8u;
            // 0x462de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462DECu;
        goto label_462dec;
    }
    ctx->pc = 0x462DE4u;
    SET_GPR_U32(ctx, 31, 0x462DECu);
    ctx->pc = 0x462DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462DE4u;
            // 0x462de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462DECu; }
        if (ctx->pc != 0x462DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462DECu; }
        if (ctx->pc != 0x462DECu) { return; }
    }
    ctx->pc = 0x462DECu;
label_462dec:
    // 0x462dec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x462decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_462df0:
    // 0x462df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x462df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462df4:
    // 0x462df4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x462df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_462df8:
    // 0x462df8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x462df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462dfc:
    // 0x462dfc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x462dfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_462e00:
    // 0x462e00: 0xc04ce50  jal         func_133940
label_462e04:
    if (ctx->pc == 0x462E04u) {
        ctx->pc = 0x462E04u;
            // 0x462e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x462E08u;
        goto label_462e08;
    }
    ctx->pc = 0x462E00u;
    SET_GPR_U32(ctx, 31, 0x462E08u);
    ctx->pc = 0x462E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462E00u;
            // 0x462e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E08u; }
        if (ctx->pc != 0x462E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E08u; }
        if (ctx->pc != 0x462E08u) { return; }
    }
    ctx->pc = 0x462E08u;
label_462e08:
    // 0x462e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x462e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462e0c:
    // 0x462e0c: 0xc04ce80  jal         func_133A00
label_462e10:
    if (ctx->pc == 0x462E10u) {
        ctx->pc = 0x462E10u;
            // 0x462e10: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x462E14u;
        goto label_462e14;
    }
    ctx->pc = 0x462E0Cu;
    SET_GPR_U32(ctx, 31, 0x462E14u);
    ctx->pc = 0x462E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462E0Cu;
            // 0x462e10: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E14u; }
        if (ctx->pc != 0x462E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E14u; }
        if (ctx->pc != 0x462E14u) { return; }
    }
    ctx->pc = 0x462E14u;
label_462e14:
    // 0x462e14: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x462e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_462e18:
    // 0x462e18: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x462e18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_462e1c:
    // 0x462e1c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x462e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_462e20:
    // 0x462e20: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x462e20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_462e24:
    // 0x462e24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462e28:
    // 0x462e28: 0x8c710130  lw          $s1, 0x130($v1)
    ctx->pc = 0x462e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_462e2c:
    // 0x462e2c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x462e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_462e30:
    // 0x462e30: 0xc07698c  jal         func_1DA630
label_462e34:
    if (ctx->pc == 0x462E34u) {
        ctx->pc = 0x462E34u;
            // 0x462e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462E38u;
        goto label_462e38;
    }
    ctx->pc = 0x462E30u;
    SET_GPR_U32(ctx, 31, 0x462E38u);
    ctx->pc = 0x462E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462E30u;
            // 0x462e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E38u; }
        if (ctx->pc != 0x462E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E38u; }
        if (ctx->pc != 0x462E38u) { return; }
    }
    ctx->pc = 0x462E38u;
label_462e38:
    // 0x462e38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x462e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_462e3c:
    // 0x462e3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_462e40:
    if (ctx->pc == 0x462E40u) {
        ctx->pc = 0x462E44u;
        goto label_462e44;
    }
    ctx->pc = 0x462E3Cu;
    {
        const bool branch_taken_0x462e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x462e3c) {
            ctx->pc = 0x462E4Cu;
            goto label_462e4c;
        }
    }
    ctx->pc = 0x462E44u;
label_462e44:
    // 0x462e44: 0x10000034  b           . + 4 + (0x34 << 2)
label_462e48:
    if (ctx->pc == 0x462E48u) {
        ctx->pc = 0x462E48u;
            // 0x462e48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x462E4Cu;
        goto label_462e4c;
    }
    ctx->pc = 0x462E44u;
    {
        const bool branch_taken_0x462e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462E44u;
            // 0x462e48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462e44) {
            ctx->pc = 0x462F18u;
            goto label_462f18;
        }
    }
    ctx->pc = 0x462E4Cu;
label_462e4c:
    // 0x462e4c: 0xc0576f4  jal         func_15DBD0
label_462e50:
    if (ctx->pc == 0x462E50u) {
        ctx->pc = 0x462E54u;
        goto label_462e54;
    }
    ctx->pc = 0x462E4Cu;
    SET_GPR_U32(ctx, 31, 0x462E54u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E54u; }
        if (ctx->pc != 0x462E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E54u; }
        if (ctx->pc != 0x462E54u) { return; }
    }
    ctx->pc = 0x462E54u;
label_462e54:
    // 0x462e54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x462e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462e58:
    // 0x462e58: 0xc076984  jal         func_1DA610
label_462e5c:
    if (ctx->pc == 0x462E5Cu) {
        ctx->pc = 0x462E5Cu;
            // 0x462e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462E60u;
        goto label_462e60;
    }
    ctx->pc = 0x462E58u;
    SET_GPR_U32(ctx, 31, 0x462E60u);
    ctx->pc = 0x462E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462E58u;
            // 0x462e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E60u; }
        if (ctx->pc != 0x462E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462E60u; }
        if (ctx->pc != 0x462E60u) { return; }
    }
    ctx->pc = 0x462E60u;
label_462e60:
    // 0x462e60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x462e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462e64:
    // 0x462e64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x462e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_462e68:
    // 0x462e68: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x462e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_462e6c:
    // 0x462e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x462e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462e70:
    // 0x462e70: 0xc4420650  lwc1        $f2, 0x650($v0)
    ctx->pc = 0x462e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_462e74:
    // 0x462e74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x462e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462e78:
    // 0x462e78: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x462e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_462e7c:
    // 0x462e7c: 0xc4410658  lwc1        $f1, 0x658($v0)
    ctx->pc = 0x462e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_462e80:
    // 0x462e80: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x462e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_462e84:
    // 0x462e84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x462e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_462e88:
    // 0x462e88: 0xc440065c  lwc1        $f0, 0x65C($v0)
    ctx->pc = 0x462e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_462e8c:
    // 0x462e8c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x462e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_462e90:
    // 0x462e90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x462e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_462e94:
    // 0x462e94: 0x8c420654  lw          $v0, 0x654($v0)
    ctx->pc = 0x462e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
label_462e98:
    // 0x462e98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x462e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_462e9c:
    // 0x462e9c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x462e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_462ea0:
    // 0x462ea0: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x462ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_462ea4:
    // 0x462ea4: 0xc04cca0  jal         func_133280
label_462ea8:
    if (ctx->pc == 0x462EA8u) {
        ctx->pc = 0x462EA8u;
            // 0x462ea8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x462EACu;
        goto label_462eac;
    }
    ctx->pc = 0x462EA4u;
    SET_GPR_U32(ctx, 31, 0x462EACu);
    ctx->pc = 0x462EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462EA4u;
            // 0x462ea8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EACu; }
        if (ctx->pc != 0x462EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EACu; }
        if (ctx->pc != 0x462EACu) { return; }
    }
    ctx->pc = 0x462EACu;
label_462eac:
    // 0x462eac: 0xc076980  jal         func_1DA600
label_462eb0:
    if (ctx->pc == 0x462EB0u) {
        ctx->pc = 0x462EB0u;
            // 0x462eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462EB4u;
        goto label_462eb4;
    }
    ctx->pc = 0x462EACu;
    SET_GPR_U32(ctx, 31, 0x462EB4u);
    ctx->pc = 0x462EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462EACu;
            // 0x462eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EB4u; }
        if (ctx->pc != 0x462EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EB4u; }
        if (ctx->pc != 0x462EB4u) { return; }
    }
    ctx->pc = 0x462EB4u;
label_462eb4:
    // 0x462eb4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x462eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_462eb8:
    // 0x462eb8: 0xc04cc34  jal         func_1330D0
label_462ebc:
    if (ctx->pc == 0x462EBCu) {
        ctx->pc = 0x462EBCu;
            // 0x462ebc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462EC0u;
        goto label_462ec0;
    }
    ctx->pc = 0x462EB8u;
    SET_GPR_U32(ctx, 31, 0x462EC0u);
    ctx->pc = 0x462EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462EB8u;
            // 0x462ebc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EC0u; }
        if (ctx->pc != 0x462EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EC0u; }
        if (ctx->pc != 0x462EC0u) { return; }
    }
    ctx->pc = 0x462EC0u;
label_462ec0:
    // 0x462ec0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x462ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_462ec4:
    // 0x462ec4: 0xc461e698  lwc1        $f1, -0x1968($v1)
    ctx->pc = 0x462ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_462ec8:
    // 0x462ec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x462ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_462ecc:
    // 0x462ecc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_462ed0:
    if (ctx->pc == 0x462ED0u) {
        ctx->pc = 0x462ED0u;
            // 0x462ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462ED4u;
        goto label_462ed4;
    }
    ctx->pc = 0x462ECCu;
    {
        const bool branch_taken_0x462ecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x462ecc) {
            ctx->pc = 0x462ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462ECCu;
            // 0x462ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462EE0u;
            goto label_462ee0;
        }
    }
    ctx->pc = 0x462ED4u;
label_462ed4:
    // 0x462ed4: 0x10000010  b           . + 4 + (0x10 << 2)
label_462ed8:
    if (ctx->pc == 0x462ED8u) {
        ctx->pc = 0x462ED8u;
            // 0x462ed8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x462EDCu;
        goto label_462edc;
    }
    ctx->pc = 0x462ED4u;
    {
        const bool branch_taken_0x462ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462ED4u;
            // 0x462ed8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462ed4) {
            ctx->pc = 0x462F18u;
            goto label_462f18;
        }
    }
    ctx->pc = 0x462EDCu;
label_462edc:
    // 0x462edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462ee0:
    // 0x462ee0: 0xc07697c  jal         func_1DA5F0
label_462ee4:
    if (ctx->pc == 0x462EE4u) {
        ctx->pc = 0x462EE8u;
        goto label_462ee8;
    }
    ctx->pc = 0x462EE0u;
    SET_GPR_U32(ctx, 31, 0x462EE8u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EE8u; }
        if (ctx->pc != 0x462EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EE8u; }
        if (ctx->pc != 0x462EE8u) { return; }
    }
    ctx->pc = 0x462EE8u;
label_462ee8:
    // 0x462ee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x462ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462eec:
    // 0x462eec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x462eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_462ef0:
    // 0x462ef0: 0xc04cd60  jal         func_133580
label_462ef4:
    if (ctx->pc == 0x462EF4u) {
        ctx->pc = 0x462EF4u;
            // 0x462ef4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462EF8u;
        goto label_462ef8;
    }
    ctx->pc = 0x462EF0u;
    SET_GPR_U32(ctx, 31, 0x462EF8u);
    ctx->pc = 0x462EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462EF0u;
            // 0x462ef4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EF8u; }
        if (ctx->pc != 0x462EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462EF8u; }
        if (ctx->pc != 0x462EF8u) { return; }
    }
    ctx->pc = 0x462EF8u;
label_462ef8:
    // 0x462ef8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x462ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_462efc:
    // 0x462efc: 0xc04c650  jal         func_131940
label_462f00:
    if (ctx->pc == 0x462F00u) {
        ctx->pc = 0x462F00u;
            // 0x462f00: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x462F04u;
        goto label_462f04;
    }
    ctx->pc = 0x462EFCu;
    SET_GPR_U32(ctx, 31, 0x462F04u);
    ctx->pc = 0x462F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462EFCu;
            // 0x462f00: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F04u; }
        if (ctx->pc != 0x462F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F04u; }
        if (ctx->pc != 0x462F04u) { return; }
    }
    ctx->pc = 0x462F04u;
label_462f04:
    // 0x462f04: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x462f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_462f08:
    // 0x462f08: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x462f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_462f0c:
    // 0x462f0c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x462f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_462f10:
    // 0x462f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x462f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_462f14:
    // 0x462f14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x462f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_462f18:
    // 0x462f18: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x462f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_462f1c:
    // 0x462f1c: 0x102000d7  beqz        $at, . + 4 + (0xD7 << 2)
label_462f20:
    if (ctx->pc == 0x462F20u) {
        ctx->pc = 0x462F20u;
            // 0x462f20: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x462F24u;
        goto label_462f24;
    }
    ctx->pc = 0x462F1Cu;
    {
        const bool branch_taken_0x462f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x462F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462F1Cu;
            // 0x462f20: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462f1c) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x462F24u;
label_462f24:
    // 0x462f24: 0x8ea400d8  lw          $a0, 0xD8($s5)
    ctx->pc = 0x462f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_462f28:
    // 0x462f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x462f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_462f2c:
    // 0x462f2c: 0x508300a6  beql        $a0, $v1, . + 4 + (0xA6 << 2)
label_462f30:
    if (ctx->pc == 0x462F30u) {
        ctx->pc = 0x462F30u;
            // 0x462f30: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x462F34u;
        goto label_462f34;
    }
    ctx->pc = 0x462F2Cu;
    {
        const bool branch_taken_0x462f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462f2c) {
            ctx->pc = 0x462F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462F2Cu;
            // 0x462f30: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4631C8u;
            goto label_4631c8;
        }
    }
    ctx->pc = 0x462F34u;
label_462f34:
    // 0x462f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462f38:
    // 0x462f38: 0x50830058  beql        $a0, $v1, . + 4 + (0x58 << 2)
label_462f3c:
    if (ctx->pc == 0x462F3Cu) {
        ctx->pc = 0x462F3Cu;
            // 0x462f3c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x462F40u;
        goto label_462f40;
    }
    ctx->pc = 0x462F38u;
    {
        const bool branch_taken_0x462f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462f38) {
            ctx->pc = 0x462F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462F38u;
            // 0x462f3c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46309Cu;
            goto label_46309c;
        }
    }
    ctx->pc = 0x462F40u;
label_462f40:
    // 0x462f40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_462f44:
    if (ctx->pc == 0x462F44u) {
        ctx->pc = 0x462F44u;
            // 0x462f44: 0x3c02bf33  lui         $v0, 0xBF33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
        ctx->pc = 0x462F48u;
        goto label_462f48;
    }
    ctx->pc = 0x462F40u;
    {
        const bool branch_taken_0x462f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x462f40) {
            ctx->pc = 0x462F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462F40u;
            // 0x462f44: 0x3c02bf33  lui         $v0, 0xBF33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462F54u;
            goto label_462f54;
        }
    }
    ctx->pc = 0x462F48u;
label_462f48:
    // 0x462f48: 0x100000cc  b           . + 4 + (0xCC << 2)
label_462f4c:
    if (ctx->pc == 0x462F4Cu) {
        ctx->pc = 0x462F50u;
        goto label_462f50;
    }
    ctx->pc = 0x462F48u;
    {
        const bool branch_taken_0x462f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462f48) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x462F50u;
label_462f50:
    // 0x462f50: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x462f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_462f54:
    // 0x462f54: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x462f54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_462f58:
    // 0x462f58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x462f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_462f5c:
    // 0x462f5c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x462f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_462f60:
    // 0x462f60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x462f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_462f64:
    // 0x462f64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x462f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_462f68:
    // 0x462f68: 0xc04f3fc  jal         func_13CFF0
label_462f6c:
    if (ctx->pc == 0x462F6Cu) {
        ctx->pc = 0x462F6Cu;
            // 0x462f6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x462F70u;
        goto label_462f70;
    }
    ctx->pc = 0x462F68u;
    SET_GPR_U32(ctx, 31, 0x462F70u);
    ctx->pc = 0x462F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462F68u;
            // 0x462f6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F70u; }
        if (ctx->pc != 0x462F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F70u; }
        if (ctx->pc != 0x462F70u) { return; }
    }
    ctx->pc = 0x462F70u;
label_462f70:
    // 0x462f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x462f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462f74:
    // 0x462f74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x462f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462f78:
    // 0x462f78: 0xc04cd60  jal         func_133580
label_462f7c:
    if (ctx->pc == 0x462F7Cu) {
        ctx->pc = 0x462F7Cu;
            // 0x462f7c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x462F80u;
        goto label_462f80;
    }
    ctx->pc = 0x462F78u;
    SET_GPR_U32(ctx, 31, 0x462F80u);
    ctx->pc = 0x462F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462F78u;
            // 0x462f7c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F80u; }
        if (ctx->pc != 0x462F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462F80u; }
        if (ctx->pc != 0x462F80u) { return; }
    }
    ctx->pc = 0x462F80u;
label_462f80:
    // 0x462f80: 0x92a202f8  lbu         $v0, 0x2F8($s5)
    ctx->pc = 0x462f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 760)));
label_462f84:
    // 0x462f84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_462f88:
    if (ctx->pc == 0x462F88u) {
        ctx->pc = 0x462F8Cu;
        goto label_462f8c;
    }
    ctx->pc = 0x462F84u;
    {
        const bool branch_taken_0x462f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462f84) {
            ctx->pc = 0x462FB8u;
            goto label_462fb8;
        }
    }
    ctx->pc = 0x462F8Cu;
label_462f8c:
    // 0x462f8c: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x462f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_462f90:
    // 0x462f90: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x462f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_462f94:
    // 0x462f94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x462f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462f98:
    // 0x462f98: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x462f98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_462f9c:
    // 0x462f9c: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x462f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_462fa0:
    // 0x462fa0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x462fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_462fa4:
    // 0x462fa4: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x462fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_462fa8:
    // 0x462fa8: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x462fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_462fac:
    // 0x462fac: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x462facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_462fb0:
    // 0x462fb0: 0xc04cce8  jal         func_1333A0
label_462fb4:
    if (ctx->pc == 0x462FB4u) {
        ctx->pc = 0x462FB4u;
            // 0x462fb4: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x462FB8u;
        goto label_462fb8;
    }
    ctx->pc = 0x462FB0u;
    SET_GPR_U32(ctx, 31, 0x462FB8u);
    ctx->pc = 0x462FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462FB0u;
            // 0x462fb4: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462FB8u; }
        if (ctx->pc != 0x462FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462FB8u; }
        if (ctx->pc != 0x462FB8u) { return; }
    }
    ctx->pc = 0x462FB8u;
label_462fb8:
    // 0x462fb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x462fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_462fbc:
    // 0x462fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x462fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_462fc0:
    // 0x462fc0: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x462fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_462fc4:
    // 0x462fc4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x462fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_462fc8:
    // 0x462fc8: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x462fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_462fcc:
    // 0x462fcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x462fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_462fd0:
    // 0x462fd0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x462fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_462fd4:
    // 0x462fd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x462fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_462fd8:
    // 0x462fd8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x462fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_462fdc:
    // 0x462fdc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x462fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_462fe0:
    // 0x462fe0: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x462fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_462fe4:
    // 0x462fe4: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x462fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_462fe8:
    // 0x462fe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x462fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_462fec:
    // 0x462fec: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x462fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_462ff0:
    // 0x462ff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x462ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_462ff4:
    // 0x462ff4: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x462ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_462ff8:
    // 0x462ff8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x462ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_462ffc:
    // 0x462ffc: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x462ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_463000:
    // 0x463000: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x463000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_463004:
    // 0x463004: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x463004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_463008:
    // 0x463008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x463008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46300c:
    // 0x46300c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x46300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_463010:
    // 0x463010: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x463010u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_463014:
    // 0x463014: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x463014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_463018:
    // 0x463018: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x463018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_46301c:
    // 0x46301c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_463020:
    // 0x463020: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x463020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_463024:
    // 0x463024: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x463024u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_463028:
    // 0x463028: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x463028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_46302c:
    // 0x46302c: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x46302cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_463030:
    // 0x463030: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x463030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_463034:
    // 0x463034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x463034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_463038:
    // 0x463038: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x463038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_46303c:
    // 0x46303c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x46303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_463040:
    // 0x463040: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x463040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_463044:
    // 0x463044: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x463044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_463048:
    // 0x463048: 0xc04e4a4  jal         func_139290
label_46304c:
    if (ctx->pc == 0x46304Cu) {
        ctx->pc = 0x46304Cu;
            // 0x46304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463050u;
        goto label_463050;
    }
    ctx->pc = 0x463048u;
    SET_GPR_U32(ctx, 31, 0x463050u);
    ctx->pc = 0x46304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463048u;
            // 0x46304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463050u; }
        if (ctx->pc != 0x463050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463050u; }
        if (ctx->pc != 0x463050u) { return; }
    }
    ctx->pc = 0x463050u;
label_463050:
    // 0x463050: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x463050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_463054:
    // 0x463054: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x463054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463058:
    // 0x463058: 0xc04cd60  jal         func_133580
label_46305c:
    if (ctx->pc == 0x46305Cu) {
        ctx->pc = 0x46305Cu;
            // 0x46305c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x463060u;
        goto label_463060;
    }
    ctx->pc = 0x463058u;
    SET_GPR_U32(ctx, 31, 0x463060u);
    ctx->pc = 0x46305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463058u;
            // 0x46305c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463060u; }
        if (ctx->pc != 0x463060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463060u; }
        if (ctx->pc != 0x463060u) { return; }
    }
    ctx->pc = 0x463060u;
label_463060:
    // 0x463060: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x463060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_463064:
    // 0x463064: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x463064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_463068:
    // 0x463068: 0x320f809  jalr        $t9
label_46306c:
    if (ctx->pc == 0x46306Cu) {
        ctx->pc = 0x46306Cu;
            // 0x46306c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463070u;
        goto label_463070;
    }
    ctx->pc = 0x463068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463070u);
        ctx->pc = 0x46306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463068u;
            // 0x46306c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463070u; }
            if (ctx->pc != 0x463070u) { return; }
        }
        }
    }
    ctx->pc = 0x463070u;
label_463070:
    // 0x463070: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x463070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_463074:
    // 0x463074: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x463074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_463078:
    // 0x463078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x463078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46307c:
    // 0x46307c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46307cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_463080:
    // 0x463080: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x463080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_463084:
    // 0x463084: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x463084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_463088:
    // 0x463088: 0xc04cfcc  jal         func_133F30
label_46308c:
    if (ctx->pc == 0x46308Cu) {
        ctx->pc = 0x46308Cu;
            // 0x46308c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463090u;
        goto label_463090;
    }
    ctx->pc = 0x463088u;
    SET_GPR_U32(ctx, 31, 0x463090u);
    ctx->pc = 0x46308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463088u;
            // 0x46308c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463090u; }
        if (ctx->pc != 0x463090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463090u; }
        if (ctx->pc != 0x463090u) { return; }
    }
    ctx->pc = 0x463090u;
label_463090:
    // 0x463090: 0x1000007a  b           . + 4 + (0x7A << 2)
label_463094:
    if (ctx->pc == 0x463094u) {
        ctx->pc = 0x463098u;
        goto label_463098;
    }
    ctx->pc = 0x463090u;
    {
        const bool branch_taken_0x463090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463090) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x463098u;
label_463098:
    // 0x463098: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x463098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46309c:
    // 0x46309c: 0xc04e738  jal         func_139CE0
label_4630a0:
    if (ctx->pc == 0x4630A0u) {
        ctx->pc = 0x4630A0u;
            // 0x4630a0: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4630A4u;
        goto label_4630a4;
    }
    ctx->pc = 0x46309Cu;
    SET_GPR_U32(ctx, 31, 0x4630A4u);
    ctx->pc = 0x4630A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46309Cu;
            // 0x4630a0: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4630A4u; }
        if (ctx->pc != 0x4630A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4630A4u; }
        if (ctx->pc != 0x4630A4u) { return; }
    }
    ctx->pc = 0x4630A4u;
label_4630a4:
    // 0x4630a4: 0x92a202f8  lbu         $v0, 0x2F8($s5)
    ctx->pc = 0x4630a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 760)));
label_4630a8:
    // 0x4630a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4630ac:
    if (ctx->pc == 0x4630ACu) {
        ctx->pc = 0x4630B0u;
        goto label_4630b0;
    }
    ctx->pc = 0x4630A8u;
    {
        const bool branch_taken_0x4630a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4630a8) {
            ctx->pc = 0x4630DCu;
            goto label_4630dc;
        }
    }
    ctx->pc = 0x4630B0u;
label_4630b0:
    // 0x4630b0: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x4630b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_4630b4:
    // 0x4630b4: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x4630b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_4630b8:
    // 0x4630b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4630b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4630bc:
    // 0x4630bc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4630bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4630c0:
    // 0x4630c0: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4630c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4630c4:
    // 0x4630c4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4630c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4630c8:
    // 0x4630c8: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x4630c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_4630cc:
    // 0x4630cc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4630ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4630d0:
    // 0x4630d0: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4630d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4630d4:
    // 0x4630d4: 0xc04cce8  jal         func_1333A0
label_4630d8:
    if (ctx->pc == 0x4630D8u) {
        ctx->pc = 0x4630D8u;
            // 0x4630d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4630DCu;
        goto label_4630dc;
    }
    ctx->pc = 0x4630D4u;
    SET_GPR_U32(ctx, 31, 0x4630DCu);
    ctx->pc = 0x4630D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4630D4u;
            // 0x4630d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4630DCu; }
        if (ctx->pc != 0x4630DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4630DCu; }
        if (ctx->pc != 0x4630DCu) { return; }
    }
    ctx->pc = 0x4630DCu;
label_4630dc:
    // 0x4630dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4630dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4630e0:
    // 0x4630e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4630e4:
    // 0x4630e4: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4630e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4630e8:
    // 0x4630e8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4630e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4630ec:
    // 0x4630ec: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4630ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4630f0:
    // 0x4630f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4630f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4630f4:
    // 0x4630f4: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4630f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4630f8:
    // 0x4630f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4630f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4630fc:
    // 0x4630fc: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4630fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_463100:
    // 0x463100: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x463100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_463104:
    // 0x463104: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x463104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_463108:
    // 0x463108: 0x86b021  addu        $s6, $a0, $a2
    ctx->pc = 0x463108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_46310c:
    // 0x46310c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46310cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_463110:
    // 0x463110: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x463110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_463114:
    // 0x463114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x463114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_463118:
    // 0x463118: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x463118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_46311c:
    // 0x46311c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x46311cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_463120:
    // 0x463120: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x463120u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_463124:
    // 0x463124: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x463124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_463128:
    // 0x463128: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x463128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_46312c:
    // 0x46312c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46312cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463130:
    // 0x463130: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x463130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_463134:
    // 0x463134: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x463134u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_463138:
    // 0x463138: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x463138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46313c:
    // 0x46313c: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x46313cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_463140:
    // 0x463140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x463140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_463144:
    // 0x463144: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x463144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_463148:
    // 0x463148: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x463148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_46314c:
    // 0x46314c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x46314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_463150:
    // 0x463150: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x463150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_463154:
    // 0x463154: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x463154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_463158:
    // 0x463158: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x463158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46315c:
    // 0x46315c: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x46315cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_463160:
    // 0x463160: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x463160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_463164:
    // 0x463164: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x463164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_463168:
    // 0x463168: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x463168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_46316c:
    // 0x46316c: 0xc04e4a4  jal         func_139290
label_463170:
    if (ctx->pc == 0x463170u) {
        ctx->pc = 0x463170u;
            // 0x463170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463174u;
        goto label_463174;
    }
    ctx->pc = 0x46316Cu;
    SET_GPR_U32(ctx, 31, 0x463174u);
    ctx->pc = 0x463170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46316Cu;
            // 0x463170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463174u; }
        if (ctx->pc != 0x463174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463174u; }
        if (ctx->pc != 0x463174u) { return; }
    }
    ctx->pc = 0x463174u;
label_463174:
    // 0x463174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x463174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_463178:
    // 0x463178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46317c:
    // 0x46317c: 0xc04cd60  jal         func_133580
label_463180:
    if (ctx->pc == 0x463180u) {
        ctx->pc = 0x463180u;
            // 0x463180: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463184u;
        goto label_463184;
    }
    ctx->pc = 0x46317Cu;
    SET_GPR_U32(ctx, 31, 0x463184u);
    ctx->pc = 0x463180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46317Cu;
            // 0x463180: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463184u; }
        if (ctx->pc != 0x463184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463184u; }
        if (ctx->pc != 0x463184u) { return; }
    }
    ctx->pc = 0x463184u;
label_463184:
    // 0x463184: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x463184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_463188:
    // 0x463188: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x463188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_46318c:
    // 0x46318c: 0x320f809  jalr        $t9
label_463190:
    if (ctx->pc == 0x463190u) {
        ctx->pc = 0x463190u;
            // 0x463190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463194u;
        goto label_463194;
    }
    ctx->pc = 0x46318Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463194u);
        ctx->pc = 0x463190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46318Cu;
            // 0x463190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463194u; }
            if (ctx->pc != 0x463194u) { return; }
        }
        }
    }
    ctx->pc = 0x463194u;
label_463194:
    // 0x463194: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x463194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_463198:
    // 0x463198: 0xc6ac0298  lwc1        $f12, 0x298($s5)
    ctx->pc = 0x463198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46319c:
    // 0x46319c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x46319cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4631a0:
    // 0x4631a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4631a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4631a4:
    // 0x4631a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4631a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4631a8:
    // 0x4631a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4631a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4631ac:
    // 0x4631ac: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4631acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4631b0:
    // 0x4631b0: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4631b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4631b4:
    // 0x4631b4: 0xc04cff4  jal         func_133FD0
label_4631b8:
    if (ctx->pc == 0x4631B8u) {
        ctx->pc = 0x4631B8u;
            // 0x4631b8: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4631BCu;
        goto label_4631bc;
    }
    ctx->pc = 0x4631B4u;
    SET_GPR_U32(ctx, 31, 0x4631BCu);
    ctx->pc = 0x4631B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4631B4u;
            // 0x4631b8: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4631BCu; }
        if (ctx->pc != 0x4631BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4631BCu; }
        if (ctx->pc != 0x4631BCu) { return; }
    }
    ctx->pc = 0x4631BCu;
label_4631bc:
    // 0x4631bc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4631c0:
    if (ctx->pc == 0x4631C0u) {
        ctx->pc = 0x4631C4u;
        goto label_4631c4;
    }
    ctx->pc = 0x4631BCu;
    {
        const bool branch_taken_0x4631bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4631bc) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x4631C4u;
label_4631c4:
    // 0x4631c4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x4631c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_4631c8:
    // 0x4631c8: 0xc04e738  jal         func_139CE0
label_4631cc:
    if (ctx->pc == 0x4631CCu) {
        ctx->pc = 0x4631CCu;
            // 0x4631cc: 0x8e910010  lw          $s1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x4631D0u;
        goto label_4631d0;
    }
    ctx->pc = 0x4631C8u;
    SET_GPR_U32(ctx, 31, 0x4631D0u);
    ctx->pc = 0x4631CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4631C8u;
            // 0x4631cc: 0x8e910010  lw          $s1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4631D0u; }
        if (ctx->pc != 0x4631D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4631D0u; }
        if (ctx->pc != 0x4631D0u) { return; }
    }
    ctx->pc = 0x4631D0u;
label_4631d0:
    // 0x4631d0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x4631d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4631d4:
    // 0x4631d4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x4631d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_4631d8:
    // 0x4631d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4631d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4631dc:
    // 0x4631dc: 0x0  nop
    ctx->pc = 0x4631dcu;
    // NOP
label_4631e0:
    // 0x4631e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4631e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4631e4:
    // 0x4631e4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x4631e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_4631e8:
    // 0x4631e8: 0x92a202f8  lbu         $v0, 0x2F8($s5)
    ctx->pc = 0x4631e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 760)));
label_4631ec:
    // 0x4631ec: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4631f0:
    if (ctx->pc == 0x4631F0u) {
        ctx->pc = 0x4631F0u;
            // 0x4631f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4631F4u;
        goto label_4631f4;
    }
    ctx->pc = 0x4631ECu;
    {
        const bool branch_taken_0x4631ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4631ec) {
            ctx->pc = 0x4631F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4631ECu;
            // 0x4631f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463224u;
            goto label_463224;
        }
    }
    ctx->pc = 0x4631F4u;
label_4631f4:
    // 0x4631f4: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x4631f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_4631f8:
    // 0x4631f8: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x4631f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_4631fc:
    // 0x4631fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4631fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463200:
    // 0x463200: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x463200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_463204:
    // 0x463204: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x463204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_463208:
    // 0x463208: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x463208u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_46320c:
    // 0x46320c: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x46320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_463210:
    // 0x463210: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x463210u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_463214:
    // 0x463214: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x463214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_463218:
    // 0x463218: 0xc04cce8  jal         func_1333A0
label_46321c:
    if (ctx->pc == 0x46321Cu) {
        ctx->pc = 0x46321Cu;
            // 0x46321c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x463220u;
        goto label_463220;
    }
    ctx->pc = 0x463218u;
    SET_GPR_U32(ctx, 31, 0x463220u);
    ctx->pc = 0x46321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463218u;
            // 0x46321c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463220u; }
        if (ctx->pc != 0x463220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463220u; }
        if (ctx->pc != 0x463220u) { return; }
    }
    ctx->pc = 0x463220u;
label_463220:
    // 0x463220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x463220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_463224:
    // 0x463224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463228:
    // 0x463228: 0xc04cd60  jal         func_133580
label_46322c:
    if (ctx->pc == 0x46322Cu) {
        ctx->pc = 0x46322Cu;
            // 0x46322c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463230u;
        goto label_463230;
    }
    ctx->pc = 0x463228u;
    SET_GPR_U32(ctx, 31, 0x463230u);
    ctx->pc = 0x46322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463228u;
            // 0x46322c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463230u; }
        if (ctx->pc != 0x463230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463230u; }
        if (ctx->pc != 0x463230u) { return; }
    }
    ctx->pc = 0x463230u;
label_463230:
    // 0x463230: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x463230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_463234:
    // 0x463234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463238:
    // 0x463238: 0xc04e4a4  jal         func_139290
label_46323c:
    if (ctx->pc == 0x46323Cu) {
        ctx->pc = 0x46323Cu;
            // 0x46323c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463240u;
        goto label_463240;
    }
    ctx->pc = 0x463238u;
    SET_GPR_U32(ctx, 31, 0x463240u);
    ctx->pc = 0x46323Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463238u;
            // 0x46323c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463240u; }
        if (ctx->pc != 0x463240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463240u; }
        if (ctx->pc != 0x463240u) { return; }
    }
    ctx->pc = 0x463240u;
label_463240:
    // 0x463240: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x463240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_463244:
    // 0x463244: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x463244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_463248:
    // 0x463248: 0x320f809  jalr        $t9
label_46324c:
    if (ctx->pc == 0x46324Cu) {
        ctx->pc = 0x46324Cu;
            // 0x46324c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463250u;
        goto label_463250;
    }
    ctx->pc = 0x463248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463250u);
        ctx->pc = 0x46324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463248u;
            // 0x46324c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463250u; }
            if (ctx->pc != 0x463250u) { return; }
        }
        }
    }
    ctx->pc = 0x463250u;
label_463250:
    // 0x463250: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x463250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463254:
    // 0x463254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463258:
    // 0x463258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x463258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46325c:
    // 0x46325c: 0xc054fd4  jal         func_153F50
label_463260:
    if (ctx->pc == 0x463260u) {
        ctx->pc = 0x463260u;
            // 0x463260: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463264u;
        goto label_463264;
    }
    ctx->pc = 0x46325Cu;
    SET_GPR_U32(ctx, 31, 0x463264u);
    ctx->pc = 0x463260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46325Cu;
            // 0x463260: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463264u; }
        if (ctx->pc != 0x463264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463264u; }
        if (ctx->pc != 0x463264u) { return; }
    }
    ctx->pc = 0x463264u;
label_463264:
    // 0x463264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x463264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_463268:
    // 0x463268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x463268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46326c:
    // 0x46326c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463270:
    // 0x463270: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x463270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_463274:
    // 0x463274: 0xc0550f8  jal         func_1543E0
label_463278:
    if (ctx->pc == 0x463278u) {
        ctx->pc = 0x463278u;
            // 0x463278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46327Cu;
        goto label_46327c;
    }
    ctx->pc = 0x463274u;
    SET_GPR_U32(ctx, 31, 0x46327Cu);
    ctx->pc = 0x463278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463274u;
            // 0x463278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46327Cu; }
        if (ctx->pc != 0x46327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46327Cu; }
        if (ctx->pc != 0x46327Cu) { return; }
    }
    ctx->pc = 0x46327Cu;
label_46327c:
    // 0x46327c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_463280:
    // 0x463280: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x463280u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_463284:
    // 0x463284: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x463284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_463288:
    // 0x463288: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x463288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46328c:
    // 0x46328c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46328cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_463290:
    // 0x463290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x463290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_463294:
    // 0x463294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_463298:
    // 0x463298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46329c:
    // 0x46329c: 0x3e00008  jr          $ra
label_4632a0:
    if (ctx->pc == 0x4632A0u) {
        ctx->pc = 0x4632A0u;
            // 0x4632a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4632A4u;
        goto label_4632a4;
    }
    ctx->pc = 0x46329Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4632A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46329Cu;
            // 0x4632a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4632A4u;
label_4632a4:
    // 0x4632a4: 0x0  nop
    ctx->pc = 0x4632a4u;
    // NOP
label_4632a8:
    // 0x4632a8: 0x0  nop
    ctx->pc = 0x4632a8u;
    // NOP
label_4632ac:
    // 0x4632ac: 0x0  nop
    ctx->pc = 0x4632acu;
    // NOP
label_4632b0:
    // 0x4632b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4632b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4632b4:
    // 0x4632b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4632b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4632b8:
    // 0x4632b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4632b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4632bc:
    // 0x4632bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4632bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4632c0:
    // 0x4632c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4632c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4632c4:
    // 0x4632c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4632c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4632c8:
    // 0x4632c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4632c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4632cc:
    // 0x4632cc: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4632ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4632d0:
    // 0x4632d0: 0x10a301dc  beq         $a1, $v1, . + 4 + (0x1DC << 2)
label_4632d4:
    if (ctx->pc == 0x4632D4u) {
        ctx->pc = 0x4632D4u;
            // 0x4632d4: 0x265100e0  addiu       $s1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4632D8u;
        goto label_4632d8;
    }
    ctx->pc = 0x4632D0u;
    {
        const bool branch_taken_0x4632d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4632D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4632D0u;
            // 0x4632d4: 0x265100e0  addiu       $s1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4632d0) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x4632D8u;
label_4632d8:
    // 0x4632d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4632d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4632dc:
    // 0x4632dc: 0x50a3004e  beql        $a1, $v1, . + 4 + (0x4E << 2)
label_4632e0:
    if (ctx->pc == 0x4632E0u) {
        ctx->pc = 0x4632E0u;
            // 0x4632e0: 0x8e500050  lw          $s0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x4632E4u;
        goto label_4632e4;
    }
    ctx->pc = 0x4632DCu;
    {
        const bool branch_taken_0x4632dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4632dc) {
            ctx->pc = 0x4632E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4632DCu;
            // 0x4632e0: 0x8e500050  lw          $s0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463418u;
            goto label_463418;
        }
    }
    ctx->pc = 0x4632E4u;
label_4632e4:
    // 0x4632e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4632e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4632e8:
    // 0x4632e8: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
label_4632ec:
    if (ctx->pc == 0x4632ECu) {
        ctx->pc = 0x4632F0u;
        goto label_4632f0;
    }
    ctx->pc = 0x4632E8u;
    {
        const bool branch_taken_0x4632e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4632e8) {
            ctx->pc = 0x46339Cu;
            goto label_46339c;
        }
    }
    ctx->pc = 0x4632F0u;
label_4632f0:
    // 0x4632f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4632f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4632f4:
    // 0x4632f4: 0x50a301d4  beql        $a1, $v1, . + 4 + (0x1D4 << 2)
label_4632f8:
    if (ctx->pc == 0x4632F8u) {
        ctx->pc = 0x4632F8u;
            // 0x4632f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4632FCu;
        goto label_4632fc;
    }
    ctx->pc = 0x4632F4u;
    {
        const bool branch_taken_0x4632f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4632f4) {
            ctx->pc = 0x4632F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4632F4u;
            // 0x4632f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463A48u;
            goto label_463a48;
        }
    }
    ctx->pc = 0x4632FCu;
label_4632fc:
    // 0x4632fc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_463300:
    if (ctx->pc == 0x463300u) {
        ctx->pc = 0x463300u;
            // 0x463300: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x463304u;
        goto label_463304;
    }
    ctx->pc = 0x4632FCu;
    {
        const bool branch_taken_0x4632fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4632fc) {
            ctx->pc = 0x463300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4632FCu;
            // 0x463300: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46330Cu;
            goto label_46330c;
        }
    }
    ctx->pc = 0x463304u;
label_463304:
    // 0x463304: 0x100001cf  b           . + 4 + (0x1CF << 2)
label_463308:
    if (ctx->pc == 0x463308u) {
        ctx->pc = 0x46330Cu;
        goto label_46330c;
    }
    ctx->pc = 0x463304u;
    {
        const bool branch_taken_0x463304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463304) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x46330Cu;
label_46330c:
    // 0x46330c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x46330cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_463310:
    // 0x463310: 0x320f809  jalr        $t9
label_463314:
    if (ctx->pc == 0x463314u) {
        ctx->pc = 0x463318u;
        goto label_463318;
    }
    ctx->pc = 0x463310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463318u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x463318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463318u; }
            if (ctx->pc != 0x463318u) { return; }
        }
        }
    }
    ctx->pc = 0x463318u;
label_463318:
    // 0x463318: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x463318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_46331c:
    // 0x46331c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x46331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_463320:
    // 0x463320: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x463320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_463324:
    // 0x463324: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x463324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_463328:
    // 0x463328: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x463328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46332c:
    // 0x46332c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x46332cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_463330:
    // 0x463330: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x463330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_463334:
    // 0x463334: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x463334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_463338:
    // 0x463338: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x463338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_46333c:
    // 0x46333c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x46333cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_463340:
    // 0x463340: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x463340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_463344:
    // 0x463344: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x463344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_463348:
    // 0x463348: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x463348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46334c:
    // 0x46334c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x46334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_463350:
    // 0x463350: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x463350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_463354:
    // 0x463354: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x463354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_463358:
    // 0x463358: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x463358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_46335c:
    // 0x46335c: 0xc0892b0  jal         func_224AC0
label_463360:
    if (ctx->pc == 0x463360u) {
        ctx->pc = 0x463360u;
            // 0x463360: 0xe7a300cc  swc1        $f3, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x463364u;
        goto label_463364;
    }
    ctx->pc = 0x46335Cu;
    SET_GPR_U32(ctx, 31, 0x463364u);
    ctx->pc = 0x463360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46335Cu;
            // 0x463360: 0xe7a300cc  swc1        $f3, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463364u; }
        if (ctx->pc != 0x463364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463364u; }
        if (ctx->pc != 0x463364u) { return; }
    }
    ctx->pc = 0x463364u;
label_463364:
    // 0x463364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463368:
    // 0x463368: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x463368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_46336c:
    // 0x46336c: 0x924302f8  lbu         $v1, 0x2F8($s2)
    ctx->pc = 0x46336cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
label_463370:
    // 0x463370: 0x106001b4  beqz        $v1, . + 4 + (0x1B4 << 2)
label_463374:
    if (ctx->pc == 0x463374u) {
        ctx->pc = 0x463378u;
        goto label_463378;
    }
    ctx->pc = 0x463370u;
    {
        const bool branch_taken_0x463370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463370) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x463378u;
label_463378:
    // 0x463378: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x463378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_46337c:
    // 0x46337c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x46337cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_463380:
    // 0x463380: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x463380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_463384:
    // 0x463384: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x463384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_463388:
    // 0x463388: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x463388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_46338c:
    // 0x46338c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x46338cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_463390:
    // 0x463390: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x463390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_463394:
    // 0x463394: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_463398:
    if (ctx->pc == 0x463398u) {
        ctx->pc = 0x463398u;
            // 0x463398: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46339Cu;
        goto label_46339c;
    }
    ctx->pc = 0x463394u;
    {
        const bool branch_taken_0x463394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463394u;
            // 0x463398: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463394) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x46339Cu;
label_46339c:
    // 0x46339c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x46339cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4633a0:
    // 0x4633a0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4633a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4633a4:
    // 0x4633a4: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x4633a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4633a8:
    // 0x4633a8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4633a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4633ac:
    // 0x4633ac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x4633acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4633b0:
    // 0x4633b0: 0xe621012c  swc1        $f1, 0x12C($s1)
    ctx->pc = 0x4633b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
label_4633b4:
    // 0x4633b4: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x4633b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4633b8:
    // 0x4633b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4633b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4633bc:
    // 0x4633bc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4633c0:
    if (ctx->pc == 0x4633C0u) {
        ctx->pc = 0x4633C0u;
            // 0x4633c0: 0x924302f8  lbu         $v1, 0x2F8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
        ctx->pc = 0x4633C4u;
        goto label_4633c4;
    }
    ctx->pc = 0x4633BCu;
    {
        const bool branch_taken_0x4633bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4633bc) {
            ctx->pc = 0x4633C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4633BCu;
            // 0x4633c0: 0x924302f8  lbu         $v1, 0x2F8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4633D4u;
            goto label_4633d4;
        }
    }
    ctx->pc = 0x4633C4u;
label_4633c4:
    // 0x4633c4: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x4633c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_4633c8:
    // 0x4633c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4633c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4633cc:
    // 0x4633cc: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x4633ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
label_4633d0:
    // 0x4633d0: 0x924302f8  lbu         $v1, 0x2F8($s2)
    ctx->pc = 0x4633d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
label_4633d4:
    // 0x4633d4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_4633d8:
    if (ctx->pc == 0x4633D8u) {
        ctx->pc = 0x4633D8u;
            // 0x4633d8: 0x8e440210  lw          $a0, 0x210($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
        ctx->pc = 0x4633DCu;
        goto label_4633dc;
    }
    ctx->pc = 0x4633D4u;
    {
        const bool branch_taken_0x4633d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4633d4) {
            ctx->pc = 0x4633D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4633D4u;
            // 0x4633d8: 0x8e440210  lw          $a0, 0x210($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463400u;
            goto label_463400;
        }
    }
    ctx->pc = 0x4633DCu;
label_4633dc:
    // 0x4633dc: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x4633dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_4633e0:
    // 0x4633e0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4633e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4633e4:
    // 0x4633e4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4633e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4633e8:
    // 0x4633e8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4633e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4633ec:
    // 0x4633ec: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x4633ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_4633f0:
    // 0x4633f0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4633f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4633f4:
    // 0x4633f4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4633f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4633f8:
    // 0x4633f8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4633f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4633fc:
    // 0x4633fc: 0x8e440210  lw          $a0, 0x210($s2)
    ctx->pc = 0x4633fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_463400:
    // 0x463400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463404:
    // 0x463404: 0x1483018f  bne         $a0, $v1, . + 4 + (0x18F << 2)
label_463408:
    if (ctx->pc == 0x463408u) {
        ctx->pc = 0x46340Cu;
        goto label_46340c;
    }
    ctx->pc = 0x463404u;
    {
        const bool branch_taken_0x463404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x463404) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x46340Cu;
label_46340c:
    // 0x46340c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46340cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_463410:
    // 0x463410: 0x1000018c  b           . + 4 + (0x18C << 2)
label_463414:
    if (ctx->pc == 0x463414u) {
        ctx->pc = 0x463414u;
            // 0x463414: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x463418u;
        goto label_463418;
    }
    ctx->pc = 0x463410u;
    {
        const bool branch_taken_0x463410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463410u;
            // 0x463414: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463410) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x463418u;
label_463418:
    // 0x463418: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x463418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_46341c:
    // 0x46341c: 0xc0dc9bc  jal         func_3726F0
label_463420:
    if (ctx->pc == 0x463420u) {
        ctx->pc = 0x463420u;
            // 0x463420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463424u;
        goto label_463424;
    }
    ctx->pc = 0x46341Cu;
    SET_GPR_U32(ctx, 31, 0x463424u);
    ctx->pc = 0x463420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46341Cu;
            // 0x463420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463424u; }
        if (ctx->pc != 0x463424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463424u; }
        if (ctx->pc != 0x463424u) { return; }
    }
    ctx->pc = 0x463424u;
label_463424:
    // 0x463424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463428:
    // 0x463428: 0xc0dc9a0  jal         func_372680
label_46342c:
    if (ctx->pc == 0x46342Cu) {
        ctx->pc = 0x46342Cu;
            // 0x46342c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x463430u;
        goto label_463430;
    }
    ctx->pc = 0x463428u;
    SET_GPR_U32(ctx, 31, 0x463430u);
    ctx->pc = 0x46342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463428u;
            // 0x46342c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463430u; }
        if (ctx->pc != 0x463430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463430u; }
        if (ctx->pc != 0x463430u) { return; }
    }
    ctx->pc = 0x463430u;
label_463430:
    // 0x463430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x463430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_463434:
    // 0x463434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463438:
    // 0x463438: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x463438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_46343c:
    // 0x46343c: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x46343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_463440:
    // 0x463440: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x463440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_463444:
    // 0x463444: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x463444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_463448:
    // 0x463448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x463448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_46344c:
    // 0x46344c: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x46344cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
label_463450:
    // 0x463450: 0x8e4202ac  lw          $v0, 0x2AC($s2)
    ctx->pc = 0x463450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 684)));
label_463454:
    // 0x463454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x463454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_463458:
    // 0x463458: 0xc118ffc  jal         func_463FF0
label_46345c:
    if (ctx->pc == 0x46345Cu) {
        ctx->pc = 0x46345Cu;
            // 0x46345c: 0xae4202ac  sw          $v0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
        ctx->pc = 0x463460u;
        goto label_463460;
    }
    ctx->pc = 0x463458u;
    SET_GPR_U32(ctx, 31, 0x463460u);
    ctx->pc = 0x46345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463458u;
            // 0x46345c: 0xae4202ac  sw          $v0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FF0u;
    if (runtime->hasFunction(0x463FF0u)) {
        auto targetFn = runtime->lookupFunction(0x463FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463460u; }
        if (ctx->pc != 0x463460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FF0_0x463ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463460u; }
        if (ctx->pc != 0x463460u) { return; }
    }
    ctx->pc = 0x463460u;
label_463460:
    // 0x463460: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x463460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_463464:
    // 0x463464: 0x50200154  beql        $at, $zero, . + 4 + (0x154 << 2)
label_463468:
    if (ctx->pc == 0x463468u) {
        ctx->pc = 0x463468u;
            // 0x463468: 0x924302f8  lbu         $v1, 0x2F8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
        ctx->pc = 0x46346Cu;
        goto label_46346c;
    }
    ctx->pc = 0x463464u;
    {
        const bool branch_taken_0x463464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x463464) {
            ctx->pc = 0x463468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x463464u;
            // 0x463468: 0x924302f8  lbu         $v1, 0x2F8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4639B8u;
            goto label_4639b8;
        }
    }
    ctx->pc = 0x46346Cu;
label_46346c:
    // 0x46346c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46346cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_463470:
    // 0x463470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x463470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_463474:
    // 0x463474: 0x2484e720  addiu       $a0, $a0, -0x18E0
    ctx->pc = 0x463474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960928));
label_463478:
    // 0x463478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x463478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46347c:
    // 0x46347c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_463480:
    // 0x463480: 0x600008  jr          $v1
label_463484:
    if (ctx->pc == 0x463484u) {
        ctx->pc = 0x463488u;
        goto label_463488;
    }
    ctx->pc = 0x463480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x463488u: goto label_463488;
            case 0x4636B4u: goto label_4636b4;
            case 0x463790u: goto label_463790;
            case 0x463890u: goto label_463890;
            case 0x463944u: goto label_463944;
            case 0x4639B4u: goto label_4639b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x463488u;
label_463488:
    // 0x463488: 0xc0dc408  jal         func_371020
label_46348c:
    if (ctx->pc == 0x46348Cu) {
        ctx->pc = 0x46348Cu;
            // 0x46348c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x463490u;
        goto label_463490;
    }
    ctx->pc = 0x463488u;
    SET_GPR_U32(ctx, 31, 0x463490u);
    ctx->pc = 0x46348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463488u;
            // 0x46348c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463490u; }
        if (ctx->pc != 0x463490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463490u; }
        if (ctx->pc != 0x463490u) { return; }
    }
    ctx->pc = 0x463490u;
label_463490:
    // 0x463490: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463494:
    // 0x463494: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463498:
    // 0x463498: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x463498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_46349c:
    // 0x46349c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46349cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4634a0:
    // 0x4634a0: 0xc0d88a4  jal         func_362290
label_4634a4:
    if (ctx->pc == 0x4634A4u) {
        ctx->pc = 0x4634A4u;
            // 0x4634a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4634A8u;
        goto label_4634a8;
    }
    ctx->pc = 0x4634A0u;
    SET_GPR_U32(ctx, 31, 0x4634A8u);
    ctx->pc = 0x4634A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634A0u;
            // 0x4634a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634A8u; }
        if (ctx->pc != 0x4634A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634A8u; }
        if (ctx->pc != 0x4634A8u) { return; }
    }
    ctx->pc = 0x4634A8u;
label_4634a8:
    // 0x4634a8: 0xc0e5f68  jal         func_397DA0
label_4634ac:
    if (ctx->pc == 0x4634ACu) {
        ctx->pc = 0x4634ACu;
            // 0x4634ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4634B0u;
        goto label_4634b0;
    }
    ctx->pc = 0x4634A8u;
    SET_GPR_U32(ctx, 31, 0x4634B0u);
    ctx->pc = 0x4634ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634A8u;
            // 0x4634ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634B0u; }
        if (ctx->pc != 0x4634B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634B0u; }
        if (ctx->pc != 0x4634B0u) { return; }
    }
    ctx->pc = 0x4634B0u;
label_4634b0:
    // 0x4634b0: 0xc0d1c10  jal         func_347040
label_4634b4:
    if (ctx->pc == 0x4634B4u) {
        ctx->pc = 0x4634B4u;
            // 0x4634b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4634B8u;
        goto label_4634b8;
    }
    ctx->pc = 0x4634B0u;
    SET_GPR_U32(ctx, 31, 0x4634B8u);
    ctx->pc = 0x4634B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634B0u;
            // 0x4634b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634B8u; }
        if (ctx->pc != 0x4634B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634B8u; }
        if (ctx->pc != 0x4634B8u) { return; }
    }
    ctx->pc = 0x4634B8u;
label_4634b8:
    // 0x4634b8: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x4634b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_4634bc:
    // 0x4634bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4634bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4634c0:
    // 0x4634c0: 0xc122d2c  jal         func_48B4B0
label_4634c4:
    if (ctx->pc == 0x4634C4u) {
        ctx->pc = 0x4634C4u;
            // 0x4634c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4634C8u;
        goto label_4634c8;
    }
    ctx->pc = 0x4634C0u;
    SET_GPR_U32(ctx, 31, 0x4634C8u);
    ctx->pc = 0x4634C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634C0u;
            // 0x4634c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634C8u; }
        if (ctx->pc != 0x4634C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634C8u; }
        if (ctx->pc != 0x4634C8u) { return; }
    }
    ctx->pc = 0x4634C8u;
label_4634c8:
    // 0x4634c8: 0xc0dd890  jal         func_376240
label_4634cc:
    if (ctx->pc == 0x4634CCu) {
        ctx->pc = 0x4634CCu;
            // 0x4634cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4634D0u;
        goto label_4634d0;
    }
    ctx->pc = 0x4634C8u;
    SET_GPR_U32(ctx, 31, 0x4634D0u);
    ctx->pc = 0x4634CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634C8u;
            // 0x4634cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634D0u; }
        if (ctx->pc != 0x4634D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634D0u; }
        if (ctx->pc != 0x4634D0u) { return; }
    }
    ctx->pc = 0x4634D0u;
label_4634d0:
    // 0x4634d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4634d4:
    if (ctx->pc == 0x4634D4u) {
        ctx->pc = 0x4634D4u;
            // 0x4634d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4634D8u;
        goto label_4634d8;
    }
    ctx->pc = 0x4634D0u;
    {
        const bool branch_taken_0x4634d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4634d0) {
            ctx->pc = 0x4634D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4634D0u;
            // 0x4634d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463504u;
            goto label_463504;
        }
    }
    ctx->pc = 0x4634D8u;
label_4634d8:
    // 0x4634d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4634d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4634dc:
    // 0x4634dc: 0xc118ff8  jal         func_463FE0
label_4634e0:
    if (ctx->pc == 0x4634E0u) {
        ctx->pc = 0x4634E0u;
            // 0x4634e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4634E4u;
        goto label_4634e4;
    }
    ctx->pc = 0x4634DCu;
    SET_GPR_U32(ctx, 31, 0x4634E4u);
    ctx->pc = 0x4634E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634DCu;
            // 0x4634e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FE0u;
    if (runtime->hasFunction(0x463FE0u)) {
        auto targetFn = runtime->lookupFunction(0x463FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634E4u; }
        if (ctx->pc != 0x4634E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FE0_0x463fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634E4u; }
        if (ctx->pc != 0x4634E4u) { return; }
    }
    ctx->pc = 0x4634E4u;
label_4634e4:
    // 0x4634e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4634e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4634e8:
    // 0x4634e8: 0xc118ff4  jal         func_463FD0
label_4634ec:
    if (ctx->pc == 0x4634ECu) {
        ctx->pc = 0x4634ECu;
            // 0x4634ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4634F0u;
        goto label_4634f0;
    }
    ctx->pc = 0x4634E8u;
    SET_GPR_U32(ctx, 31, 0x4634F0u);
    ctx->pc = 0x4634ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634E8u;
            // 0x4634ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634F0u; }
        if (ctx->pc != 0x4634F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4634F0u; }
        if (ctx->pc != 0x4634F0u) { return; }
    }
    ctx->pc = 0x4634F0u;
label_4634f0:
    // 0x4634f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4634f4:
    // 0x4634f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4634f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4634f8:
    // 0x4634f8: 0xc118fe0  jal         func_463F80
label_4634fc:
    if (ctx->pc == 0x4634FCu) {
        ctx->pc = 0x4634FCu;
            // 0x4634fc: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x463500u;
        goto label_463500;
    }
    ctx->pc = 0x4634F8u;
    SET_GPR_U32(ctx, 31, 0x463500u);
    ctx->pc = 0x4634FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4634F8u;
            // 0x4634fc: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463F80u;
    if (runtime->hasFunction(0x463F80u)) {
        auto targetFn = runtime->lookupFunction(0x463F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463500u; }
        if (ctx->pc != 0x463500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463F80_0x463f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463500u; }
        if (ctx->pc != 0x463500u) { return; }
    }
    ctx->pc = 0x463500u;
label_463500:
    // 0x463500: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x463500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_463504:
    // 0x463504: 0xc04f26c  jal         func_13C9B0
label_463508:
    if (ctx->pc == 0x463508u) {
        ctx->pc = 0x46350Cu;
        goto label_46350c;
    }
    ctx->pc = 0x463504u;
    SET_GPR_U32(ctx, 31, 0x46350Cu);
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46350Cu; }
        if (ctx->pc != 0x46350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46350Cu; }
        if (ctx->pc != 0x46350Cu) { return; }
    }
    ctx->pc = 0x46350Cu;
label_46350c:
    // 0x46350c: 0xc0d1c14  jal         func_347050
label_463510:
    if (ctx->pc == 0x463510u) {
        ctx->pc = 0x463510u;
            // 0x463510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463514u;
        goto label_463514;
    }
    ctx->pc = 0x46350Cu;
    SET_GPR_U32(ctx, 31, 0x463514u);
    ctx->pc = 0x463510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46350Cu;
            // 0x463510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463514u; }
        if (ctx->pc != 0x463514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463514u; }
        if (ctx->pc != 0x463514u) { return; }
    }
    ctx->pc = 0x463514u;
label_463514:
    // 0x463514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463518:
    // 0x463518: 0xc04f278  jal         func_13C9E0
label_46351c:
    if (ctx->pc == 0x46351Cu) {
        ctx->pc = 0x46351Cu;
            // 0x46351c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x463520u;
        goto label_463520;
    }
    ctx->pc = 0x463518u;
    SET_GPR_U32(ctx, 31, 0x463520u);
    ctx->pc = 0x46351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463518u;
            // 0x46351c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463520u; }
        if (ctx->pc != 0x463520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463520u; }
        if (ctx->pc != 0x463520u) { return; }
    }
    ctx->pc = 0x463520u;
label_463520:
    // 0x463520: 0xc0d1c10  jal         func_347040
label_463524:
    if (ctx->pc == 0x463524u) {
        ctx->pc = 0x463524u;
            // 0x463524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463528u;
        goto label_463528;
    }
    ctx->pc = 0x463520u;
    SET_GPR_U32(ctx, 31, 0x463528u);
    ctx->pc = 0x463524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463520u;
            // 0x463524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463528u; }
        if (ctx->pc != 0x463528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463528u; }
        if (ctx->pc != 0x463528u) { return; }
    }
    ctx->pc = 0x463528u;
label_463528:
    // 0x463528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46352c:
    // 0x46352c: 0xc04ce80  jal         func_133A00
label_463530:
    if (ctx->pc == 0x463530u) {
        ctx->pc = 0x463530u;
            // 0x463530: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x463534u;
        goto label_463534;
    }
    ctx->pc = 0x46352Cu;
    SET_GPR_U32(ctx, 31, 0x463534u);
    ctx->pc = 0x463530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46352Cu;
            // 0x463530: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463534u; }
        if (ctx->pc != 0x463534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463534u; }
        if (ctx->pc != 0x463534u) { return; }
    }
    ctx->pc = 0x463534u;
label_463534:
    // 0x463534: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x463534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_463538:
    // 0x463538: 0xc04ccf4  jal         func_1333D0
label_46353c:
    if (ctx->pc == 0x46353Cu) {
        ctx->pc = 0x46353Cu;
            // 0x46353c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463540u;
        goto label_463540;
    }
    ctx->pc = 0x463538u;
    SET_GPR_U32(ctx, 31, 0x463540u);
    ctx->pc = 0x46353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463538u;
            // 0x46353c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463540u; }
        if (ctx->pc != 0x463540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463540u; }
        if (ctx->pc != 0x463540u) { return; }
    }
    ctx->pc = 0x463540u;
label_463540:
    // 0x463540: 0xc077264  jal         func_1DC990
label_463544:
    if (ctx->pc == 0x463544u) {
        ctx->pc = 0x463544u;
            // 0x463544: 0x8e440290  lw          $a0, 0x290($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
        ctx->pc = 0x463548u;
        goto label_463548;
    }
    ctx->pc = 0x463540u;
    SET_GPR_U32(ctx, 31, 0x463548u);
    ctx->pc = 0x463544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463540u;
            // 0x463544: 0x8e440290  lw          $a0, 0x290($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463548u; }
        if (ctx->pc != 0x463548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463548u; }
        if (ctx->pc != 0x463548u) { return; }
    }
    ctx->pc = 0x463548u;
label_463548:
    // 0x463548: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x463548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46354c:
    // 0x46354c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_463550:
    // 0x463550: 0xc04cca0  jal         func_133280
label_463554:
    if (ctx->pc == 0x463554u) {
        ctx->pc = 0x463554u;
            // 0x463554: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x463558u;
        goto label_463558;
    }
    ctx->pc = 0x463550u;
    SET_GPR_U32(ctx, 31, 0x463558u);
    ctx->pc = 0x463554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463550u;
            // 0x463554: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463558u; }
        if (ctx->pc != 0x463558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463558u; }
        if (ctx->pc != 0x463558u) { return; }
    }
    ctx->pc = 0x463558u;
label_463558:
    // 0x463558: 0xc0bc1b4  jal         func_2F06D0
label_46355c:
    if (ctx->pc == 0x46355Cu) {
        ctx->pc = 0x463560u;
        goto label_463560;
    }
    ctx->pc = 0x463558u;
    SET_GPR_U32(ctx, 31, 0x463560u);
    ctx->pc = 0x2F06D0u;
    if (runtime->hasFunction(0x2F06D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463560u; }
        if (ctx->pc != 0x463560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06D0_0x2f06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463560u; }
        if (ctx->pc != 0x463560u) { return; }
    }
    ctx->pc = 0x463560u;
label_463560:
    // 0x463560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x463560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463564:
    // 0x463564: 0xc0d1c10  jal         func_347040
label_463568:
    if (ctx->pc == 0x463568u) {
        ctx->pc = 0x463568u;
            // 0x463568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46356Cu;
        goto label_46356c;
    }
    ctx->pc = 0x463564u;
    SET_GPR_U32(ctx, 31, 0x46356Cu);
    ctx->pc = 0x463568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463564u;
            // 0x463568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46356Cu; }
        if (ctx->pc != 0x46356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46356Cu; }
        if (ctx->pc != 0x46356Cu) { return; }
    }
    ctx->pc = 0x46356Cu;
label_46356c:
    // 0x46356c: 0x8e440290  lw          $a0, 0x290($s2)
    ctx->pc = 0x46356cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_463570:
    // 0x463570: 0xc077264  jal         func_1DC990
label_463574:
    if (ctx->pc == 0x463574u) {
        ctx->pc = 0x463574u;
            // 0x463574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463578u;
        goto label_463578;
    }
    ctx->pc = 0x463570u;
    SET_GPR_U32(ctx, 31, 0x463578u);
    ctx->pc = 0x463574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463570u;
            // 0x463574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463578u; }
        if (ctx->pc != 0x463578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463578u; }
        if (ctx->pc != 0x463578u) { return; }
    }
    ctx->pc = 0x463578u;
label_463578:
    // 0x463578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x463578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46357c:
    // 0x46357c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463580:
    // 0x463580: 0xc118fdc  jal         func_463F70
label_463584:
    if (ctx->pc == 0x463584u) {
        ctx->pc = 0x463584u;
            // 0x463584: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463588u;
        goto label_463588;
    }
    ctx->pc = 0x463580u;
    SET_GPR_U32(ctx, 31, 0x463588u);
    ctx->pc = 0x463584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463580u;
            // 0x463584: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463F70u;
    if (runtime->hasFunction(0x463F70u)) {
        auto targetFn = runtime->lookupFunction(0x463F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463588u; }
        if (ctx->pc != 0x463588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463F70_0x463f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463588u; }
        if (ctx->pc != 0x463588u) { return; }
    }
    ctx->pc = 0x463588u;
label_463588:
    // 0x463588: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x463588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
label_46358c:
    // 0x46358c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_463590:
    // 0x463590: 0x0  nop
    ctx->pc = 0x463590u;
    // NOP
label_463594:
    // 0x463594: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x463594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_463598:
    // 0x463598: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
label_46359c:
    if (ctx->pc == 0x46359Cu) {
        ctx->pc = 0x46359Cu;
            // 0x46359c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4635A0u;
        goto label_4635a0;
    }
    ctx->pc = 0x463598u;
    {
        const bool branch_taken_0x463598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x463598) {
            ctx->pc = 0x46359Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x463598u;
            // 0x46359c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4636A4u;
            goto label_4636a4;
        }
    }
    ctx->pc = 0x4635A0u;
label_4635a0:
    // 0x4635a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4635a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4635a4:
    // 0x4635a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4635a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4635a8:
    // 0x4635a8: 0x0  nop
    ctx->pc = 0x4635a8u;
    // NOP
label_4635ac:
    // 0x4635ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4635acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4635b0:
    // 0x4635b0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_4635b4:
    if (ctx->pc == 0x4635B4u) {
        ctx->pc = 0x4635B8u;
        goto label_4635b8;
    }
    ctx->pc = 0x4635B0u;
    {
        const bool branch_taken_0x4635b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4635b0) {
            ctx->pc = 0x4636A0u;
            goto label_4636a0;
        }
    }
    ctx->pc = 0x4635B8u;
label_4635b8:
    // 0x4635b8: 0x8e4302fc  lw          $v1, 0x2FC($s2)
    ctx->pc = 0x4635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 764)));
label_4635bc:
    // 0x4635bc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_4635c0:
    if (ctx->pc == 0x4635C0u) {
        ctx->pc = 0x4635C0u;
            // 0x4635c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4635C4u;
        goto label_4635c4;
    }
    ctx->pc = 0x4635BCu;
    {
        const bool branch_taken_0x4635bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4635bc) {
            ctx->pc = 0x4635C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4635BCu;
            // 0x4635c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4635D8u;
            goto label_4635d8;
        }
    }
    ctx->pc = 0x4635C4u;
label_4635c4:
    // 0x4635c4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4635c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4635c8:
    // 0x4635c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4635c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4635cc:
    // 0x4635cc: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_4635d0:
    if (ctx->pc == 0x4635D0u) {
        ctx->pc = 0x4635D0u;
            // 0x4635d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4635D4u;
        goto label_4635d4;
    }
    ctx->pc = 0x4635CCu;
    {
        const bool branch_taken_0x4635cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4635cc) {
            ctx->pc = 0x4635D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4635CCu;
            // 0x4635d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4635FCu;
            goto label_4635fc;
        }
    }
    ctx->pc = 0x4635D4u;
label_4635d4:
    // 0x4635d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4635d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4635d8:
    // 0x4635d8: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_4635dc:
    if (ctx->pc == 0x4635DCu) {
        ctx->pc = 0x4635DCu;
            // 0x4635dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4635E0u;
        goto label_4635e0;
    }
    ctx->pc = 0x4635D8u;
    {
        const bool branch_taken_0x4635d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4635d8) {
            ctx->pc = 0x4635DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4635D8u;
            // 0x4635dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463640u;
            goto label_463640;
        }
    }
    ctx->pc = 0x4635E0u;
label_4635e0:
    // 0x4635e0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x4635e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4635e4:
    // 0x4635e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4635e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4635e8:
    // 0x4635e8: 0x0  nop
    ctx->pc = 0x4635e8u;
    // NOP
label_4635ec:
    // 0x4635ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4635ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4635f0:
    // 0x4635f0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_4635f4:
    if (ctx->pc == 0x4635F4u) {
        ctx->pc = 0x4635F8u;
        goto label_4635f8;
    }
    ctx->pc = 0x4635F0u;
    {
        const bool branch_taken_0x4635f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4635f0) {
            ctx->pc = 0x46363Cu;
            goto label_46363c;
        }
    }
    ctx->pc = 0x4635F8u;
label_4635f8:
    // 0x4635f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4635f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4635fc:
    // 0x4635fc: 0xc118fa8  jal         func_463EA0
label_463600:
    if (ctx->pc == 0x463600u) {
        ctx->pc = 0x463600u;
            // 0x463600: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x463604u;
        goto label_463604;
    }
    ctx->pc = 0x4635FCu;
    SET_GPR_U32(ctx, 31, 0x463604u);
    ctx->pc = 0x463600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4635FCu;
            // 0x463600: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463EA0u;
    if (runtime->hasFunction(0x463EA0u)) {
        auto targetFn = runtime->lookupFunction(0x463EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463604u; }
        if (ctx->pc != 0x463604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463EA0_0x463ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463604u; }
        if (ctx->pc != 0x463604u) { return; }
    }
    ctx->pc = 0x463604u;
label_463604:
    // 0x463604: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463608:
    // 0x463608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46360c:
    // 0x46360c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x46360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_463610:
    // 0x463610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x463610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_463614:
    // 0x463614: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x463614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_463618:
    // 0x463618: 0xc1191b4  jal         func_4646D0
label_46361c:
    if (ctx->pc == 0x46361Cu) {
        ctx->pc = 0x46361Cu;
            // 0x46361c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x463620u;
        goto label_463620;
    }
    ctx->pc = 0x463618u;
    SET_GPR_U32(ctx, 31, 0x463620u);
    ctx->pc = 0x46361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463618u;
            // 0x46361c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4646D0u;
    if (runtime->hasFunction(0x4646D0u)) {
        auto targetFn = runtime->lookupFunction(0x4646D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463620u; }
        if (ctx->pc != 0x463620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004646D0_0x4646d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463620u; }
        if (ctx->pc != 0x463620u) { return; }
    }
    ctx->pc = 0x463620u;
label_463620:
    // 0x463620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463624:
    // 0x463624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x463624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463628:
    // 0x463628: 0xc118ff4  jal         func_463FD0
label_46362c:
    if (ctx->pc == 0x46362Cu) {
        ctx->pc = 0x46362Cu;
            // 0x46362c: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->pc = 0x463630u;
        goto label_463630;
    }
    ctx->pc = 0x463628u;
    SET_GPR_U32(ctx, 31, 0x463630u);
    ctx->pc = 0x46362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463628u;
            // 0x46362c: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463630u; }
        if (ctx->pc != 0x463630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463630u; }
        if (ctx->pc != 0x463630u) { return; }
    }
    ctx->pc = 0x463630u;
label_463630:
    // 0x463630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x463630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463634:
    // 0x463634: 0x10000005  b           . + 4 + (0x5 << 2)
label_463638:
    if (ctx->pc == 0x463638u) {
        ctx->pc = 0x463638u;
            // 0x463638: 0xa2420300  sb          $v0, 0x300($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46363Cu;
        goto label_46363c;
    }
    ctx->pc = 0x463634u;
    {
        const bool branch_taken_0x463634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463634u;
            // 0x463638: 0xa2420300  sb          $v0, 0x300($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463634) {
            ctx->pc = 0x46364Cu;
            goto label_46364c;
        }
    }
    ctx->pc = 0x46363Cu;
label_46363c:
    // 0x46363c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463640:
    // 0x463640: 0xc118ff4  jal         func_463FD0
label_463644:
    if (ctx->pc == 0x463644u) {
        ctx->pc = 0x463644u;
            // 0x463644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x463648u;
        goto label_463648;
    }
    ctx->pc = 0x463640u;
    SET_GPR_U32(ctx, 31, 0x463648u);
    ctx->pc = 0x463644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463640u;
            // 0x463644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463648u; }
        if (ctx->pc != 0x463648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463648u; }
        if (ctx->pc != 0x463648u) { return; }
    }
    ctx->pc = 0x463648u;
label_463648:
    // 0x463648: 0xa2400300  sb          $zero, 0x300($s2)
    ctx->pc = 0x463648u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 0));
label_46364c:
    // 0x46364c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463650:
    // 0x463650: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x463650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_463654:
    // 0x463654: 0xc0dc408  jal         func_371020
label_463658:
    if (ctx->pc == 0x463658u) {
        ctx->pc = 0x463658u;
            // 0x463658: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x46365Cu;
        goto label_46365c;
    }
    ctx->pc = 0x463654u;
    SET_GPR_U32(ctx, 31, 0x46365Cu);
    ctx->pc = 0x463658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463654u;
            // 0x463658: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46365Cu; }
        if (ctx->pc != 0x46365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46365Cu; }
        if (ctx->pc != 0x46365Cu) { return; }
    }
    ctx->pc = 0x46365Cu;
label_46365c:
    // 0x46365c: 0xc118fa4  jal         func_463E90
label_463660:
    if (ctx->pc == 0x463660u) {
        ctx->pc = 0x463660u;
            // 0x463660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463664u;
        goto label_463664;
    }
    ctx->pc = 0x46365Cu;
    SET_GPR_U32(ctx, 31, 0x463664u);
    ctx->pc = 0x463660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46365Cu;
            // 0x463660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463E90u;
    if (runtime->hasFunction(0x463E90u)) {
        auto targetFn = runtime->lookupFunction(0x463E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463664u; }
        if (ctx->pc != 0x463664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E90_0x463e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463664u; }
        if (ctx->pc != 0x463664u) { return; }
    }
    ctx->pc = 0x463664u;
label_463664:
    // 0x463664: 0xc118fa0  jal         func_463E80
label_463668:
    if (ctx->pc == 0x463668u) {
        ctx->pc = 0x463668u;
            // 0x463668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46366Cu;
        goto label_46366c;
    }
    ctx->pc = 0x463664u;
    SET_GPR_U32(ctx, 31, 0x46366Cu);
    ctx->pc = 0x463668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463664u;
            // 0x463668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463E80u;
    if (runtime->hasFunction(0x463E80u)) {
        auto targetFn = runtime->lookupFunction(0x463E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46366Cu; }
        if (ctx->pc != 0x46366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E80_0x463e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46366Cu; }
        if (ctx->pc != 0x46366Cu) { return; }
    }
    ctx->pc = 0x46366Cu;
label_46366c:
    // 0x46366c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46366cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_463670:
    // 0x463670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463674:
    // 0x463674: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x463674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_463678:
    // 0x463678: 0x320f809  jalr        $t9
label_46367c:
    if (ctx->pc == 0x46367Cu) {
        ctx->pc = 0x46367Cu;
            // 0x46367c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463680u;
        goto label_463680;
    }
    ctx->pc = 0x463678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463680u);
        ctx->pc = 0x46367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463678u;
            // 0x46367c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463680u; }
            if (ctx->pc != 0x463680u) { return; }
        }
        }
    }
    ctx->pc = 0x463680u;
label_463680:
    // 0x463680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x463680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_463684:
    // 0x463684: 0xc118fa4  jal         func_463E90
label_463688:
    if (ctx->pc == 0x463688u) {
        ctx->pc = 0x463688u;
            // 0x463688: 0xae420294  sw          $v0, 0x294($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 2));
        ctx->pc = 0x46368Cu;
        goto label_46368c;
    }
    ctx->pc = 0x463684u;
    SET_GPR_U32(ctx, 31, 0x46368Cu);
    ctx->pc = 0x463688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463684u;
            // 0x463688: 0xae420294  sw          $v0, 0x294($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463E90u;
    if (runtime->hasFunction(0x463E90u)) {
        auto targetFn = runtime->lookupFunction(0x463E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46368Cu; }
        if (ctx->pc != 0x46368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E90_0x463e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46368Cu; }
        if (ctx->pc != 0x46368Cu) { return; }
    }
    ctx->pc = 0x46368Cu;
label_46368c:
    // 0x46368c: 0xc118f9c  jal         func_463E70
label_463690:
    if (ctx->pc == 0x463690u) {
        ctx->pc = 0x463690u;
            // 0x463690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463694u;
        goto label_463694;
    }
    ctx->pc = 0x46368Cu;
    SET_GPR_U32(ctx, 31, 0x463694u);
    ctx->pc = 0x463690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46368Cu;
            // 0x463690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463E70u;
    if (runtime->hasFunction(0x463E70u)) {
        auto targetFn = runtime->lookupFunction(0x463E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463694u; }
        if (ctx->pc != 0x463694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E70_0x463e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463694u; }
        if (ctx->pc != 0x463694u) { return; }
    }
    ctx->pc = 0x463694u;
label_463694:
    // 0x463694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463698:
    // 0x463698: 0xc118f78  jal         func_463DE0
label_46369c:
    if (ctx->pc == 0x46369Cu) {
        ctx->pc = 0x46369Cu;
            // 0x46369c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4636A0u;
        goto label_4636a0;
    }
    ctx->pc = 0x463698u;
    SET_GPR_U32(ctx, 31, 0x4636A0u);
    ctx->pc = 0x46369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463698u;
            // 0x46369c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463DE0u;
    if (runtime->hasFunction(0x463DE0u)) {
        auto targetFn = runtime->lookupFunction(0x463DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636A0u; }
        if (ctx->pc != 0x4636A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463DE0_0x463de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636A0u; }
        if (ctx->pc != 0x4636A0u) { return; }
    }
    ctx->pc = 0x4636A0u;
label_4636a0:
    // 0x4636a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4636a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4636a4:
    // 0x4636a4: 0xc119078  jal         func_4641E0
label_4636a8:
    if (ctx->pc == 0x4636A8u) {
        ctx->pc = 0x4636ACu;
        goto label_4636ac;
    }
    ctx->pc = 0x4636A4u;
    SET_GPR_U32(ctx, 31, 0x4636ACu);
    ctx->pc = 0x4641E0u;
    if (runtime->hasFunction(0x4641E0u)) {
        auto targetFn = runtime->lookupFunction(0x4641E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636ACu; }
        if (ctx->pc != 0x4636ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004641E0_0x4641e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636ACu; }
        if (ctx->pc != 0x4636ACu) { return; }
    }
    ctx->pc = 0x4636ACu;
label_4636ac:
    // 0x4636ac: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_4636b0:
    if (ctx->pc == 0x4636B0u) {
        ctx->pc = 0x4636B4u;
        goto label_4636b4;
    }
    ctx->pc = 0x4636ACu;
    {
        const bool branch_taken_0x4636ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4636ac) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x4636B4u;
label_4636b4:
    // 0x4636b4: 0xc118f68  jal         func_463DA0
label_4636b8:
    if (ctx->pc == 0x4636B8u) {
        ctx->pc = 0x4636B8u;
            // 0x4636b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4636BCu;
        goto label_4636bc;
    }
    ctx->pc = 0x4636B4u;
    SET_GPR_U32(ctx, 31, 0x4636BCu);
    ctx->pc = 0x4636B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4636B4u;
            // 0x4636b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463DA0u;
    if (runtime->hasFunction(0x463DA0u)) {
        auto targetFn = runtime->lookupFunction(0x463DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636BCu; }
        if (ctx->pc != 0x4636BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463DA0_0x463da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636BCu; }
        if (ctx->pc != 0x4636BCu) { return; }
    }
    ctx->pc = 0x4636BCu;
label_4636bc:
    // 0x4636bc: 0xc0775b8  jal         func_1DD6E0
label_4636c0:
    if (ctx->pc == 0x4636C0u) {
        ctx->pc = 0x4636C4u;
        goto label_4636c4;
    }
    ctx->pc = 0x4636BCu;
    SET_GPR_U32(ctx, 31, 0x4636C4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636C4u; }
        if (ctx->pc != 0x4636C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636C4u; }
        if (ctx->pc != 0x4636C4u) { return; }
    }
    ctx->pc = 0x4636C4u;
label_4636c4:
    // 0x4636c4: 0xc0775b4  jal         func_1DD6D0
label_4636c8:
    if (ctx->pc == 0x4636C8u) {
        ctx->pc = 0x4636C8u;
            // 0x4636c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4636CCu;
        goto label_4636cc;
    }
    ctx->pc = 0x4636C4u;
    SET_GPR_U32(ctx, 31, 0x4636CCu);
    ctx->pc = 0x4636C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4636C4u;
            // 0x4636c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636CCu; }
        if (ctx->pc != 0x4636CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636CCu; }
        if (ctx->pc != 0x4636CCu) { return; }
    }
    ctx->pc = 0x4636CCu;
label_4636cc:
    // 0x4636cc: 0xc64102a0  lwc1        $f1, 0x2A0($s2)
    ctx->pc = 0x4636ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4636d0:
    // 0x4636d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4636d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4636d4:
    // 0x4636d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4636d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4636d8:
    // 0x4636d8: 0xc119214  jal         func_464850
label_4636dc:
    if (ctx->pc == 0x4636DCu) {
        ctx->pc = 0x4636DCu;
            // 0x4636dc: 0xe64002a0  swc1        $f0, 0x2A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
        ctx->pc = 0x4636E0u;
        goto label_4636e0;
    }
    ctx->pc = 0x4636D8u;
    SET_GPR_U32(ctx, 31, 0x4636E0u);
    ctx->pc = 0x4636DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4636D8u;
            // 0x4636dc: 0xe64002a0  swc1        $f0, 0x2A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x464850u;
    if (runtime->hasFunction(0x464850u)) {
        auto targetFn = runtime->lookupFunction(0x464850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636E0u; }
        if (ctx->pc != 0x4636E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464850_0x464850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4636E0u; }
        if (ctx->pc != 0x4636E0u) { return; }
    }
    ctx->pc = 0x4636E0u;
label_4636e0:
    // 0x4636e0: 0xc64102a0  lwc1        $f1, 0x2A0($s2)
    ctx->pc = 0x4636e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4636e4:
    // 0x4636e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4636e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4636e8:
    // 0x4636e8: 0x0  nop
    ctx->pc = 0x4636e8u;
    // NOP
label_4636ec:
    // 0x4636ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4636ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4636f0:
    // 0x4636f0: 0x450000b0  bc1f        . + 4 + (0xB0 << 2)
label_4636f4:
    if (ctx->pc == 0x4636F4u) {
        ctx->pc = 0x4636F8u;
        goto label_4636f8;
    }
    ctx->pc = 0x4636F0u;
    {
        const bool branch_taken_0x4636f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4636f0) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x4636F8u;
label_4636f8:
    // 0x4636f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4636f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4636fc:
    // 0x4636fc: 0xc118fa8  jal         func_463EA0
label_463700:
    if (ctx->pc == 0x463700u) {
        ctx->pc = 0x463700u;
            // 0x463700: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x463704u;
        goto label_463704;
    }
    ctx->pc = 0x4636FCu;
    SET_GPR_U32(ctx, 31, 0x463704u);
    ctx->pc = 0x463700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4636FCu;
            // 0x463700: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463EA0u;
    if (runtime->hasFunction(0x463EA0u)) {
        auto targetFn = runtime->lookupFunction(0x463EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463704u; }
        if (ctx->pc != 0x463704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463EA0_0x463ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463704u; }
        if (ctx->pc != 0x463704u) { return; }
    }
    ctx->pc = 0x463704u;
label_463704:
    // 0x463704: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463708:
    // 0x463708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46370c:
    // 0x46370c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x46370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_463710:
    // 0x463710: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x463710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_463714:
    // 0x463714: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x463714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_463718:
    // 0x463718: 0xc1191b4  jal         func_4646D0
label_46371c:
    if (ctx->pc == 0x46371Cu) {
        ctx->pc = 0x46371Cu;
            // 0x46371c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x463720u;
        goto label_463720;
    }
    ctx->pc = 0x463718u;
    SET_GPR_U32(ctx, 31, 0x463720u);
    ctx->pc = 0x46371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463718u;
            // 0x46371c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4646D0u;
    if (runtime->hasFunction(0x4646D0u)) {
        auto targetFn = runtime->lookupFunction(0x4646D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463720u; }
        if (ctx->pc != 0x463720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004646D0_0x4646d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463720u; }
        if (ctx->pc != 0x463720u) { return; }
    }
    ctx->pc = 0x463720u;
label_463720:
    // 0x463720: 0x3c023f5b  lui         $v0, 0x3F5B
    ctx->pc = 0x463720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16219 << 16));
label_463724:
    // 0x463724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463728:
    // 0x463728: 0x3442425f  ori         $v0, $v0, 0x425F
    ctx->pc = 0x463728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16991);
label_46372c:
    // 0x46372c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46372cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_463730:
    // 0x463730: 0xc118f40  jal         func_463D00
label_463734:
    if (ctx->pc == 0x463734u) {
        ctx->pc = 0x463734u;
            // 0x463734: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x463738u;
        goto label_463738;
    }
    ctx->pc = 0x463730u;
    SET_GPR_U32(ctx, 31, 0x463738u);
    ctx->pc = 0x463734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463730u;
            // 0x463734: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463D00u;
    if (runtime->hasFunction(0x463D00u)) {
        auto targetFn = runtime->lookupFunction(0x463D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463738u; }
        if (ctx->pc != 0x463738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463D00_0x463d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463738u; }
        if (ctx->pc != 0x463738u) { return; }
    }
    ctx->pc = 0x463738u;
label_463738:
    // 0x463738: 0x26440280  addiu       $a0, $s2, 0x280
    ctx->pc = 0x463738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
label_46373c:
    // 0x46373c: 0xc04cc04  jal         func_133010
label_463740:
    if (ctx->pc == 0x463740u) {
        ctx->pc = 0x463740u;
            // 0x463740: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x463744u;
        goto label_463744;
    }
    ctx->pc = 0x46373Cu;
    SET_GPR_U32(ctx, 31, 0x463744u);
    ctx->pc = 0x463740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46373Cu;
            // 0x463740: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463744u; }
        if (ctx->pc != 0x463744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463744u; }
        if (ctx->pc != 0x463744u) { return; }
    }
    ctx->pc = 0x463744u;
label_463744:
    // 0x463744: 0xc0dc408  jal         func_371020
label_463748:
    if (ctx->pc == 0x463748u) {
        ctx->pc = 0x463748u;
            // 0x463748: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x46374Cu;
        goto label_46374c;
    }
    ctx->pc = 0x463744u;
    SET_GPR_U32(ctx, 31, 0x46374Cu);
    ctx->pc = 0x463748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463744u;
            // 0x463748: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46374Cu; }
        if (ctx->pc != 0x46374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46374Cu; }
        if (ctx->pc != 0x46374Cu) { return; }
    }
    ctx->pc = 0x46374Cu;
label_46374c:
    // 0x46374c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463750:
    // 0x463750: 0xc0dd810  jal         func_376040
label_463754:
    if (ctx->pc == 0x463754u) {
        ctx->pc = 0x463754u;
            // 0x463754: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x463758u;
        goto label_463758;
    }
    ctx->pc = 0x463750u;
    SET_GPR_U32(ctx, 31, 0x463758u);
    ctx->pc = 0x463754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463750u;
            // 0x463754: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376040u;
    if (runtime->hasFunction(0x376040u)) {
        auto targetFn = runtime->lookupFunction(0x376040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463758u; }
        if (ctx->pc != 0x463758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376040_0x376040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463758u; }
        if (ctx->pc != 0x463758u) { return; }
    }
    ctx->pc = 0x463758u;
label_463758:
    // 0x463758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46375c:
    // 0x46375c: 0xc118ff4  jal         func_463FD0
label_463760:
    if (ctx->pc == 0x463760u) {
        ctx->pc = 0x463760u;
            // 0x463760: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x463764u;
        goto label_463764;
    }
    ctx->pc = 0x46375Cu;
    SET_GPR_U32(ctx, 31, 0x463764u);
    ctx->pc = 0x463760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46375Cu;
            // 0x463760: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463764u; }
        if (ctx->pc != 0x463764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463764u; }
        if (ctx->pc != 0x463764u) { return; }
    }
    ctx->pc = 0x463764u;
label_463764:
    // 0x463764: 0xc118fa4  jal         func_463E90
label_463768:
    if (ctx->pc == 0x463768u) {
        ctx->pc = 0x46376Cu;
        goto label_46376c;
    }
    ctx->pc = 0x463764u;
    SET_GPR_U32(ctx, 31, 0x46376Cu);
    ctx->pc = 0x463E90u;
    if (runtime->hasFunction(0x463E90u)) {
        auto targetFn = runtime->lookupFunction(0x463E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46376Cu; }
        if (ctx->pc != 0x46376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E90_0x463e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46376Cu; }
        if (ctx->pc != 0x46376Cu) { return; }
    }
    ctx->pc = 0x46376Cu;
label_46376c:
    // 0x46376c: 0xc118f9c  jal         func_463E70
label_463770:
    if (ctx->pc == 0x463770u) {
        ctx->pc = 0x463770u;
            // 0x463770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463774u;
        goto label_463774;
    }
    ctx->pc = 0x46376Cu;
    SET_GPR_U32(ctx, 31, 0x463774u);
    ctx->pc = 0x463770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46376Cu;
            // 0x463770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463E70u;
    if (runtime->hasFunction(0x463E70u)) {
        auto targetFn = runtime->lookupFunction(0x463E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463774u; }
        if (ctx->pc != 0x463774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E70_0x463e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463774u; }
        if (ctx->pc != 0x463774u) { return; }
    }
    ctx->pc = 0x463774u;
label_463774:
    // 0x463774: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x463774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_463778:
    // 0x463778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46377c:
    // 0x46377c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463780:
    // 0x463780: 0xc118f28  jal         func_463CA0
label_463784:
    if (ctx->pc == 0x463784u) {
        ctx->pc = 0x463784u;
            // 0x463784: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463788u;
        goto label_463788;
    }
    ctx->pc = 0x463780u;
    SET_GPR_U32(ctx, 31, 0x463788u);
    ctx->pc = 0x463784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463780u;
            // 0x463784: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463CA0u;
    if (runtime->hasFunction(0x463CA0u)) {
        auto targetFn = runtime->lookupFunction(0x463CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463788u; }
        if (ctx->pc != 0x463788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463CA0_0x463ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463788u; }
        if (ctx->pc != 0x463788u) { return; }
    }
    ctx->pc = 0x463788u;
label_463788:
    // 0x463788: 0x1000008a  b           . + 4 + (0x8A << 2)
label_46378c:
    if (ctx->pc == 0x46378Cu) {
        ctx->pc = 0x463790u;
        goto label_463790;
    }
    ctx->pc = 0x463788u;
    {
        const bool branch_taken_0x463788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463788) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x463790u;
label_463790:
    // 0x463790: 0xc0d1c10  jal         func_347040
label_463794:
    if (ctx->pc == 0x463794u) {
        ctx->pc = 0x463794u;
            // 0x463794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463798u;
        goto label_463798;
    }
    ctx->pc = 0x463790u;
    SET_GPR_U32(ctx, 31, 0x463798u);
    ctx->pc = 0x463794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463790u;
            // 0x463794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463798u; }
        if (ctx->pc != 0x463798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463798u; }
        if (ctx->pc != 0x463798u) { return; }
    }
    ctx->pc = 0x463798u;
label_463798:
    // 0x463798: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x463798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_46379c:
    // 0x46379c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46379cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4637a0:
    // 0x4637a0: 0xc122d2c  jal         func_48B4B0
label_4637a4:
    if (ctx->pc == 0x4637A4u) {
        ctx->pc = 0x4637A4u;
            // 0x4637a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4637A8u;
        goto label_4637a8;
    }
    ctx->pc = 0x4637A0u;
    SET_GPR_U32(ctx, 31, 0x4637A8u);
    ctx->pc = 0x4637A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4637A0u;
            // 0x4637a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637A8u; }
        if (ctx->pc != 0x4637A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637A8u; }
        if (ctx->pc != 0x4637A8u) { return; }
    }
    ctx->pc = 0x4637A8u;
label_4637a8:
    // 0x4637a8: 0xc118ec0  jal         func_463B00
label_4637ac:
    if (ctx->pc == 0x4637ACu) {
        ctx->pc = 0x4637ACu;
            // 0x4637ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4637B0u;
        goto label_4637b0;
    }
    ctx->pc = 0x4637A8u;
    SET_GPR_U32(ctx, 31, 0x4637B0u);
    ctx->pc = 0x4637ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4637A8u;
            // 0x4637ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463B00u;
    if (runtime->hasFunction(0x463B00u)) {
        auto targetFn = runtime->lookupFunction(0x463B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637B0u; }
        if (ctx->pc != 0x4637B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463B00_0x463b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637B0u; }
        if (ctx->pc != 0x4637B0u) { return; }
    }
    ctx->pc = 0x4637B0u;
label_4637b0:
    // 0x4637b0: 0xc118f68  jal         func_463DA0
label_4637b4:
    if (ctx->pc == 0x4637B4u) {
        ctx->pc = 0x4637B4u;
            // 0x4637b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4637B8u;
        goto label_4637b8;
    }
    ctx->pc = 0x4637B0u;
    SET_GPR_U32(ctx, 31, 0x4637B8u);
    ctx->pc = 0x4637B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4637B0u;
            // 0x4637b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463DA0u;
    if (runtime->hasFunction(0x463DA0u)) {
        auto targetFn = runtime->lookupFunction(0x463DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637B8u; }
        if (ctx->pc != 0x4637B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463DA0_0x463da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637B8u; }
        if (ctx->pc != 0x4637B8u) { return; }
    }
    ctx->pc = 0x4637B8u;
label_4637b8:
    // 0x4637b8: 0x92420300  lbu         $v0, 0x300($s2)
    ctx->pc = 0x4637b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 768)));
label_4637bc:
    // 0x4637bc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4637c0:
    if (ctx->pc == 0x4637C0u) {
        ctx->pc = 0x4637C0u;
            // 0x4637c0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4637C4u;
        goto label_4637c4;
    }
    ctx->pc = 0x4637BCu;
    {
        const bool branch_taken_0x4637bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4637bc) {
            ctx->pc = 0x4637C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4637BCu;
            // 0x4637c0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4637F4u;
            goto label_4637f4;
        }
    }
    ctx->pc = 0x4637C4u;
label_4637c4:
    // 0x4637c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4637c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4637c8:
    // 0x4637c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4637c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4637cc:
    // 0x4637cc: 0xc11908c  jal         func_464230
label_4637d0:
    if (ctx->pc == 0x4637D0u) {
        ctx->pc = 0x4637D0u;
            // 0x4637d0: 0x26460280  addiu       $a2, $s2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
        ctx->pc = 0x4637D4u;
        goto label_4637d4;
    }
    ctx->pc = 0x4637CCu;
    SET_GPR_U32(ctx, 31, 0x4637D4u);
    ctx->pc = 0x4637D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4637CCu;
            // 0x4637d0: 0x26460280  addiu       $a2, $s2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x464230u;
    if (runtime->hasFunction(0x464230u)) {
        auto targetFn = runtime->lookupFunction(0x464230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637D4u; }
        if (ctx->pc != 0x4637D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464230_0x464230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637D4u; }
        if (ctx->pc != 0x4637D4u) { return; }
    }
    ctx->pc = 0x4637D4u;
label_4637d4:
    // 0x4637d4: 0x3c023f5b  lui         $v0, 0x3F5B
    ctx->pc = 0x4637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16219 << 16));
label_4637d8:
    // 0x4637d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4637d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4637dc:
    // 0x4637dc: 0x3442425f  ori         $v0, $v0, 0x425F
    ctx->pc = 0x4637dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16991);
label_4637e0:
    // 0x4637e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4637e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4637e4:
    // 0x4637e4: 0xc118f40  jal         func_463D00
label_4637e8:
    if (ctx->pc == 0x4637E8u) {
        ctx->pc = 0x4637E8u;
            // 0x4637e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4637ECu;
        goto label_4637ec;
    }
    ctx->pc = 0x4637E4u;
    SET_GPR_U32(ctx, 31, 0x4637ECu);
    ctx->pc = 0x4637E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4637E4u;
            // 0x4637e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463D00u;
    if (runtime->hasFunction(0x463D00u)) {
        auto targetFn = runtime->lookupFunction(0x463D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637ECu; }
        if (ctx->pc != 0x4637ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463D00_0x463d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637ECu; }
        if (ctx->pc != 0x4637ECu) { return; }
    }
    ctx->pc = 0x4637ECu;
label_4637ec:
    // 0x4637ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_4637f0:
    if (ctx->pc == 0x4637F0u) {
        ctx->pc = 0x4637F4u;
        goto label_4637f4;
    }
    ctx->pc = 0x4637ECu;
    {
        const bool branch_taken_0x4637ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4637ec) {
            ctx->pc = 0x463814u;
            goto label_463814;
        }
    }
    ctx->pc = 0x4637F4u;
label_4637f4:
    // 0x4637f4: 0xc0dc408  jal         func_371020
label_4637f8:
    if (ctx->pc == 0x4637F8u) {
        ctx->pc = 0x4637FCu;
        goto label_4637fc;
    }
    ctx->pc = 0x4637F4u;
    SET_GPR_U32(ctx, 31, 0x4637FCu);
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637FCu; }
        if (ctx->pc != 0x4637FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4637FCu; }
        if (ctx->pc != 0x4637FCu) { return; }
    }
    ctx->pc = 0x4637FCu;
label_4637fc:
    // 0x4637fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4637fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463800:
    // 0x463800: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463804:
    // 0x463804: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x463804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_463808:
    // 0x463808: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x463808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46380c:
    // 0x46380c: 0xc0d88a4  jal         func_362290
label_463810:
    if (ctx->pc == 0x463810u) {
        ctx->pc = 0x463810u;
            // 0x463810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463814u;
        goto label_463814;
    }
    ctx->pc = 0x46380Cu;
    SET_GPR_U32(ctx, 31, 0x463814u);
    ctx->pc = 0x463810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46380Cu;
            // 0x463810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463814u; }
        if (ctx->pc != 0x463814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463814u; }
        if (ctx->pc != 0x463814u) { return; }
    }
    ctx->pc = 0x463814u;
label_463814:
    // 0x463814: 0xc118fa4  jal         func_463E90
label_463818:
    if (ctx->pc == 0x463818u) {
        ctx->pc = 0x46381Cu;
        goto label_46381c;
    }
    ctx->pc = 0x463814u;
    SET_GPR_U32(ctx, 31, 0x46381Cu);
    ctx->pc = 0x463E90u;
    if (runtime->hasFunction(0x463E90u)) {
        auto targetFn = runtime->lookupFunction(0x463E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46381Cu; }
        if (ctx->pc != 0x46381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463E90_0x463e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46381Cu; }
        if (ctx->pc != 0x46381Cu) { return; }
    }
    ctx->pc = 0x46381Cu;
label_46381c:
    // 0x46381c: 0xc118ebc  jal         func_463AF0
label_463820:
    if (ctx->pc == 0x463820u) {
        ctx->pc = 0x463820u;
            // 0x463820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463824u;
        goto label_463824;
    }
    ctx->pc = 0x46381Cu;
    SET_GPR_U32(ctx, 31, 0x463824u);
    ctx->pc = 0x463820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46381Cu;
            // 0x463820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463AF0u;
    if (runtime->hasFunction(0x463AF0u)) {
        auto targetFn = runtime->lookupFunction(0x463AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463824u; }
        if (ctx->pc != 0x463824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463AF0_0x463af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463824u; }
        if (ctx->pc != 0x463824u) { return; }
    }
    ctx->pc = 0x463824u;
label_463824:
    // 0x463824: 0xc6410298  lwc1        $f1, 0x298($s2)
    ctx->pc = 0x463824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_463828:
    // 0x463828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x463828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46382c:
    // 0x46382c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_463830:
    if (ctx->pc == 0x463830u) {
        ctx->pc = 0x463830u;
            // 0x463830: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x463834u;
        goto label_463834;
    }
    ctx->pc = 0x46382Cu;
    {
        const bool branch_taken_0x46382c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46382c) {
            ctx->pc = 0x463830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46382Cu;
            // 0x463830: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463844u;
            goto label_463844;
        }
    }
    ctx->pc = 0x463834u;
label_463834:
    // 0x463834: 0xc119214  jal         func_464850
label_463838:
    if (ctx->pc == 0x463838u) {
        ctx->pc = 0x463838u;
            // 0x463838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46383Cu;
        goto label_46383c;
    }
    ctx->pc = 0x463834u;
    SET_GPR_U32(ctx, 31, 0x46383Cu);
    ctx->pc = 0x463838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463834u;
            // 0x463838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x464850u;
    if (runtime->hasFunction(0x464850u)) {
        auto targetFn = runtime->lookupFunction(0x464850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46383Cu; }
        if (ctx->pc != 0x46383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464850_0x464850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46383Cu; }
        if (ctx->pc != 0x46383Cu) { return; }
    }
    ctx->pc = 0x46383Cu;
label_46383c:
    // 0x46383c: 0x10000010  b           . + 4 + (0x10 << 2)
label_463840:
    if (ctx->pc == 0x463840u) {
        ctx->pc = 0x463840u;
            // 0x463840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463844u;
        goto label_463844;
    }
    ctx->pc = 0x46383Cu;
    {
        const bool branch_taken_0x46383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46383Cu;
            // 0x463840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46383c) {
            ctx->pc = 0x463880u;
            goto label_463880;
        }
    }
    ctx->pc = 0x463844u;
label_463844:
    // 0x463844: 0x92420300  lbu         $v0, 0x300($s2)
    ctx->pc = 0x463844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 768)));
label_463848:
    // 0x463848: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_46384c:
    if (ctx->pc == 0x46384Cu) {
        ctx->pc = 0x46384Cu;
            // 0x46384c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463850u;
        goto label_463850;
    }
    ctx->pc = 0x463848u;
    {
        const bool branch_taken_0x463848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x463848) {
            ctx->pc = 0x46384Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x463848u;
            // 0x46384c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463864u;
            goto label_463864;
        }
    }
    ctx->pc = 0x463850u;
label_463850:
    // 0x463850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463854:
    // 0x463854: 0xc118ff4  jal         func_463FD0
label_463858:
    if (ctx->pc == 0x463858u) {
        ctx->pc = 0x463858u;
            // 0x463858: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x46385Cu;
        goto label_46385c;
    }
    ctx->pc = 0x463854u;
    SET_GPR_U32(ctx, 31, 0x46385Cu);
    ctx->pc = 0x463858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463854u;
            // 0x463858: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46385Cu; }
        if (ctx->pc != 0x46385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46385Cu; }
        if (ctx->pc != 0x46385Cu) { return; }
    }
    ctx->pc = 0x46385Cu;
label_46385c:
    // 0x46385c: 0x10000007  b           . + 4 + (0x7 << 2)
label_463860:
    if (ctx->pc == 0x463860u) {
        ctx->pc = 0x463864u;
        goto label_463864;
    }
    ctx->pc = 0x46385Cu;
    {
        const bool branch_taken_0x46385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46385c) {
            ctx->pc = 0x46387Cu;
            goto label_46387c;
        }
    }
    ctx->pc = 0x463864u;
label_463864:
    // 0x463864: 0xc1190e4  jal         func_464390
label_463868:
    if (ctx->pc == 0x463868u) {
        ctx->pc = 0x46386Cu;
        goto label_46386c;
    }
    ctx->pc = 0x463864u;
    SET_GPR_U32(ctx, 31, 0x46386Cu);
    ctx->pc = 0x464390u;
    if (runtime->hasFunction(0x464390u)) {
        auto targetFn = runtime->lookupFunction(0x464390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46386Cu; }
        if (ctx->pc != 0x46386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464390_0x464390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46386Cu; }
        if (ctx->pc != 0x46386Cu) { return; }
    }
    ctx->pc = 0x46386Cu;
label_46386c:
    // 0x46386c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463870:
    // 0x463870: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x463870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_463874:
    // 0x463874: 0xc118ff4  jal         func_463FD0
label_463878:
    if (ctx->pc == 0x463878u) {
        ctx->pc = 0x463878u;
            // 0x463878: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x46387Cu;
        goto label_46387c;
    }
    ctx->pc = 0x463874u;
    SET_GPR_U32(ctx, 31, 0x46387Cu);
    ctx->pc = 0x463878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463874u;
            // 0x463878: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46387Cu; }
        if (ctx->pc != 0x46387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46387Cu; }
        if (ctx->pc != 0x46387Cu) { return; }
    }
    ctx->pc = 0x46387Cu;
label_46387c:
    // 0x46387c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463880:
    // 0x463880: 0xc119078  jal         func_4641E0
label_463884:
    if (ctx->pc == 0x463884u) {
        ctx->pc = 0x463888u;
        goto label_463888;
    }
    ctx->pc = 0x463880u;
    SET_GPR_U32(ctx, 31, 0x463888u);
    ctx->pc = 0x4641E0u;
    if (runtime->hasFunction(0x4641E0u)) {
        auto targetFn = runtime->lookupFunction(0x4641E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463888u; }
        if (ctx->pc != 0x463888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004641E0_0x4641e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463888u; }
        if (ctx->pc != 0x463888u) { return; }
    }
    ctx->pc = 0x463888u;
label_463888:
    // 0x463888: 0x1000004a  b           . + 4 + (0x4A << 2)
label_46388c:
    if (ctx->pc == 0x46388Cu) {
        ctx->pc = 0x463890u;
        goto label_463890;
    }
    ctx->pc = 0x463888u;
    {
        const bool branch_taken_0x463888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463888) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x463890u;
label_463890:
    // 0x463890: 0xc118ec0  jal         func_463B00
label_463894:
    if (ctx->pc == 0x463894u) {
        ctx->pc = 0x463894u;
            // 0x463894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463898u;
        goto label_463898;
    }
    ctx->pc = 0x463890u;
    SET_GPR_U32(ctx, 31, 0x463898u);
    ctx->pc = 0x463894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463890u;
            // 0x463894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463B00u;
    if (runtime->hasFunction(0x463B00u)) {
        auto targetFn = runtime->lookupFunction(0x463B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463898u; }
        if (ctx->pc != 0x463898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463B00_0x463b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463898u; }
        if (ctx->pc != 0x463898u) { return; }
    }
    ctx->pc = 0x463898u;
label_463898:
    // 0x463898: 0xc118f68  jal         func_463DA0
label_46389c:
    if (ctx->pc == 0x46389Cu) {
        ctx->pc = 0x46389Cu;
            // 0x46389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4638A0u;
        goto label_4638a0;
    }
    ctx->pc = 0x463898u;
    SET_GPR_U32(ctx, 31, 0x4638A0u);
    ctx->pc = 0x46389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463898u;
            // 0x46389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463DA0u;
    if (runtime->hasFunction(0x463DA0u)) {
        auto targetFn = runtime->lookupFunction(0x463DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638A0u; }
        if (ctx->pc != 0x4638A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463DA0_0x463da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638A0u; }
        if (ctx->pc != 0x4638A0u) { return; }
    }
    ctx->pc = 0x4638A0u;
label_4638a0:
    // 0x4638a0: 0xc0d1c10  jal         func_347040
label_4638a4:
    if (ctx->pc == 0x4638A4u) {
        ctx->pc = 0x4638A4u;
            // 0x4638a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4638A8u;
        goto label_4638a8;
    }
    ctx->pc = 0x4638A0u;
    SET_GPR_U32(ctx, 31, 0x4638A8u);
    ctx->pc = 0x4638A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638A0u;
            // 0x4638a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638A8u; }
        if (ctx->pc != 0x4638A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638A8u; }
        if (ctx->pc != 0x4638A8u) { return; }
    }
    ctx->pc = 0x4638A8u;
label_4638a8:
    // 0x4638a8: 0x26440270  addiu       $a0, $s2, 0x270
    ctx->pc = 0x4638a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_4638ac:
    // 0x4638ac: 0xc04cc34  jal         func_1330D0
label_4638b0:
    if (ctx->pc == 0x4638B0u) {
        ctx->pc = 0x4638B0u;
            // 0x4638b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4638B4u;
        goto label_4638b4;
    }
    ctx->pc = 0x4638ACu;
    SET_GPR_U32(ctx, 31, 0x4638B4u);
    ctx->pc = 0x4638B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638ACu;
            // 0x4638b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638B4u; }
        if (ctx->pc != 0x4638B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638B4u; }
        if (ctx->pc != 0x4638B4u) { return; }
    }
    ctx->pc = 0x4638B4u;
label_4638b4:
    // 0x4638b4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x4638b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_4638b8:
    // 0x4638b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4638b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4638bc:
    // 0x4638bc: 0x0  nop
    ctx->pc = 0x4638bcu;
    // NOP
label_4638c0:
    // 0x4638c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4638c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4638c4:
    // 0x4638c4: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_4638c8:
    if (ctx->pc == 0x4638C8u) {
        ctx->pc = 0x4638CCu;
        goto label_4638cc;
    }
    ctx->pc = 0x4638C4u;
    {
        const bool branch_taken_0x4638c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4638c4) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x4638CCu;
label_4638cc:
    // 0x4638cc: 0xc118e98  jal         func_463A60
label_4638d0:
    if (ctx->pc == 0x4638D0u) {
        ctx->pc = 0x4638D0u;
            // 0x4638d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4638D4u;
        goto label_4638d4;
    }
    ctx->pc = 0x4638CCu;
    SET_GPR_U32(ctx, 31, 0x4638D4u);
    ctx->pc = 0x4638D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638CCu;
            // 0x4638d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463A60u;
    if (runtime->hasFunction(0x463A60u)) {
        auto targetFn = runtime->lookupFunction(0x463A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638D4u; }
        if (ctx->pc != 0x4638D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463A60_0x463a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638D4u; }
        if (ctx->pc != 0x4638D4u) { return; }
    }
    ctx->pc = 0x4638D4u;
label_4638d4:
    // 0x4638d4: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x4638d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_4638d8:
    // 0x4638d8: 0xc122c5c  jal         func_48B170
label_4638dc:
    if (ctx->pc == 0x4638DCu) {
        ctx->pc = 0x4638DCu;
            // 0x4638dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4638E0u;
        goto label_4638e0;
    }
    ctx->pc = 0x4638D8u;
    SET_GPR_U32(ctx, 31, 0x4638E0u);
    ctx->pc = 0x4638DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638D8u;
            // 0x4638dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638E0u; }
        if (ctx->pc != 0x4638E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638E0u; }
        if (ctx->pc != 0x4638E0u) { return; }
    }
    ctx->pc = 0x4638E0u;
label_4638e0:
    // 0x4638e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4638e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4638e4:
    // 0x4638e4: 0xc118ff4  jal         func_463FD0
label_4638e8:
    if (ctx->pc == 0x4638E8u) {
        ctx->pc = 0x4638E8u;
            // 0x4638e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4638ECu;
        goto label_4638ec;
    }
    ctx->pc = 0x4638E4u;
    SET_GPR_U32(ctx, 31, 0x4638ECu);
    ctx->pc = 0x4638E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638E4u;
            // 0x4638e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638ECu; }
        if (ctx->pc != 0x4638ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638ECu; }
        if (ctx->pc != 0x4638ECu) { return; }
    }
    ctx->pc = 0x4638ECu;
label_4638ec:
    // 0x4638ec: 0xc0e5f68  jal         func_397DA0
label_4638f0:
    if (ctx->pc == 0x4638F0u) {
        ctx->pc = 0x4638F0u;
            // 0x4638f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4638F4u;
        goto label_4638f4;
    }
    ctx->pc = 0x4638ECu;
    SET_GPR_U32(ctx, 31, 0x4638F4u);
    ctx->pc = 0x4638F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638ECu;
            // 0x4638f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638F4u; }
        if (ctx->pc != 0x4638F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4638F4u; }
        if (ctx->pc != 0x4638F4u) { return; }
    }
    ctx->pc = 0x4638F4u;
label_4638f4:
    // 0x4638f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4638f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4638f8:
    // 0x4638f8: 0xc0efc48  jal         func_3BF120
label_4638fc:
    if (ctx->pc == 0x4638FCu) {
        ctx->pc = 0x4638FCu;
            // 0x4638fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463900u;
        goto label_463900;
    }
    ctx->pc = 0x4638F8u;
    SET_GPR_U32(ctx, 31, 0x463900u);
    ctx->pc = 0x4638FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4638F8u;
            // 0x4638fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463900u; }
        if (ctx->pc != 0x463900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463900u; }
        if (ctx->pc != 0x463900u) { return; }
    }
    ctx->pc = 0x463900u;
label_463900:
    // 0x463900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463904:
    // 0x463904: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463908:
    // 0x463908: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x463908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_46390c:
    // 0x46390c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_463910:
    // 0x463910: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x463910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_463914:
    // 0x463914: 0xc1191b4  jal         func_4646D0
label_463918:
    if (ctx->pc == 0x463918u) {
        ctx->pc = 0x463918u;
            // 0x463918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46391Cu;
        goto label_46391c;
    }
    ctx->pc = 0x463914u;
    SET_GPR_U32(ctx, 31, 0x46391Cu);
    ctx->pc = 0x463918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463914u;
            // 0x463918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4646D0u;
    if (runtime->hasFunction(0x4646D0u)) {
        auto targetFn = runtime->lookupFunction(0x4646D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46391Cu; }
        if (ctx->pc != 0x46391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004646D0_0x4646d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46391Cu; }
        if (ctx->pc != 0x46391Cu) { return; }
    }
    ctx->pc = 0x46391Cu;
label_46391c:
    // 0x46391c: 0xc0efc48  jal         func_3BF120
label_463920:
    if (ctx->pc == 0x463920u) {
        ctx->pc = 0x463920u;
            // 0x463920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463924u;
        goto label_463924;
    }
    ctx->pc = 0x46391Cu;
    SET_GPR_U32(ctx, 31, 0x463924u);
    ctx->pc = 0x463920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46391Cu;
            // 0x463920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463924u; }
        if (ctx->pc != 0x463924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463924u; }
        if (ctx->pc != 0x463924u) { return; }
    }
    ctx->pc = 0x463924u;
label_463924:
    // 0x463924: 0x3c033f5b  lui         $v1, 0x3F5B
    ctx->pc = 0x463924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16219 << 16));
label_463928:
    // 0x463928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46392c:
    // 0x46392c: 0x3463425f  ori         $v1, $v1, 0x425F
    ctx->pc = 0x46392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16991);
label_463930:
    // 0x463930: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x463930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_463934:
    // 0x463934: 0xc118f40  jal         func_463D00
label_463938:
    if (ctx->pc == 0x463938u) {
        ctx->pc = 0x463938u;
            // 0x463938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46393Cu;
        goto label_46393c;
    }
    ctx->pc = 0x463934u;
    SET_GPR_U32(ctx, 31, 0x46393Cu);
    ctx->pc = 0x463938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463934u;
            // 0x463938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463D00u;
    if (runtime->hasFunction(0x463D00u)) {
        auto targetFn = runtime->lookupFunction(0x463D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46393Cu; }
        if (ctx->pc != 0x46393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463D00_0x463d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46393Cu; }
        if (ctx->pc != 0x46393Cu) { return; }
    }
    ctx->pc = 0x46393Cu;
label_46393c:
    // 0x46393c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_463940:
    if (ctx->pc == 0x463940u) {
        ctx->pc = 0x463944u;
        goto label_463944;
    }
    ctx->pc = 0x46393Cu;
    {
        const bool branch_taken_0x46393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46393c) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x463944u;
label_463944:
    // 0x463944: 0xc118ec0  jal         func_463B00
label_463948:
    if (ctx->pc == 0x463948u) {
        ctx->pc = 0x463948u;
            // 0x463948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46394Cu;
        goto label_46394c;
    }
    ctx->pc = 0x463944u;
    SET_GPR_U32(ctx, 31, 0x46394Cu);
    ctx->pc = 0x463948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463944u;
            // 0x463948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463B00u;
    if (runtime->hasFunction(0x463B00u)) {
        auto targetFn = runtime->lookupFunction(0x463B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46394Cu; }
        if (ctx->pc != 0x46394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463B00_0x463b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46394Cu; }
        if (ctx->pc != 0x46394Cu) { return; }
    }
    ctx->pc = 0x46394Cu;
label_46394c:
    // 0x46394c: 0xc118f68  jal         func_463DA0
label_463950:
    if (ctx->pc == 0x463950u) {
        ctx->pc = 0x463950u;
            // 0x463950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463954u;
        goto label_463954;
    }
    ctx->pc = 0x46394Cu;
    SET_GPR_U32(ctx, 31, 0x463954u);
    ctx->pc = 0x463950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46394Cu;
            // 0x463950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463DA0u;
    if (runtime->hasFunction(0x463DA0u)) {
        auto targetFn = runtime->lookupFunction(0x463DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463954u; }
        if (ctx->pc != 0x463954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463DA0_0x463da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463954u; }
        if (ctx->pc != 0x463954u) { return; }
    }
    ctx->pc = 0x463954u;
label_463954:
    // 0x463954: 0xc0dc408  jal         func_371020
label_463958:
    if (ctx->pc == 0x463958u) {
        ctx->pc = 0x463958u;
            // 0x463958: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x46395Cu;
        goto label_46395c;
    }
    ctx->pc = 0x463954u;
    SET_GPR_U32(ctx, 31, 0x46395Cu);
    ctx->pc = 0x463958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463954u;
            // 0x463958: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46395Cu; }
        if (ctx->pc != 0x46395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46395Cu; }
        if (ctx->pc != 0x46395Cu) { return; }
    }
    ctx->pc = 0x46395Cu;
label_46395c:
    // 0x46395c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46395cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463960:
    // 0x463960: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_463964:
    // 0x463964: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x463964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_463968:
    // 0x463968: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x463968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46396c:
    // 0x46396c: 0xc0d88a4  jal         func_362290
label_463970:
    if (ctx->pc == 0x463970u) {
        ctx->pc = 0x463970u;
            // 0x463970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463974u;
        goto label_463974;
    }
    ctx->pc = 0x46396Cu;
    SET_GPR_U32(ctx, 31, 0x463974u);
    ctx->pc = 0x463970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46396Cu;
            // 0x463970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463974u; }
        if (ctx->pc != 0x463974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463974u; }
        if (ctx->pc != 0x463974u) { return; }
    }
    ctx->pc = 0x463974u;
label_463974:
    // 0x463974: 0xc0dd890  jal         func_376240
label_463978:
    if (ctx->pc == 0x463978u) {
        ctx->pc = 0x463978u;
            // 0x463978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46397Cu;
        goto label_46397c;
    }
    ctx->pc = 0x463974u;
    SET_GPR_U32(ctx, 31, 0x46397Cu);
    ctx->pc = 0x463978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463974u;
            // 0x463978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46397Cu; }
        if (ctx->pc != 0x46397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46397Cu; }
        if (ctx->pc != 0x46397Cu) { return; }
    }
    ctx->pc = 0x46397Cu;
label_46397c:
    // 0x46397c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_463980:
    if (ctx->pc == 0x463980u) {
        ctx->pc = 0x463984u;
        goto label_463984;
    }
    ctx->pc = 0x46397Cu;
    {
        const bool branch_taken_0x46397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46397c) {
            ctx->pc = 0x4639B4u;
            goto label_4639b4;
        }
    }
    ctx->pc = 0x463984u;
label_463984:
    // 0x463984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463988:
    // 0x463988: 0xc118ff8  jal         func_463FE0
label_46398c:
    if (ctx->pc == 0x46398Cu) {
        ctx->pc = 0x46398Cu;
            // 0x46398c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x463990u;
        goto label_463990;
    }
    ctx->pc = 0x463988u;
    SET_GPR_U32(ctx, 31, 0x463990u);
    ctx->pc = 0x46398Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463988u;
            // 0x46398c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FE0u;
    if (runtime->hasFunction(0x463FE0u)) {
        auto targetFn = runtime->lookupFunction(0x463FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463990u; }
        if (ctx->pc != 0x463990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FE0_0x463fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463990u; }
        if (ctx->pc != 0x463990u) { return; }
    }
    ctx->pc = 0x463990u;
label_463990:
    // 0x463990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x463990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_463994:
    // 0x463994: 0xc118ff4  jal         func_463FD0
label_463998:
    if (ctx->pc == 0x463998u) {
        ctx->pc = 0x463998u;
            // 0x463998: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x46399Cu;
        goto label_46399c;
    }
    ctx->pc = 0x463994u;
    SET_GPR_U32(ctx, 31, 0x46399Cu);
    ctx->pc = 0x463998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463994u;
            // 0x463998: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463FD0u;
    if (runtime->hasFunction(0x463FD0u)) {
        auto targetFn = runtime->lookupFunction(0x463FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46399Cu; }
        if (ctx->pc != 0x46399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463FD0_0x463fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46399Cu; }
        if (ctx->pc != 0x46399Cu) { return; }
    }
    ctx->pc = 0x46399Cu;
label_46399c:
    // 0x46399c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4639a0:
    // 0x4639a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4639a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4639a4:
    // 0x4639a4: 0xc118fe0  jal         func_463F80
label_4639a8:
    if (ctx->pc == 0x4639A8u) {
        ctx->pc = 0x4639A8u;
            // 0x4639a8: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x4639ACu;
        goto label_4639ac;
    }
    ctx->pc = 0x4639A4u;
    SET_GPR_U32(ctx, 31, 0x4639ACu);
    ctx->pc = 0x4639A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4639A4u;
            // 0x4639a8: 0xae4200d8  sw          $v0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x463F80u;
    if (runtime->hasFunction(0x463F80u)) {
        auto targetFn = runtime->lookupFunction(0x463F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4639ACu; }
        if (ctx->pc != 0x4639ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00463F80_0x463f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4639ACu; }
        if (ctx->pc != 0x4639ACu) { return; }
    }
    ctx->pc = 0x4639ACu;
label_4639ac:
    // 0x4639ac: 0xc122c94  jal         func_48B250
label_4639b0:
    if (ctx->pc == 0x4639B0u) {
        ctx->pc = 0x4639B0u;
            // 0x4639b0: 0x8e44029c  lw          $a0, 0x29C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
        ctx->pc = 0x4639B4u;
        goto label_4639b4;
    }
    ctx->pc = 0x4639ACu;
    SET_GPR_U32(ctx, 31, 0x4639B4u);
    ctx->pc = 0x4639B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4639ACu;
            // 0x4639b0: 0x8e44029c  lw          $a0, 0x29C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4639B4u; }
        if (ctx->pc != 0x4639B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4639B4u; }
        if (ctx->pc != 0x4639B4u) { return; }
    }
    ctx->pc = 0x4639B4u;
label_4639b4:
    // 0x4639b4: 0x924302f8  lbu         $v1, 0x2F8($s2)
    ctx->pc = 0x4639b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
label_4639b8:
    // 0x4639b8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_4639bc:
    if (ctx->pc == 0x4639BCu) {
        ctx->pc = 0x4639BCu;
            // 0x4639bc: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->pc = 0x4639C0u;
        goto label_4639c0;
    }
    ctx->pc = 0x4639B8u;
    {
        const bool branch_taken_0x4639b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4639b8) {
            ctx->pc = 0x4639BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4639B8u;
            // 0x4639bc: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4639E4u;
            goto label_4639e4;
        }
    }
    ctx->pc = 0x4639C0u;
label_4639c0:
    // 0x4639c0: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x4639c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_4639c4:
    // 0x4639c4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4639c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4639c8:
    // 0x4639c8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4639c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4639cc:
    // 0x4639cc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4639ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4639d0:
    // 0x4639d0: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x4639d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_4639d4:
    // 0x4639d4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4639d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4639d8:
    // 0x4639d8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4639d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4639dc:
    // 0x4639dc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4639dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4639e0:
    // 0x4639e0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x4639e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_4639e4:
    // 0x4639e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4639e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4639e8:
    // 0x4639e8: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_4639ec:
    if (ctx->pc == 0x4639ECu) {
        ctx->pc = 0x4639F0u;
        goto label_4639f0;
    }
    ctx->pc = 0x4639E8u;
    {
        const bool branch_taken_0x4639e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4639e8) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x4639F0u;
label_4639f0:
    // 0x4639f0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x4639f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4639f4:
    // 0x4639f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4639f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4639f8:
    // 0x4639f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4639f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4639fc:
    // 0x4639fc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4639fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_463a00:
    // 0x463a00: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x463a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_463a04:
    // 0x463a04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x463a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_463a08:
    // 0x463a08: 0xc08bff0  jal         func_22FFC0
label_463a0c:
    if (ctx->pc == 0x463A0Cu) {
        ctx->pc = 0x463A0Cu;
            // 0x463a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463A10u;
        goto label_463a10;
    }
    ctx->pc = 0x463A08u;
    SET_GPR_U32(ctx, 31, 0x463A10u);
    ctx->pc = 0x463A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463A08u;
            // 0x463a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463A10u; }
        if (ctx->pc != 0x463A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463A10u; }
        if (ctx->pc != 0x463A10u) { return; }
    }
    ctx->pc = 0x463A10u;
label_463a10:
    // 0x463a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463a14:
    // 0x463a14: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x463a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_463a18:
    // 0x463a18: 0x924302f8  lbu         $v1, 0x2F8($s2)
    ctx->pc = 0x463a18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 760)));
label_463a1c:
    // 0x463a1c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_463a20:
    if (ctx->pc == 0x463A20u) {
        ctx->pc = 0x463A24u;
        goto label_463a24;
    }
    ctx->pc = 0x463A1Cu;
    {
        const bool branch_taken_0x463a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463a1c) {
            ctx->pc = 0x463A44u;
            goto label_463a44;
        }
    }
    ctx->pc = 0x463A24u;
label_463a24:
    // 0x463a24: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x463a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_463a28:
    // 0x463a28: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x463a28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_463a2c:
    // 0x463a2c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x463a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_463a30:
    // 0x463a30: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x463a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_463a34:
    // 0x463a34: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x463a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_463a38:
    // 0x463a38: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x463a38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_463a3c:
    // 0x463a3c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x463a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_463a40:
    // 0x463a40: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x463a40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_463a44:
    // 0x463a44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x463a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_463a48:
    // 0x463a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x463a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_463a4c:
    // 0x463a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_463a50:
    // 0x463a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463a54:
    // 0x463a54: 0x3e00008  jr          $ra
label_463a58:
    if (ctx->pc == 0x463A58u) {
        ctx->pc = 0x463A58u;
            // 0x463a58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x463A5Cu;
        goto label_463a5c;
    }
    ctx->pc = 0x463A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463A54u;
            // 0x463a58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463A5Cu;
label_463a5c:
    // 0x463a5c: 0x0  nop
    ctx->pc = 0x463a5cu;
    // NOP
}
