#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00523C60
// Address: 0x523c60 - 0x524c30
void sub_00523C60_0x523c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00523C60_0x523c60");
#endif

    switch (ctx->pc) {
        case 0x523c60u: goto label_523c60;
        case 0x523c64u: goto label_523c64;
        case 0x523c68u: goto label_523c68;
        case 0x523c6cu: goto label_523c6c;
        case 0x523c70u: goto label_523c70;
        case 0x523c74u: goto label_523c74;
        case 0x523c78u: goto label_523c78;
        case 0x523c7cu: goto label_523c7c;
        case 0x523c80u: goto label_523c80;
        case 0x523c84u: goto label_523c84;
        case 0x523c88u: goto label_523c88;
        case 0x523c8cu: goto label_523c8c;
        case 0x523c90u: goto label_523c90;
        case 0x523c94u: goto label_523c94;
        case 0x523c98u: goto label_523c98;
        case 0x523c9cu: goto label_523c9c;
        case 0x523ca0u: goto label_523ca0;
        case 0x523ca4u: goto label_523ca4;
        case 0x523ca8u: goto label_523ca8;
        case 0x523cacu: goto label_523cac;
        case 0x523cb0u: goto label_523cb0;
        case 0x523cb4u: goto label_523cb4;
        case 0x523cb8u: goto label_523cb8;
        case 0x523cbcu: goto label_523cbc;
        case 0x523cc0u: goto label_523cc0;
        case 0x523cc4u: goto label_523cc4;
        case 0x523cc8u: goto label_523cc8;
        case 0x523cccu: goto label_523ccc;
        case 0x523cd0u: goto label_523cd0;
        case 0x523cd4u: goto label_523cd4;
        case 0x523cd8u: goto label_523cd8;
        case 0x523cdcu: goto label_523cdc;
        case 0x523ce0u: goto label_523ce0;
        case 0x523ce4u: goto label_523ce4;
        case 0x523ce8u: goto label_523ce8;
        case 0x523cecu: goto label_523cec;
        case 0x523cf0u: goto label_523cf0;
        case 0x523cf4u: goto label_523cf4;
        case 0x523cf8u: goto label_523cf8;
        case 0x523cfcu: goto label_523cfc;
        case 0x523d00u: goto label_523d00;
        case 0x523d04u: goto label_523d04;
        case 0x523d08u: goto label_523d08;
        case 0x523d0cu: goto label_523d0c;
        case 0x523d10u: goto label_523d10;
        case 0x523d14u: goto label_523d14;
        case 0x523d18u: goto label_523d18;
        case 0x523d1cu: goto label_523d1c;
        case 0x523d20u: goto label_523d20;
        case 0x523d24u: goto label_523d24;
        case 0x523d28u: goto label_523d28;
        case 0x523d2cu: goto label_523d2c;
        case 0x523d30u: goto label_523d30;
        case 0x523d34u: goto label_523d34;
        case 0x523d38u: goto label_523d38;
        case 0x523d3cu: goto label_523d3c;
        case 0x523d40u: goto label_523d40;
        case 0x523d44u: goto label_523d44;
        case 0x523d48u: goto label_523d48;
        case 0x523d4cu: goto label_523d4c;
        case 0x523d50u: goto label_523d50;
        case 0x523d54u: goto label_523d54;
        case 0x523d58u: goto label_523d58;
        case 0x523d5cu: goto label_523d5c;
        case 0x523d60u: goto label_523d60;
        case 0x523d64u: goto label_523d64;
        case 0x523d68u: goto label_523d68;
        case 0x523d6cu: goto label_523d6c;
        case 0x523d70u: goto label_523d70;
        case 0x523d74u: goto label_523d74;
        case 0x523d78u: goto label_523d78;
        case 0x523d7cu: goto label_523d7c;
        case 0x523d80u: goto label_523d80;
        case 0x523d84u: goto label_523d84;
        case 0x523d88u: goto label_523d88;
        case 0x523d8cu: goto label_523d8c;
        case 0x523d90u: goto label_523d90;
        case 0x523d94u: goto label_523d94;
        case 0x523d98u: goto label_523d98;
        case 0x523d9cu: goto label_523d9c;
        case 0x523da0u: goto label_523da0;
        case 0x523da4u: goto label_523da4;
        case 0x523da8u: goto label_523da8;
        case 0x523dacu: goto label_523dac;
        case 0x523db0u: goto label_523db0;
        case 0x523db4u: goto label_523db4;
        case 0x523db8u: goto label_523db8;
        case 0x523dbcu: goto label_523dbc;
        case 0x523dc0u: goto label_523dc0;
        case 0x523dc4u: goto label_523dc4;
        case 0x523dc8u: goto label_523dc8;
        case 0x523dccu: goto label_523dcc;
        case 0x523dd0u: goto label_523dd0;
        case 0x523dd4u: goto label_523dd4;
        case 0x523dd8u: goto label_523dd8;
        case 0x523ddcu: goto label_523ddc;
        case 0x523de0u: goto label_523de0;
        case 0x523de4u: goto label_523de4;
        case 0x523de8u: goto label_523de8;
        case 0x523decu: goto label_523dec;
        case 0x523df0u: goto label_523df0;
        case 0x523df4u: goto label_523df4;
        case 0x523df8u: goto label_523df8;
        case 0x523dfcu: goto label_523dfc;
        case 0x523e00u: goto label_523e00;
        case 0x523e04u: goto label_523e04;
        case 0x523e08u: goto label_523e08;
        case 0x523e0cu: goto label_523e0c;
        case 0x523e10u: goto label_523e10;
        case 0x523e14u: goto label_523e14;
        case 0x523e18u: goto label_523e18;
        case 0x523e1cu: goto label_523e1c;
        case 0x523e20u: goto label_523e20;
        case 0x523e24u: goto label_523e24;
        case 0x523e28u: goto label_523e28;
        case 0x523e2cu: goto label_523e2c;
        case 0x523e30u: goto label_523e30;
        case 0x523e34u: goto label_523e34;
        case 0x523e38u: goto label_523e38;
        case 0x523e3cu: goto label_523e3c;
        case 0x523e40u: goto label_523e40;
        case 0x523e44u: goto label_523e44;
        case 0x523e48u: goto label_523e48;
        case 0x523e4cu: goto label_523e4c;
        case 0x523e50u: goto label_523e50;
        case 0x523e54u: goto label_523e54;
        case 0x523e58u: goto label_523e58;
        case 0x523e5cu: goto label_523e5c;
        case 0x523e60u: goto label_523e60;
        case 0x523e64u: goto label_523e64;
        case 0x523e68u: goto label_523e68;
        case 0x523e6cu: goto label_523e6c;
        case 0x523e70u: goto label_523e70;
        case 0x523e74u: goto label_523e74;
        case 0x523e78u: goto label_523e78;
        case 0x523e7cu: goto label_523e7c;
        case 0x523e80u: goto label_523e80;
        case 0x523e84u: goto label_523e84;
        case 0x523e88u: goto label_523e88;
        case 0x523e8cu: goto label_523e8c;
        case 0x523e90u: goto label_523e90;
        case 0x523e94u: goto label_523e94;
        case 0x523e98u: goto label_523e98;
        case 0x523e9cu: goto label_523e9c;
        case 0x523ea0u: goto label_523ea0;
        case 0x523ea4u: goto label_523ea4;
        case 0x523ea8u: goto label_523ea8;
        case 0x523eacu: goto label_523eac;
        case 0x523eb0u: goto label_523eb0;
        case 0x523eb4u: goto label_523eb4;
        case 0x523eb8u: goto label_523eb8;
        case 0x523ebcu: goto label_523ebc;
        case 0x523ec0u: goto label_523ec0;
        case 0x523ec4u: goto label_523ec4;
        case 0x523ec8u: goto label_523ec8;
        case 0x523eccu: goto label_523ecc;
        case 0x523ed0u: goto label_523ed0;
        case 0x523ed4u: goto label_523ed4;
        case 0x523ed8u: goto label_523ed8;
        case 0x523edcu: goto label_523edc;
        case 0x523ee0u: goto label_523ee0;
        case 0x523ee4u: goto label_523ee4;
        case 0x523ee8u: goto label_523ee8;
        case 0x523eecu: goto label_523eec;
        case 0x523ef0u: goto label_523ef0;
        case 0x523ef4u: goto label_523ef4;
        case 0x523ef8u: goto label_523ef8;
        case 0x523efcu: goto label_523efc;
        case 0x523f00u: goto label_523f00;
        case 0x523f04u: goto label_523f04;
        case 0x523f08u: goto label_523f08;
        case 0x523f0cu: goto label_523f0c;
        case 0x523f10u: goto label_523f10;
        case 0x523f14u: goto label_523f14;
        case 0x523f18u: goto label_523f18;
        case 0x523f1cu: goto label_523f1c;
        case 0x523f20u: goto label_523f20;
        case 0x523f24u: goto label_523f24;
        case 0x523f28u: goto label_523f28;
        case 0x523f2cu: goto label_523f2c;
        case 0x523f30u: goto label_523f30;
        case 0x523f34u: goto label_523f34;
        case 0x523f38u: goto label_523f38;
        case 0x523f3cu: goto label_523f3c;
        case 0x523f40u: goto label_523f40;
        case 0x523f44u: goto label_523f44;
        case 0x523f48u: goto label_523f48;
        case 0x523f4cu: goto label_523f4c;
        case 0x523f50u: goto label_523f50;
        case 0x523f54u: goto label_523f54;
        case 0x523f58u: goto label_523f58;
        case 0x523f5cu: goto label_523f5c;
        case 0x523f60u: goto label_523f60;
        case 0x523f64u: goto label_523f64;
        case 0x523f68u: goto label_523f68;
        case 0x523f6cu: goto label_523f6c;
        case 0x523f70u: goto label_523f70;
        case 0x523f74u: goto label_523f74;
        case 0x523f78u: goto label_523f78;
        case 0x523f7cu: goto label_523f7c;
        case 0x523f80u: goto label_523f80;
        case 0x523f84u: goto label_523f84;
        case 0x523f88u: goto label_523f88;
        case 0x523f8cu: goto label_523f8c;
        case 0x523f90u: goto label_523f90;
        case 0x523f94u: goto label_523f94;
        case 0x523f98u: goto label_523f98;
        case 0x523f9cu: goto label_523f9c;
        case 0x523fa0u: goto label_523fa0;
        case 0x523fa4u: goto label_523fa4;
        case 0x523fa8u: goto label_523fa8;
        case 0x523facu: goto label_523fac;
        case 0x523fb0u: goto label_523fb0;
        case 0x523fb4u: goto label_523fb4;
        case 0x523fb8u: goto label_523fb8;
        case 0x523fbcu: goto label_523fbc;
        case 0x523fc0u: goto label_523fc0;
        case 0x523fc4u: goto label_523fc4;
        case 0x523fc8u: goto label_523fc8;
        case 0x523fccu: goto label_523fcc;
        case 0x523fd0u: goto label_523fd0;
        case 0x523fd4u: goto label_523fd4;
        case 0x523fd8u: goto label_523fd8;
        case 0x523fdcu: goto label_523fdc;
        case 0x523fe0u: goto label_523fe0;
        case 0x523fe4u: goto label_523fe4;
        case 0x523fe8u: goto label_523fe8;
        case 0x523fecu: goto label_523fec;
        case 0x523ff0u: goto label_523ff0;
        case 0x523ff4u: goto label_523ff4;
        case 0x523ff8u: goto label_523ff8;
        case 0x523ffcu: goto label_523ffc;
        case 0x524000u: goto label_524000;
        case 0x524004u: goto label_524004;
        case 0x524008u: goto label_524008;
        case 0x52400cu: goto label_52400c;
        case 0x524010u: goto label_524010;
        case 0x524014u: goto label_524014;
        case 0x524018u: goto label_524018;
        case 0x52401cu: goto label_52401c;
        case 0x524020u: goto label_524020;
        case 0x524024u: goto label_524024;
        case 0x524028u: goto label_524028;
        case 0x52402cu: goto label_52402c;
        case 0x524030u: goto label_524030;
        case 0x524034u: goto label_524034;
        case 0x524038u: goto label_524038;
        case 0x52403cu: goto label_52403c;
        case 0x524040u: goto label_524040;
        case 0x524044u: goto label_524044;
        case 0x524048u: goto label_524048;
        case 0x52404cu: goto label_52404c;
        case 0x524050u: goto label_524050;
        case 0x524054u: goto label_524054;
        case 0x524058u: goto label_524058;
        case 0x52405cu: goto label_52405c;
        case 0x524060u: goto label_524060;
        case 0x524064u: goto label_524064;
        case 0x524068u: goto label_524068;
        case 0x52406cu: goto label_52406c;
        case 0x524070u: goto label_524070;
        case 0x524074u: goto label_524074;
        case 0x524078u: goto label_524078;
        case 0x52407cu: goto label_52407c;
        case 0x524080u: goto label_524080;
        case 0x524084u: goto label_524084;
        case 0x524088u: goto label_524088;
        case 0x52408cu: goto label_52408c;
        case 0x524090u: goto label_524090;
        case 0x524094u: goto label_524094;
        case 0x524098u: goto label_524098;
        case 0x52409cu: goto label_52409c;
        case 0x5240a0u: goto label_5240a0;
        case 0x5240a4u: goto label_5240a4;
        case 0x5240a8u: goto label_5240a8;
        case 0x5240acu: goto label_5240ac;
        case 0x5240b0u: goto label_5240b0;
        case 0x5240b4u: goto label_5240b4;
        case 0x5240b8u: goto label_5240b8;
        case 0x5240bcu: goto label_5240bc;
        case 0x5240c0u: goto label_5240c0;
        case 0x5240c4u: goto label_5240c4;
        case 0x5240c8u: goto label_5240c8;
        case 0x5240ccu: goto label_5240cc;
        case 0x5240d0u: goto label_5240d0;
        case 0x5240d4u: goto label_5240d4;
        case 0x5240d8u: goto label_5240d8;
        case 0x5240dcu: goto label_5240dc;
        case 0x5240e0u: goto label_5240e0;
        case 0x5240e4u: goto label_5240e4;
        case 0x5240e8u: goto label_5240e8;
        case 0x5240ecu: goto label_5240ec;
        case 0x5240f0u: goto label_5240f0;
        case 0x5240f4u: goto label_5240f4;
        case 0x5240f8u: goto label_5240f8;
        case 0x5240fcu: goto label_5240fc;
        case 0x524100u: goto label_524100;
        case 0x524104u: goto label_524104;
        case 0x524108u: goto label_524108;
        case 0x52410cu: goto label_52410c;
        case 0x524110u: goto label_524110;
        case 0x524114u: goto label_524114;
        case 0x524118u: goto label_524118;
        case 0x52411cu: goto label_52411c;
        case 0x524120u: goto label_524120;
        case 0x524124u: goto label_524124;
        case 0x524128u: goto label_524128;
        case 0x52412cu: goto label_52412c;
        case 0x524130u: goto label_524130;
        case 0x524134u: goto label_524134;
        case 0x524138u: goto label_524138;
        case 0x52413cu: goto label_52413c;
        case 0x524140u: goto label_524140;
        case 0x524144u: goto label_524144;
        case 0x524148u: goto label_524148;
        case 0x52414cu: goto label_52414c;
        case 0x524150u: goto label_524150;
        case 0x524154u: goto label_524154;
        case 0x524158u: goto label_524158;
        case 0x52415cu: goto label_52415c;
        case 0x524160u: goto label_524160;
        case 0x524164u: goto label_524164;
        case 0x524168u: goto label_524168;
        case 0x52416cu: goto label_52416c;
        case 0x524170u: goto label_524170;
        case 0x524174u: goto label_524174;
        case 0x524178u: goto label_524178;
        case 0x52417cu: goto label_52417c;
        case 0x524180u: goto label_524180;
        case 0x524184u: goto label_524184;
        case 0x524188u: goto label_524188;
        case 0x52418cu: goto label_52418c;
        case 0x524190u: goto label_524190;
        case 0x524194u: goto label_524194;
        case 0x524198u: goto label_524198;
        case 0x52419cu: goto label_52419c;
        case 0x5241a0u: goto label_5241a0;
        case 0x5241a4u: goto label_5241a4;
        case 0x5241a8u: goto label_5241a8;
        case 0x5241acu: goto label_5241ac;
        case 0x5241b0u: goto label_5241b0;
        case 0x5241b4u: goto label_5241b4;
        case 0x5241b8u: goto label_5241b8;
        case 0x5241bcu: goto label_5241bc;
        case 0x5241c0u: goto label_5241c0;
        case 0x5241c4u: goto label_5241c4;
        case 0x5241c8u: goto label_5241c8;
        case 0x5241ccu: goto label_5241cc;
        case 0x5241d0u: goto label_5241d0;
        case 0x5241d4u: goto label_5241d4;
        case 0x5241d8u: goto label_5241d8;
        case 0x5241dcu: goto label_5241dc;
        case 0x5241e0u: goto label_5241e0;
        case 0x5241e4u: goto label_5241e4;
        case 0x5241e8u: goto label_5241e8;
        case 0x5241ecu: goto label_5241ec;
        case 0x5241f0u: goto label_5241f0;
        case 0x5241f4u: goto label_5241f4;
        case 0x5241f8u: goto label_5241f8;
        case 0x5241fcu: goto label_5241fc;
        case 0x524200u: goto label_524200;
        case 0x524204u: goto label_524204;
        case 0x524208u: goto label_524208;
        case 0x52420cu: goto label_52420c;
        case 0x524210u: goto label_524210;
        case 0x524214u: goto label_524214;
        case 0x524218u: goto label_524218;
        case 0x52421cu: goto label_52421c;
        case 0x524220u: goto label_524220;
        case 0x524224u: goto label_524224;
        case 0x524228u: goto label_524228;
        case 0x52422cu: goto label_52422c;
        case 0x524230u: goto label_524230;
        case 0x524234u: goto label_524234;
        case 0x524238u: goto label_524238;
        case 0x52423cu: goto label_52423c;
        case 0x524240u: goto label_524240;
        case 0x524244u: goto label_524244;
        case 0x524248u: goto label_524248;
        case 0x52424cu: goto label_52424c;
        case 0x524250u: goto label_524250;
        case 0x524254u: goto label_524254;
        case 0x524258u: goto label_524258;
        case 0x52425cu: goto label_52425c;
        case 0x524260u: goto label_524260;
        case 0x524264u: goto label_524264;
        case 0x524268u: goto label_524268;
        case 0x52426cu: goto label_52426c;
        case 0x524270u: goto label_524270;
        case 0x524274u: goto label_524274;
        case 0x524278u: goto label_524278;
        case 0x52427cu: goto label_52427c;
        case 0x524280u: goto label_524280;
        case 0x524284u: goto label_524284;
        case 0x524288u: goto label_524288;
        case 0x52428cu: goto label_52428c;
        case 0x524290u: goto label_524290;
        case 0x524294u: goto label_524294;
        case 0x524298u: goto label_524298;
        case 0x52429cu: goto label_52429c;
        case 0x5242a0u: goto label_5242a0;
        case 0x5242a4u: goto label_5242a4;
        case 0x5242a8u: goto label_5242a8;
        case 0x5242acu: goto label_5242ac;
        case 0x5242b0u: goto label_5242b0;
        case 0x5242b4u: goto label_5242b4;
        case 0x5242b8u: goto label_5242b8;
        case 0x5242bcu: goto label_5242bc;
        case 0x5242c0u: goto label_5242c0;
        case 0x5242c4u: goto label_5242c4;
        case 0x5242c8u: goto label_5242c8;
        case 0x5242ccu: goto label_5242cc;
        case 0x5242d0u: goto label_5242d0;
        case 0x5242d4u: goto label_5242d4;
        case 0x5242d8u: goto label_5242d8;
        case 0x5242dcu: goto label_5242dc;
        case 0x5242e0u: goto label_5242e0;
        case 0x5242e4u: goto label_5242e4;
        case 0x5242e8u: goto label_5242e8;
        case 0x5242ecu: goto label_5242ec;
        case 0x5242f0u: goto label_5242f0;
        case 0x5242f4u: goto label_5242f4;
        case 0x5242f8u: goto label_5242f8;
        case 0x5242fcu: goto label_5242fc;
        case 0x524300u: goto label_524300;
        case 0x524304u: goto label_524304;
        case 0x524308u: goto label_524308;
        case 0x52430cu: goto label_52430c;
        case 0x524310u: goto label_524310;
        case 0x524314u: goto label_524314;
        case 0x524318u: goto label_524318;
        case 0x52431cu: goto label_52431c;
        case 0x524320u: goto label_524320;
        case 0x524324u: goto label_524324;
        case 0x524328u: goto label_524328;
        case 0x52432cu: goto label_52432c;
        case 0x524330u: goto label_524330;
        case 0x524334u: goto label_524334;
        case 0x524338u: goto label_524338;
        case 0x52433cu: goto label_52433c;
        case 0x524340u: goto label_524340;
        case 0x524344u: goto label_524344;
        case 0x524348u: goto label_524348;
        case 0x52434cu: goto label_52434c;
        case 0x524350u: goto label_524350;
        case 0x524354u: goto label_524354;
        case 0x524358u: goto label_524358;
        case 0x52435cu: goto label_52435c;
        case 0x524360u: goto label_524360;
        case 0x524364u: goto label_524364;
        case 0x524368u: goto label_524368;
        case 0x52436cu: goto label_52436c;
        case 0x524370u: goto label_524370;
        case 0x524374u: goto label_524374;
        case 0x524378u: goto label_524378;
        case 0x52437cu: goto label_52437c;
        case 0x524380u: goto label_524380;
        case 0x524384u: goto label_524384;
        case 0x524388u: goto label_524388;
        case 0x52438cu: goto label_52438c;
        case 0x524390u: goto label_524390;
        case 0x524394u: goto label_524394;
        case 0x524398u: goto label_524398;
        case 0x52439cu: goto label_52439c;
        case 0x5243a0u: goto label_5243a0;
        case 0x5243a4u: goto label_5243a4;
        case 0x5243a8u: goto label_5243a8;
        case 0x5243acu: goto label_5243ac;
        case 0x5243b0u: goto label_5243b0;
        case 0x5243b4u: goto label_5243b4;
        case 0x5243b8u: goto label_5243b8;
        case 0x5243bcu: goto label_5243bc;
        case 0x5243c0u: goto label_5243c0;
        case 0x5243c4u: goto label_5243c4;
        case 0x5243c8u: goto label_5243c8;
        case 0x5243ccu: goto label_5243cc;
        case 0x5243d0u: goto label_5243d0;
        case 0x5243d4u: goto label_5243d4;
        case 0x5243d8u: goto label_5243d8;
        case 0x5243dcu: goto label_5243dc;
        case 0x5243e0u: goto label_5243e0;
        case 0x5243e4u: goto label_5243e4;
        case 0x5243e8u: goto label_5243e8;
        case 0x5243ecu: goto label_5243ec;
        case 0x5243f0u: goto label_5243f0;
        case 0x5243f4u: goto label_5243f4;
        case 0x5243f8u: goto label_5243f8;
        case 0x5243fcu: goto label_5243fc;
        case 0x524400u: goto label_524400;
        case 0x524404u: goto label_524404;
        case 0x524408u: goto label_524408;
        case 0x52440cu: goto label_52440c;
        case 0x524410u: goto label_524410;
        case 0x524414u: goto label_524414;
        case 0x524418u: goto label_524418;
        case 0x52441cu: goto label_52441c;
        case 0x524420u: goto label_524420;
        case 0x524424u: goto label_524424;
        case 0x524428u: goto label_524428;
        case 0x52442cu: goto label_52442c;
        case 0x524430u: goto label_524430;
        case 0x524434u: goto label_524434;
        case 0x524438u: goto label_524438;
        case 0x52443cu: goto label_52443c;
        case 0x524440u: goto label_524440;
        case 0x524444u: goto label_524444;
        case 0x524448u: goto label_524448;
        case 0x52444cu: goto label_52444c;
        case 0x524450u: goto label_524450;
        case 0x524454u: goto label_524454;
        case 0x524458u: goto label_524458;
        case 0x52445cu: goto label_52445c;
        case 0x524460u: goto label_524460;
        case 0x524464u: goto label_524464;
        case 0x524468u: goto label_524468;
        case 0x52446cu: goto label_52446c;
        case 0x524470u: goto label_524470;
        case 0x524474u: goto label_524474;
        case 0x524478u: goto label_524478;
        case 0x52447cu: goto label_52447c;
        case 0x524480u: goto label_524480;
        case 0x524484u: goto label_524484;
        case 0x524488u: goto label_524488;
        case 0x52448cu: goto label_52448c;
        case 0x524490u: goto label_524490;
        case 0x524494u: goto label_524494;
        case 0x524498u: goto label_524498;
        case 0x52449cu: goto label_52449c;
        case 0x5244a0u: goto label_5244a0;
        case 0x5244a4u: goto label_5244a4;
        case 0x5244a8u: goto label_5244a8;
        case 0x5244acu: goto label_5244ac;
        case 0x5244b0u: goto label_5244b0;
        case 0x5244b4u: goto label_5244b4;
        case 0x5244b8u: goto label_5244b8;
        case 0x5244bcu: goto label_5244bc;
        case 0x5244c0u: goto label_5244c0;
        case 0x5244c4u: goto label_5244c4;
        case 0x5244c8u: goto label_5244c8;
        case 0x5244ccu: goto label_5244cc;
        case 0x5244d0u: goto label_5244d0;
        case 0x5244d4u: goto label_5244d4;
        case 0x5244d8u: goto label_5244d8;
        case 0x5244dcu: goto label_5244dc;
        case 0x5244e0u: goto label_5244e0;
        case 0x5244e4u: goto label_5244e4;
        case 0x5244e8u: goto label_5244e8;
        case 0x5244ecu: goto label_5244ec;
        case 0x5244f0u: goto label_5244f0;
        case 0x5244f4u: goto label_5244f4;
        case 0x5244f8u: goto label_5244f8;
        case 0x5244fcu: goto label_5244fc;
        case 0x524500u: goto label_524500;
        case 0x524504u: goto label_524504;
        case 0x524508u: goto label_524508;
        case 0x52450cu: goto label_52450c;
        case 0x524510u: goto label_524510;
        case 0x524514u: goto label_524514;
        case 0x524518u: goto label_524518;
        case 0x52451cu: goto label_52451c;
        case 0x524520u: goto label_524520;
        case 0x524524u: goto label_524524;
        case 0x524528u: goto label_524528;
        case 0x52452cu: goto label_52452c;
        case 0x524530u: goto label_524530;
        case 0x524534u: goto label_524534;
        case 0x524538u: goto label_524538;
        case 0x52453cu: goto label_52453c;
        case 0x524540u: goto label_524540;
        case 0x524544u: goto label_524544;
        case 0x524548u: goto label_524548;
        case 0x52454cu: goto label_52454c;
        case 0x524550u: goto label_524550;
        case 0x524554u: goto label_524554;
        case 0x524558u: goto label_524558;
        case 0x52455cu: goto label_52455c;
        case 0x524560u: goto label_524560;
        case 0x524564u: goto label_524564;
        case 0x524568u: goto label_524568;
        case 0x52456cu: goto label_52456c;
        case 0x524570u: goto label_524570;
        case 0x524574u: goto label_524574;
        case 0x524578u: goto label_524578;
        case 0x52457cu: goto label_52457c;
        case 0x524580u: goto label_524580;
        case 0x524584u: goto label_524584;
        case 0x524588u: goto label_524588;
        case 0x52458cu: goto label_52458c;
        case 0x524590u: goto label_524590;
        case 0x524594u: goto label_524594;
        case 0x524598u: goto label_524598;
        case 0x52459cu: goto label_52459c;
        case 0x5245a0u: goto label_5245a0;
        case 0x5245a4u: goto label_5245a4;
        case 0x5245a8u: goto label_5245a8;
        case 0x5245acu: goto label_5245ac;
        case 0x5245b0u: goto label_5245b0;
        case 0x5245b4u: goto label_5245b4;
        case 0x5245b8u: goto label_5245b8;
        case 0x5245bcu: goto label_5245bc;
        case 0x5245c0u: goto label_5245c0;
        case 0x5245c4u: goto label_5245c4;
        case 0x5245c8u: goto label_5245c8;
        case 0x5245ccu: goto label_5245cc;
        case 0x5245d0u: goto label_5245d0;
        case 0x5245d4u: goto label_5245d4;
        case 0x5245d8u: goto label_5245d8;
        case 0x5245dcu: goto label_5245dc;
        case 0x5245e0u: goto label_5245e0;
        case 0x5245e4u: goto label_5245e4;
        case 0x5245e8u: goto label_5245e8;
        case 0x5245ecu: goto label_5245ec;
        case 0x5245f0u: goto label_5245f0;
        case 0x5245f4u: goto label_5245f4;
        case 0x5245f8u: goto label_5245f8;
        case 0x5245fcu: goto label_5245fc;
        case 0x524600u: goto label_524600;
        case 0x524604u: goto label_524604;
        case 0x524608u: goto label_524608;
        case 0x52460cu: goto label_52460c;
        case 0x524610u: goto label_524610;
        case 0x524614u: goto label_524614;
        case 0x524618u: goto label_524618;
        case 0x52461cu: goto label_52461c;
        case 0x524620u: goto label_524620;
        case 0x524624u: goto label_524624;
        case 0x524628u: goto label_524628;
        case 0x52462cu: goto label_52462c;
        case 0x524630u: goto label_524630;
        case 0x524634u: goto label_524634;
        case 0x524638u: goto label_524638;
        case 0x52463cu: goto label_52463c;
        case 0x524640u: goto label_524640;
        case 0x524644u: goto label_524644;
        case 0x524648u: goto label_524648;
        case 0x52464cu: goto label_52464c;
        case 0x524650u: goto label_524650;
        case 0x524654u: goto label_524654;
        case 0x524658u: goto label_524658;
        case 0x52465cu: goto label_52465c;
        case 0x524660u: goto label_524660;
        case 0x524664u: goto label_524664;
        case 0x524668u: goto label_524668;
        case 0x52466cu: goto label_52466c;
        case 0x524670u: goto label_524670;
        case 0x524674u: goto label_524674;
        case 0x524678u: goto label_524678;
        case 0x52467cu: goto label_52467c;
        case 0x524680u: goto label_524680;
        case 0x524684u: goto label_524684;
        case 0x524688u: goto label_524688;
        case 0x52468cu: goto label_52468c;
        case 0x524690u: goto label_524690;
        case 0x524694u: goto label_524694;
        case 0x524698u: goto label_524698;
        case 0x52469cu: goto label_52469c;
        case 0x5246a0u: goto label_5246a0;
        case 0x5246a4u: goto label_5246a4;
        case 0x5246a8u: goto label_5246a8;
        case 0x5246acu: goto label_5246ac;
        case 0x5246b0u: goto label_5246b0;
        case 0x5246b4u: goto label_5246b4;
        case 0x5246b8u: goto label_5246b8;
        case 0x5246bcu: goto label_5246bc;
        case 0x5246c0u: goto label_5246c0;
        case 0x5246c4u: goto label_5246c4;
        case 0x5246c8u: goto label_5246c8;
        case 0x5246ccu: goto label_5246cc;
        case 0x5246d0u: goto label_5246d0;
        case 0x5246d4u: goto label_5246d4;
        case 0x5246d8u: goto label_5246d8;
        case 0x5246dcu: goto label_5246dc;
        case 0x5246e0u: goto label_5246e0;
        case 0x5246e4u: goto label_5246e4;
        case 0x5246e8u: goto label_5246e8;
        case 0x5246ecu: goto label_5246ec;
        case 0x5246f0u: goto label_5246f0;
        case 0x5246f4u: goto label_5246f4;
        case 0x5246f8u: goto label_5246f8;
        case 0x5246fcu: goto label_5246fc;
        case 0x524700u: goto label_524700;
        case 0x524704u: goto label_524704;
        case 0x524708u: goto label_524708;
        case 0x52470cu: goto label_52470c;
        case 0x524710u: goto label_524710;
        case 0x524714u: goto label_524714;
        case 0x524718u: goto label_524718;
        case 0x52471cu: goto label_52471c;
        case 0x524720u: goto label_524720;
        case 0x524724u: goto label_524724;
        case 0x524728u: goto label_524728;
        case 0x52472cu: goto label_52472c;
        case 0x524730u: goto label_524730;
        case 0x524734u: goto label_524734;
        case 0x524738u: goto label_524738;
        case 0x52473cu: goto label_52473c;
        case 0x524740u: goto label_524740;
        case 0x524744u: goto label_524744;
        case 0x524748u: goto label_524748;
        case 0x52474cu: goto label_52474c;
        case 0x524750u: goto label_524750;
        case 0x524754u: goto label_524754;
        case 0x524758u: goto label_524758;
        case 0x52475cu: goto label_52475c;
        case 0x524760u: goto label_524760;
        case 0x524764u: goto label_524764;
        case 0x524768u: goto label_524768;
        case 0x52476cu: goto label_52476c;
        case 0x524770u: goto label_524770;
        case 0x524774u: goto label_524774;
        case 0x524778u: goto label_524778;
        case 0x52477cu: goto label_52477c;
        case 0x524780u: goto label_524780;
        case 0x524784u: goto label_524784;
        case 0x524788u: goto label_524788;
        case 0x52478cu: goto label_52478c;
        case 0x524790u: goto label_524790;
        case 0x524794u: goto label_524794;
        case 0x524798u: goto label_524798;
        case 0x52479cu: goto label_52479c;
        case 0x5247a0u: goto label_5247a0;
        case 0x5247a4u: goto label_5247a4;
        case 0x5247a8u: goto label_5247a8;
        case 0x5247acu: goto label_5247ac;
        case 0x5247b0u: goto label_5247b0;
        case 0x5247b4u: goto label_5247b4;
        case 0x5247b8u: goto label_5247b8;
        case 0x5247bcu: goto label_5247bc;
        case 0x5247c0u: goto label_5247c0;
        case 0x5247c4u: goto label_5247c4;
        case 0x5247c8u: goto label_5247c8;
        case 0x5247ccu: goto label_5247cc;
        case 0x5247d0u: goto label_5247d0;
        case 0x5247d4u: goto label_5247d4;
        case 0x5247d8u: goto label_5247d8;
        case 0x5247dcu: goto label_5247dc;
        case 0x5247e0u: goto label_5247e0;
        case 0x5247e4u: goto label_5247e4;
        case 0x5247e8u: goto label_5247e8;
        case 0x5247ecu: goto label_5247ec;
        case 0x5247f0u: goto label_5247f0;
        case 0x5247f4u: goto label_5247f4;
        case 0x5247f8u: goto label_5247f8;
        case 0x5247fcu: goto label_5247fc;
        case 0x524800u: goto label_524800;
        case 0x524804u: goto label_524804;
        case 0x524808u: goto label_524808;
        case 0x52480cu: goto label_52480c;
        case 0x524810u: goto label_524810;
        case 0x524814u: goto label_524814;
        case 0x524818u: goto label_524818;
        case 0x52481cu: goto label_52481c;
        case 0x524820u: goto label_524820;
        case 0x524824u: goto label_524824;
        case 0x524828u: goto label_524828;
        case 0x52482cu: goto label_52482c;
        case 0x524830u: goto label_524830;
        case 0x524834u: goto label_524834;
        case 0x524838u: goto label_524838;
        case 0x52483cu: goto label_52483c;
        case 0x524840u: goto label_524840;
        case 0x524844u: goto label_524844;
        case 0x524848u: goto label_524848;
        case 0x52484cu: goto label_52484c;
        case 0x524850u: goto label_524850;
        case 0x524854u: goto label_524854;
        case 0x524858u: goto label_524858;
        case 0x52485cu: goto label_52485c;
        case 0x524860u: goto label_524860;
        case 0x524864u: goto label_524864;
        case 0x524868u: goto label_524868;
        case 0x52486cu: goto label_52486c;
        case 0x524870u: goto label_524870;
        case 0x524874u: goto label_524874;
        case 0x524878u: goto label_524878;
        case 0x52487cu: goto label_52487c;
        case 0x524880u: goto label_524880;
        case 0x524884u: goto label_524884;
        case 0x524888u: goto label_524888;
        case 0x52488cu: goto label_52488c;
        case 0x524890u: goto label_524890;
        case 0x524894u: goto label_524894;
        case 0x524898u: goto label_524898;
        case 0x52489cu: goto label_52489c;
        case 0x5248a0u: goto label_5248a0;
        case 0x5248a4u: goto label_5248a4;
        case 0x5248a8u: goto label_5248a8;
        case 0x5248acu: goto label_5248ac;
        case 0x5248b0u: goto label_5248b0;
        case 0x5248b4u: goto label_5248b4;
        case 0x5248b8u: goto label_5248b8;
        case 0x5248bcu: goto label_5248bc;
        case 0x5248c0u: goto label_5248c0;
        case 0x5248c4u: goto label_5248c4;
        case 0x5248c8u: goto label_5248c8;
        case 0x5248ccu: goto label_5248cc;
        case 0x5248d0u: goto label_5248d0;
        case 0x5248d4u: goto label_5248d4;
        case 0x5248d8u: goto label_5248d8;
        case 0x5248dcu: goto label_5248dc;
        case 0x5248e0u: goto label_5248e0;
        case 0x5248e4u: goto label_5248e4;
        case 0x5248e8u: goto label_5248e8;
        case 0x5248ecu: goto label_5248ec;
        case 0x5248f0u: goto label_5248f0;
        case 0x5248f4u: goto label_5248f4;
        case 0x5248f8u: goto label_5248f8;
        case 0x5248fcu: goto label_5248fc;
        case 0x524900u: goto label_524900;
        case 0x524904u: goto label_524904;
        case 0x524908u: goto label_524908;
        case 0x52490cu: goto label_52490c;
        case 0x524910u: goto label_524910;
        case 0x524914u: goto label_524914;
        case 0x524918u: goto label_524918;
        case 0x52491cu: goto label_52491c;
        case 0x524920u: goto label_524920;
        case 0x524924u: goto label_524924;
        case 0x524928u: goto label_524928;
        case 0x52492cu: goto label_52492c;
        case 0x524930u: goto label_524930;
        case 0x524934u: goto label_524934;
        case 0x524938u: goto label_524938;
        case 0x52493cu: goto label_52493c;
        case 0x524940u: goto label_524940;
        case 0x524944u: goto label_524944;
        case 0x524948u: goto label_524948;
        case 0x52494cu: goto label_52494c;
        case 0x524950u: goto label_524950;
        case 0x524954u: goto label_524954;
        case 0x524958u: goto label_524958;
        case 0x52495cu: goto label_52495c;
        case 0x524960u: goto label_524960;
        case 0x524964u: goto label_524964;
        case 0x524968u: goto label_524968;
        case 0x52496cu: goto label_52496c;
        case 0x524970u: goto label_524970;
        case 0x524974u: goto label_524974;
        case 0x524978u: goto label_524978;
        case 0x52497cu: goto label_52497c;
        case 0x524980u: goto label_524980;
        case 0x524984u: goto label_524984;
        case 0x524988u: goto label_524988;
        case 0x52498cu: goto label_52498c;
        case 0x524990u: goto label_524990;
        case 0x524994u: goto label_524994;
        case 0x524998u: goto label_524998;
        case 0x52499cu: goto label_52499c;
        case 0x5249a0u: goto label_5249a0;
        case 0x5249a4u: goto label_5249a4;
        case 0x5249a8u: goto label_5249a8;
        case 0x5249acu: goto label_5249ac;
        case 0x5249b0u: goto label_5249b0;
        case 0x5249b4u: goto label_5249b4;
        case 0x5249b8u: goto label_5249b8;
        case 0x5249bcu: goto label_5249bc;
        case 0x5249c0u: goto label_5249c0;
        case 0x5249c4u: goto label_5249c4;
        case 0x5249c8u: goto label_5249c8;
        case 0x5249ccu: goto label_5249cc;
        case 0x5249d0u: goto label_5249d0;
        case 0x5249d4u: goto label_5249d4;
        case 0x5249d8u: goto label_5249d8;
        case 0x5249dcu: goto label_5249dc;
        case 0x5249e0u: goto label_5249e0;
        case 0x5249e4u: goto label_5249e4;
        case 0x5249e8u: goto label_5249e8;
        case 0x5249ecu: goto label_5249ec;
        case 0x5249f0u: goto label_5249f0;
        case 0x5249f4u: goto label_5249f4;
        case 0x5249f8u: goto label_5249f8;
        case 0x5249fcu: goto label_5249fc;
        case 0x524a00u: goto label_524a00;
        case 0x524a04u: goto label_524a04;
        case 0x524a08u: goto label_524a08;
        case 0x524a0cu: goto label_524a0c;
        case 0x524a10u: goto label_524a10;
        case 0x524a14u: goto label_524a14;
        case 0x524a18u: goto label_524a18;
        case 0x524a1cu: goto label_524a1c;
        case 0x524a20u: goto label_524a20;
        case 0x524a24u: goto label_524a24;
        case 0x524a28u: goto label_524a28;
        case 0x524a2cu: goto label_524a2c;
        case 0x524a30u: goto label_524a30;
        case 0x524a34u: goto label_524a34;
        case 0x524a38u: goto label_524a38;
        case 0x524a3cu: goto label_524a3c;
        case 0x524a40u: goto label_524a40;
        case 0x524a44u: goto label_524a44;
        case 0x524a48u: goto label_524a48;
        case 0x524a4cu: goto label_524a4c;
        case 0x524a50u: goto label_524a50;
        case 0x524a54u: goto label_524a54;
        case 0x524a58u: goto label_524a58;
        case 0x524a5cu: goto label_524a5c;
        case 0x524a60u: goto label_524a60;
        case 0x524a64u: goto label_524a64;
        case 0x524a68u: goto label_524a68;
        case 0x524a6cu: goto label_524a6c;
        case 0x524a70u: goto label_524a70;
        case 0x524a74u: goto label_524a74;
        case 0x524a78u: goto label_524a78;
        case 0x524a7cu: goto label_524a7c;
        case 0x524a80u: goto label_524a80;
        case 0x524a84u: goto label_524a84;
        case 0x524a88u: goto label_524a88;
        case 0x524a8cu: goto label_524a8c;
        case 0x524a90u: goto label_524a90;
        case 0x524a94u: goto label_524a94;
        case 0x524a98u: goto label_524a98;
        case 0x524a9cu: goto label_524a9c;
        case 0x524aa0u: goto label_524aa0;
        case 0x524aa4u: goto label_524aa4;
        case 0x524aa8u: goto label_524aa8;
        case 0x524aacu: goto label_524aac;
        case 0x524ab0u: goto label_524ab0;
        case 0x524ab4u: goto label_524ab4;
        case 0x524ab8u: goto label_524ab8;
        case 0x524abcu: goto label_524abc;
        case 0x524ac0u: goto label_524ac0;
        case 0x524ac4u: goto label_524ac4;
        case 0x524ac8u: goto label_524ac8;
        case 0x524accu: goto label_524acc;
        case 0x524ad0u: goto label_524ad0;
        case 0x524ad4u: goto label_524ad4;
        case 0x524ad8u: goto label_524ad8;
        case 0x524adcu: goto label_524adc;
        case 0x524ae0u: goto label_524ae0;
        case 0x524ae4u: goto label_524ae4;
        case 0x524ae8u: goto label_524ae8;
        case 0x524aecu: goto label_524aec;
        case 0x524af0u: goto label_524af0;
        case 0x524af4u: goto label_524af4;
        case 0x524af8u: goto label_524af8;
        case 0x524afcu: goto label_524afc;
        case 0x524b00u: goto label_524b00;
        case 0x524b04u: goto label_524b04;
        case 0x524b08u: goto label_524b08;
        case 0x524b0cu: goto label_524b0c;
        case 0x524b10u: goto label_524b10;
        case 0x524b14u: goto label_524b14;
        case 0x524b18u: goto label_524b18;
        case 0x524b1cu: goto label_524b1c;
        case 0x524b20u: goto label_524b20;
        case 0x524b24u: goto label_524b24;
        case 0x524b28u: goto label_524b28;
        case 0x524b2cu: goto label_524b2c;
        case 0x524b30u: goto label_524b30;
        case 0x524b34u: goto label_524b34;
        case 0x524b38u: goto label_524b38;
        case 0x524b3cu: goto label_524b3c;
        case 0x524b40u: goto label_524b40;
        case 0x524b44u: goto label_524b44;
        case 0x524b48u: goto label_524b48;
        case 0x524b4cu: goto label_524b4c;
        case 0x524b50u: goto label_524b50;
        case 0x524b54u: goto label_524b54;
        case 0x524b58u: goto label_524b58;
        case 0x524b5cu: goto label_524b5c;
        case 0x524b60u: goto label_524b60;
        case 0x524b64u: goto label_524b64;
        case 0x524b68u: goto label_524b68;
        case 0x524b6cu: goto label_524b6c;
        case 0x524b70u: goto label_524b70;
        case 0x524b74u: goto label_524b74;
        case 0x524b78u: goto label_524b78;
        case 0x524b7cu: goto label_524b7c;
        case 0x524b80u: goto label_524b80;
        case 0x524b84u: goto label_524b84;
        case 0x524b88u: goto label_524b88;
        case 0x524b8cu: goto label_524b8c;
        case 0x524b90u: goto label_524b90;
        case 0x524b94u: goto label_524b94;
        case 0x524b98u: goto label_524b98;
        case 0x524b9cu: goto label_524b9c;
        case 0x524ba0u: goto label_524ba0;
        case 0x524ba4u: goto label_524ba4;
        case 0x524ba8u: goto label_524ba8;
        case 0x524bacu: goto label_524bac;
        case 0x524bb0u: goto label_524bb0;
        case 0x524bb4u: goto label_524bb4;
        case 0x524bb8u: goto label_524bb8;
        case 0x524bbcu: goto label_524bbc;
        case 0x524bc0u: goto label_524bc0;
        case 0x524bc4u: goto label_524bc4;
        case 0x524bc8u: goto label_524bc8;
        case 0x524bccu: goto label_524bcc;
        case 0x524bd0u: goto label_524bd0;
        case 0x524bd4u: goto label_524bd4;
        case 0x524bd8u: goto label_524bd8;
        case 0x524bdcu: goto label_524bdc;
        case 0x524be0u: goto label_524be0;
        case 0x524be4u: goto label_524be4;
        case 0x524be8u: goto label_524be8;
        case 0x524becu: goto label_524bec;
        case 0x524bf0u: goto label_524bf0;
        case 0x524bf4u: goto label_524bf4;
        case 0x524bf8u: goto label_524bf8;
        case 0x524bfcu: goto label_524bfc;
        case 0x524c00u: goto label_524c00;
        case 0x524c04u: goto label_524c04;
        case 0x524c08u: goto label_524c08;
        case 0x524c0cu: goto label_524c0c;
        case 0x524c10u: goto label_524c10;
        case 0x524c14u: goto label_524c14;
        case 0x524c18u: goto label_524c18;
        case 0x524c1cu: goto label_524c1c;
        case 0x524c20u: goto label_524c20;
        case 0x524c24u: goto label_524c24;
        case 0x524c28u: goto label_524c28;
        case 0x524c2cu: goto label_524c2c;
        default: break;
    }

    ctx->pc = 0x523c60u;

