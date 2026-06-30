#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298CC0
// Address: 0x298cc0 - 0x299970
void sub_00298CC0_0x298cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298CC0_0x298cc0");
#endif

    switch (ctx->pc) {
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        case 0x298d68u: goto label_298d68;
        case 0x298d6cu: goto label_298d6c;
        case 0x298d70u: goto label_298d70;
        case 0x298d74u: goto label_298d74;
        case 0x298d78u: goto label_298d78;
        case 0x298d7cu: goto label_298d7c;
        case 0x298d80u: goto label_298d80;
        case 0x298d84u: goto label_298d84;
        case 0x298d88u: goto label_298d88;
        case 0x298d8cu: goto label_298d8c;
        case 0x298d90u: goto label_298d90;
        case 0x298d94u: goto label_298d94;
        case 0x298d98u: goto label_298d98;
        case 0x298d9cu: goto label_298d9c;
        case 0x298da0u: goto label_298da0;
        case 0x298da4u: goto label_298da4;
        case 0x298da8u: goto label_298da8;
        case 0x298dacu: goto label_298dac;
        case 0x298db0u: goto label_298db0;
        case 0x298db4u: goto label_298db4;
        case 0x298db8u: goto label_298db8;
        case 0x298dbcu: goto label_298dbc;
        case 0x298dc0u: goto label_298dc0;
        case 0x298dc4u: goto label_298dc4;
        case 0x298dc8u: goto label_298dc8;
        case 0x298dccu: goto label_298dcc;
        case 0x298dd0u: goto label_298dd0;
        case 0x298dd4u: goto label_298dd4;
        case 0x298dd8u: goto label_298dd8;
        case 0x298ddcu: goto label_298ddc;
        case 0x298de0u: goto label_298de0;
        case 0x298de4u: goto label_298de4;
        case 0x298de8u: goto label_298de8;
        case 0x298decu: goto label_298dec;
        case 0x298df0u: goto label_298df0;
        case 0x298df4u: goto label_298df4;
        case 0x298df8u: goto label_298df8;
        case 0x298dfcu: goto label_298dfc;
        case 0x298e00u: goto label_298e00;
        case 0x298e04u: goto label_298e04;
        case 0x298e08u: goto label_298e08;
        case 0x298e0cu: goto label_298e0c;
        case 0x298e10u: goto label_298e10;
        case 0x298e14u: goto label_298e14;
        case 0x298e18u: goto label_298e18;
        case 0x298e1cu: goto label_298e1c;
        case 0x298e20u: goto label_298e20;
        case 0x298e24u: goto label_298e24;
        case 0x298e28u: goto label_298e28;
        case 0x298e2cu: goto label_298e2c;
        case 0x298e30u: goto label_298e30;
        case 0x298e34u: goto label_298e34;
        case 0x298e38u: goto label_298e38;
        case 0x298e3cu: goto label_298e3c;
        case 0x298e40u: goto label_298e40;
        case 0x298e44u: goto label_298e44;
        case 0x298e48u: goto label_298e48;
        case 0x298e4cu: goto label_298e4c;
        case 0x298e50u: goto label_298e50;
        case 0x298e54u: goto label_298e54;
        case 0x298e58u: goto label_298e58;
        case 0x298e5cu: goto label_298e5c;
        case 0x298e60u: goto label_298e60;
        case 0x298e64u: goto label_298e64;
        case 0x298e68u: goto label_298e68;
        case 0x298e6cu: goto label_298e6c;
        case 0x298e70u: goto label_298e70;
        case 0x298e74u: goto label_298e74;
        case 0x298e78u: goto label_298e78;
        case 0x298e7cu: goto label_298e7c;
        case 0x298e80u: goto label_298e80;
        case 0x298e84u: goto label_298e84;
        case 0x298e88u: goto label_298e88;
        case 0x298e8cu: goto label_298e8c;
        case 0x298e90u: goto label_298e90;
        case 0x298e94u: goto label_298e94;
        case 0x298e98u: goto label_298e98;
        case 0x298e9cu: goto label_298e9c;
        case 0x298ea0u: goto label_298ea0;
        case 0x298ea4u: goto label_298ea4;
        case 0x298ea8u: goto label_298ea8;
        case 0x298eacu: goto label_298eac;
        case 0x298eb0u: goto label_298eb0;
        case 0x298eb4u: goto label_298eb4;
        case 0x298eb8u: goto label_298eb8;
        case 0x298ebcu: goto label_298ebc;
        case 0x298ec0u: goto label_298ec0;
        case 0x298ec4u: goto label_298ec4;
        case 0x298ec8u: goto label_298ec8;
        case 0x298eccu: goto label_298ecc;
        case 0x298ed0u: goto label_298ed0;
        case 0x298ed4u: goto label_298ed4;
        case 0x298ed8u: goto label_298ed8;
        case 0x298edcu: goto label_298edc;
        case 0x298ee0u: goto label_298ee0;
        case 0x298ee4u: goto label_298ee4;
        case 0x298ee8u: goto label_298ee8;
        case 0x298eecu: goto label_298eec;
        case 0x298ef0u: goto label_298ef0;
        case 0x298ef4u: goto label_298ef4;
        case 0x298ef8u: goto label_298ef8;
        case 0x298efcu: goto label_298efc;
        case 0x298f00u: goto label_298f00;
        case 0x298f04u: goto label_298f04;
        case 0x298f08u: goto label_298f08;
        case 0x298f0cu: goto label_298f0c;
        case 0x298f10u: goto label_298f10;
        case 0x298f14u: goto label_298f14;
        case 0x298f18u: goto label_298f18;
        case 0x298f1cu: goto label_298f1c;
        case 0x298f20u: goto label_298f20;
        case 0x298f24u: goto label_298f24;
        case 0x298f28u: goto label_298f28;
        case 0x298f2cu: goto label_298f2c;
        case 0x298f30u: goto label_298f30;
        case 0x298f34u: goto label_298f34;
        case 0x298f38u: goto label_298f38;
        case 0x298f3cu: goto label_298f3c;
        case 0x298f40u: goto label_298f40;
        case 0x298f44u: goto label_298f44;
        case 0x298f48u: goto label_298f48;
        case 0x298f4cu: goto label_298f4c;
        case 0x298f50u: goto label_298f50;
        case 0x298f54u: goto label_298f54;
        case 0x298f58u: goto label_298f58;
        case 0x298f5cu: goto label_298f5c;
        case 0x298f60u: goto label_298f60;
        case 0x298f64u: goto label_298f64;
        case 0x298f68u: goto label_298f68;
        case 0x298f6cu: goto label_298f6c;
        case 0x298f70u: goto label_298f70;
        case 0x298f74u: goto label_298f74;
        case 0x298f78u: goto label_298f78;
        case 0x298f7cu: goto label_298f7c;
        case 0x298f80u: goto label_298f80;
        case 0x298f84u: goto label_298f84;
        case 0x298f88u: goto label_298f88;
        case 0x298f8cu: goto label_298f8c;
        case 0x298f90u: goto label_298f90;
        case 0x298f94u: goto label_298f94;
        case 0x298f98u: goto label_298f98;
        case 0x298f9cu: goto label_298f9c;
        case 0x298fa0u: goto label_298fa0;
        case 0x298fa4u: goto label_298fa4;
        case 0x298fa8u: goto label_298fa8;
        case 0x298facu: goto label_298fac;
        case 0x298fb0u: goto label_298fb0;
        case 0x298fb4u: goto label_298fb4;
        case 0x298fb8u: goto label_298fb8;
        case 0x298fbcu: goto label_298fbc;
        case 0x298fc0u: goto label_298fc0;
        case 0x298fc4u: goto label_298fc4;
        case 0x298fc8u: goto label_298fc8;
        case 0x298fccu: goto label_298fcc;
        case 0x298fd0u: goto label_298fd0;
        case 0x298fd4u: goto label_298fd4;
        case 0x298fd8u: goto label_298fd8;
        case 0x298fdcu: goto label_298fdc;
        case 0x298fe0u: goto label_298fe0;
        case 0x298fe4u: goto label_298fe4;
        case 0x298fe8u: goto label_298fe8;
        case 0x298fecu: goto label_298fec;
        case 0x298ff0u: goto label_298ff0;
        case 0x298ff4u: goto label_298ff4;
        case 0x298ff8u: goto label_298ff8;
        case 0x298ffcu: goto label_298ffc;
        case 0x299000u: goto label_299000;
        case 0x299004u: goto label_299004;
        case 0x299008u: goto label_299008;
        case 0x29900cu: goto label_29900c;
        case 0x299010u: goto label_299010;
        case 0x299014u: goto label_299014;
        case 0x299018u: goto label_299018;
        case 0x29901cu: goto label_29901c;
        case 0x299020u: goto label_299020;
        case 0x299024u: goto label_299024;
        case 0x299028u: goto label_299028;
        case 0x29902cu: goto label_29902c;
        case 0x299030u: goto label_299030;
        case 0x299034u: goto label_299034;
        case 0x299038u: goto label_299038;
        case 0x29903cu: goto label_29903c;
        case 0x299040u: goto label_299040;
        case 0x299044u: goto label_299044;
        case 0x299048u: goto label_299048;
        case 0x29904cu: goto label_29904c;
        case 0x299050u: goto label_299050;
        case 0x299054u: goto label_299054;
        case 0x299058u: goto label_299058;
        case 0x29905cu: goto label_29905c;
        case 0x299060u: goto label_299060;
        case 0x299064u: goto label_299064;
        case 0x299068u: goto label_299068;
        case 0x29906cu: goto label_29906c;
        case 0x299070u: goto label_299070;
        case 0x299074u: goto label_299074;
        case 0x299078u: goto label_299078;
        case 0x29907cu: goto label_29907c;
        case 0x299080u: goto label_299080;
        case 0x299084u: goto label_299084;
        case 0x299088u: goto label_299088;
        case 0x29908cu: goto label_29908c;
        case 0x299090u: goto label_299090;
        case 0x299094u: goto label_299094;
        case 0x299098u: goto label_299098;
        case 0x29909cu: goto label_29909c;
        case 0x2990a0u: goto label_2990a0;
        case 0x2990a4u: goto label_2990a4;
        case 0x2990a8u: goto label_2990a8;
        case 0x2990acu: goto label_2990ac;
        case 0x2990b0u: goto label_2990b0;
        case 0x2990b4u: goto label_2990b4;
        case 0x2990b8u: goto label_2990b8;
        case 0x2990bcu: goto label_2990bc;
        case 0x2990c0u: goto label_2990c0;
        case 0x2990c4u: goto label_2990c4;
        case 0x2990c8u: goto label_2990c8;
        case 0x2990ccu: goto label_2990cc;
        case 0x2990d0u: goto label_2990d0;
        case 0x2990d4u: goto label_2990d4;
        case 0x2990d8u: goto label_2990d8;
        case 0x2990dcu: goto label_2990dc;
        case 0x2990e0u: goto label_2990e0;
        case 0x2990e4u: goto label_2990e4;
        case 0x2990e8u: goto label_2990e8;
        case 0x2990ecu: goto label_2990ec;
        case 0x2990f0u: goto label_2990f0;
        case 0x2990f4u: goto label_2990f4;
        case 0x2990f8u: goto label_2990f8;
        case 0x2990fcu: goto label_2990fc;
        case 0x299100u: goto label_299100;
        case 0x299104u: goto label_299104;
        case 0x299108u: goto label_299108;
        case 0x29910cu: goto label_29910c;
        case 0x299110u: goto label_299110;
        case 0x299114u: goto label_299114;
        case 0x299118u: goto label_299118;
        case 0x29911cu: goto label_29911c;
        case 0x299120u: goto label_299120;
        case 0x299124u: goto label_299124;
        case 0x299128u: goto label_299128;
        case 0x29912cu: goto label_29912c;
        case 0x299130u: goto label_299130;
        case 0x299134u: goto label_299134;
        case 0x299138u: goto label_299138;
        case 0x29913cu: goto label_29913c;
        case 0x299140u: goto label_299140;
        case 0x299144u: goto label_299144;
        case 0x299148u: goto label_299148;
        case 0x29914cu: goto label_29914c;
        case 0x299150u: goto label_299150;
        case 0x299154u: goto label_299154;
        case 0x299158u: goto label_299158;
        case 0x29915cu: goto label_29915c;
        case 0x299160u: goto label_299160;
        case 0x299164u: goto label_299164;
        case 0x299168u: goto label_299168;
        case 0x29916cu: goto label_29916c;
        case 0x299170u: goto label_299170;
        case 0x299174u: goto label_299174;
        case 0x299178u: goto label_299178;
        case 0x29917cu: goto label_29917c;
        case 0x299180u: goto label_299180;
        case 0x299184u: goto label_299184;
        case 0x299188u: goto label_299188;
        case 0x29918cu: goto label_29918c;
        case 0x299190u: goto label_299190;
        case 0x299194u: goto label_299194;
        case 0x299198u: goto label_299198;
        case 0x29919cu: goto label_29919c;
        case 0x2991a0u: goto label_2991a0;
        case 0x2991a4u: goto label_2991a4;
        case 0x2991a8u: goto label_2991a8;
        case 0x2991acu: goto label_2991ac;
        case 0x2991b0u: goto label_2991b0;
        case 0x2991b4u: goto label_2991b4;
        case 0x2991b8u: goto label_2991b8;
        case 0x2991bcu: goto label_2991bc;
        case 0x2991c0u: goto label_2991c0;
        case 0x2991c4u: goto label_2991c4;
        case 0x2991c8u: goto label_2991c8;
        case 0x2991ccu: goto label_2991cc;
        case 0x2991d0u: goto label_2991d0;
        case 0x2991d4u: goto label_2991d4;
        case 0x2991d8u: goto label_2991d8;
        case 0x2991dcu: goto label_2991dc;
        case 0x2991e0u: goto label_2991e0;
        case 0x2991e4u: goto label_2991e4;
        case 0x2991e8u: goto label_2991e8;
        case 0x2991ecu: goto label_2991ec;
        case 0x2991f0u: goto label_2991f0;
        case 0x2991f4u: goto label_2991f4;
        case 0x2991f8u: goto label_2991f8;
        case 0x2991fcu: goto label_2991fc;
        case 0x299200u: goto label_299200;
        case 0x299204u: goto label_299204;
        case 0x299208u: goto label_299208;
        case 0x29920cu: goto label_29920c;
        case 0x299210u: goto label_299210;
        case 0x299214u: goto label_299214;
        case 0x299218u: goto label_299218;
        case 0x29921cu: goto label_29921c;
        case 0x299220u: goto label_299220;
        case 0x299224u: goto label_299224;
        case 0x299228u: goto label_299228;
        case 0x29922cu: goto label_29922c;
        case 0x299230u: goto label_299230;
        case 0x299234u: goto label_299234;
        case 0x299238u: goto label_299238;
        case 0x29923cu: goto label_29923c;
        case 0x299240u: goto label_299240;
        case 0x299244u: goto label_299244;
        case 0x299248u: goto label_299248;
        case 0x29924cu: goto label_29924c;
        case 0x299250u: goto label_299250;
        case 0x299254u: goto label_299254;
        case 0x299258u: goto label_299258;
        case 0x29925cu: goto label_29925c;
        case 0x299260u: goto label_299260;
        case 0x299264u: goto label_299264;
        case 0x299268u: goto label_299268;
        case 0x29926cu: goto label_29926c;
        case 0x299270u: goto label_299270;
        case 0x299274u: goto label_299274;
        case 0x299278u: goto label_299278;
        case 0x29927cu: goto label_29927c;
        case 0x299280u: goto label_299280;
        case 0x299284u: goto label_299284;
        case 0x299288u: goto label_299288;
        case 0x29928cu: goto label_29928c;
        case 0x299290u: goto label_299290;
        case 0x299294u: goto label_299294;
        case 0x299298u: goto label_299298;
        case 0x29929cu: goto label_29929c;
        case 0x2992a0u: goto label_2992a0;
        case 0x2992a4u: goto label_2992a4;
        case 0x2992a8u: goto label_2992a8;
        case 0x2992acu: goto label_2992ac;
        case 0x2992b0u: goto label_2992b0;
        case 0x2992b4u: goto label_2992b4;
        case 0x2992b8u: goto label_2992b8;
        case 0x2992bcu: goto label_2992bc;
        case 0x2992c0u: goto label_2992c0;
        case 0x2992c4u: goto label_2992c4;
        case 0x2992c8u: goto label_2992c8;
        case 0x2992ccu: goto label_2992cc;
        case 0x2992d0u: goto label_2992d0;
        case 0x2992d4u: goto label_2992d4;
        case 0x2992d8u: goto label_2992d8;
        case 0x2992dcu: goto label_2992dc;
        case 0x2992e0u: goto label_2992e0;
        case 0x2992e4u: goto label_2992e4;
        case 0x2992e8u: goto label_2992e8;
        case 0x2992ecu: goto label_2992ec;
        case 0x2992f0u: goto label_2992f0;
        case 0x2992f4u: goto label_2992f4;
        case 0x2992f8u: goto label_2992f8;
        case 0x2992fcu: goto label_2992fc;
        case 0x299300u: goto label_299300;
        case 0x299304u: goto label_299304;
        case 0x299308u: goto label_299308;
        case 0x29930cu: goto label_29930c;
        case 0x299310u: goto label_299310;
        case 0x299314u: goto label_299314;
        case 0x299318u: goto label_299318;
        case 0x29931cu: goto label_29931c;
        case 0x299320u: goto label_299320;
        case 0x299324u: goto label_299324;
        case 0x299328u: goto label_299328;
        case 0x29932cu: goto label_29932c;
        case 0x299330u: goto label_299330;
        case 0x299334u: goto label_299334;
        case 0x299338u: goto label_299338;
        case 0x29933cu: goto label_29933c;
        case 0x299340u: goto label_299340;
        case 0x299344u: goto label_299344;
        case 0x299348u: goto label_299348;
        case 0x29934cu: goto label_29934c;
        case 0x299350u: goto label_299350;
        case 0x299354u: goto label_299354;
        case 0x299358u: goto label_299358;
        case 0x29935cu: goto label_29935c;
        case 0x299360u: goto label_299360;
        case 0x299364u: goto label_299364;
        case 0x299368u: goto label_299368;
        case 0x29936cu: goto label_29936c;
        case 0x299370u: goto label_299370;
        case 0x299374u: goto label_299374;
        case 0x299378u: goto label_299378;
        case 0x29937cu: goto label_29937c;
        case 0x299380u: goto label_299380;
        case 0x299384u: goto label_299384;
        case 0x299388u: goto label_299388;
        case 0x29938cu: goto label_29938c;
        case 0x299390u: goto label_299390;
        case 0x299394u: goto label_299394;
        case 0x299398u: goto label_299398;
        case 0x29939cu: goto label_29939c;
        case 0x2993a0u: goto label_2993a0;
        case 0x2993a4u: goto label_2993a4;
        case 0x2993a8u: goto label_2993a8;
        case 0x2993acu: goto label_2993ac;
        case 0x2993b0u: goto label_2993b0;
        case 0x2993b4u: goto label_2993b4;
        case 0x2993b8u: goto label_2993b8;
        case 0x2993bcu: goto label_2993bc;
        case 0x2993c0u: goto label_2993c0;
        case 0x2993c4u: goto label_2993c4;
        case 0x2993c8u: goto label_2993c8;
        case 0x2993ccu: goto label_2993cc;
        case 0x2993d0u: goto label_2993d0;
        case 0x2993d4u: goto label_2993d4;
        case 0x2993d8u: goto label_2993d8;
        case 0x2993dcu: goto label_2993dc;
        case 0x2993e0u: goto label_2993e0;
        case 0x2993e4u: goto label_2993e4;
        case 0x2993e8u: goto label_2993e8;
        case 0x2993ecu: goto label_2993ec;
        case 0x2993f0u: goto label_2993f0;
        case 0x2993f4u: goto label_2993f4;
        case 0x2993f8u: goto label_2993f8;
        case 0x2993fcu: goto label_2993fc;
        case 0x299400u: goto label_299400;
        case 0x299404u: goto label_299404;
        case 0x299408u: goto label_299408;
        case 0x29940cu: goto label_29940c;
        case 0x299410u: goto label_299410;
        case 0x299414u: goto label_299414;
        case 0x299418u: goto label_299418;
        case 0x29941cu: goto label_29941c;
        case 0x299420u: goto label_299420;
        case 0x299424u: goto label_299424;
        case 0x299428u: goto label_299428;
        case 0x29942cu: goto label_29942c;
        case 0x299430u: goto label_299430;
        case 0x299434u: goto label_299434;
        case 0x299438u: goto label_299438;
        case 0x29943cu: goto label_29943c;
        case 0x299440u: goto label_299440;
        case 0x299444u: goto label_299444;
        case 0x299448u: goto label_299448;
        case 0x29944cu: goto label_29944c;
        case 0x299450u: goto label_299450;
        case 0x299454u: goto label_299454;
        case 0x299458u: goto label_299458;
        case 0x29945cu: goto label_29945c;
        case 0x299460u: goto label_299460;
        case 0x299464u: goto label_299464;
        case 0x299468u: goto label_299468;
        case 0x29946cu: goto label_29946c;
        case 0x299470u: goto label_299470;
        case 0x299474u: goto label_299474;
        case 0x299478u: goto label_299478;
        case 0x29947cu: goto label_29947c;
        case 0x299480u: goto label_299480;
        case 0x299484u: goto label_299484;
        case 0x299488u: goto label_299488;
        case 0x29948cu: goto label_29948c;
        case 0x299490u: goto label_299490;
        case 0x299494u: goto label_299494;
        case 0x299498u: goto label_299498;
        case 0x29949cu: goto label_29949c;
        case 0x2994a0u: goto label_2994a0;
        case 0x2994a4u: goto label_2994a4;
        case 0x2994a8u: goto label_2994a8;
        case 0x2994acu: goto label_2994ac;
        case 0x2994b0u: goto label_2994b0;
        case 0x2994b4u: goto label_2994b4;
        case 0x2994b8u: goto label_2994b8;
        case 0x2994bcu: goto label_2994bc;
        case 0x2994c0u: goto label_2994c0;
        case 0x2994c4u: goto label_2994c4;
        case 0x2994c8u: goto label_2994c8;
        case 0x2994ccu: goto label_2994cc;
        case 0x2994d0u: goto label_2994d0;
        case 0x2994d4u: goto label_2994d4;
        case 0x2994d8u: goto label_2994d8;
        case 0x2994dcu: goto label_2994dc;
        case 0x2994e0u: goto label_2994e0;
        case 0x2994e4u: goto label_2994e4;
        case 0x2994e8u: goto label_2994e8;
        case 0x2994ecu: goto label_2994ec;
        case 0x2994f0u: goto label_2994f0;
        case 0x2994f4u: goto label_2994f4;
        case 0x2994f8u: goto label_2994f8;
        case 0x2994fcu: goto label_2994fc;
        case 0x299500u: goto label_299500;
        case 0x299504u: goto label_299504;
        case 0x299508u: goto label_299508;
        case 0x29950cu: goto label_29950c;
        case 0x299510u: goto label_299510;
        case 0x299514u: goto label_299514;
        case 0x299518u: goto label_299518;
        case 0x29951cu: goto label_29951c;
        case 0x299520u: goto label_299520;
        case 0x299524u: goto label_299524;
        case 0x299528u: goto label_299528;
        case 0x29952cu: goto label_29952c;
        case 0x299530u: goto label_299530;
        case 0x299534u: goto label_299534;
        case 0x299538u: goto label_299538;
        case 0x29953cu: goto label_29953c;
        case 0x299540u: goto label_299540;
        case 0x299544u: goto label_299544;
        case 0x299548u: goto label_299548;
        case 0x29954cu: goto label_29954c;
        case 0x299550u: goto label_299550;
        case 0x299554u: goto label_299554;
        case 0x299558u: goto label_299558;
        case 0x29955cu: goto label_29955c;
        case 0x299560u: goto label_299560;
        case 0x299564u: goto label_299564;
        case 0x299568u: goto label_299568;
        case 0x29956cu: goto label_29956c;
        case 0x299570u: goto label_299570;
        case 0x299574u: goto label_299574;
        case 0x299578u: goto label_299578;
        case 0x29957cu: goto label_29957c;
        case 0x299580u: goto label_299580;
        case 0x299584u: goto label_299584;
        case 0x299588u: goto label_299588;
        case 0x29958cu: goto label_29958c;
        case 0x299590u: goto label_299590;
        case 0x299594u: goto label_299594;
        case 0x299598u: goto label_299598;
        case 0x29959cu: goto label_29959c;
        case 0x2995a0u: goto label_2995a0;
        case 0x2995a4u: goto label_2995a4;
        case 0x2995a8u: goto label_2995a8;
        case 0x2995acu: goto label_2995ac;
        case 0x2995b0u: goto label_2995b0;
        case 0x2995b4u: goto label_2995b4;
        case 0x2995b8u: goto label_2995b8;
        case 0x2995bcu: goto label_2995bc;
        case 0x2995c0u: goto label_2995c0;
        case 0x2995c4u: goto label_2995c4;
        case 0x2995c8u: goto label_2995c8;
        case 0x2995ccu: goto label_2995cc;
        case 0x2995d0u: goto label_2995d0;
        case 0x2995d4u: goto label_2995d4;
        case 0x2995d8u: goto label_2995d8;
        case 0x2995dcu: goto label_2995dc;
        case 0x2995e0u: goto label_2995e0;
        case 0x2995e4u: goto label_2995e4;
        case 0x2995e8u: goto label_2995e8;
        case 0x2995ecu: goto label_2995ec;
        case 0x2995f0u: goto label_2995f0;
        case 0x2995f4u: goto label_2995f4;
        case 0x2995f8u: goto label_2995f8;
        case 0x2995fcu: goto label_2995fc;
        case 0x299600u: goto label_299600;
        case 0x299604u: goto label_299604;
        case 0x299608u: goto label_299608;
        case 0x29960cu: goto label_29960c;
        case 0x299610u: goto label_299610;
        case 0x299614u: goto label_299614;
        case 0x299618u: goto label_299618;
        case 0x29961cu: goto label_29961c;
        case 0x299620u: goto label_299620;
        case 0x299624u: goto label_299624;
        case 0x299628u: goto label_299628;
        case 0x29962cu: goto label_29962c;
        case 0x299630u: goto label_299630;
        case 0x299634u: goto label_299634;
        case 0x299638u: goto label_299638;
        case 0x29963cu: goto label_29963c;
        case 0x299640u: goto label_299640;
        case 0x299644u: goto label_299644;
        case 0x299648u: goto label_299648;
        case 0x29964cu: goto label_29964c;
        case 0x299650u: goto label_299650;
        case 0x299654u: goto label_299654;
        case 0x299658u: goto label_299658;
        case 0x29965cu: goto label_29965c;
        case 0x299660u: goto label_299660;
        case 0x299664u: goto label_299664;
        case 0x299668u: goto label_299668;
        case 0x29966cu: goto label_29966c;
        case 0x299670u: goto label_299670;
        case 0x299674u: goto label_299674;
        case 0x299678u: goto label_299678;
        case 0x29967cu: goto label_29967c;
        case 0x299680u: goto label_299680;
        case 0x299684u: goto label_299684;
        case 0x299688u: goto label_299688;
        case 0x29968cu: goto label_29968c;
        case 0x299690u: goto label_299690;
        case 0x299694u: goto label_299694;
        case 0x299698u: goto label_299698;
        case 0x29969cu: goto label_29969c;
        case 0x2996a0u: goto label_2996a0;
        case 0x2996a4u: goto label_2996a4;
        case 0x2996a8u: goto label_2996a8;
        case 0x2996acu: goto label_2996ac;
        case 0x2996b0u: goto label_2996b0;
        case 0x2996b4u: goto label_2996b4;
        case 0x2996b8u: goto label_2996b8;
        case 0x2996bcu: goto label_2996bc;
        case 0x2996c0u: goto label_2996c0;
        case 0x2996c4u: goto label_2996c4;
        case 0x2996c8u: goto label_2996c8;
        case 0x2996ccu: goto label_2996cc;
        case 0x2996d0u: goto label_2996d0;
        case 0x2996d4u: goto label_2996d4;
        case 0x2996d8u: goto label_2996d8;
        case 0x2996dcu: goto label_2996dc;
        case 0x2996e0u: goto label_2996e0;
        case 0x2996e4u: goto label_2996e4;
        case 0x2996e8u: goto label_2996e8;
        case 0x2996ecu: goto label_2996ec;
        case 0x2996f0u: goto label_2996f0;
        case 0x2996f4u: goto label_2996f4;
        case 0x2996f8u: goto label_2996f8;
        case 0x2996fcu: goto label_2996fc;
        case 0x299700u: goto label_299700;
        case 0x299704u: goto label_299704;
        case 0x299708u: goto label_299708;
        case 0x29970cu: goto label_29970c;
        case 0x299710u: goto label_299710;
        case 0x299714u: goto label_299714;
        case 0x299718u: goto label_299718;
        case 0x29971cu: goto label_29971c;
        case 0x299720u: goto label_299720;
        case 0x299724u: goto label_299724;
        case 0x299728u: goto label_299728;
        case 0x29972cu: goto label_29972c;
        case 0x299730u: goto label_299730;
        case 0x299734u: goto label_299734;
        case 0x299738u: goto label_299738;
        case 0x29973cu: goto label_29973c;
        case 0x299740u: goto label_299740;
        case 0x299744u: goto label_299744;
        case 0x299748u: goto label_299748;
        case 0x29974cu: goto label_29974c;
        case 0x299750u: goto label_299750;
        case 0x299754u: goto label_299754;
        case 0x299758u: goto label_299758;
        case 0x29975cu: goto label_29975c;
        case 0x299760u: goto label_299760;
        case 0x299764u: goto label_299764;
        case 0x299768u: goto label_299768;
        case 0x29976cu: goto label_29976c;
        case 0x299770u: goto label_299770;
        case 0x299774u: goto label_299774;
        case 0x299778u: goto label_299778;
        case 0x29977cu: goto label_29977c;
        case 0x299780u: goto label_299780;
        case 0x299784u: goto label_299784;
        case 0x299788u: goto label_299788;
        case 0x29978cu: goto label_29978c;
        case 0x299790u: goto label_299790;
        case 0x299794u: goto label_299794;
        case 0x299798u: goto label_299798;
        case 0x29979cu: goto label_29979c;
        case 0x2997a0u: goto label_2997a0;
        case 0x2997a4u: goto label_2997a4;
        case 0x2997a8u: goto label_2997a8;
        case 0x2997acu: goto label_2997ac;
        case 0x2997b0u: goto label_2997b0;
        case 0x2997b4u: goto label_2997b4;
        case 0x2997b8u: goto label_2997b8;
        case 0x2997bcu: goto label_2997bc;
        case 0x2997c0u: goto label_2997c0;
        case 0x2997c4u: goto label_2997c4;
        case 0x2997c8u: goto label_2997c8;
        case 0x2997ccu: goto label_2997cc;
        case 0x2997d0u: goto label_2997d0;
        case 0x2997d4u: goto label_2997d4;
        case 0x2997d8u: goto label_2997d8;
        case 0x2997dcu: goto label_2997dc;
        case 0x2997e0u: goto label_2997e0;
        case 0x2997e4u: goto label_2997e4;
        case 0x2997e8u: goto label_2997e8;
        case 0x2997ecu: goto label_2997ec;
        case 0x2997f0u: goto label_2997f0;
        case 0x2997f4u: goto label_2997f4;
        case 0x2997f8u: goto label_2997f8;
        case 0x2997fcu: goto label_2997fc;
        case 0x299800u: goto label_299800;
        case 0x299804u: goto label_299804;
        case 0x299808u: goto label_299808;
        case 0x29980cu: goto label_29980c;
        case 0x299810u: goto label_299810;
        case 0x299814u: goto label_299814;
        case 0x299818u: goto label_299818;
        case 0x29981cu: goto label_29981c;
        case 0x299820u: goto label_299820;
        case 0x299824u: goto label_299824;
        case 0x299828u: goto label_299828;
        case 0x29982cu: goto label_29982c;
        case 0x299830u: goto label_299830;
        case 0x299834u: goto label_299834;
        case 0x299838u: goto label_299838;
        case 0x29983cu: goto label_29983c;
        case 0x299840u: goto label_299840;
        case 0x299844u: goto label_299844;
        case 0x299848u: goto label_299848;
        case 0x29984cu: goto label_29984c;
        case 0x299850u: goto label_299850;
        case 0x299854u: goto label_299854;
        case 0x299858u: goto label_299858;
        case 0x29985cu: goto label_29985c;
        case 0x299860u: goto label_299860;
        case 0x299864u: goto label_299864;
        case 0x299868u: goto label_299868;
        case 0x29986cu: goto label_29986c;
        case 0x299870u: goto label_299870;
        case 0x299874u: goto label_299874;
        case 0x299878u: goto label_299878;
        case 0x29987cu: goto label_29987c;
        case 0x299880u: goto label_299880;
        case 0x299884u: goto label_299884;
        case 0x299888u: goto label_299888;
        case 0x29988cu: goto label_29988c;
        case 0x299890u: goto label_299890;
        case 0x299894u: goto label_299894;
        case 0x299898u: goto label_299898;
        case 0x29989cu: goto label_29989c;
        case 0x2998a0u: goto label_2998a0;
        case 0x2998a4u: goto label_2998a4;
        case 0x2998a8u: goto label_2998a8;
        case 0x2998acu: goto label_2998ac;
        case 0x2998b0u: goto label_2998b0;
        case 0x2998b4u: goto label_2998b4;
        case 0x2998b8u: goto label_2998b8;
        case 0x2998bcu: goto label_2998bc;
        case 0x2998c0u: goto label_2998c0;
        case 0x2998c4u: goto label_2998c4;
        case 0x2998c8u: goto label_2998c8;
        case 0x2998ccu: goto label_2998cc;
        case 0x2998d0u: goto label_2998d0;
        case 0x2998d4u: goto label_2998d4;
        case 0x2998d8u: goto label_2998d8;
        case 0x2998dcu: goto label_2998dc;
        case 0x2998e0u: goto label_2998e0;
        case 0x2998e4u: goto label_2998e4;
        case 0x2998e8u: goto label_2998e8;
        case 0x2998ecu: goto label_2998ec;
        case 0x2998f0u: goto label_2998f0;
        case 0x2998f4u: goto label_2998f4;
        case 0x2998f8u: goto label_2998f8;
        case 0x2998fcu: goto label_2998fc;
        case 0x299900u: goto label_299900;
        case 0x299904u: goto label_299904;
        case 0x299908u: goto label_299908;
        case 0x29990cu: goto label_29990c;
        case 0x299910u: goto label_299910;
        case 0x299914u: goto label_299914;
        case 0x299918u: goto label_299918;
        case 0x29991cu: goto label_29991c;
        case 0x299920u: goto label_299920;
        case 0x299924u: goto label_299924;
        case 0x299928u: goto label_299928;
        case 0x29992cu: goto label_29992c;
        case 0x299930u: goto label_299930;
        case 0x299934u: goto label_299934;
        case 0x299938u: goto label_299938;
        case 0x29993cu: goto label_29993c;
        case 0x299940u: goto label_299940;
        case 0x299944u: goto label_299944;
        case 0x299948u: goto label_299948;
        case 0x29994cu: goto label_29994c;
        case 0x299950u: goto label_299950;
        case 0x299954u: goto label_299954;
        case 0x299958u: goto label_299958;
        case 0x29995cu: goto label_29995c;
        case 0x299960u: goto label_299960;
        case 0x299964u: goto label_299964;
        case 0x299968u: goto label_299968;
        case 0x29996cu: goto label_29996c;
        default: break;
    }

    ctx->pc = 0x298cc0u;

