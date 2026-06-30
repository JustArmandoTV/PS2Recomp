#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00409DA0
// Address: 0x409da0 - 0x40a860
void sub_00409DA0_0x409da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409DA0_0x409da0");
#endif

    switch (ctx->pc) {
        case 0x409da0u: goto label_409da0;
        case 0x409da4u: goto label_409da4;
        case 0x409da8u: goto label_409da8;
        case 0x409dacu: goto label_409dac;
        case 0x409db0u: goto label_409db0;
        case 0x409db4u: goto label_409db4;
        case 0x409db8u: goto label_409db8;
        case 0x409dbcu: goto label_409dbc;
        case 0x409dc0u: goto label_409dc0;
        case 0x409dc4u: goto label_409dc4;
        case 0x409dc8u: goto label_409dc8;
        case 0x409dccu: goto label_409dcc;
        case 0x409dd0u: goto label_409dd0;
        case 0x409dd4u: goto label_409dd4;
        case 0x409dd8u: goto label_409dd8;
        case 0x409ddcu: goto label_409ddc;
        case 0x409de0u: goto label_409de0;
        case 0x409de4u: goto label_409de4;
        case 0x409de8u: goto label_409de8;
        case 0x409decu: goto label_409dec;
        case 0x409df0u: goto label_409df0;
        case 0x409df4u: goto label_409df4;
        case 0x409df8u: goto label_409df8;
        case 0x409dfcu: goto label_409dfc;
        case 0x409e00u: goto label_409e00;
        case 0x409e04u: goto label_409e04;
        case 0x409e08u: goto label_409e08;
        case 0x409e0cu: goto label_409e0c;
        case 0x409e10u: goto label_409e10;
        case 0x409e14u: goto label_409e14;
        case 0x409e18u: goto label_409e18;
        case 0x409e1cu: goto label_409e1c;
        case 0x409e20u: goto label_409e20;
        case 0x409e24u: goto label_409e24;
        case 0x409e28u: goto label_409e28;
        case 0x409e2cu: goto label_409e2c;
        case 0x409e30u: goto label_409e30;
        case 0x409e34u: goto label_409e34;
        case 0x409e38u: goto label_409e38;
        case 0x409e3cu: goto label_409e3c;
        case 0x409e40u: goto label_409e40;
        case 0x409e44u: goto label_409e44;
        case 0x409e48u: goto label_409e48;
        case 0x409e4cu: goto label_409e4c;
        case 0x409e50u: goto label_409e50;
        case 0x409e54u: goto label_409e54;
        case 0x409e58u: goto label_409e58;
        case 0x409e5cu: goto label_409e5c;
        case 0x409e60u: goto label_409e60;
        case 0x409e64u: goto label_409e64;
        case 0x409e68u: goto label_409e68;
        case 0x409e6cu: goto label_409e6c;
        case 0x409e70u: goto label_409e70;
        case 0x409e74u: goto label_409e74;
        case 0x409e78u: goto label_409e78;
        case 0x409e7cu: goto label_409e7c;
        case 0x409e80u: goto label_409e80;
        case 0x409e84u: goto label_409e84;
        case 0x409e88u: goto label_409e88;
        case 0x409e8cu: goto label_409e8c;
        case 0x409e90u: goto label_409e90;
        case 0x409e94u: goto label_409e94;
        case 0x409e98u: goto label_409e98;
        case 0x409e9cu: goto label_409e9c;
        case 0x409ea0u: goto label_409ea0;
        case 0x409ea4u: goto label_409ea4;
        case 0x409ea8u: goto label_409ea8;
        case 0x409eacu: goto label_409eac;
        case 0x409eb0u: goto label_409eb0;
        case 0x409eb4u: goto label_409eb4;
        case 0x409eb8u: goto label_409eb8;
        case 0x409ebcu: goto label_409ebc;
        case 0x409ec0u: goto label_409ec0;
        case 0x409ec4u: goto label_409ec4;
        case 0x409ec8u: goto label_409ec8;
        case 0x409eccu: goto label_409ecc;
        case 0x409ed0u: goto label_409ed0;
        case 0x409ed4u: goto label_409ed4;
        case 0x409ed8u: goto label_409ed8;
        case 0x409edcu: goto label_409edc;
        case 0x409ee0u: goto label_409ee0;
        case 0x409ee4u: goto label_409ee4;
        case 0x409ee8u: goto label_409ee8;
        case 0x409eecu: goto label_409eec;
        case 0x409ef0u: goto label_409ef0;
        case 0x409ef4u: goto label_409ef4;
        case 0x409ef8u: goto label_409ef8;
        case 0x409efcu: goto label_409efc;
        case 0x409f00u: goto label_409f00;
        case 0x409f04u: goto label_409f04;
        case 0x409f08u: goto label_409f08;
        case 0x409f0cu: goto label_409f0c;
        case 0x409f10u: goto label_409f10;
        case 0x409f14u: goto label_409f14;
        case 0x409f18u: goto label_409f18;
        case 0x409f1cu: goto label_409f1c;
        case 0x409f20u: goto label_409f20;
        case 0x409f24u: goto label_409f24;
        case 0x409f28u: goto label_409f28;
        case 0x409f2cu: goto label_409f2c;
        case 0x409f30u: goto label_409f30;
        case 0x409f34u: goto label_409f34;
        case 0x409f38u: goto label_409f38;
        case 0x409f3cu: goto label_409f3c;
        case 0x409f40u: goto label_409f40;
        case 0x409f44u: goto label_409f44;
        case 0x409f48u: goto label_409f48;
        case 0x409f4cu: goto label_409f4c;
        case 0x409f50u: goto label_409f50;
        case 0x409f54u: goto label_409f54;
        case 0x409f58u: goto label_409f58;
        case 0x409f5cu: goto label_409f5c;
        case 0x409f60u: goto label_409f60;
        case 0x409f64u: goto label_409f64;
        case 0x409f68u: goto label_409f68;
        case 0x409f6cu: goto label_409f6c;
        case 0x409f70u: goto label_409f70;
        case 0x409f74u: goto label_409f74;
        case 0x409f78u: goto label_409f78;
        case 0x409f7cu: goto label_409f7c;
        case 0x409f80u: goto label_409f80;
        case 0x409f84u: goto label_409f84;
        case 0x409f88u: goto label_409f88;
        case 0x409f8cu: goto label_409f8c;
        case 0x409f90u: goto label_409f90;
        case 0x409f94u: goto label_409f94;
        case 0x409f98u: goto label_409f98;
        case 0x409f9cu: goto label_409f9c;
        case 0x409fa0u: goto label_409fa0;
        case 0x409fa4u: goto label_409fa4;
        case 0x409fa8u: goto label_409fa8;
        case 0x409facu: goto label_409fac;
        case 0x409fb0u: goto label_409fb0;
        case 0x409fb4u: goto label_409fb4;
        case 0x409fb8u: goto label_409fb8;
        case 0x409fbcu: goto label_409fbc;
        case 0x409fc0u: goto label_409fc0;
        case 0x409fc4u: goto label_409fc4;
        case 0x409fc8u: goto label_409fc8;
        case 0x409fccu: goto label_409fcc;
        case 0x409fd0u: goto label_409fd0;
        case 0x409fd4u: goto label_409fd4;
        case 0x409fd8u: goto label_409fd8;
        case 0x409fdcu: goto label_409fdc;
        case 0x409fe0u: goto label_409fe0;
        case 0x409fe4u: goto label_409fe4;
        case 0x409fe8u: goto label_409fe8;
        case 0x409fecu: goto label_409fec;
        case 0x409ff0u: goto label_409ff0;
        case 0x409ff4u: goto label_409ff4;
        case 0x409ff8u: goto label_409ff8;
        case 0x409ffcu: goto label_409ffc;
        case 0x40a000u: goto label_40a000;
        case 0x40a004u: goto label_40a004;
        case 0x40a008u: goto label_40a008;
        case 0x40a00cu: goto label_40a00c;
        case 0x40a010u: goto label_40a010;
        case 0x40a014u: goto label_40a014;
        case 0x40a018u: goto label_40a018;
        case 0x40a01cu: goto label_40a01c;
        case 0x40a020u: goto label_40a020;
        case 0x40a024u: goto label_40a024;
        case 0x40a028u: goto label_40a028;
        case 0x40a02cu: goto label_40a02c;
        case 0x40a030u: goto label_40a030;
        case 0x40a034u: goto label_40a034;
        case 0x40a038u: goto label_40a038;
        case 0x40a03cu: goto label_40a03c;
        case 0x40a040u: goto label_40a040;
        case 0x40a044u: goto label_40a044;
        case 0x40a048u: goto label_40a048;
        case 0x40a04cu: goto label_40a04c;
        case 0x40a050u: goto label_40a050;
        case 0x40a054u: goto label_40a054;
        case 0x40a058u: goto label_40a058;
        case 0x40a05cu: goto label_40a05c;
        case 0x40a060u: goto label_40a060;
        case 0x40a064u: goto label_40a064;
        case 0x40a068u: goto label_40a068;
        case 0x40a06cu: goto label_40a06c;
        case 0x40a070u: goto label_40a070;
        case 0x40a074u: goto label_40a074;
        case 0x40a078u: goto label_40a078;
        case 0x40a07cu: goto label_40a07c;
        case 0x40a080u: goto label_40a080;
        case 0x40a084u: goto label_40a084;
        case 0x40a088u: goto label_40a088;
        case 0x40a08cu: goto label_40a08c;
        case 0x40a090u: goto label_40a090;
        case 0x40a094u: goto label_40a094;
        case 0x40a098u: goto label_40a098;
        case 0x40a09cu: goto label_40a09c;
        case 0x40a0a0u: goto label_40a0a0;
        case 0x40a0a4u: goto label_40a0a4;
        case 0x40a0a8u: goto label_40a0a8;
        case 0x40a0acu: goto label_40a0ac;
        case 0x40a0b0u: goto label_40a0b0;
        case 0x40a0b4u: goto label_40a0b4;
        case 0x40a0b8u: goto label_40a0b8;
        case 0x40a0bcu: goto label_40a0bc;
        case 0x40a0c0u: goto label_40a0c0;
        case 0x40a0c4u: goto label_40a0c4;
        case 0x40a0c8u: goto label_40a0c8;
        case 0x40a0ccu: goto label_40a0cc;
        case 0x40a0d0u: goto label_40a0d0;
        case 0x40a0d4u: goto label_40a0d4;
        case 0x40a0d8u: goto label_40a0d8;
        case 0x40a0dcu: goto label_40a0dc;
        case 0x40a0e0u: goto label_40a0e0;
        case 0x40a0e4u: goto label_40a0e4;
        case 0x40a0e8u: goto label_40a0e8;
        case 0x40a0ecu: goto label_40a0ec;
        case 0x40a0f0u: goto label_40a0f0;
        case 0x40a0f4u: goto label_40a0f4;
        case 0x40a0f8u: goto label_40a0f8;
        case 0x40a0fcu: goto label_40a0fc;
        case 0x40a100u: goto label_40a100;
        case 0x40a104u: goto label_40a104;
        case 0x40a108u: goto label_40a108;
        case 0x40a10cu: goto label_40a10c;
        case 0x40a110u: goto label_40a110;
        case 0x40a114u: goto label_40a114;
        case 0x40a118u: goto label_40a118;
        case 0x40a11cu: goto label_40a11c;
        case 0x40a120u: goto label_40a120;
        case 0x40a124u: goto label_40a124;
        case 0x40a128u: goto label_40a128;
        case 0x40a12cu: goto label_40a12c;
        case 0x40a130u: goto label_40a130;
        case 0x40a134u: goto label_40a134;
        case 0x40a138u: goto label_40a138;
        case 0x40a13cu: goto label_40a13c;
        case 0x40a140u: goto label_40a140;
        case 0x40a144u: goto label_40a144;
        case 0x40a148u: goto label_40a148;
        case 0x40a14cu: goto label_40a14c;
        case 0x40a150u: goto label_40a150;
        case 0x40a154u: goto label_40a154;
        case 0x40a158u: goto label_40a158;
        case 0x40a15cu: goto label_40a15c;
        case 0x40a160u: goto label_40a160;
        case 0x40a164u: goto label_40a164;
        case 0x40a168u: goto label_40a168;
        case 0x40a16cu: goto label_40a16c;
        case 0x40a170u: goto label_40a170;
        case 0x40a174u: goto label_40a174;
        case 0x40a178u: goto label_40a178;
        case 0x40a17cu: goto label_40a17c;
        case 0x40a180u: goto label_40a180;
        case 0x40a184u: goto label_40a184;
        case 0x40a188u: goto label_40a188;
        case 0x40a18cu: goto label_40a18c;
        case 0x40a190u: goto label_40a190;
        case 0x40a194u: goto label_40a194;
        case 0x40a198u: goto label_40a198;
        case 0x40a19cu: goto label_40a19c;
        case 0x40a1a0u: goto label_40a1a0;
        case 0x40a1a4u: goto label_40a1a4;
        case 0x40a1a8u: goto label_40a1a8;
        case 0x40a1acu: goto label_40a1ac;
        case 0x40a1b0u: goto label_40a1b0;
        case 0x40a1b4u: goto label_40a1b4;
        case 0x40a1b8u: goto label_40a1b8;
        case 0x40a1bcu: goto label_40a1bc;
        case 0x40a1c0u: goto label_40a1c0;
        case 0x40a1c4u: goto label_40a1c4;
        case 0x40a1c8u: goto label_40a1c8;
        case 0x40a1ccu: goto label_40a1cc;
        case 0x40a1d0u: goto label_40a1d0;
        case 0x40a1d4u: goto label_40a1d4;
        case 0x40a1d8u: goto label_40a1d8;
        case 0x40a1dcu: goto label_40a1dc;
        case 0x40a1e0u: goto label_40a1e0;
        case 0x40a1e4u: goto label_40a1e4;
        case 0x40a1e8u: goto label_40a1e8;
        case 0x40a1ecu: goto label_40a1ec;
        case 0x40a1f0u: goto label_40a1f0;
        case 0x40a1f4u: goto label_40a1f4;
        case 0x40a1f8u: goto label_40a1f8;
        case 0x40a1fcu: goto label_40a1fc;
        case 0x40a200u: goto label_40a200;
        case 0x40a204u: goto label_40a204;
        case 0x40a208u: goto label_40a208;
        case 0x40a20cu: goto label_40a20c;
        case 0x40a210u: goto label_40a210;
        case 0x40a214u: goto label_40a214;
        case 0x40a218u: goto label_40a218;
        case 0x40a21cu: goto label_40a21c;
        case 0x40a220u: goto label_40a220;
        case 0x40a224u: goto label_40a224;
        case 0x40a228u: goto label_40a228;
        case 0x40a22cu: goto label_40a22c;
        case 0x40a230u: goto label_40a230;
        case 0x40a234u: goto label_40a234;
        case 0x40a238u: goto label_40a238;
        case 0x40a23cu: goto label_40a23c;
        case 0x40a240u: goto label_40a240;
        case 0x40a244u: goto label_40a244;
        case 0x40a248u: goto label_40a248;
        case 0x40a24cu: goto label_40a24c;
        case 0x40a250u: goto label_40a250;
        case 0x40a254u: goto label_40a254;
        case 0x40a258u: goto label_40a258;
        case 0x40a25cu: goto label_40a25c;
        case 0x40a260u: goto label_40a260;
        case 0x40a264u: goto label_40a264;
        case 0x40a268u: goto label_40a268;
        case 0x40a26cu: goto label_40a26c;
        case 0x40a270u: goto label_40a270;
        case 0x40a274u: goto label_40a274;
        case 0x40a278u: goto label_40a278;
        case 0x40a27cu: goto label_40a27c;
        case 0x40a280u: goto label_40a280;
        case 0x40a284u: goto label_40a284;
        case 0x40a288u: goto label_40a288;
        case 0x40a28cu: goto label_40a28c;
        case 0x40a290u: goto label_40a290;
        case 0x40a294u: goto label_40a294;
        case 0x40a298u: goto label_40a298;
        case 0x40a29cu: goto label_40a29c;
        case 0x40a2a0u: goto label_40a2a0;
        case 0x40a2a4u: goto label_40a2a4;
        case 0x40a2a8u: goto label_40a2a8;
        case 0x40a2acu: goto label_40a2ac;
        case 0x40a2b0u: goto label_40a2b0;
        case 0x40a2b4u: goto label_40a2b4;
        case 0x40a2b8u: goto label_40a2b8;
        case 0x40a2bcu: goto label_40a2bc;
        case 0x40a2c0u: goto label_40a2c0;
        case 0x40a2c4u: goto label_40a2c4;
        case 0x40a2c8u: goto label_40a2c8;
        case 0x40a2ccu: goto label_40a2cc;
        case 0x40a2d0u: goto label_40a2d0;
        case 0x40a2d4u: goto label_40a2d4;
        case 0x40a2d8u: goto label_40a2d8;
        case 0x40a2dcu: goto label_40a2dc;
        case 0x40a2e0u: goto label_40a2e0;
        case 0x40a2e4u: goto label_40a2e4;
        case 0x40a2e8u: goto label_40a2e8;
        case 0x40a2ecu: goto label_40a2ec;
        case 0x40a2f0u: goto label_40a2f0;
        case 0x40a2f4u: goto label_40a2f4;
        case 0x40a2f8u: goto label_40a2f8;
        case 0x40a2fcu: goto label_40a2fc;
        case 0x40a300u: goto label_40a300;
        case 0x40a304u: goto label_40a304;
        case 0x40a308u: goto label_40a308;
        case 0x40a30cu: goto label_40a30c;
        case 0x40a310u: goto label_40a310;
        case 0x40a314u: goto label_40a314;
        case 0x40a318u: goto label_40a318;
        case 0x40a31cu: goto label_40a31c;
        case 0x40a320u: goto label_40a320;
        case 0x40a324u: goto label_40a324;
        case 0x40a328u: goto label_40a328;
        case 0x40a32cu: goto label_40a32c;
        case 0x40a330u: goto label_40a330;
        case 0x40a334u: goto label_40a334;
        case 0x40a338u: goto label_40a338;
        case 0x40a33cu: goto label_40a33c;
        case 0x40a340u: goto label_40a340;
        case 0x40a344u: goto label_40a344;
        case 0x40a348u: goto label_40a348;
        case 0x40a34cu: goto label_40a34c;
        case 0x40a350u: goto label_40a350;
        case 0x40a354u: goto label_40a354;
        case 0x40a358u: goto label_40a358;
        case 0x40a35cu: goto label_40a35c;
        case 0x40a360u: goto label_40a360;
        case 0x40a364u: goto label_40a364;
        case 0x40a368u: goto label_40a368;
        case 0x40a36cu: goto label_40a36c;
        case 0x40a370u: goto label_40a370;
        case 0x40a374u: goto label_40a374;
        case 0x40a378u: goto label_40a378;
        case 0x40a37cu: goto label_40a37c;
        case 0x40a380u: goto label_40a380;
        case 0x40a384u: goto label_40a384;
        case 0x40a388u: goto label_40a388;
        case 0x40a38cu: goto label_40a38c;
        case 0x40a390u: goto label_40a390;
        case 0x40a394u: goto label_40a394;
        case 0x40a398u: goto label_40a398;
        case 0x40a39cu: goto label_40a39c;
        case 0x40a3a0u: goto label_40a3a0;
        case 0x40a3a4u: goto label_40a3a4;
        case 0x40a3a8u: goto label_40a3a8;
        case 0x40a3acu: goto label_40a3ac;
        case 0x40a3b0u: goto label_40a3b0;
        case 0x40a3b4u: goto label_40a3b4;
        case 0x40a3b8u: goto label_40a3b8;
        case 0x40a3bcu: goto label_40a3bc;
        case 0x40a3c0u: goto label_40a3c0;
        case 0x40a3c4u: goto label_40a3c4;
        case 0x40a3c8u: goto label_40a3c8;
        case 0x40a3ccu: goto label_40a3cc;
        case 0x40a3d0u: goto label_40a3d0;
        case 0x40a3d4u: goto label_40a3d4;
        case 0x40a3d8u: goto label_40a3d8;
        case 0x40a3dcu: goto label_40a3dc;
        case 0x40a3e0u: goto label_40a3e0;
        case 0x40a3e4u: goto label_40a3e4;
        case 0x40a3e8u: goto label_40a3e8;
        case 0x40a3ecu: goto label_40a3ec;
        case 0x40a3f0u: goto label_40a3f0;
        case 0x40a3f4u: goto label_40a3f4;
        case 0x40a3f8u: goto label_40a3f8;
        case 0x40a3fcu: goto label_40a3fc;
        case 0x40a400u: goto label_40a400;
        case 0x40a404u: goto label_40a404;
        case 0x40a408u: goto label_40a408;
        case 0x40a40cu: goto label_40a40c;
        case 0x40a410u: goto label_40a410;
        case 0x40a414u: goto label_40a414;
        case 0x40a418u: goto label_40a418;
        case 0x40a41cu: goto label_40a41c;
        case 0x40a420u: goto label_40a420;
        case 0x40a424u: goto label_40a424;
        case 0x40a428u: goto label_40a428;
        case 0x40a42cu: goto label_40a42c;
        case 0x40a430u: goto label_40a430;
        case 0x40a434u: goto label_40a434;
        case 0x40a438u: goto label_40a438;
        case 0x40a43cu: goto label_40a43c;
        case 0x40a440u: goto label_40a440;
        case 0x40a444u: goto label_40a444;
        case 0x40a448u: goto label_40a448;
        case 0x40a44cu: goto label_40a44c;
        case 0x40a450u: goto label_40a450;
        case 0x40a454u: goto label_40a454;
        case 0x40a458u: goto label_40a458;
        case 0x40a45cu: goto label_40a45c;
        case 0x40a460u: goto label_40a460;
        case 0x40a464u: goto label_40a464;
        case 0x40a468u: goto label_40a468;
        case 0x40a46cu: goto label_40a46c;
        case 0x40a470u: goto label_40a470;
        case 0x40a474u: goto label_40a474;
        case 0x40a478u: goto label_40a478;
        case 0x40a47cu: goto label_40a47c;
        case 0x40a480u: goto label_40a480;
        case 0x40a484u: goto label_40a484;
        case 0x40a488u: goto label_40a488;
        case 0x40a48cu: goto label_40a48c;
        case 0x40a490u: goto label_40a490;
        case 0x40a494u: goto label_40a494;
        case 0x40a498u: goto label_40a498;
        case 0x40a49cu: goto label_40a49c;
        case 0x40a4a0u: goto label_40a4a0;
        case 0x40a4a4u: goto label_40a4a4;
        case 0x40a4a8u: goto label_40a4a8;
        case 0x40a4acu: goto label_40a4ac;
        case 0x40a4b0u: goto label_40a4b0;
        case 0x40a4b4u: goto label_40a4b4;
        case 0x40a4b8u: goto label_40a4b8;
        case 0x40a4bcu: goto label_40a4bc;
        case 0x40a4c0u: goto label_40a4c0;
        case 0x40a4c4u: goto label_40a4c4;
        case 0x40a4c8u: goto label_40a4c8;
        case 0x40a4ccu: goto label_40a4cc;
        case 0x40a4d0u: goto label_40a4d0;
        case 0x40a4d4u: goto label_40a4d4;
        case 0x40a4d8u: goto label_40a4d8;
        case 0x40a4dcu: goto label_40a4dc;
        case 0x40a4e0u: goto label_40a4e0;
        case 0x40a4e4u: goto label_40a4e4;
        case 0x40a4e8u: goto label_40a4e8;
        case 0x40a4ecu: goto label_40a4ec;
        case 0x40a4f0u: goto label_40a4f0;
        case 0x40a4f4u: goto label_40a4f4;
        case 0x40a4f8u: goto label_40a4f8;
        case 0x40a4fcu: goto label_40a4fc;
        case 0x40a500u: goto label_40a500;
        case 0x40a504u: goto label_40a504;
        case 0x40a508u: goto label_40a508;
        case 0x40a50cu: goto label_40a50c;
        case 0x40a510u: goto label_40a510;
        case 0x40a514u: goto label_40a514;
        case 0x40a518u: goto label_40a518;
        case 0x40a51cu: goto label_40a51c;
        case 0x40a520u: goto label_40a520;
        case 0x40a524u: goto label_40a524;
        case 0x40a528u: goto label_40a528;
        case 0x40a52cu: goto label_40a52c;
        case 0x40a530u: goto label_40a530;
        case 0x40a534u: goto label_40a534;
        case 0x40a538u: goto label_40a538;
        case 0x40a53cu: goto label_40a53c;
        case 0x40a540u: goto label_40a540;
        case 0x40a544u: goto label_40a544;
        case 0x40a548u: goto label_40a548;
        case 0x40a54cu: goto label_40a54c;
        case 0x40a550u: goto label_40a550;
        case 0x40a554u: goto label_40a554;
        case 0x40a558u: goto label_40a558;
        case 0x40a55cu: goto label_40a55c;
        case 0x40a560u: goto label_40a560;
        case 0x40a564u: goto label_40a564;
        case 0x40a568u: goto label_40a568;
        case 0x40a56cu: goto label_40a56c;
        case 0x40a570u: goto label_40a570;
        case 0x40a574u: goto label_40a574;
        case 0x40a578u: goto label_40a578;
        case 0x40a57cu: goto label_40a57c;
        case 0x40a580u: goto label_40a580;
        case 0x40a584u: goto label_40a584;
        case 0x40a588u: goto label_40a588;
        case 0x40a58cu: goto label_40a58c;
        case 0x40a590u: goto label_40a590;
        case 0x40a594u: goto label_40a594;
        case 0x40a598u: goto label_40a598;
        case 0x40a59cu: goto label_40a59c;
        case 0x40a5a0u: goto label_40a5a0;
        case 0x40a5a4u: goto label_40a5a4;
        case 0x40a5a8u: goto label_40a5a8;
        case 0x40a5acu: goto label_40a5ac;
        case 0x40a5b0u: goto label_40a5b0;
        case 0x40a5b4u: goto label_40a5b4;
        case 0x40a5b8u: goto label_40a5b8;
        case 0x40a5bcu: goto label_40a5bc;
        case 0x40a5c0u: goto label_40a5c0;
        case 0x40a5c4u: goto label_40a5c4;
        case 0x40a5c8u: goto label_40a5c8;
        case 0x40a5ccu: goto label_40a5cc;
        case 0x40a5d0u: goto label_40a5d0;
        case 0x40a5d4u: goto label_40a5d4;
        case 0x40a5d8u: goto label_40a5d8;
        case 0x40a5dcu: goto label_40a5dc;
        case 0x40a5e0u: goto label_40a5e0;
        case 0x40a5e4u: goto label_40a5e4;
        case 0x40a5e8u: goto label_40a5e8;
        case 0x40a5ecu: goto label_40a5ec;
        case 0x40a5f0u: goto label_40a5f0;
        case 0x40a5f4u: goto label_40a5f4;
        case 0x40a5f8u: goto label_40a5f8;
        case 0x40a5fcu: goto label_40a5fc;
        case 0x40a600u: goto label_40a600;
        case 0x40a604u: goto label_40a604;
        case 0x40a608u: goto label_40a608;
        case 0x40a60cu: goto label_40a60c;
        case 0x40a610u: goto label_40a610;
        case 0x40a614u: goto label_40a614;
        case 0x40a618u: goto label_40a618;
        case 0x40a61cu: goto label_40a61c;
        case 0x40a620u: goto label_40a620;
        case 0x40a624u: goto label_40a624;
        case 0x40a628u: goto label_40a628;
        case 0x40a62cu: goto label_40a62c;
        case 0x40a630u: goto label_40a630;
        case 0x40a634u: goto label_40a634;
        case 0x40a638u: goto label_40a638;
        case 0x40a63cu: goto label_40a63c;
        case 0x40a640u: goto label_40a640;
        case 0x40a644u: goto label_40a644;
        case 0x40a648u: goto label_40a648;
        case 0x40a64cu: goto label_40a64c;
        case 0x40a650u: goto label_40a650;
        case 0x40a654u: goto label_40a654;
        case 0x40a658u: goto label_40a658;
        case 0x40a65cu: goto label_40a65c;
        case 0x40a660u: goto label_40a660;
        case 0x40a664u: goto label_40a664;
        case 0x40a668u: goto label_40a668;
        case 0x40a66cu: goto label_40a66c;
        case 0x40a670u: goto label_40a670;
        case 0x40a674u: goto label_40a674;
        case 0x40a678u: goto label_40a678;
        case 0x40a67cu: goto label_40a67c;
        case 0x40a680u: goto label_40a680;
        case 0x40a684u: goto label_40a684;
        case 0x40a688u: goto label_40a688;
        case 0x40a68cu: goto label_40a68c;
        case 0x40a690u: goto label_40a690;
        case 0x40a694u: goto label_40a694;
        case 0x40a698u: goto label_40a698;
        case 0x40a69cu: goto label_40a69c;
        case 0x40a6a0u: goto label_40a6a0;
        case 0x40a6a4u: goto label_40a6a4;
        case 0x40a6a8u: goto label_40a6a8;
        case 0x40a6acu: goto label_40a6ac;
        case 0x40a6b0u: goto label_40a6b0;
        case 0x40a6b4u: goto label_40a6b4;
        case 0x40a6b8u: goto label_40a6b8;
        case 0x40a6bcu: goto label_40a6bc;
        case 0x40a6c0u: goto label_40a6c0;
        case 0x40a6c4u: goto label_40a6c4;
        case 0x40a6c8u: goto label_40a6c8;
        case 0x40a6ccu: goto label_40a6cc;
        case 0x40a6d0u: goto label_40a6d0;
        case 0x40a6d4u: goto label_40a6d4;
        case 0x40a6d8u: goto label_40a6d8;
        case 0x40a6dcu: goto label_40a6dc;
        case 0x40a6e0u: goto label_40a6e0;
        case 0x40a6e4u: goto label_40a6e4;
        case 0x40a6e8u: goto label_40a6e8;
        case 0x40a6ecu: goto label_40a6ec;
        case 0x40a6f0u: goto label_40a6f0;
        case 0x40a6f4u: goto label_40a6f4;
        case 0x40a6f8u: goto label_40a6f8;
        case 0x40a6fcu: goto label_40a6fc;
        case 0x40a700u: goto label_40a700;
        case 0x40a704u: goto label_40a704;
        case 0x40a708u: goto label_40a708;
        case 0x40a70cu: goto label_40a70c;
        case 0x40a710u: goto label_40a710;
        case 0x40a714u: goto label_40a714;
        case 0x40a718u: goto label_40a718;
        case 0x40a71cu: goto label_40a71c;
        case 0x40a720u: goto label_40a720;
        case 0x40a724u: goto label_40a724;
        case 0x40a728u: goto label_40a728;
        case 0x40a72cu: goto label_40a72c;
        case 0x40a730u: goto label_40a730;
        case 0x40a734u: goto label_40a734;
        case 0x40a738u: goto label_40a738;
        case 0x40a73cu: goto label_40a73c;
        case 0x40a740u: goto label_40a740;
        case 0x40a744u: goto label_40a744;
        case 0x40a748u: goto label_40a748;
        case 0x40a74cu: goto label_40a74c;
        case 0x40a750u: goto label_40a750;
        case 0x40a754u: goto label_40a754;
        case 0x40a758u: goto label_40a758;
        case 0x40a75cu: goto label_40a75c;
        case 0x40a760u: goto label_40a760;
        case 0x40a764u: goto label_40a764;
        case 0x40a768u: goto label_40a768;
        case 0x40a76cu: goto label_40a76c;
        case 0x40a770u: goto label_40a770;
        case 0x40a774u: goto label_40a774;
        case 0x40a778u: goto label_40a778;
        case 0x40a77cu: goto label_40a77c;
        case 0x40a780u: goto label_40a780;
        case 0x40a784u: goto label_40a784;
        case 0x40a788u: goto label_40a788;
        case 0x40a78cu: goto label_40a78c;
        case 0x40a790u: goto label_40a790;
        case 0x40a794u: goto label_40a794;
        case 0x40a798u: goto label_40a798;
        case 0x40a79cu: goto label_40a79c;
        case 0x40a7a0u: goto label_40a7a0;
        case 0x40a7a4u: goto label_40a7a4;
        case 0x40a7a8u: goto label_40a7a8;
        case 0x40a7acu: goto label_40a7ac;
        case 0x40a7b0u: goto label_40a7b0;
        case 0x40a7b4u: goto label_40a7b4;
        case 0x40a7b8u: goto label_40a7b8;
        case 0x40a7bcu: goto label_40a7bc;
        case 0x40a7c0u: goto label_40a7c0;
        case 0x40a7c4u: goto label_40a7c4;
        case 0x40a7c8u: goto label_40a7c8;
        case 0x40a7ccu: goto label_40a7cc;
        case 0x40a7d0u: goto label_40a7d0;
        case 0x40a7d4u: goto label_40a7d4;
        case 0x40a7d8u: goto label_40a7d8;
        case 0x40a7dcu: goto label_40a7dc;
        case 0x40a7e0u: goto label_40a7e0;
        case 0x40a7e4u: goto label_40a7e4;
        case 0x40a7e8u: goto label_40a7e8;
        case 0x40a7ecu: goto label_40a7ec;
        case 0x40a7f0u: goto label_40a7f0;
        case 0x40a7f4u: goto label_40a7f4;
        case 0x40a7f8u: goto label_40a7f8;
        case 0x40a7fcu: goto label_40a7fc;
        case 0x40a800u: goto label_40a800;
        case 0x40a804u: goto label_40a804;
        case 0x40a808u: goto label_40a808;
        case 0x40a80cu: goto label_40a80c;
        case 0x40a810u: goto label_40a810;
        case 0x40a814u: goto label_40a814;
        case 0x40a818u: goto label_40a818;
        case 0x40a81cu: goto label_40a81c;
        case 0x40a820u: goto label_40a820;
        case 0x40a824u: goto label_40a824;
        case 0x40a828u: goto label_40a828;
        case 0x40a82cu: goto label_40a82c;
        case 0x40a830u: goto label_40a830;
        case 0x40a834u: goto label_40a834;
        case 0x40a838u: goto label_40a838;
        case 0x40a83cu: goto label_40a83c;
        case 0x40a840u: goto label_40a840;
        case 0x40a844u: goto label_40a844;
        case 0x40a848u: goto label_40a848;
        case 0x40a84cu: goto label_40a84c;
        case 0x40a850u: goto label_40a850;
        case 0x40a854u: goto label_40a854;
        case 0x40a858u: goto label_40a858;
        case 0x40a85cu: goto label_40a85c;
        default: break;
    }

    ctx->pc = 0x409da0u;