label_523c60:
    // 0x523c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x523c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_523c64:
    // 0x523c64: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x523c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_523c68:
    // 0x523c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x523c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_523c6c:
    // 0x523c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x523c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_523c70:
    // 0x523c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x523c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_523c74:
    // 0x523c74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x523c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_523c78:
    // 0x523c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_523c7c:
    // 0x523c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523c80:
    // 0x523c80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x523c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_523c84:
    // 0x523c84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x523c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_523c88:
    // 0x523c88: 0xc10ca68  jal         func_4329A0
label_523c8c:
    if (ctx->pc == 0x523C8Cu) {
        ctx->pc = 0x523C8Cu;
            // 0x523c8c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x523C90u;
        goto label_523c90;
    }
    ctx->pc = 0x523C88u;
    SET_GPR_U32(ctx, 31, 0x523C90u);
    ctx->pc = 0x523C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523C88u;
            // 0x523c8c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C90u; }
        if (ctx->pc != 0x523C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C90u; }
        if (ctx->pc != 0x523C90u) { return; }
    }
    ctx->pc = 0x523C90u;
label_523c90:
    // 0x523c90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x523c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_523c94:
    // 0x523c94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x523c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_523c98:
    // 0x523c98: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x523c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_523c9c:
    // 0x523c9c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x523c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_523ca0:
    // 0x523ca0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x523ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_523ca4:
    // 0x523ca4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x523ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_523ca8:
    // 0x523ca8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x523ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_523cac:
    // 0x523cac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x523cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_523cb0:
    // 0x523cb0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x523cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_523cb4:
    // 0x523cb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x523cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_523cb8:
    // 0x523cb8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x523cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_523cbc:
    // 0x523cbc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x523cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_523cc0:
    // 0x523cc0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x523cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_523cc4:
    // 0x523cc4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x523cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_523cc8:
    // 0x523cc8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x523cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_523ccc:
    // 0x523ccc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x523cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_523cd0:
    // 0x523cd0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x523cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_523cd4:
    // 0x523cd4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x523cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_523cd8:
    // 0x523cd8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x523cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_523cdc:
    // 0x523cdc: 0xc0582cc  jal         func_160B30