label_298cc0:
    // 0x298cc0: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x298cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
label_298cc4:
    // 0x298cc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x298cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_298cc8:
    // 0x298cc8: 0x27a30580  addiu       $v1, $sp, 0x580
    ctx->pc = 0x298cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_298ccc:
    // 0x298ccc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x298cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_298cd0:
    // 0x298cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298cd4:
    // 0x298cd4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x298cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_298cd8:
    // 0x298cd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x298cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_298cdc:
    // 0x298cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x298cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_298ce0:
    // 0x298ce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x298ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_298ce4:
    // 0x298ce4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x298ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_298ce8:
    // 0x298ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_298cec:
    // 0x298cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_298cf0:
    // 0x298cf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x298cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298cf4:
    // 0x298cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_298cf8:
    // 0x298cf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_298cfc:
    // 0x298cfc: 0xafa00560  sw          $zero, 0x560($sp)
    ctx->pc = 0x298cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 0));
label_298d00:
    // 0x298d00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x298d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_298d04:
    // 0x298d04: 0xafa00564  sw          $zero, 0x564($sp)
    ctx->pc = 0x298d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1380), GPR_U32(ctx, 0));
label_298d08:
    // 0x298d08: 0xafa0057c  sw          $zero, 0x57C($sp)
    ctx->pc = 0x298d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1404), GPR_U32(ctx, 0));