label_409da0:
    // 0x409da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_409da4:
    // 0x409da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x409da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_409da8:
    // 0x409da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x409da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_409dac:
    // 0x409dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_409db0:
    // 0x409db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x409db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409db4:
    // 0x409db4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x409db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_409db8:
    // 0x409db8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x409db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409dbc:
    // 0x409dbc: 0x805000d9  lb          $s0, 0xD9($v0)
    ctx->pc = 0x409dbcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 217)));
label_409dc0:
    // 0x409dc0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x409dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_409dc4:
    // 0x409dc4: 0x320f809  jalr        $t9
label_409dc8:
    if (ctx->pc == 0x409DC8u) {
        ctx->pc = 0x409DC8u;
            // 0x409dc8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409DCCu;
        goto label_409dcc;
    }
    ctx->pc = 0x409DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409DCCu);
        ctx->pc = 0x409DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409DC4u;
            // 0x409dc8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409DCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409DCCu; }
            if (ctx->pc != 0x409DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x409DCCu;
label_409dcc:
    // 0x409dcc: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x409dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_409dd0:
    // 0x409dd0: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_409dd4:
    if (ctx->pc == 0x409DD4u) {
        ctx->pc = 0x409DD4u;
            // 0x409dd4: 0x10863c  dsll32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
        ctx->pc = 0x409DD8u;
        goto label_409dd8;
    }
    ctx->pc = 0x409DD0u;
    {
        const bool branch_taken_0x409dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x409dd0) {
            ctx->pc = 0x409DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409DD0u;
            // 0x409dd4: 0x10863c  dsll32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409DF8u;
            goto label_409df8;
        }
    }
    ctx->pc = 0x409DD8u;
