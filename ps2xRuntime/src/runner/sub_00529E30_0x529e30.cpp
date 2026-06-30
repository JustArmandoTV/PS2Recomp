#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00529E30
// Address: 0x529e30 - 0x52a650
void sub_00529E30_0x529e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00529E30_0x529e30");
#endif

    switch (ctx->pc) {
        case 0x529e30u: goto label_529e30;
        case 0x529e34u: goto label_529e34;
        case 0x529e38u: goto label_529e38;
        case 0x529e3cu: goto label_529e3c;
        case 0x529e40u: goto label_529e40;
        case 0x529e44u: goto label_529e44;
        case 0x529e48u: goto label_529e48;
        case 0x529e4cu: goto label_529e4c;
        case 0x529e50u: goto label_529e50;
        case 0x529e54u: goto label_529e54;
        case 0x529e58u: goto label_529e58;
        case 0x529e5cu: goto label_529e5c;
        case 0x529e60u: goto label_529e60;
        case 0x529e64u: goto label_529e64;
        case 0x529e68u: goto label_529e68;
        case 0x529e6cu: goto label_529e6c;
        case 0x529e70u: goto label_529e70;
        case 0x529e74u: goto label_529e74;
        case 0x529e78u: goto label_529e78;
        case 0x529e7cu: goto label_529e7c;
        case 0x529e80u: goto label_529e80;
        case 0x529e84u: goto label_529e84;
        case 0x529e88u: goto label_529e88;
        case 0x529e8cu: goto label_529e8c;
        case 0x529e90u: goto label_529e90;
        case 0x529e94u: goto label_529e94;
        case 0x529e98u: goto label_529e98;
        case 0x529e9cu: goto label_529e9c;
        case 0x529ea0u: goto label_529ea0;
        case 0x529ea4u: goto label_529ea4;
        case 0x529ea8u: goto label_529ea8;
        case 0x529eacu: goto label_529eac;
        case 0x529eb0u: goto label_529eb0;
        case 0x529eb4u: goto label_529eb4;
        case 0x529eb8u: goto label_529eb8;
        case 0x529ebcu: goto label_529ebc;
        case 0x529ec0u: goto label_529ec0;
        case 0x529ec4u: goto label_529ec4;
        case 0x529ec8u: goto label_529ec8;
        case 0x529eccu: goto label_529ecc;
        case 0x529ed0u: goto label_529ed0;
        case 0x529ed4u: goto label_529ed4;
        case 0x529ed8u: goto label_529ed8;
        case 0x529edcu: goto label_529edc;
        case 0x529ee0u: goto label_529ee0;
        case 0x529ee4u: goto label_529ee4;
        case 0x529ee8u: goto label_529ee8;
        case 0x529eecu: goto label_529eec;
        case 0x529ef0u: goto label_529ef0;
        case 0x529ef4u: goto label_529ef4;
        case 0x529ef8u: goto label_529ef8;
        case 0x529efcu: goto label_529efc;
        case 0x529f00u: goto label_529f00;
        case 0x529f04u: goto label_529f04;
        case 0x529f08u: goto label_529f08;
        case 0x529f0cu: goto label_529f0c;
        case 0x529f10u: goto label_529f10;
        case 0x529f14u: goto label_529f14;
        case 0x529f18u: goto label_529f18;
        case 0x529f1cu: goto label_529f1c;
        case 0x529f20u: goto label_529f20;
        case 0x529f24u: goto label_529f24;
        case 0x529f28u: goto label_529f28;
        case 0x529f2cu: goto label_529f2c;
        case 0x529f30u: goto label_529f30;
        case 0x529f34u: goto label_529f34;
        case 0x529f38u: goto label_529f38;
        case 0x529f3cu: goto label_529f3c;
        case 0x529f40u: goto label_529f40;
        case 0x529f44u: goto label_529f44;
        case 0x529f48u: goto label_529f48;
        case 0x529f4cu: goto label_529f4c;
        case 0x529f50u: goto label_529f50;
        case 0x529f54u: goto label_529f54;
        case 0x529f58u: goto label_529f58;
        case 0x529f5cu: goto label_529f5c;
        case 0x529f60u: goto label_529f60;
        case 0x529f64u: goto label_529f64;
        case 0x529f68u: goto label_529f68;
        case 0x529f6cu: goto label_529f6c;
        case 0x529f70u: goto label_529f70;
        case 0x529f74u: goto label_529f74;
        case 0x529f78u: goto label_529f78;
        case 0x529f7cu: goto label_529f7c;
        case 0x529f80u: goto label_529f80;
        case 0x529f84u: goto label_529f84;
        case 0x529f88u: goto label_529f88;
        case 0x529f8cu: goto label_529f8c;
        case 0x529f90u: goto label_529f90;
        case 0x529f94u: goto label_529f94;
        case 0x529f98u: goto label_529f98;
        case 0x529f9cu: goto label_529f9c;
        case 0x529fa0u: goto label_529fa0;
        case 0x529fa4u: goto label_529fa4;
        case 0x529fa8u: goto label_529fa8;
        case 0x529facu: goto label_529fac;
        case 0x529fb0u: goto label_529fb0;
        case 0x529fb4u: goto label_529fb4;
        case 0x529fb8u: goto label_529fb8;
        case 0x529fbcu: goto label_529fbc;
        case 0x529fc0u: goto label_529fc0;
        case 0x529fc4u: goto label_529fc4;
        case 0x529fc8u: goto label_529fc8;
        case 0x529fccu: goto label_529fcc;
        case 0x529fd0u: goto label_529fd0;
        case 0x529fd4u: goto label_529fd4;
        case 0x529fd8u: goto label_529fd8;
        case 0x529fdcu: goto label_529fdc;
        case 0x529fe0u: goto label_529fe0;
        case 0x529fe4u: goto label_529fe4;
        case 0x529fe8u: goto label_529fe8;
        case 0x529fecu: goto label_529fec;
        case 0x529ff0u: goto label_529ff0;
        case 0x529ff4u: goto label_529ff4;
        case 0x529ff8u: goto label_529ff8;
        case 0x529ffcu: goto label_529ffc;
        case 0x52a000u: goto label_52a000;
        case 0x52a004u: goto label_52a004;
        case 0x52a008u: goto label_52a008;
        case 0x52a00cu: goto label_52a00c;
        case 0x52a010u: goto label_52a010;
        case 0x52a014u: goto label_52a014;
        case 0x52a018u: goto label_52a018;
        case 0x52a01cu: goto label_52a01c;
        case 0x52a020u: goto label_52a020;
        case 0x52a024u: goto label_52a024;
        case 0x52a028u: goto label_52a028;
        case 0x52a02cu: goto label_52a02c;
        case 0x52a030u: goto label_52a030;
        case 0x52a034u: goto label_52a034;
        case 0x52a038u: goto label_52a038;
        case 0x52a03cu: goto label_52a03c;
        case 0x52a040u: goto label_52a040;
        case 0x52a044u: goto label_52a044;
        case 0x52a048u: goto label_52a048;
        case 0x52a04cu: goto label_52a04c;
        case 0x52a050u: goto label_52a050;
        case 0x52a054u: goto label_52a054;
        case 0x52a058u: goto label_52a058;
        case 0x52a05cu: goto label_52a05c;
        case 0x52a060u: goto label_52a060;
        case 0x52a064u: goto label_52a064;
        case 0x52a068u: goto label_52a068;
        case 0x52a06cu: goto label_52a06c;
        case 0x52a070u: goto label_52a070;
        case 0x52a074u: goto label_52a074;
        case 0x52a078u: goto label_52a078;
        case 0x52a07cu: goto label_52a07c;
        case 0x52a080u: goto label_52a080;
        case 0x52a084u: goto label_52a084;
        case 0x52a088u: goto label_52a088;
        case 0x52a08cu: goto label_52a08c;
        case 0x52a090u: goto label_52a090;
        case 0x52a094u: goto label_52a094;
        case 0x52a098u: goto label_52a098;
        case 0x52a09cu: goto label_52a09c;
        case 0x52a0a0u: goto label_52a0a0;
        case 0x52a0a4u: goto label_52a0a4;
        case 0x52a0a8u: goto label_52a0a8;
        case 0x52a0acu: goto label_52a0ac;
        case 0x52a0b0u: goto label_52a0b0;
        case 0x52a0b4u: goto label_52a0b4;
        case 0x52a0b8u: goto label_52a0b8;
        case 0x52a0bcu: goto label_52a0bc;
        case 0x52a0c0u: goto label_52a0c0;
        case 0x52a0c4u: goto label_52a0c4;
        case 0x52a0c8u: goto label_52a0c8;
        case 0x52a0ccu: goto label_52a0cc;
        case 0x52a0d0u: goto label_52a0d0;
        case 0x52a0d4u: goto label_52a0d4;
        case 0x52a0d8u: goto label_52a0d8;
        case 0x52a0dcu: goto label_52a0dc;
        case 0x52a0e0u: goto label_52a0e0;
        case 0x52a0e4u: goto label_52a0e4;
        case 0x52a0e8u: goto label_52a0e8;
        case 0x52a0ecu: goto label_52a0ec;
        case 0x52a0f0u: goto label_52a0f0;
        case 0x52a0f4u: goto label_52a0f4;
        case 0x52a0f8u: goto label_52a0f8;
        case 0x52a0fcu: goto label_52a0fc;
        case 0x52a100u: goto label_52a100;
        case 0x52a104u: goto label_52a104;
        case 0x52a108u: goto label_52a108;
        case 0x52a10cu: goto label_52a10c;
        case 0x52a110u: goto label_52a110;
        case 0x52a114u: goto label_52a114;
        case 0x52a118u: goto label_52a118;
        case 0x52a11cu: goto label_52a11c;
        case 0x52a120u: goto label_52a120;
        case 0x52a124u: goto label_52a124;
        case 0x52a128u: goto label_52a128;
        case 0x52a12cu: goto label_52a12c;
        case 0x52a130u: goto label_52a130;
        case 0x52a134u: goto label_52a134;
        case 0x52a138u: goto label_52a138;
        case 0x52a13cu: goto label_52a13c;
        case 0x52a140u: goto label_52a140;
        case 0x52a144u: goto label_52a144;
        case 0x52a148u: goto label_52a148;
        case 0x52a14cu: goto label_52a14c;
        case 0x52a150u: goto label_52a150;
        case 0x52a154u: goto label_52a154;
        case 0x52a158u: goto label_52a158;
        case 0x52a15cu: goto label_52a15c;
        case 0x52a160u: goto label_52a160;
        case 0x52a164u: goto label_52a164;
        case 0x52a168u: goto label_52a168;
        case 0x52a16cu: goto label_52a16c;
        case 0x52a170u: goto label_52a170;
        case 0x52a174u: goto label_52a174;
        case 0x52a178u: goto label_52a178;
        case 0x52a17cu: goto label_52a17c;
        case 0x52a180u: goto label_52a180;
        case 0x52a184u: goto label_52a184;
        case 0x52a188u: goto label_52a188;
        case 0x52a18cu: goto label_52a18c;
        case 0x52a190u: goto label_52a190;
        case 0x52a194u: goto label_52a194;
        case 0x52a198u: goto label_52a198;
        case 0x52a19cu: goto label_52a19c;
        case 0x52a1a0u: goto label_52a1a0;
        case 0x52a1a4u: goto label_52a1a4;
        case 0x52a1a8u: goto label_52a1a8;
        case 0x52a1acu: goto label_52a1ac;
        case 0x52a1b0u: goto label_52a1b0;
        case 0x52a1b4u: goto label_52a1b4;
        case 0x52a1b8u: goto label_52a1b8;
        case 0x52a1bcu: goto label_52a1bc;
        case 0x52a1c0u: goto label_52a1c0;
        case 0x52a1c4u: goto label_52a1c4;
        case 0x52a1c8u: goto label_52a1c8;
        case 0x52a1ccu: goto label_52a1cc;
        case 0x52a1d0u: goto label_52a1d0;
        case 0x52a1d4u: goto label_52a1d4;
        case 0x52a1d8u: goto label_52a1d8;
        case 0x52a1dcu: goto label_52a1dc;
        case 0x52a1e0u: goto label_52a1e0;
        case 0x52a1e4u: goto label_52a1e4;
        case 0x52a1e8u: goto label_52a1e8;
        case 0x52a1ecu: goto label_52a1ec;
        case 0x52a1f0u: goto label_52a1f0;
        case 0x52a1f4u: goto label_52a1f4;
        case 0x52a1f8u: goto label_52a1f8;
        case 0x52a1fcu: goto label_52a1fc;
        case 0x52a200u: goto label_52a200;
        case 0x52a204u: goto label_52a204;
        case 0x52a208u: goto label_52a208;
        case 0x52a20cu: goto label_52a20c;
        case 0x52a210u: goto label_52a210;
        case 0x52a214u: goto label_52a214;
        case 0x52a218u: goto label_52a218;
        case 0x52a21cu: goto label_52a21c;
        case 0x52a220u: goto label_52a220;
        case 0x52a224u: goto label_52a224;
        case 0x52a228u: goto label_52a228;
        case 0x52a22cu: goto label_52a22c;
        case 0x52a230u: goto label_52a230;
        case 0x52a234u: goto label_52a234;
        case 0x52a238u: goto label_52a238;
        case 0x52a23cu: goto label_52a23c;
        case 0x52a240u: goto label_52a240;
        case 0x52a244u: goto label_52a244;
        case 0x52a248u: goto label_52a248;
        case 0x52a24cu: goto label_52a24c;
        case 0x52a250u: goto label_52a250;
        case 0x52a254u: goto label_52a254;
        case 0x52a258u: goto label_52a258;
        case 0x52a25cu: goto label_52a25c;
        case 0x52a260u: goto label_52a260;
        case 0x52a264u: goto label_52a264;
        case 0x52a268u: goto label_52a268;
        case 0x52a26cu: goto label_52a26c;
        case 0x52a270u: goto label_52a270;
        case 0x52a274u: goto label_52a274;
        case 0x52a278u: goto label_52a278;
        case 0x52a27cu: goto label_52a27c;
        case 0x52a280u: goto label_52a280;
        case 0x52a284u: goto label_52a284;
        case 0x52a288u: goto label_52a288;
        case 0x52a28cu: goto label_52a28c;
        case 0x52a290u: goto label_52a290;
        case 0x52a294u: goto label_52a294;
        case 0x52a298u: goto label_52a298;
        case 0x52a29cu: goto label_52a29c;
        case 0x52a2a0u: goto label_52a2a0;
        case 0x52a2a4u: goto label_52a2a4;
        case 0x52a2a8u: goto label_52a2a8;
        case 0x52a2acu: goto label_52a2ac;
        case 0x52a2b0u: goto label_52a2b0;
        case 0x52a2b4u: goto label_52a2b4;
        case 0x52a2b8u: goto label_52a2b8;
        case 0x52a2bcu: goto label_52a2bc;
        case 0x52a2c0u: goto label_52a2c0;
        case 0x52a2c4u: goto label_52a2c4;
        case 0x52a2c8u: goto label_52a2c8;
        case 0x52a2ccu: goto label_52a2cc;
        case 0x52a2d0u: goto label_52a2d0;
        case 0x52a2d4u: goto label_52a2d4;
        case 0x52a2d8u: goto label_52a2d8;
        case 0x52a2dcu: goto label_52a2dc;
        case 0x52a2e0u: goto label_52a2e0;
        case 0x52a2e4u: goto label_52a2e4;
        case 0x52a2e8u: goto label_52a2e8;
        case 0x52a2ecu: goto label_52a2ec;
        case 0x52a2f0u: goto label_52a2f0;
        case 0x52a2f4u: goto label_52a2f4;
        case 0x52a2f8u: goto label_52a2f8;
        case 0x52a2fcu: goto label_52a2fc;
        case 0x52a300u: goto label_52a300;
        case 0x52a304u: goto label_52a304;
        case 0x52a308u: goto label_52a308;
        case 0x52a30cu: goto label_52a30c;
        case 0x52a310u: goto label_52a310;
        case 0x52a314u: goto label_52a314;
        case 0x52a318u: goto label_52a318;
        case 0x52a31cu: goto label_52a31c;
        case 0x52a320u: goto label_52a320;
        case 0x52a324u: goto label_52a324;
        case 0x52a328u: goto label_52a328;
        case 0x52a32cu: goto label_52a32c;
        case 0x52a330u: goto label_52a330;
        case 0x52a334u: goto label_52a334;
        case 0x52a338u: goto label_52a338;
        case 0x52a33cu: goto label_52a33c;
        case 0x52a340u: goto label_52a340;
        case 0x52a344u: goto label_52a344;
        case 0x52a348u: goto label_52a348;
        case 0x52a34cu: goto label_52a34c;
        case 0x52a350u: goto label_52a350;
        case 0x52a354u: goto label_52a354;
        case 0x52a358u: goto label_52a358;
        case 0x52a35cu: goto label_52a35c;
        case 0x52a360u: goto label_52a360;
        case 0x52a364u: goto label_52a364;
        case 0x52a368u: goto label_52a368;
        case 0x52a36cu: goto label_52a36c;
        case 0x52a370u: goto label_52a370;
        case 0x52a374u: goto label_52a374;
        case 0x52a378u: goto label_52a378;
        case 0x52a37cu: goto label_52a37c;
        case 0x52a380u: goto label_52a380;
        case 0x52a384u: goto label_52a384;
        case 0x52a388u: goto label_52a388;
        case 0x52a38cu: goto label_52a38c;
        case 0x52a390u: goto label_52a390;
        case 0x52a394u: goto label_52a394;
        case 0x52a398u: goto label_52a398;
        case 0x52a39cu: goto label_52a39c;
        case 0x52a3a0u: goto label_52a3a0;
        case 0x52a3a4u: goto label_52a3a4;
        case 0x52a3a8u: goto label_52a3a8;
        case 0x52a3acu: goto label_52a3ac;
        case 0x52a3b0u: goto label_52a3b0;
        case 0x52a3b4u: goto label_52a3b4;
        case 0x52a3b8u: goto label_52a3b8;
        case 0x52a3bcu: goto label_52a3bc;
        case 0x52a3c0u: goto label_52a3c0;
        case 0x52a3c4u: goto label_52a3c4;
        case 0x52a3c8u: goto label_52a3c8;
        case 0x52a3ccu: goto label_52a3cc;
        case 0x52a3d0u: goto label_52a3d0;
        case 0x52a3d4u: goto label_52a3d4;
        case 0x52a3d8u: goto label_52a3d8;
        case 0x52a3dcu: goto label_52a3dc;
        case 0x52a3e0u: goto label_52a3e0;
        case 0x52a3e4u: goto label_52a3e4;
        case 0x52a3e8u: goto label_52a3e8;
        case 0x52a3ecu: goto label_52a3ec;
        case 0x52a3f0u: goto label_52a3f0;
        case 0x52a3f4u: goto label_52a3f4;
        case 0x52a3f8u: goto label_52a3f8;
        case 0x52a3fcu: goto label_52a3fc;
        case 0x52a400u: goto label_52a400;
        case 0x52a404u: goto label_52a404;
        case 0x52a408u: goto label_52a408;
        case 0x52a40cu: goto label_52a40c;
        case 0x52a410u: goto label_52a410;
        case 0x52a414u: goto label_52a414;
        case 0x52a418u: goto label_52a418;
        case 0x52a41cu: goto label_52a41c;
        case 0x52a420u: goto label_52a420;
        case 0x52a424u: goto label_52a424;
        case 0x52a428u: goto label_52a428;
        case 0x52a42cu: goto label_52a42c;
        case 0x52a430u: goto label_52a430;
        case 0x52a434u: goto label_52a434;
        case 0x52a438u: goto label_52a438;
        case 0x52a43cu: goto label_52a43c;
        case 0x52a440u: goto label_52a440;
        case 0x52a444u: goto label_52a444;
        case 0x52a448u: goto label_52a448;
        case 0x52a44cu: goto label_52a44c;
        case 0x52a450u: goto label_52a450;
        case 0x52a454u: goto label_52a454;
        case 0x52a458u: goto label_52a458;
        case 0x52a45cu: goto label_52a45c;
        case 0x52a460u: goto label_52a460;
        case 0x52a464u: goto label_52a464;
        case 0x52a468u: goto label_52a468;
        case 0x52a46cu: goto label_52a46c;
        case 0x52a470u: goto label_52a470;
        case 0x52a474u: goto label_52a474;
        case 0x52a478u: goto label_52a478;
        case 0x52a47cu: goto label_52a47c;
        case 0x52a480u: goto label_52a480;
        case 0x52a484u: goto label_52a484;
        case 0x52a488u: goto label_52a488;
        case 0x52a48cu: goto label_52a48c;
        case 0x52a490u: goto label_52a490;
        case 0x52a494u: goto label_52a494;
        case 0x52a498u: goto label_52a498;
        case 0x52a49cu: goto label_52a49c;
        case 0x52a4a0u: goto label_52a4a0;
        case 0x52a4a4u: goto label_52a4a4;
        case 0x52a4a8u: goto label_52a4a8;
        case 0x52a4acu: goto label_52a4ac;
        case 0x52a4b0u: goto label_52a4b0;
        case 0x52a4b4u: goto label_52a4b4;
        case 0x52a4b8u: goto label_52a4b8;
        case 0x52a4bcu: goto label_52a4bc;
        case 0x52a4c0u: goto label_52a4c0;
        case 0x52a4c4u: goto label_52a4c4;
        case 0x52a4c8u: goto label_52a4c8;
        case 0x52a4ccu: goto label_52a4cc;
        case 0x52a4d0u: goto label_52a4d0;
        case 0x52a4d4u: goto label_52a4d4;
        case 0x52a4d8u: goto label_52a4d8;
        case 0x52a4dcu: goto label_52a4dc;
        case 0x52a4e0u: goto label_52a4e0;
        case 0x52a4e4u: goto label_52a4e4;
        case 0x52a4e8u: goto label_52a4e8;
        case 0x52a4ecu: goto label_52a4ec;
        case 0x52a4f0u: goto label_52a4f0;
        case 0x52a4f4u: goto label_52a4f4;
        case 0x52a4f8u: goto label_52a4f8;
        case 0x52a4fcu: goto label_52a4fc;
        case 0x52a500u: goto label_52a500;
        case 0x52a504u: goto label_52a504;
        case 0x52a508u: goto label_52a508;
        case 0x52a50cu: goto label_52a50c;
        case 0x52a510u: goto label_52a510;
        case 0x52a514u: goto label_52a514;
        case 0x52a518u: goto label_52a518;
        case 0x52a51cu: goto label_52a51c;
        case 0x52a520u: goto label_52a520;
        case 0x52a524u: goto label_52a524;
        case 0x52a528u: goto label_52a528;
        case 0x52a52cu: goto label_52a52c;
        case 0x52a530u: goto label_52a530;
        case 0x52a534u: goto label_52a534;
        case 0x52a538u: goto label_52a538;
        case 0x52a53cu: goto label_52a53c;
        case 0x52a540u: goto label_52a540;
        case 0x52a544u: goto label_52a544;
        case 0x52a548u: goto label_52a548;
        case 0x52a54cu: goto label_52a54c;
        case 0x52a550u: goto label_52a550;
        case 0x52a554u: goto label_52a554;
        case 0x52a558u: goto label_52a558;
        case 0x52a55cu: goto label_52a55c;
        case 0x52a560u: goto label_52a560;
        case 0x52a564u: goto label_52a564;
        case 0x52a568u: goto label_52a568;
        case 0x52a56cu: goto label_52a56c;
        case 0x52a570u: goto label_52a570;
        case 0x52a574u: goto label_52a574;
        case 0x52a578u: goto label_52a578;
        case 0x52a57cu: goto label_52a57c;
        case 0x52a580u: goto label_52a580;
        case 0x52a584u: goto label_52a584;
        case 0x52a588u: goto label_52a588;
        case 0x52a58cu: goto label_52a58c;
        case 0x52a590u: goto label_52a590;
        case 0x52a594u: goto label_52a594;
        case 0x52a598u: goto label_52a598;
        case 0x52a59cu: goto label_52a59c;
        case 0x52a5a0u: goto label_52a5a0;
        case 0x52a5a4u: goto label_52a5a4;
        case 0x52a5a8u: goto label_52a5a8;
        case 0x52a5acu: goto label_52a5ac;
        case 0x52a5b0u: goto label_52a5b0;
        case 0x52a5b4u: goto label_52a5b4;
        case 0x52a5b8u: goto label_52a5b8;
        case 0x52a5bcu: goto label_52a5bc;
        case 0x52a5c0u: goto label_52a5c0;
        case 0x52a5c4u: goto label_52a5c4;
        case 0x52a5c8u: goto label_52a5c8;
        case 0x52a5ccu: goto label_52a5cc;
        case 0x52a5d0u: goto label_52a5d0;
        case 0x52a5d4u: goto label_52a5d4;
        case 0x52a5d8u: goto label_52a5d8;
        case 0x52a5dcu: goto label_52a5dc;
        case 0x52a5e0u: goto label_52a5e0;
        case 0x52a5e4u: goto label_52a5e4;
        case 0x52a5e8u: goto label_52a5e8;
        case 0x52a5ecu: goto label_52a5ec;
        case 0x52a5f0u: goto label_52a5f0;
        case 0x52a5f4u: goto label_52a5f4;
        case 0x52a5f8u: goto label_52a5f8;
        case 0x52a5fcu: goto label_52a5fc;
        case 0x52a600u: goto label_52a600;
        case 0x52a604u: goto label_52a604;
        case 0x52a608u: goto label_52a608;
        case 0x52a60cu: goto label_52a60c;
        case 0x52a610u: goto label_52a610;
        case 0x52a614u: goto label_52a614;
        case 0x52a618u: goto label_52a618;
        case 0x52a61cu: goto label_52a61c;
        case 0x52a620u: goto label_52a620;
        case 0x52a624u: goto label_52a624;
        case 0x52a628u: goto label_52a628;
        case 0x52a62cu: goto label_52a62c;
        case 0x52a630u: goto label_52a630;
        case 0x52a634u: goto label_52a634;
        case 0x52a638u: goto label_52a638;
        case 0x52a63cu: goto label_52a63c;
        case 0x52a640u: goto label_52a640;
        case 0x52a644u: goto label_52a644;
        case 0x52a648u: goto label_52a648;
        case 0x52a64cu: goto label_52a64c;
        default: break;
    }

    ctx->pc = 0x529e30u;

