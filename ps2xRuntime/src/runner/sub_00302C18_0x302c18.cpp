#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302C18
// Address: 0x302c18 - 0x303370
void sub_00302C18_0x302c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302C18_0x302c18");
#endif

    switch (ctx->pc) {
        case 0x302c18u: goto label_302c18;
        case 0x302c1cu: goto label_302c1c;
        case 0x302c20u: goto label_302c20;
        case 0x302c24u: goto label_302c24;
        case 0x302c28u: goto label_302c28;
        case 0x302c2cu: goto label_302c2c;
        case 0x302c30u: goto label_302c30;
        case 0x302c34u: goto label_302c34;
        case 0x302c38u: goto label_302c38;
        case 0x302c3cu: goto label_302c3c;
        case 0x302c40u: goto label_302c40;
        case 0x302c44u: goto label_302c44;
        case 0x302c48u: goto label_302c48;
        case 0x302c4cu: goto label_302c4c;
        case 0x302c50u: goto label_302c50;
        case 0x302c54u: goto label_302c54;
        case 0x302c58u: goto label_302c58;
        case 0x302c5cu: goto label_302c5c;
        case 0x302c60u: goto label_302c60;
        case 0x302c64u: goto label_302c64;
        case 0x302c68u: goto label_302c68;
        case 0x302c6cu: goto label_302c6c;
        case 0x302c70u: goto label_302c70;
        case 0x302c74u: goto label_302c74;
        case 0x302c78u: goto label_302c78;
        case 0x302c7cu: goto label_302c7c;
        case 0x302c80u: goto label_302c80;
        case 0x302c84u: goto label_302c84;
        case 0x302c88u: goto label_302c88;
        case 0x302c8cu: goto label_302c8c;
        case 0x302c90u: goto label_302c90;
        case 0x302c94u: goto label_302c94;
        case 0x302c98u: goto label_302c98;
        case 0x302c9cu: goto label_302c9c;
        case 0x302ca0u: goto label_302ca0;
        case 0x302ca4u: goto label_302ca4;
        case 0x302ca8u: goto label_302ca8;
        case 0x302cacu: goto label_302cac;
        case 0x302cb0u: goto label_302cb0;
        case 0x302cb4u: goto label_302cb4;
        case 0x302cb8u: goto label_302cb8;
        case 0x302cbcu: goto label_302cbc;
        case 0x302cc0u: goto label_302cc0;
        case 0x302cc4u: goto label_302cc4;
        case 0x302cc8u: goto label_302cc8;
        case 0x302cccu: goto label_302ccc;
        case 0x302cd0u: goto label_302cd0;
        case 0x302cd4u: goto label_302cd4;
        case 0x302cd8u: goto label_302cd8;
        case 0x302cdcu: goto label_302cdc;
        case 0x302ce0u: goto label_302ce0;
        case 0x302ce4u: goto label_302ce4;
        case 0x302ce8u: goto label_302ce8;
        case 0x302cecu: goto label_302cec;
        case 0x302cf0u: goto label_302cf0;
        case 0x302cf4u: goto label_302cf4;
        case 0x302cf8u: goto label_302cf8;
        case 0x302cfcu: goto label_302cfc;
        case 0x302d00u: goto label_302d00;
        case 0x302d04u: goto label_302d04;
        case 0x302d08u: goto label_302d08;
        case 0x302d0cu: goto label_302d0c;
        case 0x302d10u: goto label_302d10;
        case 0x302d14u: goto label_302d14;
        case 0x302d18u: goto label_302d18;
        case 0x302d1cu: goto label_302d1c;
        case 0x302d20u: goto label_302d20;
        case 0x302d24u: goto label_302d24;
        case 0x302d28u: goto label_302d28;
        case 0x302d2cu: goto label_302d2c;
        case 0x302d30u: goto label_302d30;
        case 0x302d34u: goto label_302d34;
        case 0x302d38u: goto label_302d38;
        case 0x302d3cu: goto label_302d3c;
        case 0x302d40u: goto label_302d40;
        case 0x302d44u: goto label_302d44;
        case 0x302d48u: goto label_302d48;
        case 0x302d4cu: goto label_302d4c;
        case 0x302d50u: goto label_302d50;
        case 0x302d54u: goto label_302d54;
        case 0x302d58u: goto label_302d58;
        case 0x302d5cu: goto label_302d5c;
        case 0x302d60u: goto label_302d60;
        case 0x302d64u: goto label_302d64;
        case 0x302d68u: goto label_302d68;
        case 0x302d6cu: goto label_302d6c;
        case 0x302d70u: goto label_302d70;
        case 0x302d74u: goto label_302d74;
        case 0x302d78u: goto label_302d78;
        case 0x302d7cu: goto label_302d7c;
        case 0x302d80u: goto label_302d80;
        case 0x302d84u: goto label_302d84;
        case 0x302d88u: goto label_302d88;
        case 0x302d8cu: goto label_302d8c;
        case 0x302d90u: goto label_302d90;
        case 0x302d94u: goto label_302d94;
        case 0x302d98u: goto label_302d98;
        case 0x302d9cu: goto label_302d9c;
        case 0x302da0u: goto label_302da0;
        case 0x302da4u: goto label_302da4;
        case 0x302da8u: goto label_302da8;
        case 0x302dacu: goto label_302dac;
        case 0x302db0u: goto label_302db0;
        case 0x302db4u: goto label_302db4;
        case 0x302db8u: goto label_302db8;
        case 0x302dbcu: goto label_302dbc;
        case 0x302dc0u: goto label_302dc0;
        case 0x302dc4u: goto label_302dc4;
        case 0x302dc8u: goto label_302dc8;
        case 0x302dccu: goto label_302dcc;
        case 0x302dd0u: goto label_302dd0;
        case 0x302dd4u: goto label_302dd4;
        case 0x302dd8u: goto label_302dd8;
        case 0x302ddcu: goto label_302ddc;
        case 0x302de0u: goto label_302de0;
        case 0x302de4u: goto label_302de4;
        case 0x302de8u: goto label_302de8;
        case 0x302decu: goto label_302dec;
        case 0x302df0u: goto label_302df0;
        case 0x302df4u: goto label_302df4;
        case 0x302df8u: goto label_302df8;
        case 0x302dfcu: goto label_302dfc;
        case 0x302e00u: goto label_302e00;
        case 0x302e04u: goto label_302e04;
        case 0x302e08u: goto label_302e08;
        case 0x302e0cu: goto label_302e0c;
        case 0x302e10u: goto label_302e10;
        case 0x302e14u: goto label_302e14;
        case 0x302e18u: goto label_302e18;
        case 0x302e1cu: goto label_302e1c;
        case 0x302e20u: goto label_302e20;
        case 0x302e24u: goto label_302e24;
        case 0x302e28u: goto label_302e28;
        case 0x302e2cu: goto label_302e2c;
        case 0x302e30u: goto label_302e30;
        case 0x302e34u: goto label_302e34;
        case 0x302e38u: goto label_302e38;
        case 0x302e3cu: goto label_302e3c;
        case 0x302e40u: goto label_302e40;
        case 0x302e44u: goto label_302e44;
        case 0x302e48u: goto label_302e48;
        case 0x302e4cu: goto label_302e4c;
        case 0x302e50u: goto label_302e50;
        case 0x302e54u: goto label_302e54;
        case 0x302e58u: goto label_302e58;
        case 0x302e5cu: goto label_302e5c;
        case 0x302e60u: goto label_302e60;
        case 0x302e64u: goto label_302e64;
        case 0x302e68u: goto label_302e68;
        case 0x302e6cu: goto label_302e6c;
        case 0x302e70u: goto label_302e70;
        case 0x302e74u: goto label_302e74;
        case 0x302e78u: goto label_302e78;
        case 0x302e7cu: goto label_302e7c;
        case 0x302e80u: goto label_302e80;
        case 0x302e84u: goto label_302e84;
        case 0x302e88u: goto label_302e88;
        case 0x302e8cu: goto label_302e8c;
        case 0x302e90u: goto label_302e90;
        case 0x302e94u: goto label_302e94;
        case 0x302e98u: goto label_302e98;
        case 0x302e9cu: goto label_302e9c;
        case 0x302ea0u: goto label_302ea0;
        case 0x302ea4u: goto label_302ea4;
        case 0x302ea8u: goto label_302ea8;
        case 0x302eacu: goto label_302eac;
        case 0x302eb0u: goto label_302eb0;
        case 0x302eb4u: goto label_302eb4;
        case 0x302eb8u: goto label_302eb8;
        case 0x302ebcu: goto label_302ebc;
        case 0x302ec0u: goto label_302ec0;
        case 0x302ec4u: goto label_302ec4;
        case 0x302ec8u: goto label_302ec8;
        case 0x302eccu: goto label_302ecc;
        case 0x302ed0u: goto label_302ed0;
        case 0x302ed4u: goto label_302ed4;
        case 0x302ed8u: goto label_302ed8;
        case 0x302edcu: goto label_302edc;
        case 0x302ee0u: goto label_302ee0;
        case 0x302ee4u: goto label_302ee4;
        case 0x302ee8u: goto label_302ee8;
        case 0x302eecu: goto label_302eec;
        case 0x302ef0u: goto label_302ef0;
        case 0x302ef4u: goto label_302ef4;
        case 0x302ef8u: goto label_302ef8;
        case 0x302efcu: goto label_302efc;
        case 0x302f00u: goto label_302f00;
        case 0x302f04u: goto label_302f04;
        case 0x302f08u: goto label_302f08;
        case 0x302f0cu: goto label_302f0c;
        case 0x302f10u: goto label_302f10;
        case 0x302f14u: goto label_302f14;
        case 0x302f18u: goto label_302f18;
        case 0x302f1cu: goto label_302f1c;
        case 0x302f20u: goto label_302f20;
        case 0x302f24u: goto label_302f24;
        case 0x302f28u: goto label_302f28;
        case 0x302f2cu: goto label_302f2c;
        case 0x302f30u: goto label_302f30;
        case 0x302f34u: goto label_302f34;
        case 0x302f38u: goto label_302f38;
        case 0x302f3cu: goto label_302f3c;
        case 0x302f40u: goto label_302f40;
        case 0x302f44u: goto label_302f44;
        case 0x302f48u: goto label_302f48;
        case 0x302f4cu: goto label_302f4c;
        case 0x302f50u: goto label_302f50;
        case 0x302f54u: goto label_302f54;
        case 0x302f58u: goto label_302f58;
        case 0x302f5cu: goto label_302f5c;
        case 0x302f60u: goto label_302f60;
        case 0x302f64u: goto label_302f64;
        case 0x302f68u: goto label_302f68;
        case 0x302f6cu: goto label_302f6c;
        case 0x302f70u: goto label_302f70;
        case 0x302f74u: goto label_302f74;
        case 0x302f78u: goto label_302f78;
        case 0x302f7cu: goto label_302f7c;
        case 0x302f80u: goto label_302f80;
        case 0x302f84u: goto label_302f84;
        case 0x302f88u: goto label_302f88;
        case 0x302f8cu: goto label_302f8c;
        case 0x302f90u: goto label_302f90;
        case 0x302f94u: goto label_302f94;
        case 0x302f98u: goto label_302f98;
        case 0x302f9cu: goto label_302f9c;
        case 0x302fa0u: goto label_302fa0;
        case 0x302fa4u: goto label_302fa4;
        case 0x302fa8u: goto label_302fa8;
        case 0x302facu: goto label_302fac;
        case 0x302fb0u: goto label_302fb0;
        case 0x302fb4u: goto label_302fb4;
        case 0x302fb8u: goto label_302fb8;
        case 0x302fbcu: goto label_302fbc;
        case 0x302fc0u: goto label_302fc0;
        case 0x302fc4u: goto label_302fc4;
        case 0x302fc8u: goto label_302fc8;
        case 0x302fccu: goto label_302fcc;
        case 0x302fd0u: goto label_302fd0;
        case 0x302fd4u: goto label_302fd4;
        case 0x302fd8u: goto label_302fd8;
        case 0x302fdcu: goto label_302fdc;
        case 0x302fe0u: goto label_302fe0;
        case 0x302fe4u: goto label_302fe4;
        case 0x302fe8u: goto label_302fe8;
        case 0x302fecu: goto label_302fec;
        case 0x302ff0u: goto label_302ff0;
        case 0x302ff4u: goto label_302ff4;
        case 0x302ff8u: goto label_302ff8;
        case 0x302ffcu: goto label_302ffc;
        case 0x303000u: goto label_303000;
        case 0x303004u: goto label_303004;
        case 0x303008u: goto label_303008;
        case 0x30300cu: goto label_30300c;
        case 0x303010u: goto label_303010;
        case 0x303014u: goto label_303014;
        case 0x303018u: goto label_303018;
        case 0x30301cu: goto label_30301c;
        case 0x303020u: goto label_303020;
        case 0x303024u: goto label_303024;
        case 0x303028u: goto label_303028;
        case 0x30302cu: goto label_30302c;
        case 0x303030u: goto label_303030;
        case 0x303034u: goto label_303034;
        case 0x303038u: goto label_303038;
        case 0x30303cu: goto label_30303c;
        case 0x303040u: goto label_303040;
        case 0x303044u: goto label_303044;
        case 0x303048u: goto label_303048;
        case 0x30304cu: goto label_30304c;
        case 0x303050u: goto label_303050;
        case 0x303054u: goto label_303054;
        case 0x303058u: goto label_303058;
        case 0x30305cu: goto label_30305c;
        case 0x303060u: goto label_303060;
        case 0x303064u: goto label_303064;
        case 0x303068u: goto label_303068;
        case 0x30306cu: goto label_30306c;
        case 0x303070u: goto label_303070;
        case 0x303074u: goto label_303074;
        case 0x303078u: goto label_303078;
        case 0x30307cu: goto label_30307c;
        case 0x303080u: goto label_303080;
        case 0x303084u: goto label_303084;
        case 0x303088u: goto label_303088;
        case 0x30308cu: goto label_30308c;
        case 0x303090u: goto label_303090;
        case 0x303094u: goto label_303094;
        case 0x303098u: goto label_303098;
        case 0x30309cu: goto label_30309c;
        case 0x3030a0u: goto label_3030a0;
        case 0x3030a4u: goto label_3030a4;
        case 0x3030a8u: goto label_3030a8;
        case 0x3030acu: goto label_3030ac;
        case 0x3030b0u: goto label_3030b0;
        case 0x3030b4u: goto label_3030b4;
        case 0x3030b8u: goto label_3030b8;
        case 0x3030bcu: goto label_3030bc;
        case 0x3030c0u: goto label_3030c0;
        case 0x3030c4u: goto label_3030c4;
        case 0x3030c8u: goto label_3030c8;
        case 0x3030ccu: goto label_3030cc;
        case 0x3030d0u: goto label_3030d0;
        case 0x3030d4u: goto label_3030d4;
        case 0x3030d8u: goto label_3030d8;
        case 0x3030dcu: goto label_3030dc;
        case 0x3030e0u: goto label_3030e0;
        case 0x3030e4u: goto label_3030e4;
        case 0x3030e8u: goto label_3030e8;
        case 0x3030ecu: goto label_3030ec;
        case 0x3030f0u: goto label_3030f0;
        case 0x3030f4u: goto label_3030f4;
        case 0x3030f8u: goto label_3030f8;
        case 0x3030fcu: goto label_3030fc;
        case 0x303100u: goto label_303100;
        case 0x303104u: goto label_303104;
        case 0x303108u: goto label_303108;
        case 0x30310cu: goto label_30310c;
        case 0x303110u: goto label_303110;
        case 0x303114u: goto label_303114;
        case 0x303118u: goto label_303118;
        case 0x30311cu: goto label_30311c;
        case 0x303120u: goto label_303120;
        case 0x303124u: goto label_303124;
        case 0x303128u: goto label_303128;
        case 0x30312cu: goto label_30312c;
        case 0x303130u: goto label_303130;
        case 0x303134u: goto label_303134;
        case 0x303138u: goto label_303138;
        case 0x30313cu: goto label_30313c;
        case 0x303140u: goto label_303140;
        case 0x303144u: goto label_303144;
        case 0x303148u: goto label_303148;
        case 0x30314cu: goto label_30314c;
        case 0x303150u: goto label_303150;
        case 0x303154u: goto label_303154;
        case 0x303158u: goto label_303158;
        case 0x30315cu: goto label_30315c;
        case 0x303160u: goto label_303160;
        case 0x303164u: goto label_303164;
        case 0x303168u: goto label_303168;
        case 0x30316cu: goto label_30316c;
        case 0x303170u: goto label_303170;
        case 0x303174u: goto label_303174;
        case 0x303178u: goto label_303178;
        case 0x30317cu: goto label_30317c;
        case 0x303180u: goto label_303180;
        case 0x303184u: goto label_303184;
        case 0x303188u: goto label_303188;
        case 0x30318cu: goto label_30318c;
        case 0x303190u: goto label_303190;
        case 0x303194u: goto label_303194;
        case 0x303198u: goto label_303198;
        case 0x30319cu: goto label_30319c;
        case 0x3031a0u: goto label_3031a0;
        case 0x3031a4u: goto label_3031a4;
        case 0x3031a8u: goto label_3031a8;
        case 0x3031acu: goto label_3031ac;
        case 0x3031b0u: goto label_3031b0;
        case 0x3031b4u: goto label_3031b4;
        case 0x3031b8u: goto label_3031b8;
        case 0x3031bcu: goto label_3031bc;
        case 0x3031c0u: goto label_3031c0;
        case 0x3031c4u: goto label_3031c4;
        case 0x3031c8u: goto label_3031c8;
        case 0x3031ccu: goto label_3031cc;
        case 0x3031d0u: goto label_3031d0;
        case 0x3031d4u: goto label_3031d4;
        case 0x3031d8u: goto label_3031d8;
        case 0x3031dcu: goto label_3031dc;
        case 0x3031e0u: goto label_3031e0;
        case 0x3031e4u: goto label_3031e4;
        case 0x3031e8u: goto label_3031e8;
        case 0x3031ecu: goto label_3031ec;
        case 0x3031f0u: goto label_3031f0;
        case 0x3031f4u: goto label_3031f4;
        case 0x3031f8u: goto label_3031f8;
        case 0x3031fcu: goto label_3031fc;
        case 0x303200u: goto label_303200;
        case 0x303204u: goto label_303204;
        case 0x303208u: goto label_303208;
        case 0x30320cu: goto label_30320c;
        case 0x303210u: goto label_303210;
        case 0x303214u: goto label_303214;
        case 0x303218u: goto label_303218;
        case 0x30321cu: goto label_30321c;
        case 0x303220u: goto label_303220;
        case 0x303224u: goto label_303224;
        case 0x303228u: goto label_303228;
        case 0x30322cu: goto label_30322c;
        case 0x303230u: goto label_303230;
        case 0x303234u: goto label_303234;
        case 0x303238u: goto label_303238;
        case 0x30323cu: goto label_30323c;
        case 0x303240u: goto label_303240;
        case 0x303244u: goto label_303244;
        case 0x303248u: goto label_303248;
        case 0x30324cu: goto label_30324c;
        case 0x303250u: goto label_303250;
        case 0x303254u: goto label_303254;
        case 0x303258u: goto label_303258;
        case 0x30325cu: goto label_30325c;
        case 0x303260u: goto label_303260;
        case 0x303264u: goto label_303264;
        case 0x303268u: goto label_303268;
        case 0x30326cu: goto label_30326c;
        case 0x303270u: goto label_303270;
        case 0x303274u: goto label_303274;
        case 0x303278u: goto label_303278;
        case 0x30327cu: goto label_30327c;
        case 0x303280u: goto label_303280;
        case 0x303284u: goto label_303284;
        case 0x303288u: goto label_303288;
        case 0x30328cu: goto label_30328c;
        case 0x303290u: goto label_303290;
        case 0x303294u: goto label_303294;
        case 0x303298u: goto label_303298;
        case 0x30329cu: goto label_30329c;
        case 0x3032a0u: goto label_3032a0;
        case 0x3032a4u: goto label_3032a4;
        case 0x3032a8u: goto label_3032a8;
        case 0x3032acu: goto label_3032ac;
        case 0x3032b0u: goto label_3032b0;
        case 0x3032b4u: goto label_3032b4;
        case 0x3032b8u: goto label_3032b8;
        case 0x3032bcu: goto label_3032bc;
        case 0x3032c0u: goto label_3032c0;
        case 0x3032c4u: goto label_3032c4;
        case 0x3032c8u: goto label_3032c8;
        case 0x3032ccu: goto label_3032cc;
        case 0x3032d0u: goto label_3032d0;
        case 0x3032d4u: goto label_3032d4;
        case 0x3032d8u: goto label_3032d8;
        case 0x3032dcu: goto label_3032dc;
        case 0x3032e0u: goto label_3032e0;
        case 0x3032e4u: goto label_3032e4;
        case 0x3032e8u: goto label_3032e8;
        case 0x3032ecu: goto label_3032ec;
        case 0x3032f0u: goto label_3032f0;
        case 0x3032f4u: goto label_3032f4;
        case 0x3032f8u: goto label_3032f8;
        case 0x3032fcu: goto label_3032fc;
        case 0x303300u: goto label_303300;
        case 0x303304u: goto label_303304;
        case 0x303308u: goto label_303308;
        case 0x30330cu: goto label_30330c;
        case 0x303310u: goto label_303310;
        case 0x303314u: goto label_303314;
        case 0x303318u: goto label_303318;
        case 0x30331cu: goto label_30331c;
        case 0x303320u: goto label_303320;
        case 0x303324u: goto label_303324;
        case 0x303328u: goto label_303328;
        case 0x30332cu: goto label_30332c;
        case 0x303330u: goto label_303330;
        case 0x303334u: goto label_303334;
        case 0x303338u: goto label_303338;
        case 0x30333cu: goto label_30333c;
        case 0x303340u: goto label_303340;
        case 0x303344u: goto label_303344;
        case 0x303348u: goto label_303348;
        case 0x30334cu: goto label_30334c;
        case 0x303350u: goto label_303350;
        case 0x303354u: goto label_303354;
        case 0x303358u: goto label_303358;
        case 0x30335cu: goto label_30335c;
        case 0x303360u: goto label_303360;
        case 0x303364u: goto label_303364;
        case 0x303368u: goto label_303368;
        case 0x30336cu: goto label_30336c;
        default: break;
    }

    ctx->pc = 0x302c18u;

