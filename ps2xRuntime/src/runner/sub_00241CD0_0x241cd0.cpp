#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241CD0
// Address: 0x241cd0 - 0x242650
void sub_00241CD0_0x241cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241CD0_0x241cd0");
#endif

    switch (ctx->pc) {
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        default: break;
    }

    ctx->pc = 0x241cd0u;

label_241cd0:
    // 0x241cd0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_241cd4:
    // 0x241cd4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x241cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_241cd8:
    // 0x241cd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x241cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_241cdc:
    // 0x241cdc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x241cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_241ce0:
    // 0x241ce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x241ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_241ce4:
    // 0x241ce4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x241ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_241ce8:
    // 0x241ce8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x241ce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_241cec:
    // 0x241cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_241cf0:
    // 0x241cf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241cf4:
    // 0x241cf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_241cf8:
    // 0x241cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x241cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241cfc:
    // 0x241cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_241d00:
    // 0x241d00: 0x106000d9  beqz        $v1, . + 4 + (0xD9 << 2)
label_241d04:
    if (ctx->pc == 0x241D04u) {
        ctx->pc = 0x241D04u;
            // 0x241d04: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D08u;
        goto label_241d08;
    }
    ctx->pc = 0x241D00u;
    {
        const bool branch_taken_0x241d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D00u;
            // 0x241d04: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d00) {
            ctx->pc = 0x242068u;
            goto label_242068;
        }
    }
    ctx->pc = 0x241D08u;
label_241d08:
    // 0x241d08: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x241d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
label_241d0c:
    // 0x241d0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x241d0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_241d10:
    // 0x241d10: 0x54600062  bnel        $v1, $zero, . + 4 + (0x62 << 2)
label_241d14:
    if (ctx->pc == 0x241D14u) {
        ctx->pc = 0x241D14u;
            // 0x241d14: 0x926300a8  lbu         $v1, 0xA8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
        ctx->pc = 0x241D18u;
        goto label_241d18;
    }
    ctx->pc = 0x241D10u;
    {
        const bool branch_taken_0x241d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241d10) {
            ctx->pc = 0x241D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241D10u;
            // 0x241d14: 0x926300a8  lbu         $v1, 0xA8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241E9Cu;
            goto label_241e9c;
        }
    }
    ctx->pc = 0x241D18u;
label_241d18:
    // 0x241d18: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_241d1c:
    // 0x241d1c: 0x267400a0  addiu       $s4, $s3, 0xA0
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_241d20:
    // 0x241d20: 0x8e7001c0  lw          $s0, 0x1C0($s3)
    ctx->pc = 0x241d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_241d24:
    // 0x241d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241d28:
    // 0x241d28: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_241d2c:
    // 0x241d2c: 0x320f809  jalr        $t9
label_241d30:
    if (ctx->pc == 0x241D30u) {
        ctx->pc = 0x241D30u;
            // 0x241d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D34u;
        goto label_241d34;
    }
    ctx->pc = 0x241D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241D34u);
        ctx->pc = 0x241D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D2Cu;
            // 0x241d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241D34u; }
            if (ctx->pc != 0x241D34u) { return; }
        }
        }
    }
    ctx->pc = 0x241D34u;
label_241d34:
    // 0x241d34: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x241d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_241d38:
    // 0x241d38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241d3c:
    // 0x241d3c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x241d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_241d40:
    // 0x241d40: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x241d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241d44:
    // 0x241d44: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x241d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
label_241d48:
    // 0x241d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x241d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d4c:
    // 0x241d4c: 0xa664002a  sh          $a0, 0x2A($s3)
    ctx->pc = 0x241d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 4));
label_241d50:
    // 0x241d50: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_241d54:
    // 0x241d54: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_241d58:
    // 0x241d58: 0x2844000d  slti        $a0, $v0, 0xD
    ctx->pc = 0x241d58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_241d5c:
    // 0x241d5c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x241d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_241d60:
    // 0x241d60: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x241d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_241d64:
    // 0x241d64: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x241d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_241d68:
    // 0x241d68: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_241d6c:
    // 0x241d6c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x241d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_241d70:
    // 0x241d70: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_241d74:
    // 0x241d74: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x241d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_241d78:
    // 0x241d78: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_241d7c:
    // 0x241d7c: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x241d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_241d80:
    // 0x241d80: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_241d84:
    // 0x241d84: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x241d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_241d88:
    // 0x241d88: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_241d8c:
    // 0x241d8c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x241d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_241d90:
    // 0x241d90: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x241d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_241d94:
    // 0x241d94: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x241d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_241d98:
    // 0x241d98: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_241d9c:
    // 0x241d9c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x241d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_241da0:
    // 0x241da0: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_241da4:
    // 0x241da4: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x241da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
label_241da8:
    // 0x241da8: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_241dac:
    // 0x241dac: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x241dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
label_241db0:
    // 0x241db0: 0x8ce5002c  lw          $a1, 0x2C($a3)
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_241db4:
    // 0x241db4: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x241db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
label_241db8:
    // 0x241db8: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_241dbc:
    // 0x241dbc: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x241dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
label_241dc0:
    // 0x241dc0: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_241dc4:
    // 0x241dc4: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x241dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
label_241dc8:
    // 0x241dc8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_241dcc:
    // 0x241dcc: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x241dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
label_241dd0:
    // 0x241dd0: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_241dd4:
    // 0x241dd4: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x241dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
label_241dd8:
    // 0x241dd8: 0x8ce50040  lw          $a1, 0x40($a3)
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_241ddc:
    // 0x241ddc: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x241ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
label_241de0:
    // 0x241de0: 0x8ce50044  lw          $a1, 0x44($a3)
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_241de4:
    // 0x241de4: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x241de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
label_241de8:
    // 0x241de8: 0x8ce50048  lw          $a1, 0x48($a3)
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_241dec:
    // 0x241dec: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x241decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
label_241df0:
    // 0x241df0: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x241df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_241df4:
    // 0x241df4: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x241df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
label_241df8:
    // 0x241df8: 0x8ce50050  lw          $a1, 0x50($a3)
    ctx->pc = 0x241df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_241dfc:
    // 0x241dfc: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x241dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
label_241e00:
    // 0x241e00: 0x8ce50054  lw          $a1, 0x54($a3)
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_241e04:
    // 0x241e04: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x241e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
label_241e08:
    // 0x241e08: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_241e0c:
    // 0x241e0c: 0xac650058  sw          $a1, 0x58($v1)
    ctx->pc = 0x241e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 5));
label_241e10:
    // 0x241e10: 0x8ce5005c  lw          $a1, 0x5C($a3)
    ctx->pc = 0x241e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_241e14:
    // 0x241e14: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x241e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
label_241e18:
    // 0x241e18: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_241e1c:
    // 0x241e1c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
label_241e20:
    if (ctx->pc == 0x241E20u) {
        ctx->pc = 0x241E20u;
            // 0x241e20: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x241E24u;
        goto label_241e24;
    }
    ctx->pc = 0x241E1Cu;
    {
        const bool branch_taken_0x241e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E1Cu;
            // 0x241e20: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e1c) {
            ctx->pc = 0x241D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241d50;
        }
    }
    ctx->pc = 0x241E24u;
