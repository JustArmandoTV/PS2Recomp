#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387D30
// Address: 0x387d30 - 0x388900
void sub_00387D30_0x387d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387D30_0x387d30");
#endif

    switch (ctx->pc) {
        case 0x387d30u: goto label_387d30;
        case 0x387d34u: goto label_387d34;
        case 0x387d38u: goto label_387d38;
        case 0x387d3cu: goto label_387d3c;
        case 0x387d40u: goto label_387d40;
        case 0x387d44u: goto label_387d44;
        case 0x387d48u: goto label_387d48;
        case 0x387d4cu: goto label_387d4c;
        case 0x387d50u: goto label_387d50;
        case 0x387d54u: goto label_387d54;
        case 0x387d58u: goto label_387d58;
        case 0x387d5cu: goto label_387d5c;
        case 0x387d60u: goto label_387d60;
        case 0x387d64u: goto label_387d64;
        case 0x387d68u: goto label_387d68;
        case 0x387d6cu: goto label_387d6c;
        case 0x387d70u: goto label_387d70;
        case 0x387d74u: goto label_387d74;
        case 0x387d78u: goto label_387d78;
        case 0x387d7cu: goto label_387d7c;
        case 0x387d80u: goto label_387d80;
        case 0x387d84u: goto label_387d84;
        case 0x387d88u: goto label_387d88;
        case 0x387d8cu: goto label_387d8c;
        case 0x387d90u: goto label_387d90;
        case 0x387d94u: goto label_387d94;
        case 0x387d98u: goto label_387d98;
        case 0x387d9cu: goto label_387d9c;
        case 0x387da0u: goto label_387da0;
        case 0x387da4u: goto label_387da4;
        case 0x387da8u: goto label_387da8;
        case 0x387dacu: goto label_387dac;
        case 0x387db0u: goto label_387db0;
        case 0x387db4u: goto label_387db4;
        case 0x387db8u: goto label_387db8;
        case 0x387dbcu: goto label_387dbc;
        case 0x387dc0u: goto label_387dc0;
        case 0x387dc4u: goto label_387dc4;
        case 0x387dc8u: goto label_387dc8;
        case 0x387dccu: goto label_387dcc;
        case 0x387dd0u: goto label_387dd0;
        case 0x387dd4u: goto label_387dd4;
        case 0x387dd8u: goto label_387dd8;
        case 0x387ddcu: goto label_387ddc;
        case 0x387de0u: goto label_387de0;
        case 0x387de4u: goto label_387de4;
        case 0x387de8u: goto label_387de8;
        case 0x387decu: goto label_387dec;
        case 0x387df0u: goto label_387df0;
        case 0x387df4u: goto label_387df4;
        case 0x387df8u: goto label_387df8;
        case 0x387dfcu: goto label_387dfc;
        case 0x387e00u: goto label_387e00;
        case 0x387e04u: goto label_387e04;
        case 0x387e08u: goto label_387e08;
        case 0x387e0cu: goto label_387e0c;
        case 0x387e10u: goto label_387e10;
        case 0x387e14u: goto label_387e14;
        case 0x387e18u: goto label_387e18;
        case 0x387e1cu: goto label_387e1c;
        case 0x387e20u: goto label_387e20;
        case 0x387e24u: goto label_387e24;
        case 0x387e28u: goto label_387e28;
        case 0x387e2cu: goto label_387e2c;
        case 0x387e30u: goto label_387e30;
        case 0x387e34u: goto label_387e34;
        case 0x387e38u: goto label_387e38;
        case 0x387e3cu: goto label_387e3c;
        case 0x387e40u: goto label_387e40;
        case 0x387e44u: goto label_387e44;
        case 0x387e48u: goto label_387e48;
        case 0x387e4cu: goto label_387e4c;
        case 0x387e50u: goto label_387e50;
        case 0x387e54u: goto label_387e54;
        case 0x387e58u: goto label_387e58;
        case 0x387e5cu: goto label_387e5c;
        case 0x387e60u: goto label_387e60;
        case 0x387e64u: goto label_387e64;
        case 0x387e68u: goto label_387e68;
        case 0x387e6cu: goto label_387e6c;
        case 0x387e70u: goto label_387e70;
        case 0x387e74u: goto label_387e74;
        case 0x387e78u: goto label_387e78;
        case 0x387e7cu: goto label_387e7c;
        case 0x387e80u: goto label_387e80;
        case 0x387e84u: goto label_387e84;
        case 0x387e88u: goto label_387e88;
        case 0x387e8cu: goto label_387e8c;
        case 0x387e90u: goto label_387e90;
        case 0x387e94u: goto label_387e94;
        case 0x387e98u: goto label_387e98;
        case 0x387e9cu: goto label_387e9c;
        case 0x387ea0u: goto label_387ea0;
        case 0x387ea4u: goto label_387ea4;
        case 0x387ea8u: goto label_387ea8;
        case 0x387eacu: goto label_387eac;
        case 0x387eb0u: goto label_387eb0;
        case 0x387eb4u: goto label_387eb4;
        case 0x387eb8u: goto label_387eb8;
        case 0x387ebcu: goto label_387ebc;
        case 0x387ec0u: goto label_387ec0;
        case 0x387ec4u: goto label_387ec4;
        case 0x387ec8u: goto label_387ec8;
        case 0x387eccu: goto label_387ecc;
        case 0x387ed0u: goto label_387ed0;
        case 0x387ed4u: goto label_387ed4;
        case 0x387ed8u: goto label_387ed8;
        case 0x387edcu: goto label_387edc;
        case 0x387ee0u: goto label_387ee0;
        case 0x387ee4u: goto label_387ee4;
        case 0x387ee8u: goto label_387ee8;
        case 0x387eecu: goto label_387eec;
        case 0x387ef0u: goto label_387ef0;
        case 0x387ef4u: goto label_387ef4;
        case 0x387ef8u: goto label_387ef8;
        case 0x387efcu: goto label_387efc;
        case 0x387f00u: goto label_387f00;
        case 0x387f04u: goto label_387f04;
        case 0x387f08u: goto label_387f08;
        case 0x387f0cu: goto label_387f0c;
        case 0x387f10u: goto label_387f10;
        case 0x387f14u: goto label_387f14;
        case 0x387f18u: goto label_387f18;
        case 0x387f1cu: goto label_387f1c;
        case 0x387f20u: goto label_387f20;
        case 0x387f24u: goto label_387f24;
        case 0x387f28u: goto label_387f28;
        case 0x387f2cu: goto label_387f2c;
        case 0x387f30u: goto label_387f30;
        case 0x387f34u: goto label_387f34;
        case 0x387f38u: goto label_387f38;
        case 0x387f3cu: goto label_387f3c;
        case 0x387f40u: goto label_387f40;
        case 0x387f44u: goto label_387f44;
        case 0x387f48u: goto label_387f48;
        case 0x387f4cu: goto label_387f4c;
        case 0x387f50u: goto label_387f50;
        case 0x387f54u: goto label_387f54;
        case 0x387f58u: goto label_387f58;
        case 0x387f5cu: goto label_387f5c;
        case 0x387f60u: goto label_387f60;
        case 0x387f64u: goto label_387f64;
        case 0x387f68u: goto label_387f68;
        case 0x387f6cu: goto label_387f6c;
        case 0x387f70u: goto label_387f70;
        case 0x387f74u: goto label_387f74;
        case 0x387f78u: goto label_387f78;
        case 0x387f7cu: goto label_387f7c;
        case 0x387f80u: goto label_387f80;
        case 0x387f84u: goto label_387f84;
        case 0x387f88u: goto label_387f88;
        case 0x387f8cu: goto label_387f8c;
        case 0x387f90u: goto label_387f90;
        case 0x387f94u: goto label_387f94;
        case 0x387f98u: goto label_387f98;
        case 0x387f9cu: goto label_387f9c;
        case 0x387fa0u: goto label_387fa0;
        case 0x387fa4u: goto label_387fa4;
        case 0x387fa8u: goto label_387fa8;
        case 0x387facu: goto label_387fac;
        case 0x387fb0u: goto label_387fb0;
        case 0x387fb4u: goto label_387fb4;
        case 0x387fb8u: goto label_387fb8;
        case 0x387fbcu: goto label_387fbc;
        case 0x387fc0u: goto label_387fc0;
        case 0x387fc4u: goto label_387fc4;
        case 0x387fc8u: goto label_387fc8;
        case 0x387fccu: goto label_387fcc;
        case 0x387fd0u: goto label_387fd0;
        case 0x387fd4u: goto label_387fd4;
        case 0x387fd8u: goto label_387fd8;
        case 0x387fdcu: goto label_387fdc;
        case 0x387fe0u: goto label_387fe0;
        case 0x387fe4u: goto label_387fe4;
        case 0x387fe8u: goto label_387fe8;
        case 0x387fecu: goto label_387fec;
        case 0x387ff0u: goto label_387ff0;
        case 0x387ff4u: goto label_387ff4;
        case 0x387ff8u: goto label_387ff8;
        case 0x387ffcu: goto label_387ffc;
        case 0x388000u: goto label_388000;
        case 0x388004u: goto label_388004;
        case 0x388008u: goto label_388008;
        case 0x38800cu: goto label_38800c;
        case 0x388010u: goto label_388010;
        case 0x388014u: goto label_388014;
        case 0x388018u: goto label_388018;
        case 0x38801cu: goto label_38801c;
        case 0x388020u: goto label_388020;
        case 0x388024u: goto label_388024;
        case 0x388028u: goto label_388028;
        case 0x38802cu: goto label_38802c;
        case 0x388030u: goto label_388030;
        case 0x388034u: goto label_388034;
        case 0x388038u: goto label_388038;
        case 0x38803cu: goto label_38803c;
        case 0x388040u: goto label_388040;
        case 0x388044u: goto label_388044;
        case 0x388048u: goto label_388048;
        case 0x38804cu: goto label_38804c;
        case 0x388050u: goto label_388050;
        case 0x388054u: goto label_388054;
        case 0x388058u: goto label_388058;
        case 0x38805cu: goto label_38805c;
        case 0x388060u: goto label_388060;
        case 0x388064u: goto label_388064;
        case 0x388068u: goto label_388068;
        case 0x38806cu: goto label_38806c;
        case 0x388070u: goto label_388070;
        case 0x388074u: goto label_388074;
        case 0x388078u: goto label_388078;
        case 0x38807cu: goto label_38807c;
        case 0x388080u: goto label_388080;
        case 0x388084u: goto label_388084;
        case 0x388088u: goto label_388088;
        case 0x38808cu: goto label_38808c;
        case 0x388090u: goto label_388090;
        case 0x388094u: goto label_388094;
        case 0x388098u: goto label_388098;
        case 0x38809cu: goto label_38809c;
        case 0x3880a0u: goto label_3880a0;
        case 0x3880a4u: goto label_3880a4;
        case 0x3880a8u: goto label_3880a8;
        case 0x3880acu: goto label_3880ac;
        case 0x3880b0u: goto label_3880b0;
        case 0x3880b4u: goto label_3880b4;
        case 0x3880b8u: goto label_3880b8;
        case 0x3880bcu: goto label_3880bc;
        case 0x3880c0u: goto label_3880c0;
        case 0x3880c4u: goto label_3880c4;
        case 0x3880c8u: goto label_3880c8;
        case 0x3880ccu: goto label_3880cc;
        case 0x3880d0u: goto label_3880d0;
        case 0x3880d4u: goto label_3880d4;
        case 0x3880d8u: goto label_3880d8;
        case 0x3880dcu: goto label_3880dc;
        case 0x3880e0u: goto label_3880e0;
        case 0x3880e4u: goto label_3880e4;
        case 0x3880e8u: goto label_3880e8;
        case 0x3880ecu: goto label_3880ec;
        case 0x3880f0u: goto label_3880f0;
        case 0x3880f4u: goto label_3880f4;
        case 0x3880f8u: goto label_3880f8;
        case 0x3880fcu: goto label_3880fc;
        case 0x388100u: goto label_388100;
        case 0x388104u: goto label_388104;
        case 0x388108u: goto label_388108;
        case 0x38810cu: goto label_38810c;
        case 0x388110u: goto label_388110;
        case 0x388114u: goto label_388114;
        case 0x388118u: goto label_388118;
        case 0x38811cu: goto label_38811c;
        case 0x388120u: goto label_388120;
        case 0x388124u: goto label_388124;
        case 0x388128u: goto label_388128;
        case 0x38812cu: goto label_38812c;
        case 0x388130u: goto label_388130;
        case 0x388134u: goto label_388134;
        case 0x388138u: goto label_388138;
        case 0x38813cu: goto label_38813c;
        case 0x388140u: goto label_388140;
        case 0x388144u: goto label_388144;
        case 0x388148u: goto label_388148;
        case 0x38814cu: goto label_38814c;
        case 0x388150u: goto label_388150;
        case 0x388154u: goto label_388154;
        case 0x388158u: goto label_388158;
        case 0x38815cu: goto label_38815c;
        case 0x388160u: goto label_388160;
        case 0x388164u: goto label_388164;
        case 0x388168u: goto label_388168;
        case 0x38816cu: goto label_38816c;
        case 0x388170u: goto label_388170;
        case 0x388174u: goto label_388174;
        case 0x388178u: goto label_388178;
        case 0x38817cu: goto label_38817c;
        case 0x388180u: goto label_388180;
        case 0x388184u: goto label_388184;
        case 0x388188u: goto label_388188;
        case 0x38818cu: goto label_38818c;
        case 0x388190u: goto label_388190;
        case 0x388194u: goto label_388194;
        case 0x388198u: goto label_388198;
        case 0x38819cu: goto label_38819c;
        case 0x3881a0u: goto label_3881a0;
        case 0x3881a4u: goto label_3881a4;
        case 0x3881a8u: goto label_3881a8;
        case 0x3881acu: goto label_3881ac;
        case 0x3881b0u: goto label_3881b0;
        case 0x3881b4u: goto label_3881b4;
        case 0x3881b8u: goto label_3881b8;
        case 0x3881bcu: goto label_3881bc;
        case 0x3881c0u: goto label_3881c0;
        case 0x3881c4u: goto label_3881c4;
        case 0x3881c8u: goto label_3881c8;
        case 0x3881ccu: goto label_3881cc;
        case 0x3881d0u: goto label_3881d0;
        case 0x3881d4u: goto label_3881d4;
        case 0x3881d8u: goto label_3881d8;
        case 0x3881dcu: goto label_3881dc;
        case 0x3881e0u: goto label_3881e0;
        case 0x3881e4u: goto label_3881e4;
        case 0x3881e8u: goto label_3881e8;
        case 0x3881ecu: goto label_3881ec;
        case 0x3881f0u: goto label_3881f0;
        case 0x3881f4u: goto label_3881f4;
        case 0x3881f8u: goto label_3881f8;
        case 0x3881fcu: goto label_3881fc;
        case 0x388200u: goto label_388200;
        case 0x388204u: goto label_388204;
        case 0x388208u: goto label_388208;
        case 0x38820cu: goto label_38820c;
        case 0x388210u: goto label_388210;
        case 0x388214u: goto label_388214;
        case 0x388218u: goto label_388218;
        case 0x38821cu: goto label_38821c;
        case 0x388220u: goto label_388220;
        case 0x388224u: goto label_388224;
        case 0x388228u: goto label_388228;
        case 0x38822cu: goto label_38822c;
        case 0x388230u: goto label_388230;
        case 0x388234u: goto label_388234;
        case 0x388238u: goto label_388238;
        case 0x38823cu: goto label_38823c;
        case 0x388240u: goto label_388240;
        case 0x388244u: goto label_388244;
        case 0x388248u: goto label_388248;
        case 0x38824cu: goto label_38824c;
        case 0x388250u: goto label_388250;
        case 0x388254u: goto label_388254;
        case 0x388258u: goto label_388258;
        case 0x38825cu: goto label_38825c;
        case 0x388260u: goto label_388260;
        case 0x388264u: goto label_388264;
        case 0x388268u: goto label_388268;
        case 0x38826cu: goto label_38826c;
        case 0x388270u: goto label_388270;
        case 0x388274u: goto label_388274;
        case 0x388278u: goto label_388278;
        case 0x38827cu: goto label_38827c;
        case 0x388280u: goto label_388280;
        case 0x388284u: goto label_388284;
        case 0x388288u: goto label_388288;
        case 0x38828cu: goto label_38828c;
        case 0x388290u: goto label_388290;
        case 0x388294u: goto label_388294;
        case 0x388298u: goto label_388298;
        case 0x38829cu: goto label_38829c;
        case 0x3882a0u: goto label_3882a0;
        case 0x3882a4u: goto label_3882a4;
        case 0x3882a8u: goto label_3882a8;
        case 0x3882acu: goto label_3882ac;
        case 0x3882b0u: goto label_3882b0;
        case 0x3882b4u: goto label_3882b4;
        case 0x3882b8u: goto label_3882b8;
        case 0x3882bcu: goto label_3882bc;
        case 0x3882c0u: goto label_3882c0;
        case 0x3882c4u: goto label_3882c4;
        case 0x3882c8u: goto label_3882c8;
        case 0x3882ccu: goto label_3882cc;
        case 0x3882d0u: goto label_3882d0;
        case 0x3882d4u: goto label_3882d4;
        case 0x3882d8u: goto label_3882d8;
        case 0x3882dcu: goto label_3882dc;
        case 0x3882e0u: goto label_3882e0;
        case 0x3882e4u: goto label_3882e4;
        case 0x3882e8u: goto label_3882e8;
        case 0x3882ecu: goto label_3882ec;
        case 0x3882f0u: goto label_3882f0;
        case 0x3882f4u: goto label_3882f4;
        case 0x3882f8u: goto label_3882f8;
        case 0x3882fcu: goto label_3882fc;
        case 0x388300u: goto label_388300;
        case 0x388304u: goto label_388304;
        case 0x388308u: goto label_388308;
        case 0x38830cu: goto label_38830c;
        case 0x388310u: goto label_388310;
        case 0x388314u: goto label_388314;
        case 0x388318u: goto label_388318;
        case 0x38831cu: goto label_38831c;
        case 0x388320u: goto label_388320;
        case 0x388324u: goto label_388324;
        case 0x388328u: goto label_388328;
        case 0x38832cu: goto label_38832c;
        case 0x388330u: goto label_388330;
        case 0x388334u: goto label_388334;
        case 0x388338u: goto label_388338;
        case 0x38833cu: goto label_38833c;
        case 0x388340u: goto label_388340;
        case 0x388344u: goto label_388344;
        case 0x388348u: goto label_388348;
        case 0x38834cu: goto label_38834c;
        case 0x388350u: goto label_388350;
        case 0x388354u: goto label_388354;
        case 0x388358u: goto label_388358;
        case 0x38835cu: goto label_38835c;
        case 0x388360u: goto label_388360;
        case 0x388364u: goto label_388364;
        case 0x388368u: goto label_388368;
        case 0x38836cu: goto label_38836c;
        case 0x388370u: goto label_388370;
        case 0x388374u: goto label_388374;
        case 0x388378u: goto label_388378;
        case 0x38837cu: goto label_38837c;
        case 0x388380u: goto label_388380;
        case 0x388384u: goto label_388384;
        case 0x388388u: goto label_388388;
        case 0x38838cu: goto label_38838c;
        case 0x388390u: goto label_388390;
        case 0x388394u: goto label_388394;
        case 0x388398u: goto label_388398;
        case 0x38839cu: goto label_38839c;
        case 0x3883a0u: goto label_3883a0;
        case 0x3883a4u: goto label_3883a4;
        case 0x3883a8u: goto label_3883a8;
        case 0x3883acu: goto label_3883ac;
        case 0x3883b0u: goto label_3883b0;
        case 0x3883b4u: goto label_3883b4;
        case 0x3883b8u: goto label_3883b8;
        case 0x3883bcu: goto label_3883bc;
        case 0x3883c0u: goto label_3883c0;
        case 0x3883c4u: goto label_3883c4;
        case 0x3883c8u: goto label_3883c8;
        case 0x3883ccu: goto label_3883cc;
        case 0x3883d0u: goto label_3883d0;
        case 0x3883d4u: goto label_3883d4;
        case 0x3883d8u: goto label_3883d8;
        case 0x3883dcu: goto label_3883dc;
        case 0x3883e0u: goto label_3883e0;
        case 0x3883e4u: goto label_3883e4;
        case 0x3883e8u: goto label_3883e8;
        case 0x3883ecu: goto label_3883ec;
        case 0x3883f0u: goto label_3883f0;
        case 0x3883f4u: goto label_3883f4;
        case 0x3883f8u: goto label_3883f8;
        case 0x3883fcu: goto label_3883fc;
        case 0x388400u: goto label_388400;
        case 0x388404u: goto label_388404;
        case 0x388408u: goto label_388408;
        case 0x38840cu: goto label_38840c;
        case 0x388410u: goto label_388410;
        case 0x388414u: goto label_388414;
        case 0x388418u: goto label_388418;
        case 0x38841cu: goto label_38841c;
        case 0x388420u: goto label_388420;
        case 0x388424u: goto label_388424;
        case 0x388428u: goto label_388428;
        case 0x38842cu: goto label_38842c;
        case 0x388430u: goto label_388430;
        case 0x388434u: goto label_388434;
        case 0x388438u: goto label_388438;
        case 0x38843cu: goto label_38843c;
        case 0x388440u: goto label_388440;
        case 0x388444u: goto label_388444;
        case 0x388448u: goto label_388448;
        case 0x38844cu: goto label_38844c;
        case 0x388450u: goto label_388450;
        case 0x388454u: goto label_388454;
        case 0x388458u: goto label_388458;
        case 0x38845cu: goto label_38845c;
        case 0x388460u: goto label_388460;
        case 0x388464u: goto label_388464;
        case 0x388468u: goto label_388468;
        case 0x38846cu: goto label_38846c;
        case 0x388470u: goto label_388470;
        case 0x388474u: goto label_388474;
        case 0x388478u: goto label_388478;
        case 0x38847cu: goto label_38847c;
        case 0x388480u: goto label_388480;
        case 0x388484u: goto label_388484;
        case 0x388488u: goto label_388488;
        case 0x38848cu: goto label_38848c;
        case 0x388490u: goto label_388490;
        case 0x388494u: goto label_388494;
        case 0x388498u: goto label_388498;
        case 0x38849cu: goto label_38849c;
        case 0x3884a0u: goto label_3884a0;
        case 0x3884a4u: goto label_3884a4;
        case 0x3884a8u: goto label_3884a8;
        case 0x3884acu: goto label_3884ac;
        case 0x3884b0u: goto label_3884b0;
        case 0x3884b4u: goto label_3884b4;
        case 0x3884b8u: goto label_3884b8;
        case 0x3884bcu: goto label_3884bc;
        case 0x3884c0u: goto label_3884c0;
        case 0x3884c4u: goto label_3884c4;
        case 0x3884c8u: goto label_3884c8;
        case 0x3884ccu: goto label_3884cc;
        case 0x3884d0u: goto label_3884d0;
        case 0x3884d4u: goto label_3884d4;
        case 0x3884d8u: goto label_3884d8;
        case 0x3884dcu: goto label_3884dc;
        case 0x3884e0u: goto label_3884e0;
        case 0x3884e4u: goto label_3884e4;
        case 0x3884e8u: goto label_3884e8;
        case 0x3884ecu: goto label_3884ec;
        case 0x3884f0u: goto label_3884f0;
        case 0x3884f4u: goto label_3884f4;
        case 0x3884f8u: goto label_3884f8;
        case 0x3884fcu: goto label_3884fc;
        case 0x388500u: goto label_388500;
        case 0x388504u: goto label_388504;
        case 0x388508u: goto label_388508;
        case 0x38850cu: goto label_38850c;
        case 0x388510u: goto label_388510;
        case 0x388514u: goto label_388514;
        case 0x388518u: goto label_388518;
        case 0x38851cu: goto label_38851c;
        case 0x388520u: goto label_388520;
        case 0x388524u: goto label_388524;
        case 0x388528u: goto label_388528;
        case 0x38852cu: goto label_38852c;
        case 0x388530u: goto label_388530;
        case 0x388534u: goto label_388534;
        case 0x388538u: goto label_388538;
        case 0x38853cu: goto label_38853c;
        case 0x388540u: goto label_388540;
        case 0x388544u: goto label_388544;
        case 0x388548u: goto label_388548;
        case 0x38854cu: goto label_38854c;
        case 0x388550u: goto label_388550;
        case 0x388554u: goto label_388554;
        case 0x388558u: goto label_388558;
        case 0x38855cu: goto label_38855c;
        case 0x388560u: goto label_388560;
        case 0x388564u: goto label_388564;
        case 0x388568u: goto label_388568;
        case 0x38856cu: goto label_38856c;
        case 0x388570u: goto label_388570;
        case 0x388574u: goto label_388574;
        case 0x388578u: goto label_388578;
        case 0x38857cu: goto label_38857c;
        case 0x388580u: goto label_388580;
        case 0x388584u: goto label_388584;
        case 0x388588u: goto label_388588;
        case 0x38858cu: goto label_38858c;
        case 0x388590u: goto label_388590;
        case 0x388594u: goto label_388594;
        case 0x388598u: goto label_388598;
        case 0x38859cu: goto label_38859c;
        case 0x3885a0u: goto label_3885a0;
        case 0x3885a4u: goto label_3885a4;
        case 0x3885a8u: goto label_3885a8;
        case 0x3885acu: goto label_3885ac;
        case 0x3885b0u: goto label_3885b0;
        case 0x3885b4u: goto label_3885b4;
        case 0x3885b8u: goto label_3885b8;
        case 0x3885bcu: goto label_3885bc;
        case 0x3885c0u: goto label_3885c0;
        case 0x3885c4u: goto label_3885c4;
        case 0x3885c8u: goto label_3885c8;
        case 0x3885ccu: goto label_3885cc;
        case 0x3885d0u: goto label_3885d0;
        case 0x3885d4u: goto label_3885d4;
        case 0x3885d8u: goto label_3885d8;
        case 0x3885dcu: goto label_3885dc;
        case 0x3885e0u: goto label_3885e0;
        case 0x3885e4u: goto label_3885e4;
        case 0x3885e8u: goto label_3885e8;
        case 0x3885ecu: goto label_3885ec;
        case 0x3885f0u: goto label_3885f0;
        case 0x3885f4u: goto label_3885f4;
        case 0x3885f8u: goto label_3885f8;
        case 0x3885fcu: goto label_3885fc;
        case 0x388600u: goto label_388600;
        case 0x388604u: goto label_388604;
        case 0x388608u: goto label_388608;
        case 0x38860cu: goto label_38860c;
        case 0x388610u: goto label_388610;
        case 0x388614u: goto label_388614;
        case 0x388618u: goto label_388618;
        case 0x38861cu: goto label_38861c;
        case 0x388620u: goto label_388620;
        case 0x388624u: goto label_388624;
        case 0x388628u: goto label_388628;
        case 0x38862cu: goto label_38862c;
        case 0x388630u: goto label_388630;
        case 0x388634u: goto label_388634;
        case 0x388638u: goto label_388638;
        case 0x38863cu: goto label_38863c;
        case 0x388640u: goto label_388640;
        case 0x388644u: goto label_388644;
        case 0x388648u: goto label_388648;
        case 0x38864cu: goto label_38864c;
        case 0x388650u: goto label_388650;
        case 0x388654u: goto label_388654;
        case 0x388658u: goto label_388658;
        case 0x38865cu: goto label_38865c;
        case 0x388660u: goto label_388660;
        case 0x388664u: goto label_388664;
        case 0x388668u: goto label_388668;
        case 0x38866cu: goto label_38866c;
        case 0x388670u: goto label_388670;
        case 0x388674u: goto label_388674;
        case 0x388678u: goto label_388678;
        case 0x38867cu: goto label_38867c;
        case 0x388680u: goto label_388680;
        case 0x388684u: goto label_388684;
        case 0x388688u: goto label_388688;
        case 0x38868cu: goto label_38868c;
        case 0x388690u: goto label_388690;
        case 0x388694u: goto label_388694;
        case 0x388698u: goto label_388698;
        case 0x38869cu: goto label_38869c;
        case 0x3886a0u: goto label_3886a0;
        case 0x3886a4u: goto label_3886a4;
        case 0x3886a8u: goto label_3886a8;
        case 0x3886acu: goto label_3886ac;
        case 0x3886b0u: goto label_3886b0;
        case 0x3886b4u: goto label_3886b4;
        case 0x3886b8u: goto label_3886b8;
        case 0x3886bcu: goto label_3886bc;
        case 0x3886c0u: goto label_3886c0;
        case 0x3886c4u: goto label_3886c4;
        case 0x3886c8u: goto label_3886c8;
        case 0x3886ccu: goto label_3886cc;
        case 0x3886d0u: goto label_3886d0;
        case 0x3886d4u: goto label_3886d4;
        case 0x3886d8u: goto label_3886d8;
        case 0x3886dcu: goto label_3886dc;
        case 0x3886e0u: goto label_3886e0;
        case 0x3886e4u: goto label_3886e4;
        case 0x3886e8u: goto label_3886e8;
        case 0x3886ecu: goto label_3886ec;
        case 0x3886f0u: goto label_3886f0;
        case 0x3886f4u: goto label_3886f4;
        case 0x3886f8u: goto label_3886f8;
        case 0x3886fcu: goto label_3886fc;
        case 0x388700u: goto label_388700;
        case 0x388704u: goto label_388704;
        case 0x388708u: goto label_388708;
        case 0x38870cu: goto label_38870c;
        case 0x388710u: goto label_388710;
        case 0x388714u: goto label_388714;
        case 0x388718u: goto label_388718;
        case 0x38871cu: goto label_38871c;
        case 0x388720u: goto label_388720;
        case 0x388724u: goto label_388724;
        case 0x388728u: goto label_388728;
        case 0x38872cu: goto label_38872c;
        case 0x388730u: goto label_388730;
        case 0x388734u: goto label_388734;
        case 0x388738u: goto label_388738;
        case 0x38873cu: goto label_38873c;
        case 0x388740u: goto label_388740;
        case 0x388744u: goto label_388744;
        case 0x388748u: goto label_388748;
        case 0x38874cu: goto label_38874c;
        case 0x388750u: goto label_388750;
        case 0x388754u: goto label_388754;
        case 0x388758u: goto label_388758;
        case 0x38875cu: goto label_38875c;
        case 0x388760u: goto label_388760;
        case 0x388764u: goto label_388764;
        case 0x388768u: goto label_388768;
        case 0x38876cu: goto label_38876c;
        case 0x388770u: goto label_388770;
        case 0x388774u: goto label_388774;
        case 0x388778u: goto label_388778;
        case 0x38877cu: goto label_38877c;
        case 0x388780u: goto label_388780;
        case 0x388784u: goto label_388784;
        case 0x388788u: goto label_388788;
        case 0x38878cu: goto label_38878c;
        case 0x388790u: goto label_388790;
        case 0x388794u: goto label_388794;
        case 0x388798u: goto label_388798;
        case 0x38879cu: goto label_38879c;
        case 0x3887a0u: goto label_3887a0;
        case 0x3887a4u: goto label_3887a4;
        case 0x3887a8u: goto label_3887a8;
        case 0x3887acu: goto label_3887ac;
        case 0x3887b0u: goto label_3887b0;
        case 0x3887b4u: goto label_3887b4;
        case 0x3887b8u: goto label_3887b8;
        case 0x3887bcu: goto label_3887bc;
        case 0x3887c0u: goto label_3887c0;
        case 0x3887c4u: goto label_3887c4;
        case 0x3887c8u: goto label_3887c8;
        case 0x3887ccu: goto label_3887cc;
        case 0x3887d0u: goto label_3887d0;
        case 0x3887d4u: goto label_3887d4;
        case 0x3887d8u: goto label_3887d8;
        case 0x3887dcu: goto label_3887dc;
        case 0x3887e0u: goto label_3887e0;
        case 0x3887e4u: goto label_3887e4;
        case 0x3887e8u: goto label_3887e8;
        case 0x3887ecu: goto label_3887ec;
        case 0x3887f0u: goto label_3887f0;
        case 0x3887f4u: goto label_3887f4;
        case 0x3887f8u: goto label_3887f8;
        case 0x3887fcu: goto label_3887fc;
        case 0x388800u: goto label_388800;
        case 0x388804u: goto label_388804;
        case 0x388808u: goto label_388808;
        case 0x38880cu: goto label_38880c;
        case 0x388810u: goto label_388810;
        case 0x388814u: goto label_388814;
        case 0x388818u: goto label_388818;
        case 0x38881cu: goto label_38881c;
        case 0x388820u: goto label_388820;
        case 0x388824u: goto label_388824;
        case 0x388828u: goto label_388828;
        case 0x38882cu: goto label_38882c;
        case 0x388830u: goto label_388830;
        case 0x388834u: goto label_388834;
        case 0x388838u: goto label_388838;
        case 0x38883cu: goto label_38883c;
        case 0x388840u: goto label_388840;
        case 0x388844u: goto label_388844;
        case 0x388848u: goto label_388848;
        case 0x38884cu: goto label_38884c;
        case 0x388850u: goto label_388850;
        case 0x388854u: goto label_388854;
        case 0x388858u: goto label_388858;
        case 0x38885cu: goto label_38885c;
        case 0x388860u: goto label_388860;
        case 0x388864u: goto label_388864;
        case 0x388868u: goto label_388868;
        case 0x38886cu: goto label_38886c;
        case 0x388870u: goto label_388870;
        case 0x388874u: goto label_388874;
        case 0x388878u: goto label_388878;
        case 0x38887cu: goto label_38887c;
        case 0x388880u: goto label_388880;
        case 0x388884u: goto label_388884;
        case 0x388888u: goto label_388888;
        case 0x38888cu: goto label_38888c;
        case 0x388890u: goto label_388890;
        case 0x388894u: goto label_388894;
        case 0x388898u: goto label_388898;
        case 0x38889cu: goto label_38889c;
        case 0x3888a0u: goto label_3888a0;
        case 0x3888a4u: goto label_3888a4;
        case 0x3888a8u: goto label_3888a8;
        case 0x3888acu: goto label_3888ac;
        case 0x3888b0u: goto label_3888b0;
        case 0x3888b4u: goto label_3888b4;
        case 0x3888b8u: goto label_3888b8;
        case 0x3888bcu: goto label_3888bc;
        case 0x3888c0u: goto label_3888c0;
        case 0x3888c4u: goto label_3888c4;
        case 0x3888c8u: goto label_3888c8;
        case 0x3888ccu: goto label_3888cc;
        case 0x3888d0u: goto label_3888d0;
        case 0x3888d4u: goto label_3888d4;
        case 0x3888d8u: goto label_3888d8;
        case 0x3888dcu: goto label_3888dc;
        case 0x3888e0u: goto label_3888e0;
        case 0x3888e4u: goto label_3888e4;
        case 0x3888e8u: goto label_3888e8;
        case 0x3888ecu: goto label_3888ec;
        case 0x3888f0u: goto label_3888f0;
        case 0x3888f4u: goto label_3888f4;
        case 0x3888f8u: goto label_3888f8;
        case 0x3888fcu: goto label_3888fc;
        default: break;
    }

    ctx->pc = 0x387d30u;