label_302c18:
    // 0x302c18: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_302c1c:
    if (ctx->pc == 0x302C1Cu) {
        ctx->pc = 0x302C20u;
        goto label_302c20;
    }
    ctx->pc = 0x302C18u;
    {
        const bool branch_taken_0x302c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302c18) {
            ctx->pc = 0x302C44u;
            goto label_302c44;
        }
    }
    ctx->pc = 0x302C20u;
label_302c20:
    // 0x302c20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x302c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_302c24:
    // 0x302c24: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x302c24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_302c28:
    // 0x302c28: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x302c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_302c2c:
    // 0x302c2c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x302c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_302c30:
    // 0x302c30: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x302c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_302c34:
    // 0x302c34: 0x26070f10  addiu       $a3, $s0, 0xF10
    ctx->pc = 0x302c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3856));
label_302c38:
    // 0x302c38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x302c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302c3c:
    // 0x302c3c: 0xc0bb404  jal         func_2ED010
label_302c40:
    if (ctx->pc == 0x302C40u) {
        ctx->pc = 0x302C40u;
            // 0x302c40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302C44u;
        goto label_302c44;
    }
    ctx->pc = 0x302C3Cu;
    SET_GPR_U32(ctx, 31, 0x302C44u);
    ctx->pc = 0x302C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302C3Cu;
            // 0x302c40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C44u; }
        if (ctx->pc != 0x302C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C44u; }
        if (ctx->pc != 0x302C44u) { return; }
    }
    ctx->pc = 0x302C44u;
