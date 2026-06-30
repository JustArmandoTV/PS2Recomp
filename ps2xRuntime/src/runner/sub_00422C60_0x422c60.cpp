#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00422C60
// Address: 0x422c60 - 0x423970
void sub_00422C60_0x422c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422C60_0x422c60");
#endif

    switch (ctx->pc) {
        case 0x422c60u: goto label_422c60;
        case 0x422c64u: goto label_422c64;
        case 0x422c68u: goto label_422c68;
        case 0x422c6cu: goto label_422c6c;
        case 0x422c70u: goto label_422c70;
        case 0x422c74u: goto label_422c74;
        case 0x422c78u: goto label_422c78;
        case 0x422c7cu: goto label_422c7c;
        case 0x422c80u: goto label_422c80;
        case 0x422c84u: goto label_422c84;
        case 0x422c88u: goto label_422c88;
        case 0x422c8cu: goto label_422c8c;
        case 0x422c90u: goto label_422c90;
        case 0x422c94u: goto label_422c94;
        case 0x422c98u: goto label_422c98;
        case 0x422c9cu: goto label_422c9c;
        case 0x422ca0u: goto label_422ca0;
        case 0x422ca4u: goto label_422ca4;
        case 0x422ca8u: goto label_422ca8;
        case 0x422cacu: goto label_422cac;
        case 0x422cb0u: goto label_422cb0;
        case 0x422cb4u: goto label_422cb4;
        case 0x422cb8u: goto label_422cb8;
        case 0x422cbcu: goto label_422cbc;
        case 0x422cc0u: goto label_422cc0;
        case 0x422cc4u: goto label_422cc4;
        case 0x422cc8u: goto label_422cc8;
        case 0x422cccu: goto label_422ccc;
        case 0x422cd0u: goto label_422cd0;
        case 0x422cd4u: goto label_422cd4;
        case 0x422cd8u: goto label_422cd8;
        case 0x422cdcu: goto label_422cdc;
        case 0x422ce0u: goto label_422ce0;
        case 0x422ce4u: goto label_422ce4;
        case 0x422ce8u: goto label_422ce8;
        case 0x422cecu: goto label_422cec;
        case 0x422cf0u: goto label_422cf0;
        case 0x422cf4u: goto label_422cf4;
        case 0x422cf8u: goto label_422cf8;
        case 0x422cfcu: goto label_422cfc;
        case 0x422d00u: goto label_422d00;
        case 0x422d04u: goto label_422d04;
        case 0x422d08u: goto label_422d08;
        case 0x422d0cu: goto label_422d0c;
        case 0x422d10u: goto label_422d10;
        case 0x422d14u: goto label_422d14;
        case 0x422d18u: goto label_422d18;
        case 0x422d1cu: goto label_422d1c;
        case 0x422d20u: goto label_422d20;
        case 0x422d24u: goto label_422d24;
        case 0x422d28u: goto label_422d28;
        case 0x422d2cu: goto label_422d2c;
        case 0x422d30u: goto label_422d30;
        case 0x422d34u: goto label_422d34;
        case 0x422d38u: goto label_422d38;
        case 0x422d3cu: goto label_422d3c;
        case 0x422d40u: goto label_422d40;
        case 0x422d44u: goto label_422d44;
        case 0x422d48u: goto label_422d48;
        case 0x422d4cu: goto label_422d4c;
        case 0x422d50u: goto label_422d50;
        case 0x422d54u: goto label_422d54;
        case 0x422d58u: goto label_422d58;
        case 0x422d5cu: goto label_422d5c;
        case 0x422d60u: goto label_422d60;
        case 0x422d64u: goto label_422d64;
        case 0x422d68u: goto label_422d68;
        case 0x422d6cu: goto label_422d6c;
        case 0x422d70u: goto label_422d70;
        case 0x422d74u: goto label_422d74;
        case 0x422d78u: goto label_422d78;
        case 0x422d7cu: goto label_422d7c;
        case 0x422d80u: goto label_422d80;
        case 0x422d84u: goto label_422d84;
        case 0x422d88u: goto label_422d88;
        case 0x422d8cu: goto label_422d8c;
        case 0x422d90u: goto label_422d90;
        case 0x422d94u: goto label_422d94;
        case 0x422d98u: goto label_422d98;
        case 0x422d9cu: goto label_422d9c;
        case 0x422da0u: goto label_422da0;
        case 0x422da4u: goto label_422da4;
        case 0x422da8u: goto label_422da8;
        case 0x422dacu: goto label_422dac;
        case 0x422db0u: goto label_422db0;
        case 0x422db4u: goto label_422db4;
        case 0x422db8u: goto label_422db8;
        case 0x422dbcu: goto label_422dbc;
        case 0x422dc0u: goto label_422dc0;
        case 0x422dc4u: goto label_422dc4;
        case 0x422dc8u: goto label_422dc8;
        case 0x422dccu: goto label_422dcc;
        case 0x422dd0u: goto label_422dd0;
        case 0x422dd4u: goto label_422dd4;
        case 0x422dd8u: goto label_422dd8;
        case 0x422ddcu: goto label_422ddc;
        case 0x422de0u: goto label_422de0;
        case 0x422de4u: goto label_422de4;
        case 0x422de8u: goto label_422de8;
        case 0x422decu: goto label_422dec;
        case 0x422df0u: goto label_422df0;
        case 0x422df4u: goto label_422df4;
        case 0x422df8u: goto label_422df8;
        case 0x422dfcu: goto label_422dfc;
        case 0x422e00u: goto label_422e00;
        case 0x422e04u: goto label_422e04;
        case 0x422e08u: goto label_422e08;
        case 0x422e0cu: goto label_422e0c;
        case 0x422e10u: goto label_422e10;
        case 0x422e14u: goto label_422e14;
        case 0x422e18u: goto label_422e18;
        case 0x422e1cu: goto label_422e1c;
        case 0x422e20u: goto label_422e20;
        case 0x422e24u: goto label_422e24;
        case 0x422e28u: goto label_422e28;
        case 0x422e2cu: goto label_422e2c;
        case 0x422e30u: goto label_422e30;
        case 0x422e34u: goto label_422e34;
        case 0x422e38u: goto label_422e38;
        case 0x422e3cu: goto label_422e3c;
        case 0x422e40u: goto label_422e40;
        case 0x422e44u: goto label_422e44;
        case 0x422e48u: goto label_422e48;
        case 0x422e4cu: goto label_422e4c;
        case 0x422e50u: goto label_422e50;
        case 0x422e54u: goto label_422e54;
        case 0x422e58u: goto label_422e58;
        case 0x422e5cu: goto label_422e5c;
        case 0x422e60u: goto label_422e60;
        case 0x422e64u: goto label_422e64;
        case 0x422e68u: goto label_422e68;
        case 0x422e6cu: goto label_422e6c;
        case 0x422e70u: goto label_422e70;
        case 0x422e74u: goto label_422e74;
        case 0x422e78u: goto label_422e78;
        case 0x422e7cu: goto label_422e7c;
        case 0x422e80u: goto label_422e80;
        case 0x422e84u: goto label_422e84;
        case 0x422e88u: goto label_422e88;
        case 0x422e8cu: goto label_422e8c;
        case 0x422e90u: goto label_422e90;
        case 0x422e94u: goto label_422e94;
        case 0x422e98u: goto label_422e98;
        case 0x422e9cu: goto label_422e9c;
        case 0x422ea0u: goto label_422ea0;
        case 0x422ea4u: goto label_422ea4;
        case 0x422ea8u: goto label_422ea8;
        case 0x422eacu: goto label_422eac;
        case 0x422eb0u: goto label_422eb0;
        case 0x422eb4u: goto label_422eb4;
        case 0x422eb8u: goto label_422eb8;
        case 0x422ebcu: goto label_422ebc;
        case 0x422ec0u: goto label_422ec0;
        case 0x422ec4u: goto label_422ec4;
        case 0x422ec8u: goto label_422ec8;
        case 0x422eccu: goto label_422ecc;
        case 0x422ed0u: goto label_422ed0;
        case 0x422ed4u: goto label_422ed4;
        case 0x422ed8u: goto label_422ed8;
        case 0x422edcu: goto label_422edc;
        case 0x422ee0u: goto label_422ee0;
        case 0x422ee4u: goto label_422ee4;
        case 0x422ee8u: goto label_422ee8;
        case 0x422eecu: goto label_422eec;
        case 0x422ef0u: goto label_422ef0;
        case 0x422ef4u: goto label_422ef4;
        case 0x422ef8u: goto label_422ef8;
        case 0x422efcu: goto label_422efc;
        case 0x422f00u: goto label_422f00;
        case 0x422f04u: goto label_422f04;
        case 0x422f08u: goto label_422f08;
        case 0x422f0cu: goto label_422f0c;
        case 0x422f10u: goto label_422f10;
        case 0x422f14u: goto label_422f14;
        case 0x422f18u: goto label_422f18;
        case 0x422f1cu: goto label_422f1c;
        case 0x422f20u: goto label_422f20;
        case 0x422f24u: goto label_422f24;
        case 0x422f28u: goto label_422f28;
        case 0x422f2cu: goto label_422f2c;
        case 0x422f30u: goto label_422f30;
        case 0x422f34u: goto label_422f34;
        case 0x422f38u: goto label_422f38;
        case 0x422f3cu: goto label_422f3c;
        case 0x422f40u: goto label_422f40;
        case 0x422f44u: goto label_422f44;
        case 0x422f48u: goto label_422f48;
        case 0x422f4cu: goto label_422f4c;
        case 0x422f50u: goto label_422f50;
        case 0x422f54u: goto label_422f54;
        case 0x422f58u: goto label_422f58;
        case 0x422f5cu: goto label_422f5c;
        case 0x422f60u: goto label_422f60;
        case 0x422f64u: goto label_422f64;
        case 0x422f68u: goto label_422f68;
        case 0x422f6cu: goto label_422f6c;
        case 0x422f70u: goto label_422f70;
        case 0x422f74u: goto label_422f74;
        case 0x422f78u: goto label_422f78;
        case 0x422f7cu: goto label_422f7c;
        case 0x422f80u: goto label_422f80;
        case 0x422f84u: goto label_422f84;
        case 0x422f88u: goto label_422f88;
        case 0x422f8cu: goto label_422f8c;
        case 0x422f90u: goto label_422f90;
        case 0x422f94u: goto label_422f94;
        case 0x422f98u: goto label_422f98;
        case 0x422f9cu: goto label_422f9c;
        case 0x422fa0u: goto label_422fa0;
        case 0x422fa4u: goto label_422fa4;
        case 0x422fa8u: goto label_422fa8;
        case 0x422facu: goto label_422fac;
        case 0x422fb0u: goto label_422fb0;
        case 0x422fb4u: goto label_422fb4;
        case 0x422fb8u: goto label_422fb8;
        case 0x422fbcu: goto label_422fbc;
        case 0x422fc0u: goto label_422fc0;
        case 0x422fc4u: goto label_422fc4;
        case 0x422fc8u: goto label_422fc8;
        case 0x422fccu: goto label_422fcc;
        case 0x422fd0u: goto label_422fd0;
        case 0x422fd4u: goto label_422fd4;
        case 0x422fd8u: goto label_422fd8;
        case 0x422fdcu: goto label_422fdc;
        case 0x422fe0u: goto label_422fe0;
        case 0x422fe4u: goto label_422fe4;
        case 0x422fe8u: goto label_422fe8;
        case 0x422fecu: goto label_422fec;
        case 0x422ff0u: goto label_422ff0;
        case 0x422ff4u: goto label_422ff4;
        case 0x422ff8u: goto label_422ff8;
        case 0x422ffcu: goto label_422ffc;
        case 0x423000u: goto label_423000;
        case 0x423004u: goto label_423004;
        case 0x423008u: goto label_423008;
        case 0x42300cu: goto label_42300c;
        case 0x423010u: goto label_423010;
        case 0x423014u: goto label_423014;
        case 0x423018u: goto label_423018;
        case 0x42301cu: goto label_42301c;
        case 0x423020u: goto label_423020;
        case 0x423024u: goto label_423024;
        case 0x423028u: goto label_423028;
        case 0x42302cu: goto label_42302c;
        case 0x423030u: goto label_423030;
        case 0x423034u: goto label_423034;
        case 0x423038u: goto label_423038;
        case 0x42303cu: goto label_42303c;
        case 0x423040u: goto label_423040;
        case 0x423044u: goto label_423044;
        case 0x423048u: goto label_423048;
        case 0x42304cu: goto label_42304c;
        case 0x423050u: goto label_423050;
        case 0x423054u: goto label_423054;
        case 0x423058u: goto label_423058;
        case 0x42305cu: goto label_42305c;
        case 0x423060u: goto label_423060;
        case 0x423064u: goto label_423064;
        case 0x423068u: goto label_423068;
        case 0x42306cu: goto label_42306c;
        case 0x423070u: goto label_423070;
        case 0x423074u: goto label_423074;
        case 0x423078u: goto label_423078;
        case 0x42307cu: goto label_42307c;
        case 0x423080u: goto label_423080;
        case 0x423084u: goto label_423084;
        case 0x423088u: goto label_423088;
        case 0x42308cu: goto label_42308c;
        case 0x423090u: goto label_423090;
        case 0x423094u: goto label_423094;
        case 0x423098u: goto label_423098;
        case 0x42309cu: goto label_42309c;
        case 0x4230a0u: goto label_4230a0;
        case 0x4230a4u: goto label_4230a4;
        case 0x4230a8u: goto label_4230a8;
        case 0x4230acu: goto label_4230ac;
        case 0x4230b0u: goto label_4230b0;
        case 0x4230b4u: goto label_4230b4;
        case 0x4230b8u: goto label_4230b8;
        case 0x4230bcu: goto label_4230bc;
        case 0x4230c0u: goto label_4230c0;
        case 0x4230c4u: goto label_4230c4;
        case 0x4230c8u: goto label_4230c8;
        case 0x4230ccu: goto label_4230cc;
        case 0x4230d0u: goto label_4230d0;
        case 0x4230d4u: goto label_4230d4;
        case 0x4230d8u: goto label_4230d8;
        case 0x4230dcu: goto label_4230dc;
        case 0x4230e0u: goto label_4230e0;
        case 0x4230e4u: goto label_4230e4;
        case 0x4230e8u: goto label_4230e8;
        case 0x4230ecu: goto label_4230ec;
        case 0x4230f0u: goto label_4230f0;
        case 0x4230f4u: goto label_4230f4;
        case 0x4230f8u: goto label_4230f8;
        case 0x4230fcu: goto label_4230fc;
        case 0x423100u: goto label_423100;
        case 0x423104u: goto label_423104;
        case 0x423108u: goto label_423108;
        case 0x42310cu: goto label_42310c;
        case 0x423110u: goto label_423110;
        case 0x423114u: goto label_423114;
        case 0x423118u: goto label_423118;
        case 0x42311cu: goto label_42311c;
        case 0x423120u: goto label_423120;
        case 0x423124u: goto label_423124;
        case 0x423128u: goto label_423128;
        case 0x42312cu: goto label_42312c;
        case 0x423130u: goto label_423130;
        case 0x423134u: goto label_423134;
        case 0x423138u: goto label_423138;
        case 0x42313cu: goto label_42313c;
        case 0x423140u: goto label_423140;
        case 0x423144u: goto label_423144;
        case 0x423148u: goto label_423148;
        case 0x42314cu: goto label_42314c;
        case 0x423150u: goto label_423150;
        case 0x423154u: goto label_423154;
        case 0x423158u: goto label_423158;
        case 0x42315cu: goto label_42315c;
        case 0x423160u: goto label_423160;
        case 0x423164u: goto label_423164;
        case 0x423168u: goto label_423168;
        case 0x42316cu: goto label_42316c;
        case 0x423170u: goto label_423170;
        case 0x423174u: goto label_423174;
        case 0x423178u: goto label_423178;
        case 0x42317cu: goto label_42317c;
        case 0x423180u: goto label_423180;
        case 0x423184u: goto label_423184;
        case 0x423188u: goto label_423188;
        case 0x42318cu: goto label_42318c;
        case 0x423190u: goto label_423190;
        case 0x423194u: goto label_423194;
        case 0x423198u: goto label_423198;
        case 0x42319cu: goto label_42319c;
        case 0x4231a0u: goto label_4231a0;
        case 0x4231a4u: goto label_4231a4;
        case 0x4231a8u: goto label_4231a8;
        case 0x4231acu: goto label_4231ac;
        case 0x4231b0u: goto label_4231b0;
        case 0x4231b4u: goto label_4231b4;
        case 0x4231b8u: goto label_4231b8;
        case 0x4231bcu: goto label_4231bc;
        case 0x4231c0u: goto label_4231c0;
        case 0x4231c4u: goto label_4231c4;
        case 0x4231c8u: goto label_4231c8;
        case 0x4231ccu: goto label_4231cc;
        case 0x4231d0u: goto label_4231d0;
        case 0x4231d4u: goto label_4231d4;
        case 0x4231d8u: goto label_4231d8;
        case 0x4231dcu: goto label_4231dc;
        case 0x4231e0u: goto label_4231e0;
        case 0x4231e4u: goto label_4231e4;
        case 0x4231e8u: goto label_4231e8;
        case 0x4231ecu: goto label_4231ec;
        case 0x4231f0u: goto label_4231f0;
        case 0x4231f4u: goto label_4231f4;
        case 0x4231f8u: goto label_4231f8;
        case 0x4231fcu: goto label_4231fc;
        case 0x423200u: goto label_423200;
        case 0x423204u: goto label_423204;
        case 0x423208u: goto label_423208;
        case 0x42320cu: goto label_42320c;
        case 0x423210u: goto label_423210;
        case 0x423214u: goto label_423214;
        case 0x423218u: goto label_423218;
        case 0x42321cu: goto label_42321c;
        case 0x423220u: goto label_423220;
        case 0x423224u: goto label_423224;
        case 0x423228u: goto label_423228;
        case 0x42322cu: goto label_42322c;
        case 0x423230u: goto label_423230;
        case 0x423234u: goto label_423234;
        case 0x423238u: goto label_423238;
        case 0x42323cu: goto label_42323c;
        case 0x423240u: goto label_423240;
        case 0x423244u: goto label_423244;
        case 0x423248u: goto label_423248;
        case 0x42324cu: goto label_42324c;
        case 0x423250u: goto label_423250;
        case 0x423254u: goto label_423254;
        case 0x423258u: goto label_423258;
        case 0x42325cu: goto label_42325c;
        case 0x423260u: goto label_423260;
        case 0x423264u: goto label_423264;
        case 0x423268u: goto label_423268;
        case 0x42326cu: goto label_42326c;
        case 0x423270u: goto label_423270;
        case 0x423274u: goto label_423274;
        case 0x423278u: goto label_423278;
        case 0x42327cu: goto label_42327c;
        case 0x423280u: goto label_423280;
        case 0x423284u: goto label_423284;
        case 0x423288u: goto label_423288;
        case 0x42328cu: goto label_42328c;
        case 0x423290u: goto label_423290;
        case 0x423294u: goto label_423294;
        case 0x423298u: goto label_423298;
        case 0x42329cu: goto label_42329c;
        case 0x4232a0u: goto label_4232a0;
        case 0x4232a4u: goto label_4232a4;
        case 0x4232a8u: goto label_4232a8;
        case 0x4232acu: goto label_4232ac;
        case 0x4232b0u: goto label_4232b0;
        case 0x4232b4u: goto label_4232b4;
        case 0x4232b8u: goto label_4232b8;
        case 0x4232bcu: goto label_4232bc;
        case 0x4232c0u: goto label_4232c0;
        case 0x4232c4u: goto label_4232c4;
        case 0x4232c8u: goto label_4232c8;
        case 0x4232ccu: goto label_4232cc;
        case 0x4232d0u: goto label_4232d0;
        case 0x4232d4u: goto label_4232d4;
        case 0x4232d8u: goto label_4232d8;
        case 0x4232dcu: goto label_4232dc;
        case 0x4232e0u: goto label_4232e0;
        case 0x4232e4u: goto label_4232e4;
        case 0x4232e8u: goto label_4232e8;
        case 0x4232ecu: goto label_4232ec;
        case 0x4232f0u: goto label_4232f0;
        case 0x4232f4u: goto label_4232f4;
        case 0x4232f8u: goto label_4232f8;
        case 0x4232fcu: goto label_4232fc;
        case 0x423300u: goto label_423300;
        case 0x423304u: goto label_423304;
        case 0x423308u: goto label_423308;
        case 0x42330cu: goto label_42330c;
        case 0x423310u: goto label_423310;
        case 0x423314u: goto label_423314;
        case 0x423318u: goto label_423318;
        case 0x42331cu: goto label_42331c;
        case 0x423320u: goto label_423320;
        case 0x423324u: goto label_423324;
        case 0x423328u: goto label_423328;
        case 0x42332cu: goto label_42332c;
        case 0x423330u: goto label_423330;
        case 0x423334u: goto label_423334;
        case 0x423338u: goto label_423338;
        case 0x42333cu: goto label_42333c;
        case 0x423340u: goto label_423340;
        case 0x423344u: goto label_423344;
        case 0x423348u: goto label_423348;
        case 0x42334cu: goto label_42334c;
        case 0x423350u: goto label_423350;
        case 0x423354u: goto label_423354;
        case 0x423358u: goto label_423358;
        case 0x42335cu: goto label_42335c;
        case 0x423360u: goto label_423360;
        case 0x423364u: goto label_423364;
        case 0x423368u: goto label_423368;
        case 0x42336cu: goto label_42336c;
        case 0x423370u: goto label_423370;
        case 0x423374u: goto label_423374;
        case 0x423378u: goto label_423378;
        case 0x42337cu: goto label_42337c;
        case 0x423380u: goto label_423380;
        case 0x423384u: goto label_423384;
        case 0x423388u: goto label_423388;
        case 0x42338cu: goto label_42338c;
        case 0x423390u: goto label_423390;
        case 0x423394u: goto label_423394;
        case 0x423398u: goto label_423398;
        case 0x42339cu: goto label_42339c;
        case 0x4233a0u: goto label_4233a0;
        case 0x4233a4u: goto label_4233a4;
        case 0x4233a8u: goto label_4233a8;
        case 0x4233acu: goto label_4233ac;
        case 0x4233b0u: goto label_4233b0;
        case 0x4233b4u: goto label_4233b4;
        case 0x4233b8u: goto label_4233b8;
        case 0x4233bcu: goto label_4233bc;
        case 0x4233c0u: goto label_4233c0;
        case 0x4233c4u: goto label_4233c4;
        case 0x4233c8u: goto label_4233c8;
        case 0x4233ccu: goto label_4233cc;
        case 0x4233d0u: goto label_4233d0;
        case 0x4233d4u: goto label_4233d4;
        case 0x4233d8u: goto label_4233d8;
        case 0x4233dcu: goto label_4233dc;
        case 0x4233e0u: goto label_4233e0;
        case 0x4233e4u: goto label_4233e4;
        case 0x4233e8u: goto label_4233e8;
        case 0x4233ecu: goto label_4233ec;
        case 0x4233f0u: goto label_4233f0;
        case 0x4233f4u: goto label_4233f4;
        case 0x4233f8u: goto label_4233f8;
        case 0x4233fcu: goto label_4233fc;
        case 0x423400u: goto label_423400;
        case 0x423404u: goto label_423404;
        case 0x423408u: goto label_423408;
        case 0x42340cu: goto label_42340c;
        case 0x423410u: goto label_423410;
        case 0x423414u: goto label_423414;
        case 0x423418u: goto label_423418;
        case 0x42341cu: goto label_42341c;
        case 0x423420u: goto label_423420;
        case 0x423424u: goto label_423424;
        case 0x423428u: goto label_423428;
        case 0x42342cu: goto label_42342c;
        case 0x423430u: goto label_423430;
        case 0x423434u: goto label_423434;
        case 0x423438u: goto label_423438;
        case 0x42343cu: goto label_42343c;
        case 0x423440u: goto label_423440;
        case 0x423444u: goto label_423444;
        case 0x423448u: goto label_423448;
        case 0x42344cu: goto label_42344c;
        case 0x423450u: goto label_423450;
        case 0x423454u: goto label_423454;
        case 0x423458u: goto label_423458;
        case 0x42345cu: goto label_42345c;
        case 0x423460u: goto label_423460;
        case 0x423464u: goto label_423464;
        case 0x423468u: goto label_423468;
        case 0x42346cu: goto label_42346c;
        case 0x423470u: goto label_423470;
        case 0x423474u: goto label_423474;
        case 0x423478u: goto label_423478;
        case 0x42347cu: goto label_42347c;
        case 0x423480u: goto label_423480;
        case 0x423484u: goto label_423484;
        case 0x423488u: goto label_423488;
        case 0x42348cu: goto label_42348c;
        case 0x423490u: goto label_423490;
        case 0x423494u: goto label_423494;
        case 0x423498u: goto label_423498;
        case 0x42349cu: goto label_42349c;
        case 0x4234a0u: goto label_4234a0;
        case 0x4234a4u: goto label_4234a4;
        case 0x4234a8u: goto label_4234a8;
        case 0x4234acu: goto label_4234ac;
        case 0x4234b0u: goto label_4234b0;
        case 0x4234b4u: goto label_4234b4;
        case 0x4234b8u: goto label_4234b8;
        case 0x4234bcu: goto label_4234bc;
        case 0x4234c0u: goto label_4234c0;
        case 0x4234c4u: goto label_4234c4;
        case 0x4234c8u: goto label_4234c8;
        case 0x4234ccu: goto label_4234cc;
        case 0x4234d0u: goto label_4234d0;
        case 0x4234d4u: goto label_4234d4;
        case 0x4234d8u: goto label_4234d8;
        case 0x4234dcu: goto label_4234dc;
        case 0x4234e0u: goto label_4234e0;
        case 0x4234e4u: goto label_4234e4;
        case 0x4234e8u: goto label_4234e8;
        case 0x4234ecu: goto label_4234ec;
        case 0x4234f0u: goto label_4234f0;
        case 0x4234f4u: goto label_4234f4;
        case 0x4234f8u: goto label_4234f8;
        case 0x4234fcu: goto label_4234fc;
        case 0x423500u: goto label_423500;
        case 0x423504u: goto label_423504;
        case 0x423508u: goto label_423508;
        case 0x42350cu: goto label_42350c;
        case 0x423510u: goto label_423510;
        case 0x423514u: goto label_423514;
        case 0x423518u: goto label_423518;
        case 0x42351cu: goto label_42351c;
        case 0x423520u: goto label_423520;
        case 0x423524u: goto label_423524;
        case 0x423528u: goto label_423528;
        case 0x42352cu: goto label_42352c;
        case 0x423530u: goto label_423530;
        case 0x423534u: goto label_423534;
        case 0x423538u: goto label_423538;
        case 0x42353cu: goto label_42353c;
        case 0x423540u: goto label_423540;
        case 0x423544u: goto label_423544;
        case 0x423548u: goto label_423548;
        case 0x42354cu: goto label_42354c;
        case 0x423550u: goto label_423550;
        case 0x423554u: goto label_423554;
        case 0x423558u: goto label_423558;
        case 0x42355cu: goto label_42355c;
        case 0x423560u: goto label_423560;
        case 0x423564u: goto label_423564;
        case 0x423568u: goto label_423568;
        case 0x42356cu: goto label_42356c;
        case 0x423570u: goto label_423570;
        case 0x423574u: goto label_423574;
        case 0x423578u: goto label_423578;
        case 0x42357cu: goto label_42357c;
        case 0x423580u: goto label_423580;
        case 0x423584u: goto label_423584;
        case 0x423588u: goto label_423588;
        case 0x42358cu: goto label_42358c;
        case 0x423590u: goto label_423590;
        case 0x423594u: goto label_423594;
        case 0x423598u: goto label_423598;
        case 0x42359cu: goto label_42359c;
        case 0x4235a0u: goto label_4235a0;
        case 0x4235a4u: goto label_4235a4;
        case 0x4235a8u: goto label_4235a8;
        case 0x4235acu: goto label_4235ac;
        case 0x4235b0u: goto label_4235b0;
        case 0x4235b4u: goto label_4235b4;
        case 0x4235b8u: goto label_4235b8;
        case 0x4235bcu: goto label_4235bc;
        case 0x4235c0u: goto label_4235c0;
        case 0x4235c4u: goto label_4235c4;
        case 0x4235c8u: goto label_4235c8;
        case 0x4235ccu: goto label_4235cc;
        case 0x4235d0u: goto label_4235d0;
        case 0x4235d4u: goto label_4235d4;
        case 0x4235d8u: goto label_4235d8;
        case 0x4235dcu: goto label_4235dc;
        case 0x4235e0u: goto label_4235e0;
        case 0x4235e4u: goto label_4235e4;
        case 0x4235e8u: goto label_4235e8;
        case 0x4235ecu: goto label_4235ec;
        case 0x4235f0u: goto label_4235f0;
        case 0x4235f4u: goto label_4235f4;
        case 0x4235f8u: goto label_4235f8;
        case 0x4235fcu: goto label_4235fc;
        case 0x423600u: goto label_423600;
        case 0x423604u: goto label_423604;
        case 0x423608u: goto label_423608;
        case 0x42360cu: goto label_42360c;
        case 0x423610u: goto label_423610;
        case 0x423614u: goto label_423614;
        case 0x423618u: goto label_423618;
        case 0x42361cu: goto label_42361c;
        case 0x423620u: goto label_423620;
        case 0x423624u: goto label_423624;
        case 0x423628u: goto label_423628;
        case 0x42362cu: goto label_42362c;
        case 0x423630u: goto label_423630;
        case 0x423634u: goto label_423634;
        case 0x423638u: goto label_423638;
        case 0x42363cu: goto label_42363c;
        case 0x423640u: goto label_423640;
        case 0x423644u: goto label_423644;
        case 0x423648u: goto label_423648;
        case 0x42364cu: goto label_42364c;
        case 0x423650u: goto label_423650;
        case 0x423654u: goto label_423654;
        case 0x423658u: goto label_423658;
        case 0x42365cu: goto label_42365c;
        case 0x423660u: goto label_423660;
        case 0x423664u: goto label_423664;
        case 0x423668u: goto label_423668;
        case 0x42366cu: goto label_42366c;
        case 0x423670u: goto label_423670;
        case 0x423674u: goto label_423674;
        case 0x423678u: goto label_423678;
        case 0x42367cu: goto label_42367c;
        case 0x423680u: goto label_423680;
        case 0x423684u: goto label_423684;
        case 0x423688u: goto label_423688;
        case 0x42368cu: goto label_42368c;
        case 0x423690u: goto label_423690;
        case 0x423694u: goto label_423694;
        case 0x423698u: goto label_423698;
        case 0x42369cu: goto label_42369c;
        case 0x4236a0u: goto label_4236a0;
        case 0x4236a4u: goto label_4236a4;
        case 0x4236a8u: goto label_4236a8;
        case 0x4236acu: goto label_4236ac;
        case 0x4236b0u: goto label_4236b0;
        case 0x4236b4u: goto label_4236b4;
        case 0x4236b8u: goto label_4236b8;
        case 0x4236bcu: goto label_4236bc;
        case 0x4236c0u: goto label_4236c0;
        case 0x4236c4u: goto label_4236c4;
        case 0x4236c8u: goto label_4236c8;
        case 0x4236ccu: goto label_4236cc;
        case 0x4236d0u: goto label_4236d0;
        case 0x4236d4u: goto label_4236d4;
        case 0x4236d8u: goto label_4236d8;
        case 0x4236dcu: goto label_4236dc;
        case 0x4236e0u: goto label_4236e0;
        case 0x4236e4u: goto label_4236e4;
        case 0x4236e8u: goto label_4236e8;
        case 0x4236ecu: goto label_4236ec;
        case 0x4236f0u: goto label_4236f0;
        case 0x4236f4u: goto label_4236f4;
        case 0x4236f8u: goto label_4236f8;
        case 0x4236fcu: goto label_4236fc;
        case 0x423700u: goto label_423700;
        case 0x423704u: goto label_423704;
        case 0x423708u: goto label_423708;
        case 0x42370cu: goto label_42370c;
        case 0x423710u: goto label_423710;
        case 0x423714u: goto label_423714;
        case 0x423718u: goto label_423718;
        case 0x42371cu: goto label_42371c;
        case 0x423720u: goto label_423720;
        case 0x423724u: goto label_423724;
        case 0x423728u: goto label_423728;
        case 0x42372cu: goto label_42372c;
        case 0x423730u: goto label_423730;
        case 0x423734u: goto label_423734;
        case 0x423738u: goto label_423738;
        case 0x42373cu: goto label_42373c;
        case 0x423740u: goto label_423740;
        case 0x423744u: goto label_423744;
        case 0x423748u: goto label_423748;
        case 0x42374cu: goto label_42374c;
        case 0x423750u: goto label_423750;
        case 0x423754u: goto label_423754;
        case 0x423758u: goto label_423758;
        case 0x42375cu: goto label_42375c;
        case 0x423760u: goto label_423760;
        case 0x423764u: goto label_423764;
        case 0x423768u: goto label_423768;
        case 0x42376cu: goto label_42376c;
        case 0x423770u: goto label_423770;
        case 0x423774u: goto label_423774;
        case 0x423778u: goto label_423778;
        case 0x42377cu: goto label_42377c;
        case 0x423780u: goto label_423780;
        case 0x423784u: goto label_423784;
        case 0x423788u: goto label_423788;
        case 0x42378cu: goto label_42378c;
        case 0x423790u: goto label_423790;
        case 0x423794u: goto label_423794;
        case 0x423798u: goto label_423798;
        case 0x42379cu: goto label_42379c;
        case 0x4237a0u: goto label_4237a0;
        case 0x4237a4u: goto label_4237a4;
        case 0x4237a8u: goto label_4237a8;
        case 0x4237acu: goto label_4237ac;
        case 0x4237b0u: goto label_4237b0;
        case 0x4237b4u: goto label_4237b4;
        case 0x4237b8u: goto label_4237b8;
        case 0x4237bcu: goto label_4237bc;
        case 0x4237c0u: goto label_4237c0;
        case 0x4237c4u: goto label_4237c4;
        case 0x4237c8u: goto label_4237c8;
        case 0x4237ccu: goto label_4237cc;
        case 0x4237d0u: goto label_4237d0;
        case 0x4237d4u: goto label_4237d4;
        case 0x4237d8u: goto label_4237d8;
        case 0x4237dcu: goto label_4237dc;
        case 0x4237e0u: goto label_4237e0;
        case 0x4237e4u: goto label_4237e4;
        case 0x4237e8u: goto label_4237e8;
        case 0x4237ecu: goto label_4237ec;
        case 0x4237f0u: goto label_4237f0;
        case 0x4237f4u: goto label_4237f4;
        case 0x4237f8u: goto label_4237f8;
        case 0x4237fcu: goto label_4237fc;
        case 0x423800u: goto label_423800;
        case 0x423804u: goto label_423804;
        case 0x423808u: goto label_423808;
        case 0x42380cu: goto label_42380c;
        case 0x423810u: goto label_423810;
        case 0x423814u: goto label_423814;
        case 0x423818u: goto label_423818;
        case 0x42381cu: goto label_42381c;
        case 0x423820u: goto label_423820;
        case 0x423824u: goto label_423824;
        case 0x423828u: goto label_423828;
        case 0x42382cu: goto label_42382c;
        case 0x423830u: goto label_423830;
        case 0x423834u: goto label_423834;
        case 0x423838u: goto label_423838;
        case 0x42383cu: goto label_42383c;
        case 0x423840u: goto label_423840;
        case 0x423844u: goto label_423844;
        case 0x423848u: goto label_423848;
        case 0x42384cu: goto label_42384c;
        case 0x423850u: goto label_423850;
        case 0x423854u: goto label_423854;
        case 0x423858u: goto label_423858;
        case 0x42385cu: goto label_42385c;
        case 0x423860u: goto label_423860;
        case 0x423864u: goto label_423864;
        case 0x423868u: goto label_423868;
        case 0x42386cu: goto label_42386c;
        case 0x423870u: goto label_423870;
        case 0x423874u: goto label_423874;
        case 0x423878u: goto label_423878;
        case 0x42387cu: goto label_42387c;
        case 0x423880u: goto label_423880;
        case 0x423884u: goto label_423884;
        case 0x423888u: goto label_423888;
        case 0x42388cu: goto label_42388c;
        case 0x423890u: goto label_423890;
        case 0x423894u: goto label_423894;
        case 0x423898u: goto label_423898;
        case 0x42389cu: goto label_42389c;
        case 0x4238a0u: goto label_4238a0;
        case 0x4238a4u: goto label_4238a4;
        case 0x4238a8u: goto label_4238a8;
        case 0x4238acu: goto label_4238ac;
        case 0x4238b0u: goto label_4238b0;
        case 0x4238b4u: goto label_4238b4;
        case 0x4238b8u: goto label_4238b8;
        case 0x4238bcu: goto label_4238bc;
        case 0x4238c0u: goto label_4238c0;
        case 0x4238c4u: goto label_4238c4;
        case 0x4238c8u: goto label_4238c8;
        case 0x4238ccu: goto label_4238cc;
        case 0x4238d0u: goto label_4238d0;
        case 0x4238d4u: goto label_4238d4;
        case 0x4238d8u: goto label_4238d8;
        case 0x4238dcu: goto label_4238dc;
        case 0x4238e0u: goto label_4238e0;
        case 0x4238e4u: goto label_4238e4;
        case 0x4238e8u: goto label_4238e8;
        case 0x4238ecu: goto label_4238ec;
        case 0x4238f0u: goto label_4238f0;
        case 0x4238f4u: goto label_4238f4;
        case 0x4238f8u: goto label_4238f8;
        case 0x4238fcu: goto label_4238fc;
        case 0x423900u: goto label_423900;
        case 0x423904u: goto label_423904;
        case 0x423908u: goto label_423908;
        case 0x42390cu: goto label_42390c;
        case 0x423910u: goto label_423910;
        case 0x423914u: goto label_423914;
        case 0x423918u: goto label_423918;
        case 0x42391cu: goto label_42391c;
        case 0x423920u: goto label_423920;
        case 0x423924u: goto label_423924;
        case 0x423928u: goto label_423928;
        case 0x42392cu: goto label_42392c;
        case 0x423930u: goto label_423930;
        case 0x423934u: goto label_423934;
        case 0x423938u: goto label_423938;
        case 0x42393cu: goto label_42393c;
        case 0x423940u: goto label_423940;
        case 0x423944u: goto label_423944;
        case 0x423948u: goto label_423948;
        case 0x42394cu: goto label_42394c;
        case 0x423950u: goto label_423950;
        case 0x423954u: goto label_423954;
        case 0x423958u: goto label_423958;
        case 0x42395cu: goto label_42395c;
        case 0x423960u: goto label_423960;
        case 0x423964u: goto label_423964;
        case 0x423968u: goto label_423968;
        case 0x42396cu: goto label_42396c;
        default: break;
    }

    ctx->pc = 0x422c60u;

