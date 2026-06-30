#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535C90
// Address: 0x535c90 - 0x536480
void sub_00535C90_0x535c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535C90_0x535c90");
#endif

    switch (ctx->pc) {
        case 0x535c90u: goto label_535c90;
        case 0x535c94u: goto label_535c94;
        case 0x535c98u: goto label_535c98;
        case 0x535c9cu: goto label_535c9c;
        case 0x535ca0u: goto label_535ca0;
        case 0x535ca4u: goto label_535ca4;
        case 0x535ca8u: goto label_535ca8;
        case 0x535cacu: goto label_535cac;
        case 0x535cb0u: goto label_535cb0;
        case 0x535cb4u: goto label_535cb4;
        case 0x535cb8u: goto label_535cb8;
        case 0x535cbcu: goto label_535cbc;
        case 0x535cc0u: goto label_535cc0;
        case 0x535cc4u: goto label_535cc4;
        case 0x535cc8u: goto label_535cc8;
        case 0x535cccu: goto label_535ccc;
        case 0x535cd0u: goto label_535cd0;
        case 0x535cd4u: goto label_535cd4;
        case 0x535cd8u: goto label_535cd8;
        case 0x535cdcu: goto label_535cdc;
        case 0x535ce0u: goto label_535ce0;
        case 0x535ce4u: goto label_535ce4;
        case 0x535ce8u: goto label_535ce8;
        case 0x535cecu: goto label_535cec;
        case 0x535cf0u: goto label_535cf0;
        case 0x535cf4u: goto label_535cf4;
        case 0x535cf8u: goto label_535cf8;
        case 0x535cfcu: goto label_535cfc;
        case 0x535d00u: goto label_535d00;
        case 0x535d04u: goto label_535d04;
        case 0x535d08u: goto label_535d08;
        case 0x535d0cu: goto label_535d0c;
        case 0x535d10u: goto label_535d10;
        case 0x535d14u: goto label_535d14;
        case 0x535d18u: goto label_535d18;
        case 0x535d1cu: goto label_535d1c;
        case 0x535d20u: goto label_535d20;
        case 0x535d24u: goto label_535d24;
        case 0x535d28u: goto label_535d28;
        case 0x535d2cu: goto label_535d2c;
        case 0x535d30u: goto label_535d30;
        case 0x535d34u: goto label_535d34;
        case 0x535d38u: goto label_535d38;
        case 0x535d3cu: goto label_535d3c;
        case 0x535d40u: goto label_535d40;
        case 0x535d44u: goto label_535d44;
        case 0x535d48u: goto label_535d48;
        case 0x535d4cu: goto label_535d4c;
        case 0x535d50u: goto label_535d50;
        case 0x535d54u: goto label_535d54;
        case 0x535d58u: goto label_535d58;
        case 0x535d5cu: goto label_535d5c;
        case 0x535d60u: goto label_535d60;
        case 0x535d64u: goto label_535d64;
        case 0x535d68u: goto label_535d68;
        case 0x535d6cu: goto label_535d6c;
        case 0x535d70u: goto label_535d70;
        case 0x535d74u: goto label_535d74;
        case 0x535d78u: goto label_535d78;
        case 0x535d7cu: goto label_535d7c;
        case 0x535d80u: goto label_535d80;
        case 0x535d84u: goto label_535d84;
        case 0x535d88u: goto label_535d88;
        case 0x535d8cu: goto label_535d8c;
        case 0x535d90u: goto label_535d90;
        case 0x535d94u: goto label_535d94;
        case 0x535d98u: goto label_535d98;
        case 0x535d9cu: goto label_535d9c;
        case 0x535da0u: goto label_535da0;
        case 0x535da4u: goto label_535da4;
        case 0x535da8u: goto label_535da8;
        case 0x535dacu: goto label_535dac;
        case 0x535db0u: goto label_535db0;
        case 0x535db4u: goto label_535db4;
        case 0x535db8u: goto label_535db8;
        case 0x535dbcu: goto label_535dbc;
        case 0x535dc0u: goto label_535dc0;
        case 0x535dc4u: goto label_535dc4;
        case 0x535dc8u: goto label_535dc8;
        case 0x535dccu: goto label_535dcc;
        case 0x535dd0u: goto label_535dd0;
        case 0x535dd4u: goto label_535dd4;
        case 0x535dd8u: goto label_535dd8;
        case 0x535ddcu: goto label_535ddc;
        case 0x535de0u: goto label_535de0;
        case 0x535de4u: goto label_535de4;
        case 0x535de8u: goto label_535de8;
        case 0x535decu: goto label_535dec;
        case 0x535df0u: goto label_535df0;
        case 0x535df4u: goto label_535df4;
        case 0x535df8u: goto label_535df8;
        case 0x535dfcu: goto label_535dfc;
        case 0x535e00u: goto label_535e00;
        case 0x535e04u: goto label_535e04;
        case 0x535e08u: goto label_535e08;
        case 0x535e0cu: goto label_535e0c;
        case 0x535e10u: goto label_535e10;
        case 0x535e14u: goto label_535e14;
        case 0x535e18u: goto label_535e18;
        case 0x535e1cu: goto label_535e1c;
        case 0x535e20u: goto label_535e20;
        case 0x535e24u: goto label_535e24;
        case 0x535e28u: goto label_535e28;
        case 0x535e2cu: goto label_535e2c;
        case 0x535e30u: goto label_535e30;
        case 0x535e34u: goto label_535e34;
        case 0x535e38u: goto label_535e38;
        case 0x535e3cu: goto label_535e3c;
        case 0x535e40u: goto label_535e40;
        case 0x535e44u: goto label_535e44;
        case 0x535e48u: goto label_535e48;
        case 0x535e4cu: goto label_535e4c;
        case 0x535e50u: goto label_535e50;
        case 0x535e54u: goto label_535e54;
        case 0x535e58u: goto label_535e58;
        case 0x535e5cu: goto label_535e5c;
        case 0x535e60u: goto label_535e60;
        case 0x535e64u: goto label_535e64;
        case 0x535e68u: goto label_535e68;
        case 0x535e6cu: goto label_535e6c;
        case 0x535e70u: goto label_535e70;
        case 0x535e74u: goto label_535e74;
        case 0x535e78u: goto label_535e78;
        case 0x535e7cu: goto label_535e7c;
        case 0x535e80u: goto label_535e80;
        case 0x535e84u: goto label_535e84;
        case 0x535e88u: goto label_535e88;
        case 0x535e8cu: goto label_535e8c;
        case 0x535e90u: goto label_535e90;
        case 0x535e94u: goto label_535e94;
        case 0x535e98u: goto label_535e98;
        case 0x535e9cu: goto label_535e9c;
        case 0x535ea0u: goto label_535ea0;
        case 0x535ea4u: goto label_535ea4;
        case 0x535ea8u: goto label_535ea8;
        case 0x535eacu: goto label_535eac;
        case 0x535eb0u: goto label_535eb0;
        case 0x535eb4u: goto label_535eb4;
        case 0x535eb8u: goto label_535eb8;
        case 0x535ebcu: goto label_535ebc;
        case 0x535ec0u: goto label_535ec0;
        case 0x535ec4u: goto label_535ec4;
        case 0x535ec8u: goto label_535ec8;
        case 0x535eccu: goto label_535ecc;
        case 0x535ed0u: goto label_535ed0;
        case 0x535ed4u: goto label_535ed4;
        case 0x535ed8u: goto label_535ed8;
        case 0x535edcu: goto label_535edc;
        case 0x535ee0u: goto label_535ee0;
        case 0x535ee4u: goto label_535ee4;
        case 0x535ee8u: goto label_535ee8;
        case 0x535eecu: goto label_535eec;
        case 0x535ef0u: goto label_535ef0;
        case 0x535ef4u: goto label_535ef4;
        case 0x535ef8u: goto label_535ef8;
        case 0x535efcu: goto label_535efc;
        case 0x535f00u: goto label_535f00;
        case 0x535f04u: goto label_535f04;
        case 0x535f08u: goto label_535f08;
        case 0x535f0cu: goto label_535f0c;
        case 0x535f10u: goto label_535f10;
        case 0x535f14u: goto label_535f14;
        case 0x535f18u: goto label_535f18;
        case 0x535f1cu: goto label_535f1c;
        case 0x535f20u: goto label_535f20;
        case 0x535f24u: goto label_535f24;
        case 0x535f28u: goto label_535f28;
        case 0x535f2cu: goto label_535f2c;
        case 0x535f30u: goto label_535f30;
        case 0x535f34u: goto label_535f34;
        case 0x535f38u: goto label_535f38;
        case 0x535f3cu: goto label_535f3c;
        case 0x535f40u: goto label_535f40;
        case 0x535f44u: goto label_535f44;
        case 0x535f48u: goto label_535f48;
        case 0x535f4cu: goto label_535f4c;
        case 0x535f50u: goto label_535f50;
        case 0x535f54u: goto label_535f54;
        case 0x535f58u: goto label_535f58;
        case 0x535f5cu: goto label_535f5c;
        case 0x535f60u: goto label_535f60;
        case 0x535f64u: goto label_535f64;
        case 0x535f68u: goto label_535f68;
        case 0x535f6cu: goto label_535f6c;
        case 0x535f70u: goto label_535f70;
        case 0x535f74u: goto label_535f74;
        case 0x535f78u: goto label_535f78;
        case 0x535f7cu: goto label_535f7c;
        case 0x535f80u: goto label_535f80;
        case 0x535f84u: goto label_535f84;
        case 0x535f88u: goto label_535f88;
        case 0x535f8cu: goto label_535f8c;
        case 0x535f90u: goto label_535f90;
        case 0x535f94u: goto label_535f94;
        case 0x535f98u: goto label_535f98;
        case 0x535f9cu: goto label_535f9c;
        case 0x535fa0u: goto label_535fa0;
        case 0x535fa4u: goto label_535fa4;
        case 0x535fa8u: goto label_535fa8;
        case 0x535facu: goto label_535fac;
        case 0x535fb0u: goto label_535fb0;
        case 0x535fb4u: goto label_535fb4;
        case 0x535fb8u: goto label_535fb8;
        case 0x535fbcu: goto label_535fbc;
        case 0x535fc0u: goto label_535fc0;
        case 0x535fc4u: goto label_535fc4;
        case 0x535fc8u: goto label_535fc8;
        case 0x535fccu: goto label_535fcc;
        case 0x535fd0u: goto label_535fd0;
        case 0x535fd4u: goto label_535fd4;
        case 0x535fd8u: goto label_535fd8;
        case 0x535fdcu: goto label_535fdc;
        case 0x535fe0u: goto label_535fe0;
        case 0x535fe4u: goto label_535fe4;
        case 0x535fe8u: goto label_535fe8;
        case 0x535fecu: goto label_535fec;
        case 0x535ff0u: goto label_535ff0;
        case 0x535ff4u: goto label_535ff4;
        case 0x535ff8u: goto label_535ff8;
        case 0x535ffcu: goto label_535ffc;
        case 0x536000u: goto label_536000;
        case 0x536004u: goto label_536004;
        case 0x536008u: goto label_536008;
        case 0x53600cu: goto label_53600c;
        case 0x536010u: goto label_536010;
        case 0x536014u: goto label_536014;
        case 0x536018u: goto label_536018;
        case 0x53601cu: goto label_53601c;
        case 0x536020u: goto label_536020;
        case 0x536024u: goto label_536024;
        case 0x536028u: goto label_536028;
        case 0x53602cu: goto label_53602c;
        case 0x536030u: goto label_536030;
        case 0x536034u: goto label_536034;
        case 0x536038u: goto label_536038;
        case 0x53603cu: goto label_53603c;
        case 0x536040u: goto label_536040;
        case 0x536044u: goto label_536044;
        case 0x536048u: goto label_536048;
        case 0x53604cu: goto label_53604c;
        case 0x536050u: goto label_536050;
        case 0x536054u: goto label_536054;
        case 0x536058u: goto label_536058;
        case 0x53605cu: goto label_53605c;
        case 0x536060u: goto label_536060;
        case 0x536064u: goto label_536064;
        case 0x536068u: goto label_536068;
        case 0x53606cu: goto label_53606c;
        case 0x536070u: goto label_536070;
        case 0x536074u: goto label_536074;
        case 0x536078u: goto label_536078;
        case 0x53607cu: goto label_53607c;
        case 0x536080u: goto label_536080;
        case 0x536084u: goto label_536084;
        case 0x536088u: goto label_536088;
        case 0x53608cu: goto label_53608c;
        case 0x536090u: goto label_536090;
        case 0x536094u: goto label_536094;
        case 0x536098u: goto label_536098;
        case 0x53609cu: goto label_53609c;
        case 0x5360a0u: goto label_5360a0;
        case 0x5360a4u: goto label_5360a4;
        case 0x5360a8u: goto label_5360a8;
        case 0x5360acu: goto label_5360ac;
        case 0x5360b0u: goto label_5360b0;
        case 0x5360b4u: goto label_5360b4;
        case 0x5360b8u: goto label_5360b8;
        case 0x5360bcu: goto label_5360bc;
        case 0x5360c0u: goto label_5360c0;
        case 0x5360c4u: goto label_5360c4;
        case 0x5360c8u: goto label_5360c8;
        case 0x5360ccu: goto label_5360cc;
        case 0x5360d0u: goto label_5360d0;
        case 0x5360d4u: goto label_5360d4;
        case 0x5360d8u: goto label_5360d8;
        case 0x5360dcu: goto label_5360dc;
        case 0x5360e0u: goto label_5360e0;
        case 0x5360e4u: goto label_5360e4;
        case 0x5360e8u: goto label_5360e8;
        case 0x5360ecu: goto label_5360ec;
        case 0x5360f0u: goto label_5360f0;
        case 0x5360f4u: goto label_5360f4;
        case 0x5360f8u: goto label_5360f8;
        case 0x5360fcu: goto label_5360fc;
        case 0x536100u: goto label_536100;
        case 0x536104u: goto label_536104;
        case 0x536108u: goto label_536108;
        case 0x53610cu: goto label_53610c;
        case 0x536110u: goto label_536110;
        case 0x536114u: goto label_536114;
        case 0x536118u: goto label_536118;
        case 0x53611cu: goto label_53611c;
        case 0x536120u: goto label_536120;
        case 0x536124u: goto label_536124;
        case 0x536128u: goto label_536128;
        case 0x53612cu: goto label_53612c;
        case 0x536130u: goto label_536130;
        case 0x536134u: goto label_536134;
        case 0x536138u: goto label_536138;
        case 0x53613cu: goto label_53613c;
        case 0x536140u: goto label_536140;
        case 0x536144u: goto label_536144;
        case 0x536148u: goto label_536148;
        case 0x53614cu: goto label_53614c;
        case 0x536150u: goto label_536150;
        case 0x536154u: goto label_536154;
        case 0x536158u: goto label_536158;
        case 0x53615cu: goto label_53615c;
        case 0x536160u: goto label_536160;
        case 0x536164u: goto label_536164;
        case 0x536168u: goto label_536168;
        case 0x53616cu: goto label_53616c;
        case 0x536170u: goto label_536170;
        case 0x536174u: goto label_536174;
        case 0x536178u: goto label_536178;
        case 0x53617cu: goto label_53617c;
        case 0x536180u: goto label_536180;
        case 0x536184u: goto label_536184;
        case 0x536188u: goto label_536188;
        case 0x53618cu: goto label_53618c;
        case 0x536190u: goto label_536190;
        case 0x536194u: goto label_536194;
        case 0x536198u: goto label_536198;
        case 0x53619cu: goto label_53619c;
        case 0x5361a0u: goto label_5361a0;
        case 0x5361a4u: goto label_5361a4;
        case 0x5361a8u: goto label_5361a8;
        case 0x5361acu: goto label_5361ac;
        case 0x5361b0u: goto label_5361b0;
        case 0x5361b4u: goto label_5361b4;
        case 0x5361b8u: goto label_5361b8;
        case 0x5361bcu: goto label_5361bc;
        case 0x5361c0u: goto label_5361c0;
        case 0x5361c4u: goto label_5361c4;
        case 0x5361c8u: goto label_5361c8;
        case 0x5361ccu: goto label_5361cc;
        case 0x5361d0u: goto label_5361d0;
        case 0x5361d4u: goto label_5361d4;
        case 0x5361d8u: goto label_5361d8;
        case 0x5361dcu: goto label_5361dc;
        case 0x5361e0u: goto label_5361e0;
        case 0x5361e4u: goto label_5361e4;
        case 0x5361e8u: goto label_5361e8;
        case 0x5361ecu: goto label_5361ec;
        case 0x5361f0u: goto label_5361f0;
        case 0x5361f4u: goto label_5361f4;
        case 0x5361f8u: goto label_5361f8;
        case 0x5361fcu: goto label_5361fc;
        case 0x536200u: goto label_536200;
        case 0x536204u: goto label_536204;
        case 0x536208u: goto label_536208;
        case 0x53620cu: goto label_53620c;
        case 0x536210u: goto label_536210;
        case 0x536214u: goto label_536214;
        case 0x536218u: goto label_536218;
        case 0x53621cu: goto label_53621c;
        case 0x536220u: goto label_536220;
        case 0x536224u: goto label_536224;
        case 0x536228u: goto label_536228;
        case 0x53622cu: goto label_53622c;
        case 0x536230u: goto label_536230;
        case 0x536234u: goto label_536234;
        case 0x536238u: goto label_536238;
        case 0x53623cu: goto label_53623c;
        case 0x536240u: goto label_536240;
        case 0x536244u: goto label_536244;
        case 0x536248u: goto label_536248;
        case 0x53624cu: goto label_53624c;
        case 0x536250u: goto label_536250;
        case 0x536254u: goto label_536254;
        case 0x536258u: goto label_536258;
        case 0x53625cu: goto label_53625c;
        case 0x536260u: goto label_536260;
        case 0x536264u: goto label_536264;
        case 0x536268u: goto label_536268;
        case 0x53626cu: goto label_53626c;
        case 0x536270u: goto label_536270;
        case 0x536274u: goto label_536274;
        case 0x536278u: goto label_536278;
        case 0x53627cu: goto label_53627c;
        case 0x536280u: goto label_536280;
        case 0x536284u: goto label_536284;
        case 0x536288u: goto label_536288;
        case 0x53628cu: goto label_53628c;
        case 0x536290u: goto label_536290;
        case 0x536294u: goto label_536294;
        case 0x536298u: goto label_536298;
        case 0x53629cu: goto label_53629c;
        case 0x5362a0u: goto label_5362a0;
        case 0x5362a4u: goto label_5362a4;
        case 0x5362a8u: goto label_5362a8;
        case 0x5362acu: goto label_5362ac;
        case 0x5362b0u: goto label_5362b0;
        case 0x5362b4u: goto label_5362b4;
        case 0x5362b8u: goto label_5362b8;
        case 0x5362bcu: goto label_5362bc;
        case 0x5362c0u: goto label_5362c0;
        case 0x5362c4u: goto label_5362c4;
        case 0x5362c8u: goto label_5362c8;
        case 0x5362ccu: goto label_5362cc;
        case 0x5362d0u: goto label_5362d0;
        case 0x5362d4u: goto label_5362d4;
        case 0x5362d8u: goto label_5362d8;
        case 0x5362dcu: goto label_5362dc;
        case 0x5362e0u: goto label_5362e0;
        case 0x5362e4u: goto label_5362e4;
        case 0x5362e8u: goto label_5362e8;
        case 0x5362ecu: goto label_5362ec;
        case 0x5362f0u: goto label_5362f0;
        case 0x5362f4u: goto label_5362f4;
        case 0x5362f8u: goto label_5362f8;
        case 0x5362fcu: goto label_5362fc;
        case 0x536300u: goto label_536300;
        case 0x536304u: goto label_536304;
        case 0x536308u: goto label_536308;
        case 0x53630cu: goto label_53630c;
        case 0x536310u: goto label_536310;
        case 0x536314u: goto label_536314;
        case 0x536318u: goto label_536318;
        case 0x53631cu: goto label_53631c;
        case 0x536320u: goto label_536320;
        case 0x536324u: goto label_536324;
        case 0x536328u: goto label_536328;
        case 0x53632cu: goto label_53632c;
        case 0x536330u: goto label_536330;
        case 0x536334u: goto label_536334;
        case 0x536338u: goto label_536338;
        case 0x53633cu: goto label_53633c;
        case 0x536340u: goto label_536340;
        case 0x536344u: goto label_536344;
        case 0x536348u: goto label_536348;
        case 0x53634cu: goto label_53634c;
        case 0x536350u: goto label_536350;
        case 0x536354u: goto label_536354;
        case 0x536358u: goto label_536358;
        case 0x53635cu: goto label_53635c;
        case 0x536360u: goto label_536360;
        case 0x536364u: goto label_536364;
        case 0x536368u: goto label_536368;
        case 0x53636cu: goto label_53636c;
        case 0x536370u: goto label_536370;
        case 0x536374u: goto label_536374;
        case 0x536378u: goto label_536378;
        case 0x53637cu: goto label_53637c;
        case 0x536380u: goto label_536380;
        case 0x536384u: goto label_536384;
        case 0x536388u: goto label_536388;
        case 0x53638cu: goto label_53638c;
        case 0x536390u: goto label_536390;
        case 0x536394u: goto label_536394;
        case 0x536398u: goto label_536398;
        case 0x53639cu: goto label_53639c;
        case 0x5363a0u: goto label_5363a0;
        case 0x5363a4u: goto label_5363a4;
        case 0x5363a8u: goto label_5363a8;
        case 0x5363acu: goto label_5363ac;
        case 0x5363b0u: goto label_5363b0;
        case 0x5363b4u: goto label_5363b4;
        case 0x5363b8u: goto label_5363b8;
        case 0x5363bcu: goto label_5363bc;
        case 0x5363c0u: goto label_5363c0;
        case 0x5363c4u: goto label_5363c4;
        case 0x5363c8u: goto label_5363c8;
        case 0x5363ccu: goto label_5363cc;
        case 0x5363d0u: goto label_5363d0;
        case 0x5363d4u: goto label_5363d4;
        case 0x5363d8u: goto label_5363d8;
        case 0x5363dcu: goto label_5363dc;
        case 0x5363e0u: goto label_5363e0;
        case 0x5363e4u: goto label_5363e4;
        case 0x5363e8u: goto label_5363e8;
        case 0x5363ecu: goto label_5363ec;
        case 0x5363f0u: goto label_5363f0;
        case 0x5363f4u: goto label_5363f4;
        case 0x5363f8u: goto label_5363f8;
        case 0x5363fcu: goto label_5363fc;
        case 0x536400u: goto label_536400;
        case 0x536404u: goto label_536404;
        case 0x536408u: goto label_536408;
        case 0x53640cu: goto label_53640c;
        case 0x536410u: goto label_536410;
        case 0x536414u: goto label_536414;
        case 0x536418u: goto label_536418;
        case 0x53641cu: goto label_53641c;
        case 0x536420u: goto label_536420;
        case 0x536424u: goto label_536424;
        case 0x536428u: goto label_536428;
        case 0x53642cu: goto label_53642c;
        case 0x536430u: goto label_536430;
        case 0x536434u: goto label_536434;
        case 0x536438u: goto label_536438;
        case 0x53643cu: goto label_53643c;
        case 0x536440u: goto label_536440;
        case 0x536444u: goto label_536444;
        case 0x536448u: goto label_536448;
        case 0x53644cu: goto label_53644c;
        case 0x536450u: goto label_536450;
        case 0x536454u: goto label_536454;
        case 0x536458u: goto label_536458;
        case 0x53645cu: goto label_53645c;
        case 0x536460u: goto label_536460;
        case 0x536464u: goto label_536464;
        case 0x536468u: goto label_536468;
        case 0x53646cu: goto label_53646c;
        case 0x536470u: goto label_536470;
        case 0x536474u: goto label_536474;
        case 0x536478u: goto label_536478;
        case 0x53647cu: goto label_53647c;
        default: break;
    }

    ctx->pc = 0x535c90u;