label_302c44:
    // 0x302c44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302c48:
    // 0x302c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302c4c:
    // 0x302c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302c50:
    // 0x302c50: 0x3e00008  jr          $ra
label_302c54:
    if (ctx->pc == 0x302C54u) {
        ctx->pc = 0x302C54u;
            // 0x302c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302C58u;
        goto label_302c58;
    }
    ctx->pc = 0x302C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C50u;
            // 0x302c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302C58u;
label_302c58:
    // 0x302c58: 0x0  nop
    ctx->pc = 0x302c58u;
    // NOP
label_302c5c:
    // 0x302c5c: 0x0  nop
    ctx->pc = 0x302c5cu;
    // NOP
label_302c60:
    // 0x302c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302c64:
    // 0x302c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302c68:
    // 0x302c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302c6c:
    // 0x302c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302c70:
    // 0x302c70: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x302c70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_302c74:
    // 0x302c74: 0xc0c15dc  jal         func_305770
label_302c78:
    if (ctx->pc == 0x302C78u) {
        ctx->pc = 0x302C78u;
            // 0x302c78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302C7Cu;
        goto label_302c7c;
    }
    ctx->pc = 0x302C74u;
    SET_GPR_U32(ctx, 31, 0x302C7Cu);
    ctx->pc = 0x302C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302C74u;
            // 0x302c78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C7Cu; }
        if (ctx->pc != 0x302C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C7Cu; }
        if (ctx->pc != 0x302C7Cu) { return; }
    }
    ctx->pc = 0x302C7Cu;
label_302c7c:
    // 0x302c7c: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x302c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_302c80:
    // 0x302c80: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_302c84:
    // 0x302c84: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x302c84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_302c88:
    // 0x302c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302c8c:
    // 0x302c8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302c90:
    // 0x302c90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x302c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302c94:
    // 0x302c94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302c98:
    // 0x302c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302c9c:
    // 0x302c9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x302c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_302ca0:
    // 0x302ca0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x302ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302ca4:
    // 0x302ca4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x302ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_302ca8:
    // 0x302ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_302cac:
    // 0x302cac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x302cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_302cb0:
    // 0x302cb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302cb4:
    // 0x302cb4: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x302cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_302cb8:
    // 0x302cb8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302cbc:
    // 0x302cbc: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302cbcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302cc0:
    // 0x302cc0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302cc4:
    // 0x302cc4: 0x320f809  jalr        $t9
label_302cc8:
    if (ctx->pc == 0x302CC8u) {
        ctx->pc = 0x302CC8u;
            // 0x302cc8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302CCCu;
        goto label_302ccc;
    }
    ctx->pc = 0x302CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302CCCu);
        ctx->pc = 0x302CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302CC4u;
            // 0x302cc8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302CCCu; }
            if (ctx->pc != 0x302CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x302CCCu;
label_302ccc:
    // 0x302ccc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302cd0:
    // 0x302cd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302cd4:
    // 0x302cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302cd8:
    // 0x302cd8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x302cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302cdc:
    // 0x302cdc: 0x320f809  jalr        $t9
label_302ce0:
    if (ctx->pc == 0x302CE0u) {
        ctx->pc = 0x302CE0u;
            // 0x302ce0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302CE4u;
        goto label_302ce4;
    }
    ctx->pc = 0x302CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302CE4u);
        ctx->pc = 0x302CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302CDCu;
            // 0x302ce0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302CE4u; }
            if (ctx->pc != 0x302CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x302CE4u;
label_302ce4:
    // 0x302ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302ce8:
    // 0x302ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302cec:
    // 0x302cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302cf0:
    // 0x302cf0: 0x3e00008  jr          $ra
label_302cf4:
    if (ctx->pc == 0x302CF4u) {
        ctx->pc = 0x302CF4u;
            // 0x302cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302CF8u;
        goto label_302cf8;
    }
    ctx->pc = 0x302CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302CF0u;
            // 0x302cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302CF8u;
label_302cf8:
    // 0x302cf8: 0x0  nop
    ctx->pc = 0x302cf8u;
    // NOP
label_302cfc:
    // 0x302cfc: 0x0  nop
    ctx->pc = 0x302cfcu;
    // NOP
label_302d00:
    // 0x302d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302d04:
    // 0x302d04: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x302d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_302d08:
    // 0x302d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302d0c:
    // 0x302d0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302d10:
    // 0x302d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302d14:
    // 0x302d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302d18:
    // 0x302d18: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x302d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_302d1c:
    // 0x302d1c: 0xc0c1054  jal         func_304150
label_302d20:
    if (ctx->pc == 0x302D20u) {
        ctx->pc = 0x302D20u;
            // 0x302d20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302D24u;
        goto label_302d24;
    }
    ctx->pc = 0x302D1Cu;
    SET_GPR_U32(ctx, 31, 0x302D24u);
    ctx->pc = 0x302D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302D1Cu;
            // 0x302d20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (runtime->hasFunction(0x304150u)) {
        auto targetFn = runtime->lookupFunction(0x304150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D24u; }
        if (ctx->pc != 0x302D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304150_0x304150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D24u; }
        if (ctx->pc != 0x302D24u) { return; }
    }
    ctx->pc = 0x302D24u;