label_422c60:
    // 0x422c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x422c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_422c64:
    // 0x422c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x422c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_422c68:
    // 0x422c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x422c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_422c6c:
    // 0x422c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x422c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_422c70:
    // 0x422c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x422c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422c74:
    // 0x422c74: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x422c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_422c78:
    // 0x422c78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_422c7c:
    if (ctx->pc == 0x422C7Cu) {
        ctx->pc = 0x422C7Cu;
            // 0x422c7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422C80u;
        goto label_422c80;
    }
    ctx->pc = 0x422C78u;
    {
        const bool branch_taken_0x422c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x422C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422C78u;
            // 0x422c7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422c78) {
            ctx->pc = 0x422C88u;
            goto label_422c88;
        }
    }
    ctx->pc = 0x422C80u;
label_422c80:
    // 0x422c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x422c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422c84:
    // 0x422c84: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x422c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
label_422c88:
    // 0x422c88: 0x92230090  lbu         $v1, 0x90($s1)
    ctx->pc = 0x422c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
label_422c8c:
    // 0x422c8c: 0x50600033  beql        $v1, $zero, . + 4 + (0x33 << 2)
label_422c90:
    if (ctx->pc == 0x422C90u) {
        ctx->pc = 0x422C90u;
            // 0x422c90: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x422C94u;
        goto label_422c94;
    }
    ctx->pc = 0x422C8Cu;
    {
        const bool branch_taken_0x422c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x422c8c) {
            ctx->pc = 0x422C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422C8Cu;
            // 0x422c90: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422D5Cu;
            goto label_422d5c;
        }
    }
    ctx->pc = 0x422C94u;