label_535c90:
    // 0x535c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x535c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_535c94:
    // 0x535c94: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x535c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_535c98:
    // 0x535c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x535c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_535c9c:
    // 0x535c9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x535c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_535ca0:
    // 0x535ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_535ca4:
    // 0x535ca4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x535ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_535ca8:
    // 0x535ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x535ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_535cac:
    // 0x535cac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x535cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535cb0:
    // 0x535cb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x535cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_535cb4:
    // 0x535cb4: 0x26070338  addiu       $a3, $s0, 0x338
    ctx->pc = 0x535cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_535cb8:
    // 0x535cb8: 0xac460374  sw          $a2, 0x374($v0)
    ctx->pc = 0x535cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 884), GPR_U32(ctx, 6));
label_535cbc:
    // 0x535cbc: 0x90850064  lbu         $a1, 0x64($a0)
    ctx->pc = 0x535cbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_535cc0:
    // 0x535cc0: 0xc14d4e0  jal         func_535380
label_535cc4:
    if (ctx->pc == 0x535CC4u) {
        ctx->pc = 0x535CC4u;
            // 0x535cc4: 0x26060068  addiu       $a2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->pc = 0x535CC8u;
        goto label_535cc8;
    }
    ctx->pc = 0x535CC0u;
    SET_GPR_U32(ctx, 31, 0x535CC8u);
    ctx->pc = 0x535CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535CC0u;
            // 0x535cc4: 0x26060068  addiu       $a2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535380u;
    if (runtime->hasFunction(0x535380u)) {
        auto targetFn = runtime->lookupFunction(0x535380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535CC8u; }
        if (ctx->pc != 0x535CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535380_0x535380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535CC8u; }
        if (ctx->pc != 0x535CC8u) { return; }
    }
    ctx->pc = 0x535CC8u;