label_529e30:
    // 0x529e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x529e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_529e34:
    // 0x529e34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x529e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_529e38:
    // 0x529e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x529e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_529e3c:
    // 0x529e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x529e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_529e40:
    // 0x529e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x529e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_529e44:
    // 0x529e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x529e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_529e48:
    // 0x529e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_529e4c:
    // 0x529e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x529e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_529e50:
    // 0x529e50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x529e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_529e54:
    // 0x529e54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x529e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_529e58:
    // 0x529e58: 0xc10ca68  jal         func_4329A0
label_529e5c:
    if (ctx->pc == 0x529E5Cu) {
        ctx->pc = 0x529E5Cu;
            // 0x529e5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x529E60u;
        goto label_529e60;
    }
    ctx->pc = 0x529E58u;
    SET_GPR_U32(ctx, 31, 0x529E60u);
    ctx->pc = 0x529E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529E58u;
            // 0x529e5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529E60u; }
        if (ctx->pc != 0x529E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529E60u; }
        if (ctx->pc != 0x529E60u) { return; }
    }
    ctx->pc = 0x529E60u;
label_529e60:
    // 0x529e60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x529e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_529e64:
    // 0x529e64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x529e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_529e68:
    // 0x529e68: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x529e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_529e6c:
    // 0x529e6c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x529e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_529e70:
    // 0x529e70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x529e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_529e74:
    // 0x529e74: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x529e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_529e78:
    // 0x529e78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x529e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_529e7c:
    // 0x529e7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x529e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_529e80:
    // 0x529e80: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x529e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_529e84:
    // 0x529e84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x529e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_529e88:
    // 0x529e88: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x529e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_529e8c:
    // 0x529e8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x529e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_529e90:
    // 0x529e90: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x529e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_529e94:
    // 0x529e94: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x529e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_529e98:
    // 0x529e98: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x529e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_529e9c:
    // 0x529e9c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x529e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_529ea0:
    // 0x529ea0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x529ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_529ea4:
    // 0x529ea4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x529ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_529ea8:
    // 0x529ea8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x529ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_529eac:
    // 0x529eac: 0xc0582cc  jal         func_160B30