label_422c94:
    // 0x422c94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x422c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_422c98:
    // 0x422c98: 0xc04f278  jal         func_13C9E0
label_422c9c:
    if (ctx->pc == 0x422C9Cu) {
        ctx->pc = 0x422C9Cu;
            // 0x422c9c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x422CA0u;
        goto label_422ca0;
    }
    ctx->pc = 0x422C98u;
    SET_GPR_U32(ctx, 31, 0x422CA0u);
    ctx->pc = 0x422C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422C98u;
            // 0x422c9c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CA0u; }
        if (ctx->pc != 0x422CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CA0u; }
        if (ctx->pc != 0x422CA0u) { return; }
    }
    ctx->pc = 0x422CA0u;
label_422ca0:
    // 0x422ca0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x422ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_422ca4:
    // 0x422ca4: 0xc04ce80  jal         func_133A00
label_422ca8:
    if (ctx->pc == 0x422CA8u) {
        ctx->pc = 0x422CA8u;
            // 0x422ca8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x422CACu;
        goto label_422cac;
    }
    ctx->pc = 0x422CA4u;
    SET_GPR_U32(ctx, 31, 0x422CACu);
    ctx->pc = 0x422CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422CA4u;
            // 0x422ca8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CACu; }
        if (ctx->pc != 0x422CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CACu; }
        if (ctx->pc != 0x422CACu) { return; }
    }
    ctx->pc = 0x422CACu;
label_422cac:
    // 0x422cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422cb0:
    // 0x422cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_422cb4:
    // 0x422cb4: 0xc108a84  jal         func_422A10
label_422cb8:
    if (ctx->pc == 0x422CB8u) {
        ctx->pc = 0x422CB8u;
            // 0x422cb8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x422CBCu;
        goto label_422cbc;
    }
    ctx->pc = 0x422CB4u;
    SET_GPR_U32(ctx, 31, 0x422CBCu);
    ctx->pc = 0x422CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422CB4u;
            // 0x422cb8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422A10u;
    if (runtime->hasFunction(0x422A10u)) {
        auto targetFn = runtime->lookupFunction(0x422A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CBCu; }
        if (ctx->pc != 0x422CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422A10_0x422a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422CBCu; }
        if (ctx->pc != 0x422CBCu) { return; }
    }
    ctx->pc = 0x422CBCu;
label_422cbc:
    // 0x422cbc: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x422cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_422cc0:
    // 0x422cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x422cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422cc4:
    // 0x422cc4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_422cc8:
    if (ctx->pc == 0x422CC8u) {
        ctx->pc = 0x422CCCu;
        goto label_422ccc;
    }
    ctx->pc = 0x422CC4u;
    {
        const bool branch_taken_0x422cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x422cc4) {
            ctx->pc = 0x422D14u;
            goto label_422d14;
        }
    }
    ctx->pc = 0x422CCCu;
label_422ccc:
    // 0x422ccc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_422cd0:
    if (ctx->pc == 0x422CD0u) {
        ctx->pc = 0x422CD4u;
        goto label_422cd4;
    }
    ctx->pc = 0x422CCCu;
    {
        const bool branch_taken_0x422ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x422ccc) {
            ctx->pc = 0x422CDCu;
            goto label_422cdc;
        }
    }
    ctx->pc = 0x422CD4u;
label_422cd4:
    // 0x422cd4: 0x10000020  b           . + 4 + (0x20 << 2)
label_422cd8:
    if (ctx->pc == 0x422CD8u) {
        ctx->pc = 0x422CDCu;
        goto label_422cdc;
    }
    ctx->pc = 0x422CD4u;
    {
        const bool branch_taken_0x422cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422cd4) {
            ctx->pc = 0x422D58u;
            goto label_422d58;
        }
    }
    ctx->pc = 0x422CDCu;
label_422cdc:
    // 0x422cdc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x422cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_422ce0:
    // 0x422ce0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x422ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_422ce4:
    // 0x422ce4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x422ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_422ce8:
    // 0x422ce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x422ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_422cec:
    // 0x422cec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x422cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_422cf0:
    // 0x422cf0: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x422cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_422cf4:
    // 0x422cf4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_422cf8:
    if (ctx->pc == 0x422CF8u) {
        ctx->pc = 0x422CFCu;
        goto label_422cfc;
    }
    ctx->pc = 0x422CF4u;
    {
        const bool branch_taken_0x422cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x422cf4) {
            ctx->pc = 0x422D58u;
            goto label_422d58;
        }
    }
    ctx->pc = 0x422CFCu;
label_422cfc:
    // 0x422cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422d00:
    // 0x422d00: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x422d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_422d04:
    // 0x422d04: 0xc108934  jal         func_4224D0
label_422d08:
    if (ctx->pc == 0x422D08u) {
        ctx->pc = 0x422D08u;
            // 0x422d08: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x422D0Cu;
        goto label_422d0c;
    }
    ctx->pc = 0x422D04u;
    SET_GPR_U32(ctx, 31, 0x422D0Cu);
    ctx->pc = 0x422D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422D04u;
            // 0x422d08: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4224D0u;
    if (runtime->hasFunction(0x4224D0u)) {
        auto targetFn = runtime->lookupFunction(0x4224D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422D0Cu; }
        if (ctx->pc != 0x422D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004224D0_0x4224d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422D0Cu; }
        if (ctx->pc != 0x422D0Cu) { return; }
    }
    ctx->pc = 0x422D0Cu;
label_422d0c:
    // 0x422d0c: 0x10000012  b           . + 4 + (0x12 << 2)
label_422d10:
    if (ctx->pc == 0x422D10u) {
        ctx->pc = 0x422D14u;
        goto label_422d14;
    }
    ctx->pc = 0x422D0Cu;
    {
        const bool branch_taken_0x422d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422d0c) {
            ctx->pc = 0x422D58u;
            goto label_422d58;
        }
    }
    ctx->pc = 0x422D14u;
label_422d14:
    // 0x422d14: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x422d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_422d18:
    // 0x422d18: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x422d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_422d1c:
    // 0x422d1c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x422d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_422d20:
    // 0x422d20: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x422d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_422d24:
    // 0x422d24: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x422d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_422d28:
    // 0x422d28: 0x8c630e38  lw          $v1, 0xE38($v1)
    ctx->pc = 0x422d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
label_422d2c:
    // 0x422d2c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_422d30:
    if (ctx->pc == 0x422D30u) {
        ctx->pc = 0x422D34u;
        goto label_422d34;
    }
    ctx->pc = 0x422D2Cu;
    {
        const bool branch_taken_0x422d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x422d2c) {
            ctx->pc = 0x422D58u;
            goto label_422d58;
        }
    }
    ctx->pc = 0x422D34u;
label_422d34:
    // 0x422d34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x422d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_422d38:
    // 0x422d38: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x422d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_422d3c:
    // 0x422d3c: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x422d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_422d40:
    // 0x422d40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_422d44:
    if (ctx->pc == 0x422D44u) {
        ctx->pc = 0x422D48u;
        goto label_422d48;
    }
    ctx->pc = 0x422D40u;
    {
        const bool branch_taken_0x422d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x422d40) {
            ctx->pc = 0x422D58u;
            goto label_422d58;
        }
    }
    ctx->pc = 0x422D48u;
label_422d48:
    // 0x422d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422d4c:
    // 0x422d4c: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x422d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_422d50:
    // 0x422d50: 0xc108934  jal         func_4224D0
label_422d54:
    if (ctx->pc == 0x422D54u) {
        ctx->pc = 0x422D54u;
            // 0x422d54: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x422D58u;
        goto label_422d58;
    }
    ctx->pc = 0x422D50u;
    SET_GPR_U32(ctx, 31, 0x422D58u);
    ctx->pc = 0x422D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422D50u;
            // 0x422d54: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4224D0u;
    if (runtime->hasFunction(0x4224D0u)) {
        auto targetFn = runtime->lookupFunction(0x4224D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422D58u; }
        if (ctx->pc != 0x422D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004224D0_0x4224d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422D58u; }
        if (ctx->pc != 0x422D58u) { return; }
    }
    ctx->pc = 0x422D58u;
label_422d58:
    // 0x422d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x422d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_422d5c:
    // 0x422d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422d60:
    // 0x422d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x422d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_422d64:
    // 0x422d64: 0x3e00008  jr          $ra
label_422d68:
    if (ctx->pc == 0x422D68u) {
        ctx->pc = 0x422D68u;
            // 0x422d68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x422D6Cu;
        goto label_422d6c;
    }
    ctx->pc = 0x422D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422D64u;
            // 0x422d68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422D6Cu;
label_422d6c:
    // 0x422d6c: 0x0  nop
    ctx->pc = 0x422d6cu;
    // NOP
label_422d70:
    // 0x422d70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x422d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_422d74:
    // 0x422d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x422d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_422d78:
    // 0x422d78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x422d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_422d7c:
    // 0x422d7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x422d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_422d80:
    // 0x422d80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x422d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_422d84:
    // 0x422d84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x422d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_422d88:
    // 0x422d88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x422d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422d8c:
    // 0x422d8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x422d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_422d90:
    // 0x422d90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x422d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_422d94:
    // 0x422d94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x422d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_422d98:
    // 0x422d98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x422d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_422d9c:
    // 0x422d9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x422d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_422da0:
    // 0x422da0: 0x8c840158  lw          $a0, 0x158($a0)
    ctx->pc = 0x422da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_422da4:
    // 0x422da4: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_422da8:
    if (ctx->pc == 0x422DA8u) {
        ctx->pc = 0x422DACu;
        goto label_422dac;
    }
    ctx->pc = 0x422DA4u;
    {
        const bool branch_taken_0x422da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x422da4) {
            ctx->pc = 0x422ECCu;
            goto label_422ecc;
        }
    }
    ctx->pc = 0x422DACu;
label_422dac:
    // 0x422dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x422dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422db0:
    // 0x422db0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_422db4:
    if (ctx->pc == 0x422DB4u) {
        ctx->pc = 0x422DB8u;
        goto label_422db8;
    }
    ctx->pc = 0x422DB0u;
    {
        const bool branch_taken_0x422db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x422db0) {
            ctx->pc = 0x422DC0u;
            goto label_422dc0;
        }
    }
    ctx->pc = 0x422DB8u;
label_422db8:
    // 0x422db8: 0x10000089  b           . + 4 + (0x89 << 2)
label_422dbc:
    if (ctx->pc == 0x422DBCu) {
        ctx->pc = 0x422DC0u;
        goto label_422dc0;
    }
    ctx->pc = 0x422DB8u;
    {
        const bool branch_taken_0x422db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422db8) {
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422DC0u;
label_422dc0:
    // 0x422dc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x422dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_422dc4:
    // 0x422dc4: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x422dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_422dc8:
    // 0x422dc8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x422dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_422dcc:
    // 0x422dcc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x422dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_422dd0:
    // 0x422dd0: 0xc6a000f0  lwc1        $f0, 0xF0($s5)
    ctx->pc = 0x422dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_422dd4:
    // 0x422dd4: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x422dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_422dd8:
    // 0x422dd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x422dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_422ddc:
    // 0x422ddc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x422ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_422de0:
    // 0x422de0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x422de0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_422de4:
    // 0x422de4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x422de4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_422de8:
    // 0x422de8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x422de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_422dec:
    // 0x422dec: 0xe6a000f0  swc1        $f0, 0xF0($s5)
    ctx->pc = 0x422decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 240), bits); }
label_422df0:
    // 0x422df0: 0x92a30180  lbu         $v1, 0x180($s5)
    ctx->pc = 0x422df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 384)));
label_422df4:
    // 0x422df4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_422df8:
    if (ctx->pc == 0x422DF8u) {
        ctx->pc = 0x422DF8u;
            // 0x422df8: 0xc6a100f0  lwc1        $f1, 0xF0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x422DFCu;
        goto label_422dfc;
    }
    ctx->pc = 0x422DF4u;
    {
        const bool branch_taken_0x422df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x422df4) {
            ctx->pc = 0x422DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422DF4u;
            // 0x422df8: 0xc6a100f0  lwc1        $f1, 0xF0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x422E14u;
            goto label_422e14;
        }
    }
    ctx->pc = 0x422DFCu;
label_422dfc:
    // 0x422dfc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x422dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_422e00:
    // 0x422e00: 0xc073234  jal         func_1CC8D0
label_422e04:
    if (ctx->pc == 0x422E04u) {
        ctx->pc = 0x422E04u;
            // 0x422e04: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x422E08u;
        goto label_422e08;
    }
    ctx->pc = 0x422E00u;
    SET_GPR_U32(ctx, 31, 0x422E08u);
    ctx->pc = 0x422E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422E00u;
            // 0x422e04: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E08u; }
        if (ctx->pc != 0x422E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E08u; }
        if (ctx->pc != 0x422E08u) { return; }
    }
    ctx->pc = 0x422E08u;
label_422e08:
    // 0x422e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x422e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422e0c:
    // 0x422e0c: 0xa2a30180  sb          $v1, 0x180($s5)
    ctx->pc = 0x422e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 3));
label_422e10:
    // 0x422e10: 0xc6a100f0  lwc1        $f1, 0xF0($s5)
    ctx->pc = 0x422e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_422e14:
    // 0x422e14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x422e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_422e18:
    // 0x422e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x422e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422e1c:
    // 0x422e1c: 0x0  nop
    ctx->pc = 0x422e1cu;
    // NOP
label_422e20:
    // 0x422e20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x422e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422e24:
    // 0x422e24: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
label_422e28:
    if (ctx->pc == 0x422E28u) {
        ctx->pc = 0x422E2Cu;
        goto label_422e2c;
    }
    ctx->pc = 0x422E24u;
    {
        const bool branch_taken_0x422e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x422e24) {
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422E2Cu;
label_422e2c:
    // 0x422e2c: 0x8ea600b0  lw          $a2, 0xB0($s5)
    ctx->pc = 0x422e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_422e30:
    // 0x422e30: 0x2405f9fb  addiu       $a1, $zero, -0x605
    ctx->pc = 0x422e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_422e34:
    // 0x422e34: 0x3c03ff1c  lui         $v1, 0xFF1C
    ctx->pc = 0x422e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65308 << 16));
label_422e38:
    // 0x422e38: 0x3c0200e3  lui         $v0, 0xE3
    ctx->pc = 0x422e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)227 << 16));
label_422e3c:
    // 0x422e3c: 0x3464fedf  ori         $a0, $v1, 0xFEDF
    ctx->pc = 0x422e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65247);
label_422e40:
    // 0x422e40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x422e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422e44:
    // 0x422e44: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x422e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_422e48:
    // 0x422e48: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x422e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_422e4c:
    // 0x422e4c: 0x34a50604  ori         $a1, $a1, 0x604
    ctx->pc = 0x422e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1540);
label_422e50:
    // 0x422e50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x422e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_422e54:
    // 0x422e54: 0xaea500b0  sw          $a1, 0xB0($s5)
    ctx->pc = 0x422e54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 5));
label_422e58:
    // 0x422e58: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x422e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_422e5c:
    // 0x422e5c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x422e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_422e60:
    // 0x422e60: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x422e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_422e64:
    // 0x422e64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x422e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_422e68:
    // 0x422e68: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x422e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_422e6c:
    // 0x422e6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x422e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_422e70:
    // 0x422e70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x422e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_422e74:
    // 0x422e74: 0xc08bff0  jal         func_22FFC0
label_422e78:
    if (ctx->pc == 0x422E78u) {
        ctx->pc = 0x422E78u;
            // 0x422e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x422E7Cu;
        goto label_422e7c;
    }
    ctx->pc = 0x422E74u;
    SET_GPR_U32(ctx, 31, 0x422E7Cu);
    ctx->pc = 0x422E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422E74u;
            // 0x422e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E7Cu; }
        if (ctx->pc != 0x422E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E7Cu; }
        if (ctx->pc != 0x422E7Cu) { return; }
    }
    ctx->pc = 0x422E7Cu;
label_422e7c:
    // 0x422e7c: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x422e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_422e80:
    // 0x422e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x422e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422e84:
    // 0x422e84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x422e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_422e88:
    // 0x422e88: 0xc08914c  jal         func_224530
label_422e8c:
    if (ctx->pc == 0x422E8Cu) {
        ctx->pc = 0x422E8Cu;
            // 0x422e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422E90u;
        goto label_422e90;
    }
    ctx->pc = 0x422E88u;
    SET_GPR_U32(ctx, 31, 0x422E90u);
    ctx->pc = 0x422E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422E88u;
            // 0x422e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E90u; }
        if (ctx->pc != 0x422E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422E90u; }
        if (ctx->pc != 0x422E90u) { return; }
    }
    ctx->pc = 0x422E90u;