label_241e24:
    // 0x241e24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_241e28:
    // 0x241e28: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_241e2c:
    // 0x241e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e30:
    // 0x241e30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241e34:
    // 0x241e34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x241e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_241e38:
    // 0x241e38: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x241e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_241e3c:
    // 0x241e3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x241e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_241e40:
    // 0x241e40: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_241e44:
    // 0x241e44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x241e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_241e48:
    // 0x241e48: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_241e4c:
    // 0x241e4c: 0xc0a8458  jal         func_2A1160
label_241e50:
    if (ctx->pc == 0x241E50u) {
        ctx->pc = 0x241E50u;
            // 0x241e50: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x241E54u;
        goto label_241e54;
    }
    ctx->pc = 0x241E4Cu;
    SET_GPR_U32(ctx, 31, 0x241E54u);
    ctx->pc = 0x241E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241E4Cu;
            // 0x241e50: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E54u; }
        if (ctx->pc != 0x241E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E54u; }
        if (ctx->pc != 0x241E54u) { return; }
    }
    ctx->pc = 0x241E54u;
label_241e54:
    // 0x241e54: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x241e54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_241e58:
    // 0x241e58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_241e5c:
    if (ctx->pc == 0x241E5Cu) {
        ctx->pc = 0x241E60u;
        goto label_241e60;
    }
    ctx->pc = 0x241E58u;
    {
        const bool branch_taken_0x241e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e58) {
            ctx->pc = 0x241E98u;
            goto label_241e98;
        }
    }
    ctx->pc = 0x241E60u;
label_241e60:
    // 0x241e60: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x241e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_241e64:
    // 0x241e64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x241e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_241e68:
    // 0x241e68: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x241e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_241e6c:
    // 0x241e6c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x241e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_241e70:
    // 0x241e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x241e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_241e74:
    // 0x241e74: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_241e78:
    if (ctx->pc == 0x241E78u) {
        ctx->pc = 0x241E7Cu;
        goto label_241e7c;
    }
    ctx->pc = 0x241E74u;
    {
        const bool branch_taken_0x241e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e74) {
            ctx->pc = 0x241E98u;
            goto label_241e98;
        }
    }
    ctx->pc = 0x241E7Cu;
label_241e7c:
    // 0x241e7c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_241e80:
    if (ctx->pc == 0x241E80u) {
        ctx->pc = 0x241E84u;
        goto label_241e84;
    }
    ctx->pc = 0x241E7Cu;
    {
        const bool branch_taken_0x241e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e7c) {
            ctx->pc = 0x241E98u;
            goto label_241e98;
        }
    }
    ctx->pc = 0x241E84u;
label_241e84:
    // 0x241e84: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_241e88:
    // 0x241e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241e8c:
    // 0x241e8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_241e90:
    // 0x241e90: 0x320f809  jalr        $t9
label_241e94:
    if (ctx->pc == 0x241E94u) {
        ctx->pc = 0x241E94u;
            // 0x241e94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241E98u;
        goto label_241e98;
    }
    ctx->pc = 0x241E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241E98u);
        ctx->pc = 0x241E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E90u;
            // 0x241e94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241E98u; }
            if (ctx->pc != 0x241E98u) { return; }
        }
        }
    }
    ctx->pc = 0x241E98u;
label_241e98:
    // 0x241e98: 0x926300a8  lbu         $v1, 0xA8($s3)
    ctx->pc = 0x241e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
label_241e9c:
    // 0x241e9c: 0x524301c6  beql        $s2, $v1, . + 4 + (0x1C6 << 2)
label_241ea0:
    if (ctx->pc == 0x241EA0u) {
        ctx->pc = 0x241EA0u;
            // 0x241ea0: 0x266300b0  addiu       $v1, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->pc = 0x241EA4u;
        goto label_241ea4;
    }
    ctx->pc = 0x241E9Cu;
    {
        const bool branch_taken_0x241e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x241e9c) {
            ctx->pc = 0x241EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241E9Cu;
            // 0x241ea0: 0x266300b0  addiu       $v1, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2425B8u;
            goto label_2425b8;
        }
    }
    ctx->pc = 0x241EA4u;
label_241ea4:
    // 0x241ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ea8:
    // 0x241ea8: 0x124301c2  beq         $s2, $v1, . + 4 + (0x1C2 << 2)
label_241eac:
    if (ctx->pc == 0x241EACu) {
        ctx->pc = 0x241EB0u;
        goto label_241eb0;
    }
    ctx->pc = 0x241EA8u;
    {
        const bool branch_taken_0x241ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x241ea8) {
            ctx->pc = 0x2425B4u;
            goto label_2425b4;
        }
    }
    ctx->pc = 0x241EB0u;
label_241eb0:
    // 0x241eb0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_241eb4:
    // 0x241eb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_241eb8:
    // 0x241eb8: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
label_241ebc:
    // 0x241ebc: 0xa7a301d6  sh          $v1, 0x1D6($sp)
    ctx->pc = 0x241ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 470), (uint16_t)GPR_U32(ctx, 3));
label_241ec0:
    // 0x241ec0: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x241ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_241ec4:
    // 0x241ec4: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_241ec8:
    // 0x241ec8: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x241ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_241ecc:
    // 0x241ecc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x241eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_241ed0:
    // 0x241ed0: 0x2484eb20  addiu       $a0, $a0, -0x14E0
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961952));
label_241ed4:
    // 0x241ed4: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x241ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
label_241ed8:
    // 0x241ed8: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x241ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_241edc:
    // 0x241edc: 0x266600a0  addiu       $a2, $s3, 0xA0
    ctx->pc = 0x241edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_241ee0:
    // 0x241ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x241ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241ee4:
    // 0x241ee4: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x241ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_241ee8:
    // 0x241ee8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_241eec:
    // 0x241eec: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_241ef0:
    // 0x241ef0: 0x2844000d  slti        $a0, $v0, 0xD
    ctx->pc = 0x241ef0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_241ef4:
    // 0x241ef4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x241ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_241ef8:
    // 0x241ef8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_241efc:
    // 0x241efc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x241efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_241f00:
    // 0x241f00: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_241f04:
    // 0x241f04: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x241f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_241f08:
    // 0x241f08: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_241f0c:
    // 0x241f0c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x241f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_241f10:
    // 0x241f10: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x241f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_241f14:
    // 0x241f14: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x241f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_241f18:
    // 0x241f18: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_241f1c:
    // 0x241f1c: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x241f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_241f20:
    // 0x241f20: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_241f24:
    // 0x241f24: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x241f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_241f28:
    // 0x241f28: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x241f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_241f2c:
    // 0x241f2c: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x241f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_241f30:
    // 0x241f30: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_241f34:
    // 0x241f34: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x241f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_241f38:
    // 0x241f38: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_241f3c:
    // 0x241f3c: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x241f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
label_241f40:
    // 0x241f40: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_241f44:
    // 0x241f44: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x241f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
label_241f48:
    // 0x241f48: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x241f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_241f4c:
    // 0x241f4c: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x241f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
label_241f50:
    // 0x241f50: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x241f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_241f54:
    // 0x241f54: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x241f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
label_241f58:
    // 0x241f58: 0x8cc50034  lw          $a1, 0x34($a2)
    ctx->pc = 0x241f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_241f5c:
    // 0x241f5c: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x241f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
label_241f60:
    // 0x241f60: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_241f64:
    // 0x241f64: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x241f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
label_241f68:
    // 0x241f68: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x241f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_241f6c:
    // 0x241f6c: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x241f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
label_241f70:
    // 0x241f70: 0x8cc50040  lw          $a1, 0x40($a2)
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_241f74:
    // 0x241f74: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x241f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