label_302d24:
    // 0x302d24: 0xc0c1560  jal         func_305580
label_302d28:
    if (ctx->pc == 0x302D28u) {
        ctx->pc = 0x302D28u;
            // 0x302d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302D2Cu;
        goto label_302d2c;
    }
    ctx->pc = 0x302D24u;
    SET_GPR_U32(ctx, 31, 0x302D2Cu);
    ctx->pc = 0x302D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302D24u;
            // 0x302d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D2Cu; }
        if (ctx->pc != 0x302D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D2Cu; }
        if (ctx->pc != 0x302D2Cu) { return; }
    }
    ctx->pc = 0x302D2Cu;
label_302d2c:
    // 0x302d2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x302d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_302d30:
    // 0x302d30: 0xc44c1360  lwc1        $f12, 0x1360($v0)
    ctx->pc = 0x302d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_302d34:
    // 0x302d34: 0xc0c1540  jal         func_305500
label_302d38:
    if (ctx->pc == 0x302D38u) {
        ctx->pc = 0x302D38u;
            // 0x302d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302D3Cu;
        goto label_302d3c;
    }
    ctx->pc = 0x302D34u;
    SET_GPR_U32(ctx, 31, 0x302D3Cu);
    ctx->pc = 0x302D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302D34u;
            // 0x302d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D3Cu; }
        if (ctx->pc != 0x302D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D3Cu; }
        if (ctx->pc != 0x302D3Cu) { return; }
    }
    ctx->pc = 0x302D3Cu;
label_302d3c:
    // 0x302d3c: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x302d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_302d40:
    // 0x302d40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x302d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_302d44:
    // 0x302d44: 0x50600056  beql        $v1, $zero, . + 4 + (0x56 << 2)
label_302d48:
    if (ctx->pc == 0x302D48u) {
        ctx->pc = 0x302D48u;
            // 0x302d48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x302D4Cu;
        goto label_302d4c;
    }
    ctx->pc = 0x302D44u;
    {
        const bool branch_taken_0x302d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d44) {
            ctx->pc = 0x302D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302D44u;
            // 0x302d48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302EA0u;
            goto label_302ea0;
        }
    }
    ctx->pc = 0x302D4Cu;
label_302d4c:
    // 0x302d4c: 0x8e260d60  lw          $a2, 0xD60($s1)
    ctx->pc = 0x302d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_302d50:
    // 0x302d50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x302d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_302d54:
    // 0x302d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302d58:
    // 0x302d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302d5c:
    // 0x302d5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x302d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302d60:
    // 0x302d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302d64:
    // 0x302d64: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x302d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_302d68:
    // 0x302d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302d6c:
    // 0x302d6c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x302d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_302d70:
    // 0x302d70: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x302d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_302d74:
    // 0x302d74: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x302d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_302d78:
    // 0x302d78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x302d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_302d7c:
    // 0x302d7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_302d80:
    // 0x302d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_302d84:
    // 0x302d84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x302d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_302d88:
    // 0x302d88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302d8c:
    // 0x302d8c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x302d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_302d90:
    // 0x302d90: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302d94:
    // 0x302d94: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302d98:
    // 0x302d98: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302d9c:
    // 0x302d9c: 0x320f809  jalr        $t9
label_302da0:
    if (ctx->pc == 0x302DA0u) {
        ctx->pc = 0x302DA0u;
            // 0x302da0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x302DA4u;
        goto label_302da4;
    }
    ctx->pc = 0x302D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302DA4u);
        ctx->pc = 0x302DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302D9Cu;
            // 0x302da0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302DA4u; }
            if (ctx->pc != 0x302DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x302DA4u;
label_302da4:
    // 0x302da4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302da8:
    // 0x302da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302dac:
    // 0x302dac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302db0:
    // 0x302db0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302db4:
    // 0x302db4: 0x320f809  jalr        $t9
label_302db8:
    if (ctx->pc == 0x302DB8u) {
        ctx->pc = 0x302DB8u;
            // 0x302db8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x302DBCu;
        goto label_302dbc;
    }
    ctx->pc = 0x302DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302DBCu);
        ctx->pc = 0x302DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302DB4u;
            // 0x302db8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302DBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302DBCu; }
            if (ctx->pc != 0x302DBCu) { return; }
        }
        }
    }
    ctx->pc = 0x302DBCu;
label_302dbc:
    // 0x302dbc: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x302dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302dc0:
    // 0x302dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x302dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302dc4:
    // 0x302dc4: 0x0  nop
    ctx->pc = 0x302dc4u;
    // NOP
label_302dc8:
    // 0x302dc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_302dcc:
    // 0x302dcc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_302dd0:
    if (ctx->pc == 0x302DD0u) {
        ctx->pc = 0x302DD4u;
        goto label_302dd4;
    }
    ctx->pc = 0x302DCCu;
    {
        const bool branch_taken_0x302dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302dcc) {
            ctx->pc = 0x302E18u;
            goto label_302e18;
        }
    }
    ctx->pc = 0x302DD4u;
label_302dd4:
    // 0x302dd4: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x302dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_302dd8:
    // 0x302dd8: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x302dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_302ddc:
    // 0x302ddc: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_302de0:
    if (ctx->pc == 0x302DE0u) {
        ctx->pc = 0x302DE0u;
            // 0x302de0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x302DE4u;
        goto label_302de4;
    }
    ctx->pc = 0x302DDCu;
    {
        const bool branch_taken_0x302ddc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x302ddc) {
            ctx->pc = 0x302DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302DDCu;
            // 0x302de0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302E00u;
            goto label_302e00;
        }
    }
    ctx->pc = 0x302DE4u;
label_302de4:
    // 0x302de4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302de8:
    // 0x302de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302dec:
    // 0x302dec: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302df0:
    // 0x302df0: 0x320f809  jalr        $t9
label_302df4:
    if (ctx->pc == 0x302DF4u) {
        ctx->pc = 0x302DF4u;
            // 0x302df4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x302DF8u;
        goto label_302df8;
    }
    ctx->pc = 0x302DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302DF8u);
        ctx->pc = 0x302DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302DF0u;
            // 0x302df4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302DF8u; }
            if (ctx->pc != 0x302DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x302DF8u;
label_302df8:
    // 0x302df8: 0x10000028  b           . + 4 + (0x28 << 2)
label_302dfc:
    if (ctx->pc == 0x302DFCu) {
        ctx->pc = 0x302E00u;
        goto label_302e00;
    }
    ctx->pc = 0x302DF8u;
    {
        const bool branch_taken_0x302df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302df8) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E00u;
label_302e00:
    // 0x302e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e04:
    // 0x302e04: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302e08:
    // 0x302e08: 0x320f809  jalr        $t9
label_302e0c:
    if (ctx->pc == 0x302E0Cu) {
        ctx->pc = 0x302E0Cu;
            // 0x302e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x302E10u;
        goto label_302e10;
    }
    ctx->pc = 0x302E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E10u);
        ctx->pc = 0x302E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E08u;
            // 0x302e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302E10u; }
            if (ctx->pc != 0x302E10u) { return; }
        }
        }
    }
    ctx->pc = 0x302E10u;
label_302e10:
    // 0x302e10: 0x10000022  b           . + 4 + (0x22 << 2)
label_302e14:
    if (ctx->pc == 0x302E14u) {
        ctx->pc = 0x302E18u;
        goto label_302e18;
    }
    ctx->pc = 0x302E10u;
    {
        const bool branch_taken_0x302e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e10) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E18u;
label_302e18:
    // 0x302e18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_302e1c:
    // 0x302e1c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_302e20:
    if (ctx->pc == 0x302E20u) {
        ctx->pc = 0x302E20u;
            // 0x302e20: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x302E24u;
        goto label_302e24;
    }
    ctx->pc = 0x302E1Cu;
    {
        const bool branch_taken_0x302e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302e1c) {
            ctx->pc = 0x302E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302E1Cu;
            // 0x302e20: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302E8Cu;
            goto label_302e8c;
        }
    }
    ctx->pc = 0x302E24u;
label_302e24:
    // 0x302e24: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_302e28:
    // 0x302e28: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x302e28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_302e2c:
    // 0x302e2c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_302e30:
    if (ctx->pc == 0x302E30u) {
        ctx->pc = 0x302E34u;
        goto label_302e34;
    }
    ctx->pc = 0x302E2Cu;
    {
        const bool branch_taken_0x302e2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x302e2c) {
            ctx->pc = 0x302E50u;
            goto label_302e50;
        }
    }
    ctx->pc = 0x302E34u;
label_302e34:
    // 0x302e34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302e38:
    // 0x302e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e3c:
    // 0x302e3c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302e40:
    // 0x302e40: 0x320f809  jalr        $t9
label_302e44:
    if (ctx->pc == 0x302E44u) {
        ctx->pc = 0x302E44u;
            // 0x302e44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x302E48u;
        goto label_302e48;
    }
    ctx->pc = 0x302E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E48u);
        ctx->pc = 0x302E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E40u;
            // 0x302e44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302E48u; }
            if (ctx->pc != 0x302E48u) { return; }
        }
        }
    }
    ctx->pc = 0x302E48u;
label_302e48:
    // 0x302e48: 0x10000014  b           . + 4 + (0x14 << 2)
label_302e4c:
    if (ctx->pc == 0x302E4Cu) {
        ctx->pc = 0x302E50u;
        goto label_302e50;
    }
    ctx->pc = 0x302E48u;
    {
        const bool branch_taken_0x302e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e48) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E50u;