label_422e90:
    // 0x422e90: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x422e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_422e94:
    // 0x422e94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x422e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_422e98:
    // 0x422e98: 0xaea400f0  sw          $a0, 0xF0($s5)
    ctx->pc = 0x422e98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 4));
label_422e9c:
    // 0x422e9c: 0xaea30158  sw          $v1, 0x158($s5)
    ctx->pc = 0x422e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 3));
label_422ea0:
    // 0x422ea0: 0x8ea400d4  lw          $a0, 0xD4($s5)
    ctx->pc = 0x422ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_422ea4:
    // 0x422ea4: 0x5080004e  beql        $a0, $zero, . + 4 + (0x4E << 2)
label_422ea8:
    if (ctx->pc == 0x422EA8u) {
        ctx->pc = 0x422EA8u;
            // 0x422ea8: 0xa2a00180  sb          $zero, 0x180($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x422EACu;
        goto label_422eac;
    }
    ctx->pc = 0x422EA4u;
    {
        const bool branch_taken_0x422ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x422ea4) {
            ctx->pc = 0x422EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422EA4u;
            // 0x422ea8: 0xa2a00180  sb          $zero, 0x180($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422EACu;
label_422eac:
    // 0x422eac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x422eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_422eb0:
    // 0x422eb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x422eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_422eb4:
    // 0x422eb4: 0x320f809  jalr        $t9
label_422eb8:
    if (ctx->pc == 0x422EB8u) {
        ctx->pc = 0x422EB8u;
            // 0x422eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422EBCu;
        goto label_422ebc;
    }
    ctx->pc = 0x422EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x422EBCu);
        ctx->pc = 0x422EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422EB4u;
            // 0x422eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x422EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x422EBCu; }
            if (ctx->pc != 0x422EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x422EBCu;
label_422ebc:
    // 0x422ebc: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x422ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
label_422ec0:
    // 0x422ec0: 0xa2a00180  sb          $zero, 0x180($s5)
    ctx->pc = 0x422ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 0));
label_422ec4:
    // 0x422ec4: 0x10000046  b           . + 4 + (0x46 << 2)
label_422ec8:
    if (ctx->pc == 0x422EC8u) {
        ctx->pc = 0x422ECCu;
        goto label_422ecc;
    }
    ctx->pc = 0x422EC4u;
    {
        const bool branch_taken_0x422ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422ec4) {
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422ECCu;
label_422ecc:
    // 0x422ecc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x422eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_422ed0:
    // 0x422ed0: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x422ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_422ed4:
    // 0x422ed4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x422ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_422ed8:
    // 0x422ed8: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x422ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_422edc:
    // 0x422edc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x422edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422ee0:
    // 0x422ee0: 0x8c56077c  lw          $s6, 0x77C($v0)
    ctx->pc = 0x422ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_422ee4:
    // 0x422ee4: 0xc0dc9bc  jal         func_3726F0
label_422ee8:
    if (ctx->pc == 0x422EE8u) {
        ctx->pc = 0x422EE8u;
            // 0x422ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422EECu;
        goto label_422eec;
    }
    ctx->pc = 0x422EE4u;
    SET_GPR_U32(ctx, 31, 0x422EECu);
    ctx->pc = 0x422EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422EE4u;
            // 0x422ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422EECu; }
        if (ctx->pc != 0x422EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422EECu; }
        if (ctx->pc != 0x422EECu) { return; }
    }
    ctx->pc = 0x422EECu;
label_422eec:
    // 0x422eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_422ef0:
    // 0x422ef0: 0xc0dc9a0  jal         func_372680
label_422ef4:
    if (ctx->pc == 0x422EF4u) {
        ctx->pc = 0x422EF4u;
            // 0x422ef4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x422EF8u;
        goto label_422ef8;
    }
    ctx->pc = 0x422EF0u;
    SET_GPR_U32(ctx, 31, 0x422EF8u);
    ctx->pc = 0x422EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422EF0u;
            // 0x422ef4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422EF8u; }
        if (ctx->pc != 0x422EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422EF8u; }
        if (ctx->pc != 0x422EF8u) { return; }
    }
    ctx->pc = 0x422EF8u;
label_422ef8:
    // 0x422ef8: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x422ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_422efc:
    // 0x422efc: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x422efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_422f00:
    // 0x422f00: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x422f00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_422f04:
    // 0x422f04: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x422f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_422f08:
    // 0x422f08: 0x8e700a60  lw          $s0, 0xA60($s3)
    ctx->pc = 0x422f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_422f0c:
    // 0x422f0c: 0xc04cc1c  jal         func_133070
label_422f10:
    if (ctx->pc == 0x422F10u) {
        ctx->pc = 0x422F10u;
            // 0x422f10: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x422F14u;
        goto label_422f14;
    }
    ctx->pc = 0x422F0Cu;
    SET_GPR_U32(ctx, 31, 0x422F14u);
    ctx->pc = 0x422F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422F0Cu;
            // 0x422f10: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422F14u; }
        if (ctx->pc != 0x422F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422F14u; }
        if (ctx->pc != 0x422F14u) { return; }
    }
    ctx->pc = 0x422F14u;
label_422f14:
    // 0x422f14: 0x8e630e38  lw          $v1, 0xE38($s3)
    ctx->pc = 0x422f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_422f18:
    // 0x422f18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x422f18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_422f1c:
    // 0x422f1c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x422f1cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_422f20:
    // 0x422f20: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_422f24:
    if (ctx->pc == 0x422F24u) {
        ctx->pc = 0x422F24u;
            // 0x422f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422F28u;
        goto label_422f28;
    }
    ctx->pc = 0x422F20u;
    {
        const bool branch_taken_0x422f20 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x422F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422F20u;
            // 0x422f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f20) {
            ctx->pc = 0x422F38u;
            goto label_422f38;
        }
    }
    ctx->pc = 0x422F28u;
label_422f28:
    // 0x422f28: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x422f28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_422f2c:
    // 0x422f2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_422f30:
    if (ctx->pc == 0x422F30u) {
        ctx->pc = 0x422F34u;
        goto label_422f34;
    }
    ctx->pc = 0x422F2Cu;
    {
        const bool branch_taken_0x422f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x422f2c) {
            ctx->pc = 0x422F38u;
            goto label_422f38;
        }
    }
    ctx->pc = 0x422F34u;
label_422f34:
    // 0x422f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x422f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_422f38:
    // 0x422f38: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_422f3c:
    if (ctx->pc == 0x422F3Cu) {
        ctx->pc = 0x422F40u;
        goto label_422f40;
    }
    ctx->pc = 0x422F38u;
    {
        const bool branch_taken_0x422f38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x422f38) {
            ctx->pc = 0x422F58u;
            goto label_422f58;
        }
    }
    ctx->pc = 0x422F40u;
label_422f40:
    // 0x422f40: 0xc075eb4  jal         func_1D7AD0
label_422f44:
    if (ctx->pc == 0x422F44u) {
        ctx->pc = 0x422F44u;
            // 0x422f44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422F48u;
        goto label_422f48;
    }
    ctx->pc = 0x422F40u;
    SET_GPR_U32(ctx, 31, 0x422F48u);
    ctx->pc = 0x422F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422F40u;
            // 0x422f44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422F48u; }
        if (ctx->pc != 0x422F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422F48u; }
        if (ctx->pc != 0x422F48u) { return; }
    }
    ctx->pc = 0x422F48u;
label_422f48:
    // 0x422f48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_422f4c:
    if (ctx->pc == 0x422F4Cu) {
        ctx->pc = 0x422F50u;
        goto label_422f50;
    }
    ctx->pc = 0x422F48u;
    {
        const bool branch_taken_0x422f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x422f48) {
            ctx->pc = 0x422F58u;
            goto label_422f58;
        }
    }
    ctx->pc = 0x422F50u;
label_422f50:
    // 0x422f50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x422f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422f54:
    // 0x422f54: 0x0  nop
    ctx->pc = 0x422f54u;
    // NOP
label_422f58:
    // 0x422f58: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_422f5c:
    if (ctx->pc == 0x422F5Cu) {
        ctx->pc = 0x422F60u;
        goto label_422f60;
    }
    ctx->pc = 0x422F58u;
    {
        const bool branch_taken_0x422f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x422f58) {
            ctx->pc = 0x422FD0u;
            goto label_422fd0;
        }
    }
    ctx->pc = 0x422F60u;
label_422f60:
    // 0x422f60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x422f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_422f64:
    // 0x422f64: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x422f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422f68:
    // 0x422f68: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_422f6c:
    if (ctx->pc == 0x422F6Cu) {
        ctx->pc = 0x422F70u;
        goto label_422f70;
    }
    ctx->pc = 0x422F68u;
    {
        const bool branch_taken_0x422f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x422f68) {
            ctx->pc = 0x422FB0u;
            goto label_422fb0;
        }
    }
    ctx->pc = 0x422F70u;
label_422f70:
    // 0x422f70: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x422f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_422f74:
    // 0x422f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x422f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422f78:
    // 0x422f78: 0x2848004  sllv        $s0, $a0, $s4
    ctx->pc = 0x422f78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_422f7c:
    // 0x422f7c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x422f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_422f80:
    // 0x422f80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_422f84:
    if (ctx->pc == 0x422F84u) {
        ctx->pc = 0x422F88u;
        goto label_422f88;
    }
    ctx->pc = 0x422F80u;
    {
        const bool branch_taken_0x422f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x422f80) {
            ctx->pc = 0x422FA0u;
            goto label_422fa0;
        }
    }
    ctx->pc = 0x422F88u;
label_422f88:
    // 0x422f88: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x422f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_422f8c:
    // 0x422f8c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x422f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_422f90:
    // 0x422f90: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x422f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_422f94:
    // 0x422f94: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x422f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_422f98:
    // 0x422f98: 0x320f809  jalr        $t9
label_422f9c:
    if (ctx->pc == 0x422F9Cu) {
        ctx->pc = 0x422F9Cu;
            // 0x422f9c: 0x34451aa9  ori         $a1, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x422FA0u;
        goto label_422fa0;
    }
    ctx->pc = 0x422F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x422FA0u);
        ctx->pc = 0x422F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422F98u;
            // 0x422f9c: 0x34451aa9  ori         $a1, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x422FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x422FA0u; }
            if (ctx->pc != 0x422FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x422FA0u;
label_422fa0:
    // 0x422fa0: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x422fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_422fa4:
    // 0x422fa4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x422fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_422fa8:
    // 0x422fa8: 0x10000009  b           . + 4 + (0x9 << 2)
label_422fac:
    if (ctx->pc == 0x422FACu) {
        ctx->pc = 0x422FACu;
            // 0x422fac: 0xaea30114  sw          $v1, 0x114($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
        ctx->pc = 0x422FB0u;
        goto label_422fb0;
    }
    ctx->pc = 0x422FA8u;
    {
        const bool branch_taken_0x422fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422FA8u;
            // 0x422fac: 0xaea30114  sw          $v1, 0x114($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fa8) {
            ctx->pc = 0x422FD0u;
            goto label_422fd0;
        }
    }
    ctx->pc = 0x422FB0u;
label_422fb0:
    // 0x422fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x422fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422fb4:
    // 0x422fb4: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x422fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_422fb8:
    // 0x422fb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x422fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_422fbc:
    // 0x422fbc: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x422fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_422fc0:
    // 0x422fc0: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x422fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_422fc4:
    // 0x422fc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x422fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_422fc8:
    // 0x422fc8: 0xaea30114  sw          $v1, 0x114($s5)
    ctx->pc = 0x422fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
label_422fcc:
    // 0x422fcc: 0x0  nop
    ctx->pc = 0x422fccu;
    // NOP
label_422fd0:
    // 0x422fd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x422fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_422fd4:
    // 0x422fd4: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x422fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_422fd8:
    // 0x422fd8: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_422fdc:
    if (ctx->pc == 0x422FDCu) {
        ctx->pc = 0x422FDCu;
            // 0x422fdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x422FE0u;
        goto label_422fe0;
    }
    ctx->pc = 0x422FD8u;
    {
        const bool branch_taken_0x422fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x422FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422FD8u;
            // 0x422fdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fd8) {
            ctx->pc = 0x422F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_422f00;
        }
    }
    ctx->pc = 0x422FE0u;
label_422fe0:
    // 0x422fe0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x422fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_422fe4:
    // 0x422fe4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x422fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_422fe8:
    // 0x422fe8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x422fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_422fec:
    // 0x422fec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x422fecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_422ff0:
    // 0x422ff0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x422ff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_422ff4:
    // 0x422ff4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x422ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_422ff8:
    // 0x422ff8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x422ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_422ffc:
    // 0x422ffc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x422ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423000:
    // 0x423000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423004:
    // 0x423004: 0x3e00008  jr          $ra
label_423008:
    if (ctx->pc == 0x423008u) {
        ctx->pc = 0x423008u;
            // 0x423008: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x42300Cu;
        goto label_42300c;
    }
    ctx->pc = 0x423004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423004u;
            // 0x423008: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42300Cu;
label_42300c:
    // 0x42300c: 0x0  nop
    ctx->pc = 0x42300cu;
    // NOP
label_423010:
    // 0x423010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x423010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_423014:
    // 0x423014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423018:
    // 0x423018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x423018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42301c:
    // 0x42301c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_423020:
    // 0x423020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x423020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_423024:
    // 0x423024: 0x908300f6  lbu         $v1, 0xF6($a0)
    ctx->pc = 0x423024u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 246)));
label_423028:
    // 0x423028: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x423028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42302c:
    // 0x42302c: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
label_423030:
    if (ctx->pc == 0x423030u) {
        ctx->pc = 0x423030u;
            // 0x423030: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423034u;
        goto label_423034;
    }
    ctx->pc = 0x42302Cu;
    {
        const bool branch_taken_0x42302c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42302Cu;
            // 0x423030: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42302c) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x423034u;
label_423034:
    // 0x423034: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x423034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_423038:
    // 0x423038: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_42303c:
    if (ctx->pc == 0x42303Cu) {
        ctx->pc = 0x42303Cu;
            // 0x42303c: 0x8e030cb4  lw          $v1, 0xCB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
        ctx->pc = 0x423040u;
        goto label_423040;
    }
    ctx->pc = 0x423038u;
    {
        const bool branch_taken_0x423038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x423038) {
            ctx->pc = 0x42303Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423038u;
            // 0x42303c: 0x8e030cb4  lw          $v1, 0xCB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423050u;
            goto label_423050;
        }
    }
    ctx->pc = 0x423040u;
label_423040:
    // 0x423040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423044:
    // 0x423044: 0x546200b5  bnel        $v1, $v0, . + 4 + (0xB5 << 2)
label_423048:
    if (ctx->pc == 0x423048u) {
        ctx->pc = 0x423048u;
            // 0x423048: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x42304Cu;
        goto label_42304c;
    }
    ctx->pc = 0x423044u;
    {
        const bool branch_taken_0x423044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x423044) {
            ctx->pc = 0x423048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423044u;
            // 0x423048: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42331Cu;
            goto label_42331c;
        }
    }
    ctx->pc = 0x42304Cu;
label_42304c:
    // 0x42304c: 0x8e030cb4  lw          $v1, 0xCB4($s0)
    ctx->pc = 0x42304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
label_423050:
    // 0x423050: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x423050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_423054:
    // 0x423054: 0x146200b0  bne         $v1, $v0, . + 4 + (0xB0 << 2)
label_423058:
    if (ctx->pc == 0x423058u) {
        ctx->pc = 0x42305Cu;
        goto label_42305c;
    }
    ctx->pc = 0x423054u;
    {
        const bool branch_taken_0x423054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x423054) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x42305Cu;
label_42305c:
    // 0x42305c: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x42305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423060:
    // 0x423060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x423060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_423064:
    // 0x423064: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x423064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_423068:
    // 0x423068: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x423068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42306c:
    // 0x42306c: 0x8c630cd0  lw          $v1, 0xCD0($v1)
    ctx->pc = 0x42306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
label_423070:
    // 0x423070: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x423070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423074:
    // 0x423074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x423074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_423078:
    // 0x423078: 0x24660084  addiu       $a2, $v1, 0x84
    ctx->pc = 0x423078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_42307c:
    // 0x42307c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x42307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423080:
    // 0x423080: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x423080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_423084:
    // 0x423084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x423084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_423088:
    // 0x423088: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x423088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_42308c:
    // 0x42308c: 0x0  nop
    ctx->pc = 0x42308cu;
    // NOP
label_423090:
    // 0x423090: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x423090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_423094:
    // 0x423094: 0xc621011c  lwc1        $f1, 0x11C($s1)
    ctx->pc = 0x423094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423098:
    // 0x423098: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x423098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42309c:
    // 0x42309c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42309cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4230a0:
    // 0x4230a0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x4230a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_4230a4:
    // 0x4230a4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x4230a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_4230a8:
    // 0x4230a8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x4230a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4230ac:
    // 0x4230ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4230acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4230b0:
    // 0x4230b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4230b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4230b4:
    // 0x4230b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4230b8:
    if (ctx->pc == 0x4230B8u) {
        ctx->pc = 0x4230B8u;
            // 0x4230b8: 0x24c5001c  addiu       $a1, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->pc = 0x4230BCu;
        goto label_4230bc;
    }
    ctx->pc = 0x4230B4u;
    {
        const bool branch_taken_0x4230b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4230B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4230B4u;
            // 0x4230b8: 0x24c5001c  addiu       $a1, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4230b4) {
            ctx->pc = 0x4230C0u;
            goto label_4230c0;
        }
    }
    ctx->pc = 0x4230BCu;
label_4230bc:
    // 0x4230bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4230bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4230c0:
    // 0x4230c0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4230c4:
    if (ctx->pc == 0x4230C4u) {
        ctx->pc = 0x4230C4u;
            // 0x4230c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4230C8u;
        goto label_4230c8;
    }
    ctx->pc = 0x4230C0u;
    {
        const bool branch_taken_0x4230c0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4230c0) {
            ctx->pc = 0x4230C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4230C0u;
            // 0x4230c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4230D4u;
            goto label_4230d4;
        }
    }
    ctx->pc = 0x4230C8u;
label_4230c8:
    // 0x4230c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4230c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4230cc:
    // 0x4230cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4230d0:
    if (ctx->pc == 0x4230D0u) {
        ctx->pc = 0x4230D0u;
            // 0x4230d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4230D4u;
        goto label_4230d4;
    }
    ctx->pc = 0x4230CCu;
    {
        const bool branch_taken_0x4230cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4230D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4230CCu;
            // 0x4230d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4230cc) {
            ctx->pc = 0x4230ECu;
            goto label_4230ec;
        }
    }
    ctx->pc = 0x4230D4u;
label_4230d4:
    // 0x4230d4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4230d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4230d8:
    // 0x4230d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4230d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4230dc:
    // 0x4230dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4230dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4230e0:
    // 0x4230e0: 0x0  nop
    ctx->pc = 0x4230e0u;
    // NOP