label_241f78:
    // 0x241f78: 0x8cc50044  lw          $a1, 0x44($a2)
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_241f7c:
    // 0x241f7c: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x241f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
label_241f80:
    // 0x241f80: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_241f84:
    // 0x241f84: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x241f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
label_241f88:
    // 0x241f88: 0x8cc5004c  lw          $a1, 0x4C($a2)
    ctx->pc = 0x241f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_241f8c:
    // 0x241f8c: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x241f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
label_241f90:
    // 0x241f90: 0x8cc50050  lw          $a1, 0x50($a2)
    ctx->pc = 0x241f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_241f94:
    // 0x241f94: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x241f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
label_241f98:
    // 0x241f98: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_241f9c:
    // 0x241f9c: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x241f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
label_241fa0:
    // 0x241fa0: 0x8cc50058  lw          $a1, 0x58($a2)
    ctx->pc = 0x241fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_241fa4:
    // 0x241fa4: 0xac650058  sw          $a1, 0x58($v1)
    ctx->pc = 0x241fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 5));
label_241fa8:
    // 0x241fa8: 0x8cc5005c  lw          $a1, 0x5C($a2)
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_241fac:
    // 0x241fac: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x241facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
label_241fb0:
    // 0x241fb0: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x241fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_241fb4:
    // 0x241fb4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
label_241fb8:
    if (ctx->pc == 0x241FB8u) {
        ctx->pc = 0x241FB8u;
            // 0x241fb8: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x241FBCu;
        goto label_241fbc;
    }
    ctx->pc = 0x241FB4u;
    {
        const bool branch_taken_0x241fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FB4u;
            // 0x241fb8: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fb4) {
            ctx->pc = 0x241EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241FBCu;
label_241fbc:
    // 0x241fbc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x241fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_241fc0:
    // 0x241fc0: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x241fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_241fc4:
    // 0x241fc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x241fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_241fc8:
    // 0x241fc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x241fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_241fcc:
    // 0x241fcc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x241fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_241fd0:
    // 0x241fd0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_241fd4:
    // 0x241fd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x241fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_241fd8:
    // 0x241fd8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_241fdc:
    // 0x241fdc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x241fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_241fe0:
    // 0x241fe0: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_241fe4:
    // 0x241fe4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_241fe8:
    // 0x241fe8: 0x320f809  jalr        $t9
label_241fec:
    if (ctx->pc == 0x241FECu) {
        ctx->pc = 0x241FECu;
            // 0x241fec: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x241FF0u;
        goto label_241ff0;
    }
    ctx->pc = 0x241FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241FF0u);
        ctx->pc = 0x241FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FE8u;
            // 0x241fec: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241FF0u; }
            if (ctx->pc != 0x241FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x241FF0u;
label_241ff0:
    // 0x241ff0: 0xc089638  jal         func_2258E0
label_241ff4:
    if (ctx->pc == 0x241FF4u) {
        ctx->pc = 0x241FF4u;
            // 0x241ff4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x241FF8u;
        goto label_241ff8;
    }
    ctx->pc = 0x241FF0u;
    SET_GPR_U32(ctx, 31, 0x241FF8u);
    ctx->pc = 0x241FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241FF0u;
            // 0x241ff4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241FF8u; }
        if (ctx->pc != 0x241FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241FF8u; }
        if (ctx->pc != 0x241FF8u) { return; }
    }
    ctx->pc = 0x241FF8u;
label_241ff8:
    // 0x241ff8: 0xc7ad0284  lwc1        $f13, 0x284($sp)
    ctx->pc = 0x241ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_241ffc:
    // 0x241ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242000:
    // 0x242000: 0xc7ae0288  lwc1        $f14, 0x288($sp)
    ctx->pc = 0x242000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_242004:
    // 0x242004: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x242004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_242008:
    // 0x242008: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x242008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_24200c:
    // 0x24200c: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_242010:
    // 0x242010: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_242014:
    // 0x242014: 0x27a80260  addiu       $t0, $sp, 0x260
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_242018:
    // 0x242018: 0xc088e44  jal         func_223910
label_24201c:
    if (ctx->pc == 0x24201Cu) {
        ctx->pc = 0x24201Cu;
            // 0x24201c: 0x266900a0  addiu       $t1, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x242020u;
        goto label_242020;
    }
    ctx->pc = 0x242018u;
    SET_GPR_U32(ctx, 31, 0x242020u);
    ctx->pc = 0x24201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242018u;
            // 0x24201c: 0x266900a0  addiu       $t1, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223910u;
    if (runtime->hasFunction(0x223910u)) {
        auto targetFn = runtime->lookupFunction(0x223910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242020u; }
        if (ctx->pc != 0x242020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223910_0x223910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242020u; }
        if (ctx->pc != 0x242020u) { return; }
    }
    ctx->pc = 0x242020u;
label_242020:
    // 0x242020: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x242020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_242024:
    // 0x242024: 0x267000a0  addiu       $s0, $s3, 0xA0
    ctx->pc = 0x242024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_242028:
    // 0x242028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24202c:
    // 0x24202c: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_242030:
    // 0x242030: 0x320f809  jalr        $t9
label_242034:
    if (ctx->pc == 0x242034u) {
        ctx->pc = 0x242034u;
            // 0x242034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242038u;
        goto label_242038;
    }
    ctx->pc = 0x242030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242038u);
        ctx->pc = 0x242034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242030u;
            // 0x242034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242038u; }
            if (ctx->pc != 0x242038u) { return; }
        }
        }
    }
    ctx->pc = 0x242038u;
label_242038:
    // 0x242038: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x242038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24203c:
    // 0x24203c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_242040:
    // 0x242040: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x242040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_242044:
    // 0x242044: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x242044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_242048:
    // 0x242048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24204c:
    // 0x24204c: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x24204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_242050:
    // 0x242050: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x242050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242054:
    // 0x242054: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x242054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_242058:
    // 0x242058: 0xc0899ac  jal         func_2266B0
label_24205c:
    if (ctx->pc == 0x24205Cu) {
        ctx->pc = 0x24205Cu;
            // 0x24205c: 0xafa201d0  sw          $v0, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x242060u;
        goto label_242060;
    }
    ctx->pc = 0x242058u;
    SET_GPR_U32(ctx, 31, 0x242060u);
    ctx->pc = 0x24205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242058u;
            // 0x24205c: 0xafa201d0  sw          $v0, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2266B0u;
    if (runtime->hasFunction(0x2266B0u)) {
        auto targetFn = runtime->lookupFunction(0x2266B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242060u; }
        if (ctx->pc != 0x242060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266B0_0x2266b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242060u; }
        if (ctx->pc != 0x242060u) { return; }
    }
    ctx->pc = 0x242060u;
label_242060:
    // 0x242060: 0x10000154  b           . + 4 + (0x154 << 2)
label_242064:
    if (ctx->pc == 0x242064u) {
        ctx->pc = 0x242068u;
        goto label_242068;
    }
    ctx->pc = 0x242060u;
    {
        const bool branch_taken_0x242060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242060) {
            ctx->pc = 0x2425B4u;
            goto label_2425b4;
        }
    }
    ctx->pc = 0x242068u;
label_242068:
    // 0x242068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24206c:
    // 0x24206c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242070:
    // 0x242070: 0xa7a20076  sh          $v0, 0x76($sp)
    ctx->pc = 0x242070u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 2));