label_302e50:
    // 0x302e50: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_302e54:
    if (ctx->pc == 0x302E54u) {
        ctx->pc = 0x302E54u;
            // 0x302e54: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x302E58u;
        goto label_302e58;
    }
    ctx->pc = 0x302E50u;
    {
        const bool branch_taken_0x302e50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x302e50) {
            ctx->pc = 0x302E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302E50u;
            // 0x302e54: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302E74u;
            goto label_302e74;
        }
    }
    ctx->pc = 0x302E58u;
label_302e58:
    // 0x302e58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302e5c:
    // 0x302e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e60:
    // 0x302e60: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302e64:
    // 0x302e64: 0x320f809  jalr        $t9
label_302e68:
    if (ctx->pc == 0x302E68u) {
        ctx->pc = 0x302E68u;
            // 0x302e68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x302E6Cu;
        goto label_302e6c;
    }
    ctx->pc = 0x302E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E6Cu);
        ctx->pc = 0x302E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E64u;
            // 0x302e68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302E6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302E6Cu; }
            if (ctx->pc != 0x302E6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x302E6Cu;
label_302e6c:
    // 0x302e6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_302e70:
    if (ctx->pc == 0x302E70u) {
        ctx->pc = 0x302E74u;
        goto label_302e74;
    }
    ctx->pc = 0x302E6Cu;
    {
        const bool branch_taken_0x302e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e6c) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E74u;
label_302e74:
    // 0x302e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e78:
    // 0x302e78: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302e7c:
    // 0x302e7c: 0x320f809  jalr        $t9
label_302e80:
    if (ctx->pc == 0x302E80u) {
        ctx->pc = 0x302E80u;
            // 0x302e80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x302E84u;
        goto label_302e84;
    }
    ctx->pc = 0x302E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E84u);
        ctx->pc = 0x302E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E7Cu;
            // 0x302e80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302E84u; }
            if (ctx->pc != 0x302E84u) { return; }
        }
        }
    }
    ctx->pc = 0x302E84u;
label_302e84:
    // 0x302e84: 0x10000005  b           . + 4 + (0x5 << 2)
label_302e88:
    if (ctx->pc == 0x302E88u) {
        ctx->pc = 0x302E88u;
            // 0x302e88: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x302E8Cu;
        goto label_302e8c;
    }
    ctx->pc = 0x302E84u;
    {
        const bool branch_taken_0x302e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E84u;
            // 0x302e88: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e84) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E8Cu;
label_302e8c:
    // 0x302e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e90:
    // 0x302e90: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302e94:
    // 0x302e94: 0x320f809  jalr        $t9
label_302e98:
    if (ctx->pc == 0x302E98u) {
        ctx->pc = 0x302E98u;
            // 0x302e98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x302E9Cu;
        goto label_302e9c;
    }
    ctx->pc = 0x302E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E9Cu);
        ctx->pc = 0x302E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E94u;
            // 0x302e98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302E9Cu; }
            if (ctx->pc != 0x302E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x302E9Cu;
label_302e9c:
    // 0x302e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302ea0:
    // 0x302ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302ea4:
    // 0x302ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302ea8:
    // 0x302ea8: 0x3e00008  jr          $ra
label_302eac:
    if (ctx->pc == 0x302EACu) {
        ctx->pc = 0x302EACu;
            // 0x302eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302EB0u;
        goto label_302eb0;
    }
    ctx->pc = 0x302EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302EA8u;
            // 0x302eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302EB0u;
label_302eb0:
    // 0x302eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302eb4:
    // 0x302eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302eb8:
    // 0x302eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302ebc:
    // 0x302ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302ec0:
    // 0x302ec0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_302ec4:
    // 0x302ec4: 0xc0c159c  jal         func_305670
label_302ec8:
    if (ctx->pc == 0x302EC8u) {
        ctx->pc = 0x302EC8u;
            // 0x302ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302ECCu;
        goto label_302ecc;
    }
    ctx->pc = 0x302EC4u;
    SET_GPR_U32(ctx, 31, 0x302ECCu);
    ctx->pc = 0x302EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302EC4u;
            // 0x302ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305670u;
    if (runtime->hasFunction(0x305670u)) {
        auto targetFn = runtime->lookupFunction(0x305670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302ECCu; }
        if (ctx->pc != 0x302ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305670_0x305670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302ECCu; }
        if (ctx->pc != 0x302ECCu) { return; }
    }
    ctx->pc = 0x302ECCu;
label_302ecc:
    // 0x302ecc: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x302eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_302ed0:
    // 0x302ed0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x302ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_302ed4:
    // 0x302ed4: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_302ed8:
    // 0x302ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302edc:
    // 0x302edc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302ee0:
    // 0x302ee0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x302ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302ee4:
    // 0x302ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302ee8:
    // 0x302ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302eec:
    // 0x302eec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x302eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_302ef0:
    // 0x302ef0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x302ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_302ef4:
    // 0x302ef4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_302ef8:
    // 0x302ef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_302efc:
    // 0x302efc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x302efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_302f00:
    // 0x302f00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302f04:
    // 0x302f04: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x302f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_302f08:
    // 0x302f08: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302f0c:
    // 0x302f0c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302f0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302f10:
    // 0x302f10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302f14:
    // 0x302f14: 0x320f809  jalr        $t9
label_302f18:
    if (ctx->pc == 0x302F18u) {
        ctx->pc = 0x302F18u;
            // 0x302f18: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302F1Cu;
        goto label_302f1c;
    }
    ctx->pc = 0x302F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302F1Cu);
        ctx->pc = 0x302F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302F14u;
            // 0x302f18: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302F1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302F1Cu; }
            if (ctx->pc != 0x302F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x302F1Cu;
label_302f1c:
    // 0x302f1c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302f20:
    // 0x302f20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302f24:
    // 0x302f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302f28:
    // 0x302f28: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x302f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302f2c:
    // 0x302f2c: 0x320f809  jalr        $t9
label_302f30:
    if (ctx->pc == 0x302F30u) {
        ctx->pc = 0x302F30u;
            // 0x302f30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302F34u;
        goto label_302f34;
    }
    ctx->pc = 0x302F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302F34u);
        ctx->pc = 0x302F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302F2Cu;
            // 0x302f30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302F34u; }
            if (ctx->pc != 0x302F34u) { return; }
        }
        }
    }
    ctx->pc = 0x302F34u;
label_302f34:
    // 0x302f34: 0xc0c0f64  jal         func_303D90
label_302f38:
    if (ctx->pc == 0x302F38u) {
        ctx->pc = 0x302F38u;
            // 0x302f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302F3Cu;
        goto label_302f3c;
    }
    ctx->pc = 0x302F34u;
    SET_GPR_U32(ctx, 31, 0x302F3Cu);
    ctx->pc = 0x302F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302F34u;
            // 0x302f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F3Cu; }
        if (ctx->pc != 0x302F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F3Cu; }
        if (ctx->pc != 0x302F3Cu) { return; }
    }
    ctx->pc = 0x302F3Cu;
label_302f3c:
    // 0x302f3c: 0x8e230d74  lw          $v1, 0xD74($s1)
    ctx->pc = 0x302f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_302f40:
    // 0x302f40: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x302f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_302f44:
    // 0x302f44: 0xac6402c0  sw          $a0, 0x2C0($v1)
    ctx->pc = 0x302f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 4));
label_302f48:
    // 0x302f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302f4c:
    // 0x302f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302f50:
    // 0x302f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302f54:
    // 0x302f54: 0x3e00008  jr          $ra
label_302f58:
    if (ctx->pc == 0x302F58u) {
        ctx->pc = 0x302F58u;
            // 0x302f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302F5Cu;
        goto label_302f5c;
    }
    ctx->pc = 0x302F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302F54u;
            // 0x302f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302F5Cu;
label_302f5c:
    // 0x302f5c: 0x0  nop
    ctx->pc = 0x302f5cu;
    // NOP
label_302f60:
    // 0x302f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_302f64:
    // 0x302f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_302f68:
    // 0x302f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302f6c:
    // 0x302f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302f70:
    // 0x302f70: 0xc0754b4  jal         func_1D52D0
label_302f74:
    if (ctx->pc == 0x302F74u) {
        ctx->pc = 0x302F74u;
            // 0x302f74: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x302F78u;
        goto label_302f78;
    }
    ctx->pc = 0x302F70u;
    SET_GPR_U32(ctx, 31, 0x302F78u);
    ctx->pc = 0x302F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302F70u;
            // 0x302f74: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F78u; }
        if (ctx->pc != 0x302F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F78u; }
        if (ctx->pc != 0x302F78u) { return; }
    }
    ctx->pc = 0x302F78u;
label_302f78:
    // 0x302f78: 0xc0c1088  jal         func_304220
label_302f7c:
    if (ctx->pc == 0x302F7Cu) {
        ctx->pc = 0x302F7Cu;
            // 0x302f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302F80u;
        goto label_302f80;
    }
    ctx->pc = 0x302F78u;
    SET_GPR_U32(ctx, 31, 0x302F80u);
    ctx->pc = 0x302F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302F78u;
            // 0x302f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304220u;
    if (runtime->hasFunction(0x304220u)) {
        auto targetFn = runtime->lookupFunction(0x304220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F80u; }
        if (ctx->pc != 0x302F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304220_0x304220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F80u; }
        if (ctx->pc != 0x302F80u) { return; }
    }
    ctx->pc = 0x302F80u;
label_302f80:
    // 0x302f80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x302f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_302f84:
    // 0x302f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302f88:
    // 0x302f88: 0xc0c1054  jal         func_304150
label_302f8c:
    if (ctx->pc == 0x302F8Cu) {
        ctx->pc = 0x302F8Cu;
            // 0x302f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302F90u;
        goto label_302f90;
    }
    ctx->pc = 0x302F88u;
    SET_GPR_U32(ctx, 31, 0x302F90u);
    ctx->pc = 0x302F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302F88u;
            // 0x302f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (runtime->hasFunction(0x304150u)) {
        auto targetFn = runtime->lookupFunction(0x304150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F90u; }
        if (ctx->pc != 0x302F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304150_0x304150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F90u; }
        if (ctx->pc != 0x302F90u) { return; }
    }
    ctx->pc = 0x302F90u;