label_529eb0:
    if (ctx->pc == 0x529EB0u) {
        ctx->pc = 0x529EB0u;
            // 0x529eb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x529EB4u;
        goto label_529eb4;
    }
    ctx->pc = 0x529EACu;
    SET_GPR_U32(ctx, 31, 0x529EB4u);
    ctx->pc = 0x529EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529EACu;
            // 0x529eb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529EB4u; }
        if (ctx->pc != 0x529EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529EB4u; }
        if (ctx->pc != 0x529EB4u) { return; }
    }
    ctx->pc = 0x529EB4u;
label_529eb4:
    // 0x529eb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_529eb8:
    // 0x529eb8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x529eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_529ebc:
    // 0x529ebc: 0x24636758  addiu       $v1, $v1, 0x6758
    ctx->pc = 0x529ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26456));
label_529ec0:
    // 0x529ec0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x529ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_529ec4:
    // 0x529ec4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x529ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_529ec8:
    // 0x529ec8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x529ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_529ecc:
    // 0x529ecc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_529ed0:
    // 0x529ed0: 0xac44b600  sw          $a0, -0x4A00($v0)
    ctx->pc = 0x529ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948352), GPR_U32(ctx, 4));
label_529ed4:
    // 0x529ed4: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x529ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
label_529ed8:
    // 0x529ed8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_529edc:
    // 0x529edc: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x529edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
label_529ee0:
    // 0x529ee0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x529ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_529ee4:
    // 0x529ee4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x529ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_529ee8:
    // 0x529ee8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x529ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_529eec:
    // 0x529eec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x529eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_529ef0:
    // 0x529ef0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x529ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_529ef4:
    // 0x529ef4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x529ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_529ef8:
    // 0x529ef8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x529ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_529efc:
    // 0x529efc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x529efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_529f00:
    // 0x529f00: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x529f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_529f04:
    // 0x529f04: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x529f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_529f08:
    // 0x529f08: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x529f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_529f0c:
    // 0x529f0c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x529f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_529f10:
    // 0x529f10: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x529f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_529f14:
    // 0x529f14: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x529f14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_529f18:
    // 0x529f18: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x529f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_529f1c:
    // 0x529f1c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_529f20:
    if (ctx->pc == 0x529F20u) {
        ctx->pc = 0x529F24u;
        goto label_529f24;
    }
    ctx->pc = 0x529F1Cu;
    {
        const bool branch_taken_0x529f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x529f1c) {
            ctx->pc = 0x529FB8u;
            goto label_529fb8;
        }
    }
    ctx->pc = 0x529F24u;
label_529f24:
    // 0x529f24: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x529f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_529f28:
    // 0x529f28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x529f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_529f2c:
    // 0x529f2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x529f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_529f30:
    // 0x529f30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x529f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_529f34:
    // 0x529f34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x529f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_529f38:
    // 0x529f38: 0xc040138  jal         func_1004E0
label_529f3c:
    if (ctx->pc == 0x529F3Cu) {
        ctx->pc = 0x529F3Cu;
            // 0x529f3c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x529F40u;
        goto label_529f40;
    }
    ctx->pc = 0x529F38u;
    SET_GPR_U32(ctx, 31, 0x529F40u);
    ctx->pc = 0x529F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529F38u;
            // 0x529f3c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F40u; }
        if (ctx->pc != 0x529F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F40u; }
        if (ctx->pc != 0x529F40u) { return; }
    }
    ctx->pc = 0x529F40u;
label_529f40:
    // 0x529f40: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x529f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_529f44:
    // 0x529f44: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x529f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_529f48:
    // 0x529f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x529f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_529f4c:
    // 0x529f4c: 0x24a59fe0  addiu       $a1, $a1, -0x6020
    ctx->pc = 0x529f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942688));
label_529f50:
    // 0x529f50: 0x24c69330  addiu       $a2, $a2, -0x6CD0
    ctx->pc = 0x529f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939440));
label_529f54:
    // 0x529f54: 0x24070250  addiu       $a3, $zero, 0x250
    ctx->pc = 0x529f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_529f58:
    // 0x529f58: 0xc040840  jal         func_102100
label_529f5c:
    if (ctx->pc == 0x529F5Cu) {
        ctx->pc = 0x529F5Cu;
            // 0x529f5c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529F60u;
        goto label_529f60;
    }
    ctx->pc = 0x529F58u;
    SET_GPR_U32(ctx, 31, 0x529F60u);
    ctx->pc = 0x529F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529F58u;
            // 0x529f5c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F60u; }
        if (ctx->pc != 0x529F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F60u; }
        if (ctx->pc != 0x529F60u) { return; }
    }
    ctx->pc = 0x529F60u;
label_529f60:
    // 0x529f60: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x529f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_529f64:
    // 0x529f64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x529f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_529f68:
    // 0x529f68: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x529f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_529f6c:
    // 0x529f6c: 0xc0788fc  jal         func_1E23F0
label_529f70:
    if (ctx->pc == 0x529F70u) {
        ctx->pc = 0x529F70u;
            // 0x529f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529F74u;
        goto label_529f74;
    }
    ctx->pc = 0x529F6Cu;
    SET_GPR_U32(ctx, 31, 0x529F74u);
    ctx->pc = 0x529F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529F6Cu;
            // 0x529f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F74u; }
        if (ctx->pc != 0x529F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F74u; }
        if (ctx->pc != 0x529F74u) { return; }
    }
    ctx->pc = 0x529F74u;