label_242074:
    // 0x242074: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_242078:
    // 0x242078: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_24207c:
    // 0x24207c: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_242080:
    // 0x242080: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x242080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_242084:
    // 0x242084: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_242088:
    // 0x242088: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_24208c:
    // 0x24208c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x24208cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_242090:
    // 0x242090: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_242094:
    // 0x242094: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x242094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_242098:
    // 0x242098: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_24209c:
    // 0x24209c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x24209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2420a0:
    // 0x2420a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2420a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420a4:
    // 0x2420a4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2420a8:
    // 0x2420a8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2420ac:
    // 0x2420ac: 0x2845000d  slti        $a1, $v0, 0xD
    ctx->pc = 0x2420acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_2420b0:
    // 0x2420b0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2420b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_2420b4:
    // 0x2420b4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2420b8:
    // 0x2420b8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2420b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_2420bc:
    // 0x2420bc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2420bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2420c0:
    // 0x2420c0: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2420c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_2420c4:
    // 0x2420c4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2420c8:
    // 0x2420c8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2420c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_2420cc:
    // 0x2420cc: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2420ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2420d0:
    // 0x2420d0: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2420d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
label_2420d4:
    // 0x2420d4: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2420d8:
    // 0x2420d8: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x2420d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_2420dc:
    // 0x2420dc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2420dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2420e0:
    // 0x2420e0: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x2420e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
label_2420e4:
    // 0x2420e4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2420e8:
    // 0x2420e8: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x2420e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
label_2420ec:
    // 0x2420ec: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2420ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2420f0:
    // 0x2420f0: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x2420f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_2420f4:
    // 0x2420f4: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2420f8:
    // 0x2420f8: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x2420f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
label_2420fc:
    // 0x2420fc: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_242100:
    // 0x242100: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x242100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
label_242104:
    // 0x242104: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_242108:
    // 0x242108: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x242108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_24210c:
    // 0x24210c: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_242110:
    // 0x242110: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x242110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_242114:
    // 0x242114: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x242114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_242118:
    // 0x242118: 0xac660034  sw          $a2, 0x34($v1)
    ctx->pc = 0x242118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 6));
label_24211c:
    // 0x24211c: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x24211cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_242120:
    // 0x242120: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x242120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
label_242124:
    // 0x242124: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x242124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_242128:
    // 0x242128: 0xac66003c  sw          $a2, 0x3C($v1)
    ctx->pc = 0x242128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
label_24212c:
    // 0x24212c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x24212cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_242130:
    // 0x242130: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x242130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
label_242134:
    // 0x242134: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x242134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_242138:
    // 0x242138: 0xac660044  sw          $a2, 0x44($v1)
    ctx->pc = 0x242138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 6));
label_24213c:
    // 0x24213c: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x24213cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_242140:
    // 0x242140: 0xac660048  sw          $a2, 0x48($v1)
    ctx->pc = 0x242140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
label_242144:
    // 0x242144: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_242148:
    // 0x242148: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x242148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
label_24214c:
    // 0x24214c: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x24214cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_242150:
    // 0x242150: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x242150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
label_242154:
    // 0x242154: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x242154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_242158:
    // 0x242158: 0xac660054  sw          $a2, 0x54($v1)
    ctx->pc = 0x242158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 6));
label_24215c:
    // 0x24215c: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x24215cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_242160:
    // 0x242160: 0xac660058  sw          $a2, 0x58($v1)
    ctx->pc = 0x242160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 6));
label_242164:
    // 0x242164: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_242168:
    // 0x242168: 0xac66005c  sw          $a2, 0x5C($v1)
    ctx->pc = 0x242168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 6));
label_24216c:
    // 0x24216c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x24216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_242170:
    // 0x242170: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
label_242174:
    if (ctx->pc == 0x242174u) {
        ctx->pc = 0x242174u;
            // 0x242174: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x242178u;
        goto label_242178;
    }
    ctx->pc = 0x242170u;
    {
        const bool branch_taken_0x242170 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x242174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242170u;
            // 0x242174: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242170) {
            ctx->pc = 0x2420A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2420a4;
        }
    }
    ctx->pc = 0x242178u;
label_242178:
    // 0x242178: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24217c:
    // 0x24217c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_242180:
    // 0x242180: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x242180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_242184:
    // 0x242184: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_242188:
    // 0x242188: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x242188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_24218c:
    // 0x24218c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x24218cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_242190:
    // 0x242190: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x242190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_242194:
    // 0x242194: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_242198:
    // 0x242198: 0x16420080  bne         $s2, $v0, . + 4 + (0x80 << 2)
label_24219c:
    if (ctx->pc == 0x24219Cu) {
        ctx->pc = 0x24219Cu;
            // 0x24219c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x2421A0u;
        goto label_2421a0;
    }
    ctx->pc = 0x242198u;
    {
        const bool branch_taken_0x242198 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242198u;
            // 0x24219c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242198) {
            ctx->pc = 0x24239Cu;
            goto label_24239c;
        }
    }
    ctx->pc = 0x2421A0u;
label_2421a0:
    // 0x2421a0: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2421a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_2421a4:
    // 0x2421a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2421a8:
    if (ctx->pc == 0x2421A8u) {
        ctx->pc = 0x2421A8u;
            // 0x2421a8: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2421ACu;
        goto label_2421ac;
    }
    ctx->pc = 0x2421A4u;
    {
        const bool branch_taken_0x2421a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2421a4) {
            ctx->pc = 0x2421A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2421A4u;
            // 0x2421a8: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2421C0u;
            goto label_2421c0;
        }
    }
    ctx->pc = 0x2421ACu;
label_2421ac:
    // 0x2421ac: 0x266500e0  addiu       $a1, $s3, 0xE0
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_2421b0:
    // 0x2421b0: 0xc0898f8  jal         func_2263E0
label_2421b4:
    if (ctx->pc == 0x2421B4u) {
        ctx->pc = 0x2421B4u;
            // 0x2421b4: 0x26660120  addiu       $a2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x2421B8u;
        goto label_2421b8;
    }
    ctx->pc = 0x2421B0u;
    SET_GPR_U32(ctx, 31, 0x2421B8u);
    ctx->pc = 0x2421B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2421B0u;
            // 0x2421b4: 0x26660120  addiu       $a2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2263E0u;
    if (runtime->hasFunction(0x2263E0u)) {
        auto targetFn = runtime->lookupFunction(0x2263E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421B8u; }
        if (ctx->pc != 0x2421B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002263E0_0x2263e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421B8u; }
        if (ctx->pc != 0x2421B8u) { return; }
    }
    ctx->pc = 0x2421B8u;
label_2421b8:
    // 0x2421b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2421b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2421bc:
    // 0x2421bc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2421bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421c0:
    // 0x2421c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2421c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2421c4:
    // 0x2421c4: 0x0  nop
    ctx->pc = 0x2421c4u;
    // NOP