label_302f90:
    // 0x302f90: 0x8e050d74  lw          $a1, 0xD74($s0)
    ctx->pc = 0x302f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_302f94:
    // 0x302f94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x302f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_302f98:
    // 0x302f98: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x302f98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_302f9c:
    // 0x302f9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x302f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_302fa0:
    // 0x302fa0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_302fa4:
    // 0x302fa4: 0x90840281  lbu         $a0, 0x281($a0)
    ctx->pc = 0x302fa4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 641)));
label_302fa8:
    // 0x302fa8: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_302fac:
    if (ctx->pc == 0x302FACu) {
        ctx->pc = 0x302FACu;
            // 0x302fac: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x302FB0u;
        goto label_302fb0;
    }
    ctx->pc = 0x302FA8u;
    {
        const bool branch_taken_0x302fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302fa8) {
            ctx->pc = 0x302FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302FA8u;
            // 0x302fac: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303014u;
            goto label_303014;
        }
    }
    ctx->pc = 0x302FB0u;
label_302fb0:
    // 0x302fb0: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x302fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_302fb4:
    // 0x302fb4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x302fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_302fb8:
    // 0x302fb8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x302fb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_302fbc:
    // 0x302fbc: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_302fc0:
    if (ctx->pc == 0x302FC0u) {
        ctx->pc = 0x302FC4u;
        goto label_302fc4;
    }
    ctx->pc = 0x302FBCu;
    {
        const bool branch_taken_0x302fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302fbc) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x302FC4u;
label_302fc4:
    // 0x302fc4: 0x8e0411d4  lw          $a0, 0x11D4($s0)
    ctx->pc = 0x302fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4564)));
label_302fc8:
    // 0x302fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302fcc:
    // 0x302fcc: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_302fd0:
    if (ctx->pc == 0x302FD0u) {
        ctx->pc = 0x302FD4u;
        goto label_302fd4;
    }
    ctx->pc = 0x302FCCu;
    {
        const bool branch_taken_0x302fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302fcc) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x302FD4u;
label_302fd4:
    // 0x302fd4: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x302fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_302fd8:
    // 0x302fd8: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x302fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_302fdc:
    // 0x302fdc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_302fe0:
    if (ctx->pc == 0x302FE0u) {
        ctx->pc = 0x302FE4u;
        goto label_302fe4;
    }
    ctx->pc = 0x302FDCu;
    {
        const bool branch_taken_0x302fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302fdc) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x302FE4u;
label_302fe4:
    // 0x302fe4: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x302fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_302fe8:
    // 0x302fe8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x302fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_302fec:
    // 0x302fec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_302ff0:
    if (ctx->pc == 0x302FF0u) {
        ctx->pc = 0x302FF4u;
        goto label_302ff4;
    }
    ctx->pc = 0x302FECu;
    {
        const bool branch_taken_0x302fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302fec) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x302FF4u;
label_302ff4:
    // 0x302ff4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x302ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_302ff8:
    // 0x302ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302ffc:
    // 0x302ffc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303000:
    // 0x303000: 0x320f809  jalr        $t9
label_303004:
    if (ctx->pc == 0x303004u) {
        ctx->pc = 0x303004u;
            // 0x303004: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x303008u;
        goto label_303008;
    }
    ctx->pc = 0x303000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303008u);
        ctx->pc = 0x303004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303000u;
            // 0x303004: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303008u; }
            if (ctx->pc != 0x303008u) { return; }
        }
        }
    }
    ctx->pc = 0x303008u;
label_303008:
    // 0x303008: 0x10000024  b           . + 4 + (0x24 << 2)
label_30300c:
    if (ctx->pc == 0x30300Cu) {
        ctx->pc = 0x30300Cu;
            // 0x30300c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x303010u;
        goto label_303010;
    }
    ctx->pc = 0x303008u;
    {
        const bool branch_taken_0x303008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303008u;
            // 0x30300c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303008) {
            ctx->pc = 0x30309Cu;
            goto label_30309c;
        }
    }
    ctx->pc = 0x303010u;
label_303010:
    // 0x303010: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x303010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_303014:
    // 0x303014: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x303014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_303018:
    // 0x303018: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_30301c:
    if (ctx->pc == 0x30301Cu) {
        ctx->pc = 0x30301Cu;
            // 0x30301c: 0xc6020de4  lwc1        $f2, 0xDE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x303020u;
        goto label_303020;
    }
    ctx->pc = 0x303018u;
    {
        const bool branch_taken_0x303018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303018) {
            ctx->pc = 0x30301Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303018u;
            // 0x30301c: 0xc6020de4  lwc1        $f2, 0xDE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30303Cu;
            goto label_30303c;
        }
    }
    ctx->pc = 0x303020u;
label_303020:
    // 0x303020: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303024:
    // 0x303024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303028:
    // 0x303028: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x303028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_30302c:
    // 0x30302c: 0x320f809  jalr        $t9
label_303030:
    if (ctx->pc == 0x303030u) {
        ctx->pc = 0x303030u;
            // 0x303030: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x303034u;
        goto label_303034;
    }
    ctx->pc = 0x30302Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303034u);
        ctx->pc = 0x303030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30302Cu;
            // 0x303030: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303034u; }
            if (ctx->pc != 0x303034u) { return; }
        }
        }
    }
    ctx->pc = 0x303034u;
label_303034:
    // 0x303034: 0x10000018  b           . + 4 + (0x18 << 2)
label_303038:
    if (ctx->pc == 0x303038u) {
        ctx->pc = 0x30303Cu;
        goto label_30303c;
    }
    ctx->pc = 0x303034u;
    {
        const bool branch_taken_0x303034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303034) {
            ctx->pc = 0x303098u;
            goto label_303098;
        }
    }
    ctx->pc = 0x30303Cu;
label_30303c:
    // 0x30303c: 0xc6010de8  lwc1        $f1, 0xDE8($s0)
    ctx->pc = 0x30303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303040:
    // 0x303040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x303040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303044:
    // 0x303044: 0x0  nop
    ctx->pc = 0x303044u;
    // NOP
label_303048:
    // 0x303048: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x303048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_30304c:
    // 0x30304c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30304cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303050:
    // 0x303050: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_303054:
    if (ctx->pc == 0x303054u) {
        ctx->pc = 0x303054u;
            // 0x303054: 0x8e030d60  lw          $v1, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x303058u;
        goto label_303058;
    }
    ctx->pc = 0x303050u;
    {
        const bool branch_taken_0x303050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303050) {
            ctx->pc = 0x303054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303050u;
            // 0x303054: 0x8e030d60  lw          $v1, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303078u;
            goto label_303078;
        }
    }
    ctx->pc = 0x303058u;
label_303058:
    // 0x303058: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x303058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_30305c:
    // 0x30305c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303060:
    // 0x303060: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303064:
    // 0x303064: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x303064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303068:
    // 0x303068: 0x320f809  jalr        $t9
label_30306c:
    if (ctx->pc == 0x30306Cu) {
        ctx->pc = 0x30306Cu;
            // 0x30306c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x303070u;
        goto label_303070;
    }
    ctx->pc = 0x303068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303070u);
        ctx->pc = 0x30306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303068u;
            // 0x30306c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303070u; }
            if (ctx->pc != 0x303070u) { return; }
        }
        }
    }
    ctx->pc = 0x303070u;
label_303070:
    // 0x303070: 0x10000009  b           . + 4 + (0x9 << 2)
label_303074:
    if (ctx->pc == 0x303074u) {
        ctx->pc = 0x303078u;
        goto label_303078;
    }
    ctx->pc = 0x303070u;
    {
        const bool branch_taken_0x303070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303070) {
            ctx->pc = 0x303098u;
            goto label_303098;
        }
    }
    ctx->pc = 0x303078u;
label_303078:
    // 0x303078: 0x80630005  lb          $v1, 0x5($v1)
    ctx->pc = 0x303078u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_30307c:
    // 0x30307c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_303080:
    if (ctx->pc == 0x303080u) {
        ctx->pc = 0x303084u;
        goto label_303084;
    }
    ctx->pc = 0x30307Cu;
    {
        const bool branch_taken_0x30307c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30307c) {
            ctx->pc = 0x303098u;
            goto label_303098;
        }
    }
    ctx->pc = 0x303084u;
label_303084:
    // 0x303084: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303088:
    // 0x303088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30308c:
    // 0x30308c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303090:
    // 0x303090: 0x320f809  jalr        $t9
label_303094:
    if (ctx->pc == 0x303094u) {
        ctx->pc = 0x303094u;
            // 0x303094: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x303098u;
        goto label_303098;
    }
    ctx->pc = 0x303090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303098u);
        ctx->pc = 0x303094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303090u;
            // 0x303094: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303098u; }
            if (ctx->pc != 0x303098u) { return; }
        }
        }
    }
    ctx->pc = 0x303098u;
label_303098:
    // 0x303098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30309c:
    // 0x30309c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3030a0:
    // 0x3030a0: 0x3e00008  jr          $ra
label_3030a4:
    if (ctx->pc == 0x3030A4u) {
        ctx->pc = 0x3030A4u;
            // 0x3030a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3030A8u;
        goto label_3030a8;
    }
    ctx->pc = 0x3030A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3030A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3030A0u;
            // 0x3030a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3030A8u;
label_3030a8:
    // 0x3030a8: 0x0  nop
    ctx->pc = 0x3030a8u;
    // NOP
label_3030ac:
    // 0x3030ac: 0x0  nop
    ctx->pc = 0x3030acu;
    // NOP
