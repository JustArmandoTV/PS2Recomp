#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00415C00
// Address: 0x415c00 - 0x416a80
void sub_00415C00_0x415c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415C00_0x415c00");
#endif

    switch (ctx->pc) {
        case 0x415c00u: goto label_415c00;
        case 0x415c04u: goto label_415c04;
        case 0x415c08u: goto label_415c08;
        case 0x415c0cu: goto label_415c0c;
        case 0x415c10u: goto label_415c10;
        case 0x415c14u: goto label_415c14;
        case 0x415c18u: goto label_415c18;
        case 0x415c1cu: goto label_415c1c;
        case 0x415c20u: goto label_415c20;
        case 0x415c24u: goto label_415c24;
        case 0x415c28u: goto label_415c28;
        case 0x415c2cu: goto label_415c2c;
        case 0x415c30u: goto label_415c30;
        case 0x415c34u: goto label_415c34;
        case 0x415c38u: goto label_415c38;
        case 0x415c3cu: goto label_415c3c;
        case 0x415c40u: goto label_415c40;
        case 0x415c44u: goto label_415c44;
        case 0x415c48u: goto label_415c48;
        case 0x415c4cu: goto label_415c4c;
        case 0x415c50u: goto label_415c50;
        case 0x415c54u: goto label_415c54;
        case 0x415c58u: goto label_415c58;
        case 0x415c5cu: goto label_415c5c;
        case 0x415c60u: goto label_415c60;
        case 0x415c64u: goto label_415c64;
        case 0x415c68u: goto label_415c68;
        case 0x415c6cu: goto label_415c6c;
        case 0x415c70u: goto label_415c70;
        case 0x415c74u: goto label_415c74;
        case 0x415c78u: goto label_415c78;
        case 0x415c7cu: goto label_415c7c;
        case 0x415c80u: goto label_415c80;
        case 0x415c84u: goto label_415c84;
        case 0x415c88u: goto label_415c88;
        case 0x415c8cu: goto label_415c8c;
        case 0x415c90u: goto label_415c90;
        case 0x415c94u: goto label_415c94;
        case 0x415c98u: goto label_415c98;
        case 0x415c9cu: goto label_415c9c;
        case 0x415ca0u: goto label_415ca0;
        case 0x415ca4u: goto label_415ca4;
        case 0x415ca8u: goto label_415ca8;
        case 0x415cacu: goto label_415cac;
        case 0x415cb0u: goto label_415cb0;
        case 0x415cb4u: goto label_415cb4;
        case 0x415cb8u: goto label_415cb8;
        case 0x415cbcu: goto label_415cbc;
        case 0x415cc0u: goto label_415cc0;
        case 0x415cc4u: goto label_415cc4;
        case 0x415cc8u: goto label_415cc8;
        case 0x415cccu: goto label_415ccc;
        case 0x415cd0u: goto label_415cd0;
        case 0x415cd4u: goto label_415cd4;
        case 0x415cd8u: goto label_415cd8;
        case 0x415cdcu: goto label_415cdc;
        case 0x415ce0u: goto label_415ce0;
        case 0x415ce4u: goto label_415ce4;
        case 0x415ce8u: goto label_415ce8;
        case 0x415cecu: goto label_415cec;
        case 0x415cf0u: goto label_415cf0;
        case 0x415cf4u: goto label_415cf4;
        case 0x415cf8u: goto label_415cf8;
        case 0x415cfcu: goto label_415cfc;
        case 0x415d00u: goto label_415d00;
        case 0x415d04u: goto label_415d04;
        case 0x415d08u: goto label_415d08;
        case 0x415d0cu: goto label_415d0c;
        case 0x415d10u: goto label_415d10;
        case 0x415d14u: goto label_415d14;
        case 0x415d18u: goto label_415d18;
        case 0x415d1cu: goto label_415d1c;
        case 0x415d20u: goto label_415d20;
        case 0x415d24u: goto label_415d24;
        case 0x415d28u: goto label_415d28;
        case 0x415d2cu: goto label_415d2c;
        case 0x415d30u: goto label_415d30;
        case 0x415d34u: goto label_415d34;
        case 0x415d38u: goto label_415d38;
        case 0x415d3cu: goto label_415d3c;
        case 0x415d40u: goto label_415d40;
        case 0x415d44u: goto label_415d44;
        case 0x415d48u: goto label_415d48;
        case 0x415d4cu: goto label_415d4c;
        case 0x415d50u: goto label_415d50;
        case 0x415d54u: goto label_415d54;
        case 0x415d58u: goto label_415d58;
        case 0x415d5cu: goto label_415d5c;
        case 0x415d60u: goto label_415d60;
        case 0x415d64u: goto label_415d64;
        case 0x415d68u: goto label_415d68;
        case 0x415d6cu: goto label_415d6c;
        case 0x415d70u: goto label_415d70;
        case 0x415d74u: goto label_415d74;
        case 0x415d78u: goto label_415d78;
        case 0x415d7cu: goto label_415d7c;
        case 0x415d80u: goto label_415d80;
        case 0x415d84u: goto label_415d84;
        case 0x415d88u: goto label_415d88;
        case 0x415d8cu: goto label_415d8c;
        case 0x415d90u: goto label_415d90;
        case 0x415d94u: goto label_415d94;
        case 0x415d98u: goto label_415d98;
        case 0x415d9cu: goto label_415d9c;
        case 0x415da0u: goto label_415da0;
        case 0x415da4u: goto label_415da4;
        case 0x415da8u: goto label_415da8;
        case 0x415dacu: goto label_415dac;
        case 0x415db0u: goto label_415db0;
        case 0x415db4u: goto label_415db4;
        case 0x415db8u: goto label_415db8;
        case 0x415dbcu: goto label_415dbc;
        case 0x415dc0u: goto label_415dc0;
        case 0x415dc4u: goto label_415dc4;
        case 0x415dc8u: goto label_415dc8;
        case 0x415dccu: goto label_415dcc;
        case 0x415dd0u: goto label_415dd0;
        case 0x415dd4u: goto label_415dd4;
        case 0x415dd8u: goto label_415dd8;
        case 0x415ddcu: goto label_415ddc;
        case 0x415de0u: goto label_415de0;
        case 0x415de4u: goto label_415de4;
        case 0x415de8u: goto label_415de8;
        case 0x415decu: goto label_415dec;
        case 0x415df0u: goto label_415df0;
        case 0x415df4u: goto label_415df4;
        case 0x415df8u: goto label_415df8;
        case 0x415dfcu: goto label_415dfc;
        case 0x415e00u: goto label_415e00;
        case 0x415e04u: goto label_415e04;
        case 0x415e08u: goto label_415e08;
        case 0x415e0cu: goto label_415e0c;
        case 0x415e10u: goto label_415e10;
        case 0x415e14u: goto label_415e14;
        case 0x415e18u: goto label_415e18;
        case 0x415e1cu: goto label_415e1c;
        case 0x415e20u: goto label_415e20;
        case 0x415e24u: goto label_415e24;
        case 0x415e28u: goto label_415e28;
        case 0x415e2cu: goto label_415e2c;
        case 0x415e30u: goto label_415e30;
        case 0x415e34u: goto label_415e34;
        case 0x415e38u: goto label_415e38;
        case 0x415e3cu: goto label_415e3c;
        case 0x415e40u: goto label_415e40;
        case 0x415e44u: goto label_415e44;
        case 0x415e48u: goto label_415e48;
        case 0x415e4cu: goto label_415e4c;
        case 0x415e50u: goto label_415e50;
        case 0x415e54u: goto label_415e54;
        case 0x415e58u: goto label_415e58;
        case 0x415e5cu: goto label_415e5c;
        case 0x415e60u: goto label_415e60;
        case 0x415e64u: goto label_415e64;
        case 0x415e68u: goto label_415e68;
        case 0x415e6cu: goto label_415e6c;
        case 0x415e70u: goto label_415e70;
        case 0x415e74u: goto label_415e74;
        case 0x415e78u: goto label_415e78;
        case 0x415e7cu: goto label_415e7c;
        case 0x415e80u: goto label_415e80;
        case 0x415e84u: goto label_415e84;
        case 0x415e88u: goto label_415e88;
        case 0x415e8cu: goto label_415e8c;
        case 0x415e90u: goto label_415e90;
        case 0x415e94u: goto label_415e94;
        case 0x415e98u: goto label_415e98;
        case 0x415e9cu: goto label_415e9c;
        case 0x415ea0u: goto label_415ea0;
        case 0x415ea4u: goto label_415ea4;
        case 0x415ea8u: goto label_415ea8;
        case 0x415eacu: goto label_415eac;
        case 0x415eb0u: goto label_415eb0;
        case 0x415eb4u: goto label_415eb4;
        case 0x415eb8u: goto label_415eb8;
        case 0x415ebcu: goto label_415ebc;
        case 0x415ec0u: goto label_415ec0;
        case 0x415ec4u: goto label_415ec4;
        case 0x415ec8u: goto label_415ec8;
        case 0x415eccu: goto label_415ecc;
        case 0x415ed0u: goto label_415ed0;
        case 0x415ed4u: goto label_415ed4;
        case 0x415ed8u: goto label_415ed8;
        case 0x415edcu: goto label_415edc;
        case 0x415ee0u: goto label_415ee0;
        case 0x415ee4u: goto label_415ee4;
        case 0x415ee8u: goto label_415ee8;
        case 0x415eecu: goto label_415eec;
        case 0x415ef0u: goto label_415ef0;
        case 0x415ef4u: goto label_415ef4;
        case 0x415ef8u: goto label_415ef8;
        case 0x415efcu: goto label_415efc;
        case 0x415f00u: goto label_415f00;
        case 0x415f04u: goto label_415f04;
        case 0x415f08u: goto label_415f08;
        case 0x415f0cu: goto label_415f0c;
        case 0x415f10u: goto label_415f10;
        case 0x415f14u: goto label_415f14;
        case 0x415f18u: goto label_415f18;
        case 0x415f1cu: goto label_415f1c;
        case 0x415f20u: goto label_415f20;
        case 0x415f24u: goto label_415f24;
        case 0x415f28u: goto label_415f28;
        case 0x415f2cu: goto label_415f2c;
        case 0x415f30u: goto label_415f30;
        case 0x415f34u: goto label_415f34;
        case 0x415f38u: goto label_415f38;
        case 0x415f3cu: goto label_415f3c;
        case 0x415f40u: goto label_415f40;
        case 0x415f44u: goto label_415f44;
        case 0x415f48u: goto label_415f48;
        case 0x415f4cu: goto label_415f4c;
        case 0x415f50u: goto label_415f50;
        case 0x415f54u: goto label_415f54;
        case 0x415f58u: goto label_415f58;
        case 0x415f5cu: goto label_415f5c;
        case 0x415f60u: goto label_415f60;
        case 0x415f64u: goto label_415f64;
        case 0x415f68u: goto label_415f68;
        case 0x415f6cu: goto label_415f6c;
        case 0x415f70u: goto label_415f70;
        case 0x415f74u: goto label_415f74;
        case 0x415f78u: goto label_415f78;
        case 0x415f7cu: goto label_415f7c;
        case 0x415f80u: goto label_415f80;
        case 0x415f84u: goto label_415f84;
        case 0x415f88u: goto label_415f88;
        case 0x415f8cu: goto label_415f8c;
        case 0x415f90u: goto label_415f90;
        case 0x415f94u: goto label_415f94;
        case 0x415f98u: goto label_415f98;
        case 0x415f9cu: goto label_415f9c;
        case 0x415fa0u: goto label_415fa0;
        case 0x415fa4u: goto label_415fa4;
        case 0x415fa8u: goto label_415fa8;
        case 0x415facu: goto label_415fac;
        case 0x415fb0u: goto label_415fb0;
        case 0x415fb4u: goto label_415fb4;
        case 0x415fb8u: goto label_415fb8;
        case 0x415fbcu: goto label_415fbc;
        case 0x415fc0u: goto label_415fc0;
        case 0x415fc4u: goto label_415fc4;
        case 0x415fc8u: goto label_415fc8;
        case 0x415fccu: goto label_415fcc;
        case 0x415fd0u: goto label_415fd0;
        case 0x415fd4u: goto label_415fd4;
        case 0x415fd8u: goto label_415fd8;
        case 0x415fdcu: goto label_415fdc;
        case 0x415fe0u: goto label_415fe0;
        case 0x415fe4u: goto label_415fe4;
        case 0x415fe8u: goto label_415fe8;
        case 0x415fecu: goto label_415fec;
        case 0x415ff0u: goto label_415ff0;
        case 0x415ff4u: goto label_415ff4;
        case 0x415ff8u: goto label_415ff8;
        case 0x415ffcu: goto label_415ffc;
        case 0x416000u: goto label_416000;
        case 0x416004u: goto label_416004;
        case 0x416008u: goto label_416008;
        case 0x41600cu: goto label_41600c;
        case 0x416010u: goto label_416010;
        case 0x416014u: goto label_416014;
        case 0x416018u: goto label_416018;
        case 0x41601cu: goto label_41601c;
        case 0x416020u: goto label_416020;
        case 0x416024u: goto label_416024;
        case 0x416028u: goto label_416028;
        case 0x41602cu: goto label_41602c;
        case 0x416030u: goto label_416030;
        case 0x416034u: goto label_416034;
        case 0x416038u: goto label_416038;
        case 0x41603cu: goto label_41603c;
        case 0x416040u: goto label_416040;
        case 0x416044u: goto label_416044;
        case 0x416048u: goto label_416048;
        case 0x41604cu: goto label_41604c;
        case 0x416050u: goto label_416050;
        case 0x416054u: goto label_416054;
        case 0x416058u: goto label_416058;
        case 0x41605cu: goto label_41605c;
        case 0x416060u: goto label_416060;
        case 0x416064u: goto label_416064;
        case 0x416068u: goto label_416068;
        case 0x41606cu: goto label_41606c;
        case 0x416070u: goto label_416070;
        case 0x416074u: goto label_416074;
        case 0x416078u: goto label_416078;
        case 0x41607cu: goto label_41607c;
        case 0x416080u: goto label_416080;
        case 0x416084u: goto label_416084;
        case 0x416088u: goto label_416088;
        case 0x41608cu: goto label_41608c;
        case 0x416090u: goto label_416090;
        case 0x416094u: goto label_416094;
        case 0x416098u: goto label_416098;
        case 0x41609cu: goto label_41609c;
        case 0x4160a0u: goto label_4160a0;
        case 0x4160a4u: goto label_4160a4;
        case 0x4160a8u: goto label_4160a8;
        case 0x4160acu: goto label_4160ac;
        case 0x4160b0u: goto label_4160b0;
        case 0x4160b4u: goto label_4160b4;
        case 0x4160b8u: goto label_4160b8;
        case 0x4160bcu: goto label_4160bc;
        case 0x4160c0u: goto label_4160c0;
        case 0x4160c4u: goto label_4160c4;
        case 0x4160c8u: goto label_4160c8;
        case 0x4160ccu: goto label_4160cc;
        case 0x4160d0u: goto label_4160d0;
        case 0x4160d4u: goto label_4160d4;
        case 0x4160d8u: goto label_4160d8;
        case 0x4160dcu: goto label_4160dc;
        case 0x4160e0u: goto label_4160e0;
        case 0x4160e4u: goto label_4160e4;
        case 0x4160e8u: goto label_4160e8;
        case 0x4160ecu: goto label_4160ec;
        case 0x4160f0u: goto label_4160f0;
        case 0x4160f4u: goto label_4160f4;
        case 0x4160f8u: goto label_4160f8;
        case 0x4160fcu: goto label_4160fc;
        case 0x416100u: goto label_416100;
        case 0x416104u: goto label_416104;
        case 0x416108u: goto label_416108;
        case 0x41610cu: goto label_41610c;
        case 0x416110u: goto label_416110;
        case 0x416114u: goto label_416114;
        case 0x416118u: goto label_416118;
        case 0x41611cu: goto label_41611c;
        case 0x416120u: goto label_416120;
        case 0x416124u: goto label_416124;
        case 0x416128u: goto label_416128;
        case 0x41612cu: goto label_41612c;
        case 0x416130u: goto label_416130;
        case 0x416134u: goto label_416134;
        case 0x416138u: goto label_416138;
        case 0x41613cu: goto label_41613c;
        case 0x416140u: goto label_416140;
        case 0x416144u: goto label_416144;
        case 0x416148u: goto label_416148;
        case 0x41614cu: goto label_41614c;
        case 0x416150u: goto label_416150;
        case 0x416154u: goto label_416154;
        case 0x416158u: goto label_416158;
        case 0x41615cu: goto label_41615c;
        case 0x416160u: goto label_416160;
        case 0x416164u: goto label_416164;
        case 0x416168u: goto label_416168;
        case 0x41616cu: goto label_41616c;
        case 0x416170u: goto label_416170;
        case 0x416174u: goto label_416174;
        case 0x416178u: goto label_416178;
        case 0x41617cu: goto label_41617c;
        case 0x416180u: goto label_416180;
        case 0x416184u: goto label_416184;
        case 0x416188u: goto label_416188;
        case 0x41618cu: goto label_41618c;
        case 0x416190u: goto label_416190;
        case 0x416194u: goto label_416194;
        case 0x416198u: goto label_416198;
        case 0x41619cu: goto label_41619c;
        case 0x4161a0u: goto label_4161a0;
        case 0x4161a4u: goto label_4161a4;
        case 0x4161a8u: goto label_4161a8;
        case 0x4161acu: goto label_4161ac;
        case 0x4161b0u: goto label_4161b0;
        case 0x4161b4u: goto label_4161b4;
        case 0x4161b8u: goto label_4161b8;
        case 0x4161bcu: goto label_4161bc;
        case 0x4161c0u: goto label_4161c0;
        case 0x4161c4u: goto label_4161c4;
        case 0x4161c8u: goto label_4161c8;
        case 0x4161ccu: goto label_4161cc;
        case 0x4161d0u: goto label_4161d0;
        case 0x4161d4u: goto label_4161d4;
        case 0x4161d8u: goto label_4161d8;
        case 0x4161dcu: goto label_4161dc;
        case 0x4161e0u: goto label_4161e0;
        case 0x4161e4u: goto label_4161e4;
        case 0x4161e8u: goto label_4161e8;
        case 0x4161ecu: goto label_4161ec;
        case 0x4161f0u: goto label_4161f0;
        case 0x4161f4u: goto label_4161f4;
        case 0x4161f8u: goto label_4161f8;
        case 0x4161fcu: goto label_4161fc;
        case 0x416200u: goto label_416200;
        case 0x416204u: goto label_416204;
        case 0x416208u: goto label_416208;
        case 0x41620cu: goto label_41620c;
        case 0x416210u: goto label_416210;
        case 0x416214u: goto label_416214;
        case 0x416218u: goto label_416218;
        case 0x41621cu: goto label_41621c;
        case 0x416220u: goto label_416220;
        case 0x416224u: goto label_416224;
        case 0x416228u: goto label_416228;
        case 0x41622cu: goto label_41622c;
        case 0x416230u: goto label_416230;
        case 0x416234u: goto label_416234;
        case 0x416238u: goto label_416238;
        case 0x41623cu: goto label_41623c;
        case 0x416240u: goto label_416240;
        case 0x416244u: goto label_416244;
        case 0x416248u: goto label_416248;
        case 0x41624cu: goto label_41624c;
        case 0x416250u: goto label_416250;
        case 0x416254u: goto label_416254;
        case 0x416258u: goto label_416258;
        case 0x41625cu: goto label_41625c;
        case 0x416260u: goto label_416260;
        case 0x416264u: goto label_416264;
        case 0x416268u: goto label_416268;
        case 0x41626cu: goto label_41626c;
        case 0x416270u: goto label_416270;
        case 0x416274u: goto label_416274;
        case 0x416278u: goto label_416278;
        case 0x41627cu: goto label_41627c;
        case 0x416280u: goto label_416280;
        case 0x416284u: goto label_416284;
        case 0x416288u: goto label_416288;
        case 0x41628cu: goto label_41628c;
        case 0x416290u: goto label_416290;
        case 0x416294u: goto label_416294;
        case 0x416298u: goto label_416298;
        case 0x41629cu: goto label_41629c;
        case 0x4162a0u: goto label_4162a0;
        case 0x4162a4u: goto label_4162a4;
        case 0x4162a8u: goto label_4162a8;
        case 0x4162acu: goto label_4162ac;
        case 0x4162b0u: goto label_4162b0;
        case 0x4162b4u: goto label_4162b4;
        case 0x4162b8u: goto label_4162b8;
        case 0x4162bcu: goto label_4162bc;
        case 0x4162c0u: goto label_4162c0;
        case 0x4162c4u: goto label_4162c4;
        case 0x4162c8u: goto label_4162c8;
        case 0x4162ccu: goto label_4162cc;
        case 0x4162d0u: goto label_4162d0;
        case 0x4162d4u: goto label_4162d4;
        case 0x4162d8u: goto label_4162d8;
        case 0x4162dcu: goto label_4162dc;
        case 0x4162e0u: goto label_4162e0;
        case 0x4162e4u: goto label_4162e4;
        case 0x4162e8u: goto label_4162e8;
        case 0x4162ecu: goto label_4162ec;
        case 0x4162f0u: goto label_4162f0;
        case 0x4162f4u: goto label_4162f4;
        case 0x4162f8u: goto label_4162f8;
        case 0x4162fcu: goto label_4162fc;
        case 0x416300u: goto label_416300;
        case 0x416304u: goto label_416304;
        case 0x416308u: goto label_416308;
        case 0x41630cu: goto label_41630c;
        case 0x416310u: goto label_416310;
        case 0x416314u: goto label_416314;
        case 0x416318u: goto label_416318;
        case 0x41631cu: goto label_41631c;
        case 0x416320u: goto label_416320;
        case 0x416324u: goto label_416324;
        case 0x416328u: goto label_416328;
        case 0x41632cu: goto label_41632c;
        case 0x416330u: goto label_416330;
        case 0x416334u: goto label_416334;
        case 0x416338u: goto label_416338;
        case 0x41633cu: goto label_41633c;
        case 0x416340u: goto label_416340;
        case 0x416344u: goto label_416344;
        case 0x416348u: goto label_416348;
        case 0x41634cu: goto label_41634c;
        case 0x416350u: goto label_416350;
        case 0x416354u: goto label_416354;
        case 0x416358u: goto label_416358;
        case 0x41635cu: goto label_41635c;
        case 0x416360u: goto label_416360;
        case 0x416364u: goto label_416364;
        case 0x416368u: goto label_416368;
        case 0x41636cu: goto label_41636c;
        case 0x416370u: goto label_416370;
        case 0x416374u: goto label_416374;
        case 0x416378u: goto label_416378;
        case 0x41637cu: goto label_41637c;
        case 0x416380u: goto label_416380;
        case 0x416384u: goto label_416384;
        case 0x416388u: goto label_416388;
        case 0x41638cu: goto label_41638c;
        case 0x416390u: goto label_416390;
        case 0x416394u: goto label_416394;
        case 0x416398u: goto label_416398;
        case 0x41639cu: goto label_41639c;
        case 0x4163a0u: goto label_4163a0;
        case 0x4163a4u: goto label_4163a4;
        case 0x4163a8u: goto label_4163a8;
        case 0x4163acu: goto label_4163ac;
        case 0x4163b0u: goto label_4163b0;
        case 0x4163b4u: goto label_4163b4;
        case 0x4163b8u: goto label_4163b8;
        case 0x4163bcu: goto label_4163bc;
        case 0x4163c0u: goto label_4163c0;
        case 0x4163c4u: goto label_4163c4;
        case 0x4163c8u: goto label_4163c8;
        case 0x4163ccu: goto label_4163cc;
        case 0x4163d0u: goto label_4163d0;
        case 0x4163d4u: goto label_4163d4;
        case 0x4163d8u: goto label_4163d8;
        case 0x4163dcu: goto label_4163dc;
        case 0x4163e0u: goto label_4163e0;
        case 0x4163e4u: goto label_4163e4;
        case 0x4163e8u: goto label_4163e8;
        case 0x4163ecu: goto label_4163ec;
        case 0x4163f0u: goto label_4163f0;
        case 0x4163f4u: goto label_4163f4;
        case 0x4163f8u: goto label_4163f8;
        case 0x4163fcu: goto label_4163fc;
        case 0x416400u: goto label_416400;
        case 0x416404u: goto label_416404;
        case 0x416408u: goto label_416408;
        case 0x41640cu: goto label_41640c;
        case 0x416410u: goto label_416410;
        case 0x416414u: goto label_416414;
        case 0x416418u: goto label_416418;
        case 0x41641cu: goto label_41641c;
        case 0x416420u: goto label_416420;
        case 0x416424u: goto label_416424;
        case 0x416428u: goto label_416428;
        case 0x41642cu: goto label_41642c;
        case 0x416430u: goto label_416430;
        case 0x416434u: goto label_416434;
        case 0x416438u: goto label_416438;
        case 0x41643cu: goto label_41643c;
        case 0x416440u: goto label_416440;
        case 0x416444u: goto label_416444;
        case 0x416448u: goto label_416448;
        case 0x41644cu: goto label_41644c;
        case 0x416450u: goto label_416450;
        case 0x416454u: goto label_416454;
        case 0x416458u: goto label_416458;
        case 0x41645cu: goto label_41645c;
        case 0x416460u: goto label_416460;
        case 0x416464u: goto label_416464;
        case 0x416468u: goto label_416468;
        case 0x41646cu: goto label_41646c;
        case 0x416470u: goto label_416470;
        case 0x416474u: goto label_416474;
        case 0x416478u: goto label_416478;
        case 0x41647cu: goto label_41647c;
        case 0x416480u: goto label_416480;
        case 0x416484u: goto label_416484;
        case 0x416488u: goto label_416488;
        case 0x41648cu: goto label_41648c;
        case 0x416490u: goto label_416490;
        case 0x416494u: goto label_416494;
        case 0x416498u: goto label_416498;
        case 0x41649cu: goto label_41649c;
        case 0x4164a0u: goto label_4164a0;
        case 0x4164a4u: goto label_4164a4;
        case 0x4164a8u: goto label_4164a8;
        case 0x4164acu: goto label_4164ac;
        case 0x4164b0u: goto label_4164b0;
        case 0x4164b4u: goto label_4164b4;
        case 0x4164b8u: goto label_4164b8;
        case 0x4164bcu: goto label_4164bc;
        case 0x4164c0u: goto label_4164c0;
        case 0x4164c4u: goto label_4164c4;
        case 0x4164c8u: goto label_4164c8;
        case 0x4164ccu: goto label_4164cc;
        case 0x4164d0u: goto label_4164d0;
        case 0x4164d4u: goto label_4164d4;
        case 0x4164d8u: goto label_4164d8;
        case 0x4164dcu: goto label_4164dc;
        case 0x4164e0u: goto label_4164e0;
        case 0x4164e4u: goto label_4164e4;
        case 0x4164e8u: goto label_4164e8;
        case 0x4164ecu: goto label_4164ec;
        case 0x4164f0u: goto label_4164f0;
        case 0x4164f4u: goto label_4164f4;
        case 0x4164f8u: goto label_4164f8;
        case 0x4164fcu: goto label_4164fc;
        case 0x416500u: goto label_416500;
        case 0x416504u: goto label_416504;
        case 0x416508u: goto label_416508;
        case 0x41650cu: goto label_41650c;
        case 0x416510u: goto label_416510;
        case 0x416514u: goto label_416514;
        case 0x416518u: goto label_416518;
        case 0x41651cu: goto label_41651c;
        case 0x416520u: goto label_416520;
        case 0x416524u: goto label_416524;
        case 0x416528u: goto label_416528;
        case 0x41652cu: goto label_41652c;
        case 0x416530u: goto label_416530;
        case 0x416534u: goto label_416534;
        case 0x416538u: goto label_416538;
        case 0x41653cu: goto label_41653c;
        case 0x416540u: goto label_416540;
        case 0x416544u: goto label_416544;
        case 0x416548u: goto label_416548;
        case 0x41654cu: goto label_41654c;
        case 0x416550u: goto label_416550;
        case 0x416554u: goto label_416554;
        case 0x416558u: goto label_416558;
        case 0x41655cu: goto label_41655c;
        case 0x416560u: goto label_416560;
        case 0x416564u: goto label_416564;
        case 0x416568u: goto label_416568;
        case 0x41656cu: goto label_41656c;
        case 0x416570u: goto label_416570;
        case 0x416574u: goto label_416574;
        case 0x416578u: goto label_416578;
        case 0x41657cu: goto label_41657c;
        case 0x416580u: goto label_416580;
        case 0x416584u: goto label_416584;
        case 0x416588u: goto label_416588;
        case 0x41658cu: goto label_41658c;
        case 0x416590u: goto label_416590;
        case 0x416594u: goto label_416594;
        case 0x416598u: goto label_416598;
        case 0x41659cu: goto label_41659c;
        case 0x4165a0u: goto label_4165a0;
        case 0x4165a4u: goto label_4165a4;
        case 0x4165a8u: goto label_4165a8;
        case 0x4165acu: goto label_4165ac;
        case 0x4165b0u: goto label_4165b0;
        case 0x4165b4u: goto label_4165b4;
        case 0x4165b8u: goto label_4165b8;
        case 0x4165bcu: goto label_4165bc;
        case 0x4165c0u: goto label_4165c0;
        case 0x4165c4u: goto label_4165c4;
        case 0x4165c8u: goto label_4165c8;
        case 0x4165ccu: goto label_4165cc;
        case 0x4165d0u: goto label_4165d0;
        case 0x4165d4u: goto label_4165d4;
        case 0x4165d8u: goto label_4165d8;
        case 0x4165dcu: goto label_4165dc;
        case 0x4165e0u: goto label_4165e0;
        case 0x4165e4u: goto label_4165e4;
        case 0x4165e8u: goto label_4165e8;
        case 0x4165ecu: goto label_4165ec;
        case 0x4165f0u: goto label_4165f0;
        case 0x4165f4u: goto label_4165f4;
        case 0x4165f8u: goto label_4165f8;
        case 0x4165fcu: goto label_4165fc;
        case 0x416600u: goto label_416600;
        case 0x416604u: goto label_416604;
        case 0x416608u: goto label_416608;
        case 0x41660cu: goto label_41660c;
        case 0x416610u: goto label_416610;
        case 0x416614u: goto label_416614;
        case 0x416618u: goto label_416618;
        case 0x41661cu: goto label_41661c;
        case 0x416620u: goto label_416620;
        case 0x416624u: goto label_416624;
        case 0x416628u: goto label_416628;
        case 0x41662cu: goto label_41662c;
        case 0x416630u: goto label_416630;
        case 0x416634u: goto label_416634;
        case 0x416638u: goto label_416638;
        case 0x41663cu: goto label_41663c;
        case 0x416640u: goto label_416640;
        case 0x416644u: goto label_416644;
        case 0x416648u: goto label_416648;
        case 0x41664cu: goto label_41664c;
        case 0x416650u: goto label_416650;
        case 0x416654u: goto label_416654;
        case 0x416658u: goto label_416658;
        case 0x41665cu: goto label_41665c;
        case 0x416660u: goto label_416660;
        case 0x416664u: goto label_416664;
        case 0x416668u: goto label_416668;
        case 0x41666cu: goto label_41666c;
        case 0x416670u: goto label_416670;
        case 0x416674u: goto label_416674;
        case 0x416678u: goto label_416678;
        case 0x41667cu: goto label_41667c;
        case 0x416680u: goto label_416680;
        case 0x416684u: goto label_416684;
        case 0x416688u: goto label_416688;
        case 0x41668cu: goto label_41668c;
        case 0x416690u: goto label_416690;
        case 0x416694u: goto label_416694;
        case 0x416698u: goto label_416698;
        case 0x41669cu: goto label_41669c;
        case 0x4166a0u: goto label_4166a0;
        case 0x4166a4u: goto label_4166a4;
        case 0x4166a8u: goto label_4166a8;
        case 0x4166acu: goto label_4166ac;
        case 0x4166b0u: goto label_4166b0;
        case 0x4166b4u: goto label_4166b4;
        case 0x4166b8u: goto label_4166b8;
        case 0x4166bcu: goto label_4166bc;
        case 0x4166c0u: goto label_4166c0;
        case 0x4166c4u: goto label_4166c4;
        case 0x4166c8u: goto label_4166c8;
        case 0x4166ccu: goto label_4166cc;
        case 0x4166d0u: goto label_4166d0;
        case 0x4166d4u: goto label_4166d4;
        case 0x4166d8u: goto label_4166d8;
        case 0x4166dcu: goto label_4166dc;
        case 0x4166e0u: goto label_4166e0;
        case 0x4166e4u: goto label_4166e4;
        case 0x4166e8u: goto label_4166e8;
        case 0x4166ecu: goto label_4166ec;
        case 0x4166f0u: goto label_4166f0;
        case 0x4166f4u: goto label_4166f4;
        case 0x4166f8u: goto label_4166f8;
        case 0x4166fcu: goto label_4166fc;
        case 0x416700u: goto label_416700;
        case 0x416704u: goto label_416704;
        case 0x416708u: goto label_416708;
        case 0x41670cu: goto label_41670c;
        case 0x416710u: goto label_416710;
        case 0x416714u: goto label_416714;
        case 0x416718u: goto label_416718;
        case 0x41671cu: goto label_41671c;
        case 0x416720u: goto label_416720;
        case 0x416724u: goto label_416724;
        case 0x416728u: goto label_416728;
        case 0x41672cu: goto label_41672c;
        case 0x416730u: goto label_416730;
        case 0x416734u: goto label_416734;
        case 0x416738u: goto label_416738;
        case 0x41673cu: goto label_41673c;
        case 0x416740u: goto label_416740;
        case 0x416744u: goto label_416744;
        case 0x416748u: goto label_416748;
        case 0x41674cu: goto label_41674c;
        case 0x416750u: goto label_416750;
        case 0x416754u: goto label_416754;
        case 0x416758u: goto label_416758;
        case 0x41675cu: goto label_41675c;
        case 0x416760u: goto label_416760;
        case 0x416764u: goto label_416764;
        case 0x416768u: goto label_416768;
        case 0x41676cu: goto label_41676c;
        case 0x416770u: goto label_416770;
        case 0x416774u: goto label_416774;
        case 0x416778u: goto label_416778;
        case 0x41677cu: goto label_41677c;
        case 0x416780u: goto label_416780;
        case 0x416784u: goto label_416784;
        case 0x416788u: goto label_416788;
        case 0x41678cu: goto label_41678c;
        case 0x416790u: goto label_416790;
        case 0x416794u: goto label_416794;
        case 0x416798u: goto label_416798;
        case 0x41679cu: goto label_41679c;
        case 0x4167a0u: goto label_4167a0;
        case 0x4167a4u: goto label_4167a4;
        case 0x4167a8u: goto label_4167a8;
        case 0x4167acu: goto label_4167ac;
        case 0x4167b0u: goto label_4167b0;
        case 0x4167b4u: goto label_4167b4;
        case 0x4167b8u: goto label_4167b8;
        case 0x4167bcu: goto label_4167bc;
        case 0x4167c0u: goto label_4167c0;
        case 0x4167c4u: goto label_4167c4;
        case 0x4167c8u: goto label_4167c8;
        case 0x4167ccu: goto label_4167cc;
        case 0x4167d0u: goto label_4167d0;
        case 0x4167d4u: goto label_4167d4;
        case 0x4167d8u: goto label_4167d8;
        case 0x4167dcu: goto label_4167dc;
        case 0x4167e0u: goto label_4167e0;
        case 0x4167e4u: goto label_4167e4;
        case 0x4167e8u: goto label_4167e8;
        case 0x4167ecu: goto label_4167ec;
        case 0x4167f0u: goto label_4167f0;
        case 0x4167f4u: goto label_4167f4;
        case 0x4167f8u: goto label_4167f8;
        case 0x4167fcu: goto label_4167fc;
        case 0x416800u: goto label_416800;
        case 0x416804u: goto label_416804;
        case 0x416808u: goto label_416808;
        case 0x41680cu: goto label_41680c;
        case 0x416810u: goto label_416810;
        case 0x416814u: goto label_416814;
        case 0x416818u: goto label_416818;
        case 0x41681cu: goto label_41681c;
        case 0x416820u: goto label_416820;
        case 0x416824u: goto label_416824;
        case 0x416828u: goto label_416828;
        case 0x41682cu: goto label_41682c;
        case 0x416830u: goto label_416830;
        case 0x416834u: goto label_416834;
        case 0x416838u: goto label_416838;
        case 0x41683cu: goto label_41683c;
        case 0x416840u: goto label_416840;
        case 0x416844u: goto label_416844;
        case 0x416848u: goto label_416848;
        case 0x41684cu: goto label_41684c;
        case 0x416850u: goto label_416850;
        case 0x416854u: goto label_416854;
        case 0x416858u: goto label_416858;
        case 0x41685cu: goto label_41685c;
        case 0x416860u: goto label_416860;
        case 0x416864u: goto label_416864;
        case 0x416868u: goto label_416868;
        case 0x41686cu: goto label_41686c;
        case 0x416870u: goto label_416870;
        case 0x416874u: goto label_416874;
        case 0x416878u: goto label_416878;
        case 0x41687cu: goto label_41687c;
        case 0x416880u: goto label_416880;
        case 0x416884u: goto label_416884;
        case 0x416888u: goto label_416888;
        case 0x41688cu: goto label_41688c;
        case 0x416890u: goto label_416890;
        case 0x416894u: goto label_416894;
        case 0x416898u: goto label_416898;
        case 0x41689cu: goto label_41689c;
        case 0x4168a0u: goto label_4168a0;
        case 0x4168a4u: goto label_4168a4;
        case 0x4168a8u: goto label_4168a8;
        case 0x4168acu: goto label_4168ac;
        case 0x4168b0u: goto label_4168b0;
        case 0x4168b4u: goto label_4168b4;
        case 0x4168b8u: goto label_4168b8;
        case 0x4168bcu: goto label_4168bc;
        case 0x4168c0u: goto label_4168c0;
        case 0x4168c4u: goto label_4168c4;
        case 0x4168c8u: goto label_4168c8;
        case 0x4168ccu: goto label_4168cc;
        case 0x4168d0u: goto label_4168d0;
        case 0x4168d4u: goto label_4168d4;
        case 0x4168d8u: goto label_4168d8;
        case 0x4168dcu: goto label_4168dc;
        case 0x4168e0u: goto label_4168e0;
        case 0x4168e4u: goto label_4168e4;
        case 0x4168e8u: goto label_4168e8;
        case 0x4168ecu: goto label_4168ec;
        case 0x4168f0u: goto label_4168f0;
        case 0x4168f4u: goto label_4168f4;
        case 0x4168f8u: goto label_4168f8;
        case 0x4168fcu: goto label_4168fc;
        case 0x416900u: goto label_416900;
        case 0x416904u: goto label_416904;
        case 0x416908u: goto label_416908;
        case 0x41690cu: goto label_41690c;
        case 0x416910u: goto label_416910;
        case 0x416914u: goto label_416914;
        case 0x416918u: goto label_416918;
        case 0x41691cu: goto label_41691c;
        case 0x416920u: goto label_416920;
        case 0x416924u: goto label_416924;
        case 0x416928u: goto label_416928;
        case 0x41692cu: goto label_41692c;
        case 0x416930u: goto label_416930;
        case 0x416934u: goto label_416934;
        case 0x416938u: goto label_416938;
        case 0x41693cu: goto label_41693c;
        case 0x416940u: goto label_416940;
        case 0x416944u: goto label_416944;
        case 0x416948u: goto label_416948;
        case 0x41694cu: goto label_41694c;
        case 0x416950u: goto label_416950;
        case 0x416954u: goto label_416954;
        case 0x416958u: goto label_416958;
        case 0x41695cu: goto label_41695c;
        case 0x416960u: goto label_416960;
        case 0x416964u: goto label_416964;
        case 0x416968u: goto label_416968;
        case 0x41696cu: goto label_41696c;
        case 0x416970u: goto label_416970;
        case 0x416974u: goto label_416974;
        case 0x416978u: goto label_416978;
        case 0x41697cu: goto label_41697c;
        case 0x416980u: goto label_416980;
        case 0x416984u: goto label_416984;
        case 0x416988u: goto label_416988;
        case 0x41698cu: goto label_41698c;
        case 0x416990u: goto label_416990;
        case 0x416994u: goto label_416994;
        case 0x416998u: goto label_416998;
        case 0x41699cu: goto label_41699c;
        case 0x4169a0u: goto label_4169a0;
        case 0x4169a4u: goto label_4169a4;
        case 0x4169a8u: goto label_4169a8;
        case 0x4169acu: goto label_4169ac;
        case 0x4169b0u: goto label_4169b0;
        case 0x4169b4u: goto label_4169b4;
        case 0x4169b8u: goto label_4169b8;
        case 0x4169bcu: goto label_4169bc;
        case 0x4169c0u: goto label_4169c0;
        case 0x4169c4u: goto label_4169c4;
        case 0x4169c8u: goto label_4169c8;
        case 0x4169ccu: goto label_4169cc;
        case 0x4169d0u: goto label_4169d0;
        case 0x4169d4u: goto label_4169d4;
        case 0x4169d8u: goto label_4169d8;
        case 0x4169dcu: goto label_4169dc;
        case 0x4169e0u: goto label_4169e0;
        case 0x4169e4u: goto label_4169e4;
        case 0x4169e8u: goto label_4169e8;
        case 0x4169ecu: goto label_4169ec;
        case 0x4169f0u: goto label_4169f0;
        case 0x4169f4u: goto label_4169f4;
        case 0x4169f8u: goto label_4169f8;
        case 0x4169fcu: goto label_4169fc;
        case 0x416a00u: goto label_416a00;
        case 0x416a04u: goto label_416a04;
        case 0x416a08u: goto label_416a08;
        case 0x416a0cu: goto label_416a0c;
        case 0x416a10u: goto label_416a10;
        case 0x416a14u: goto label_416a14;
        case 0x416a18u: goto label_416a18;
        case 0x416a1cu: goto label_416a1c;
        case 0x416a20u: goto label_416a20;
        case 0x416a24u: goto label_416a24;
        case 0x416a28u: goto label_416a28;
        case 0x416a2cu: goto label_416a2c;
        case 0x416a30u: goto label_416a30;
        case 0x416a34u: goto label_416a34;
        case 0x416a38u: goto label_416a38;
        case 0x416a3cu: goto label_416a3c;
        case 0x416a40u: goto label_416a40;
        case 0x416a44u: goto label_416a44;
        case 0x416a48u: goto label_416a48;
        case 0x416a4cu: goto label_416a4c;
        case 0x416a50u: goto label_416a50;
        case 0x416a54u: goto label_416a54;
        case 0x416a58u: goto label_416a58;
        case 0x416a5cu: goto label_416a5c;
        case 0x416a60u: goto label_416a60;
        case 0x416a64u: goto label_416a64;
        case 0x416a68u: goto label_416a68;
        case 0x416a6cu: goto label_416a6c;
        case 0x416a70u: goto label_416a70;
        case 0x416a74u: goto label_416a74;
        case 0x416a78u: goto label_416a78;
        case 0x416a7cu: goto label_416a7c;
        default: break;
    }

    ctx->pc = 0x415c00u;