label_2421c8:
    // 0x2421c8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2421c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2421cc:
    // 0x2421cc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2421ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421d0:
    // 0x2421d0: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2421d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2421d4:
    // 0x2421d4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2421d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421d8:
    // 0x2421d8: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2421d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2421dc:
    // 0x2421dc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x2421dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421e0:
    // 0x2421e0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2421e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2421e4:
    // 0x2421e4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2421e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421e8:
    // 0x2421e8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2421e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2421ec:
    // 0x2421ec: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2421ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421f0:
    // 0x2421f0: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2421f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2421f4:
    // 0x2421f4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2421f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421f8:
    // 0x2421f8: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2421f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2421fc:
    // 0x2421fc: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2421fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242200:
    // 0x242200: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x242200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_242204:
    // 0x242204: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x242204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242208:
    // 0x242208: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x242208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_24220c:
    // 0x24220c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x24220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242210:
    // 0x242210: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x242210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_242214:
    // 0x242214: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x242214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242218:
    // 0x242218: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x242218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_24221c:
    // 0x24221c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x24221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242220:
    // 0x242220: 0xe481003c  swc1        $f1, 0x3C($a0)
    ctx->pc = 0x242220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_242224:
    // 0x242224: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x242224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242228:
    // 0x242228: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x242228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_24222c:
    // 0x24222c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x24222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242230:
    // 0x242230: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x242230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_242234:
    // 0x242234: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x242234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242238:
    // 0x242238: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x242238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_24223c:
    // 0x24223c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x24223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242240:
    // 0x242240: 0xe481004c  swc1        $f1, 0x4C($a0)
    ctx->pc = 0x242240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_242244:
    // 0x242244: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x242244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242248:
    // 0x242248: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x242248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_24224c:
    // 0x24224c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x24224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242250:
    // 0x242250: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x242250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_242254:
    // 0x242254: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x242254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242258:
    // 0x242258: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x242258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_24225c:
    // 0x24225c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x24225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242260:
    // 0x242260: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x242260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_242264:
    // 0x242264: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x242264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242268:
    // 0x242268: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x242268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_24226c:
    // 0x24226c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x24226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242270:
    // 0x242270: 0xe4810064  swc1        $f1, 0x64($a0)
    ctx->pc = 0x242270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_242274:
    // 0x242274: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x242274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242278:
    // 0x242278: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x242278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_24227c:
    // 0x24227c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x24227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242280:
    // 0x242280: 0xe481006c  swc1        $f1, 0x6C($a0)
    ctx->pc = 0x242280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_242284:
    // 0x242284: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x242284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242288:
    // 0x242288: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x242288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_24228c:
    // 0x24228c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x24228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242290:
    // 0x242290: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x242290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_242294:
    // 0x242294: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x242294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242298:
    // 0x242298: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x242298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_24229c:
    // 0x24229c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422a0:
    // 0x2422a0: 0xe481007c  swc1        $f1, 0x7C($a0)
    ctx->pc = 0x2422a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_2422a4:
    // 0x2422a4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2422a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422a8:
    // 0x2422a8: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x2422a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_2422ac:
    // 0x2422ac: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2422acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422b0:
    // 0x2422b0: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x2422b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_2422b4:
    // 0x2422b4: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2422b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422b8:
    // 0x2422b8: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x2422b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_2422bc:
    // 0x2422bc: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x2422bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422c0:
    // 0x2422c0: 0xe481008c  swc1        $f1, 0x8C($a0)
    ctx->pc = 0x2422c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_2422c4:
    // 0x2422c4: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2422c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422c8:
    // 0x2422c8: 0xe4810090  swc1        $f1, 0x90($a0)
    ctx->pc = 0x2422c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
label_2422cc:
    // 0x2422cc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2422ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422d0:
    // 0x2422d0: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x2422d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
label_2422d4:
    // 0x2422d4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2422d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422d8:
    // 0x2422d8: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x2422d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_2422dc:
    // 0x2422dc: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x2422dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422e0:
    // 0x2422e0: 0xe481009c  swc1        $f1, 0x9C($a0)
    ctx->pc = 0x2422e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
label_2422e4:
    // 0x2422e4: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2422e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422e8:
    // 0x2422e8: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x2422e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_2422ec:
    // 0x2422ec: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2422ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422f0:
    // 0x2422f0: 0xe48100a4  swc1        $f1, 0xA4($a0)
    ctx->pc = 0x2422f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_2422f4:
    // 0x2422f4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2422f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422f8:
    // 0x2422f8: 0xe48100a8  swc1        $f1, 0xA8($a0)
    ctx->pc = 0x2422f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_2422fc:
    // 0x2422fc: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2422fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242300:
    // 0x242300: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x242300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_242304:
    // 0x242304: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x242304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242308:
    // 0x242308: 0xe48100b0  swc1        $f1, 0xB0($a0)
    ctx->pc = 0x242308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
label_24230c:
    // 0x24230c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x24230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242310:
    // 0x242310: 0xe48100b4  swc1        $f1, 0xB4($a0)
    ctx->pc = 0x242310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_242314:
    // 0x242314: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x242314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242318:
    // 0x242318: 0xe48100b8  swc1        $f1, 0xB8($a0)
    ctx->pc = 0x242318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
label_24231c:
    // 0x24231c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x24231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242320:
    // 0x242320: 0xe48100bc  swc1        $f1, 0xBC($a0)
    ctx->pc = 0x242320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_242324:
    // 0x242324: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x242324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242328:
    // 0x242328: 0xe48100c0  swc1        $f1, 0xC0($a0)
    ctx->pc = 0x242328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
label_24232c:
    // 0x24232c: 0x97a20134  lhu         $v0, 0x134($sp)
    ctx->pc = 0x24232cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 308)));
label_242330:
    // 0x242330: 0xa48200c4  sh          $v0, 0xC4($a0)
    ctx->pc = 0x242330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 2));
label_242334:
    // 0x242334: 0x97a20136  lhu         $v0, 0x136($sp)
    ctx->pc = 0x242334u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 310)));
label_242338:
    // 0x242338: 0xa48200c6  sh          $v0, 0xC6($a0)
    ctx->pc = 0x242338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 2));
label_24233c:
    // 0x24233c: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x24233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242340:
    // 0x242340: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x242340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242344:
    // 0x242344: 0xe48200c8  swc1        $f2, 0xC8($a0)
    ctx->pc = 0x242344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
label_242348:
    // 0x242348: 0xe48100cc  swc1        $f1, 0xCC($a0)
    ctx->pc = 0x242348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
label_24234c:
    // 0x24234c: 0x93a20079  lbu         $v0, 0x79($sp)
    ctx->pc = 0x24234cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 121)));
label_242350:
    // 0x242350: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x242350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
label_242354:
    // 0x242354: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x242354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242358:
    // 0x242358: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x242358u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24235c:
    // 0x24235c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_242360:
    if (ctx->pc == 0x242360u) {
        ctx->pc = 0x242360u;
            // 0x242360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242364u;
        goto label_242364;
    }
    ctx->pc = 0x24235Cu;
    {
        const bool branch_taken_0x24235c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x242360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24235Cu;
            // 0x242360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24235c) {
            ctx->pc = 0x2423D0u;
            goto label_2423d0;
        }
    }
    ctx->pc = 0x242364u;
label_242364:
    // 0x242364: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_242368:
    if (ctx->pc == 0x242368u) {
        ctx->pc = 0x242368u;
            // 0x242368: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x24236Cu;
        goto label_24236c;
    }
    ctx->pc = 0x242364u;
    {
        const bool branch_taken_0x242364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x242364) {
            ctx->pc = 0x242368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242364u;
            // 0x242368: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242378u;
            goto label_242378;
        }
    }
    ctx->pc = 0x24236Cu;
label_24236c:
    // 0x24236c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x24236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_242370:
    // 0x242370: 0x10000006  b           . + 4 + (0x6 << 2)
