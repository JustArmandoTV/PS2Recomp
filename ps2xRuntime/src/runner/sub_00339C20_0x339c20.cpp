#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339C20
// Address: 0x339c20 - 0x33a480
void sub_00339C20_0x339c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339C20_0x339c20");
#endif

    switch (ctx->pc) {
        case 0x339c20u: goto label_339c20;
        case 0x339c24u: goto label_339c24;
        case 0x339c28u: goto label_339c28;
        case 0x339c2cu: goto label_339c2c;
        case 0x339c30u: goto label_339c30;
        case 0x339c34u: goto label_339c34;
        case 0x339c38u: goto label_339c38;
        case 0x339c3cu: goto label_339c3c;
        case 0x339c40u: goto label_339c40;
        case 0x339c44u: goto label_339c44;
        case 0x339c48u: goto label_339c48;
        case 0x339c4cu: goto label_339c4c;
        case 0x339c50u: goto label_339c50;
        case 0x339c54u: goto label_339c54;
        case 0x339c58u: goto label_339c58;
        case 0x339c5cu: goto label_339c5c;
        case 0x339c60u: goto label_339c60;
        case 0x339c64u: goto label_339c64;
        case 0x339c68u: goto label_339c68;
        case 0x339c6cu: goto label_339c6c;
        case 0x339c70u: goto label_339c70;
        case 0x339c74u: goto label_339c74;
        case 0x339c78u: goto label_339c78;
        case 0x339c7cu: goto label_339c7c;
        case 0x339c80u: goto label_339c80;
        case 0x339c84u: goto label_339c84;
        case 0x339c88u: goto label_339c88;
        case 0x339c8cu: goto label_339c8c;
        case 0x339c90u: goto label_339c90;
        case 0x339c94u: goto label_339c94;
        case 0x339c98u: goto label_339c98;
        case 0x339c9cu: goto label_339c9c;
        case 0x339ca0u: goto label_339ca0;
        case 0x339ca4u: goto label_339ca4;
        case 0x339ca8u: goto label_339ca8;
        case 0x339cacu: goto label_339cac;
        case 0x339cb0u: goto label_339cb0;
        case 0x339cb4u: goto label_339cb4;
        case 0x339cb8u: goto label_339cb8;
        case 0x339cbcu: goto label_339cbc;
        case 0x339cc0u: goto label_339cc0;
        case 0x339cc4u: goto label_339cc4;
        case 0x339cc8u: goto label_339cc8;
        case 0x339cccu: goto label_339ccc;
        case 0x339cd0u: goto label_339cd0;
        case 0x339cd4u: goto label_339cd4;
        case 0x339cd8u: goto label_339cd8;
        case 0x339cdcu: goto label_339cdc;
        case 0x339ce0u: goto label_339ce0;
        case 0x339ce4u: goto label_339ce4;
        case 0x339ce8u: goto label_339ce8;
        case 0x339cecu: goto label_339cec;
        case 0x339cf0u: goto label_339cf0;
        case 0x339cf4u: goto label_339cf4;
        case 0x339cf8u: goto label_339cf8;
        case 0x339cfcu: goto label_339cfc;
        case 0x339d00u: goto label_339d00;
        case 0x339d04u: goto label_339d04;
        case 0x339d08u: goto label_339d08;
        case 0x339d0cu: goto label_339d0c;
        case 0x339d10u: goto label_339d10;
        case 0x339d14u: goto label_339d14;
        case 0x339d18u: goto label_339d18;
        case 0x339d1cu: goto label_339d1c;
        case 0x339d20u: goto label_339d20;
        case 0x339d24u: goto label_339d24;
        case 0x339d28u: goto label_339d28;
        case 0x339d2cu: goto label_339d2c;
        case 0x339d30u: goto label_339d30;
        case 0x339d34u: goto label_339d34;
        case 0x339d38u: goto label_339d38;
        case 0x339d3cu: goto label_339d3c;
        case 0x339d40u: goto label_339d40;
        case 0x339d44u: goto label_339d44;
        case 0x339d48u: goto label_339d48;
        case 0x339d4cu: goto label_339d4c;
        case 0x339d50u: goto label_339d50;
        case 0x339d54u: goto label_339d54;
        case 0x339d58u: goto label_339d58;
        case 0x339d5cu: goto label_339d5c;
        case 0x339d60u: goto label_339d60;
        case 0x339d64u: goto label_339d64;
        case 0x339d68u: goto label_339d68;
        case 0x339d6cu: goto label_339d6c;
        case 0x339d70u: goto label_339d70;
        case 0x339d74u: goto label_339d74;
        case 0x339d78u: goto label_339d78;
        case 0x339d7cu: goto label_339d7c;
        case 0x339d80u: goto label_339d80;
        case 0x339d84u: goto label_339d84;
        case 0x339d88u: goto label_339d88;
        case 0x339d8cu: goto label_339d8c;
        case 0x339d90u: goto label_339d90;
        case 0x339d94u: goto label_339d94;
        case 0x339d98u: goto label_339d98;
        case 0x339d9cu: goto label_339d9c;
        case 0x339da0u: goto label_339da0;
        case 0x339da4u: goto label_339da4;
        case 0x339da8u: goto label_339da8;
        case 0x339dacu: goto label_339dac;
        case 0x339db0u: goto label_339db0;
        case 0x339db4u: goto label_339db4;
        case 0x339db8u: goto label_339db8;
        case 0x339dbcu: goto label_339dbc;
        case 0x339dc0u: goto label_339dc0;
        case 0x339dc4u: goto label_339dc4;
        case 0x339dc8u: goto label_339dc8;
        case 0x339dccu: goto label_339dcc;
        case 0x339dd0u: goto label_339dd0;
        case 0x339dd4u: goto label_339dd4;
        case 0x339dd8u: goto label_339dd8;
        case 0x339ddcu: goto label_339ddc;
        case 0x339de0u: goto label_339de0;
        case 0x339de4u: goto label_339de4;
        case 0x339de8u: goto label_339de8;
        case 0x339decu: goto label_339dec;
        case 0x339df0u: goto label_339df0;
        case 0x339df4u: goto label_339df4;
        case 0x339df8u: goto label_339df8;
        case 0x339dfcu: goto label_339dfc;
        case 0x339e00u: goto label_339e00;
        case 0x339e04u: goto label_339e04;
        case 0x339e08u: goto label_339e08;
        case 0x339e0cu: goto label_339e0c;
        case 0x339e10u: goto label_339e10;
        case 0x339e14u: goto label_339e14;
        case 0x339e18u: goto label_339e18;
        case 0x339e1cu: goto label_339e1c;
        case 0x339e20u: goto label_339e20;
        case 0x339e24u: goto label_339e24;
        case 0x339e28u: goto label_339e28;
        case 0x339e2cu: goto label_339e2c;
        case 0x339e30u: goto label_339e30;
        case 0x339e34u: goto label_339e34;
        case 0x339e38u: goto label_339e38;
        case 0x339e3cu: goto label_339e3c;
        case 0x339e40u: goto label_339e40;
        case 0x339e44u: goto label_339e44;
        case 0x339e48u: goto label_339e48;
        case 0x339e4cu: goto label_339e4c;
        case 0x339e50u: goto label_339e50;
        case 0x339e54u: goto label_339e54;
        case 0x339e58u: goto label_339e58;
        case 0x339e5cu: goto label_339e5c;
        case 0x339e60u: goto label_339e60;
        case 0x339e64u: goto label_339e64;
        case 0x339e68u: goto label_339e68;
        case 0x339e6cu: goto label_339e6c;
        case 0x339e70u: goto label_339e70;
        case 0x339e74u: goto label_339e74;
        case 0x339e78u: goto label_339e78;
        case 0x339e7cu: goto label_339e7c;
        case 0x339e80u: goto label_339e80;
        case 0x339e84u: goto label_339e84;
        case 0x339e88u: goto label_339e88;
        case 0x339e8cu: goto label_339e8c;
        case 0x339e90u: goto label_339e90;
        case 0x339e94u: goto label_339e94;
        case 0x339e98u: goto label_339e98;
        case 0x339e9cu: goto label_339e9c;
        case 0x339ea0u: goto label_339ea0;
        case 0x339ea4u: goto label_339ea4;
        case 0x339ea8u: goto label_339ea8;
        case 0x339eacu: goto label_339eac;
        case 0x339eb0u: goto label_339eb0;
        case 0x339eb4u: goto label_339eb4;
        case 0x339eb8u: goto label_339eb8;
        case 0x339ebcu: goto label_339ebc;
        case 0x339ec0u: goto label_339ec0;
        case 0x339ec4u: goto label_339ec4;
        case 0x339ec8u: goto label_339ec8;
        case 0x339eccu: goto label_339ecc;
        case 0x339ed0u: goto label_339ed0;
        case 0x339ed4u: goto label_339ed4;
        case 0x339ed8u: goto label_339ed8;
        case 0x339edcu: goto label_339edc;
        case 0x339ee0u: goto label_339ee0;
        case 0x339ee4u: goto label_339ee4;
        case 0x339ee8u: goto label_339ee8;
        case 0x339eecu: goto label_339eec;
        case 0x339ef0u: goto label_339ef0;
        case 0x339ef4u: goto label_339ef4;
        case 0x339ef8u: goto label_339ef8;
        case 0x339efcu: goto label_339efc;
        case 0x339f00u: goto label_339f00;
        case 0x339f04u: goto label_339f04;
        case 0x339f08u: goto label_339f08;
        case 0x339f0cu: goto label_339f0c;
        case 0x339f10u: goto label_339f10;
        case 0x339f14u: goto label_339f14;
        case 0x339f18u: goto label_339f18;
        case 0x339f1cu: goto label_339f1c;
        case 0x339f20u: goto label_339f20;
        case 0x339f24u: goto label_339f24;
        case 0x339f28u: goto label_339f28;
        case 0x339f2cu: goto label_339f2c;
        case 0x339f30u: goto label_339f30;
        case 0x339f34u: goto label_339f34;
        case 0x339f38u: goto label_339f38;
        case 0x339f3cu: goto label_339f3c;
        case 0x339f40u: goto label_339f40;
        case 0x339f44u: goto label_339f44;
        case 0x339f48u: goto label_339f48;
        case 0x339f4cu: goto label_339f4c;
        case 0x339f50u: goto label_339f50;
        case 0x339f54u: goto label_339f54;
        case 0x339f58u: goto label_339f58;
        case 0x339f5cu: goto label_339f5c;
        case 0x339f60u: goto label_339f60;
        case 0x339f64u: goto label_339f64;
        case 0x339f68u: goto label_339f68;
        case 0x339f6cu: goto label_339f6c;
        case 0x339f70u: goto label_339f70;
        case 0x339f74u: goto label_339f74;
        case 0x339f78u: goto label_339f78;
        case 0x339f7cu: goto label_339f7c;
        case 0x339f80u: goto label_339f80;
        case 0x339f84u: goto label_339f84;
        case 0x339f88u: goto label_339f88;
        case 0x339f8cu: goto label_339f8c;
        case 0x339f90u: goto label_339f90;
        case 0x339f94u: goto label_339f94;
        case 0x339f98u: goto label_339f98;
        case 0x339f9cu: goto label_339f9c;
        case 0x339fa0u: goto label_339fa0;
        case 0x339fa4u: goto label_339fa4;
        case 0x339fa8u: goto label_339fa8;
        case 0x339facu: goto label_339fac;
        case 0x339fb0u: goto label_339fb0;
        case 0x339fb4u: goto label_339fb4;
        case 0x339fb8u: goto label_339fb8;
        case 0x339fbcu: goto label_339fbc;
        case 0x339fc0u: goto label_339fc0;
        case 0x339fc4u: goto label_339fc4;
        case 0x339fc8u: goto label_339fc8;
        case 0x339fccu: goto label_339fcc;
        case 0x339fd0u: goto label_339fd0;
        case 0x339fd4u: goto label_339fd4;
        case 0x339fd8u: goto label_339fd8;
        case 0x339fdcu: goto label_339fdc;
        case 0x339fe0u: goto label_339fe0;
        case 0x339fe4u: goto label_339fe4;
        case 0x339fe8u: goto label_339fe8;
        case 0x339fecu: goto label_339fec;
        case 0x339ff0u: goto label_339ff0;
        case 0x339ff4u: goto label_339ff4;
        case 0x339ff8u: goto label_339ff8;
        case 0x339ffcu: goto label_339ffc;
        case 0x33a000u: goto label_33a000;
        case 0x33a004u: goto label_33a004;
        case 0x33a008u: goto label_33a008;
        case 0x33a00cu: goto label_33a00c;
        case 0x33a010u: goto label_33a010;
        case 0x33a014u: goto label_33a014;
        case 0x33a018u: goto label_33a018;
        case 0x33a01cu: goto label_33a01c;
        case 0x33a020u: goto label_33a020;
        case 0x33a024u: goto label_33a024;
        case 0x33a028u: goto label_33a028;
        case 0x33a02cu: goto label_33a02c;
        case 0x33a030u: goto label_33a030;
        case 0x33a034u: goto label_33a034;
        case 0x33a038u: goto label_33a038;
        case 0x33a03cu: goto label_33a03c;
        case 0x33a040u: goto label_33a040;
        case 0x33a044u: goto label_33a044;
        case 0x33a048u: goto label_33a048;
        case 0x33a04cu: goto label_33a04c;
        case 0x33a050u: goto label_33a050;
        case 0x33a054u: goto label_33a054;
        case 0x33a058u: goto label_33a058;
        case 0x33a05cu: goto label_33a05c;
        case 0x33a060u: goto label_33a060;
        case 0x33a064u: goto label_33a064;
        case 0x33a068u: goto label_33a068;
        case 0x33a06cu: goto label_33a06c;
        case 0x33a070u: goto label_33a070;
        case 0x33a074u: goto label_33a074;
        case 0x33a078u: goto label_33a078;
        case 0x33a07cu: goto label_33a07c;
        case 0x33a080u: goto label_33a080;
        case 0x33a084u: goto label_33a084;
        case 0x33a088u: goto label_33a088;
        case 0x33a08cu: goto label_33a08c;
        case 0x33a090u: goto label_33a090;
        case 0x33a094u: goto label_33a094;
        case 0x33a098u: goto label_33a098;
        case 0x33a09cu: goto label_33a09c;
        case 0x33a0a0u: goto label_33a0a0;
        case 0x33a0a4u: goto label_33a0a4;
        case 0x33a0a8u: goto label_33a0a8;
        case 0x33a0acu: goto label_33a0ac;
        case 0x33a0b0u: goto label_33a0b0;
        case 0x33a0b4u: goto label_33a0b4;
        case 0x33a0b8u: goto label_33a0b8;
        case 0x33a0bcu: goto label_33a0bc;
        case 0x33a0c0u: goto label_33a0c0;
        case 0x33a0c4u: goto label_33a0c4;
        case 0x33a0c8u: goto label_33a0c8;
        case 0x33a0ccu: goto label_33a0cc;
        case 0x33a0d0u: goto label_33a0d0;
        case 0x33a0d4u: goto label_33a0d4;
        case 0x33a0d8u: goto label_33a0d8;
        case 0x33a0dcu: goto label_33a0dc;
        case 0x33a0e0u: goto label_33a0e0;
        case 0x33a0e4u: goto label_33a0e4;
        case 0x33a0e8u: goto label_33a0e8;
        case 0x33a0ecu: goto label_33a0ec;
        case 0x33a0f0u: goto label_33a0f0;
        case 0x33a0f4u: goto label_33a0f4;
        case 0x33a0f8u: goto label_33a0f8;
        case 0x33a0fcu: goto label_33a0fc;
        case 0x33a100u: goto label_33a100;
        case 0x33a104u: goto label_33a104;
        case 0x33a108u: goto label_33a108;
        case 0x33a10cu: goto label_33a10c;
        case 0x33a110u: goto label_33a110;
        case 0x33a114u: goto label_33a114;
        case 0x33a118u: goto label_33a118;
        case 0x33a11cu: goto label_33a11c;
        case 0x33a120u: goto label_33a120;
        case 0x33a124u: goto label_33a124;
        case 0x33a128u: goto label_33a128;
        case 0x33a12cu: goto label_33a12c;
        case 0x33a130u: goto label_33a130;
        case 0x33a134u: goto label_33a134;
        case 0x33a138u: goto label_33a138;
        case 0x33a13cu: goto label_33a13c;
        case 0x33a140u: goto label_33a140;
        case 0x33a144u: goto label_33a144;
        case 0x33a148u: goto label_33a148;
        case 0x33a14cu: goto label_33a14c;
        case 0x33a150u: goto label_33a150;
        case 0x33a154u: goto label_33a154;
        case 0x33a158u: goto label_33a158;
        case 0x33a15cu: goto label_33a15c;
        case 0x33a160u: goto label_33a160;
        case 0x33a164u: goto label_33a164;
        case 0x33a168u: goto label_33a168;
        case 0x33a16cu: goto label_33a16c;
        case 0x33a170u: goto label_33a170;
        case 0x33a174u: goto label_33a174;
        case 0x33a178u: goto label_33a178;
        case 0x33a17cu: goto label_33a17c;
        case 0x33a180u: goto label_33a180;
        case 0x33a184u: goto label_33a184;
        case 0x33a188u: goto label_33a188;
        case 0x33a18cu: goto label_33a18c;
        case 0x33a190u: goto label_33a190;
        case 0x33a194u: goto label_33a194;
        case 0x33a198u: goto label_33a198;
        case 0x33a19cu: goto label_33a19c;
        case 0x33a1a0u: goto label_33a1a0;
        case 0x33a1a4u: goto label_33a1a4;
        case 0x33a1a8u: goto label_33a1a8;
        case 0x33a1acu: goto label_33a1ac;
        case 0x33a1b0u: goto label_33a1b0;
        case 0x33a1b4u: goto label_33a1b4;
        case 0x33a1b8u: goto label_33a1b8;
        case 0x33a1bcu: goto label_33a1bc;
        case 0x33a1c0u: goto label_33a1c0;
        case 0x33a1c4u: goto label_33a1c4;
        case 0x33a1c8u: goto label_33a1c8;
        case 0x33a1ccu: goto label_33a1cc;
        case 0x33a1d0u: goto label_33a1d0;
        case 0x33a1d4u: goto label_33a1d4;
        case 0x33a1d8u: goto label_33a1d8;
        case 0x33a1dcu: goto label_33a1dc;
        case 0x33a1e0u: goto label_33a1e0;
        case 0x33a1e4u: goto label_33a1e4;
        case 0x33a1e8u: goto label_33a1e8;
        case 0x33a1ecu: goto label_33a1ec;
        case 0x33a1f0u: goto label_33a1f0;
        case 0x33a1f4u: goto label_33a1f4;
        case 0x33a1f8u: goto label_33a1f8;
        case 0x33a1fcu: goto label_33a1fc;
        case 0x33a200u: goto label_33a200;
        case 0x33a204u: goto label_33a204;
        case 0x33a208u: goto label_33a208;
        case 0x33a20cu: goto label_33a20c;
        case 0x33a210u: goto label_33a210;
        case 0x33a214u: goto label_33a214;
        case 0x33a218u: goto label_33a218;
        case 0x33a21cu: goto label_33a21c;
        case 0x33a220u: goto label_33a220;
        case 0x33a224u: goto label_33a224;
        case 0x33a228u: goto label_33a228;
        case 0x33a22cu: goto label_33a22c;
        case 0x33a230u: goto label_33a230;
        case 0x33a234u: goto label_33a234;
        case 0x33a238u: goto label_33a238;
        case 0x33a23cu: goto label_33a23c;
        case 0x33a240u: goto label_33a240;
        case 0x33a244u: goto label_33a244;
        case 0x33a248u: goto label_33a248;
        case 0x33a24cu: goto label_33a24c;
        case 0x33a250u: goto label_33a250;
        case 0x33a254u: goto label_33a254;
        case 0x33a258u: goto label_33a258;
        case 0x33a25cu: goto label_33a25c;
        case 0x33a260u: goto label_33a260;
        case 0x33a264u: goto label_33a264;
        case 0x33a268u: goto label_33a268;
        case 0x33a26cu: goto label_33a26c;
        case 0x33a270u: goto label_33a270;
        case 0x33a274u: goto label_33a274;
        case 0x33a278u: goto label_33a278;
        case 0x33a27cu: goto label_33a27c;
        case 0x33a280u: goto label_33a280;
        case 0x33a284u: goto label_33a284;
        case 0x33a288u: goto label_33a288;
        case 0x33a28cu: goto label_33a28c;
        case 0x33a290u: goto label_33a290;
        case 0x33a294u: goto label_33a294;
        case 0x33a298u: goto label_33a298;
        case 0x33a29cu: goto label_33a29c;
        case 0x33a2a0u: goto label_33a2a0;
        case 0x33a2a4u: goto label_33a2a4;
        case 0x33a2a8u: goto label_33a2a8;
        case 0x33a2acu: goto label_33a2ac;
        case 0x33a2b0u: goto label_33a2b0;
        case 0x33a2b4u: goto label_33a2b4;
        case 0x33a2b8u: goto label_33a2b8;
        case 0x33a2bcu: goto label_33a2bc;
        case 0x33a2c0u: goto label_33a2c0;
        case 0x33a2c4u: goto label_33a2c4;
        case 0x33a2c8u: goto label_33a2c8;
        case 0x33a2ccu: goto label_33a2cc;
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a2d4u: goto label_33a2d4;
        case 0x33a2d8u: goto label_33a2d8;
        case 0x33a2dcu: goto label_33a2dc;
        case 0x33a2e0u: goto label_33a2e0;
        case 0x33a2e4u: goto label_33a2e4;
        case 0x33a2e8u: goto label_33a2e8;
        case 0x33a2ecu: goto label_33a2ec;
        case 0x33a2f0u: goto label_33a2f0;
        case 0x33a2f4u: goto label_33a2f4;
        case 0x33a2f8u: goto label_33a2f8;
        case 0x33a2fcu: goto label_33a2fc;
        case 0x33a300u: goto label_33a300;
        case 0x33a304u: goto label_33a304;
        case 0x33a308u: goto label_33a308;
        case 0x33a30cu: goto label_33a30c;
        case 0x33a310u: goto label_33a310;
        case 0x33a314u: goto label_33a314;
        case 0x33a318u: goto label_33a318;
        case 0x33a31cu: goto label_33a31c;
        case 0x33a320u: goto label_33a320;
        case 0x33a324u: goto label_33a324;
        case 0x33a328u: goto label_33a328;
        case 0x33a32cu: goto label_33a32c;
        case 0x33a330u: goto label_33a330;
        case 0x33a334u: goto label_33a334;
        case 0x33a338u: goto label_33a338;
        case 0x33a33cu: goto label_33a33c;
        case 0x33a340u: goto label_33a340;
        case 0x33a344u: goto label_33a344;
        case 0x33a348u: goto label_33a348;
        case 0x33a34cu: goto label_33a34c;
        case 0x33a350u: goto label_33a350;
        case 0x33a354u: goto label_33a354;
        case 0x33a358u: goto label_33a358;
        case 0x33a35cu: goto label_33a35c;
        case 0x33a360u: goto label_33a360;
        case 0x33a364u: goto label_33a364;
        case 0x33a368u: goto label_33a368;
        case 0x33a36cu: goto label_33a36c;
        case 0x33a370u: goto label_33a370;
        case 0x33a374u: goto label_33a374;
        case 0x33a378u: goto label_33a378;
        case 0x33a37cu: goto label_33a37c;
        case 0x33a380u: goto label_33a380;
        case 0x33a384u: goto label_33a384;
        case 0x33a388u: goto label_33a388;
        case 0x33a38cu: goto label_33a38c;
        case 0x33a390u: goto label_33a390;
        case 0x33a394u: goto label_33a394;
        case 0x33a398u: goto label_33a398;
        case 0x33a39cu: goto label_33a39c;
        case 0x33a3a0u: goto label_33a3a0;
        case 0x33a3a4u: goto label_33a3a4;
        case 0x33a3a8u: goto label_33a3a8;
        case 0x33a3acu: goto label_33a3ac;
        case 0x33a3b0u: goto label_33a3b0;
        case 0x33a3b4u: goto label_33a3b4;
        case 0x33a3b8u: goto label_33a3b8;
        case 0x33a3bcu: goto label_33a3bc;
        case 0x33a3c0u: goto label_33a3c0;
        case 0x33a3c4u: goto label_33a3c4;
        case 0x33a3c8u: goto label_33a3c8;
        case 0x33a3ccu: goto label_33a3cc;
        case 0x33a3d0u: goto label_33a3d0;
        case 0x33a3d4u: goto label_33a3d4;
        case 0x33a3d8u: goto label_33a3d8;
        case 0x33a3dcu: goto label_33a3dc;
        case 0x33a3e0u: goto label_33a3e0;
        case 0x33a3e4u: goto label_33a3e4;
        case 0x33a3e8u: goto label_33a3e8;
        case 0x33a3ecu: goto label_33a3ec;
        case 0x33a3f0u: goto label_33a3f0;
        case 0x33a3f4u: goto label_33a3f4;
        case 0x33a3f8u: goto label_33a3f8;
        case 0x33a3fcu: goto label_33a3fc;
        case 0x33a400u: goto label_33a400;
        case 0x33a404u: goto label_33a404;
        case 0x33a408u: goto label_33a408;
        case 0x33a40cu: goto label_33a40c;
        case 0x33a410u: goto label_33a410;
        case 0x33a414u: goto label_33a414;
        case 0x33a418u: goto label_33a418;
        case 0x33a41cu: goto label_33a41c;
        case 0x33a420u: goto label_33a420;
        case 0x33a424u: goto label_33a424;
        case 0x33a428u: goto label_33a428;
        case 0x33a42cu: goto label_33a42c;
        case 0x33a430u: goto label_33a430;
        case 0x33a434u: goto label_33a434;
        case 0x33a438u: goto label_33a438;
        case 0x33a43cu: goto label_33a43c;
        case 0x33a440u: goto label_33a440;
        case 0x33a444u: goto label_33a444;
        case 0x33a448u: goto label_33a448;
        case 0x33a44cu: goto label_33a44c;
        case 0x33a450u: goto label_33a450;
        case 0x33a454u: goto label_33a454;
        case 0x33a458u: goto label_33a458;
        case 0x33a45cu: goto label_33a45c;
        case 0x33a460u: goto label_33a460;
        case 0x33a464u: goto label_33a464;
        case 0x33a468u: goto label_33a468;
        case 0x33a46cu: goto label_33a46c;
        case 0x33a470u: goto label_33a470;
        case 0x33a474u: goto label_33a474;
        case 0x33a478u: goto label_33a478;
        case 0x33a47cu: goto label_33a47c;
        default: break;
    }

    ctx->pc = 0x339c20u;