label_4230e4:
    // 0x4230e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4230e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4230e8:
    // 0x4230e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4230e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4230ec:
    // 0x4230ec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4230ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4230f0:
    // 0x4230f0: 0x3c033ada  lui         $v1, 0x3ADA
    ctx->pc = 0x4230f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15066 << 16));
label_4230f4:
    // 0x4230f4: 0x3463740e  ori         $v1, $v1, 0x740E
    ctx->pc = 0x4230f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29710);
label_4230f8:
    // 0x4230f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4230f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4230fc:
    // 0x4230fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4230fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_423100:
    // 0x423100: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x423100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_423104:
    // 0x423104: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x423104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_423108:
    // 0x423108: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x423108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42310c:
    // 0x42310c: 0xc621011c  lwc1        $f1, 0x11C($s1)
    ctx->pc = 0x42310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423110:
    // 0x423110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x423110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423114:
    // 0x423114: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x423114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_423118:
    // 0x423118: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x423118u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_42311c:
    // 0x42311c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x42311cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_423120:
    // 0x423120: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x423120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
label_423124:
    // 0x423124: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x423124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_423128:
    // 0x423128: 0x4410051  bgez        $v0, . + 4 + (0x51 << 2)
label_42312c:
    if (ctx->pc == 0x42312Cu) {
        ctx->pc = 0x423130u;
        goto label_423130;
    }
    ctx->pc = 0x423128u;
    {
        const bool branch_taken_0x423128 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x423128) {
            ctx->pc = 0x423270u;
            goto label_423270;
        }
    }
    ctx->pc = 0x423130u;
label_423130:
    // 0x423130: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x423130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_423134:
    // 0x423134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x423134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423138:
    // 0x423138: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x423138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_42313c:
    // 0x42313c: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x42313cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
label_423140:
    // 0x423140: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x423140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_423144:
    // 0x423144: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x423144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_423148:
    // 0x423148: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x423148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
label_42314c:
    // 0x42314c: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x42314cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_423150:
    // 0x423150: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x423150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_423154:
    // 0x423154: 0xc04cc04  jal         func_133010
label_423158:
    if (ctx->pc == 0x423158u) {
        ctx->pc = 0x423158u;
            // 0x423158: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x42315Cu;
        goto label_42315c;
    }
    ctx->pc = 0x423154u;
    SET_GPR_U32(ctx, 31, 0x42315Cu);
    ctx->pc = 0x423158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423154u;
            // 0x423158: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42315Cu; }
        if (ctx->pc != 0x42315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42315Cu; }
        if (ctx->pc != 0x42315Cu) { return; }
    }
    ctx->pc = 0x42315Cu;
label_42315c:
    // 0x42315c: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x42315cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_423160:
    // 0x423160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x423160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_423164:
    // 0x423164: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x423164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_423168:
    // 0x423168: 0xc0e32a4  jal         func_38CA90
label_42316c:
    if (ctx->pc == 0x42316Cu) {
        ctx->pc = 0x42316Cu;
            // 0x42316c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->pc = 0x423170u;
        goto label_423170;
    }
    ctx->pc = 0x423168u;
    SET_GPR_U32(ctx, 31, 0x423170u);
    ctx->pc = 0x42316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423168u;
            // 0x42316c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423170u; }
        if (ctx->pc != 0x423170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423170u; }
        if (ctx->pc != 0x423170u) { return; }
    }
    ctx->pc = 0x423170u;
label_423170:
    // 0x423170: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x423170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_423174:
    // 0x423174: 0xc0e082c  jal         func_3820B0
label_423178:
    if (ctx->pc == 0x423178u) {
        ctx->pc = 0x423178u;
            // 0x423178: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x42317Cu;
        goto label_42317c;
    }
    ctx->pc = 0x423174u;
    SET_GPR_U32(ctx, 31, 0x42317Cu);
    ctx->pc = 0x423178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423174u;
            // 0x423178: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42317Cu; }
        if (ctx->pc != 0x42317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42317Cu; }
        if (ctx->pc != 0x42317Cu) { return; }
    }
    ctx->pc = 0x42317Cu;
label_42317c:
    // 0x42317c: 0xc0e0828  jal         func_3820A0
label_423180:
    if (ctx->pc == 0x423180u) {
        ctx->pc = 0x423180u;
            // 0x423180: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x423184u;
        goto label_423184;
    }
    ctx->pc = 0x42317Cu;
    SET_GPR_U32(ctx, 31, 0x423184u);
    ctx->pc = 0x423180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42317Cu;
            // 0x423180: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423184u; }
        if (ctx->pc != 0x423184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423184u; }
        if (ctx->pc != 0x423184u) { return; }
    }
    ctx->pc = 0x423184u;
label_423184:
    // 0x423184: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x423184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_423188:
    // 0x423188: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_42318c:
    if (ctx->pc == 0x42318Cu) {
        ctx->pc = 0x42318Cu;
            // 0x42318c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x423190u;
        goto label_423190;
    }
    ctx->pc = 0x423188u;
    {
        const bool branch_taken_0x423188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423188) {
            ctx->pc = 0x42318Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423188u;
            // 0x42318c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4231C0u;
            goto label_4231c0;
        }
    }
    ctx->pc = 0x423190u;
label_423190:
    // 0x423190: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x423190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_423194:
    // 0x423194: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x423194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_423198:
    // 0x423198: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42319c:
    if (ctx->pc == 0x42319Cu) {
        ctx->pc = 0x4231A0u;
        goto label_4231a0;
    }
    ctx->pc = 0x423198u;
    {
        const bool branch_taken_0x423198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423198) {
            ctx->pc = 0x4231BCu;
            goto label_4231bc;
        }
    }
    ctx->pc = 0x4231A0u;
label_4231a0:
    // 0x4231a0: 0xc0dc408  jal         func_371020
label_4231a4:
    if (ctx->pc == 0x4231A4u) {
        ctx->pc = 0x4231A4u;
            // 0x4231a4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x4231A8u;
        goto label_4231a8;
    }
    ctx->pc = 0x4231A0u;
    SET_GPR_U32(ctx, 31, 0x4231A8u);
    ctx->pc = 0x4231A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231A0u;
            // 0x4231a4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231A8u; }
        if (ctx->pc != 0x4231A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231A8u; }
        if (ctx->pc != 0x4231A8u) { return; }
    }
    ctx->pc = 0x4231A8u;
label_4231a8:
    // 0x4231a8: 0xc0e0824  jal         func_382090
label_4231ac:
    if (ctx->pc == 0x4231ACu) {
        ctx->pc = 0x4231ACu;
            // 0x4231ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4231B0u;
        goto label_4231b0;
    }
    ctx->pc = 0x4231A8u;
    SET_GPR_U32(ctx, 31, 0x4231B0u);
    ctx->pc = 0x4231ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231A8u;
            // 0x4231ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231B0u; }
        if (ctx->pc != 0x4231B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231B0u; }
        if (ctx->pc != 0x4231B0u) { return; }
    }
    ctx->pc = 0x4231B0u;
label_4231b0:
    // 0x4231b0: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4231b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4231b4:
    // 0x4231b4: 0xc0e081c  jal         func_382070
label_4231b8:
    if (ctx->pc == 0x4231B8u) {
        ctx->pc = 0x4231B8u;
            // 0x4231b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4231BCu;
        goto label_4231bc;
    }
    ctx->pc = 0x4231B4u;
    SET_GPR_U32(ctx, 31, 0x4231BCu);
    ctx->pc = 0x4231B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231B4u;
            // 0x4231b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231BCu; }
        if (ctx->pc != 0x4231BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231BCu; }
        if (ctx->pc != 0x4231BCu) { return; }
    }
    ctx->pc = 0x4231BCu;
label_4231bc:
    // 0x4231bc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4231bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4231c0:
    // 0x4231c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4231c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4231c4:
    // 0x4231c4: 0xc0e080c  jal         func_382030
label_4231c8:
    if (ctx->pc == 0x4231C8u) {
        ctx->pc = 0x4231C8u;
            // 0x4231c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4231CCu;
        goto label_4231cc;
    }
    ctx->pc = 0x4231C4u;
    SET_GPR_U32(ctx, 31, 0x4231CCu);
    ctx->pc = 0x4231C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231C4u;
            // 0x4231c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231CCu; }
        if (ctx->pc != 0x4231CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231CCu; }
        if (ctx->pc != 0x4231CCu) { return; }
    }
    ctx->pc = 0x4231CCu;
label_4231cc:
    // 0x4231cc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4231ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4231d0:
    // 0x4231d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4231d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4231d4:
    // 0x4231d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4231d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4231d8:
    // 0x4231d8: 0xc08914c  jal         func_224530
label_4231dc:
    if (ctx->pc == 0x4231DCu) {
        ctx->pc = 0x4231DCu;
            // 0x4231dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4231E0u;
        goto label_4231e0;
    }
    ctx->pc = 0x4231D8u;
    SET_GPR_U32(ctx, 31, 0x4231E0u);
    ctx->pc = 0x4231DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231D8u;
            // 0x4231dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231E0u; }
        if (ctx->pc != 0x4231E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231E0u; }
        if (ctx->pc != 0x4231E0u) { return; }
    }
    ctx->pc = 0x4231E0u;
label_4231e0:
    // 0x4231e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4231e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4231e4:
    // 0x4231e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4231e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4231e8:
    // 0x4231e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4231e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4231ec:
    // 0x4231ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4231ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4231f0:
    // 0x4231f0: 0xc0b6df0  jal         func_2DB7C0
label_4231f4:
    if (ctx->pc == 0x4231F4u) {
        ctx->pc = 0x4231F4u;
            // 0x4231f4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4231F8u;
        goto label_4231f8;
    }
    ctx->pc = 0x4231F0u;
    SET_GPR_U32(ctx, 31, 0x4231F8u);
    ctx->pc = 0x4231F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231F0u;
            // 0x4231f4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231F8u; }
        if (ctx->pc != 0x4231F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4231F8u; }
        if (ctx->pc != 0x4231F8u) { return; }
    }
    ctx->pc = 0x4231F8u;
label_4231f8:
    // 0x4231f8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4231f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4231fc:
    // 0x4231fc: 0xc0e07f8  jal         func_381FE0
label_423200:
    if (ctx->pc == 0x423200u) {
        ctx->pc = 0x423200u;
            // 0x423200: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x423204u;
        goto label_423204;
    }
    ctx->pc = 0x4231FCu;
    SET_GPR_U32(ctx, 31, 0x423204u);
    ctx->pc = 0x423200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4231FCu;
            // 0x423200: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423204u; }
        if (ctx->pc != 0x423204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423204u; }
        if (ctx->pc != 0x423204u) { return; }
    }
    ctx->pc = 0x423204u;
label_423204:
    // 0x423204: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x423204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_423208:
    // 0x423208: 0xc0dc3f4  jal         func_370FD0
label_42320c:
    if (ctx->pc == 0x42320Cu) {
        ctx->pc = 0x42320Cu;
            // 0x42320c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x423210u;
        goto label_423210;
    }
    ctx->pc = 0x423208u;
    SET_GPR_U32(ctx, 31, 0x423210u);
    ctx->pc = 0x42320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423208u;
            // 0x42320c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423210u; }
        if (ctx->pc != 0x423210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423210u; }
        if (ctx->pc != 0x423210u) { return; }
    }
    ctx->pc = 0x423210u;
label_423210:
    // 0x423210: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x423210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_423214:
    // 0x423214: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x423214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_423218:
    // 0x423218: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_42321c:
    if (ctx->pc == 0x42321Cu) {
        ctx->pc = 0x42321Cu;
            // 0x42321c: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x423220u;
        goto label_423220;
    }
    ctx->pc = 0x423218u;
    {
        const bool branch_taken_0x423218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423218) {
            ctx->pc = 0x42321Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423218u;
            // 0x42321c: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423234u;
            goto label_423234;
        }
    }
    ctx->pc = 0x423220u;
label_423220:
    // 0x423220: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x423220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_423224:
    // 0x423224: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x423224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_423228:
    // 0x423228: 0x320f809  jalr        $t9
label_42322c:
    if (ctx->pc == 0x42322Cu) {
        ctx->pc = 0x42322Cu;
            // 0x42322c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423230u;
        goto label_423230;
    }
    ctx->pc = 0x423228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423230u);
        ctx->pc = 0x42322Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423228u;
            // 0x42322c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423230u; }
            if (ctx->pc != 0x423230u) { return; }
        }
        }
    }
    ctx->pc = 0x423230u;
label_423230:
    // 0x423230: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x423230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_423234:
    // 0x423234: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x423234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_423238:
    // 0x423238: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_42323c:
    if (ctx->pc == 0x42323Cu) {
        ctx->pc = 0x423240u;
        goto label_423240;
    }
    ctx->pc = 0x423238u;
    {
        const bool branch_taken_0x423238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x423238) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x423240u;
label_423240:
    // 0x423240: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x423240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_423244:
    // 0x423244: 0xc04cc04  jal         func_133010
label_423248:
    if (ctx->pc == 0x423248u) {
        ctx->pc = 0x423248u;
            // 0x423248: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x42324Cu;
        goto label_42324c;
    }
    ctx->pc = 0x423244u;
    SET_GPR_U32(ctx, 31, 0x42324Cu);
    ctx->pc = 0x423248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423244u;
            // 0x423248: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42324Cu; }
        if (ctx->pc != 0x42324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42324Cu; }
        if (ctx->pc != 0x42324Cu) { return; }
    }
    ctx->pc = 0x42324Cu;
label_42324c:
    // 0x42324c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x42324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_423250:
    // 0x423250: 0xc0baaa0  jal         func_2EAA80
label_423254:
    if (ctx->pc == 0x423254u) {
        ctx->pc = 0x423254u;
            // 0x423254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423258u;
        goto label_423258;
    }
    ctx->pc = 0x423250u;
    SET_GPR_U32(ctx, 31, 0x423258u);
    ctx->pc = 0x423254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423250u;
            // 0x423254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423258u; }
        if (ctx->pc != 0x423258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423258u; }
        if (ctx->pc != 0x423258u) { return; }
    }
    ctx->pc = 0x423258u;
label_423258:
    // 0x423258: 0x8e24017c  lw          $a0, 0x17C($s1)
    ctx->pc = 0x423258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_42325c:
    // 0x42325c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423260:
    // 0x423260: 0xc122d2c  jal         func_48B4B0
label_423264:
    if (ctx->pc == 0x423264u) {
        ctx->pc = 0x423264u;
            // 0x423264: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x423268u;
        goto label_423268;
    }
    ctx->pc = 0x423260u;
    SET_GPR_U32(ctx, 31, 0x423268u);
    ctx->pc = 0x423264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423260u;
            // 0x423264: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423268u; }
        if (ctx->pc != 0x423268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423268u; }
        if (ctx->pc != 0x423268u) { return; }
    }
    ctx->pc = 0x423268u;
label_423268:
    // 0x423268: 0x1000002b  b           . + 4 + (0x2B << 2)
label_42326c:
    if (ctx->pc == 0x42326Cu) {
        ctx->pc = 0x423270u;
        goto label_423270;
    }
    ctx->pc = 0x423268u;
    {
        const bool branch_taken_0x423268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x423268) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x423270u;
label_423270:
    // 0x423270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x423270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423274:
    // 0x423274: 0x0  nop
    ctx->pc = 0x423274u;
    // NOP
label_423278:
    // 0x423278: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x423278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_42327c:
    // 0x42327c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x42327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_423280:
    // 0x423280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x423280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423284:
    // 0x423284: 0x0  nop
    ctx->pc = 0x423284u;
    // NOP
label_423288:
    // 0x423288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x423288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42328c:
    // 0x42328c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_423290:
    if (ctx->pc == 0x423290u) {
        ctx->pc = 0x423290u;
            // 0x423290: 0xc621011c  lwc1        $f1, 0x11C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x423294u;
        goto label_423294;
    }
    ctx->pc = 0x42328Cu;
    {
        const bool branch_taken_0x42328c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42328c) {
            ctx->pc = 0x423290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42328Cu;
            // 0x423290: 0xc621011c  lwc1        $f1, 0x11C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4232D0u;
            goto label_4232d0;
        }
    }
    ctx->pc = 0x423294u;
label_423294:
    // 0x423294: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x423294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_423298:
    // 0x423298: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x423298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_42329c:
    // 0x42329c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x42329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4232a0:
    // 0x4232a0: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x4232a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4232a4:
    // 0x4232a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4232a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4232a8:
    // 0x4232a8: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4232a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4232ac:
    // 0x4232ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4232acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4232b0:
    // 0x4232b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4232b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4232b4:
    // 0x4232b4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_4232b8:
    if (ctx->pc == 0x4232B8u) {
        ctx->pc = 0x4232B8u;
            // 0x4232b8: 0xe6210184  swc1        $f1, 0x184($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
        ctx->pc = 0x4232BCu;
        goto label_4232bc;
    }
    ctx->pc = 0x4232B4u;
    {
        const bool branch_taken_0x4232b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4232B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4232B4u;
            // 0x4232b8: 0xe6210184  swc1        $f1, 0x184($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4232b4) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x4232BCu;
label_4232bc:
    // 0x4232bc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4232bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4232c0:
    // 0x4232c0: 0xc073234  jal         func_1CC8D0
label_4232c4:
    if (ctx->pc == 0x4232C4u) {
        ctx->pc = 0x4232C4u;
            // 0x4232c4: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x4232C8u;
        goto label_4232c8;
    }
    ctx->pc = 0x4232C0u;
    SET_GPR_U32(ctx, 31, 0x4232C8u);
    ctx->pc = 0x4232C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4232C0u;
            // 0x4232c4: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4232C8u; }
        if (ctx->pc != 0x4232C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4232C8u; }
        if (ctx->pc != 0x4232C8u) { return; }
    }
    ctx->pc = 0x4232C8u;
label_4232c8:
    // 0x4232c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_4232cc:
    if (ctx->pc == 0x4232CCu) {
        ctx->pc = 0x4232CCu;
            // 0x4232cc: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->pc = 0x4232D0u;
        goto label_4232d0;
    }
    ctx->pc = 0x4232C8u;
    {
        const bool branch_taken_0x4232c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4232CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4232C8u;
            // 0x4232cc: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4232c8) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x4232D0u;
label_4232d0:
    // 0x4232d0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4232d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4232d4:
    // 0x4232d4: 0xc6200184  lwc1        $f0, 0x184($s1)
    ctx->pc = 0x4232d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4232d8:
    // 0x4232d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4232d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4232dc:
    // 0x4232dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4232dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4232e0:
    // 0x4232e0: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x4232e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
label_4232e4:
    // 0x4232e4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4232e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_4232e8:
    // 0x4232e8: 0xc6200184  lwc1        $f0, 0x184($s1)
    ctx->pc = 0x4232e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4232ec:
    // 0x4232ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4232ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4232f0:
    // 0x4232f0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4232f0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_4232f4:
    // 0x4232f4: 0x0  nop
    ctx->pc = 0x4232f4u;
    // NOP
label_4232f8:
    // 0x4232f8: 0x0  nop
    ctx->pc = 0x4232f8u;
    // NOP
label_4232fc:
    // 0x4232fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4232fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423300:
    // 0x423300: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_423304:
    if (ctx->pc == 0x423304u) {
        ctx->pc = 0x423308u;
        goto label_423308;
    }
    ctx->pc = 0x423300u;
    {
        const bool branch_taken_0x423300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423300) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x423308u;
label_423308:
    // 0x423308: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x423308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_42330c:
    // 0x42330c: 0xc073234  jal         func_1CC8D0
label_423310:
    if (ctx->pc == 0x423310u) {
        ctx->pc = 0x423310u;
            // 0x423310: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x423314u;
        goto label_423314;
    }
    ctx->pc = 0x42330Cu;
    SET_GPR_U32(ctx, 31, 0x423314u);
    ctx->pc = 0x423310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42330Cu;
            // 0x423310: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423314u; }
        if (ctx->pc != 0x423314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423314u; }
        if (ctx->pc != 0x423314u) { return; }
    }
    ctx->pc = 0x423314u;