label_415c00:
    // 0x415c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x415c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_415c04:
    // 0x415c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_415c08:
    // 0x415c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415c0c:
    // 0x415c0c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x415c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_415c10:
    // 0x415c10: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x415c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_415c14:
    // 0x415c14: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x415c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415c18:
    // 0x415c18: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x415c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415c1c:
    // 0x415c1c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x415c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415c20:
    // 0x415c20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x415c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_415c24:
    // 0x415c24: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x415c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_415c28:
    // 0x415c28: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x415c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_415c2c:
    // 0x415c2c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x415c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_415c30:
    // 0x415c30: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x415c30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_415c34:
    // 0x415c34: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x415c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415c38:
    // 0x415c38: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x415c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415c3c:
    // 0x415c3c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x415c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415c40:
    // 0x415c40: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x415c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_415c44:
    // 0x415c44: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x415c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_415c48:
    // 0x415c48: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x415c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_415c4c:
    // 0x415c4c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x415c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_415c50:
    // 0x415c50: 0xc0a3830  jal         func_28E0C0
label_415c54:
    if (ctx->pc == 0x415C54u) {
        ctx->pc = 0x415C54u;
            // 0x415c54: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x415C58u;
        goto label_415c58;
    }
    ctx->pc = 0x415C50u;
    SET_GPR_U32(ctx, 31, 0x415C58u);
    ctx->pc = 0x415C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415C50u;
            // 0x415c54: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415C58u; }
        if (ctx->pc != 0x415C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415C58u; }
        if (ctx->pc != 0x415C58u) { return; }
    }
    ctx->pc = 0x415C58u;