label_339c20:
    // 0x339c20: 0x8ca2007c  lw          $v0, 0x7C($a1)
    ctx->pc = 0x339c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
label_339c24:
    // 0x339c24: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x339c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_339c28:
    // 0x339c28: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_339c2c:
    // 0x339c2c: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x339c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_339c30:
    // 0x339c30: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x339c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_339c34:
    // 0x339c34: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x339c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_339c38:
    // 0x339c38: 0xc4a00078  lwc1        $f0, 0x78($a1)
    ctx->pc = 0x339c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339c3c:
    // 0x339c3c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x339c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_339c40:
    // 0x339c40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_339c44:
    // 0x339c44: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x339c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_339c48:
    // 0x339c48: 0x3200008  jr          $t9
label_339c4c:
    if (ctx->pc == 0x339C4Cu) {
        ctx->pc = 0x339C50u;
        goto label_339c50;
    }
    ctx->pc = 0x339C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339C50u;
label_339c50:
    // 0x339c50: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x339c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339c54:
    // 0x339c54: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x339c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_339c58:
    // 0x339c58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x339c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_339c5c:
    // 0x339c5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339c60:
    // 0x339c60: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x339c60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_339c64:
    // 0x339c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x339c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_339c68:
    // 0x339c68: 0x0  nop
    ctx->pc = 0x339c68u;
    // NOP
