#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00477CA0
// Address: 0x477ca0 - 0x4783f0
void sub_00477CA0_0x477ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477CA0_0x477ca0");
#endif

    switch (ctx->pc) {
        case 0x477ca0u: goto label_477ca0;
        case 0x477ca4u: goto label_477ca4;
        case 0x477ca8u: goto label_477ca8;
        case 0x477cacu: goto label_477cac;
        case 0x477cb0u: goto label_477cb0;
        case 0x477cb4u: goto label_477cb4;
        case 0x477cb8u: goto label_477cb8;
        case 0x477cbcu: goto label_477cbc;
        case 0x477cc0u: goto label_477cc0;
        case 0x477cc4u: goto label_477cc4;
        case 0x477cc8u: goto label_477cc8;
        case 0x477cccu: goto label_477ccc;
        case 0x477cd0u: goto label_477cd0;
        case 0x477cd4u: goto label_477cd4;
        case 0x477cd8u: goto label_477cd8;
        case 0x477cdcu: goto label_477cdc;
        case 0x477ce0u: goto label_477ce0;
        case 0x477ce4u: goto label_477ce4;
        case 0x477ce8u: goto label_477ce8;
        case 0x477cecu: goto label_477cec;
        case 0x477cf0u: goto label_477cf0;
        case 0x477cf4u: goto label_477cf4;
        case 0x477cf8u: goto label_477cf8;
        case 0x477cfcu: goto label_477cfc;
        case 0x477d00u: goto label_477d00;
        case 0x477d04u: goto label_477d04;
        case 0x477d08u: goto label_477d08;
        case 0x477d0cu: goto label_477d0c;
        case 0x477d10u: goto label_477d10;
        case 0x477d14u: goto label_477d14;
        case 0x477d18u: goto label_477d18;
        case 0x477d1cu: goto label_477d1c;
        case 0x477d20u: goto label_477d20;
        case 0x477d24u: goto label_477d24;
        case 0x477d28u: goto label_477d28;
        case 0x477d2cu: goto label_477d2c;
        case 0x477d30u: goto label_477d30;
        case 0x477d34u: goto label_477d34;
        case 0x477d38u: goto label_477d38;
        case 0x477d3cu: goto label_477d3c;
        case 0x477d40u: goto label_477d40;
        case 0x477d44u: goto label_477d44;
        case 0x477d48u: goto label_477d48;
        case 0x477d4cu: goto label_477d4c;
        case 0x477d50u: goto label_477d50;
        case 0x477d54u: goto label_477d54;
        case 0x477d58u: goto label_477d58;
        case 0x477d5cu: goto label_477d5c;
        case 0x477d60u: goto label_477d60;
        case 0x477d64u: goto label_477d64;
        case 0x477d68u: goto label_477d68;
        case 0x477d6cu: goto label_477d6c;
        case 0x477d70u: goto label_477d70;
        case 0x477d74u: goto label_477d74;
        case 0x477d78u: goto label_477d78;
        case 0x477d7cu: goto label_477d7c;
        case 0x477d80u: goto label_477d80;
        case 0x477d84u: goto label_477d84;
        case 0x477d88u: goto label_477d88;
        case 0x477d8cu: goto label_477d8c;
        case 0x477d90u: goto label_477d90;
        case 0x477d94u: goto label_477d94;
        case 0x477d98u: goto label_477d98;
        case 0x477d9cu: goto label_477d9c;
        case 0x477da0u: goto label_477da0;
        case 0x477da4u: goto label_477da4;
        case 0x477da8u: goto label_477da8;
        case 0x477dacu: goto label_477dac;
        case 0x477db0u: goto label_477db0;
        case 0x477db4u: goto label_477db4;
        case 0x477db8u: goto label_477db8;
        case 0x477dbcu: goto label_477dbc;
        case 0x477dc0u: goto label_477dc0;
        case 0x477dc4u: goto label_477dc4;
        case 0x477dc8u: goto label_477dc8;
        case 0x477dccu: goto label_477dcc;
        case 0x477dd0u: goto label_477dd0;
        case 0x477dd4u: goto label_477dd4;
        case 0x477dd8u: goto label_477dd8;
        case 0x477ddcu: goto label_477ddc;
        case 0x477de0u: goto label_477de0;
        case 0x477de4u: goto label_477de4;
        case 0x477de8u: goto label_477de8;
        case 0x477decu: goto label_477dec;
        case 0x477df0u: goto label_477df0;
        case 0x477df4u: goto label_477df4;
        case 0x477df8u: goto label_477df8;
        case 0x477dfcu: goto label_477dfc;
        case 0x477e00u: goto label_477e00;
        case 0x477e04u: goto label_477e04;
        case 0x477e08u: goto label_477e08;
        case 0x477e0cu: goto label_477e0c;
        case 0x477e10u: goto label_477e10;
        case 0x477e14u: goto label_477e14;
        case 0x477e18u: goto label_477e18;
        case 0x477e1cu: goto label_477e1c;
        case 0x477e20u: goto label_477e20;
        case 0x477e24u: goto label_477e24;
        case 0x477e28u: goto label_477e28;
        case 0x477e2cu: goto label_477e2c;
        case 0x477e30u: goto label_477e30;
        case 0x477e34u: goto label_477e34;
        case 0x477e38u: goto label_477e38;
        case 0x477e3cu: goto label_477e3c;
        case 0x477e40u: goto label_477e40;
        case 0x477e44u: goto label_477e44;
        case 0x477e48u: goto label_477e48;
        case 0x477e4cu: goto label_477e4c;
        case 0x477e50u: goto label_477e50;
        case 0x477e54u: goto label_477e54;
        case 0x477e58u: goto label_477e58;
        case 0x477e5cu: goto label_477e5c;
        case 0x477e60u: goto label_477e60;
        case 0x477e64u: goto label_477e64;
        case 0x477e68u: goto label_477e68;
        case 0x477e6cu: goto label_477e6c;
        case 0x477e70u: goto label_477e70;
        case 0x477e74u: goto label_477e74;
        case 0x477e78u: goto label_477e78;
        case 0x477e7cu: goto label_477e7c;
        case 0x477e80u: goto label_477e80;
        case 0x477e84u: goto label_477e84;
        case 0x477e88u: goto label_477e88;
        case 0x477e8cu: goto label_477e8c;
        case 0x477e90u: goto label_477e90;
        case 0x477e94u: goto label_477e94;
        case 0x477e98u: goto label_477e98;
        case 0x477e9cu: goto label_477e9c;
        case 0x477ea0u: goto label_477ea0;
        case 0x477ea4u: goto label_477ea4;
        case 0x477ea8u: goto label_477ea8;
        case 0x477eacu: goto label_477eac;
        case 0x477eb0u: goto label_477eb0;
        case 0x477eb4u: goto label_477eb4;
        case 0x477eb8u: goto label_477eb8;
        case 0x477ebcu: goto label_477ebc;
        case 0x477ec0u: goto label_477ec0;
        case 0x477ec4u: goto label_477ec4;
        case 0x477ec8u: goto label_477ec8;
        case 0x477eccu: goto label_477ecc;
        case 0x477ed0u: goto label_477ed0;
        case 0x477ed4u: goto label_477ed4;
        case 0x477ed8u: goto label_477ed8;
        case 0x477edcu: goto label_477edc;
        case 0x477ee0u: goto label_477ee0;
        case 0x477ee4u: goto label_477ee4;
        case 0x477ee8u: goto label_477ee8;
        case 0x477eecu: goto label_477eec;
        case 0x477ef0u: goto label_477ef0;
        case 0x477ef4u: goto label_477ef4;
        case 0x477ef8u: goto label_477ef8;
        case 0x477efcu: goto label_477efc;
        case 0x477f00u: goto label_477f00;
        case 0x477f04u: goto label_477f04;
        case 0x477f08u: goto label_477f08;
        case 0x477f0cu: goto label_477f0c;
        case 0x477f10u: goto label_477f10;
        case 0x477f14u: goto label_477f14;
        case 0x477f18u: goto label_477f18;
        case 0x477f1cu: goto label_477f1c;
        case 0x477f20u: goto label_477f20;
        case 0x477f24u: goto label_477f24;
        case 0x477f28u: goto label_477f28;
        case 0x477f2cu: goto label_477f2c;
        case 0x477f30u: goto label_477f30;
        case 0x477f34u: goto label_477f34;
        case 0x477f38u: goto label_477f38;
        case 0x477f3cu: goto label_477f3c;
        case 0x477f40u: goto label_477f40;
        case 0x477f44u: goto label_477f44;
        case 0x477f48u: goto label_477f48;
        case 0x477f4cu: goto label_477f4c;
        case 0x477f50u: goto label_477f50;
        case 0x477f54u: goto label_477f54;
        case 0x477f58u: goto label_477f58;
        case 0x477f5cu: goto label_477f5c;
        case 0x477f60u: goto label_477f60;
        case 0x477f64u: goto label_477f64;
        case 0x477f68u: goto label_477f68;
        case 0x477f6cu: goto label_477f6c;
        case 0x477f70u: goto label_477f70;
        case 0x477f74u: goto label_477f74;
        case 0x477f78u: goto label_477f78;
        case 0x477f7cu: goto label_477f7c;
        case 0x477f80u: goto label_477f80;
        case 0x477f84u: goto label_477f84;
        case 0x477f88u: goto label_477f88;
        case 0x477f8cu: goto label_477f8c;
        case 0x477f90u: goto label_477f90;
        case 0x477f94u: goto label_477f94;
        case 0x477f98u: goto label_477f98;
        case 0x477f9cu: goto label_477f9c;
        case 0x477fa0u: goto label_477fa0;
        case 0x477fa4u: goto label_477fa4;
        case 0x477fa8u: goto label_477fa8;
        case 0x477facu: goto label_477fac;
        case 0x477fb0u: goto label_477fb0;
        case 0x477fb4u: goto label_477fb4;
        case 0x477fb8u: goto label_477fb8;
        case 0x477fbcu: goto label_477fbc;
        case 0x477fc0u: goto label_477fc0;
        case 0x477fc4u: goto label_477fc4;
        case 0x477fc8u: goto label_477fc8;
        case 0x477fccu: goto label_477fcc;
        case 0x477fd0u: goto label_477fd0;
        case 0x477fd4u: goto label_477fd4;
        case 0x477fd8u: goto label_477fd8;
        case 0x477fdcu: goto label_477fdc;
        case 0x477fe0u: goto label_477fe0;
        case 0x477fe4u: goto label_477fe4;
        case 0x477fe8u: goto label_477fe8;
        case 0x477fecu: goto label_477fec;
        case 0x477ff0u: goto label_477ff0;
        case 0x477ff4u: goto label_477ff4;
        case 0x477ff8u: goto label_477ff8;
        case 0x477ffcu: goto label_477ffc;
        case 0x478000u: goto label_478000;
        case 0x478004u: goto label_478004;
        case 0x478008u: goto label_478008;
        case 0x47800cu: goto label_47800c;
        case 0x478010u: goto label_478010;
        case 0x478014u: goto label_478014;
        case 0x478018u: goto label_478018;
        case 0x47801cu: goto label_47801c;
        case 0x478020u: goto label_478020;
        case 0x478024u: goto label_478024;
        case 0x478028u: goto label_478028;
        case 0x47802cu: goto label_47802c;
        case 0x478030u: goto label_478030;
        case 0x478034u: goto label_478034;
        case 0x478038u: goto label_478038;
        case 0x47803cu: goto label_47803c;
        case 0x478040u: goto label_478040;
        case 0x478044u: goto label_478044;
        case 0x478048u: goto label_478048;
        case 0x47804cu: goto label_47804c;
        case 0x478050u: goto label_478050;
        case 0x478054u: goto label_478054;
        case 0x478058u: goto label_478058;
        case 0x47805cu: goto label_47805c;
        case 0x478060u: goto label_478060;
        case 0x478064u: goto label_478064;
        case 0x478068u: goto label_478068;
        case 0x47806cu: goto label_47806c;
        case 0x478070u: goto label_478070;
        case 0x478074u: goto label_478074;
        case 0x478078u: goto label_478078;
        case 0x47807cu: goto label_47807c;
        case 0x478080u: goto label_478080;
        case 0x478084u: goto label_478084;
        case 0x478088u: goto label_478088;
        case 0x47808cu: goto label_47808c;
        case 0x478090u: goto label_478090;
        case 0x478094u: goto label_478094;
        case 0x478098u: goto label_478098;
        case 0x47809cu: goto label_47809c;
        case 0x4780a0u: goto label_4780a0;
        case 0x4780a4u: goto label_4780a4;
        case 0x4780a8u: goto label_4780a8;
        case 0x4780acu: goto label_4780ac;
        case 0x4780b0u: goto label_4780b0;
        case 0x4780b4u: goto label_4780b4;
        case 0x4780b8u: goto label_4780b8;
        case 0x4780bcu: goto label_4780bc;
        case 0x4780c0u: goto label_4780c0;
        case 0x4780c4u: goto label_4780c4;
        case 0x4780c8u: goto label_4780c8;
        case 0x4780ccu: goto label_4780cc;
        case 0x4780d0u: goto label_4780d0;
        case 0x4780d4u: goto label_4780d4;
        case 0x4780d8u: goto label_4780d8;
        case 0x4780dcu: goto label_4780dc;
        case 0x4780e0u: goto label_4780e0;
        case 0x4780e4u: goto label_4780e4;
        case 0x4780e8u: goto label_4780e8;
        case 0x4780ecu: goto label_4780ec;
        case 0x4780f0u: goto label_4780f0;
        case 0x4780f4u: goto label_4780f4;
        case 0x4780f8u: goto label_4780f8;
        case 0x4780fcu: goto label_4780fc;
        case 0x478100u: goto label_478100;
        case 0x478104u: goto label_478104;
        case 0x478108u: goto label_478108;
        case 0x47810cu: goto label_47810c;
        case 0x478110u: goto label_478110;
        case 0x478114u: goto label_478114;
        case 0x478118u: goto label_478118;
        case 0x47811cu: goto label_47811c;
        case 0x478120u: goto label_478120;
        case 0x478124u: goto label_478124;
        case 0x478128u: goto label_478128;
        case 0x47812cu: goto label_47812c;
        case 0x478130u: goto label_478130;
        case 0x478134u: goto label_478134;
        case 0x478138u: goto label_478138;
        case 0x47813cu: goto label_47813c;
        case 0x478140u: goto label_478140;
        case 0x478144u: goto label_478144;
        case 0x478148u: goto label_478148;
        case 0x47814cu: goto label_47814c;
        case 0x478150u: goto label_478150;
        case 0x478154u: goto label_478154;
        case 0x478158u: goto label_478158;
        case 0x47815cu: goto label_47815c;
        case 0x478160u: goto label_478160;
        case 0x478164u: goto label_478164;
        case 0x478168u: goto label_478168;
        case 0x47816cu: goto label_47816c;
        case 0x478170u: goto label_478170;
        case 0x478174u: goto label_478174;
        case 0x478178u: goto label_478178;
        case 0x47817cu: goto label_47817c;
        case 0x478180u: goto label_478180;
        case 0x478184u: goto label_478184;
        case 0x478188u: goto label_478188;
        case 0x47818cu: goto label_47818c;
        case 0x478190u: goto label_478190;
        case 0x478194u: goto label_478194;
        case 0x478198u: goto label_478198;
        case 0x47819cu: goto label_47819c;
        case 0x4781a0u: goto label_4781a0;
        case 0x4781a4u: goto label_4781a4;
        case 0x4781a8u: goto label_4781a8;
        case 0x4781acu: goto label_4781ac;
        case 0x4781b0u: goto label_4781b0;
        case 0x4781b4u: goto label_4781b4;
        case 0x4781b8u: goto label_4781b8;
        case 0x4781bcu: goto label_4781bc;
        case 0x4781c0u: goto label_4781c0;
        case 0x4781c4u: goto label_4781c4;
        case 0x4781c8u: goto label_4781c8;
        case 0x4781ccu: goto label_4781cc;
        case 0x4781d0u: goto label_4781d0;
        case 0x4781d4u: goto label_4781d4;
        case 0x4781d8u: goto label_4781d8;
        case 0x4781dcu: goto label_4781dc;
        case 0x4781e0u: goto label_4781e0;
        case 0x4781e4u: goto label_4781e4;
        case 0x4781e8u: goto label_4781e8;
        case 0x4781ecu: goto label_4781ec;
        case 0x4781f0u: goto label_4781f0;
        case 0x4781f4u: goto label_4781f4;
        case 0x4781f8u: goto label_4781f8;
        case 0x4781fcu: goto label_4781fc;
        case 0x478200u: goto label_478200;
        case 0x478204u: goto label_478204;
        case 0x478208u: goto label_478208;
        case 0x47820cu: goto label_47820c;
        case 0x478210u: goto label_478210;
        case 0x478214u: goto label_478214;
        case 0x478218u: goto label_478218;
        case 0x47821cu: goto label_47821c;
        case 0x478220u: goto label_478220;
        case 0x478224u: goto label_478224;
        case 0x478228u: goto label_478228;
        case 0x47822cu: goto label_47822c;
        case 0x478230u: goto label_478230;
        case 0x478234u: goto label_478234;
        case 0x478238u: goto label_478238;
        case 0x47823cu: goto label_47823c;
        case 0x478240u: goto label_478240;
        case 0x478244u: goto label_478244;
        case 0x478248u: goto label_478248;
        case 0x47824cu: goto label_47824c;
        case 0x478250u: goto label_478250;
        case 0x478254u: goto label_478254;
        case 0x478258u: goto label_478258;
        case 0x47825cu: goto label_47825c;
        case 0x478260u: goto label_478260;
        case 0x478264u: goto label_478264;
        case 0x478268u: goto label_478268;
        case 0x47826cu: goto label_47826c;
        case 0x478270u: goto label_478270;
        case 0x478274u: goto label_478274;
        case 0x478278u: goto label_478278;
        case 0x47827cu: goto label_47827c;
        case 0x478280u: goto label_478280;
        case 0x478284u: goto label_478284;
        case 0x478288u: goto label_478288;
        case 0x47828cu: goto label_47828c;
        case 0x478290u: goto label_478290;
        case 0x478294u: goto label_478294;
        case 0x478298u: goto label_478298;
        case 0x47829cu: goto label_47829c;
        case 0x4782a0u: goto label_4782a0;
        case 0x4782a4u: goto label_4782a4;
        case 0x4782a8u: goto label_4782a8;
        case 0x4782acu: goto label_4782ac;
        case 0x4782b0u: goto label_4782b0;
        case 0x4782b4u: goto label_4782b4;
        case 0x4782b8u: goto label_4782b8;
        case 0x4782bcu: goto label_4782bc;
        case 0x4782c0u: goto label_4782c0;
        case 0x4782c4u: goto label_4782c4;
        case 0x4782c8u: goto label_4782c8;
        case 0x4782ccu: goto label_4782cc;
        case 0x4782d0u: goto label_4782d0;
        case 0x4782d4u: goto label_4782d4;
        case 0x4782d8u: goto label_4782d8;
        case 0x4782dcu: goto label_4782dc;
        case 0x4782e0u: goto label_4782e0;
        case 0x4782e4u: goto label_4782e4;
        case 0x4782e8u: goto label_4782e8;
        case 0x4782ecu: goto label_4782ec;
        case 0x4782f0u: goto label_4782f0;
        case 0x4782f4u: goto label_4782f4;
        case 0x4782f8u: goto label_4782f8;
        case 0x4782fcu: goto label_4782fc;
        case 0x478300u: goto label_478300;
        case 0x478304u: goto label_478304;
        case 0x478308u: goto label_478308;
        case 0x47830cu: goto label_47830c;
        case 0x478310u: goto label_478310;
        case 0x478314u: goto label_478314;
        case 0x478318u: goto label_478318;
        case 0x47831cu: goto label_47831c;
        case 0x478320u: goto label_478320;
        case 0x478324u: goto label_478324;
        case 0x478328u: goto label_478328;
        case 0x47832cu: goto label_47832c;
        case 0x478330u: goto label_478330;
        case 0x478334u: goto label_478334;
        case 0x478338u: goto label_478338;
        case 0x47833cu: goto label_47833c;
        case 0x478340u: goto label_478340;
        case 0x478344u: goto label_478344;
        case 0x478348u: goto label_478348;
        case 0x47834cu: goto label_47834c;
        case 0x478350u: goto label_478350;
        case 0x478354u: goto label_478354;
        case 0x478358u: goto label_478358;
        case 0x47835cu: goto label_47835c;
        case 0x478360u: goto label_478360;
        case 0x478364u: goto label_478364;
        case 0x478368u: goto label_478368;
        case 0x47836cu: goto label_47836c;
        case 0x478370u: goto label_478370;
        case 0x478374u: goto label_478374;
        case 0x478378u: goto label_478378;
        case 0x47837cu: goto label_47837c;
        case 0x478380u: goto label_478380;
        case 0x478384u: goto label_478384;
        case 0x478388u: goto label_478388;
        case 0x47838cu: goto label_47838c;
        case 0x478390u: goto label_478390;
        case 0x478394u: goto label_478394;
        case 0x478398u: goto label_478398;
        case 0x47839cu: goto label_47839c;
        case 0x4783a0u: goto label_4783a0;
        case 0x4783a4u: goto label_4783a4;
        case 0x4783a8u: goto label_4783a8;
        case 0x4783acu: goto label_4783ac;
        case 0x4783b0u: goto label_4783b0;
        case 0x4783b4u: goto label_4783b4;
        case 0x4783b8u: goto label_4783b8;
        case 0x4783bcu: goto label_4783bc;
        case 0x4783c0u: goto label_4783c0;
        case 0x4783c4u: goto label_4783c4;
        case 0x4783c8u: goto label_4783c8;
        case 0x4783ccu: goto label_4783cc;
        case 0x4783d0u: goto label_4783d0;
        case 0x4783d4u: goto label_4783d4;
        case 0x4783d8u: goto label_4783d8;
        case 0x4783dcu: goto label_4783dc;
        case 0x4783e0u: goto label_4783e0;
        case 0x4783e4u: goto label_4783e4;
        case 0x4783e8u: goto label_4783e8;
        case 0x4783ecu: goto label_4783ec;
        default: break;
    }

    ctx->pc = 0x477ca0u;