label_298d0c:
    // 0x298d0c: 0xafa00578  sw          $zero, 0x578($sp)
    ctx->pc = 0x298d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1400), GPR_U32(ctx, 0));
label_298d10:
    // 0x298d10: 0xafa00574  sw          $zero, 0x574($sp)
    ctx->pc = 0x298d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1396), GPR_U32(ctx, 0));
label_298d14:
    // 0x298d14: 0xafa00570  sw          $zero, 0x570($sp)
    ctx->pc = 0x298d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 0));
label_298d18:
    // 0x298d18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x298d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_298d1c:
    // 0x298d1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_298d20:
    // 0x298d20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_298d24:
    // 0x298d24: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x298d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_298d28:
    // 0x298d28: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x298d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_298d2c:
    // 0x298d2c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x298d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_298d30:
    // 0x298d30: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x298d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_298d34:
    // 0x298d34: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x298d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_298d38:
    // 0x298d38: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x298d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_298d3c:
    // 0x298d3c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x298d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_298d40:
    // 0x298d40: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x298d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_298d44:
    // 0x298d44: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x298d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_298d48:
    // 0x298d48: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x298d48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_298d4c:
    // 0x298d4c: 0x2d01001e  sltiu       $at, $t0, 0x1E
    ctx->pc = 0x298d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_298d50:
    // 0x298d50: 0x10200155  beqz        $at, . + 4 + (0x155 << 2)
label_298d54:
    if (ctx->pc == 0x298D54u) {
        ctx->pc = 0x298D54u;
            // 0x298d54: 0x2653000c  addiu       $s3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x298D58u;
        goto label_298d58;
    }
    ctx->pc = 0x298D50u;
    {
        const bool branch_taken_0x298d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D50u;
            // 0x298d54: 0x2653000c  addiu       $s3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d50) {
            ctx->pc = 0x2992A8u;
            goto label_2992a8;
        }
    }
    ctx->pc = 0x298D58u;
label_298d58:
    // 0x298d58: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x298d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_298d5c:
    // 0x298d5c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x298d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_298d60:
    // 0x298d60: 0x24e703f0  addiu       $a3, $a3, 0x3F0
    ctx->pc = 0x298d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1008));
label_298d64:
    // 0x298d64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x298d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_298d68:
    // 0x298d68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x298d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_298d6c:
    // 0x298d6c: 0x600008  jr          $v1
label_298d70:
    if (ctx->pc == 0x298D70u) {
        ctx->pc = 0x298D74u;
        goto label_298d74;
    }
    ctx->pc = 0x298D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298D78u: goto label_298d78;
            case 0x298D98u: goto label_298d98;
            case 0x298DD8u: goto label_298dd8;
            case 0x298EF8u: goto label_298ef8;
            case 0x298F80u: goto label_298f80;
            case 0x298F88u: goto label_298f88;
            case 0x298F98u: goto label_298f98;
            case 0x299040u: goto label_299040;
            case 0x299068u: goto label_299068;
            case 0x299090u: goto label_299090;
            case 0x299188u: goto label_299188;
            case 0x299250u: goto label_299250;
            case 0x299278u: goto label_299278;
            case 0x2992A8u: goto label_2992a8;
            case 0x2992B0u: goto label_2992b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298D74u;
label_298d74:
    // 0x298d74: 0x0  nop
    ctx->pc = 0x298d74u;
    // NOP
label_298d78:
    // 0x298d78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_298d7c:
    // 0x298d7c: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x298d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_298d80:
    // 0x298d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x298d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_298d84:
    // 0x298d84: 0xc0a562c  jal         func_2958B0
label_298d88:
    if (ctx->pc == 0x298D88u) {
        ctx->pc = 0x298D88u;
            // 0x298d88: 0x27a40560  addiu       $a0, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x298D8Cu;
        goto label_298d8c;
    }
    ctx->pc = 0x298D84u;
    SET_GPR_U32(ctx, 31, 0x298D8Cu);
    ctx->pc = 0x298D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D84u;
            // 0x298d88: 0x27a40560  addiu       $a0, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D8Cu; }
        if (ctx->pc != 0x298D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D8Cu; }
        if (ctx->pc != 0x298D8Cu) { return; }
    }
    ctx->pc = 0x298D8Cu;
label_298d8c:
    // 0x298d8c: 0x10000148  b           . + 4 + (0x148 << 2)
label_298d90:
    if (ctx->pc == 0x298D90u) {
        ctx->pc = 0x298D94u;
        goto label_298d94;
    }
    ctx->pc = 0x298D8Cu;
    {
        const bool branch_taken_0x298d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d8c) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x298D94u;
label_298d94:
    // 0x298d94: 0x0  nop
    ctx->pc = 0x298d94u;
    // NOP
label_298d98:
    // 0x298d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_298d9c:
    // 0x298d9c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x298d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298da0:
    // 0x298da0: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x298da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_298da4:
    // 0x298da4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x298da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298da8:
    // 0x298da8: 0x27a50560  addiu       $a1, $sp, 0x560
    ctx->pc = 0x298da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_298dac:
    // 0x298dac: 0xe7a00550  swc1        $f0, 0x550($sp)
    ctx->pc = 0x298dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_298db0:
    // 0x298db0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x298db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298db4:
    // 0x298db4: 0xe7a00554  swc1        $f0, 0x554($sp)
    ctx->pc = 0x298db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1364), bits); }
label_298db8:
    // 0x298db8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x298db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298dbc:
    // 0x298dbc: 0xe7a00558  swc1        $f0, 0x558($sp)
    ctx->pc = 0x298dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_298dc0:
    // 0x298dc0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x298dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298dc4:
    // 0x298dc4: 0xc0a5a68  jal         func_2969A0
label_298dc8:
    if (ctx->pc == 0x298DC8u) {
        ctx->pc = 0x298DC8u;
            // 0x298dc8: 0xe7a0055c  swc1        $f0, 0x55C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1372), bits); }
        ctx->pc = 0x298DCCu;
        goto label_298dcc;
    }
    ctx->pc = 0x298DC4u;
    SET_GPR_U32(ctx, 31, 0x298DCCu);
    ctx->pc = 0x298DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298DC4u;
            // 0x298dc8: 0xe7a0055c  swc1        $f0, 0x55C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1372), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298DCCu; }
        if (ctx->pc != 0x298DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298DCCu; }
        if (ctx->pc != 0x298DCCu) { return; }
    }
    ctx->pc = 0x298DCCu;
label_298dcc:
    // 0x298dcc: 0x10000138  b           . + 4 + (0x138 << 2)
label_298dd0:
    if (ctx->pc == 0x298DD0u) {
        ctx->pc = 0x298DD4u;
        goto label_298dd4;
    }
    ctx->pc = 0x298DCCu;
    {
        const bool branch_taken_0x298dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298dcc) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x298DD4u;
label_298dd4:
    // 0x298dd4: 0x0  nop
    ctx->pc = 0x298dd4u;
    // NOP