label_415c58:
    // 0x415c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415c5c:
    // 0x415c5c: 0xc08af10  jal         func_22BC40
label_415c60:
    if (ctx->pc == 0x415C60u) {
        ctx->pc = 0x415C60u;
            // 0x415c60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x415C64u;
        goto label_415c64;
    }
    ctx->pc = 0x415C5Cu;
    SET_GPR_U32(ctx, 31, 0x415C64u);
    ctx->pc = 0x415C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415C5Cu;
            // 0x415c60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415C64u; }
        if (ctx->pc != 0x415C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415C64u; }
        if (ctx->pc != 0x415C64u) { return; }
    }
    ctx->pc = 0x415C64u;
label_415c64:
    // 0x415c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415c68:
    // 0x415c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415c6c:
    // 0x415c6c: 0x3e00008  jr          $ra
label_415c70:
    if (ctx->pc == 0x415C70u) {
        ctx->pc = 0x415C70u;
            // 0x415c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x415C74u;
        goto label_415c74;
    }
    ctx->pc = 0x415C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415C6Cu;
            // 0x415c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415C74u;
label_415c74:
    // 0x415c74: 0x0  nop
    ctx->pc = 0x415c74u;
    // NOP
label_415c78:
    // 0x415c78: 0x0  nop
    ctx->pc = 0x415c78u;
    // NOP
label_415c7c:
    // 0x415c7c: 0x0  nop
    ctx->pc = 0x415c7cu;
    // NOP
label_415c80:
    // 0x415c80: 0x3e00008  jr          $ra
label_415c84:
    if (ctx->pc == 0x415C84u) {
        ctx->pc = 0x415C84u;
            // 0x415c84: 0x2402698c  addiu       $v0, $zero, 0x698C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27020));
        ctx->pc = 0x415C88u;
        goto label_415c88;
    }
    ctx->pc = 0x415C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415C80u;
            // 0x415c84: 0x2402698c  addiu       $v0, $zero, 0x698C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415C88u;
label_415c88:
    // 0x415c88: 0x0  nop
    ctx->pc = 0x415c88u;
    // NOP
label_415c8c:
    // 0x415c8c: 0x0  nop
    ctx->pc = 0x415c8cu;
    // NOP
label_415c90:
    // 0x415c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_415c94:
    // 0x415c94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x415c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_415c98:
    // 0x415c98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x415c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_415c9c:
    // 0x415c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x415c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_415ca0:
    // 0x415ca0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x415ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415ca4:
    // 0x415ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x415ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_415ca8:
    // 0x415ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415cac:
    // 0x415cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415cb0:
    // 0x415cb0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x415cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_415cb4:
    // 0x415cb4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_415cb8:
    if (ctx->pc == 0x415CB8u) {
        ctx->pc = 0x415CB8u;
            // 0x415cb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415CBCu;
        goto label_415cbc;
    }
    ctx->pc = 0x415CB4u;
    {
        const bool branch_taken_0x415cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415CB4u;
            // 0x415cb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415cb4) {
            ctx->pc = 0x415CF8u;
            goto label_415cf8;
        }
    }
    ctx->pc = 0x415CBCu;
label_415cbc:
    // 0x415cbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x415cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415cc0:
    // 0x415cc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x415cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415cc4:
    // 0x415cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415cc8:
    // 0x415cc8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x415cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_415ccc:
    // 0x415ccc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x415cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_415cd0:
    // 0x415cd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x415cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_415cd4:
    // 0x415cd4: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x415cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_415cd8:
    // 0x415cd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x415cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_415cdc:
    // 0x415cdc: 0x320f809  jalr        $t9
label_415ce0:
    if (ctx->pc == 0x415CE0u) {
        ctx->pc = 0x415CE0u;
            // 0x415ce0: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x415CE4u;
        goto label_415ce4;
    }
    ctx->pc = 0x415CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415CE4u);
        ctx->pc = 0x415CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415CDCu;
            // 0x415ce0: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x415CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415CE4u; }
            if (ctx->pc != 0x415CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x415CE4u;
label_415ce4:
    // 0x415ce4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x415ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_415ce8:
    // 0x415ce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x415ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_415cec:
    // 0x415cec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x415cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_415cf0:
    // 0x415cf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_415cf4:
    if (ctx->pc == 0x415CF4u) {
        ctx->pc = 0x415CF4u;
            // 0x415cf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x415CF8u;
        goto label_415cf8;
    }
    ctx->pc = 0x415CF0u;
    {
        const bool branch_taken_0x415cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415CF0u;
            // 0x415cf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415cf0) {
            ctx->pc = 0x415CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_415cc8;
        }
    }
    ctx->pc = 0x415CF8u;
label_415cf8:
    // 0x415cf8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x415cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415cfc:
    // 0x415cfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x415cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_415d00:
    // 0x415d00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x415d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_415d04:
    // 0x415d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x415d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415d08:
    // 0x415d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x415d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415d0c:
    // 0x415d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415d10:
    // 0x415d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415d14:
    // 0x415d14: 0x3e00008  jr          $ra
label_415d18:
    if (ctx->pc == 0x415D18u) {
        ctx->pc = 0x415D18u;
            // 0x415d18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x415D1Cu;
        goto label_415d1c;
    }
    ctx->pc = 0x415D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415D14u;
            // 0x415d18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415D1Cu;
label_415d1c:
    // 0x415d1c: 0x0  nop
    ctx->pc = 0x415d1cu;
    // NOP
label_415d20:
    // 0x415d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415d24:
    // 0x415d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x415d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415d28:
    // 0x415d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_415d2c:
    // 0x415d2c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x415d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_415d30:
    // 0x415d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415d34:
    // 0x415d34: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x415d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_415d38:
    // 0x415d38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x415d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_415d3c:
    // 0x415d3c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x415d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_415d40:
    // 0x415d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x415d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_415d44:
    // 0x415d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x415d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_415d48:
    // 0x415d48: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x415d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_415d4c:
    // 0x415d4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x415d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415d50:
    // 0x415d50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x415d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_415d54:
    // 0x415d54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x415d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_415d58:
    // 0x415d58: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x415d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_415d5c:
    // 0x415d5c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x415d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_415d60:
    // 0x415d60: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x415d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_415d64:
    // 0x415d64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x415d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_415d68:
    // 0x415d68: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x415d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_415d6c:
    // 0x415d6c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x415d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_415d70:
    // 0x415d70: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x415d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_415d74:
    // 0x415d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x415d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_415d78:
    // 0x415d78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x415d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_415d7c:
    // 0x415d7c: 0xc0a997c  jal         func_2A65F0
label_415d80:
    if (ctx->pc == 0x415D80u) {
        ctx->pc = 0x415D80u;
            // 0x415d80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x415D84u;
        goto label_415d84;
    }
    ctx->pc = 0x415D7Cu;
    SET_GPR_U32(ctx, 31, 0x415D84u);
    ctx->pc = 0x415D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415D7Cu;
            // 0x415d80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415D84u; }
        if (ctx->pc != 0x415D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415D84u; }
        if (ctx->pc != 0x415D84u) { return; }
    }
    ctx->pc = 0x415D84u;
label_415d84:
    // 0x415d84: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x415d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_415d88:
    // 0x415d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415d8c:
    // 0x415d8c: 0xc0d879c  jal         func_361E70
label_415d90:
    if (ctx->pc == 0x415D90u) {
        ctx->pc = 0x415D90u;
            // 0x415d90: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x415D94u;
        goto label_415d94;
    }
    ctx->pc = 0x415D8Cu;
    SET_GPR_U32(ctx, 31, 0x415D94u);
    ctx->pc = 0x415D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415D8Cu;
            // 0x415d90: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415D94u; }
        if (ctx->pc != 0x415D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415D94u; }
        if (ctx->pc != 0x415D94u) { return; }
    }
    ctx->pc = 0x415D94u;
label_415d94:
    // 0x415d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415d98:
    // 0x415d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415d9c:
    // 0x415d9c: 0x3e00008  jr          $ra
label_415da0:
    if (ctx->pc == 0x415DA0u) {
        ctx->pc = 0x415DA0u;
            // 0x415da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x415DA4u;
        goto label_415da4;
    }
    ctx->pc = 0x415D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415D9Cu;
            // 0x415da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415DA4u;
label_415da4:
    // 0x415da4: 0x0  nop
    ctx->pc = 0x415da4u;
    // NOP
label_415da8:
    // 0x415da8: 0x0  nop
    ctx->pc = 0x415da8u;
    // NOP
label_415dac:
    // 0x415dac: 0x0  nop
    ctx->pc = 0x415dacu;
    // NOP
label_415db0:
    // 0x415db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_415db4:
    // 0x415db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_415db8:
    // 0x415db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415dbc:
    // 0x415dbc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x415dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_415dc0:
    // 0x415dc0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_415dc4:
    if (ctx->pc == 0x415DC4u) {
        ctx->pc = 0x415DC4u;
            // 0x415dc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415DC8u;
        goto label_415dc8;
    }
    ctx->pc = 0x415DC0u;
    {
        const bool branch_taken_0x415dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x415DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415DC0u;
            // 0x415dc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415dc0) {
            ctx->pc = 0x415EE0u;
            goto label_415ee0;
        }
    }
    ctx->pc = 0x415DC8u;
label_415dc8:
    // 0x415dc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x415dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_415dcc:
    // 0x415dcc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x415dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_415dd0:
    // 0x415dd0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x415dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_415dd4:
    // 0x415dd4: 0xc075128  jal         func_1D44A0