label_339c6c:
    // 0x339c6c: 0x0  nop
    ctx->pc = 0x339c6cu;
    // NOP
label_339c70:
    // 0x339c70: 0x3e00008  jr          $ra
label_339c74:
    if (ctx->pc == 0x339C74u) {
        ctx->pc = 0x339C74u;
            // 0x339c74: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x339C78u;
        goto label_339c78;
    }
    ctx->pc = 0x339C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339C70u;
            // 0x339c74: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339C78u;
label_339c78:
    // 0x339c78: 0x0  nop
    ctx->pc = 0x339c78u;
    // NOP
label_339c7c:
    // 0x339c7c: 0x0  nop
    ctx->pc = 0x339c7cu;
    // NOP
label_339c80:
    // 0x339c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339c84:
    // 0x339c84: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339c88:
    // 0x339c88: 0xc46007b8  lwc1        $f0, 0x7B8($v1)
    ctx->pc = 0x339c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339c8c:
    // 0x339c8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339c90:
    // 0x339c90: 0xc46207bc  lwc1        $f2, 0x7BC($v1)
    ctx->pc = 0x339c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339c94:
    // 0x339c94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x339c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_339c98:
    // 0x339c98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339c9c:
    // 0x339c9c: 0xc46107c0  lwc1        $f1, 0x7C0($v1)
    ctx->pc = 0x339c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339ca0:
    // 0x339ca0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x339ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_339ca4:
    // 0x339ca4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339ca8:
    // 0x339ca8: 0xc46007c4  lwc1        $f0, 0x7C4($v1)
    ctx->pc = 0x339ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339cac:
    // 0x339cac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x339cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_339cb0:
    // 0x339cb0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x339cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_339cb4:
    // 0x339cb4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x339cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_339cb8:
    // 0x339cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x339cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339cbc:
    // 0x339cbc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x339cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_339cc0:
    // 0x339cc0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x339cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_339cc4:
    // 0x339cc4: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x339cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_339cc8:
    // 0x339cc8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x339cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_339ccc:
    // 0x339ccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x339cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339cd0:
    // 0x339cd0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x339cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_339cd4:
    // 0x339cd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339cd8:
    // 0x339cd8: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x339cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
label_339cdc:
    // 0x339cdc: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x339cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_339ce0:
    // 0x339ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339ce4:
    // 0x339ce4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_339ce8:
    // 0x339ce8: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x339ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_339cec:
    // 0x339cec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_339cf0:
    if (ctx->pc == 0x339CF0u) {
        ctx->pc = 0x339CF4u;
        goto label_339cf4;
    }
    ctx->pc = 0x339CECu;
    {
        const bool branch_taken_0x339cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cec) {
            ctx->pc = 0x339D04u;
            goto label_339d04;
        }
    }
    ctx->pc = 0x339CF4u;
label_339cf4:
    // 0x339cf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339cf8:
    // 0x339cf8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x339cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_339cfc:
    // 0x339cfc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x339cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_339d00:
    // 0x339d00: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x339d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_339d04:
    // 0x339d04: 0x3e00008  jr          $ra
label_339d08:
    if (ctx->pc == 0x339D08u) {
        ctx->pc = 0x339D08u;
            // 0x339d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339D0Cu;
        goto label_339d0c;
    }
    ctx->pc = 0x339D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339D04u;
            // 0x339d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339D0Cu;
label_339d0c:
    // 0x339d0c: 0x0  nop
    ctx->pc = 0x339d0cu;
    // NOP
label_339d10:
    // 0x339d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339d14:
    // 0x339d14: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x339d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339d18:
    // 0x339d18: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x339d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_339d1c:
    // 0x339d1c: 0x24634df1  addiu       $v1, $v1, 0x4DF1
    ctx->pc = 0x339d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19953));