label_535cc8:
    // 0x535cc8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x535cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_535ccc:
    // 0x535ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_535cd0:
    // 0x535cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_535cd4:
    // 0x535cd4: 0x3e00008  jr          $ra
label_535cd8:
    if (ctx->pc == 0x535CD8u) {
        ctx->pc = 0x535CD8u;
            // 0x535cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x535CDCu;
        goto label_535cdc;
    }
    ctx->pc = 0x535CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535CD4u;
            // 0x535cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535CDCu;
label_535cdc:
    // 0x535cdc: 0x0  nop
    ctx->pc = 0x535cdcu;
    // NOP
label_535ce0:
    // 0x535ce0: 0x814d68c  j           func_535A30
label_535ce4:
    if (ctx->pc == 0x535CE4u) {
        ctx->pc = 0x535CE4u;
            // 0x535ce4: 0x2484ffd8  addiu       $a0, $a0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967256));
        ctx->pc = 0x535CE8u;
        goto label_535ce8;
    }
    ctx->pc = 0x535CE0u;
    ctx->pc = 0x535CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535CE0u;
            // 0x535ce4: 0x2484ffd8  addiu       $a0, $a0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535A30u;
    if (runtime->hasFunction(0x535A30u)) {
        auto targetFn = runtime->lookupFunction(0x535A30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00535A30_0x535a30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x535CE8u;
label_535ce8:
    // 0x535ce8: 0x0  nop
    ctx->pc = 0x535ce8u;
    // NOP
label_535cec:
    // 0x535cec: 0x0  nop
    ctx->pc = 0x535cecu;
    // NOP
label_535cf0:
    // 0x535cf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x535cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_535cf4:
    // 0x535cf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x535cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_535cf8:
    // 0x535cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x535cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_535cfc:
    // 0x535cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x535cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_535d00:
    // 0x535d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x535d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_535d04:
    // 0x535d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x535d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_535d08:
    // 0x535d08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x535d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_535d0c:
    // 0x535d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_535d10:
    // 0x535d10: 0x26510580  addiu       $s1, $s2, 0x580
    ctx->pc = 0x535d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
label_535d14:
    // 0x535d14: 0x8c850e30  lw          $a1, 0xE30($a0)
    ctx->pc = 0x535d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_535d18:
    // 0x535d18: 0x10a30147  beq         $a1, $v1, . + 4 + (0x147 << 2)
label_535d1c:
    if (ctx->pc == 0x535D1Cu) {
        ctx->pc = 0x535D1Cu;
            // 0x535d1c: 0x265005f0  addiu       $s0, $s2, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
        ctx->pc = 0x535D20u;
        goto label_535d20;
    }
    ctx->pc = 0x535D18u;
    {
        const bool branch_taken_0x535d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x535D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535D18u;
            // 0x535d1c: 0x265005f0  addiu       $s0, $s2, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535d18) {
            ctx->pc = 0x536238u;
            goto label_536238;
        }
    }
    ctx->pc = 0x535D20u;
label_535d20:
    // 0x535d20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x535d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_535d24:
    // 0x535d24: 0x10a3011f  beq         $a1, $v1, . + 4 + (0x11F << 2)
label_535d28:
    if (ctx->pc == 0x535D28u) {
        ctx->pc = 0x535D2Cu;
        goto label_535d2c;
    }
    ctx->pc = 0x535D24u;
    {
        const bool branch_taken_0x535d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x535d24) {
            ctx->pc = 0x5361A4u;
            goto label_5361a4;
        }
    }
    ctx->pc = 0x535D2Cu;
label_535d2c:
    // 0x535d2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x535d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_535d30:
    // 0x535d30: 0x50a300b3  beql        $a1, $v1, . + 4 + (0xB3 << 2)
label_535d34:
    if (ctx->pc == 0x535D34u) {
        ctx->pc = 0x535D34u;
            // 0x535d34: 0x8e441224  lw          $a0, 0x1224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4644)));
        ctx->pc = 0x535D38u;
        goto label_535d38;
    }
    ctx->pc = 0x535D30u;
    {
        const bool branch_taken_0x535d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x535d30) {
            ctx->pc = 0x535D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535D30u;
            // 0x535d34: 0x8e441224  lw          $a0, 0x1224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536000u;
            goto label_536000;
        }
    }
    ctx->pc = 0x535D38u;
label_535d38:
    // 0x535d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x535d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535d3c:
    // 0x535d3c: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
label_535d40:
    if (ctx->pc == 0x535D40u) {
        ctx->pc = 0x535D44u;
        goto label_535d44;
    }
    ctx->pc = 0x535D3Cu;
    {
        const bool branch_taken_0x535d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x535d3c) {
            ctx->pc = 0x535DF4u;
            goto label_535df4;
        }
    }
    ctx->pc = 0x535D44u;
label_535d44:
    // 0x535d44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_535d48:
    if (ctx->pc == 0x535D48u) {
        ctx->pc = 0x535D4Cu;
        goto label_535d4c;
    }
    ctx->pc = 0x535D44u;
    {
        const bool branch_taken_0x535d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x535d44) {
            ctx->pc = 0x535D54u;
            goto label_535d54;
        }
    }
    ctx->pc = 0x535D4Cu;
label_535d4c:
    // 0x535d4c: 0x10000150  b           . + 4 + (0x150 << 2)
label_535d50:
    if (ctx->pc == 0x535D50u) {
        ctx->pc = 0x535D50u;
            // 0x535d50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x535D54u;
        goto label_535d54;
    }
    ctx->pc = 0x535D4Cu;
    {
        const bool branch_taken_0x535d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535D4Cu;
            // 0x535d50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535d4c) {
            ctx->pc = 0x536290u;
            goto label_536290;
        }
    }
    ctx->pc = 0x535D54u;
label_535d54:
    // 0x535d54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x535d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_535d58:
    // 0x535d58: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x535d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_535d5c:
    // 0x535d5c: 0xc6410e1c  lwc1        $f1, 0xE1C($s2)
    ctx->pc = 0x535d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_535d60:
    // 0x535d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x535d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_535d64:
    // 0x535d64: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x535d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_535d68:
    // 0x535d68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x535d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_535d6c:
    // 0x535d6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x535d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_535d70:
    // 0x535d70: 0x45000146  bc1f        . + 4 + (0x146 << 2)
label_535d74:
    if (ctx->pc == 0x535D74u) {
        ctx->pc = 0x535D74u;
            // 0x535d74: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->pc = 0x535D78u;
        goto label_535d78;
    }
    ctx->pc = 0x535D70u;
    {
        const bool branch_taken_0x535d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x535D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535D70u;
            // 0x535d74: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x535d70) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x535D78u;
label_535d78:
    // 0x535d78: 0xa24011a1  sb          $zero, 0x11A1($s2)
    ctx->pc = 0x535d78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4513), (uint8_t)GPR_U32(ctx, 0));
label_535d7c:
    // 0x535d7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x535d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_535d80:
    // 0x535d80: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x535d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_535d84:
    // 0x535d84: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x535d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_535d88:
    // 0x535d88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x535d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_535d8c:
    // 0x535d8c: 0xc0a545c  jal         func_295170
label_535d90:
    if (ctx->pc == 0x535D90u) {
        ctx->pc = 0x535D90u;
            // 0x535d90: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x535D94u;
        goto label_535d94;
    }
    ctx->pc = 0x535D8Cu;
    SET_GPR_U32(ctx, 31, 0x535D94u);
    ctx->pc = 0x535D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535D8Cu;
            // 0x535d90: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535D94u; }
        if (ctx->pc != 0x535D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535D94u; }
        if (ctx->pc != 0x535D94u) { return; }
    }
    ctx->pc = 0x535D94u;
label_535d94:
    // 0x535d94: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x535d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_535d98:
    // 0x535d98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x535d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_535d9c:
    // 0x535d9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x535d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_535da0:
    // 0x535da0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x535da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_535da4:
    // 0x535da4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x535da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_535da8:
    // 0x535da8: 0xc08bf20  jal         func_22FC80
label_535dac:
    if (ctx->pc == 0x535DACu) {
        ctx->pc = 0x535DACu;
            // 0x535dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x535DB0u;
        goto label_535db0;
    }
    ctx->pc = 0x535DA8u;
    SET_GPR_U32(ctx, 31, 0x535DB0u);
    ctx->pc = 0x535DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535DA8u;
            // 0x535dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535DB0u; }
        if (ctx->pc != 0x535DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535DB0u; }
        if (ctx->pc != 0x535DB0u) { return; }
    }
    ctx->pc = 0x535DB0u;
label_535db0:
    // 0x535db0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x535db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_535db4:
    // 0x535db4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x535db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_535db8:
    // 0x535db8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x535db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_535dbc:
    // 0x535dbc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x535dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_535dc0:
    // 0x535dc0: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_535dc4:
    if (ctx->pc == 0x535DC4u) {
        ctx->pc = 0x535DC4u;
            // 0x535dc4: 0x8e430d74  lw          $v1, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x535DC8u;
        goto label_535dc8;
    }
    ctx->pc = 0x535DC0u;
    {
        const bool branch_taken_0x535dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x535dc0) {
            ctx->pc = 0x535DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535DC0u;
            // 0x535dc4: 0x8e430d74  lw          $v1, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535DD8u;
            goto label_535dd8;
        }
    }
    ctx->pc = 0x535DC8u;