label_415dd8:
    if (ctx->pc == 0x415DD8u) {
        ctx->pc = 0x415DD8u;
            // 0x415dd8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x415DDCu;
        goto label_415ddc;
    }
    ctx->pc = 0x415DD4u;
    SET_GPR_U32(ctx, 31, 0x415DDCu);
    ctx->pc = 0x415DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415DD4u;
            // 0x415dd8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415DDCu; }
        if (ctx->pc != 0x415DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415DDCu; }
        if (ctx->pc != 0x415DDCu) { return; }
    }
    ctx->pc = 0x415DDCu;
label_415ddc:
    // 0x415ddc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x415ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_415de0:
    // 0x415de0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415de4:
    // 0x415de4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x415de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_415de8:
    // 0x415de8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x415de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_415dec:
    // 0x415dec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x415decu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_415df0:
    // 0x415df0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_415df4:
    if (ctx->pc == 0x415DF4u) {
        ctx->pc = 0x415DF4u;
            // 0x415df4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x415DF8u;
        goto label_415df8;
    }
    ctx->pc = 0x415DF0u;
    {
        const bool branch_taken_0x415df0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x415DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415DF0u;
            // 0x415df4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415df0) {
            ctx->pc = 0x415E00u;
            goto label_415e00;
        }
    }
    ctx->pc = 0x415DF8u;
label_415df8:
    // 0x415df8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415dfc:
    // 0x415dfc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x415dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_415e00:
    // 0x415e00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x415e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415e04:
    // 0x415e04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415e08:
    // 0x415e08: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x415e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_415e0c:
    // 0x415e0c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x415e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_415e10:
    // 0x415e10: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x415e10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_415e14:
    // 0x415e14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_415e18:
    if (ctx->pc == 0x415E18u) {
        ctx->pc = 0x415E18u;
            // 0x415e18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x415E1Cu;
        goto label_415e1c;
    }
    ctx->pc = 0x415E14u;
    {
        const bool branch_taken_0x415e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415e14) {
            ctx->pc = 0x415E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415E14u;
            // 0x415e18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415E28u;
            goto label_415e28;
        }
    }
    ctx->pc = 0x415E1Cu;
label_415e1c:
    // 0x415e1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415e20:
    // 0x415e20: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x415e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_415e24:
    // 0x415e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x415e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415e28:
    // 0x415e28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415e2c:
    // 0x415e2c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x415e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_415e30:
    // 0x415e30: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x415e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_415e34:
    // 0x415e34: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x415e34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_415e38:
    // 0x415e38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_415e3c:
    if (ctx->pc == 0x415E3Cu) {
        ctx->pc = 0x415E3Cu;
            // 0x415e3c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x415E40u;
        goto label_415e40;
    }
    ctx->pc = 0x415E38u;
    {
        const bool branch_taken_0x415e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415e38) {
            ctx->pc = 0x415E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415E38u;
            // 0x415e3c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415E4Cu;
            goto label_415e4c;
        }
    }
    ctx->pc = 0x415E40u;
label_415e40:
    // 0x415e40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415e44:
    // 0x415e44: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x415e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_415e48:
    // 0x415e48: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x415e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415e4c:
    // 0x415e4c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x415e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_415e50:
    // 0x415e50: 0x320f809  jalr        $t9
label_415e54:
    if (ctx->pc == 0x415E54u) {
        ctx->pc = 0x415E54u;
            // 0x415e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415E58u;
        goto label_415e58;
    }
    ctx->pc = 0x415E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415E58u);
        ctx->pc = 0x415E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415E50u;
            // 0x415e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x415E58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415E58u; }
            if (ctx->pc != 0x415E58u) { return; }
        }
        }
    }
    ctx->pc = 0x415E58u;
label_415e58:
    // 0x415e58: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x415e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_415e5c:
    // 0x415e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415e60:
    // 0x415e60: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x415e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_415e64:
    // 0x415e64: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x415e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_415e68:
    // 0x415e68: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x415e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_415e6c:
    // 0x415e6c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x415e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_415e70:
    // 0x415e70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_415e74:
    if (ctx->pc == 0x415E74u) {
        ctx->pc = 0x415E74u;
            // 0x415e74: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x415E78u;
        goto label_415e78;
    }
    ctx->pc = 0x415E70u;
    {
        const bool branch_taken_0x415e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415e70) {
            ctx->pc = 0x415E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415E70u;
            // 0x415e74: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415E84u;
            goto label_415e84;
        }
    }
    ctx->pc = 0x415E78u;
label_415e78:
    // 0x415e78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415e7c:
    // 0x415e7c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x415e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_415e80:
    // 0x415e80: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x415e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_415e84:
    // 0x415e84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415e88:
    // 0x415e88: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x415e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_415e8c:
    // 0x415e8c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x415e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_415e90:
    // 0x415e90: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x415e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_415e94:
    // 0x415e94: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x415e94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_415e98:
    // 0x415e98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_415e9c:
    if (ctx->pc == 0x415E9Cu) {
        ctx->pc = 0x415EA0u;
        goto label_415ea0;
    }
    ctx->pc = 0x415E98u;
    {
        const bool branch_taken_0x415e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415e98) {
            ctx->pc = 0x415EA8u;
            goto label_415ea8;
        }
    }
    ctx->pc = 0x415EA0u;
label_415ea0:
    // 0x415ea0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415ea4:
    // 0x415ea4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x415ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_415ea8:
    // 0x415ea8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415eac:
    // 0x415eac: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x415eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_415eb0:
    // 0x415eb0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x415eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_415eb4:
    // 0x415eb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_415eb8:
    if (ctx->pc == 0x415EB8u) {
        ctx->pc = 0x415EBCu;
        goto label_415ebc;
    }
    ctx->pc = 0x415EB4u;
    {
        const bool branch_taken_0x415eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415eb4) {
            ctx->pc = 0x415EC4u;
            goto label_415ec4;
        }
    }
    ctx->pc = 0x415EBCu;
label_415ebc:
    // 0x415ebc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415ec0:
    // 0x415ec0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x415ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_415ec4:
    // 0x415ec4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415ec8:
    // 0x415ec8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x415ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_415ecc:
    // 0x415ecc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x415eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_415ed0:
    // 0x415ed0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_415ed4:
    if (ctx->pc == 0x415ED4u) {
        ctx->pc = 0x415ED4u;
            // 0x415ed4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x415ED8u;
        goto label_415ed8;
    }
    ctx->pc = 0x415ED0u;
    {
        const bool branch_taken_0x415ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x415ed0) {
            ctx->pc = 0x415ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415ED0u;
            // 0x415ed4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415EE4u;
            goto label_415ee4;
        }
    }
    ctx->pc = 0x415ED8u;
label_415ed8:
    // 0x415ed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415edc:
    // 0x415edc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x415edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_415ee0:
    // 0x415ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415ee4:
    // 0x415ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415ee8:
    // 0x415ee8: 0x3e00008  jr          $ra
label_415eec:
    if (ctx->pc == 0x415EECu) {
        ctx->pc = 0x415EECu;
            // 0x415eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x415EF0u;
        goto label_415ef0;
    }
    ctx->pc = 0x415EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415EE8u;
            // 0x415eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415EF0u;
label_415ef0:
    // 0x415ef0: 0x81051c4  j           func_414710
label_415ef4:
    if (ctx->pc == 0x415EF4u) {
        ctx->pc = 0x415EF4u;
            // 0x415ef4: 0x2484ff80  addiu       $a0, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->pc = 0x415EF8u;
        goto label_415ef8;
    }
    ctx->pc = 0x415EF0u;
    ctx->pc = 0x415EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415EF0u;
            // 0x415ef4: 0x2484ff80  addiu       $a0, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414710u;
    {
        auto targetFn = runtime->lookupFunction(0x414710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415EF8u;
label_415ef8:
    // 0x415ef8: 0x0  nop
    ctx->pc = 0x415ef8u;
    // NOP
label_415efc:
    // 0x415efc: 0x0  nop
    ctx->pc = 0x415efcu;
    // NOP
label_415f00:
    // 0x415f00: 0x81054f4  j           func_4153D0
label_415f04:
    if (ctx->pc == 0x415F04u) {
        ctx->pc = 0x415F04u;
            // 0x415f04: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F08u;
        goto label_415f08;
    }
    ctx->pc = 0x415F00u;
    ctx->pc = 0x415F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F00u;
            // 0x415f04: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4153D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4153D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F08u;
label_415f08:
    // 0x415f08: 0x0  nop
    ctx->pc = 0x415f08u;
    // NOP
label_415f0c:
    // 0x415f0c: 0x0  nop
    ctx->pc = 0x415f0cu;
    // NOP
label_415f10:
    // 0x415f10: 0x8105510  j           func_415440
label_415f14:
    if (ctx->pc == 0x415F14u) {
        ctx->pc = 0x415F14u;
            // 0x415f14: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F18u;
        goto label_415f18;
    }
    ctx->pc = 0x415F10u;
    ctx->pc = 0x415F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F10u;
            // 0x415f14: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415440u;
    {
        auto targetFn = runtime->lookupFunction(0x415440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F18u;
label_415f18:
    // 0x415f18: 0x0  nop
    ctx->pc = 0x415f18u;
    // NOP
label_415f1c:
    // 0x415f1c: 0x0  nop
    ctx->pc = 0x415f1cu;
    // NOP
label_415f20:
    // 0x415f20: 0x8105720  j           func_415C80
label_415f24:
    if (ctx->pc == 0x415F24u) {
        ctx->pc = 0x415F24u;
            // 0x415f24: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F28u;
        goto label_415f28;
    }
    ctx->pc = 0x415F20u;
    ctx->pc = 0x415F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F20u;
            // 0x415f24: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415C80u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_415c80;
    ctx->pc = 0x415F28u;
label_415f28:
    // 0x415f28: 0x0  nop
    ctx->pc = 0x415f28u;
    // NOP
label_415f2c:
    // 0x415f2c: 0x0  nop
    ctx->pc = 0x415f2cu;
    // NOP
label_415f30:
    // 0x415f30: 0x8105428  j           func_4150A0
label_415f34:
    if (ctx->pc == 0x415F34u) {
        ctx->pc = 0x415F34u;
            // 0x415f34: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F38u;
        goto label_415f38;
    }
    ctx->pc = 0x415F30u;
    ctx->pc = 0x415F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F30u;
            // 0x415f34: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4150A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4150A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F38u;
label_415f38:
    // 0x415f38: 0x0  nop
    ctx->pc = 0x415f38u;
    // NOP
label_415f3c:
    // 0x415f3c: 0x0  nop
    ctx->pc = 0x415f3cu;
    // NOP
label_415f40:
    // 0x415f40: 0x815a1d0  j           func_568740
label_415f44:
    if (ctx->pc == 0x415F44u) {
        ctx->pc = 0x415F44u;
            // 0x415f44: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F48u;
        goto label_415f48;
    }
    ctx->pc = 0x415F40u;
    ctx->pc = 0x415F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F40u;
            // 0x415f44: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568740u;
    {
        auto targetFn = runtime->lookupFunction(0x568740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F48u;
label_415f48:
    // 0x415f48: 0x0  nop
    ctx->pc = 0x415f48u;
    // NOP
label_415f4c:
    // 0x415f4c: 0x0  nop
    ctx->pc = 0x415f4cu;
    // NOP
label_415f50:
    // 0x415f50: 0x8105608  j           func_415820
label_415f54:
    if (ctx->pc == 0x415F54u) {
        ctx->pc = 0x415F54u;
            // 0x415f54: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F58u;
        goto label_415f58;
    }
    ctx->pc = 0x415F50u;
    ctx->pc = 0x415F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F50u;
            // 0x415f54: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415820u;
    {
        auto targetFn = runtime->lookupFunction(0x415820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F58u;
label_415f58:
    // 0x415f58: 0x0  nop
    ctx->pc = 0x415f58u;
    // NOP
label_415f5c:
    // 0x415f5c: 0x0  nop
    ctx->pc = 0x415f5cu;
    // NOP
label_415f60:
    // 0x415f60: 0x8105620  j           func_415880
label_415f64:
    if (ctx->pc == 0x415F64u) {
        ctx->pc = 0x415F64u;
            // 0x415f64: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F68u;
        goto label_415f68;
    }
    ctx->pc = 0x415F60u;
    ctx->pc = 0x415F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F60u;
            // 0x415f64: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415880u;
    {
        auto targetFn = runtime->lookupFunction(0x415880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F68u;
label_415f68:
    // 0x415f68: 0x0  nop
    ctx->pc = 0x415f68u;
    // NOP
label_415f6c:
    // 0x415f6c: 0x0  nop
    ctx->pc = 0x415f6cu;
    // NOP
label_415f70:
    // 0x415f70: 0x81051c4  j           func_414710
label_415f74:
    if (ctx->pc == 0x415F74u) {
        ctx->pc = 0x415F74u;
            // 0x415f74: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x415F78u;
        goto label_415f78;
    }
    ctx->pc = 0x415F70u;
    ctx->pc = 0x415F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F70u;
            // 0x415f74: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414710u;
    {
        auto targetFn = runtime->lookupFunction(0x414710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F78u;
label_415f78:
    // 0x415f78: 0x0  nop
    ctx->pc = 0x415f78u;
    // NOP
label_415f7c:
    // 0x415f7c: 0x0  nop
    ctx->pc = 0x415f7cu;
    // NOP
label_415f80:
    // 0x415f80: 0x8105354  j           func_414D50
label_415f84:
    if (ctx->pc == 0x415F84u) {
        ctx->pc = 0x415F84u;
            // 0x415f84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x415F88u;
        goto label_415f88;
    }
    ctx->pc = 0x415F80u;
    ctx->pc = 0x415F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F80u;
            // 0x415f84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414D50u;
    {
        auto targetFn = runtime->lookupFunction(0x414D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415F88u;
label_415f88:
    // 0x415f88: 0x0  nop
    ctx->pc = 0x415f88u;
    // NOP
label_415f8c:
    // 0x415f8c: 0x0  nop
    ctx->pc = 0x415f8cu;
    // NOP
label_415f90:
    // 0x415f90: 0x810516c  j           func_4145B0
label_415f94:
    if (ctx->pc == 0x415F94u) {
        ctx->pc = 0x415F94u;
            // 0x415f94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x415F98u;
        goto label_415f98;
    }
    ctx->pc = 0x415F90u;
    ctx->pc = 0x415F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415F90u;
            // 0x415f94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4145B0u;
    if (runtime->hasFunction(0x4145B0u)) {
        auto targetFn = runtime->lookupFunction(0x4145B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004145B0_0x4145b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x415F98u;
label_415f98:
    // 0x415f98: 0x0  nop
    ctx->pc = 0x415f98u;
    // NOP
label_415f9c:
    // 0x415f9c: 0x0  nop
    ctx->pc = 0x415f9cu;
    // NOP
label_415fa0:
    // 0x415fa0: 0x8105138  j           func_4144E0
label_415fa4:
    if (ctx->pc == 0x415FA4u) {
        ctx->pc = 0x415FA4u;
            // 0x415fa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x415FA8u;
        goto label_415fa8;
    }
    ctx->pc = 0x415FA0u;
    ctx->pc = 0x415FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415FA0u;
            // 0x415fa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4144E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4144E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415FA8u;
label_415fa8:
    // 0x415fa8: 0x0  nop
    ctx->pc = 0x415fa8u;
    // NOP
label_415fac:
    // 0x415fac: 0x0  nop
    ctx->pc = 0x415facu;
    // NOP
label_415fb0:
    // 0x415fb0: 0x81052f8  j           func_414BE0
label_415fb4:
    if (ctx->pc == 0x415FB4u) {
        ctx->pc = 0x415FB4u;
            // 0x415fb4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x415FB8u;
        goto label_415fb8;
    }
    ctx->pc = 0x415FB0u;
    ctx->pc = 0x415FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415FB0u;
            // 0x415fb4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414BE0u;
    {
        auto targetFn = runtime->lookupFunction(0x414BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415FB8u;
label_415fb8:
    // 0x415fb8: 0x0  nop
    ctx->pc = 0x415fb8u;
    // NOP
label_415fbc:
    // 0x415fbc: 0x0  nop
    ctx->pc = 0x415fbcu;
    // NOP
label_415fc0:
    // 0x415fc0: 0x8105300  j           func_414C00
label_415fc4:
    if (ctx->pc == 0x415FC4u) {
        ctx->pc = 0x415FC4u;
            // 0x415fc4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x415FC8u;
        goto label_415fc8;
    }
    ctx->pc = 0x415FC0u;
    ctx->pc = 0x415FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415FC0u;
            // 0x415fc4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414C00u;
    {
        auto targetFn = runtime->lookupFunction(0x414C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415FC8u;
label_415fc8:
    // 0x415fc8: 0x0  nop
    ctx->pc = 0x415fc8u;
    // NOP
label_415fcc:
    // 0x415fcc: 0x0  nop
    ctx->pc = 0x415fccu;
    // NOP
label_415fd0:
    // 0x415fd0: 0x8105138  j           func_4144E0
label_415fd4:
    if (ctx->pc == 0x415FD4u) {
        ctx->pc = 0x415FD4u;
            // 0x415fd4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x415FD8u;
        goto label_415fd8;
    }
    ctx->pc = 0x415FD0u;
    ctx->pc = 0x415FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415FD0u;
            // 0x415fd4: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4144E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4144E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415FD8u;
label_415fd8:
    // 0x415fd8: 0x0  nop
    ctx->pc = 0x415fd8u;
    // NOP
label_415fdc:
    // 0x415fdc: 0x0  nop
    ctx->pc = 0x415fdcu;
    // NOP
label_415fe0:
    // 0x415fe0: 0x80c2424  j           func_309090
label_415fe4:
    if (ctx->pc == 0x415FE4u) {
        ctx->pc = 0x415FE8u;
        goto label_415fe8;
    }
    ctx->pc = 0x415FE0u;
    ctx->pc = 0x309090u;
    {
        auto targetFn = runtime->lookupFunction(0x309090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x415FE8u;
label_415fe8:
    // 0x415fe8: 0x0  nop
    ctx->pc = 0x415fe8u;
    // NOP
label_415fec:
    // 0x415fec: 0x0  nop
    ctx->pc = 0x415fecu;
    // NOP
label_415ff0:
    // 0x415ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415ff4:
    // 0x415ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x415ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_415ff8:
    // 0x415ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415ffc:
    // 0x415ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_416000:
    // 0x416000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x416000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416004:
    // 0x416004: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_416008:
    if (ctx->pc == 0x416008u) {
        ctx->pc = 0x416008u;
            // 0x416008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41600Cu;
        goto label_41600c;
    }
    ctx->pc = 0x416004u;
    {
        const bool branch_taken_0x416004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x416008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416004u;
            // 0x416008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416004) {
            ctx->pc = 0x416048u;
            goto label_416048;
        }
    }
    ctx->pc = 0x41600Cu;
label_41600c:
    // 0x41600c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_416010:
    // 0x416010: 0x2442b350  addiu       $v0, $v0, -0x4CB0
    ctx->pc = 0x416010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
label_416014:
    // 0x416014: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_416018:
    if (ctx->pc == 0x416018u) {
        ctx->pc = 0x416018u;
            // 0x416018: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41601Cu;
        goto label_41601c;
    }
    ctx->pc = 0x416014u;
    {
        const bool branch_taken_0x416014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x416018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416014u;
            // 0x416018: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416014) {
            ctx->pc = 0x416030u;
            goto label_416030;
        }
    }
    ctx->pc = 0x41601Cu;
label_41601c:
    // 0x41601c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_416020:
    // 0x416020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x416020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416024:
    // 0x416024: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x416024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_416028:
    // 0x416028: 0xc057a68  jal         func_15E9A0
label_41602c:
    if (ctx->pc == 0x41602Cu) {
        ctx->pc = 0x41602Cu;
            // 0x41602c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x416030u;
        goto label_416030;
    }
    ctx->pc = 0x416028u;
    SET_GPR_U32(ctx, 31, 0x416030u);
    ctx->pc = 0x41602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416028u;
            // 0x41602c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416030u; }
        if (ctx->pc != 0x416030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416030u; }
        if (ctx->pc != 0x416030u) { return; }
    }
    ctx->pc = 0x416030u;
label_416030:
    // 0x416030: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x416030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_416034:
    // 0x416034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x416034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_416038:
    // 0x416038: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41603c:
    if (ctx->pc == 0x41603Cu) {
        ctx->pc = 0x41603Cu;
            // 0x41603c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416040u;
        goto label_416040;
    }
    ctx->pc = 0x416038u;
    {
        const bool branch_taken_0x416038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x416038) {
            ctx->pc = 0x41603Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416038u;
            // 0x41603c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41604Cu;
            goto label_41604c;
        }
    }
    ctx->pc = 0x416040u;
label_416040:
    // 0x416040: 0xc0400a8  jal         func_1002A0
label_416044:
    if (ctx->pc == 0x416044u) {
        ctx->pc = 0x416044u;
            // 0x416044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416048u;
        goto label_416048;
    }
    ctx->pc = 0x416040u;
    SET_GPR_U32(ctx, 31, 0x416048u);
    ctx->pc = 0x416044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416040u;
            // 0x416044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416048u; }
        if (ctx->pc != 0x416048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416048u; }
        if (ctx->pc != 0x416048u) { return; }
    }
    ctx->pc = 0x416048u;
label_416048:
    // 0x416048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x416048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41604c:
    // 0x41604c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_416050:
    // 0x416050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416054:
    // 0x416054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_416058:
    // 0x416058: 0x3e00008  jr          $ra
label_41605c:
    if (ctx->pc == 0x41605Cu) {
        ctx->pc = 0x41605Cu;
            // 0x41605c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x416060u;
        goto label_416060;
    }
    ctx->pc = 0x416058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416058u;
            // 0x41605c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416060u;
label_416060:
    // 0x416060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x416060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_416064:
    // 0x416064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x416064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_416068:
    // 0x416068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x416068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41606c:
    // 0x41606c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_416070:
    // 0x416070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x416070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_416074:
    // 0x416074: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x416074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
label_416078:
    // 0x416078: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_41607c:
    if (ctx->pc == 0x41607Cu) {
        ctx->pc = 0x41607Cu;
            // 0x41607c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416080u;
        goto label_416080;
    }
    ctx->pc = 0x416078u;
    {
        const bool branch_taken_0x416078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416078u;
            // 0x41607c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416078) {
            ctx->pc = 0x416124u;
            goto label_416124;
        }
    }
    ctx->pc = 0x416080u;
label_416080:
    // 0x416080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416084:
    // 0x416084: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x416084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_416088:
    // 0x416088: 0x8c50e418  lw          $s0, -0x1BE8($v0)
    ctx->pc = 0x416088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_41608c:
    // 0x41608c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x41608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_416090:
    // 0x416090: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x416090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416094:
    // 0x416094: 0x8c5200c8  lw          $s2, 0xC8($v0)
    ctx->pc = 0x416094u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_416098:
    // 0x416098: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x416098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_41609c:
    // 0x41609c: 0x924511a5  lbu         $a1, 0x11A5($s2)
    ctx->pc = 0x41609cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4517)));
label_4160a0:
    // 0x4160a0: 0x320f809  jalr        $t9
label_4160a4:
    if (ctx->pc == 0x4160A4u) {
        ctx->pc = 0x4160A4u;
            // 0x4160a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4160A8u;
        goto label_4160a8;
    }
    ctx->pc = 0x4160A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4160A8u);
        ctx->pc = 0x4160A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4160A0u;
            // 0x4160a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4160A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4160A8u; }
            if (ctx->pc != 0x4160A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4160A8u;
label_4160a8:
    // 0x4160a8: 0x924211a9  lbu         $v0, 0x11A9($s2)
    ctx->pc = 0x4160a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4521)));
label_4160ac:
    // 0x4160ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4160b0:
    if (ctx->pc == 0x4160B0u) {
        ctx->pc = 0x4160B0u;
            // 0x4160b0: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x4160B4u;
        goto label_4160b4;
    }
    ctx->pc = 0x4160ACu;
    {
        const bool branch_taken_0x4160ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4160ac) {
            ctx->pc = 0x4160B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4160ACu;
            // 0x4160b0: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4160D0u;
            goto label_4160d0;
        }
    }
    ctx->pc = 0x4160B4u;
label_4160b4:
    // 0x4160b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4160b8:
    // 0x4160b8: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x4160b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_4160bc:
    // 0x4160bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4160bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4160c0:
    // 0x4160c0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4160c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4160c4:
    // 0x4160c4: 0x320f809  jalr        $t9
label_4160c8:
    if (ctx->pc == 0x4160C8u) {
        ctx->pc = 0x4160CCu;
        goto label_4160cc;
    }
    ctx->pc = 0x4160C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4160CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4160CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4160CCu; }
            if (ctx->pc != 0x4160CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4160CCu;
label_4160cc:
    // 0x4160cc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x4160ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_4160d0:
    // 0x4160d0: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x4160d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4160d4:
    // 0x4160d4: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x4160d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4160d8:
    // 0x4160d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4160d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4160dc:
    // 0x4160dc: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x4160dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_4160e0:
    // 0x4160e0: 0x320f809  jalr        $t9
label_4160e4:
    if (ctx->pc == 0x4160E4u) {
        ctx->pc = 0x4160E4u;
            // 0x4160e4: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x4160E8u;
        goto label_4160e8;
    }
    ctx->pc = 0x4160E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4160E8u);
        ctx->pc = 0x4160E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4160E0u;
            // 0x4160e4: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4160E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4160E8u; }
            if (ctx->pc != 0x4160E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4160E8u;
label_4160e8:
    // 0x4160e8: 0xa22000a0  sb          $zero, 0xA0($s1)
    ctx->pc = 0x4160e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
label_4160ec:
    // 0x4160ec: 0x924211a9  lbu         $v0, 0x11A9($s2)
    ctx->pc = 0x4160ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4521)));
label_4160f0:
    // 0x4160f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4160f4:
    if (ctx->pc == 0x4160F4u) {
        ctx->pc = 0x4160F4u;
            // 0x4160f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4160F8u;
        goto label_4160f8;
    }
    ctx->pc = 0x4160F0u;
    {
        const bool branch_taken_0x4160f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4160f0) {
            ctx->pc = 0x4160F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4160F0u;
            // 0x4160f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416114u;
            goto label_416114;
        }
    }
    ctx->pc = 0x4160F8u;
label_4160f8:
    // 0x4160f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4160f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4160fc:
    // 0x4160fc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x4160fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_416100:
    // 0x416100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416104:
    // 0x416104: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x416104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_416108:
    // 0x416108: 0x320f809  jalr        $t9
label_41610c:
    if (ctx->pc == 0x41610Cu) {
        ctx->pc = 0x416110u;
        goto label_416110;
    }
    ctx->pc = 0x416108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416110u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x416110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416110u; }
            if (ctx->pc != 0x416110u) { return; }
        }
        }
    }
    ctx->pc = 0x416110u;
label_416110:
    // 0x416110: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x416110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416114:
    // 0x416114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416118:
    // 0x416118: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x416118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_41611c:
    // 0x41611c: 0x320f809  jalr        $t9
label_416120:
    if (ctx->pc == 0x416120u) {
        ctx->pc = 0x416120u;
            // 0x416120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416124u;
        goto label_416124;
    }
    ctx->pc = 0x41611Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416124u);
        ctx->pc = 0x416120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41611Cu;
            // 0x416120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416124u; }
            if (ctx->pc != 0x416124u) { return; }
        }
        }
    }
    ctx->pc = 0x416124u;