label_523ce0:
    if (ctx->pc == 0x523CE0u) {
        ctx->pc = 0x523CE0u;
            // 0x523ce0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x523CE4u;
        goto label_523ce4;
    }
    ctx->pc = 0x523CDCu;
    SET_GPR_U32(ctx, 31, 0x523CE4u);
    ctx->pc = 0x523CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523CDCu;
            // 0x523ce0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523CE4u; }
        if (ctx->pc != 0x523CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523CE4u; }
        if (ctx->pc != 0x523CE4u) { return; }
    }
    ctx->pc = 0x523CE4u;
label_523ce4:
    // 0x523ce4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523ce8:
    // 0x523ce8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x523ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_523cec:
    // 0x523cec: 0x24636148  addiu       $v1, $v1, 0x6148
    ctx->pc = 0x523cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24904));
label_523cf0:
    // 0x523cf0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x523cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_523cf4:
    // 0x523cf4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x523cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_523cf8:
    // 0x523cf8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x523cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_523cfc:
    // 0x523cfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523d00:
    // 0x523d00: 0xac44ab58  sw          $a0, -0x54A8($v0)
    ctx->pc = 0x523d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945624), GPR_U32(ctx, 4));
label_523d04:
    // 0x523d04: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x523d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
label_523d08:
    // 0x523d08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_523d0c:
    // 0x523d0c: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x523d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
label_523d10:
    // 0x523d10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x523d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_523d14:
    // 0x523d14: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x523d14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_523d18:
    // 0x523d18: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x523d18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_523d1c:
    // 0x523d1c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x523d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_523d20:
    // 0x523d20: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x523d20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_523d24:
    // 0x523d24: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x523d24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_523d28:
    // 0x523d28: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x523d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_523d2c:
    // 0x523d2c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x523d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_523d30:
    // 0x523d30: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x523d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_523d34:
    // 0x523d34: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x523d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_523d38:
    // 0x523d38: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x523d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_523d3c:
    // 0x523d3c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x523d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_523d40:
    // 0x523d40: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x523d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_523d44:
    // 0x523d44: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x523d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_523d48:
    // 0x523d48: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x523d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_523d4c:
    // 0x523d4c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x523d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_523d50:
    // 0x523d50: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x523d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_523d54:
    // 0x523d54: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x523d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_523d58:
    // 0x523d58: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x523d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_523d5c:
    // 0x523d5c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_523d60:
    if (ctx->pc == 0x523D60u) {
        ctx->pc = 0x523D64u;
        goto label_523d64;
    }
    ctx->pc = 0x523D5Cu;
    {
        const bool branch_taken_0x523d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x523d5c) {
            ctx->pc = 0x523DF0u;
            goto label_523df0;
        }
    }
    ctx->pc = 0x523D64u;
label_523d64:
    // 0x523d64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x523d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_523d68:
    // 0x523d68: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x523d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_523d6c:
    // 0x523d6c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x523d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_523d70:
    // 0x523d70: 0xc040138  jal         func_1004E0
label_523d74:
    if (ctx->pc == 0x523D74u) {
        ctx->pc = 0x523D74u;
            // 0x523d74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x523D78u;
        goto label_523d78;
    }
    ctx->pc = 0x523D70u;
    SET_GPR_U32(ctx, 31, 0x523D78u);
    ctx->pc = 0x523D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523D70u;
            // 0x523d74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523D78u; }
        if (ctx->pc != 0x523D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523D78u; }
        if (ctx->pc != 0x523D78u) { return; }
    }
    ctx->pc = 0x523D78u;
label_523d78:
    // 0x523d78: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x523d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_523d7c:
    // 0x523d7c: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x523d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_523d80:
    // 0x523d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x523d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523d84:
    // 0x523d84: 0x24a53e10  addiu       $a1, $a1, 0x3E10
    ctx->pc = 0x523d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15888));
label_523d88:
    // 0x523d88: 0x24c634b0  addiu       $a2, $a2, 0x34B0
    ctx->pc = 0x523d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13488));
label_523d8c:
    // 0x523d8c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x523d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_523d90:
    // 0x523d90: 0xc040840  jal         func_102100
label_523d94:
    if (ctx->pc == 0x523D94u) {
        ctx->pc = 0x523D94u;
            // 0x523d94: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523D98u;
        goto label_523d98;
    }
    ctx->pc = 0x523D90u;
    SET_GPR_U32(ctx, 31, 0x523D98u);
    ctx->pc = 0x523D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523D90u;
            // 0x523d94: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523D98u; }
        if (ctx->pc != 0x523D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523D98u; }
        if (ctx->pc != 0x523D98u) { return; }
    }
    ctx->pc = 0x523D98u;
label_523d98:
    // 0x523d98: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x523d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_523d9c:
    // 0x523d9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x523d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523da0:
    // 0x523da0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x523da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_523da4:
    // 0x523da4: 0xc0788fc  jal         func_1E23F0
label_523da8:
    if (ctx->pc == 0x523DA8u) {
        ctx->pc = 0x523DA8u;
            // 0x523da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523DACu;
        goto label_523dac;
    }
    ctx->pc = 0x523DA4u;
    SET_GPR_U32(ctx, 31, 0x523DACu);
    ctx->pc = 0x523DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523DA4u;
            // 0x523da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DACu; }
        if (ctx->pc != 0x523DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DACu; }
        if (ctx->pc != 0x523DACu) { return; }
    }
    ctx->pc = 0x523DACu;
label_523dac:
    // 0x523dac: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x523dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_523db0:
    // 0x523db0: 0xc0788fc  jal         func_1E23F0
label_523db4:
    if (ctx->pc == 0x523DB4u) {
        ctx->pc = 0x523DB4u;
            // 0x523db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523DB8u;
        goto label_523db8;
    }
    ctx->pc = 0x523DB0u;
    SET_GPR_U32(ctx, 31, 0x523DB8u);
    ctx->pc = 0x523DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523DB0u;
            // 0x523db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DB8u; }
        if (ctx->pc != 0x523DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DB8u; }
        if (ctx->pc != 0x523DB8u) { return; }
    }
    ctx->pc = 0x523DB8u;
label_523db8:
    // 0x523db8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x523db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523dbc:
    // 0x523dbc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x523dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_523dc0:
    // 0x523dc0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x523dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_523dc4:
    // 0x523dc4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x523dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_523dc8:
    // 0x523dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x523dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_523dcc:
    // 0x523dcc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x523dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_523dd0:
    // 0x523dd0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x523dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_523dd4:
    // 0x523dd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x523dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_523dd8:
    // 0x523dd8: 0xc0a997c  jal         func_2A65F0
label_523ddc:
    if (ctx->pc == 0x523DDCu) {
        ctx->pc = 0x523DDCu;
            // 0x523ddc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x523DE0u;
        goto label_523de0;
    }
    ctx->pc = 0x523DD8u;
    SET_GPR_U32(ctx, 31, 0x523DE0u);
    ctx->pc = 0x523DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523DD8u;
            // 0x523ddc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DE0u; }
        if (ctx->pc != 0x523DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523DE0u; }
        if (ctx->pc != 0x523DE0u) { return; }
    }
    ctx->pc = 0x523DE0u;
label_523de0:
    // 0x523de0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x523de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_523de4:
    // 0x523de4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x523de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_523de8:
    // 0x523de8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_523dec:
    if (ctx->pc == 0x523DECu) {
        ctx->pc = 0x523DECu;
            // 0x523dec: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x523DF0u;
        goto label_523df0;
    }
    ctx->pc = 0x523DE8u;
    {
        const bool branch_taken_0x523de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x523DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523DE8u;
            // 0x523dec: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523de8) {
            ctx->pc = 0x523DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_523dbc;
        }
    }
    ctx->pc = 0x523DF0u;
label_523df0:
    // 0x523df0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x523df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_523df4:
    // 0x523df4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x523df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_523df8:
    // 0x523df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x523df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_523dfc:
    // 0x523dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x523dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_523e00:
    // 0x523e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_523e04:
    // 0x523e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523e08:
    // 0x523e08: 0x3e00008  jr          $ra
label_523e0c:
    if (ctx->pc == 0x523E0Cu) {
        ctx->pc = 0x523E0Cu;
            // 0x523e0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x523E10u;
        goto label_523e10;
    }
    ctx->pc = 0x523E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523E08u;
            // 0x523e0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523E10u;
label_523e10:
    // 0x523e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x523e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_523e14:
    // 0x523e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x523e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_523e18:
    // 0x523e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523e1c:
    // 0x523e1c: 0xc0b1a7c  jal         func_2C69F0
label_523e20:
    if (ctx->pc == 0x523E20u) {
        ctx->pc = 0x523E20u;
            // 0x523e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523E24u;
        goto label_523e24;
    }
    ctx->pc = 0x523E1Cu;
    SET_GPR_U32(ctx, 31, 0x523E24u);
    ctx->pc = 0x523E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523E1Cu;
            // 0x523e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C69F0u;
    if (runtime->hasFunction(0x2C69F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C69F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523E24u; }
        if (ctx->pc != 0x523E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C69F0_0x2c69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523E24u; }
        if (ctx->pc != 0x523E24u) { return; }
    }
    ctx->pc = 0x523E24u;
label_523e24:
    // 0x523e24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_523e28:
    // 0x523e28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523e2c:
    // 0x523e2c: 0x24425bb0  addiu       $v0, $v0, 0x5BB0
    ctx->pc = 0x523e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23472));
label_523e30:
    // 0x523e30: 0x24635bf0  addiu       $v1, $v1, 0x5BF0
    ctx->pc = 0x523e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23536));
label_523e34:
    // 0x523e34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x523e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_523e38:
    // 0x523e38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_523e3c:
    // 0x523e3c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x523e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_523e40:
    // 0x523e40: 0x24426200  addiu       $v0, $v0, 0x6200
    ctx->pc = 0x523e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_523e44:
    // 0x523e44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523e48:
    // 0x523e48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x523e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_523e4c:
    // 0x523e4c: 0x24636240  addiu       $v1, $v1, 0x6240
    ctx->pc = 0x523e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25152));
label_523e50:
    // 0x523e50: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x523e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_523e54:
    // 0x523e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_523e58:
    // 0x523e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_523e5c:
    // 0x523e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523e60:
    // 0x523e60: 0x3e00008  jr          $ra
label_523e64:
    if (ctx->pc == 0x523E64u) {
        ctx->pc = 0x523E64u;
            // 0x523e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x523E68u;
        goto label_523e68;
    }
    ctx->pc = 0x523E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523E60u;
            // 0x523e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523E68u;
label_523e68:
    // 0x523e68: 0x0  nop
    ctx->pc = 0x523e68u;
    // NOP
label_523e6c:
    // 0x523e6c: 0x0  nop
    ctx->pc = 0x523e6cu;
    // NOP
label_523e70:
    // 0x523e70: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x523e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_523e74:
    // 0x523e74: 0x3e00008  jr          $ra