label_387d30:
    // 0x387d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_387d34:
    // 0x387d34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x387d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_387d38:
    // 0x387d38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_387d3c:
    // 0x387d3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x387d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_387d40:
    // 0x387d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387d44:
    // 0x387d44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_387d48:
    // 0x387d48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x387d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387d4c:
    // 0x387d4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x387d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_387d50:
    // 0x387d50: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x387d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387d54:
    // 0x387d54: 0xc0e39b4  jal         func_38E6D0
label_387d58:
    if (ctx->pc == 0x387D58u) {
        ctx->pc = 0x387D58u;
            // 0x387d58: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x387D5Cu;
        goto label_387d5c;
    }
    ctx->pc = 0x387D54u;
    SET_GPR_U32(ctx, 31, 0x387D5Cu);
    ctx->pc = 0x387D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D54u;
            // 0x387d58: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D5Cu; }
        if (ctx->pc != 0x387D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D5Cu; }
        if (ctx->pc != 0x387D5Cu) { return; }
    }
    ctx->pc = 0x387D5Cu;
label_387d5c:
    // 0x387d5c: 0xc60c0160  lwc1        $f12, 0x160($s0)
    ctx->pc = 0x387d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_387d60:
    // 0x387d60: 0xc60d0164  lwc1        $f13, 0x164($s0)
    ctx->pc = 0x387d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_387d64:
    // 0x387d64: 0xc60e0168  lwc1        $f14, 0x168($s0)
    ctx->pc = 0x387d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_387d68:
    // 0x387d68: 0xc0d3f08  jal         func_34FC20