label_416124:
    // 0x416124: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x416124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_416128:
    // 0x416128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x416128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41612c:
    // 0x41612c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41612cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416130:
    // 0x416130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_416134:
    // 0x416134: 0x3e00008  jr          $ra
label_416138:
    if (ctx->pc == 0x416138u) {
        ctx->pc = 0x416138u;
            // 0x416138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x41613Cu;
        goto label_41613c;
    }
    ctx->pc = 0x416134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416134u;
            // 0x416138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41613Cu;
label_41613c:
    // 0x41613c: 0x0  nop
    ctx->pc = 0x41613cu;
    // NOP
label_416140:
    // 0x416140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x416140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_416144:
    // 0x416144: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416148:
    // 0x416148: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x416148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_41614c:
    // 0x41614c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_416150:
    // 0x416150: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x416150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_416154:
    // 0x416154: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x416154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416158:
    // 0x416158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x416158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41615c:
    // 0x41615c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x41615cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_416160:
    // 0x416160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x416160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_416164:
    // 0x416164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x416164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_416168:
    // 0x416168: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x416168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41616c:
    // 0x41616c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41616cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_416170:
    // 0x416170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x416170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416174:
    // 0x416174: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x416174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_416178:
    // 0x416178: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x416178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_41617c:
    // 0x41617c: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x41617cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_416180:
    // 0x416180: 0xc6ac0020  lwc1        $f12, 0x20($s5)
    ctx->pc = 0x416180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_416184:
    // 0x416184: 0xc6ad0024  lwc1        $f13, 0x24($s5)
    ctx->pc = 0x416184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_416188:
    // 0x416188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41618c:
    // 0x41618c: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x41618cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_416190:
    // 0x416190: 0xc6ae0028  lwc1        $f14, 0x28($s5)
    ctx->pc = 0x416190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_416194:
    // 0x416194: 0xc04ce64  jal         func_133990
label_416198:
    if (ctx->pc == 0x416198u) {
        ctx->pc = 0x416198u;
            // 0x416198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41619Cu;
        goto label_41619c;
    }
    ctx->pc = 0x416194u;
    SET_GPR_U32(ctx, 31, 0x41619Cu);
    ctx->pc = 0x416198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416194u;
            // 0x416198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41619Cu; }
        if (ctx->pc != 0x41619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41619Cu; }
        if (ctx->pc != 0x41619Cu) { return; }
    }
    ctx->pc = 0x41619Cu;
label_41619c:
    // 0x41619c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x41619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4161a0:
    // 0x4161a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4161a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4161a4:
    // 0x4161a4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4161a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4161a8:
    // 0x4161a8: 0xc6a20030  lwc1        $f2, 0x30($s5)
    ctx->pc = 0x4161a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4161ac:
    // 0x4161ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4161acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4161b0:
    // 0x4161b0: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x4161b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4161b4:
    // 0x4161b4: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x4161b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4161b8:
    // 0x4161b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4161b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4161bc:
    // 0x4161bc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4161bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4161c0:
    // 0x4161c0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4161c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4161c4:
    // 0x4161c4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4161c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4161c8:
    // 0x4161c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4161c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4161cc:
    // 0x4161cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4161ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4161d0:
    // 0x4161d0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x4161d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4161d4:
    // 0x4161d4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x4161d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4161d8:
    // 0x4161d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x4161d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_4161dc:
    // 0x4161dc: 0xc04ce30  jal         func_1338C0
label_4161e0:
    if (ctx->pc == 0x4161E0u) {
        ctx->pc = 0x4161E0u;
            // 0x4161e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4161E4u;
        goto label_4161e4;
    }
    ctx->pc = 0x4161DCu;
    SET_GPR_U32(ctx, 31, 0x4161E4u);
    ctx->pc = 0x4161E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4161DCu;
            // 0x4161e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4161E4u; }
        if (ctx->pc != 0x4161E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4161E4u; }
        if (ctx->pc != 0x4161E4u) { return; }
    }
    ctx->pc = 0x4161E4u;
label_4161e4:
    // 0x4161e4: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x4161e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4161e8:
    // 0x4161e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4161e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4161ec:
    // 0x4161ec: 0xc6ad0040  lwc1        $f13, 0x40($s5)
    ctx->pc = 0x4161ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4161f0:
    // 0x4161f0: 0xc6ae0044  lwc1        $f14, 0x44($s5)
    ctx->pc = 0x4161f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4161f4:
    // 0x4161f4: 0xc04ce50  jal         func_133940
label_4161f8:
    if (ctx->pc == 0x4161F8u) {
        ctx->pc = 0x4161F8u;
            // 0x4161f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4161FCu;
        goto label_4161fc;
    }
    ctx->pc = 0x4161F4u;
    SET_GPR_U32(ctx, 31, 0x4161FCu);
    ctx->pc = 0x4161F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4161F4u;
            // 0x4161f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4161FCu; }
        if (ctx->pc != 0x4161FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4161FCu; }
        if (ctx->pc != 0x4161FCu) { return; }
    }
    ctx->pc = 0x4161FCu;
label_4161fc:
    // 0x4161fc: 0xc04e738  jal         func_139CE0
label_416200:
    if (ctx->pc == 0x416200u) {
        ctx->pc = 0x416200u;
            // 0x416200: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x416204u;
        goto label_416204;
    }
    ctx->pc = 0x4161FCu;
    SET_GPR_U32(ctx, 31, 0x416204u);
    ctx->pc = 0x416200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4161FCu;
            // 0x416200: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416204u; }
        if (ctx->pc != 0x416204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416204u; }
        if (ctx->pc != 0x416204u) { return; }
    }
    ctx->pc = 0x416204u;
label_416204:
    // 0x416204: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x416204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_416208:
    // 0x416208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41620c:
    // 0x41620c: 0xc04e4a4  jal         func_139290
label_416210:
    if (ctx->pc == 0x416210u) {
        ctx->pc = 0x416210u;
            // 0x416210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416214u;
        goto label_416214;
    }
    ctx->pc = 0x41620Cu;
    SET_GPR_U32(ctx, 31, 0x416214u);
    ctx->pc = 0x416210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41620Cu;
            // 0x416210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416214u; }
        if (ctx->pc != 0x416214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416214u; }
        if (ctx->pc != 0x416214u) { return; }
    }
    ctx->pc = 0x416214u;
label_416214:
    // 0x416214: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x416214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_416218:
    // 0x416218: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x416218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41621c:
    // 0x41621c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x41621cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_416220:
    // 0x416220: 0x320f809  jalr        $t9
label_416224:
    if (ctx->pc == 0x416224u) {
        ctx->pc = 0x416224u;
            // 0x416224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416228u;
        goto label_416228;
    }
    ctx->pc = 0x416220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416228u);
        ctx->pc = 0x416224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416220u;
            // 0x416224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416228u; }
            if (ctx->pc != 0x416228u) { return; }
        }
        }
    }
    ctx->pc = 0x416228u;
label_416228:
    // 0x416228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x416228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41622c:
    // 0x41622c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41622cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_416230:
    // 0x416230: 0x0  nop
    ctx->pc = 0x416230u;
    // NOP
label_416234:
    // 0x416234: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x416234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416238:
    // 0x416238: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41623c:
    if (ctx->pc == 0x41623Cu) {
        ctx->pc = 0x41623Cu;
            // 0x41623c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x416240u;
        goto label_416240;
    }
    ctx->pc = 0x416238u;
    {
        const bool branch_taken_0x416238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x416238) {
            ctx->pc = 0x41623Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416238u;
            // 0x41623c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x416250u;
            goto label_416250;
        }
    }
    ctx->pc = 0x416240u;
label_416240:
    // 0x416240: 0x32820400  andi        $v0, $s4, 0x400
    ctx->pc = 0x416240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
label_416244:
    // 0x416244: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_416248:
    if (ctx->pc == 0x416248u) {
        ctx->pc = 0x41624Cu;
        goto label_41624c;
    }
    ctx->pc = 0x416244u;
    {
        const bool branch_taken_0x416244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416244) {
            ctx->pc = 0x41625Cu;
            goto label_41625c;
        }
    }
    ctx->pc = 0x41624Cu;
label_41624c:
    // 0x41624c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41624cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_416250:
    // 0x416250: 0xc0747dc  jal         func_1D1F70
label_416254:
    if (ctx->pc == 0x416254u) {
        ctx->pc = 0x416258u;
        goto label_416258;
    }
    ctx->pc = 0x416250u;
    SET_GPR_U32(ctx, 31, 0x416258u);
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416258u; }
        if (ctx->pc != 0x416258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416258u; }
        if (ctx->pc != 0x416258u) { return; }
    }
    ctx->pc = 0x416258u;
label_416258:
    // 0x416258: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x416258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41625c:
    // 0x41625c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x41625cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_416260:
    // 0x416260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x416260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_416264:
    // 0x416264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416268:
    // 0x416268: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x416268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41626c:
    // 0x41626c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x41626cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_416270:
    // 0x416270: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x416270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_416274:
    // 0x416274: 0xc04cfcc  jal         func_133F30