label_523e78:
    if (ctx->pc == 0x523E78u) {
        ctx->pc = 0x523E78u;
            // 0x523e78: 0x2442c7f0  addiu       $v0, $v0, -0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
        ctx->pc = 0x523E7Cu;
        goto label_523e7c;
    }
    ctx->pc = 0x523E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523E74u;
            // 0x523e78: 0x2442c7f0  addiu       $v0, $v0, -0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523E7Cu;
label_523e7c:
    // 0x523e7c: 0x0  nop
    ctx->pc = 0x523e7cu;
    // NOP
label_523e80:
    // 0x523e80: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x523e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_523e84:
    // 0x523e84: 0x3e00008  jr          $ra
label_523e88:
    if (ctx->pc == 0x523E88u) {
        ctx->pc = 0x523E88u;
            // 0x523e88: 0xc440c7d8  lwc1        $f0, -0x3828($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x523E8Cu;
        goto label_523e8c;
    }
    ctx->pc = 0x523E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523E84u;
            // 0x523e88: 0xc440c7d8  lwc1        $f0, -0x3828($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523E8Cu;
label_523e8c:
    // 0x523e8c: 0x0  nop
    ctx->pc = 0x523e8cu;
    // NOP
label_523e90:
    // 0x523e90: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x523e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_523e94:
    // 0x523e94: 0x8c42ab58  lw          $v0, -0x54A8($v0)
    ctx->pc = 0x523e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945624)));
label_523e98:
    // 0x523e98: 0x3e00008  jr          $ra
label_523e9c:
    if (ctx->pc == 0x523E9Cu) {
        ctx->pc = 0x523E9Cu;
            // 0x523e9c: 0x8c420060  lw          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x523EA0u;
        goto label_523ea0;
    }
    ctx->pc = 0x523E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523E98u;
            // 0x523e9c: 0x8c420060  lw          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523EA0u;
label_523ea0:
    // 0x523ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x523ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_523ea4:
    // 0x523ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x523ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_523ea8:
    // 0x523ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x523ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_523eac:
    // 0x523eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x523eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_523eb0:
    // 0x523eb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x523eb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_523eb4:
    // 0x523eb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x523eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_523eb8:
    // 0x523eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_523ebc:
    // 0x523ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523ec0:
    // 0x523ec0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x523ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_523ec4:
    // 0x523ec4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_523ec8:
    if (ctx->pc == 0x523EC8u) {
        ctx->pc = 0x523EC8u;
            // 0x523ec8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523ECCu;
        goto label_523ecc;
    }
    ctx->pc = 0x523EC4u;
    {
        const bool branch_taken_0x523ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x523EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523EC4u;
            // 0x523ec8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523ec4) {
            ctx->pc = 0x523F08u;
            goto label_523f08;
        }
    }
    ctx->pc = 0x523ECCu;
label_523ecc:
    // 0x523ecc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x523eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523ed0:
    // 0x523ed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x523ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523ed4:
    // 0x523ed4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x523ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523ed8:
    // 0x523ed8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x523ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_523edc:
    // 0x523edc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x523edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_523ee0:
    // 0x523ee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x523ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_523ee4:
    // 0x523ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x523ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_523ee8:
    // 0x523ee8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x523ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_523eec:
    // 0x523eec: 0x320f809  jalr        $t9
label_523ef0:
    if (ctx->pc == 0x523EF0u) {
        ctx->pc = 0x523EF4u;
        goto label_523ef4;
    }
    ctx->pc = 0x523EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x523EF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x523EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x523EF4u; }
            if (ctx->pc != 0x523EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x523EF4u;
label_523ef4:
    // 0x523ef4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x523ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_523ef8:
    // 0x523ef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x523ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_523efc:
    // 0x523efc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x523efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_523f00:
    // 0x523f00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_523f04:
    if (ctx->pc == 0x523F04u) {
        ctx->pc = 0x523F04u;
            // 0x523f04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x523F08u;
        goto label_523f08;
    }
    ctx->pc = 0x523F00u;
    {
        const bool branch_taken_0x523f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x523F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523F00u;
            // 0x523f04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523f00) {
            ctx->pc = 0x523ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_523ed8;
        }
    }
    ctx->pc = 0x523F08u;
label_523f08:
    // 0x523f08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x523f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_523f0c:
    // 0x523f0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x523f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_523f10:
    // 0x523f10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x523f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_523f14:
    // 0x523f14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x523f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_523f18:
    // 0x523f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x523f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_523f1c:
    // 0x523f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_523f20:
    // 0x523f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523f24:
    // 0x523f24: 0x3e00008  jr          $ra
label_523f28:
    if (ctx->pc == 0x523F28u) {
        ctx->pc = 0x523F28u;
            // 0x523f28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x523F2Cu;
        goto label_523f2c;
    }
    ctx->pc = 0x523F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523F24u;
            // 0x523f28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523F2Cu;
label_523f2c:
    // 0x523f2c: 0x0  nop
    ctx->pc = 0x523f2cu;
    // NOP
label_523f30:
    // 0x523f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x523f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_523f34:
    // 0x523f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x523f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_523f38:
    // 0x523f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x523f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_523f3c:
    // 0x523f3c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x523f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_523f40:
    // 0x523f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523f44:
    // 0x523f44: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x523f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_523f48:
    // 0x523f48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x523f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_523f4c:
    // 0x523f4c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x523f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_523f50:
    // 0x523f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x523f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_523f54:
    // 0x523f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x523f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_523f58:
    // 0x523f58: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x523f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_523f5c:
    // 0x523f5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x523f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_523f60:
    // 0x523f60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x523f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_523f64:
    // 0x523f64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x523f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_523f68:
    // 0x523f68: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x523f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_523f6c:
    // 0x523f6c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x523f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_523f70:
    // 0x523f70: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x523f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_523f74:
    // 0x523f74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x523f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_523f78:
    // 0x523f78: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x523f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_523f7c:
    // 0x523f7c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x523f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_523f80:
    // 0x523f80: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x523f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_523f84:
    // 0x523f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x523f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_523f88:
    // 0x523f88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x523f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_523f8c:
    // 0x523f8c: 0xc0a997c  jal         func_2A65F0
label_523f90:
    if (ctx->pc == 0x523F90u) {
        ctx->pc = 0x523F90u;
            // 0x523f90: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x523F94u;
        goto label_523f94;
    }
    ctx->pc = 0x523F8Cu;
    SET_GPR_U32(ctx, 31, 0x523F94u);
    ctx->pc = 0x523F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523F8Cu;
            // 0x523f90: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523F94u; }
        if (ctx->pc != 0x523F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523F94u; }
        if (ctx->pc != 0x523F94u) { return; }
    }
    ctx->pc = 0x523F94u;
label_523f94:
    // 0x523f94: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x523f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_523f98:
    // 0x523f98: 0xc0d879c  jal         func_361E70
label_523f9c:
    if (ctx->pc == 0x523F9Cu) {
        ctx->pc = 0x523F9Cu;
            // 0x523f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523FA0u;
        goto label_523fa0;
    }
    ctx->pc = 0x523F98u;
    SET_GPR_U32(ctx, 31, 0x523FA0u);
    ctx->pc = 0x523F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523F98u;
            // 0x523f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523FA0u; }
        if (ctx->pc != 0x523FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523FA0u; }
        if (ctx->pc != 0x523FA0u) { return; }
    }
    ctx->pc = 0x523FA0u;
label_523fa0:
    // 0x523fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_523fa4:
    // 0x523fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523fa8:
    // 0x523fa8: 0x3e00008  jr          $ra
label_523fac:
    if (ctx->pc == 0x523FACu) {
        ctx->pc = 0x523FACu;
            // 0x523fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x523FB0u;
        goto label_523fb0;
    }
    ctx->pc = 0x523FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523FA8u;
            // 0x523fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523FB0u;
label_523fb0:
    // 0x523fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x523fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_523fb4:
    // 0x523fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x523fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_523fb8:
    // 0x523fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523fbc:
    // 0x523fbc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x523fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_523fc0:
    // 0x523fc0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_523fc4:
    if (ctx->pc == 0x523FC4u) {
        ctx->pc = 0x523FC4u;
            // 0x523fc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523FC8u;
        goto label_523fc8;
    }
    ctx->pc = 0x523FC0u;
    {
        const bool branch_taken_0x523fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x523FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523FC0u;
            // 0x523fc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523fc0) {
            ctx->pc = 0x5240E0u;
            goto label_5240e0;
        }
    }
    ctx->pc = 0x523FC8u;
label_523fc8:
    // 0x523fc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x523fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_523fcc:
    // 0x523fcc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x523fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_523fd0:
    // 0x523fd0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x523fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_523fd4:
    // 0x523fd4: 0xc075128  jal         func_1D44A0
label_523fd8:
    if (ctx->pc == 0x523FD8u) {
        ctx->pc = 0x523FD8u;
            // 0x523fd8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x523FDCu;
        goto label_523fdc;
    }
    ctx->pc = 0x523FD4u;
    SET_GPR_U32(ctx, 31, 0x523FDCu);
    ctx->pc = 0x523FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523FD4u;
            // 0x523fd8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523FDCu; }
        if (ctx->pc != 0x523FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523FDCu; }
        if (ctx->pc != 0x523FDCu) { return; }
    }
    ctx->pc = 0x523FDCu;
label_523fdc:
    // 0x523fdc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x523fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_523fe0:
    // 0x523fe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_523fe4:
    // 0x523fe4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x523fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_523fe8:
    // 0x523fe8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x523fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_523fec:
    // 0x523fec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x523fecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_523ff0:
    // 0x523ff0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_523ff4:
    if (ctx->pc == 0x523FF4u) {
        ctx->pc = 0x523FF4u;
            // 0x523ff4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x523FF8u;
        goto label_523ff8;
    }
    ctx->pc = 0x523FF0u;
    {
        const bool branch_taken_0x523ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x523FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523FF0u;
            // 0x523ff4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523ff0) {
            ctx->pc = 0x524000u;
            goto label_524000;
        }
    }
    ctx->pc = 0x523FF8u;
label_523ff8:
    // 0x523ff8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_523ffc:
    // 0x523ffc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x523ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_524000:
    // 0x524000: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x524000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_524004:
    // 0x524004: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524008:
    // 0x524008: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x524008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52400c:
    // 0x52400c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_524010:
    // 0x524010: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x524010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_524014:
    // 0x524014: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_524018:
    if (ctx->pc == 0x524018u) {
        ctx->pc = 0x524018u;
            // 0x524018: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52401Cu;
        goto label_52401c;
    }
    ctx->pc = 0x524014u;
    {
        const bool branch_taken_0x524014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x524014) {
            ctx->pc = 0x524018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524014u;
            // 0x524018: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524028u;
            goto label_524028;
        }
    }
    ctx->pc = 0x52401Cu;
label_52401c:
    // 0x52401c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524020:
    // 0x524020: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x524020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_524024:
    // 0x524024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x524024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_524028:
    // 0x524028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52402c:
    // 0x52402c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_524030:
    // 0x524030: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x524030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_524034:
    // 0x524034: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x524034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_524038:
    // 0x524038: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52403c:
    if (ctx->pc == 0x52403Cu) {
        ctx->pc = 0x52403Cu;
            // 0x52403c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x524040u;
        goto label_524040;
    }
    ctx->pc = 0x524038u;
    {
        const bool branch_taken_0x524038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x524038) {
            ctx->pc = 0x52403Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524038u;
            // 0x52403c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52404Cu;
            goto label_52404c;
        }
    }
    ctx->pc = 0x524040u;
label_524040:
    // 0x524040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524044:
    // 0x524044: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x524044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_524048:
    // 0x524048: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x524048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52404c:
    // 0x52404c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52404cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_524050:
    // 0x524050: 0x320f809  jalr        $t9
label_524054:
    if (ctx->pc == 0x524054u) {
        ctx->pc = 0x524054u;
            // 0x524054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524058u;
        goto label_524058;
    }
    ctx->pc = 0x524050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524058u);
        ctx->pc = 0x524054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524050u;
            // 0x524054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524058u; }
            if (ctx->pc != 0x524058u) { return; }
        }
        }
    }
    ctx->pc = 0x524058u;
label_524058:
    // 0x524058: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x524058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52405c:
    // 0x52405c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52405cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_524060:
    // 0x524060: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x524060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_524064:
    // 0x524064: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x524064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_524068:
    // 0x524068: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x524068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52406c:
    // 0x52406c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52406cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_524070:
    // 0x524070: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_524074:
    if (ctx->pc == 0x524074u) {
        ctx->pc = 0x524074u;
            // 0x524074: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x524078u;
        goto label_524078;
    }
    ctx->pc = 0x524070u;
    {
        const bool branch_taken_0x524070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x524070) {
            ctx->pc = 0x524074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524070u;
            // 0x524074: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524084u;
            goto label_524084;
        }
    }
    ctx->pc = 0x524078u;
label_524078:
    // 0x524078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x524078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52407c:
    // 0x52407c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52407cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_524080:
    // 0x524080: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x524080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_524084:
    // 0x524084: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x524084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_524088:
    // 0x524088: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x524088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52408c:
    // 0x52408c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52408cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_524090:
    // 0x524090: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x524090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_524094:
    // 0x524094: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x524094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_524098:
    // 0x524098: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52409c:
    if (ctx->pc == 0x52409Cu) {
        ctx->pc = 0x5240A0u;
        goto label_5240a0;
    }
    ctx->pc = 0x524098u;
    {
        const bool branch_taken_0x524098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x524098) {
            ctx->pc = 0x5240A8u;
            goto label_5240a8;
        }
    }
    ctx->pc = 0x5240A0u;
label_5240a0:
    // 0x5240a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5240a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5240a4:
    // 0x5240a4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x5240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_5240a8:
    // 0x5240a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5240ac:
    // 0x5240ac: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x5240acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_5240b0:
    // 0x5240b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5240b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5240b4:
    // 0x5240b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5240b8:
    if (ctx->pc == 0x5240B8u) {
        ctx->pc = 0x5240BCu;
        goto label_5240bc;
    }
    ctx->pc = 0x5240B4u;
    {
        const bool branch_taken_0x5240b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5240b4) {
            ctx->pc = 0x5240C4u;
            goto label_5240c4;
        }
    }
    ctx->pc = 0x5240BCu;
label_5240bc:
    // 0x5240bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5240bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5240c0:
    // 0x5240c0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x5240c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_5240c4:
    // 0x5240c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5240c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5240c8:
    // 0x5240c8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x5240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_5240cc:
    // 0x5240cc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5240ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5240d0:
    // 0x5240d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5240d4:
    if (ctx->pc == 0x5240D4u) {
        ctx->pc = 0x5240D4u;
            // 0x5240d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5240D8u;
        goto label_5240d8;
    }
    ctx->pc = 0x5240D0u;
    {
        const bool branch_taken_0x5240d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5240d0) {
            ctx->pc = 0x5240D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5240D0u;
            // 0x5240d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5240E4u;
            goto label_5240e4;
        }
    }
    ctx->pc = 0x5240D8u;
label_5240d8:
    // 0x5240d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5240d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5240dc:
    // 0x5240dc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x5240dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5240e0:
    // 0x5240e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5240e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5240e4:
    // 0x5240e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5240e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5240e8:
    // 0x5240e8: 0x3e00008  jr          $ra
label_5240ec:
    if (ctx->pc == 0x5240ECu) {
        ctx->pc = 0x5240ECu;
            // 0x5240ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5240F0u;
        goto label_5240f0;
    }
    ctx->pc = 0x5240E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5240ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5240E8u;
            // 0x5240ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5240F0u;
label_5240f0:
    // 0x5240f0: 0x8148d2c  j           func_5234B0
label_5240f4:
    if (ctx->pc == 0x5240F4u) {
        ctx->pc = 0x5240F4u;
            // 0x5240f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5240F8u;
        goto label_5240f8;
    }
    ctx->pc = 0x5240F0u;
    ctx->pc = 0x5240F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5240F0u;
            // 0x5240f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5234B0u;
    {
        auto targetFn = runtime->lookupFunction(0x5234B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5240F8u;
label_5240f8:
    // 0x5240f8: 0x0  nop
    ctx->pc = 0x5240f8u;
    // NOP
label_5240fc:
    // 0x5240fc: 0x0  nop
    ctx->pc = 0x5240fcu;
    // NOP
label_524100:
    // 0x524100: 0x8148eac  j           func_523AB0
label_524104:
    if (ctx->pc == 0x524104u) {
        ctx->pc = 0x524104u;
            // 0x524104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x524108u;
        goto label_524108;
    }
    ctx->pc = 0x524100u;
    ctx->pc = 0x524104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524100u;
            // 0x524104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x523AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x524108u;
label_524108:
    // 0x524108: 0x0  nop
    ctx->pc = 0x524108u;
    // NOP
label_52410c:
    // 0x52410c: 0x0  nop
    ctx->pc = 0x52410cu;
    // NOP
label_524110:
    // 0x524110: 0x8148cd4  j           func_523350
label_524114:
    if (ctx->pc == 0x524114u) {
        ctx->pc = 0x524114u;
            // 0x524114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x524118u;
        goto label_524118;
    }
    ctx->pc = 0x524110u;
    ctx->pc = 0x524114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524110u;
            // 0x524114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523350u;
    if (runtime->hasFunction(0x523350u)) {
        auto targetFn = runtime->lookupFunction(0x523350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00523350_0x523350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x524118u;
label_524118:
    // 0x524118: 0x0  nop
    ctx->pc = 0x524118u;
    // NOP
label_52411c:
    // 0x52411c: 0x0  nop
    ctx->pc = 0x52411cu;
    // NOP
label_524120:
    // 0x524120: 0x8148cb0  j           func_5232C0
label_524124:
    if (ctx->pc == 0x524124u) {
        ctx->pc = 0x524124u;
            // 0x524124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x524128u;
        goto label_524128;
    }
    ctx->pc = 0x524120u;
    ctx->pc = 0x524124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524120u;
            // 0x524124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5232C0u;
    {
        auto targetFn = runtime->lookupFunction(0x5232C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x524128u;
label_524128:
    // 0x524128: 0x0  nop
    ctx->pc = 0x524128u;
    // NOP
label_52412c:
    // 0x52412c: 0x0  nop
    ctx->pc = 0x52412cu;
    // NOP
label_524130:
    // 0x524130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x524130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_524134:
    // 0x524134: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x524134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_524138:
    // 0x524138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x524138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52413c:
    // 0x52413c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x52413cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_524140:
    // 0x524140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x524140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_524144:
    // 0x524144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x524144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_524148:
    // 0x524148: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x524148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52414c:
    // 0x52414c: 0xc0bb2e8  jal         func_2ECBA0
label_524150:
    if (ctx->pc == 0x524150u) {
        ctx->pc = 0x524150u;
            // 0x524150: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x524154u;
        goto label_524154;
    }
    ctx->pc = 0x52414Cu;
    SET_GPR_U32(ctx, 31, 0x524154u);
    ctx->pc = 0x524150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52414Cu;
            // 0x524150: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524154u; }
        if (ctx->pc != 0x524154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524154u; }
        if (ctx->pc != 0x524154u) { return; }
    }
    ctx->pc = 0x524154u;
label_524154:
    // 0x524154: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x524154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_524158:
    // 0x524158: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x524158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52415c:
    // 0x52415c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x52415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_524160:
    // 0x524160: 0xc0bb2e8  jal         func_2ECBA0
label_524164:
    if (ctx->pc == 0x524164u) {
        ctx->pc = 0x524164u;
            // 0x524164: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x524168u;
        goto label_524168;
    }
    ctx->pc = 0x524160u;
    SET_GPR_U32(ctx, 31, 0x524168u);
    ctx->pc = 0x524164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524160u;
            // 0x524164: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524168u; }
        if (ctx->pc != 0x524168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524168u; }
        if (ctx->pc != 0x524168u) { return; }
    }
    ctx->pc = 0x524168u;
label_524168:
    // 0x524168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x524168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52416c:
    // 0x52416c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52416cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_524170:
    // 0x524170: 0x3e00008  jr          $ra
label_524174:
    if (ctx->pc == 0x524174u) {
        ctx->pc = 0x524174u;
            // 0x524174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x524178u;
        goto label_524178;
    }
    ctx->pc = 0x524170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x524174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524170u;
            // 0x524174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x524178u;
label_524178:
    // 0x524178: 0x0  nop
    ctx->pc = 0x524178u;
    // NOP
label_52417c:
    // 0x52417c: 0x0  nop
    ctx->pc = 0x52417cu;
    // NOP
label_524180:
    // 0x524180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x524180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_524184:
    // 0x524184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x524184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_524188:
    // 0x524188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x524188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52418c:
    // 0x52418c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_524190:
    // 0x524190: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x524190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_524194:
    // 0x524194: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x524194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_524198:
    // 0x524198: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x524198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_52419c:
    // 0x52419c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_5241a0:
    if (ctx->pc == 0x5241A0u) {
        ctx->pc = 0x5241A0u;
            // 0x5241a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5241A4u;
        goto label_5241a4;
    }
    ctx->pc = 0x52419Cu;
    {
        const bool branch_taken_0x52419c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5241A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52419Cu;
            // 0x5241a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52419c) {
            ctx->pc = 0x5241D8u;
            goto label_5241d8;
        }
    }
    ctx->pc = 0x5241A4u;
label_5241a4:
    // 0x5241a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5241a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5241a8:
    // 0x5241a8: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x5241a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_5241ac:
    // 0x5241ac: 0x320f809  jalr        $t9
label_5241b0:
    if (ctx->pc == 0x5241B0u) {
        ctx->pc = 0x5241B4u;
        goto label_5241b4;
    }
    ctx->pc = 0x5241ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5241B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5241B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5241B4u; }
            if (ctx->pc != 0x5241B4u) { return; }
        }
        }
    }
    ctx->pc = 0x5241B4u;