label_423314:
    // 0x423314: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x423314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_423318:
    // 0x423318: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x423318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_42331c:
    // 0x42331c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_423320:
    // 0x423320: 0x50620095  beql        $v1, $v0, . + 4 + (0x95 << 2)
label_423324:
    if (ctx->pc == 0x423324u) {
        ctx->pc = 0x423324u;
            // 0x423324: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->pc = 0x423328u;
        goto label_423328;
    }
    ctx->pc = 0x423320u;
    {
        const bool branch_taken_0x423320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x423320) {
            ctx->pc = 0x423324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423320u;
            // 0x423324: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423578u;
            goto label_423578;
        }
    }
    ctx->pc = 0x423328u;
label_423328:
    // 0x423328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x423328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42332c:
    // 0x42332c: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_423330:
    if (ctx->pc == 0x423330u) {
        ctx->pc = 0x423330u;
            // 0x423330: 0x8e05077c  lw          $a1, 0x77C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
        ctx->pc = 0x423334u;
        goto label_423334;
    }
    ctx->pc = 0x42332Cu;
    {
        const bool branch_taken_0x42332c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x42332c) {
            ctx->pc = 0x423330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42332Cu;
            // 0x423330: 0x8e05077c  lw          $a1, 0x77C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42338Cu;
            goto label_42338c;
        }
    }
    ctx->pc = 0x423334u;
label_423334:
    // 0x423334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x423334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_423338:
    // 0x423338: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_42333c:
    if (ctx->pc == 0x42333Cu) {
        ctx->pc = 0x423340u;
        goto label_423340;
    }
    ctx->pc = 0x423338u;
    {
        const bool branch_taken_0x423338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x423338) {
            ctx->pc = 0x423388u;
            goto label_423388;
        }
    }
    ctx->pc = 0x423340u;
label_423340:
    // 0x423340: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_423344:
    if (ctx->pc == 0x423344u) {
        ctx->pc = 0x423348u;
        goto label_423348;
    }
    ctx->pc = 0x423340u;
    {
        const bool branch_taken_0x423340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x423340) {
            ctx->pc = 0x423388u;
            goto label_423388;
        }
    }
    ctx->pc = 0x423348u;
label_423348:
    // 0x423348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42334c:
    // 0x42334c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_423350:
    if (ctx->pc == 0x423350u) {
        ctx->pc = 0x423350u;
            // 0x423350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423354u;
        goto label_423354;
    }
    ctx->pc = 0x42334Cu;
    {
        const bool branch_taken_0x42334c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x42334c) {
            ctx->pc = 0x423350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42334Cu;
            // 0x423350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42335Cu;
            goto label_42335c;
        }
    }
    ctx->pc = 0x423354u;
label_423354:
    // 0x423354: 0x1000008f  b           . + 4 + (0x8F << 2)
label_423358:
    if (ctx->pc == 0x423358u) {
        ctx->pc = 0x423358u;
            // 0x423358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42335Cu;
        goto label_42335c;
    }
    ctx->pc = 0x423354u;
    {
        const bool branch_taken_0x423354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423354u;
            // 0x423358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423354) {
            ctx->pc = 0x423594u;
            goto label_423594;
        }
    }
    ctx->pc = 0x42335Cu;
label_42335c:
    // 0x42335c: 0xc108e5c  jal         func_423970
label_423360:
    if (ctx->pc == 0x423360u) {
        ctx->pc = 0x423364u;
        goto label_423364;
    }
    ctx->pc = 0x42335Cu;
    SET_GPR_U32(ctx, 31, 0x423364u);
    ctx->pc = 0x423970u;
    if (runtime->hasFunction(0x423970u)) {
        auto targetFn = runtime->lookupFunction(0x423970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423364u; }
        if (ctx->pc != 0x423364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00423970_0x423970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423364u; }
        if (ctx->pc != 0x423364u) { return; }
    }
    ctx->pc = 0x423364u;
label_423364:
    // 0x423364: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x423364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_423368:
    // 0x423368: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x423368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_42336c:
    // 0x42336c: 0x34457084  ori         $a1, $v0, 0x7084
    ctx->pc = 0x42336cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_423370:
    // 0x423370: 0x3c0241a7  lui         $v0, 0x41A7
    ctx->pc = 0x423370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16807 << 16));
label_423374:
    // 0x423374: 0x34438d36  ori         $v1, $v0, 0x8D36
    ctx->pc = 0x423374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_423378:
    // 0x423378: 0xac850154  sw          $a1, 0x154($a0)
    ctx->pc = 0x423378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
label_42337c:
    // 0x42337c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x42337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_423380:
    // 0x423380: 0x10000083  b           . + 4 + (0x83 << 2)
label_423384:
    if (ctx->pc == 0x423384u) {
        ctx->pc = 0x423384u;
            // 0x423384: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->pc = 0x423388u;
        goto label_423388;
    }
    ctx->pc = 0x423380u;
    {
        const bool branch_taken_0x423380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423380u;
            // 0x423384: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423380) {
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x423388u;
label_423388:
    // 0x423388: 0x8e05077c  lw          $a1, 0x77C($s0)
    ctx->pc = 0x423388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_42338c:
    // 0x42338c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x42338cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_423390:
    // 0x423390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x423390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423394:
    // 0x423394: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x423394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
label_423398:
    // 0x423398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x423398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42339c:
    // 0x42339c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x42339cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4233a0:
    // 0x4233a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4233a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4233a4:
    // 0x4233a4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4233a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4233a8:
    // 0x4233a8: 0x8c630a60  lw          $v1, 0xA60($v1)
    ctx->pc = 0x4233a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2656)));
label_4233ac:
    // 0x4233ac: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x4233acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
label_4233b0:
    // 0x4233b0: 0xc4c000fc  lwc1        $f0, 0xFC($a2)
    ctx->pc = 0x4233b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4233b4:
    // 0x4233b4: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4233b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4233b8:
    // 0x4233b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4233b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4233bc:
    // 0x4233bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4233bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4233c0:
    // 0x4233c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4233c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4233c4:
    // 0x4233c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4233c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4233c8:
    // 0x4233c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4233c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4233cc:
    // 0x4233cc: 0x0  nop
    ctx->pc = 0x4233ccu;
    // NOP
label_4233d0:
    // 0x4233d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_4233d4:
    if (ctx->pc == 0x4233D4u) {
        ctx->pc = 0x4233D4u;
            // 0x4233d4: 0xacc300fc  sw          $v1, 0xFC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 3));
        ctx->pc = 0x4233D8u;
        goto label_4233d8;
    }
    ctx->pc = 0x4233D0u;
    {
        const bool branch_taken_0x4233d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4233D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4233D0u;
            // 0x4233d4: 0xacc300fc  sw          $v1, 0xFC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4233d0) {
            ctx->pc = 0x4233E0u;
            goto label_4233e0;
        }
    }
    ctx->pc = 0x4233D8u;
label_4233d8:
    // 0x4233d8: 0xacc000fc  sw          $zero, 0xFC($a2)
    ctx->pc = 0x4233d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 0));
label_4233dc:
    // 0x4233dc: 0x0  nop
    ctx->pc = 0x4233dcu;
    // NOP
label_4233e0:
    // 0x4233e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4233e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4233e4:
    // 0x4233e4: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x4233e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4233e8:
    // 0x4233e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4233e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4233ec:
    // 0x4233ec: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_4233f0:
    if (ctx->pc == 0x4233F0u) {
        ctx->pc = 0x4233F0u;
            // 0x4233f0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4233F4u;
        goto label_4233f4;
    }
    ctx->pc = 0x4233ECu;
    {
        const bool branch_taken_0x4233ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4233F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4233ECu;
            // 0x4233f0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4233ec) {
            ctx->pc = 0x4233A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4233a4;
        }
    }
    ctx->pc = 0x4233F4u;
label_4233f4:
    // 0x4233f4: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x4233f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_4233f8:
    // 0x4233f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4233f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4233fc:
    // 0x4233fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4233fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_423400:
    // 0x423400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423404:
    // 0x423404: 0xae250134  sw          $a1, 0x134($s1)
    ctx->pc = 0x423404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 5));
label_423408:
    // 0x423408: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x423408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_42340c:
    // 0x42340c: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x42340cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_423410:
    // 0x423410: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x423410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
label_423414:
    // 0x423414: 0xae240124  sw          $a0, 0x124($s1)
    ctx->pc = 0x423414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 4));
label_423418:
    // 0x423418: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x423418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_42341c:
    // 0x42341c: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x42341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_423420:
    // 0x423420: 0xc0786e8  jal         func_1E1BA0
label_423424:
    if (ctx->pc == 0x423424u) {
        ctx->pc = 0x423424u;
            // 0x423424: 0x8c440e84  lw          $a0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x423428u;
        goto label_423428;
    }
    ctx->pc = 0x423420u;
    SET_GPR_U32(ctx, 31, 0x423428u);
    ctx->pc = 0x423424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423420u;
            // 0x423424: 0x8c440e84  lw          $a0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1BA0u;
    if (runtime->hasFunction(0x1E1BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E1BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423428u; }
        if (ctx->pc != 0x423428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1BA0_0x1e1ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423428u; }
        if (ctx->pc != 0x423428u) { return; }
    }
    ctx->pc = 0x423428u;
label_423428:
    // 0x423428: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x423428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42342c:
    // 0x42342c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x42342cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423430:
    // 0x423430: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
label_423434:
    if (ctx->pc == 0x423434u) {
        ctx->pc = 0x423434u;
            // 0x423434: 0x3c0243d1  lui         $v0, 0x43D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
        ctx->pc = 0x423438u;
        goto label_423438;
    }
    ctx->pc = 0x423430u;
    {
        const bool branch_taken_0x423430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423430) {
            ctx->pc = 0x423434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423430u;
            // 0x423434: 0x3c0243d1  lui         $v0, 0x43D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423508u;
            goto label_423508;
        }
    }
    ctx->pc = 0x423438u;
label_423438:
    // 0x423438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x423438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42343c:
    // 0x42343c: 0xc0e32a4  jal         func_38CA90
label_423440:
    if (ctx->pc == 0x423440u) {
        ctx->pc = 0x423440u;
            // 0x423440: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x423444u;
        goto label_423444;
    }
    ctx->pc = 0x42343Cu;
    SET_GPR_U32(ctx, 31, 0x423444u);
    ctx->pc = 0x423440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42343Cu;
            // 0x423440: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423444u; }
        if (ctx->pc != 0x423444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423444u; }
        if (ctx->pc != 0x423444u) { return; }
    }
    ctx->pc = 0x423444u;
label_423444:
    // 0x423444: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x423444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_423448:
    // 0x423448: 0xc0e082c  jal         func_3820B0
label_42344c:
    if (ctx->pc == 0x42344Cu) {
        ctx->pc = 0x42344Cu;
            // 0x42344c: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x423450u;
        goto label_423450;
    }
    ctx->pc = 0x423448u;
    SET_GPR_U32(ctx, 31, 0x423450u);
    ctx->pc = 0x42344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423448u;
            // 0x42344c: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423450u; }
        if (ctx->pc != 0x423450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423450u; }
        if (ctx->pc != 0x423450u) { return; }
    }
    ctx->pc = 0x423450u;
label_423450:
    // 0x423450: 0xc0e0828  jal         func_3820A0
label_423454:
    if (ctx->pc == 0x423454u) {
        ctx->pc = 0x423454u;
            // 0x423454: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x423458u;
        goto label_423458;
    }
    ctx->pc = 0x423450u;
    SET_GPR_U32(ctx, 31, 0x423458u);
    ctx->pc = 0x423454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423450u;
            // 0x423454: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423458u; }
        if (ctx->pc != 0x423458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423458u; }
        if (ctx->pc != 0x423458u) { return; }
    }
    ctx->pc = 0x423458u;
label_423458:
    // 0x423458: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x423458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42345c:
    // 0x42345c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_423460:
    if (ctx->pc == 0x423460u) {
        ctx->pc = 0x423460u;
            // 0x423460: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x423464u;
        goto label_423464;
    }
    ctx->pc = 0x42345Cu;
    {
        const bool branch_taken_0x42345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42345c) {
            ctx->pc = 0x423460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42345Cu;
            // 0x423460: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423494u;
            goto label_423494;
        }
    }
    ctx->pc = 0x423464u;
label_423464:
    // 0x423464: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x423464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_423468:
    // 0x423468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x423468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_42346c:
    // 0x42346c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_423470:
    if (ctx->pc == 0x423470u) {
        ctx->pc = 0x423474u;
        goto label_423474;
    }
    ctx->pc = 0x42346Cu;
    {
        const bool branch_taken_0x42346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42346c) {
            ctx->pc = 0x423490u;
            goto label_423490;
        }
    }
    ctx->pc = 0x423474u;
label_423474:
    // 0x423474: 0xc0dc408  jal         func_371020
label_423478:
    if (ctx->pc == 0x423478u) {
        ctx->pc = 0x423478u;
            // 0x423478: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x42347Cu;
        goto label_42347c;
    }
    ctx->pc = 0x423474u;
    SET_GPR_U32(ctx, 31, 0x42347Cu);
    ctx->pc = 0x423478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423474u;
            // 0x423478: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42347Cu; }
        if (ctx->pc != 0x42347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42347Cu; }
        if (ctx->pc != 0x42347Cu) { return; }
    }
    ctx->pc = 0x42347Cu;
label_42347c:
    // 0x42347c: 0xc0e0824  jal         func_382090
label_423480:
    if (ctx->pc == 0x423480u) {
        ctx->pc = 0x423480u;
            // 0x423480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423484u;
        goto label_423484;
    }
    ctx->pc = 0x42347Cu;
    SET_GPR_U32(ctx, 31, 0x423484u);
    ctx->pc = 0x423480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42347Cu;
            // 0x423480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423484u; }
        if (ctx->pc != 0x423484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423484u; }
        if (ctx->pc != 0x423484u) { return; }
    }
    ctx->pc = 0x423484u;
label_423484:
    // 0x423484: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x423484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_423488:
    // 0x423488: 0xc0e081c  jal         func_382070
label_42348c:
    if (ctx->pc == 0x42348Cu) {
        ctx->pc = 0x42348Cu;
            // 0x42348c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423490u;
        goto label_423490;
    }
    ctx->pc = 0x423488u;
    SET_GPR_U32(ctx, 31, 0x423490u);
    ctx->pc = 0x42348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423488u;
            // 0x42348c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423490u; }
        if (ctx->pc != 0x423490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423490u; }
        if (ctx->pc != 0x423490u) { return; }
    }
    ctx->pc = 0x423490u;
label_423490:
    // 0x423490: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x423490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_423494:
    // 0x423494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x423494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423498:
    // 0x423498: 0xc0e080c  jal         func_382030
label_42349c:
    if (ctx->pc == 0x42349Cu) {
        ctx->pc = 0x42349Cu;
            // 0x42349c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4234A0u;
        goto label_4234a0;
    }
    ctx->pc = 0x423498u;
    SET_GPR_U32(ctx, 31, 0x4234A0u);
    ctx->pc = 0x42349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423498u;
            // 0x42349c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234A0u; }
        if (ctx->pc != 0x4234A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234A0u; }
        if (ctx->pc != 0x4234A0u) { return; }
    }
    ctx->pc = 0x4234A0u;
label_4234a0:
    // 0x4234a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4234a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4234a4:
    // 0x4234a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4234a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4234a8:
    // 0x4234a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4234a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4234ac:
    // 0x4234ac: 0xc08914c  jal         func_224530
label_4234b0:
    if (ctx->pc == 0x4234B0u) {
        ctx->pc = 0x4234B0u;
            // 0x4234b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4234B4u;
        goto label_4234b4;
    }
    ctx->pc = 0x4234ACu;
    SET_GPR_U32(ctx, 31, 0x4234B4u);
    ctx->pc = 0x4234B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4234ACu;
            // 0x4234b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234B4u; }
        if (ctx->pc != 0x4234B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234B4u; }
        if (ctx->pc != 0x4234B4u) { return; }
    }
    ctx->pc = 0x4234B4u;
label_4234b4:
    // 0x4234b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4234b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4234b8:
    // 0x4234b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4234b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4234bc:
    // 0x4234bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4234bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4234c0:
    // 0x4234c0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4234c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4234c4:
    // 0x4234c4: 0xc0b6df0  jal         func_2DB7C0
label_4234c8:
    if (ctx->pc == 0x4234C8u) {
        ctx->pc = 0x4234C8u;
            // 0x4234c8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4234CCu;
        goto label_4234cc;
    }
    ctx->pc = 0x4234C4u;
    SET_GPR_U32(ctx, 31, 0x4234CCu);
    ctx->pc = 0x4234C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4234C4u;
            // 0x4234c8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234CCu; }
        if (ctx->pc != 0x4234CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234CCu; }
        if (ctx->pc != 0x4234CCu) { return; }
    }
    ctx->pc = 0x4234CCu;
label_4234cc:
    // 0x4234cc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4234ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4234d0:
    // 0x4234d0: 0xc0e07f8  jal         func_381FE0
label_4234d4:
    if (ctx->pc == 0x4234D4u) {
        ctx->pc = 0x4234D4u;
            // 0x4234d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4234D8u;
        goto label_4234d8;
    }
    ctx->pc = 0x4234D0u;
    SET_GPR_U32(ctx, 31, 0x4234D8u);
    ctx->pc = 0x4234D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4234D0u;
            // 0x4234d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234D8u; }
        if (ctx->pc != 0x4234D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234D8u; }
        if (ctx->pc != 0x4234D8u) { return; }
    }
    ctx->pc = 0x4234D8u;
label_4234d8:
    // 0x4234d8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4234d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4234dc:
    // 0x4234dc: 0xc0dc3f4  jal         func_370FD0
label_4234e0:
    if (ctx->pc == 0x4234E0u) {
        ctx->pc = 0x4234E0u;
            // 0x4234e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4234E4u;
        goto label_4234e4;
    }
    ctx->pc = 0x4234DCu;
    SET_GPR_U32(ctx, 31, 0x4234E4u);
    ctx->pc = 0x4234E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4234DCu;
            // 0x4234e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234E4u; }
        if (ctx->pc != 0x4234E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4234E4u; }
        if (ctx->pc != 0x4234E4u) { return; }
    }
    ctx->pc = 0x4234E4u;