label_3030b0:
    // 0x3030b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3030b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3030b4:
    // 0x3030b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3030b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3030b8:
    // 0x3030b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3030b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3030bc:
    // 0x3030bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3030bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3030c0:
    // 0x3030c0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3030c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3030c4:
    // 0x3030c4: 0xc0c15dc  jal         func_305770
label_3030c8:
    if (ctx->pc == 0x3030C8u) {
        ctx->pc = 0x3030C8u;
            // 0x3030c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3030CCu;
        goto label_3030cc;
    }
    ctx->pc = 0x3030C4u;
    SET_GPR_U32(ctx, 31, 0x3030CCu);
    ctx->pc = 0x3030C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3030C4u;
            // 0x3030c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030CCu; }
        if (ctx->pc != 0x3030CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030CCu; }
        if (ctx->pc != 0x3030CCu) { return; }
    }
    ctx->pc = 0x3030CCu;
label_3030cc:
    // 0x3030cc: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x3030ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_3030d0:
    // 0x3030d0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3030d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_3030d4:
    // 0x3030d4: 0xae200dc0  sw          $zero, 0xDC0($s1)
    ctx->pc = 0x3030d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3520), GPR_U32(ctx, 0));
label_3030d8:
    // 0x3030d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3030d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3030dc:
    // 0x3030dc: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x3030dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3030e0:
    // 0x3030e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3030e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3030e4:
    // 0x3030e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3030e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3030e8:
    // 0x3030e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3030e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3030ec:
    // 0x3030ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3030ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3030f0:
    // 0x3030f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3030f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3030f4:
    // 0x3030f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3030f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3030f8:
    // 0x3030f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3030f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3030fc:
    // 0x3030fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3030fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_303100:
    // 0x303100: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x303100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_303104:
    // 0x303104: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x303104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_303108:
    // 0x303108: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x303108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_30310c:
    // 0x30310c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x30310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_303110:
    // 0x303110: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x303110u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_303114:
    // 0x303114: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x303114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_303118:
    // 0x303118: 0x320f809  jalr        $t9
label_30311c:
    if (ctx->pc == 0x30311Cu) {
        ctx->pc = 0x30311Cu;
            // 0x30311c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x303120u;
        goto label_303120;
    }
    ctx->pc = 0x303118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303120u);
        ctx->pc = 0x30311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303118u;
            // 0x30311c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303120u; }
            if (ctx->pc != 0x303120u) { return; }
        }
        }
    }
    ctx->pc = 0x303120u;
label_303120:
    // 0x303120: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x303120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_303124:
    // 0x303124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x303124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_303128:
    // 0x303128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30312c:
    // 0x30312c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_303130:
    // 0x303130: 0x320f809  jalr        $t9
label_303134:
    if (ctx->pc == 0x303134u) {
        ctx->pc = 0x303134u;
            // 0x303134: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303138u;
        goto label_303138;
    }
    ctx->pc = 0x303130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303138u);
        ctx->pc = 0x303134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303130u;
            // 0x303134: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303138u; }
            if (ctx->pc != 0x303138u) { return; }
        }
        }
    }
    ctx->pc = 0x303138u;
label_303138:
    // 0x303138: 0xae200dd8  sw          $zero, 0xDD8($s1)
    ctx->pc = 0x303138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3544), GPR_U32(ctx, 0));
label_30313c:
    // 0x30313c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30313cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_303140:
    // 0x303140: 0xc6200af4  lwc1        $f0, 0xAF4($s1)
    ctx->pc = 0x303140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303144:
    // 0x303144: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x303144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_303148:
    // 0x303148: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x303148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30314c:
    // 0x30314c: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
label_303150:
    if (ctx->pc == 0x303150u) {
        ctx->pc = 0x303150u;
            // 0x303150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303154u;
        goto label_303154;
    }
    ctx->pc = 0x30314Cu;
    {
        const bool branch_taken_0x30314c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30314c) {
            ctx->pc = 0x303150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30314Cu;
            // 0x303150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3031E4u;
            goto label_3031e4;
        }
    }
    ctx->pc = 0x303154u;
label_303154:
    // 0x303154: 0xc6200b00  lwc1        $f0, 0xB00($s1)
    ctx->pc = 0x303154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303158:
    // 0x303158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30315c:
    // 0x30315c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x30315cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303160:
    // 0x303160: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_303164:
    if (ctx->pc == 0x303164u) {
        ctx->pc = 0x303168u;
        goto label_303168;
    }
    ctx->pc = 0x303160u;
    {
        const bool branch_taken_0x303160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303160) {
            ctx->pc = 0x3031E0u;
            goto label_3031e0;
        }
    }
    ctx->pc = 0x303168u;
label_303168:
    // 0x303168: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x303168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30316c:
    // 0x30316c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_303170:
    if (ctx->pc == 0x303170u) {
        ctx->pc = 0x303170u;
            // 0x303170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x303174u;
        goto label_303174;
    }
    ctx->pc = 0x30316Cu;
    {
        const bool branch_taken_0x30316c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30316Cu;
            // 0x303170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30316c) {
            ctx->pc = 0x303178u;
            goto label_303178;
        }
    }
    ctx->pc = 0x303174u;
label_303174:
    // 0x303174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303178:
    // 0x303178: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30317c:
    if (ctx->pc == 0x30317Cu) {
        ctx->pc = 0x30317Cu;
            // 0x30317c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x303180u;
        goto label_303180;
    }
    ctx->pc = 0x303178u;
    {
        const bool branch_taken_0x303178 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x303178) {
            ctx->pc = 0x30317Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303178u;
            // 0x30317c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30318Cu;
            goto label_30318c;
        }
    }
    ctx->pc = 0x303180u;
label_303180:
    // 0x303180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303184:
    // 0x303184: 0x10000007  b           . + 4 + (0x7 << 2)
label_303188:
    if (ctx->pc == 0x303188u) {
        ctx->pc = 0x303188u;
            // 0x303188: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30318Cu;
        goto label_30318c;
    }
    ctx->pc = 0x303184u;
    {
        const bool branch_taken_0x303184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303184u;
            // 0x303188: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303184) {
            ctx->pc = 0x3031A4u;
            goto label_3031a4;
        }
    }
    ctx->pc = 0x30318Cu;
label_30318c:
    // 0x30318c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_303190:
    // 0x303190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x303190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_303194:
    // 0x303194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303198:
    // 0x303198: 0x0  nop
    ctx->pc = 0x303198u;
    // NOP
label_30319c:
    // 0x30319c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x30319cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3031a0:
    // 0x3031a0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x3031a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_3031a4:
    // 0x3031a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3031a8:
    // 0x3031a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3031ac:
    // 0x3031ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3031acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3031b0:
    // 0x3031b0: 0x3c024436  lui         $v0, 0x4436
    ctx->pc = 0x3031b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17462 << 16));
label_3031b4:
    // 0x3031b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3031b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3031b8:
    // 0x3031b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3031b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3031bc:
    // 0x3031bc: 0x0  nop
    ctx->pc = 0x3031bcu;
    // NOP
label_3031c0:
    // 0x3031c0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3031c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3031c4:
    // 0x3031c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3031c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3031c8:
    // 0x3031c8: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x3031c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3031cc:
    // 0x3031cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3031ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3031d0:
    // 0x3031d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3031d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3031d4:
    // 0x3031d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3031d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3031d8:
    // 0x3031d8: 0x0  nop
    ctx->pc = 0x3031d8u;
    // NOP
label_3031dc:
    // 0x3031dc: 0xae220b00  sw          $v0, 0xB00($s1)
    ctx->pc = 0x3031dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
label_3031e0:
    // 0x3031e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3031e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3031e4:
    // 0x3031e4: 0xc0c0f64  jal         func_303D90
label_3031e8:
    if (ctx->pc == 0x3031E8u) {
        ctx->pc = 0x3031ECu;
        goto label_3031ec;
    }
    ctx->pc = 0x3031E4u;
    SET_GPR_U32(ctx, 31, 0x3031ECu);
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3031ECu; }
        if (ctx->pc != 0x3031ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3031ECu; }
        if (ctx->pc != 0x3031ECu) { return; }
    }
    ctx->pc = 0x3031ECu;
label_3031ec:
    // 0x3031ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3031ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3031f0:
    // 0x3031f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3031f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3031f4:
    // 0x3031f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3031f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3031f8:
    // 0x3031f8: 0x3e00008  jr          $ra
label_3031fc:
    if (ctx->pc == 0x3031FCu) {
        ctx->pc = 0x3031FCu;
            // 0x3031fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x303200u;
        goto label_303200;
    }
    ctx->pc = 0x3031F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3031FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3031F8u;
            // 0x3031fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303200u;
label_303200:
    // 0x303200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_303204:
    // 0x303204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_303208:
    // 0x303208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30320c:
    // 0x30320c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303210:
    // 0x303210: 0xc0754b4  jal         func_1D52D0
label_303214:
    if (ctx->pc == 0x303214u) {
        ctx->pc = 0x303214u;
            // 0x303214: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x303218u;
        goto label_303218;
    }
    ctx->pc = 0x303210u;
    SET_GPR_U32(ctx, 31, 0x303218u);
    ctx->pc = 0x303214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303210u;
            // 0x303214: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303218u; }
        if (ctx->pc != 0x303218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303218u; }
        if (ctx->pc != 0x303218u) { return; }
    }
    ctx->pc = 0x303218u;
label_303218:
    // 0x303218: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x303218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30321c:
    // 0x30321c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_303220:
    // 0x303220: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_303224:
    if (ctx->pc == 0x303224u) {
        ctx->pc = 0x303224u;
            // 0x303224: 0x8e020d60  lw          $v0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x303228u;
        goto label_303228;
    }
    ctx->pc = 0x303220u;
    {
        const bool branch_taken_0x303220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303220) {
            ctx->pc = 0x303224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303220u;
            // 0x303224: 0x8e020d60  lw          $v0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303244u;
            goto label_303244;
        }
    }
    ctx->pc = 0x303228u;