label_409dd8:
    // 0x409dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x409dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409ddc:
    // 0x409ddc: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x409ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_409de0:
    // 0x409de0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x409de0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_409de4:
    // 0x409de4: 0x3c05a500  lui         $a1, 0xA500
    ctx->pc = 0x409de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42240 << 16));
label_409de8:
    // 0x409de8: 0xc07293e  jal         func_1CA4F8
label_409dec:
    if (ctx->pc == 0x409DECu) {
        ctx->pc = 0x409DECu;
            // 0x409dec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409DF0u;
        goto label_409df0;
    }
    ctx->pc = 0x409DE8u;
    SET_GPR_U32(ctx, 31, 0x409DF0u);
    ctx->pc = 0x409DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409DE8u;
            // 0x409dec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409DF0u; }
        if (ctx->pc != 0x409DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409DF0u; }
        if (ctx->pc != 0x409DF0u) { return; }
    }
    ctx->pc = 0x409DF0u;
label_409df0:
    // 0x409df0: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x409df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_409df4:
    // 0x409df4: 0x10863c  dsll32      $s0, $s0, 24
    ctx->pc = 0x409df4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
label_409df8:
    // 0x409df8: 0x3c05a600  lui         $a1, 0xA600
    ctx->pc = 0x409df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42496 << 16));
label_409dfc:
    // 0x409dfc: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x409dfcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_409e00:
    // 0x409e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x409e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e04:
    // 0x409e04: 0xc07293e  jal         func_1CA4F8
label_409e08:
    if (ctx->pc == 0x409E08u) {
        ctx->pc = 0x409E08u;
            // 0x409e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409E0Cu;
        goto label_409e0c;
    }
    ctx->pc = 0x409E04u;
    SET_GPR_U32(ctx, 31, 0x409E0Cu);
    ctx->pc = 0x409E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409E04u;
            // 0x409e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409E0Cu; }
        if (ctx->pc != 0x409E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409E0Cu; }
        if (ctx->pc != 0x409E0Cu) { return; }
    }
    ctx->pc = 0x409E0Cu;
label_409e0c:
    // 0x409e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409e10:
    // 0x409e10: 0x3c05a510  lui         $a1, 0xA510
    ctx->pc = 0x409e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42256 << 16));
label_409e14:
    // 0x409e14: 0xc07293e  jal         func_1CA4F8
label_409e18:
    if (ctx->pc == 0x409E18u) {
        ctx->pc = 0x409E18u;
            // 0x409e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409E1Cu;
        goto label_409e1c;
    }
    ctx->pc = 0x409E14u;
    SET_GPR_U32(ctx, 31, 0x409E1Cu);
    ctx->pc = 0x409E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409E14u;
            // 0x409e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409E1Cu; }
        if (ctx->pc != 0x409E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409E1Cu; }
        if (ctx->pc != 0x409E1Cu) { return; }
    }
    ctx->pc = 0x409E1Cu;
label_409e1c:
    // 0x409e1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x409e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_409e20:
    // 0x409e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409e24:
    // 0x409e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_409e28:
    // 0x409e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409e2c:
    // 0x409e2c: 0x3e00008  jr          $ra
label_409e30:
    if (ctx->pc == 0x409E30u) {
        ctx->pc = 0x409E30u;
            // 0x409e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x409E34u;
        goto label_409e34;
    }
    ctx->pc = 0x409E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409E2Cu;
            // 0x409e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409E34u;
label_409e34:
    // 0x409e34: 0x0  nop
    ctx->pc = 0x409e34u;
    // NOP
label_409e38:
    // 0x409e38: 0x0  nop
    ctx->pc = 0x409e38u;
    // NOP
label_409e3c:
    // 0x409e3c: 0x0  nop
    ctx->pc = 0x409e3cu;
    // NOP
label_409e40:
    // 0x409e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x409e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_409e44:
    // 0x409e44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x409e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_409e48:
    // 0x409e48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x409e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_409e4c:
    // 0x409e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x409e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e50:
    // 0x409e50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x409e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_409e54:
    // 0x409e54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x409e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_409e58:
    // 0x409e58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x409e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409e5c:
    // 0x409e5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_409e60:
    // 0x409e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x409e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_409e64:
    // 0x409e64: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x409e64u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_409e68:
    // 0x409e68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x409e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_409e6c:
    // 0x409e6c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x409e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_409e70:
    // 0x409e70: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x409e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_409e74:
    // 0x409e74: 0x8c9200c8  lw          $s2, 0xC8($a0)
    ctx->pc = 0x409e74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_409e78:
    // 0x409e78: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x409e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_409e7c:
    // 0x409e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x409e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_409e80:
    // 0x409e80: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x409e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_409e84:
    // 0x409e84: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x409e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_409e88:
    // 0x409e88: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x409e88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_409e8c:
    // 0x409e8c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x409e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_409e90:
    // 0x409e90: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x409e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_409e94:
    // 0x409e94: 0x0  nop
    ctx->pc = 0x409e94u;
    // NOP
label_409e98:
    // 0x409e98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x409e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_409e9c:
    // 0x409e9c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x409e9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_409ea0:
    // 0x409ea0: 0x0  nop
    ctx->pc = 0x409ea0u;
    // NOP
label_409ea4:
    // 0x409ea4: 0x0  nop
    ctx->pc = 0x409ea4u;
    // NOP
label_409ea8:
    // 0x409ea8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_409eac:
    if (ctx->pc == 0x409EACu) {
        ctx->pc = 0x409EB0u;
        goto label_409eb0;
    }
    ctx->pc = 0x409EA8u;
    {
        const bool branch_taken_0x409ea8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x409ea8) {
            ctx->pc = 0x409EC0u;
            goto label_409ec0;
        }
    }
    ctx->pc = 0x409EB0u;
label_409eb0:
    // 0x409eb0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x409eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_409eb4:
    // 0x409eb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_409eb8:
    if (ctx->pc == 0x409EB8u) {
        ctx->pc = 0x409EBCu;
        goto label_409ebc;
    }
    ctx->pc = 0x409EB4u;
    {
        const bool branch_taken_0x409eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x409eb4) {
            ctx->pc = 0x409EC0u;
            goto label_409ec0;
        }
    }
    ctx->pc = 0x409EBCu;
label_409ebc:
    // 0x409ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_409ec0:
    // 0x409ec0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_409ec4:
    if (ctx->pc == 0x409EC4u) {
        ctx->pc = 0x409EC8u;
        goto label_409ec8;
    }
    ctx->pc = 0x409EC0u;
    {
        const bool branch_taken_0x409ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x409ec0) {
            ctx->pc = 0x409EDCu;
            goto label_409edc;
        }
    }
    ctx->pc = 0x409EC8u;
label_409ec8:
    // 0x409ec8: 0xc075eb4  jal         func_1D7AD0
label_409ecc:
    if (ctx->pc == 0x409ECCu) {
        ctx->pc = 0x409ECCu;
            // 0x409ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409ED0u;
        goto label_409ed0;
    }
    ctx->pc = 0x409EC8u;
    SET_GPR_U32(ctx, 31, 0x409ED0u);
    ctx->pc = 0x409ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409EC8u;
            // 0x409ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409ED0u; }
        if (ctx->pc != 0x409ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409ED0u; }
        if (ctx->pc != 0x409ED0u) { return; }
    }
    ctx->pc = 0x409ED0u;
label_409ed0:
    // 0x409ed0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_409ed4:
    if (ctx->pc == 0x409ED4u) {
        ctx->pc = 0x409ED8u;
        goto label_409ed8;
    }
    ctx->pc = 0x409ED0u;
    {
        const bool branch_taken_0x409ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409ed0) {
            ctx->pc = 0x409EDCu;
            goto label_409edc;
        }
    }
    ctx->pc = 0x409ED8u;
label_409ed8:
    // 0x409ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x409ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409edc:
    // 0x409edc: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_409ee0:
    if (ctx->pc == 0x409EE0u) {
        ctx->pc = 0x409EE0u;
            // 0x409ee0: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->pc = 0x409EE4u;
        goto label_409ee4;
    }
    ctx->pc = 0x409EDCu;
    {
        const bool branch_taken_0x409edc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x409edc) {
            ctx->pc = 0x409EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409EDCu;
            // 0x409ee0: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409EF8u;
            goto label_409ef8;
        }
    }
    ctx->pc = 0x409EE4u;
label_409ee4:
    // 0x409ee4: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x409ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_409ee8:
    // 0x409ee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x409ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_409eec:
    // 0x409eec: 0x54830074  bnel        $a0, $v1, . + 4 + (0x74 << 2)
label_409ef0:
    if (ctx->pc == 0x409EF0u) {
        ctx->pc = 0x409EF0u;
            // 0x409ef0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x409EF4u;
        goto label_409ef4;
    }
    ctx->pc = 0x409EECu;
    {
        const bool branch_taken_0x409eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x409eec) {
            ctx->pc = 0x409EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409EECu;
            // 0x409ef0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A0C0u;
            goto label_40a0c0;
        }
    }
    ctx->pc = 0x409EF4u;
label_409ef4:
    // 0x409ef4: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x409ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_409ef8:
    // 0x409ef8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x409ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_409efc:
    // 0x409efc: 0x1c60006f  bgtz        $v1, . + 4 + (0x6F << 2)
label_409f00:
    if (ctx->pc == 0x409F00u) {
        ctx->pc = 0x409F04u;
        goto label_409f04;
    }
    ctx->pc = 0x409EFCu;
    {
        const bool branch_taken_0x409efc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x409efc) {
            ctx->pc = 0x40A0BCu;
            goto label_40a0bc;
        }
    }
    ctx->pc = 0x409F04u;