label_529f74:
    // 0x529f74: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x529f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_529f78:
    // 0x529f78: 0xc0788fc  jal         func_1E23F0
label_529f7c:
    if (ctx->pc == 0x529F7Cu) {
        ctx->pc = 0x529F7Cu;
            // 0x529f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529F80u;
        goto label_529f80;
    }
    ctx->pc = 0x529F78u;
    SET_GPR_U32(ctx, 31, 0x529F80u);
    ctx->pc = 0x529F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529F78u;
            // 0x529f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F80u; }
        if (ctx->pc != 0x529F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529F80u; }
        if (ctx->pc != 0x529F80u) { return; }
    }
    ctx->pc = 0x529F80u;
label_529f80:
    // 0x529f80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x529f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529f84:
    // 0x529f84: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x529f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_529f88:
    // 0x529f88: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x529f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_529f8c:
    // 0x529f8c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x529f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_529f90:
    // 0x529f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x529f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_529f94:
    // 0x529f94: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x529f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_529f98:
    // 0x529f98: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x529f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_529f9c:
    // 0x529f9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x529f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_529fa0:
    // 0x529fa0: 0xc0a997c  jal         func_2A65F0
label_529fa4:
    if (ctx->pc == 0x529FA4u) {
        ctx->pc = 0x529FA4u;
            // 0x529fa4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x529FA8u;
        goto label_529fa8;
    }
    ctx->pc = 0x529FA0u;
    SET_GPR_U32(ctx, 31, 0x529FA8u);
    ctx->pc = 0x529FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529FA0u;
            // 0x529fa4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529FA8u; }
        if (ctx->pc != 0x529FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529FA8u; }
        if (ctx->pc != 0x529FA8u) { return; }
    }
    ctx->pc = 0x529FA8u;
label_529fa8:
    // 0x529fa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x529fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_529fac:
    // 0x529fac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x529facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_529fb0:
    // 0x529fb0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_529fb4:
    if (ctx->pc == 0x529FB4u) {
        ctx->pc = 0x529FB4u;
            // 0x529fb4: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->pc = 0x529FB8u;
        goto label_529fb8;
    }
    ctx->pc = 0x529FB0u;
    {
        const bool branch_taken_0x529fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x529FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529FB0u;
            // 0x529fb4: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529fb0) {
            ctx->pc = 0x529F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529f84;
        }
    }
    ctx->pc = 0x529FB8u;
label_529fb8:
    // 0x529fb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x529fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_529fbc:
    // 0x529fbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x529fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_529fc0:
    // 0x529fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x529fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_529fc4:
    // 0x529fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x529fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_529fc8:
    // 0x529fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_529fcc:
    // 0x529fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_529fd0:
    // 0x529fd0: 0x3e00008  jr          $ra
label_529fd4:
    if (ctx->pc == 0x529FD4u) {
        ctx->pc = 0x529FD4u;
            // 0x529fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x529FD8u;
        goto label_529fd8;
    }
    ctx->pc = 0x529FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529FD0u;
            // 0x529fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529FD8u;
label_529fd8:
    // 0x529fd8: 0x0  nop
    ctx->pc = 0x529fd8u;
    // NOP
label_529fdc:
    // 0x529fdc: 0x0  nop
    ctx->pc = 0x529fdcu;
    // NOP
label_529fe0:
    // 0x529fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x529fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_529fe4:
    // 0x529fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x529fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_529fe8:
    // 0x529fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_529fec:
    // 0x529fec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x529fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_529ff0:
    // 0x529ff0: 0xc0aeebc  jal         func_2BBAF0
label_529ff4:
    if (ctx->pc == 0x529FF4u) {
        ctx->pc = 0x529FF4u;
            // 0x529ff4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x529FF8u;
        goto label_529ff8;
    }
    ctx->pc = 0x529FF0u;
    SET_GPR_U32(ctx, 31, 0x529FF8u);
    ctx->pc = 0x529FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529FF0u;
            // 0x529ff4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529FF8u; }
        if (ctx->pc != 0x529FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529FF8u; }
        if (ctx->pc != 0x529FF8u) { return; }
    }
    ctx->pc = 0x529FF8u;
label_529ff8:
    // 0x529ff8: 0xc0aeeb4  jal         func_2BBAD0
label_529ffc:
    if (ctx->pc == 0x529FFCu) {
        ctx->pc = 0x529FFCu;
            // 0x529ffc: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x52A000u;
        goto label_52a000;
    }
    ctx->pc = 0x529FF8u;
    SET_GPR_U32(ctx, 31, 0x52A000u);
    ctx->pc = 0x529FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529FF8u;
            // 0x529ffc: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A000u; }
        if (ctx->pc != 0x52A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A000u; }
        if (ctx->pc != 0x52A000u) { return; }
    }
    ctx->pc = 0x52A000u;
label_52a000:
    // 0x52a000: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52a004:
    // 0x52a004: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52a008:
    // 0x52a008: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x52a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_52a00c:
    // 0x52a00c: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x52a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_52a010:
    // 0x52a010: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x52a010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_52a014:
    // 0x52a014: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x52a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_52a018:
    // 0x52a018: 0xc0aeea4  jal         func_2BBA90
label_52a01c:
    if (ctx->pc == 0x52A01Cu) {
        ctx->pc = 0x52A01Cu;
            // 0x52a01c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x52A020u;
        goto label_52a020;
    }
    ctx->pc = 0x52A018u;
    SET_GPR_U32(ctx, 31, 0x52A020u);
    ctx->pc = 0x52A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A018u;
            // 0x52a01c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A020u; }
        if (ctx->pc != 0x52A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A020u; }
        if (ctx->pc != 0x52A020u) { return; }
    }
    ctx->pc = 0x52A020u;
label_52a020:
    // 0x52a020: 0xc0aee8c  jal         func_2BBA30
label_52a024:
    if (ctx->pc == 0x52A024u) {
        ctx->pc = 0x52A024u;
            // 0x52a024: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x52A028u;
        goto label_52a028;
    }
    ctx->pc = 0x52A020u;
    SET_GPR_U32(ctx, 31, 0x52A028u);
    ctx->pc = 0x52A024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A020u;
            // 0x52a024: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A028u; }
        if (ctx->pc != 0x52A028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A028u; }
        if (ctx->pc != 0x52A028u) { return; }
    }
    ctx->pc = 0x52A028u;
label_52a028:
    // 0x52a028: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x52a028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_52a02c:
    // 0x52a02c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x52a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_52a030:
    // 0x52a030: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x52a030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_52a034:
    // 0x52a034: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x52a034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_52a038:
    // 0x52a038: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x52a038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_52a03c:
    // 0x52a03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a040:
    // 0x52a040: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x52a040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_52a044:
    // 0x52a044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x52a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52a048:
    // 0x52a048: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x52a048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_52a04c:
    // 0x52a04c: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x52a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_52a050:
    // 0x52a050: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x52a050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_52a054:
    // 0x52a054: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x52a054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_52a058:
    // 0x52a058: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x52a058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_52a05c:
    // 0x52a05c: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x52a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_52a060:
    // 0x52a060: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x52a060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_52a064:
    // 0x52a064: 0xc0775b8  jal         func_1DD6E0
label_52a068:
    if (ctx->pc == 0x52A068u) {
        ctx->pc = 0x52A068u;
            // 0x52a068: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x52A06Cu;
        goto label_52a06c;
    }
    ctx->pc = 0x52A064u;
    SET_GPR_U32(ctx, 31, 0x52A06Cu);
    ctx->pc = 0x52A068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A064u;
            // 0x52a068: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A06Cu; }
        if (ctx->pc != 0x52A06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A06Cu; }
        if (ctx->pc != 0x52A06Cu) { return; }
    }
    ctx->pc = 0x52A06Cu;
label_52a06c:
    // 0x52a06c: 0xc077314  jal         func_1DCC50
label_52a070:
    if (ctx->pc == 0x52A070u) {
        ctx->pc = 0x52A070u;
            // 0x52a070: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x52A074u;
        goto label_52a074;
    }
    ctx->pc = 0x52A06Cu;
    SET_GPR_U32(ctx, 31, 0x52A074u);
    ctx->pc = 0x52A070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A06Cu;
            // 0x52a070: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A074u; }
        if (ctx->pc != 0x52A074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A074u; }
        if (ctx->pc != 0x52A074u) { return; }
    }
    ctx->pc = 0x52A074u;
label_52a074:
    // 0x52a074: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x52a074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_52a078:
    // 0x52a078: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x52a078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_52a07c:
    // 0x52a07c: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x52a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_52a080:
    // 0x52a080: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x52a080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_52a084:
    // 0x52a084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52a088:
    // 0x52a088: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x52a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_52a08c:
    // 0x52a08c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x52a08cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_52a090:
    // 0x52a090: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52a090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52a094:
    // 0x52a094: 0x24636810  addiu       $v1, $v1, 0x6810
    ctx->pc = 0x52a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26640));
label_52a098:
    // 0x52a098: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x52a098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_52a09c:
    // 0x52a09c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52a0a0:
    // 0x52a0a0: 0x24426850  addiu       $v0, $v0, 0x6850
    ctx->pc = 0x52a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
label_52a0a4:
    // 0x52a0a4: 0xae2500c8  sw          $a1, 0xC8($s1)
    ctx->pc = 0x52a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
label_52a0a8:
    // 0x52a0a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x52a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_52a0ac:
    // 0x52a0ac: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x52a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_52a0b0:
    // 0x52a0b0: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x52a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_52a0b4:
    // 0x52a0b4: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x52a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_52a0b8:
    // 0x52a0b8: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x52a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_52a0bc:
    // 0x52a0bc: 0xc04c968  jal         func_1325A0
label_52a0c0:
    if (ctx->pc == 0x52A0C0u) {
        ctx->pc = 0x52A0C0u;
            // 0x52a0c0: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x52A0C4u;
        goto label_52a0c4;
    }
    ctx->pc = 0x52A0BCu;
    SET_GPR_U32(ctx, 31, 0x52A0C4u);
    ctx->pc = 0x52A0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0BCu;
            // 0x52a0c0: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0C4u; }
        if (ctx->pc != 0x52A0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0C4u; }
        if (ctx->pc != 0x52A0C4u) { return; }
    }
    ctx->pc = 0x52A0C4u;
label_52a0c4:
    // 0x52a0c4: 0xc04c968  jal         func_1325A0
label_52a0c8:
    if (ctx->pc == 0x52A0C8u) {
        ctx->pc = 0x52A0C8u;
            // 0x52a0c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x52A0CCu;
        goto label_52a0cc;
    }
    ctx->pc = 0x52A0C4u;
    SET_GPR_U32(ctx, 31, 0x52A0CCu);
    ctx->pc = 0x52A0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0C4u;
            // 0x52a0c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0CCu; }
        if (ctx->pc != 0x52A0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0CCu; }
        if (ctx->pc != 0x52A0CCu) { return; }
    }
    ctx->pc = 0x52A0CCu;
label_52a0cc:
    // 0x52a0cc: 0xc04c968  jal         func_1325A0