label_416278:
    if (ctx->pc == 0x416278u) {
        ctx->pc = 0x416278u;
            // 0x416278: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41627Cu;
        goto label_41627c;
    }
    ctx->pc = 0x416274u;
    SET_GPR_U32(ctx, 31, 0x41627Cu);
    ctx->pc = 0x416278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416274u;
            // 0x416278: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41627Cu; }
        if (ctx->pc != 0x41627Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41627Cu; }
        if (ctx->pc != 0x41627Cu) { return; }
    }
    ctx->pc = 0x41627Cu;
label_41627c:
    // 0x41627c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x41627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_416280:
    // 0x416280: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x416280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_416284:
    // 0x416284: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x416284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_416288:
    // 0x416288: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x416288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41628c:
    // 0x41628c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x41628cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_416290:
    // 0x416290: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x416290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_416294:
    // 0x416294: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x416294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_416298:
    // 0x416298: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_41629c:
    if (ctx->pc == 0x41629Cu) {
        ctx->pc = 0x41629Cu;
            // 0x41629c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4162A0u;
        goto label_4162a0;
    }
    ctx->pc = 0x416298u;
    {
        const bool branch_taken_0x416298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416298) {
            ctx->pc = 0x41629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416298u;
            // 0x41629c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4162B4u;
            goto label_4162b4;
        }
    }
    ctx->pc = 0x4162A0u;
label_4162a0:
    // 0x4162a0: 0xc0bd780  jal         func_2F5E00
label_4162a4:
    if (ctx->pc == 0x4162A4u) {
        ctx->pc = 0x4162A8u;
        goto label_4162a8;
    }
    ctx->pc = 0x4162A0u;
    SET_GPR_U32(ctx, 31, 0x4162A8u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162A8u; }
        if (ctx->pc != 0x4162A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162A8u; }
        if (ctx->pc != 0x4162A8u) { return; }
    }
    ctx->pc = 0x4162A8u;
label_4162a8:
    // 0x4162a8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x4162a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_4162ac:
    // 0x4162ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4162acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4162b0:
    // 0x4162b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4162b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4162b4:
    // 0x4162b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4162b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4162b8:
    // 0x4162b8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4162bc:
    // 0x4162bc: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x4162bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_4162c0:
    // 0x4162c0: 0x2834025  or          $t0, $s4, $v1
    ctx->pc = 0x4162c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_4162c4:
    // 0x4162c4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x4162c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4162c8:
    // 0x4162c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4162cc:
    if (ctx->pc == 0x4162CCu) {
        ctx->pc = 0x4162CCu;
            // 0x4162cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4162D0u;
        goto label_4162d0;
    }
    ctx->pc = 0x4162C8u;
    {
        const bool branch_taken_0x4162c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4162c8) {
            ctx->pc = 0x4162CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4162C8u;
            // 0x4162cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4162ECu;
            goto label_4162ec;
        }
    }
    ctx->pc = 0x4162D0u;
label_4162d0:
    // 0x4162d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4162d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4162d4:
    // 0x4162d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4162d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4162d8:
    // 0x4162d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4162d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4162dc:
    // 0x4162dc: 0xc0538d8  jal         func_14E360
label_4162e0:
    if (ctx->pc == 0x4162E0u) {
        ctx->pc = 0x4162E0u;
            // 0x4162e0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x4162E4u;
        goto label_4162e4;
    }
    ctx->pc = 0x4162DCu;
    SET_GPR_U32(ctx, 31, 0x4162E4u);
    ctx->pc = 0x4162E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4162DCu;
            // 0x4162e0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162E4u; }
        if (ctx->pc != 0x4162E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162E4u; }
        if (ctx->pc != 0x4162E4u) { return; }
    }
    ctx->pc = 0x4162E4u;
label_4162e4:
    // 0x4162e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4162e8:
    if (ctx->pc == 0x4162E8u) {
        ctx->pc = 0x4162E8u;
            // 0x4162e8: 0x32830400  andi        $v1, $s4, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x4162ECu;
        goto label_4162ec;
    }
    ctx->pc = 0x4162E4u;
    {
        const bool branch_taken_0x4162e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4162E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4162E4u;
            // 0x4162e8: 0x32830400  andi        $v1, $s4, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4162e4) {
            ctx->pc = 0x416300u;
            goto label_416300;
        }
    }
    ctx->pc = 0x4162ECu;
label_4162ec:
    // 0x4162ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4162ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4162f0:
    // 0x4162f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4162f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4162f4:
    // 0x4162f4: 0xc050044  jal         func_140110
label_4162f8:
    if (ctx->pc == 0x4162F8u) {
        ctx->pc = 0x4162F8u;
            // 0x4162f8: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x4162FCu;
        goto label_4162fc;
    }
    ctx->pc = 0x4162F4u;
    SET_GPR_U32(ctx, 31, 0x4162FCu);
    ctx->pc = 0x4162F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4162F4u;
            // 0x4162f8: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162FCu; }
        if (ctx->pc != 0x4162FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4162FCu; }
        if (ctx->pc != 0x4162FCu) { return; }
    }
    ctx->pc = 0x4162FCu;
label_4162fc:
    // 0x4162fc: 0x32830400  andi        $v1, $s4, 0x400
    ctx->pc = 0x4162fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
label_416300:
    // 0x416300: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_416304:
    if (ctx->pc == 0x416304u) {
        ctx->pc = 0x416304u;
            // 0x416304: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x416308u;
        goto label_416308;
    }
    ctx->pc = 0x416300u;
    {
        const bool branch_taken_0x416300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x416300) {
            ctx->pc = 0x416304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416300u;
            // 0x416304: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416314u;
            goto label_416314;
        }
    }
    ctx->pc = 0x416308u;
label_416308:
    // 0x416308: 0xc0747d0  jal         func_1D1F40
label_41630c:
    if (ctx->pc == 0x41630Cu) {
        ctx->pc = 0x416310u;
        goto label_416310;
    }
    ctx->pc = 0x416308u;
    SET_GPR_U32(ctx, 31, 0x416310u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416310u; }
        if (ctx->pc != 0x416310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416310u; }
        if (ctx->pc != 0x416310u) { return; }
    }
    ctx->pc = 0x416310u;
label_416310:
    // 0x416310: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x416310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_416314:
    // 0x416314: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x416314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_416318:
    // 0x416318: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x416318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41631c:
    // 0x41631c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41631cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_416320:
    // 0x416320: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x416320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_416324:
    // 0x416324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x416324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_416328:
    // 0x416328: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x416328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41632c:
    // 0x41632c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41632cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416330:
    // 0x416330: 0x3e00008  jr          $ra
label_416334:
    if (ctx->pc == 0x416334u) {
        ctx->pc = 0x416334u;
            // 0x416334: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x416338u;
        goto label_416338;
    }
    ctx->pc = 0x416330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416330u;
            // 0x416334: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416338u;
label_416338:
    // 0x416338: 0x0  nop
    ctx->pc = 0x416338u;
    // NOP
label_41633c:
    // 0x41633c: 0x0  nop
    ctx->pc = 0x41633cu;
    // NOP
label_416340:
    // 0x416340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x416340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_416344:
    // 0x416344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x416344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_416348:
    // 0x416348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x416348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41634c:
    // 0x41634c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_416350:
    // 0x416350: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x416350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_416354:
    // 0x416354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x416354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_416358:
    // 0x416358: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x416358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41635c:
    // 0x41635c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41635cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_416360:
    // 0x416360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416364:
    // 0x416364: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x416364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_416368:
    // 0x416368: 0x320f809  jalr        $t9
label_41636c:
    if (ctx->pc == 0x41636Cu) {
        ctx->pc = 0x41636Cu;
            // 0x41636c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416370u;
        goto label_416370;
    }
    ctx->pc = 0x416368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416370u);
        ctx->pc = 0x41636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416368u;
            // 0x41636c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416370u; }
            if (ctx->pc != 0x416370u) { return; }
        }
        }
    }
    ctx->pc = 0x416370u;
label_416370:
    // 0x416370: 0x8e100070  lw          $s0, 0x70($s0)
    ctx->pc = 0x416370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_416374:
    // 0x416374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x416374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416378:
    // 0x416378: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x416378u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_41637c:
    // 0x41637c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_416380:
    // 0x416380: 0xa20200a0  sb          $v0, 0xA0($s0)
    ctx->pc = 0x416380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 2));
label_416384:
    // 0x416384: 0xc04cce8  jal         func_1333A0
label_416388:
    if (ctx->pc == 0x416388u) {
        ctx->pc = 0x416388u;
            // 0x416388: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x41638Cu;
        goto label_41638c;
    }
    ctx->pc = 0x416384u;
    SET_GPR_U32(ctx, 31, 0x41638Cu);
    ctx->pc = 0x416388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416384u;
            // 0x416388: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41638Cu; }
        if (ctx->pc != 0x41638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41638Cu; }
        if (ctx->pc != 0x41638Cu) { return; }
    }
    ctx->pc = 0x41638Cu;
label_41638c:
    // 0x41638c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x41638cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_416390:
    // 0x416390: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x416390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_416394:
    // 0x416394: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x416394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_416398:
    // 0x416398: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x416398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41639c:
    // 0x41639c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41639cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4163a0:
    // 0x4163a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4163a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4163a4:
    // 0x4163a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4163a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4163a8:
    // 0x4163a8: 0x3e00008  jr          $ra
label_4163ac:
    if (ctx->pc == 0x4163ACu) {
        ctx->pc = 0x4163ACu;
            // 0x4163ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4163B0u;
        goto label_4163b0;
    }
    ctx->pc = 0x4163A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4163ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4163A8u;
            // 0x4163ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4163B0u;
label_4163b0:
    // 0x4163b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4163b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4163b4:
    // 0x4163b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4163b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4163b8:
    // 0x4163b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4163b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4163bc:
    // 0x4163bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4163bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4163c0:
    // 0x4163c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4163c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4163c4:
    // 0x4163c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4163c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4163c8:
    // 0x4163c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4163c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4163cc:
    // 0x4163cc: 0xc461fda0  lwc1        $f1, -0x260($v1)
    ctx->pc = 0x4163ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4163d0:
    // 0x4163d0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4163d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4163d4:
    // 0x4163d4: 0x8ca700c8  lw          $a3, 0xC8($a1)
    ctx->pc = 0x4163d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_4163d8:
    // 0x4163d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4163d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4163dc:
    // 0x4163dc: 0xc460fda8  lwc1        $f0, -0x258($v1)
    ctx->pc = 0x4163dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4163e0:
    // 0x4163e0: 0xc482fda4  lwc1        $f2, -0x25C($a0)
    ctx->pc = 0x4163e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4163e4:
    // 0x4163e4: 0x8cf10550  lw          $s1, 0x550($a3)
    ctx->pc = 0x4163e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1360)));
label_4163e8:
    // 0x4163e8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x4163e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4163ec:
    // 0x4163ec: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4163ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4163f0:
    // 0x4163f0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x4163f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4163f4:
    // 0x4163f4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4163f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4163f8:
    // 0x4163f8: 0xc461fdac  lwc1        $f1, -0x254($v1)
    ctx->pc = 0x4163f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4163fc:
    // 0x4163fc: 0xc4e40dc4  lwc1        $f4, 0xDC4($a3)
    ctx->pc = 0x4163fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_416400:
    // 0x416400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x416400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_416404:
    // 0x416404: 0x0  nop
    ctx->pc = 0x416404u;
    // NOP
label_416408:
    // 0x416408: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x416408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_41640c:
    // 0x41640c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x41640cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416410:
    // 0x416410: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_416414:
    if (ctx->pc == 0x416414u) {
        ctx->pc = 0x416414u;
            // 0x416414: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416418u;
        goto label_416418;
    }
    ctx->pc = 0x416410u;
    {
        const bool branch_taken_0x416410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x416414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416410u;
            // 0x416414: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416410) {
            ctx->pc = 0x41641Cu;
            goto label_41641c;
        }
    }
    ctx->pc = 0x416418u;
label_416418:
    // 0x416418: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x416418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41641c:
    // 0x41641c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_416420:
    if (ctx->pc == 0x416420u) {
        ctx->pc = 0x416420u;
            // 0x416420: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x416424u;
        goto label_416424;
    }
    ctx->pc = 0x41641Cu;
    {
        const bool branch_taken_0x41641c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x41641c) {
            ctx->pc = 0x416420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41641Cu;
            // 0x416420: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416430u;
            goto label_416430;
        }
    }
    ctx->pc = 0x416424u;
label_416424:
    // 0x416424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x416424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_416428:
    // 0x416428: 0x10000007  b           . + 4 + (0x7 << 2)
label_41642c:
    if (ctx->pc == 0x41642Cu) {
        ctx->pc = 0x41642Cu;
            // 0x41642c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x416430u;
        goto label_416430;
    }
    ctx->pc = 0x416428u;
    {
        const bool branch_taken_0x416428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416428u;
            // 0x41642c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416428) {
            ctx->pc = 0x416448u;
            goto label_416448;
        }
    }
    ctx->pc = 0x416430u;
label_416430:
    // 0x416430: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x416430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_416434:
    // 0x416434: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x416434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_416438:
    // 0x416438: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x416438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41643c:
    // 0x41643c: 0x0  nop
    ctx->pc = 0x41643cu;
    // NOP
label_416440:
    // 0x416440: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x416440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_416444:
    // 0x416444: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x416444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_416448:
    // 0x416448: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x416448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_41644c:
    // 0x41644c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x41644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_416450:
    // 0x416450: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x416450u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_416454:
    // 0x416454: 0x8ce40d6c  lw          $a0, 0xD6C($a3)
    ctx->pc = 0x416454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3436)));
label_416458:
    // 0x416458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x416458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41645c:
    // 0x41645c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41645cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_416460:
    // 0x416460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x416460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416464:
    // 0x416464: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x416464u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_416468:
    // 0x416468: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x416468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_41646c:
    // 0x41646c: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x41646cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_416470:
    // 0x416470: 0x46040d02  mul.s       $f20, $f1, $f4
    ctx->pc = 0x416470u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_416474:
    // 0x416474: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x416474u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_416478:
    // 0x416478: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x416478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_41647c:
    // 0x41647c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41647cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416480:
    // 0x416480: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_416484:
    if (ctx->pc == 0x416484u) {
        ctx->pc = 0x416484u;
            // 0x416484: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x416488u;
        goto label_416488;
    }
    ctx->pc = 0x416480u;
    {
        const bool branch_taken_0x416480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416480u;
            // 0x416484: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416480) {
            ctx->pc = 0x41648Cu;
            goto label_41648c;
        }
    }
    ctx->pc = 0x416488u;
label_416488:
    // 0x416488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x416488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41648c:
    // 0x41648c: 0x8224010f  lb          $a0, 0x10F($s1)
    ctx->pc = 0x41648cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_416490:
    // 0x416490: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x416490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_416494:
    // 0x416494: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_416498:
    if (ctx->pc == 0x416498u) {
        ctx->pc = 0x416498u;
            // 0x416498: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x41649Cu;
        goto label_41649c;
    }
    ctx->pc = 0x416494u;
    {
        const bool branch_taken_0x416494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x416498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416494u;
            // 0x416498: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416494) {
            ctx->pc = 0x416524u;
            goto label_416524;
        }
    }
    ctx->pc = 0x41649Cu;
label_41649c:
    // 0x41649c: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x41649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_4164a0:
    // 0x4164a0: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x4164a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_4164a4:
    // 0x4164a4: 0xc4e10de4  lwc1        $f1, 0xDE4($a3)
    ctx->pc = 0x4164a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4164a8:
    // 0x4164a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4164a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4164ac:
    // 0x4164ac: 0x0  nop
    ctx->pc = 0x4164acu;
    // NOP
label_4164b0:
    // 0x4164b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4164b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4164b4:
    // 0x4164b4: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_4164b8:
    if (ctx->pc == 0x4164B8u) {
        ctx->pc = 0x4164B8u;
            // 0x4164b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4164BCu;
        goto label_4164bc;
    }
    ctx->pc = 0x4164B4u;
    {
        const bool branch_taken_0x4164b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4164b4) {
            ctx->pc = 0x4164B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4164B4u;
            // 0x4164b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416528u;
            goto label_416528;
        }
    }
    ctx->pc = 0x4164BCu;
label_4164bc:
    // 0x4164bc: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x4164bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4164c0:
    // 0x4164c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4164c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4164c4:
    // 0x4164c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4164c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_4164c8:
    // 0x4164c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4164c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4164cc:
    // 0x4164cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4164ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4164d0:
    // 0x4164d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4164d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4164d4:
    // 0x4164d4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4164d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4164d8:
    // 0x4164d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4164d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4164dc:
    // 0x4164dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4164dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4164e0:
    // 0x4164e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4164e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4164e4:
    // 0x4164e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4164e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4164e8:
    // 0x4164e8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4164e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4164ec:
    // 0x4164ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4164ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4164f0:
    // 0x4164f0: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4164f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4164f4:
    // 0x4164f4: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4164f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4164f8:
    // 0x4164f8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4164f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4164fc:
    // 0x4164fc: 0x320f809  jalr        $t9
label_416500:
    if (ctx->pc == 0x416500u) {
        ctx->pc = 0x416500u;
            // 0x416500: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x416504u;
        goto label_416504;
    }
    ctx->pc = 0x4164FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416504u);
        ctx->pc = 0x416500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4164FCu;
            // 0x416500: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416504u; }
            if (ctx->pc != 0x416504u) { return; }
        }
        }
    }
    ctx->pc = 0x416504u;
label_416504:
    // 0x416504: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x416504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_416508:
    // 0x416508: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x416508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41650c:
    // 0x41650c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416510:
    // 0x416510: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x416510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_416514:
    // 0x416514: 0x320f809  jalr        $t9
label_416518:
    if (ctx->pc == 0x416518u) {
        ctx->pc = 0x416518u;
            // 0x416518: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41651Cu;
        goto label_41651c;
    }
    ctx->pc = 0x416514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41651Cu);
        ctx->pc = 0x416518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416514u;
            // 0x416518: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41651Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41651Cu; }
            if (ctx->pc != 0x41651Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41651Cu;
label_41651c:
    // 0x41651c: 0x10000025  b           . + 4 + (0x25 << 2)
label_416520:
    if (ctx->pc == 0x416520u) {
        ctx->pc = 0x416520u;
            // 0x416520: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x416524u;
        goto label_416524;
    }
    ctx->pc = 0x41651Cu;
    {
        const bool branch_taken_0x41651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41651Cu;
            // 0x416520: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41651c) {
            ctx->pc = 0x4165B4u;
            goto label_4165b4;
        }
    }
    ctx->pc = 0x416524u;