label_477ca0:
    // 0x477ca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x477ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_477ca4:
    // 0x477ca4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x477ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_477ca8:
    // 0x477ca8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x477ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_477cac:
    // 0x477cac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x477cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_477cb0:
    // 0x477cb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x477cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_477cb4:
    // 0x477cb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x477cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_477cb8:
    // 0x477cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x477cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_477cbc:
    // 0x477cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x477cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_477cc0:
    // 0x477cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x477cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_477cc4:
    // 0x477cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x477cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_477cc8:
    // 0x477cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_477ccc:
    // 0x477ccc: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x477cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_477cd0:
    // 0x477cd0: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x477cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
label_477cd4:
    // 0x477cd4: 0x546001bb  bnel        $v1, $zero, . + 4 + (0x1BB << 2)
label_477cd8:
    if (ctx->pc == 0x477CD8u) {
        ctx->pc = 0x477CD8u;
            // 0x477cd8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x477CDCu;
        goto label_477cdc;
    }
    ctx->pc = 0x477CD4u;
    {
        const bool branch_taken_0x477cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x477cd4) {
            ctx->pc = 0x477CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477CD4u;
            // 0x477cd8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4783C4u;
            goto label_4783c4;
        }
    }
    ctx->pc = 0x477CDCu;
label_477cdc:
    // 0x477cdc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x477cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_477ce0:
    // 0x477ce0: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x477ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