label_242374:
    if (ctx->pc == 0x242374u) {
        ctx->pc = 0x242374u;
            // 0x242374: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x242378u;
        goto label_242378;
    }
    ctx->pc = 0x242370u;
    {
        const bool branch_taken_0x242370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242370u;
            // 0x242374: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242370) {
            ctx->pc = 0x24238Cu;
            goto label_24238c;
        }
    }
    ctx->pc = 0x242378u;
label_242378:
    // 0x242378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24237c:
    // 0x24237c: 0x0  nop
    ctx->pc = 0x24237cu;
    // NOP
label_242380:
    // 0x242380: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x242380u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_242384:
    // 0x242384: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x242384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242388:
    // 0x242388: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x242388u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24238c:
    // 0x24238c: 0xc0a4170  jal         func_2905C0
label_242390:
    if (ctx->pc == 0x242390u) {
        ctx->pc = 0x242390u;
            // 0x242390: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x242394u;
        goto label_242394;
    }
    ctx->pc = 0x24238Cu;
    SET_GPR_U32(ctx, 31, 0x242394u);
    ctx->pc = 0x242390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24238Cu;
            // 0x242390: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905C0u;
    if (runtime->hasFunction(0x2905C0u)) {
        auto targetFn = runtime->lookupFunction(0x2905C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242394u; }
        if (ctx->pc != 0x242394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002905C0_0x2905c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242394u; }
        if (ctx->pc != 0x242394u) { return; }
    }
    ctx->pc = 0x242394u;
label_242394:
    // 0x242394: 0x1000000f  b           . + 4 + (0xF << 2)
label_242398:
    if (ctx->pc == 0x242398u) {
        ctx->pc = 0x242398u;
            // 0x242398: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->pc = 0x24239Cu;
        goto label_24239c;
    }
    ctx->pc = 0x242394u;
    {
        const bool branch_taken_0x242394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242394u;
            // 0x242398: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242394) {
            ctx->pc = 0x2423D4u;
            goto label_2423d4;
        }
    }
    ctx->pc = 0x24239Cu;
label_24239c:
    // 0x24239c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_2423a0:
    // 0x2423a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2423a4:
    if (ctx->pc == 0x2423A4u) {
        ctx->pc = 0x2423A4u;
            // 0x2423a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2423A8u;
        goto label_2423a8;
    }
    ctx->pc = 0x2423A0u;
    {
        const bool branch_taken_0x2423a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423a0) {
            ctx->pc = 0x2423A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2423A0u;
            // 0x2423a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2423BCu;
            goto label_2423bc;
        }
    }
    ctx->pc = 0x2423A8u;
label_2423a8:
    // 0x2423a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2423a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2423ac:
    // 0x2423ac: 0x266500e0  addiu       $a1, $s3, 0xE0
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_2423b0:
    // 0x2423b0: 0xc089994  jal         func_226650
label_2423b4:
    if (ctx->pc == 0x2423B4u) {
        ctx->pc = 0x2423B4u;
            // 0x2423b4: 0x26660120  addiu       $a2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x2423B8u;
        goto label_2423b8;
    }
    ctx->pc = 0x2423B0u;
    SET_GPR_U32(ctx, 31, 0x2423B8u);
    ctx->pc = 0x2423B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2423B0u;
            // 0x2423b4: 0x26660120  addiu       $a2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226650u;
    if (runtime->hasFunction(0x226650u)) {
        auto targetFn = runtime->lookupFunction(0x226650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423B8u; }
        if (ctx->pc != 0x2423B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226650_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423B8u; }
        if (ctx->pc != 0x2423B8u) { return; }
    }
    ctx->pc = 0x2423B8u;
label_2423b8:
    // 0x2423b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2423bc:
    // 0x2423bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2423bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2423c0:
    // 0x2423c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2423c4:
    // 0x2423c4: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_2423c8:
    // 0x2423c8: 0x320f809  jalr        $t9
label_2423cc:
    if (ctx->pc == 0x2423CCu) {
        ctx->pc = 0x2423CCu;
            // 0x2423cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2423D0u;
        goto label_2423d0;
    }
    ctx->pc = 0x2423C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2423D0u);
        ctx->pc = 0x2423CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423C8u;
            // 0x2423cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2423D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2423D0u; }
            if (ctx->pc != 0x2423D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2423D0u;
label_2423d0:
    // 0x2423d0: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x2423d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_2423d4:
    // 0x2423d4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2423d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2423d8:
    // 0x2423d8: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
label_2423dc:
    if (ctx->pc == 0x2423DCu) {
        ctx->pc = 0x2423DCu;
            // 0x2423dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2423E0u;
        goto label_2423e0;
    }
    ctx->pc = 0x2423D8u;
    {
        const bool branch_taken_0x2423d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423d8) {
            ctx->pc = 0x2423DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2423D8u;
            // 0x2423dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242568u;
            goto label_242568;
        }
    }
    ctx->pc = 0x2423E0u;
label_2423e0:
    // 0x2423e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2423e4:
    // 0x2423e4: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2423e8:
    // 0x2423e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2423e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2423ec:
    // 0x2423ec: 0xc0a7a88  jal         func_29EA20
label_2423f0:
    if (ctx->pc == 0x2423F0u) {
        ctx->pc = 0x2423F0u;
            // 0x2423f0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x2423F4u;
        goto label_2423f4;
    }
    ctx->pc = 0x2423ECu;
    SET_GPR_U32(ctx, 31, 0x2423F4u);
    ctx->pc = 0x2423F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2423ECu;
            // 0x2423f0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423F4u; }
        if (ctx->pc != 0x2423F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423F4u; }
        if (ctx->pc != 0x2423F4u) { return; }
    }
    ctx->pc = 0x2423F4u;
label_2423f4:
    // 0x2423f4: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2423f8:
    // 0x2423f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2423fc:
    if (ctx->pc == 0x2423FCu) {
        ctx->pc = 0x2423FCu;
            // 0x2423fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x242400u;
        goto label_242400;
    }
    ctx->pc = 0x2423F8u;
    {
        const bool branch_taken_0x2423f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423F8u;
            // 0x2423fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423f8) {
            ctx->pc = 0x242448u;
            goto label_242448;
        }
    }
    ctx->pc = 0x242400u;
label_242400:
    // 0x242400: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_242404:
    // 0x242404: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_242408:
    // 0x242408: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_24240c:
    // 0x24240c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x24240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_242410:
    // 0x242410: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x242410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_242414:
    // 0x242414: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x242414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_242418:
    // 0x242418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24241c:
    // 0x24241c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_242420:
    // 0x242420: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x242420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_242424:
    // 0x242424: 0x2463ec30  addiu       $v1, $v1, -0x13D0
    ctx->pc = 0x242424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962224));
label_242428:
    // 0x242428: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x242428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_24242c:
    // 0x24242c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24242cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_242430:
    // 0x242430: 0x2484ed90  addiu       $a0, $a0, -0x1270
    ctx->pc = 0x242430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962576));
label_242434:
    // 0x242434: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x242434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_242438:
    // 0x242438: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x242438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_24243c:
    // 0x24243c: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x24243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_242440:
    // 0x242440: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x242440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