label_339d20:
    // 0x339d20: 0x8ce50050  lw          $a1, 0x50($a3)
    ctx->pc = 0x339d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_339d24:
    // 0x339d24: 0x8ce600c8  lw          $a2, 0xC8($a3)
    ctx->pc = 0x339d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
label_339d28:
    // 0x339d28: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x339d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_339d2c:
    // 0x339d2c: 0x8cc60e00  lw          $a2, 0xE00($a2)
    ctx->pc = 0x339d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3584)));
label_339d30:
    // 0x339d30: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x339d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_339d34:
    // 0x339d34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x339d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_339d38:
    // 0x339d38: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x339d38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_339d3c:
    // 0x339d3c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x339d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_339d40:
    // 0x339d40: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_339d44:
    if (ctx->pc == 0x339D44u) {
        ctx->pc = 0x339D48u;
        goto label_339d48;
    }
    ctx->pc = 0x339D40u;
    {
        const bool branch_taken_0x339d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339d40) {
            ctx->pc = 0x339DE8u;
            goto label_339de8;
        }
    }
    ctx->pc = 0x339D48u;
label_339d48:
    // 0x339d48: 0x90e30019  lbu         $v1, 0x19($a3)
    ctx->pc = 0x339d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 25)));
label_339d4c:
    // 0x339d4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_339d50:
    if (ctx->pc == 0x339D50u) {
        ctx->pc = 0x339D54u;
        goto label_339d54;
    }
    ctx->pc = 0x339D4Cu;
    {
        const bool branch_taken_0x339d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d4c) {
            ctx->pc = 0x339D5Cu;
            goto label_339d5c;
        }
    }
    ctx->pc = 0x339D54u;
label_339d54:
    // 0x339d54: 0x10000025  b           . + 4 + (0x25 << 2)
label_339d58:
    if (ctx->pc == 0x339D58u) {
        ctx->pc = 0x339D58u;
            // 0x339d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339D5Cu;
        goto label_339d5c;
    }
    ctx->pc = 0x339D54u;
    {
        const bool branch_taken_0x339d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339D54u;
            // 0x339d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d54) {
            ctx->pc = 0x339DECu;
            goto label_339dec;
        }
    }
    ctx->pc = 0x339D5Cu;
label_339d5c:
    // 0x339d5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x339d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_339d60:
    // 0x339d60: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x339d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_339d64:
    // 0x339d64: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x339d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339d68:
    // 0x339d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x339d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_339d6c:
    // 0x339d6c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x339d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339d70:
    // 0x339d70: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x339d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_339d74:
    // 0x339d74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x339d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_339d78:
    // 0x339d78: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_339d7c:
    if (ctx->pc == 0x339D7Cu) {
        ctx->pc = 0x339D7Cu;
            // 0x339d7c: 0xe4810078  swc1        $f1, 0x78($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->pc = 0x339D80u;
        goto label_339d80;
    }
    ctx->pc = 0x339D78u;
    {
        const bool branch_taken_0x339d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339D78u;
            // 0x339d7c: 0xe4810078  swc1        $f1, 0x78($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d78) {
            ctx->pc = 0x339DE8u;
            goto label_339de8;
        }
    }
    ctx->pc = 0x339D80u;
label_339d80:
    // 0x339d80: 0x8c890074  lw          $t1, 0x74($a0)
    ctx->pc = 0x339d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_339d84:
    // 0x339d84: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_339d88:
    // 0x339d88: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_339d8c:
    // 0x339d8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339d90:
    // 0x339d90: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x339d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_339d94:
    // 0x339d94: 0x3c0841a0  lui         $t0, 0x41A0
    ctx->pc = 0x339d94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16800 << 16));
label_339d98:
    // 0x339d98: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x339d98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_339d9c:
    // 0x339d9c: 0xac890074  sw          $t1, 0x74($a0)
    ctx->pc = 0x339d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 9));
label_339da0:
    // 0x339da0: 0xc4e007b8  lwc1        $f0, 0x7B8($a3)
    ctx->pc = 0x339da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339da4:
    // 0x339da4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_339da8:
    // 0x339da8: 0xc4a107c0  lwc1        $f1, 0x7C0($a1)
    ctx->pc = 0x339da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339dac:
    // 0x339dac: 0xc4c207bc  lwc1        $f2, 0x7BC($a2)
    ctx->pc = 0x339dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339db0:
    // 0x339db0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x339db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_339db4:
    // 0x339db4: 0x13d3821  addu        $a3, $t1, $sp
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
label_339db8:
    // 0x339db8: 0xc46007c4  lwc1        $f0, 0x7C4($v1)
    ctx->pc = 0x339db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339dbc:
    // 0x339dbc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x339dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_339dc0:
    // 0x339dc0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x339dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_339dc4:
    // 0x339dc4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x339dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_339dc8:
    // 0x339dc8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x339dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_339dcc:
    // 0x339dcc: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x339dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_339dd0:
    // 0x339dd0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x339dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_339dd4:
    // 0x339dd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x339dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339dd8:
    // 0x339dd8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x339dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_339ddc:
    // 0x339ddc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339de0:
    // 0x339de0: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x339de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
label_339de4:
    // 0x339de4: 0xac880078  sw          $t0, 0x78($a0)
    ctx->pc = 0x339de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 8));
label_339de8:
    // 0x339de8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_339dec:
    // 0x339dec: 0x3e00008  jr          $ra
label_339df0:
    if (ctx->pc == 0x339DF0u) {
        ctx->pc = 0x339DF4u;
        goto label_339df4;
    }
    ctx->pc = 0x339DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339DF4u;
label_339df4:
    // 0x339df4: 0x0  nop
    ctx->pc = 0x339df4u;
    // NOP
label_339df8:
    // 0x339df8: 0x0  nop
    ctx->pc = 0x339df8u;
    // NOP
label_339dfc:
    // 0x339dfc: 0x0  nop
    ctx->pc = 0x339dfcu;
    // NOP
label_339e00:
    // 0x339e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339e04:
    // 0x339e04: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x339e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339e08:
    // 0x339e08: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_339e0c:
    // 0x339e0c: 0x24634df1  addiu       $v1, $v1, 0x4DF1
    ctx->pc = 0x339e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19953));
label_339e10:
    // 0x339e10: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x339e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_339e14:
    // 0x339e14: 0x8ce500c8  lw          $a1, 0xC8($a3)
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
label_339e18:
    // 0x339e18: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_339e1c:
    // 0x339e1c: 0x8ca50e00  lw          $a1, 0xE00($a1)
    ctx->pc = 0x339e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3584)));
label_339e20:
    // 0x339e20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_339e24:
    // 0x339e24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_339e28:
    // 0x339e28: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x339e28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_339e2c:
    // 0x339e2c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x339e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_339e30:
    // 0x339e30: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_339e34:
    if (ctx->pc == 0x339E34u) {
        ctx->pc = 0x339E34u;
            // 0x339e34: 0x24e60018  addiu       $a2, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->pc = 0x339E38u;
        goto label_339e38;
    }
    ctx->pc = 0x339E30u;
    {
        const bool branch_taken_0x339e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339E30u;
            // 0x339e34: 0x24e60018  addiu       $a2, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e30) {
            ctx->pc = 0x339EDCu;
            goto label_339edc;
        }
    }
    ctx->pc = 0x339E38u;
label_339e38:
    // 0x339e38: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x339e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_339e3c:
    // 0x339e3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_339e40:
    if (ctx->pc == 0x339E40u) {
        ctx->pc = 0x339E44u;
        goto label_339e44;
    }
    ctx->pc = 0x339E3Cu;
    {
        const bool branch_taken_0x339e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e3c) {
            ctx->pc = 0x339E4Cu;
            goto label_339e4c;
        }
    }
    ctx->pc = 0x339E44u;
label_339e44:
    // 0x339e44: 0x10000026  b           . + 4 + (0x26 << 2)
label_339e48:
    if (ctx->pc == 0x339E48u) {
        ctx->pc = 0x339E48u;
            // 0x339e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339E4Cu;
        goto label_339e4c;
    }
    ctx->pc = 0x339E44u;
    {
        const bool branch_taken_0x339e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339E44u;
            // 0x339e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e44) {
            ctx->pc = 0x339EE0u;
            goto label_339ee0;
        }
    }
    ctx->pc = 0x339E4Cu;
label_339e4c:
    // 0x339e4c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x339e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_339e50:
    // 0x339e50: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x339e50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_339e54:
    // 0x339e54: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x339e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_339e58:
    // 0x339e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x339e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_339e5c:
    // 0x339e5c: 0xc5210078  lwc1        $f1, 0x78($t1)
    ctx->pc = 0x339e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339e60:
    // 0x339e60: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x339e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339e64:
    // 0x339e64: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x339e64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_339e68:
    // 0x339e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x339e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_339e6c:
    // 0x339e6c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_339e70:
    if (ctx->pc == 0x339E70u) {
        ctx->pc = 0x339E70u;
            // 0x339e70: 0xe5210078  swc1        $f1, 0x78($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 120), bits); }
        ctx->pc = 0x339E74u;
        goto label_339e74;
    }
    ctx->pc = 0x339E6Cu;
    {
        const bool branch_taken_0x339e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339E6Cu;
            // 0x339e70: 0xe5210078  swc1        $f1, 0x78($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e6c) {
            ctx->pc = 0x339EDCu;
            goto label_339edc;
        }
    }
    ctx->pc = 0x339E74u;
label_339e74:
    // 0x339e74: 0x8d280074  lw          $t0, 0x74($t1)
    ctx->pc = 0x339e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
label_339e78:
    // 0x339e78: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x339e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_339e7c:
    // 0x339e7c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x339e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_339e80:
    // 0x339e80: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x339e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_339e84:
    // 0x339e84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x339e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_339e88:
    // 0x339e88: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x339e88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
label_339e8c:
    // 0x339e8c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x339e8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_339e90:
    // 0x339e90: 0xad280074  sw          $t0, 0x74($t1)
    ctx->pc = 0x339e90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 8));
label_339e94:
    // 0x339e94: 0xc4c007b8  lwc1        $f0, 0x7B8($a2)
    ctx->pc = 0x339e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339e98:
    // 0x339e98: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x339e98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_339e9c:
    // 0x339e9c: 0xc48107c0  lwc1        $f1, 0x7C0($a0)
    ctx->pc = 0x339e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339ea0:
    // 0x339ea0: 0xc4a207bc  lwc1        $f2, 0x7BC($a1)
    ctx->pc = 0x339ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339ea4:
    // 0x339ea4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x339ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_339ea8:
    // 0x339ea8: 0x11d3021  addu        $a2, $t0, $sp
    ctx->pc = 0x339ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