label_387d6c:
    if (ctx->pc == 0x387D6Cu) {
        ctx->pc = 0x387D6Cu;
            // 0x387d6c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x387D70u;
        goto label_387d70;
    }
    ctx->pc = 0x387D68u;
    SET_GPR_U32(ctx, 31, 0x387D70u);
    ctx->pc = 0x387D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D68u;
            // 0x387d6c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D70u; }
        if (ctx->pc != 0x387D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D70u; }
        if (ctx->pc != 0x387D70u) { return; }
    }
    ctx->pc = 0x387D70u;
label_387d70:
    // 0x387d70: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x387d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_387d74:
    // 0x387d74: 0xc0e1b28  jal         func_386CA0
label_387d78:
    if (ctx->pc == 0x387D78u) {
        ctx->pc = 0x387D78u;
            // 0x387d78: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x387D7Cu;
        goto label_387d7c;
    }
    ctx->pc = 0x387D74u;
    SET_GPR_U32(ctx, 31, 0x387D7Cu);
    ctx->pc = 0x387D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D74u;
            // 0x387d78: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D7Cu; }
        if (ctx->pc != 0x387D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D7Cu; }
        if (ctx->pc != 0x387D7Cu) { return; }
    }
    ctx->pc = 0x387D7Cu;
label_387d7c:
    // 0x387d7c: 0xc0e1b24  jal         func_386C90
label_387d80:
    if (ctx->pc == 0x387D80u) {
        ctx->pc = 0x387D84u;
        goto label_387d84;
    }
    ctx->pc = 0x387D7Cu;
    SET_GPR_U32(ctx, 31, 0x387D84u);
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D84u; }
        if (ctx->pc != 0x387D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D84u; }
        if (ctx->pc != 0x387D84u) { return; }
    }
    ctx->pc = 0x387D84u;
label_387d84:
    // 0x387d84: 0xc0e1b20  jal         func_386C80
label_387d88:
    if (ctx->pc == 0x387D88u) {
        ctx->pc = 0x387D88u;
            // 0x387d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387D8Cu;
        goto label_387d8c;
    }
    ctx->pc = 0x387D84u;
    SET_GPR_U32(ctx, 31, 0x387D8Cu);
    ctx->pc = 0x387D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D84u;
            // 0x387d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C80u;
    if (runtime->hasFunction(0x386C80u)) {
        auto targetFn = runtime->lookupFunction(0x386C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D8Cu; }
        if (ctx->pc != 0x387D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C80_0x386c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D8Cu; }
        if (ctx->pc != 0x387D8Cu) { return; }
    }
    ctx->pc = 0x387D8Cu;
label_387d8c:
    // 0x387d8c: 0xc0e1b24  jal         func_386C90
label_387d90:
    if (ctx->pc == 0x387D90u) {
        ctx->pc = 0x387D90u;
            // 0x387d90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x387D94u;
        goto label_387d94;
    }
    ctx->pc = 0x387D8Cu;
    SET_GPR_U32(ctx, 31, 0x387D94u);
    ctx->pc = 0x387D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D8Cu;
            // 0x387d90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D94u; }
        if (ctx->pc != 0x387D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D94u; }
        if (ctx->pc != 0x387D94u) { return; }
    }
    ctx->pc = 0x387D94u;
label_387d94:
    // 0x387d94: 0xc0e1b1c  jal         func_386C70
label_387d98:
    if (ctx->pc == 0x387D98u) {
        ctx->pc = 0x387D98u;
            // 0x387d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387D9Cu;
        goto label_387d9c;
    }
    ctx->pc = 0x387D94u;
    SET_GPR_U32(ctx, 31, 0x387D9Cu);
    ctx->pc = 0x387D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387D94u;
            // 0x387d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D9Cu; }
        if (ctx->pc != 0x387D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387D9Cu; }
        if (ctx->pc != 0x387D9Cu) { return; }
    }
    ctx->pc = 0x387D9Cu;
label_387d9c:
    // 0x387d9c: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x387d9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_387da0:
    // 0x387da0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x387da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_387da4:
    // 0x387da4: 0xc6000190  lwc1        $f0, 0x190($s0)
    ctx->pc = 0x387da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_387da8:
    // 0x387da8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x387da8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_387dac:
    // 0x387dac: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x387dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_387db0:
    // 0x387db0: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x387db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_387db4:
    // 0x387db4: 0xc0e1b24  jal         func_386C90
label_387db8:
    if (ctx->pc == 0x387DB8u) {
        ctx->pc = 0x387DB8u;
            // 0x387db8: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->pc = 0x387DBCu;
        goto label_387dbc;
    }
    ctx->pc = 0x387DB4u;
    SET_GPR_U32(ctx, 31, 0x387DBCu);
    ctx->pc = 0x387DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387DB4u;
            // 0x387db8: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DBCu; }
        if (ctx->pc != 0x387DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DBCu; }
        if (ctx->pc != 0x387DBCu) { return; }
    }
    ctx->pc = 0x387DBCu;
label_387dbc:
    // 0x387dbc: 0xc0e1b1c  jal         func_386C70
label_387dc0:
    if (ctx->pc == 0x387DC0u) {
        ctx->pc = 0x387DC0u;
            // 0x387dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387DC4u;
        goto label_387dc4;
    }
    ctx->pc = 0x387DBCu;
    SET_GPR_U32(ctx, 31, 0x387DC4u);
    ctx->pc = 0x387DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387DBCu;
            // 0x387dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DC4u; }
        if (ctx->pc != 0x387DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DC4u; }
        if (ctx->pc != 0x387DC4u) { return; }
    }
    ctx->pc = 0x387DC4u;
label_387dc4:
    // 0x387dc4: 0xe6000180  swc1        $f0, 0x180($s0)
    ctx->pc = 0x387dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_387dc8:
    // 0x387dc8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x387dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_387dcc:
    // 0x387dcc: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x387dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_387dd0:
    // 0x387dd0: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x387dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_387dd4:
    // 0x387dd4: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x387dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_387dd8:
    // 0x387dd8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x387dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_387ddc:
    // 0x387ddc: 0xc0e1b0c  jal         func_386C30
label_387de0:
    if (ctx->pc == 0x387DE0u) {
        ctx->pc = 0x387DE0u;
            // 0x387de0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x387DE4u;
        goto label_387de4;
    }
    ctx->pc = 0x387DDCu;
    SET_GPR_U32(ctx, 31, 0x387DE4u);
    ctx->pc = 0x387DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387DDCu;
            // 0x387de0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DE4u; }
        if (ctx->pc != 0x387DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DE4u; }
        if (ctx->pc != 0x387DE4u) { return; }
    }
    ctx->pc = 0x387DE4u;
label_387de4:
    // 0x387de4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x387de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_387de8:
    // 0x387de8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x387de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_387dec:
    // 0x387dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x387decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387df0:
    // 0x387df0: 0xc08914c  jal         func_224530
label_387df4:
    if (ctx->pc == 0x387DF4u) {
        ctx->pc = 0x387DF4u;
            // 0x387df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387DF8u;
        goto label_387df8;
    }
    ctx->pc = 0x387DF0u;
    SET_GPR_U32(ctx, 31, 0x387DF8u);
    ctx->pc = 0x387DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387DF0u;
            // 0x387df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DF8u; }
        if (ctx->pc != 0x387DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387DF8u; }
        if (ctx->pc != 0x387DF8u) { return; }
    }
    ctx->pc = 0x387DF8u;
label_387df8:
    // 0x387df8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x387df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387dfc:
    // 0x387dfc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x387dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_387e00:
    // 0x387e00: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x387e00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_387e04:
    // 0x387e04: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x387e04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_387e08:
    // 0x387e08: 0xc0b6df0  jal         func_2DB7C0
label_387e0c:
    if (ctx->pc == 0x387E0Cu) {
        ctx->pc = 0x387E0Cu;
            // 0x387e0c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x387E10u;
        goto label_387e10;
    }
    ctx->pc = 0x387E08u;
    SET_GPR_U32(ctx, 31, 0x387E10u);
    ctx->pc = 0x387E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E08u;
            // 0x387e0c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E10u; }
        if (ctx->pc != 0x387E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E10u; }
        if (ctx->pc != 0x387E10u) { return; }
    }
    ctx->pc = 0x387E10u;
label_387e10:
    // 0x387e10: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x387e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_387e14:
    // 0x387e14: 0xc0e07f8  jal         func_381FE0
label_387e18:
    if (ctx->pc == 0x387E18u) {
        ctx->pc = 0x387E18u;
            // 0x387e18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x387E1Cu;
        goto label_387e1c;
    }
    ctx->pc = 0x387E14u;
    SET_GPR_U32(ctx, 31, 0x387E1Cu);
    ctx->pc = 0x387E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E14u;
            // 0x387e18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E1Cu; }
        if (ctx->pc != 0x387E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E1Cu; }
        if (ctx->pc != 0x387E1Cu) { return; }
    }
    ctx->pc = 0x387E1Cu;
label_387e1c:
    // 0x387e1c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x387e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_387e20:
    // 0x387e20: 0xc0dc3f4  jal         func_370FD0
label_387e24:
    if (ctx->pc == 0x387E24u) {
        ctx->pc = 0x387E24u;
            // 0x387e24: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x387E28u;
        goto label_387e28;
    }
    ctx->pc = 0x387E20u;
    SET_GPR_U32(ctx, 31, 0x387E28u);
    ctx->pc = 0x387E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E20u;
            // 0x387e24: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E28u; }
        if (ctx->pc != 0x387E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E28u; }
        if (ctx->pc != 0x387E28u) { return; }
    }
    ctx->pc = 0x387E28u;
label_387e28:
    // 0x387e28: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x387e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_387e2c:
    // 0x387e2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x387e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387e30:
    // 0x387e30: 0xc0e1b08  jal         func_386C20
label_387e34:
    if (ctx->pc == 0x387E34u) {
        ctx->pc = 0x387E34u;
            // 0x387e34: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x387E38u;
        goto label_387e38;
    }
    ctx->pc = 0x387E30u;
    SET_GPR_U32(ctx, 31, 0x387E38u);
    ctx->pc = 0x387E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E30u;
            // 0x387e34: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E38u; }
        if (ctx->pc != 0x387E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E38u; }
        if (ctx->pc != 0x387E38u) { return; }
    }
    ctx->pc = 0x387E38u;
label_387e38:
    // 0x387e38: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x387e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_387e3c:
    // 0x387e3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x387e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387e40:
    // 0x387e40: 0xc0e1b04  jal         func_386C10
label_387e44:
    if (ctx->pc == 0x387E44u) {
        ctx->pc = 0x387E44u;
            // 0x387e44: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x387E48u;
        goto label_387e48;
    }
    ctx->pc = 0x387E40u;
    SET_GPR_U32(ctx, 31, 0x387E48u);
    ctx->pc = 0x387E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E40u;
            // 0x387e44: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E48u; }
        if (ctx->pc != 0x387E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E48u; }
        if (ctx->pc != 0x387E48u) { return; }
    }
    ctx->pc = 0x387E48u;
label_387e48:
    // 0x387e48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x387e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387e4c:
    // 0x387e4c: 0xc0e1b00  jal         func_386C00
label_387e50:
    if (ctx->pc == 0x387E50u) {
        ctx->pc = 0x387E50u;
            // 0x387e50: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x387E54u;
        goto label_387e54;
    }
    ctx->pc = 0x387E4Cu;
    SET_GPR_U32(ctx, 31, 0x387E54u);
    ctx->pc = 0x387E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E4Cu;
            // 0x387e50: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E54u; }
        if (ctx->pc != 0x387E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E54u; }
        if (ctx->pc != 0x387E54u) { return; }
    }
    ctx->pc = 0x387E54u;
label_387e54:
    // 0x387e54: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x387e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_387e58:
    // 0x387e58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x387e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_387e5c:
    // 0x387e5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x387e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387e60:
    // 0x387e60: 0xc0e1afc  jal         func_386BF0
label_387e64:
    if (ctx->pc == 0x387E64u) {
        ctx->pc = 0x387E64u;
            // 0x387e64: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x387E68u;
        goto label_387e68;
    }
    ctx->pc = 0x387E60u;
    SET_GPR_U32(ctx, 31, 0x387E68u);
    ctx->pc = 0x387E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E60u;
            // 0x387e64: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E68u; }
        if (ctx->pc != 0x387E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E68u; }
        if (ctx->pc != 0x387E68u) { return; }
    }
    ctx->pc = 0x387E68u;
label_387e68:
    // 0x387e68: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x387e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_387e6c:
    // 0x387e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387e70:
    // 0x387e70: 0xc0e1af4  jal         func_386BD0
label_387e74:
    if (ctx->pc == 0x387E74u) {
        ctx->pc = 0x387E74u;
            // 0x387e74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x387E78u;
        goto label_387e78;
    }
    ctx->pc = 0x387E70u;
    SET_GPR_U32(ctx, 31, 0x387E78u);
    ctx->pc = 0x387E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E70u;
            // 0x387e74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E78u; }
        if (ctx->pc != 0x387E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E78u; }
        if (ctx->pc != 0x387E78u) { return; }
    }
    ctx->pc = 0x387E78u;
label_387e78:
    // 0x387e78: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x387e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_387e7c:
    // 0x387e7c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x387e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_387e80:
    // 0x387e80: 0xc0e1aec  jal         func_386BB0
label_387e84:
    if (ctx->pc == 0x387E84u) {
        ctx->pc = 0x387E84u;
            // 0x387e84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387E88u;
        goto label_387e88;
    }
    ctx->pc = 0x387E80u;
    SET_GPR_U32(ctx, 31, 0x387E88u);
    ctx->pc = 0x387E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E80u;
            // 0x387e84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E88u; }
        if (ctx->pc != 0x387E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E88u; }
        if (ctx->pc != 0x387E88u) { return; }
    }
    ctx->pc = 0x387E88u;
label_387e88:
    // 0x387e88: 0xc0dc408  jal         func_371020