label_477ce4:
    // 0x477ce4: 0xc460f31c  lwc1        $f0, -0xCE4($v1)
    ctx->pc = 0x477ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477ce8:
    // 0x477ce8: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x477ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_477cec:
    // 0x477cec: 0x46003032  c.eq.s      $f6, $f0
    ctx->pc = 0x477cecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477cf0:
    // 0x477cf0: 0x450101b3  bc1t        . + 4 + (0x1B3 << 2)
label_477cf4:
    if (ctx->pc == 0x477CF4u) {
        ctx->pc = 0x477CF4u;
            // 0x477cf4: 0x2694f300  addiu       $s4, $s4, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963968));
        ctx->pc = 0x477CF8u;
        goto label_477cf8;
    }
    ctx->pc = 0x477CF0u;
    {
        const bool branch_taken_0x477cf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x477CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477CF0u;
            // 0x477cf4: 0x2694f300  addiu       $s4, $s4, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477cf0) {
            ctx->pc = 0x4783C0u;
            goto label_4783c0;
        }
    }
    ctx->pc = 0x477CF8u;
label_477cf8:
    // 0x477cf8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x477cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_477cfc:
    // 0x477cfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x477cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_477d00:
    // 0x477d00: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x477d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_477d04:
    // 0x477d04: 0x8c470eac  lw          $a3, 0xEAC($v0)
    ctx->pc = 0x477d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_477d08:
    // 0x477d08: 0x46061882  mul.s       $f2, $f3, $f6
    ctx->pc = 0x477d08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_477d0c:
    // 0x477d0c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x477d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_477d10:
    // 0x477d10: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x477d10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_477d14:
    // 0x477d14: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x477d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