label_52a0d0:
    if (ctx->pc == 0x52A0D0u) {
        ctx->pc = 0x52A0D0u;
            // 0x52a0d0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x52A0D4u;
        goto label_52a0d4;
    }
    ctx->pc = 0x52A0CCu;
    SET_GPR_U32(ctx, 31, 0x52A0D4u);
    ctx->pc = 0x52A0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0CCu;
            // 0x52a0d0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0D4u; }
        if (ctx->pc != 0x52A0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0D4u; }
        if (ctx->pc != 0x52A0D4u) { return; }
    }
    ctx->pc = 0x52A0D4u;
label_52a0d4:
    // 0x52a0d4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x52a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_52a0d8:
    // 0x52a0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52a0dc:
    // 0x52a0dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x52a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_52a0e0:
    // 0x52a0e0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x52a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_52a0e4:
    // 0x52a0e4: 0xc04f26c  jal         func_13C9B0
label_52a0e8:
    if (ctx->pc == 0x52A0E8u) {
        ctx->pc = 0x52A0E8u;
            // 0x52a0e8: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x52A0ECu;
        goto label_52a0ec;
    }
    ctx->pc = 0x52A0E4u;
    SET_GPR_U32(ctx, 31, 0x52A0ECu);
    ctx->pc = 0x52A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0E4u;
            // 0x52a0e8: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0ECu; }
        if (ctx->pc != 0x52A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0ECu; }
        if (ctx->pc != 0x52A0ECu) { return; }
    }
    ctx->pc = 0x52A0ECu;
label_52a0ec:
    // 0x52a0ec: 0xc04c968  jal         func_1325A0
label_52a0f0:
    if (ctx->pc == 0x52A0F0u) {
        ctx->pc = 0x52A0F0u;
            // 0x52a0f0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x52A0F4u;
        goto label_52a0f4;
    }
    ctx->pc = 0x52A0ECu;
    SET_GPR_U32(ctx, 31, 0x52A0F4u);
    ctx->pc = 0x52A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0ECu;
            // 0x52a0f0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0F4u; }
        if (ctx->pc != 0x52A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A0F4u; }
        if (ctx->pc != 0x52A0F4u) { return; }
    }
    ctx->pc = 0x52A0F4u;
label_52a0f4:
    // 0x52a0f4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x52a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_52a0f8:
    // 0x52a0f8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x52a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_52a0fc:
    // 0x52a0fc: 0xc04cc04  jal         func_133010
label_52a100:
    if (ctx->pc == 0x52A100u) {
        ctx->pc = 0x52A100u;
            // 0x52a100: 0x24a5ccc0  addiu       $a1, $a1, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
        ctx->pc = 0x52A104u;
        goto label_52a104;
    }
    ctx->pc = 0x52A0FCu;
    SET_GPR_U32(ctx, 31, 0x52A104u);
    ctx->pc = 0x52A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A0FCu;
            // 0x52a100: 0x24a5ccc0  addiu       $a1, $a1, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A104u; }
        if (ctx->pc != 0x52A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A104u; }
        if (ctx->pc != 0x52A104u) { return; }
    }
    ctx->pc = 0x52A104u;
label_52a104:
    // 0x52a104: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x52a104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
label_52a108:
    // 0x52a108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52a108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a10c:
    // 0x52a10c: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x52a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
label_52a110:
    // 0x52a110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x52a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52a114:
    // 0x52a114: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x52a114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_52a118:
    // 0x52a118: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x52a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_52a11c:
    // 0x52a11c: 0xa62001f0  sh          $zero, 0x1F0($s1)
    ctx->pc = 0x52a11cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 496), (uint16_t)GPR_U32(ctx, 0));
label_52a120:
    // 0x52a120: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52a120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52a124:
    // 0x52a124: 0xa62001f2  sh          $zero, 0x1F2($s1)
    ctx->pc = 0x52a124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 498), (uint16_t)GPR_U32(ctx, 0));
label_52a128:
    // 0x52a128: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x52a128u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_52a12c:
    // 0x52a12c: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x52a12cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
label_52a130:
    // 0x52a130: 0xc04cbd8  jal         func_132F60
label_52a134:
    if (ctx->pc == 0x52A134u) {
        ctx->pc = 0x52A134u;
            // 0x52a134: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x52A138u;
        goto label_52a138;
    }
    ctx->pc = 0x52A130u;
    SET_GPR_U32(ctx, 31, 0x52A138u);
    ctx->pc = 0x52A134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A130u;
            // 0x52a134: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A138u; }
        if (ctx->pc != 0x52A138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A138u; }
        if (ctx->pc != 0x52A138u) { return; }
    }
    ctx->pc = 0x52A138u;
label_52a138:
    // 0x52a138: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52a138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a13c:
    // 0x52a13c: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x52a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_52a140:
    // 0x52a140: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52a140u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52a144:
    // 0x52a144: 0xc04cbd8  jal         func_132F60
label_52a148:
    if (ctx->pc == 0x52A148u) {
        ctx->pc = 0x52A148u;
            // 0x52a148: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52A14Cu;
        goto label_52a14c;
    }
    ctx->pc = 0x52A144u;
    SET_GPR_U32(ctx, 31, 0x52A14Cu);
    ctx->pc = 0x52A148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A144u;
            // 0x52a148: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A14Cu; }
        if (ctx->pc != 0x52A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A14Cu; }
        if (ctx->pc != 0x52A14Cu) { return; }
    }
    ctx->pc = 0x52A14Cu;
label_52a14c:
    // 0x52a14c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52a14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a150:
    // 0x52a150: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x52a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_52a154:
    // 0x52a154: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52a154u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52a158:
    // 0x52a158: 0xc04cbd8  jal         func_132F60
label_52a15c:
    if (ctx->pc == 0x52A15Cu) {
        ctx->pc = 0x52A15Cu;
            // 0x52a15c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52A160u;
        goto label_52a160;
    }
    ctx->pc = 0x52A158u;
    SET_GPR_U32(ctx, 31, 0x52A160u);
    ctx->pc = 0x52A15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A158u;
            // 0x52a15c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A160u; }
        if (ctx->pc != 0x52A160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A160u; }
        if (ctx->pc != 0x52A160u) { return; }
    }
    ctx->pc = 0x52A160u;
label_52a160:
    // 0x52a160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52a160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a164:
    // 0x52a164: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x52a164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_52a168:
    // 0x52a168: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52a168u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52a16c:
    // 0x52a16c: 0xc04cbd8  jal         func_132F60
label_52a170:
    if (ctx->pc == 0x52A170u) {
        ctx->pc = 0x52A170u;
            // 0x52a170: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52A174u;
        goto label_52a174;
    }
    ctx->pc = 0x52A16Cu;
    SET_GPR_U32(ctx, 31, 0x52A174u);
    ctx->pc = 0x52A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A16Cu;
            // 0x52a170: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A174u; }
        if (ctx->pc != 0x52A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A174u; }
        if (ctx->pc != 0x52A174u) { return; }
    }
    ctx->pc = 0x52A174u;
label_52a174:
    // 0x52a174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52a178:
    // 0x52a178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52a178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a17c:
    // 0x52a17c: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x52a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
label_52a180:
    // 0x52a180: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x52a180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
label_52a184:
    // 0x52a184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52a184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52a188:
    // 0x52a188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52a188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52a18c:
    // 0x52a18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52a18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52a190:
    // 0x52a190: 0x3e00008  jr          $ra
label_52a194:
    if (ctx->pc == 0x52A194u) {
        ctx->pc = 0x52A194u;
            // 0x52a194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52A198u;
        goto label_52a198;
    }
    ctx->pc = 0x52A190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A190u;
            // 0x52a194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A198u;
label_52a198:
    // 0x52a198: 0x0  nop
    ctx->pc = 0x52a198u;
    // NOP
label_52a19c:
    // 0x52a19c: 0x0  nop
    ctx->pc = 0x52a19cu;
    // NOP
label_52a1a0:
    // 0x52a1a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x52a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_52a1a4:
    // 0x52a1a4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x52a1a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52a1a8:
    // 0x52a1a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52a1ac:
    // 0x52a1ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x52a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_52a1b0:
    // 0x52a1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52a1b4:
    // 0x52a1b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x52a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_52a1b8:
    // 0x52a1b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_52a1bc:
    // 0x52a1bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52a1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a1c0:
    // 0x52a1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52a1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52a1c4:
    // 0x52a1c4: 0x24650820  addiu       $a1, $v1, 0x820
    ctx->pc = 0x52a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
label_52a1c8:
    // 0x52a1c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x52a1c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_52a1cc:
    // 0x52a1cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x52a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_52a1d0:
    // 0x52a1d0: 0x246602e0  addiu       $a2, $v1, 0x2E0
    ctx->pc = 0x52a1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_52a1d4:
    // 0x52a1d4: 0xc04cc7c  jal         func_1331F0
label_52a1d8:
    if (ctx->pc == 0x52A1D8u) {
        ctx->pc = 0x52A1D8u;
            // 0x52a1d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x52A1DCu;
        goto label_52a1dc;
    }
    ctx->pc = 0x52A1D4u;
    SET_GPR_U32(ctx, 31, 0x52A1DCu);
    ctx->pc = 0x52A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A1D4u;
            // 0x52a1d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A1DCu; }
        if (ctx->pc != 0x52A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A1DCu; }
        if (ctx->pc != 0x52A1DCu) { return; }
    }
    ctx->pc = 0x52A1DCu;
label_52a1dc:
    // 0x52a1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x52a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_52a1e0:
    // 0x52a1e0: 0xc04cc44  jal         func_133110
label_52a1e4:
    if (ctx->pc == 0x52A1E4u) {
        ctx->pc = 0x52A1E4u;
            // 0x52a1e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A1E8u;
        goto label_52a1e8;
    }
    ctx->pc = 0x52A1E0u;
    SET_GPR_U32(ctx, 31, 0x52A1E8u);
    ctx->pc = 0x52A1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A1E0u;
            // 0x52a1e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A1E8u; }
        if (ctx->pc != 0x52A1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A1E8u; }
        if (ctx->pc != 0x52A1E8u) { return; }
    }
    ctx->pc = 0x52A1E8u;
label_52a1e8:
    // 0x52a1e8: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x52a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_52a1ec:
    // 0x52a1ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x52a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_52a1f0:
    // 0x52a1f0: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x52a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_52a1f4:
    // 0x52a1f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52a1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52a1f8:
    // 0x52a1f8: 0xc04cc70  jal         func_1331C0
label_52a1fc:
    if (ctx->pc == 0x52A1FCu) {
        ctx->pc = 0x52A1FCu;
            // 0x52a1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A200u;
        goto label_52a200;
    }
    ctx->pc = 0x52A1F8u;
    SET_GPR_U32(ctx, 31, 0x52A200u);
    ctx->pc = 0x52A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A1F8u;
            // 0x52a1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A200u; }
        if (ctx->pc != 0x52A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A200u; }
        if (ctx->pc != 0x52A200u) { return; }
    }
    ctx->pc = 0x52A200u;