label_242444:
    // 0x242444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x242444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_242448:
    // 0x242448: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x242448u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_24244c:
    // 0x24244c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x24244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242450:
    // 0x242450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242454:
    // 0x242454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242458:
    // 0x242458: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24245c:
    // 0x24245c: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x24245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_242460:
    // 0x242460: 0x2887000d  slti        $a3, $a0, 0xD
    ctx->pc = 0x242460u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
label_242464:
    // 0x242464: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x242464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_242468:
    // 0x242468: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x242468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24246c:
    // 0x24246c: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x24246cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
label_242470:
    // 0x242470: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_242474:
    // 0x242474: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x242474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_242478:
    // 0x242478: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x242478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_24247c:
    // 0x24247c: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x24247cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
label_242480:
    // 0x242480: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_242484:
    // 0x242484: 0xaca80010  sw          $t0, 0x10($a1)
    ctx->pc = 0x242484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 8));
label_242488:
    // 0x242488: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x242488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_24248c:
    // 0x24248c: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x24248cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
label_242490:
    // 0x242490: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_242494:
    // 0x242494: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x242494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
label_242498:
    // 0x242498: 0x8cc8001c  lw          $t0, 0x1C($a2)
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_24249c:
    // 0x24249c: 0xaca8001c  sw          $t0, 0x1C($a1)
    ctx->pc = 0x24249cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 8));
label_2424a0:
    // 0x2424a0: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2424a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2424a4:
    // 0x2424a4: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x2424a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
label_2424a8:
    // 0x2424a8: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_2424ac:
    // 0x2424ac: 0xaca80024  sw          $t0, 0x24($a1)
    ctx->pc = 0x2424acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
label_2424b0:
    // 0x2424b0: 0x8cc80028  lw          $t0, 0x28($a2)
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_2424b4:
    // 0x2424b4: 0xaca80028  sw          $t0, 0x28($a1)
    ctx->pc = 0x2424b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 8));
label_2424b8:
    // 0x2424b8: 0x8cc8002c  lw          $t0, 0x2C($a2)
    ctx->pc = 0x2424b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_2424bc:
    // 0x2424bc: 0xaca8002c  sw          $t0, 0x2C($a1)
    ctx->pc = 0x2424bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 8));
label_2424c0:
    // 0x2424c0: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x2424c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2424c4:
    // 0x2424c4: 0xaca80030  sw          $t0, 0x30($a1)
    ctx->pc = 0x2424c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 8));
label_2424c8:
    // 0x2424c8: 0x8cc80034  lw          $t0, 0x34($a2)
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2424cc:
    // 0x2424cc: 0xaca80034  sw          $t0, 0x34($a1)
    ctx->pc = 0x2424ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 8));
label_2424d0:
    // 0x2424d0: 0x8cc80038  lw          $t0, 0x38($a2)
    ctx->pc = 0x2424d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_2424d4:
    // 0x2424d4: 0xaca80038  sw          $t0, 0x38($a1)
    ctx->pc = 0x2424d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 8));
label_2424d8:
    // 0x2424d8: 0x8cc8003c  lw          $t0, 0x3C($a2)
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_2424dc:
    // 0x2424dc: 0xaca8003c  sw          $t0, 0x3C($a1)
    ctx->pc = 0x2424dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 8));
label_2424e0:
    // 0x2424e0: 0x8cc80040  lw          $t0, 0x40($a2)
    ctx->pc = 0x2424e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_2424e4:
    // 0x2424e4: 0xaca80040  sw          $t0, 0x40($a1)
    ctx->pc = 0x2424e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 8));
label_2424e8:
    // 0x2424e8: 0x8cc80044  lw          $t0, 0x44($a2)
    ctx->pc = 0x2424e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_2424ec:
    // 0x2424ec: 0xaca80044  sw          $t0, 0x44($a1)
    ctx->pc = 0x2424ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 8));
label_2424f0:
    // 0x2424f0: 0x8cc80048  lw          $t0, 0x48($a2)
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_2424f4:
    // 0x2424f4: 0xaca80048  sw          $t0, 0x48($a1)
    ctx->pc = 0x2424f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 8));
label_2424f8:
    // 0x2424f8: 0x8cc8004c  lw          $t0, 0x4C($a2)
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_2424fc:
    // 0x2424fc: 0xaca8004c  sw          $t0, 0x4C($a1)
    ctx->pc = 0x2424fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 8));
label_242500:
    // 0x242500: 0x8cc80050  lw          $t0, 0x50($a2)
    ctx->pc = 0x242500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_242504:
    // 0x242504: 0xaca80050  sw          $t0, 0x50($a1)
    ctx->pc = 0x242504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 8));
label_242508:
    // 0x242508: 0x8cc80054  lw          $t0, 0x54($a2)
    ctx->pc = 0x242508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_24250c:
    // 0x24250c: 0xaca80054  sw          $t0, 0x54($a1)
    ctx->pc = 0x24250cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 8));
label_242510:
    // 0x242510: 0x8cc80058  lw          $t0, 0x58($a2)
    ctx->pc = 0x242510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_242514:
    // 0x242514: 0xaca80058  sw          $t0, 0x58($a1)
    ctx->pc = 0x242514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 8));
label_242518:
    // 0x242518: 0x8cc8005c  lw          $t0, 0x5C($a2)
    ctx->pc = 0x242518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_24251c:
    // 0x24251c: 0xaca8005c  sw          $t0, 0x5C($a1)
    ctx->pc = 0x24251cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 8));
label_242520:
    // 0x242520: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x242520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_242524:
    // 0x242524: 0x14e0ffcc  bnez        $a3, . + 4 + (-0x34 << 2)
label_242528:
    if (ctx->pc == 0x242528u) {
        ctx->pc = 0x242528u;
            // 0x242528: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->pc = 0x24252Cu;
        goto label_24252c;
    }
    ctx->pc = 0x242524u;
    {
        const bool branch_taken_0x242524 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x242528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242524u;
            // 0x242528: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242524) {
            ctx->pc = 0x242458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242458;
        }
    }
    ctx->pc = 0x24252Cu;
label_24252c:
    // 0x24252c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x24252cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_242530:
    // 0x242530: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242534:
    // 0x242534: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x242534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_242538:
    // 0x242538: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x242538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24253c:
    // 0x24253c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x24253cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_242540:
    // 0x242540: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_242544:
    // 0x242544: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x242544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_242548:
    // 0x242548: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_24254c:
    // 0x24254c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x24254cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_242550:
    // 0x242550: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x242550u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_242554:
    // 0x242554: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x242554u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_242558:
    // 0x242558: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x242558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_24255c:
    // 0x24255c: 0x9662002a  lhu         $v0, 0x2A($s3)
    ctx->pc = 0x24255cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_242560:
    // 0x242560: 0x10000007  b           . + 4 + (0x7 << 2)
label_242564:
    if (ctx->pc == 0x242564u) {
        ctx->pc = 0x242564u;
            // 0x242564: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x242568u;
        goto label_242568;
    }
    ctx->pc = 0x242560u;
    {
        const bool branch_taken_0x242560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242560u;
            // 0x242564: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242560) {
            ctx->pc = 0x242580u;
            goto label_242580;
        }
    }
    ctx->pc = 0x242568u;
label_242568:
    // 0x242568: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_24256c:
    // 0x24256c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x24256cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_242570:
    // 0x242570: 0x320f809  jalr        $t9