label_5241b4:
    // 0x5241b4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x5241b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_5241b8:
    // 0x5241b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5241b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5241bc:
    // 0x5241bc: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x5241bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_5241c0:
    // 0x5241c0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_5241c4:
    if (ctx->pc == 0x5241C4u) {
        ctx->pc = 0x5241C4u;
            // 0x5241c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5241C8u;
        goto label_5241c8;
    }
    ctx->pc = 0x5241C0u;
    {
        const bool branch_taken_0x5241c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5241c0) {
            ctx->pc = 0x5241C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5241C0u;
            // 0x5241c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5241D0u;
            goto label_5241d0;
        }
    }
    ctx->pc = 0x5241C8u;
label_5241c8:
    // 0x5241c8: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x5241c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_5241cc:
    // 0x5241cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x5241ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_5241d0:
    // 0x5241d0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x5241d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_5241d4:
    // 0x5241d4: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x5241d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_5241d8:
    // 0x5241d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5241d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5241dc:
    // 0x5241dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5241dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5241e0:
    // 0x5241e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5241e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5241e4:
    // 0x5241e4: 0x3e00008  jr          $ra
label_5241e8:
    if (ctx->pc == 0x5241E8u) {
        ctx->pc = 0x5241E8u;
            // 0x5241e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5241ECu;
        goto label_5241ec;
    }
    ctx->pc = 0x5241E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5241E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5241E4u;
            // 0x5241e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5241ECu;
label_5241ec:
    // 0x5241ec: 0x0  nop
    ctx->pc = 0x5241ecu;
    // NOP
label_5241f0:
    // 0x5241f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5241f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5241f4:
    // 0x5241f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5241f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5241f8:
    // 0x5241f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5241f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5241fc:
    // 0x5241fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5241fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_524200:
    // 0x524200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x524200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_524204:
    // 0x524204: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x524204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_524208:
    // 0x524208: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x524208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_52420c:
    // 0x52420c: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_524210:
    if (ctx->pc == 0x524210u) {
        ctx->pc = 0x524210u;
            // 0x524210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524214u;
        goto label_524214;
    }
    ctx->pc = 0x52420Cu;
    {
        const bool branch_taken_0x52420c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x524210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52420Cu;
            // 0x524210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52420c) {
            ctx->pc = 0x524364u;
            goto label_524364;
        }
    }
    ctx->pc = 0x524214u;
label_524214:
    // 0x524214: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x524214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_524218:
    // 0x524218: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x524218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52421c:
    // 0x52421c: 0x54830052  bnel        $a0, $v1, . + 4 + (0x52 << 2)
label_524220:
    if (ctx->pc == 0x524220u) {
        ctx->pc = 0x524220u;
            // 0x524220: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x524224u;
        goto label_524224;
    }
    ctx->pc = 0x52421Cu;
    {
        const bool branch_taken_0x52421c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52421c) {
            ctx->pc = 0x524220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52421Cu;
            // 0x524220: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524368u;
            goto label_524368;
        }
    }
    ctx->pc = 0x524224u;
label_524224:
    // 0x524224: 0xae0600a4  sw          $a2, 0xA4($s0)
    ctx->pc = 0x524224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 6));
label_524228:
    // 0x524228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x524228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52422c:
    // 0x52422c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x52422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_524230:
    // 0x524230: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x524230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_524234:
    // 0x524234: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x524234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_524238:
    // 0x524238: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_52423c:
    if (ctx->pc == 0x52423Cu) {
        ctx->pc = 0x52423Cu;
            // 0x52423c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x524240u;
        goto label_524240;
    }
    ctx->pc = 0x524238u;
    {
        const bool branch_taken_0x524238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x524238) {
            ctx->pc = 0x52423Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524238u;
            // 0x52423c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52426Cu;
            goto label_52426c;
        }
    }
    ctx->pc = 0x524240u;
label_524240:
    // 0x524240: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524244:
    // 0x524244: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x524244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_524248:
    // 0x524248: 0x8e0700d4  lw          $a3, 0xD4($s0)
    ctx->pc = 0x524248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_52424c:
    // 0x52424c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x52424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_524250:
    // 0x524250: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x524250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_524254:
    // 0x524254: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x524254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_524258:
    // 0x524258: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x524258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_52425c:
    // 0x52425c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_524260:
    // 0x524260: 0xc13b83c  jal         func_4EE0F0
label_524264:
    if (ctx->pc == 0x524264u) {
        ctx->pc = 0x524264u;
            // 0x524264: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x524268u;
        goto label_524268;
    }
    ctx->pc = 0x524260u;
    SET_GPR_U32(ctx, 31, 0x524268u);
    ctx->pc = 0x524264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524260u;
            // 0x524264: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EE0F0u;
    if (runtime->hasFunction(0x4EE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x4EE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524268u; }
        if (ctx->pc != 0x524268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE0F0_0x4ee0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524268u; }
        if (ctx->pc != 0x524268u) { return; }
    }
    ctx->pc = 0x524268u;
label_524268:
    // 0x524268: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x524268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52426c:
    // 0x52426c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x52426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_524270:
    // 0x524270: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x524270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_524274:
    // 0x524274: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x524274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_524278:
    // 0x524278: 0x320f809  jalr        $t9
label_52427c:
    if (ctx->pc == 0x52427Cu) {
        ctx->pc = 0x52427Cu;
            // 0x52427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524280u;
        goto label_524280;
    }
    ctx->pc = 0x524278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524280u);
        ctx->pc = 0x52427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524278u;
            // 0x52427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524280u; }
            if (ctx->pc != 0x524280u) { return; }
        }
        }
    }
    ctx->pc = 0x524280u;
label_524280:
    // 0x524280: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x524280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_524284:
    // 0x524284: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x524284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_524288:
    // 0x524288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x524288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52428c:
    // 0x52428c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x52428cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_524290:
    // 0x524290: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x524290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_524294:
    // 0x524294: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x524294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_524298:
    // 0x524298: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x524298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_52429c:
    // 0x52429c: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x52429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_5242a0:
    // 0x5242a0: 0x8c44ab08  lw          $a0, -0x54F8($v0)
    ctx->pc = 0x5242a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
label_5242a4:
    // 0x5242a4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x5242a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5242a8:
    // 0x5242a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x5242a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5242ac:
    // 0x5242ac: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x5242acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_5242b0:
    // 0x5242b0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x5242b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_5242b4:
    // 0x5242b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x5242b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5242b8:
    // 0x5242b8: 0xc14bb88  jal         func_52EE20
label_5242bc:
    if (ctx->pc == 0x5242BCu) {
        ctx->pc = 0x5242BCu;
            // 0x5242bc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5242C0u;
        goto label_5242c0;
    }
    ctx->pc = 0x5242B8u;
    SET_GPR_U32(ctx, 31, 0x5242C0u);
    ctx->pc = 0x5242BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5242B8u;
            // 0x5242bc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5242C0u; }
        if (ctx->pc != 0x5242C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5242C0u; }
        if (ctx->pc != 0x5242C0u) { return; }
    }
    ctx->pc = 0x5242C0u;
label_5242c0:
    // 0x5242c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5242c4:
    // 0x5242c4: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x5242c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_5242c8:
    // 0x5242c8: 0xc149538  jal         func_5254E0
label_5242cc:
    if (ctx->pc == 0x5242CCu) {
        ctx->pc = 0x5242CCu;
            // 0x5242cc: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x5242D0u;
        goto label_5242d0;
    }
    ctx->pc = 0x5242C8u;
    SET_GPR_U32(ctx, 31, 0x5242D0u);
    ctx->pc = 0x5242CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5242C8u;
            // 0x5242cc: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5254E0u;
    if (runtime->hasFunction(0x5254E0u)) {
        auto targetFn = runtime->lookupFunction(0x5254E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5242D0u; }
        if (ctx->pc != 0x5242D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005254E0_0x5254e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5242D0u; }
        if (ctx->pc != 0x5242D0u) { return; }
    }
    ctx->pc = 0x5242D0u;
label_5242d0:
    // 0x5242d0: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x5242d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_5242d4:
    // 0x5242d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x5242d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_5242d8:
    // 0x5242d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5242d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5242dc:
    // 0x5242dc: 0x346501ae  ori         $a1, $v1, 0x1AE
    ctx->pc = 0x5242dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
label_5242e0:
    // 0x5242e0: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x5242e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_5242e4:
    // 0x5242e4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x5242e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_5242e8:
    // 0x5242e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x5242e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_5242ec:
    // 0x5242ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5242ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5242f0:
    // 0x5242f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5242f4:
    // 0x5242f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5242f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5242f8:
    // 0x5242f8: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x5242f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
label_5242fc:
    // 0x5242fc: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x5242fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_524300:
    // 0x524300: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x524300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_524304:
    // 0x524304: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x524304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_524308:
    // 0x524308: 0x320f809  jalr        $t9
label_52430c:
    if (ctx->pc == 0x52430Cu) {
        ctx->pc = 0x524310u;
        goto label_524310;
    }
    ctx->pc = 0x524308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524310u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x524310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524310u; }
            if (ctx->pc != 0x524310u) { return; }
        }
        }
    }
    ctx->pc = 0x524310u;
label_524310:
    // 0x524310: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x524310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_524314:
    // 0x524314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x524314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_524318:
    // 0x524318: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x524318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_52431c:
    // 0x52431c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x52431cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_524320:
    // 0x524320: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x524320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_524324:
    // 0x524324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x524324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_524328:
    // 0x524328: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x524328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52432c:
    // 0x52432c: 0xc078534  jal         func_1E14D0
label_524330:
    if (ctx->pc == 0x524330u) {
        ctx->pc = 0x524330u;
            // 0x524330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524334u;
        goto label_524334;
    }
    ctx->pc = 0x52432Cu;
    SET_GPR_U32(ctx, 31, 0x524334u);
    ctx->pc = 0x524330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52432Cu;
            // 0x524330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E14D0u;
    if (runtime->hasFunction(0x1E14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524334u; }
        if (ctx->pc != 0x524334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E14D0_0x1e14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524334u; }
        if (ctx->pc != 0x524334u) { return; }
    }
    ctx->pc = 0x524334u;
label_524334:
    // 0x524334: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x524334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_524338:
    // 0x524338: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x524338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_52433c:
    // 0x52433c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x52433cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_524340:
    // 0x524340: 0x320f809  jalr        $t9
label_524344:
    if (ctx->pc == 0x524344u) {
        ctx->pc = 0x524344u;
            // 0x524344: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x524348u;
        goto label_524348;
    }
    ctx->pc = 0x524340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524348u);
        ctx->pc = 0x524344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524340u;
            // 0x524344: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524348u; }
            if (ctx->pc != 0x524348u) { return; }
        }
        }
    }
    ctx->pc = 0x524348u;
label_524348:
    // 0x524348: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x524348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_52434c:
    // 0x52434c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52434cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_524350:
    // 0x524350: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x524350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_524354:
    // 0x524354: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x524354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_524358:
    // 0x524358: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x524358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_52435c:
    // 0x52435c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_524360:
    if (ctx->pc == 0x524360u) {
        ctx->pc = 0x524360u;
            // 0x524360: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x524364u;
        goto label_524364;
    }
    ctx->pc = 0x52435Cu;
    {
        const bool branch_taken_0x52435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x524360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52435Cu;
            // 0x524360: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52435c) {
            ctx->pc = 0x52431Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52431c;
        }
    }
    ctx->pc = 0x524364u;
label_524364:
    // 0x524364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x524364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_524368:
    // 0x524368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x524368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52436c:
    // 0x52436c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52436cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_524370:
    // 0x524370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x524370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_524374:
    // 0x524374: 0x3e00008  jr          $ra
label_524378:
    if (ctx->pc == 0x524378u) {
        ctx->pc = 0x524378u;
            // 0x524378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52437Cu;
        goto label_52437c;
    }
    ctx->pc = 0x524374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x524378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524374u;
            // 0x524378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52437Cu;
label_52437c:
    // 0x52437c: 0x0  nop
    ctx->pc = 0x52437cu;
    // NOP
label_524380:
    // 0x524380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x524380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_524384:
    // 0x524384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x524384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_524388:
    // 0x524388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x524388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52438c:
    // 0x52438c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52438cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_524390:
    // 0x524390: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x524390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_524394:
    // 0x524394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_524398:
    if (ctx->pc == 0x524398u) {
        ctx->pc = 0x524398u;
            // 0x524398: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x52439Cu;
        goto label_52439c;
    }
    ctx->pc = 0x524394u;
    {
        const bool branch_taken_0x524394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x524394) {
            ctx->pc = 0x524398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524394u;
            // 0x524398: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5243B0u;
            goto label_5243b0;
        }
    }
    ctx->pc = 0x52439Cu;
label_52439c:
    // 0x52439c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52439cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5243a0:
    // 0x5243a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5243a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5243a4:
    // 0x5243a4: 0x320f809  jalr        $t9
label_5243a8:
    if (ctx->pc == 0x5243A8u) {
        ctx->pc = 0x5243A8u;
            // 0x5243a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5243ACu;
        goto label_5243ac;
    }
    ctx->pc = 0x5243A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5243ACu);
        ctx->pc = 0x5243A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5243A4u;
            // 0x5243a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5243ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5243ACu; }
            if (ctx->pc != 0x5243ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5243ACu;
label_5243ac:
    // 0x5243ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5243acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5243b0:
    // 0x5243b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5243b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5243b4:
    // 0x5243b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5243b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5243b8:
    // 0x5243b8: 0x3e00008  jr          $ra
label_5243bc:
    if (ctx->pc == 0x5243BCu) {
        ctx->pc = 0x5243BCu;
            // 0x5243bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5243C0u;
        goto label_5243c0;
    }
    ctx->pc = 0x5243B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5243BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5243B8u;
            // 0x5243bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5243C0u;
label_5243c0:
    // 0x5243c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x5243c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_5243c4:
    // 0x5243c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5243c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5243c8:
    // 0x5243c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5243c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5243cc:
    // 0x5243cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5243ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5243d0:
    // 0x5243d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5243d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5243d4:
    // 0x5243d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5243d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5243d8:
    // 0x5243d8: 0xc0892d0  jal         func_224B40
label_5243dc:
    if (ctx->pc == 0x5243DCu) {
        ctx->pc = 0x5243DCu;
            // 0x5243dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x5243E0u;
        goto label_5243e0;
    }
    ctx->pc = 0x5243D8u;
    SET_GPR_U32(ctx, 31, 0x5243E0u);
    ctx->pc = 0x5243DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5243D8u;
            // 0x5243dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5243E0u; }
        if (ctx->pc != 0x5243E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5243E0u; }
        if (ctx->pc != 0x5243E0u) { return; }
    }
    ctx->pc = 0x5243E0u;
label_5243e0:
    // 0x5243e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5243e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5243e4:
    // 0x5243e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5243e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5243e8:
    // 0x5243e8: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x5243e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_5243ec:
    // 0x5243ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x5243ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5243f0:
    // 0x5243f0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x5243f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_5243f4:
    // 0x5243f4: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x5243f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
label_5243f8:
    // 0x5243f8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x5243f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_5243fc:
    // 0x5243fc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x5243fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_524400:
    // 0x524400: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x524400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_524404:
    // 0x524404: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x524404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_524408:
    // 0x524408: 0xc440c918  lwc1        $f0, -0x36E8($v0)
    ctx->pc = 0x524408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52440c:
    // 0x52440c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x52440cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_524410:
    // 0x524410: 0x34683333  ori         $t0, $v1, 0x3333
    ctx->pc = 0x524410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_524414:
    // 0x524414: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x524414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_524418:
    // 0x524418: 0x3c0340df  lui         $v1, 0x40DF
    ctx->pc = 0x524418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16607 << 16));
label_52441c:
    // 0x52441c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52441cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524420:
    // 0x524420: 0x346366f3  ori         $v1, $v1, 0x66F3
    ctx->pc = 0x524420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26355);
label_524424:
    // 0x524424: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x524424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_524428:
    // 0x524428: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x524428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52442c:
    // 0x52442c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x52442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524430:
    // 0x524430: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x524430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_524434:
    // 0x524434: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x524434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524438:
    // 0x524438: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x524438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_52443c:
    // 0x52443c: 0xa3aa0110  sb          $t2, 0x110($sp)
    ctx->pc = 0x52443cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 10));
label_524440:
    // 0x524440: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x524440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_524444:
    // 0x524444: 0xafa9010c  sw          $t1, 0x10C($sp)
    ctx->pc = 0x524444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 9));
label_524448:
    // 0x524448: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x524448u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_52444c:
    // 0x52444c: 0xafa800f4  sw          $t0, 0xF4($sp)
    ctx->pc = 0x52444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 8));
label_524450:
    // 0x524450: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x524450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_524454:
    // 0x524454: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x524454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
label_524458:
    // 0x524458: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x524458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_52445c:
    // 0x52445c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x52445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_524460:
    // 0x524460: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x524460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_524464:
    // 0x524464: 0xc0a7a88  jal         func_29EA20
label_524468:
    if (ctx->pc == 0x524468u) {
        ctx->pc = 0x524468u;
            // 0x524468: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x52446Cu;
        goto label_52446c;
    }
    ctx->pc = 0x524464u;
    SET_GPR_U32(ctx, 31, 0x52446Cu);
    ctx->pc = 0x524468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524464u;
            // 0x524468: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52446Cu; }
        if (ctx->pc != 0x52446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52446Cu; }
        if (ctx->pc != 0x52446Cu) { return; }
    }
    ctx->pc = 0x52446Cu;
label_52446c:
    // 0x52446c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x52446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_524470:
    // 0x524470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x524470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_524474:
    // 0x524474: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_524478:
    if (ctx->pc == 0x524478u) {
        ctx->pc = 0x524478u;
            // 0x524478: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52447Cu;
        goto label_52447c;
    }
    ctx->pc = 0x524474u;
    {
        const bool branch_taken_0x524474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x524478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524474u;
            // 0x524478: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524474) {
            ctx->pc = 0x5244C4u;
            goto label_5244c4;
        }
    }
    ctx->pc = 0x52447Cu;
label_52447c:
    // 0x52447c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_524480:
    // 0x524480: 0xc088ef4  jal         func_223BD0
label_524484:
    if (ctx->pc == 0x524484u) {
        ctx->pc = 0x524484u;
            // 0x524484: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x524488u;
        goto label_524488;
    }
    ctx->pc = 0x524480u;
    SET_GPR_U32(ctx, 31, 0x524488u);
    ctx->pc = 0x524484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524480u;
            // 0x524484: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524488u; }
        if (ctx->pc != 0x524488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524488u; }
        if (ctx->pc != 0x524488u) { return; }
    }
    ctx->pc = 0x524488u;