label_52a200:
    // 0x52a200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a204:
    // 0x52a204: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x52a204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_52a208:
    // 0x52a208: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x52a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52a20c:
    // 0x52a20c: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x52a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_52a210:
    // 0x52a210: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x52a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_52a214:
    // 0x52a214: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x52a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52a218:
    // 0x52a218: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52a21c:
    // 0x52a21c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52a220:
    // 0x52a220: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x52a220u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_52a224:
    // 0x52a224: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x52a224u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_52a228:
    // 0x52a228: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x52a228u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_52a22c:
    // 0x52a22c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x52a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52a230:
    // 0x52a230: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x52a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52a234:
    // 0x52a234: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x52a234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52a238:
    // 0x52a238: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x52a238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_52a23c:
    // 0x52a23c: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x52a23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_52a240:
    // 0x52a240: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x52a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_52a244:
    // 0x52a244: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x52a244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_52a248:
    // 0x52a248: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x52a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_52a24c:
    // 0x52a24c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x52a24cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_52a250:
    // 0x52a250: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x52a250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_52a254:
    // 0x52a254: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x52a254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_52a258:
    // 0x52a258: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x52a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_52a25c:
    // 0x52a25c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x52a25cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a260:
    // 0x52a260: 0xc088b74  jal         func_222DD0
label_52a264:
    if (ctx->pc == 0x52A264u) {
        ctx->pc = 0x52A264u;
            // 0x52a264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A268u;
        goto label_52a268;
    }
    ctx->pc = 0x52A260u;
    SET_GPR_U32(ctx, 31, 0x52A268u);
    ctx->pc = 0x52A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A260u;
            // 0x52a264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A268u; }
        if (ctx->pc != 0x52A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A268u; }
        if (ctx->pc != 0x52A268u) { return; }
    }
    ctx->pc = 0x52A268u;
label_52a268:
    // 0x52a268: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x52a268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_52a26c:
    // 0x52a26c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x52a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_52a270:
    // 0x52a270: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52a270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52a274:
    // 0x52a274: 0x320f809  jalr        $t9
label_52a278:
    if (ctx->pc == 0x52A278u) {
        ctx->pc = 0x52A278u;
            // 0x52a278: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52A27Cu;
        goto label_52a27c;
    }
    ctx->pc = 0x52A274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A27Cu);
        ctx->pc = 0x52A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A274u;
            // 0x52a278: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A27Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A27Cu; }
            if (ctx->pc != 0x52A27Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52A27Cu;
label_52a27c:
    // 0x52a27c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a280:
    // 0x52a280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x52a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a284:
    // 0x52a284: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x52a284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52a288:
    // 0x52a288: 0xc08914c  jal         func_224530
label_52a28c:
    if (ctx->pc == 0x52A28Cu) {
        ctx->pc = 0x52A28Cu;
            // 0x52a28c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A290u;
        goto label_52a290;
    }
    ctx->pc = 0x52A288u;
    SET_GPR_U32(ctx, 31, 0x52A290u);
    ctx->pc = 0x52A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A288u;
            // 0x52a28c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A290u; }
        if (ctx->pc != 0x52A290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A290u; }
        if (ctx->pc != 0x52A290u) { return; }
    }
    ctx->pc = 0x52A290u;
label_52a290:
    // 0x52a290: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x52a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a294:
    // 0x52a294: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x52a294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_52a298:
    // 0x52a298: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a29c:
    // 0x52a29c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a2a0:
    // 0x52a2a0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52a2a4:
    // 0x52a2a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52a2a8:
    // 0x52a2a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52a2ac:
    // 0x52a2ac: 0xc08bff0  jal         func_22FFC0
label_52a2b0:
    if (ctx->pc == 0x52A2B0u) {
        ctx->pc = 0x52A2B0u;
            // 0x52a2b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A2B4u;
        goto label_52a2b4;
    }
    ctx->pc = 0x52A2ACu;
    SET_GPR_U32(ctx, 31, 0x52A2B4u);
    ctx->pc = 0x52A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A2ACu;
            // 0x52a2b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A2B4u; }
        if (ctx->pc != 0x52A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A2B4u; }
        if (ctx->pc != 0x52A2B4u) { return; }
    }
    ctx->pc = 0x52A2B4u;
label_52a2b4:
    // 0x52a2b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a2b8:
    // 0x52a2b8: 0xc074740  jal         func_1D1D00
label_52a2bc:
    if (ctx->pc == 0x52A2BCu) {
        ctx->pc = 0x52A2BCu;
            // 0x52a2bc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x52A2C0u;
        goto label_52a2c0;
    }
    ctx->pc = 0x52A2B8u;
    SET_GPR_U32(ctx, 31, 0x52A2C0u);
    ctx->pc = 0x52A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A2B8u;
            // 0x52a2bc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A2C0u; }
        if (ctx->pc != 0x52A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A2C0u; }
        if (ctx->pc != 0x52A2C0u) { return; }
    }
    ctx->pc = 0x52A2C0u;
label_52a2c0:
    // 0x52a2c0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_52a2c4:
    if (ctx->pc == 0x52A2C4u) {
        ctx->pc = 0x52A2C4u;
            // 0x52a2c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x52A2C8u;
        goto label_52a2c8;
    }
    ctx->pc = 0x52A2C0u;
    {
        const bool branch_taken_0x52a2c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x52a2c0) {
            ctx->pc = 0x52A2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A2C0u;
            // 0x52a2c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A2D4u;
            goto label_52a2d4;
        }
    }
    ctx->pc = 0x52A2C8u;
label_52a2c8:
    // 0x52a2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52a2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a2cc:
    // 0x52a2cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_52a2d0:
    if (ctx->pc == 0x52A2D0u) {
        ctx->pc = 0x52A2D0u;
            // 0x52a2d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x52A2D4u;
        goto label_52a2d4;
    }
    ctx->pc = 0x52A2CCu;
    {
        const bool branch_taken_0x52a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A2CCu;
            // 0x52a2d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a2cc) {
            ctx->pc = 0x52A2ECu;
            goto label_52a2ec;
        }
    }
    ctx->pc = 0x52A2D4u;
label_52a2d4:
    // 0x52a2d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x52a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_52a2d8:
    // 0x52a2d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52a2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_52a2dc:
    // 0x52a2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52a2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a2e0:
    // 0x52a2e0: 0x0  nop
    ctx->pc = 0x52a2e0u;
    // NOP
label_52a2e4:
    // 0x52a2e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x52a2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_52a2e8:
    // 0x52a2e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x52a2e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_52a2ec:
    // 0x52a2ec: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x52a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_52a2f0:
    // 0x52a2f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a2f4:
    // 0x52a2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52a2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a2f8:
    // 0x52a2f8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x52a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_52a2fc:
    // 0x52a2fc: 0xc074740  jal         func_1D1D00
label_52a300:
    if (ctx->pc == 0x52A300u) {
        ctx->pc = 0x52A300u;
            // 0x52a300: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x52A304u;
        goto label_52a304;
    }
    ctx->pc = 0x52A2FCu;
    SET_GPR_U32(ctx, 31, 0x52A304u);
    ctx->pc = 0x52A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A2FCu;
            // 0x52a300: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A304u; }
        if (ctx->pc != 0x52A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A304u; }
        if (ctx->pc != 0x52A304u) { return; }
    }
    ctx->pc = 0x52A304u;
label_52a304:
    // 0x52a304: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_52a308:
    if (ctx->pc == 0x52A308u) {
        ctx->pc = 0x52A308u;
            // 0x52a308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x52A30Cu;
        goto label_52a30c;
    }
    ctx->pc = 0x52A304u;
    {
        const bool branch_taken_0x52a304 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x52a304) {
            ctx->pc = 0x52A308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A304u;
            // 0x52a308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A318u;
            goto label_52a318;
        }
    }
    ctx->pc = 0x52A30Cu;
label_52a30c:
    // 0x52a30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52a30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a310:
    // 0x52a310: 0x10000007  b           . + 4 + (0x7 << 2)
label_52a314:
    if (ctx->pc == 0x52A314u) {
        ctx->pc = 0x52A314u;
            // 0x52a314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x52A318u;
        goto label_52a318;
    }
    ctx->pc = 0x52A310u;
    {
        const bool branch_taken_0x52a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A310u;
            // 0x52a314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a310) {
            ctx->pc = 0x52A330u;
            goto label_52a330;
        }
    }
    ctx->pc = 0x52A318u;
label_52a318:
    // 0x52a318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x52a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_52a31c:
    // 0x52a31c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52a31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_52a320:
    // 0x52a320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52a320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a324:
    // 0x52a324: 0x0  nop
    ctx->pc = 0x52a324u;
    // NOP
label_52a328:
    // 0x52a328: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x52a328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_52a32c:
    // 0x52a32c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x52a32cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_52a330:
    // 0x52a330: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x52a330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_52a334:
    // 0x52a334: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a338:
    // 0x52a338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52a338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a33c:
    // 0x52a33c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x52a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_52a340:
    // 0x52a340: 0xc074740  jal         func_1D1D00
label_52a344:
    if (ctx->pc == 0x52A344u) {
        ctx->pc = 0x52A344u;
            // 0x52a344: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x52A348u;
        goto label_52a348;
    }
    ctx->pc = 0x52A340u;
    SET_GPR_U32(ctx, 31, 0x52A348u);
    ctx->pc = 0x52A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A340u;
            // 0x52a344: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A348u; }
        if (ctx->pc != 0x52A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A348u; }
        if (ctx->pc != 0x52A348u) { return; }
    }
    ctx->pc = 0x52A348u;
label_52a348:
    // 0x52a348: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_52a34c:
    if (ctx->pc == 0x52A34Cu) {
        ctx->pc = 0x52A34Cu;
            // 0x52a34c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x52A350u;
        goto label_52a350;
    }
    ctx->pc = 0x52A348u;
    {
        const bool branch_taken_0x52a348 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x52a348) {
            ctx->pc = 0x52A34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A348u;
            // 0x52a34c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A35Cu;
            goto label_52a35c;
        }
    }
    ctx->pc = 0x52A350u;
label_52a350:
    // 0x52a350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a354:
    // 0x52a354: 0x10000007  b           . + 4 + (0x7 << 2)
label_52a358:
    if (ctx->pc == 0x52A358u) {
        ctx->pc = 0x52A358u;
            // 0x52a358: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x52A35Cu;
        goto label_52a35c;
    }
    ctx->pc = 0x52A354u;
    {
        const bool branch_taken_0x52a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A354u;
            // 0x52a358: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a354) {
            ctx->pc = 0x52A374u;
            goto label_52a374;
        }
    }
    ctx->pc = 0x52A35Cu;
label_52a35c:
    // 0x52a35c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x52a35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_52a360:
    // 0x52a360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_52a364:
    // 0x52a364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52a364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a368:
    // 0x52a368: 0x0  nop
    ctx->pc = 0x52a368u;
    // NOP
label_52a36c:
    // 0x52a36c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x52a36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_52a370:
    // 0x52a370: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x52a370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_52a374:
    // 0x52a374: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x52a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_52a378:
    // 0x52a378: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x52a378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
label_52a37c:
    // 0x52a37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52a37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52a380:
    // 0x52a380: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x52a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_52a384:
    // 0x52a384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x52a384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_52a388:
    // 0x52a388: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x52a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
label_52a38c:
    // 0x52a38c: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x52a38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_52a390:
    // 0x52a390: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x52a390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_52a394:
    // 0x52a394: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x52a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_52a398:
    // 0x52a398: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x52a398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_52a39c:
    // 0x52a39c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x52a39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52a3a0:
    // 0x52a3a0: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x52a3a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_52a3a4:
    // 0x52a3a4: 0x0  nop
    ctx->pc = 0x52a3a4u;
    // NOP