label_339eac:
    // 0x339eac: 0xc46007c4  lwc1        $f0, 0x7C4($v1)
    ctx->pc = 0x339eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339eb0:
    // 0x339eb0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x339eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_339eb4:
    // 0x339eb4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x339eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_339eb8:
    // 0x339eb8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x339eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_339ebc:
    // 0x339ebc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x339ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_339ec0:
    // 0x339ec0: 0xad23007c  sw          $v1, 0x7C($t1)
    ctx->pc = 0x339ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 3));
label_339ec4:
    // 0x339ec4: 0x8d230074  lw          $v1, 0x74($t1)
    ctx->pc = 0x339ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
label_339ec8:
    // 0x339ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x339ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339ecc:
    // 0x339ecc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x339eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_339ed0:
    // 0x339ed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339ed4:
    // 0x339ed4: 0xad230070  sw          $v1, 0x70($t1)
    ctx->pc = 0x339ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 3));
label_339ed8:
    // 0x339ed8: 0xad270078  sw          $a3, 0x78($t1)
    ctx->pc = 0x339ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 7));
label_339edc:
    // 0x339edc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_339ee0:
    // 0x339ee0: 0x3e00008  jr          $ra
label_339ee4:
    if (ctx->pc == 0x339EE4u) {
        ctx->pc = 0x339EE8u;
        goto label_339ee8;
    }
    ctx->pc = 0x339EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339EE8u;
label_339ee8:
    // 0x339ee8: 0x0  nop
    ctx->pc = 0x339ee8u;
    // NOP
label_339eec:
    // 0x339eec: 0x0  nop
    ctx->pc = 0x339eecu;
    // NOP
label_339ef0:
    // 0x339ef0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339ef4:
    // 0x339ef4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x339ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_339ef8:
    // 0x339ef8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x339ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_339efc:
    // 0x339efc: 0x90420019  lbu         $v0, 0x19($v0)
    ctx->pc = 0x339efcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_339f00:
    // 0x339f00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_339f04:
    if (ctx->pc == 0x339F04u) {
        ctx->pc = 0x339F08u;
        goto label_339f08;
    }
    ctx->pc = 0x339F00u;
    {
        const bool branch_taken_0x339f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339f00) {
            ctx->pc = 0x339F20u;
            goto label_339f20;
        }
    }
    ctx->pc = 0x339F08u;
label_339f08:
    // 0x339f08: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x339f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_339f0c:
    // 0x339f0c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x339f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_339f10:
    // 0x339f10: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x339f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
label_339f14:
    // 0x339f14: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x339f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_339f18:
    // 0x339f18: 0xaca20078  sw          $v0, 0x78($a1)
    ctx->pc = 0x339f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 2));
label_339f1c:
    // 0x339f1c: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x339f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
label_339f20:
    // 0x339f20: 0x80c2774  j           func_309DD0
label_339f24:
    if (ctx->pc == 0x339F24u) {
        ctx->pc = 0x339F28u;
        goto label_339f28;
    }
    ctx->pc = 0x339F20u;
    ctx->pc = 0x309DD0u;
    {
        auto targetFn = runtime->lookupFunction(0x309DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x339F28u;
label_339f28:
    // 0x339f28: 0x0  nop
    ctx->pc = 0x339f28u;
    // NOP
label_339f2c:
    // 0x339f2c: 0x0  nop
    ctx->pc = 0x339f2cu;
    // NOP
label_339f30:
    // 0x339f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339f34:
    // 0x339f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339f38:
    // 0x339f38: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x339f38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_339f3c:
    // 0x339f3c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x339f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_339f40:
    // 0x339f40: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_339f44:
    if (ctx->pc == 0x339F44u) {
        ctx->pc = 0x339F44u;
            // 0x339f44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x339F48u;
        goto label_339f48;
    }
    ctx->pc = 0x339F40u;
    {
        const bool branch_taken_0x339f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339f40) {
            ctx->pc = 0x339F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339F40u;
            // 0x339f44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339F64u;
            goto label_339f64;
        }
    }
    ctx->pc = 0x339F48u;
label_339f48:
    // 0x339f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x339f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_339f4c:
    // 0x339f4c: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x339f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_339f50:
    // 0x339f50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x339f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_339f54:
    // 0x339f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x339f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339f58:
    // 0x339f58: 0xc04a576  jal         func_1295D8
label_339f5c:
    if (ctx->pc == 0x339F5Cu) {
        ctx->pc = 0x339F5Cu;
            // 0x339f5c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x339F60u;
        goto label_339f60;
    }
    ctx->pc = 0x339F58u;
    SET_GPR_U32(ctx, 31, 0x339F60u);
    ctx->pc = 0x339F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339F58u;
            // 0x339f5c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F60u; }
        if (ctx->pc != 0x339F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F60u; }
        if (ctx->pc != 0x339F60u) { return; }
    }
    ctx->pc = 0x339F60u;
label_339f60:
    // 0x339f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339f64:
    // 0x339f64: 0x3e00008  jr          $ra
label_339f68:
    if (ctx->pc == 0x339F68u) {
        ctx->pc = 0x339F68u;
            // 0x339f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339F6Cu;
        goto label_339f6c;
    }
    ctx->pc = 0x339F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339F64u;
            // 0x339f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339F6Cu;
label_339f6c:
    // 0x339f6c: 0x0  nop
    ctx->pc = 0x339f6cu;
    // NOP
label_339f70:
    // 0x339f70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x339f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_339f74:
    // 0x339f74: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x339f74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
label_339f78:
    // 0x339f78: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339f7c:
    // 0x339f7c: 0x904600d8  lbu         $a2, 0xD8($v0)
    ctx->pc = 0x339f7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 216)));
label_339f80:
    // 0x339f80: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x339f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_339f84:
    // 0x339f84: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x339f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_339f88:
    // 0x339f88: 0x90820070  lbu         $v0, 0x70($a0)
    ctx->pc = 0x339f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_339f8c:
    // 0x339f8c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x339f8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_339f90:
    // 0x339f90: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x339f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_339f94:
    // 0x339f94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x339f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_339f98:
    // 0x339f98: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_339f9c:
    if (ctx->pc == 0x339F9Cu) {
        ctx->pc = 0x339F9Cu;
            // 0x339f9c: 0xa0820070  sb          $v0, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x339FA0u;
        goto label_339fa0;
    }
    ctx->pc = 0x339F98u;
    {
        const bool branch_taken_0x339f98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x339F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339F98u;
            // 0x339f9c: 0xa0820070  sb          $v0, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f98) {
            ctx->pc = 0x339F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339f84;
        }
    }
    ctx->pc = 0x339FA0u;
label_339fa0:
    // 0x339fa0: 0x80c2b78  j           func_30ADE0
label_339fa4:
    if (ctx->pc == 0x339FA4u) {
        ctx->pc = 0x339FA8u;
        goto label_339fa8;
    }
    ctx->pc = 0x339FA0u;
    ctx->pc = 0x30ADE0u;
    {
        auto targetFn = runtime->lookupFunction(0x30ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x339FA8u;
label_339fa8:
    // 0x339fa8: 0x0  nop
    ctx->pc = 0x339fa8u;
    // NOP
label_339fac:
    // 0x339fac: 0x0  nop
    ctx->pc = 0x339facu;
    // NOP
label_339fb0:
    // 0x339fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339fb4:
    // 0x339fb4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x339fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339fb8:
    // 0x339fb8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x339fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_339fbc:
    // 0x339fbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x339fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339fc0:
    // 0x339fc0: 0x24634df0  addiu       $v1, $v1, 0x4DF0
    ctx->pc = 0x339fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19952));
label_339fc4:
    // 0x339fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x339fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339fc8:
    // 0x339fc8: 0x8d040050  lw          $a0, 0x50($t0)
    ctx->pc = 0x339fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
label_339fcc:
    // 0x339fcc: 0x25050018  addiu       $a1, $t0, 0x18
    ctx->pc = 0x339fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_339fd0:
    // 0x339fd0: 0x8d0600c8  lw          $a2, 0xC8($t0)
    ctx->pc = 0x339fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 200)));
label_339fd4:
    // 0x339fd4: 0x910700d8  lbu         $a3, 0xD8($t0)
    ctx->pc = 0x339fd4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 216)));
label_339fd8:
    // 0x339fd8: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x339fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_339fdc:
    // 0x339fdc: 0x8cc60e00  lw          $a2, 0xE00($a2)
    ctx->pc = 0x339fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3584)));
label_339fe0:
    // 0x339fe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x339fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_339fe4:
    // 0x339fe4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x339fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_339fe8:
    // 0x339fe8: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x339fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_339fec:
    // 0x339fec: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x339fecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_339ff0:
    // 0x339ff0: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x339ff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_339ff4:
    // 0x339ff4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_339ff8:
    if (ctx->pc == 0x339FF8u) {
        ctx->pc = 0x339FF8u;
            // 0x339ff8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x339FFCu;
        goto label_339ffc;
    }
    ctx->pc = 0x339FF4u;
    {
        const bool branch_taken_0x339ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339ff4) {
            ctx->pc = 0x339FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339FF4u;
            // 0x339ff8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A018u;
            goto label_33a018;
        }
    }
    ctx->pc = 0x339FFCu;
label_339ffc:
    // 0x339ffc: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x339ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_33a000:
    // 0x33a000: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33a000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_33a004:
    // 0x33a004: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_33a008:
    if (ctx->pc == 0x33A008u) {
        ctx->pc = 0x33A00Cu;
        goto label_33a00c;
    }
    ctx->pc = 0x33A004u;
    {
        const bool branch_taken_0x33a004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a004) {
            ctx->pc = 0x33A014u;
            goto label_33a014;
        }
    }
    ctx->pc = 0x33A00Cu;
label_33a00c:
    // 0x33a00c: 0x10000006  b           . + 4 + (0x6 << 2)
label_33a010:
    if (ctx->pc == 0x33A010u) {
        ctx->pc = 0x33A010u;
            // 0x33a010: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A014u;
        goto label_33a014;
    }
    ctx->pc = 0x33A00Cu;
    {
        const bool branch_taken_0x33a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A00Cu;
            // 0x33a010: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a00c) {
            ctx->pc = 0x33A028u;
            goto label_33a028;
        }
    }
    ctx->pc = 0x33A014u;
label_33a014:
    // 0x33a014: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_33a018:
    // 0x33a018: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x33a018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_33a01c:
    // 0x33a01c: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_33a020:
    if (ctx->pc == 0x33A020u) {
        ctx->pc = 0x33A020u;
            // 0x33a020: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->pc = 0x33A024u;
        goto label_33a024;
    }
    ctx->pc = 0x33A01Cu;
    {
        const bool branch_taken_0x33a01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a01c) {
            ctx->pc = 0x33A020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A01Cu;
            // 0x33a020: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339fec;
        }
    }
    ctx->pc = 0x33A024u;
label_33a024:
    // 0x33a024: 0x0  nop
    ctx->pc = 0x33a024u;
    // NOP