label_387e8c:
    if (ctx->pc == 0x387E8Cu) {
        ctx->pc = 0x387E8Cu;
            // 0x387e8c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x387E90u;
        goto label_387e90;
    }
    ctx->pc = 0x387E88u;
    SET_GPR_U32(ctx, 31, 0x387E90u);
    ctx->pc = 0x387E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E88u;
            // 0x387e8c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E90u; }
        if (ctx->pc != 0x387E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387E90u; }
        if (ctx->pc != 0x387E90u) { return; }
    }
    ctx->pc = 0x387E90u;
label_387e90:
    // 0x387e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387e94:
    // 0x387e94: 0x26050160  addiu       $a1, $s0, 0x160
    ctx->pc = 0x387e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_387e98:
    // 0x387e98: 0xc0e1ad4  jal         func_386B50
label_387e9c:
    if (ctx->pc == 0x387E9Cu) {
        ctx->pc = 0x387E9Cu;
            // 0x387e9c: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x387EA0u;
        goto label_387ea0;
    }
    ctx->pc = 0x387E98u;
    SET_GPR_U32(ctx, 31, 0x387EA0u);
    ctx->pc = 0x387E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387E98u;
            // 0x387e9c: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387EA0u; }
        if (ctx->pc != 0x387EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387EA0u; }
        if (ctx->pc != 0x387EA0u) { return; }
    }
    ctx->pc = 0x387EA0u;
label_387ea0:
    // 0x387ea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_387ea4:
    // 0x387ea4: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x387ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_387ea8:
    // 0x387ea8: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
label_387eac:
    if (ctx->pc == 0x387EACu) {
        ctx->pc = 0x387EACu;
            // 0x387eac: 0x26100140  addiu       $s0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x387EB0u;
        goto label_387eb0;
    }
    ctx->pc = 0x387EA8u;
    {
        const bool branch_taken_0x387ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387EA8u;
            // 0x387eac: 0x26100140  addiu       $s0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ea8) {
            ctx->pc = 0x387D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_387d54;
        }
    }
    ctx->pc = 0x387EB0u;
label_387eb0:
    // 0x387eb0: 0xae4002e0  sw          $zero, 0x2E0($s2)
    ctx->pc = 0x387eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 0));
label_387eb4:
    // 0x387eb4: 0xa24002e4  sb          $zero, 0x2E4($s2)
    ctx->pc = 0x387eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 740), (uint8_t)GPR_U32(ctx, 0));
label_387eb8:
    // 0x387eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x387eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_387ebc:
    // 0x387ebc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x387ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_387ec0:
    // 0x387ec0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387ec4:
    // 0x387ec4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x387ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387ec8:
    // 0x387ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x387ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387ecc:
    // 0x387ecc: 0x3e00008  jr          $ra
label_387ed0:
    if (ctx->pc == 0x387ED0u) {
        ctx->pc = 0x387ED0u;
            // 0x387ed0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x387ED4u;
        goto label_387ed4;
    }
    ctx->pc = 0x387ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387ECCu;
            // 0x387ed0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387ED4u;
label_387ed4:
    // 0x387ed4: 0x0  nop
    ctx->pc = 0x387ed4u;
    // NOP
label_387ed8:
    // 0x387ed8: 0x0  nop
    ctx->pc = 0x387ed8u;
    // NOP
label_387edc:
    // 0x387edc: 0x0  nop
    ctx->pc = 0x387edcu;
    // NOP
label_387ee0:
    // 0x387ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_387ee4:
    // 0x387ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_387ee8:
    // 0x387ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_387eec:
    // 0x387eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_387ef0:
    // 0x387ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_387ef4:
    // 0x387ef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387ef8:
    // 0x387ef8: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x387ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_387efc:
    // 0x387efc: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_387f00:
    if (ctx->pc == 0x387F00u) {
        ctx->pc = 0x387F00u;
            // 0x387f00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387F04u;
        goto label_387f04;
    }
    ctx->pc = 0x387EFCu;
    {
        const bool branch_taken_0x387efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x387F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387EFCu;
            // 0x387f00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387efc) {
            ctx->pc = 0x387F14u;
            goto label_387f14;
        }
    }
    ctx->pc = 0x387F04u;
label_387f04:
    // 0x387f04: 0xc0e3584  jal         func_38D610
label_387f08:
    if (ctx->pc == 0x387F08u) {
        ctx->pc = 0x387F08u;
            // 0x387f08: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x387F0Cu;
        goto label_387f0c;
    }
    ctx->pc = 0x387F04u;
    SET_GPR_U32(ctx, 31, 0x387F0Cu);
    ctx->pc = 0x387F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387F04u;
            // 0x387f08: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D610u;
    if (runtime->hasFunction(0x38D610u)) {
        auto targetFn = runtime->lookupFunction(0x38D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387F0Cu; }
        if (ctx->pc != 0x387F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D610_0x38d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387F0Cu; }
        if (ctx->pc != 0x387F0Cu) { return; }
    }
    ctx->pc = 0x387F0Cu;
label_387f0c:
    // 0x387f0c: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x387f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_387f10:
    // 0x387f10: 0xac700050  sw          $s0, 0x50($v1)
    ctx->pc = 0x387f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 16));
label_387f14:
    // 0x387f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_387f18:
    // 0x387f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387f1c:
    // 0x387f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_387f20:
    // 0x387f20: 0x3e00008  jr          $ra
label_387f24:
    if (ctx->pc == 0x387F24u) {
        ctx->pc = 0x387F24u;
            // 0x387f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x387F28u;
        goto label_387f28;
    }
    ctx->pc = 0x387F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387F20u;
            // 0x387f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387F28u;
label_387f28:
    // 0x387f28: 0x0  nop
    ctx->pc = 0x387f28u;
    // NOP
label_387f2c:
    // 0x387f2c: 0x0  nop
    ctx->pc = 0x387f2cu;
    // NOP
label_387f30:
    // 0x387f30: 0x80ba938  j           func_2EA4E0
label_387f34:
    if (ctx->pc == 0x387F34u) {
        ctx->pc = 0x387F34u;
            // 0x387f34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x387F38u;
        goto label_387f38;
    }
    ctx->pc = 0x387F30u;
    ctx->pc = 0x387F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387F30u;
            // 0x387f34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x387F38u;
label_387f38:
    // 0x387f38: 0x0  nop
    ctx->pc = 0x387f38u;
    // NOP
label_387f3c:
    // 0x387f3c: 0x0  nop
    ctx->pc = 0x387f3cu;
    // NOP
label_387f40:
    // 0x387f40: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x387f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_387f44:
    // 0x387f44: 0x80ba938  j           func_2EA4E0
label_387f48:
    if (ctx->pc == 0x387F48u) {
        ctx->pc = 0x387F48u;
            // 0x387f48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x387F4Cu;
        goto label_387f4c;
    }
    ctx->pc = 0x387F44u;
    ctx->pc = 0x387F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387F44u;
            // 0x387f48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x387F4Cu;
label_387f4c:
    // 0x387f4c: 0x0  nop
    ctx->pc = 0x387f4cu;
    // NOP
label_387f50:
    // 0x387f50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x387f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_387f54:
    // 0x387f54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_387f58:
    // 0x387f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_387f5c:
    // 0x387f5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x387f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_387f60:
    // 0x387f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_387f64:
    // 0x387f64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x387f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_387f68:
    // 0x387f68: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x387f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_387f6c:
    // 0x387f6c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x387f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_387f70:
    // 0x387f70: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x387f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_387f74:
    // 0x387f74: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x387f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_387f78:
    // 0x387f78: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x387f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_387f7c:
    // 0x387f7c: 0x10a301c8  beq         $a1, $v1, . + 4 + (0x1C8 << 2)
label_387f80:
    if (ctx->pc == 0x387F80u) {
        ctx->pc = 0x387F80u;
            // 0x387f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387F84u;
        goto label_387f84;
    }
    ctx->pc = 0x387F7Cu;
    {
        const bool branch_taken_0x387f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x387F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387F7Cu;
            // 0x387f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f7c) {
            ctx->pc = 0x3886A0u;
            goto label_3886a0;
        }
    }
    ctx->pc = 0x387F84u;
label_387f84:
    // 0x387f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387f88:
    // 0x387f88: 0x50a30023  beql        $a1, $v1, . + 4 + (0x23 << 2)
label_387f8c:
    if (ctx->pc == 0x387F8Cu) {
        ctx->pc = 0x387F8Cu;
            // 0x387f8c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x387F90u;
        goto label_387f90;
    }
    ctx->pc = 0x387F88u;
    {
        const bool branch_taken_0x387f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x387f88) {
            ctx->pc = 0x387F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387F88u;
            // 0x387f8c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388018u;
            goto label_388018;
        }
    }
    ctx->pc = 0x387F90u;
label_387f90:
    // 0x387f90: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_387f94:
    if (ctx->pc == 0x387F94u) {
        ctx->pc = 0x387F98u;
        goto label_387f98;
    }
    ctx->pc = 0x387F90u;
    {
        const bool branch_taken_0x387f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x387f90) {
            ctx->pc = 0x387FA0u;
            goto label_387fa0;
        }
    }
    ctx->pc = 0x387F98u;
label_387f98:
    // 0x387f98: 0x10000251  b           . + 4 + (0x251 << 2)
label_387f9c:
    if (ctx->pc == 0x387F9Cu) {
        ctx->pc = 0x387F9Cu;
            // 0x387f9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x387FA0u;
        goto label_387fa0;
    }
    ctx->pc = 0x387F98u;
    {
        const bool branch_taken_0x387f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387F98u;
            // 0x387f9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f98) {
            ctx->pc = 0x3888E0u;
            goto label_3888e0;
        }
    }
    ctx->pc = 0x387FA0u;
label_387fa0:
    // 0x387fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x387fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_387fa4:
    // 0x387fa4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x387fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_387fa8:
    // 0x387fa8: 0x8c426118  lw          $v0, 0x6118($v0)
    ctx->pc = 0x387fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_387fac:
    // 0x387fac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x387facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_387fb0:
    // 0x387fb0: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x387fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_387fb4:
    // 0x387fb4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x387fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_387fb8:
    // 0x387fb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x387fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_387fbc:
    // 0x387fbc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x387fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_387fc0:
    // 0x387fc0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x387fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_387fc4:
    // 0x387fc4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x387fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_387fc8:
    // 0x387fc8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x387fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_387fcc:
    // 0x387fcc: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x387fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_387fd0:
    // 0x387fd0: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x387fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_387fd4:
    // 0x387fd4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x387fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_387fd8:
    // 0x387fd8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x387fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_387fdc:
    // 0x387fdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x387fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_387fe0:
    // 0x387fe0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x387fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_387fe4:
    // 0x387fe4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x387fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_387fe8:
    // 0x387fe8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x387fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_387fec:
    // 0x387fec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x387fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_387ff0:
    // 0x387ff0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x387ff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_387ff4:
    // 0x387ff4: 0x1d00fff3  bgtz        $t0, . + 4 + (-0xD << 2)
label_387ff8:
    if (ctx->pc == 0x387FF8u) {
        ctx->pc = 0x387FF8u;
            // 0x387ff8: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x387FFCu;
        goto label_387ffc;
    }
    ctx->pc = 0x387FF4u;
    {
        const bool branch_taken_0x387ff4 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x387FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387FF4u;
            // 0x387ff8: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ff4) {
            ctx->pc = 0x387FC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_387fc4;
        }
    }
    ctx->pc = 0x387FFCu;
label_387ffc:
    // 0x387ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388000:
    // 0x388000: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x388000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_388004:
    // 0x388004: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x388004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_388008:
    // 0x388008: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x388008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_38800c:
    // 0x38800c: 0x320f809  jalr        $t9
label_388010:
    if (ctx->pc == 0x388010u) {
        ctx->pc = 0x388010u;
            // 0x388010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388014u;
        goto label_388014;
    }
    ctx->pc = 0x38800Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388014u);
        ctx->pc = 0x388010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38800Cu;
            // 0x388010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388014u; }
            if (ctx->pc != 0x388014u) { return; }
        }
        }
    }
    ctx->pc = 0x388014u;
label_388014:
    // 0x388014: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x388014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_388018:
    // 0x388018: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x388018u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_38801c:
    // 0x38801c: 0x1020022f  beqz        $at, . + 4 + (0x22F << 2)
label_388020:
    if (ctx->pc == 0x388020u) {
        ctx->pc = 0x388024u;
        goto label_388024;
    }
    ctx->pc = 0x38801Cu;
    {
        const bool branch_taken_0x38801c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38801c) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388024u;
label_388024:
    // 0x388024: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x388024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_388028:
    // 0x388028: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x388028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38802c:
    // 0x38802c: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x38802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
label_388030:
    // 0x388030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_388034:
    // 0x388034: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x388034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388038:
    // 0x388038: 0x600008  jr          $v1
label_38803c:
    if (ctx->pc == 0x38803Cu) {
        ctx->pc = 0x388040u;
        goto label_388040;
    }
    ctx->pc = 0x388038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x388040u: goto label_388040;
            case 0x388104u: goto label_388104;
            case 0x3881DCu: goto label_3881dc;
            case 0x3882B8u: goto label_3882b8;
            case 0x388314u: goto label_388314;
            case 0x38840Cu: goto label_38840c;
            case 0x3885FCu: goto label_3885fc;
            case 0x3888DCu: goto label_3888dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x388040u;
label_388040:
    // 0x388040: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x388040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388044:
    // 0x388044: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x388044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388048:
    // 0x388048: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_38804c:
    if (ctx->pc == 0x38804Cu) {
        ctx->pc = 0x38804Cu;
            // 0x38804c: 0x26030120  addiu       $v1, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x388050u;
        goto label_388050;
    }
    ctx->pc = 0x388048u;
    {
        const bool branch_taken_0x388048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x38804Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388048u;
            // 0x38804c: 0x26030120  addiu       $v1, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388048) {
            ctx->pc = 0x388058u;
            goto label_388058;
        }
    }
    ctx->pc = 0x388050u;
label_388050:
    // 0x388050: 0x10000006  b           . + 4 + (0x6 << 2)
label_388054:
    if (ctx->pc == 0x388054u) {
        ctx->pc = 0x388054u;
            // 0x388054: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x388058u;
        goto label_388058;
    }
    ctx->pc = 0x388050u;
    {
        const bool branch_taken_0x388050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388050u;
            // 0x388054: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388050) {
            ctx->pc = 0x38806Cu;
            goto label_38806c;
        }
    }
    ctx->pc = 0x388058u;
label_388058:
    // 0x388058: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x388058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_38805c:
    // 0x38805c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38805cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388060:
    // 0x388060: 0x0  nop
    ctx->pc = 0x388060u;
    // NOP
label_388064:
    // 0x388064: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x388064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_388068:
    // 0x388068: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x388068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38806c:
    // 0x38806c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_388070:
    // 0x388070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_388074:
    // 0x388074: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x388074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_388078:
    // 0x388078: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x388078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38807c:
    // 0x38807c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_388080:
    // 0x388080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x388080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_388084:
    // 0x388084: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x388084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388088:
    // 0x388088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38808c:
    // 0x38808c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38808cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388090:
    // 0x388090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x388090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_388094:
    // 0x388094: 0x0  nop
    ctx->pc = 0x388094u;
    // NOP
label_388098:
    // 0x388098: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x388098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_38809c:
    // 0x38809c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x38809cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3880a0:
    // 0x3880a0: 0xc088b74  jal         func_222DD0
label_3880a4:
    if (ctx->pc == 0x3880A4u) {
        ctx->pc = 0x3880A4u;
            // 0x3880a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3880A8u;
        goto label_3880a8;
    }
    ctx->pc = 0x3880A0u;
    SET_GPR_U32(ctx, 31, 0x3880A8u);
    ctx->pc = 0x3880A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3880A0u;
            // 0x3880a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3880A8u; }
        if (ctx->pc != 0x3880A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3880A8u; }
        if (ctx->pc != 0x3880A8u) { return; }
    }
    ctx->pc = 0x3880A8u;
label_3880a8:
    // 0x3880a8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3880a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3880ac:
    // 0x3880ac: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3880acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3880b0:
    // 0x3880b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3880b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3880b4:
    // 0x3880b4: 0x320f809  jalr        $t9
label_3880b8:
    if (ctx->pc == 0x3880B8u) {
        ctx->pc = 0x3880B8u;
            // 0x3880b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3880BCu;
        goto label_3880bc;
    }
    ctx->pc = 0x3880B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3880BCu);
        ctx->pc = 0x3880B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3880B4u;
            // 0x3880b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3880BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3880BCu; }
            if (ctx->pc != 0x3880BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3880BCu;
label_3880bc:
    // 0x3880bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3880bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3880c0:
    // 0x3880c0: 0x8c636118  lw          $v1, 0x6118($v1)
    ctx->pc = 0x3880c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24856)));
label_3880c4:
    // 0x3880c4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x3880c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3880c8:
    // 0x3880c8: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x3880c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3880cc:
    // 0x3880cc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3880ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3880d0:
    // 0x3880d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3880d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3880d4:
    // 0x3880d4: 0x45010201  bc1t        . + 4 + (0x201 << 2)