label_52a3a8:
    // 0x52a3a8: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x52a3a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_52a3ac:
    // 0x52a3ac: 0x4600281d  msub.s      $f0, $f5, $f0
    ctx->pc = 0x52a3acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_52a3b0:
    // 0x52a3b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x52a3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_52a3b4:
    // 0x52a3b4: 0x0  nop
    ctx->pc = 0x52a3b4u;
    // NOP
label_52a3b8:
    // 0x52a3b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x52a3b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_52a3bc:
    // 0x52a3bc: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x52a3bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_52a3c0:
    // 0x52a3c0: 0x4614285d  msub.s      $f1, $f5, $f20
    ctx->pc = 0x52a3c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
label_52a3c4:
    // 0x52a3c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x52a3c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_52a3c8:
    // 0x52a3c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x52a3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_52a3cc:
    // 0x52a3cc: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x52a3ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_52a3d0:
    // 0x52a3d0: 0x4615281d  msub.s      $f0, $f5, $f21
    ctx->pc = 0x52a3d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
label_52a3d4:
    // 0x52a3d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x52a3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_52a3d8:
    // 0x52a3d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x52a3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_52a3dc:
    // 0x52a3dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x52a3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_52a3e0:
    // 0x52a3e0: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x52a3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a3e4:
    // 0x52a3e4: 0xc088b74  jal         func_222DD0
label_52a3e8:
    if (ctx->pc == 0x52A3E8u) {
        ctx->pc = 0x52A3E8u;
            // 0x52a3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A3ECu;
        goto label_52a3ec;
    }
    ctx->pc = 0x52A3E4u;
    SET_GPR_U32(ctx, 31, 0x52A3ECu);
    ctx->pc = 0x52A3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A3E4u;
            // 0x52a3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A3ECu; }
        if (ctx->pc != 0x52A3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A3ECu; }
        if (ctx->pc != 0x52A3ECu) { return; }
    }
    ctx->pc = 0x52A3ECu;
label_52a3ec:
    // 0x52a3ec: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x52a3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_52a3f0:
    // 0x52a3f0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x52a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_52a3f4:
    // 0x52a3f4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x52a3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_52a3f8:
    // 0x52a3f8: 0x320f809  jalr        $t9
label_52a3fc:
    if (ctx->pc == 0x52A3FCu) {
        ctx->pc = 0x52A3FCu;
            // 0x52a3fc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52A400u;
        goto label_52a400;
    }
    ctx->pc = 0x52A3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A400u);
        ctx->pc = 0x52A3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A3F8u;
            // 0x52a3fc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A400u; }
            if (ctx->pc != 0x52A400u) { return; }
        }
        }
    }
    ctx->pc = 0x52A400u;
label_52a400:
    // 0x52a400: 0x3c03423c  lui         $v1, 0x423C
    ctx->pc = 0x52a400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16956 << 16));
label_52a404:
    // 0x52a404: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x52a404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a408:
    // 0x52a408: 0x34667edd  ori         $a2, $v1, 0x7EDD
    ctx->pc = 0x52a408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32477);
label_52a40c:
    // 0x52a40c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x52a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_52a410:
    // 0x52a410: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x52a410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_52a414:
    // 0x52a414: 0xaca60158  sw          $a2, 0x158($a1)
    ctx->pc = 0x52a414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 6));
label_52a418:
    // 0x52a418: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x52a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a41c:
    // 0x52a41c: 0xac640160  sw          $a0, 0x160($v1)
    ctx->pc = 0x52a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
label_52a420:
    // 0x52a420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_52a424:
    // 0x52a424: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x52a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_52a428:
    // 0x52a428: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52a428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52a42c:
    // 0x52a42c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52a430:
    // 0x52a430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52a430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52a434:
    // 0x52a434: 0x3e00008  jr          $ra
label_52a438:
    if (ctx->pc == 0x52A438u) {
        ctx->pc = 0x52A438u;
            // 0x52a438: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52A43Cu;
        goto label_52a43c;
    }
    ctx->pc = 0x52A434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A434u;
            // 0x52a438: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A43Cu;
label_52a43c:
    // 0x52a43c: 0x0  nop
    ctx->pc = 0x52a43cu;
    // NOP
label_52a440:
    // 0x52a440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52a444:
    // 0x52a444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52a448:
    // 0x52a448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52a44c:
    // 0x52a44c: 0xc0e34b0  jal         func_38D2C0
label_52a450:
    if (ctx->pc == 0x52A450u) {
        ctx->pc = 0x52A450u;
            // 0x52a450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A454u;
        goto label_52a454;
    }
    ctx->pc = 0x52A44Cu;
    SET_GPR_U32(ctx, 31, 0x52A454u);
    ctx->pc = 0x52A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A44Cu;
            // 0x52a450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A454u; }
        if (ctx->pc != 0x52A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A454u; }
        if (ctx->pc != 0x52A454u) { return; }
    }
    ctx->pc = 0x52A454u;
label_52a454:
    // 0x52a454: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x52a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_52a458:
    // 0x52a458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a45c:
    // 0x52a45c: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
label_52a460:
    if (ctx->pc == 0x52A460u) {
        ctx->pc = 0x52A460u;
            // 0x52a460: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52A464u;
        goto label_52a464;
    }
    ctx->pc = 0x52A45Cu;
    {
        const bool branch_taken_0x52a45c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52a45c) {
            ctx->pc = 0x52A460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A45Cu;
            // 0x52a460: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A498u;
            goto label_52a498;
        }
    }
    ctx->pc = 0x52A464u;
label_52a464:
    // 0x52a464: 0x8e04024c  lw          $a0, 0x24C($s0)
    ctx->pc = 0x52a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
label_52a468:
    // 0x52a468: 0xc122c5c  jal         func_48B170
label_52a46c:
    if (ctx->pc == 0x52A46Cu) {
        ctx->pc = 0x52A46Cu;
            // 0x52a46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A470u;
        goto label_52a470;
    }
    ctx->pc = 0x52A468u;
    SET_GPR_U32(ctx, 31, 0x52A470u);
    ctx->pc = 0x52A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A468u;
            // 0x52a46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A470u; }
        if (ctx->pc != 0x52A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A470u; }
        if (ctx->pc != 0x52A470u) { return; }
    }
    ctx->pc = 0x52A470u;
label_52a470:
    // 0x52a470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52a474:
    // 0x52a474: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52a478:
    // 0x52a478: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52a47c:
    // 0x52a47c: 0x2463cc80  addiu       $v1, $v1, -0x3380
    ctx->pc = 0x52a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954112));
label_52a480:
    // 0x52a480: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x52a480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_52a484:
    // 0x52a484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x52a484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52a488:
    // 0x52a488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52a48c:
    // 0x52a48c: 0xc073234  jal         func_1CC8D0
label_52a490:
    if (ctx->pc == 0x52A490u) {
        ctx->pc = 0x52A490u;
            // 0x52a490: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x52A494u;
        goto label_52a494;
    }
    ctx->pc = 0x52A48Cu;
    SET_GPR_U32(ctx, 31, 0x52A494u);
    ctx->pc = 0x52A490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A48Cu;
            // 0x52a490: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A494u; }
        if (ctx->pc != 0x52A494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A494u; }
        if (ctx->pc != 0x52A494u) { return; }
    }
    ctx->pc = 0x52A494u;
label_52a494:
    // 0x52a494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52a498:
    // 0x52a498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52a49c:
    // 0x52a49c: 0x3e00008  jr          $ra
label_52a4a0:
    if (ctx->pc == 0x52A4A0u) {
        ctx->pc = 0x52A4A0u;
            // 0x52a4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52A4A4u;
        goto label_52a4a4;
    }
    ctx->pc = 0x52A49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A49Cu;
            // 0x52a4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A4A4u;
label_52a4a4:
    // 0x52a4a4: 0x0  nop
    ctx->pc = 0x52a4a4u;
    // NOP
label_52a4a8:
    // 0x52a4a8: 0x0  nop
    ctx->pc = 0x52a4a8u;
    // NOP
label_52a4ac:
    // 0x52a4ac: 0x0  nop
    ctx->pc = 0x52a4acu;
    // NOP
label_52a4b0:
    // 0x52a4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x52a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_52a4b4:
    // 0x52a4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a4b8:
    // 0x52a4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x52a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_52a4bc:
    // 0x52a4bc: 0x8c8500b4  lw          $a1, 0xB4($a0)
    ctx->pc = 0x52a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_52a4c0:
    // 0x52a4c0: 0x54a3000e  bnel        $a1, $v1, . + 4 + (0xE << 2)
label_52a4c4:
    if (ctx->pc == 0x52A4C4u) {
        ctx->pc = 0x52A4C4u;
            // 0x52a4c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x52A4C8u;
        goto label_52a4c8;
    }
    ctx->pc = 0x52A4C0u;
    {
        const bool branch_taken_0x52a4c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x52a4c0) {
            ctx->pc = 0x52A4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A4C0u;
            // 0x52a4c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A4FCu;
            goto label_52a4fc;
        }
    }
    ctx->pc = 0x52A4C8u;
label_52a4c8:
    // 0x52a4c8: 0x8c84024c  lw          $a0, 0x24C($a0)
    ctx->pc = 0x52a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
label_52a4cc:
    // 0x52a4cc: 0xc122c5c  jal         func_48B170
label_52a4d0:
    if (ctx->pc == 0x52A4D0u) {
        ctx->pc = 0x52A4D0u;
            // 0x52a4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A4D4u;
        goto label_52a4d4;
    }
    ctx->pc = 0x52A4CCu;
    SET_GPR_U32(ctx, 31, 0x52A4D4u);
    ctx->pc = 0x52A4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A4CCu;
            // 0x52a4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A4D4u; }
        if (ctx->pc != 0x52A4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A4D4u; }
        if (ctx->pc != 0x52A4D4u) { return; }
    }
    ctx->pc = 0x52A4D4u;
label_52a4d4:
    // 0x52a4d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52a4d8:
    // 0x52a4d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52a4dc:
    // 0x52a4dc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52a4e0:
    // 0x52a4e0: 0x2463cc80  addiu       $v1, $v1, -0x3380
    ctx->pc = 0x52a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954112));
label_52a4e4:
    // 0x52a4e4: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x52a4e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_52a4e8:
    // 0x52a4e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x52a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52a4ec:
    // 0x52a4ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52a4f0:
    // 0x52a4f0: 0xc073234  jal         func_1CC8D0
label_52a4f4:
    if (ctx->pc == 0x52A4F4u) {
        ctx->pc = 0x52A4F4u;
            // 0x52a4f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x52A4F8u;
        goto label_52a4f8;
    }
    ctx->pc = 0x52A4F0u;
    SET_GPR_U32(ctx, 31, 0x52A4F8u);
    ctx->pc = 0x52A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A4F0u;
            // 0x52a4f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A4F8u; }
        if (ctx->pc != 0x52A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A4F8u; }
        if (ctx->pc != 0x52A4F8u) { return; }
    }
    ctx->pc = 0x52A4F8u;
label_52a4f8:
    // 0x52a4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x52a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_52a4fc:
    // 0x52a4fc: 0x3e00008  jr          $ra
label_52a500:
    if (ctx->pc == 0x52A500u) {
        ctx->pc = 0x52A500u;
            // 0x52a500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x52A504u;
        goto label_52a504;
    }
    ctx->pc = 0x52A4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A4FCu;
            // 0x52a500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A504u;