label_33a028:
    // 0x33a028: 0x11400028  beqz        $t2, . + 4 + (0x28 << 2)
label_33a02c:
    if (ctx->pc == 0x33A02Cu) {
        ctx->pc = 0x33A030u;
        goto label_33a030;
    }
    ctx->pc = 0x33A028u;
    {
        const bool branch_taken_0x33a028 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a028) {
            ctx->pc = 0x33A0CCu;
            goto label_33a0cc;
        }
    }
    ctx->pc = 0x33A030u;
label_33a030:
    // 0x33a030: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x33a030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_33a034:
    // 0x33a034: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x33a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_33a038:
    // 0x33a038: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x33a038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a03c:
    // 0x33a03c: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x33a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
label_33a040:
    // 0x33a040: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x33a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_33a044:
    // 0x33a044: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33a048:
    // 0x33a048: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x33a048u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_33a04c:
    // 0x33a04c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_33a050:
    if (ctx->pc == 0x33A050u) {
        ctx->pc = 0x33A054u;
        goto label_33a054;
    }
    ctx->pc = 0x33A04Cu;
    {
        const bool branch_taken_0x33a04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a04c) {
            ctx->pc = 0x33A0CCu;
            goto label_33a0cc;
        }
    }
    ctx->pc = 0x33A054u;
label_33a054:
    // 0x33a054: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33a054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33a058:
    // 0x33a058: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x33a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33a05c:
    // 0x33a05c: 0xc521005c  lwc1        $f1, 0x5C($t1)
    ctx->pc = 0x33a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33a060:
    // 0x33a060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33a060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33a064:
    // 0x33a064: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x33a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33a068:
    // 0x33a068: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x33a068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_33a06c:
    // 0x33a06c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33a06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33a070:
    // 0x33a070: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_33a074:
    if (ctx->pc == 0x33A074u) {
        ctx->pc = 0x33A074u;
            // 0x33a074: 0xe521005c  swc1        $f1, 0x5C($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 92), bits); }
        ctx->pc = 0x33A078u;
        goto label_33a078;
    }
    ctx->pc = 0x33A070u;
    {
        const bool branch_taken_0x33a070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33A074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A070u;
            // 0x33a074: 0xe521005c  swc1        $f1, 0x5C($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a070) {
            ctx->pc = 0x33A0CCu;
            goto label_33a0cc;
        }
    }
    ctx->pc = 0x33A078u;
label_33a078:
    // 0x33a078: 0x8d280058  lw          $t0, 0x58($t1)
    ctx->pc = 0x33a078u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_33a07c:
    // 0x33a07c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x33a07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33a080:
    // 0x33a080: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x33a080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_33a084:
    // 0x33a084: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x33a084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_33a088:
    // 0x33a088: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33a088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33a08c:
    // 0x33a08c: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x33a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
label_33a090:
    // 0x33a090: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33a094:
    // 0x33a094: 0x107001b  divu        $zero, $t0, $a3
    ctx->pc = 0x33a094u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_33a098:
    // 0x33a098: 0x3810  mfhi        $a3
    ctx->pc = 0x33a098u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_33a09c:
    // 0x33a09c: 0xad270058  sw          $a3, 0x58($t1)
    ctx->pc = 0x33a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 7));
label_33a0a0:
    // 0x33a0a0: 0xc4a207c8  lwc1        $f2, 0x7C8($a1)
    ctx->pc = 0x33a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33a0a4:
    // 0x33a0a4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_33a0a8:
    // 0x33a0a8: 0xc48107cc  lwc1        $f1, 0x7CC($a0)
    ctx->pc = 0x33a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33a0ac:
    // 0x33a0ac: 0xc46007d0  lwc1        $f0, 0x7D0($v1)
    ctx->pc = 0x33a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33a0b0:
    // 0x33a0b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x33a0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33a0b4:
    // 0x33a0b4: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x33a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_33a0b8:
    // 0x33a0b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x33a0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_33a0bc:
    // 0x33a0bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_33a0c0:
    // 0x33a0c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a0c4:
    // 0x33a0c4: 0xad230054  sw          $v1, 0x54($t1)
    ctx->pc = 0x33a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 3));
label_33a0c8:
    // 0x33a0c8: 0xad26005c  sw          $a2, 0x5C($t1)
    ctx->pc = 0x33a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 6));
label_33a0cc:
    // 0x33a0cc: 0x3e00008  jr          $ra
label_33a0d0:
    if (ctx->pc == 0x33A0D0u) {
        ctx->pc = 0x33A0D0u;
            // 0x33a0d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x33A0D4u;
        goto label_33a0d4;
    }
    ctx->pc = 0x33A0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A0CCu;
            // 0x33a0d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A0D4u;
label_33a0d4:
    // 0x33a0d4: 0x0  nop
    ctx->pc = 0x33a0d4u;
    // NOP
label_33a0d8:
    // 0x33a0d8: 0x0  nop
    ctx->pc = 0x33a0d8u;
    // NOP
label_33a0dc:
    // 0x33a0dc: 0x0  nop
    ctx->pc = 0x33a0dcu;
    // NOP
label_33a0e0:
    // 0x33a0e0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x33a0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33a0e4:
    // 0x33a0e4: 0x90c200d8  lbu         $v0, 0xD8($a2)
    ctx->pc = 0x33a0e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 216)));
label_33a0e8:
    // 0x33a0e8: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x33a0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33a0ec:
    // 0x33a0ec: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x33a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_33a0f0:
    // 0x33a0f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_33a0f4:
    // 0x33a0f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33a0f8:
    // 0x33a0f8: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x33a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_33a0fc:
    // 0x33a0fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33a100:
    // 0x33a100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33a104:
    // 0x33a104: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x33a104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_33a108:
    // 0x33a108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_33a10c:
    if (ctx->pc == 0x33A10Cu) {
        ctx->pc = 0x33A110u;
        goto label_33a110;
    }
    ctx->pc = 0x33A108u;
    {
        const bool branch_taken_0x33a108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a108) {
            ctx->pc = 0x33A120u;
            goto label_33a120;
        }
    }
    ctx->pc = 0x33A110u;
label_33a110:
    // 0x33a110: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x33a110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
label_33a114:
    // 0x33a114: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x33a114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_33a118:
    // 0x33a118: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x33a118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
label_33a11c:
    // 0x33a11c: 0x0  nop
    ctx->pc = 0x33a11cu;
    // NOP
label_33a120:
    // 0x33a120: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33a120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33a124:
    // 0x33a124: 0x54e0fff2  bnel        $a3, $zero, . + 4 + (-0xE << 2)
label_33a128:
    if (ctx->pc == 0x33A128u) {
        ctx->pc = 0x33A128u;
            // 0x33a128: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x33A12Cu;
        goto label_33a12c;
    }
    ctx->pc = 0x33A124u;
    {
        const bool branch_taken_0x33a124 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a124) {
            ctx->pc = 0x33A128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A124u;
            // 0x33a128: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a0f0;
        }
    }
    ctx->pc = 0x33A12Cu;
label_33a12c:
    // 0x33a12c: 0x80c2424  j           func_309090
label_33a130:
    if (ctx->pc == 0x33A130u) {
        ctx->pc = 0x33A130u;
            // 0x33a130: 0xac800080  sw          $zero, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x33A134u;
        goto label_33a134;
    }
    ctx->pc = 0x33A12Cu;
    ctx->pc = 0x33A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A12Cu;
            // 0x33a130: 0xac800080  sw          $zero, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309090u;
    {
        auto targetFn = runtime->lookupFunction(0x309090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x33A134u;
label_33a134:
    // 0x33a134: 0x0  nop
    ctx->pc = 0x33a134u;
    // NOP
label_33a138:
    // 0x33a138: 0x0  nop
    ctx->pc = 0x33a138u;
    // NOP
label_33a13c:
    // 0x33a13c: 0x0  nop
    ctx->pc = 0x33a13cu;
    // NOP
label_33a140:
    // 0x33a140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_33a144:
    // 0x33a144: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33a148:
    // 0x33a148: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x33a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_33a14c:
    // 0x33a14c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x33a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_33a150:
    // 0x33a150: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_33a154:
    // 0x33a154: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x33a154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a158:
    // 0x33a158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x33a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_33a15c:
    // 0x33a15c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33a15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a160:
    // 0x33a160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33a164:
    // 0x33a164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_33a168:
    // 0x33a168: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33a16c:
    // 0x33a16c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33a16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33a170:
    // 0x33a170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33a170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a174:
    // 0x33a174: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x33a174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_33a178:
    // 0x33a178: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x33a178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_33a17c:
    // 0x33a17c: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x33a17cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_33a180:
    // 0x33a180: 0xc6ac0020  lwc1        $f12, 0x20($s5)
    ctx->pc = 0x33a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33a184:
    // 0x33a184: 0xc6ad0024  lwc1        $f13, 0x24($s5)
    ctx->pc = 0x33a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_33a188:
    // 0x33a188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33a188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33a18c:
    // 0x33a18c: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x33a18cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_33a190:
    // 0x33a190: 0xc6ae0028  lwc1        $f14, 0x28($s5)
    ctx->pc = 0x33a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_33a194:
    // 0x33a194: 0xc04ce64  jal         func_133990
label_33a198:
    if (ctx->pc == 0x33A198u) {
        ctx->pc = 0x33A198u;
            // 0x33a198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x33A19Cu;
        goto label_33a19c;
    }
    ctx->pc = 0x33A194u;
    SET_GPR_U32(ctx, 31, 0x33A19Cu);
    ctx->pc = 0x33A198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A194u;
            // 0x33a198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A19Cu; }
        if (ctx->pc != 0x33A19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A19Cu; }
        if (ctx->pc != 0x33A19Cu) { return; }
    }
    ctx->pc = 0x33A19Cu;
label_33a19c:
    // 0x33a19c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x33a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_33a1a0:
    // 0x33a1a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x33a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_33a1a4:
    // 0x33a1a4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x33a1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_33a1a8:
    // 0x33a1a8: 0xc6a20030  lwc1        $f2, 0x30($s5)
    ctx->pc = 0x33a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33a1ac:
    // 0x33a1ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33a1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_33a1b0:
    // 0x33a1b0: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x33a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33a1b4:
    // 0x33a1b4: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x33a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33a1b8:
    // 0x33a1b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33a1b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_33a1bc:
    // 0x33a1bc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33a1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_33a1c0:
    // 0x33a1c0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x33a1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_33a1c4:
    // 0x33a1c4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33a1c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_33a1c8:
    // 0x33a1c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33a1c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33a1cc:
    // 0x33a1cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33a1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33a1d0:
    // 0x33a1d0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x33a1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_33a1d4:
    // 0x33a1d4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x33a1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_33a1d8:
    // 0x33a1d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x33a1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_33a1dc:
    // 0x33a1dc: 0xc04ce30  jal         func_1338C0
label_33a1e0:
    if (ctx->pc == 0x33A1E0u) {
        ctx->pc = 0x33A1E0u;
            // 0x33a1e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A1E4u;
        goto label_33a1e4;
    }
    ctx->pc = 0x33A1DCu;
    SET_GPR_U32(ctx, 31, 0x33A1E4u);
    ctx->pc = 0x33A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A1DCu;
            // 0x33a1e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A1E4u; }
        if (ctx->pc != 0x33A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A1E4u; }
        if (ctx->pc != 0x33A1E4u) { return; }
    }
    ctx->pc = 0x33A1E4u;