label_298dd8:
    // 0x298dd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x298dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_298ddc:
    // 0x298ddc: 0x15020008  bne         $t0, $v0, . + 4 + (0x8 << 2)
label_298de0:
    if (ctx->pc == 0x298DE0u) {
        ctx->pc = 0x298DE4u;
        goto label_298de4;
    }
    ctx->pc = 0x298DDCu;
    {
        const bool branch_taken_0x298ddc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x298ddc) {
            ctx->pc = 0x298E00u;
            goto label_298e00;
        }
    }
    ctx->pc = 0x298DE4u;
label_298de4:
    // 0x298de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298de8:
    // 0x298de8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x298de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_298dec:
    // 0x298dec: 0x320f809  jalr        $t9
label_298df0:
    if (ctx->pc == 0x298DF0u) {
        ctx->pc = 0x298DF4u;
        goto label_298df4;
    }
    ctx->pc = 0x298DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298DF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x298DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298DF4u; }
            if (ctx->pc != 0x298DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x298DF4u;
label_298df4:
    // 0x298df4: 0x10000008  b           . + 4 + (0x8 << 2)
label_298df8:
    if (ctx->pc == 0x298DF8u) {
        ctx->pc = 0x298DF8u;
            // 0x298df8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298DFCu;
        goto label_298dfc;
    }
    ctx->pc = 0x298DF4u;
    {
        const bool branch_taken_0x298df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DF4u;
            // 0x298df8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298df4) {
            ctx->pc = 0x298E18u;
            goto label_298e18;
        }
    }
    ctx->pc = 0x298DFCu;
label_298dfc:
    // 0x298dfc: 0x0  nop
    ctx->pc = 0x298dfcu;
    // NOP
label_298e00:
    // 0x298e00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298e04:
    // 0x298e04: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x298e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_298e08:
    // 0x298e08: 0x320f809  jalr        $t9
label_298e0c:
    if (ctx->pc == 0x298E0Cu) {
        ctx->pc = 0x298E10u;
        goto label_298e10;
    }
    ctx->pc = 0x298E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298E10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x298E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298E10u; }
            if (ctx->pc != 0x298E10u) { return; }
        }
        }
    }
    ctx->pc = 0x298E10u;
label_298e10:
    // 0x298e10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x298e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298e14:
    // 0x298e14: 0x0  nop
    ctx->pc = 0x298e14u;
    // NOP
label_298e18:
    // 0x298e18: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x298e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_298e1c:
    // 0x298e1c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x298e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_298e20:
    // 0x298e20: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x298e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_298e24:
    // 0x298e24: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x298e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_298e28:
    // 0x298e28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x298e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_298e2c:
    // 0x298e2c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x298e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_298e30:
    // 0x298e30: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x298e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_298e34:
    // 0x298e34: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x298e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_298e38:
    // 0x298e38: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_298e3c:
    // 0x298e3c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x298e3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_298e40:
    // 0x298e40: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_298e44:
    if (ctx->pc == 0x298E44u) {
        ctx->pc = 0x298E48u;
        goto label_298e48;
    }
    ctx->pc = 0x298E40u;
    {
        const bool branch_taken_0x298e40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x298e40) {
            ctx->pc = 0x298E50u;
            goto label_298e50;
        }
    }
    ctx->pc = 0x298E48u;
label_298e48:
    // 0x298e48: 0x10000005  b           . + 4 + (0x5 << 2)
label_298e4c:
    if (ctx->pc == 0x298E4Cu) {
        ctx->pc = 0x298E4Cu;
            // 0x298e4c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x298E50u;
        goto label_298e50;
    }
    ctx->pc = 0x298E48u;
    {
        const bool branch_taken_0x298e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E48u;
            // 0x298e4c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e48) {
            ctx->pc = 0x298E60u;
            goto label_298e60;
        }
    }
    ctx->pc = 0x298E50u;
label_298e50:
    // 0x298e50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298e54:
    // 0x298e54: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x298e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_298e58:
    // 0x298e58: 0x320f809  jalr        $t9
label_298e5c:
    if (ctx->pc == 0x298E5Cu) {
        ctx->pc = 0x298E60u;
        goto label_298e60;
    }
    ctx->pc = 0x298E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298E60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x298E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298E60u; }
            if (ctx->pc != 0x298E60u) { return; }
        }
        }
    }
    ctx->pc = 0x298E60u;
label_298e60:
    // 0x298e60: 0xafa205c8  sw          $v0, 0x5C8($sp)
    ctx->pc = 0x298e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1480), GPR_U32(ctx, 2));
label_298e64:
    // 0x298e64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x298e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_298e68:
    // 0x298e68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x298e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_298e6c:
    // 0x298e6c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_298e70:
    if (ctx->pc == 0x298E70u) {
        ctx->pc = 0x298E74u;
        goto label_298e74;
    }
    ctx->pc = 0x298E6Cu;
    {
        const bool branch_taken_0x298e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298e6c) {
            ctx->pc = 0x298E90u;
            goto label_298e90;
        }
    }
    ctx->pc = 0x298E74u;
label_298e74:
    // 0x298e74: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x298e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_298e78:
    // 0x298e78: 0x8fa505c8  lw          $a1, 0x5C8($sp)
    ctx->pc = 0x298e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_298e7c:
    // 0x298e7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x298e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_298e80:
    // 0x298e80: 0x320f809  jalr        $t9
label_298e84:
    if (ctx->pc == 0x298E84u) {
        ctx->pc = 0x298E84u;
            // 0x298e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E88u;
        goto label_298e88;
    }
    ctx->pc = 0x298E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298E88u);
        ctx->pc = 0x298E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E80u;
            // 0x298e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x298E88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298E88u; }
            if (ctx->pc != 0x298E88u) { return; }
        }
        }
    }
    ctx->pc = 0x298E88u;
label_298e88:
    // 0x298e88: 0x10000007  b           . + 4 + (0x7 << 2)
label_298e8c:
    if (ctx->pc == 0x298E8Cu) {
        ctx->pc = 0x298E90u;
        goto label_298e90;
    }
    ctx->pc = 0x298E88u;
    {
        const bool branch_taken_0x298e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e88) {
            ctx->pc = 0x298EA8u;
            goto label_298ea8;
        }
    }
    ctx->pc = 0x298E90u;
label_298e90:
    // 0x298e90: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x298e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_298e94:
    // 0x298e94: 0x8fa505c8  lw          $a1, 0x5C8($sp)
    ctx->pc = 0x298e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_298e98:
    // 0x298e98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_298e9c:
    // 0x298e9c: 0x320f809  jalr        $t9
label_298ea0:
    if (ctx->pc == 0x298EA0u) {
        ctx->pc = 0x298EA0u;
            // 0x298ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298EA4u;
        goto label_298ea4;
    }
    ctx->pc = 0x298E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298EA4u);
        ctx->pc = 0x298EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E9Cu;
            // 0x298ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x298EA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298EA4u; }
            if (ctx->pc != 0x298EA4u) { return; }
        }
        }
    }
    ctx->pc = 0x298EA4u;
label_298ea4:
    // 0x298ea4: 0x0  nop
    ctx->pc = 0x298ea4u;
    // NOP
label_298ea8:
    // 0x298ea8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x298ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_298eac:
    // 0x298eac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x298eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298eb0:
    // 0x298eb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x298eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_298eb4:
    // 0x298eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298eb8:
    // 0x298eb8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_298ebc:
    // 0x298ebc: 0xc0a5aa4  jal         func_296A90
label_298ec0:
    if (ctx->pc == 0x298EC0u) {
        ctx->pc = 0x298EC0u;
            // 0x298ec0: 0x27a70560  addiu       $a3, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x298EC4u;
        goto label_298ec4;
    }
    ctx->pc = 0x298EBCu;
    SET_GPR_U32(ctx, 31, 0x298EC4u);
    ctx->pc = 0x298EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EBCu;
            // 0x298ec0: 0x27a70560  addiu       $a3, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296A90u;
    if (runtime->hasFunction(0x296A90u)) {
        auto targetFn = runtime->lookupFunction(0x296A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EC4u; }
        if (ctx->pc != 0x298EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296A90_0x296a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EC4u; }
        if (ctx->pc != 0x298EC4u) { return; }
    }
    ctx->pc = 0x298EC4u;
label_298ec4:
    // 0x298ec4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x298ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_298ec8:
    // 0x298ec8: 0x8fa505c8  lw          $a1, 0x5C8($sp)
    ctx->pc = 0x298ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_298ecc:
    // 0x298ecc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x298eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_298ed0:
    // 0x298ed0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x298ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_298ed4:
    // 0x298ed4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x298ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_298ed8:
    // 0x298ed8: 0x14a300f5  bne         $a1, $v1, . + 4 + (0xF5 << 2)
label_298edc:
    if (ctx->pc == 0x298EDCu) {
        ctx->pc = 0x298EE0u;
        goto label_298ee0;
    }
    ctx->pc = 0x298ED8u;
    {
        const bool branch_taken_0x298ed8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x298ed8) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x298EE0u;
label_298ee0:
    // 0x298ee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298ee4:
    // 0x298ee4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x298ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_298ee8:
    // 0x298ee8: 0x320f809  jalr        $t9
label_298eec:
    if (ctx->pc == 0x298EECu) {
        ctx->pc = 0x298EF0u;
        goto label_298ef0;
    }
    ctx->pc = 0x298EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298EF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x298EF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x298EF0u; }
            if (ctx->pc != 0x298EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x298EF0u;
label_298ef0:
    // 0x298ef0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_298ef4:
    if (ctx->pc == 0x298EF4u) {
        ctx->pc = 0x298EF8u;
        goto label_298ef8;
    }
    ctx->pc = 0x298EF0u;
    {
        const bool branch_taken_0x298ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ef0) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x298EF8u;
label_298ef8:
    // 0x298ef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_298efc:
    // 0x298efc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x298efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f00:
    // 0x298f00: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x298f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_298f04:
    // 0x298f04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x298f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298f08:
    // 0x298f08: 0x27a50530  addiu       $a1, $sp, 0x530
    ctx->pc = 0x298f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_298f0c:
    // 0x298f0c: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x298f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_298f10:
    // 0x298f10: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x298f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_298f14:
    // 0x298f14: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x298f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f18:
    // 0x298f18: 0xe7a00544  swc1        $f0, 0x544($sp)
    ctx->pc = 0x298f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1348), bits); }
label_298f1c:
    // 0x298f1c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x298f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f20:
    // 0x298f20: 0xe7a00548  swc1        $f0, 0x548($sp)
    ctx->pc = 0x298f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_298f24:
    // 0x298f24: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x298f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f28:
    // 0x298f28: 0xe7a0054c  swc1        $f0, 0x54C($sp)
    ctx->pc = 0x298f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1356), bits); }
label_298f2c:
    // 0x298f2c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x298f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f30:
    // 0x298f30: 0xe7a00530  swc1        $f0, 0x530($sp)
    ctx->pc = 0x298f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_298f34:
    // 0x298f34: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x298f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f38:
    // 0x298f38: 0xe7a00534  swc1        $f0, 0x534($sp)
    ctx->pc = 0x298f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1332), bits); }
label_298f3c:
    // 0x298f3c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x298f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f40:
    // 0x298f40: 0xe7a00538  swc1        $f0, 0x538($sp)
    ctx->pc = 0x298f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_298f44:
    // 0x298f44: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x298f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f48:
    // 0x298f48: 0xe7a0053c  swc1        $f0, 0x53C($sp)
    ctx->pc = 0x298f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1340), bits); }
label_298f4c:
    // 0x298f4c: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x298f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f50:
    // 0x298f50: 0xe7a00520  swc1        $f0, 0x520($sp)
    ctx->pc = 0x298f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_298f54:
    // 0x298f54: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x298f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f58:
    // 0x298f58: 0xe7a00524  swc1        $f0, 0x524($sp)
    ctx->pc = 0x298f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_298f5c:
    // 0x298f5c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x298f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f60:
    // 0x298f60: 0xe7a00528  swc1        $f0, 0x528($sp)
    ctx->pc = 0x298f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_298f64:
    // 0x298f64: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x298f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298f68:
    // 0x298f68: 0xe7a0052c  swc1        $f0, 0x52C($sp)
    ctx->pc = 0x298f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1324), bits); }
label_298f6c:
    // 0x298f6c: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x298f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_298f70:
    // 0x298f70: 0xc0a5664  jal         func_295990
label_298f74:
    if (ctx->pc == 0x298F74u) {
        ctx->pc = 0x298F74u;
            // 0x298f74: 0x27a70560  addiu       $a3, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x298F78u;
        goto label_298f78;
    }
    ctx->pc = 0x298F70u;
    SET_GPR_U32(ctx, 31, 0x298F78u);
    ctx->pc = 0x298F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F70u;
            // 0x298f74: 0x27a70560  addiu       $a3, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295990u;
    if (runtime->hasFunction(0x295990u)) {
        auto targetFn = runtime->lookupFunction(0x295990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F78u; }
        if (ctx->pc != 0x298F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295990_0x295990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F78u; }
        if (ctx->pc != 0x298F78u) { return; }
    }
    ctx->pc = 0x298F78u;
label_298f78:
    // 0x298f78: 0x100000cd  b           . + 4 + (0xCD << 2)
label_298f7c:
    if (ctx->pc == 0x298F7Cu) {
        ctx->pc = 0x298F80u;
        goto label_298f80;
    }
    ctx->pc = 0x298F78u;
    {
        const bool branch_taken_0x298f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f78) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x298F80u;
label_298f80:
    // 0x298f80: 0x1000026d  b           . + 4 + (0x26D << 2)
label_298f84:
    if (ctx->pc == 0x298F84u) {
        ctx->pc = 0x298F88u;
        goto label_298f88;
    }
    ctx->pc = 0x298F80u;
    {
        const bool branch_taken_0x298f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f80) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x298F88u;
label_298f88:
    // 0x298f88: 0xc0a6330  jal         func_298CC0
label_298f8c:
    if (ctx->pc == 0x298F8Cu) {
        ctx->pc = 0x298F8Cu;
            // 0x298f8c: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x298F90u;
        goto label_298f90;
    }
    ctx->pc = 0x298F88u;
    SET_GPR_U32(ctx, 31, 0x298F90u);
    ctx->pc = 0x298F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F88u;
            // 0x298f8c: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x298F90u;
label_298f90:
    // 0x298f90: 0x10000269  b           . + 4 + (0x269 << 2)
label_298f94:
    if (ctx->pc == 0x298F94u) {
        ctx->pc = 0x298F98u;
        goto label_298f98;
    }
    ctx->pc = 0x298F90u;
    {
        const bool branch_taken_0x298f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f90) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x298F98u;
label_298f98:
    // 0x298f98: 0x27ab04f0  addiu       $t3, $sp, 0x4F0
    ctx->pc = 0x298f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_298f9c:
    // 0x298f9c: 0xe7a004e4  swc1        $f0, 0x4E4($sp)
    ctx->pc = 0x298f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1252), bits); }