label_477d18:
    // 0x477d18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x477d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_477d1c:
    // 0x477d1c: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x477d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
label_477d20:
    // 0x477d20: 0x8ce30080  lw          $v1, 0x80($a3)
    ctx->pc = 0x477d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_477d24:
    // 0x477d24: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x477d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477d28:
    // 0x477d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477d2c:
    // 0x477d2c: 0x0  nop
    ctx->pc = 0x477d2cu;
    // NOP
label_477d30:
    // 0x477d30: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x477d30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_477d34:
    // 0x477d34: 0x0  nop
    ctx->pc = 0x477d34u;
    // NOP
label_477d38:
    // 0x477d38: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x477d38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_477d3c:
    // 0x477d3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x477d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477d40:
    // 0x477d40: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_477d44:
    if (ctx->pc == 0x477D44u) {
        ctx->pc = 0x477D44u;
            // 0x477d44: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x477D48u;
        goto label_477d48;
    }
    ctx->pc = 0x477D40u;
    {
        const bool branch_taken_0x477d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477d40) {
            ctx->pc = 0x477D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477D40u;
            // 0x477d44: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x477D58u;
            goto label_477d58;
        }
    }
    ctx->pc = 0x477D48u;
label_477d48:
    // 0x477d48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477d4c:
    // 0x477d4c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x477d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_477d50:
    // 0x477d50: 0x10000007  b           . + 4 + (0x7 << 2)
label_477d54:
    if (ctx->pc == 0x477D54u) {
        ctx->pc = 0x477D54u;
            // 0x477d54: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477D58u;
        goto label_477d58;
    }
    ctx->pc = 0x477D50u;
    {
        const bool branch_taken_0x477d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477D50u;
            // 0x477d54: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477d50) {
            ctx->pc = 0x477D70u;
            goto label_477d70;
        }
    }
    ctx->pc = 0x477D58u;
label_477d58:
    // 0x477d58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x477d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_477d5c:
    // 0x477d5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477d60:
    // 0x477d60: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x477d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_477d64:
    // 0x477d64: 0x0  nop
    ctx->pc = 0x477d64u;
    // NOP
label_477d68:
    // 0x477d68: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x477d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_477d6c:
    // 0x477d6c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x477d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_477d70:
    // 0x477d70: 0x94a20028  lhu         $v0, 0x28($a1)
    ctx->pc = 0x477d70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_477d74:
    // 0x477d74: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x477d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_477d78:
    // 0x477d78: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x477d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_477d7c:
    // 0x477d7c: 0x90b70026  lbu         $s7, 0x26($a1)
    ctx->pc = 0x477d7cu;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 38)));
label_477d80:
    // 0x477d80: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x477d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_477d84:
    // 0x477d84: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x477d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_477d88:
    // 0x477d88: 0x90be0027  lbu         $fp, 0x27($a1)
    ctx->pc = 0x477d88u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
label_477d8c:
    // 0x477d8c: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x477d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_477d90:
    // 0x477d90: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
label_477d94:
    if (ctx->pc == 0x477D94u) {
        ctx->pc = 0x477D94u;
            // 0x477d94: 0x84b1001e  lh          $s1, 0x1E($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
        ctx->pc = 0x477D98u;
        goto label_477d98;
    }
    ctx->pc = 0x477D90u;
    {
        const bool branch_taken_0x477d90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x477D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477D90u;
            // 0x477d94: 0x84b1001e  lh          $s1, 0x1E($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477d90) {
            ctx->pc = 0x477DFCu;
            goto label_477dfc;
        }
    }
    ctx->pc = 0x477D98u;
label_477d98:
    // 0x477d98: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x477d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477d9c:
    // 0x477d9c: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x477d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477da0:
    // 0x477da0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x477da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_477da4:
    // 0x477da4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x477da4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_477da8:
    // 0x477da8: 0x0  nop
    ctx->pc = 0x477da8u;
    // NOP
label_477dac:
    // 0x477dac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x477dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_477db0:
    // 0x477db0: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x477db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_477db4:
    // 0x477db4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x477db4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_477db8:
    // 0x477db8: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x477db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_477dbc:
    // 0x477dbc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477dbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477dc0:
    // 0x477dc0: 0x0  nop
    ctx->pc = 0x477dc0u;
    // NOP