label_535dc8:
    // 0x535dc8: 0x8e430d74  lw          $v1, 0xD74($s2)
    ctx->pc = 0x535dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_535dcc:
    // 0x535dcc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x535dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_535dd0:
    // 0x535dd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_535dd4:
    if (ctx->pc == 0x535DD4u) {
        ctx->pc = 0x535DD4u;
            // 0x535dd4: 0xac6402b0  sw          $a0, 0x2B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 4));
        ctx->pc = 0x535DD8u;
        goto label_535dd8;
    }
    ctx->pc = 0x535DD0u;
    {
        const bool branch_taken_0x535dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535DD0u;
            // 0x535dd4: 0xac6402b0  sw          $a0, 0x2B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535dd0) {
            ctx->pc = 0x535DE0u;
            goto label_535de0;
        }
    }
    ctx->pc = 0x535DD8u;
label_535dd8:
    // 0x535dd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x535dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_535ddc:
    // 0x535ddc: 0xac6402b0  sw          $a0, 0x2B0($v1)
    ctx->pc = 0x535ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 4));
label_535de0:
    // 0x535de0: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x535de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_535de4:
    // 0x535de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x535de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535de8:
    // 0x535de8: 0xae440e1c  sw          $a0, 0xE1C($s2)
    ctx->pc = 0x535de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3612), GPR_U32(ctx, 4));
label_535dec:
    // 0x535dec: 0x10000127  b           . + 4 + (0x127 << 2)
label_535df0:
    if (ctx->pc == 0x535DF0u) {
        ctx->pc = 0x535DF0u;
            // 0x535df0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x535DF4u;
        goto label_535df4;
    }
    ctx->pc = 0x535DECu;
    {
        const bool branch_taken_0x535dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535DECu;
            // 0x535df0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535dec) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x535DF4u;
label_535df4:
    // 0x535df4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x535df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_535df8:
    // 0x535df8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x535df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_535dfc:
    // 0x535dfc: 0xc6400e1c  lwc1        $f0, 0xE1C($s2)
    ctx->pc = 0x535dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_535e00:
    // 0x535e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535e04:
    // 0x535e04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x535e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_535e08:
    // 0x535e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x535e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_535e0c:
    // 0x535e0c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x535e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_535e10:
    // 0x535e10: 0x4500011e  bc1f        . + 4 + (0x11E << 2)
label_535e14:
    if (ctx->pc == 0x535E14u) {
        ctx->pc = 0x535E14u;
            // 0x535e14: 0xe6400e1c  swc1        $f0, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->pc = 0x535E18u;
        goto label_535e18;
    }
    ctx->pc = 0x535E10u;
    {
        const bool branch_taken_0x535e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x535E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535E10u;
            // 0x535e14: 0xe6400e1c  swc1        $f0, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x535e10) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x535E18u;
label_535e18:
    // 0x535e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x535e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_535e1c:
    // 0x535e1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x535e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_535e20:
    // 0x535e20: 0xa7a200d4  sh          $v0, 0xD4($sp)
    ctx->pc = 0x535e20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 2));
label_535e24:
    // 0x535e24: 0xe7ac00c4  swc1        $f12, 0xC4($sp)
    ctx->pc = 0x535e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_535e28:
    // 0x535e28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x535e28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_535e2c:
    // 0x535e2c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x535e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_535e30:
    // 0x535e30: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x535e30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_535e34:
    // 0x535e34: 0xa7a000d0  sh          $zero, 0xD0($sp)
    ctx->pc = 0x535e34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 0));
label_535e38:
    // 0x535e38: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x535e38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_535e3c:
    // 0x535e3c: 0xa7a000d2  sh          $zero, 0xD2($sp)
    ctx->pc = 0x535e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 0));
label_535e40:
    // 0x535e40: 0xc04cbd8  jal         func_132F60
label_535e44:
    if (ctx->pc == 0x535E44u) {
        ctx->pc = 0x535E44u;
            // 0x535e44: 0xa7a000d6  sh          $zero, 0xD6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 214), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x535E48u;
        goto label_535e48;
    }
    ctx->pc = 0x535E40u;
    SET_GPR_U32(ctx, 31, 0x535E48u);
    ctx->pc = 0x535E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E40u;
            // 0x535e44: 0xa7a000d6  sh          $zero, 0xD6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 214), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E48u; }
        if (ctx->pc != 0x535E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E48u; }
        if (ctx->pc != 0x535E48u) { return; }
    }
    ctx->pc = 0x535E48u;
label_535e48:
    // 0x535e48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535e4c:
    // 0x535e4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x535e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_535e50:
    // 0x535e50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x535e50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_535e54:
    // 0x535e54: 0xc04cbd8  jal         func_132F60
label_535e58:
    if (ctx->pc == 0x535E58u) {
        ctx->pc = 0x535E58u;
            // 0x535e58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535E5Cu;
        goto label_535e5c;
    }
    ctx->pc = 0x535E54u;
    SET_GPR_U32(ctx, 31, 0x535E5Cu);
    ctx->pc = 0x535E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E54u;
            // 0x535e58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E5Cu; }
        if (ctx->pc != 0x535E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E5Cu; }
        if (ctx->pc != 0x535E5Cu) { return; }
    }
    ctx->pc = 0x535E5Cu;
label_535e5c:
    // 0x535e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535e60:
    // 0x535e60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x535e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_535e64:
    // 0x535e64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x535e64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_535e68:
    // 0x535e68: 0xc04cbd8  jal         func_132F60
label_535e6c:
    if (ctx->pc == 0x535E6Cu) {
        ctx->pc = 0x535E6Cu;
            // 0x535e6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535E70u;
        goto label_535e70;
    }
    ctx->pc = 0x535E68u;
    SET_GPR_U32(ctx, 31, 0x535E70u);
    ctx->pc = 0x535E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E68u;
            // 0x535e6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E70u; }
        if (ctx->pc != 0x535E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E70u; }
        if (ctx->pc != 0x535E70u) { return; }
    }
    ctx->pc = 0x535E70u;
label_535e70:
    // 0x535e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535e74:
    // 0x535e74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x535e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_535e78:
    // 0x535e78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x535e78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_535e7c:
    // 0x535e7c: 0xc04cbd8  jal         func_132F60
label_535e80:
    if (ctx->pc == 0x535E80u) {
        ctx->pc = 0x535E80u;
            // 0x535e80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535E84u;
        goto label_535e84;
    }
    ctx->pc = 0x535E7Cu;
    SET_GPR_U32(ctx, 31, 0x535E84u);
    ctx->pc = 0x535E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E7Cu;
            // 0x535e80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E84u; }
        if (ctx->pc != 0x535E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E84u; }
        if (ctx->pc != 0x535E84u) { return; }
    }
    ctx->pc = 0x535E84u;
label_535e84:
    // 0x535e84: 0x8e461224  lw          $a2, 0x1224($s2)
    ctx->pc = 0x535e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4644)));
label_535e88:
    // 0x535e88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x535e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_535e8c:
    // 0x535e8c: 0xc0b8580  jal         func_2E1600
label_535e90:
    if (ctx->pc == 0x535E90u) {
        ctx->pc = 0x535E90u;
            // 0x535e90: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x535E94u;
        goto label_535e94;
    }
    ctx->pc = 0x535E8Cu;
    SET_GPR_U32(ctx, 31, 0x535E94u);
    ctx->pc = 0x535E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E8Cu;
            // 0x535e90: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E94u; }
        if (ctx->pc != 0x535E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1600_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535E94u; }
        if (ctx->pc != 0x535E94u) { return; }
    }
    ctx->pc = 0x535E94u;
label_535e94:
    // 0x535e94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x535e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_535e98:
    // 0x535e98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x535e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_535e9c:
    // 0x535e9c: 0xc04cc90  jal         func_133240
label_535ea0:
    if (ctx->pc == 0x535EA0u) {
        ctx->pc = 0x535EA0u;
            // 0x535ea0: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x535EA4u;
        goto label_535ea4;
    }
    ctx->pc = 0x535E9Cu;
    SET_GPR_U32(ctx, 31, 0x535EA4u);
    ctx->pc = 0x535EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535E9Cu;
            // 0x535ea0: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EA4u; }
        if (ctx->pc != 0x535EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EA4u; }
        if (ctx->pc != 0x535EA4u) { return; }
    }
    ctx->pc = 0x535EA4u;
label_535ea4:
    // 0x535ea4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x535ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_535ea8:
    // 0x535ea8: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x535ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_535eac:
    // 0x535eac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x535eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_535eb0:
    // 0x535eb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x535eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535eb4:
    // 0x535eb4: 0xc04cc70  jal         func_1331C0
label_535eb8:
    if (ctx->pc == 0x535EB8u) {
        ctx->pc = 0x535EB8u;
            // 0x535eb8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x535EBCu;
        goto label_535ebc;
    }
    ctx->pc = 0x535EB4u;
    SET_GPR_U32(ctx, 31, 0x535EBCu);
    ctx->pc = 0x535EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535EB4u;
            // 0x535eb8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EBCu; }
        if (ctx->pc != 0x535EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EBCu; }
        if (ctx->pc != 0x535EBCu) { return; }
    }
    ctx->pc = 0x535EBCu;
label_535ebc:
    // 0x535ebc: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x535ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_535ec0:
    // 0x535ec0: 0xc04cc04  jal         func_133010
label_535ec4:
    if (ctx->pc == 0x535EC4u) {
        ctx->pc = 0x535EC4u;
            // 0x535ec4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x535EC8u;
        goto label_535ec8;
    }
    ctx->pc = 0x535EC0u;
    SET_GPR_U32(ctx, 31, 0x535EC8u);
    ctx->pc = 0x535EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535EC0u;
            // 0x535ec4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EC8u; }
        if (ctx->pc != 0x535EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EC8u; }
        if (ctx->pc != 0x535EC8u) { return; }
    }
    ctx->pc = 0x535EC8u;
label_535ec8:
    // 0x535ec8: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x535ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535ecc:
    // 0x535ecc: 0xc075318  jal         func_1D4C60
label_535ed0:
    if (ctx->pc == 0x535ED0u) {
        ctx->pc = 0x535ED0u;
            // 0x535ed0: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x535ED4u;
        goto label_535ed4;
    }
    ctx->pc = 0x535ECCu;
    SET_GPR_U32(ctx, 31, 0x535ED4u);
    ctx->pc = 0x535ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535ECCu;
            // 0x535ed0: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535ED4u; }
        if (ctx->pc != 0x535ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535ED4u; }
        if (ctx->pc != 0x535ED4u) { return; }
    }
    ctx->pc = 0x535ED4u;
label_535ed4:
    // 0x535ed4: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x535ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535ed8:
    // 0x535ed8: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x535ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_535edc:
    // 0x535edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535ee0:
    // 0x535ee0: 0xc0c6250  jal         func_318940
label_535ee4:
    if (ctx->pc == 0x535EE4u) {
        ctx->pc = 0x535EE4u;
            // 0x535ee4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x535EE8u;
        goto label_535ee8;
    }
    ctx->pc = 0x535EE0u;
    SET_GPR_U32(ctx, 31, 0x535EE8u);
    ctx->pc = 0x535EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535EE0u;
            // 0x535ee4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EE8u; }
        if (ctx->pc != 0x535EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535EE8u; }
        if (ctx->pc != 0x535EE8u) { return; }
    }
    ctx->pc = 0x535EE8u;
label_535ee8:
    // 0x535ee8: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x535ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_535eec:
    // 0x535eec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x535eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_535ef0:
    // 0x535ef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x535ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535ef4:
    // 0x535ef4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x535ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_535ef8:
    // 0x535ef8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x535ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_535efc:
    // 0x535efc: 0xc0c6250  jal         func_318940