label_524488:
    // 0x524488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x524488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52448c:
    // 0x52448c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_524490:
    // 0x524490: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x524490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_524494:
    // 0x524494: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x524494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_524498:
    // 0x524498: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x524498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52449c:
    // 0x52449c: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x52449cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_5244a0:
    // 0x5244a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5244a4:
    // 0x5244a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5244a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5244a8:
    // 0x5244a8: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x5244a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_5244ac:
    // 0x5244ac: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x5244acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_5244b0:
    // 0x5244b0: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x5244b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_5244b4:
    // 0x5244b4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5244b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5244b8:
    // 0x5244b8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x5244b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_5244bc:
    // 0x5244bc: 0xc088b38  jal         func_222CE0
label_5244c0:
    if (ctx->pc == 0x5244C0u) {
        ctx->pc = 0x5244C0u;
            // 0x5244c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5244C4u;
        goto label_5244c4;
    }
    ctx->pc = 0x5244BCu;
    SET_GPR_U32(ctx, 31, 0x5244C4u);
    ctx->pc = 0x5244C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5244BCu;
            // 0x5244c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244C4u; }
        if (ctx->pc != 0x5244C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244C4u; }
        if (ctx->pc != 0x5244C4u) { return; }
    }
    ctx->pc = 0x5244C4u;
label_5244c4:
    // 0x5244c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x5244c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_5244c8:
    // 0x5244c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5244c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5244cc:
    // 0x5244cc: 0xc08c164  jal         func_230590
label_5244d0:
    if (ctx->pc == 0x5244D0u) {
        ctx->pc = 0x5244D0u;
            // 0x5244d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5244D4u;
        goto label_5244d4;
    }
    ctx->pc = 0x5244CCu;
    SET_GPR_U32(ctx, 31, 0x5244D4u);
    ctx->pc = 0x5244D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5244CCu;
            // 0x5244d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244D4u; }
        if (ctx->pc != 0x5244D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244D4u; }
        if (ctx->pc != 0x5244D4u) { return; }
    }
    ctx->pc = 0x5244D4u;
label_5244d4:
    // 0x5244d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x5244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_5244d8:
    // 0x5244d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5244d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5244dc:
    // 0x5244dc: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x5244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_5244e0:
    // 0x5244e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5244e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5244e4:
    // 0x5244e4: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x5244e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_5244e8:
    // 0x5244e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5244e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5244ec:
    // 0x5244ec: 0xc08914c  jal         func_224530
label_5244f0:
    if (ctx->pc == 0x5244F0u) {
        ctx->pc = 0x5244F0u;
            // 0x5244f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5244F4u;
        goto label_5244f4;
    }
    ctx->pc = 0x5244ECu;
    SET_GPR_U32(ctx, 31, 0x5244F4u);
    ctx->pc = 0x5244F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5244ECu;
            // 0x5244f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244F4u; }
        if (ctx->pc != 0x5244F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5244F4u; }
        if (ctx->pc != 0x5244F4u) { return; }
    }
    ctx->pc = 0x5244F4u;
label_5244f4:
    // 0x5244f4: 0x3c03425e  lui         $v1, 0x425E
    ctx->pc = 0x5244f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16990 << 16));
label_5244f8:
    // 0x5244f8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x5244f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_5244fc:
    // 0x5244fc: 0x346338e3  ori         $v1, $v1, 0x38E3
    ctx->pc = 0x5244fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14563);
label_524500:
    // 0x524500: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x524500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_524504:
    // 0x524504: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x524504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_524508:
    // 0x524508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x524508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52450c:
    // 0x52450c: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x52450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_524510:
    // 0x524510: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x524510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_524514:
    // 0x524514: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x524514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524518:
    // 0x524518: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x524518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_52451c:
    // 0x52451c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x52451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524520:
    // 0x524520: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x524520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524524:
    // 0x524524: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x524524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_524528:
    // 0x524528: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x524528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_52452c:
    // 0x52452c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x52452cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_524530:
    // 0x524530: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x524530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_524534:
    // 0x524534: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x524534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_524538:
    // 0x524538: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x524538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52453c:
    // 0x52453c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x52453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524540:
    // 0x524540: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x524540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524544:
    // 0x524544: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x524544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_524548:
    // 0x524548: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x524548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_52454c:
    // 0x52454c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x52454cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_524550:
    // 0x524550: 0xc0892b0  jal         func_224AC0
label_524554:
    if (ctx->pc == 0x524554u) {
        ctx->pc = 0x524554u;
            // 0x524554: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x524558u;
        goto label_524558;
    }
    ctx->pc = 0x524550u;
    SET_GPR_U32(ctx, 31, 0x524558u);
    ctx->pc = 0x524554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524550u;
            // 0x524554: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524558u; }
        if (ctx->pc != 0x524558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524558u; }
        if (ctx->pc != 0x524558u) { return; }
    }
    ctx->pc = 0x524558u;
label_524558:
    // 0x524558: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x524558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_52455c:
    // 0x52455c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x52455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_524560:
    // 0x524560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524564:
    // 0x524564: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x524564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_524568:
    // 0x524568: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x524568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_52456c:
    // 0x52456c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x52456cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_524570:
    // 0x524570: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x524570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
label_524574:
    // 0x524574: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x524574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_524578:
    // 0x524578: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x524578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52457c:
    // 0x52457c: 0xc0a7a88  jal         func_29EA20
label_524580:
    if (ctx->pc == 0x524580u) {
        ctx->pc = 0x524580u;
            // 0x524580: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x524584u;
        goto label_524584;
    }
    ctx->pc = 0x52457Cu;
    SET_GPR_U32(ctx, 31, 0x524584u);
    ctx->pc = 0x524580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52457Cu;
            // 0x524580: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524584u; }
        if (ctx->pc != 0x524584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524584u; }
        if (ctx->pc != 0x524584u) { return; }
    }
    ctx->pc = 0x524584u;
label_524584:
    // 0x524584: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x524584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_524588:
    // 0x524588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x524588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52458c:
    // 0x52458c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_524590:
    if (ctx->pc == 0x524590u) {
        ctx->pc = 0x524590u;
            // 0x524590: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x524594u;
        goto label_524594;
    }
    ctx->pc = 0x52458Cu;
    {
        const bool branch_taken_0x52458c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x524590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52458Cu;
            // 0x524590: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52458c) {
            ctx->pc = 0x5245B0u;
            goto label_5245b0;
        }
    }
    ctx->pc = 0x524594u;
label_524594:
    // 0x524594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x524594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_524598:
    // 0x524598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x524598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52459c:
    // 0x52459c: 0xc0869d0  jal         func_21A740
label_5245a0:
    if (ctx->pc == 0x5245A0u) {
        ctx->pc = 0x5245A0u;
            // 0x5245a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5245A4u;
        goto label_5245a4;
    }
    ctx->pc = 0x52459Cu;
    SET_GPR_U32(ctx, 31, 0x5245A4u);
    ctx->pc = 0x5245A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52459Cu;
            // 0x5245a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5245A4u; }
        if (ctx->pc != 0x5245A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5245A4u; }
        if (ctx->pc != 0x5245A4u) { return; }
    }
    ctx->pc = 0x5245A4u;
label_5245a4:
    // 0x5245a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5245a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5245a8:
    // 0x5245a8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x5245a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_5245ac:
    // 0x5245ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5245acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5245b0:
    // 0x5245b0: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x5245b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_5245b4:
    // 0x5245b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5245b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5245b8:
    // 0x5245b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5245b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5245bc:
    // 0x5245bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5245bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5245c0:
    // 0x5245c0: 0xc08c650  jal         func_231940
label_5245c4:
    if (ctx->pc == 0x5245C4u) {
        ctx->pc = 0x5245C4u;
            // 0x5245c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5245C8u;
        goto label_5245c8;
    }
    ctx->pc = 0x5245C0u;
    SET_GPR_U32(ctx, 31, 0x5245C8u);
    ctx->pc = 0x5245C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5245C0u;
            // 0x5245c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5245C8u; }
        if (ctx->pc != 0x5245C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5245C8u; }
        if (ctx->pc != 0x5245C8u) { return; }
    }
    ctx->pc = 0x5245C8u;
label_5245c8:
    // 0x5245c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5245c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5245cc:
    // 0x5245cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5245ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5245d0:
    // 0x5245d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5245d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5245d4:
    // 0x5245d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5245d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5245d8:
    // 0x5245d8: 0x3e00008  jr          $ra
label_5245dc:
    if (ctx->pc == 0x5245DCu) {
        ctx->pc = 0x5245DCu;
            // 0x5245dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x5245E0u;
        goto label_5245e0;
    }
    ctx->pc = 0x5245D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5245DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5245D8u;
            // 0x5245dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5245E0u;
label_5245e0:
    // 0x5245e0: 0x3e00008  jr          $ra
label_5245e4:
    if (ctx->pc == 0x5245E4u) {
        ctx->pc = 0x5245E8u;
        goto label_5245e8;
    }
    ctx->pc = 0x5245E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5245E8u;
label_5245e8:
    // 0x5245e8: 0x0  nop
    ctx->pc = 0x5245e8u;
    // NOP
label_5245ec:
    // 0x5245ec: 0x0  nop
    ctx->pc = 0x5245ecu;
    // NOP
label_5245f0:
    // 0x5245f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x5245f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_5245f4:
    // 0x5245f4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x5245f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_5245f8:
    // 0x5245f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5245f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5245fc:
    // 0x5245fc: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x5245fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_524600:
    // 0x524600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x524600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_524604:
    // 0x524604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x524604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_524608:
    // 0x524608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x524608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52460c:
    // 0x52460c: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x52460cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_524610:
    // 0x524610: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x524610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_524614:
    // 0x524614: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x524614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_524618:
    // 0x524618: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x524618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_52461c:
    // 0x52461c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x52461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_524620:
    // 0x524620: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x524620u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_524624:
    // 0x524624: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x524624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_524628:
    // 0x524628: 0x102000e0  beqz        $at, . + 4 + (0xE0 << 2)
label_52462c:
    if (ctx->pc == 0x52462Cu) {
        ctx->pc = 0x52462Cu;
            // 0x52462c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524630u;
        goto label_524630;
    }
    ctx->pc = 0x524628u;
    {
        const bool branch_taken_0x524628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524628u;
            // 0x52462c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524628) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x524630u;
label_524630:
    // 0x524630: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x524630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_524634:
    // 0x524634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x524634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_524638:
    // 0x524638: 0x24a5c8c0  addiu       $a1, $a1, -0x3740
    ctx->pc = 0x524638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953152));
label_52463c:
    // 0x52463c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x52463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_524640:
    // 0x524640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x524640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_524644:
    // 0x524644: 0x600008  jr          $v1
label_524648:
    if (ctx->pc == 0x524648u) {
        ctx->pc = 0x52464Cu;
        goto label_52464c;
    }
    ctx->pc = 0x524644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x52464Cu: goto label_52464c;
            case 0x52472Cu: goto label_52472c;
            case 0x524838u: goto label_524838;
            case 0x5248C8u: goto label_5248c8;
            case 0x524978u: goto label_524978;
            case 0x5249ACu: goto label_5249ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x52464Cu;
label_52464c:
    // 0x52464c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52464cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_524650:
    // 0x524650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x524650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_524654:
    // 0x524654: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x524654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_524658:
    // 0x524658: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x524658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52465c:
    // 0x52465c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x52465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524660:
    // 0x524660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x524660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_524664:
    // 0x524664: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x524664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
label_524668:
    // 0x524668: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x524668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_52466c:
    // 0x52466c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x52466cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_524670:
    // 0x524670: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x524670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_524674:
    // 0x524674: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x524674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_524678:
    // 0x524678: 0x8c820a6c  lw          $v0, 0xA6C($a0)
    ctx->pc = 0x524678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
label_52467c:
    // 0x52467c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_524680:
    if (ctx->pc == 0x524680u) {
        ctx->pc = 0x524680u;
            // 0x524680: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->pc = 0x524684u;
        goto label_524684;
    }
    ctx->pc = 0x52467Cu;
    {
        const bool branch_taken_0x52467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x52467c) {
            ctx->pc = 0x524680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52467Cu;
            // 0x524680: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524698u;
            goto label_524698;
        }
    }
    ctx->pc = 0x524684u;
label_524684:
    // 0x524684: 0x8c840a60  lw          $a0, 0xA60($a0)
    ctx->pc = 0x524684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2656)));
label_524688:
    // 0x524688: 0xc0eecc8  jal         func_3BB320
label_52468c:
    if (ctx->pc == 0x52468Cu) {
        ctx->pc = 0x52468Cu;
            // 0x52468c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x524690u;
        goto label_524690;
    }
    ctx->pc = 0x524688u;
    SET_GPR_U32(ctx, 31, 0x524690u);
    ctx->pc = 0x52468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524688u;
            // 0x52468c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524690u; }
        if (ctx->pc != 0x524690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524690u; }
        if (ctx->pc != 0x524690u) { return; }
    }
    ctx->pc = 0x524690u;
label_524690:
    // 0x524690: 0x10000004  b           . + 4 + (0x4 << 2)
label_524694:
    if (ctx->pc == 0x524694u) {
        ctx->pc = 0x524694u;
            // 0x524694: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x524698u;
        goto label_524698;
    }
    ctx->pc = 0x524690u;
    {
        const bool branch_taken_0x524690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524690u;
            // 0x524694: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524690) {
            ctx->pc = 0x5246A4u;
            goto label_5246a4;
        }
    }
    ctx->pc = 0x524698u;
label_524698:
    // 0x524698: 0xc04c720  jal         func_131C80
label_52469c:
    if (ctx->pc == 0x52469Cu) {
        ctx->pc = 0x52469Cu;
            // 0x52469c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5246A0u;
        goto label_5246a0;
    }
    ctx->pc = 0x524698u;
    SET_GPR_U32(ctx, 31, 0x5246A0u);
    ctx->pc = 0x52469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524698u;
            // 0x52469c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246A0u; }
        if (ctx->pc != 0x5246A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246A0u; }
        if (ctx->pc != 0x5246A0u) { return; }
    }
    ctx->pc = 0x5246A0u;
label_5246a0:
    // 0x5246a0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x5246a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_5246a4:
    // 0x5246a4: 0xc04c720  jal         func_131C80
label_5246a8:
    if (ctx->pc == 0x5246A8u) {
        ctx->pc = 0x5246A8u;
            // 0x5246a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5246ACu;
        goto label_5246ac;
    }
    ctx->pc = 0x5246A4u;
    SET_GPR_U32(ctx, 31, 0x5246ACu);
    ctx->pc = 0x5246A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5246A4u;
            // 0x5246a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246ACu; }
        if (ctx->pc != 0x5246ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246ACu; }
        if (ctx->pc != 0x5246ACu) { return; }
    }
    ctx->pc = 0x5246ACu;
label_5246ac:
    // 0x5246ac: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x5246acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_5246b0:
    // 0x5246b0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x5246b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_5246b4:
    // 0x5246b4: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x5246b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5246b8:
    // 0x5246b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5246b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5246bc:
    // 0x5246bc: 0xc0477a8  jal         func_11DEA0
label_5246c0:
    if (ctx->pc == 0x5246C0u) {
        ctx->pc = 0x5246C0u;
            // 0x5246c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5246C4u;
        goto label_5246c4;
    }
    ctx->pc = 0x5246BCu;
    SET_GPR_U32(ctx, 31, 0x5246C4u);
    ctx->pc = 0x5246C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5246BCu;
            // 0x5246c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246C4u; }
        if (ctx->pc != 0x5246C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246C4u; }
        if (ctx->pc != 0x5246C4u) { return; }
    }
    ctx->pc = 0x5246C4u;
label_5246c4:
    // 0x5246c4: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x5246c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_5246c8:
    // 0x5246c8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x5246c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_5246cc:
    // 0x5246cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x5246ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_5246d0:
    // 0x5246d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5246d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5246d4:
    // 0x5246d4: 0x0  nop
    ctx->pc = 0x5246d4u;
    // NOP
label_5246d8:
    // 0x5246d8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x5246d8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5246dc:
    // 0x5246dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5246dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5246e0:
    // 0x5246e0: 0xc04cbd8  jal         func_132F60
label_5246e4:
    if (ctx->pc == 0x5246E4u) {
        ctx->pc = 0x5246E4u;
            // 0x5246e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5246E8u;
        goto label_5246e8;
    }
    ctx->pc = 0x5246E0u;
    SET_GPR_U32(ctx, 31, 0x5246E8u);
    ctx->pc = 0x5246E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5246E0u;
            // 0x5246e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246E8u; }
        if (ctx->pc != 0x5246E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246E8u; }
        if (ctx->pc != 0x5246E8u) { return; }
    }
    ctx->pc = 0x5246E8u;
label_5246e8:
    // 0x5246e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x5246e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_5246ec:
    // 0x5246ec: 0xc04f278  jal         func_13C9E0
label_5246f0:
    if (ctx->pc == 0x5246F0u) {
        ctx->pc = 0x5246F0u;
            // 0x5246f0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x5246F4u;
        goto label_5246f4;
    }
    ctx->pc = 0x5246ECu;
    SET_GPR_U32(ctx, 31, 0x5246F4u);
    ctx->pc = 0x5246F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5246ECu;
            // 0x5246f0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246F4u; }
        if (ctx->pc != 0x5246F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5246F4u; }
        if (ctx->pc != 0x5246F4u) { return; }
    }
    ctx->pc = 0x5246F4u;
label_5246f4:
    // 0x5246f4: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x5246f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_5246f8:
    // 0x5246f8: 0xc04ce80  jal         func_133A00
label_5246fc:
    if (ctx->pc == 0x5246FCu) {
        ctx->pc = 0x5246FCu;
            // 0x5246fc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x524700u;
        goto label_524700;
    }
    ctx->pc = 0x5246F8u;
    SET_GPR_U32(ctx, 31, 0x524700u);
    ctx->pc = 0x5246FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5246F8u;
            // 0x5246fc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524700u; }
        if (ctx->pc != 0x524700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524700u; }
        if (ctx->pc != 0x524700u) { return; }
    }
    ctx->pc = 0x524700u;
label_524700:
    // 0x524700: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x524700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_524704:
    // 0x524704: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x524704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_524708:
    // 0x524708: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x524708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_52470c:
    // 0x52470c: 0xc04cbe0  jal         func_132F80
label_524710:
    if (ctx->pc == 0x524710u) {
        ctx->pc = 0x524710u;
            // 0x524710: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->pc = 0x524714u;
        goto label_524714;
    }
    ctx->pc = 0x52470Cu;
    SET_GPR_U32(ctx, 31, 0x524714u);
    ctx->pc = 0x524710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52470Cu;
            // 0x524710: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524714u; }
        if (ctx->pc != 0x524714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524714u; }
        if (ctx->pc != 0x524714u) { return; }
    }
    ctx->pc = 0x524714u;
label_524714:
    // 0x524714: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x524714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_524718:
    // 0x524718: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x524718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_52471c:
    // 0x52471c: 0xc04cca0  jal         func_133280
label_524720:
    if (ctx->pc == 0x524720u) {
        ctx->pc = 0x524720u;
            // 0x524720: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x524724u;
        goto label_524724;
    }
    ctx->pc = 0x52471Cu;
    SET_GPR_U32(ctx, 31, 0x524724u);
    ctx->pc = 0x524720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52471Cu;
            // 0x524720: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524724u; }
        if (ctx->pc != 0x524724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524724u; }
        if (ctx->pc != 0x524724u) { return; }
    }
    ctx->pc = 0x524724u;
label_524724:
    // 0x524724: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_524728:
    if (ctx->pc == 0x524728u) {
        ctx->pc = 0x524728u;
            // 0x524728: 0xc64200e4  lwc1        $f2, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x52472Cu;
        goto label_52472c;
    }
    ctx->pc = 0x524724u;
    {
        const bool branch_taken_0x524724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524724u;
            // 0x524728: 0xc64200e4  lwc1        $f2, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x524724) {
            ctx->pc = 0x5249B0u;
            goto label_5249b0;
        }
    }
    ctx->pc = 0x52472Cu;