label_416524:
    // 0x416524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x416524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416528:
    // 0x416528: 0x14860021  bne         $a0, $a2, . + 4 + (0x21 << 2)
label_41652c:
    if (ctx->pc == 0x41652Cu) {
        ctx->pc = 0x416530u;
        goto label_416530;
    }
    ctx->pc = 0x416528u;
    {
        const bool branch_taken_0x416528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x416528) {
            ctx->pc = 0x4165B0u;
            goto label_4165b0;
        }
    }
    ctx->pc = 0x416530u;
label_416530:
    // 0x416530: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x416530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_416534:
    // 0x416534: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x416534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_416538:
    // 0x416538: 0xc4e10de4  lwc1        $f1, 0xDE4($a3)
    ctx->pc = 0x416538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41653c:
    // 0x41653c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41653cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_416540:
    // 0x416540: 0x0  nop
    ctx->pc = 0x416540u;
    // NOP
label_416544:
    // 0x416544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x416544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416548:
    // 0x416548: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_41654c:
    if (ctx->pc == 0x41654Cu) {
        ctx->pc = 0x416550u;
        goto label_416550;
    }
    ctx->pc = 0x416548u;
    {
        const bool branch_taken_0x416548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x416548) {
            ctx->pc = 0x4165B0u;
            goto label_4165b0;
        }
    }
    ctx->pc = 0x416550u;
label_416550:
    // 0x416550: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x416550u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_416554:
    // 0x416554: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x416554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_416558:
    // 0x416558: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x416558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41655c:
    // 0x41655c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x41655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_416560:
    // 0x416560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x416560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_416564:
    // 0x416564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416568:
    // 0x416568: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x416568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41656c:
    // 0x41656c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x41656cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_416570:
    // 0x416570: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x416570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_416574:
    // 0x416574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x416574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_416578:
    // 0x416578: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x416578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_41657c:
    // 0x41657c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x41657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_416580:
    // 0x416580: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x416580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_416584:
    // 0x416584: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x416584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_416588:
    // 0x416588: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x416588u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_41658c:
    // 0x41658c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x41658cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_416590:
    // 0x416590: 0x320f809  jalr        $t9
label_416594:
    if (ctx->pc == 0x416594u) {
        ctx->pc = 0x416594u;
            // 0x416594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416598u;
        goto label_416598;
    }
    ctx->pc = 0x416590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416598u);
        ctx->pc = 0x416594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416590u;
            // 0x416594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416598u; }
            if (ctx->pc != 0x416598u) { return; }
        }
        }
    }
    ctx->pc = 0x416598u;
label_416598:
    // 0x416598: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x416598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_41659c:
    // 0x41659c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x41659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4165a0:
    // 0x4165a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4165a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4165a4:
    // 0x4165a4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4165a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4165a8:
    // 0x4165a8: 0x320f809  jalr        $t9
label_4165ac:
    if (ctx->pc == 0x4165ACu) {
        ctx->pc = 0x4165ACu;
            // 0x4165ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4165B0u;
        goto label_4165b0;
    }
    ctx->pc = 0x4165A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4165B0u);
        ctx->pc = 0x4165ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4165A8u;
            // 0x4165ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4165B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4165B0u; }
            if (ctx->pc != 0x4165B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4165B0u;
label_4165b0:
    // 0x4165b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4165b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4165b4:
    // 0x4165b4: 0x8224010d  lb          $a0, 0x10D($s1)
    ctx->pc = 0x4165b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4165b8:
    // 0x4165b8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x4165b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_4165bc:
    // 0x4165bc: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x4165bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_4165c0:
    // 0x4165c0: 0xa2240114  sb          $a0, 0x114($s1)
    ctx->pc = 0x4165c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 4));
label_4165c4:
    // 0x4165c4: 0xa2230111  sb          $v1, 0x111($s1)
    ctx->pc = 0x4165c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 273), (uint8_t)GPR_U32(ctx, 3));
label_4165c8:
    // 0x4165c8: 0x82240114  lb          $a0, 0x114($s1)
    ctx->pc = 0x4165c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
label_4165cc:
    // 0x4165cc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4165ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_4165d0:
    // 0x4165d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4165d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4165d4:
    // 0x4165d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4165d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4165d8:
    // 0x4165d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4165d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4165dc:
    // 0x4165dc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4165dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4165e0:
    // 0x4165e0: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x4165e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4165e4:
    // 0x4165e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4165e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4165e8:
    // 0x4165e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4165e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4165ec:
    // 0x4165ec: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x4165ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_4165f0:
    // 0x4165f0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4165f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4165f4:
    // 0x4165f4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4165f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4165f8:
    // 0x4165f8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x4165f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_4165fc:
    // 0x4165fc: 0xe6340050  swc1        $f20, 0x50($s1)
    ctx->pc = 0x4165fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_416600:
    // 0x416600: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x416600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_416604:
    // 0x416604: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x416604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_416608:
    // 0x416608: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x416608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41660c:
    // 0x41660c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41660cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_416610:
    // 0x416610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x416610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416614:
    // 0x416614: 0x3e00008  jr          $ra
label_416618:
    if (ctx->pc == 0x416618u) {
        ctx->pc = 0x416618u;
            // 0x416618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41661Cu;
        goto label_41661c;
    }
    ctx->pc = 0x416614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416614u;
            // 0x416618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41661Cu;
label_41661c:
    // 0x41661c: 0x0  nop
    ctx->pc = 0x41661cu;
    // NOP
label_416620:
    // 0x416620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x416620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_416624:
    // 0x416624: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x416624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_416628:
    // 0x416628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41662c:
    // 0x41662c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x41662cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_416630:
    // 0x416630: 0x8ca500c8  lw          $a1, 0xC8($a1)
    ctx->pc = 0x416630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_416634:
    // 0x416634: 0x8ca50550  lw          $a1, 0x550($a1)
    ctx->pc = 0x416634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_416638:
    // 0x416638: 0x80a5010f  lb          $a1, 0x10F($a1)
    ctx->pc = 0x416638u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 271)));
label_41663c:
    // 0x41663c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_416640:
    if (ctx->pc == 0x416640u) {
        ctx->pc = 0x416644u;
        goto label_416644;
    }
    ctx->pc = 0x41663Cu;
    {
        const bool branch_taken_0x41663c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41663c) {
            ctx->pc = 0x416690u;
            goto label_416690;
        }
    }
    ctx->pc = 0x416644u;
label_416644:
    // 0x416644: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x416644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_416648:
    // 0x416648: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
label_41664c:
    if (ctx->pc == 0x41664Cu) {
        ctx->pc = 0x416650u;
        goto label_416650;
    }
    ctx->pc = 0x416648u;
    {
        const bool branch_taken_0x416648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x416648) {
            ctx->pc = 0x416690u;
            goto label_416690;
        }
    }
    ctx->pc = 0x416650u;
label_416650:
    // 0x416650: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x416650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_416654:
    // 0x416654: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_416658:
    if (ctx->pc == 0x416658u) {
        ctx->pc = 0x41665Cu;
        goto label_41665c;
    }
    ctx->pc = 0x416654u;
    {
        const bool branch_taken_0x416654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x416654) {
            ctx->pc = 0x416690u;
            goto label_416690;
        }
    }
    ctx->pc = 0x41665Cu;
label_41665c:
    // 0x41665c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416660:
    // 0x416660: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_416664:
    if (ctx->pc == 0x416664u) {
        ctx->pc = 0x416664u;
            // 0x416664: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x416668u;
        goto label_416668;
    }
    ctx->pc = 0x416660u;
    {
        const bool branch_taken_0x416660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x416660) {
            ctx->pc = 0x416664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416660u;
            // 0x416664: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41667Cu;
            goto label_41667c;
        }
    }
    ctx->pc = 0x416668u;
label_416668:
    // 0x416668: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_41666c:
    if (ctx->pc == 0x41666Cu) {
        ctx->pc = 0x416670u;
        goto label_416670;
    }
    ctx->pc = 0x416668u;
    {
        const bool branch_taken_0x416668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x416668) {
            ctx->pc = 0x416678u;
            goto label_416678;
        }
    }
    ctx->pc = 0x416670u;
label_416670:
    // 0x416670: 0x1000000a  b           . + 4 + (0xA << 2)
label_416674:
    if (ctx->pc == 0x416674u) {
        ctx->pc = 0x416674u;
            // 0x416674: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x416678u;
        goto label_416678;
    }
    ctx->pc = 0x416670u;
    {
        const bool branch_taken_0x416670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416670u;
            // 0x416674: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416670) {
            ctx->pc = 0x41669Cu;
            goto label_41669c;
        }
    }
    ctx->pc = 0x416678u;
label_416678:
    // 0x416678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41667c:
    // 0x41667c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x41667cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_416680:
    // 0x416680: 0x320f809  jalr        $t9
label_416684:
    if (ctx->pc == 0x416684u) {
        ctx->pc = 0x416688u;
        goto label_416688;
    }
    ctx->pc = 0x416680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416688u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x416688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416688u; }
            if (ctx->pc != 0x416688u) { return; }
        }
        }
    }
    ctx->pc = 0x416688u;
label_416688:
    // 0x416688: 0x10000003  b           . + 4 + (0x3 << 2)
label_41668c:
    if (ctx->pc == 0x41668Cu) {
        ctx->pc = 0x416690u;
        goto label_416690;
    }
    ctx->pc = 0x416688u;
    {
        const bool branch_taken_0x416688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x416688) {
            ctx->pc = 0x416698u;
            goto label_416698;
        }
    }
    ctx->pc = 0x416690u;
label_416690:
    // 0x416690: 0xc102abc  jal         func_40AAF0
label_416694:
    if (ctx->pc == 0x416694u) {
        ctx->pc = 0x416698u;
        goto label_416698;
    }
    ctx->pc = 0x416690u;
    SET_GPR_U32(ctx, 31, 0x416698u);
    ctx->pc = 0x40AAF0u;
    if (runtime->hasFunction(0x40AAF0u)) {
        auto targetFn = runtime->lookupFunction(0x40AAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416698u; }
        if (ctx->pc != 0x416698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040AAF0_0x40aaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416698u; }
        if (ctx->pc != 0x416698u) { return; }
    }
    ctx->pc = 0x416698u;
label_416698:
    // 0x416698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41669c:
    // 0x41669c: 0x3e00008  jr          $ra
label_4166a0:
    if (ctx->pc == 0x4166A0u) {
        ctx->pc = 0x4166A0u;
            // 0x4166a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4166A4u;
        goto label_4166a4;
    }
    ctx->pc = 0x41669Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4166A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41669Cu;
            // 0x4166a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4166A4u;
label_4166a4:
    // 0x4166a4: 0x0  nop
    ctx->pc = 0x4166a4u;
    // NOP
label_4166a8:
    // 0x4166a8: 0x0  nop
    ctx->pc = 0x4166a8u;
    // NOP
label_4166ac:
    // 0x4166ac: 0x0  nop
    ctx->pc = 0x4166acu;
    // NOP
label_4166b0:
    // 0x4166b0: 0x3e00008  jr          $ra
label_4166b4:
    if (ctx->pc == 0x4166B4u) {
        ctx->pc = 0x4166B8u;
        goto label_4166b8;
    }
    ctx->pc = 0x4166B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4166B8u;
label_4166b8:
    // 0x4166b8: 0x0  nop
    ctx->pc = 0x4166b8u;
    // NOP
label_4166bc:
    // 0x4166bc: 0x0  nop
    ctx->pc = 0x4166bcu;
    // NOP
label_4166c0:
    // 0x4166c0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4166c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4166c4:
    // 0x4166c4: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4166c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4166c8:
    // 0x4166c8: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x4166c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4166cc:
    // 0x4166cc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4166ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4166d0:
    // 0x4166d0: 0x8cc600c8  lw          $a2, 0xC8($a2)
    ctx->pc = 0x4166d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
label_4166d4:
    // 0x4166d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4166d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4166d8:
    // 0x4166d8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4166d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4166dc:
    // 0x4166dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4166dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4166e0:
    // 0x4166e0: 0xc4c40de4  lwc1        $f4, 0xDE4($a2)
    ctx->pc = 0x4166e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4166e4:
    // 0x4166e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4166e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4166e8:
    // 0x4166e8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x4166e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4166ec:
    // 0x4166ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4166ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4166f0:
    // 0x4166f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4166f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4166f4:
    // 0x4166f4: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x4166f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[4] = ctx->f[3] / ctx->f[2];
label_4166f8:
    // 0x4166f8: 0x0  nop
    ctx->pc = 0x4166f8u;
    // NOP
label_4166fc:
    // 0x4166fc: 0x0  nop
    ctx->pc = 0x4166fcu;
    // NOP
label_416700:
    // 0x416700: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x416700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416704:
    // 0x416704: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_416708:
    if (ctx->pc == 0x416708u) {
        ctx->pc = 0x41670Cu;
        goto label_41670c;
    }
    ctx->pc = 0x416704u;
    {
        const bool branch_taken_0x416704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x416704) {
            ctx->pc = 0x416710u;
            goto label_416710;
        }
    }
    ctx->pc = 0x41670Cu;
label_41670c:
    // 0x41670c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x41670cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416710:
    // 0x416710: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_416714:
    if (ctx->pc == 0x416714u) {
        ctx->pc = 0x416714u;
            // 0x416714: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x416718u;
        goto label_416718;
    }
    ctx->pc = 0x416710u;
    {
        const bool branch_taken_0x416710 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x416710) {
            ctx->pc = 0x416714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416710u;
            // 0x416714: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416724u;
            goto label_416724;
        }
    }
    ctx->pc = 0x416718u;
label_416718:
    // 0x416718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x416718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41671c:
    // 0x41671c: 0x10000007  b           . + 4 + (0x7 << 2)
label_416720:
    if (ctx->pc == 0x416720u) {
        ctx->pc = 0x416720u;
            // 0x416720: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x416724u;
        goto label_416724;
    }
    ctx->pc = 0x41671Cu;
    {
        const bool branch_taken_0x41671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41671Cu;
            // 0x416720: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41671c) {
            ctx->pc = 0x41673Cu;
            goto label_41673c;
        }
    }
    ctx->pc = 0x416724u;
label_416724:
    // 0x416724: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x416724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_416728:
    // 0x416728: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x416728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_41672c:
    // 0x41672c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x41672cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416730:
    // 0x416730: 0x0  nop
    ctx->pc = 0x416730u;
    // NOP
label_416734:
    // 0x416734: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x416734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_416738:
    // 0x416738: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x416738u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_41673c:
    // 0x41673c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x41673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_416740:
    // 0x416740: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x416740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_416744:
    // 0x416744: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x416744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416748:
    // 0x416748: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x416748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_41674c:
    // 0x41674c: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x41674cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416750:
    // 0x416750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x416750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416754:
    // 0x416754: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x416754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416758:
    // 0x416758: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x416758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41675c:
    // 0x41675c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x41675cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_416760:
    // 0x416760: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_416764:
    if (ctx->pc == 0x416764u) {
        ctx->pc = 0x416764u;
            // 0x416764: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x416768u;
        goto label_416768;
    }
    ctx->pc = 0x416760u;
    {
        const bool branch_taken_0x416760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416760u;
            // 0x416764: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416760) {
            ctx->pc = 0x41676Cu;
            goto label_41676c;
        }
    }
    ctx->pc = 0x416768u;
label_416768:
    // 0x416768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x416768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41676c:
    // 0x41676c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_416770:
    if (ctx->pc == 0x416770u) {
        ctx->pc = 0x416770u;
            // 0x416770: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x416774u;
        goto label_416774;
    }
    ctx->pc = 0x41676Cu;
    {
        const bool branch_taken_0x41676c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x41676c) {
            ctx->pc = 0x416770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41676Cu;
            // 0x416770: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416780u;
            goto label_416780;
        }
    }
    ctx->pc = 0x416774u;
label_416774:
    // 0x416774: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x416774u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416778:
    // 0x416778: 0x10000007  b           . + 4 + (0x7 << 2)
label_41677c:
    if (ctx->pc == 0x41677Cu) {
        ctx->pc = 0x41677Cu;
            // 0x41677c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x416780u;
        goto label_416780;
    }
    ctx->pc = 0x416778u;
    {
        const bool branch_taken_0x416778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416778u;
            // 0x41677c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416778) {
            ctx->pc = 0x416798u;
            goto label_416798;
        }
    }
    ctx->pc = 0x416780u;
label_416780:
    // 0x416780: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x416780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_416784:
    // 0x416784: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x416784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_416788:
    // 0x416788: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x416788u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41678c:
    // 0x41678c: 0x0  nop
    ctx->pc = 0x41678cu;
    // NOP
label_416790:
    // 0x416790: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x416790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_416794:
    // 0x416794: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x416794u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_416798:
    // 0x416798: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x416798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_41679c:
    // 0x41679c: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x41679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_4167a0:
    // 0x4167a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4167a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4167a4:
    // 0x4167a4: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x4167a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_4167a8:
    // 0x4167a8: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x4167a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4167ac:
    // 0x4167ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4167acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4167b0:
    // 0x4167b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4167b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4167b4:
    // 0x4167b4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4167b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4167b8:
    // 0x4167b8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x4167b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4167bc:
    // 0x4167bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4167c0:
    if (ctx->pc == 0x4167C0u) {
        ctx->pc = 0x4167C0u;
            // 0x4167c0: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x4167C4u;
        goto label_4167c4;
    }
    ctx->pc = 0x4167BCu;
    {
        const bool branch_taken_0x4167bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4167C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4167BCu;
            // 0x4167c0: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167bc) {
            ctx->pc = 0x4167C8u;
            goto label_4167c8;
        }
    }
    ctx->pc = 0x4167C4u;
label_4167c4:
    // 0x4167c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4167c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4167c8:
    // 0x4167c8: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4167cc:
    if (ctx->pc == 0x4167CCu) {
        ctx->pc = 0x4167CCu;
            // 0x4167cc: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4167D0u;
        goto label_4167d0;
    }
    ctx->pc = 0x4167C8u;
    {
        const bool branch_taken_0x4167c8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4167c8) {
            ctx->pc = 0x4167CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4167C8u;
            // 0x4167cc: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4167DCu;
            goto label_4167dc;
        }
    }
    ctx->pc = 0x4167D0u;