label_298fa0:
    // 0x298fa0: 0x27aa0500  addiu       $t2, $sp, 0x500
    ctx->pc = 0x298fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_298fa4:
    // 0x298fa4: 0xe7a004e8  swc1        $f0, 0x4E8($sp)
    ctx->pc = 0x298fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_298fa8:
    // 0x298fa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_298fac:
    // 0x298fac: 0xe7a004ec  swc1        $f0, 0x4EC($sp)
    ctx->pc = 0x298facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1260), bits); }
label_298fb0:
    // 0x298fb0: 0x27a3051c  addiu       $v1, $sp, 0x51C
    ctx->pc = 0x298fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_298fb4:
    // 0x298fb4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x298fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_298fb8:
    // 0x298fb8: 0x27a70518  addiu       $a3, $sp, 0x518
    ctx->pc = 0x298fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_298fbc:
    // 0x298fbc: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x298fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_298fc0:
    // 0x298fc0: 0x27a80514  addiu       $t0, $sp, 0x514
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
label_298fc4:
    // 0x298fc4: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x298fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_298fc8:
    // 0x298fc8: 0x27a90510  addiu       $t1, $sp, 0x510
    ctx->pc = 0x298fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_298fcc:
    // 0x298fcc: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x298fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_298fd0:
    // 0x298fd0: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x298fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_298fd4:
    // 0x298fd4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x298fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_298fd8:
    // 0x298fd8: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x298fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_298fdc:
    // 0x298fdc: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x298fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_298fe0:
    // 0x298fe0: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x298fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_298fe4:
    // 0x298fe4: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x298fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_298fe8:
    // 0x298fe8: 0xafa204e0  sw          $v0, 0x4E0($sp)
    ctx->pc = 0x298fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 2));
label_298fec:
    // 0x298fec: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x298fecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
label_298ff0:
    // 0x298ff0: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x298ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
label_298ff4:
    // 0x298ff4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_298ff8:
    // 0x298ff8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x298ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_298ffc:
    // 0x298ffc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x298ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_299000:
    // 0x299000: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x299000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_299004:
    // 0x299004: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x299004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299008:
    // 0x299008: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x299008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_29900c:
    // 0x29900c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x29900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299010:
    // 0x299010: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x299010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_299014:
    // 0x299014: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x299014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299018:
    // 0x299018: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x299018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_29901c:
    // 0x29901c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x29901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299020:
    // 0x299020: 0xc0a456c  jal         func_2915B0
label_299024:
    if (ctx->pc == 0x299024u) {
        ctx->pc = 0x299024u;
            // 0x299024: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x299028u;
        goto label_299028;
    }
    ctx->pc = 0x299020u;
    SET_GPR_U32(ctx, 31, 0x299028u);
    ctx->pc = 0x299024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299020u;
            // 0x299024: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299028u; }
        if (ctx->pc != 0x299028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299028u; }
        if (ctx->pc != 0x299028u) { return; }
    }
    ctx->pc = 0x299028u;
label_299028:
    // 0x299028: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x299028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_29902c:
    // 0x29902c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299030:
    // 0x299030: 0xc0a6330  jal         func_298CC0
label_299034:
    if (ctx->pc == 0x299034u) {
        ctx->pc = 0x299034u;
            // 0x299034: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->pc = 0x299038u;
        goto label_299038;
    }
    ctx->pc = 0x299030u;
    SET_GPR_U32(ctx, 31, 0x299038u);
    ctx->pc = 0x299034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299030u;
            // 0x299034: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x299038u;
label_299038:
    // 0x299038: 0x1000023f  b           . + 4 + (0x23F << 2)
label_29903c:
    if (ctx->pc == 0x29903Cu) {
        ctx->pc = 0x299040u;
        goto label_299040;
    }
    ctx->pc = 0x299038u;
    {
        const bool branch_taken_0x299038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299038) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x299040u;
label_299040:
    // 0x299040: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x299040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_299044:
    // 0x299044: 0xc0a456c  jal         func_2915B0
label_299048:
    if (ctx->pc == 0x299048u) {
        ctx->pc = 0x299048u;
            // 0x299048: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x29904Cu;
        goto label_29904c;
    }
    ctx->pc = 0x299044u;
    SET_GPR_U32(ctx, 31, 0x29904Cu);
    ctx->pc = 0x299048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299044u;
            // 0x299048: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29904Cu; }
        if (ctx->pc != 0x29904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29904Cu; }
        if (ctx->pc != 0x29904Cu) { return; }
    }
    ctx->pc = 0x29904Cu;
label_29904c:
    // 0x29904c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_299050:
    // 0x299050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x299050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299054:
    // 0x299054: 0xc0a6330  jal         func_298CC0
label_299058:
    if (ctx->pc == 0x299058u) {
        ctx->pc = 0x299058u;
            // 0x299058: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = 0x29905Cu;
        goto label_29905c;
    }
    ctx->pc = 0x299054u;
    SET_GPR_U32(ctx, 31, 0x29905Cu);
    ctx->pc = 0x299058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299054u;
            // 0x299058: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x29905Cu;
label_29905c:
    // 0x29905c: 0x10000236  b           . + 4 + (0x236 << 2)
label_299060:
    if (ctx->pc == 0x299060u) {
        ctx->pc = 0x299064u;
        goto label_299064;
    }
    ctx->pc = 0x29905Cu;
    {
        const bool branch_taken_0x29905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29905c) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x299064u;
label_299064:
    // 0x299064: 0x0  nop
    ctx->pc = 0x299064u;
    // NOP
label_299068:
    // 0x299068: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x299068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_29906c:
    // 0x29906c: 0xc0a456c  jal         func_2915B0
label_299070:
    if (ctx->pc == 0x299070u) {
        ctx->pc = 0x299070u;
            // 0x299070: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x299074u;
        goto label_299074;
    }
    ctx->pc = 0x29906Cu;
    SET_GPR_U32(ctx, 31, 0x299074u);
    ctx->pc = 0x299070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29906Cu;
            // 0x299070: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299074u; }
        if (ctx->pc != 0x299074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299074u; }
        if (ctx->pc != 0x299074u) { return; }
    }
    ctx->pc = 0x299074u;
label_299074:
    // 0x299074: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x299074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_299078:
    // 0x299078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x299078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29907c:
    // 0x29907c: 0xc0a6330  jal         func_298CC0
label_299080:
    if (ctx->pc == 0x299080u) {
        ctx->pc = 0x299080u;
            // 0x299080: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x299084u;
        goto label_299084;
    }
    ctx->pc = 0x29907Cu;
    SET_GPR_U32(ctx, 31, 0x299084u);
    ctx->pc = 0x299080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29907Cu;
            // 0x299080: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x299084u;
label_299084:
    // 0x299084: 0x1000022c  b           . + 4 + (0x22C << 2)
label_299088:
    if (ctx->pc == 0x299088u) {
        ctx->pc = 0x29908Cu;
        goto label_29908c;
    }
    ctx->pc = 0x299084u;
    {
        const bool branch_taken_0x299084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299084) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x29908Cu;
label_29908c:
    // 0x29908c: 0x0  nop
    ctx->pc = 0x29908cu;
    // NOP
label_299090:
    // 0x299090: 0x1000021f  b           . + 4 + (0x21F << 2)
label_299094:
    if (ctx->pc == 0x299094u) {
        ctx->pc = 0x299094u;
            // 0x299094: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x299098u;
        goto label_299098;
    }
    ctx->pc = 0x299090u;
    {
        const bool branch_taken_0x299090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299090u;
            // 0x299094: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299090) {
            ctx->pc = 0x299910u;
            goto label_299910;
        }
    }
    ctx->pc = 0x299098u;
label_299098:
    // 0x299098: 0x27a203e4  addiu       $v0, $sp, 0x3E4
    ctx->pc = 0x299098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
label_29909c:
    // 0x29909c: 0xc62f0004  lwc1        $f15, 0x4($s1)
    ctx->pc = 0x29909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2990a0:
    // 0x2990a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2990a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2990a4:
    // 0x2990a4: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2990a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2990a8:
    // 0x2990a8: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2990ac:
    // 0x2990ac: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x2990acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2990b0:
    // 0x2990b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2990b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2990b4:
    // 0x2990b4: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2990b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2990b8:
    // 0x2990b8: 0xc68b0004  lwc1        $f11, 0x4($s4)
    ctx->pc = 0x2990b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2990bc:
    // 0x2990bc: 0xc68a0008  lwc1        $f10, 0x8($s4)
    ctx->pc = 0x2990bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2990c0:
    // 0x2990c0: 0xc689000c  lwc1        $f9, 0xC($s4)
    ctx->pc = 0x2990c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2990c4:
    // 0x2990c4: 0xc6c80000  lwc1        $f8, 0x0($s6)
    ctx->pc = 0x2990c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2990c8:
    // 0x2990c8: 0xc6c70004  lwc1        $f7, 0x4($s6)
    ctx->pc = 0x2990c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2990cc:
    // 0x2990cc: 0xc6c60008  lwc1        $f6, 0x8($s6)
    ctx->pc = 0x2990ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2990d0:
    // 0x2990d0: 0xc6c5000c  lwc1        $f5, 0xC($s6)
    ctx->pc = 0x2990d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2990d4:
    // 0x2990d4: 0xc6e40000  lwc1        $f4, 0x0($s7)
    ctx->pc = 0x2990d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2990d8:
    // 0x2990d8: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2990d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2990dc:
    // 0x2990dc: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x2990dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2990e0:
    // 0x2990e0: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x2990e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2990e4:
    // 0x2990e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2990e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2990e8:
    // 0x2990e8: 0xe7a003e0  swc1        $f0, 0x3E0($sp)
    ctx->pc = 0x2990e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_2990ec:
    // 0x2990ec: 0xe44f0000  swc1        $f15, 0x0($v0)
    ctx->pc = 0x2990ecu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2990f0:
    // 0x2990f0: 0x27a203e8  addiu       $v0, $sp, 0x3E8
    ctx->pc = 0x2990f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_2990f4:
    // 0x2990f4: 0xe44e0000  swc1        $f14, 0x0($v0)
    ctx->pc = 0x2990f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2990f8:
    // 0x2990f8: 0x27a203ec  addiu       $v0, $sp, 0x3EC
    ctx->pc = 0x2990f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
label_2990fc:
    // 0x2990fc: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x2990fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_299100:
    // 0x299100: 0x27a203f0  addiu       $v0, $sp, 0x3F0
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_299104:
    // 0x299104: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x299104u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_299108:
    // 0x299108: 0xe44b0004  swc1        $f11, 0x4($v0)
    ctx->pc = 0x299108u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_29910c:
    // 0x29910c: 0xe44a0008  swc1        $f10, 0x8($v0)
    ctx->pc = 0x29910cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_299110:
    // 0x299110: 0xe449000c  swc1        $f9, 0xC($v0)
    ctx->pc = 0x299110u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_299114:
    // 0x299114: 0x27a20400  addiu       $v0, $sp, 0x400
    ctx->pc = 0x299114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_299118:
    // 0x299118: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x299118u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29911c:
    // 0x29911c: 0xe4470004  swc1        $f7, 0x4($v0)
    ctx->pc = 0x29911cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_299120:
    // 0x299120: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x299120u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_299124:
    // 0x299124: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x299124u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_299128:
    // 0x299128: 0xe7c40000  swc1        $f4, 0x0($fp)
    ctx->pc = 0x299128u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_29912c:
    // 0x29912c: 0xe7c30004  swc1        $f3, 0x4($fp)
    ctx->pc = 0x29912cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_299130:
    // 0x299130: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x299130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_299134:
    // 0x299134: 0xc0a45e8  jal         func_2917A0
label_299138:
    if (ctx->pc == 0x299138u) {
        ctx->pc = 0x299138u;
            // 0x299138: 0xe7c1000c  swc1        $f1, 0xC($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->pc = 0x29913Cu;
        goto label_29913c;
    }
    ctx->pc = 0x299134u;
    SET_GPR_U32(ctx, 31, 0x29913Cu);
    ctx->pc = 0x299138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299134u;
            // 0x299138: 0xe7c1000c  swc1        $f1, 0xC($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29913Cu; }
        if (ctx->pc != 0x29913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29913Cu; }
        if (ctx->pc != 0x29913Cu) { return; }
    }
    ctx->pc = 0x29913Cu;
label_29913c:
    // 0x29913c: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x29913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_299140:
    // 0x299140: 0xc0827ac  jal         func_209EB0
label_299144:
    if (ctx->pc == 0x299144u) {
        ctx->pc = 0x299144u;
            // 0x299144: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->pc = 0x299148u;
        goto label_299148;
    }
    ctx->pc = 0x299140u;
    SET_GPR_U32(ctx, 31, 0x299148u);
    ctx->pc = 0x299144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299140u;
            // 0x299144: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299148u; }
        if (ctx->pc != 0x299148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299148u; }
        if (ctx->pc != 0x299148u) { return; }
    }
    ctx->pc = 0x299148u;
label_299148:
    // 0x299148: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x299148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_29914c:
    // 0x29914c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x29914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_299150:
    // 0x299150: 0xc0a6330  jal         func_298CC0
label_299154:
    if (ctx->pc == 0x299154u) {
        ctx->pc = 0x299154u;
            // 0x299154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x299158u;
        goto label_299158;
    }
    ctx->pc = 0x299150u;
    SET_GPR_U32(ctx, 31, 0x299158u);
    ctx->pc = 0x299154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299150u;
            // 0x299154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x299158u;
label_299158:
    // 0x299158: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x299158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29915c:
    // 0x29915c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x29915cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_299160:
    // 0x299160: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x299160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_299164:
    // 0x299164: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x299164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_299168:
    // 0x299168: 0xafa303c0  sw          $v1, 0x3C0($sp)
    ctx->pc = 0x299168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 3));
label_29916c:
    // 0x29916c: 0x0  nop
    ctx->pc = 0x29916cu;
    // NOP
label_299170:
    // 0x299170: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x299170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_299174:
    // 0x299174: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x299174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_299178:
    // 0x299178: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_29917c:
    if (ctx->pc == 0x29917Cu) {
        ctx->pc = 0x299180u;
        goto label_299180;
    }
    ctx->pc = 0x299178u;
    {
        const bool branch_taken_0x299178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299178) {
            ctx->pc = 0x299098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299098;
        }
    }
    ctx->pc = 0x299180u;
label_299180:
    // 0x299180: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_299184:
    if (ctx->pc == 0x299184u) {
        ctx->pc = 0x299188u;
        goto label_299188;
    }
    ctx->pc = 0x299180u;
    {
        const bool branch_taken_0x299180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299180) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x299188u;