label_303228:
    // 0x303228: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30322c:
    // 0x30322c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303230:
    // 0x303230: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x303230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303234:
    // 0x303234: 0x320f809  jalr        $t9
label_303238:
    if (ctx->pc == 0x303238u) {
        ctx->pc = 0x303238u;
            // 0x303238: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x30323Cu;
        goto label_30323c;
    }
    ctx->pc = 0x303234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30323Cu);
        ctx->pc = 0x303238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303234u;
            // 0x303238: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30323Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30323Cu; }
            if (ctx->pc != 0x30323Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30323Cu;
label_30323c:
    // 0x30323c: 0x10000013  b           . + 4 + (0x13 << 2)
label_303240:
    if (ctx->pc == 0x303240u) {
        ctx->pc = 0x303240u;
            // 0x303240: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x303244u;
        goto label_303244;
    }
    ctx->pc = 0x30323Cu;
    {
        const bool branch_taken_0x30323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30323Cu;
            // 0x303240: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30323c) {
            ctx->pc = 0x30328Cu;
            goto label_30328c;
        }
    }
    ctx->pc = 0x303244u;
label_303244:
    // 0x303244: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x303244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_303248:
    // 0x303248: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_30324c:
    if (ctx->pc == 0x30324Cu) {
        ctx->pc = 0x303250u;
        goto label_303250;
    }
    ctx->pc = 0x303248u;
    {
        const bool branch_taken_0x303248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x303248) {
            ctx->pc = 0x30326Cu;
            goto label_30326c;
        }
    }
    ctx->pc = 0x303250u;
label_303250:
    // 0x303250: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303254:
    // 0x303254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303258:
    // 0x303258: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x303258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_30325c:
    // 0x30325c: 0x320f809  jalr        $t9
label_303260:
    if (ctx->pc == 0x303260u) {
        ctx->pc = 0x303260u;
            // 0x303260: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x303264u;
        goto label_303264;
    }
    ctx->pc = 0x30325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303264u);
        ctx->pc = 0x303260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30325Cu;
            // 0x303260: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303264u; }
            if (ctx->pc != 0x303264u) { return; }
        }
        }
    }
    ctx->pc = 0x303264u;
label_303264:
    // 0x303264: 0x10000008  b           . + 4 + (0x8 << 2)
label_303268:
    if (ctx->pc == 0x303268u) {
        ctx->pc = 0x30326Cu;
        goto label_30326c;
    }
    ctx->pc = 0x303264u;
    {
        const bool branch_taken_0x303264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303264) {
            ctx->pc = 0x303288u;
            goto label_303288;
        }
    }
    ctx->pc = 0x30326Cu;
label_30326c:
    // 0x30326c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_303270:
    if (ctx->pc == 0x303270u) {
        ctx->pc = 0x303274u;
        goto label_303274;
    }
    ctx->pc = 0x30326Cu;
    {
        const bool branch_taken_0x30326c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30326c) {
            ctx->pc = 0x303288u;
            goto label_303288;
        }
    }
    ctx->pc = 0x303274u;
label_303274:
    // 0x303274: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x303274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303278:
    // 0x303278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30327c:
    // 0x30327c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303280:
    // 0x303280: 0x320f809  jalr        $t9
label_303284:
    if (ctx->pc == 0x303284u) {
        ctx->pc = 0x303284u;
            // 0x303284: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x303288u;
        goto label_303288;
    }
    ctx->pc = 0x303280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303288u);
        ctx->pc = 0x303284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303280u;
            // 0x303284: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303288u; }
            if (ctx->pc != 0x303288u) { return; }
        }
        }
    }
    ctx->pc = 0x303288u;
label_303288:
    // 0x303288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30328c:
    // 0x30328c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30328cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_303290:
    // 0x303290: 0xc0c1054  jal         func_304150
label_303294:
    if (ctx->pc == 0x303294u) {
        ctx->pc = 0x303294u;
            // 0x303294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303298u;
        goto label_303298;
    }
    ctx->pc = 0x303290u;
    SET_GPR_U32(ctx, 31, 0x303298u);
    ctx->pc = 0x303294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303290u;
            // 0x303294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (runtime->hasFunction(0x304150u)) {
        auto targetFn = runtime->lookupFunction(0x304150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303298u; }
        if (ctx->pc != 0x303298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304150_0x304150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303298u; }
        if (ctx->pc != 0x303298u) { return; }
    }
    ctx->pc = 0x303298u;
label_303298:
    // 0x303298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30329c:
    // 0x30329c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30329cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3032a0:
    // 0x3032a0: 0x3e00008  jr          $ra
label_3032a4:
    if (ctx->pc == 0x3032A4u) {
        ctx->pc = 0x3032A4u;
            // 0x3032a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3032A8u;
        goto label_3032a8;
    }
    ctx->pc = 0x3032A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3032A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3032A0u;
            // 0x3032a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3032A8u;
label_3032a8:
    // 0x3032a8: 0x0  nop
    ctx->pc = 0x3032a8u;
    // NOP
label_3032ac:
    // 0x3032ac: 0x0  nop
    ctx->pc = 0x3032acu;
    // NOP
label_3032b0:
    // 0x3032b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3032b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3032b4:
    // 0x3032b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3032b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3032b8:
    // 0x3032b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3032b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3032bc:
    // 0x3032bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3032bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3032c0:
    // 0x3032c0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3032c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3032c4:
    // 0x3032c4: 0xc0c15dc  jal         func_305770
label_3032c8:
    if (ctx->pc == 0x3032C8u) {
        ctx->pc = 0x3032C8u;
            // 0x3032c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3032CCu;
        goto label_3032cc;
    }
    ctx->pc = 0x3032C4u;
    SET_GPR_U32(ctx, 31, 0x3032CCu);
    ctx->pc = 0x3032C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3032C4u;
            // 0x3032c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032CCu; }
        if (ctx->pc != 0x3032CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032CCu; }
        if (ctx->pc != 0x3032CCu) { return; }
    }
    ctx->pc = 0x3032CCu;
label_3032cc:
    // 0x3032cc: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x3032ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_3032d0:
    // 0x3032d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3032d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3032d4:
    // 0x3032d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3032d8:
    // 0x3032d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3032d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3032dc:
    // 0x3032dc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3032e0:
    // 0x3032e0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x3032e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_3032e4:
    // 0x3032e4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3032e8:
    if (ctx->pc == 0x3032E8u) {
        ctx->pc = 0x3032E8u;
            // 0x3032e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3032ECu;
        goto label_3032ec;
    }
    ctx->pc = 0x3032E4u;
    {
        const bool branch_taken_0x3032e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3032e4) {
            ctx->pc = 0x3032E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3032E4u;
            // 0x3032e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303350u;
            goto label_303350;
        }
    }
    ctx->pc = 0x3032ECu;
label_3032ec:
    // 0x3032ec: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x3032ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3032f0:
    // 0x3032f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3032f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3032f4:
    // 0x3032f4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3032f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3032f8:
    // 0x3032f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3032f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3032fc:
    // 0x3032fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3032fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_303300:
    // 0x303300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303304:
    // 0x303304: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x303304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_303308:
    // 0x303308: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x303308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30330c:
    // 0x30330c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30330cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_303310:
    // 0x303310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_303314:
    // 0x303314: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x303314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_303318:
    // 0x303318: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x303318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30331c:
    // 0x30331c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x30331cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_303320:
    // 0x303320: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x303320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_303324:
    // 0x303324: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x303324u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_303328:
    // 0x303328: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x303328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_30332c:
    // 0x30332c: 0x320f809  jalr        $t9
label_303330:
    if (ctx->pc == 0x303330u) {
        ctx->pc = 0x303330u;
            // 0x303330: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x303334u;
        goto label_303334;
    }
    ctx->pc = 0x30332Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303334u);
        ctx->pc = 0x303330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30332Cu;
            // 0x303330: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303334u; }
            if (ctx->pc != 0x303334u) { return; }
        }
        }
    }
    ctx->pc = 0x303334u;
label_303334:
    // 0x303334: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x303334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_303338:
    // 0x303338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x303338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30333c:
    // 0x30333c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303340:
    // 0x303340: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x303340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_303344:
    // 0x303344: 0x320f809  jalr        $t9
label_303348:
    if (ctx->pc == 0x303348u) {
        ctx->pc = 0x303348u;
            // 0x303348: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30334Cu;
        goto label_30334c;
    }
    ctx->pc = 0x303344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30334Cu);
        ctx->pc = 0x303348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303344u;
            // 0x303348: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30334Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30334Cu; }
            if (ctx->pc != 0x30334Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30334Cu;
label_30334c:
    // 0x30334c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303350:
    // 0x303350: 0xc0c0f64  jal         func_303D90
label_303354:
    if (ctx->pc == 0x303354u) {
        ctx->pc = 0x303358u;
        goto label_303358;
    }
    ctx->pc = 0x303350u;
    SET_GPR_U32(ctx, 31, 0x303358u);
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303358u; }
        if (ctx->pc != 0x303358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303358u; }
        if (ctx->pc != 0x303358u) { return; }
    }
    ctx->pc = 0x303358u;
label_303358:
    // 0x303358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30335c:
    // 0x30335c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30335cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_303360:
    // 0x303360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_303364:
    // 0x303364: 0x3e00008  jr          $ra
label_303368:
    if (ctx->pc == 0x303368u) {
        ctx->pc = 0x303368u;
            // 0x303368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30336Cu;
        goto label_30336c;
    }
    ctx->pc = 0x303364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303364u;
            // 0x303368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30336Cu;
label_30336c:
    // 0x30336c: 0x0  nop
    ctx->pc = 0x30336cu;
    // NOP
}