label_535f00:
    if (ctx->pc == 0x535F00u) {
        ctx->pc = 0x535F00u;
            // 0x535f00: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x535F04u;
        goto label_535f04;
    }
    ctx->pc = 0x535EFCu;
    SET_GPR_U32(ctx, 31, 0x535F04u);
    ctx->pc = 0x535F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535EFCu;
            // 0x535f00: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F04u; }
        if (ctx->pc != 0x535F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F04u; }
        if (ctx->pc != 0x535F04u) { return; }
    }
    ctx->pc = 0x535F04u;
label_535f04:
    // 0x535f04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x535f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_535f08:
    // 0x535f08: 0xc04cc44  jal         func_133110
label_535f0c:
    if (ctx->pc == 0x535F0Cu) {
        ctx->pc = 0x535F0Cu;
            // 0x535f0c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x535F10u;
        goto label_535f10;
    }
    ctx->pc = 0x535F08u;
    SET_GPR_U32(ctx, 31, 0x535F10u);
    ctx->pc = 0x535F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535F08u;
            // 0x535f0c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F10u; }
        if (ctx->pc != 0x535F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F10u; }
        if (ctx->pc != 0x535F10u) { return; }
    }
    ctx->pc = 0x535F10u;
label_535f10:
    // 0x535f10: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x535f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_535f14:
    // 0x535f14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x535f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_535f18:
    // 0x535f18: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x535f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_535f1c:
    // 0x535f1c: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x535f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_535f20:
    // 0x535f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x535f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_535f24:
    // 0x535f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x535f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_535f28:
    // 0x535f28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535f2c:
    // 0x535f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x535f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_535f30:
    // 0x535f30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x535f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_535f34:
    // 0x535f34: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x535f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_535f38:
    // 0x535f38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x535f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_535f3c:
    // 0x535f3c: 0xc04c970  jal         func_1325C0
label_535f40:
    if (ctx->pc == 0x535F40u) {
        ctx->pc = 0x535F40u;
            // 0x535f40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535F44u;
        goto label_535f44;
    }
    ctx->pc = 0x535F3Cu;
    SET_GPR_U32(ctx, 31, 0x535F44u);
    ctx->pc = 0x535F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535F3Cu;
            // 0x535f40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F44u; }
        if (ctx->pc != 0x535F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F44u; }
        if (ctx->pc != 0x535F44u) { return; }
    }
    ctx->pc = 0x535F44u;
label_535f44:
    // 0x535f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x535f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_535f48:
    // 0x535f48: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x535f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535f4c:
    // 0x535f4c: 0xc04c72c  jal         func_131CB0
label_535f50:
    if (ctx->pc == 0x535F50u) {
        ctx->pc = 0x535F50u;
            // 0x535f50: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x535F54u;
        goto label_535f54;
    }
    ctx->pc = 0x535F4Cu;
    SET_GPR_U32(ctx, 31, 0x535F54u);
    ctx->pc = 0x535F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535F4Cu;
            // 0x535f50: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F54u; }
        if (ctx->pc != 0x535F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F54u; }
        if (ctx->pc != 0x535F54u) { return; }
    }
    ctx->pc = 0x535F54u;
label_535f54:
    // 0x535f54: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x535f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535f58:
    // 0x535f58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x535f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_535f5c:
    // 0x535f5c: 0xc075378  jal         func_1D4DE0
label_535f60:
    if (ctx->pc == 0x535F60u) {
        ctx->pc = 0x535F60u;
            // 0x535f60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x535F64u;
        goto label_535f64;
    }
    ctx->pc = 0x535F5Cu;
    SET_GPR_U32(ctx, 31, 0x535F64u);
    ctx->pc = 0x535F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535F5Cu;
            // 0x535f60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F64u; }
        if (ctx->pc != 0x535F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F64u; }
        if (ctx->pc != 0x535F64u) { return; }
    }
    ctx->pc = 0x535F64u;
label_535f64:
    // 0x535f64: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x535f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_535f68:
    // 0x535f68: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x535f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_535f6c:
    // 0x535f6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x535f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_535f70:
    // 0x535f70: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x535f70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_535f74:
    // 0x535f74: 0xc0c753c  jal         func_31D4F0
label_535f78:
    if (ctx->pc == 0x535F78u) {
        ctx->pc = 0x535F78u;
            // 0x535f78: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535F7Cu;
        goto label_535f7c;
    }
    ctx->pc = 0x535F74u;
    SET_GPR_U32(ctx, 31, 0x535F7Cu);
    ctx->pc = 0x535F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535F74u;
            // 0x535f78: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F7Cu; }
        if (ctx->pc != 0x535F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535F7Cu; }
        if (ctx->pc != 0x535F7Cu) { return; }
    }
    ctx->pc = 0x535F7Cu;
label_535f7c:
    // 0x535f7c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x535f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_535f80:
    // 0x535f80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x535f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_535f84:
    // 0x535f84: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x535f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_535f88:
    // 0x535f88: 0xc6410930  lwc1        $f1, 0x930($s2)
    ctx->pc = 0x535f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_535f8c:
    // 0x535f8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x535f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_535f90:
    // 0x535f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x535f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_535f94:
    // 0x535f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x535f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_535f98:
    // 0x535f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x535f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_535f9c:
    // 0x535f9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x535f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_535fa0:
    // 0x535fa0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x535fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_535fa4:
    // 0x535fa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x535fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_535fa8:
    // 0x535fa8: 0xc04c970  jal         func_1325C0
label_535fac:
    if (ctx->pc == 0x535FACu) {
        ctx->pc = 0x535FACu;
            // 0x535fac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x535FB0u;
        goto label_535fb0;
    }
    ctx->pc = 0x535FA8u;
    SET_GPR_U32(ctx, 31, 0x535FB0u);
    ctx->pc = 0x535FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535FA8u;
            // 0x535fac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FB0u; }
        if (ctx->pc != 0x535FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FB0u; }
        if (ctx->pc != 0x535FB0u) { return; }
    }
    ctx->pc = 0x535FB0u;
label_535fb0:
    // 0x535fb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x535fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_535fb4:
    // 0x535fb4: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x535fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535fb8:
    // 0x535fb8: 0xc04c72c  jal         func_131CB0
label_535fbc:
    if (ctx->pc == 0x535FBCu) {
        ctx->pc = 0x535FBCu;
            // 0x535fbc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x535FC0u;
        goto label_535fc0;
    }
    ctx->pc = 0x535FB8u;
    SET_GPR_U32(ctx, 31, 0x535FC0u);
    ctx->pc = 0x535FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535FB8u;
            // 0x535fbc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FC0u; }
        if (ctx->pc != 0x535FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FC0u; }
        if (ctx->pc != 0x535FC0u) { return; }
    }
    ctx->pc = 0x535FC0u;
label_535fc0:
    // 0x535fc0: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x535fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_535fc4:
    // 0x535fc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x535fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_535fc8:
    // 0x535fc8: 0xc075378  jal         func_1D4DE0
label_535fcc:
    if (ctx->pc == 0x535FCCu) {
        ctx->pc = 0x535FCCu;
            // 0x535fcc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x535FD0u;
        goto label_535fd0;
    }
    ctx->pc = 0x535FC8u;
    SET_GPR_U32(ctx, 31, 0x535FD0u);
    ctx->pc = 0x535FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535FC8u;
            // 0x535fcc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FD0u; }
        if (ctx->pc != 0x535FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FD0u; }
        if (ctx->pc != 0x535FD0u) { return; }
    }
    ctx->pc = 0x535FD0u;
label_535fd0:
    // 0x535fd0: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x535fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_535fd4:
    // 0x535fd4: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x535fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_535fd8:
    // 0x535fd8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x535fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_535fdc:
    // 0x535fdc: 0x2464009c  addiu       $a0, $v1, 0x9C
    ctx->pc = 0x535fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_535fe0:
    // 0x535fe0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x535fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_535fe4:
    // 0x535fe4: 0xc0c753c  jal         func_31D4F0
label_535fe8:
    if (ctx->pc == 0x535FE8u) {
        ctx->pc = 0x535FE8u;
            // 0x535fe8: 0x460c0340  add.s       $f13, $f0, $f12 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x535FECu;
        goto label_535fec;
    }
    ctx->pc = 0x535FE4u;
    SET_GPR_U32(ctx, 31, 0x535FECu);
    ctx->pc = 0x535FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535FE4u;
            // 0x535fe8: 0x460c0340  add.s       $f13, $f0, $f12 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FECu; }
        if (ctx->pc != 0x535FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535FECu; }
        if (ctx->pc != 0x535FECu) { return; }
    }
    ctx->pc = 0x535FECu;
label_535fec:
    // 0x535fec: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x535fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_535ff0:
    // 0x535ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x535ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_535ff4:
    // 0x535ff4: 0xae440e1c  sw          $a0, 0xE1C($s2)
    ctx->pc = 0x535ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3612), GPR_U32(ctx, 4));
label_535ff8:
    // 0x535ff8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_535ffc:
    if (ctx->pc == 0x535FFCu) {
        ctx->pc = 0x535FFCu;
            // 0x535ffc: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x536000u;
        goto label_536000;
    }
    ctx->pc = 0x535FF8u;
    {
        const bool branch_taken_0x535ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535FF8u;
            // 0x535ffc: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535ff8) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x536000u;
label_536000:
    // 0x536000: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x536000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
label_536004:
    // 0x536004: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_536008:
    if (ctx->pc == 0x536008u) {
        ctx->pc = 0x53600Cu;
        goto label_53600c;
    }
    ctx->pc = 0x536004u;
    {
        const bool branch_taken_0x536004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x536004) {
            ctx->pc = 0x53606Cu;
            goto label_53606c;
        }
    }
    ctx->pc = 0x53600Cu;
label_53600c:
    // 0x53600c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_536010:
    // 0x536010: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x536010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_536014:
    // 0x536014: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x536014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_536018:
    // 0x536018: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x536018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_53601c:
    // 0x53601c: 0xa3a400ff  sb          $a0, 0xFF($sp)
    ctx->pc = 0x53601cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 4));
label_536020:
    // 0x536020: 0x26470820  addiu       $a3, $s2, 0x820
    ctx->pc = 0x536020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
label_536024:
    // 0x536024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x536024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536028:
    // 0x536028: 0x27a900ff  addiu       $t1, $sp, 0xFF
    ctx->pc = 0x536028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 255));
label_53602c:
    // 0x53602c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x53602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_536030:
    // 0x536030: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x536030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_536034:
    // 0x536034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x536034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_536038:
    // 0x536038: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x536038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_53603c:
    // 0x53603c: 0xc0b8704  jal         func_2E1C10
label_536040:
    if (ctx->pc == 0x536040u) {
        ctx->pc = 0x536040u;
            // 0x536040: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536044u;
        goto label_536044;
    }
    ctx->pc = 0x53603Cu;
    SET_GPR_U32(ctx, 31, 0x536044u);
    ctx->pc = 0x536040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53603Cu;
            // 0x536040: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536044u; }
        if (ctx->pc != 0x536044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536044u; }
        if (ctx->pc != 0x536044u) { return; }
    }
    ctx->pc = 0x536044u;
label_536044:
    // 0x536044: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x536044u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_536048:
    // 0x536048: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_53604c:
    if (ctx->pc == 0x53604Cu) {
        ctx->pc = 0x536050u;
        goto label_536050;
    }
    ctx->pc = 0x536048u;
    {
        const bool branch_taken_0x536048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x536048) {
            ctx->pc = 0x53606Cu;
            goto label_53606c;
        }
    }
    ctx->pc = 0x536050u;
label_536050:
    // 0x536050: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x536050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