label_299188:
    // 0x299188: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x299188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29918c:
    // 0x29918c: 0x11020004  beq         $t0, $v0, . + 4 + (0x4 << 2)
label_299190:
    if (ctx->pc == 0x299190u) {
        ctx->pc = 0x299190u;
            // 0x299190: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x299194u;
        goto label_299194;
    }
    ctx->pc = 0x29918Cu;
    {
        const bool branch_taken_0x29918c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x299190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29918Cu;
            // 0x299190: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29918c) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x299194u;
label_299194:
    // 0x299194: 0x15020008  bne         $t0, $v0, . + 4 + (0x8 << 2)
label_299198:
    if (ctx->pc == 0x299198u) {
        ctx->pc = 0x29919Cu;
        goto label_29919c;
    }
    ctx->pc = 0x299194u;
    {
        const bool branch_taken_0x299194 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x299194) {
            ctx->pc = 0x2991B8u;
            goto label_2991b8;
        }
    }
    ctx->pc = 0x29919Cu;
label_29919c:
    // 0x29919c: 0x0  nop
    ctx->pc = 0x29919cu;
    // NOP
label_2991a0:
    // 0x2991a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2991a4:
    // 0x2991a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2991a8:
    // 0x2991a8: 0x320f809  jalr        $t9
label_2991ac:
    if (ctx->pc == 0x2991ACu) {
        ctx->pc = 0x2991ACu;
            // 0x2991ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2991B0u;
        goto label_2991b0;
    }
    ctx->pc = 0x2991A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2991B0u);
        ctx->pc = 0x2991ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991A8u;
            // 0x2991ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2991B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2991B0u; }
            if (ctx->pc != 0x2991B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2991B0u;
label_2991b0:
    // 0x2991b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2991b4:
    if (ctx->pc == 0x2991B4u) {
        ctx->pc = 0x2991B4u;
            // 0x2991b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2991B8u;
        goto label_2991b8;
    }
    ctx->pc = 0x2991B0u;
    {
        const bool branch_taken_0x2991b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991B0u;
            // 0x2991b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991b0) {
            ctx->pc = 0x2991D0u;
            goto label_2991d0;
        }
    }
    ctx->pc = 0x2991B8u;
label_2991b8:
    // 0x2991b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2991b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2991bc:
    // 0x2991bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2991c0:
    // 0x2991c0: 0x320f809  jalr        $t9
label_2991c4:
    if (ctx->pc == 0x2991C4u) {
        ctx->pc = 0x2991C8u;
        goto label_2991c8;
    }
    ctx->pc = 0x2991C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2991C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2991C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2991C8u; }
            if (ctx->pc != 0x2991C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2991C8u;
label_2991c8:
    // 0x2991c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2991c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2991cc:
    // 0x2991cc: 0x0  nop
    ctx->pc = 0x2991ccu;
    // NOP
label_2991d0:
    // 0x2991d0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2991d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2991d4:
    // 0x2991d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2991d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2991d8:
    // 0x2991d8: 0x320f809  jalr        $t9
label_2991dc:
    if (ctx->pc == 0x2991DCu) {
        ctx->pc = 0x2991DCu;
            // 0x2991dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2991E0u;
        goto label_2991e0;
    }
    ctx->pc = 0x2991D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2991E0u);
        ctx->pc = 0x2991DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991D8u;
            // 0x2991dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2991E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2991E0u; }
            if (ctx->pc != 0x2991E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2991E0u;
label_2991e0:
    // 0x2991e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2991e4:
    // 0x2991e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2991e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2991e8:
    // 0x2991e8: 0x12430017  beq         $s2, $v1, . + 4 + (0x17 << 2)
label_2991ec:
    if (ctx->pc == 0x2991ECu) {
        ctx->pc = 0x2991F0u;
        goto label_2991f0;
    }
    ctx->pc = 0x2991E8u;
    {
        const bool branch_taken_0x2991e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2991e8) {
            ctx->pc = 0x299248u;
            goto label_299248;
        }
    }
    ctx->pc = 0x2991F0u;
label_2991f0:
    // 0x2991f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2991f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2991f4:
    // 0x2991f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2991f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2991f8:
    // 0x2991f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2991f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2991fc:
    // 0x2991fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2991fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_299200:
    // 0x299200: 0x320f809  jalr        $t9
label_299204:
    if (ctx->pc == 0x299204u) {
        ctx->pc = 0x299204u;
            // 0x299204: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x299208u;
        goto label_299208;
    }
    ctx->pc = 0x299200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299208u);
        ctx->pc = 0x299204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299200u;
            // 0x299204: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x299208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x299208u; }
            if (ctx->pc != 0x299208u) { return; }
        }
        }
    }
    ctx->pc = 0x299208u;
label_299208:
    // 0x299208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29920c:
    if (ctx->pc == 0x29920Cu) {
        ctx->pc = 0x29920Cu;
            // 0x29920c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x299210u;
        goto label_299210;
    }
    ctx->pc = 0x299208u;
    {
        const bool branch_taken_0x299208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299208u;
            // 0x29920c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299208) {
            ctx->pc = 0x299220u;
            goto label_299220;
        }
    }
    ctx->pc = 0x299210u;
label_299210:
    // 0x299210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x299210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299214:
    // 0x299214: 0xc0a6330  jal         func_298CC0
label_299218:
    if (ctx->pc == 0x299218u) {
        ctx->pc = 0x299218u;
            // 0x299218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29921Cu;
        goto label_29921c;
    }
    ctx->pc = 0x299214u;
    SET_GPR_U32(ctx, 31, 0x29921Cu);
    ctx->pc = 0x299218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299214u;
            // 0x299218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    goto label_298cc0;
    ctx->pc = 0x29921Cu;
label_29921c:
    // 0x29921c: 0x0  nop
    ctx->pc = 0x29921cu;
    // NOP
label_299220:
    // 0x299220: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x299220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_299224:
    // 0x299224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x299224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_299228:
    // 0x299228: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x299228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29922c:
    // 0x29922c: 0x320f809  jalr        $t9
label_299230:
    if (ctx->pc == 0x299230u) {
        ctx->pc = 0x299230u;
            // 0x299230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x299234u;
        goto label_299234;
    }
    ctx->pc = 0x29922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299234u);
        ctx->pc = 0x299230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29922Cu;
            // 0x299230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x299234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x299234u; }
            if (ctx->pc != 0x299234u) { return; }
        }
        }
    }
    ctx->pc = 0x299234u;
label_299234:
    // 0x299234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_299238:
    // 0x299238: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x299238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29923c:
    // 0x29923c: 0x1643ffec  bne         $s2, $v1, . + 4 + (-0x14 << 2)
label_299240:
    if (ctx->pc == 0x299240u) {
        ctx->pc = 0x299244u;
        goto label_299244;
    }
    ctx->pc = 0x29923Cu;
    {
        const bool branch_taken_0x29923c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x29923c) {
            ctx->pc = 0x2991F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2991f0;
        }
    }
    ctx->pc = 0x299244u;
label_299244:
    // 0x299244: 0x0  nop
    ctx->pc = 0x299244u;
    // NOP
label_299248:
    // 0x299248: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_29924c:
    if (ctx->pc == 0x29924Cu) {
        ctx->pc = 0x299250u;
        goto label_299250;
    }
    ctx->pc = 0x299248u;
    {
        const bool branch_taken_0x299248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299248) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x299250u;
label_299250:
    // 0x299250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_299254:
    // 0x299254: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x299254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_299258:
    // 0x299258: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x299258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29925c:
    // 0x29925c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_299260:
    // 0x299260: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x299260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_299264:
    // 0x299264: 0xc0a5bbc  jal         func_296EF0
label_299268:
    if (ctx->pc == 0x299268u) {
        ctx->pc = 0x299268u;
            // 0x299268: 0x27a60560  addiu       $a2, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x29926Cu;
        goto label_29926c;
    }
    ctx->pc = 0x299264u;
    SET_GPR_U32(ctx, 31, 0x29926Cu);
    ctx->pc = 0x299268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299264u;
            // 0x299268: 0x27a60560  addiu       $a2, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EF0u;
    if (runtime->hasFunction(0x296EF0u)) {
        auto targetFn = runtime->lookupFunction(0x296EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29926Cu; }
        if (ctx->pc != 0x29926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296EF0_0x296ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29926Cu; }
        if (ctx->pc != 0x29926Cu) { return; }
    }
    ctx->pc = 0x29926Cu;
label_29926c:
    // 0x29926c: 0x10000010  b           . + 4 + (0x10 << 2)
label_299270:
    if (ctx->pc == 0x299270u) {
        ctx->pc = 0x299274u;
        goto label_299274;
    }
    ctx->pc = 0x29926Cu;
    {
        const bool branch_taken_0x29926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29926c) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x299274u;
label_299274:
    // 0x299274: 0x0  nop
    ctx->pc = 0x299274u;
    // NOP
label_299278:
    // 0x299278: 0xc081974  jal         func_2065D0
label_29927c:
    if (ctx->pc == 0x29927Cu) {
        ctx->pc = 0x299280u;
        goto label_299280;
    }
    ctx->pc = 0x299278u;
    SET_GPR_U32(ctx, 31, 0x299280u);
    ctx->pc = 0x2065D0u;
    if (runtime->hasFunction(0x2065D0u)) {
        auto targetFn = runtime->lookupFunction(0x2065D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299280u; }
        if (ctx->pc != 0x299280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002065D0_0x2065d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299280u; }
        if (ctx->pc != 0x299280u) { return; }
    }
    ctx->pc = 0x299280u;
label_299280:
    // 0x299280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_299284:
    // 0x299284: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x299284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_299288:
    // 0x299288: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x299288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_29928c:
    // 0x29928c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x29928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_299290:
    // 0x299290: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x299290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_299294:
    // 0x299294: 0xc0a6030  jal         func_2980C0
label_299298:
    if (ctx->pc == 0x299298u) {
        ctx->pc = 0x299298u;
            // 0x299298: 0x27a60560  addiu       $a2, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x29929Cu;
        goto label_29929c;
    }
    ctx->pc = 0x299294u;
    SET_GPR_U32(ctx, 31, 0x29929Cu);
    ctx->pc = 0x299298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299294u;
            // 0x299298: 0x27a60560  addiu       $a2, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2980C0u;
    if (runtime->hasFunction(0x2980C0u)) {
        auto targetFn = runtime->lookupFunction(0x2980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29929Cu; }
        if (ctx->pc != 0x29929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002980C0_0x2980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29929Cu; }
        if (ctx->pc != 0x29929Cu) { return; }
    }
    ctx->pc = 0x29929Cu;
label_29929c:
    // 0x29929c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2992a0:
    if (ctx->pc == 0x2992A0u) {
        ctx->pc = 0x2992A4u;
        goto label_2992a4;
    }
    ctx->pc = 0x29929Cu;
    {
        const bool branch_taken_0x29929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29929c) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x2992A4u;
label_2992a4:
    // 0x2992a4: 0x0  nop
    ctx->pc = 0x2992a4u;
    // NOP
label_2992a8:
    // 0x2992a8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_2992ac:
    if (ctx->pc == 0x2992ACu) {
        ctx->pc = 0x2992B0u;
        goto label_2992b0;
    }
    ctx->pc = 0x2992A8u;
    {
        const bool branch_taken_0x2992a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2992a8) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x2992B0u;
label_2992b0:
    // 0x2992b0: 0xc7ac0560  lwc1        $f12, 0x560($sp)
    ctx->pc = 0x2992b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2992b4:
    // 0x2992b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2992b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2992b8:
    // 0x2992b8: 0x0  nop
    ctx->pc = 0x2992b8u;
    // NOP
label_2992bc:
    // 0x2992bc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2992bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2992c0:
    // 0x2992c0: 0x4501019d  bc1t        . + 4 + (0x19D << 2)
label_2992c4:
    if (ctx->pc == 0x2992C4u) {
        ctx->pc = 0x2992C4u;
            // 0x2992c4: 0x27a40560  addiu       $a0, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x2992C8u;
        goto label_2992c8;
    }
    ctx->pc = 0x2992C0u;
    {
        const bool branch_taken_0x2992c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2992C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2992C0u;
            // 0x2992c4: 0x27a40560  addiu       $a0, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992c0) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0xc0a66c4  jal         func_299B10
label_2992cc:
    if (ctx->pc == 0x2992CCu) {
        ctx->pc = 0x2992D0u;
        goto label_2992d0;
    }
    ctx->pc = 0x2992C8u;
    SET_GPR_U32(ctx, 31, 0x2992D0u);
    ctx->pc = 0x299B10u;
    if (runtime->hasFunction(0x299B10u)) {
        auto targetFn = runtime->lookupFunction(0x299B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D0u; }
        if (ctx->pc != 0x2992D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299B10_0x299b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D0u; }
        if (ctx->pc != 0x2992D0u) { return; }
    }
    ctx->pc = 0x2992D0u;
label_2992d0:
    // 0x2992d0: 0xafa005b8  sw          $zero, 0x5B8($sp)
    ctx->pc = 0x2992d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1464), GPR_U32(ctx, 0));
label_2992d4:
    // 0x2992d4: 0x27b205bc  addiu       $s2, $sp, 0x5BC
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_2992d8:
    // 0x2992d8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2992d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2992dc:
    // 0x2992dc: 0x27b305c0  addiu       $s3, $sp, 0x5C0
    ctx->pc = 0x2992dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_2992e0:
    // 0x2992e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2992e4:
    // 0x2992e4: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x2992e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2992e8:
    // 0x2992e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2992e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2992ec:
    // 0x2992ec: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x2992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_2992f0:
    // 0x2992f0: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2992f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_2992f4:
    // 0x2992f4: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x2992f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_2992f8:
    // 0x2992f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2992f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2992fc:
    // 0x2992fc: 0x27a50144  addiu       $a1, $sp, 0x144
    ctx->pc = 0x2992fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_299300:
    // 0x299300: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x299300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_299304:
    // 0x299304: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x299304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_299308:
    // 0x299308: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x299308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_29930c:
    // 0x29930c: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x29930cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_299310:
    // 0x299310: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x299310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_299314:
    // 0x299314: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_299318:
    // 0x299318: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x299318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_29931c:
    // 0x29931c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_299320:
    // 0x299320: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x299320u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_299324:
    // 0x299324: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x299324u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_299328:
    // 0x299328: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x299328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
label_29932c:
    // 0x29932c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x29932cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
label_299330:
    // 0x299330: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x299330u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
label_299334:
    // 0x299334: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x299334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
label_299338:
    // 0x299338: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x299338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
label_29933c:
    // 0x29933c: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x29933cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
label_299340:
    // 0x299340: 0xad200020  sw          $zero, 0x20($t1)
    ctx->pc = 0x299340u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 0));
label_299344:
    // 0x299344: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x299344u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
label_299348:
    // 0x299348: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x299348u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