label_409f04:
    // 0x409f04: 0x3c03becc  lui         $v1, 0xBECC
    ctx->pc = 0x409f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48844 << 16));
label_409f08:
    // 0x409f08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x409f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_409f0c:
    // 0x409f0c: 0xc6410dc4  lwc1        $f1, 0xDC4($s2)
    ctx->pc = 0x409f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_409f10:
    // 0x409f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x409f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_409f14:
    // 0x409f14: 0x0  nop
    ctx->pc = 0x409f14u;
    // NOP
label_409f18:
    // 0x409f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x409f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_409f1c:
    // 0x409f1c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_409f20:
    if (ctx->pc == 0x409F20u) {
        ctx->pc = 0x409F20u;
            // 0x409f20: 0x8e440d98  lw          $a0, 0xD98($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
        ctx->pc = 0x409F24u;
        goto label_409f24;
    }
    ctx->pc = 0x409F1Cu;
    {
        const bool branch_taken_0x409f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x409f1c) {
            ctx->pc = 0x409F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409F1Cu;
            // 0x409f20: 0x8e440d98  lw          $a0, 0xD98($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409F44u;
            goto label_409f44;
        }
    }
    ctx->pc = 0x409F24u;
label_409f24:
    // 0x409f24: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x409f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_409f28:
    // 0x409f28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x409f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_409f2c:
    // 0x409f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x409f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_409f30:
    // 0x409f30: 0x0  nop
    ctx->pc = 0x409f30u;
    // NOP
label_409f34:
    // 0x409f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x409f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_409f38:
    // 0x409f38: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_409f3c:
    if (ctx->pc == 0x409F3Cu) {
        ctx->pc = 0x409F3Cu;
            // 0x409f3c: 0x3c033f66  lui         $v1, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x409F40u;
        goto label_409f40;
    }
    ctx->pc = 0x409F38u;
    {
        const bool branch_taken_0x409f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x409f38) {
            ctx->pc = 0x409F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409F38u;
            // 0x409f3c: 0x3c033f66  lui         $v1, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409FE0u;
            goto label_409fe0;
        }
    }
    ctx->pc = 0x409F40u;
label_409f40:
    // 0x409f40: 0x8e440d98  lw          $a0, 0xD98($s2)
    ctx->pc = 0x409f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_409f44:
    // 0x409f44: 0xc0c311c  jal         func_30C470
label_409f48:
    if (ctx->pc == 0x409F48u) {
        ctx->pc = 0x409F4Cu;
        goto label_409f4c;
    }
    ctx->pc = 0x409F44u;
    SET_GPR_U32(ctx, 31, 0x409F4Cu);
    ctx->pc = 0x30C470u;
    if (runtime->hasFunction(0x30C470u)) {
        auto targetFn = runtime->lookupFunction(0x30C470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F4Cu; }
        if (ctx->pc != 0x409F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C470_0x30c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F4Cu; }
        if (ctx->pc != 0x409F4Cu) { return; }
    }
    ctx->pc = 0x409F4Cu;
label_409f4c:
    // 0x409f4c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_409f50:
    if (ctx->pc == 0x409F50u) {
        ctx->pc = 0x409F54u;
        goto label_409f54;
    }
    ctx->pc = 0x409F4Cu;
    {
        const bool branch_taken_0x409f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409f4c) {
            ctx->pc = 0x409FDCu;
            goto label_409fdc;
        }
    }
    ctx->pc = 0x409F54u;
label_409f54:
    // 0x409f54: 0xc040180  jal         func_100600
label_409f58:
    if (ctx->pc == 0x409F58u) {
        ctx->pc = 0x409F58u;
            // 0x409f58: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x409F5Cu;
        goto label_409f5c;
    }
    ctx->pc = 0x409F54u;
    SET_GPR_U32(ctx, 31, 0x409F5Cu);
    ctx->pc = 0x409F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409F54u;
            // 0x409f58: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F5Cu; }
        if (ctx->pc != 0x409F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F5Cu; }
        if (ctx->pc != 0x409F5Cu) { return; }
    }
    ctx->pc = 0x409F5Cu;
label_409f5c:
    // 0x409f5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_409f60:
    if (ctx->pc == 0x409F60u) {
        ctx->pc = 0x409F60u;
            // 0x409f60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409F64u;
        goto label_409f64;
    }
    ctx->pc = 0x409F5Cu;
    {
        const bool branch_taken_0x409f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409F5Cu;
            // 0x409f60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409f5c) {
            ctx->pc = 0x409FDCu;
            goto label_409fdc;
        }
    }
    ctx->pc = 0x409F64u;
label_409f64:
    // 0x409f64: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x409f64u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_409f68:
    // 0x409f68: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x409f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_409f6c:
    // 0x409f6c: 0x8e4a0d98  lw          $t2, 0xD98($s2)
    ctx->pc = 0x409f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_409f70:
    // 0x409f70: 0x26070278  addiu       $a3, $s0, 0x278
    ctx->pc = 0x409f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_409f74:
    // 0x409f74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x409f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_409f78:
    // 0x409f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_409f7c:
    // 0x409f7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x409f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_409f80:
    // 0x409f80: 0x3445aa48  ori         $a1, $v0, 0xAA48
    ctx->pc = 0x409f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43592);
label_409f84:
    // 0x409f84: 0x24084b80  addiu       $t0, $zero, 0x4B80
    ctx->pc = 0x409f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19328));
label_409f88:
    // 0x409f88: 0xc0b9404  jal         func_2E5010
label_409f8c:
    if (ctx->pc == 0x409F8Cu) {
        ctx->pc = 0x409F8Cu;
            // 0x409f8c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x409F90u;
        goto label_409f90;
    }
    ctx->pc = 0x409F88u;
    SET_GPR_U32(ctx, 31, 0x409F90u);
    ctx->pc = 0x409F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409F88u;
            // 0x409f8c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F90u; }
        if (ctx->pc != 0x409F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409F90u; }
        if (ctx->pc != 0x409F90u) { return; }
    }
    ctx->pc = 0x409F90u;
label_409f90:
    // 0x409f90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x409f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_409f94:
    // 0x409f94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x409f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_409f98:
    // 0x409f98: 0x24634130  addiu       $v1, $v1, 0x4130
    ctx->pc = 0x409f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16688));
label_409f9c:
    // 0x409f9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x409f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_409fa0:
    // 0x409fa0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x409fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_409fa4:
    // 0x409fa4: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x409fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_409fa8:
    // 0x409fa8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x409fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_409fac:
    // 0x409fac: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x409facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_409fb0:
    // 0x409fb0: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x409fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_409fb4:
    // 0x409fb4: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x409fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_409fb8:
    // 0x409fb8: 0xae2500dc  sw          $a1, 0xDC($s1)
    ctx->pc = 0x409fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 5));
label_409fbc:
    // 0x409fbc: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x409fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_409fc0:
    // 0x409fc0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x409fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_409fc4:
    // 0x409fc4: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x409fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_409fc8:
    // 0x409fc8: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_409fcc:
    if (ctx->pc == 0x409FCCu) {
        ctx->pc = 0x409FCCu;
            // 0x409fcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x409FD0u;
        goto label_409fd0;
    }
    ctx->pc = 0x409FC8u;
    {
        const bool branch_taken_0x409fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x409fc8) {
            ctx->pc = 0x409FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409FC8u;
            // 0x409fcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409FD8u;
            goto label_409fd8;
        }
    }
    ctx->pc = 0x409FD0u;
label_409fd0:
    // 0x409fd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_409fd4:
    if (ctx->pc == 0x409FD4u) {
        ctx->pc = 0x409FD8u;
        goto label_409fd8;
    }
    ctx->pc = 0x409FD0u;
    {
        const bool branch_taken_0x409fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x409fd0) {
            ctx->pc = 0x409FDCu;
            goto label_409fdc;
        }
    }
    ctx->pc = 0x409FD8u;
label_409fd8:
    // 0x409fd8: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x409fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
label_409fdc:
    // 0x409fdc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x409fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_409fe0:
    // 0x409fe0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x409fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_409fe4:
    // 0x409fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x409fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_409fe8:
    // 0x409fe8: 0x0  nop
    ctx->pc = 0x409fe8u;
    // NOP
label_409fec:
    // 0x409fec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x409fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_409ff0:
    // 0x409ff0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_409ff4:
    if (ctx->pc == 0x409FF4u) {
        ctx->pc = 0x409FF4u;
            // 0x409ff4: 0xc6410dc4  lwc1        $f1, 0xDC4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x409FF8u;
        goto label_409ff8;
    }
    ctx->pc = 0x409FF0u;
    {
        const bool branch_taken_0x409ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x409ff0) {
            ctx->pc = 0x409FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409FF0u;
            // 0x409ff4: 0xc6410dc4  lwc1        $f1, 0xDC4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A018u;
            goto label_40a018;
        }
    }
    ctx->pc = 0x409FF8u;
label_409ff8:
    // 0x409ff8: 0x3c03bf66  lui         $v1, 0xBF66
    ctx->pc = 0x409ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48998 << 16));
label_409ffc:
    // 0x409ffc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x409ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_40a000:
    // 0x40a000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a004:
    // 0x40a004: 0x0  nop
    ctx->pc = 0x40a004u;
    // NOP
label_40a008:
    // 0x40a008: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x40a008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a00c:
    // 0x40a00c: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_40a010:
    if (ctx->pc == 0x40A010u) {
        ctx->pc = 0x40A010u;
            // 0x40a010: 0xa2600064  sb          $zero, 0x64($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x40A014u;
        goto label_40a014;
    }
    ctx->pc = 0x40A00Cu;
    {
        const bool branch_taken_0x40a00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a00c) {
            ctx->pc = 0x40A010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A00Cu;
            // 0x40a010: 0xa2600064  sb          $zero, 0x64($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A0BCu;
            goto label_40a0bc;
        }
    }
    ctx->pc = 0x40A014u;
label_40a014:
    // 0x40a014: 0xc6410dc4  lwc1        $f1, 0xDC4($s2)
    ctx->pc = 0x40a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40a018:
    // 0x40a018: 0x3c03be80  lui         $v1, 0xBE80
    ctx->pc = 0x40a018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48768 << 16));
label_40a01c:
    // 0x40a01c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a01cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a020:
    // 0x40a020: 0x0  nop
    ctx->pc = 0x40a020u;
    // NOP
label_40a024:
    // 0x40a024: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40a024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a028:
    // 0x40a028: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_40a02c:
    if (ctx->pc == 0x40A02Cu) {
        ctx->pc = 0x40A02Cu;
            // 0x40a02c: 0x92630064  lbu         $v1, 0x64($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x40A030u;
        goto label_40a030;
    }
    ctx->pc = 0x40A028u;
    {
        const bool branch_taken_0x40a028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a028) {
            ctx->pc = 0x40A02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A028u;
            // 0x40a02c: 0x92630064  lbu         $v1, 0x64($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A04Cu;
            goto label_40a04c;
        }
    }
    ctx->pc = 0x40A030u;
label_40a030:
    // 0x40a030: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x40a030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_40a034:
    // 0x40a034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a038:
    // 0x40a038: 0x0  nop
    ctx->pc = 0x40a038u;
    // NOP
label_40a03c:
    // 0x40a03c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40a03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a040:
    // 0x40a040: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_40a044:
    if (ctx->pc == 0x40A044u) {
        ctx->pc = 0x40A048u;
        goto label_40a048;
    }
    ctx->pc = 0x40A040u;
    {
        const bool branch_taken_0x40a040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a040) {
            ctx->pc = 0x40A0BCu;
            goto label_40a0bc;
        }
    }
    ctx->pc = 0x40A048u;
label_40a048:
    // 0x40a048: 0x92630064  lbu         $v1, 0x64($s3)
    ctx->pc = 0x40a048u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
label_40a04c:
    // 0x40a04c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_40a050:
    if (ctx->pc == 0x40A050u) {
        ctx->pc = 0x40A054u;
        goto label_40a054;
    }
    ctx->pc = 0x40A04Cu;
    {
        const bool branch_taken_0x40a04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a04c) {
            ctx->pc = 0x40A0BCu;
            goto label_40a0bc;
        }
    }
    ctx->pc = 0x40A054u;
label_40a054:
    // 0x40a054: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40a054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40a058:
    // 0x40a058: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x40a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_40a05c:
    // 0x40a05c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x40a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_40a060:
    // 0x40a060: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x40a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_40a064:
    // 0x40a064: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_40a068:
    if (ctx->pc == 0x40A068u) {
        ctx->pc = 0x40A068u;
            // 0x40a068: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x40A06Cu;
        goto label_40a06c;
    }
    ctx->pc = 0x40A064u;
    {
        const bool branch_taken_0x40a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x40a064) {
            ctx->pc = 0x40A068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A064u;
            // 0x40a068: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A0A0u;
            goto label_40a0a0;
        }
    }
    ctx->pc = 0x40A06Cu;
label_40a06c:
    // 0x40a06c: 0x8e420da4  lw          $v0, 0xDA4($s2)
    ctx->pc = 0x40a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3492)));
label_40a070:
    // 0x40a070: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x40a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_40a074:
    // 0x40a074: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_40a078:
    if (ctx->pc == 0x40A078u) {
        ctx->pc = 0x40A07Cu;
        goto label_40a07c;
    }
    ctx->pc = 0x40A074u;
    {
        const bool branch_taken_0x40a074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40a074) {
            ctx->pc = 0x40A09Cu;
            goto label_40a09c;
        }
    }
    ctx->pc = 0x40A07Cu;
label_40a07c:
    // 0x40a07c: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x40a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_40a080:
    // 0x40a080: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x40a080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_40a084:
    // 0x40a084: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x40a084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_40a088:
    // 0x40a088: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x40a088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_40a08c:
    // 0x40a08c: 0x320f809  jalr        $t9
label_40a090:
    if (ctx->pc == 0x40A090u) {
        ctx->pc = 0x40A090u;
            // 0x40a090: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->pc = 0x40A094u;
        goto label_40a094;
    }
    ctx->pc = 0x40A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40A094u);
        ctx->pc = 0x40A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A08Cu;
            // 0x40a090: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40A094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40A094u; }
            if (ctx->pc != 0x40A094u) { return; }
        }
        }
    }
    ctx->pc = 0x40A094u;
label_40a094:
    // 0x40a094: 0x10000008  b           . + 4 + (0x8 << 2)
label_40a098:
    if (ctx->pc == 0x40A098u) {
        ctx->pc = 0x40A098u;
            // 0x40a098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A09Cu;
        goto label_40a09c;
    }
    ctx->pc = 0x40A094u;
    {
        const bool branch_taken_0x40a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A094u;
            // 0x40a098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a094) {
            ctx->pc = 0x40A0B8u;
            goto label_40a0b8;
        }
    }
    ctx->pc = 0x40A09Cu;
label_40a09c:
    // 0x40a09c: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x40a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_40a0a0:
    // 0x40a0a0: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x40a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
label_40a0a4:
    // 0x40a0a4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x40a0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_40a0a8:
    // 0x40a0a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x40a0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_40a0ac:
    // 0x40a0ac: 0x320f809  jalr        $t9