label_3880d8:
    if (ctx->pc == 0x3880D8u) {
        ctx->pc = 0x3880DCu;
        goto label_3880dc;
    }
    ctx->pc = 0x3880D4u;
    {
        const bool branch_taken_0x3880d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3880d4) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3880DCu;
label_3880dc:
    // 0x3880dc: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x3880dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_3880e0:
    // 0x3880e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3880e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3880e4:
    // 0x3880e4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3880e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_3880e8:
    // 0x3880e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3880e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3880ec:
    // 0x3880ec: 0x0  nop
    ctx->pc = 0x3880ecu;
    // NOP
label_3880f0:
    // 0x3880f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3880f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3880f4:
    // 0x3880f4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3880f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_3880f8:
    // 0x3880f8: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x3880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_3880fc:
    // 0x3880fc: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_388100:
    if (ctx->pc == 0x388100u) {
        ctx->pc = 0x388100u;
            // 0x388100: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
        ctx->pc = 0x388104u;
        goto label_388104;
    }
    ctx->pc = 0x3880FCu;
    {
        const bool branch_taken_0x3880fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3880FCu;
            // 0x388100: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880fc) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388104u;
label_388104:
    // 0x388104: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x388104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388108:
    // 0x388108: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x388108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38810c:
    // 0x38810c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_388110:
    // 0x388110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x388110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_388114:
    // 0x388114: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x388114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388118:
    // 0x388118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38811c:
    // 0x38811c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38811cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388120:
    // 0x388120: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_388124:
    // 0x388124: 0x0  nop
    ctx->pc = 0x388124u;
    // NOP
label_388128:
    // 0x388128: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x388128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_38812c:
    // 0x38812c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x38812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388130:
    // 0x388130: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x388130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388134:
    // 0x388134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x388134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_388138:
    // 0x388138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x388138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38813c:
    // 0x38813c: 0x450101e7  bc1t        . + 4 + (0x1E7 << 2)
label_388140:
    if (ctx->pc == 0x388140u) {
        ctx->pc = 0x388144u;
        goto label_388144;
    }
    ctx->pc = 0x38813Cu;
    {
        const bool branch_taken_0x38813c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38813c) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388144u;
label_388144:
    // 0x388144: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x388144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_388148:
    // 0x388148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x388148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38814c:
    // 0x38814c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38814cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_388150:
    // 0x388150: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x388150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_388154:
    // 0x388154: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x388154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_388158:
    // 0x388158: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38815c:
    // 0x38815c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_388160:
    // 0x388160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388164:
    // 0x388164: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x388164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_388168:
    // 0x388168: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x388168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38816c:
    // 0x38816c: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x38816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388170:
    // 0x388170: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x388170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388174:
    // 0x388174: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x388174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_388178:
    // 0x388178: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x388178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_38817c:
    // 0x38817c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x38817cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_388180:
    // 0x388180: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x388180u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_388184:
    // 0x388184: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x388184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388188:
    // 0x388188: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x388188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_38818c:
    // 0x38818c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x38818cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_388190:
    // 0x388190: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x388190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_388194:
    // 0x388194: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x388194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_388198:
    // 0x388198: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x388198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_38819c:
    // 0x38819c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x38819cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3881a0:
    // 0x3881a0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3881a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3881a4:
    // 0x3881a4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3881a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3881a8:
    // 0x3881a8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3881a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3881ac:
    // 0x3881ac: 0xc08914c  jal         func_224530
label_3881b0:
    if (ctx->pc == 0x3881B0u) {
        ctx->pc = 0x3881B0u;
            // 0x3881b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3881B4u;
        goto label_3881b4;
    }
    ctx->pc = 0x3881ACu;
    SET_GPR_U32(ctx, 31, 0x3881B4u);
    ctx->pc = 0x3881B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3881ACu;
            // 0x3881b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881B4u; }
        if (ctx->pc != 0x3881B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881B4u; }
        if (ctx->pc != 0x3881B4u) { return; }
    }
    ctx->pc = 0x3881B4u;
label_3881b4:
    // 0x3881b4: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x3881b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3881b8:
    // 0x3881b8: 0xc088b74  jal         func_222DD0
label_3881bc:
    if (ctx->pc == 0x3881BCu) {
        ctx->pc = 0x3881BCu;
            // 0x3881bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3881C0u;
        goto label_3881c0;
    }
    ctx->pc = 0x3881B8u;
    SET_GPR_U32(ctx, 31, 0x3881C0u);
    ctx->pc = 0x3881BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3881B8u;
            // 0x3881bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881C0u; }
        if (ctx->pc != 0x3881C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881C0u; }
        if (ctx->pc != 0x3881C0u) { return; }
    }
    ctx->pc = 0x3881C0u;
label_3881c0:
    // 0x3881c0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3881c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3881c4:
    // 0x3881c4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3881c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3881c8:
    // 0x3881c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3881c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3881cc:
    // 0x3881cc: 0x320f809  jalr        $t9
label_3881d0:
    if (ctx->pc == 0x3881D0u) {
        ctx->pc = 0x3881D0u;
            // 0x3881d0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3881D4u;
        goto label_3881d4;
    }
    ctx->pc = 0x3881CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3881D4u);
        ctx->pc = 0x3881D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3881CCu;
            // 0x3881d0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3881D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3881D4u; }
            if (ctx->pc != 0x3881D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3881D4u;
label_3881d4:
    // 0x3881d4: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_3881d8:
    if (ctx->pc == 0x3881D8u) {
        ctx->pc = 0x3881DCu;
        goto label_3881dc;
    }
    ctx->pc = 0x3881D4u;
    {
        const bool branch_taken_0x3881d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3881d4) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3881DCu;
label_3881dc:
    // 0x3881dc: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3881dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3881e0:
    // 0x3881e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3881e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3881e4:
    // 0x3881e4: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x3881e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_3881e8:
    // 0x3881e8: 0xc04cc70  jal         func_1331C0
label_3881ec:
    if (ctx->pc == 0x3881ECu) {
        ctx->pc = 0x3881ECu;
            // 0x3881ec: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3881F0u;
        goto label_3881f0;
    }
    ctx->pc = 0x3881E8u;
    SET_GPR_U32(ctx, 31, 0x3881F0u);
    ctx->pc = 0x3881ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3881E8u;
            // 0x3881ec: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881F0u; }
        if (ctx->pc != 0x3881F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3881F0u; }
        if (ctx->pc != 0x3881F0u) { return; }
    }
    ctx->pc = 0x3881F0u;
label_3881f0:
    // 0x3881f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3881f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3881f4:
    // 0x3881f4: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x3881f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_3881f8:
    // 0x3881f8: 0xc04cbe0  jal         func_132F80
label_3881fc:
    if (ctx->pc == 0x3881FCu) {
        ctx->pc = 0x3881FCu;
            // 0x3881fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388200u;
        goto label_388200;
    }
    ctx->pc = 0x3881F8u;
    SET_GPR_U32(ctx, 31, 0x388200u);
    ctx->pc = 0x3881FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3881F8u;
            // 0x3881fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388200u; }
        if (ctx->pc != 0x388200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388200u; }
        if (ctx->pc != 0x388200u) { return; }
    }
    ctx->pc = 0x388200u;
label_388200:
    // 0x388200: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x388200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_388204:
    // 0x388204: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x388204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_388208:
    // 0x388208: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x388208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38820c:
    // 0x38820c: 0xc04cbd8  jal         func_132F60
label_388210:
    if (ctx->pc == 0x388210u) {
        ctx->pc = 0x388210u;
            // 0x388210: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x388214u;
        goto label_388214;
    }
    ctx->pc = 0x38820Cu;
    SET_GPR_U32(ctx, 31, 0x388214u);
    ctx->pc = 0x388210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38820Cu;
            // 0x388210: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388214u; }
        if (ctx->pc != 0x388214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388214u; }
        if (ctx->pc != 0x388214u) { return; }
    }
    ctx->pc = 0x388214u;
label_388214:
    // 0x388214: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x388214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388218:
    // 0x388218: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x388218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38821c:
    // 0x38821c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_388220:
    // 0x388220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x388220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_388224:
    // 0x388224: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x388224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388228:
    // 0x388228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38822c:
    // 0x38822c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38822cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388230:
    // 0x388230: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_388234:
    // 0x388234: 0x0  nop
    ctx->pc = 0x388234u;
    // NOP
label_388238:
    // 0x388238: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x388238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_38823c:
    // 0x38823c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x38823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388240:
    // 0x388240: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x388240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388244:
    // 0x388244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x388244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_388248:
    // 0x388248: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x388248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38824c:
    // 0x38824c: 0x450101a3  bc1t        . + 4 + (0x1A3 << 2)
label_388250:
    if (ctx->pc == 0x388250u) {
        ctx->pc = 0x388254u;
        goto label_388254;
    }
    ctx->pc = 0x38824Cu;
    {
        const bool branch_taken_0x38824c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38824c) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388254u;
label_388254:
    // 0x388254: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x388254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388258:
    // 0x388258: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x388258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_38825c:
    // 0x38825c: 0x0  nop
    ctx->pc = 0x38825cu;
    // NOP
label_388260:
    // 0x388260: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x388260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_388264:
    // 0x388264: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x388264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_388268:
    // 0x388268: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x388268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_38826c:
    // 0x38826c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x38826cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_388270:
    // 0x388270: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x388270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_388274:
    // 0x388274: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x388274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388278:
    // 0x388278: 0xc088b74  jal         func_222DD0
label_38827c:
    if (ctx->pc == 0x38827Cu) {
        ctx->pc = 0x38827Cu;
            // 0x38827c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388280u;
        goto label_388280;
    }
    ctx->pc = 0x388278u;
    SET_GPR_U32(ctx, 31, 0x388280u);
    ctx->pc = 0x38827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388278u;
            // 0x38827c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388280u; }
        if (ctx->pc != 0x388280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388280u; }
        if (ctx->pc != 0x388280u) { return; }
    }
    ctx->pc = 0x388280u;
label_388280:
    // 0x388280: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x388280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_388284:
    // 0x388284: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x388284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_388288:
    // 0x388288: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x388288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38828c:
    // 0x38828c: 0x320f809  jalr        $t9
label_388290:
    if (ctx->pc == 0x388290u) {
        ctx->pc = 0x388290u;
            // 0x388290: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x388294u;
        goto label_388294;
    }
    ctx->pc = 0x38828Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388294u);
        ctx->pc = 0x388290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38828Cu;
            // 0x388290: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388294u; }
            if (ctx->pc != 0x388294u) { return; }
        }
        }
    }
    ctx->pc = 0x388294u;
label_388294:
    // 0x388294: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388298:
    // 0x388298: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38829c:
    // 0x38829c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3882a0:
    // 0x3882a0: 0xc08914c  jal         func_224530
label_3882a4:
    if (ctx->pc == 0x3882A4u) {
        ctx->pc = 0x3882A4u;
            // 0x3882a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3882A8u;
        goto label_3882a8;
    }
    ctx->pc = 0x3882A0u;
    SET_GPR_U32(ctx, 31, 0x3882A8u);
    ctx->pc = 0x3882A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3882A0u;
            // 0x3882a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3882A8u; }
        if (ctx->pc != 0x3882A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3882A8u; }
        if (ctx->pc != 0x3882A8u) { return; }
    }
    ctx->pc = 0x3882A8u;
label_3882a8:
    // 0x3882a8: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x3882a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_3882ac:
    // 0x3882ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3882acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3882b0:
    // 0x3882b0: 0x1000018a  b           . + 4 + (0x18A << 2)
label_3882b4:
    if (ctx->pc == 0x3882B4u) {
        ctx->pc = 0x3882B4u;
            // 0x3882b4: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x3882B8u;
        goto label_3882b8;
    }
    ctx->pc = 0x3882B0u;
    {
        const bool branch_taken_0x3882b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3882B0u;
            // 0x3882b4: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882b0) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3882B8u;
label_3882b8:
    // 0x3882b8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3882b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3882bc:
    // 0x3882bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3882bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3882c0:
    // 0x3882c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3882c4:
    // 0x3882c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3882c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3882c8:
    // 0x3882c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3882c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3882cc:
    // 0x3882cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3882ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3882d0:
    // 0x3882d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3882d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3882d4:
    // 0x3882d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3882d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3882d8:
    // 0x3882d8: 0x0  nop
    ctx->pc = 0x3882d8u;
    // NOP
label_3882dc:
    // 0x3882dc: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x3882dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_3882e0:
    // 0x3882e0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x3882e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3882e4:
    // 0x3882e4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3882e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3882e8:
    // 0x3882e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3882e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3882ec:
    // 0x3882ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3882ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3882f0:
    // 0x3882f0: 0x4501017a  bc1t        . + 4 + (0x17A << 2)
label_3882f4:
    if (ctx->pc == 0x3882F4u) {
        ctx->pc = 0x3882F8u;
        goto label_3882f8;
    }
    ctx->pc = 0x3882F0u;
    {
        const bool branch_taken_0x3882f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3882f0) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3882F8u;
label_3882f8:
    // 0x3882f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3882f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3882fc:
    // 0x3882fc: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x3882fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_388300:
    // 0x388300: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x388300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388304:
    // 0x388304: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x388304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388308:
    // 0x388308: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38830c:
    // 0x38830c: 0x10000173  b           . + 4 + (0x173 << 2)
label_388310:
    if (ctx->pc == 0x388310u) {
        ctx->pc = 0x388310u;
            // 0x388310: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->pc = 0x388314u;
        goto label_388314;
    }
    ctx->pc = 0x38830Cu;
    {
        const bool branch_taken_0x38830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38830Cu;
            // 0x388310: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38830c) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388314u;
label_388314:
    // 0x388314: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x388314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388318:
    // 0x388318: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x388318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38831c:
    // 0x38831c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x38831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_388320:
    // 0x388320: 0xc04cc70  jal         func_1331C0
label_388324:
    if (ctx->pc == 0x388324u) {
        ctx->pc = 0x388324u;
            // 0x388324: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x388328u;
        goto label_388328;
    }
    ctx->pc = 0x388320u;
    SET_GPR_U32(ctx, 31, 0x388328u);
    ctx->pc = 0x388324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388320u;
            // 0x388324: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388328u; }
        if (ctx->pc != 0x388328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388328u; }
        if (ctx->pc != 0x388328u) { return; }
    }
    ctx->pc = 0x388328u;
label_388328:
    // 0x388328: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x388328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38832c:
    // 0x38832c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x38832cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_388330:
    // 0x388330: 0xc04cbe0  jal         func_132F80
label_388334:
    if (ctx->pc == 0x388334u) {
        ctx->pc = 0x388334u;
            // 0x388334: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388338u;
        goto label_388338;
    }
    ctx->pc = 0x388330u;
    SET_GPR_U32(ctx, 31, 0x388338u);
    ctx->pc = 0x388334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388330u;
            // 0x388334: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388338u; }
        if (ctx->pc != 0x388338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388338u; }
        if (ctx->pc != 0x388338u) { return; }
    }
    ctx->pc = 0x388338u;
label_388338:
    // 0x388338: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x388338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38833c:
    // 0x38833c: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x38833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_388340:
    // 0x388340: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x388340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_388344:
    // 0x388344: 0xc04cbd8  jal         func_132F60
label_388348:
    if (ctx->pc == 0x388348u) {
        ctx->pc = 0x388348u;
            // 0x388348: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x38834Cu;
        goto label_38834c;
    }
    ctx->pc = 0x388344u;
    SET_GPR_U32(ctx, 31, 0x38834Cu);
    ctx->pc = 0x388348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388344u;
            // 0x388348: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38834Cu; }
        if (ctx->pc != 0x38834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38834Cu; }
        if (ctx->pc != 0x38834Cu) { return; }
    }
    ctx->pc = 0x38834Cu;
label_38834c:
    // 0x38834c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x38834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_388350:
    // 0x388350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_388354:
    // 0x388354: 0x4610161  bgez        $v1, . + 4 + (0x161 << 2)