label_29934c:
    // 0x29934c: 0xad20002c  sw          $zero, 0x2C($t1)
    ctx->pc = 0x29934cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 0));
label_299350:
    // 0x299350: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x299350u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_299354:
    // 0x299354: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x299354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_299358:
    // 0x299358: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x299358u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_29935c:
    // 0x29935c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x29935cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_299360:
    // 0x299360: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x299360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_299364:
    // 0x299364: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x299364u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_299368:
    // 0x299368: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x299368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_29936c:
    // 0x29936c: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x29936cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
label_299370:
    // 0x299370: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x299370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
label_299374:
    // 0x299374: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x299374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_299378:
    // 0x299378: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x299378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_29937c:
    // 0x29937c: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x29937cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
label_299380:
    // 0x299380: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x299380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_299384:
    // 0x299384: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x299384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_299388:
    // 0x299388: 0xad020028  sw          $v0, 0x28($t0)
    ctx->pc = 0x299388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 2));
label_29938c:
    // 0x29938c: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x29938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
label_299390:
    // 0x299390: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x299390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_299394:
    // 0x299394: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x299394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
label_299398:
    // 0x299398: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x299398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_29939c:
    // 0x29939c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993a0:
    // 0x2993a0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2993a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2993a4:
    // 0x2993a4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2993a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993a8:
    // 0x2993a8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2993a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2993ac:
    // 0x2993ac: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2993acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993b0:
    // 0x2993b0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2993b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2993b4:
    // 0x2993b4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2993b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993b8:
    // 0x2993b8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2993b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2993bc:
    // 0x2993bc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2993bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993c0:
    // 0x2993c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2993c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2993c4:
    // 0x2993c4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2993c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993c8:
    // 0x2993c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2993c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2993cc:
    // 0x2993cc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2993ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993d0:
    // 0x2993d0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2993d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2993d4:
    // 0x2993d4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2993d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993d8:
    // 0x2993d8: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2993d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2993dc:
    // 0x2993dc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2993dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993e0:
    // 0x2993e0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2993e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2993e4:
    // 0x2993e4: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2993e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993e8:
    // 0x2993e8: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2993e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2993ec:
    // 0x2993ec: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2993ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993f0:
    // 0x2993f0: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2993f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2993f4:
    // 0x2993f4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2993f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2993f8:
    // 0x2993f8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2993f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2993fc:
    // 0x2993fc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2993fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299400:
    // 0x299400: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x299400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_299404:
    // 0x299404: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x299404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299408:
    // 0x299408: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x299408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_29940c:
    // 0x29940c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x29940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299410:
    // 0x299410: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x299410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_299414:
    // 0x299414: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x299414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299418:
    // 0x299418: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x299418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_29941c:
    // 0x29941c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x29941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299420:
    // 0x299420: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x299420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_299424:
    // 0x299424: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x299424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299428:
    // 0x299428: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x299428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_29942c:
    // 0x29942c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_299430:
    // 0x299430: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299434:
    // 0x299434: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_299438:
    // 0x299438: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x299438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_29943c:
    // 0x29943c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_299440:
    if (ctx->pc == 0x299440u) {
        ctx->pc = 0x299440u;
            // 0x299440: 0x27a405b8  addiu       $a0, $sp, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
        ctx->pc = 0x299444u;
        goto label_299444;
    }
    ctx->pc = 0x29943Cu;
    {
        const bool branch_taken_0x29943c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x299440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29943Cu;
            // 0x299440: 0x27a405b8  addiu       $a0, $sp, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29943c) {
            ctx->pc = 0x299450u;
            goto label_299450;
        }
    }
    ctx->pc = 0x299444u;
label_299444:
    // 0x299444: 0xc0a728c  jal         func_29CA30
label_299448:
    if (ctx->pc == 0x299448u) {
        ctx->pc = 0x299448u;
            // 0x299448: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x29944Cu;
        goto label_29944c;
    }
    ctx->pc = 0x299444u;
    SET_GPR_U32(ctx, 31, 0x29944Cu);
    ctx->pc = 0x299448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299444u;
            // 0x299448: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29944Cu; }
        if (ctx->pc != 0x29944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29944Cu; }
        if (ctx->pc != 0x29944Cu) { return; }
    }
    ctx->pc = 0x29944Cu;
label_29944c:
    // 0x29944c: 0x0  nop
    ctx->pc = 0x29944cu;
    // NOP
label_299450:
    // 0x299450: 0x8e4e0000  lw          $t6, 0x0($s2)
    ctx->pc = 0x299450u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299454:
    // 0x299454: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x299454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_299458:
    // 0x299458: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x299458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_29945c:
    // 0x29945c: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x29945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_299460:
    // 0x299460: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_299464:
    // 0x299464: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x299464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_299468:
    // 0x299468: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_29946c:
    // 0x29946c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_299470:
    // 0x299470: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x299470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_299474:
    // 0x299474: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x299474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_299478:
    // 0x299478: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x299478u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_29947c:
    // 0x29947c: 0x25cd0001  addiu       $t5, $t6, 0x1
    ctx->pc = 0x29947cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_299480:
    // 0x299480: 0xe60c0  sll         $t4, $t6, 3
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_299484:
    // 0x299484: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x299484u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_299488:
    // 0x299488: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x299488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
label_29948c:
    // 0x29948c: 0xc6900  sll         $t5, $t4, 4
    ctx->pc = 0x29948cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_299490:
    // 0x299490: 0x27ae012c  addiu       $t6, $sp, 0x12C
    ctx->pc = 0x299490u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_299494:
    // 0x299494: 0x8fac05b8  lw          $t4, 0x5B8($sp)
    ctx->pc = 0x299494u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1464)));
label_299498:
    // 0x299498: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x299498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29949c:
    // 0x29949c: 0x27af0128  addiu       $t7, $sp, 0x128
    ctx->pc = 0x29949cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_2994a0:
    // 0x2994a0: 0x27b40124  addiu       $s4, $sp, 0x124
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2994a4:
    // 0x2994a4: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x2994a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2994a8:
    // 0x2994a8: 0x27b60580  addiu       $s6, $sp, 0x580
    ctx->pc = 0x2994a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_2994ac:
    // 0x2994ac: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x2994acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_2994b0:
    // 0x2994b0: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x2994b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_2994b4:
    // 0x2994b4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2994b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994b8:
    // 0x2994b8: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x2994b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_2994bc:
    // 0x2994bc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2994bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994c0:
    // 0x2994c0: 0xe5800010  swc1        $f0, 0x10($t4)
    ctx->pc = 0x2994c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
label_2994c4:
    // 0x2994c4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2994c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994c8:
    // 0x2994c8: 0xe5800014  swc1        $f0, 0x14($t4)
    ctx->pc = 0x2994c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 20), bits); }
label_2994cc:
    // 0x2994cc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2994ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994d0:
    // 0x2994d0: 0xe5800018  swc1        $f0, 0x18($t4)
    ctx->pc = 0x2994d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
label_2994d4:
    // 0x2994d4: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x2994d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994d8:
    // 0x2994d8: 0xe580001c  swc1        $f0, 0x1C($t4)
    ctx->pc = 0x2994d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 28), bits); }
label_2994dc:
    // 0x2994dc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2994dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994e0:
    // 0x2994e0: 0xe5800020  swc1        $f0, 0x20($t4)
    ctx->pc = 0x2994e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 32), bits); }
label_2994e4:
    // 0x2994e4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x2994e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994e8:
    // 0x2994e8: 0xe5800024  swc1        $f0, 0x24($t4)
    ctx->pc = 0x2994e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 36), bits); }
label_2994ec:
    // 0x2994ec: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x2994ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994f0:
    // 0x2994f0: 0xe5800028  swc1        $f0, 0x28($t4)
    ctx->pc = 0x2994f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 40), bits); }
label_2994f4:
    // 0x2994f4: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x2994f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2994f8:
    // 0x2994f8: 0xe580002c  swc1        $f0, 0x2C($t4)
    ctx->pc = 0x2994f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 44), bits); }
label_2994fc:
    // 0x2994fc: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x2994fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299500:
    // 0x299500: 0xe5800030  swc1        $f0, 0x30($t4)
    ctx->pc = 0x299500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 48), bits); }
label_299504:
    // 0x299504: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x299504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299508:
    // 0x299508: 0xe5800034  swc1        $f0, 0x34($t4)
    ctx->pc = 0x299508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 52), bits); }
label_29950c:
    // 0x29950c: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x29950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299510:
    // 0x299510: 0xe5800038  swc1        $f0, 0x38($t4)
    ctx->pc = 0x299510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 56), bits); }
label_299514:
    // 0x299514: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x299514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299518:
    // 0x299518: 0xe580003c  swc1        $f0, 0x3C($t4)
    ctx->pc = 0x299518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 60), bits); }
label_29951c:
    // 0x29951c: 0xc5400020  lwc1        $f0, 0x20($t2)
    ctx->pc = 0x29951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299520:
    // 0x299520: 0xe5800040  swc1        $f0, 0x40($t4)
    ctx->pc = 0x299520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 64), bits); }
label_299524:
    // 0x299524: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x299524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299528:
    // 0x299528: 0xe5800044  swc1        $f0, 0x44($t4)
    ctx->pc = 0x299528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 68), bits); }
label_29952c:
    // 0x29952c: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x29952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299530:
    // 0x299530: 0xe5800048  swc1        $f0, 0x48($t4)
    ctx->pc = 0x299530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 72), bits); }
label_299534:
    // 0x299534: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x299534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299538:
    // 0x299538: 0xe580004c  swc1        $f0, 0x4C($t4)
    ctx->pc = 0x299538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 76), bits); }
label_29953c:
    // 0x29953c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x29953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299540:
    // 0x299540: 0xe5800050  swc1        $f0, 0x50($t4)
    ctx->pc = 0x299540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 80), bits); }
label_299544:
    // 0x299544: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x299544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299548:
    // 0x299548: 0xe5800054  swc1        $f0, 0x54($t4)
    ctx->pc = 0x299548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 84), bits); }
label_29954c:
    // 0x29954c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x29954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299550:
    // 0x299550: 0xe5800058  swc1        $f0, 0x58($t4)
    ctx->pc = 0x299550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 88), bits); }
label_299554:
    // 0x299554: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x299554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299558:
    // 0x299558: 0xe580005c  swc1        $f0, 0x5C($t4)
    ctx->pc = 0x299558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 92), bits); }
label_29955c:
    // 0x29955c: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x29955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299560:
    // 0x299560: 0xe5800060  swc1        $f0, 0x60($t4)
    ctx->pc = 0x299560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 96), bits); }
label_299564:
    // 0x299564: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x299564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299568:
    // 0x299568: 0xe5800064  swc1        $f0, 0x64($t4)
    ctx->pc = 0x299568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 100), bits); }
label_29956c:
    // 0x29956c: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x29956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299570:
    // 0x299570: 0xe5800068  swc1        $f0, 0x68($t4)
    ctx->pc = 0x299570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 104), bits); }
label_299574:
    // 0x299574: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x299574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299578:
    // 0x299578: 0xe580006c  swc1        $f0, 0x6C($t4)
    ctx->pc = 0x299578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 108), bits); }
label_29957c:
    // 0x29957c: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x29957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299580:
    // 0x299580: 0xe5800070  swc1        $f0, 0x70($t4)
    ctx->pc = 0x299580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 112), bits); }
label_299584:
    // 0x299584: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x299584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299588:
    // 0x299588: 0xe5800074  swc1        $f0, 0x74($t4)
    ctx->pc = 0x299588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 116), bits); }
label_29958c:
    // 0x29958c: 0xc5200028  lwc1        $f0, 0x28($t1)
    ctx->pc = 0x29958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299590:
    // 0x299590: 0xe5800078  swc1        $f0, 0x78($t4)
    ctx->pc = 0x299590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 120), bits); }
label_299594:
    // 0x299594: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x299594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299598:
    // 0x299598: 0xe580007c  swc1        $f0, 0x7C($t4)
    ctx->pc = 0x299598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 124), bits); }
label_29959c:
    // 0x29959c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2995a0:
    // 0x2995a0: 0xe5800080  swc1        $f0, 0x80($t4)
    ctx->pc = 0x2995a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 128), bits); }
label_2995a4:
    // 0x2995a4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2995a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2995a8:
    // 0x2995a8: 0xe5800084  swc1        $f0, 0x84($t4)
    ctx->pc = 0x2995a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 132), bits); }
label_2995ac:
    // 0x2995ac: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2995acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2995b0:
    // 0x2995b0: 0xe5800088  swc1        $f0, 0x88($t4)
    ctx->pc = 0x2995b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 136), bits); }
label_2995b4:
    // 0x2995b4: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2995b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2995b8:
    // 0x2995b8: 0xe580008c  swc1        $f0, 0x8C($t4)
    ctx->pc = 0x2995b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 140), bits); }
label_2995bc:
    // 0x2995bc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2995bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2995c0:
    // 0x2995c0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2995c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2995c4:
    // 0x2995c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2995c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2995c8:
    // 0x2995c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2995c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2995cc:
    // 0x2995cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2995ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2995d0:
    // 0x2995d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2995d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2995d4:
    // 0x2995d4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2995d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2995d8:
    // 0x2995d8: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2995d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_2995dc:
    // 0x2995dc: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2995dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_2995e0:
    // 0x2995e0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x2995e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_2995e4:
    // 0x2995e4: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_2995e8:
    // 0x2995e8: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_2995ec:
    // 0x2995ec: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x2995ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_2995f0:
    // 0x2995f0: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x2995f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
label_2995f4:
    // 0x2995f4: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x2995f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
label_2995f8:
    // 0x2995f8: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x2995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_2995fc:
    // 0x2995fc: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x2995fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_299600:
    // 0x299600: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x299600u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
label_299604:
    // 0x299604: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x299604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_299608:
    // 0x299608: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x299608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_29960c:
    // 0x29960c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29960cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_299610:
    // 0x299610: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x299610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_299614:
    // 0x299614: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x299614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_299618:
    // 0x299618: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x299618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_29961c:
    // 0x29961c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x29961cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
label_299620:
    // 0x299620: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x299620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_299624:
    // 0x299624: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x299624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
label_299628:
    // 0x299628: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x299628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_29962c:
    // 0x29962c: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x29962cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
label_299630:
    // 0x299630: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x299630u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
label_299634:
    // 0x299634: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x299634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_299638:
    // 0x299638: 0xaceb0014  sw          $t3, 0x14($a3)
    ctx->pc = 0x299638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 11));
label_29963c:
    // 0x29963c: 0xaceb0028  sw          $t3, 0x28($a3)
    ctx->pc = 0x29963cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 11));
label_299640:
    // 0x299640: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x299640u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
label_299644:
    // 0x299644: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x299644u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