label_4167d0:
    // 0x4167d0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4167d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4167d4:
    // 0x4167d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4167d8:
    if (ctx->pc == 0x4167D8u) {
        ctx->pc = 0x4167D8u;
            // 0x4167d8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4167DCu;
        goto label_4167dc;
    }
    ctx->pc = 0x4167D4u;
    {
        const bool branch_taken_0x4167d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4167D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4167D4u;
            // 0x4167d8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167d4) {
            ctx->pc = 0x4167F4u;
            goto label_4167f4;
        }
    }
    ctx->pc = 0x4167DCu;
label_4167dc:
    // 0x4167dc: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x4167dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4167e0:
    // 0x4167e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4167e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4167e4:
    // 0x4167e4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4167e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4167e8:
    // 0x4167e8: 0x0  nop
    ctx->pc = 0x4167e8u;
    // NOP
label_4167ec:
    // 0x4167ec: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x4167ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4167f0:
    // 0x4167f0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4167f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4167f4:
    // 0x4167f4: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x4167f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
label_4167f8:
    // 0x4167f8: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x4167f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_4167fc:
    // 0x4167fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4167fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416800:
    // 0x416800: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x416800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_416804:
    // 0x416804: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x416804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416808:
    // 0x416808: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x416808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41680c:
    // 0x41680c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x41680cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416810:
    // 0x416810: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x416810u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_416814:
    // 0x416814: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x416814u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_416818:
    // 0x416818: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_41681c:
    if (ctx->pc == 0x41681Cu) {
        ctx->pc = 0x41681Cu;
            // 0x41681c: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x416820u;
        goto label_416820;
    }
    ctx->pc = 0x416818u;
    {
        const bool branch_taken_0x416818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416818u;
            // 0x41681c: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416818) {
            ctx->pc = 0x416824u;
            goto label_416824;
        }
    }
    ctx->pc = 0x416820u;
label_416820:
    // 0x416820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x416820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416824:
    // 0x416824: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_416828:
    if (ctx->pc == 0x416828u) {
        ctx->pc = 0x416828u;
            // 0x416828: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x41682Cu;
        goto label_41682c;
    }
    ctx->pc = 0x416824u;
    {
        const bool branch_taken_0x416824 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x416824) {
            ctx->pc = 0x416828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416824u;
            // 0x416828: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416838u;
            goto label_416838;
        }
    }
    ctx->pc = 0x41682Cu;
label_41682c:
    // 0x41682c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x41682cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416830:
    // 0x416830: 0x10000007  b           . + 4 + (0x7 << 2)
label_416834:
    if (ctx->pc == 0x416834u) {
        ctx->pc = 0x416834u;
            // 0x416834: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x416838u;
        goto label_416838;
    }
    ctx->pc = 0x416830u;
    {
        const bool branch_taken_0x416830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416830u;
            // 0x416834: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416830) {
            ctx->pc = 0x416850u;
            goto label_416850;
        }
    }
    ctx->pc = 0x416838u;
label_416838:
    // 0x416838: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x416838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_41683c:
    // 0x41683c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x41683cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_416840:
    // 0x416840: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x416840u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_416844:
    // 0x416844: 0x0  nop
    ctx->pc = 0x416844u;
    // NOP
label_416848:
    // 0x416848: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x416848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_41684c:
    // 0x41684c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x41684cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_416850:
    // 0x416850: 0x3c034322  lui         $v1, 0x4322
    ctx->pc = 0x416850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
label_416854:
    // 0x416854: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x416854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_416858:
    // 0x416858: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x416858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41685c:
    // 0x41685c: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x41685cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_416860:
    // 0x416860: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x416860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_416864:
    // 0x416864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x416864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416868:
    // 0x416868: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x416868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41686c:
    // 0x41686c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x41686cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_416870:
    // 0x416870: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x416870u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_416874:
    // 0x416874: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_416878:
    if (ctx->pc == 0x416878u) {
        ctx->pc = 0x416878u;
            // 0x416878: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x41687Cu;
        goto label_41687c;
    }
    ctx->pc = 0x416874u;
    {
        const bool branch_taken_0x416874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416874u;
            // 0x416878: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416874) {
            ctx->pc = 0x416880u;
            goto label_416880;
        }
    }
    ctx->pc = 0x41687Cu;
label_41687c:
    // 0x41687c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416880:
    // 0x416880: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_416884:
    if (ctx->pc == 0x416884u) {
        ctx->pc = 0x416884u;
            // 0x416884: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x416888u;
        goto label_416888;
    }
    ctx->pc = 0x416880u;
    {
        const bool branch_taken_0x416880 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x416880) {
            ctx->pc = 0x416884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416880u;
            // 0x416884: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416894u;
            goto label_416894;
        }
    }
    ctx->pc = 0x416888u;
label_416888:
    // 0x416888: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x416888u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41688c:
    // 0x41688c: 0x10000007  b           . + 4 + (0x7 << 2)
label_416890:
    if (ctx->pc == 0x416890u) {
        ctx->pc = 0x416890u;
            // 0x416890: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x416894u;
        goto label_416894;
    }
    ctx->pc = 0x41688Cu;
    {
        const bool branch_taken_0x41688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41688Cu;
            // 0x416890: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41688c) {
            ctx->pc = 0x4168ACu;
            goto label_4168ac;
        }
    }
    ctx->pc = 0x416894u;
label_416894:
    // 0x416894: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x416894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_416898:
    // 0x416898: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x416898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_41689c:
    // 0x41689c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x41689cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4168a0:
    // 0x4168a0: 0x0  nop
    ctx->pc = 0x4168a0u;
    // NOP
label_4168a4:
    // 0x4168a4: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x4168a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_4168a8:
    // 0x4168a8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4168a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4168ac:
    // 0x4168ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4168acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4168b0:
    // 0x4168b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4168b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4168b4:
    // 0x4168b4: 0x3c054140  lui         $a1, 0x4140
    ctx->pc = 0x4168b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16704 << 16));
label_4168b8:
    // 0x4168b8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x4168b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4168bc:
    // 0x4168bc: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x4168bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
label_4168c0:
    // 0x4168c0: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x4168c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_4168c4:
    // 0x4168c4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4168c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4168c8:
    // 0x4168c8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4168c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4168cc:
    // 0x4168cc: 0x3c044336  lui         $a0, 0x4336
    ctx->pc = 0x4168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17206 << 16));
label_4168d0:
    // 0x4168d0: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x4168d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_4168d4:
    // 0x4168d4: 0x34840b60  ori         $a0, $a0, 0xB60
    ctx->pc = 0x4168d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2912);
label_4168d8:
    // 0x4168d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4168d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4168dc:
    // 0x4168dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4168dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4168e0:
    // 0x4168e0: 0x0  nop
    ctx->pc = 0x4168e0u;
    // NOP
label_4168e4:
    // 0x4168e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4168e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4168e8:
    // 0x4168e8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x4168e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4168ec:
    // 0x4168ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4168ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4168f0:
    // 0x4168f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4168f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4168f4:
    // 0x4168f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4168f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4168f8:
    // 0x4168f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4168f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4168fc:
    // 0x4168fc: 0xc48001c8  lwc1        $f0, 0x1C8($a0)
    ctx->pc = 0x4168fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_416900:
    // 0x416900: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x416900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_416904:
    // 0x416904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x416904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_416908:
    // 0x416908: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x416908u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_41690c:
    // 0x41690c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x41690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_416910:
    // 0x416910: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x416910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_416914:
    // 0x416914: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x416914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_416918:
    // 0x416918: 0x3e00008  jr          $ra
label_41691c:
    if (ctx->pc == 0x41691Cu) {
        ctx->pc = 0x41691Cu;
            // 0x41691c: 0xac8301c8  sw          $v1, 0x1C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 3));
        ctx->pc = 0x416920u;
        goto label_416920;
    }
    ctx->pc = 0x416918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416918u;
            // 0x41691c: 0xac8301c8  sw          $v1, 0x1C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416920u;
label_416920:
    // 0x416920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x416920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_416924:
    // 0x416924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_416928:
    // 0x416928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x416928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41692c:
    // 0x41692c: 0xc102f00  jal         func_40BC00
label_416930:
    if (ctx->pc == 0x416930u) {
        ctx->pc = 0x416930u;
            // 0x416930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416934u;
        goto label_416934;
    }
    ctx->pc = 0x41692Cu;
    SET_GPR_U32(ctx, 31, 0x416934u);
    ctx->pc = 0x416930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41692Cu;
            // 0x416930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416934u; }
        if (ctx->pc != 0x416934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040BC00_0x40bc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416934u; }
        if (ctx->pc != 0x416934u) { return; }
    }
    ctx->pc = 0x416934u;
label_416934:
    // 0x416934: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x416934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_416938:
    // 0x416938: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x416938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_41693c:
    // 0x41693c: 0x8c63fd90  lw          $v1, -0x270($v1)
    ctx->pc = 0x41693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966672)));
label_416940:
    // 0x416940: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x416940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_416944:
    // 0x416944: 0x602027  not         $a0, $v1
    ctx->pc = 0x416944u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_416948:
    // 0x416948: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x416948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_41694c:
    // 0x41694c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x41694cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_416950:
    // 0x416950: 0xaca301b0  sw          $v1, 0x1B0($a1)
    ctx->pc = 0x416950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 432), GPR_U32(ctx, 3));
label_416954:
    // 0x416954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_416958:
    // 0x416958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41695c:
    // 0x41695c: 0x3e00008  jr          $ra
label_416960:
    if (ctx->pc == 0x416960u) {
        ctx->pc = 0x416960u;
            // 0x416960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x416964u;
        goto label_416964;
    }
    ctx->pc = 0x41695Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41695Cu;
            // 0x416960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416964u;
label_416964:
    // 0x416964: 0x0  nop
    ctx->pc = 0x416964u;
    // NOP
label_416968:
    // 0x416968: 0x0  nop
    ctx->pc = 0x416968u;
    // NOP
label_41696c:
    // 0x41696c: 0x0  nop
    ctx->pc = 0x41696cu;
    // NOP
label_416970:
    // 0x416970: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x416970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_416974:
    // 0x416974: 0x24830a50  addiu       $v1, $a0, 0xA50
    ctx->pc = 0x416974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_416978:
    // 0x416978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x416978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41697c:
    // 0x41697c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_416980:
    // 0x416980: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x416980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_416984:
    // 0x416984: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x416984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_416988:
    // 0x416988: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x416988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_41698c:
    // 0x41698c: 0x3200008  jr          $t9
label_416990:
    if (ctx->pc == 0x416990u) {
        ctx->pc = 0x416994u;
        goto label_416994;
    }
    ctx->pc = 0x41698Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416994u;
label_416994:
    // 0x416994: 0x0  nop
    ctx->pc = 0x416994u;
    // NOP
label_416998:
    // 0x416998: 0x0  nop
    ctx->pc = 0x416998u;
    // NOP
label_41699c:
    // 0x41699c: 0x0  nop
    ctx->pc = 0x41699cu;
    // NOP
label_4169a0:
    // 0x4169a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4169a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4169a4:
    // 0x4169a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4169a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4169a8:
    // 0x4169a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4169a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4169ac:
    // 0x4169ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4169acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4169b0:
    // 0x4169b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4169b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4169b4:
    // 0x4169b4: 0xc0eec24  jal         func_3BB090
label_4169b8:
    if (ctx->pc == 0x4169B8u) {
        ctx->pc = 0x4169B8u;
            // 0x4169b8: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->pc = 0x4169BCu;
        goto label_4169bc;
    }
    ctx->pc = 0x4169B4u;
    SET_GPR_U32(ctx, 31, 0x4169BCu);
    ctx->pc = 0x4169B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4169B4u;
            // 0x4169b8: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4169BCu; }
        if (ctx->pc != 0x4169BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4169BCu; }
        if (ctx->pc != 0x4169BCu) { return; }
    }
    ctx->pc = 0x4169BCu;
label_4169bc:
    // 0x4169bc: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x4169bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_4169c0:
    // 0x4169c0: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x4169c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_4169c4:
    // 0x4169c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4169c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4169c8:
    // 0x4169c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4169c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4169cc:
    // 0x4169cc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4169ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4169d0:
    // 0x4169d0: 0xc0f0f84  jal         func_3C3E10
label_4169d4:
    if (ctx->pc == 0x4169D4u) {
        ctx->pc = 0x4169D4u;
            // 0x4169d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4169D8u;
        goto label_4169d8;
    }
    ctx->pc = 0x4169D0u;
    SET_GPR_U32(ctx, 31, 0x4169D8u);
    ctx->pc = 0x4169D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4169D0u;
            // 0x4169d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4169D8u; }
        if (ctx->pc != 0x4169D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4169D8u; }
        if (ctx->pc != 0x4169D8u) { return; }
    }
    ctx->pc = 0x4169D8u;
label_4169d8:
    // 0x4169d8: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x4169d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
label_4169dc:
    // 0x4169dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4169dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4169e0:
    // 0x4169e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4169e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4169e4:
    // 0x4169e4: 0x3e00008  jr          $ra
label_4169e8:
    if (ctx->pc == 0x4169E8u) {
        ctx->pc = 0x4169E8u;
            // 0x4169e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4169ECu;
        goto label_4169ec;
    }
    ctx->pc = 0x4169E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4169E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4169E4u;
            // 0x4169e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4169ECu;
label_4169ec:
    // 0x4169ec: 0x0  nop
    ctx->pc = 0x4169ecu;
    // NOP
label_4169f0:
    // 0x4169f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4169f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4169f4:
    // 0x4169f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4169f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4169f8:
    // 0x4169f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4169f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4169fc:
    // 0x4169fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4169fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_416a00:
    // 0x416a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416a04:
    // 0x416a04: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_416a08:
    if (ctx->pc == 0x416A08u) {
        ctx->pc = 0x416A08u;
            // 0x416a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416A0Cu;
        goto label_416a0c;
    }
    ctx->pc = 0x416A04u;
    {
        const bool branch_taken_0x416a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416A04u;
            // 0x416a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a04) {
            ctx->pc = 0x416A60u;
            goto label_416a60;
        }
    }
    ctx->pc = 0x416A0Cu;
label_416a0c:
    // 0x416a0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x416a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_416a10:
    // 0x416a10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x416a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_416a14:
    // 0x416a14: 0x2463b400  addiu       $v1, $v1, -0x4C00
    ctx->pc = 0x416a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947840));
label_416a18:
    // 0x416a18: 0x2442b438  addiu       $v0, $v0, -0x4BC8
    ctx->pc = 0x416a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947896));
label_416a1c:
    // 0x416a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x416a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_416a20:
    // 0x416a20: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_416a24:
    if (ctx->pc == 0x416A24u) {
        ctx->pc = 0x416A24u;
            // 0x416a24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x416A28u;
        goto label_416a28;
    }
    ctx->pc = 0x416A20u;
    {
        const bool branch_taken_0x416a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416A20u;
            // 0x416a24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a20) {
            ctx->pc = 0x416A48u;
            goto label_416a48;
        }
    }
    ctx->pc = 0x416A28u;
label_416a28:
    // 0x416a28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x416a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_416a2c:
    // 0x416a2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x416a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_416a30:
    // 0x416a30: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x416a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
label_416a34:
    // 0x416a34: 0x2442b4e8  addiu       $v0, $v0, -0x4B18
    ctx->pc = 0x416a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
label_416a38:
    // 0x416a38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x416a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_416a3c:
    // 0x416a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x416a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416a40:
    // 0x416a40: 0xc105aa0  jal         func_416A80
label_416a44:
    if (ctx->pc == 0x416A44u) {
        ctx->pc = 0x416A44u;
            // 0x416a44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x416A48u;
        goto label_416a48;
    }
    ctx->pc = 0x416A40u;
    SET_GPR_U32(ctx, 31, 0x416A48u);
    ctx->pc = 0x416A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416A40u;
            // 0x416a44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x416A80u;
    if (runtime->hasFunction(0x416A80u)) {
        auto targetFn = runtime->lookupFunction(0x416A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416A48u; }
        if (ctx->pc != 0x416A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00416A80_0x416a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416A48u; }
        if (ctx->pc != 0x416A48u) { return; }
    }
    ctx->pc = 0x416A48u;
label_416a48:
    // 0x416a48: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x416a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_416a4c:
    // 0x416a4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x416a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_416a50:
    // 0x416a50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_416a54:
    if (ctx->pc == 0x416A54u) {
        ctx->pc = 0x416A54u;
            // 0x416a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416A58u;
        goto label_416a58;
    }
    ctx->pc = 0x416A50u;
    {
        const bool branch_taken_0x416a50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x416a50) {
            ctx->pc = 0x416A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416A50u;
            // 0x416a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416A64u;
            goto label_416a64;
        }
    }
    ctx->pc = 0x416A58u;
label_416a58:
    // 0x416a58: 0xc0400a8  jal         func_1002A0
label_416a5c:
    if (ctx->pc == 0x416A5Cu) {
        ctx->pc = 0x416A5Cu;
            // 0x416a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416A60u;
        goto label_416a60;
    }
    ctx->pc = 0x416A58u;
    SET_GPR_U32(ctx, 31, 0x416A60u);
    ctx->pc = 0x416A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416A58u;
            // 0x416a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416A60u; }
        if (ctx->pc != 0x416A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416A60u; }
        if (ctx->pc != 0x416A60u) { return; }
    }
    ctx->pc = 0x416A60u;
label_416a60:
    // 0x416a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x416a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416a64:
    // 0x416a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x416a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_416a68:
    // 0x416a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416a6c:
    // 0x416a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_416a70:
    // 0x416a70: 0x3e00008  jr          $ra
label_416a74:
    if (ctx->pc == 0x416A74u) {
        ctx->pc = 0x416A74u;
            // 0x416a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x416A78u;
        goto label_416a78;
    }
    ctx->pc = 0x416A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416A70u;
            // 0x416a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416A78u;
label_416a78:
    // 0x416a78: 0x0  nop
    ctx->pc = 0x416a78u;
    // NOP
label_416a7c:
    // 0x416a7c: 0x0  nop
    ctx->pc = 0x416a7cu;
    // NOP
}