label_52a504:
    // 0x52a504: 0x0  nop
    ctx->pc = 0x52a504u;
    // NOP
label_52a508:
    // 0x52a508: 0x0  nop
    ctx->pc = 0x52a508u;
    // NOP
label_52a50c:
    // 0x52a50c: 0x0  nop
    ctx->pc = 0x52a50cu;
    // NOP
label_52a510:
    // 0x52a510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52a514:
    // 0x52a514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52a518:
    // 0x52a518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52a51c:
    // 0x52a51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52a520:
    // 0x52a520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52a520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52a524:
    // 0x52a524: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x52a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_52a528:
    // 0x52a528: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52a52c:
    if (ctx->pc == 0x52A52Cu) {
        ctx->pc = 0x52A52Cu;
            // 0x52a52c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x52A530u;
        goto label_52a530;
    }
    ctx->pc = 0x52A528u;
    {
        const bool branch_taken_0x52a528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a528) {
            ctx->pc = 0x52A52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A528u;
            // 0x52a52c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A544u;
            goto label_52a544;
        }
    }
    ctx->pc = 0x52A530u;
label_52a530:
    // 0x52a530: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x52a530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_52a534:
    // 0x52a534: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52a534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52a538:
    // 0x52a538: 0x320f809  jalr        $t9
label_52a53c:
    if (ctx->pc == 0x52A53Cu) {
        ctx->pc = 0x52A53Cu;
            // 0x52a53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52A540u;
        goto label_52a540;
    }
    ctx->pc = 0x52A538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A540u);
        ctx->pc = 0x52A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A538u;
            // 0x52a53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A540u; }
            if (ctx->pc != 0x52A540u) { return; }
        }
        }
    }
    ctx->pc = 0x52A540u;
label_52a540:
    // 0x52a540: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x52a540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_52a544:
    // 0x52a544: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x52a544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_52a548:
    // 0x52a548: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_52a54c:
    if (ctx->pc == 0x52A54Cu) {
        ctx->pc = 0x52A54Cu;
            // 0x52a54c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x52A550u;
        goto label_52a550;
    }
    ctx->pc = 0x52A548u;
    {
        const bool branch_taken_0x52a548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a548) {
            ctx->pc = 0x52A54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A548u;
            // 0x52a54c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A584u;
            goto label_52a584;
        }
    }
    ctx->pc = 0x52A550u;
label_52a550:
    // 0x52a550: 0xc04008c  jal         func_100230
label_52a554:
    if (ctx->pc == 0x52A554u) {
        ctx->pc = 0x52A554u;
            // 0x52a554: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52A558u;
        goto label_52a558;
    }
    ctx->pc = 0x52A550u;
    SET_GPR_U32(ctx, 31, 0x52A558u);
    ctx->pc = 0x52A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A550u;
            // 0x52a554: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A558u; }
        if (ctx->pc != 0x52A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A558u; }
        if (ctx->pc != 0x52A558u) { return; }
    }
    ctx->pc = 0x52A558u;
label_52a558:
    // 0x52a558: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x52a558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_52a55c:
    // 0x52a55c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x52a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52a560:
    // 0x52a560: 0xc0407c0  jal         func_101F00
label_52a564:
    if (ctx->pc == 0x52A564u) {
        ctx->pc = 0x52A564u;
            // 0x52a564: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x52A568u;
        goto label_52a568;
    }
    ctx->pc = 0x52A560u;
    SET_GPR_U32(ctx, 31, 0x52A568u);
    ctx->pc = 0x52A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A560u;
            // 0x52a564: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A568u; }
        if (ctx->pc != 0x52A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A568u; }
        if (ctx->pc != 0x52A568u) { return; }
    }
    ctx->pc = 0x52A568u;
label_52a568:
    // 0x52a568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x52a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_52a56c:
    // 0x52a56c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x52a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52a570:
    // 0x52a570: 0xc0407c0  jal         func_101F00
label_52a574:
    if (ctx->pc == 0x52A574u) {
        ctx->pc = 0x52A574u;
            // 0x52a574: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x52A578u;
        goto label_52a578;
    }
    ctx->pc = 0x52A570u;
    SET_GPR_U32(ctx, 31, 0x52A578u);
    ctx->pc = 0x52A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A570u;
            // 0x52a574: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A578u; }
        if (ctx->pc != 0x52A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A578u; }
        if (ctx->pc != 0x52A578u) { return; }
    }
    ctx->pc = 0x52A578u;
label_52a578:
    // 0x52a578: 0xc0400a8  jal         func_1002A0
label_52a57c:
    if (ctx->pc == 0x52A57Cu) {
        ctx->pc = 0x52A57Cu;
            // 0x52a57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A580u;
        goto label_52a580;
    }
    ctx->pc = 0x52A578u;
    SET_GPR_U32(ctx, 31, 0x52A580u);
    ctx->pc = 0x52A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A578u;
            // 0x52a57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A580u; }
        if (ctx->pc != 0x52A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A580u; }
        if (ctx->pc != 0x52A580u) { return; }
    }
    ctx->pc = 0x52A580u;
label_52a580:
    // 0x52a580: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x52a580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_52a584:
    // 0x52a584: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x52a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_52a588:
    // 0x52a588: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52a58c:
    if (ctx->pc == 0x52A58Cu) {
        ctx->pc = 0x52A58Cu;
            // 0x52a58c: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->pc = 0x52A590u;
        goto label_52a590;
    }
    ctx->pc = 0x52A588u;
    {
        const bool branch_taken_0x52a588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a588) {
            ctx->pc = 0x52A58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A588u;
            // 0x52a58c: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A5A4u;
            goto label_52a5a4;
        }
    }
    ctx->pc = 0x52A590u;
label_52a590:
    // 0x52a590: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52a590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52a594:
    // 0x52a594: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52a594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52a598:
    // 0x52a598: 0x320f809  jalr        $t9
label_52a59c:
    if (ctx->pc == 0x52A59Cu) {
        ctx->pc = 0x52A59Cu;
            // 0x52a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52A5A0u;
        goto label_52a5a0;
    }
    ctx->pc = 0x52A598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A5A0u);
        ctx->pc = 0x52A59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A598u;
            // 0x52a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A5A0u; }
            if (ctx->pc != 0x52A5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x52A5A0u;
label_52a5a0:
    // 0x52a5a0: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x52a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
label_52a5a4:
    // 0x52a5a4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x52a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52a5a8:
    // 0x52a5a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52a5ac:
    if (ctx->pc == 0x52A5ACu) {
        ctx->pc = 0x52A5ACu;
            // 0x52a5ac: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x52A5B0u;
        goto label_52a5b0;
    }
    ctx->pc = 0x52A5A8u;
    {
        const bool branch_taken_0x52a5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a5a8) {
            ctx->pc = 0x52A5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A5A8u;
            // 0x52a5ac: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A5C4u;
            goto label_52a5c4;
        }
    }
    ctx->pc = 0x52A5B0u;
label_52a5b0:
    // 0x52a5b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52a5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52a5b4:
    // 0x52a5b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52a5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52a5b8:
    // 0x52a5b8: 0x320f809  jalr        $t9
label_52a5bc:
    if (ctx->pc == 0x52A5BCu) {
        ctx->pc = 0x52A5BCu;
            // 0x52a5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52A5C0u;
        goto label_52a5c0;
    }
    ctx->pc = 0x52A5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A5C0u);
        ctx->pc = 0x52A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A5B8u;
            // 0x52a5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A5C0u; }
            if (ctx->pc != 0x52A5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x52A5C0u;
label_52a5c0:
    // 0x52a5c0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x52a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_52a5c4:
    // 0x52a5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52a5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52a5c8:
    // 0x52a5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52a5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52a5cc:
    // 0x52a5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52a5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52a5d0:
    // 0x52a5d0: 0x3e00008  jr          $ra
label_52a5d4:
    if (ctx->pc == 0x52A5D4u) {
        ctx->pc = 0x52A5D4u;
            // 0x52a5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52A5D8u;
        goto label_52a5d8;
    }
    ctx->pc = 0x52A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A5D0u;
            // 0x52a5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A5D8u;
label_52a5d8:
    // 0x52a5d8: 0x0  nop
    ctx->pc = 0x52a5d8u;
    // NOP
label_52a5dc:
    // 0x52a5dc: 0x0  nop
    ctx->pc = 0x52a5dcu;
    // NOP
label_52a5e0:
    // 0x52a5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52a5e4:
    // 0x52a5e4: 0x3c02fede  lui         $v0, 0xFEDE
    ctx->pc = 0x52a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65246 << 16));
label_52a5e8:
    // 0x52a5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52a5ec:
    // 0x52a5ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x52a5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52a5f0:
    // 0x52a5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52a5f4:
    // 0x52a5f4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x52a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_52a5f8:
    // 0x52a5f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52a5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52a5fc:
    // 0x52a5fc: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x52a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52a600:
    // 0x52a600: 0x3444fedf  ori         $a0, $v0, 0xFEDF
    ctx->pc = 0x52a600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65247);
label_52a604:
    // 0x52a604: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x52a604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_52a608:
    // 0x52a608: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x52a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_52a60c:
    // 0x52a60c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x52a60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_52a610:
    // 0x52a610: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a614:
    // 0x52a614: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x52a614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52a618:
    // 0x52a618: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52a618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52a61c:
    // 0x52a61c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52a620:
    // 0x52a620: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52a624:
    // 0x52a624: 0xc08bff0  jal         func_22FFC0
label_52a628:
    if (ctx->pc == 0x52A628u) {
        ctx->pc = 0x52A628u;
            // 0x52a628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A62Cu;
        goto label_52a62c;
    }
    ctx->pc = 0x52A624u;
    SET_GPR_U32(ctx, 31, 0x52A62Cu);
    ctx->pc = 0x52A628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A624u;
            // 0x52a628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A62Cu; }
        if (ctx->pc != 0x52A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A62Cu; }
        if (ctx->pc != 0x52A62Cu) { return; }
    }
    ctx->pc = 0x52A62Cu;
label_52a62c:
    // 0x52a62c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x52a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52a630:
    // 0x52a630: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x52a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_52a634:
    // 0x52a634: 0x8e04024c  lw          $a0, 0x24C($s0)
    ctx->pc = 0x52a634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
label_52a638:
    // 0x52a638: 0xc122c5c  jal         func_48B170
label_52a63c:
    if (ctx->pc == 0x52A63Cu) {
        ctx->pc = 0x52A63Cu;
            // 0x52a63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A640u;
        goto label_52a640;
    }
    ctx->pc = 0x52A638u;
    SET_GPR_U32(ctx, 31, 0x52A640u);
    ctx->pc = 0x52A63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A638u;
            // 0x52a63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A640u; }
        if (ctx->pc != 0x52A640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A640u; }
        if (ctx->pc != 0x52A640u) { return; }
    }
    ctx->pc = 0x52A640u;
label_52a640:
    // 0x52a640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52a640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52a644:
    // 0x52a644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52a644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52a648:
    // 0x52a648: 0x3e00008  jr          $ra
label_52a64c:
    if (ctx->pc == 0x52A64Cu) {
        ctx->pc = 0x52A64Cu;
            // 0x52a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52A650u;
        goto label_fallthrough_0x52a648;
    }
    ctx->pc = 0x52A648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A648u;
            // 0x52a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x52a648:
    ctx->pc = 0x52A650u;
}