label_4234e4:
    // 0x4234e4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x4234e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4234e8:
    // 0x4234e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4234e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_4234ec:
    // 0x4234ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4234f0:
    if (ctx->pc == 0x4234F0u) {
        ctx->pc = 0x4234F4u;
        goto label_4234f4;
    }
    ctx->pc = 0x4234ECu;
    {
        const bool branch_taken_0x4234ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4234ec) {
            ctx->pc = 0x423504u;
            goto label_423504;
        }
    }
    ctx->pc = 0x4234F4u;
label_4234f4:
    // 0x4234f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4234f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4234f8:
    // 0x4234f8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x4234f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_4234fc:
    // 0x4234fc: 0x320f809  jalr        $t9
label_423500:
    if (ctx->pc == 0x423500u) {
        ctx->pc = 0x423500u;
            // 0x423500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423504u;
        goto label_423504;
    }
    ctx->pc = 0x4234FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423504u);
        ctx->pc = 0x423500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4234FCu;
            // 0x423500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423504u; }
            if (ctx->pc != 0x423504u) { return; }
        }
        }
    }
    ctx->pc = 0x423504u;
label_423504:
    // 0x423504: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x423504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_423508:
    // 0x423508: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x423508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_42350c:
    // 0x42350c: 0x34457084  ori         $a1, $v0, 0x7084
    ctx->pc = 0x42350cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_423510:
    // 0x423510: 0x3c0241a7  lui         $v0, 0x41A7
    ctx->pc = 0x423510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16807 << 16));
label_423514:
    // 0x423514: 0x34438d36  ori         $v1, $v0, 0x8D36
    ctx->pc = 0x423514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_423518:
    // 0x423518: 0xac850154  sw          $a1, 0x154($a0)
    ctx->pc = 0x423518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
label_42351c:
    // 0x42351c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x42351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_423520:
    // 0x423520: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x423520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_423524:
    // 0x423524: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x423524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_423528:
    // 0x423528: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_42352c:
    if (ctx->pc == 0x42352Cu) {
        ctx->pc = 0x423530u;
        goto label_423530;
    }
    ctx->pc = 0x423528u;
    {
        const bool branch_taken_0x423528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423528) {
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x423530u;
label_423530:
    // 0x423530: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x423530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_423534:
    // 0x423534: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x423534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_423538:
    // 0x423538: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x423538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42353c:
    // 0x42353c: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x42353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423540:
    // 0x423540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x423540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423544:
    // 0x423544: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x423544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_423548:
    // 0x423548: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x423548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_42354c:
    // 0x42354c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42354cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423550:
    // 0x423550: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_423554:
    if (ctx->pc == 0x423554u) {
        ctx->pc = 0x423554u;
            // 0x423554: 0xe6210118  swc1        $f1, 0x118($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->pc = 0x423558u;
        goto label_423558;
    }
    ctx->pc = 0x423550u;
    {
        const bool branch_taken_0x423550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x423554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423550u;
            // 0x423554: 0xe6210118  swc1        $f1, 0x118($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x423550) {
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x423558u;
label_423558:
    // 0x423558: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x423558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_42355c:
    // 0x42355c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423560:
    // 0x423560: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x423560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_423564:
    // 0x423564: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x423564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_423568:
    // 0x423568: 0xc12a1e0  jal         func_4A8780
label_42356c:
    if (ctx->pc == 0x42356Cu) {
        ctx->pc = 0x42356Cu;
            // 0x42356c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->pc = 0x423570u;
        goto label_423570;
    }
    ctx->pc = 0x423568u;
    SET_GPR_U32(ctx, 31, 0x423570u);
    ctx->pc = 0x42356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423568u;
            // 0x42356c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8780u;
    if (runtime->hasFunction(0x4A8780u)) {
        auto targetFn = runtime->lookupFunction(0x4A8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423570u; }
        if (ctx->pc != 0x423570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8780_0x4a8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423570u; }
        if (ctx->pc != 0x423570u) { return; }
    }
    ctx->pc = 0x423570u;
label_423570:
    // 0x423570: 0x10000007  b           . + 4 + (0x7 << 2)
label_423574:
    if (ctx->pc == 0x423574u) {
        ctx->pc = 0x423578u;
        goto label_423578;
    }
    ctx->pc = 0x423570u;
    {
        const bool branch_taken_0x423570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x423570) {
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x423578u;
label_423578:
    // 0x423578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x423578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42357c:
    // 0x42357c: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x42357cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
label_423580:
    // 0x423580: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x423580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
label_423584:
    // 0x423584: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x423584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_423588:
    // 0x423588: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x423588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_42358c:
    // 0x42358c: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x42358cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
label_423590:
    // 0x423590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x423590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_423594:
    // 0x423594: 0xc0e3658  jal         func_38D960
label_423598:
    if (ctx->pc == 0x423598u) {
        ctx->pc = 0x42359Cu;
        goto label_42359c;
    }
    ctx->pc = 0x423594u;
    SET_GPR_U32(ctx, 31, 0x42359Cu);
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42359Cu; }
        if (ctx->pc != 0x42359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42359Cu; }
        if (ctx->pc != 0x42359Cu) { return; }
    }
    ctx->pc = 0x42359Cu;
label_42359c:
    // 0x42359c: 0xc109224  jal         func_424890
label_4235a0:
    if (ctx->pc == 0x4235A0u) {
        ctx->pc = 0x4235A0u;
            // 0x4235a0: 0x26240148  addiu       $a0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->pc = 0x4235A4u;
        goto label_4235a4;
    }
    ctx->pc = 0x42359Cu;
    SET_GPR_U32(ctx, 31, 0x4235A4u);
    ctx->pc = 0x4235A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42359Cu;
            // 0x4235a0: 0x26240148  addiu       $a0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x424890u;
    if (runtime->hasFunction(0x424890u)) {
        auto targetFn = runtime->lookupFunction(0x424890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4235A4u; }
        if (ctx->pc != 0x4235A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00424890_0x424890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4235A4u; }
        if (ctx->pc != 0x4235A4u) { return; }
    }
    ctx->pc = 0x4235A4u;
label_4235a4:
    // 0x4235a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4235a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4235a8:
    // 0x4235a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4235a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4235ac:
    // 0x4235ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4235acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4235b0:
    // 0x4235b0: 0x3e00008  jr          $ra
label_4235b4:
    if (ctx->pc == 0x4235B4u) {
        ctx->pc = 0x4235B4u;
            // 0x4235b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4235B8u;
        goto label_4235b8;
    }
    ctx->pc = 0x4235B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4235B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4235B0u;
            // 0x4235b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4235B8u;
label_4235b8:
    // 0x4235b8: 0x0  nop
    ctx->pc = 0x4235b8u;
    // NOP
label_4235bc:
    // 0x4235bc: 0x0  nop
    ctx->pc = 0x4235bcu;
    // NOP
label_4235c0:
    // 0x4235c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4235c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4235c4:
    // 0x4235c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4235c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4235c8:
    // 0x4235c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4235c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4235cc:
    // 0x4235cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4235ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4235d0:
    // 0x4235d0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4235d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4235d4:
    // 0x4235d4: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x4235d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_4235d8:
    // 0x4235d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4235d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4235dc:
    // 0x4235dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4235e0:
    if (ctx->pc == 0x4235E0u) {
        ctx->pc = 0x4235E0u;
            // 0x4235e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4235E4u;
        goto label_4235e4;
    }
    ctx->pc = 0x4235DCu;
    {
        const bool branch_taken_0x4235dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4235E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4235DCu;
            // 0x4235e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235dc) {
            ctx->pc = 0x4235ECu;
            goto label_4235ec;
        }
    }
    ctx->pc = 0x4235E4u;
label_4235e4:
    // 0x4235e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4235e8:
    if (ctx->pc == 0x4235E8u) {
        ctx->pc = 0x4235E8u;
            // 0x4235e8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x4235ECu;
        goto label_4235ec;
    }
    ctx->pc = 0x4235E4u;
    {
        const bool branch_taken_0x4235e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4235E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4235E4u;
            // 0x4235e8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235e4) {
            ctx->pc = 0x4235F0u;
            goto label_4235f0;
        }
    }
    ctx->pc = 0x4235ECu;
label_4235ec:
    // 0x4235ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4235ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4235f0:
    // 0x4235f0: 0x50800049  beql        $a0, $zero, . + 4 + (0x49 << 2)
label_4235f4:
    if (ctx->pc == 0x4235F4u) {
        ctx->pc = 0x4235F4u;
            // 0x4235f4: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->pc = 0x4235F8u;
        goto label_4235f8;
    }
    ctx->pc = 0x4235F0u;
    {
        const bool branch_taken_0x4235f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4235f0) {
            ctx->pc = 0x4235F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4235F0u;
            // 0x4235f4: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423718u;
            goto label_423718;
        }
    }
    ctx->pc = 0x4235F8u;
label_4235f8:
    // 0x4235f8: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x4235f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_4235fc:
    // 0x4235fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4235fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423600:
    // 0x423600: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_423604:
    if (ctx->pc == 0x423604u) {
        ctx->pc = 0x423604u;
            // 0x423604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423608u;
        goto label_423608;
    }
    ctx->pc = 0x423600u;
    {
        const bool branch_taken_0x423600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x423600) {
            ctx->pc = 0x423604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423600u;
            // 0x423604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423610u;
            goto label_423610;
        }
    }
    ctx->pc = 0x423608u;
label_423608:
    // 0x423608: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x423608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_42360c:
    // 0x42360c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x42360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_423610:
    // 0x423610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x423610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_423614:
    // 0x423614: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x423614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_423618:
    // 0x423618: 0x320f809  jalr        $t9
label_42361c:
    if (ctx->pc == 0x42361Cu) {
        ctx->pc = 0x42361Cu;
            // 0x42361c: 0x8c510200  lw          $s1, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->pc = 0x423620u;
        goto label_423620;
    }
    ctx->pc = 0x423618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423620u);
        ctx->pc = 0x42361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423618u;
            // 0x42361c: 0x8c510200  lw          $s1, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423620u; }
            if (ctx->pc != 0x423620u) { return; }
        }
        }
    }
    ctx->pc = 0x423620u;
label_423620:
    // 0x423620: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x423620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423624:
    // 0x423624: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_423628:
    if (ctx->pc == 0x423628u) {
        ctx->pc = 0x42362Cu;
        goto label_42362c;
    }
    ctx->pc = 0x423624u;
    {
        const bool branch_taken_0x423624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x423624) {
            ctx->pc = 0x423714u;
            goto label_423714;
        }
    }
    ctx->pc = 0x42362Cu;
label_42362c:
    // 0x42362c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x42362cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_423630:
    // 0x423630: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
label_423634:
    if (ctx->pc == 0x423634u) {
        ctx->pc = 0x423638u;
        goto label_423638;
    }
    ctx->pc = 0x423630u;
    {
        const bool branch_taken_0x423630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x423630) {
            ctx->pc = 0x423714u;
            goto label_423714;
        }
    }
    ctx->pc = 0x423638u;
label_423638:
    // 0x423638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x423638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42363c:
    // 0x42363c: 0xc0e32a4  jal         func_38CA90
label_423640:
    if (ctx->pc == 0x423640u) {
        ctx->pc = 0x423640u;
            // 0x423640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x423644u;
        goto label_423644;
    }
    ctx->pc = 0x42363Cu;
    SET_GPR_U32(ctx, 31, 0x423644u);
    ctx->pc = 0x423640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42363Cu;
            // 0x423640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423644u; }
        if (ctx->pc != 0x423644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423644u; }
        if (ctx->pc != 0x423644u) { return; }
    }
    ctx->pc = 0x423644u;
label_423644:
    // 0x423644: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x423644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_423648:
    // 0x423648: 0xc0e082c  jal         func_3820B0
label_42364c:
    if (ctx->pc == 0x42364Cu) {
        ctx->pc = 0x42364Cu;
            // 0x42364c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x423650u;
        goto label_423650;
    }
    ctx->pc = 0x423648u;
    SET_GPR_U32(ctx, 31, 0x423650u);
    ctx->pc = 0x42364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423648u;
            // 0x42364c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423650u; }
        if (ctx->pc != 0x423650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423650u; }
        if (ctx->pc != 0x423650u) { return; }
    }
    ctx->pc = 0x423650u;
label_423650:
    // 0x423650: 0xc0e0828  jal         func_3820A0
label_423654:
    if (ctx->pc == 0x423654u) {
        ctx->pc = 0x423654u;
            // 0x423654: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x423658u;
        goto label_423658;
    }
    ctx->pc = 0x423650u;
    SET_GPR_U32(ctx, 31, 0x423658u);
    ctx->pc = 0x423654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423650u;
            // 0x423654: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423658u; }
        if (ctx->pc != 0x423658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423658u; }
        if (ctx->pc != 0x423658u) { return; }
    }
    ctx->pc = 0x423658u;
label_423658:
    // 0x423658: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x423658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_42365c:
    // 0x42365c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_423660:
    if (ctx->pc == 0x423660u) {
        ctx->pc = 0x423660u;
            // 0x423660: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x423664u;
        goto label_423664;
    }
    ctx->pc = 0x42365Cu;
    {
        const bool branch_taken_0x42365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42365c) {
            ctx->pc = 0x423660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42365Cu;
            // 0x423660: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423694u;
            goto label_423694;
        }
    }
    ctx->pc = 0x423664u;
label_423664:
    // 0x423664: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x423664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_423668:
    // 0x423668: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x423668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_42366c:
    // 0x42366c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_423670:
    if (ctx->pc == 0x423670u) {
        ctx->pc = 0x423674u;
        goto label_423674;
    }
    ctx->pc = 0x42366Cu;
    {
        const bool branch_taken_0x42366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42366c) {
            ctx->pc = 0x423690u;
            goto label_423690;
        }
    }
    ctx->pc = 0x423674u;
label_423674:
    // 0x423674: 0xc0dc408  jal         func_371020
label_423678:
    if (ctx->pc == 0x423678u) {
        ctx->pc = 0x423678u;
            // 0x423678: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x42367Cu;
        goto label_42367c;
    }
    ctx->pc = 0x423674u;
    SET_GPR_U32(ctx, 31, 0x42367Cu);
    ctx->pc = 0x423678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423674u;
            // 0x423678: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42367Cu; }
        if (ctx->pc != 0x42367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42367Cu; }
        if (ctx->pc != 0x42367Cu) { return; }
    }
    ctx->pc = 0x42367Cu;
label_42367c:
    // 0x42367c: 0xc0e0824  jal         func_382090
label_423680:
    if (ctx->pc == 0x423680u) {
        ctx->pc = 0x423680u;
            // 0x423680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423684u;
        goto label_423684;
    }
    ctx->pc = 0x42367Cu;
    SET_GPR_U32(ctx, 31, 0x423684u);
    ctx->pc = 0x423680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42367Cu;
            // 0x423680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423684u; }
        if (ctx->pc != 0x423684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423684u; }
        if (ctx->pc != 0x423684u) { return; }
    }
    ctx->pc = 0x423684u;
label_423684:
    // 0x423684: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x423684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_423688:
    // 0x423688: 0xc0e081c  jal         func_382070
label_42368c:
    if (ctx->pc == 0x42368Cu) {
        ctx->pc = 0x42368Cu;
            // 0x42368c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423690u;
        goto label_423690;
    }
    ctx->pc = 0x423688u;
    SET_GPR_U32(ctx, 31, 0x423690u);
    ctx->pc = 0x42368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423688u;
            // 0x42368c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423690u; }
        if (ctx->pc != 0x423690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423690u; }
        if (ctx->pc != 0x423690u) { return; }
    }
    ctx->pc = 0x423690u;
label_423690:
    // 0x423690: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x423690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_423694:
    // 0x423694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x423694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423698:
    // 0x423698: 0xc0e080c  jal         func_382030
label_42369c:
    if (ctx->pc == 0x42369Cu) {
        ctx->pc = 0x42369Cu;
            // 0x42369c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4236A0u;
        goto label_4236a0;
    }
    ctx->pc = 0x423698u;
    SET_GPR_U32(ctx, 31, 0x4236A0u);
    ctx->pc = 0x42369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423698u;
            // 0x42369c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236A0u; }
        if (ctx->pc != 0x4236A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236A0u; }
        if (ctx->pc != 0x4236A0u) { return; }
    }
    ctx->pc = 0x4236A0u;
label_4236a0:
    // 0x4236a0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4236a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4236a4:
    // 0x4236a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4236a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4236a8:
    // 0x4236a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4236a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4236ac:
    // 0x4236ac: 0xc08914c  jal         func_224530
label_4236b0:
    if (ctx->pc == 0x4236B0u) {
        ctx->pc = 0x4236B0u;
            // 0x4236b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4236B4u;
        goto label_4236b4;
    }
    ctx->pc = 0x4236ACu;
    SET_GPR_U32(ctx, 31, 0x4236B4u);
    ctx->pc = 0x4236B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4236ACu;
            // 0x4236b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236B4u; }
        if (ctx->pc != 0x4236B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236B4u; }
        if (ctx->pc != 0x4236B4u) { return; }
    }
    ctx->pc = 0x4236B4u;
label_4236b4:
    // 0x4236b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4236b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4236b8:
    // 0x4236b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4236b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4236bc:
    // 0x4236bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4236bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4236c0:
    // 0x4236c0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4236c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4236c4:
    // 0x4236c4: 0xc0b6df0  jal         func_2DB7C0
label_4236c8:
    if (ctx->pc == 0x4236C8u) {
        ctx->pc = 0x4236C8u;
            // 0x4236c8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4236CCu;
        goto label_4236cc;
    }
    ctx->pc = 0x4236C4u;
    SET_GPR_U32(ctx, 31, 0x4236CCu);
    ctx->pc = 0x4236C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4236C4u;
            // 0x4236c8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236CCu; }
        if (ctx->pc != 0x4236CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236CCu; }
        if (ctx->pc != 0x4236CCu) { return; }
    }
    ctx->pc = 0x4236CCu;
label_4236cc:
    // 0x4236cc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4236ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4236d0:
    // 0x4236d0: 0xc0e07f8  jal         func_381FE0
label_4236d4:
    if (ctx->pc == 0x4236D4u) {
        ctx->pc = 0x4236D4u;
            // 0x4236d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4236D8u;
        goto label_4236d8;
    }
    ctx->pc = 0x4236D0u;
    SET_GPR_U32(ctx, 31, 0x4236D8u);
    ctx->pc = 0x4236D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4236D0u;
            // 0x4236d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236D8u; }
        if (ctx->pc != 0x4236D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236D8u; }
        if (ctx->pc != 0x4236D8u) { return; }
    }
    ctx->pc = 0x4236D8u;
label_4236d8:
    // 0x4236d8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4236d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4236dc:
    // 0x4236dc: 0xc0dc3f4  jal         func_370FD0
label_4236e0:
    if (ctx->pc == 0x4236E0u) {
        ctx->pc = 0x4236E0u;
            // 0x4236e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4236E4u;
        goto label_4236e4;
    }
    ctx->pc = 0x4236DCu;
    SET_GPR_U32(ctx, 31, 0x4236E4u);
    ctx->pc = 0x4236E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4236DCu;
            // 0x4236e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236E4u; }
        if (ctx->pc != 0x4236E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4236E4u; }
        if (ctx->pc != 0x4236E4u) { return; }
    }
    ctx->pc = 0x4236E4u;