label_477dc4:
    // 0x477dc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x477dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477dc8:
    // 0x477dc8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_477dcc:
    if (ctx->pc == 0x477DCCu) {
        ctx->pc = 0x477DCCu;
            // 0x477dcc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x477DD0u;
        goto label_477dd0;
    }
    ctx->pc = 0x477DC8u;
    {
        const bool branch_taken_0x477dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477dc8) {
            ctx->pc = 0x477DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477DC8u;
            // 0x477dcc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x477DE0u;
            goto label_477de0;
        }
    }
    ctx->pc = 0x477DD0u;
label_477dd0:
    // 0x477dd0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477dd4:
    // 0x477dd4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x477dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_477dd8:
    // 0x477dd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_477ddc:
    if (ctx->pc == 0x477DDCu) {
        ctx->pc = 0x477DDCu;
            // 0x477ddc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477DE0u;
        goto label_477de0;
    }
    ctx->pc = 0x477DD8u;
    {
        const bool branch_taken_0x477dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477DD8u;
            // 0x477ddc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477dd8) {
            ctx->pc = 0x477DF8u;
            goto label_477df8;
        }
    }
    ctx->pc = 0x477DE0u;
label_477de0:
    // 0x477de0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x477de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_477de4:
    // 0x477de4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477de8:
    // 0x477de8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x477de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_477dec:
    // 0x477dec: 0x0  nop
    ctx->pc = 0x477decu;
    // NOP
label_477df0:
    // 0x477df0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x477df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_477df4:
    // 0x477df4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x477df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_477df8:
    // 0x477df8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x477df8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_477dfc:
    // 0x477dfc: 0x3c0540c0  lui         $a1, 0x40C0
    ctx->pc = 0x477dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16576 << 16));
label_477e00:
    // 0x477e00: 0x30c40100  andi        $a0, $a2, 0x100
    ctx->pc = 0x477e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_477e04:
    // 0x477e04: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477e04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477e08:
    // 0x477e08: 0x86860048  lh          $a2, 0x48($s4)
    ctx->pc = 0x477e08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_477e0c:
    // 0x477e0c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x477e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_477e10:
    // 0x477e10: 0x86850046  lh          $a1, 0x46($s4)
    ctx->pc = 0x477e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 70)));
label_477e14:
    // 0x477e14: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x477e14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_477e18:
    // 0x477e18: 0xc66100d8  lwc1        $f1, 0xD8($s3)
    ctx->pc = 0x477e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477e1c:
    // 0x477e1c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x477e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_477e20:
    // 0x477e20: 0xc6630178  lwc1        $f3, 0x178($s3)
    ctx->pc = 0x477e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_477e24:
    // 0x477e24: 0xc6620188  lwc1        $f2, 0x188($s3)
    ctx->pc = 0x477e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477e28:
    // 0x477e28: 0x4601015c  madd.s      $f5, $f0, $f1
    ctx->pc = 0x477e28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_477e2c:
    // 0x477e2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477e2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477e30:
    // 0x477e30: 0x0  nop
    ctx->pc = 0x477e30u;
    // NOP
label_477e34:
    // 0x477e34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x477e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477e38:
    // 0x477e38: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x477e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_477e3c:
    // 0x477e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477e40:
    // 0x477e40: 0x0  nop
    ctx->pc = 0x477e40u;
    // NOP
label_477e44:
    // 0x477e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x477e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_477e48:
    // 0x477e48: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x477e48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_477e4c:
    // 0x477e4c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x477e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_477e50:
    // 0x477e50: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x477e50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_477e54:
    // 0x477e54: 0x4606081d  msub.s      $f0, $f1, $f6
    ctx->pc = 0x477e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_477e58:
    // 0x477e58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477e5c:
    // 0x477e5c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x477e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_477e60:
    // 0x477e60: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_477e64:
    if (ctx->pc == 0x477E64u) {
        ctx->pc = 0x477E68u;
        goto label_477e68;
    }
    ctx->pc = 0x477E60u;
    {
        const bool branch_taken_0x477e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x477e60) {
            ctx->pc = 0x477E80u;
            goto label_477e80;
        }
    }
    ctx->pc = 0x477E68u;
label_477e68:
    // 0x477e68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x477e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_477e6c:
    // 0x477e6c: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x477e6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
label_477e70:
    // 0x477e70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x477e70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_477e74:
    // 0x477e74: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x477e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_477e78:
    // 0x477e78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x477e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_477e7c:
    // 0x477e7c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x477e7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_477e80:
    // 0x477e80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x477e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_477e84:
    // 0x477e84: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x477e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_477e88:
    // 0x477e88: 0xc0506ac  jal         func_141AB0
label_477e8c:
    if (ctx->pc == 0x477E8Cu) {
        ctx->pc = 0x477E8Cu;
            // 0x477e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x477E90u;
        goto label_477e90;
    }
    ctx->pc = 0x477E88u;
    SET_GPR_U32(ctx, 31, 0x477E90u);
    ctx->pc = 0x477E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477E88u;
            // 0x477e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477E90u; }
        if (ctx->pc != 0x477E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477E90u; }
        if (ctx->pc != 0x477E90u) { return; }
    }
    ctx->pc = 0x477E90u;
label_477e90:
    // 0x477e90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x477e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_477e94:
    // 0x477e94: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x477e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477e98:
    // 0x477e98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_477e9c:
    // 0x477e9c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x477e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_477ea0:
    // 0x477ea0: 0x320f809  jalr        $t9
label_477ea4:
    if (ctx->pc == 0x477EA4u) {
        ctx->pc = 0x477EA4u;
            // 0x477ea4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x477EA8u;
        goto label_477ea8;
    }
    ctx->pc = 0x477EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477EA8u);
        ctx->pc = 0x477EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477EA0u;
            // 0x477ea4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x477EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477EA8u; }
            if (ctx->pc != 0x477EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x477EA8u;
label_477ea8:
    // 0x477ea8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x477ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_477eac:
    // 0x477eac: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x477eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_477eb0:
    // 0x477eb0: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x477eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_477eb4:
    // 0x477eb4: 0x54fc2  srl         $t1, $a1, 31
    ctx->pc = 0x477eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_477eb8:
    // 0x477eb8: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x477eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_477ebc:
    // 0x477ebc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x477ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_477ec0:
    // 0x477ec0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x477ec0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477ec4:
    // 0x477ec4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x477ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_477ec8:
    // 0x477ec8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477ecc:
    // 0x477ecc: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x477eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477ed0:
    // 0x477ed0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477ed4:
    // 0x477ed4: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x477ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_477ed8:
    // 0x477ed8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x477ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_477edc:
    // 0x477edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477ee0:
    // 0x477ee0: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x477ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_477ee4:
    // 0x477ee4: 0x4010  mfhi        $t0
    ctx->pc = 0x477ee4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_477ee8:
    // 0x477ee8: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x477ee8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_477eec:
    // 0x477eec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477ef0:
    // 0x477ef0: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x477ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_477ef4:
    // 0x477ef4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477ef4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477ef8:
    // 0x477ef8: 0x0  nop
    ctx->pc = 0x477ef8u;
    // NOP
label_477efc:
    // 0x477efc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477f00:
    // 0x477f00: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x477f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_477f04:
    // 0x477f04: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x477f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_477f08:
    // 0x477f08: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x477f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_477f0c:
    // 0x477f0c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x477f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_477f10:
    // 0x477f10: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x477f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_477f14:
    // 0x477f14: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x477f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_477f18:
    // 0x477f18: 0x2658021  addu        $s0, $s3, $a1
    ctx->pc = 0x477f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_477f1c:
    // 0x477f1c: 0x2e84023  subu        $t0, $s7, $t0
    ctx->pc = 0x477f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_477f20:
    // 0x477f20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x477f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_477f24:
    // 0x477f24: 0x311700ff  andi        $s7, $t0, 0xFF
    ctx->pc = 0x477f24u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_477f28:
    // 0x477f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477f2c:
    // 0x477f2c: 0x0  nop
    ctx->pc = 0x477f2cu;
    // NOP
label_477f30:
    // 0x477f30: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477f34:
    // 0x477f34: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x477f34u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477f38:
    // 0x477f38: 0x0  nop
    ctx->pc = 0x477f38u;
    // NOP
label_477f3c:
    // 0x477f3c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477f40:
    // 0x477f40: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x477f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477f44:
    // 0x477f44: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x477f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477f48:
    // 0x477f48: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477f4c:
    // 0x477f4c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x477f4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_477f50:
    // 0x477f50: 0xc0bc284  jal         func_2F0A10
label_477f54:
    if (ctx->pc == 0x477F54u) {
        ctx->pc = 0x477F54u;
            // 0x477f54: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x477F58u;
        goto label_477f58;
    }
    ctx->pc = 0x477F50u;
    SET_GPR_U32(ctx, 31, 0x477F58u);
    ctx->pc = 0x477F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477F50u;
            // 0x477f54: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477F58u; }
        if (ctx->pc != 0x477F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477F58u; }
        if (ctx->pc != 0x477F58u) { return; }
    }
    ctx->pc = 0x477F58u;