label_40a0b0:
    if (ctx->pc == 0x40A0B0u) {
        ctx->pc = 0x40A0B0u;
            // 0x40a0b0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x40A0B4u;
        goto label_40a0b4;
    }
    ctx->pc = 0x40A0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40A0B4u);
        ctx->pc = 0x40A0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A0ACu;
            // 0x40a0b0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40A0B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40A0B4u; }
            if (ctx->pc != 0x40A0B4u) { return; }
        }
        }
    }
    ctx->pc = 0x40A0B4u;
label_40a0b4:
    // 0x40a0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a0b8:
    // 0x40a0b8: 0xa2630064  sb          $v1, 0x64($s3)
    ctx->pc = 0x40a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 3));
label_40a0bc:
    // 0x40a0bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40a0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40a0c0:
    // 0x40a0c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40a0c4:
    // 0x40a0c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40a0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40a0c8:
    // 0x40a0c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40a0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40a0cc:
    // 0x40a0cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40a0d0:
    // 0x40a0d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40a0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40a0d4:
    // 0x40a0d4: 0x3e00008  jr          $ra
label_40a0d8:
    if (ctx->pc == 0x40A0D8u) {
        ctx->pc = 0x40A0D8u;
            // 0x40a0d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40A0DCu;
        goto label_40a0dc;
    }
    ctx->pc = 0x40A0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A0D4u;
            // 0x40a0d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40A0DCu;
label_40a0dc:
    // 0x40a0dc: 0x0  nop
    ctx->pc = 0x40a0dcu;
    // NOP
label_40a0e0:
    // 0x40a0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40a0e4:
    // 0x40a0e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40a0e8:
    // 0x40a0e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40a0ec:
    // 0x40a0ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40a0f0:
    // 0x40a0f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40a0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40a0f4:
    // 0x40a0f4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x40a0f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40a0f8:
    // 0x40a0f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40a0f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40a0fc:
    // 0x40a0fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40a100:
    // 0x40a100: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x40a100u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_40a104:
    // 0x40a104: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x40a104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_40a108:
    // 0x40a108: 0xc0754b4  jal         func_1D52D0
label_40a10c:
    if (ctx->pc == 0x40A10Cu) {
        ctx->pc = 0x40A10Cu;
            // 0x40a10c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x40A110u;
        goto label_40a110;
    }
    ctx->pc = 0x40A108u;
    SET_GPR_U32(ctx, 31, 0x40A110u);
    ctx->pc = 0x40A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A108u;
            // 0x40a10c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A110u; }
        if (ctx->pc != 0x40A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A110u; }
        if (ctx->pc != 0x40A110u) { return; }
    }
    ctx->pc = 0x40A110u;
label_40a110:
    // 0x40a110: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40a110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40a114:
    // 0x40a114: 0x8e050d60  lw          $a1, 0xD60($s0)
    ctx->pc = 0x40a114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_40a118:
    // 0x40a118: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x40a118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40a11c:
    // 0x40a11c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x40a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_40a120:
    // 0x40a120: 0xc6010dbc  lwc1        $f1, 0xDBC($s0)
    ctx->pc = 0x40a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40a124:
    // 0x40a124: 0x80a50004  lb          $a1, 0x4($a1)
    ctx->pc = 0x40a124u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_40a128:
    // 0x40a128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40a128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a12c:
    // 0x40a12c: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x40a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40a130:
    // 0x40a130: 0x3c033f1a  lui         $v1, 0x3F1A
    ctx->pc = 0x40a130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16154 << 16));
label_40a134:
    // 0x40a134: 0x346312f7  ori         $v1, $v1, 0x12F7
    ctx->pc = 0x40a134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4855);
label_40a138:
    // 0x40a138: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a13c:
    // 0x40a13c: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x40a13cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_40a140:
    // 0x40a140: 0x51823  negu        $v1, $a1
    ctx->pc = 0x40a140u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_40a144:
    // 0x40a144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40a144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40a148:
    // 0x40a148: 0x0  nop
    ctx->pc = 0x40a148u;
    // NOP
label_40a14c:
    // 0x40a14c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40a14cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40a150:
    // 0x40a150: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40a150u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40a154:
    // 0x40a154: 0x0  nop
    ctx->pc = 0x40a154u;
    // NOP
label_40a158:
    // 0x40a158: 0xc6040de4  lwc1        $f4, 0xDE4($s0)
    ctx->pc = 0x40a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40a15c:
    // 0x40a15c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x40a15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a160:
    // 0x40a160: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_40a164:
    if (ctx->pc == 0x40A164u) {
        ctx->pc = 0x40A164u;
            // 0x40a164: 0x3c033f40  lui         $v1, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
        ctx->pc = 0x40A168u;
        goto label_40a168;
    }
    ctx->pc = 0x40A160u;
    {
        const bool branch_taken_0x40a160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a160) {
            ctx->pc = 0x40A164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A160u;
            // 0x40a164: 0x3c033f40  lui         $v1, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A178u;
            goto label_40a178;
        }
    }
    ctx->pc = 0x40A168u;
label_40a168:
    // 0x40a168: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40a168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40a16c:
    // 0x40a16c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x40a16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40a170:
    // 0x40a170: 0x10000013  b           . + 4 + (0x13 << 2)
label_40a174:
    if (ctx->pc == 0x40A174u) {
        ctx->pc = 0x40A174u;
            // 0x40a174: 0x3c033f33  lui         $v1, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
        ctx->pc = 0x40A178u;
        goto label_40a178;
    }
    ctx->pc = 0x40A170u;
    {
        const bool branch_taken_0x40a170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A170u;
            // 0x40a174: 0x3c033f33  lui         $v1, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a170) {
            ctx->pc = 0x40A1C0u;
            goto label_40a1c0;
        }
    }
    ctx->pc = 0x40A178u;
label_40a178:
    // 0x40a178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a17c:
    // 0x40a17c: 0x0  nop
    ctx->pc = 0x40a17cu;
    // NOP
label_40a180:
    // 0x40a180: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x40a180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a184:
    // 0x40a184: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_40a188:
    if (ctx->pc == 0x40A188u) {
        ctx->pc = 0x40A188u;
            // 0x40a188: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->pc = 0x40A18Cu;
        goto label_40a18c;
    }
    ctx->pc = 0x40A184u;
    {
        const bool branch_taken_0x40a184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a184) {
            ctx->pc = 0x40A188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A184u;
            // 0x40a188: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A198u;
            goto label_40a198;
        }
    }
    ctx->pc = 0x40A18Cu;
label_40a18c:
    // 0x40a18c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x40a18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40a190:
    // 0x40a190: 0x1000000a  b           . + 4 + (0xA << 2)
label_40a194:
    if (ctx->pc == 0x40A194u) {
        ctx->pc = 0x40A198u;
        goto label_40a198;
    }
    ctx->pc = 0x40A190u;
    {
        const bool branch_taken_0x40a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a190) {
            ctx->pc = 0x40A1BCu;
            goto label_40a1bc;
        }
    }
    ctx->pc = 0x40A198u;
label_40a198:
    // 0x40a198: 0x3c033e17  lui         $v1, 0x3E17
    ctx->pc = 0x40a198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15895 << 16));
label_40a19c:
    // 0x40a19c: 0x3464b424  ori         $a0, $v1, 0xB424
    ctx->pc = 0x40a19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46116);
label_40a1a0:
    // 0x40a1a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40a1a4:
    // 0x40a1a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40a1a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a1a8:
    // 0x40a1a8: 0x0  nop
    ctx->pc = 0x40a1a8u;
    // NOP
label_40a1ac:
    // 0x40a1ac: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x40a1acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_40a1b0:
    // 0x40a1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a1b4:
    // 0x40a1b4: 0x0  nop
    ctx->pc = 0x40a1b4u;
    // NOP
label_40a1b8:
    // 0x40a1b8: 0x46030501  sub.s       $f20, $f0, $f3
    ctx->pc = 0x40a1b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_40a1bc:
    // 0x40a1bc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x40a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_40a1c0:
    // 0x40a1c0: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x40a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_40a1c4:
    // 0x40a1c4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x40a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_40a1c8:
    // 0x40a1c8: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x40a1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_40a1cc:
    // 0x40a1cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a1d0:
    // 0x40a1d0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a1d4:
    // 0x40a1d4: 0x0  nop
    ctx->pc = 0x40a1d4u;
    // NOP
label_40a1d8:
    // 0x40a1d8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x40a1d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_40a1dc:
    // 0x40a1dc: 0xc6000dc0  lwc1        $f0, 0xDC0($s0)
    ctx->pc = 0x40a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a1e0:
    // 0x40a1e0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x40a1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a1e4:
    // 0x40a1e4: 0x0  nop
    ctx->pc = 0x40a1e4u;
    // NOP
label_40a1e8:
    // 0x40a1e8: 0x461421dc  madd.s      $f7, $f4, $f20
    ctx->pc = 0x40a1e8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[20]));
label_40a1ec:
    // 0x40a1ec: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x40a1ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a1f0:
    // 0x40a1f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40a1f4:
    if (ctx->pc == 0x40A1F4u) {
        ctx->pc = 0x40A1F4u;
            // 0x40a1f4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x40A1F8u;
        goto label_40a1f8;
    }
    ctx->pc = 0x40A1F0u;
    {
        const bool branch_taken_0x40a1f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A1F0u;
            // 0x40a1f4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a1f0) {
            ctx->pc = 0x40A200u;
            goto label_40a200;
        }
    }
    ctx->pc = 0x40A1F8u;
label_40a1f8:
    // 0x40a1f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_40a1fc:
    if (ctx->pc == 0x40A1FCu) {
        ctx->pc = 0x40A1FCu;
            // 0x40a1fc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40A200u;
        goto label_40a200;
    }
    ctx->pc = 0x40A1F8u;
    {
        const bool branch_taken_0x40a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A1F8u;
            // 0x40a1fc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a1f8) {
            ctx->pc = 0x40A21Cu;
            goto label_40a21c;
        }
    }
    ctx->pc = 0x40A200u;
label_40a200:
    // 0x40a200: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x40a200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_40a204:
    // 0x40a204: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a208:
    // 0x40a208: 0x0  nop
    ctx->pc = 0x40a208u;
    // NOP
label_40a20c:
    // 0x40a20c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x40a20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a210:
    // 0x40a210: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_40a214:
    if (ctx->pc == 0x40A214u) {
        ctx->pc = 0x40A214u;
            // 0x40a214: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->pc = 0x40A218u;
        goto label_40a218;
    }
    ctx->pc = 0x40A210u;
    {
        const bool branch_taken_0x40a210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a210) {
            ctx->pc = 0x40A214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A210u;
            // 0x40a214: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A220u;
            goto label_40a220;
        }
    }
    ctx->pc = 0x40A218u;
label_40a218:
    // 0x40a218: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x40a218u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_40a21c:
    // 0x40a21c: 0xe6040dd4  swc1        $f4, 0xDD4($s0)
    ctx->pc = 0x40a21cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
label_40a220:
    // 0x40a220: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x40a220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_40a224:
    // 0x40a224: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a228:
    // 0x40a228: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x40a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_40a22c:
    // 0x40a22c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40a230:
    // 0x40a230: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40a230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a234:
    // 0x40a234: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x40a234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_40a238:
    // 0x40a238: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x40a238u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_40a23c:
    // 0x40a23c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_40a240:
    // 0x40a240: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x40a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_40a244:
    // 0x40a244: 0x80630283  lb          $v1, 0x283($v1)
    ctx->pc = 0x40a244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 643)));
label_40a248:
    // 0x40a248: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x40a248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_40a24c:
    // 0x40a24c: 0x0  nop
    ctx->pc = 0x40a24cu;
    // NOP
label_40a250:
    // 0x40a250: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x40a250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_40a254:
    // 0x40a254: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x40a254u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[3];
label_40a258:
    // 0x40a258: 0x0  nop
    ctx->pc = 0x40a258u;
    // NOP
label_40a25c:
    // 0x40a25c: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x40a25cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_40a260:
    // 0x40a260: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x40a260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a264:
    // 0x40a264: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_40a268:
    if (ctx->pc == 0x40A268u) {
        ctx->pc = 0x40A26Cu;
        goto label_40a26c;
    }
    ctx->pc = 0x40A264u;
    {
        const bool branch_taken_0x40a264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a264) {
            ctx->pc = 0x40A278u;
            goto label_40a278;
        }
    }
    ctx->pc = 0x40A26Cu;
label_40a26c:
    // 0x40a26c: 0x460520c1  sub.s       $f3, $f4, $f5
    ctx->pc = 0x40a26cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_40a270:
    // 0x40a270: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x40a270u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_40a274:
    // 0x40a274: 0x46031182  mul.s       $f6, $f2, $f3
    ctx->pc = 0x40a274u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_40a278:
    // 0x40a278: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a27c:
    // 0x40a27c: 0x0  nop
    ctx->pc = 0x40a27cu;
    // NOP
label_40a280:
    // 0x40a280: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x40a280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a284:
    // 0x40a284: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40a288:
    if (ctx->pc == 0x40A288u) {
        ctx->pc = 0x40A288u;
            // 0x40a288: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A28Cu;
        goto label_40a28c;
    }
    ctx->pc = 0x40A284u;
    {
        const bool branch_taken_0x40a284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A284u;
            // 0x40a288: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a284) {
            ctx->pc = 0x40A290u;
            goto label_40a290;
        }
    }
    ctx->pc = 0x40A28Cu;
label_40a28c:
    // 0x40a28c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a28cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a290:
    // 0x40a290: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x40a290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40a294:
    // 0x40a294: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x40a294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_40a298:
    // 0x40a298: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a29c:
    // 0x40a29c: 0x0  nop
    ctx->pc = 0x40a29cu;
    // NOP
label_40a2a0:
    // 0x40a2a0: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x40a2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a2a4:
    // 0x40a2a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40a2a8:
    if (ctx->pc == 0x40A2A8u) {
        ctx->pc = 0x40A2A8u;
            // 0x40a2a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A2ACu;
        goto label_40a2ac;
    }
    ctx->pc = 0x40A2A4u;
    {
        const bool branch_taken_0x40a2a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A2A4u;
            // 0x40a2a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a2a4) {
            ctx->pc = 0x40A2B0u;
            goto label_40a2b0;
        }
    }
    ctx->pc = 0x40A2ACu;
label_40a2ac:
    // 0x40a2ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a2b0:
    // 0x40a2b0: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x40a2b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_40a2b4:
    // 0x40a2b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x40a2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_40a2b8:
    // 0x40a2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a2bc:
    // 0x40a2bc: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x40a2bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_40a2c0:
    // 0x40a2c0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x40a2c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a2c4:
    // 0x40a2c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40a2c8:
    if (ctx->pc == 0x40A2C8u) {
        ctx->pc = 0x40A2C8u;
            // 0x40a2c8: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->pc = 0x40A2CCu;
        goto label_40a2cc;
    }
    ctx->pc = 0x40A2C4u;
    {
        const bool branch_taken_0x40a2c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A2C4u;
            // 0x40a2c8: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a2c4) {
            ctx->pc = 0x40A2D0u;
            goto label_40a2d0;
        }
    }
    ctx->pc = 0x40A2CCu;
label_40a2cc:
    // 0x40a2cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a2ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a2d0:
    // 0x40a2d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40a2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_40a2d4:
    // 0x40a2d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x40a2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_40a2d8:
    // 0x40a2d8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_40a2dc:
    if (ctx->pc == 0x40A2DCu) {
        ctx->pc = 0x40A2E0u;
        goto label_40a2e0;
    }
    ctx->pc = 0x40A2D8u;
    {
        const bool branch_taken_0x40a2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a2d8) {
            ctx->pc = 0x40A358u;
            goto label_40a358;
        }
    }
    ctx->pc = 0x40A2E0u;