label_536054:
    // 0x536054: 0x8e441224  lw          $a0, 0x1224($s2)
    ctx->pc = 0x536054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4644)));
label_536058:
    // 0x536058: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_53605c:
    if (ctx->pc == 0x53605Cu) {
        ctx->pc = 0x536060u;
        goto label_536060;
    }
    ctx->pc = 0x536058u;
    {
        const bool branch_taken_0x536058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x536058) {
            ctx->pc = 0x53606Cu;
            goto label_53606c;
        }
    }
    ctx->pc = 0x536060u;
label_536060:
    // 0x536060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x536060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536064:
    // 0x536064: 0xc0ab808  jal         func_2AE020
label_536068:
    if (ctx->pc == 0x536068u) {
        ctx->pc = 0x536068u;
            // 0x536068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53606Cu;
        goto label_53606c;
    }
    ctx->pc = 0x536064u;
    SET_GPR_U32(ctx, 31, 0x53606Cu);
    ctx->pc = 0x536068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536064u;
            // 0x536068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53606Cu; }
        if (ctx->pc != 0x53606Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53606Cu; }
        if (ctx->pc != 0x53606Cu) { return; }
    }
    ctx->pc = 0x53606Cu;
label_53606c:
    // 0x53606c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53606cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_536070:
    // 0x536070: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x536070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_536074:
    // 0x536074: 0xc6410e1c  lwc1        $f1, 0xE1C($s2)
    ctx->pc = 0x536074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_536078:
    // 0x536078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x536078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53607c:
    // 0x53607c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x53607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_536080:
    // 0x536080: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x536080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_536084:
    // 0x536084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x536084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_536088:
    // 0x536088: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_53608c:
    if (ctx->pc == 0x53608Cu) {
        ctx->pc = 0x53608Cu;
            // 0x53608c: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->pc = 0x536090u;
        goto label_536090;
    }
    ctx->pc = 0x536088u;
    {
        const bool branch_taken_0x536088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x53608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536088u;
            // 0x53608c: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x536088) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x536090u;
label_536090:
    // 0x536090: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x536090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_536094:
    // 0x536094: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x536094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_536098:
    // 0x536098: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_53609c:
    if (ctx->pc == 0x53609Cu) {
        ctx->pc = 0x5360A0u;
        goto label_5360a0;
    }
    ctx->pc = 0x536098u;
    {
        const bool branch_taken_0x536098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x536098) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x5360A0u;
label_5360a0:
    // 0x5360a0: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x5360a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_5360a4:
    // 0x5360a4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x5360a4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5360a8:
    // 0x5360a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_5360ac:
    if (ctx->pc == 0x5360ACu) {
        ctx->pc = 0x5360ACu;
            // 0x5360ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5360B0u;
        goto label_5360b0;
    }
    ctx->pc = 0x5360A8u;
    {
        const bool branch_taken_0x5360a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5360ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5360A8u;
            // 0x5360ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5360a8) {
            ctx->pc = 0x5360C0u;
            goto label_5360c0;
        }
    }
    ctx->pc = 0x5360B0u;
label_5360b0:
    // 0x5360b0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x5360b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_5360b4:
    // 0x5360b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_5360b8:
    if (ctx->pc == 0x5360B8u) {
        ctx->pc = 0x5360BCu;
        goto label_5360bc;
    }
    ctx->pc = 0x5360B4u;
    {
        const bool branch_taken_0x5360b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5360b4) {
            ctx->pc = 0x5360C0u;
            goto label_5360c0;
        }
    }
    ctx->pc = 0x5360BCu;
label_5360bc:
    // 0x5360bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x5360bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5360c0:
    // 0x5360c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_5360c4:
    if (ctx->pc == 0x5360C4u) {
        ctx->pc = 0x5360C8u;
        goto label_5360c8;
    }
    ctx->pc = 0x5360C0u;
    {
        const bool branch_taken_0x5360c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5360c0) {
            ctx->pc = 0x5360DCu;
            goto label_5360dc;
        }
    }
    ctx->pc = 0x5360C8u;
label_5360c8:
    // 0x5360c8: 0xc075eb4  jal         func_1D7AD0
label_5360cc:
    if (ctx->pc == 0x5360CCu) {
        ctx->pc = 0x5360CCu;
            // 0x5360cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5360D0u;
        goto label_5360d0;
    }
    ctx->pc = 0x5360C8u;
    SET_GPR_U32(ctx, 31, 0x5360D0u);
    ctx->pc = 0x5360CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5360C8u;
            // 0x5360cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5360D0u; }
        if (ctx->pc != 0x5360D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5360D0u; }
        if (ctx->pc != 0x5360D0u) { return; }
    }
    ctx->pc = 0x5360D0u;
label_5360d0:
    // 0x5360d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_5360d4:
    if (ctx->pc == 0x5360D4u) {
        ctx->pc = 0x5360D8u;
        goto label_5360d8;
    }
    ctx->pc = 0x5360D0u;
    {
        const bool branch_taken_0x5360d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5360d0) {
            ctx->pc = 0x5360DCu;
            goto label_5360dc;
        }
    }
    ctx->pc = 0x5360D8u;
label_5360d8:
    // 0x5360d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x5360d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5360dc:
    // 0x5360dc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_5360e0:
    if (ctx->pc == 0x5360E0u) {
        ctx->pc = 0x5360E4u;
        goto label_5360e4;
    }
    ctx->pc = 0x5360DCu;
    {
        const bool branch_taken_0x5360dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x5360dc) {
            ctx->pc = 0x5360F4u;
            goto label_5360f4;
        }
    }
    ctx->pc = 0x5360E4u;
label_5360e4:
    // 0x5360e4: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x5360e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_5360e8:
    // 0x5360e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x5360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5360ec:
    // 0x5360ec: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_5360f0:
    if (ctx->pc == 0x5360F0u) {
        ctx->pc = 0x5360F4u;
        goto label_5360f4;
    }
    ctx->pc = 0x5360ECu;
    {
        const bool branch_taken_0x5360ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5360ec) {
            ctx->pc = 0x536118u;
            goto label_536118;
        }
    }
    ctx->pc = 0x5360F4u;
label_5360f4:
    // 0x5360f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5360f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5360f8:
    // 0x5360f8: 0x924411aa  lbu         $a0, 0x11AA($s2)
    ctx->pc = 0x5360f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_5360fc:
    // 0x5360fc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x5360fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_536100:
    // 0x536100: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x536100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_536104:
    // 0x536104: 0x26460890  addiu       $a2, $s2, 0x890
    ctx->pc = 0x536104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_536108:
    // 0x536108: 0x264702c0  addiu       $a3, $s2, 0x2C0
    ctx->pc = 0x536108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_53610c:
    // 0x53610c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x53610cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536110:
    // 0x536110: 0xc0bb404  jal         func_2ED010
label_536114:
    if (ctx->pc == 0x536114u) {
        ctx->pc = 0x536114u;
            // 0x536114: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536118u;
        goto label_536118;
    }
    ctx->pc = 0x536110u;
    SET_GPR_U32(ctx, 31, 0x536118u);
    ctx->pc = 0x536114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536110u;
            // 0x536114: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536118u; }
        if (ctx->pc != 0x536118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536118u; }
        if (ctx->pc != 0x536118u) { return; }
    }
    ctx->pc = 0x536118u;
label_536118:
    // 0x536118: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x536118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_53611c:
    // 0x53611c: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x53611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_536120:
    // 0x536120: 0xc04cc04  jal         func_133010
label_536124:
    if (ctx->pc == 0x536124u) {
        ctx->pc = 0x536124u;
            // 0x536124: 0x24a5d170  addiu       $a1, $a1, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955376));
        ctx->pc = 0x536128u;
        goto label_536128;
    }
    ctx->pc = 0x536120u;
    SET_GPR_U32(ctx, 31, 0x536128u);
    ctx->pc = 0x536124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536120u;
            // 0x536124: 0x24a5d170  addiu       $a1, $a1, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536128u; }
        if (ctx->pc != 0x536128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536128u; }
        if (ctx->pc != 0x536128u) { return; }
    }
    ctx->pc = 0x536128u;
label_536128:
    // 0x536128: 0x8e500550  lw          $s0, 0x550($s2)
    ctx->pc = 0x536128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_53612c:
    // 0x53612c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x53612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_536130:
    // 0x536130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x536130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_536134:
    // 0x536134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x536134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_536138:
    // 0x536138: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x536138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53613c:
    // 0x53613c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x53613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_536140:
    // 0x536140: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x536140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_536144:
    // 0x536144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x536144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_536148:
    // 0x536148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x536148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53614c:
    // 0x53614c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x53614cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_536150:
    // 0x536150: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x536150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_536154:
    // 0x536154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x536154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_536158:
    // 0x536158: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x536158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_53615c:
    // 0x53615c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x53615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_536160:
    // 0x536160: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x536160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_536164:
    // 0x536164: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x536164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_536168:
    // 0x536168: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x536168u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_53616c:
    // 0x53616c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x53616cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_536170:
    // 0x536170: 0x320f809  jalr        $t9
label_536174:
    if (ctx->pc == 0x536174u) {
        ctx->pc = 0x536174u;
            // 0x536174: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x536178u;
        goto label_536178;
    }
    ctx->pc = 0x536170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536178u);
        ctx->pc = 0x536174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536170u;
            // 0x536174: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536178u; }
            if (ctx->pc != 0x536178u) { return; }
        }
        }
    }
    ctx->pc = 0x536178u;
label_536178:
    // 0x536178: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x536178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_53617c:
    // 0x53617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536180:
    // 0x536180: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x536180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_536184:
    // 0x536184: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x536184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_536188:
    // 0x536188: 0x320f809  jalr        $t9
label_53618c:
    if (ctx->pc == 0x53618Cu) {
        ctx->pc = 0x53618Cu;
            // 0x53618c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x536190u;
        goto label_536190;
    }
    ctx->pc = 0x536188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536190u);
        ctx->pc = 0x53618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536188u;
            // 0x53618c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536190u; }
            if (ctx->pc != 0x536190u) { return; }
        }
        }
    }
    ctx->pc = 0x536190u;
label_536190:
    // 0x536190: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x536190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_536194:
    // 0x536194: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x536194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_536198:
    // 0x536198: 0xae440e1c  sw          $a0, 0xE1C($s2)
    ctx->pc = 0x536198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3612), GPR_U32(ctx, 4));