label_388358:
    if (ctx->pc == 0x388358u) {
        ctx->pc = 0x388358u;
            // 0x388358: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->pc = 0x38835Cu;
        goto label_38835c;
    }
    ctx->pc = 0x388354u;
    {
        const bool branch_taken_0x388354 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x388358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388354u;
            // 0x388358: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388354) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x38835Cu;
label_38835c:
    // 0x38835c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38835cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_388360:
    // 0x388360: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388364:
    // 0x388364: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x388364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388368:
    // 0x388368: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x388368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38836c:
    // 0x38836c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x38836cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_388370:
    // 0x388370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388374:
    // 0x388374: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x388374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388378:
    // 0x388378: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38837c:
    // 0x38837c: 0x0  nop
    ctx->pc = 0x38837cu;
    // NOP
label_388380:
    // 0x388380: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x388380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_388384:
    // 0x388384: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x388384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
label_388388:
    // 0x388388: 0xc6020118  lwc1        $f2, 0x118($s0)
    ctx->pc = 0x388388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38838c:
    // 0x38838c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_388390:
    // 0x388390: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x388390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388394:
    // 0x388394: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x388394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388398:
    // 0x388398: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x388398u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_38839c:
    // 0x38839c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38839cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3883a0:
    // 0x3883a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3883a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3883a4:
    // 0x3883a4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3883a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3883a8:
    // 0x3883a8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3883a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3883ac:
    // 0x3883ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3883acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3883b0:
    // 0x3883b0: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x3883b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3883b4:
    // 0x3883b4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3883b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3883b8:
    // 0x3883b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3883b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3883bc:
    // 0x3883bc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3883bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3883c0:
    // 0x3883c0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3883c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3883c4:
    // 0x3883c4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3883c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3883c8:
    // 0x3883c8: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x3883c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3883cc:
    // 0x3883cc: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3883ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3883d0:
    // 0x3883d0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3883d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3883d4:
    // 0x3883d4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3883d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3883d8:
    // 0x3883d8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3883dc:
    // 0x3883dc: 0xc08914c  jal         func_224530
label_3883e0:
    if (ctx->pc == 0x3883E0u) {
        ctx->pc = 0x3883E0u;
            // 0x3883e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3883E4u;
        goto label_3883e4;
    }
    ctx->pc = 0x3883DCu;
    SET_GPR_U32(ctx, 31, 0x3883E4u);
    ctx->pc = 0x3883E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3883DCu;
            // 0x3883e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3883E4u; }
        if (ctx->pc != 0x3883E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3883E4u; }
        if (ctx->pc != 0x3883E4u) { return; }
    }
    ctx->pc = 0x3883E4u;
label_3883e4:
    // 0x3883e4: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x3883e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3883e8:
    // 0x3883e8: 0xc088b74  jal         func_222DD0
label_3883ec:
    if (ctx->pc == 0x3883ECu) {
        ctx->pc = 0x3883ECu;
            // 0x3883ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3883F0u;
        goto label_3883f0;
    }
    ctx->pc = 0x3883E8u;
    SET_GPR_U32(ctx, 31, 0x3883F0u);
    ctx->pc = 0x3883ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3883E8u;
            // 0x3883ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3883F0u; }
        if (ctx->pc != 0x3883F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3883F0u; }
        if (ctx->pc != 0x3883F0u) { return; }
    }
    ctx->pc = 0x3883F0u;
label_3883f0:
    // 0x3883f0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3883f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3883f4:
    // 0x3883f4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3883f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3883f8:
    // 0x3883f8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3883f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3883fc:
    // 0x3883fc: 0x320f809  jalr        $t9
label_388400:
    if (ctx->pc == 0x388400u) {
        ctx->pc = 0x388400u;
            // 0x388400: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x388404u;
        goto label_388404;
    }
    ctx->pc = 0x3883FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388404u);
        ctx->pc = 0x388400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3883FCu;
            // 0x388400: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388404u; }
            if (ctx->pc != 0x388404u) { return; }
        }
        }
    }
    ctx->pc = 0x388404u;
label_388404:
    // 0x388404: 0x10000135  b           . + 4 + (0x135 << 2)
label_388408:
    if (ctx->pc == 0x388408u) {
        ctx->pc = 0x38840Cu;
        goto label_38840c;
    }
    ctx->pc = 0x388404u;
    {
        const bool branch_taken_0x388404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388404) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x38840Cu;
label_38840c:
    // 0x38840c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x38840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388410:
    // 0x388410: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388414:
    // 0x388414: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_388418:
    if (ctx->pc == 0x388418u) {
        ctx->pc = 0x388418u;
            // 0x388418: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x38841Cu;
        goto label_38841c;
    }
    ctx->pc = 0x388414u;
    {
        const bool branch_taken_0x388414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x388418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388414u;
            // 0x388418: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388414) {
            ctx->pc = 0x388424u;
            goto label_388424;
        }
    }
    ctx->pc = 0x38841Cu;
label_38841c:
    // 0x38841c: 0x10000006  b           . + 4 + (0x6 << 2)
label_388420:
    if (ctx->pc == 0x388420u) {
        ctx->pc = 0x388420u;
            // 0x388420: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x388424u;
        goto label_388424;
    }
    ctx->pc = 0x38841Cu;
    {
        const bool branch_taken_0x38841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38841Cu;
            // 0x388420: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38841c) {
            ctx->pc = 0x388438u;
            goto label_388438;
        }
    }
    ctx->pc = 0x388424u;
label_388424:
    // 0x388424: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x388424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_388428:
    // 0x388428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x388428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38842c:
    // 0x38842c: 0x0  nop
    ctx->pc = 0x38842cu;
    // NOP
label_388430:
    // 0x388430: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x388430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_388434:
    // 0x388434: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x388434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388438:
    // 0x388438: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x388438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38843c:
    // 0x38843c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38843cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_388440:
    // 0x388440: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x388440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_388444:
    // 0x388444: 0x8c636118  lw          $v1, 0x6118($v1)
    ctx->pc = 0x388444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24856)));
label_388448:
    // 0x388448: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x388448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38844c:
    // 0x38844c: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x38844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_388450:
    // 0x388450: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x388450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388454:
    // 0x388454: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x388454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388458:
    // 0x388458: 0x45000120  bc1f        . + 4 + (0x120 << 2)
label_38845c:
    if (ctx->pc == 0x38845Cu) {
        ctx->pc = 0x388460u;
        goto label_388460;
    }
    ctx->pc = 0x388458u;
    {
        const bool branch_taken_0x388458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x388458) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388460u;
label_388460:
    // 0x388460: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x388460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_388464:
    // 0x388464: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x388464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_388468:
    // 0x388468: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x388468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_38846c:
    // 0x38846c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x38846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_388470:
    // 0x388470: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x388470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_388474:
    // 0x388474: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x388474u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388478:
    // 0x388478: 0xc088b74  jal         func_222DD0
label_38847c:
    if (ctx->pc == 0x38847Cu) {
        ctx->pc = 0x38847Cu;
            // 0x38847c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388480u;
        goto label_388480;
    }
    ctx->pc = 0x388478u;
    SET_GPR_U32(ctx, 31, 0x388480u);
    ctx->pc = 0x38847Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388478u;
            // 0x38847c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388480u; }
        if (ctx->pc != 0x388480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388480u; }
        if (ctx->pc != 0x388480u) { return; }
    }
    ctx->pc = 0x388480u;
label_388480:
    // 0x388480: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x388480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_388484:
    // 0x388484: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x388484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_388488:
    // 0x388488: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x388488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38848c:
    // 0x38848c: 0x320f809  jalr        $t9
label_388490:
    if (ctx->pc == 0x388490u) {
        ctx->pc = 0x388490u;
            // 0x388490: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x388494u;
        goto label_388494;
    }
    ctx->pc = 0x38848Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388494u);
        ctx->pc = 0x388490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38848Cu;
            // 0x388490: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388494u; }
            if (ctx->pc != 0x388494u) { return; }
        }
        }
    }
    ctx->pc = 0x388494u;
label_388494:
    // 0x388494: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388498:
    // 0x388498: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38849c:
    // 0x38849c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3884a0:
    // 0x3884a0: 0xc08914c  jal         func_224530
label_3884a4:
    if (ctx->pc == 0x3884A4u) {
        ctx->pc = 0x3884A4u;
            // 0x3884a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3884A8u;
        goto label_3884a8;
    }
    ctx->pc = 0x3884A0u;
    SET_GPR_U32(ctx, 31, 0x3884A8u);
    ctx->pc = 0x3884A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884A0u;
            // 0x3884a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884A8u; }
        if (ctx->pc != 0x3884A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884A8u; }
        if (ctx->pc != 0x3884A8u) { return; }
    }
    ctx->pc = 0x3884A8u;
label_3884a8:
    // 0x3884a8: 0xc0e39b4  jal         func_38E6D0
label_3884ac:
    if (ctx->pc == 0x3884ACu) {
        ctx->pc = 0x3884ACu;
            // 0x3884ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3884B0u;
        goto label_3884b0;
    }
    ctx->pc = 0x3884A8u;
    SET_GPR_U32(ctx, 31, 0x3884B0u);
    ctx->pc = 0x3884ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884A8u;
            // 0x3884ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884B0u; }
        if (ctx->pc != 0x3884B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884B0u; }
        if (ctx->pc != 0x3884B0u) { return; }
    }
    ctx->pc = 0x3884B0u;
label_3884b0:
    // 0x3884b0: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x3884b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3884b4:
    // 0x3884b4: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x3884b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3884b8:
    // 0x3884b8: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x3884b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3884bc:
    // 0x3884bc: 0xc0d3f08  jal         func_34FC20
label_3884c0:
    if (ctx->pc == 0x3884C0u) {
        ctx->pc = 0x3884C0u;
            // 0x3884c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3884C4u;
        goto label_3884c4;
    }
    ctx->pc = 0x3884BCu;
    SET_GPR_U32(ctx, 31, 0x3884C4u);
    ctx->pc = 0x3884C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884BCu;
            // 0x3884c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884C4u; }
        if (ctx->pc != 0x3884C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884C4u; }
        if (ctx->pc != 0x3884C4u) { return; }
    }
    ctx->pc = 0x3884C4u;
label_3884c4:
    // 0x3884c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3884c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3884c8:
    // 0x3884c8: 0xc0e1b28  jal         func_386CA0
label_3884cc:
    if (ctx->pc == 0x3884CCu) {
        ctx->pc = 0x3884CCu;
            // 0x3884cc: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3884D0u;
        goto label_3884d0;
    }
    ctx->pc = 0x3884C8u;
    SET_GPR_U32(ctx, 31, 0x3884D0u);
    ctx->pc = 0x3884CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884C8u;
            // 0x3884cc: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884D0u; }
        if (ctx->pc != 0x3884D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884D0u; }
        if (ctx->pc != 0x3884D0u) { return; }
    }
    ctx->pc = 0x3884D0u;
label_3884d0:
    // 0x3884d0: 0xc0e1b24  jal         func_386C90
label_3884d4:
    if (ctx->pc == 0x3884D4u) {
        ctx->pc = 0x3884D8u;
        goto label_3884d8;
    }
    ctx->pc = 0x3884D0u;
    SET_GPR_U32(ctx, 31, 0x3884D8u);
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884D8u; }
        if (ctx->pc != 0x3884D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884D8u; }
        if (ctx->pc != 0x3884D8u) { return; }
    }
    ctx->pc = 0x3884D8u;
label_3884d8:
    // 0x3884d8: 0xc0e1b20  jal         func_386C80
label_3884dc:
    if (ctx->pc == 0x3884DCu) {
        ctx->pc = 0x3884DCu;
            // 0x3884dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3884E0u;
        goto label_3884e0;
    }
    ctx->pc = 0x3884D8u;
    SET_GPR_U32(ctx, 31, 0x3884E0u);
    ctx->pc = 0x3884DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884D8u;
            // 0x3884dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C80u;
    if (runtime->hasFunction(0x386C80u)) {
        auto targetFn = runtime->lookupFunction(0x386C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884E0u; }
        if (ctx->pc != 0x3884E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C80_0x386c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884E0u; }
        if (ctx->pc != 0x3884E0u) { return; }
    }
    ctx->pc = 0x3884E0u;
label_3884e0:
    // 0x3884e0: 0xc0e1b24  jal         func_386C90
label_3884e4:
    if (ctx->pc == 0x3884E4u) {
        ctx->pc = 0x3884E4u;
            // 0x3884e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3884E8u;
        goto label_3884e8;
    }
    ctx->pc = 0x3884E0u;
    SET_GPR_U32(ctx, 31, 0x3884E8u);
    ctx->pc = 0x3884E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884E0u;
            // 0x3884e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884E8u; }
        if (ctx->pc != 0x3884E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884E8u; }
        if (ctx->pc != 0x3884E8u) { return; }
    }
    ctx->pc = 0x3884E8u;
label_3884e8:
    // 0x3884e8: 0xc0e1b1c  jal         func_386C70
label_3884ec:
    if (ctx->pc == 0x3884ECu) {
        ctx->pc = 0x3884ECu;
            // 0x3884ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3884F0u;
        goto label_3884f0;
    }
    ctx->pc = 0x3884E8u;
    SET_GPR_U32(ctx, 31, 0x3884F0u);
    ctx->pc = 0x3884ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3884E8u;
            // 0x3884ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884F0u; }
        if (ctx->pc != 0x3884F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3884F0u; }
        if (ctx->pc != 0x3884F0u) { return; }
    }
    ctx->pc = 0x3884F0u;
label_3884f0:
    // 0x3884f0: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3884f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3884f4:
    // 0x3884f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3884f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3884f8:
    // 0x3884f8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3884f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3884fc:
    // 0x3884fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3884fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_388500:
    // 0x388500: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x388500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_388504:
    // 0x388504: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x388504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_388508:
    // 0x388508: 0xc0e1b24  jal         func_386C90
label_38850c:
    if (ctx->pc == 0x38850Cu) {
        ctx->pc = 0x38850Cu;
            // 0x38850c: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x388510u;
        goto label_388510;
    }
    ctx->pc = 0x388508u;
    SET_GPR_U32(ctx, 31, 0x388510u);
    ctx->pc = 0x38850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388508u;
            // 0x38850c: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388510u; }
        if (ctx->pc != 0x388510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388510u; }
        if (ctx->pc != 0x388510u) { return; }
    }
    ctx->pc = 0x388510u;
label_388510:
    // 0x388510: 0xc0e1b1c  jal         func_386C70
label_388514:
    if (ctx->pc == 0x388514u) {
        ctx->pc = 0x388514u;
            // 0x388514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388518u;
        goto label_388518;
    }
    ctx->pc = 0x388510u;
    SET_GPR_U32(ctx, 31, 0x388518u);
    ctx->pc = 0x388514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388510u;
            // 0x388514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388518u; }
        if (ctx->pc != 0x388518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388518u; }
        if (ctx->pc != 0x388518u) { return; }
    }
    ctx->pc = 0x388518u;
label_388518:
    // 0x388518: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x388518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_38851c:
    // 0x38851c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x38851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_388520:
    // 0x388520: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x388520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_388524:
    // 0x388524: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x388524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_388528:
    // 0x388528: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x388528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_38852c:
    // 0x38852c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388530:
    // 0x388530: 0xc0e1b0c  jal         func_386C30
label_388534:
    if (ctx->pc == 0x388534u) {
        ctx->pc = 0x388534u;
            // 0x388534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x388538u;
        goto label_388538;
    }
    ctx->pc = 0x388530u;
    SET_GPR_U32(ctx, 31, 0x388538u);
    ctx->pc = 0x388534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388530u;
            // 0x388534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388538u; }
        if (ctx->pc != 0x388538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388538u; }
        if (ctx->pc != 0x388538u) { return; }
    }
    ctx->pc = 0x388538u;
label_388538:
    // 0x388538: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38853c:
    // 0x38853c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388540:
    // 0x388540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388544:
    // 0x388544: 0xc08914c  jal         func_224530
label_388548:
    if (ctx->pc == 0x388548u) {
        ctx->pc = 0x388548u;
            // 0x388548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38854Cu;
        goto label_38854c;
    }
    ctx->pc = 0x388544u;
    SET_GPR_U32(ctx, 31, 0x38854Cu);
    ctx->pc = 0x388548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388544u;
            // 0x388548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38854Cu; }
        if (ctx->pc != 0x38854Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38854Cu; }
        if (ctx->pc != 0x38854Cu) { return; }
    }
    ctx->pc = 0x38854Cu;
label_38854c:
    // 0x38854c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38854cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388550:
    // 0x388550: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x388550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_388554:
    // 0x388554: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x388554u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_388558:
    // 0x388558: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x388558u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38855c:
    // 0x38855c: 0xc0b6df0  jal         func_2DB7C0
label_388560:
    if (ctx->pc == 0x388560u) {
        ctx->pc = 0x388560u;
            // 0x388560: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x388564u;
        goto label_388564;
    }
    ctx->pc = 0x38855Cu;
    SET_GPR_U32(ctx, 31, 0x388564u);
    ctx->pc = 0x388560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38855Cu;
            // 0x388560: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388564u; }
        if (ctx->pc != 0x388564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388564u; }
        if (ctx->pc != 0x388564u) { return; }
    }
    ctx->pc = 0x388564u;
label_388564:
    // 0x388564: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388568:
    // 0x388568: 0xc0e07f8  jal         func_381FE0
label_38856c:
    if (ctx->pc == 0x38856Cu) {
        ctx->pc = 0x38856Cu;
            // 0x38856c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x388570u;
        goto label_388570;
    }
    ctx->pc = 0x388568u;
    SET_GPR_U32(ctx, 31, 0x388570u);
    ctx->pc = 0x38856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388568u;
            // 0x38856c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388570u; }
        if (ctx->pc != 0x388570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388570u; }
        if (ctx->pc != 0x388570u) { return; }
    }
    ctx->pc = 0x388570u;
label_388570:
    // 0x388570: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388574:
    // 0x388574: 0xc0dc3f4  jal         func_370FD0