label_40a2e0:
    // 0x40a2e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a2e4:
    // 0x40a2e4: 0x0  nop
    ctx->pc = 0x40a2e4u;
    // NOP
label_40a2e8:
    // 0x40a2e8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x40a2e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a2ec:
    // 0x40a2ec: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_40a2f0:
    if (ctx->pc == 0x40A2F0u) {
        ctx->pc = 0x40A2F4u;
        goto label_40a2f4;
    }
    ctx->pc = 0x40A2ECu;
    {
        const bool branch_taken_0x40a2ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a2ec) {
            ctx->pc = 0x40A320u;
            goto label_40a320;
        }
    }
    ctx->pc = 0x40A2F4u;
label_40a2f4:
    // 0x40a2f4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a2f8:
    // 0x40a2f8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x40a2f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_40a2fc:
    // 0x40a2fc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a300:
    // 0x40a300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a304:
    // 0x40a304: 0x0  nop
    ctx->pc = 0x40a304u;
    // NOP
label_40a308:
    // 0x40a308: 0x4606001d  msub.s      $f0, $f0, $f6
    ctx->pc = 0x40a308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
label_40a30c:
    // 0x40a30c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x40a30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a310:
    // 0x40a310: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
label_40a314:
    if (ctx->pc == 0x40A314u) {
        ctx->pc = 0x40A314u;
            // 0x40a314: 0xe6000dc0  swc1        $f0, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->pc = 0x40A318u;
        goto label_40a318;
    }
    ctx->pc = 0x40A310u;
    {
        const bool branch_taken_0x40a310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a310) {
            ctx->pc = 0x40A314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A310u;
            // 0x40a314: 0xe6000dc0  swc1        $f0, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A3E4u;
            goto label_40a3e4;
        }
    }
    ctx->pc = 0x40A318u;
label_40a318:
    // 0x40a318: 0x10000031  b           . + 4 + (0x31 << 2)
label_40a31c:
    if (ctx->pc == 0x40A31Cu) {
        ctx->pc = 0x40A31Cu;
            // 0x40a31c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40A320u;
        goto label_40a320;
    }
    ctx->pc = 0x40A318u;
    {
        const bool branch_taken_0x40a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A318u;
            // 0x40a31c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a318) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A320u;
label_40a320:
    // 0x40a320: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x40a320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a324:
    // 0x40a324: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_40a328:
    if (ctx->pc == 0x40A328u) {
        ctx->pc = 0x40A32Cu;
        goto label_40a32c;
    }
    ctx->pc = 0x40A324u;
    {
        const bool branch_taken_0x40a324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a324) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A32Cu;
label_40a32c:
    // 0x40a32c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a330:
    // 0x40a330: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x40a330u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_40a334:
    // 0x40a334: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a338:
    // 0x40a338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40a338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a33c:
    // 0x40a33c: 0x0  nop
    ctx->pc = 0x40a33cu;
    // NOP
label_40a340:
    // 0x40a340: 0x4606001c  madd.s      $f0, $f0, $f6
    ctx->pc = 0x40a340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
label_40a344:
    // 0x40a344: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x40a344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a348:
    // 0x40a348: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_40a34c:
    if (ctx->pc == 0x40A34Cu) {
        ctx->pc = 0x40A350u;
        goto label_40a350;
    }
    ctx->pc = 0x40A348u;
    {
        const bool branch_taken_0x40a348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a348) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A350u;
label_40a350:
    // 0x40a350: 0x10000023  b           . + 4 + (0x23 << 2)
label_40a354:
    if (ctx->pc == 0x40A354u) {
        ctx->pc = 0x40A354u;
            // 0x40a354: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40A358u;
        goto label_40a358;
    }
    ctx->pc = 0x40A350u;
    {
        const bool branch_taken_0x40a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A350u;
            // 0x40a354: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a350) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A358u;
label_40a358:
    // 0x40a358: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a35c:
    // 0x40a35c: 0x0  nop
    ctx->pc = 0x40a35cu;
    // NOP
label_40a360:
    // 0x40a360: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x40a360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a364:
    // 0x40a364: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_40a368:
    if (ctx->pc == 0x40A368u) {
        ctx->pc = 0x40A36Cu;
        goto label_40a36c;
    }
    ctx->pc = 0x40A364u;
    {
        const bool branch_taken_0x40a364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a364) {
            ctx->pc = 0x40A3A0u;
            goto label_40a3a0;
        }
    }
    ctx->pc = 0x40A36Cu;
label_40a36c:
    // 0x40a36c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x40a36cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_40a370:
    // 0x40a370: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x40a370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_40a374:
    // 0x40a374: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x40a374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_40a378:
    // 0x40a378: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x40a378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_40a37c:
    // 0x40a37c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a380:
    // 0x40a380: 0x0  nop
    ctx->pc = 0x40a380u;
    // NOP
label_40a384:
    // 0x40a384: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x40a384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_40a388:
    // 0x40a388: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x40a388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_40a38c:
    // 0x40a38c: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x40a38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a390:
    // 0x40a390: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_40a394:
    if (ctx->pc == 0x40A394u) {
        ctx->pc = 0x40A398u;
        goto label_40a398;
    }
    ctx->pc = 0x40A390u;
    {
        const bool branch_taken_0x40a390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a390) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A398u;
label_40a398:
    // 0x40a398: 0x10000011  b           . + 4 + (0x11 << 2)
label_40a39c:
    if (ctx->pc == 0x40A39Cu) {
        ctx->pc = 0x40A39Cu;
            // 0x40a39c: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x40A3A0u;
        goto label_40a3a0;
    }
    ctx->pc = 0x40A398u;
    {
        const bool branch_taken_0x40a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A398u;
            // 0x40a39c: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a398) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A3A0u;
label_40a3a0:
    // 0x40a3a0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x40a3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a3a4:
    // 0x40a3a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_40a3a8:
    if (ctx->pc == 0x40A3A8u) {
        ctx->pc = 0x40A3ACu;
        goto label_40a3ac;
    }
    ctx->pc = 0x40A3A4u;
    {
        const bool branch_taken_0x40a3a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a3a4) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A3ACu;
label_40a3ac:
    // 0x40a3ac: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x40a3acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_40a3b0:
    // 0x40a3b0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x40a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_40a3b4:
    // 0x40a3b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x40a3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_40a3b8:
    // 0x40a3b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x40a3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_40a3bc:
    // 0x40a3bc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40a3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a3c0:
    // 0x40a3c0: 0x0  nop
    ctx->pc = 0x40a3c0u;
    // NOP
label_40a3c4:
    // 0x40a3c4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x40a3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_40a3c8:
    // 0x40a3c8: 0x460038c7  neg.s       $f3, $f7
    ctx->pc = 0x40a3c8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[7]);
label_40a3cc:
    // 0x40a3cc: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x40a3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_40a3d0:
    // 0x40a3d0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x40a3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a3d4:
    // 0x40a3d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40a3d8:
    if (ctx->pc == 0x40A3D8u) {
        ctx->pc = 0x40A3DCu;
        goto label_40a3dc;
    }
    ctx->pc = 0x40A3D4u;
    {
        const bool branch_taken_0x40a3d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a3d4) {
            ctx->pc = 0x40A3E0u;
            goto label_40a3e0;
        }
    }
    ctx->pc = 0x40A3DCu;
label_40a3dc:
    // 0x40a3dc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x40a3dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_40a3e0:
    // 0x40a3e0: 0xe6000dc0  swc1        $f0, 0xDC0($s0)
    ctx->pc = 0x40a3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
label_40a3e4:
    // 0x40a3e4: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x40a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_40a3e8:
    // 0x40a3e8: 0x8064010f  lb          $a0, 0x10F($v1)
    ctx->pc = 0x40a3e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_40a3ec:
    // 0x40a3ec: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_40a3f0:
    if (ctx->pc == 0x40A3F0u) {
        ctx->pc = 0x40A3F0u;
            // 0x40a3f0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x40A3F4u;
        goto label_40a3f4;
    }
    ctx->pc = 0x40A3ECu;
    {
        const bool branch_taken_0x40a3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a3ec) {
            ctx->pc = 0x40A3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A3ECu;
            // 0x40a3f0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A414u;
            goto label_40a414;
        }
    }
    ctx->pc = 0x40A3F4u;
label_40a3f4:
    // 0x40a3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a3f8:
    // 0x40a3f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_40a3fc:
    if (ctx->pc == 0x40A3FCu) {
        ctx->pc = 0x40A400u;
        goto label_40a400;
    }
    ctx->pc = 0x40A3F8u;
    {
        const bool branch_taken_0x40a3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40a3f8) {
            ctx->pc = 0x40A410u;
            goto label_40a410;
        }
    }
    ctx->pc = 0x40A400u;
label_40a400:
    // 0x40a400: 0x2483fffd  addiu       $v1, $a0, -0x3
    ctx->pc = 0x40a400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_40a404:
    // 0x40a404: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x40a404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_40a408:
    // 0x40a408: 0x502000b8  beql        $at, $zero, . + 4 + (0xB8 << 2)
label_40a40c:
    if (ctx->pc == 0x40A40Cu) {
        ctx->pc = 0x40A40Cu;
            // 0x40a40c: 0xc4440018  lwc1        $f4, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x40A410u;
        goto label_40a410;
    }
    ctx->pc = 0x40A408u;
    {
        const bool branch_taken_0x40a408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a408) {
            ctx->pc = 0x40A40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A408u;
            // 0x40a40c: 0xc4440018  lwc1        $f4, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A6ECu;
            goto label_40a6ec;
        }
    }
    ctx->pc = 0x40A410u;
label_40a410:
    // 0x40a410: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40a410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40a414:
    // 0x40a414: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x40a414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_40a418:
    // 0x40a418: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40a418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a41c:
    // 0x40a41c: 0x0  nop
    ctx->pc = 0x40a41cu;
    // NOP
label_40a420:
    // 0x40a420: 0x460520c1  sub.s       $f3, $f4, $f5
    ctx->pc = 0x40a420u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_40a424:
    // 0x40a424: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x40a424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_40a428:
    // 0x40a428: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x40a428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_40a42c:
    // 0x40a42c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x40a42cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_40a430:
    // 0x40a430: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x40a430u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_40a434:
    // 0x40a434: 0x46012832  c.eq.s      $f5, $f1
    ctx->pc = 0x40a434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a438:
    // 0x40a438: 0xc6070dc4  lwc1        $f7, 0xDC4($s0)
    ctx->pc = 0x40a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_40a43c:
    // 0x40a43c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_40a440:
    if (ctx->pc == 0x40A440u) {
        ctx->pc = 0x40A440u;
            // 0x40a440: 0x46031182  mul.s       $f6, $f2, $f3 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->pc = 0x40A444u;
        goto label_40a444;
    }
    ctx->pc = 0x40A43Cu;
    {
        const bool branch_taken_0x40a43c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A43Cu;
            // 0x40a440: 0x46031182  mul.s       $f6, $f2, $f3 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a43c) {
            ctx->pc = 0x40A55Cu;
            goto label_40a55c;
        }
    }
    ctx->pc = 0x40A444u;
label_40a444:
    // 0x40a444: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x40a444u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_40a448:
    // 0x40a448: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x40a448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_40a44c:
    // 0x40a44c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x40a44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_40a450:
    // 0x40a450: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a454:
    // 0x40a454: 0xc6250058  lwc1        $f5, 0x58($s1)
    ctx->pc = 0x40a454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40a458:
    // 0x40a458: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x40a458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a45c:
    // 0x40a45c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40a460:
    if (ctx->pc == 0x40A460u) {
        ctx->pc = 0x40A460u;
            // 0x40a460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A464u;
        goto label_40a464;
    }
    ctx->pc = 0x40A45Cu;
    {
        const bool branch_taken_0x40a45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A45Cu;
            // 0x40a460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a45c) {
            ctx->pc = 0x40A468u;
            goto label_40a468;
        }
    }
    ctx->pc = 0x40A464u;
label_40a464:
    // 0x40a464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a468:
    // 0x40a468: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x40a468u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_40a46c:
    // 0x40a46c: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x40a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_40a470:
    // 0x40a470: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x40a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_40a474:
    // 0x40a474: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x40a474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_40a478:
    // 0x40a478: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a47c:
    // 0x40a47c: 0x0  nop
    ctx->pc = 0x40a47cu;
    // NOP
label_40a480:
    // 0x40a480: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x40a480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a484:
    // 0x40a484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40a488:
    if (ctx->pc == 0x40A488u) {
        ctx->pc = 0x40A488u;
            // 0x40a488: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A48Cu;
        goto label_40a48c;
    }
    ctx->pc = 0x40A484u;
    {
        const bool branch_taken_0x40a484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A484u;
            // 0x40a488: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a484) {
            ctx->pc = 0x40A490u;
            goto label_40a490;
        }
    }
    ctx->pc = 0x40A48Cu;
label_40a48c:
    // 0x40a48c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a490:
    // 0x40a490: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x40a490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_40a494:
    // 0x40a494: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x40a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_40a498:
    // 0x40a498: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_40a49c:
    if (ctx->pc == 0x40A49Cu) {
        ctx->pc = 0x40A4A0u;
        goto label_40a4a0;
    }
    ctx->pc = 0x40A498u;
    {
        const bool branch_taken_0x40a498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a498) {
            ctx->pc = 0x40A4ACu;
            goto label_40a4ac;
        }
    }
    ctx->pc = 0x40A4A0u;
label_40a4a0:
    // 0x40a4a0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x40a4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_40a4a4:
    // 0x40a4a4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_40a4a8:
    if (ctx->pc == 0x40A4A8u) {
        ctx->pc = 0x40A4A8u;
            // 0x40a4a8: 0x46003946  mov.s       $f5, $f7 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x40A4ACu;
        goto label_40a4ac;
    }
    ctx->pc = 0x40A4A4u;
    {
        const bool branch_taken_0x40a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A4A4u;
            // 0x40a4a8: 0x46003946  mov.s       $f5, $f7 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a4a4) {
            ctx->pc = 0x40A550u;
            goto label_40a550;
        }
    }
    ctx->pc = 0x40A4ACu;
label_40a4ac:
    // 0x40a4ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a4b0:
    // 0x40a4b0: 0x0  nop
    ctx->pc = 0x40a4b0u;
    // NOP
label_40a4b4:
    // 0x40a4b4: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x40a4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a4b8:
    // 0x40a4b8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_40a4bc:
    if (ctx->pc == 0x40A4BCu) {
        ctx->pc = 0x40A4C0u;
        goto label_40a4c0;
    }
    ctx->pc = 0x40A4B8u;
    {
        const bool branch_taken_0x40a4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a4b8) {
            ctx->pc = 0x40A504u;
            goto label_40a504;
        }
    }
    ctx->pc = 0x40A4C0u;
label_40a4c0:
    // 0x40a4c0: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x40a4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a4c4:
    // 0x40a4c4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_40a4c8:
    if (ctx->pc == 0x40A4C8u) {
        ctx->pc = 0x40A4C8u;
            // 0x40a4c8: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x40A4CCu;
        goto label_40a4cc;
    }
    ctx->pc = 0x40A4C4u;
    {
        const bool branch_taken_0x40a4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a4c4) {
            ctx->pc = 0x40A4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A4C4u;
            // 0x40a4c8: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A4E0u;
            goto label_40a4e0;
        }
    }
    ctx->pc = 0x40A4CCu;