label_477f58:
    // 0x477f58: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x477f58u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477f5c:
    // 0x477f5c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x477f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_477f60:
    // 0x477f60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x477f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477f64:
    // 0x477f64: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x477f64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_477f68:
    // 0x477f68: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x477f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_477f6c:
    // 0x477f6c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x477f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_477f70:
    // 0x477f70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x477f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_477f74:
    // 0x477f74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477f78:
    // 0x477f78: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x477f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_477f7c:
    // 0x477f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477f80:
    // 0x477f80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x477f80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477f84:
    // 0x477f84: 0x0  nop
    ctx->pc = 0x477f84u;
    // NOP
label_477f88:
    // 0x477f88: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477f8c:
    // 0x477f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477f90:
    // 0x477f90: 0x0  nop
    ctx->pc = 0x477f90u;
    // NOP
label_477f94:
    // 0x477f94: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477f98:
    // 0x477f98: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x477f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_477f9c:
    // 0x477f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x477f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477fa0:
    // 0x477fa0: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x477fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477fa4:
    // 0x477fa4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x477fa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_477fa8:
    // 0x477fa8: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x477fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_477fac:
    // 0x477fac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477fb0:
    // 0x477fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x477fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_477fb4:
    // 0x477fb4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x477fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_477fb8:
    // 0x477fb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477fbc:
    // 0x477fbc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477fc0:
    // 0x477fc0: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x477fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_477fc4:
    // 0x477fc4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x477fc4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477fc8:
    // 0x477fc8: 0x0  nop
    ctx->pc = 0x477fc8u;
    // NOP
label_477fcc:
    // 0x477fcc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477fd0:
    // 0x477fd0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x477fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477fd4:
    // 0x477fd4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x477fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477fd8:
    // 0x477fd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477fdc:
    // 0x477fdc: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x477fdcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_477fe0:
    // 0x477fe0: 0xc0bc284  jal         func_2F0A10
label_477fe4:
    if (ctx->pc == 0x477FE4u) {
        ctx->pc = 0x477FE4u;
            // 0x477fe4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x477FE8u;
        goto label_477fe8;
    }
    ctx->pc = 0x477FE0u;
    SET_GPR_U32(ctx, 31, 0x477FE8u);
    ctx->pc = 0x477FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477FE0u;
            // 0x477fe4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477FE8u; }
        if (ctx->pc != 0x477FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477FE8u; }
        if (ctx->pc != 0x477FE8u) { return; }
    }
    ctx->pc = 0x477FE8u;
label_477fe8:
    // 0x477fe8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x477fe8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477fec:
    // 0x477fec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477ff0:
    // 0x477ff0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x477ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_477ff4:
    // 0x477ff4: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x477ff4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_477ff8:
    // 0x477ff8: 0x26760170  addiu       $s6, $s3, 0x170
    ctx->pc = 0x477ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_477ffc:
    // 0x477ffc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x477ffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_478000:
    // 0x478000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478004:
    // 0x478004: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x478004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_478008:
    // 0x478008: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x478008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47800c:
    // 0x47800c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47800cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478010:
    // 0x478010: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x478010u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478014:
    // 0x478014: 0x0  nop
    ctx->pc = 0x478014u;
    // NOP
label_478018:
    // 0x478018: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47801c:
    // 0x47801c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x47801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478020:
    // 0x478020: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478024:
    // 0x478024: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x478024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_478028:
    // 0x478028: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_47802c:
    // 0x47802c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47802cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478030:
    // 0x478030: 0x0  nop
    ctx->pc = 0x478030u;
    // NOP
label_478034:
    // 0x478034: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478038:
    // 0x478038: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x478038u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47803c:
    // 0x47803c: 0x0  nop
    ctx->pc = 0x47803cu;
    // NOP
label_478040:
    // 0x478040: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478044:
    // 0x478044: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x478044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478048:
    // 0x478048: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x478048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47804c:
    // 0x47804c: 0xc661017c  lwc1        $f1, 0x17C($s3)
    ctx->pc = 0x47804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478050:
    // 0x478050: 0xc6600178  lwc1        $f0, 0x178($s3)
    ctx->pc = 0x478050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478054:
    // 0x478054: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x478054u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_478058:
    // 0x478058: 0xc0bc284  jal         func_2F0A10
label_47805c:
    if (ctx->pc == 0x47805Cu) {
        ctx->pc = 0x47805Cu;
            // 0x47805c: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x478060u;
        goto label_478060;
    }
    ctx->pc = 0x478058u;
    SET_GPR_U32(ctx, 31, 0x478060u);
    ctx->pc = 0x47805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478058u;
            // 0x47805c: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478060u; }
        if (ctx->pc != 0x478060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478060u; }
        if (ctx->pc != 0x478060u) { return; }
    }
    ctx->pc = 0x478060u;
label_478060:
    // 0x478060: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x478060u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478064:
    // 0x478064: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x478064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_478068:
    // 0x478068: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x478068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47806c:
    // 0x47806c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x47806cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_478070:
    // 0x478070: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x478070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_478074:
    // 0x478074: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x478074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_478078:
    // 0x478078: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x478078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_47807c:
    // 0x47807c: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x47807cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_478080:
    // 0x478080: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478084:
    // 0x478084: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x478084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_478088:
    // 0x478088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47808c:
    // 0x47808c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x47808cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478090:
    // 0x478090: 0x0  nop
    ctx->pc = 0x478090u;
    // NOP