label_52472c:
    // 0x52472c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_524730:
    // 0x524730: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x524730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_524734:
    // 0x524734: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x524734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524738:
    // 0x524738: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x524738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52473c:
    // 0x52473c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x52473cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_524740:
    // 0x524740: 0xc14930c  jal         func_524C30
label_524744:
    if (ctx->pc == 0x524744u) {
        ctx->pc = 0x524744u;
            // 0x524744: 0xe64000e0  swc1        $f0, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->pc = 0x524748u;
        goto label_524748;
    }
    ctx->pc = 0x524740u;
    SET_GPR_U32(ctx, 31, 0x524748u);
    ctx->pc = 0x524744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524740u;
            // 0x524744: 0xe64000e0  swc1        $f0, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x524C30u;
    if (runtime->hasFunction(0x524C30u)) {
        auto targetFn = runtime->lookupFunction(0x524C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524748u; }
        if (ctx->pc != 0x524748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00524C30_0x524c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524748u; }
        if (ctx->pc != 0x524748u) { return; }
    }
    ctx->pc = 0x524748u;
label_524748:
    // 0x524748: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x524748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_52474c:
    // 0x52474c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x52474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_524750:
    // 0x524750: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x524750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_524754:
    // 0x524754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x524754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_524758:
    // 0x524758: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x524758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_52475c:
    // 0x52475c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x52475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_524760:
    // 0x524760: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x524760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_524764:
    // 0x524764: 0x8c830a6c  lw          $v1, 0xA6C($a0)
    ctx->pc = 0x524764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
label_524768:
    // 0x524768: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_52476c:
    if (ctx->pc == 0x52476Cu) {
        ctx->pc = 0x52476Cu;
            // 0x52476c: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->pc = 0x524770u;
        goto label_524770;
    }
    ctx->pc = 0x524768u;
    {
        const bool branch_taken_0x524768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x524768) {
            ctx->pc = 0x52476Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524768u;
            // 0x52476c: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524784u;
            goto label_524784;
        }
    }
    ctx->pc = 0x524770u;
label_524770:
    // 0x524770: 0x8c840a60  lw          $a0, 0xA60($a0)
    ctx->pc = 0x524770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2656)));
label_524774:
    // 0x524774: 0xc0eecc8  jal         func_3BB320
label_524778:
    if (ctx->pc == 0x524778u) {
        ctx->pc = 0x524778u;
            // 0x524778: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52477Cu;
        goto label_52477c;
    }
    ctx->pc = 0x524774u;
    SET_GPR_U32(ctx, 31, 0x52477Cu);
    ctx->pc = 0x524778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524774u;
            // 0x524778: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52477Cu; }
        if (ctx->pc != 0x52477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52477Cu; }
        if (ctx->pc != 0x52477Cu) { return; }
    }
    ctx->pc = 0x52477Cu;
label_52477c:
    // 0x52477c: 0x10000004  b           . + 4 + (0x4 << 2)
label_524780:
    if (ctx->pc == 0x524780u) {
        ctx->pc = 0x524780u;
            // 0x524780: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x524784u;
        goto label_524784;
    }
    ctx->pc = 0x52477Cu;
    {
        const bool branch_taken_0x52477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52477Cu;
            // 0x524780: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52477c) {
            ctx->pc = 0x524790u;
            goto label_524790;
        }
    }
    ctx->pc = 0x524784u;
label_524784:
    // 0x524784: 0xc04c720  jal         func_131C80
label_524788:
    if (ctx->pc == 0x524788u) {
        ctx->pc = 0x524788u;
            // 0x524788: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52478Cu;
        goto label_52478c;
    }
    ctx->pc = 0x524784u;
    SET_GPR_U32(ctx, 31, 0x52478Cu);
    ctx->pc = 0x524788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524784u;
            // 0x524788: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52478Cu; }
        if (ctx->pc != 0x52478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52478Cu; }
        if (ctx->pc != 0x52478Cu) { return; }
    }
    ctx->pc = 0x52478Cu;
label_52478c:
    // 0x52478c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x52478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_524790:
    // 0x524790: 0xc04c720  jal         func_131C80
label_524794:
    if (ctx->pc == 0x524794u) {
        ctx->pc = 0x524794u;
            // 0x524794: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x524798u;
        goto label_524798;
    }
    ctx->pc = 0x524790u;
    SET_GPR_U32(ctx, 31, 0x524798u);
    ctx->pc = 0x524794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524790u;
            // 0x524794: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524798u; }
        if (ctx->pc != 0x524798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524798u; }
        if (ctx->pc != 0x524798u) { return; }
    }
    ctx->pc = 0x524798u;
label_524798:
    // 0x524798: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x524798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_52479c:
    // 0x52479c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x52479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_5247a0:
    // 0x5247a0: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x5247a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5247a4:
    // 0x5247a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5247a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5247a8:
    // 0x5247a8: 0xc0477a8  jal         func_11DEA0
label_5247ac:
    if (ctx->pc == 0x5247ACu) {
        ctx->pc = 0x5247ACu;
            // 0x5247ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5247B0u;
        goto label_5247b0;
    }
    ctx->pc = 0x5247A8u;
    SET_GPR_U32(ctx, 31, 0x5247B0u);
    ctx->pc = 0x5247ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5247A8u;
            // 0x5247ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247B0u; }
        if (ctx->pc != 0x5247B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247B0u; }
        if (ctx->pc != 0x5247B0u) { return; }
    }
    ctx->pc = 0x5247B0u;
label_5247b0:
    // 0x5247b0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x5247b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_5247b4:
    // 0x5247b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x5247b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5247b8:
    // 0x5247b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x5247b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_5247bc:
    // 0x5247bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5247bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5247c0:
    // 0x5247c0: 0x0  nop
    ctx->pc = 0x5247c0u;
    // NOP
label_5247c4:
    // 0x5247c4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x5247c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5247c8:
    // 0x5247c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5247c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5247cc:
    // 0x5247cc: 0xc04cbd8  jal         func_132F60
label_5247d0:
    if (ctx->pc == 0x5247D0u) {
        ctx->pc = 0x5247D0u;
            // 0x5247d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5247D4u;
        goto label_5247d4;
    }
    ctx->pc = 0x5247CCu;
    SET_GPR_U32(ctx, 31, 0x5247D4u);
    ctx->pc = 0x5247D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5247CCu;
            // 0x5247d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247D4u; }
        if (ctx->pc != 0x5247D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247D4u; }
        if (ctx->pc != 0x5247D4u) { return; }
    }
    ctx->pc = 0x5247D4u;
label_5247d4:
    // 0x5247d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5247d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5247d8:
    // 0x5247d8: 0xc04f278  jal         func_13C9E0
label_5247dc:
    if (ctx->pc == 0x5247DCu) {
        ctx->pc = 0x5247DCu;
            // 0x5247dc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x5247E0u;
        goto label_5247e0;
    }
    ctx->pc = 0x5247D8u;
    SET_GPR_U32(ctx, 31, 0x5247E0u);
    ctx->pc = 0x5247DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5247D8u;
            // 0x5247dc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247E0u; }
        if (ctx->pc != 0x5247E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247E0u; }
        if (ctx->pc != 0x5247E0u) { return; }
    }
    ctx->pc = 0x5247E0u;
label_5247e0:
    // 0x5247e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5247e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5247e4:
    // 0x5247e4: 0xc04ce80  jal         func_133A00
label_5247e8:
    if (ctx->pc == 0x5247E8u) {
        ctx->pc = 0x5247E8u;
            // 0x5247e8: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x5247ECu;
        goto label_5247ec;
    }
    ctx->pc = 0x5247E4u;
    SET_GPR_U32(ctx, 31, 0x5247ECu);
    ctx->pc = 0x5247E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5247E4u;
            // 0x5247e8: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247ECu; }
        if (ctx->pc != 0x5247ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5247ECu; }
        if (ctx->pc != 0x5247ECu) { return; }
    }
    ctx->pc = 0x5247ECu;
label_5247ec:
    // 0x5247ec: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5247ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5247f0:
    // 0x5247f0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5247f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5247f4:
    // 0x5247f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x5247f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5247f8:
    // 0x5247f8: 0xc04cbe0  jal         func_132F80
label_5247fc:
    if (ctx->pc == 0x5247FCu) {
        ctx->pc = 0x5247FCu;
            // 0x5247fc: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->pc = 0x524800u;
        goto label_524800;
    }
    ctx->pc = 0x5247F8u;
    SET_GPR_U32(ctx, 31, 0x524800u);
    ctx->pc = 0x5247FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5247F8u;
            // 0x5247fc: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524800u; }
        if (ctx->pc != 0x524800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524800u; }
        if (ctx->pc != 0x524800u) { return; }
    }
    ctx->pc = 0x524800u;
label_524800:
    // 0x524800: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x524800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_524804:
    // 0x524804: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x524804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_524808:
    // 0x524808: 0xc04cca0  jal         func_133280
label_52480c:
    if (ctx->pc == 0x52480Cu) {
        ctx->pc = 0x52480Cu;
            // 0x52480c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x524810u;
        goto label_524810;
    }
    ctx->pc = 0x524808u;
    SET_GPR_U32(ctx, 31, 0x524810u);
    ctx->pc = 0x52480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524808u;
            // 0x52480c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524810u; }
        if (ctx->pc != 0x524810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524810u; }
        if (ctx->pc != 0x524810u) { return; }
    }
    ctx->pc = 0x524810u;
label_524810:
    // 0x524810: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x524810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_524814:
    // 0x524814: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
label_524818:
    if (ctx->pc == 0x524818u) {
        ctx->pc = 0x52481Cu;
        goto label_52481c;
    }
    ctx->pc = 0x524814u;
    {
        const bool branch_taken_0x524814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x524814) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x52481Cu;
label_52481c:
    // 0x52481c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524820:
    // 0x524820: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_524824:
    // 0x524824: 0xc149538  jal         func_5254E0
label_524828:
    if (ctx->pc == 0x524828u) {
        ctx->pc = 0x524828u;
            // 0x524828: 0x8e4500d4  lw          $a1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->pc = 0x52482Cu;
        goto label_52482c;
    }
    ctx->pc = 0x524824u;
    SET_GPR_U32(ctx, 31, 0x52482Cu);
    ctx->pc = 0x524828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524824u;
            // 0x524828: 0x8e4500d4  lw          $a1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5254E0u;
    if (runtime->hasFunction(0x5254E0u)) {
        auto targetFn = runtime->lookupFunction(0x5254E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52482Cu; }
        if (ctx->pc != 0x52482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005254E0_0x5254e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52482Cu; }
        if (ctx->pc != 0x52482Cu) { return; }
    }
    ctx->pc = 0x52482Cu;
label_52482c:
    // 0x52482c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_524830:
    // 0x524830: 0x1000005e  b           . + 4 + (0x5E << 2)
label_524834:
    if (ctx->pc == 0x524834u) {
        ctx->pc = 0x524834u;
            // 0x524834: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x524838u;
        goto label_524838;
    }
    ctx->pc = 0x524830u;
    {
        const bool branch_taken_0x524830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524830u;
            // 0x524834: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524830) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x524838u;
label_524838:
    // 0x524838: 0xc64200e0  lwc1        $f2, 0xE0($s2)
    ctx->pc = 0x524838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52483c:
    // 0x52483c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x52483cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_524840:
    // 0x524840: 0x0  nop
    ctx->pc = 0x524840u;
    // NOP
label_524844:
    // 0x524844: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x524844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524848:
    // 0x524848: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
label_52484c:
    if (ctx->pc == 0x52484Cu) {
        ctx->pc = 0x52484Cu;
            // 0x52484c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524850u;
        goto label_524850;
    }
    ctx->pc = 0x524848u;
    {
        const bool branch_taken_0x524848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x524848) {
            ctx->pc = 0x52484Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524848u;
            // 0x52484c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5248ACu;
            goto label_5248ac;
        }
    }
    ctx->pc = 0x524850u;
label_524850:
    // 0x524850: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x524850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_524854:
    // 0x524854: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x524854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_524858:
    // 0x524858: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x524858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52485c:
    // 0x52485c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x52485cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_524860:
    // 0x524860: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x524860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524864:
    // 0x524864: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_524868:
    if (ctx->pc == 0x524868u) {
        ctx->pc = 0x524868u;
            // 0x524868: 0xe64000e0  swc1        $f0, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->pc = 0x52486Cu;
        goto label_52486c;
    }
    ctx->pc = 0x524864u;
    {
        const bool branch_taken_0x524864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x524868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524864u;
            // 0x524868: 0xe64000e0  swc1        $f0, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x524864) {
            ctx->pc = 0x5248A8u;
            goto label_5248a8;
        }
    }
    ctx->pc = 0x52486Cu;
label_52486c:
    // 0x52486c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x52486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_524870:
    // 0x524870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x524870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_524874:
    // 0x524874: 0x344300a4  ori         $v1, $v0, 0xA4
    ctx->pc = 0x524874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
label_524878:
    // 0x524878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x524878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52487c:
    // 0x52487c: 0xe64100e0  swc1        $f1, 0xE0($s2)
    ctx->pc = 0x52487cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
label_524880:
    // 0x524880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524884:
    // 0x524884: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x524884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_524888:
    // 0x524888: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x524888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52488c:
    // 0x52488c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_524890:
    // 0x524890: 0xc08bff0  jal         func_22FFC0
label_524894:
    if (ctx->pc == 0x524894u) {
        ctx->pc = 0x524894u;
            // 0x524894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524898u;
        goto label_524898;
    }
    ctx->pc = 0x524890u;
    SET_GPR_U32(ctx, 31, 0x524898u);
    ctx->pc = 0x524894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524890u;
            // 0x524894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524898u; }
        if (ctx->pc != 0x524898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524898u; }
        if (ctx->pc != 0x524898u) { return; }
    }
    ctx->pc = 0x524898u;
label_524898:
    // 0x524898: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x524898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_52489c:
    // 0x52489c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x52489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_5248a0:
    // 0x5248a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x5248a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_5248a4:
    // 0x5248a4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x5248a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_5248a8:
    // 0x5248a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5248a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5248ac:
    // 0x5248ac: 0xc0dc9bc  jal         func_3726F0
label_5248b0:
    if (ctx->pc == 0x5248B0u) {
        ctx->pc = 0x5248B0u;
            // 0x5248b0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x5248B4u;
        goto label_5248b4;
    }
    ctx->pc = 0x5248ACu;
    SET_GPR_U32(ctx, 31, 0x5248B4u);
    ctx->pc = 0x5248B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5248ACu;
            // 0x5248b0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248B4u; }
        if (ctx->pc != 0x5248B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248B4u; }
        if (ctx->pc != 0x5248B4u) { return; }
    }
    ctx->pc = 0x5248B4u;
label_5248b4:
    // 0x5248b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5248b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5248b8:
    // 0x5248b8: 0xc0dc9a0  jal         func_372680
label_5248bc:
    if (ctx->pc == 0x5248BCu) {
        ctx->pc = 0x5248BCu;
            // 0x5248bc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x5248C0u;
        goto label_5248c0;
    }
    ctx->pc = 0x5248B8u;
    SET_GPR_U32(ctx, 31, 0x5248C0u);
    ctx->pc = 0x5248BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5248B8u;
            // 0x5248bc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248C0u; }
        if (ctx->pc != 0x5248C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248C0u; }
        if (ctx->pc != 0x5248C0u) { return; }
    }
    ctx->pc = 0x5248C0u;
label_5248c0:
    // 0x5248c0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_5248c4:
    if (ctx->pc == 0x5248C4u) {
        ctx->pc = 0x5248C8u;
        goto label_5248c8;
    }
    ctx->pc = 0x5248C0u;
    {
        const bool branch_taken_0x5248c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5248c0) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x5248C8u;
label_5248c8:
    // 0x5248c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5248c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5248cc:
    // 0x5248cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5248ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5248d0:
    // 0x5248d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5248d4:
    // 0x5248d4: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x5248d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5248d8:
    // 0x5248d8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x5248d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5248dc:
    // 0x5248dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x5248dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_5248e0:
    // 0x5248e0: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x5248e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
label_5248e4:
    // 0x5248e4: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x5248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_5248e8:
    // 0x5248e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5248e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5248ec:
    // 0x5248ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x5248ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_5248f0:
    // 0x5248f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x5248f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5248f4:
    // 0x5248f4: 0xc04f278  jal         func_13C9E0
label_5248f8:
    if (ctx->pc == 0x5248F8u) {
        ctx->pc = 0x5248F8u;
            // 0x5248f8: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x5248FCu;
        goto label_5248fc;
    }
    ctx->pc = 0x5248F4u;
    SET_GPR_U32(ctx, 31, 0x5248FCu);
    ctx->pc = 0x5248F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5248F4u;
            // 0x5248f8: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248FCu; }
        if (ctx->pc != 0x5248FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5248FCu; }
        if (ctx->pc != 0x5248FCu) { return; }
    }
    ctx->pc = 0x5248FCu;
label_5248fc:
    // 0x5248fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5248fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_524900:
    // 0x524900: 0xc04ce80  jal         func_133A00
label_524904:
    if (ctx->pc == 0x524904u) {
        ctx->pc = 0x524904u;
            // 0x524904: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x524908u;
        goto label_524908;
    }
    ctx->pc = 0x524900u;
    SET_GPR_U32(ctx, 31, 0x524908u);
    ctx->pc = 0x524904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524900u;
            // 0x524904: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524908u; }
        if (ctx->pc != 0x524908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524908u; }
        if (ctx->pc != 0x524908u) { return; }
    }
    ctx->pc = 0x524908u;
label_524908:
    // 0x524908: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x524908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_52490c:
    // 0x52490c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x52490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_524910:
    // 0x524910: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x524910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_524914:
    // 0x524914: 0xc04cca0  jal         func_133280
label_524918:
    if (ctx->pc == 0x524918u) {
        ctx->pc = 0x524918u;
            // 0x524918: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->pc = 0x52491Cu;
        goto label_52491c;
    }
    ctx->pc = 0x524914u;
    SET_GPR_U32(ctx, 31, 0x52491Cu);
    ctx->pc = 0x524918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524914u;
            // 0x524918: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52491Cu; }
        if (ctx->pc != 0x52491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52491Cu; }
        if (ctx->pc != 0x52491Cu) { return; }
    }
    ctx->pc = 0x52491Cu;
label_52491c:
    // 0x52491c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x52491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_524920:
    // 0x524920: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x524920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_524924:
    // 0x524924: 0xc04cc90  jal         func_133240
label_524928:
    if (ctx->pc == 0x524928u) {
        ctx->pc = 0x524928u;
            // 0x524928: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52492Cu;
        goto label_52492c;
    }
    ctx->pc = 0x524924u;
    SET_GPR_U32(ctx, 31, 0x52492Cu);
    ctx->pc = 0x524928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524924u;
            // 0x524928: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52492Cu; }
        if (ctx->pc != 0x52492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52492Cu; }
        if (ctx->pc != 0x52492Cu) { return; }
    }
    ctx->pc = 0x52492Cu;
label_52492c:
    // 0x52492c: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x52492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524930:
    // 0x524930: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x524930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_524934:
    // 0x524934: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x524934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524938:
    // 0x524938: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x524938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_52493c:
    // 0x52493c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x52493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_524940:
    // 0x524940: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x524940u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_524944:
    // 0x524944: 0x0  nop
    ctx->pc = 0x524944u;
    // NOP
label_524948:
    // 0x524948: 0x0  nop
    ctx->pc = 0x524948u;
    // NOP
label_52494c:
    // 0x52494c: 0xc04cc7c  jal         func_1331F0
label_524950:
    if (ctx->pc == 0x524950u) {
        ctx->pc = 0x524954u;
        goto label_524954;
    }
    ctx->pc = 0x52494Cu;
    SET_GPR_U32(ctx, 31, 0x524954u);
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524954u; }
        if (ctx->pc != 0x524954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524954u; }
        if (ctx->pc != 0x524954u) { return; }
    }
    ctx->pc = 0x524954u;
label_524954:
    // 0x524954: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x524954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524958:
    // 0x524958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x524958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52495c:
    // 0x52495c: 0x0  nop
    ctx->pc = 0x52495cu;
    // NOP