label_40a4cc:
    // 0x40a4cc: 0x3c033ac4  lui         $v1, 0x3AC4
    ctx->pc = 0x40a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15044 << 16));
label_40a4d0:
    // 0x40a4d0: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x40a4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_40a4d4:
    // 0x40a4d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a4d8:
    // 0x40a4d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_40a4dc:
    if (ctx->pc == 0x40A4DCu) {
        ctx->pc = 0x40A4DCu;
            // 0x40a4dc: 0x46032941  sub.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->pc = 0x40A4E0u;
        goto label_40a4e0;
    }
    ctx->pc = 0x40A4D8u;
    {
        const bool branch_taken_0x40a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A4D8u;
            // 0x40a4dc: 0x46032941  sub.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a4d8) {
            ctx->pc = 0x40A4F0u;
            goto label_40a4f0;
        }
    }
    ctx->pc = 0x40A4E0u;
label_40a4e0:
    // 0x40a4e0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x40a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_40a4e4:
    // 0x40a4e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a4e8:
    // 0x40a4e8: 0x0  nop
    ctx->pc = 0x40a4e8u;
    // NOP
label_40a4ec:
    // 0x40a4ec: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x40a4ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_40a4f0:
    // 0x40a4f0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a4f4:
    // 0x40a4f4: 0x0  nop
    ctx->pc = 0x40a4f4u;
    // NOP
label_40a4f8:
    // 0x40a4f8: 0x46071818  adda.s      $f3, $f7
    ctx->pc = 0x40a4f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_40a4fc:
    // 0x40a4fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_40a500:
    if (ctx->pc == 0x40A500u) {
        ctx->pc = 0x40A500u;
            // 0x40a500: 0x460629dc  madd.s      $f7, $f5, $f6 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
        ctx->pc = 0x40A504u;
        goto label_40a504;
    }
    ctx->pc = 0x40A4FCu;
    {
        const bool branch_taken_0x40a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A4FCu;
            // 0x40a500: 0x460629dc  madd.s      $f7, $f5, $f6 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a4fc) {
            ctx->pc = 0x40A550u;
            goto label_40a550;
        }
    }
    ctx->pc = 0x40A504u;
label_40a504:
    // 0x40a504: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x40a504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a508:
    // 0x40a508: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
label_40a50c:
    if (ctx->pc == 0x40A50Cu) {
        ctx->pc = 0x40A50Cu;
            // 0x40a50c: 0xe6250058  swc1        $f5, 0x58($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->pc = 0x40A510u;
        goto label_40a510;
    }
    ctx->pc = 0x40A508u;
    {
        const bool branch_taken_0x40a508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a508) {
            ctx->pc = 0x40A50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A508u;
            // 0x40a50c: 0xe6250058  swc1        $f5, 0x58($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A510u;
label_40a510:
    // 0x40a510: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x40a510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a514:
    // 0x40a514: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_40a518:
    if (ctx->pc == 0x40A518u) {
        ctx->pc = 0x40A518u;
            // 0x40a518: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x40A51Cu;
        goto label_40a51c;
    }
    ctx->pc = 0x40A514u;
    {
        const bool branch_taken_0x40a514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a514) {
            ctx->pc = 0x40A518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A514u;
            // 0x40a518: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A530u;
            goto label_40a530;
        }
    }
    ctx->pc = 0x40A51Cu;
label_40a51c:
    // 0x40a51c: 0x3c033ac4  lui         $v1, 0x3AC4
    ctx->pc = 0x40a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15044 << 16));
label_40a520:
    // 0x40a520: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x40a520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_40a524:
    // 0x40a524: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a528:
    // 0x40a528: 0x10000005  b           . + 4 + (0x5 << 2)
label_40a52c:
    if (ctx->pc == 0x40A52Cu) {
        ctx->pc = 0x40A52Cu;
            // 0x40a52c: 0x46032940  add.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
        ctx->pc = 0x40A530u;
        goto label_40a530;
    }
    ctx->pc = 0x40A528u;
    {
        const bool branch_taken_0x40a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A528u;
            // 0x40a52c: 0x46032940  add.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a528) {
            ctx->pc = 0x40A540u;
            goto label_40a540;
        }
    }
    ctx->pc = 0x40A530u;
label_40a530:
    // 0x40a530: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x40a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_40a534:
    // 0x40a534: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a538:
    // 0x40a538: 0x0  nop
    ctx->pc = 0x40a538u;
    // NOP
label_40a53c:
    // 0x40a53c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x40a53cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_40a540:
    // 0x40a540: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40a540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a544:
    // 0x40a544: 0x0  nop
    ctx->pc = 0x40a544u;
    // NOP
label_40a548:
    // 0x40a548: 0x46071818  adda.s      $f3, $f7
    ctx->pc = 0x40a548u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_40a54c:
    // 0x40a54c: 0x460629dc  madd.s      $f7, $f5, $f6
    ctx->pc = 0x40a54cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_40a550:
    // 0x40a550: 0xe6250058  swc1        $f5, 0x58($s1)
    ctx->pc = 0x40a550u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_40a554:
    // 0x40a554: 0x10000063  b           . + 4 + (0x63 << 2)
label_40a558:
    if (ctx->pc == 0x40A558u) {
        ctx->pc = 0x40A55Cu;
        goto label_40a55c;
    }
    ctx->pc = 0x40A554u;
    {
        const bool branch_taken_0x40a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a554) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A55Cu;
label_40a55c:
    // 0x40a55c: 0x460708c2  mul.s       $f3, $f1, $f7
    ctx->pc = 0x40a55cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_40a560:
    // 0x40a560: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x40a560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a564:
    // 0x40a564: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
label_40a568:
    if (ctx->pc == 0x40A568u) {
        ctx->pc = 0x40A568u;
            // 0x40a568: 0x46073902  mul.s       $f4, $f7, $f7 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
        ctx->pc = 0x40A56Cu;
        goto label_40a56c;
    }
    ctx->pc = 0x40A564u;
    {
        const bool branch_taken_0x40a564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a564) {
            ctx->pc = 0x40A568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A564u;
            // 0x40a568: 0x46073902  mul.s       $f4, $f7, $f7 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A5DCu;
            goto label_40a5dc;
        }
    }
    ctx->pc = 0x40A56Cu;
label_40a56c:
    // 0x40a56c: 0x46053836  c.le.s      $f7, $f5
    ctx->pc = 0x40a56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a570:
    // 0x40a570: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_40a574:
    if (ctx->pc == 0x40A574u) {
        ctx->pc = 0x40A578u;
        goto label_40a578;
    }
    ctx->pc = 0x40A570u;
    {
        const bool branch_taken_0x40a570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a570) {
            ctx->pc = 0x40A5A4u;
            goto label_40a5a4;
        }
    }
    ctx->pc = 0x40A578u;
label_40a578:
    // 0x40a578: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a57c:
    // 0x40a57c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a580:
    // 0x40a580: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a580u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a584:
    // 0x40a584: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a588:
    // 0x40a588: 0x0  nop
    ctx->pc = 0x40a588u;
    // NOP
label_40a58c:
    // 0x40a58c: 0x460619dd  msub.s      $f7, $f3, $f6
    ctx->pc = 0x40a58cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_40a590:
    // 0x40a590: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x40a590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a594:
    // 0x40a594: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_40a598:
    if (ctx->pc == 0x40A598u) {
        ctx->pc = 0x40A59Cu;
        goto label_40a59c;
    }
    ctx->pc = 0x40A594u;
    {
        const bool branch_taken_0x40a594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a594) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A59Cu;
label_40a59c:
    // 0x40a59c: 0x10000051  b           . + 4 + (0x51 << 2)
label_40a5a0:
    if (ctx->pc == 0x40A5A0u) {
        ctx->pc = 0x40A5A0u;
            // 0x40a5a0: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x40A5A4u;
        goto label_40a5a4;
    }
    ctx->pc = 0x40A59Cu;
    {
        const bool branch_taken_0x40a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A59Cu;
            // 0x40a5a0: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a59c) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A5A4u;
label_40a5a4:
    // 0x40a5a4: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x40a5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a5a8:
    // 0x40a5a8: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_40a5ac:
    if (ctx->pc == 0x40A5ACu) {
        ctx->pc = 0x40A5B0u;
        goto label_40a5b0;
    }
    ctx->pc = 0x40A5A8u;
    {
        const bool branch_taken_0x40a5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a5a8) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A5B0u;
label_40a5b0:
    // 0x40a5b0: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a5b4:
    // 0x40a5b4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a5b8:
    // 0x40a5b8: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a5b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a5bc:
    // 0x40a5bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a5c0:
    // 0x40a5c0: 0x0  nop
    ctx->pc = 0x40a5c0u;
    // NOP
label_40a5c4:
    // 0x40a5c4: 0x460619dc  madd.s      $f7, $f3, $f6
    ctx->pc = 0x40a5c4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_40a5c8:
    // 0x40a5c8: 0x46053836  c.le.s      $f7, $f5
    ctx->pc = 0x40a5c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a5cc:
    // 0x40a5cc: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_40a5d0:
    if (ctx->pc == 0x40A5D0u) {
        ctx->pc = 0x40A5D4u;
        goto label_40a5d4;
    }
    ctx->pc = 0x40A5CCu;
    {
        const bool branch_taken_0x40a5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a5cc) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A5D4u;
label_40a5d4:
    // 0x40a5d4: 0x10000043  b           . + 4 + (0x43 << 2)
label_40a5d8:
    if (ctx->pc == 0x40A5D8u) {
        ctx->pc = 0x40A5D8u;
            // 0x40a5d8: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x40A5DCu;
        goto label_40a5dc;
    }
    ctx->pc = 0x40A5D4u;
    {
        const bool branch_taken_0x40a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A5D4u;
            // 0x40a5d8: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a5d4) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A5DCu;
label_40a5dc:
    // 0x40a5dc: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x40a5dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_40a5e0:
    // 0x40a5e0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x40a5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a5e4:
    // 0x40a5e4: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_40a5e8:
    if (ctx->pc == 0x40A5E8u) {
        ctx->pc = 0x40A5ECu;
        goto label_40a5ec;
    }
    ctx->pc = 0x40A5E4u;
    {
        const bool branch_taken_0x40a5e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a5e4) {
            ctx->pc = 0x40A65Cu;
            goto label_40a65c;
        }
    }
    ctx->pc = 0x40A5ECu;
label_40a5ec:
    // 0x40a5ec: 0x46053836  c.le.s      $f7, $f5
    ctx->pc = 0x40a5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a5f0:
    // 0x40a5f0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_40a5f4:
    if (ctx->pc == 0x40A5F4u) {
        ctx->pc = 0x40A5F8u;
        goto label_40a5f8;
    }
    ctx->pc = 0x40A5F0u;
    {
        const bool branch_taken_0x40a5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a5f0) {
            ctx->pc = 0x40A624u;
            goto label_40a624;
        }
    }
    ctx->pc = 0x40A5F8u;
label_40a5f8:
    // 0x40a5f8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a5fc:
    // 0x40a5fc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a600:
    // 0x40a600: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a600u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a604:
    // 0x40a604: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a608:
    // 0x40a608: 0x0  nop
    ctx->pc = 0x40a608u;
    // NOP
label_40a60c:
    // 0x40a60c: 0x460619dd  msub.s      $f7, $f3, $f6
    ctx->pc = 0x40a60cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_40a610:
    // 0x40a610: 0x46013834  c.lt.s      $f7, $f1
    ctx->pc = 0x40a610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a614:
    // 0x40a614: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_40a618:
    if (ctx->pc == 0x40A618u) {
        ctx->pc = 0x40A61Cu;
        goto label_40a61c;
    }
    ctx->pc = 0x40A614u;
    {
        const bool branch_taken_0x40a614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a614) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A61Cu;
label_40a61c:
    // 0x40a61c: 0x10000031  b           . + 4 + (0x31 << 2)
label_40a620:
    if (ctx->pc == 0x40A620u) {
        ctx->pc = 0x40A620u;
            // 0x40a620: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x40A624u;
        goto label_40a624;
    }
    ctx->pc = 0x40A61Cu;
    {
        const bool branch_taken_0x40a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A61Cu;
            // 0x40a620: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a61c) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A624u;
label_40a624:
    // 0x40a624: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x40a624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a628:
    // 0x40a628: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_40a62c:
    if (ctx->pc == 0x40A62Cu) {
        ctx->pc = 0x40A630u;
        goto label_40a630;
    }
    ctx->pc = 0x40A628u;
    {
        const bool branch_taken_0x40a628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a628) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A630u;
label_40a630:
    // 0x40a630: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40a630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40a634:
    // 0x40a634: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40a634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40a638:
    // 0x40a638: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a63c:
    // 0x40a63c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40a63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a640:
    // 0x40a640: 0x0  nop
    ctx->pc = 0x40a640u;
    // NOP
label_40a644:
    // 0x40a644: 0x460619dc  madd.s      $f7, $f3, $f6
    ctx->pc = 0x40a644u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_40a648:
    // 0x40a648: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x40a648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a64c:
    // 0x40a64c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_40a650:
    if (ctx->pc == 0x40A650u) {
        ctx->pc = 0x40A654u;
        goto label_40a654;
    }
    ctx->pc = 0x40A64Cu;
    {
        const bool branch_taken_0x40a64c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a64c) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A654u;
label_40a654:
    // 0x40a654: 0x10000023  b           . + 4 + (0x23 << 2)
label_40a658:
    if (ctx->pc == 0x40A658u) {
        ctx->pc = 0x40A658u;
            // 0x40a658: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x40A65Cu;
        goto label_40a65c;
    }
    ctx->pc = 0x40A654u;
    {
        const bool branch_taken_0x40a654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A654u;
            // 0x40a658: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a654) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A65Cu;
label_40a65c:
    // 0x40a65c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x40a65cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a660:
    // 0x40a660: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_40a664:
    if (ctx->pc == 0x40A664u) {
        ctx->pc = 0x40A668u;
        goto label_40a668;
    }
    ctx->pc = 0x40A660u;
    {
        const bool branch_taken_0x40a660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a660) {
            ctx->pc = 0x40A6A4u;
            goto label_40a6a4;
        }
    }
    ctx->pc = 0x40A668u;
label_40a668:
    // 0x40a668: 0x460708c1  sub.s       $f3, $f1, $f7
    ctx->pc = 0x40a668u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_40a66c:
    // 0x40a66c: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x40a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_40a670:
    // 0x40a670: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x40a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_40a674:
    // 0x40a674: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40a674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a678:
    // 0x40a678: 0x0  nop
    ctx->pc = 0x40a678u;
    // NOP
label_40a67c:
    // 0x40a67c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x40a67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_40a680:
    // 0x40a680: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a680u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a684:
    // 0x40a684: 0x460331dc  madd.s      $f7, $f6, $f3
    ctx->pc = 0x40a684u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_40a688:
    // 0x40a688: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x40a688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a68c:
    // 0x40a68c: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_40a690:
    if (ctx->pc == 0x40A690u) {
        ctx->pc = 0x40A690u;
            // 0x40a690: 0xe6070dd0  swc1        $f7, 0xDD0($s0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
        ctx->pc = 0x40A694u;
        goto label_40a694;
    }
    ctx->pc = 0x40A68Cu;
    {
        const bool branch_taken_0x40a68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a68c) {
            ctx->pc = 0x40A690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A68Cu;
            // 0x40a690: 0xe6070dd0  swc1        $f7, 0xDD0($s0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A694u;
label_40a694:
    // 0x40a694: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x40a694u;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
label_40a698:
    // 0x40a698: 0xe6070dd0  swc1        $f7, 0xDD0($s0)
    ctx->pc = 0x40a698u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
label_40a69c:
    // 0x40a69c: 0x10000011  b           . + 4 + (0x11 << 2)
label_40a6a0:
    if (ctx->pc == 0x40A6A0u) {
        ctx->pc = 0x40A6A4u;
        goto label_40a6a4;
    }
    ctx->pc = 0x40A69Cu;
    {
        const bool branch_taken_0x40a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a69c) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A6A4u;
label_40a6a4:
    // 0x40a6a4: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x40a6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a6a8:
    // 0x40a6a8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_40a6ac:
    if (ctx->pc == 0x40A6ACu) {
        ctx->pc = 0x40A6B0u;
        goto label_40a6b0;
    }
    ctx->pc = 0x40A6A8u;
    {
        const bool branch_taken_0x40a6a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a6a8) {
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A6B0u;
label_40a6b0:
    // 0x40a6b0: 0x460708c1  sub.s       $f3, $f1, $f7
    ctx->pc = 0x40a6b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_40a6b4:
    // 0x40a6b4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x40a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_40a6b8:
    // 0x40a6b8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x40a6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_40a6bc:
    // 0x40a6bc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40a6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40a6c0:
    // 0x40a6c0: 0x0  nop
    ctx->pc = 0x40a6c0u;
    // NOP
label_40a6c4:
    // 0x40a6c4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x40a6c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_40a6c8:
    // 0x40a6c8: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x40a6c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_40a6cc:
    // 0x40a6cc: 0x460331dc  madd.s      $f7, $f6, $f3
    ctx->pc = 0x40a6ccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_40a6d0:
    // 0x40a6d0: 0x46013834  c.lt.s      $f7, $f1
    ctx->pc = 0x40a6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a6d4:
    // 0x40a6d4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_40a6d8:
    if (ctx->pc == 0x40A6D8u) {
        ctx->pc = 0x40A6D8u;
            // 0x40a6d8: 0xe6070dd0  swc1        $f7, 0xDD0($s0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
        ctx->pc = 0x40A6DCu;
        goto label_40a6dc;
    }
    ctx->pc = 0x40A6D4u;
    {
        const bool branch_taken_0x40a6d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a6d4) {
            ctx->pc = 0x40A6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A6D4u;
            // 0x40a6d8: 0xe6070dd0  swc1        $f7, 0xDD0($s0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A6E4u;
            goto label_40a6e4;
        }
    }
    ctx->pc = 0x40A6DCu;
label_40a6dc:
    // 0x40a6dc: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x40a6dcu;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
label_40a6e0:
    // 0x40a6e0: 0xe6070dd0  swc1        $f7, 0xDD0($s0)
    ctx->pc = 0x40a6e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3536), bits); }