label_33a1e4:
    // 0x33a1e4: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x33a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33a1e8:
    // 0x33a1e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x33a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_33a1ec:
    // 0x33a1ec: 0xc6ad0040  lwc1        $f13, 0x40($s5)
    ctx->pc = 0x33a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_33a1f0:
    // 0x33a1f0: 0xc6ae0044  lwc1        $f14, 0x44($s5)
    ctx->pc = 0x33a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_33a1f4:
    // 0x33a1f4: 0xc04ce50  jal         func_133940
label_33a1f8:
    if (ctx->pc == 0x33A1F8u) {
        ctx->pc = 0x33A1F8u;
            // 0x33a1f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A1FCu;
        goto label_33a1fc;
    }
    ctx->pc = 0x33A1F4u;
    SET_GPR_U32(ctx, 31, 0x33A1FCu);
    ctx->pc = 0x33A1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A1F4u;
            // 0x33a1f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A1FCu; }
        if (ctx->pc != 0x33A1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A1FCu; }
        if (ctx->pc != 0x33A1FCu) { return; }
    }
    ctx->pc = 0x33A1FCu;
label_33a1fc:
    // 0x33a1fc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x33a1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_33a200:
    // 0x33a200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33a200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_33a204:
    // 0x33a204: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x33a204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_33a208:
    // 0x33a208: 0x320f809  jalr        $t9
label_33a20c:
    if (ctx->pc == 0x33A20Cu) {
        ctx->pc = 0x33A20Cu;
            // 0x33a20c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A210u;
        goto label_33a210;
    }
    ctx->pc = 0x33A208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33A210u);
        ctx->pc = 0x33A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A208u;
            // 0x33a20c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33A210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33A210u; }
            if (ctx->pc != 0x33A210u) { return; }
        }
        }
    }
    ctx->pc = 0x33A210u;
label_33a210:
    // 0x33a210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33a214:
    // 0x33a214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33a214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33a218:
    // 0x33a218: 0x0  nop
    ctx->pc = 0x33a218u;
    // NOP
label_33a21c:
    // 0x33a21c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33a21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33a220:
    // 0x33a220: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_33a224:
    if (ctx->pc == 0x33A224u) {
        ctx->pc = 0x33A224u;
            // 0x33a224: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x33A228u;
        goto label_33a228;
    }
    ctx->pc = 0x33A220u;
    {
        const bool branch_taken_0x33a220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A220u;
            // 0x33a224: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a220) {
            ctx->pc = 0x33A234u;
            goto label_33a234;
        }
    }
    ctx->pc = 0x33A228u;
label_33a228:
    // 0x33a228: 0xc0747dc  jal         func_1D1F70
label_33a22c:
    if (ctx->pc == 0x33A22Cu) {
        ctx->pc = 0x33A22Cu;
            // 0x33a22c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x33A230u;
        goto label_33a230;
    }
    ctx->pc = 0x33A228u;
    SET_GPR_U32(ctx, 31, 0x33A230u);
    ctx->pc = 0x33A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A228u;
            // 0x33a22c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A230u; }
        if (ctx->pc != 0x33A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A230u; }
        if (ctx->pc != 0x33A230u) { return; }
    }
    ctx->pc = 0x33A230u;
label_33a230:
    // 0x33a230: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x33a230u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_33a234:
    // 0x33a234: 0xc04e738  jal         func_139CE0
label_33a238:
    if (ctx->pc == 0x33A238u) {
        ctx->pc = 0x33A238u;
            // 0x33a238: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x33A23Cu;
        goto label_33a23c;
    }
    ctx->pc = 0x33A234u;
    SET_GPR_U32(ctx, 31, 0x33A23Cu);
    ctx->pc = 0x33A238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A234u;
            // 0x33a238: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A23Cu; }
        if (ctx->pc != 0x33A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A23Cu; }
        if (ctx->pc != 0x33A23Cu) { return; }
    }
    ctx->pc = 0x33A23Cu;
label_33a23c:
    // 0x33a23c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x33a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_33a240:
    // 0x33a240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a244:
    // 0x33a244: 0xc04e4a4  jal         func_139290
label_33a248:
    if (ctx->pc == 0x33A248u) {
        ctx->pc = 0x33A248u;
            // 0x33a248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A24Cu;
        goto label_33a24c;
    }
    ctx->pc = 0x33A244u;
    SET_GPR_U32(ctx, 31, 0x33A24Cu);
    ctx->pc = 0x33A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A244u;
            // 0x33a248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A24Cu; }
        if (ctx->pc != 0x33A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A24Cu; }
        if (ctx->pc != 0x33A24Cu) { return; }
    }
    ctx->pc = 0x33A24Cu;
label_33a24c:
    // 0x33a24c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x33a24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_33a250:
    // 0x33a250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33a254:
    // 0x33a254: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_33a258:
    // 0x33a258: 0x320f809  jalr        $t9
label_33a25c:
    if (ctx->pc == 0x33A25Cu) {
        ctx->pc = 0x33A25Cu;
            // 0x33a25c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A260u;
        goto label_33a260;
    }
    ctx->pc = 0x33A258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33A260u);
        ctx->pc = 0x33A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A258u;
            // 0x33a25c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33A260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33A260u; }
            if (ctx->pc != 0x33A260u) { return; }
        }
        }
    }
    ctx->pc = 0x33A260u;
label_33a260:
    // 0x33a260: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x33a260u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_33a264:
    // 0x33a264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a268:
    // 0x33a268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33a268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a26c:
    // 0x33a26c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33a26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a270:
    // 0x33a270: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x33a270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_33a274:
    // 0x33a274: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x33a274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_33a278:
    // 0x33a278: 0xc04cfcc  jal         func_133F30
label_33a27c:
    if (ctx->pc == 0x33A27Cu) {
        ctx->pc = 0x33A27Cu;
            // 0x33a27c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A280u;
        goto label_33a280;
    }
    ctx->pc = 0x33A278u;
    SET_GPR_U32(ctx, 31, 0x33A280u);
    ctx->pc = 0x33A27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A278u;
            // 0x33a27c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A280u; }
        if (ctx->pc != 0x33A280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A280u; }
        if (ctx->pc != 0x33A280u) { return; }
    }
    ctx->pc = 0x33A280u;
label_33a280:
    // 0x33a280: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x33a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_33a284:
    // 0x33a284: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x33a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_33a288:
    // 0x33a288: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x33a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_33a28c:
    // 0x33a28c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33a290:
    // 0x33a290: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x33a290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_33a294:
    // 0x33a294: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_33a298:
    // 0x33a298: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33a298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33a29c:
    // 0x33a29c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_33a2a0:
    if (ctx->pc == 0x33A2A0u) {
        ctx->pc = 0x33A2A0u;
            // 0x33a2a0: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x33A2A4u;
        goto label_33a2a4;
    }
    ctx->pc = 0x33A29Cu;
    {
        const bool branch_taken_0x33a29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a29c) {
            ctx->pc = 0x33A2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A29Cu;
            // 0x33a2a0: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A2B8u;
            goto label_33a2b8;
        }
    }
    ctx->pc = 0x33A2A4u;
label_33a2a4:
    // 0x33a2a4: 0xc0bd780  jal         func_2F5E00
label_33a2a8:
    if (ctx->pc == 0x33A2A8u) {
        ctx->pc = 0x33A2ACu;
        goto label_33a2ac;
    }
    ctx->pc = 0x33A2A4u;
    SET_GPR_U32(ctx, 31, 0x33A2ACu);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A2ACu; }
        if (ctx->pc != 0x33A2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A2ACu; }
        if (ctx->pc != 0x33A2ACu) { return; }
    }
    ctx->pc = 0x33A2ACu;
label_33a2ac:
    // 0x33a2ac: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x33a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_33a2b0:
    // 0x33a2b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33a2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33a2b4:
    // 0x33a2b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33a2b8:
    // 0x33a2b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x33a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_33a2bc:
    // 0x33a2bc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33a2c0:
    // 0x33a2c0: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x33a2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_33a2c4:
    // 0x33a2c4: 0x2834025  or          $t0, $s4, $v1
    ctx->pc = 0x33a2c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_33a2c8:
    // 0x33a2c8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x33a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_33a2cc:
    // 0x33a2cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33a2d0:
    if (ctx->pc == 0x33A2D0u) {
        ctx->pc = 0x33A2D0u;
            // 0x33a2d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A2D4u;
        goto label_33a2d4;
    }
    ctx->pc = 0x33A2CCu;
    {
        const bool branch_taken_0x33a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a2cc) {
            ctx->pc = 0x33A2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A2CCu;
            // 0x33a2d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A2F0u;
            goto label_33a2f0;
        }
    }
    ctx->pc = 0x33A2D4u;
label_33a2d4:
    // 0x33a2d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a2d8:
    // 0x33a2d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a2dc:
    // 0x33a2dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a2e0:
    // 0x33a2e0: 0xc0538d8  jal         func_14E360
label_33a2e4:
    if (ctx->pc == 0x33A2E4u) {
        ctx->pc = 0x33A2E4u;
            // 0x33a2e4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x33A2E8u;
        goto label_33a2e8;
    }
    ctx->pc = 0x33A2E0u;
    SET_GPR_U32(ctx, 31, 0x33A2E8u);
    ctx->pc = 0x33A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A2E0u;
            // 0x33a2e4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A2E8u; }
        if (ctx->pc != 0x33A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A2E8u; }
        if (ctx->pc != 0x33A2E8u) { return; }
    }
    ctx->pc = 0x33A2E8u;
label_33a2e8:
    // 0x33a2e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_33a2ec:
    if (ctx->pc == 0x33A2ECu) {
        ctx->pc = 0x33A2ECu;
            // 0x33a2ec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x33A2F0u;
        goto label_33a2f0;
    }
    ctx->pc = 0x33A2E8u;
    {
        const bool branch_taken_0x33a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A2E8u;
            // 0x33a2ec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2e8) {
            ctx->pc = 0x33A304u;
            goto label_33a304;
        }
    }
    ctx->pc = 0x33A2F0u;