label_524960:
    // 0x524960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x524960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524964:
    // 0x524964: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_524968:
    if (ctx->pc == 0x524968u) {
        ctx->pc = 0x52496Cu;
        goto label_52496c;
    }
    ctx->pc = 0x524964u;
    {
        const bool branch_taken_0x524964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524964) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x52496Cu;
label_52496c:
    // 0x52496c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_524970:
    // 0x524970: 0x1000000e  b           . + 4 + (0xE << 2)
label_524974:
    if (ctx->pc == 0x524974u) {
        ctx->pc = 0x524974u;
            // 0x524974: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x524978u;
        goto label_524978;
    }
    ctx->pc = 0x524970u;
    {
        const bool branch_taken_0x524970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524970u;
            // 0x524974: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524970) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x524978u;
label_524978:
    // 0x524978: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x524978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_52497c:
    // 0x52497c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x52497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_524980:
    // 0x524980: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x524980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524984:
    // 0x524984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x524984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_524988:
    // 0x524988: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x524988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52498c:
    // 0x52498c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x52498cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_524990:
    // 0x524990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x524990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524994:
    // 0x524994: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_524998:
    if (ctx->pc == 0x524998u) {
        ctx->pc = 0x524998u;
            // 0x524998: 0xe64100e0  swc1        $f1, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->pc = 0x52499Cu;
        goto label_52499c;
    }
    ctx->pc = 0x524994u;
    {
        const bool branch_taken_0x524994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x524998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524994u;
            // 0x524998: 0xe64100e0  swc1        $f1, 0xE0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x524994) {
            ctx->pc = 0x5249ACu;
            goto label_5249ac;
        }
    }
    ctx->pc = 0x52499Cu;
label_52499c:
    // 0x52499c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5249a0:
    // 0x5249a0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x5249a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5249a4:
    // 0x5249a4: 0x320f809  jalr        $t9
label_5249a8:
    if (ctx->pc == 0x5249A8u) {
        ctx->pc = 0x5249ACu;
        goto label_5249ac;
    }
    ctx->pc = 0x5249A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5249ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5249ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5249ACu; }
            if (ctx->pc != 0x5249ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5249ACu;
label_5249ac:
    // 0x5249ac: 0xc64200e4  lwc1        $f2, 0xE4($s2)
    ctx->pc = 0x5249acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5249b0:
    // 0x5249b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x5249b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5249b4:
    // 0x5249b4: 0x0  nop
    ctx->pc = 0x5249b4u;
    // NOP
label_5249b8:
    // 0x5249b8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x5249b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5249bc:
    // 0x5249bc: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_5249c0:
    if (ctx->pc == 0x5249C0u) {
        ctx->pc = 0x5249C4u;
        goto label_5249c4;
    }
    ctx->pc = 0x5249BCu;
    {
        const bool branch_taken_0x5249bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5249bc) {
            ctx->pc = 0x524B90u;
            goto label_524b90;
        }
    }
    ctx->pc = 0x5249C4u;
label_5249c4:
    // 0x5249c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x5249c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_5249c8:
    // 0x5249c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5249c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5249cc:
    // 0x5249cc: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x5249ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_5249d0:
    // 0x5249d0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x5249d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5249d4:
    // 0x5249d4: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x5249d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_5249d8:
    // 0x5249d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5249d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5249dc:
    // 0x5249dc: 0x0  nop
    ctx->pc = 0x5249dcu;
    // NOP
label_5249e0:
    // 0x5249e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x5249e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_5249e4:
    // 0x5249e4: 0xe64100e4  swc1        $f1, 0xE4($s2)
    ctx->pc = 0x5249e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_5249e8:
    // 0x5249e8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5249e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5249ec:
    // 0x5249ec: 0xc64100ec  lwc1        $f1, 0xEC($s2)
    ctx->pc = 0x5249ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5249f0:
    // 0x5249f0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x5249f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5249f4:
    // 0x5249f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x5249f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_5249f8:
    // 0x5249f8: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x5249f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
label_5249fc:
    // 0x5249fc: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x5249fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524a00:
    // 0x524a00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x524a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524a04:
    // 0x524a04: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_524a08:
    if (ctx->pc == 0x524A08u) {
        ctx->pc = 0x524A08u;
            // 0x524a08: 0xc64000ec  lwc1        $f0, 0xEC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x524A0Cu;
        goto label_524a0c;
    }
    ctx->pc = 0x524A04u;
    {
        const bool branch_taken_0x524a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524a04) {
            ctx->pc = 0x524A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524A04u;
            // 0x524a08: 0xc64000ec  lwc1        $f0, 0xEC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x524A34u;
            goto label_524a34;
        }
    }
    ctx->pc = 0x524A0Cu;
label_524a0c:
    // 0x524a0c: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x524a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524a10:
    // 0x524a10: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x524a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524a14:
    // 0x524a14: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_524a18:
    if (ctx->pc == 0x524A18u) {
        ctx->pc = 0x524A18u;
            // 0x524a18: 0xc64100e4  lwc1        $f1, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x524A1Cu;
        goto label_524a1c;
    }
    ctx->pc = 0x524A14u;
    {
        const bool branch_taken_0x524a14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524a14) {
            ctx->pc = 0x524A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524A14u;
            // 0x524a18: 0xc64100e4  lwc1        $f1, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x524A68u;
            goto label_524a68;
        }
    }
    ctx->pc = 0x524A1Cu;
label_524a1c:
    // 0x524a1c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x524a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_524a20:
    // 0x524a20: 0xc073234  jal         func_1CC8D0
label_524a24:
    if (ctx->pc == 0x524A24u) {
        ctx->pc = 0x524A24u;
            // 0x524a24: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x524A28u;
        goto label_524a28;
    }
    ctx->pc = 0x524A20u;
    SET_GPR_U32(ctx, 31, 0x524A28u);
    ctx->pc = 0x524A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524A20u;
            // 0x524a24: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524A28u; }
        if (ctx->pc != 0x524A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524A28u; }
        if (ctx->pc != 0x524A28u) { return; }
    }
    ctx->pc = 0x524A28u;
label_524a28:
    // 0x524a28: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x524a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_524a2c:
    // 0x524a2c: 0x1000000d  b           . + 4 + (0xD << 2)
label_524a30:
    if (ctx->pc == 0x524A30u) {
        ctx->pc = 0x524A30u;
            // 0x524a30: 0xae4300ec  sw          $v1, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
        ctx->pc = 0x524A34u;
        goto label_524a34;
    }
    ctx->pc = 0x524A2Cu;
    {
        const bool branch_taken_0x524a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524A2Cu;
            // 0x524a30: 0xae4300ec  sw          $v1, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524a2c) {
            ctx->pc = 0x524A64u;
            goto label_524a64;
        }
    }
    ctx->pc = 0x524A34u;
label_524a34:
    // 0x524a34: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x524a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524a38:
    // 0x524a38: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_524a3c:
    if (ctx->pc == 0x524A3Cu) {
        ctx->pc = 0x524A40u;
        goto label_524a40;
    }
    ctx->pc = 0x524A38u;
    {
        const bool branch_taken_0x524a38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524a38) {
            ctx->pc = 0x524A64u;
            goto label_524a64;
        }
    }
    ctx->pc = 0x524A40u;
label_524a40:
    // 0x524a40: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x524a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_524a44:
    // 0x524a44: 0xc073234  jal         func_1CC8D0
label_524a48:
    if (ctx->pc == 0x524A48u) {
        ctx->pc = 0x524A48u;
            // 0x524a48: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x524A4Cu;
        goto label_524a4c;
    }
    ctx->pc = 0x524A44u;
    SET_GPR_U32(ctx, 31, 0x524A4Cu);
    ctx->pc = 0x524A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524A44u;
            // 0x524a48: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524A4Cu; }
        if (ctx->pc != 0x524A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524A4Cu; }
        if (ctx->pc != 0x524A4Cu) { return; }
    }
    ctx->pc = 0x524A4Cu;
label_524a4c:
    // 0x524a4c: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x524a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524a50:
    // 0x524a50: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x524a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_524a54:
    // 0x524a54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x524a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_524a58:
    // 0x524a58: 0x0  nop
    ctx->pc = 0x524a58u;
    // NOP
label_524a5c:
    // 0x524a5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x524a5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_524a60:
    // 0x524a60: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x524a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
label_524a64:
    // 0x524a64: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x524a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524a68:
    // 0x524a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x524a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_524a6c:
    // 0x524a6c: 0x0  nop
    ctx->pc = 0x524a6cu;
    // NOP
label_524a70:
    // 0x524a70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x524a70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_524a74:
    // 0x524a74: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_524a78:
    if (ctx->pc == 0x524A78u) {
        ctx->pc = 0x524A7Cu;
        goto label_524a7c;
    }
    ctx->pc = 0x524A74u;
    {
        const bool branch_taken_0x524a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524a74) {
            ctx->pc = 0x524B90u;
            goto label_524b90;
        }
    }
    ctx->pc = 0x524A7Cu;
label_524a7c:
    // 0x524a7c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x524a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_524a80:
    // 0x524a80: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x524a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_524a84:
    // 0x524a84: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x524a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_524a88:
    // 0x524a88: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_524a8c:
    if (ctx->pc == 0x524A8Cu) {
        ctx->pc = 0x524A90u;
        goto label_524a90;
    }
    ctx->pc = 0x524A88u;
    {
        const bool branch_taken_0x524a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x524a88) {
            ctx->pc = 0x524B90u;
            goto label_524b90;
        }
    }
    ctx->pc = 0x524A90u;
label_524a90:
    // 0x524a90: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x524a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_524a94:
    // 0x524a94: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x524a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
label_524a98:
    // 0x524a98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x524a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_524a9c:
    // 0x524a9c: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x524a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_524aa0:
    // 0x524aa0: 0x320f809  jalr        $t9
label_524aa4:
    if (ctx->pc == 0x524AA4u) {
        ctx->pc = 0x524AA4u;
            // 0x524aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524AA8u;
        goto label_524aa8;
    }
    ctx->pc = 0x524AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524AA8u);
        ctx->pc = 0x524AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524AA0u;
            // 0x524aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524AA8u; }
            if (ctx->pc != 0x524AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x524AA8u;
label_524aa8:
    // 0x524aa8: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x524aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_524aac:
    // 0x524aac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x524aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_524ab0:
    // 0x524ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x524ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_524ab4:
    // 0x524ab4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x524ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_524ab8:
    // 0x524ab8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x524ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_524abc:
    // 0x524abc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x524abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_524ac0:
    // 0x524ac0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x524ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_524ac4:
    // 0x524ac4: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x524ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_524ac8:
    // 0x524ac8: 0x8c44ab08  lw          $a0, -0x54F8($v0)
    ctx->pc = 0x524ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
label_524acc:
    // 0x524acc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x524accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_524ad0:
    // 0x524ad0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x524ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_524ad4:
    // 0x524ad4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x524ad4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_524ad8:
    // 0x524ad8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x524ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_524adc:
    // 0x524adc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x524adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_524ae0:
    // 0x524ae0: 0xc14bb88  jal         func_52EE20
label_524ae4:
    if (ctx->pc == 0x524AE4u) {
        ctx->pc = 0x524AE4u;
            // 0x524ae4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x524AE8u;
        goto label_524ae8;
    }
    ctx->pc = 0x524AE0u;
    SET_GPR_U32(ctx, 31, 0x524AE8u);
    ctx->pc = 0x524AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524AE0u;
            // 0x524ae4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524AE8u; }
        if (ctx->pc != 0x524AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524AE8u; }
        if (ctx->pc != 0x524AE8u) { return; }
    }
    ctx->pc = 0x524AE8u;
label_524ae8:
    // 0x524ae8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524aec:
    // 0x524aec: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_524af0:
    // 0x524af0: 0xc149538  jal         func_5254E0
label_524af4:
    if (ctx->pc == 0x524AF4u) {
        ctx->pc = 0x524AF4u;
            // 0x524af4: 0x8e4500d4  lw          $a1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->pc = 0x524AF8u;
        goto label_524af8;
    }
    ctx->pc = 0x524AF0u;
    SET_GPR_U32(ctx, 31, 0x524AF8u);
    ctx->pc = 0x524AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524AF0u;
            // 0x524af4: 0x8e4500d4  lw          $a1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5254E0u;
    if (runtime->hasFunction(0x5254E0u)) {
        auto targetFn = runtime->lookupFunction(0x5254E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524AF8u; }
        if (ctx->pc != 0x524AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005254E0_0x5254e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524AF8u; }
        if (ctx->pc != 0x524AF8u) { return; }
    }
    ctx->pc = 0x524AF8u;
label_524af8:
    // 0x524af8: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x524af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_524afc:
    // 0x524afc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x524afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_524b00:
    // 0x524b00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524b04:
    // 0x524b04: 0x346501ae  ori         $a1, $v1, 0x1AE
    ctx->pc = 0x524b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
label_524b08:
    // 0x524b08: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_524b0c:
    // 0x524b0c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x524b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_524b10:
    // 0x524b10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x524b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_524b14:
    // 0x524b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x524b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_524b18:
    // 0x524b18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x524b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_524b1c:
    // 0x524b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x524b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_524b20:
    // 0x524b20: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x524b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
label_524b24:
    // 0x524b24: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x524b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_524b28:
    // 0x524b28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x524b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_524b2c:
    // 0x524b2c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x524b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_524b30:
    // 0x524b30: 0x320f809  jalr        $t9
label_524b34:
    if (ctx->pc == 0x524B34u) {
        ctx->pc = 0x524B38u;
        goto label_524b38;
    }
    ctx->pc = 0x524B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524B38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x524B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524B38u; }
            if (ctx->pc != 0x524B38u) { return; }
        }
        }
    }
    ctx->pc = 0x524B38u;
label_524b38:
    // 0x524b38: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x524b38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_524b3c:
    // 0x524b3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x524b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_524b40:
    // 0x524b40: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x524b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_524b44:
    // 0x524b44: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x524b44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_524b48:
    // 0x524b48: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x524b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_524b4c:
    // 0x524b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x524b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_524b50:
    // 0x524b50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x524b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_524b54:
    // 0x524b54: 0xc078534  jal         func_1E14D0
label_524b58:
    if (ctx->pc == 0x524B58u) {
        ctx->pc = 0x524B58u;
            // 0x524b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524B5Cu;
        goto label_524b5c;
    }
    ctx->pc = 0x524B54u;
    SET_GPR_U32(ctx, 31, 0x524B5Cu);
    ctx->pc = 0x524B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524B54u;
            // 0x524b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E14D0u;
    if (runtime->hasFunction(0x1E14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524B5Cu; }
        if (ctx->pc != 0x524B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E14D0_0x1e14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524B5Cu; }
        if (ctx->pc != 0x524B5Cu) { return; }
    }
    ctx->pc = 0x524B5Cu;
label_524b5c:
    // 0x524b5c: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x524b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_524b60:
    // 0x524b60: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x524b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_524b64:
    // 0x524b64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x524b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_524b68:
    // 0x524b68: 0x320f809  jalr        $t9
label_524b6c:
    if (ctx->pc == 0x524B6Cu) {
        ctx->pc = 0x524B6Cu;
            // 0x524b6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x524B70u;
        goto label_524b70;
    }
    ctx->pc = 0x524B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524B70u);
        ctx->pc = 0x524B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524B68u;
            // 0x524b6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524B70u; }
            if (ctx->pc != 0x524B70u) { return; }
        }
        }
    }
    ctx->pc = 0x524B70u;
label_524b70:
    // 0x524b70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x524b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_524b74:
    // 0x524b74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x524b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_524b78:
    // 0x524b78: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x524b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_524b7c:
    // 0x524b7c: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x524b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_524b80:
    // 0x524b80: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x524b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_524b84:
    // 0x524b84: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_524b88:
    if (ctx->pc == 0x524B88u) {
        ctx->pc = 0x524B88u;
            // 0x524b88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x524B8Cu;
        goto label_524b8c;
    }
    ctx->pc = 0x524B84u;
    {
        const bool branch_taken_0x524b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x524B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524B84u;
            // 0x524b88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524b84) {
            ctx->pc = 0x524B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_524b44;
        }
    }
    ctx->pc = 0x524B8Cu;
label_524b8c:
    // 0x524b8c: 0x0  nop
    ctx->pc = 0x524b8cu;
    // NOP
label_524b90:
    // 0x524b90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x524b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_524b94:
    // 0x524b94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x524b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_524b98:
    // 0x524b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x524b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_524b9c:
    // 0x524b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x524b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_524ba0:
    // 0x524ba0: 0x3e00008  jr          $ra
label_524ba4:
    if (ctx->pc == 0x524BA4u) {
        ctx->pc = 0x524BA4u;
            // 0x524ba4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x524BA8u;
        goto label_524ba8;
    }
    ctx->pc = 0x524BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x524BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524BA0u;
            // 0x524ba4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x524BA8u;
label_524ba8:
    // 0x524ba8: 0x0  nop
    ctx->pc = 0x524ba8u;
    // NOP
label_524bac:
    // 0x524bac: 0x0  nop
    ctx->pc = 0x524bacu;
    // NOP
label_524bb0:
    // 0x524bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x524bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_524bb4:
    // 0x524bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x524bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_524bb8:
    // 0x524bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x524bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_524bbc:
    // 0x524bbc: 0xc0e393c  jal         func_38E4F0
label_524bc0:
    if (ctx->pc == 0x524BC0u) {
        ctx->pc = 0x524BC0u;
            // 0x524bc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524BC4u;
        goto label_524bc4;
    }
    ctx->pc = 0x524BBCu;
    SET_GPR_U32(ctx, 31, 0x524BC4u);
    ctx->pc = 0x524BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524BBCu;
            // 0x524bc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524BC4u; }
        if (ctx->pc != 0x524BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524BC4u; }
        if (ctx->pc != 0x524BC4u) { return; }
    }
    ctx->pc = 0x524BC4u;
label_524bc4:
    // 0x524bc4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x524bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_524bc8:
    // 0x524bc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524bcc:
    // 0x524bcc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x524bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_524bd0:
    // 0x524bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x524bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_524bd4:
    // 0x524bd4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x524bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_524bd8:
    // 0x524bd8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x524bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_524bdc:
    // 0x524bdc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x524bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_524be0:
    // 0x524be0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x524be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_524be4:
    // 0x524be4: 0xc08bff0  jal         func_22FFC0
label_524be8:
    if (ctx->pc == 0x524BE8u) {
        ctx->pc = 0x524BE8u;
            // 0x524be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524BECu;
        goto label_524bec;
    }
    ctx->pc = 0x524BE4u;
    SET_GPR_U32(ctx, 31, 0x524BECu);
    ctx->pc = 0x524BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524BE4u;
            // 0x524be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524BECu; }
        if (ctx->pc != 0x524BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524BECu; }
        if (ctx->pc != 0x524BECu) { return; }
    }
    ctx->pc = 0x524BECu;
label_524bec:
    // 0x524bec: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x524becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_524bf0:
    // 0x524bf0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x524bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_524bf4:
    // 0x524bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x524bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_524bf8:
    // 0x524bf8: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x524bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_524bfc:
    // 0x524bfc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x524bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_524c00:
    // 0x524c00: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x524c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_524c04:
    // 0x524c04: 0xacc40214  sw          $a0, 0x214($a2)
    ctx->pc = 0x524c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 4));
label_524c08:
    // 0x524c08: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x524c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_524c0c:
    // 0x524c0c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x524c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_524c10:
    // 0x524c10: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x524c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_524c14:
    // 0x524c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x524c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_524c18:
    // 0x524c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x524c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_524c1c:
    // 0x524c1c: 0x3e00008  jr          $ra
label_524c20:
    if (ctx->pc == 0x524C20u) {
        ctx->pc = 0x524C20u;
            // 0x524c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x524C24u;
        goto label_524c24;
    }
    ctx->pc = 0x524C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x524C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524C1Cu;
            // 0x524c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x524C24u;
label_524c24:
    // 0x524c24: 0x0  nop
    ctx->pc = 0x524c24u;
    // NOP
label_524c28:
    // 0x524c28: 0x0  nop
    ctx->pc = 0x524c28u;
    // NOP
label_524c2c:
    // 0x524c2c: 0x0  nop
    ctx->pc = 0x524c2cu;
    // NOP
}