label_388578:
    if (ctx->pc == 0x388578u) {
        ctx->pc = 0x388578u;
            // 0x388578: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38857Cu;
        goto label_38857c;
    }
    ctx->pc = 0x388574u;
    SET_GPR_U32(ctx, 31, 0x38857Cu);
    ctx->pc = 0x388578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388574u;
            // 0x388578: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38857Cu; }
        if (ctx->pc != 0x38857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38857Cu; }
        if (ctx->pc != 0x38857Cu) { return; }
    }
    ctx->pc = 0x38857Cu;
label_38857c:
    // 0x38857c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x38857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_388580:
    // 0x388580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388584:
    // 0x388584: 0xc0e1b08  jal         func_386C20
label_388588:
    if (ctx->pc == 0x388588u) {
        ctx->pc = 0x388588u;
            // 0x388588: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x38858Cu;
        goto label_38858c;
    }
    ctx->pc = 0x388584u;
    SET_GPR_U32(ctx, 31, 0x38858Cu);
    ctx->pc = 0x388588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388584u;
            // 0x388588: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38858Cu; }
        if (ctx->pc != 0x38858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38858Cu; }
        if (ctx->pc != 0x38858Cu) { return; }
    }
    ctx->pc = 0x38858Cu;
label_38858c:
    // 0x38858c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x38858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_388590:
    // 0x388590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388594:
    // 0x388594: 0xc0e1b04  jal         func_386C10
label_388598:
    if (ctx->pc == 0x388598u) {
        ctx->pc = 0x388598u;
            // 0x388598: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x38859Cu;
        goto label_38859c;
    }
    ctx->pc = 0x388594u;
    SET_GPR_U32(ctx, 31, 0x38859Cu);
    ctx->pc = 0x388598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388594u;
            // 0x388598: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38859Cu; }
        if (ctx->pc != 0x38859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38859Cu; }
        if (ctx->pc != 0x38859Cu) { return; }
    }
    ctx->pc = 0x38859Cu;
label_38859c:
    // 0x38859c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38859cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3885a0:
    // 0x3885a0: 0xc0e1b00  jal         func_386C00
label_3885a4:
    if (ctx->pc == 0x3885A4u) {
        ctx->pc = 0x3885A4u;
            // 0x3885a4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3885A8u;
        goto label_3885a8;
    }
    ctx->pc = 0x3885A0u;
    SET_GPR_U32(ctx, 31, 0x3885A8u);
    ctx->pc = 0x3885A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885A0u;
            // 0x3885a4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885A8u; }
        if (ctx->pc != 0x3885A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885A8u; }
        if (ctx->pc != 0x3885A8u) { return; }
    }
    ctx->pc = 0x3885A8u;
label_3885a8:
    // 0x3885a8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3885a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3885ac:
    // 0x3885ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3885acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3885b0:
    // 0x3885b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3885b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3885b4:
    // 0x3885b4: 0xc0e1afc  jal         func_386BF0
label_3885b8:
    if (ctx->pc == 0x3885B8u) {
        ctx->pc = 0x3885B8u;
            // 0x3885b8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3885BCu;
        goto label_3885bc;
    }
    ctx->pc = 0x3885B4u;
    SET_GPR_U32(ctx, 31, 0x3885BCu);
    ctx->pc = 0x3885B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885B4u;
            // 0x3885b8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885BCu; }
        if (ctx->pc != 0x3885BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885BCu; }
        if (ctx->pc != 0x3885BCu) { return; }
    }
    ctx->pc = 0x3885BCu;
label_3885bc:
    // 0x3885bc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3885c0:
    // 0x3885c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3885c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3885c4:
    // 0x3885c4: 0xc0e1af4  jal         func_386BD0
label_3885c8:
    if (ctx->pc == 0x3885C8u) {
        ctx->pc = 0x3885C8u;
            // 0x3885c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3885CCu;
        goto label_3885cc;
    }
    ctx->pc = 0x3885C4u;
    SET_GPR_U32(ctx, 31, 0x3885CCu);
    ctx->pc = 0x3885C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885C4u;
            // 0x3885c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885CCu; }
        if (ctx->pc != 0x3885CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885CCu; }
        if (ctx->pc != 0x3885CCu) { return; }
    }
    ctx->pc = 0x3885CCu;
label_3885cc:
    // 0x3885cc: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x3885ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_3885d0:
    // 0x3885d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3885d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3885d4:
    // 0x3885d4: 0xc0e1aec  jal         func_386BB0
label_3885d8:
    if (ctx->pc == 0x3885D8u) {
        ctx->pc = 0x3885D8u;
            // 0x3885d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3885DCu;
        goto label_3885dc;
    }
    ctx->pc = 0x3885D4u;
    SET_GPR_U32(ctx, 31, 0x3885DCu);
    ctx->pc = 0x3885D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885D4u;
            // 0x3885d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885DCu; }
        if (ctx->pc != 0x3885DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885DCu; }
        if (ctx->pc != 0x3885DCu) { return; }
    }
    ctx->pc = 0x3885DCu;
label_3885dc:
    // 0x3885dc: 0xc0dc408  jal         func_371020
label_3885e0:
    if (ctx->pc == 0x3885E0u) {
        ctx->pc = 0x3885E0u;
            // 0x3885e0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3885E4u;
        goto label_3885e4;
    }
    ctx->pc = 0x3885DCu;
    SET_GPR_U32(ctx, 31, 0x3885E4u);
    ctx->pc = 0x3885E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885DCu;
            // 0x3885e0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885E4u; }
        if (ctx->pc != 0x3885E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885E4u; }
        if (ctx->pc != 0x3885E4u) { return; }
    }
    ctx->pc = 0x3885E4u;
label_3885e4:
    // 0x3885e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3885e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3885e8:
    // 0x3885e8: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x3885e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_3885ec:
    // 0x3885ec: 0xc0e1ad4  jal         func_386B50
label_3885f0:
    if (ctx->pc == 0x3885F0u) {
        ctx->pc = 0x3885F0u;
            // 0x3885f0: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3885F4u;
        goto label_3885f4;
    }
    ctx->pc = 0x3885ECu;
    SET_GPR_U32(ctx, 31, 0x3885F4u);
    ctx->pc = 0x3885F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3885ECu;
            // 0x3885f0: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885F4u; }
        if (ctx->pc != 0x3885F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3885F4u; }
        if (ctx->pc != 0x3885F4u) { return; }
    }
    ctx->pc = 0x3885F4u;
label_3885f4:
    // 0x3885f4: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_3885f8:
    if (ctx->pc == 0x3885F8u) {
        ctx->pc = 0x3885FCu;
        goto label_3885fc;
    }
    ctx->pc = 0x3885F4u;
    {
        const bool branch_taken_0x3885f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3885f4) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3885FCu;
label_3885fc:
    // 0x3885fc: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x3885fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_388600:
    // 0x388600: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_388604:
    if (ctx->pc == 0x388604u) {
        ctx->pc = 0x388608u;
        goto label_388608;
    }
    ctx->pc = 0x388600u;
    {
        const bool branch_taken_0x388600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x388600) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x388608u;
label_388608:
    // 0x388608: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x388608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38860c:
    // 0x38860c: 0x3c02ffda  lui         $v0, 0xFFDA
    ctx->pc = 0x38860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65498 << 16));
label_388610:
    // 0x388610: 0x3444ff9f  ori         $a0, $v0, 0xFF9F
    ctx->pc = 0x388610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65439);
label_388614:
    // 0x388614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388618:
    // 0x388618: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x388618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_38861c:
    // 0x38861c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x38861cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_388620:
    // 0x388620: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x388620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_388624:
    // 0x388624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388628:
    // 0x388628: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x388628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_38862c:
    // 0x38862c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x38862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_388630:
    // 0x388630: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x388630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_388634:
    // 0x388634: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x388634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_388638:
    // 0x388638: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x388638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38863c:
    // 0x38863c: 0xc08bff0  jal         func_22FFC0
label_388640:
    if (ctx->pc == 0x388640u) {
        ctx->pc = 0x388640u;
            // 0x388640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388644u;
        goto label_388644;
    }
    ctx->pc = 0x38863Cu;
    SET_GPR_U32(ctx, 31, 0x388644u);
    ctx->pc = 0x388640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38863Cu;
            // 0x388640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388644u; }
        if (ctx->pc != 0x388644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388644u; }
        if (ctx->pc != 0x388644u) { return; }
    }
    ctx->pc = 0x388644u;
label_388644:
    // 0x388644: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x388644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_388648:
    // 0x388648: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38864c:
    // 0x38864c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_388650:
    if (ctx->pc == 0x388650u) {
        ctx->pc = 0x388650u;
            // 0x388650: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x388654u;
        goto label_388654;
    }
    ctx->pc = 0x38864Cu;
    {
        const bool branch_taken_0x38864c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38864c) {
            ctx->pc = 0x388650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38864Cu;
            // 0x388650: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388678u;
            goto label_388678;
        }
    }
    ctx->pc = 0x388654u;
label_388654:
    // 0x388654: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x388654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_388658:
    // 0x388658: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_38865c:
    if (ctx->pc == 0x38865Cu) {
        ctx->pc = 0x388660u;
        goto label_388660;
    }
    ctx->pc = 0x388658u;
    {
        const bool branch_taken_0x388658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388658) {
            ctx->pc = 0x388674u;
            goto label_388674;
        }
    }
    ctx->pc = 0x388660u;
label_388660:
    // 0x388660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x388660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388664:
    // 0x388664: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
label_388668:
    if (ctx->pc == 0x388668u) {
        ctx->pc = 0x388668u;
            // 0x388668: 0xae0400d8  sw          $a0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
        ctx->pc = 0x38866Cu;
        goto label_38866c;
    }
    ctx->pc = 0x388664u;
    {
        const bool branch_taken_0x388664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388664) {
            ctx->pc = 0x388668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x388664u;
            // 0x388668: 0xae0400d8  sw          $a0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388694u;
            goto label_388694;
        }
    }
    ctx->pc = 0x38866Cu;
label_38866c:
    // 0x38866c: 0x1000000a  b           . + 4 + (0xA << 2)
label_388670:
    if (ctx->pc == 0x388670u) {
        ctx->pc = 0x388670u;
            // 0x388670: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x388674u;
        goto label_388674;
    }
    ctx->pc = 0x38866Cu;
    {
        const bool branch_taken_0x38866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38866Cu;
            // 0x388670: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38866c) {
            ctx->pc = 0x388698u;
            goto label_388698;
        }
    }
    ctx->pc = 0x388674u;
label_388674:
    // 0x388674: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x388674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_388678:
    // 0x388678: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x388678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_38867c:
    // 0x38867c: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x38867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388680:
    // 0x388680: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x388680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388684:
    // 0x388684: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_388688:
    // 0x388688: 0x0  nop
    ctx->pc = 0x388688u;
    // NOP
label_38868c:
    // 0x38868c: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x38868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_388690:
    // 0x388690: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x388690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_388694:
    // 0x388694: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x388694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_388698:
    // 0x388698: 0x10000090  b           . + 4 + (0x90 << 2)
label_38869c:
    if (ctx->pc == 0x38869Cu) {
        ctx->pc = 0x3886A0u;
        goto label_3886a0;
    }
    ctx->pc = 0x388698u;
    {
        const bool branch_taken_0x388698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388698) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3886A0u;
label_3886a0:
    // 0x3886a0: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x3886a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_3886a4:
    // 0x3886a4: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
label_3886a8:
    if (ctx->pc == 0x3886A8u) {
        ctx->pc = 0x3886ACu;
        goto label_3886ac;
    }
    ctx->pc = 0x3886A4u;
    {
        const bool branch_taken_0x3886a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3886a4) {
            ctx->pc = 0x3888DCu;
            goto label_3888dc;
        }
    }
    ctx->pc = 0x3886ACu;
label_3886ac:
    // 0x3886ac: 0xc0e39b4  jal         func_38E6D0
label_3886b0:
    if (ctx->pc == 0x3886B0u) {
        ctx->pc = 0x3886B4u;
        goto label_3886b4;
    }
    ctx->pc = 0x3886ACu;
    SET_GPR_U32(ctx, 31, 0x3886B4u);
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886B4u; }
        if (ctx->pc != 0x3886B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886B4u; }
        if (ctx->pc != 0x3886B4u) { return; }
    }
    ctx->pc = 0x3886B4u;
label_3886b4:
    // 0x3886b4: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x3886b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3886b8:
    // 0x3886b8: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x3886b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3886bc:
    // 0x3886bc: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x3886bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3886c0:
    // 0x3886c0: 0xc0d3f08  jal         func_34FC20
label_3886c4:
    if (ctx->pc == 0x3886C4u) {
        ctx->pc = 0x3886C4u;
            // 0x3886c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3886C8u;
        goto label_3886c8;
    }
    ctx->pc = 0x3886C0u;
    SET_GPR_U32(ctx, 31, 0x3886C8u);
    ctx->pc = 0x3886C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3886C0u;
            // 0x3886c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886C8u; }
        if (ctx->pc != 0x3886C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886C8u; }
        if (ctx->pc != 0x3886C8u) { return; }
    }
    ctx->pc = 0x3886C8u;
label_3886c8:
    // 0x3886c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3886c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3886cc:
    // 0x3886cc: 0xc0e1b28  jal         func_386CA0
label_3886d0:
    if (ctx->pc == 0x3886D0u) {
        ctx->pc = 0x3886D0u;
            // 0x3886d0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3886D4u;
        goto label_3886d4;
    }
    ctx->pc = 0x3886CCu;
    SET_GPR_U32(ctx, 31, 0x3886D4u);
    ctx->pc = 0x3886D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3886CCu;
            // 0x3886d0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886D4u; }
        if (ctx->pc != 0x3886D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886D4u; }
        if (ctx->pc != 0x3886D4u) { return; }
    }
    ctx->pc = 0x3886D4u;
label_3886d4:
    // 0x3886d4: 0xc0e1b24  jal         func_386C90
label_3886d8:
    if (ctx->pc == 0x3886D8u) {
        ctx->pc = 0x3886DCu;
        goto label_3886dc;
    }
    ctx->pc = 0x3886D4u;
    SET_GPR_U32(ctx, 31, 0x3886DCu);
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886DCu; }
        if (ctx->pc != 0x3886DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886DCu; }
        if (ctx->pc != 0x3886DCu) { return; }
    }
    ctx->pc = 0x3886DCu;
label_3886dc:
    // 0x3886dc: 0xc0e1b20  jal         func_386C80
label_3886e0:
    if (ctx->pc == 0x3886E0u) {
        ctx->pc = 0x3886E0u;
            // 0x3886e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3886E4u;
        goto label_3886e4;
    }
    ctx->pc = 0x3886DCu;
    SET_GPR_U32(ctx, 31, 0x3886E4u);
    ctx->pc = 0x3886E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3886DCu;
            // 0x3886e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C80u;
    if (runtime->hasFunction(0x386C80u)) {
        auto targetFn = runtime->lookupFunction(0x386C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886E4u; }
        if (ctx->pc != 0x3886E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C80_0x386c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886E4u; }
        if (ctx->pc != 0x3886E4u) { return; }
    }
    ctx->pc = 0x3886E4u;
label_3886e4:
    // 0x3886e4: 0xc0e1b24  jal         func_386C90
label_3886e8:
    if (ctx->pc == 0x3886E8u) {
        ctx->pc = 0x3886E8u;
            // 0x3886e8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3886ECu;
        goto label_3886ec;
    }
    ctx->pc = 0x3886E4u;
    SET_GPR_U32(ctx, 31, 0x3886ECu);
    ctx->pc = 0x3886E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3886E4u;
            // 0x3886e8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886ECu; }
        if (ctx->pc != 0x3886ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886ECu; }
        if (ctx->pc != 0x3886ECu) { return; }
    }
    ctx->pc = 0x3886ECu;
label_3886ec:
    // 0x3886ec: 0xc0e1b1c  jal         func_386C70
label_3886f0:
    if (ctx->pc == 0x3886F0u) {
        ctx->pc = 0x3886F0u;
            // 0x3886f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3886F4u;
        goto label_3886f4;
    }
    ctx->pc = 0x3886ECu;
    SET_GPR_U32(ctx, 31, 0x3886F4u);
    ctx->pc = 0x3886F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3886ECu;
            // 0x3886f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886F4u; }
        if (ctx->pc != 0x3886F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3886F4u; }
        if (ctx->pc != 0x3886F4u) { return; }
    }
    ctx->pc = 0x3886F4u;
label_3886f4:
    // 0x3886f4: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3886f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3886f8:
    // 0x3886f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3886f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3886fc:
    // 0x3886fc: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3886fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388700:
    // 0x388700: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x388700u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_388704:
    // 0x388704: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x388704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_388708:
    // 0x388708: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x388708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_38870c:
    // 0x38870c: 0xc0e1b24  jal         func_386C90
label_388710:
    if (ctx->pc == 0x388710u) {
        ctx->pc = 0x388710u;
            // 0x388710: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x388714u;
        goto label_388714;
    }
    ctx->pc = 0x38870Cu;
    SET_GPR_U32(ctx, 31, 0x388714u);
    ctx->pc = 0x388710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38870Cu;
            // 0x388710: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388714u; }
        if (ctx->pc != 0x388714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388714u; }
        if (ctx->pc != 0x388714u) { return; }
    }
    ctx->pc = 0x388714u;