label_53619c:
    // 0x53619c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_5361a0:
    if (ctx->pc == 0x5361A0u) {
        ctx->pc = 0x5361A0u;
            // 0x5361a0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x5361A4u;
        goto label_5361a4;
    }
    ctx->pc = 0x53619Cu;
    {
        const bool branch_taken_0x53619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5361A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53619Cu;
            // 0x5361a0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53619c) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x5361A4u;
label_5361a4:
    // 0x5361a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5361a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5361a8:
    // 0x5361a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5361a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5361ac:
    // 0x5361ac: 0xc6410e1c  lwc1        $f1, 0xE1C($s2)
    ctx->pc = 0x5361acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5361b0:
    // 0x5361b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5361b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5361b4:
    // 0x5361b4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x5361b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5361b8:
    // 0x5361b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x5361b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_5361bc:
    // 0x5361bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5361bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5361c0:
    // 0x5361c0: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_5361c4:
    if (ctx->pc == 0x5361C4u) {
        ctx->pc = 0x5361C4u;
            // 0x5361c4: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->pc = 0x5361C8u;
        goto label_5361c8;
    }
    ctx->pc = 0x5361C0u;
    {
        const bool branch_taken_0x5361c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5361C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5361C0u;
            // 0x5361c4: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5361c0) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x5361C8u;
label_5361c8:
    // 0x5361c8: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x5361c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_5361cc:
    // 0x5361cc: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x5361ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_5361d0:
    // 0x5361d0: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x5361d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_5361d4:
    // 0x5361d4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x5361d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5361d8:
    // 0x5361d8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x5361d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_5361dc:
    // 0x5361dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x5361dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_5361e0:
    // 0x5361e0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x5361e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_5361e4:
    // 0x5361e4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x5361e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_5361e8:
    // 0x5361e8: 0xc0a545c  jal         func_295170
label_5361ec:
    if (ctx->pc == 0x5361ECu) {
        ctx->pc = 0x5361ECu;
            // 0x5361ec: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x5361F0u;
        goto label_5361f0;
    }
    ctx->pc = 0x5361E8u;
    SET_GPR_U32(ctx, 31, 0x5361F0u);
    ctx->pc = 0x5361ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5361E8u;
            // 0x5361ec: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5361F0u; }
        if (ctx->pc != 0x5361F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5361F0u; }
        if (ctx->pc != 0x5361F0u) { return; }
    }
    ctx->pc = 0x5361F0u;
label_5361f0:
    // 0x5361f0: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x5361f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_5361f4:
    // 0x5361f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5361f8:
    // 0x5361f8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x5361f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5361fc:
    // 0x5361fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5361fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_536200:
    // 0x536200: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x536200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_536204:
    // 0x536204: 0xc08bf20  jal         func_22FC80
label_536208:
    if (ctx->pc == 0x536208u) {
        ctx->pc = 0x536208u;
            // 0x536208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53620Cu;
        goto label_53620c;
    }
    ctx->pc = 0x536204u;
    SET_GPR_U32(ctx, 31, 0x53620Cu);
    ctx->pc = 0x536208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536204u;
            // 0x536208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53620Cu; }
        if (ctx->pc != 0x53620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53620Cu; }
        if (ctx->pc != 0x53620Cu) { return; }
    }
    ctx->pc = 0x53620Cu;
label_53620c:
    // 0x53620c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x53620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_536210:
    // 0x536210: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x536210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_536214:
    // 0x536214: 0xc4601360  lwc1        $f0, 0x1360($v1)
    ctx->pc = 0x536214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_536218:
    // 0x536218: 0xae440db8  sw          $a0, 0xDB8($s2)
    ctx->pc = 0x536218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 4));
label_53621c:
    // 0x53621c: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x53621cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_536220:
    // 0x536220: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x536220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_536224:
    // 0x536224: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x536224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_536228:
    // 0x536228: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x536228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53622c:
    // 0x53622c: 0xae440e1c  sw          $a0, 0xE1C($s2)
    ctx->pc = 0x53622cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3612), GPR_U32(ctx, 4));
label_536230:
    // 0x536230: 0x10000016  b           . + 4 + (0x16 << 2)
label_536234:
    if (ctx->pc == 0x536234u) {
        ctx->pc = 0x536234u;
            // 0x536234: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x536238u;
        goto label_536238;
    }
    ctx->pc = 0x536230u;
    {
        const bool branch_taken_0x536230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x536234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536230u;
            // 0x536234: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536230) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x536238u;
label_536238:
    // 0x536238: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x536238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53623c:
    // 0x53623c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_536240:
    // 0x536240: 0xc6410e1c  lwc1        $f1, 0xE1C($s2)
    ctx->pc = 0x536240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_536244:
    // 0x536244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x536244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536248:
    // 0x536248: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x536248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53624c:
    // 0x53624c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x53624cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_536250:
    // 0x536250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x536250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_536254:
    // 0x536254: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_536258:
    if (ctx->pc == 0x536258u) {
        ctx->pc = 0x536258u;
            // 0x536258: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->pc = 0x53625Cu;
        goto label_53625c;
    }
    ctx->pc = 0x536254u;
    {
        const bool branch_taken_0x536254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x536258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536254u;
            // 0x536258: 0xe6410e1c  swc1        $f1, 0xE1C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x536254) {
            ctx->pc = 0x53628Cu;
            goto label_53628c;
        }
    }
    ctx->pc = 0x53625Cu;
label_53625c:
    // 0x53625c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_536260:
    // 0x536260: 0x3c023f8e  lui         $v0, 0x3F8E
    ctx->pc = 0x536260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16270 << 16));
label_536264:
    // 0x536264: 0xa24311a1  sb          $v1, 0x11A1($s2)
    ctx->pc = 0x536264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4513), (uint8_t)GPR_U32(ctx, 3));
label_536268:
    // 0x536268: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x536268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_53626c:
    // 0x53626c: 0xae420de4  sw          $v0, 0xDE4($s2)
    ctx->pc = 0x53626cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
label_536270:
    // 0x536270: 0xc07649c  jal         func_1D9270
label_536274:
    if (ctx->pc == 0x536274u) {
        ctx->pc = 0x536274u;
            // 0x536274: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x536278u;
        goto label_536278;
    }
    ctx->pc = 0x536270u;
    SET_GPR_U32(ctx, 31, 0x536278u);
    ctx->pc = 0x536274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536270u;
            // 0x536274: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536278u; }
        if (ctx->pc != 0x536278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536278u; }
        if (ctx->pc != 0x536278u) { return; }
    }
    ctx->pc = 0x536278u;
label_536278:
    // 0x536278: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x536278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53627c:
    // 0x53627c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_536280:
    // 0x536280: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x536280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_536284:
    // 0x536284: 0x320f809  jalr        $t9
label_536288:
    if (ctx->pc == 0x536288u) {
        ctx->pc = 0x536288u;
            // 0x536288: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x53628Cu;
        goto label_53628c;
    }
    ctx->pc = 0x536284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53628Cu);
        ctx->pc = 0x536288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536284u;
            // 0x536288: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53628Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53628Cu; }
            if (ctx->pc != 0x53628Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53628Cu;
label_53628c:
    // 0x53628c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_536290:
    // 0x536290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x536290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_536294:
    // 0x536294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x536294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_536298:
    // 0x536298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53629c:
    // 0x53629c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53629cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5362a0:
    // 0x5362a0: 0x3e00008  jr          $ra
label_5362a4:
    if (ctx->pc == 0x5362A4u) {
        ctx->pc = 0x5362A4u;
            // 0x5362a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5362A8u;
        goto label_5362a8;
    }
    ctx->pc = 0x5362A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5362A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5362A0u;
            // 0x5362a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5362A8u;
label_5362a8:
    // 0x5362a8: 0x0  nop
    ctx->pc = 0x5362a8u;
    // NOP
label_5362ac:
    // 0x5362ac: 0x0  nop
    ctx->pc = 0x5362acu;
    // NOP
label_5362b0:
    // 0x5362b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5362b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5362b4:
    // 0x5362b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5362b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5362b8:
    // 0x5362b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5362b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5362bc:
    // 0x5362bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5362bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5362c0:
    // 0x5362c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5362c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5362c4:
    // 0x5362c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5362c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5362c8:
    // 0x5362c8: 0xc0ab808  jal         func_2AE020
label_5362cc:
    if (ctx->pc == 0x5362CCu) {
        ctx->pc = 0x5362CCu;
            // 0x5362cc: 0x26040580  addiu       $a0, $s0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
        ctx->pc = 0x5362D0u;
        goto label_5362d0;
    }
    ctx->pc = 0x5362C8u;
    SET_GPR_U32(ctx, 31, 0x5362D0u);
    ctx->pc = 0x5362CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5362C8u;
            // 0x5362cc: 0x26040580  addiu       $a0, $s0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5362D0u; }
        if (ctx->pc != 0x5362D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5362D0u; }
        if (ctx->pc != 0x5362D0u) { return; }
    }
    ctx->pc = 0x5362D0u;
label_5362d0:
    // 0x5362d0: 0xae00068c  sw          $zero, 0x68C($s0)
    ctx->pc = 0x5362d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
label_5362d4:
    // 0x5362d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x5362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_5362d8:
    // 0x5362d8: 0xae000690  sw          $zero, 0x690($s0)
    ctx->pc = 0x5362d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 0));
label_5362dc:
    // 0x5362dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5362dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5362e0:
    // 0x5362e0: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x5362e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_5362e4:
    // 0x5362e4: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x5362e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_5362e8:
    // 0x5362e8: 0xc0c0e5c  jal         func_303970
label_5362ec:
    if (ctx->pc == 0x5362ECu) {
        ctx->pc = 0x5362ECu;
            // 0x5362ec: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x5362F0u;
        goto label_5362f0;
    }
    ctx->pc = 0x5362E8u;
    SET_GPR_U32(ctx, 31, 0x5362F0u);
    ctx->pc = 0x5362ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5362E8u;
            // 0x5362ec: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303970u;
    if (runtime->hasFunction(0x303970u)) {
        auto targetFn = runtime->lookupFunction(0x303970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5362F0u; }
        if (ctx->pc != 0x5362F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303970_0x303970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5362F0u; }
        if (ctx->pc != 0x5362F0u) { return; }
    }
    ctx->pc = 0x5362F0u;
label_5362f0:
    // 0x5362f0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x5362f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_5362f4:
    // 0x5362f4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x5362f4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5362f8:
    // 0x5362f8: 0xae030e1c  sw          $v1, 0xE1C($s0)
    ctx->pc = 0x5362f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 3));
label_5362fc:
    // 0x5362fc: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x5362fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_536300:
    // 0x536300: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_536304:
    if (ctx->pc == 0x536304u) {
        ctx->pc = 0x536304u;
            // 0x536304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536308u;
        goto label_536308;
    }
    ctx->pc = 0x536300u;
    {
        const bool branch_taken_0x536300 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x536304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536300u;
            // 0x536304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536300) {
            ctx->pc = 0x536318u;
            goto label_536318;
        }
    }
    ctx->pc = 0x536308u;
label_536308:
    // 0x536308: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x536308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_53630c:
    // 0x53630c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_536310:
    if (ctx->pc == 0x536310u) {
        ctx->pc = 0x536314u;
        goto label_536314;
    }
    ctx->pc = 0x53630Cu;
    {
        const bool branch_taken_0x53630c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53630c) {
            ctx->pc = 0x536318u;
            goto label_536318;
        }
    }
    ctx->pc = 0x536314u;
label_536314:
    // 0x536314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x536314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536318:
    // 0x536318: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_53631c:
    if (ctx->pc == 0x53631Cu) {
        ctx->pc = 0x536320u;
        goto label_536320;
    }
    ctx->pc = 0x536318u;
    {
        const bool branch_taken_0x536318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x536318) {
            ctx->pc = 0x536334u;
            goto label_536334;
        }
    }
    ctx->pc = 0x536320u;
label_536320:
    // 0x536320: 0xc075eb4  jal         func_1D7AD0
label_536324:
    if (ctx->pc == 0x536324u) {
        ctx->pc = 0x536324u;
            // 0x536324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536328u;
        goto label_536328;
    }
    ctx->pc = 0x536320u;
    SET_GPR_U32(ctx, 31, 0x536328u);
    ctx->pc = 0x536324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536320u;
            // 0x536324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536328u; }
        if (ctx->pc != 0x536328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536328u; }
        if (ctx->pc != 0x536328u) { return; }
    }
    ctx->pc = 0x536328u;
label_536328:
    // 0x536328: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_53632c:
    if (ctx->pc == 0x53632Cu) {
        ctx->pc = 0x536330u;
        goto label_536330;
    }
    ctx->pc = 0x536328u;
    {
        const bool branch_taken_0x536328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x536328) {
            ctx->pc = 0x536334u;
            goto label_536334;
        }
    }
    ctx->pc = 0x536330u;