label_299648:
    // 0x299648: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x299648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_29964c:
    // 0x29964c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x29964cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_299650:
    // 0x299650: 0xc7a10560  lwc1        $f1, 0x560($sp)
    ctx->pc = 0x299650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299654:
    // 0x299654: 0xc7a00564  lwc1        $f0, 0x564($sp)
    ctx->pc = 0x299654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299658:
    // 0x299658: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x299658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29965c:
    // 0x29965c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29965cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_299660:
    // 0x299660: 0xc7a00570  lwc1        $f0, 0x570($sp)
    ctx->pc = 0x299660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299664:
    // 0x299664: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x299664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_299668:
    // 0x299668: 0xc7a00574  lwc1        $f0, 0x574($sp)
    ctx->pc = 0x299668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29966c:
    // 0x29966c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_299670:
    // 0x299670: 0xc7a00578  lwc1        $f0, 0x578($sp)
    ctx->pc = 0x299670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299674:
    // 0x299674: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x299674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_299678:
    // 0x299678: 0xc7a0057c  lwc1        $f0, 0x57C($sp)
    ctx->pc = 0x299678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29967c:
    // 0x29967c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29967cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_299680:
    // 0x299680: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x299680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299684:
    // 0x299684: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x299684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_299688:
    // 0x299688: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x299688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29968c:
    // 0x29968c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x29968cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_299690:
    // 0x299690: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x299690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299694:
    // 0x299694: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x299694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_299698:
    // 0x299698: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x299698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29969c:
    // 0x29969c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x29969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2996a0:
    // 0x2996a0: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x2996a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996a4:
    // 0x2996a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2996a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2996a8:
    // 0x2996a8: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2996a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996ac:
    // 0x2996ac: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2996acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2996b0:
    // 0x2996b0: 0xc6c00018  lwc1        $f0, 0x18($s6)
    ctx->pc = 0x2996b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996b4:
    // 0x2996b4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2996b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2996b8:
    // 0x2996b8: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x2996b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996bc:
    // 0x2996bc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2996bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2996c0:
    // 0x2996c0: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x2996c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996c4:
    // 0x2996c4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2996c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2996c8:
    // 0x2996c8: 0xc6c00024  lwc1        $f0, 0x24($s6)
    ctx->pc = 0x2996c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996cc:
    // 0x2996cc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2996ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2996d0:
    // 0x2996d0: 0xc6c00028  lwc1        $f0, 0x28($s6)
    ctx->pc = 0x2996d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996d4:
    // 0x2996d4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2996d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2996d8:
    // 0x2996d8: 0xc6c0002c  lwc1        $f0, 0x2C($s6)
    ctx->pc = 0x2996d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996dc:
    // 0x2996dc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2996dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2996e0:
    // 0x2996e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2996e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996e4:
    // 0x2996e4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2996e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2996e8:
    // 0x2996e8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2996e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996ec:
    // 0x2996ec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2996ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2996f0:
    // 0x2996f0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2996f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996f4:
    // 0x2996f4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2996f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2996f8:
    // 0x2996f8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2996f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996fc:
    // 0x2996fc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2996fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_299700:
    // 0x299700: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x299700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299704:
    // 0x299704: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x299704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_299708:
    // 0x299708: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x299708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29970c:
    // 0x29970c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x29970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_299710:
    // 0x299710: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x299710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299714:
    // 0x299714: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x299714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_299718:
    // 0x299718: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x299718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29971c:
    // 0x29971c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x29971cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_299720:
    // 0x299720: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x299720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299724:
    // 0x299724: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x299724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_299728:
    // 0x299728: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x299728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29972c:
    // 0x29972c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x29972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_299730:
    // 0x299730: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x299730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299734:
    // 0x299734: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x299734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_299738:
    // 0x299738: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x299738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29973c:
    // 0x29973c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x29973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_299740:
    // 0x299740: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x299740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299744:
    // 0x299744: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x299744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_299748:
    // 0x299748: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x299748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29974c:
    // 0x29974c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x29974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_299750:
    // 0x299750: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x299750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299754:
    // 0x299754: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x299754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_299758:
    // 0x299758: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x299758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29975c:
    // 0x29975c: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x29975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_299760:
    // 0x299760: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x299760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_299764:
    // 0x299764: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x299764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299768:
    // 0x299768: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x299768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_29976c:
    // 0x29976c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_299770:
    // 0x299770: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_299774:
    if (ctx->pc == 0x299774u) {
        ctx->pc = 0x299774u;
            // 0x299774: 0x27a405b8  addiu       $a0, $sp, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
        ctx->pc = 0x299778u;
        goto label_299778;
    }
    ctx->pc = 0x299770u;
    {
        const bool branch_taken_0x299770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x299774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299770u;
            // 0x299774: 0x27a405b8  addiu       $a0, $sp, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299770) {
            ctx->pc = 0x299780u;
            goto label_299780;
        }
    }
    ctx->pc = 0x299778u;
label_299778:
    // 0x299778: 0xc0a728c  jal         func_29CA30
label_29977c:
    if (ctx->pc == 0x29977Cu) {
        ctx->pc = 0x29977Cu;
            // 0x29977c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x299780u;
        goto label_299780;
    }
    ctx->pc = 0x299778u;
    SET_GPR_U32(ctx, 31, 0x299780u);
    ctx->pc = 0x29977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299778u;
            // 0x29977c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299780u; }
        if (ctx->pc != 0x299780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299780u; }
        if (ctx->pc != 0x299780u) { return; }
    }
    ctx->pc = 0x299780u;
label_299780:
    // 0x299780: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x299780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299784:
    // 0x299784: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_299788:
    // 0x299788: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29978c:
    // 0x29978c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299790:
    // 0x299790: 0x27a405b8  addiu       $a0, $sp, 0x5B8
    ctx->pc = 0x299790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
label_299794:
    // 0x299794: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x299794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_299798:
    // 0x299798: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_29979c:
    // 0x29979c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x29979cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2997a0:
    // 0x2997a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2997a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2997a4:
    // 0x2997a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2997a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2997a8:
    // 0x2997a8: 0x8fa205b8  lw          $v0, 0x5B8($sp)
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1464)));
label_2997ac:
    // 0x2997ac: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2997acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997b0:
    // 0x2997b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2997b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2997b4:
    // 0x2997b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2997b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2997b8:
    // 0x2997b8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2997b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997bc:
    // 0x2997bc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2997bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2997c0:
    // 0x2997c0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2997c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997c4:
    // 0x2997c4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2997c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2997c8:
    // 0x2997c8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2997c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997cc:
    // 0x2997cc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2997ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2997d0:
    // 0x2997d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2997d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997d4:
    // 0x2997d4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2997d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2997d8:
    // 0x2997d8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2997d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997dc:
    // 0x2997dc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2997dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_2997e0:
    // 0x2997e0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2997e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997e4:
    // 0x2997e4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2997e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2997e8:
    // 0x2997e8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2997e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997ec:
    // 0x2997ec: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2997ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2997f0:
    // 0x2997f0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2997f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997f4:
    // 0x2997f4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2997f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2997f8:
    // 0x2997f8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x2997f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2997fc:
    // 0x2997fc: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2997fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_299800:
    // 0x299800: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x299800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299804:
    // 0x299804: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x299804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_299808:
    // 0x299808: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x299808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29980c:
    // 0x29980c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x29980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_299810:
    // 0x299810: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x299810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299814:
    // 0x299814: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x299814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_299818:
    // 0x299818: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x299818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29981c:
    // 0x29981c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_299820:
    // 0x299820: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x299820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299824:
    // 0x299824: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x299824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_299828:
    // 0x299828: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x299828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29982c:
    // 0x29982c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x29982cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_299830:
    // 0x299830: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x299830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299834:
    // 0x299834: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x299834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_299838:
    // 0x299838: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x299838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29983c:
    // 0x29983c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x29983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_299840:
    // 0x299840: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x299840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299844:
    // 0x299844: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x299844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_299848:
    // 0x299848: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x299848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29984c:
    // 0x29984c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x29984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_299850:
    // 0x299850: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x299850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299854:
    // 0x299854: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x299854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_299858:
    // 0x299858: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x299858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29985c:
    // 0x29985c: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x29985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_299860:
    // 0x299860: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x299860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299864:
    // 0x299864: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x299864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_299868:
    // 0x299868: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x299868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29986c:
    // 0x29986c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x29986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_299870:
    // 0x299870: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x299870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299874:
    // 0x299874: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x299874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_299878:
    // 0x299878: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x299878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29987c:
    // 0x29987c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x29987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_299880:
    // 0x299880: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x299880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299884:
    // 0x299884: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x299884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_299888:
    // 0x299888: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x299888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29988c:
    // 0x29988c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x29988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_299890:
    // 0x299890: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x299890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299894:
    // 0x299894: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x299894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_299898:
    // 0x299898: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x299898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29989c:
    // 0x29989c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x29989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2998a0:
    // 0x2998a0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2998a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2998a4:
    // 0x2998a4: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2998a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_2998a8:
    // 0x2998a8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2998a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2998ac:
    // 0x2998ac: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2998acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_2998b0:
    // 0x2998b0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2998b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2998b4:
    // 0x2998b4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2998b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_2998b8:
    // 0x2998b8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2998b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2998bc:
    // 0x2998bc: 0xc0a61b0  jal         func_2986C0
label_2998c0:
    if (ctx->pc == 0x2998C0u) {
        ctx->pc = 0x2998C0u;
            // 0x2998c0: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->pc = 0x2998C4u;
        goto label_2998c4;
    }
    ctx->pc = 0x2998BCu;
    SET_GPR_U32(ctx, 31, 0x2998C4u);
    ctx->pc = 0x2998C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2998BCu;
            // 0x2998c0: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2986C0u;
    if (runtime->hasFunction(0x2986C0u)) {
        auto targetFn = runtime->lookupFunction(0x2986C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998C4u; }
        if (ctx->pc != 0x2998C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986C0_0x2986c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998C4u; }
        if (ctx->pc != 0x2998C4u) { return; }
    }
    ctx->pc = 0x2998C4u;
label_2998c4:
    // 0x2998c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2998c8:
    // 0x2998c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2998cc:
    // 0x2998cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2998ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2998d0:
    // 0x2998d0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2998d4:
    if (ctx->pc == 0x2998D4u) {
        ctx->pc = 0x2998D8u;
        goto label_2998d8;
    }
    ctx->pc = 0x2998D0u;
    {
        const bool branch_taken_0x2998d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2998d0) {
            ctx->pc = 0x299908u;
            goto label_299908;
        }
    }
    ctx->pc = 0x2998D8u;
label_2998d8:
    // 0x2998d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2998dc:
    // 0x2998dc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2998dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2998e0:
    // 0x2998e0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2998e4:
    // 0x2998e4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2998e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2998e8:
    // 0x2998e8: 0x8fa505b8  lw          $a1, 0x5B8($sp)
    ctx->pc = 0x2998e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1464)));
label_2998ec:
    // 0x2998ec: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x2998ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_2998f0:
    // 0x2998f0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2998f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2998f4:
    // 0x2998f4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2998f8:
    // 0x2998f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2998fc:
    // 0x2998fc: 0xc0a7ab4  jal         func_29EAD0
label_299900:
    if (ctx->pc == 0x299900u) {
        ctx->pc = 0x299900u;
            // 0x299900: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x299904u;
        goto label_299904;
    }
    ctx->pc = 0x2998FCu;
    SET_GPR_U32(ctx, 31, 0x299904u);
    ctx->pc = 0x299900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2998FCu;
            // 0x299900: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299904u; }
        if (ctx->pc != 0x299904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299904u; }
        if (ctx->pc != 0x299904u) { return; }
    }
    ctx->pc = 0x299904u;
label_299904:
    // 0x299904: 0x0  nop
    ctx->pc = 0x299904u;
    // NOP
label_299908:
    // 0x299908: 0x1000000b  b           . + 4 + (0xB << 2)
label_29990c:
    if (ctx->pc == 0x29990Cu) {
        ctx->pc = 0x299910u;
        goto label_299910;
    }
    ctx->pc = 0x299908u;
    {
        const bool branch_taken_0x299908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299908) {
            ctx->pc = 0x299938u;
            goto label_299938;
        }
    }
    ctx->pc = 0x299910u;
label_299910:
    // 0x299910: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x299910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_299914:
    // 0x299914: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x299914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_299918:
    // 0x299918: 0x1020fe19  beqz        $at, . + 4 + (-0x1E7 << 2)
label_29991c:
    if (ctx->pc == 0x29991Cu) {
        ctx->pc = 0x29991Cu;
            // 0x29991c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x299920u;
        goto label_299920;
    }
    ctx->pc = 0x299918u;
    {
        const bool branch_taken_0x299918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299918u;
            // 0x29991c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299918) {
            ctx->pc = 0x299180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299180;
        }
    }
    ctx->pc = 0x299920u;
label_299920:
    // 0x299920: 0x26360020  addiu       $s6, $s1, 0x20
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_299924:
    // 0x299924: 0x26370030  addiu       $s7, $s1, 0x30
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_299928:
    // 0x299928: 0x27be0410  addiu       $fp, $sp, 0x410
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_29992c:
    // 0x29992c: 0x1000fe10  b           . + 4 + (-0x1F0 << 2)
label_299930:
    if (ctx->pc == 0x299930u) {
        ctx->pc = 0x299930u;
            // 0x299930: 0x26530020  addiu       $s3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x299934u;
        goto label_299934;
    }
    ctx->pc = 0x29992Cu;
    {
        const bool branch_taken_0x29992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29992Cu;
            // 0x299930: 0x26530020  addiu       $s3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29992c) {
            ctx->pc = 0x299170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299170;
        }
    }
    ctx->pc = 0x299934u;
label_299934:
    // 0x299934: 0x0  nop
    ctx->pc = 0x299934u;
    // NOP
label_299938:
    // 0x299938: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x299938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29993c:
    // 0x29993c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29993cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_299940:
    // 0x299940: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x299940u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_299944:
    // 0x299944: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x299944u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_299948:
    // 0x299948: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x299948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29994c:
    // 0x29994c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29994cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_299950:
    // 0x299950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x299950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_299954:
    // 0x299954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x299954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_299958:
    // 0x299958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29995c:
    // 0x29995c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29995cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_299960:
    // 0x299960: 0x3e00008  jr          $ra
label_299964:
    if (ctx->pc == 0x299964u) {
        ctx->pc = 0x299964u;
            // 0x299964: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->pc = 0x299968u;
        goto label_299968;
    }
    ctx->pc = 0x299960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299960u;
            // 0x299964: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299968u;
label_299968:
    // 0x299968: 0x0  nop
    ctx->pc = 0x299968u;
    // NOP
label_29996c:
    // 0x29996c: 0x0  nop
    ctx->pc = 0x29996cu;
    // NOP
}