label_33a2f0:
    // 0x33a2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a2f4:
    // 0x33a2f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a2f8:
    // 0x33a2f8: 0xc050044  jal         func_140110
label_33a2fc:
    if (ctx->pc == 0x33A2FCu) {
        ctx->pc = 0x33A2FCu;
            // 0x33a2fc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x33A300u;
        goto label_33a300;
    }
    ctx->pc = 0x33A2F8u;
    SET_GPR_U32(ctx, 31, 0x33A300u);
    ctx->pc = 0x33A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A2F8u;
            // 0x33a2fc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A300u; }
        if (ctx->pc != 0x33A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A300u; }
        if (ctx->pc != 0x33A300u) { return; }
    }
    ctx->pc = 0x33A300u;
label_33a300:
    // 0x33a300: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33a300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_33a304:
    // 0x33a304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33a304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33a308:
    // 0x33a308: 0x0  nop
    ctx->pc = 0x33a308u;
    // NOP
label_33a30c:
    // 0x33a30c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x33a30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33a310:
    // 0x33a310: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_33a314:
    if (ctx->pc == 0x33A314u) {
        ctx->pc = 0x33A314u;
            // 0x33a314: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x33A318u;
        goto label_33a318;
    }
    ctx->pc = 0x33A310u;
    {
        const bool branch_taken_0x33a310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33a310) {
            ctx->pc = 0x33A314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A310u;
            // 0x33a314: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A324u;
            goto label_33a324;
        }
    }
    ctx->pc = 0x33A318u;
label_33a318:
    // 0x33a318: 0xc0747d0  jal         func_1D1F40
label_33a31c:
    if (ctx->pc == 0x33A31Cu) {
        ctx->pc = 0x33A320u;
        goto label_33a320;
    }
    ctx->pc = 0x33A318u;
    SET_GPR_U32(ctx, 31, 0x33A320u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A320u; }
        if (ctx->pc != 0x33A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A320u; }
        if (ctx->pc != 0x33A320u) { return; }
    }
    ctx->pc = 0x33A320u;
label_33a320:
    // 0x33a320: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x33a320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33a324:
    // 0x33a324: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33a328:
    // 0x33a328: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x33a328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33a32c:
    // 0x33a32c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x33a32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33a330:
    // 0x33a330: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33a330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33a334:
    // 0x33a334: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33a334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33a338:
    // 0x33a338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33a338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33a33c:
    // 0x33a33c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33a33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a340:
    // 0x33a340: 0x3e00008  jr          $ra
label_33a344:
    if (ctx->pc == 0x33A344u) {
        ctx->pc = 0x33A344u;
            // 0x33a344: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x33A348u;
        goto label_33a348;
    }
    ctx->pc = 0x33A340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A340u;
            // 0x33a344: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A348u;
label_33a348:
    // 0x33a348: 0x0  nop
    ctx->pc = 0x33a348u;
    // NOP
label_33a34c:
    // 0x33a34c: 0x0  nop
    ctx->pc = 0x33a34cu;
    // NOP
label_33a350:
    // 0x33a350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33a354:
    // 0x33a354: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33a358:
    // 0x33a358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33a35c:
    // 0x33a35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a360:
    // 0x33a360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a364:
    // 0x33a364: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x33a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33a368:
    // 0x33a368: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x33a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_33a36c:
    // 0x33a36c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_33a370:
    if (ctx->pc == 0x33A370u) {
        ctx->pc = 0x33A370u;
            // 0x33a370: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x33A374u;
        goto label_33a374;
    }
    ctx->pc = 0x33A36Cu;
    {
        const bool branch_taken_0x33a36c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33a36c) {
            ctx->pc = 0x33A370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A36Cu;
            // 0x33a370: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A380u;
            goto label_33a380;
        }
    }
    ctx->pc = 0x33A374u;
label_33a374:
    // 0x33a374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33a378:
    // 0x33a378: 0x10000007  b           . + 4 + (0x7 << 2)
label_33a37c:
    if (ctx->pc == 0x33A37Cu) {
        ctx->pc = 0x33A37Cu;
            // 0x33a37c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x33A380u;
        goto label_33a380;
    }
    ctx->pc = 0x33A378u;
    {
        const bool branch_taken_0x33a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A378u;
            // 0x33a37c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a378) {
            ctx->pc = 0x33A398u;
            goto label_33a398;
        }
    }
    ctx->pc = 0x33A380u;
label_33a380:
    // 0x33a380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33a384:
    // 0x33a384: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33a384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33a388:
    // 0x33a388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33a388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33a38c:
    // 0x33a38c: 0x0  nop
    ctx->pc = 0x33a38cu;
    // NOP
label_33a390:
    // 0x33a390: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x33a390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_33a394:
    // 0x33a394: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33a394u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_33a398:
    // 0x33a398: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x33a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_33a39c:
    // 0x33a39c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x33a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_33a3a0:
    // 0x33a3a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33a3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33a3a4:
    // 0x33a3a4: 0x0  nop
    ctx->pc = 0x33a3a4u;
    // NOP
label_33a3a8:
    // 0x33a3a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33a3a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33a3ac:
    // 0x33a3ac: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x33a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33a3b0:
    // 0x33a3b0: 0xc0477a8  jal         func_11DEA0
label_33a3b4:
    if (ctx->pc == 0x33A3B4u) {
        ctx->pc = 0x33A3B4u;
            // 0x33a3b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x33A3B8u;
        goto label_33a3b8;
    }
    ctx->pc = 0x33A3B0u;
    SET_GPR_U32(ctx, 31, 0x33A3B8u);
    ctx->pc = 0x33A3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A3B0u;
            // 0x33a3b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A3B8u; }
        if (ctx->pc != 0x33A3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A3B8u; }
        if (ctx->pc != 0x33A3B8u) { return; }
    }
    ctx->pc = 0x33A3B8u;
label_33a3b8:
    // 0x33a3b8: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x33a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33a3bc:
    // 0x33a3bc: 0x3c043da3  lui         $a0, 0x3DA3
    ctx->pc = 0x33a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15779 << 16));
label_33a3c0:
    // 0x33a3c0: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x33a3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_33a3c4:
    // 0x33a3c4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33a3c8:
    // 0x33a3c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x33a3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33a3cc:
    // 0x33a3cc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x33a3ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_33a3d0:
    // 0x33a3d0: 0x0  nop
    ctx->pc = 0x33a3d0u;
    // NOP
label_33a3d4:
    // 0x33a3d4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x33a3d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_33a3d8:
    // 0x33a3d8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x33a3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_33a3dc:
    // 0x33a3dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33a3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_33a3e0:
    // 0x33a3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33a3e4:
    // 0x33a3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a3e8:
    // 0x33a3e8: 0x3e00008  jr          $ra
label_33a3ec:
    if (ctx->pc == 0x33A3ECu) {
        ctx->pc = 0x33A3ECu;
            // 0x33a3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x33A3F0u;
        goto label_33a3f0;
    }
    ctx->pc = 0x33A3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A3E8u;
            // 0x33a3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A3F0u;
label_33a3f0:
    // 0x33a3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33a3f4:
    // 0x33a3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33a3f8:
    // 0x33a3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a3fc:
    // 0x33a3fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33a400:
    // 0x33a400: 0xc0bd758  jal         func_2F5D60
label_33a404:
    if (ctx->pc == 0x33A404u) {
        ctx->pc = 0x33A404u;
            // 0x33a404: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A408u;
        goto label_33a408;
    }
    ctx->pc = 0x33A400u;
    SET_GPR_U32(ctx, 31, 0x33A408u);
    ctx->pc = 0x33A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A400u;
            // 0x33a404: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D60u;
    if (runtime->hasFunction(0x2F5D60u)) {
        auto targetFn = runtime->lookupFunction(0x2F5D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A408u; }
        if (ctx->pc != 0x33A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5D60_0x2f5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A408u; }
        if (ctx->pc != 0x33A408u) { return; }
    }
    ctx->pc = 0x33A408u;
label_33a408:
    // 0x33a408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33a40c:
    // 0x33a40c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x33a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_33a410:
    // 0x33a410: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x33a410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33a414:
    // 0x33a414: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33a414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33a418:
    // 0x33a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33a41c:
    // 0x33a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a420:
    // 0x33a420: 0x3e00008  jr          $ra
label_33a424:
    if (ctx->pc == 0x33A424u) {
        ctx->pc = 0x33A424u;
            // 0x33a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x33A428u;
        goto label_33a428;
    }
    ctx->pc = 0x33A420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A420u;
            // 0x33a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A428u;
label_33a428:
    // 0x33a428: 0x0  nop
    ctx->pc = 0x33a428u;
    // NOP
label_33a42c:
    // 0x33a42c: 0x0  nop
    ctx->pc = 0x33a42cu;
    // NOP
label_33a430:
    // 0x33a430: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x33a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_33a434:
    // 0x33a434: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33a434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33a438:
    // 0x33a438: 0x8c4207b0  lw          $v0, 0x7B0($v0)
    ctx->pc = 0x33a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
label_33a43c:
    // 0x33a43c: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x33a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_33a440:
    // 0x33a440: 0x401827  not         $v1, $v0
    ctx->pc = 0x33a440u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_33a444:
    // 0x33a444: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x33a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_33a448:
    // 0x33a448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33a448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33a44c:
    // 0x33a44c: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x33a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_33a450:
    // 0x33a450: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x33a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_33a454:
    // 0x33a454: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_33a458:
    if (ctx->pc == 0x33A458u) {
        ctx->pc = 0x33A458u;
            // 0x33a458: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->pc = 0x33A45Cu;
        goto label_33a45c;
    }
    ctx->pc = 0x33A454u;
    {
        const bool branch_taken_0x33a454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A454u;
            // 0x33a458: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a454) {
            ctx->pc = 0x33A46Cu;
            goto label_33a46c;
        }
    }
    ctx->pc = 0x33A45Cu;
label_33a45c:
    // 0x33a45c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x33a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_33a460:
    // 0x33a460: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x33a460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_33a464:
    // 0x33a464: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x33a464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33a468:
    // 0x33a468: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x33a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_33a46c:
    // 0x33a46c: 0x80c2424  j           func_309090
label_33a470:
    if (ctx->pc == 0x33A470u) {
        ctx->pc = 0x33A474u;
        goto label_33a474;
    }
    ctx->pc = 0x33A46Cu;
    ctx->pc = 0x309090u;
    {
        auto targetFn = runtime->lookupFunction(0x309090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x33A474u;
label_33a474:
    // 0x33a474: 0x0  nop
    ctx->pc = 0x33a474u;
    // NOP
label_33a478:
    // 0x33a478: 0x0  nop
    ctx->pc = 0x33a478u;
    // NOP
label_33a47c:
    // 0x33a47c: 0x0  nop
    ctx->pc = 0x33a47cu;
    // NOP
}