label_388714:
    // 0x388714: 0xc0e1b1c  jal         func_386C70
label_388718:
    if (ctx->pc == 0x388718u) {
        ctx->pc = 0x388718u;
            // 0x388718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38871Cu;
        goto label_38871c;
    }
    ctx->pc = 0x388714u;
    SET_GPR_U32(ctx, 31, 0x38871Cu);
    ctx->pc = 0x388718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388714u;
            // 0x388718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38871Cu; }
        if (ctx->pc != 0x38871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38871Cu; }
        if (ctx->pc != 0x38871Cu) { return; }
    }
    ctx->pc = 0x38871Cu;
label_38871c:
    // 0x38871c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x38871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_388720:
    // 0x388720: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x388720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_388724:
    // 0x388724: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x388724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_388728:
    // 0x388728: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x388728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_38872c:
    // 0x38872c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38872cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_388730:
    // 0x388730: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388734:
    // 0x388734: 0xc0e1b0c  jal         func_386C30
label_388738:
    if (ctx->pc == 0x388738u) {
        ctx->pc = 0x388738u;
            // 0x388738: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38873Cu;
        goto label_38873c;
    }
    ctx->pc = 0x388734u;
    SET_GPR_U32(ctx, 31, 0x38873Cu);
    ctx->pc = 0x388738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388734u;
            // 0x388738: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38873Cu; }
        if (ctx->pc != 0x38873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38873Cu; }
        if (ctx->pc != 0x38873Cu) { return; }
    }
    ctx->pc = 0x38873Cu;
label_38873c:
    // 0x38873c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388740:
    // 0x388740: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388744:
    // 0x388744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388748:
    // 0x388748: 0xc08914c  jal         func_224530
label_38874c:
    if (ctx->pc == 0x38874Cu) {
        ctx->pc = 0x38874Cu;
            // 0x38874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388750u;
        goto label_388750;
    }
    ctx->pc = 0x388748u;
    SET_GPR_U32(ctx, 31, 0x388750u);
    ctx->pc = 0x38874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388748u;
            // 0x38874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388750u; }
        if (ctx->pc != 0x388750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388750u; }
        if (ctx->pc != 0x388750u) { return; }
    }
    ctx->pc = 0x388750u;
label_388750:
    // 0x388750: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x388750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388754:
    // 0x388754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x388754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_388758:
    // 0x388758: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x388758u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38875c:
    // 0x38875c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38875cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_388760:
    // 0x388760: 0xc0b6df0  jal         func_2DB7C0
label_388764:
    if (ctx->pc == 0x388764u) {
        ctx->pc = 0x388764u;
            // 0x388764: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x388768u;
        goto label_388768;
    }
    ctx->pc = 0x388760u;
    SET_GPR_U32(ctx, 31, 0x388768u);
    ctx->pc = 0x388764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388760u;
            // 0x388764: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388768u; }
        if (ctx->pc != 0x388768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388768u; }
        if (ctx->pc != 0x388768u) { return; }
    }
    ctx->pc = 0x388768u;
label_388768:
    // 0x388768: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38876c:
    // 0x38876c: 0xc0e07f8  jal         func_381FE0
label_388770:
    if (ctx->pc == 0x388770u) {
        ctx->pc = 0x388770u;
            // 0x388770: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x388774u;
        goto label_388774;
    }
    ctx->pc = 0x38876Cu;
    SET_GPR_U32(ctx, 31, 0x388774u);
    ctx->pc = 0x388770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38876Cu;
            // 0x388770: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388774u; }
        if (ctx->pc != 0x388774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388774u; }
        if (ctx->pc != 0x388774u) { return; }
    }
    ctx->pc = 0x388774u;
label_388774:
    // 0x388774: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388778:
    // 0x388778: 0xc0dc3f4  jal         func_370FD0
label_38877c:
    if (ctx->pc == 0x38877Cu) {
        ctx->pc = 0x38877Cu;
            // 0x38877c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x388780u;
        goto label_388780;
    }
    ctx->pc = 0x388778u;
    SET_GPR_U32(ctx, 31, 0x388780u);
    ctx->pc = 0x38877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388778u;
            // 0x38877c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388780u; }
        if (ctx->pc != 0x388780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388780u; }
        if (ctx->pc != 0x388780u) { return; }
    }
    ctx->pc = 0x388780u;
label_388780:
    // 0x388780: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x388780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_388784:
    // 0x388784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388788:
    // 0x388788: 0xc0e1b08  jal         func_386C20
label_38878c:
    if (ctx->pc == 0x38878Cu) {
        ctx->pc = 0x38878Cu;
            // 0x38878c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x388790u;
        goto label_388790;
    }
    ctx->pc = 0x388788u;
    SET_GPR_U32(ctx, 31, 0x388790u);
    ctx->pc = 0x38878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388788u;
            // 0x38878c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388790u; }
        if (ctx->pc != 0x388790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388790u; }
        if (ctx->pc != 0x388790u) { return; }
    }
    ctx->pc = 0x388790u;
label_388790:
    // 0x388790: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x388790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_388794:
    // 0x388794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388798:
    // 0x388798: 0xc0e1b04  jal         func_386C10
label_38879c:
    if (ctx->pc == 0x38879Cu) {
        ctx->pc = 0x38879Cu;
            // 0x38879c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3887A0u;
        goto label_3887a0;
    }
    ctx->pc = 0x388798u;
    SET_GPR_U32(ctx, 31, 0x3887A0u);
    ctx->pc = 0x38879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388798u;
            // 0x38879c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887A0u; }
        if (ctx->pc != 0x3887A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887A0u; }
        if (ctx->pc != 0x3887A0u) { return; }
    }
    ctx->pc = 0x3887A0u;
label_3887a0:
    // 0x3887a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3887a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3887a4:
    // 0x3887a4: 0xc0e1b00  jal         func_386C00
label_3887a8:
    if (ctx->pc == 0x3887A8u) {
        ctx->pc = 0x3887A8u;
            // 0x3887a8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3887ACu;
        goto label_3887ac;
    }
    ctx->pc = 0x3887A4u;
    SET_GPR_U32(ctx, 31, 0x3887ACu);
    ctx->pc = 0x3887A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887A4u;
            // 0x3887a8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887ACu; }
        if (ctx->pc != 0x3887ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887ACu; }
        if (ctx->pc != 0x3887ACu) { return; }
    }
    ctx->pc = 0x3887ACu;
label_3887ac:
    // 0x3887ac: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3887acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3887b0:
    // 0x3887b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3887b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3887b4:
    // 0x3887b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3887b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3887b8:
    // 0x3887b8: 0xc0e1afc  jal         func_386BF0
label_3887bc:
    if (ctx->pc == 0x3887BCu) {
        ctx->pc = 0x3887BCu;
            // 0x3887bc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3887C0u;
        goto label_3887c0;
    }
    ctx->pc = 0x3887B8u;
    SET_GPR_U32(ctx, 31, 0x3887C0u);
    ctx->pc = 0x3887BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887B8u;
            // 0x3887bc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887C0u; }
        if (ctx->pc != 0x3887C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887C0u; }
        if (ctx->pc != 0x3887C0u) { return; }
    }
    ctx->pc = 0x3887C0u;
label_3887c0:
    // 0x3887c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3887c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3887c4:
    // 0x3887c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3887c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3887c8:
    // 0x3887c8: 0xc0e1af4  jal         func_386BD0
label_3887cc:
    if (ctx->pc == 0x3887CCu) {
        ctx->pc = 0x3887CCu;
            // 0x3887cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3887D0u;
        goto label_3887d0;
    }
    ctx->pc = 0x3887C8u;
    SET_GPR_U32(ctx, 31, 0x3887D0u);
    ctx->pc = 0x3887CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887C8u;
            // 0x3887cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887D0u; }
        if (ctx->pc != 0x3887D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887D0u; }
        if (ctx->pc != 0x3887D0u) { return; }
    }
    ctx->pc = 0x3887D0u;
label_3887d0:
    // 0x3887d0: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x3887d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_3887d4:
    // 0x3887d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3887d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3887d8:
    // 0x3887d8: 0xc0e1aec  jal         func_386BB0
label_3887dc:
    if (ctx->pc == 0x3887DCu) {
        ctx->pc = 0x3887DCu;
            // 0x3887dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3887E0u;
        goto label_3887e0;
    }
    ctx->pc = 0x3887D8u;
    SET_GPR_U32(ctx, 31, 0x3887E0u);
    ctx->pc = 0x3887DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887D8u;
            // 0x3887dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887E0u; }
        if (ctx->pc != 0x3887E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887E0u; }
        if (ctx->pc != 0x3887E0u) { return; }
    }
    ctx->pc = 0x3887E0u;
label_3887e0:
    // 0x3887e0: 0xc0dc408  jal         func_371020
label_3887e4:
    if (ctx->pc == 0x3887E4u) {
        ctx->pc = 0x3887E4u;
            // 0x3887e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3887E8u;
        goto label_3887e8;
    }
    ctx->pc = 0x3887E0u;
    SET_GPR_U32(ctx, 31, 0x3887E8u);
    ctx->pc = 0x3887E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887E0u;
            // 0x3887e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887E8u; }
        if (ctx->pc != 0x3887E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887E8u; }
        if (ctx->pc != 0x3887E8u) { return; }
    }
    ctx->pc = 0x3887E8u;
label_3887e8:
    // 0x3887e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3887e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3887ec:
    // 0x3887ec: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x3887ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_3887f0:
    // 0x3887f0: 0xc0e1ad4  jal         func_386B50
label_3887f4:
    if (ctx->pc == 0x3887F4u) {
        ctx->pc = 0x3887F4u;
            // 0x3887f4: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3887F8u;
        goto label_3887f8;
    }
    ctx->pc = 0x3887F0u;
    SET_GPR_U32(ctx, 31, 0x3887F8u);
    ctx->pc = 0x3887F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3887F0u;
            // 0x3887f4: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887F8u; }
        if (ctx->pc != 0x3887F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3887F8u; }
        if (ctx->pc != 0x3887F8u) { return; }
    }
    ctx->pc = 0x3887F8u;
label_3887f8:
    // 0x3887f8: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x3887f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3887fc:
    // 0x3887fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_388800:
    // 0x388800: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x388800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_388804:
    // 0x388804: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x388804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_388808:
    // 0x388808: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x388808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38880c:
    // 0x38880c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x38880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_388810:
    // 0x388810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x388810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_388814:
    // 0x388814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x388814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_388818:
    // 0x388818: 0x0  nop
    ctx->pc = 0x388818u;
    // NOP
label_38881c:
    // 0x38881c: 0xae04012c  sw          $a0, 0x12C($s0)
    ctx->pc = 0x38881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 4));
label_388820:
    // 0x388820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x388820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388824:
    // 0x388824: 0x8c426118  lw          $v0, 0x6118($v0)
    ctx->pc = 0x388824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_388828:
    // 0x388828: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x388828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_38882c:
    // 0x38882c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x38882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388830:
    // 0x388830: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x388830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_388834:
    // 0x388834: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x388834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_388838:
    // 0x388838: 0xc6020108  lwc1        $f2, 0x108($s0)
    ctx->pc = 0x388838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38883c:
    // 0x38883c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388840:
    // 0x388840: 0xc6050134  lwc1        $f5, 0x134($s0)
    ctx->pc = 0x388840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_388844:
    // 0x388844: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x388844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_388848:
    // 0x388848: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x388848u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_38884c:
    // 0x38884c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x38884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388850:
    // 0x388850: 0x4605211c  madd.s      $f4, $f4, $f5
    ctx->pc = 0x388850u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_388854:
    // 0x388854: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x388854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388858:
    // 0x388858: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x388858u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_38885c:
    // 0x38885c: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x38885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388860:
    // 0x388860: 0x4605089c  madd.s      $f2, $f1, $f5
    ctx->pc = 0x388860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_388864:
    // 0x388864: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x388864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388868:
    // 0x388868: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x388868u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_38886c:
    // 0x38886c: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x38886cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_388870:
    // 0x388870: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x388870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_388874:
    // 0x388874: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x388874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_388878:
    // 0x388878: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x388878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_38887c:
    // 0x38887c: 0xc089290  jal         func_224A40
label_388880:
    if (ctx->pc == 0x388880u) {
        ctx->pc = 0x388880u;
            // 0x388880: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x388884u;
        goto label_388884;
    }
    ctx->pc = 0x38887Cu;
    SET_GPR_U32(ctx, 31, 0x388884u);
    ctx->pc = 0x388880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38887Cu;
            // 0x388880: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388884u; }
        if (ctx->pc != 0x388884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388884u; }
        if (ctx->pc != 0x388884u) { return; }
    }
    ctx->pc = 0x388884u;
label_388884:
    // 0x388884: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x388884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388888:
    // 0x388888: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x388888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38888c:
    // 0x38888c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x38888cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_388890:
    // 0x388890: 0xc04cc70  jal         func_1331C0
label_388894:
    if (ctx->pc == 0x388894u) {
        ctx->pc = 0x388894u;
            // 0x388894: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x388898u;
        goto label_388898;
    }
    ctx->pc = 0x388890u;
    SET_GPR_U32(ctx, 31, 0x388898u);
    ctx->pc = 0x388894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388890u;
            // 0x388894: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388898u; }
        if (ctx->pc != 0x388898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388898u; }
        if (ctx->pc != 0x388898u) { return; }
    }
    ctx->pc = 0x388898u;
label_388898:
    // 0x388898: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x388898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38889c:
    // 0x38889c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x38889cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_3888a0:
    // 0x3888a0: 0xc04cbe0  jal         func_132F80
label_3888a4:
    if (ctx->pc == 0x3888A4u) {
        ctx->pc = 0x3888A4u;
            // 0x3888a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3888A8u;
        goto label_3888a8;
    }
    ctx->pc = 0x3888A0u;
    SET_GPR_U32(ctx, 31, 0x3888A8u);
    ctx->pc = 0x3888A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3888A0u;
            // 0x3888a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3888A8u; }
        if (ctx->pc != 0x3888A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3888A8u; }
        if (ctx->pc != 0x3888A8u) { return; }
    }
    ctx->pc = 0x3888A8u;
label_3888a8:
    // 0x3888a8: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x3888a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3888ac:
    // 0x3888ac: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x3888acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3888b0:
    // 0x3888b0: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x3888b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3888b4:
    // 0x3888b4: 0xc04cbd8  jal         func_132F60
label_3888b8:
    if (ctx->pc == 0x3888B8u) {
        ctx->pc = 0x3888B8u;
            // 0x3888b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3888BCu;
        goto label_3888bc;
    }
    ctx->pc = 0x3888B4u;
    SET_GPR_U32(ctx, 31, 0x3888BCu);
    ctx->pc = 0x3888B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3888B4u;
            // 0x3888b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3888BCu; }
        if (ctx->pc != 0x3888BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3888BCu; }
        if (ctx->pc != 0x3888BCu) { return; }
    }
    ctx->pc = 0x3888BCu;
label_3888bc:
    // 0x3888bc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x3888bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3888c0:
    // 0x3888c0: 0x8c6302e0  lw          $v1, 0x2E0($v1)
    ctx->pc = 0x3888c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_3888c4:
    // 0x3888c4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3888c8:
    if (ctx->pc == 0x3888C8u) {
        ctx->pc = 0x3888C8u;
            // 0x3888c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3888CCu;
        goto label_3888cc;
    }
    ctx->pc = 0x3888C4u;
    {
        const bool branch_taken_0x3888c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3888c4) {
            ctx->pc = 0x3888C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3888C4u;
            // 0x3888c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3888D8u;
            goto label_3888d8;
        }
    }
    ctx->pc = 0x3888CCu;
label_3888cc:
    // 0x3888cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3888ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3888d0:
    // 0x3888d0: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x3888d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_3888d4:
    // 0x3888d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3888d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3888d8:
    // 0x3888d8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x3888d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_3888dc:
    // 0x3888dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3888dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3888e0:
    // 0x3888e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3888e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3888e4:
    // 0x3888e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3888e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3888e8:
    // 0x3888e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3888e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3888ec:
    // 0x3888ec: 0x3e00008  jr          $ra
label_3888f0:
    if (ctx->pc == 0x3888F0u) {
        ctx->pc = 0x3888F0u;
            // 0x3888f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3888F4u;
        goto label_3888f4;
    }
    ctx->pc = 0x3888ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3888F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3888ECu;
            // 0x3888f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3888F4u;
label_3888f4:
    // 0x3888f4: 0x0  nop
    ctx->pc = 0x3888f4u;
    // NOP
label_3888f8:
    // 0x3888f8: 0x0  nop
    ctx->pc = 0x3888f8u;
    // NOP
label_3888fc:
    // 0x3888fc: 0x0  nop
    ctx->pc = 0x3888fcu;
    // NOP
}