label_478094:
    // 0x478094: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478098:
    // 0x478098: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x478098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_47809c:
    // 0x47809c: 0x2810  mfhi        $a1
    ctx->pc = 0x47809cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4780a0:
    // 0x4780a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4780a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4780a4:
    // 0x4780a4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x4780a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_4780a8:
    // 0x4780a8: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x4780a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4780ac:
    // 0x4780ac: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x4780acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_4780b0:
    // 0x4780b0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4780b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4780b4:
    // 0x4780b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4780b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4780b8:
    // 0x4780b8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4780b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4780bc:
    // 0x4780bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4780bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4780c0:
    // 0x4780c0: 0x2658021  addu        $s0, $s3, $a1
    ctx->pc = 0x4780c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4780c4:
    // 0x4780c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4780c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4780c8:
    // 0x4780c8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x4780c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4780cc:
    // 0x4780cc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4780ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4780d0:
    // 0x4780d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4780d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4780d4:
    // 0x4780d4: 0x3c84023  subu        $t0, $fp, $t0
    ctx->pc = 0x4780d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_4780d8:
    // 0x4780d8: 0x311700ff  andi        $s7, $t0, 0xFF
    ctx->pc = 0x4780d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4780dc:
    // 0x4780dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4780dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4780e0:
    // 0x4780e0: 0x0  nop
    ctx->pc = 0x4780e0u;
    // NOP
label_4780e4:
    // 0x4780e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4780e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4780e8:
    // 0x4780e8: 0xc6c3000c  lwc1        $f3, 0xC($s6)
    ctx->pc = 0x4780e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4780ec:
    // 0x4780ec: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x4780ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4780f0:
    // 0x4780f0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4780f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4780f4:
    // 0x4780f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4780f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4780f8:
    // 0x4780f8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4780f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4780fc:
    // 0x4780fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4780fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478100:
    // 0x478100: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478104:
    // 0x478104: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x478104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_478108:
    // 0x478108: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x478108u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47810c:
    // 0x47810c: 0x0  nop
    ctx->pc = 0x47810cu;
    // NOP
label_478110:
    // 0x478110: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478114:
    // 0x478114: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x478114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478118:
    // 0x478118: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x478118u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_47811c:
    // 0x47811c: 0xc0bc284  jal         func_2F0A10
label_478120:
    if (ctx->pc == 0x478120u) {
        ctx->pc = 0x478120u;
            // 0x478120: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x478124u;
        goto label_478124;
    }
    ctx->pc = 0x47811Cu;
    SET_GPR_U32(ctx, 31, 0x478124u);
    ctx->pc = 0x478120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47811Cu;
            // 0x478120: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478124u; }
        if (ctx->pc != 0x478124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478124u; }
        if (ctx->pc != 0x478124u) { return; }
    }
    ctx->pc = 0x478124u;
label_478124:
    // 0x478124: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x478124u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478128:
    // 0x478128: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x478128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_47812c:
    // 0x47812c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47812cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478130:
    // 0x478130: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x478130u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_478134:
    // 0x478134: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x478134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_478138:
    // 0x478138: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x478138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_47813c:
    // 0x47813c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_478140:
    // 0x478140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478144:
    // 0x478144: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x478144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_478148:
    // 0x478148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47814c:
    // 0x47814c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47814cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478150:
    // 0x478150: 0x0  nop
    ctx->pc = 0x478150u;
    // NOP
label_478154:
    // 0x478154: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478158:
    // 0x478158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47815c:
    // 0x47815c: 0x0  nop
    ctx->pc = 0x47815cu;
    // NOP
label_478160:
    // 0x478160: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478164:
    // 0x478164: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x478164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_478168:
    // 0x478168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47816c:
    // 0x47816c: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x47816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478170:
    // 0x478170: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x478170u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_478174:
    // 0x478174: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x478174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_478178:
    // 0x478178: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x478178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47817c:
    // 0x47817c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_478180:
    // 0x478180: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x478180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_478184:
    // 0x478184: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478188:
    // 0x478188: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47818c:
    // 0x47818c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x47818cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_478190:
    // 0x478190: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x478190u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478194:
    // 0x478194: 0x0  nop
    ctx->pc = 0x478194u;
    // NOP
label_478198:
    // 0x478198: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_47819c:
    // 0x47819c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x47819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4781a0:
    // 0x4781a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x4781a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4781a4:
    // 0x4781a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4781a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4781a8:
    // 0x4781a8: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x4781a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_4781ac:
    // 0x4781ac: 0xc0bc284  jal         func_2F0A10
label_4781b0:
    if (ctx->pc == 0x4781B0u) {
        ctx->pc = 0x4781B0u;
            // 0x4781b0: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x4781B4u;
        goto label_4781b4;
    }
    ctx->pc = 0x4781ACu;
    SET_GPR_U32(ctx, 31, 0x4781B4u);
    ctx->pc = 0x4781B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4781ACu;
            // 0x4781b0: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4781B4u; }
        if (ctx->pc != 0x4781B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4781B4u; }
        if (ctx->pc != 0x4781B4u) { return; }
    }
    ctx->pc = 0x4781B4u;
label_4781b4:
    // 0x4781b4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4781b4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4781b8:
    // 0x4781b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4781b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4781bc:
    // 0x4781bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4781bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4781c0:
    // 0x4781c0: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4781c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4781c4:
    // 0x4781c4: 0x26760180  addiu       $s6, $s3, 0x180
    ctx->pc = 0x4781c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_4781c8:
    // 0x4781c8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4781c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4781cc:
    // 0x4781cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4781ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4781d0:
    // 0x4781d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4781d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4781d4:
    // 0x4781d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4781d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4781d8:
    // 0x4781d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4781d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4781dc:
    // 0x4781dc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4781dcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4781e0:
    // 0x4781e0: 0x0  nop
    ctx->pc = 0x4781e0u;
    // NOP
label_4781e4:
    // 0x4781e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4781e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4781e8:
    // 0x4781e8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4781e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4781ec:
    // 0x4781ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4781ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4781f0:
    // 0x4781f0: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x4781f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4781f4:
    // 0x4781f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4781f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4781f8:
    // 0x4781f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4781f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4781fc:
    // 0x4781fc: 0x0  nop
    ctx->pc = 0x4781fcu;
    // NOP
label_478200:
    // 0x478200: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478204:
    // 0x478204: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x478204u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478208:
    // 0x478208: 0x0  nop
    ctx->pc = 0x478208u;
    // NOP
label_47820c:
    // 0x47820c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x47820cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478210:
    // 0x478210: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x478210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478214:
    // 0x478214: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x478214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_478218:
    // 0x478218: 0xc661018c  lwc1        $f1, 0x18C($s3)
    ctx->pc = 0x478218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47821c:
    // 0x47821c: 0xc6600188  lwc1        $f0, 0x188($s3)
    ctx->pc = 0x47821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478220:
    // 0x478220: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x478220u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_478224:
    // 0x478224: 0xc0bc284  jal         func_2F0A10
label_478228:
    if (ctx->pc == 0x478228u) {
        ctx->pc = 0x478228u;
            // 0x478228: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x47822Cu;
        goto label_47822c;
    }
    ctx->pc = 0x478224u;
    SET_GPR_U32(ctx, 31, 0x47822Cu);
    ctx->pc = 0x478228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478224u;
            // 0x478228: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47822Cu; }
        if (ctx->pc != 0x47822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47822Cu; }
        if (ctx->pc != 0x47822Cu) { return; }
    }
    ctx->pc = 0x47822Cu;
label_47822c:
    // 0x47822c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x47822cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_478230:
    // 0x478230: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x478230u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478234:
    // 0x478234: 0x0  nop
    ctx->pc = 0x478234u;
    // NOP