label_40a6e4:
    // 0x40a6e4: 0xe6070dc4  swc1        $f7, 0xDC4($s0)
    ctx->pc = 0x40a6e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3524), bits); }
label_40a6e8:
    // 0x40a6e8: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x40a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40a6ec:
    // 0x40a6ec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x40a6ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_40a6f0:
    // 0x40a6f0: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x40a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
label_40a6f4:
    // 0x40a6f4: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x40a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_40a6f8:
    // 0x40a6f8: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x40a6f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
label_40a6fc:
    // 0x40a6fc: 0x46041542  mul.s       $f21, $f2, $f4
    ctx->pc = 0x40a6fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_40a700:
    // 0x40a700: 0xc6020de4  lwc1        $f2, 0xDE4($s0)
    ctx->pc = 0x40a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40a704:
    // 0x40a704: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x40a704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40a708:
    // 0x40a708: 0x0  nop
    ctx->pc = 0x40a708u;
    // NOP
label_40a70c:
    // 0x40a70c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x40a70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a710:
    // 0x40a710: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40a714:
    if (ctx->pc == 0x40A714u) {
        ctx->pc = 0x40A714u;
            // 0x40a714: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40A718u;
        goto label_40a718;
    }
    ctx->pc = 0x40A710u;
    {
        const bool branch_taken_0x40a710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A710u;
            // 0x40a714: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a710) {
            ctx->pc = 0x40A71Cu;
            goto label_40a71c;
        }
    }
    ctx->pc = 0x40A718u;
label_40a718:
    // 0x40a718: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a71c:
    // 0x40a71c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x40a71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_40a720:
    // 0x40a720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a724:
    // 0x40a724: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x40a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_40a728:
    // 0x40a728: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x40a728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40a72c:
    // 0x40a72c: 0x0  nop
    ctx->pc = 0x40a72cu;
    // NOP
label_40a730:
    // 0x40a730: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x40a730u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a734:
    // 0x40a734: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x40a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_40a738:
    // 0x40a738: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40a73c:
    if (ctx->pc == 0x40A73Cu) {
        ctx->pc = 0x40A73Cu;
            // 0x40a73c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x40A740u;
        goto label_40a740;
    }
    ctx->pc = 0x40A738u;
    {
        const bool branch_taken_0x40a738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A738u;
            // 0x40a73c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a738) {
            ctx->pc = 0x40A744u;
            goto label_40a744;
        }
    }
    ctx->pc = 0x40A740u;
label_40a740:
    // 0x40a740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40a740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a744:
    // 0x40a744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40a744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_40a748:
    // 0x40a748: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x40a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_40a74c:
    // 0x40a74c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_40a750:
    if (ctx->pc == 0x40A750u) {
        ctx->pc = 0x40A750u;
            // 0x40a750: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x40A754u;
        goto label_40a754;
    }
    ctx->pc = 0x40A74Cu;
    {
        const bool branch_taken_0x40a74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a74c) {
            ctx->pc = 0x40A750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A74Cu;
            // 0x40a750: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A794u;
            goto label_40a794;
        }
    }
    ctx->pc = 0x40A754u;
label_40a754:
    // 0x40a754: 0x3c02ba72  lui         $v0, 0xBA72
    ctx->pc = 0x40a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47730 << 16));
label_40a758:
    // 0x40a758: 0x3442b9d6  ori         $v0, $v0, 0xB9D6
    ctx->pc = 0x40a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
label_40a75c:
    // 0x40a75c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x40a75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40a760:
    // 0x40a760: 0x0  nop
    ctx->pc = 0x40a760u;
    // NOP
label_40a764:
    // 0x40a764: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40a764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_40a768:
    // 0x40a768: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x40a768u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_40a76c:
    // 0x40a76c: 0xc6020de8  lwc1        $f2, 0xDE8($s0)
    ctx->pc = 0x40a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40a770:
    // 0x40a770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40a770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a774:
    // 0x40a774: 0x0  nop
    ctx->pc = 0x40a774u;
    // NOP
label_40a778:
    // 0x40a778: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x40a778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a77c:
    // 0x40a77c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_40a780:
    if (ctx->pc == 0x40A780u) {
        ctx->pc = 0x40A780u;
            // 0x40a780: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x40A784u;
        goto label_40a784;
    }
    ctx->pc = 0x40A77Cu;
    {
        const bool branch_taken_0x40a77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a77c) {
            ctx->pc = 0x40A780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A77Cu;
            // 0x40a780: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A78Cu;
            goto label_40a78c;
        }
    }
    ctx->pc = 0x40A784u;
label_40a784:
    // 0x40a784: 0x10000002  b           . + 4 + (0x2 << 2)
label_40a788:
    if (ctx->pc == 0x40A788u) {
        ctx->pc = 0x40A788u;
            // 0x40a788: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->pc = 0x40A78Cu;
        goto label_40a78c;
    }
    ctx->pc = 0x40A784u;
    {
        const bool branch_taken_0x40a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A784u;
            // 0x40a788: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a784) {
            ctx->pc = 0x40A790u;
            goto label_40a790;
        }
    }
    ctx->pc = 0x40A78Cu;
label_40a78c:
    // 0x40a78c: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x40a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_40a790:
    // 0x40a790: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x40a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_40a794:
    // 0x40a794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40a794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a798:
    // 0x40a798: 0x0  nop
    ctx->pc = 0x40a798u;
    // NOP
label_40a79c:
    // 0x40a79c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40a79cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a7a0:
    // 0x40a7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a7a4:
    // 0x40a7a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40a7a8:
    if (ctx->pc == 0x40A7A8u) {
        ctx->pc = 0x40A7A8u;
            // 0x40a7a8: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x40A7ACu;
        goto label_40a7ac;
    }
    ctx->pc = 0x40A7A4u;
    {
        const bool branch_taken_0x40a7a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A7A4u;
            // 0x40a7a8: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a7a4) {
            ctx->pc = 0x40A7B0u;
            goto label_40a7b0;
        }
    }
    ctx->pc = 0x40A7ACu;
label_40a7ac:
    // 0x40a7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40a7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a7b0:
    // 0x40a7b0: 0xc6010dd0  lwc1        $f1, 0xDD0($s0)
    ctx->pc = 0x40a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40a7b4:
    // 0x40a7b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x40a7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_40a7b8:
    // 0x40a7b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40a7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a7bc:
    // 0x40a7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a7c0:
    // 0x40a7c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40a7c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a7c4:
    // 0x40a7c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40a7c8:
    if (ctx->pc == 0x40A7C8u) {
        ctx->pc = 0x40A7C8u;
            // 0x40a7c8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x40A7CCu;
        goto label_40a7cc;
    }
    ctx->pc = 0x40A7C4u;
    {
        const bool branch_taken_0x40a7c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A7C4u;
            // 0x40a7c8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a7c4) {
            ctx->pc = 0x40A7D0u;
            goto label_40a7d0;
        }
    }
    ctx->pc = 0x40A7CCu;
label_40a7cc:
    // 0x40a7cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40a7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a7d0:
    // 0x40a7d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40a7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_40a7d4:
    // 0x40a7d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x40a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40a7d8:
    // 0x40a7d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_40a7dc:
    if (ctx->pc == 0x40A7DCu) {
        ctx->pc = 0x40A7DCu;
            // 0x40a7dc: 0xc6000930  lwc1        $f0, 0x930($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x40A7E0u;
        goto label_40a7e0;
    }
    ctx->pc = 0x40A7D8u;
    {
        const bool branch_taken_0x40a7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a7d8) {
            ctx->pc = 0x40A7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A7D8u;
            // 0x40a7dc: 0xc6000930  lwc1        $f0, 0x930($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A7F0u;
            goto label_40a7f0;
        }
    }
    ctx->pc = 0x40A7E0u;
label_40a7e0:
    // 0x40a7e0: 0xc0c1570  jal         func_3055C0
label_40a7e4:
    if (ctx->pc == 0x40A7E4u) {
        ctx->pc = 0x40A7E4u;
            // 0x40a7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40A7E8u;
        goto label_40a7e8;
    }
    ctx->pc = 0x40A7E0u;
    SET_GPR_U32(ctx, 31, 0x40A7E8u);
    ctx->pc = 0x40A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A7E0u;
            // 0x40a7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3055C0u;
    if (runtime->hasFunction(0x3055C0u)) {
        auto targetFn = runtime->lookupFunction(0x3055C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A7E8u; }
        if (ctx->pc != 0x40A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003055C0_0x3055c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A7E8u; }
        if (ctx->pc != 0x40A7E8u) { return; }
    }
    ctx->pc = 0x40A7E8u;
label_40a7e8:
    // 0x40a7e8: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x40a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_40a7ec:
    // 0x40a7ec: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x40a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a7f0:
    // 0x40a7f0: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x40a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_40a7f4:
    // 0x40a7f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x40a7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40a7f8:
    // 0x40a7f8: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x40a7f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40a7fc:
    // 0x40a7fc: 0xc0c753c  jal         func_31D4F0
label_40a800:
    if (ctx->pc == 0x40A800u) {
        ctx->pc = 0x40A800u;
            // 0x40a800: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40A804u;
        goto label_40a804;
    }
    ctx->pc = 0x40A7FCu;
    SET_GPR_U32(ctx, 31, 0x40A804u);
    ctx->pc = 0x40A800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A7FCu;
            // 0x40a800: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A804u; }
        if (ctx->pc != 0x40A804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A804u; }
        if (ctx->pc != 0x40A804u) { return; }
    }
    ctx->pc = 0x40A804u;
label_40a804:
    // 0x40a804: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x40a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a808:
    // 0x40a808: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x40a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_40a80c:
    // 0x40a80c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x40a80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40a810:
    // 0x40a810: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x40a810u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40a814:
    // 0x40a814: 0xc0c753c  jal         func_31D4F0
label_40a818:
    if (ctx->pc == 0x40A818u) {
        ctx->pc = 0x40A818u;
            // 0x40a818: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40A81Cu;
        goto label_40a81c;
    }
    ctx->pc = 0x40A814u;
    SET_GPR_U32(ctx, 31, 0x40A81Cu);
    ctx->pc = 0x40A818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A814u;
            // 0x40a818: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A81Cu; }
        if (ctx->pc != 0x40A81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A81Cu; }
        if (ctx->pc != 0x40A81Cu) { return; }
    }
    ctx->pc = 0x40A81Cu;
label_40a81c:
    // 0x40a81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40a81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40a820:
    // 0x40a820: 0x0  nop
    ctx->pc = 0x40a820u;
    // NOP
label_40a824:
    // 0x40a824: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x40a824u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40a828:
    // 0x40a828: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_40a82c:
    if (ctx->pc == 0x40A82Cu) {
        ctx->pc = 0x40A82Cu;
            // 0x40a82c: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->pc = 0x40A830u;
        goto label_40a830;
    }
    ctx->pc = 0x40A828u;
    {
        const bool branch_taken_0x40a828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A828u;
            // 0x40a82c: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a828) {
            ctx->pc = 0x40A840u;
            goto label_40a840;
        }
    }
    ctx->pc = 0x40A830u;
label_40a830:
    // 0x40a830: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x40a830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40a834:
    // 0x40a834: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x40a834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_40a838:
    // 0x40a838: 0x320f809  jalr        $t9
label_40a83c:
    if (ctx->pc == 0x40A83Cu) {
        ctx->pc = 0x40A83Cu;
            // 0x40a83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40A840u;
        goto label_40a840;
    }
    ctx->pc = 0x40A838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40A840u);
        ctx->pc = 0x40A83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A838u;
            // 0x40a83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40A840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40A840u; }
            if (ctx->pc != 0x40A840u) { return; }
        }
        }
    }
    ctx->pc = 0x40A840u;
label_40a840:
    // 0x40a840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_40a844:
    // 0x40a844: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40a848:
    // 0x40a848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40a84c:
    // 0x40a84c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40a850:
    // 0x40a850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40a850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40a854:
    // 0x40a854: 0x3e00008  jr          $ra
label_40a858:
    if (ctx->pc == 0x40A858u) {
        ctx->pc = 0x40A858u;
            // 0x40a858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x40A85Cu;
        goto label_40a85c;
    }
    ctx->pc = 0x40A854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A854u;
            // 0x40a858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40A85Cu;
label_40a85c:
    // 0x40a85c: 0x0  nop
    ctx->pc = 0x40a85cu;
    // NOP
}