label_242574:
    if (ctx->pc == 0x242574u) {
        ctx->pc = 0x242574u;
            // 0x242574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242578u;
        goto label_242578;
    }
    ctx->pc = 0x242570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242578u);
        ctx->pc = 0x242574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242570u;
            // 0x242574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242578u; }
            if (ctx->pc != 0x242578u) { return; }
        }
        }
    }
    ctx->pc = 0x242578u;
label_242578:
    // 0x242578: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x242578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_24257c:
    // 0x24257c: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x24257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_242580:
    // 0x242580: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_242584:
    // 0x242584: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_242588:
    if (ctx->pc == 0x242588u) {
        ctx->pc = 0x242588u;
            // 0x242588: 0xae600068  sw          $zero, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x24258Cu;
        goto label_24258c;
    }
    ctx->pc = 0x242584u;
    {
        const bool branch_taken_0x242584 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x242588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242584u;
            // 0x242588: 0xae600068  sw          $zero, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242584) {
            ctx->pc = 0x242594u;
            goto label_242594;
        }
    }
    ctx->pc = 0x24258Cu;
label_24258c:
    // 0x24258c: 0x10000002  b           . + 4 + (0x2 << 2)
label_242590:
    if (ctx->pc == 0x242590u) {
        ctx->pc = 0x242590u;
            // 0x242590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242594u;
        goto label_242594;
    }
    ctx->pc = 0x24258Cu;
    {
        const bool branch_taken_0x24258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24258Cu;
            // 0x242590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24258c) {
            ctx->pc = 0x242598u;
            goto label_242598;
        }
    }
    ctx->pc = 0x242594u;
label_242594:
    // 0x242594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_242598:
    // 0x242598: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x242598u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
label_24259c:
    // 0x24259c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2425a0:
    // 0x2425a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2425a4:
    // 0x2425a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2425a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2425a8:
    // 0x2425a8: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x2425a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_2425ac:
    // 0x2425ac: 0xc0899ac  jal         func_2266B0
label_2425b0:
    if (ctx->pc == 0x2425B0u) {
        ctx->pc = 0x2425B0u;
            // 0x2425b0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x2425B4u;
        goto label_2425b4;
    }
    ctx->pc = 0x2425ACu;
    SET_GPR_U32(ctx, 31, 0x2425B4u);
    ctx->pc = 0x2425B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2425ACu;
            // 0x2425b0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2266B0u;
    if (runtime->hasFunction(0x2266B0u)) {
        auto targetFn = runtime->lookupFunction(0x2266B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425B4u; }
        if (ctx->pc != 0x2425B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266B0_0x2266b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425B4u; }
        if (ctx->pc != 0x2425B4u) { return; }
    }
    ctx->pc = 0x2425B4u;
label_2425b4:
    // 0x2425b4: 0x266300b0  addiu       $v1, $s3, 0xB0
    ctx->pc = 0x2425b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_2425b8:
    // 0x2425b8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_2425bc:
    if (ctx->pc == 0x2425BCu) {
        ctx->pc = 0x2425BCu;
            // 0x2425bc: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2425C0u;
        goto label_2425c0;
    }
    ctx->pc = 0x2425B8u;
    {
        const bool branch_taken_0x2425b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425B8u;
            // 0x2425bc: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425b8) {
            ctx->pc = 0x24262Cu;
            goto label_24262c;
        }
    }
    ctx->pc = 0x2425C0u;
label_2425c0:
    // 0x2425c0: 0x922902ef  lbu         $t1, 0x2EF($s1)
    ctx->pc = 0x2425c0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 751)));
label_2425c4:
    // 0x2425c4: 0x926500a9  lbu         $a1, 0xA9($s3)
    ctx->pc = 0x2425c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 169)));
label_2425c8:
    // 0x2425c8: 0x922802ee  lbu         $t0, 0x2EE($s1)
    ctx->pc = 0x2425c8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 750)));
label_2425cc:
    // 0x2425cc: 0x922702ed  lbu         $a3, 0x2ED($s1)
    ctx->pc = 0x2425ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 749)));
label_2425d0:
    // 0x2425d0: 0x31240003  andi        $a0, $t1, 0x3
    ctx->pc = 0x2425d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_2425d4:
    // 0x2425d4: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x2425d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_2425d8:
    // 0x2425d8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2425d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2425dc:
    // 0x2425dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2425e0:
    if (ctx->pc == 0x2425E0u) {
        ctx->pc = 0x2425E0u;
            // 0x2425e0: 0x266600a0  addiu       $a2, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2425E4u;
        goto label_2425e4;
    }
    ctx->pc = 0x2425DCu;
    {
        const bool branch_taken_0x2425dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425DCu;
            // 0x2425e0: 0x266600a0  addiu       $a2, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425dc) {
            ctx->pc = 0x2425F0u;
            goto label_2425f0;
        }
    }
    ctx->pc = 0x2425E4u;
label_2425e4:
    // 0x2425e4: 0xe01827  not         $v1, $a3
    ctx->pc = 0x2425e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
label_2425e8:
    // 0x2425e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2425ec:
    if (ctx->pc == 0x2425ECu) {
        ctx->pc = 0x2425ECu;
            // 0x2425ec: 0x33b80  sll         $a3, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
        ctx->pc = 0x2425F0u;
        goto label_2425f0;
    }
    ctx->pc = 0x2425E8u;
    {
        const bool branch_taken_0x2425e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425E8u;
            // 0x2425ec: 0x33b80  sll         $a3, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425e8) {
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x2425F0u;
label_2425f0:
    // 0x2425f0: 0x73b80  sll         $a3, $a3, 14
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_2425f4:
    // 0x2425f4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2425f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2425f8:
    // 0x2425f8: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x2425f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2425fc:
    // 0x2425fc: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_242600:
    if (ctx->pc == 0x242600u) {
        ctx->pc = 0x242600u;
            // 0x242600: 0x82380  sll         $a0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 14));
        ctx->pc = 0x242604u;
        goto label_242604;
    }
    ctx->pc = 0x2425FCu;
    {
        const bool branch_taken_0x2425fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2425fc) {
            ctx->pc = 0x242600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2425FCu;
            // 0x242600: 0x82380  sll         $a0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24260Cu;
            goto label_24260c;
        }
    }
    ctx->pc = 0x242604u;
label_242604:
    // 0x242604: 0x1001827  not         $v1, $t0
    ctx->pc = 0x242604u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
label_242608:
    // 0x242608: 0x32380  sll         $a0, $v1, 14
    ctx->pc = 0x242608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_24260c:
    // 0x24260c: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x24260cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_242610:
    // 0x242610: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x242610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_242614:
    // 0x242614: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x242614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_242618:
    // 0x242618: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x242618u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_24261c:
    // 0x24261c: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x24261cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_242620:
    // 0x242620: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x242620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_242624:
    // 0x242624: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x242624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_242628:
    // 0x242628: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x242628u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_24262c:
    // 0x24262c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_242630:
    // 0x242630: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x242630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242634:
    // 0x242634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242638:
    // 0x242638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24263c:
    // 0x24263c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24263cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242640:
    // 0x242640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242644:
    // 0x242644: 0x3e00008  jr          $ra
label_242648:
    if (ctx->pc == 0x242648u) {
        ctx->pc = 0x242648u;
            // 0x242648: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x24264Cu;
        goto label_24264c;
    }
    ctx->pc = 0x242644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242644u;
            // 0x242648: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24264Cu;
label_24264c:
    // 0x24264c: 0x0  nop
    ctx->pc = 0x24264cu;
    // NOP
}