label_478238:
    // 0x478238: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x478238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47823c:
    // 0x47823c: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x47823cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_478240:
    // 0x478240: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478244:
    // 0x478244: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x478244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_478248:
    // 0x478248: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x478248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47824c:
    // 0x47824c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47824cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478250:
    // 0x478250: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x478250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_478254:
    // 0x478254: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x478254u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_478258:
    // 0x478258: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x478258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_47825c:
    // 0x47825c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x47825cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_478260:
    // 0x478260: 0xc6c3000c  lwc1        $f3, 0xC($s6)
    ctx->pc = 0x478260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_478264:
    // 0x478264: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x478264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478268:
    // 0x478268: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x478268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_47826c:
    // 0x47826c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x47826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_478270:
    // 0x478270: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x478270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478274:
    // 0x478274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x478274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478278:
    // 0x478278: 0x0  nop
    ctx->pc = 0x478278u;
    // NOP
label_47827c:
    // 0x47827c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47827cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478280:
    // 0x478280: 0x1010  mfhi        $v0
    ctx->pc = 0x478280u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_478284:
    // 0x478284: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x478284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_478288:
    // 0x478288: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x478288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47828c:
    // 0x47828c: 0x2522000d  addiu       $v0, $t1, 0xD
    ctx->pc = 0x47828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_478290:
    // 0x478290: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x478290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_478294:
    // 0x478294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_478298:
    // 0x478298: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x478298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_47829c:
    // 0x47829c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47829cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4782a0:
    // 0x4782a0: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x4782a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4782a4:
    // 0x4782a4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4782a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4782a8:
    // 0x4782a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4782ac:
    // 0x4782ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4782acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4782b0:
    // 0x4782b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4782b4:
    // 0x4782b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4782b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4782b8:
    // 0x4782b8: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x4782b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4782bc:
    // 0x4782bc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4782bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4782c0:
    // 0x4782c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4782c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4782c4:
    // 0x4782c4: 0x0  nop
    ctx->pc = 0x4782c4u;
    // NOP
label_4782c8:
    // 0x4782c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4782c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4782cc:
    // 0x4782cc: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4782d0:
    // 0x4782d0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4782d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4782d4:
    // 0x4782d4: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x4782d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4782d8:
    // 0x4782d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4782d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4782dc:
    // 0x4782dc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4782dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4782e0:
    // 0x4782e0: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x4782e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_4782e4:
    // 0x4782e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4782e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4782e8:
    // 0x4782e8: 0x0  nop
    ctx->pc = 0x4782e8u;
    // NOP
label_4782ec:
    // 0x4782ec: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4782ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4782f0:
    // 0x4782f0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4782f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4782f4:
    // 0x4782f4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x4782f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4782f8:
    // 0x4782f8: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x4782f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_4782fc:
    // 0x4782fc: 0xc0bc284  jal         func_2F0A10
label_478300:
    if (ctx->pc == 0x478300u) {
        ctx->pc = 0x478300u;
            // 0x478300: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x478304u;
        goto label_478304;
    }
    ctx->pc = 0x4782FCu;
    SET_GPR_U32(ctx, 31, 0x478304u);
    ctx->pc = 0x478300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4782FCu;
            // 0x478300: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478304u; }
        if (ctx->pc != 0x478304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478304u; }
        if (ctx->pc != 0x478304u) { return; }
    }
    ctx->pc = 0x478304u;
label_478304:
    // 0x478304: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x478304u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478308:
    // 0x478308: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x478308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_47830c:
    // 0x47830c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47830cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478310:
    // 0x478310: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x478310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_478314:
    // 0x478314: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x478314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_478318:
    // 0x478318: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x478318u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_47831c:
    // 0x47831c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x47831cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_478320:
    // 0x478320: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x478320u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_478324:
    // 0x478324: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x478324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_478328:
    // 0x478328: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47832c:
    // 0x47832c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47832cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478330:
    // 0x478330: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x478330u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478334:
    // 0x478334: 0x0  nop
    ctx->pc = 0x478334u;
    // NOP
label_478338:
    // 0x478338: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_47833c:
    // 0x47833c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478340:
    // 0x478340: 0x2810  mfhi        $a1
    ctx->pc = 0x478340u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_478344:
    // 0x478344: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x478344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_478348:
    // 0x478348: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x478348u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_47834c:
    // 0x47834c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x47834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_478350:
    // 0x478350: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x478350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_478354:
    // 0x478354: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x478354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_478358:
    // 0x478358: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x478358u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47835c:
    // 0x47835c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x47835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_478360:
    // 0x478360: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478364:
    // 0x478364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478368:
    // 0x478368: 0x0  nop
    ctx->pc = 0x478368u;
    // NOP
label_47836c:
    // 0x47836c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47836cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478370:
    // 0x478370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478374:
    // 0x478374: 0x0  nop
    ctx->pc = 0x478374u;
    // NOP
label_478378:
    // 0x478378: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x478378u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47837c:
    // 0x47837c: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x47837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_478380:
    // 0x478380: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x478380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478384:
    // 0x478384: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x478384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478388:
    // 0x478388: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47838c:
    // 0x47838c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x47838cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_478390:
    // 0x478390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478394:
    // 0x478394: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478398:
    // 0x478398: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x478398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47839c:
    // 0x47839c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x47839cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_4783a0:
    // 0x4783a0: 0xc0bc284  jal         func_2F0A10
label_4783a4:
    if (ctx->pc == 0x4783A4u) {
        ctx->pc = 0x4783A4u;
            // 0x4783a4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x4783A8u;
        goto label_4783a8;
    }
    ctx->pc = 0x4783A0u;
    SET_GPR_U32(ctx, 31, 0x4783A8u);
    ctx->pc = 0x4783A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4783A0u;
            // 0x4783a4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4783A8u; }
        if (ctx->pc != 0x4783A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4783A8u; }
        if (ctx->pc != 0x4783A8u) { return; }
    }
    ctx->pc = 0x4783A8u;
label_4783a8:
    // 0x4783a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4783a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4783ac:
    // 0x4783ac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4783acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4783b0:
    // 0x4783b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4783b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4783b4:
    // 0x4783b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4783b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4783b8:
    // 0x4783b8: 0x320f809  jalr        $t9
label_4783bc:
    if (ctx->pc == 0x4783BCu) {
        ctx->pc = 0x4783C0u;
        goto label_4783c0;
    }
    ctx->pc = 0x4783B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4783C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4783C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4783C0u; }
            if (ctx->pc != 0x4783C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4783C0u;
label_4783c0:
    // 0x4783c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4783c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4783c4:
    // 0x4783c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4783c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4783c8:
    // 0x4783c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4783c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4783cc:
    // 0x4783cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4783ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4783d0:
    // 0x4783d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4783d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4783d4:
    // 0x4783d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4783d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4783d8:
    // 0x4783d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4783d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4783dc:
    // 0x4783dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4783dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4783e0:
    // 0x4783e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4783e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4783e4:
    // 0x4783e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4783e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4783e8:
    // 0x4783e8: 0x3e00008  jr          $ra
label_4783ec:
    if (ctx->pc == 0x4783ECu) {
        ctx->pc = 0x4783ECu;
            // 0x4783ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4783F0u;
        goto label_fallthrough_0x4783e8;
    }
    ctx->pc = 0x4783E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4783ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4783E8u;
            // 0x4783ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4783e8:
    ctx->pc = 0x4783F0u;
}