label_4236e4:
    // 0x4236e4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x4236e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4236e8:
    // 0x4236e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4236e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_4236ec:
    // 0x4236ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4236f0:
    if (ctx->pc == 0x4236F0u) {
        ctx->pc = 0x4236F0u;
            // 0x4236f0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4236F4u;
        goto label_4236f4;
    }
    ctx->pc = 0x4236ECu;
    {
        const bool branch_taken_0x4236ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4236ec) {
            ctx->pc = 0x4236F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4236ECu;
            // 0x4236f0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423708u;
            goto label_423708;
        }
    }
    ctx->pc = 0x4236F4u;
label_4236f4:
    // 0x4236f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4236f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4236f8:
    // 0x4236f8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x4236f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_4236fc:
    // 0x4236fc: 0x320f809  jalr        $t9
label_423700:
    if (ctx->pc == 0x423700u) {
        ctx->pc = 0x423700u;
            // 0x423700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423704u;
        goto label_423704;
    }
    ctx->pc = 0x4236FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423704u);
        ctx->pc = 0x423700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4236FCu;
            // 0x423700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423704u; }
            if (ctx->pc != 0x423704u) { return; }
        }
        }
    }
    ctx->pc = 0x423704u;
label_423704:
    // 0x423704: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x423704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_423708:
    // 0x423708: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x423708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_42370c:
    // 0x42370c: 0x320f809  jalr        $t9
label_423710:
    if (ctx->pc == 0x423710u) {
        ctx->pc = 0x423710u;
            // 0x423710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423714u;
        goto label_423714;
    }
    ctx->pc = 0x42370Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423714u);
        ctx->pc = 0x423710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42370Cu;
            // 0x423710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423714u; }
            if (ctx->pc != 0x423714u) { return; }
        }
        }
    }
    ctx->pc = 0x423714u;
label_423714:
    // 0x423714: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x423714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_423718:
    // 0x423718: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x423718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42371c:
    // 0x42371c: 0xc122d2c  jal         func_48B4B0
label_423720:
    if (ctx->pc == 0x423720u) {
        ctx->pc = 0x423720u;
            // 0x423720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x423724u;
        goto label_423724;
    }
    ctx->pc = 0x42371Cu;
    SET_GPR_U32(ctx, 31, 0x423724u);
    ctx->pc = 0x423720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42371Cu;
            // 0x423720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423724u; }
        if (ctx->pc != 0x423724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423724u; }
        if (ctx->pc != 0x423724u) { return; }
    }
    ctx->pc = 0x423724u;
label_423724:
    // 0x423724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x423724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_423728:
    // 0x423728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x423728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42372c:
    // 0x42372c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42372cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423730:
    // 0x423730: 0x3e00008  jr          $ra
label_423734:
    if (ctx->pc == 0x423734u) {
        ctx->pc = 0x423734u;
            // 0x423734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x423738u;
        goto label_423738;
    }
    ctx->pc = 0x423730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423730u;
            // 0x423734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x423738u;
label_423738:
    // 0x423738: 0x0  nop
    ctx->pc = 0x423738u;
    // NOP
label_42373c:
    // 0x42373c: 0x0  nop
    ctx->pc = 0x42373cu;
    // NOP
label_423740:
    // 0x423740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x423740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_423744:
    // 0x423744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x423744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423748:
    // 0x423748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x423748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42374c:
    // 0x42374c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423750:
    // 0x423750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x423750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_423754:
    // 0x423754: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x423754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423758:
    // 0x423758: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x423758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42375c:
    // 0x42375c: 0xc08914c  jal         func_224530
label_423760:
    if (ctx->pc == 0x423760u) {
        ctx->pc = 0x423760u;
            // 0x423760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423764u;
        goto label_423764;
    }
    ctx->pc = 0x42375Cu;
    SET_GPR_U32(ctx, 31, 0x423764u);
    ctx->pc = 0x423760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42375Cu;
            // 0x423760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423764u; }
        if (ctx->pc != 0x423764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423764u; }
        if (ctx->pc != 0x423764u) { return; }
    }
    ctx->pc = 0x423764u;
label_423764:
    // 0x423764: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x423764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_423768:
    // 0x423768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x423768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42376c:
    // 0x42376c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x42376cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_423770:
    // 0x423770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423774:
    // 0x423774: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x423774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_423778:
    // 0x423778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x423778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42377c:
    // 0x42377c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_423780:
    // 0x423780: 0xc08bff0  jal         func_22FFC0
label_423784:
    if (ctx->pc == 0x423784u) {
        ctx->pc = 0x423784u;
            // 0x423784: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423788u;
        goto label_423788;
    }
    ctx->pc = 0x423780u;
    SET_GPR_U32(ctx, 31, 0x423788u);
    ctx->pc = 0x423784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423780u;
            // 0x423784: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423788u; }
        if (ctx->pc != 0x423788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423788u; }
        if (ctx->pc != 0x423788u) { return; }
    }
    ctx->pc = 0x423788u;
label_423788:
    // 0x423788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x423788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42378c:
    // 0x42378c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42378cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423790:
    // 0x423790: 0x3e00008  jr          $ra
label_423794:
    if (ctx->pc == 0x423794u) {
        ctx->pc = 0x423794u;
            // 0x423794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x423798u;
        goto label_423798;
    }
    ctx->pc = 0x423790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423790u;
            // 0x423794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x423798u;
label_423798:
    // 0x423798: 0x0  nop
    ctx->pc = 0x423798u;
    // NOP
label_42379c:
    // 0x42379c: 0x0  nop
    ctx->pc = 0x42379cu;
    // NOP
label_4237a0:
    // 0x4237a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4237a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4237a4:
    // 0x4237a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4237a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4237a8:
    // 0x4237a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4237a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4237ac:
    // 0x4237ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4237acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4237b0:
    // 0x4237b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4237b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4237b4:
    // 0x4237b4: 0x8c8400ac  lw          $a0, 0xAC($a0)
    ctx->pc = 0x4237b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_4237b8:
    // 0x4237b8: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
label_4237bc:
    if (ctx->pc == 0x4237BCu) {
        ctx->pc = 0x4237BCu;
            // 0x4237bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4237C0u;
        goto label_4237c0;
    }
    ctx->pc = 0x4237B8u;
    {
        const bool branch_taken_0x4237b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4237b8) {
            ctx->pc = 0x4237BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4237B8u;
            // 0x4237bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4237ECu;
            goto label_4237ec;
        }
    }
    ctx->pc = 0x4237C0u;
label_4237c0:
    // 0x4237c0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x4237c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_4237c4:
    // 0x4237c4: 0xc04cc04  jal         func_133010
label_4237c8:
    if (ctx->pc == 0x4237C8u) {
        ctx->pc = 0x4237C8u;
            // 0x4237c8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4237CCu;
        goto label_4237cc;
    }
    ctx->pc = 0x4237C4u;
    SET_GPR_U32(ctx, 31, 0x4237CCu);
    ctx->pc = 0x4237C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4237C4u;
            // 0x4237c8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237CCu; }
        if (ctx->pc != 0x4237CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237CCu; }
        if (ctx->pc != 0x4237CCu) { return; }
    }
    ctx->pc = 0x4237CCu;
label_4237cc:
    // 0x4237cc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x4237ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_4237d0:
    // 0x4237d0: 0xc0baaa0  jal         func_2EAA80
label_4237d4:
    if (ctx->pc == 0x4237D4u) {
        ctx->pc = 0x4237D4u;
            // 0x4237d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4237D8u;
        goto label_4237d8;
    }
    ctx->pc = 0x4237D0u;
    SET_GPR_U32(ctx, 31, 0x4237D8u);
    ctx->pc = 0x4237D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4237D0u;
            // 0x4237d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237D8u; }
        if (ctx->pc != 0x4237D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237D8u; }
        if (ctx->pc != 0x4237D8u) { return; }
    }
    ctx->pc = 0x4237D8u;
label_4237d8:
    // 0x4237d8: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x4237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_4237dc:
    // 0x4237dc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4237dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4237e0:
    // 0x4237e0: 0xc122d2c  jal         func_48B4B0
label_4237e4:
    if (ctx->pc == 0x4237E4u) {
        ctx->pc = 0x4237E4u;
            // 0x4237e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4237E8u;
        goto label_4237e8;
    }
    ctx->pc = 0x4237E0u;
    SET_GPR_U32(ctx, 31, 0x4237E8u);
    ctx->pc = 0x4237E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4237E0u;
            // 0x4237e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237E8u; }
        if (ctx->pc != 0x4237E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4237E8u; }
        if (ctx->pc != 0x4237E8u) { return; }
    }
    ctx->pc = 0x4237E8u;
label_4237e8:
    // 0x4237e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4237e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4237ec:
    // 0x4237ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4237ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4237f0:
    // 0x4237f0: 0x3e00008  jr          $ra
label_4237f4:
    if (ctx->pc == 0x4237F4u) {
        ctx->pc = 0x4237F4u;
            // 0x4237f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4237F8u;
        goto label_4237f8;
    }
    ctx->pc = 0x4237F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4237F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4237F0u;
            // 0x4237f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4237F8u;
label_4237f8:
    // 0x4237f8: 0x0  nop
    ctx->pc = 0x4237f8u;
    // NOP
label_4237fc:
    // 0x4237fc: 0x0  nop
    ctx->pc = 0x4237fcu;
    // NOP
label_423800:
    // 0x423800: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x423800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_423804:
    // 0x423804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x423804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_423808:
    // 0x423808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x423808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_42380c:
    // 0x42380c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x42380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423810:
    // 0x423810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x423810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_423814:
    // 0x423814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x423814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423818:
    // 0x423818: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x423818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_42381c:
    // 0x42381c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x42381cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423820:
    // 0x423820: 0xc4d40de4  lwc1        $f20, 0xDE4($a2)
    ctx->pc = 0x423820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_423824:
    // 0x423824: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x423824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
label_423828:
    // 0x423828: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x423828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_42382c:
    // 0x42382c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_423830:
    // 0x423830: 0xc0e34b0  jal         func_38D2C0
label_423834:
    if (ctx->pc == 0x423834u) {
        ctx->pc = 0x423834u;
            // 0x423834: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x423838u;
        goto label_423838;
    }
    ctx->pc = 0x423830u;
    SET_GPR_U32(ctx, 31, 0x423838u);
    ctx->pc = 0x423834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423830u;
            // 0x423834: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423838u; }
        if (ctx->pc != 0x423838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423838u; }
        if (ctx->pc != 0x423838u) { return; }
    }
    ctx->pc = 0x423838u;
label_423838:
    // 0x423838: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x423838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42383c:
    // 0x42383c: 0xc04f278  jal         func_13C9E0
label_423840:
    if (ctx->pc == 0x423840u) {
        ctx->pc = 0x423840u;
            // 0x423840: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x423844u;
        goto label_423844;
    }
    ctx->pc = 0x42383Cu;
    SET_GPR_U32(ctx, 31, 0x423844u);
    ctx->pc = 0x423840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42383Cu;
            // 0x423840: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423844u; }
        if (ctx->pc != 0x423844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423844u; }
        if (ctx->pc != 0x423844u) { return; }
    }
    ctx->pc = 0x423844u;
label_423844:
    // 0x423844: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x423844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_423848:
    // 0x423848: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x423848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42384c:
    // 0x42384c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_423850:
    // 0x423850: 0xc04cca0  jal         func_133280
label_423854:
    if (ctx->pc == 0x423854u) {
        ctx->pc = 0x423854u;
            // 0x423854: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->pc = 0x423858u;
        goto label_423858;
    }
    ctx->pc = 0x423850u;
    SET_GPR_U32(ctx, 31, 0x423858u);
    ctx->pc = 0x423854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423850u;
            // 0x423854: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423858u; }
        if (ctx->pc != 0x423858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423858u; }
        if (ctx->pc != 0x423858u) { return; }
    }
    ctx->pc = 0x423858u;
label_423858:
    // 0x423858: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x423858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42385c:
    // 0x42385c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_423860:
    // 0x423860: 0x8c65e3e0  lw          $a1, -0x1C20($v1)
    ctx->pc = 0x423860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_423864:
    // 0x423864: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x423864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_423868:
    // 0x423868: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x423868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42386c:
    // 0x42386c: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x42386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_423870:
    // 0x423870: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x423870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
label_423874:
    // 0x423874: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x423874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423878:
    // 0x423878: 0x346238e4  ori         $v0, $v1, 0x38E4
    ctx->pc = 0x423878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_42387c:
    // 0x42387c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423880:
    // 0x423880: 0x0  nop
    ctx->pc = 0x423880u;
    // NOP
label_423884:
    // 0x423884: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x423884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_423888:
    // 0x423888: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x423888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42388c:
    // 0x42388c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x42388cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_423890:
    // 0x423890: 0xc04cc70  jal         func_1331C0
label_423894:
    if (ctx->pc == 0x423894u) {
        ctx->pc = 0x423894u;
            // 0x423894: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x423898u;
        goto label_423898;
    }
    ctx->pc = 0x423890u;
    SET_GPR_U32(ctx, 31, 0x423898u);
    ctx->pc = 0x423894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423890u;
            // 0x423894: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423898u; }
        if (ctx->pc != 0x423898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423898u; }
        if (ctx->pc != 0x423898u) { return; }
    }
    ctx->pc = 0x423898u;
label_423898:
    // 0x423898: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x423898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42389c:
    // 0x42389c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x42389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_4238a0:
    // 0x4238a0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4238a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4238a4:
    // 0x4238a4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4238a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4238a8:
    // 0x4238a8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x4238a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4238ac:
    // 0x4238ac: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4238acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4238b0:
    // 0x4238b0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4238b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4238b4:
    // 0x4238b4: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x4238b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4238b8:
    // 0x4238b8: 0xc088b74  jal         func_222DD0
label_4238bc:
    if (ctx->pc == 0x4238BCu) {
        ctx->pc = 0x4238BCu;
            // 0x4238bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4238C0u;
        goto label_4238c0;
    }
    ctx->pc = 0x4238B8u;
    SET_GPR_U32(ctx, 31, 0x4238C0u);
    ctx->pc = 0x4238BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4238B8u;
            // 0x4238bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4238C0u; }
        if (ctx->pc != 0x4238C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4238C0u; }
        if (ctx->pc != 0x4238C0u) { return; }
    }
    ctx->pc = 0x4238C0u;
label_4238c0:
    // 0x4238c0: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4238c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4238c4:
    // 0x4238c4: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4238c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4238c8:
    // 0x4238c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4238c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4238cc:
    // 0x4238cc: 0x320f809  jalr        $t9
label_4238d0:
    if (ctx->pc == 0x4238D0u) {
        ctx->pc = 0x4238D0u;
            // 0x4238d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4238D4u;
        goto label_4238d4;
    }
    ctx->pc = 0x4238CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4238D4u);
        ctx->pc = 0x4238D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4238CCu;
            // 0x4238d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4238D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4238D4u; }
            if (ctx->pc != 0x4238D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4238D4u;
label_4238d4:
    // 0x4238d4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4238d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4238d8:
    // 0x4238d8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4238d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4238dc:
    // 0x4238dc: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x4238dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4238e0:
    // 0x4238e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4238e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4238e4:
    // 0x4238e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x4238e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_4238e8:
    // 0x4238e8: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x4238e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4238ec:
    // 0x4238ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4238ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4238f0:
    // 0x4238f0: 0x0  nop
    ctx->pc = 0x4238f0u;
    // NOP
label_4238f4:
    // 0x4238f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4238f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_4238f8:
    // 0x4238f8: 0x0  nop
    ctx->pc = 0x4238f8u;
    // NOP
label_4238fc:
    // 0x4238fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4238fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423900:
    // 0x423900: 0x0  nop
    ctx->pc = 0x423900u;
    // NOP
label_423904:
    // 0x423904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x423904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423908:
    // 0x423908: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_42390c:
    if (ctx->pc == 0x42390Cu) {
        ctx->pc = 0x423910u;
        goto label_423910;
    }
    ctx->pc = 0x423908u;
    {
        const bool branch_taken_0x423908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423908) {
            ctx->pc = 0x423928u;
            goto label_423928;
        }
    }
    ctx->pc = 0x423910u;
label_423910:
    // 0x423910: 0x3c023e25  lui         $v0, 0x3E25
    ctx->pc = 0x423910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15909 << 16));
label_423914:
    // 0x423914: 0x3442ed09  ori         $v0, $v0, 0xED09
    ctx->pc = 0x423914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60681);
label_423918:
    // 0x423918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x423918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42391c:
    // 0x42391c: 0x0  nop
    ctx->pc = 0x42391cu;
    // NOP
label_423920:
    // 0x423920: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x423920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_423924:
    // 0x423924: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x423924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_423928:
    // 0x423928: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42392c:
    // 0x42392c: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x42392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_423930:
    // 0x423930: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x423930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_423934:
    // 0x423934: 0xc12a1f4  jal         func_4A87D0
label_423938:
    if (ctx->pc == 0x423938u) {
        ctx->pc = 0x423938u;
            // 0x423938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42393Cu;
        goto label_42393c;
    }
    ctx->pc = 0x423934u;
    SET_GPR_U32(ctx, 31, 0x42393Cu);
    ctx->pc = 0x423938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423934u;
            // 0x423938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A87D0u;
    if (runtime->hasFunction(0x4A87D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A87D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42393Cu; }
        if (ctx->pc != 0x42393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A87D0_0x4a87d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42393Cu; }
        if (ctx->pc != 0x42393Cu) { return; }
    }
    ctx->pc = 0x42393Cu;
label_42393c:
    // 0x42393c: 0x8e24017c  lw          $a0, 0x17C($s1)
    ctx->pc = 0x42393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_423940:
    // 0x423940: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x423940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_423944:
    // 0x423944: 0xc122d2c  jal         func_48B4B0
label_423948:
    if (ctx->pc == 0x423948u) {
        ctx->pc = 0x423948u;
            // 0x423948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42394Cu;
        goto label_42394c;
    }
    ctx->pc = 0x423944u;
    SET_GPR_U32(ctx, 31, 0x42394Cu);
    ctx->pc = 0x423948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423944u;
            // 0x423948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42394Cu; }
        if (ctx->pc != 0x42394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42394Cu; }
        if (ctx->pc != 0x42394Cu) { return; }
    }
    ctx->pc = 0x42394Cu;
label_42394c:
    // 0x42394c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_423950:
    // 0x423950: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x423950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_423954:
    // 0x423954: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x423954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423958:
    // 0x423958: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x423958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42395c:
    // 0x42395c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42395cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423960:
    // 0x423960: 0x3e00008  jr          $ra
label_423964:
    if (ctx->pc == 0x423964u) {
        ctx->pc = 0x423964u;
            // 0x423964: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x423968u;
        goto label_423968;
    }
    ctx->pc = 0x423960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423960u;
            // 0x423964: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x423968u;
label_423968:
    // 0x423968: 0x0  nop
    ctx->pc = 0x423968u;
    // NOP
label_42396c:
    // 0x42396c: 0x0  nop
    ctx->pc = 0x42396cu;
    // NOP
}