label_536330:
    // 0x536330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x536330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536334:
    // 0x536334: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_536338:
    if (ctx->pc == 0x536338u) {
        ctx->pc = 0x536338u;
            // 0x536338: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x53633Cu;
        goto label_53633c;
    }
    ctx->pc = 0x536334u;
    {
        const bool branch_taken_0x536334 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x536334) {
            ctx->pc = 0x536338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536334u;
            // 0x536338: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536350u;
            goto label_536350;
        }
    }
    ctx->pc = 0x53633Cu;
label_53633c:
    // 0x53633c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x53633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_536340:
    // 0x536340: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x536340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_536344:
    // 0x536344: 0x54830011  bnel        $a0, $v1, . + 4 + (0x11 << 2)
label_536348:
    if (ctx->pc == 0x536348u) {
        ctx->pc = 0x536348u;
            // 0x536348: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x53634Cu;
        goto label_53634c;
    }
    ctx->pc = 0x536344u;
    {
        const bool branch_taken_0x536344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x536344) {
            ctx->pc = 0x536348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536344u;
            // 0x536348: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53638Cu;
            goto label_53638c;
        }
    }
    ctx->pc = 0x53634Cu;
label_53634c:
    // 0x53634c: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x53634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_536350:
    // 0x536350: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x536350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_536354:
    // 0x536354: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x536354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_536358:
    // 0x536358: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x536358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_53635c:
    // 0x53635c: 0x320f809  jalr        $t9
label_536360:
    if (ctx->pc == 0x536360u) {
        ctx->pc = 0x536360u;
            // 0x536360: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x536364u;
        goto label_536364;
    }
    ctx->pc = 0x53635Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536364u);
        ctx->pc = 0x536360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53635Cu;
            // 0x536360: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536364u; }
            if (ctx->pc != 0x536364u) { return; }
        }
        }
    }
    ctx->pc = 0x536364u;
label_536364:
    // 0x536364: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x536364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_536368:
    // 0x536368: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x536368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_53636c:
    // 0x53636c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x53636cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_536370:
    // 0x536370: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x536370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_536374:
    // 0x536374: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x536374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_536378:
    // 0x536378: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x536378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_53637c:
    // 0x53637c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x53637cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536380:
    // 0x536380: 0xc0bb404  jal         func_2ED010
label_536384:
    if (ctx->pc == 0x536384u) {
        ctx->pc = 0x536384u;
            // 0x536384: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536388u;
        goto label_536388;
    }
    ctx->pc = 0x536380u;
    SET_GPR_U32(ctx, 31, 0x536388u);
    ctx->pc = 0x536384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536380u;
            // 0x536384: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536388u; }
        if (ctx->pc != 0x536388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536388u; }
        if (ctx->pc != 0x536388u) { return; }
    }
    ctx->pc = 0x536388u;
label_536388:
    // 0x536388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53638c:
    // 0x53638c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53638cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536390:
    // 0x536390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536394:
    // 0x536394: 0x3e00008  jr          $ra
label_536398:
    if (ctx->pc == 0x536398u) {
        ctx->pc = 0x536398u;
            // 0x536398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53639Cu;
        goto label_53639c;
    }
    ctx->pc = 0x536394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536394u;
            // 0x536398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53639Cu;
label_53639c:
    // 0x53639c: 0x0  nop
    ctx->pc = 0x53639cu;
    // NOP
label_5363a0:
    // 0x5363a0: 0x3e00008  jr          $ra
label_5363a4:
    if (ctx->pc == 0x5363A4u) {
        ctx->pc = 0x5363A8u;
        goto label_5363a8;
    }
    ctx->pc = 0x5363A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5363A8u;
label_5363a8:
    // 0x5363a8: 0x0  nop
    ctx->pc = 0x5363a8u;
    // NOP
label_5363ac:
    // 0x5363ac: 0x0  nop
    ctx->pc = 0x5363acu;
    // NOP
label_5363b0:
    // 0x5363b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5363b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5363b4:
    // 0x5363b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5363b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5363b8:
    // 0x5363b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5363b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5363bc:
    // 0x5363bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5363bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5363c0:
    // 0x5363c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5363c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5363c4:
    // 0x5363c4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_5363c8:
    if (ctx->pc == 0x5363C8u) {
        ctx->pc = 0x5363C8u;
            // 0x5363c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5363CCu;
        goto label_5363cc;
    }
    ctx->pc = 0x5363C4u;
    {
        const bool branch_taken_0x5363c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5363C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5363C4u;
            // 0x5363c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5363c4) {
            ctx->pc = 0x536460u;
            goto label_536460;
        }
    }
    ctx->pc = 0x5363CCu;
label_5363cc:
    // 0x5363cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5363ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5363d0:
    // 0x5363d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5363d4:
    // 0x5363d4: 0x24636e40  addiu       $v1, $v1, 0x6E40
    ctx->pc = 0x5363d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28224));
label_5363d8:
    // 0x5363d8: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x5363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
label_5363dc:
    // 0x5363dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5363dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5363e0:
    // 0x5363e0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_5363e4:
    if (ctx->pc == 0x5363E4u) {
        ctx->pc = 0x5363E4u;
            // 0x5363e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5363E8u;
        goto label_5363e8;
    }
    ctx->pc = 0x5363E0u;
    {
        const bool branch_taken_0x5363e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5363E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5363E0u;
            // 0x5363e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5363e0) {
            ctx->pc = 0x536448u;
            goto label_536448;
        }
    }
    ctx->pc = 0x5363E8u;
label_5363e8:
    // 0x5363e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5363e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5363ec:
    // 0x5363ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5363ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5363f0:
    // 0x5363f0: 0x24636f20  addiu       $v1, $v1, 0x6F20
    ctx->pc = 0x5363f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28448));
label_5363f4:
    // 0x5363f4: 0x24426f58  addiu       $v0, $v0, 0x6F58
    ctx->pc = 0x5363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28504));
label_5363f8:
    // 0x5363f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5363f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5363fc:
    // 0x5363fc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5363fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_536400:
    // 0x536400: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x536400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_536404:
    // 0x536404: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_536408:
    if (ctx->pc == 0x536408u) {
        ctx->pc = 0x536408u;
            // 0x536408: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x53640Cu;
        goto label_53640c;
    }
    ctx->pc = 0x536404u;
    {
        const bool branch_taken_0x536404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x536404) {
            ctx->pc = 0x536408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536404u;
            // 0x536408: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53641Cu;
            goto label_53641c;
        }
    }
    ctx->pc = 0x53640Cu;
label_53640c:
    // 0x53640c: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x53640cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_536410:
    // 0x536410: 0xc0407c0  jal         func_101F00
label_536414:
    if (ctx->pc == 0x536414u) {
        ctx->pc = 0x536414u;
            // 0x536414: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
        ctx->pc = 0x536418u;
        goto label_536418;
    }
    ctx->pc = 0x536410u;
    SET_GPR_U32(ctx, 31, 0x536418u);
    ctx->pc = 0x536414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536410u;
            // 0x536414: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536418u; }
        if (ctx->pc != 0x536418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536418u; }
        if (ctx->pc != 0x536418u) { return; }
    }
    ctx->pc = 0x536418u;
label_536418:
    // 0x536418: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x536418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_53641c:
    // 0x53641c: 0xc14d938  jal         func_5364E0
label_536420:
    if (ctx->pc == 0x536420u) {
        ctx->pc = 0x536420u;
            // 0x536420: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x536424u;
        goto label_536424;
    }
    ctx->pc = 0x53641Cu;
    SET_GPR_U32(ctx, 31, 0x536424u);
    ctx->pc = 0x536420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53641Cu;
            // 0x536420: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5364E0u;
    if (runtime->hasFunction(0x5364E0u)) {
        auto targetFn = runtime->lookupFunction(0x5364E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536424u; }
        if (ctx->pc != 0x536424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005364E0_0x5364e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536424u; }
        if (ctx->pc != 0x536424u) { return; }
    }
    ctx->pc = 0x536424u;
label_536424:
    // 0x536424: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x536424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_536428:
    // 0x536428: 0xc14d938  jal         func_5364E0
label_53642c:
    if (ctx->pc == 0x53642Cu) {
        ctx->pc = 0x53642Cu;
            // 0x53642c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x536430u;
        goto label_536430;
    }
    ctx->pc = 0x536428u;
    SET_GPR_U32(ctx, 31, 0x536430u);
    ctx->pc = 0x53642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536428u;
            // 0x53642c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5364E0u;
    if (runtime->hasFunction(0x5364E0u)) {
        auto targetFn = runtime->lookupFunction(0x5364E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536430u; }
        if (ctx->pc != 0x536430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005364E0_0x5364e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536430u; }
        if (ctx->pc != 0x536430u) { return; }
    }
    ctx->pc = 0x536430u;
label_536430:
    // 0x536430: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x536430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_536434:
    // 0x536434: 0xc14d920  jal         func_536480
label_536438:
    if (ctx->pc == 0x536438u) {
        ctx->pc = 0x536438u;
            // 0x536438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53643Cu;
        goto label_53643c;
    }
    ctx->pc = 0x536434u;
    SET_GPR_U32(ctx, 31, 0x53643Cu);
    ctx->pc = 0x536438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536434u;
            // 0x536438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536480u;
    if (runtime->hasFunction(0x536480u)) {
        auto targetFn = runtime->lookupFunction(0x536480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53643Cu; }
        if (ctx->pc != 0x53643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536480_0x536480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53643Cu; }
        if (ctx->pc != 0x53643Cu) { return; }
    }
    ctx->pc = 0x53643Cu;
label_53643c:
    // 0x53643c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536440:
    // 0x536440: 0xc0ae1c0  jal         func_2B8700
label_536444:
    if (ctx->pc == 0x536444u) {
        ctx->pc = 0x536444u;
            // 0x536444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536448u;
        goto label_536448;
    }
    ctx->pc = 0x536440u;
    SET_GPR_U32(ctx, 31, 0x536448u);
    ctx->pc = 0x536444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536440u;
            // 0x536444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536448u; }
        if (ctx->pc != 0x536448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536448u; }
        if (ctx->pc != 0x536448u) { return; }
    }
    ctx->pc = 0x536448u;
label_536448:
    // 0x536448: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x536448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_53644c:
    // 0x53644c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53644cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_536450:
    // 0x536450: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_536454:
    if (ctx->pc == 0x536454u) {
        ctx->pc = 0x536454u;
            // 0x536454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536458u;
        goto label_536458;
    }
    ctx->pc = 0x536450u;
    {
        const bool branch_taken_0x536450 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x536450) {
            ctx->pc = 0x536454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536450u;
            // 0x536454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536464u;
            goto label_536464;
        }
    }
    ctx->pc = 0x536458u;
label_536458:
    // 0x536458: 0xc0400a8  jal         func_1002A0
label_53645c:
    if (ctx->pc == 0x53645Cu) {
        ctx->pc = 0x53645Cu;
            // 0x53645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536460u;
        goto label_536460;
    }
    ctx->pc = 0x536458u;
    SET_GPR_U32(ctx, 31, 0x536460u);
    ctx->pc = 0x53645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536458u;
            // 0x53645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536460u; }
        if (ctx->pc != 0x536460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536460u; }
        if (ctx->pc != 0x536460u) { return; }
    }
    ctx->pc = 0x536460u;
label_536460:
    // 0x536460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x536460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536464:
    // 0x536464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536468:
    // 0x536468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53646c:
    // 0x53646c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53646cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536470:
    // 0x536470: 0x3e00008  jr          $ra
label_536474:
    if (ctx->pc == 0x536474u) {
        ctx->pc = 0x536474u;
            // 0x536474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536478u;
        goto label_536478;
    }
    ctx->pc = 0x536470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536470u;
            // 0x536474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536478u;
label_536478:
    // 0x536478: 0x0  nop
    ctx->pc = 0x536478u;
    // NOP
label_53647c:
    // 0x53647c: 0x0  nop
    ctx->pc = 0x53647cu;
    // NOP
}
