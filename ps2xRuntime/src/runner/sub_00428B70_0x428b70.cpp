#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428B70
// Address: 0x428b70 - 0x42a810
void sub_00428B70_0x428b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428B70_0x428b70");
#endif

    switch (ctx->pc) {
        case 0x428b70u: goto label_428b70;
        case 0x428b74u: goto label_428b74;
        case 0x428b78u: goto label_428b78;
        case 0x428b7cu: goto label_428b7c;
        case 0x428b80u: goto label_428b80;
        case 0x428b84u: goto label_428b84;
        case 0x428b88u: goto label_428b88;
        case 0x428b8cu: goto label_428b8c;
        case 0x428b90u: goto label_428b90;
        case 0x428b94u: goto label_428b94;
        case 0x428b98u: goto label_428b98;
        case 0x428b9cu: goto label_428b9c;
        case 0x428ba0u: goto label_428ba0;
        case 0x428ba4u: goto label_428ba4;
        case 0x428ba8u: goto label_428ba8;
        case 0x428bacu: goto label_428bac;
        case 0x428bb0u: goto label_428bb0;
        case 0x428bb4u: goto label_428bb4;
        case 0x428bb8u: goto label_428bb8;
        case 0x428bbcu: goto label_428bbc;
        case 0x428bc0u: goto label_428bc0;
        case 0x428bc4u: goto label_428bc4;
        case 0x428bc8u: goto label_428bc8;
        case 0x428bccu: goto label_428bcc;
        case 0x428bd0u: goto label_428bd0;
        case 0x428bd4u: goto label_428bd4;
        case 0x428bd8u: goto label_428bd8;
        case 0x428bdcu: goto label_428bdc;
        case 0x428be0u: goto label_428be0;
        case 0x428be4u: goto label_428be4;
        case 0x428be8u: goto label_428be8;
        case 0x428becu: goto label_428bec;
        case 0x428bf0u: goto label_428bf0;
        case 0x428bf4u: goto label_428bf4;
        case 0x428bf8u: goto label_428bf8;
        case 0x428bfcu: goto label_428bfc;
        case 0x428c00u: goto label_428c00;
        case 0x428c04u: goto label_428c04;
        case 0x428c08u: goto label_428c08;
        case 0x428c0cu: goto label_428c0c;
        case 0x428c10u: goto label_428c10;
        case 0x428c14u: goto label_428c14;
        case 0x428c18u: goto label_428c18;
        case 0x428c1cu: goto label_428c1c;
        case 0x428c20u: goto label_428c20;
        case 0x428c24u: goto label_428c24;
        case 0x428c28u: goto label_428c28;
        case 0x428c2cu: goto label_428c2c;
        case 0x428c30u: goto label_428c30;
        case 0x428c34u: goto label_428c34;
        case 0x428c38u: goto label_428c38;
        case 0x428c3cu: goto label_428c3c;
        case 0x428c40u: goto label_428c40;
        case 0x428c44u: goto label_428c44;
        case 0x428c48u: goto label_428c48;
        case 0x428c4cu: goto label_428c4c;
        case 0x428c50u: goto label_428c50;
        case 0x428c54u: goto label_428c54;
        case 0x428c58u: goto label_428c58;
        case 0x428c5cu: goto label_428c5c;
        case 0x428c60u: goto label_428c60;
        case 0x428c64u: goto label_428c64;
        case 0x428c68u: goto label_428c68;
        case 0x428c6cu: goto label_428c6c;
        case 0x428c70u: goto label_428c70;
        case 0x428c74u: goto label_428c74;
        case 0x428c78u: goto label_428c78;
        case 0x428c7cu: goto label_428c7c;
        case 0x428c80u: goto label_428c80;
        case 0x428c84u: goto label_428c84;
        case 0x428c88u: goto label_428c88;
        case 0x428c8cu: goto label_428c8c;
        case 0x428c90u: goto label_428c90;
        case 0x428c94u: goto label_428c94;
        case 0x428c98u: goto label_428c98;
        case 0x428c9cu: goto label_428c9c;
        case 0x428ca0u: goto label_428ca0;
        case 0x428ca4u: goto label_428ca4;
        case 0x428ca8u: goto label_428ca8;
        case 0x428cacu: goto label_428cac;
        case 0x428cb0u: goto label_428cb0;
        case 0x428cb4u: goto label_428cb4;
        case 0x428cb8u: goto label_428cb8;
        case 0x428cbcu: goto label_428cbc;
        case 0x428cc0u: goto label_428cc0;
        case 0x428cc4u: goto label_428cc4;
        case 0x428cc8u: goto label_428cc8;
        case 0x428cccu: goto label_428ccc;
        case 0x428cd0u: goto label_428cd0;
        case 0x428cd4u: goto label_428cd4;
        case 0x428cd8u: goto label_428cd8;
        case 0x428cdcu: goto label_428cdc;
        case 0x428ce0u: goto label_428ce0;
        case 0x428ce4u: goto label_428ce4;
        case 0x428ce8u: goto label_428ce8;
        case 0x428cecu: goto label_428cec;
        case 0x428cf0u: goto label_428cf0;
        case 0x428cf4u: goto label_428cf4;
        case 0x428cf8u: goto label_428cf8;
        case 0x428cfcu: goto label_428cfc;
        case 0x428d00u: goto label_428d00;
        case 0x428d04u: goto label_428d04;
        case 0x428d08u: goto label_428d08;
        case 0x428d0cu: goto label_428d0c;
        case 0x428d10u: goto label_428d10;
        case 0x428d14u: goto label_428d14;
        case 0x428d18u: goto label_428d18;
        case 0x428d1cu: goto label_428d1c;
        case 0x428d20u: goto label_428d20;
        case 0x428d24u: goto label_428d24;
        case 0x428d28u: goto label_428d28;
        case 0x428d2cu: goto label_428d2c;
        case 0x428d30u: goto label_428d30;
        case 0x428d34u: goto label_428d34;
        case 0x428d38u: goto label_428d38;
        case 0x428d3cu: goto label_428d3c;
        case 0x428d40u: goto label_428d40;
        case 0x428d44u: goto label_428d44;
        case 0x428d48u: goto label_428d48;
        case 0x428d4cu: goto label_428d4c;
        case 0x428d50u: goto label_428d50;
        case 0x428d54u: goto label_428d54;
        case 0x428d58u: goto label_428d58;
        case 0x428d5cu: goto label_428d5c;
        case 0x428d60u: goto label_428d60;
        case 0x428d64u: goto label_428d64;
        case 0x428d68u: goto label_428d68;
        case 0x428d6cu: goto label_428d6c;
        case 0x428d70u: goto label_428d70;
        case 0x428d74u: goto label_428d74;
        case 0x428d78u: goto label_428d78;
        case 0x428d7cu: goto label_428d7c;
        case 0x428d80u: goto label_428d80;
        case 0x428d84u: goto label_428d84;
        case 0x428d88u: goto label_428d88;
        case 0x428d8cu: goto label_428d8c;
        case 0x428d90u: goto label_428d90;
        case 0x428d94u: goto label_428d94;
        case 0x428d98u: goto label_428d98;
        case 0x428d9cu: goto label_428d9c;
        case 0x428da0u: goto label_428da0;
        case 0x428da4u: goto label_428da4;
        case 0x428da8u: goto label_428da8;
        case 0x428dacu: goto label_428dac;
        case 0x428db0u: goto label_428db0;
        case 0x428db4u: goto label_428db4;
        case 0x428db8u: goto label_428db8;
        case 0x428dbcu: goto label_428dbc;
        case 0x428dc0u: goto label_428dc0;
        case 0x428dc4u: goto label_428dc4;
        case 0x428dc8u: goto label_428dc8;
        case 0x428dccu: goto label_428dcc;
        case 0x428dd0u: goto label_428dd0;
        case 0x428dd4u: goto label_428dd4;
        case 0x428dd8u: goto label_428dd8;
        case 0x428ddcu: goto label_428ddc;
        case 0x428de0u: goto label_428de0;
        case 0x428de4u: goto label_428de4;
        case 0x428de8u: goto label_428de8;
        case 0x428decu: goto label_428dec;
        case 0x428df0u: goto label_428df0;
        case 0x428df4u: goto label_428df4;
        case 0x428df8u: goto label_428df8;
        case 0x428dfcu: goto label_428dfc;
        case 0x428e00u: goto label_428e00;
        case 0x428e04u: goto label_428e04;
        case 0x428e08u: goto label_428e08;
        case 0x428e0cu: goto label_428e0c;
        case 0x428e10u: goto label_428e10;
        case 0x428e14u: goto label_428e14;
        case 0x428e18u: goto label_428e18;
        case 0x428e1cu: goto label_428e1c;
        case 0x428e20u: goto label_428e20;
        case 0x428e24u: goto label_428e24;
        case 0x428e28u: goto label_428e28;
        case 0x428e2cu: goto label_428e2c;
        case 0x428e30u: goto label_428e30;
        case 0x428e34u: goto label_428e34;
        case 0x428e38u: goto label_428e38;
        case 0x428e3cu: goto label_428e3c;
        case 0x428e40u: goto label_428e40;
        case 0x428e44u: goto label_428e44;
        case 0x428e48u: goto label_428e48;
        case 0x428e4cu: goto label_428e4c;
        case 0x428e50u: goto label_428e50;
        case 0x428e54u: goto label_428e54;
        case 0x428e58u: goto label_428e58;
        case 0x428e5cu: goto label_428e5c;
        case 0x428e60u: goto label_428e60;
        case 0x428e64u: goto label_428e64;
        case 0x428e68u: goto label_428e68;
        case 0x428e6cu: goto label_428e6c;
        case 0x428e70u: goto label_428e70;
        case 0x428e74u: goto label_428e74;
        case 0x428e78u: goto label_428e78;
        case 0x428e7cu: goto label_428e7c;
        case 0x428e80u: goto label_428e80;
        case 0x428e84u: goto label_428e84;
        case 0x428e88u: goto label_428e88;
        case 0x428e8cu: goto label_428e8c;
        case 0x428e90u: goto label_428e90;
        case 0x428e94u: goto label_428e94;
        case 0x428e98u: goto label_428e98;
        case 0x428e9cu: goto label_428e9c;
        case 0x428ea0u: goto label_428ea0;
        case 0x428ea4u: goto label_428ea4;
        case 0x428ea8u: goto label_428ea8;
        case 0x428eacu: goto label_428eac;
        case 0x428eb0u: goto label_428eb0;
        case 0x428eb4u: goto label_428eb4;
        case 0x428eb8u: goto label_428eb8;
        case 0x428ebcu: goto label_428ebc;
        case 0x428ec0u: goto label_428ec0;
        case 0x428ec4u: goto label_428ec4;
        case 0x428ec8u: goto label_428ec8;
        case 0x428eccu: goto label_428ecc;
        case 0x428ed0u: goto label_428ed0;
        case 0x428ed4u: goto label_428ed4;
        case 0x428ed8u: goto label_428ed8;
        case 0x428edcu: goto label_428edc;
        case 0x428ee0u: goto label_428ee0;
        case 0x428ee4u: goto label_428ee4;
        case 0x428ee8u: goto label_428ee8;
        case 0x428eecu: goto label_428eec;
        case 0x428ef0u: goto label_428ef0;
        case 0x428ef4u: goto label_428ef4;
        case 0x428ef8u: goto label_428ef8;
        case 0x428efcu: goto label_428efc;
        case 0x428f00u: goto label_428f00;
        case 0x428f04u: goto label_428f04;
        case 0x428f08u: goto label_428f08;
        case 0x428f0cu: goto label_428f0c;
        case 0x428f10u: goto label_428f10;
        case 0x428f14u: goto label_428f14;
        case 0x428f18u: goto label_428f18;
        case 0x428f1cu: goto label_428f1c;
        case 0x428f20u: goto label_428f20;
        case 0x428f24u: goto label_428f24;
        case 0x428f28u: goto label_428f28;
        case 0x428f2cu: goto label_428f2c;
        case 0x428f30u: goto label_428f30;
        case 0x428f34u: goto label_428f34;
        case 0x428f38u: goto label_428f38;
        case 0x428f3cu: goto label_428f3c;
        case 0x428f40u: goto label_428f40;
        case 0x428f44u: goto label_428f44;
        case 0x428f48u: goto label_428f48;
        case 0x428f4cu: goto label_428f4c;
        case 0x428f50u: goto label_428f50;
        case 0x428f54u: goto label_428f54;
        case 0x428f58u: goto label_428f58;
        case 0x428f5cu: goto label_428f5c;
        case 0x428f60u: goto label_428f60;
        case 0x428f64u: goto label_428f64;
        case 0x428f68u: goto label_428f68;
        case 0x428f6cu: goto label_428f6c;
        case 0x428f70u: goto label_428f70;
        case 0x428f74u: goto label_428f74;
        case 0x428f78u: goto label_428f78;
        case 0x428f7cu: goto label_428f7c;
        case 0x428f80u: goto label_428f80;
        case 0x428f84u: goto label_428f84;
        case 0x428f88u: goto label_428f88;
        case 0x428f8cu: goto label_428f8c;
        case 0x428f90u: goto label_428f90;
        case 0x428f94u: goto label_428f94;
        case 0x428f98u: goto label_428f98;
        case 0x428f9cu: goto label_428f9c;
        case 0x428fa0u: goto label_428fa0;
        case 0x428fa4u: goto label_428fa4;
        case 0x428fa8u: goto label_428fa8;
        case 0x428facu: goto label_428fac;
        case 0x428fb0u: goto label_428fb0;
        case 0x428fb4u: goto label_428fb4;
        case 0x428fb8u: goto label_428fb8;
        case 0x428fbcu: goto label_428fbc;
        case 0x428fc0u: goto label_428fc0;
        case 0x428fc4u: goto label_428fc4;
        case 0x428fc8u: goto label_428fc8;
        case 0x428fccu: goto label_428fcc;
        case 0x428fd0u: goto label_428fd0;
        case 0x428fd4u: goto label_428fd4;
        case 0x428fd8u: goto label_428fd8;
        case 0x428fdcu: goto label_428fdc;
        case 0x428fe0u: goto label_428fe0;
        case 0x428fe4u: goto label_428fe4;
        case 0x428fe8u: goto label_428fe8;
        case 0x428fecu: goto label_428fec;
        case 0x428ff0u: goto label_428ff0;
        case 0x428ff4u: goto label_428ff4;
        case 0x428ff8u: goto label_428ff8;
        case 0x428ffcu: goto label_428ffc;
        case 0x429000u: goto label_429000;
        case 0x429004u: goto label_429004;
        case 0x429008u: goto label_429008;
        case 0x42900cu: goto label_42900c;
        case 0x429010u: goto label_429010;
        case 0x429014u: goto label_429014;
        case 0x429018u: goto label_429018;
        case 0x42901cu: goto label_42901c;
        case 0x429020u: goto label_429020;
        case 0x429024u: goto label_429024;
        case 0x429028u: goto label_429028;
        case 0x42902cu: goto label_42902c;
        case 0x429030u: goto label_429030;
        case 0x429034u: goto label_429034;
        case 0x429038u: goto label_429038;
        case 0x42903cu: goto label_42903c;
        case 0x429040u: goto label_429040;
        case 0x429044u: goto label_429044;
        case 0x429048u: goto label_429048;
        case 0x42904cu: goto label_42904c;
        case 0x429050u: goto label_429050;
        case 0x429054u: goto label_429054;
        case 0x429058u: goto label_429058;
        case 0x42905cu: goto label_42905c;
        case 0x429060u: goto label_429060;
        case 0x429064u: goto label_429064;
        case 0x429068u: goto label_429068;
        case 0x42906cu: goto label_42906c;
        case 0x429070u: goto label_429070;
        case 0x429074u: goto label_429074;
        case 0x429078u: goto label_429078;
        case 0x42907cu: goto label_42907c;
        case 0x429080u: goto label_429080;
        case 0x429084u: goto label_429084;
        case 0x429088u: goto label_429088;
        case 0x42908cu: goto label_42908c;
        case 0x429090u: goto label_429090;
        case 0x429094u: goto label_429094;
        case 0x429098u: goto label_429098;
        case 0x42909cu: goto label_42909c;
        case 0x4290a0u: goto label_4290a0;
        case 0x4290a4u: goto label_4290a4;
        case 0x4290a8u: goto label_4290a8;
        case 0x4290acu: goto label_4290ac;
        case 0x4290b0u: goto label_4290b0;
        case 0x4290b4u: goto label_4290b4;
        case 0x4290b8u: goto label_4290b8;
        case 0x4290bcu: goto label_4290bc;
        case 0x4290c0u: goto label_4290c0;
        case 0x4290c4u: goto label_4290c4;
        case 0x4290c8u: goto label_4290c8;
        case 0x4290ccu: goto label_4290cc;
        case 0x4290d0u: goto label_4290d0;
        case 0x4290d4u: goto label_4290d4;
        case 0x4290d8u: goto label_4290d8;
        case 0x4290dcu: goto label_4290dc;
        case 0x4290e0u: goto label_4290e0;
        case 0x4290e4u: goto label_4290e4;
        case 0x4290e8u: goto label_4290e8;
        case 0x4290ecu: goto label_4290ec;
        case 0x4290f0u: goto label_4290f0;
        case 0x4290f4u: goto label_4290f4;
        case 0x4290f8u: goto label_4290f8;
        case 0x4290fcu: goto label_4290fc;
        case 0x429100u: goto label_429100;
        case 0x429104u: goto label_429104;
        case 0x429108u: goto label_429108;
        case 0x42910cu: goto label_42910c;
        case 0x429110u: goto label_429110;
        case 0x429114u: goto label_429114;
        case 0x429118u: goto label_429118;
        case 0x42911cu: goto label_42911c;
        case 0x429120u: goto label_429120;
        case 0x429124u: goto label_429124;
        case 0x429128u: goto label_429128;
        case 0x42912cu: goto label_42912c;
        case 0x429130u: goto label_429130;
        case 0x429134u: goto label_429134;
        case 0x429138u: goto label_429138;
        case 0x42913cu: goto label_42913c;
        case 0x429140u: goto label_429140;
        case 0x429144u: goto label_429144;
        case 0x429148u: goto label_429148;
        case 0x42914cu: goto label_42914c;
        case 0x429150u: goto label_429150;
        case 0x429154u: goto label_429154;
        case 0x429158u: goto label_429158;
        case 0x42915cu: goto label_42915c;
        case 0x429160u: goto label_429160;
        case 0x429164u: goto label_429164;
        case 0x429168u: goto label_429168;
        case 0x42916cu: goto label_42916c;
        case 0x429170u: goto label_429170;
        case 0x429174u: goto label_429174;
        case 0x429178u: goto label_429178;
        case 0x42917cu: goto label_42917c;
        case 0x429180u: goto label_429180;
        case 0x429184u: goto label_429184;
        case 0x429188u: goto label_429188;
        case 0x42918cu: goto label_42918c;
        case 0x429190u: goto label_429190;
        case 0x429194u: goto label_429194;
        case 0x429198u: goto label_429198;
        case 0x42919cu: goto label_42919c;
        case 0x4291a0u: goto label_4291a0;
        case 0x4291a4u: goto label_4291a4;
        case 0x4291a8u: goto label_4291a8;
        case 0x4291acu: goto label_4291ac;
        case 0x4291b0u: goto label_4291b0;
        case 0x4291b4u: goto label_4291b4;
        case 0x4291b8u: goto label_4291b8;
        case 0x4291bcu: goto label_4291bc;
        case 0x4291c0u: goto label_4291c0;
        case 0x4291c4u: goto label_4291c4;
        case 0x4291c8u: goto label_4291c8;
        case 0x4291ccu: goto label_4291cc;
        case 0x4291d0u: goto label_4291d0;
        case 0x4291d4u: goto label_4291d4;
        case 0x4291d8u: goto label_4291d8;
        case 0x4291dcu: goto label_4291dc;
        case 0x4291e0u: goto label_4291e0;
        case 0x4291e4u: goto label_4291e4;
        case 0x4291e8u: goto label_4291e8;
        case 0x4291ecu: goto label_4291ec;
        case 0x4291f0u: goto label_4291f0;
        case 0x4291f4u: goto label_4291f4;
        case 0x4291f8u: goto label_4291f8;
        case 0x4291fcu: goto label_4291fc;
        case 0x429200u: goto label_429200;
        case 0x429204u: goto label_429204;
        case 0x429208u: goto label_429208;
        case 0x42920cu: goto label_42920c;
        case 0x429210u: goto label_429210;
        case 0x429214u: goto label_429214;
        case 0x429218u: goto label_429218;
        case 0x42921cu: goto label_42921c;
        case 0x429220u: goto label_429220;
        case 0x429224u: goto label_429224;
        case 0x429228u: goto label_429228;
        case 0x42922cu: goto label_42922c;
        case 0x429230u: goto label_429230;
        case 0x429234u: goto label_429234;
        case 0x429238u: goto label_429238;
        case 0x42923cu: goto label_42923c;
        case 0x429240u: goto label_429240;
        case 0x429244u: goto label_429244;
        case 0x429248u: goto label_429248;
        case 0x42924cu: goto label_42924c;
        case 0x429250u: goto label_429250;
        case 0x429254u: goto label_429254;
        case 0x429258u: goto label_429258;
        case 0x42925cu: goto label_42925c;
        case 0x429260u: goto label_429260;
        case 0x429264u: goto label_429264;
        case 0x429268u: goto label_429268;
        case 0x42926cu: goto label_42926c;
        case 0x429270u: goto label_429270;
        case 0x429274u: goto label_429274;
        case 0x429278u: goto label_429278;
        case 0x42927cu: goto label_42927c;
        case 0x429280u: goto label_429280;
        case 0x429284u: goto label_429284;
        case 0x429288u: goto label_429288;
        case 0x42928cu: goto label_42928c;
        case 0x429290u: goto label_429290;
        case 0x429294u: goto label_429294;
        case 0x429298u: goto label_429298;
        case 0x42929cu: goto label_42929c;
        case 0x4292a0u: goto label_4292a0;
        case 0x4292a4u: goto label_4292a4;
        case 0x4292a8u: goto label_4292a8;
        case 0x4292acu: goto label_4292ac;
        case 0x4292b0u: goto label_4292b0;
        case 0x4292b4u: goto label_4292b4;
        case 0x4292b8u: goto label_4292b8;
        case 0x4292bcu: goto label_4292bc;
        case 0x4292c0u: goto label_4292c0;
        case 0x4292c4u: goto label_4292c4;
        case 0x4292c8u: goto label_4292c8;
        case 0x4292ccu: goto label_4292cc;
        case 0x4292d0u: goto label_4292d0;
        case 0x4292d4u: goto label_4292d4;
        case 0x4292d8u: goto label_4292d8;
        case 0x4292dcu: goto label_4292dc;
        case 0x4292e0u: goto label_4292e0;
        case 0x4292e4u: goto label_4292e4;
        case 0x4292e8u: goto label_4292e8;
        case 0x4292ecu: goto label_4292ec;
        case 0x4292f0u: goto label_4292f0;
        case 0x4292f4u: goto label_4292f4;
        case 0x4292f8u: goto label_4292f8;
        case 0x4292fcu: goto label_4292fc;
        case 0x429300u: goto label_429300;
        case 0x429304u: goto label_429304;
        case 0x429308u: goto label_429308;
        case 0x42930cu: goto label_42930c;
        case 0x429310u: goto label_429310;
        case 0x429314u: goto label_429314;
        case 0x429318u: goto label_429318;
        case 0x42931cu: goto label_42931c;
        case 0x429320u: goto label_429320;
        case 0x429324u: goto label_429324;
        case 0x429328u: goto label_429328;
        case 0x42932cu: goto label_42932c;
        case 0x429330u: goto label_429330;
        case 0x429334u: goto label_429334;
        case 0x429338u: goto label_429338;
        case 0x42933cu: goto label_42933c;
        case 0x429340u: goto label_429340;
        case 0x429344u: goto label_429344;
        case 0x429348u: goto label_429348;
        case 0x42934cu: goto label_42934c;
        case 0x429350u: goto label_429350;
        case 0x429354u: goto label_429354;
        case 0x429358u: goto label_429358;
        case 0x42935cu: goto label_42935c;
        case 0x429360u: goto label_429360;
        case 0x429364u: goto label_429364;
        case 0x429368u: goto label_429368;
        case 0x42936cu: goto label_42936c;
        case 0x429370u: goto label_429370;
        case 0x429374u: goto label_429374;
        case 0x429378u: goto label_429378;
        case 0x42937cu: goto label_42937c;
        case 0x429380u: goto label_429380;
        case 0x429384u: goto label_429384;
        case 0x429388u: goto label_429388;
        case 0x42938cu: goto label_42938c;
        case 0x429390u: goto label_429390;
        case 0x429394u: goto label_429394;
        case 0x429398u: goto label_429398;
        case 0x42939cu: goto label_42939c;
        case 0x4293a0u: goto label_4293a0;
        case 0x4293a4u: goto label_4293a4;
        case 0x4293a8u: goto label_4293a8;
        case 0x4293acu: goto label_4293ac;
        case 0x4293b0u: goto label_4293b0;
        case 0x4293b4u: goto label_4293b4;
        case 0x4293b8u: goto label_4293b8;
        case 0x4293bcu: goto label_4293bc;
        case 0x4293c0u: goto label_4293c0;
        case 0x4293c4u: goto label_4293c4;
        case 0x4293c8u: goto label_4293c8;
        case 0x4293ccu: goto label_4293cc;
        case 0x4293d0u: goto label_4293d0;
        case 0x4293d4u: goto label_4293d4;
        case 0x4293d8u: goto label_4293d8;
        case 0x4293dcu: goto label_4293dc;
        case 0x4293e0u: goto label_4293e0;
        case 0x4293e4u: goto label_4293e4;
        case 0x4293e8u: goto label_4293e8;
        case 0x4293ecu: goto label_4293ec;
        case 0x4293f0u: goto label_4293f0;
        case 0x4293f4u: goto label_4293f4;
        case 0x4293f8u: goto label_4293f8;
        case 0x4293fcu: goto label_4293fc;
        case 0x429400u: goto label_429400;
        case 0x429404u: goto label_429404;
        case 0x429408u: goto label_429408;
        case 0x42940cu: goto label_42940c;
        case 0x429410u: goto label_429410;
        case 0x429414u: goto label_429414;
        case 0x429418u: goto label_429418;
        case 0x42941cu: goto label_42941c;
        case 0x429420u: goto label_429420;
        case 0x429424u: goto label_429424;
        case 0x429428u: goto label_429428;
        case 0x42942cu: goto label_42942c;
        case 0x429430u: goto label_429430;
        case 0x429434u: goto label_429434;
        case 0x429438u: goto label_429438;
        case 0x42943cu: goto label_42943c;
        case 0x429440u: goto label_429440;
        case 0x429444u: goto label_429444;
        case 0x429448u: goto label_429448;
        case 0x42944cu: goto label_42944c;
        case 0x429450u: goto label_429450;
        case 0x429454u: goto label_429454;
        case 0x429458u: goto label_429458;
        case 0x42945cu: goto label_42945c;
        case 0x429460u: goto label_429460;
        case 0x429464u: goto label_429464;
        case 0x429468u: goto label_429468;
        case 0x42946cu: goto label_42946c;
        case 0x429470u: goto label_429470;
        case 0x429474u: goto label_429474;
        case 0x429478u: goto label_429478;
        case 0x42947cu: goto label_42947c;
        case 0x429480u: goto label_429480;
        case 0x429484u: goto label_429484;
        case 0x429488u: goto label_429488;
        case 0x42948cu: goto label_42948c;
        case 0x429490u: goto label_429490;
        case 0x429494u: goto label_429494;
        case 0x429498u: goto label_429498;
        case 0x42949cu: goto label_42949c;
        case 0x4294a0u: goto label_4294a0;
        case 0x4294a4u: goto label_4294a4;
        case 0x4294a8u: goto label_4294a8;
        case 0x4294acu: goto label_4294ac;
        case 0x4294b0u: goto label_4294b0;
        case 0x4294b4u: goto label_4294b4;
        case 0x4294b8u: goto label_4294b8;
        case 0x4294bcu: goto label_4294bc;
        case 0x4294c0u: goto label_4294c0;
        case 0x4294c4u: goto label_4294c4;
        case 0x4294c8u: goto label_4294c8;
        case 0x4294ccu: goto label_4294cc;
        case 0x4294d0u: goto label_4294d0;
        case 0x4294d4u: goto label_4294d4;
        case 0x4294d8u: goto label_4294d8;
        case 0x4294dcu: goto label_4294dc;
        case 0x4294e0u: goto label_4294e0;
        case 0x4294e4u: goto label_4294e4;
        case 0x4294e8u: goto label_4294e8;
        case 0x4294ecu: goto label_4294ec;
        case 0x4294f0u: goto label_4294f0;
        case 0x4294f4u: goto label_4294f4;
        case 0x4294f8u: goto label_4294f8;
        case 0x4294fcu: goto label_4294fc;
        case 0x429500u: goto label_429500;
        case 0x429504u: goto label_429504;
        case 0x429508u: goto label_429508;
        case 0x42950cu: goto label_42950c;
        case 0x429510u: goto label_429510;
        case 0x429514u: goto label_429514;
        case 0x429518u: goto label_429518;
        case 0x42951cu: goto label_42951c;
        case 0x429520u: goto label_429520;
        case 0x429524u: goto label_429524;
        case 0x429528u: goto label_429528;
        case 0x42952cu: goto label_42952c;
        case 0x429530u: goto label_429530;
        case 0x429534u: goto label_429534;
        case 0x429538u: goto label_429538;
        case 0x42953cu: goto label_42953c;
        case 0x429540u: goto label_429540;
        case 0x429544u: goto label_429544;
        case 0x429548u: goto label_429548;
        case 0x42954cu: goto label_42954c;
        case 0x429550u: goto label_429550;
        case 0x429554u: goto label_429554;
        case 0x429558u: goto label_429558;
        case 0x42955cu: goto label_42955c;
        case 0x429560u: goto label_429560;
        case 0x429564u: goto label_429564;
        case 0x429568u: goto label_429568;
        case 0x42956cu: goto label_42956c;
        case 0x429570u: goto label_429570;
        case 0x429574u: goto label_429574;
        case 0x429578u: goto label_429578;
        case 0x42957cu: goto label_42957c;
        case 0x429580u: goto label_429580;
        case 0x429584u: goto label_429584;
        case 0x429588u: goto label_429588;
        case 0x42958cu: goto label_42958c;
        case 0x429590u: goto label_429590;
        case 0x429594u: goto label_429594;
        case 0x429598u: goto label_429598;
        case 0x42959cu: goto label_42959c;
        case 0x4295a0u: goto label_4295a0;
        case 0x4295a4u: goto label_4295a4;
        case 0x4295a8u: goto label_4295a8;
        case 0x4295acu: goto label_4295ac;
        case 0x4295b0u: goto label_4295b0;
        case 0x4295b4u: goto label_4295b4;
        case 0x4295b8u: goto label_4295b8;
        case 0x4295bcu: goto label_4295bc;
        case 0x4295c0u: goto label_4295c0;
        case 0x4295c4u: goto label_4295c4;
        case 0x4295c8u: goto label_4295c8;
        case 0x4295ccu: goto label_4295cc;
        case 0x4295d0u: goto label_4295d0;
        case 0x4295d4u: goto label_4295d4;
        case 0x4295d8u: goto label_4295d8;
        case 0x4295dcu: goto label_4295dc;
        case 0x4295e0u: goto label_4295e0;
        case 0x4295e4u: goto label_4295e4;
        case 0x4295e8u: goto label_4295e8;
        case 0x4295ecu: goto label_4295ec;
        case 0x4295f0u: goto label_4295f0;
        case 0x4295f4u: goto label_4295f4;
        case 0x4295f8u: goto label_4295f8;
        case 0x4295fcu: goto label_4295fc;
        case 0x429600u: goto label_429600;
        case 0x429604u: goto label_429604;
        case 0x429608u: goto label_429608;
        case 0x42960cu: goto label_42960c;
        case 0x429610u: goto label_429610;
        case 0x429614u: goto label_429614;
        case 0x429618u: goto label_429618;
        case 0x42961cu: goto label_42961c;
        case 0x429620u: goto label_429620;
        case 0x429624u: goto label_429624;
        case 0x429628u: goto label_429628;
        case 0x42962cu: goto label_42962c;
        case 0x429630u: goto label_429630;
        case 0x429634u: goto label_429634;
        case 0x429638u: goto label_429638;
        case 0x42963cu: goto label_42963c;
        case 0x429640u: goto label_429640;
        case 0x429644u: goto label_429644;
        case 0x429648u: goto label_429648;
        case 0x42964cu: goto label_42964c;
        case 0x429650u: goto label_429650;
        case 0x429654u: goto label_429654;
        case 0x429658u: goto label_429658;
        case 0x42965cu: goto label_42965c;
        case 0x429660u: goto label_429660;
        case 0x429664u: goto label_429664;
        case 0x429668u: goto label_429668;
        case 0x42966cu: goto label_42966c;
        case 0x429670u: goto label_429670;
        case 0x429674u: goto label_429674;
        case 0x429678u: goto label_429678;
        case 0x42967cu: goto label_42967c;
        case 0x429680u: goto label_429680;
        case 0x429684u: goto label_429684;
        case 0x429688u: goto label_429688;
        case 0x42968cu: goto label_42968c;
        case 0x429690u: goto label_429690;
        case 0x429694u: goto label_429694;
        case 0x429698u: goto label_429698;
        case 0x42969cu: goto label_42969c;
        case 0x4296a0u: goto label_4296a0;
        case 0x4296a4u: goto label_4296a4;
        case 0x4296a8u: goto label_4296a8;
        case 0x4296acu: goto label_4296ac;
        case 0x4296b0u: goto label_4296b0;
        case 0x4296b4u: goto label_4296b4;
        case 0x4296b8u: goto label_4296b8;
        case 0x4296bcu: goto label_4296bc;
        case 0x4296c0u: goto label_4296c0;
        case 0x4296c4u: goto label_4296c4;
        case 0x4296c8u: goto label_4296c8;
        case 0x4296ccu: goto label_4296cc;
        case 0x4296d0u: goto label_4296d0;
        case 0x4296d4u: goto label_4296d4;
        case 0x4296d8u: goto label_4296d8;
        case 0x4296dcu: goto label_4296dc;
        case 0x4296e0u: goto label_4296e0;
        case 0x4296e4u: goto label_4296e4;
        case 0x4296e8u: goto label_4296e8;
        case 0x4296ecu: goto label_4296ec;
        case 0x4296f0u: goto label_4296f0;
        case 0x4296f4u: goto label_4296f4;
        case 0x4296f8u: goto label_4296f8;
        case 0x4296fcu: goto label_4296fc;
        case 0x429700u: goto label_429700;
        case 0x429704u: goto label_429704;
        case 0x429708u: goto label_429708;
        case 0x42970cu: goto label_42970c;
        case 0x429710u: goto label_429710;
        case 0x429714u: goto label_429714;
        case 0x429718u: goto label_429718;
        case 0x42971cu: goto label_42971c;
        case 0x429720u: goto label_429720;
        case 0x429724u: goto label_429724;
        case 0x429728u: goto label_429728;
        case 0x42972cu: goto label_42972c;
        case 0x429730u: goto label_429730;
        case 0x429734u: goto label_429734;
        case 0x429738u: goto label_429738;
        case 0x42973cu: goto label_42973c;
        case 0x429740u: goto label_429740;
        case 0x429744u: goto label_429744;
        case 0x429748u: goto label_429748;
        case 0x42974cu: goto label_42974c;
        case 0x429750u: goto label_429750;
        case 0x429754u: goto label_429754;
        case 0x429758u: goto label_429758;
        case 0x42975cu: goto label_42975c;
        case 0x429760u: goto label_429760;
        case 0x429764u: goto label_429764;
        case 0x429768u: goto label_429768;
        case 0x42976cu: goto label_42976c;
        case 0x429770u: goto label_429770;
        case 0x429774u: goto label_429774;
        case 0x429778u: goto label_429778;
        case 0x42977cu: goto label_42977c;
        case 0x429780u: goto label_429780;
        case 0x429784u: goto label_429784;
        case 0x429788u: goto label_429788;
        case 0x42978cu: goto label_42978c;
        case 0x429790u: goto label_429790;
        case 0x429794u: goto label_429794;
        case 0x429798u: goto label_429798;
        case 0x42979cu: goto label_42979c;
        case 0x4297a0u: goto label_4297a0;
        case 0x4297a4u: goto label_4297a4;
        case 0x4297a8u: goto label_4297a8;
        case 0x4297acu: goto label_4297ac;
        case 0x4297b0u: goto label_4297b0;
        case 0x4297b4u: goto label_4297b4;
        case 0x4297b8u: goto label_4297b8;
        case 0x4297bcu: goto label_4297bc;
        case 0x4297c0u: goto label_4297c0;
        case 0x4297c4u: goto label_4297c4;
        case 0x4297c8u: goto label_4297c8;
        case 0x4297ccu: goto label_4297cc;
        case 0x4297d0u: goto label_4297d0;
        case 0x4297d4u: goto label_4297d4;
        case 0x4297d8u: goto label_4297d8;
        case 0x4297dcu: goto label_4297dc;
        case 0x4297e0u: goto label_4297e0;
        case 0x4297e4u: goto label_4297e4;
        case 0x4297e8u: goto label_4297e8;
        case 0x4297ecu: goto label_4297ec;
        case 0x4297f0u: goto label_4297f0;
        case 0x4297f4u: goto label_4297f4;
        case 0x4297f8u: goto label_4297f8;
        case 0x4297fcu: goto label_4297fc;
        case 0x429800u: goto label_429800;
        case 0x429804u: goto label_429804;
        case 0x429808u: goto label_429808;
        case 0x42980cu: goto label_42980c;
        case 0x429810u: goto label_429810;
        case 0x429814u: goto label_429814;
        case 0x429818u: goto label_429818;
        case 0x42981cu: goto label_42981c;
        case 0x429820u: goto label_429820;
        case 0x429824u: goto label_429824;
        case 0x429828u: goto label_429828;
        case 0x42982cu: goto label_42982c;
        case 0x429830u: goto label_429830;
        case 0x429834u: goto label_429834;
        case 0x429838u: goto label_429838;
        case 0x42983cu: goto label_42983c;
        case 0x429840u: goto label_429840;
        case 0x429844u: goto label_429844;
        case 0x429848u: goto label_429848;
        case 0x42984cu: goto label_42984c;
        case 0x429850u: goto label_429850;
        case 0x429854u: goto label_429854;
        case 0x429858u: goto label_429858;
        case 0x42985cu: goto label_42985c;
        case 0x429860u: goto label_429860;
        case 0x429864u: goto label_429864;
        case 0x429868u: goto label_429868;
        case 0x42986cu: goto label_42986c;
        case 0x429870u: goto label_429870;
        case 0x429874u: goto label_429874;
        case 0x429878u: goto label_429878;
        case 0x42987cu: goto label_42987c;
        case 0x429880u: goto label_429880;
        case 0x429884u: goto label_429884;
        case 0x429888u: goto label_429888;
        case 0x42988cu: goto label_42988c;
        case 0x429890u: goto label_429890;
        case 0x429894u: goto label_429894;
        case 0x429898u: goto label_429898;
        case 0x42989cu: goto label_42989c;
        case 0x4298a0u: goto label_4298a0;
        case 0x4298a4u: goto label_4298a4;
        case 0x4298a8u: goto label_4298a8;
        case 0x4298acu: goto label_4298ac;
        case 0x4298b0u: goto label_4298b0;
        case 0x4298b4u: goto label_4298b4;
        case 0x4298b8u: goto label_4298b8;
        case 0x4298bcu: goto label_4298bc;
        case 0x4298c0u: goto label_4298c0;
        case 0x4298c4u: goto label_4298c4;
        case 0x4298c8u: goto label_4298c8;
        case 0x4298ccu: goto label_4298cc;
        case 0x4298d0u: goto label_4298d0;
        case 0x4298d4u: goto label_4298d4;
        case 0x4298d8u: goto label_4298d8;
        case 0x4298dcu: goto label_4298dc;
        case 0x4298e0u: goto label_4298e0;
        case 0x4298e4u: goto label_4298e4;
        case 0x4298e8u: goto label_4298e8;
        case 0x4298ecu: goto label_4298ec;
        case 0x4298f0u: goto label_4298f0;
        case 0x4298f4u: goto label_4298f4;
        case 0x4298f8u: goto label_4298f8;
        case 0x4298fcu: goto label_4298fc;
        case 0x429900u: goto label_429900;
        case 0x429904u: goto label_429904;
        case 0x429908u: goto label_429908;
        case 0x42990cu: goto label_42990c;
        case 0x429910u: goto label_429910;
        case 0x429914u: goto label_429914;
        case 0x429918u: goto label_429918;
        case 0x42991cu: goto label_42991c;
        case 0x429920u: goto label_429920;
        case 0x429924u: goto label_429924;
        case 0x429928u: goto label_429928;
        case 0x42992cu: goto label_42992c;
        case 0x429930u: goto label_429930;
        case 0x429934u: goto label_429934;
        case 0x429938u: goto label_429938;
        case 0x42993cu: goto label_42993c;
        case 0x429940u: goto label_429940;
        case 0x429944u: goto label_429944;
        case 0x429948u: goto label_429948;
        case 0x42994cu: goto label_42994c;
        case 0x429950u: goto label_429950;
        case 0x429954u: goto label_429954;
        case 0x429958u: goto label_429958;
        case 0x42995cu: goto label_42995c;
        case 0x429960u: goto label_429960;
        case 0x429964u: goto label_429964;
        case 0x429968u: goto label_429968;
        case 0x42996cu: goto label_42996c;
        case 0x429970u: goto label_429970;
        case 0x429974u: goto label_429974;
        case 0x429978u: goto label_429978;
        case 0x42997cu: goto label_42997c;
        case 0x429980u: goto label_429980;
        case 0x429984u: goto label_429984;
        case 0x429988u: goto label_429988;
        case 0x42998cu: goto label_42998c;
        case 0x429990u: goto label_429990;
        case 0x429994u: goto label_429994;
        case 0x429998u: goto label_429998;
        case 0x42999cu: goto label_42999c;
        case 0x4299a0u: goto label_4299a0;
        case 0x4299a4u: goto label_4299a4;
        case 0x4299a8u: goto label_4299a8;
        case 0x4299acu: goto label_4299ac;
        case 0x4299b0u: goto label_4299b0;
        case 0x4299b4u: goto label_4299b4;
        case 0x4299b8u: goto label_4299b8;
        case 0x4299bcu: goto label_4299bc;
        case 0x4299c0u: goto label_4299c0;
        case 0x4299c4u: goto label_4299c4;
        case 0x4299c8u: goto label_4299c8;
        case 0x4299ccu: goto label_4299cc;
        case 0x4299d0u: goto label_4299d0;
        case 0x4299d4u: goto label_4299d4;
        case 0x4299d8u: goto label_4299d8;
        case 0x4299dcu: goto label_4299dc;
        case 0x4299e0u: goto label_4299e0;
        case 0x4299e4u: goto label_4299e4;
        case 0x4299e8u: goto label_4299e8;
        case 0x4299ecu: goto label_4299ec;
        case 0x4299f0u: goto label_4299f0;
        case 0x4299f4u: goto label_4299f4;
        case 0x4299f8u: goto label_4299f8;
        case 0x4299fcu: goto label_4299fc;
        case 0x429a00u: goto label_429a00;
        case 0x429a04u: goto label_429a04;
        case 0x429a08u: goto label_429a08;
        case 0x429a0cu: goto label_429a0c;
        case 0x429a10u: goto label_429a10;
        case 0x429a14u: goto label_429a14;
        case 0x429a18u: goto label_429a18;
        case 0x429a1cu: goto label_429a1c;
        case 0x429a20u: goto label_429a20;
        case 0x429a24u: goto label_429a24;
        case 0x429a28u: goto label_429a28;
        case 0x429a2cu: goto label_429a2c;
        case 0x429a30u: goto label_429a30;
        case 0x429a34u: goto label_429a34;
        case 0x429a38u: goto label_429a38;
        case 0x429a3cu: goto label_429a3c;
        case 0x429a40u: goto label_429a40;
        case 0x429a44u: goto label_429a44;
        case 0x429a48u: goto label_429a48;
        case 0x429a4cu: goto label_429a4c;
        case 0x429a50u: goto label_429a50;
        case 0x429a54u: goto label_429a54;
        case 0x429a58u: goto label_429a58;
        case 0x429a5cu: goto label_429a5c;
        case 0x429a60u: goto label_429a60;
        case 0x429a64u: goto label_429a64;
        case 0x429a68u: goto label_429a68;
        case 0x429a6cu: goto label_429a6c;
        case 0x429a70u: goto label_429a70;
        case 0x429a74u: goto label_429a74;
        case 0x429a78u: goto label_429a78;
        case 0x429a7cu: goto label_429a7c;
        case 0x429a80u: goto label_429a80;
        case 0x429a84u: goto label_429a84;
        case 0x429a88u: goto label_429a88;
        case 0x429a8cu: goto label_429a8c;
        case 0x429a90u: goto label_429a90;
        case 0x429a94u: goto label_429a94;
        case 0x429a98u: goto label_429a98;
        case 0x429a9cu: goto label_429a9c;
        case 0x429aa0u: goto label_429aa0;
        case 0x429aa4u: goto label_429aa4;
        case 0x429aa8u: goto label_429aa8;
        case 0x429aacu: goto label_429aac;
        case 0x429ab0u: goto label_429ab0;
        case 0x429ab4u: goto label_429ab4;
        case 0x429ab8u: goto label_429ab8;
        case 0x429abcu: goto label_429abc;
        case 0x429ac0u: goto label_429ac0;
        case 0x429ac4u: goto label_429ac4;
        case 0x429ac8u: goto label_429ac8;
        case 0x429accu: goto label_429acc;
        case 0x429ad0u: goto label_429ad0;
        case 0x429ad4u: goto label_429ad4;
        case 0x429ad8u: goto label_429ad8;
        case 0x429adcu: goto label_429adc;
        case 0x429ae0u: goto label_429ae0;
        case 0x429ae4u: goto label_429ae4;
        case 0x429ae8u: goto label_429ae8;
        case 0x429aecu: goto label_429aec;
        case 0x429af0u: goto label_429af0;
        case 0x429af4u: goto label_429af4;
        case 0x429af8u: goto label_429af8;
        case 0x429afcu: goto label_429afc;
        case 0x429b00u: goto label_429b00;
        case 0x429b04u: goto label_429b04;
        case 0x429b08u: goto label_429b08;
        case 0x429b0cu: goto label_429b0c;
        case 0x429b10u: goto label_429b10;
        case 0x429b14u: goto label_429b14;
        case 0x429b18u: goto label_429b18;
        case 0x429b1cu: goto label_429b1c;
        case 0x429b20u: goto label_429b20;
        case 0x429b24u: goto label_429b24;
        case 0x429b28u: goto label_429b28;
        case 0x429b2cu: goto label_429b2c;
        case 0x429b30u: goto label_429b30;
        case 0x429b34u: goto label_429b34;
        case 0x429b38u: goto label_429b38;
        case 0x429b3cu: goto label_429b3c;
        case 0x429b40u: goto label_429b40;
        case 0x429b44u: goto label_429b44;
        case 0x429b48u: goto label_429b48;
        case 0x429b4cu: goto label_429b4c;
        case 0x429b50u: goto label_429b50;
        case 0x429b54u: goto label_429b54;
        case 0x429b58u: goto label_429b58;
        case 0x429b5cu: goto label_429b5c;
        case 0x429b60u: goto label_429b60;
        case 0x429b64u: goto label_429b64;
        case 0x429b68u: goto label_429b68;
        case 0x429b6cu: goto label_429b6c;
        case 0x429b70u: goto label_429b70;
        case 0x429b74u: goto label_429b74;
        case 0x429b78u: goto label_429b78;
        case 0x429b7cu: goto label_429b7c;
        case 0x429b80u: goto label_429b80;
        case 0x429b84u: goto label_429b84;
        case 0x429b88u: goto label_429b88;
        case 0x429b8cu: goto label_429b8c;
        case 0x429b90u: goto label_429b90;
        case 0x429b94u: goto label_429b94;
        case 0x429b98u: goto label_429b98;
        case 0x429b9cu: goto label_429b9c;
        case 0x429ba0u: goto label_429ba0;
        case 0x429ba4u: goto label_429ba4;
        case 0x429ba8u: goto label_429ba8;
        case 0x429bacu: goto label_429bac;
        case 0x429bb0u: goto label_429bb0;
        case 0x429bb4u: goto label_429bb4;
        case 0x429bb8u: goto label_429bb8;
        case 0x429bbcu: goto label_429bbc;
        case 0x429bc0u: goto label_429bc0;
        case 0x429bc4u: goto label_429bc4;
        case 0x429bc8u: goto label_429bc8;
        case 0x429bccu: goto label_429bcc;
        case 0x429bd0u: goto label_429bd0;
        case 0x429bd4u: goto label_429bd4;
        case 0x429bd8u: goto label_429bd8;
        case 0x429bdcu: goto label_429bdc;
        case 0x429be0u: goto label_429be0;
        case 0x429be4u: goto label_429be4;
        case 0x429be8u: goto label_429be8;
        case 0x429becu: goto label_429bec;
        case 0x429bf0u: goto label_429bf0;
        case 0x429bf4u: goto label_429bf4;
        case 0x429bf8u: goto label_429bf8;
        case 0x429bfcu: goto label_429bfc;
        case 0x429c00u: goto label_429c00;
        case 0x429c04u: goto label_429c04;
        case 0x429c08u: goto label_429c08;
        case 0x429c0cu: goto label_429c0c;
        case 0x429c10u: goto label_429c10;
        case 0x429c14u: goto label_429c14;
        case 0x429c18u: goto label_429c18;
        case 0x429c1cu: goto label_429c1c;
        case 0x429c20u: goto label_429c20;
        case 0x429c24u: goto label_429c24;
        case 0x429c28u: goto label_429c28;
        case 0x429c2cu: goto label_429c2c;
        case 0x429c30u: goto label_429c30;
        case 0x429c34u: goto label_429c34;
        case 0x429c38u: goto label_429c38;
        case 0x429c3cu: goto label_429c3c;
        case 0x429c40u: goto label_429c40;
        case 0x429c44u: goto label_429c44;
        case 0x429c48u: goto label_429c48;
        case 0x429c4cu: goto label_429c4c;
        case 0x429c50u: goto label_429c50;
        case 0x429c54u: goto label_429c54;
        case 0x429c58u: goto label_429c58;
        case 0x429c5cu: goto label_429c5c;
        case 0x429c60u: goto label_429c60;
        case 0x429c64u: goto label_429c64;
        case 0x429c68u: goto label_429c68;
        case 0x429c6cu: goto label_429c6c;
        case 0x429c70u: goto label_429c70;
        case 0x429c74u: goto label_429c74;
        case 0x429c78u: goto label_429c78;
        case 0x429c7cu: goto label_429c7c;
        case 0x429c80u: goto label_429c80;
        case 0x429c84u: goto label_429c84;
        case 0x429c88u: goto label_429c88;
        case 0x429c8cu: goto label_429c8c;
        case 0x429c90u: goto label_429c90;
        case 0x429c94u: goto label_429c94;
        case 0x429c98u: goto label_429c98;
        case 0x429c9cu: goto label_429c9c;
        case 0x429ca0u: goto label_429ca0;
        case 0x429ca4u: goto label_429ca4;
        case 0x429ca8u: goto label_429ca8;
        case 0x429cacu: goto label_429cac;
        case 0x429cb0u: goto label_429cb0;
        case 0x429cb4u: goto label_429cb4;
        case 0x429cb8u: goto label_429cb8;
        case 0x429cbcu: goto label_429cbc;
        case 0x429cc0u: goto label_429cc0;
        case 0x429cc4u: goto label_429cc4;
        case 0x429cc8u: goto label_429cc8;
        case 0x429cccu: goto label_429ccc;
        case 0x429cd0u: goto label_429cd0;
        case 0x429cd4u: goto label_429cd4;
        case 0x429cd8u: goto label_429cd8;
        case 0x429cdcu: goto label_429cdc;
        case 0x429ce0u: goto label_429ce0;
        case 0x429ce4u: goto label_429ce4;
        case 0x429ce8u: goto label_429ce8;
        case 0x429cecu: goto label_429cec;
        case 0x429cf0u: goto label_429cf0;
        case 0x429cf4u: goto label_429cf4;
        case 0x429cf8u: goto label_429cf8;
        case 0x429cfcu: goto label_429cfc;
        case 0x429d00u: goto label_429d00;
        case 0x429d04u: goto label_429d04;
        case 0x429d08u: goto label_429d08;
        case 0x429d0cu: goto label_429d0c;
        case 0x429d10u: goto label_429d10;
        case 0x429d14u: goto label_429d14;
        case 0x429d18u: goto label_429d18;
        case 0x429d1cu: goto label_429d1c;
        case 0x429d20u: goto label_429d20;
        case 0x429d24u: goto label_429d24;
        case 0x429d28u: goto label_429d28;
        case 0x429d2cu: goto label_429d2c;
        case 0x429d30u: goto label_429d30;
        case 0x429d34u: goto label_429d34;
        case 0x429d38u: goto label_429d38;
        case 0x429d3cu: goto label_429d3c;
        case 0x429d40u: goto label_429d40;
        case 0x429d44u: goto label_429d44;
        case 0x429d48u: goto label_429d48;
        case 0x429d4cu: goto label_429d4c;
        case 0x429d50u: goto label_429d50;
        case 0x429d54u: goto label_429d54;
        case 0x429d58u: goto label_429d58;
        case 0x429d5cu: goto label_429d5c;
        case 0x429d60u: goto label_429d60;
        case 0x429d64u: goto label_429d64;
        case 0x429d68u: goto label_429d68;
        case 0x429d6cu: goto label_429d6c;
        case 0x429d70u: goto label_429d70;
        case 0x429d74u: goto label_429d74;
        case 0x429d78u: goto label_429d78;
        case 0x429d7cu: goto label_429d7c;
        case 0x429d80u: goto label_429d80;
        case 0x429d84u: goto label_429d84;
        case 0x429d88u: goto label_429d88;
        case 0x429d8cu: goto label_429d8c;
        case 0x429d90u: goto label_429d90;
        case 0x429d94u: goto label_429d94;
        case 0x429d98u: goto label_429d98;
        case 0x429d9cu: goto label_429d9c;
        case 0x429da0u: goto label_429da0;
        case 0x429da4u: goto label_429da4;
        case 0x429da8u: goto label_429da8;
        case 0x429dacu: goto label_429dac;
        case 0x429db0u: goto label_429db0;
        case 0x429db4u: goto label_429db4;
        case 0x429db8u: goto label_429db8;
        case 0x429dbcu: goto label_429dbc;
        case 0x429dc0u: goto label_429dc0;
        case 0x429dc4u: goto label_429dc4;
        case 0x429dc8u: goto label_429dc8;
        case 0x429dccu: goto label_429dcc;
        case 0x429dd0u: goto label_429dd0;
        case 0x429dd4u: goto label_429dd4;
        case 0x429dd8u: goto label_429dd8;
        case 0x429ddcu: goto label_429ddc;
        case 0x429de0u: goto label_429de0;
        case 0x429de4u: goto label_429de4;
        case 0x429de8u: goto label_429de8;
        case 0x429decu: goto label_429dec;
        case 0x429df0u: goto label_429df0;
        case 0x429df4u: goto label_429df4;
        case 0x429df8u: goto label_429df8;
        case 0x429dfcu: goto label_429dfc;
        case 0x429e00u: goto label_429e00;
        case 0x429e04u: goto label_429e04;
        case 0x429e08u: goto label_429e08;
        case 0x429e0cu: goto label_429e0c;
        case 0x429e10u: goto label_429e10;
        case 0x429e14u: goto label_429e14;
        case 0x429e18u: goto label_429e18;
        case 0x429e1cu: goto label_429e1c;
        case 0x429e20u: goto label_429e20;
        case 0x429e24u: goto label_429e24;
        case 0x429e28u: goto label_429e28;
        case 0x429e2cu: goto label_429e2c;
        case 0x429e30u: goto label_429e30;
        case 0x429e34u: goto label_429e34;
        case 0x429e38u: goto label_429e38;
        case 0x429e3cu: goto label_429e3c;
        case 0x429e40u: goto label_429e40;
        case 0x429e44u: goto label_429e44;
        case 0x429e48u: goto label_429e48;
        case 0x429e4cu: goto label_429e4c;
        case 0x429e50u: goto label_429e50;
        case 0x429e54u: goto label_429e54;
        case 0x429e58u: goto label_429e58;
        case 0x429e5cu: goto label_429e5c;
        case 0x429e60u: goto label_429e60;
        case 0x429e64u: goto label_429e64;
        case 0x429e68u: goto label_429e68;
        case 0x429e6cu: goto label_429e6c;
        case 0x429e70u: goto label_429e70;
        case 0x429e74u: goto label_429e74;
        case 0x429e78u: goto label_429e78;
        case 0x429e7cu: goto label_429e7c;
        case 0x429e80u: goto label_429e80;
        case 0x429e84u: goto label_429e84;
        case 0x429e88u: goto label_429e88;
        case 0x429e8cu: goto label_429e8c;
        case 0x429e90u: goto label_429e90;
        case 0x429e94u: goto label_429e94;
        case 0x429e98u: goto label_429e98;
        case 0x429e9cu: goto label_429e9c;
        case 0x429ea0u: goto label_429ea0;
        case 0x429ea4u: goto label_429ea4;
        case 0x429ea8u: goto label_429ea8;
        case 0x429eacu: goto label_429eac;
        case 0x429eb0u: goto label_429eb0;
        case 0x429eb4u: goto label_429eb4;
        case 0x429eb8u: goto label_429eb8;
        case 0x429ebcu: goto label_429ebc;
        case 0x429ec0u: goto label_429ec0;
        case 0x429ec4u: goto label_429ec4;
        case 0x429ec8u: goto label_429ec8;
        case 0x429eccu: goto label_429ecc;
        case 0x429ed0u: goto label_429ed0;
        case 0x429ed4u: goto label_429ed4;
        case 0x429ed8u: goto label_429ed8;
        case 0x429edcu: goto label_429edc;
        case 0x429ee0u: goto label_429ee0;
        case 0x429ee4u: goto label_429ee4;
        case 0x429ee8u: goto label_429ee8;
        case 0x429eecu: goto label_429eec;
        case 0x429ef0u: goto label_429ef0;
        case 0x429ef4u: goto label_429ef4;
        case 0x429ef8u: goto label_429ef8;
        case 0x429efcu: goto label_429efc;
        case 0x429f00u: goto label_429f00;
        case 0x429f04u: goto label_429f04;
        case 0x429f08u: goto label_429f08;
        case 0x429f0cu: goto label_429f0c;
        case 0x429f10u: goto label_429f10;
        case 0x429f14u: goto label_429f14;
        case 0x429f18u: goto label_429f18;
        case 0x429f1cu: goto label_429f1c;
        case 0x429f20u: goto label_429f20;
        case 0x429f24u: goto label_429f24;
        case 0x429f28u: goto label_429f28;
        case 0x429f2cu: goto label_429f2c;
        case 0x429f30u: goto label_429f30;
        case 0x429f34u: goto label_429f34;
        case 0x429f38u: goto label_429f38;
        case 0x429f3cu: goto label_429f3c;
        case 0x429f40u: goto label_429f40;
        case 0x429f44u: goto label_429f44;
        case 0x429f48u: goto label_429f48;
        case 0x429f4cu: goto label_429f4c;
        case 0x429f50u: goto label_429f50;
        case 0x429f54u: goto label_429f54;
        case 0x429f58u: goto label_429f58;
        case 0x429f5cu: goto label_429f5c;
        case 0x429f60u: goto label_429f60;
        case 0x429f64u: goto label_429f64;
        case 0x429f68u: goto label_429f68;
        case 0x429f6cu: goto label_429f6c;
        case 0x429f70u: goto label_429f70;
        case 0x429f74u: goto label_429f74;
        case 0x429f78u: goto label_429f78;
        case 0x429f7cu: goto label_429f7c;
        case 0x429f80u: goto label_429f80;
        case 0x429f84u: goto label_429f84;
        case 0x429f88u: goto label_429f88;
        case 0x429f8cu: goto label_429f8c;
        case 0x429f90u: goto label_429f90;
        case 0x429f94u: goto label_429f94;
        case 0x429f98u: goto label_429f98;
        case 0x429f9cu: goto label_429f9c;
        case 0x429fa0u: goto label_429fa0;
        case 0x429fa4u: goto label_429fa4;
        case 0x429fa8u: goto label_429fa8;
        case 0x429facu: goto label_429fac;
        case 0x429fb0u: goto label_429fb0;
        case 0x429fb4u: goto label_429fb4;
        case 0x429fb8u: goto label_429fb8;
        case 0x429fbcu: goto label_429fbc;
        case 0x429fc0u: goto label_429fc0;
        case 0x429fc4u: goto label_429fc4;
        case 0x429fc8u: goto label_429fc8;
        case 0x429fccu: goto label_429fcc;
        case 0x429fd0u: goto label_429fd0;
        case 0x429fd4u: goto label_429fd4;
        case 0x429fd8u: goto label_429fd8;
        case 0x429fdcu: goto label_429fdc;
        case 0x429fe0u: goto label_429fe0;
        case 0x429fe4u: goto label_429fe4;
        case 0x429fe8u: goto label_429fe8;
        case 0x429fecu: goto label_429fec;
        case 0x429ff0u: goto label_429ff0;
        case 0x429ff4u: goto label_429ff4;
        case 0x429ff8u: goto label_429ff8;
        case 0x429ffcu: goto label_429ffc;
        case 0x42a000u: goto label_42a000;
        case 0x42a004u: goto label_42a004;
        case 0x42a008u: goto label_42a008;
        case 0x42a00cu: goto label_42a00c;
        case 0x42a010u: goto label_42a010;
        case 0x42a014u: goto label_42a014;
        case 0x42a018u: goto label_42a018;
        case 0x42a01cu: goto label_42a01c;
        case 0x42a020u: goto label_42a020;
        case 0x42a024u: goto label_42a024;
        case 0x42a028u: goto label_42a028;
        case 0x42a02cu: goto label_42a02c;
        case 0x42a030u: goto label_42a030;
        case 0x42a034u: goto label_42a034;
        case 0x42a038u: goto label_42a038;
        case 0x42a03cu: goto label_42a03c;
        case 0x42a040u: goto label_42a040;
        case 0x42a044u: goto label_42a044;
        case 0x42a048u: goto label_42a048;
        case 0x42a04cu: goto label_42a04c;
        case 0x42a050u: goto label_42a050;
        case 0x42a054u: goto label_42a054;
        case 0x42a058u: goto label_42a058;
        case 0x42a05cu: goto label_42a05c;
        case 0x42a060u: goto label_42a060;
        case 0x42a064u: goto label_42a064;
        case 0x42a068u: goto label_42a068;
        case 0x42a06cu: goto label_42a06c;
        case 0x42a070u: goto label_42a070;
        case 0x42a074u: goto label_42a074;
        case 0x42a078u: goto label_42a078;
        case 0x42a07cu: goto label_42a07c;
        case 0x42a080u: goto label_42a080;
        case 0x42a084u: goto label_42a084;
        case 0x42a088u: goto label_42a088;
        case 0x42a08cu: goto label_42a08c;
        case 0x42a090u: goto label_42a090;
        case 0x42a094u: goto label_42a094;
        case 0x42a098u: goto label_42a098;
        case 0x42a09cu: goto label_42a09c;
        case 0x42a0a0u: goto label_42a0a0;
        case 0x42a0a4u: goto label_42a0a4;
        case 0x42a0a8u: goto label_42a0a8;
        case 0x42a0acu: goto label_42a0ac;
        case 0x42a0b0u: goto label_42a0b0;
        case 0x42a0b4u: goto label_42a0b4;
        case 0x42a0b8u: goto label_42a0b8;
        case 0x42a0bcu: goto label_42a0bc;
        case 0x42a0c0u: goto label_42a0c0;
        case 0x42a0c4u: goto label_42a0c4;
        case 0x42a0c8u: goto label_42a0c8;
        case 0x42a0ccu: goto label_42a0cc;
        case 0x42a0d0u: goto label_42a0d0;
        case 0x42a0d4u: goto label_42a0d4;
        case 0x42a0d8u: goto label_42a0d8;
        case 0x42a0dcu: goto label_42a0dc;
        case 0x42a0e0u: goto label_42a0e0;
        case 0x42a0e4u: goto label_42a0e4;
        case 0x42a0e8u: goto label_42a0e8;
        case 0x42a0ecu: goto label_42a0ec;
        case 0x42a0f0u: goto label_42a0f0;
        case 0x42a0f4u: goto label_42a0f4;
        case 0x42a0f8u: goto label_42a0f8;
        case 0x42a0fcu: goto label_42a0fc;
        case 0x42a100u: goto label_42a100;
        case 0x42a104u: goto label_42a104;
        case 0x42a108u: goto label_42a108;
        case 0x42a10cu: goto label_42a10c;
        case 0x42a110u: goto label_42a110;
        case 0x42a114u: goto label_42a114;
        case 0x42a118u: goto label_42a118;
        case 0x42a11cu: goto label_42a11c;
        case 0x42a120u: goto label_42a120;
        case 0x42a124u: goto label_42a124;
        case 0x42a128u: goto label_42a128;
        case 0x42a12cu: goto label_42a12c;
        case 0x42a130u: goto label_42a130;
        case 0x42a134u: goto label_42a134;
        case 0x42a138u: goto label_42a138;
        case 0x42a13cu: goto label_42a13c;
        case 0x42a140u: goto label_42a140;
        case 0x42a144u: goto label_42a144;
        case 0x42a148u: goto label_42a148;
        case 0x42a14cu: goto label_42a14c;
        case 0x42a150u: goto label_42a150;
        case 0x42a154u: goto label_42a154;
        case 0x42a158u: goto label_42a158;
        case 0x42a15cu: goto label_42a15c;
        case 0x42a160u: goto label_42a160;
        case 0x42a164u: goto label_42a164;
        case 0x42a168u: goto label_42a168;
        case 0x42a16cu: goto label_42a16c;
        case 0x42a170u: goto label_42a170;
        case 0x42a174u: goto label_42a174;
        case 0x42a178u: goto label_42a178;
        case 0x42a17cu: goto label_42a17c;
        case 0x42a180u: goto label_42a180;
        case 0x42a184u: goto label_42a184;
        case 0x42a188u: goto label_42a188;
        case 0x42a18cu: goto label_42a18c;
        case 0x42a190u: goto label_42a190;
        case 0x42a194u: goto label_42a194;
        case 0x42a198u: goto label_42a198;
        case 0x42a19cu: goto label_42a19c;
        case 0x42a1a0u: goto label_42a1a0;
        case 0x42a1a4u: goto label_42a1a4;
        case 0x42a1a8u: goto label_42a1a8;
        case 0x42a1acu: goto label_42a1ac;
        case 0x42a1b0u: goto label_42a1b0;
        case 0x42a1b4u: goto label_42a1b4;
        case 0x42a1b8u: goto label_42a1b8;
        case 0x42a1bcu: goto label_42a1bc;
        case 0x42a1c0u: goto label_42a1c0;
        case 0x42a1c4u: goto label_42a1c4;
        case 0x42a1c8u: goto label_42a1c8;
        case 0x42a1ccu: goto label_42a1cc;
        case 0x42a1d0u: goto label_42a1d0;
        case 0x42a1d4u: goto label_42a1d4;
        case 0x42a1d8u: goto label_42a1d8;
        case 0x42a1dcu: goto label_42a1dc;
        case 0x42a1e0u: goto label_42a1e0;
        case 0x42a1e4u: goto label_42a1e4;
        case 0x42a1e8u: goto label_42a1e8;
        case 0x42a1ecu: goto label_42a1ec;
        case 0x42a1f0u: goto label_42a1f0;
        case 0x42a1f4u: goto label_42a1f4;
        case 0x42a1f8u: goto label_42a1f8;
        case 0x42a1fcu: goto label_42a1fc;
        case 0x42a200u: goto label_42a200;
        case 0x42a204u: goto label_42a204;
        case 0x42a208u: goto label_42a208;
        case 0x42a20cu: goto label_42a20c;
        case 0x42a210u: goto label_42a210;
        case 0x42a214u: goto label_42a214;
        case 0x42a218u: goto label_42a218;
        case 0x42a21cu: goto label_42a21c;
        case 0x42a220u: goto label_42a220;
        case 0x42a224u: goto label_42a224;
        case 0x42a228u: goto label_42a228;
        case 0x42a22cu: goto label_42a22c;
        case 0x42a230u: goto label_42a230;
        case 0x42a234u: goto label_42a234;
        case 0x42a238u: goto label_42a238;
        case 0x42a23cu: goto label_42a23c;
        case 0x42a240u: goto label_42a240;
        case 0x42a244u: goto label_42a244;
        case 0x42a248u: goto label_42a248;
        case 0x42a24cu: goto label_42a24c;
        case 0x42a250u: goto label_42a250;
        case 0x42a254u: goto label_42a254;
        case 0x42a258u: goto label_42a258;
        case 0x42a25cu: goto label_42a25c;
        case 0x42a260u: goto label_42a260;
        case 0x42a264u: goto label_42a264;
        case 0x42a268u: goto label_42a268;
        case 0x42a26cu: goto label_42a26c;
        case 0x42a270u: goto label_42a270;
        case 0x42a274u: goto label_42a274;
        case 0x42a278u: goto label_42a278;
        case 0x42a27cu: goto label_42a27c;
        case 0x42a280u: goto label_42a280;
        case 0x42a284u: goto label_42a284;
        case 0x42a288u: goto label_42a288;
        case 0x42a28cu: goto label_42a28c;
        case 0x42a290u: goto label_42a290;
        case 0x42a294u: goto label_42a294;
        case 0x42a298u: goto label_42a298;
        case 0x42a29cu: goto label_42a29c;
        case 0x42a2a0u: goto label_42a2a0;
        case 0x42a2a4u: goto label_42a2a4;
        case 0x42a2a8u: goto label_42a2a8;
        case 0x42a2acu: goto label_42a2ac;
        case 0x42a2b0u: goto label_42a2b0;
        case 0x42a2b4u: goto label_42a2b4;
        case 0x42a2b8u: goto label_42a2b8;
        case 0x42a2bcu: goto label_42a2bc;
        case 0x42a2c0u: goto label_42a2c0;
        case 0x42a2c4u: goto label_42a2c4;
        case 0x42a2c8u: goto label_42a2c8;
        case 0x42a2ccu: goto label_42a2cc;
        case 0x42a2d0u: goto label_42a2d0;
        case 0x42a2d4u: goto label_42a2d4;
        case 0x42a2d8u: goto label_42a2d8;
        case 0x42a2dcu: goto label_42a2dc;
        case 0x42a2e0u: goto label_42a2e0;
        case 0x42a2e4u: goto label_42a2e4;
        case 0x42a2e8u: goto label_42a2e8;
        case 0x42a2ecu: goto label_42a2ec;
        case 0x42a2f0u: goto label_42a2f0;
        case 0x42a2f4u: goto label_42a2f4;
        case 0x42a2f8u: goto label_42a2f8;
        case 0x42a2fcu: goto label_42a2fc;
        case 0x42a300u: goto label_42a300;
        case 0x42a304u: goto label_42a304;
        case 0x42a308u: goto label_42a308;
        case 0x42a30cu: goto label_42a30c;
        case 0x42a310u: goto label_42a310;
        case 0x42a314u: goto label_42a314;
        case 0x42a318u: goto label_42a318;
        case 0x42a31cu: goto label_42a31c;
        case 0x42a320u: goto label_42a320;
        case 0x42a324u: goto label_42a324;
        case 0x42a328u: goto label_42a328;
        case 0x42a32cu: goto label_42a32c;
        case 0x42a330u: goto label_42a330;
        case 0x42a334u: goto label_42a334;
        case 0x42a338u: goto label_42a338;
        case 0x42a33cu: goto label_42a33c;
        case 0x42a340u: goto label_42a340;
        case 0x42a344u: goto label_42a344;
        case 0x42a348u: goto label_42a348;
        case 0x42a34cu: goto label_42a34c;
        case 0x42a350u: goto label_42a350;
        case 0x42a354u: goto label_42a354;
        case 0x42a358u: goto label_42a358;
        case 0x42a35cu: goto label_42a35c;
        case 0x42a360u: goto label_42a360;
        case 0x42a364u: goto label_42a364;
        case 0x42a368u: goto label_42a368;
        case 0x42a36cu: goto label_42a36c;
        case 0x42a370u: goto label_42a370;
        case 0x42a374u: goto label_42a374;
        case 0x42a378u: goto label_42a378;
        case 0x42a37cu: goto label_42a37c;
        case 0x42a380u: goto label_42a380;
        case 0x42a384u: goto label_42a384;
        case 0x42a388u: goto label_42a388;
        case 0x42a38cu: goto label_42a38c;
        case 0x42a390u: goto label_42a390;
        case 0x42a394u: goto label_42a394;
        case 0x42a398u: goto label_42a398;
        case 0x42a39cu: goto label_42a39c;
        case 0x42a3a0u: goto label_42a3a0;
        case 0x42a3a4u: goto label_42a3a4;
        case 0x42a3a8u: goto label_42a3a8;
        case 0x42a3acu: goto label_42a3ac;
        case 0x42a3b0u: goto label_42a3b0;
        case 0x42a3b4u: goto label_42a3b4;
        case 0x42a3b8u: goto label_42a3b8;
        case 0x42a3bcu: goto label_42a3bc;
        case 0x42a3c0u: goto label_42a3c0;
        case 0x42a3c4u: goto label_42a3c4;
        case 0x42a3c8u: goto label_42a3c8;
        case 0x42a3ccu: goto label_42a3cc;
        case 0x42a3d0u: goto label_42a3d0;
        case 0x42a3d4u: goto label_42a3d4;
        case 0x42a3d8u: goto label_42a3d8;
        case 0x42a3dcu: goto label_42a3dc;
        case 0x42a3e0u: goto label_42a3e0;
        case 0x42a3e4u: goto label_42a3e4;
        case 0x42a3e8u: goto label_42a3e8;
        case 0x42a3ecu: goto label_42a3ec;
        case 0x42a3f0u: goto label_42a3f0;
        case 0x42a3f4u: goto label_42a3f4;
        case 0x42a3f8u: goto label_42a3f8;
        case 0x42a3fcu: goto label_42a3fc;
        case 0x42a400u: goto label_42a400;
        case 0x42a404u: goto label_42a404;
        case 0x42a408u: goto label_42a408;
        case 0x42a40cu: goto label_42a40c;
        case 0x42a410u: goto label_42a410;
        case 0x42a414u: goto label_42a414;
        case 0x42a418u: goto label_42a418;
        case 0x42a41cu: goto label_42a41c;
        case 0x42a420u: goto label_42a420;
        case 0x42a424u: goto label_42a424;
        case 0x42a428u: goto label_42a428;
        case 0x42a42cu: goto label_42a42c;
        case 0x42a430u: goto label_42a430;
        case 0x42a434u: goto label_42a434;
        case 0x42a438u: goto label_42a438;
        case 0x42a43cu: goto label_42a43c;
        case 0x42a440u: goto label_42a440;
        case 0x42a444u: goto label_42a444;
        case 0x42a448u: goto label_42a448;
        case 0x42a44cu: goto label_42a44c;
        case 0x42a450u: goto label_42a450;
        case 0x42a454u: goto label_42a454;
        case 0x42a458u: goto label_42a458;
        case 0x42a45cu: goto label_42a45c;
        case 0x42a460u: goto label_42a460;
        case 0x42a464u: goto label_42a464;
        case 0x42a468u: goto label_42a468;
        case 0x42a46cu: goto label_42a46c;
        case 0x42a470u: goto label_42a470;
        case 0x42a474u: goto label_42a474;
        case 0x42a478u: goto label_42a478;
        case 0x42a47cu: goto label_42a47c;
        case 0x42a480u: goto label_42a480;
        case 0x42a484u: goto label_42a484;
        case 0x42a488u: goto label_42a488;
        case 0x42a48cu: goto label_42a48c;
        case 0x42a490u: goto label_42a490;
        case 0x42a494u: goto label_42a494;
        case 0x42a498u: goto label_42a498;
        case 0x42a49cu: goto label_42a49c;
        case 0x42a4a0u: goto label_42a4a0;
        case 0x42a4a4u: goto label_42a4a4;
        case 0x42a4a8u: goto label_42a4a8;
        case 0x42a4acu: goto label_42a4ac;
        case 0x42a4b0u: goto label_42a4b0;
        case 0x42a4b4u: goto label_42a4b4;
        case 0x42a4b8u: goto label_42a4b8;
        case 0x42a4bcu: goto label_42a4bc;
        case 0x42a4c0u: goto label_42a4c0;
        case 0x42a4c4u: goto label_42a4c4;
        case 0x42a4c8u: goto label_42a4c8;
        case 0x42a4ccu: goto label_42a4cc;
        case 0x42a4d0u: goto label_42a4d0;
        case 0x42a4d4u: goto label_42a4d4;
        case 0x42a4d8u: goto label_42a4d8;
        case 0x42a4dcu: goto label_42a4dc;
        case 0x42a4e0u: goto label_42a4e0;
        case 0x42a4e4u: goto label_42a4e4;
        case 0x42a4e8u: goto label_42a4e8;
        case 0x42a4ecu: goto label_42a4ec;
        case 0x42a4f0u: goto label_42a4f0;
        case 0x42a4f4u: goto label_42a4f4;
        case 0x42a4f8u: goto label_42a4f8;
        case 0x42a4fcu: goto label_42a4fc;
        case 0x42a500u: goto label_42a500;
        case 0x42a504u: goto label_42a504;
        case 0x42a508u: goto label_42a508;
        case 0x42a50cu: goto label_42a50c;
        case 0x42a510u: goto label_42a510;
        case 0x42a514u: goto label_42a514;
        case 0x42a518u: goto label_42a518;
        case 0x42a51cu: goto label_42a51c;
        case 0x42a520u: goto label_42a520;
        case 0x42a524u: goto label_42a524;
        case 0x42a528u: goto label_42a528;
        case 0x42a52cu: goto label_42a52c;
        case 0x42a530u: goto label_42a530;
        case 0x42a534u: goto label_42a534;
        case 0x42a538u: goto label_42a538;
        case 0x42a53cu: goto label_42a53c;
        case 0x42a540u: goto label_42a540;
        case 0x42a544u: goto label_42a544;
        case 0x42a548u: goto label_42a548;
        case 0x42a54cu: goto label_42a54c;
        case 0x42a550u: goto label_42a550;
        case 0x42a554u: goto label_42a554;
        case 0x42a558u: goto label_42a558;
        case 0x42a55cu: goto label_42a55c;
        case 0x42a560u: goto label_42a560;
        case 0x42a564u: goto label_42a564;
        case 0x42a568u: goto label_42a568;
        case 0x42a56cu: goto label_42a56c;
        case 0x42a570u: goto label_42a570;
        case 0x42a574u: goto label_42a574;
        case 0x42a578u: goto label_42a578;
        case 0x42a57cu: goto label_42a57c;
        case 0x42a580u: goto label_42a580;
        case 0x42a584u: goto label_42a584;
        case 0x42a588u: goto label_42a588;
        case 0x42a58cu: goto label_42a58c;
        case 0x42a590u: goto label_42a590;
        case 0x42a594u: goto label_42a594;
        case 0x42a598u: goto label_42a598;
        case 0x42a59cu: goto label_42a59c;
        case 0x42a5a0u: goto label_42a5a0;
        case 0x42a5a4u: goto label_42a5a4;
        case 0x42a5a8u: goto label_42a5a8;
        case 0x42a5acu: goto label_42a5ac;
        case 0x42a5b0u: goto label_42a5b0;
        case 0x42a5b4u: goto label_42a5b4;
        case 0x42a5b8u: goto label_42a5b8;
        case 0x42a5bcu: goto label_42a5bc;
        case 0x42a5c0u: goto label_42a5c0;
        case 0x42a5c4u: goto label_42a5c4;
        case 0x42a5c8u: goto label_42a5c8;
        case 0x42a5ccu: goto label_42a5cc;
        case 0x42a5d0u: goto label_42a5d0;
        case 0x42a5d4u: goto label_42a5d4;
        case 0x42a5d8u: goto label_42a5d8;
        case 0x42a5dcu: goto label_42a5dc;
        case 0x42a5e0u: goto label_42a5e0;
        case 0x42a5e4u: goto label_42a5e4;
        case 0x42a5e8u: goto label_42a5e8;
        case 0x42a5ecu: goto label_42a5ec;
        case 0x42a5f0u: goto label_42a5f0;
        case 0x42a5f4u: goto label_42a5f4;
        case 0x42a5f8u: goto label_42a5f8;
        case 0x42a5fcu: goto label_42a5fc;
        case 0x42a600u: goto label_42a600;
        case 0x42a604u: goto label_42a604;
        case 0x42a608u: goto label_42a608;
        case 0x42a60cu: goto label_42a60c;
        case 0x42a610u: goto label_42a610;
        case 0x42a614u: goto label_42a614;
        case 0x42a618u: goto label_42a618;
        case 0x42a61cu: goto label_42a61c;
        case 0x42a620u: goto label_42a620;
        case 0x42a624u: goto label_42a624;
        case 0x42a628u: goto label_42a628;
        case 0x42a62cu: goto label_42a62c;
        case 0x42a630u: goto label_42a630;
        case 0x42a634u: goto label_42a634;
        case 0x42a638u: goto label_42a638;
        case 0x42a63cu: goto label_42a63c;
        case 0x42a640u: goto label_42a640;
        case 0x42a644u: goto label_42a644;
        case 0x42a648u: goto label_42a648;
        case 0x42a64cu: goto label_42a64c;
        case 0x42a650u: goto label_42a650;
        case 0x42a654u: goto label_42a654;
        case 0x42a658u: goto label_42a658;
        case 0x42a65cu: goto label_42a65c;
        case 0x42a660u: goto label_42a660;
        case 0x42a664u: goto label_42a664;
        case 0x42a668u: goto label_42a668;
        case 0x42a66cu: goto label_42a66c;
        case 0x42a670u: goto label_42a670;
        case 0x42a674u: goto label_42a674;
        case 0x42a678u: goto label_42a678;
        case 0x42a67cu: goto label_42a67c;
        case 0x42a680u: goto label_42a680;
        case 0x42a684u: goto label_42a684;
        case 0x42a688u: goto label_42a688;
        case 0x42a68cu: goto label_42a68c;
        case 0x42a690u: goto label_42a690;
        case 0x42a694u: goto label_42a694;
        case 0x42a698u: goto label_42a698;
        case 0x42a69cu: goto label_42a69c;
        case 0x42a6a0u: goto label_42a6a0;
        case 0x42a6a4u: goto label_42a6a4;
        case 0x42a6a8u: goto label_42a6a8;
        case 0x42a6acu: goto label_42a6ac;
        case 0x42a6b0u: goto label_42a6b0;
        case 0x42a6b4u: goto label_42a6b4;
        case 0x42a6b8u: goto label_42a6b8;
        case 0x42a6bcu: goto label_42a6bc;
        case 0x42a6c0u: goto label_42a6c0;
        case 0x42a6c4u: goto label_42a6c4;
        case 0x42a6c8u: goto label_42a6c8;
        case 0x42a6ccu: goto label_42a6cc;
        case 0x42a6d0u: goto label_42a6d0;
        case 0x42a6d4u: goto label_42a6d4;
        case 0x42a6d8u: goto label_42a6d8;
        case 0x42a6dcu: goto label_42a6dc;
        case 0x42a6e0u: goto label_42a6e0;
        case 0x42a6e4u: goto label_42a6e4;
        case 0x42a6e8u: goto label_42a6e8;
        case 0x42a6ecu: goto label_42a6ec;
        case 0x42a6f0u: goto label_42a6f0;
        case 0x42a6f4u: goto label_42a6f4;
        case 0x42a6f8u: goto label_42a6f8;
        case 0x42a6fcu: goto label_42a6fc;
        case 0x42a700u: goto label_42a700;
        case 0x42a704u: goto label_42a704;
        case 0x42a708u: goto label_42a708;
        case 0x42a70cu: goto label_42a70c;
        case 0x42a710u: goto label_42a710;
        case 0x42a714u: goto label_42a714;
        case 0x42a718u: goto label_42a718;
        case 0x42a71cu: goto label_42a71c;
        case 0x42a720u: goto label_42a720;
        case 0x42a724u: goto label_42a724;
        case 0x42a728u: goto label_42a728;
        case 0x42a72cu: goto label_42a72c;
        case 0x42a730u: goto label_42a730;
        case 0x42a734u: goto label_42a734;
        case 0x42a738u: goto label_42a738;
        case 0x42a73cu: goto label_42a73c;
        case 0x42a740u: goto label_42a740;
        case 0x42a744u: goto label_42a744;
        case 0x42a748u: goto label_42a748;
        case 0x42a74cu: goto label_42a74c;
        case 0x42a750u: goto label_42a750;
        case 0x42a754u: goto label_42a754;
        case 0x42a758u: goto label_42a758;
        case 0x42a75cu: goto label_42a75c;
        case 0x42a760u: goto label_42a760;
        case 0x42a764u: goto label_42a764;
        case 0x42a768u: goto label_42a768;
        case 0x42a76cu: goto label_42a76c;
        case 0x42a770u: goto label_42a770;
        case 0x42a774u: goto label_42a774;
        case 0x42a778u: goto label_42a778;
        case 0x42a77cu: goto label_42a77c;
        case 0x42a780u: goto label_42a780;
        case 0x42a784u: goto label_42a784;
        case 0x42a788u: goto label_42a788;
        case 0x42a78cu: goto label_42a78c;
        case 0x42a790u: goto label_42a790;
        case 0x42a794u: goto label_42a794;
        case 0x42a798u: goto label_42a798;
        case 0x42a79cu: goto label_42a79c;
        case 0x42a7a0u: goto label_42a7a0;
        case 0x42a7a4u: goto label_42a7a4;
        case 0x42a7a8u: goto label_42a7a8;
        case 0x42a7acu: goto label_42a7ac;
        case 0x42a7b0u: goto label_42a7b0;
        case 0x42a7b4u: goto label_42a7b4;
        case 0x42a7b8u: goto label_42a7b8;
        case 0x42a7bcu: goto label_42a7bc;
        case 0x42a7c0u: goto label_42a7c0;
        case 0x42a7c4u: goto label_42a7c4;
        case 0x42a7c8u: goto label_42a7c8;
        case 0x42a7ccu: goto label_42a7cc;
        case 0x42a7d0u: goto label_42a7d0;
        case 0x42a7d4u: goto label_42a7d4;
        case 0x42a7d8u: goto label_42a7d8;
        case 0x42a7dcu: goto label_42a7dc;
        case 0x42a7e0u: goto label_42a7e0;
        case 0x42a7e4u: goto label_42a7e4;
        case 0x42a7e8u: goto label_42a7e8;
        case 0x42a7ecu: goto label_42a7ec;
        case 0x42a7f0u: goto label_42a7f0;
        case 0x42a7f4u: goto label_42a7f4;
        case 0x42a7f8u: goto label_42a7f8;
        case 0x42a7fcu: goto label_42a7fc;
        case 0x42a800u: goto label_42a800;
        case 0x42a804u: goto label_42a804;
        case 0x42a808u: goto label_42a808;
        case 0x42a80cu: goto label_42a80c;
        default: break;
    }

    ctx->pc = 0x428b70u;

label_428b70:
    // 0x428b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x428b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_428b74:
    // 0x428b74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x428b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_428b78:
    // 0x428b78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x428b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_428b7c:
    // 0x428b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x428b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_428b80:
    // 0x428b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x428b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_428b84:
    // 0x428b84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x428b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_428b88:
    // 0x428b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x428b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_428b8c:
    // 0x428b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_428b90:
    // 0x428b90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x428b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_428b94:
    // 0x428b94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x428b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_428b98:
    // 0x428b98: 0xc10ca68  jal         func_4329A0
label_428b9c:
    if (ctx->pc == 0x428B9Cu) {
        ctx->pc = 0x428B9Cu;
            // 0x428b9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x428BA0u;
        goto label_428ba0;
    }
    ctx->pc = 0x428B98u;
    SET_GPR_U32(ctx, 31, 0x428BA0u);
    ctx->pc = 0x428B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428B98u;
            // 0x428b9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428BA0u; }
        if (ctx->pc != 0x428BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428BA0u; }
        if (ctx->pc != 0x428BA0u) { return; }
    }
    ctx->pc = 0x428BA0u;
label_428ba0:
    // 0x428ba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x428ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_428ba4:
    // 0x428ba4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x428ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_428ba8:
    // 0x428ba8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x428ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_428bac:
    // 0x428bac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x428bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_428bb0:
    // 0x428bb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x428bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_428bb4:
    // 0x428bb4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x428bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_428bb8:
    // 0x428bb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x428bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_428bbc:
    // 0x428bbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x428bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_428bc0:
    // 0x428bc0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x428bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_428bc4:
    // 0x428bc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_428bc8:
    // 0x428bc8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x428bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_428bcc:
    // 0x428bcc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x428bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_428bd0:
    // 0x428bd0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x428bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_428bd4:
    // 0x428bd4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x428bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_428bd8:
    // 0x428bd8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x428bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_428bdc:
    // 0x428bdc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x428bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_428be0:
    // 0x428be0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x428be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_428be4:
    // 0x428be4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x428be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_428be8:
    // 0x428be8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x428be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_428bec:
    // 0x428bec: 0xc0582cc  jal         func_160B30
label_428bf0:
    if (ctx->pc == 0x428BF0u) {
        ctx->pc = 0x428BF0u;
            // 0x428bf0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x428BF4u;
        goto label_428bf4;
    }
    ctx->pc = 0x428BECu;
    SET_GPR_U32(ctx, 31, 0x428BF4u);
    ctx->pc = 0x428BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428BECu;
            // 0x428bf0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428BF4u; }
        if (ctx->pc != 0x428BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428BF4u; }
        if (ctx->pc != 0x428BF4u) { return; }
    }
    ctx->pc = 0x428BF4u;
label_428bf4:
    // 0x428bf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x428bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_428bf8:
    // 0x428bf8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x428bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_428bfc:
    // 0x428bfc: 0x2463bff0  addiu       $v1, $v1, -0x4010
    ctx->pc = 0x428bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950896));
label_428c00:
    // 0x428c00: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x428c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_428c04:
    // 0x428c04: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x428c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_428c08:
    // 0x428c08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_428c0c:
    // 0x428c0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x428c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_428c10:
    // 0x428c10: 0xac446ec8  sw          $a0, 0x6EC8($v0)
    ctx->pc = 0x428c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28360), GPR_U32(ctx, 4));
label_428c14:
    // 0x428c14: 0x2463c000  addiu       $v1, $v1, -0x4000
    ctx->pc = 0x428c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
label_428c18:
    // 0x428c18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x428c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_428c1c:
    // 0x428c1c: 0x2442c038  addiu       $v0, $v0, -0x3FC8
    ctx->pc = 0x428c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950968));
label_428c20:
    // 0x428c20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x428c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_428c24:
    // 0x428c24: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x428c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_428c28:
    // 0x428c28: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x428c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_428c2c:
    // 0x428c2c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x428c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_428c30:
    // 0x428c30: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x428c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_428c34:
    // 0x428c34: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x428c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_428c38:
    // 0x428c38: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x428c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_428c3c:
    // 0x428c3c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x428c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_428c40:
    // 0x428c40: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x428c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_428c44:
    // 0x428c44: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x428c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_428c48:
    // 0x428c48: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x428c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_428c4c:
    // 0x428c4c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x428c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_428c50:
    // 0x428c50: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x428c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_428c54:
    // 0x428c54: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x428c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_428c58:
    // 0x428c58: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x428c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_428c5c:
    // 0x428c5c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x428c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_428c60:
    // 0x428c60: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x428c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_428c64:
    // 0x428c64: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x428c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_428c68:
    // 0x428c68: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x428c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_428c6c:
    // 0x428c6c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_428c70:
    if (ctx->pc == 0x428C70u) {
        ctx->pc = 0x428C74u;
        goto label_428c74;
    }
    ctx->pc = 0x428C6Cu;
    {
        const bool branch_taken_0x428c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x428c6c) {
            ctx->pc = 0x428D08u;
            goto label_428d08;
        }
    }
    ctx->pc = 0x428C74u;
label_428c74:
    // 0x428c74: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x428c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_428c78:
    // 0x428c78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x428c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_428c7c:
    // 0x428c7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x428c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_428c80:
    // 0x428c80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x428c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_428c84:
    // 0x428c84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x428c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_428c88:
    // 0x428c88: 0xc040138  jal         func_1004E0
label_428c8c:
    if (ctx->pc == 0x428C8Cu) {
        ctx->pc = 0x428C8Cu;
            // 0x428c8c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x428C90u;
        goto label_428c90;
    }
    ctx->pc = 0x428C88u;
    SET_GPR_U32(ctx, 31, 0x428C90u);
    ctx->pc = 0x428C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428C88u;
            // 0x428c8c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428C90u; }
        if (ctx->pc != 0x428C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428C90u; }
        if (ctx->pc != 0x428C90u) { return; }
    }
    ctx->pc = 0x428C90u;
label_428c90:
    // 0x428c90: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x428c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_428c94:
    // 0x428c94: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x428c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_428c98:
    // 0x428c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x428c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428c9c:
    // 0x428c9c: 0x24a58d30  addiu       $a1, $a1, -0x72D0
    ctx->pc = 0x428c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937904));
label_428ca0:
    // 0x428ca0: 0x24c674a0  addiu       $a2, $a2, 0x74A0
    ctx->pc = 0x428ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
label_428ca4:
    // 0x428ca4: 0x24070430  addiu       $a3, $zero, 0x430
    ctx->pc = 0x428ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
label_428ca8:
    // 0x428ca8: 0xc040840  jal         func_102100
label_428cac:
    if (ctx->pc == 0x428CACu) {
        ctx->pc = 0x428CACu;
            // 0x428cac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428CB0u;
        goto label_428cb0;
    }
    ctx->pc = 0x428CA8u;
    SET_GPR_U32(ctx, 31, 0x428CB0u);
    ctx->pc = 0x428CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428CA8u;
            // 0x428cac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CB0u; }
        if (ctx->pc != 0x428CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CB0u; }
        if (ctx->pc != 0x428CB0u) { return; }
    }
    ctx->pc = 0x428CB0u;
label_428cb0:
    // 0x428cb0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x428cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_428cb4:
    // 0x428cb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x428cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428cb8:
    // 0x428cb8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x428cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_428cbc:
    // 0x428cbc: 0xc0788fc  jal         func_1E23F0
label_428cc0:
    if (ctx->pc == 0x428CC0u) {
        ctx->pc = 0x428CC0u;
            // 0x428cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428CC4u;
        goto label_428cc4;
    }
    ctx->pc = 0x428CBCu;
    SET_GPR_U32(ctx, 31, 0x428CC4u);
    ctx->pc = 0x428CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428CBCu;
            // 0x428cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CC4u; }
        if (ctx->pc != 0x428CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CC4u; }
        if (ctx->pc != 0x428CC4u) { return; }
    }
    ctx->pc = 0x428CC4u;
label_428cc4:
    // 0x428cc4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x428cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_428cc8:
    // 0x428cc8: 0xc0788fc  jal         func_1E23F0
label_428ccc:
    if (ctx->pc == 0x428CCCu) {
        ctx->pc = 0x428CCCu;
            // 0x428ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428CD0u;
        goto label_428cd0;
    }
    ctx->pc = 0x428CC8u;
    SET_GPR_U32(ctx, 31, 0x428CD0u);
    ctx->pc = 0x428CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428CC8u;
            // 0x428ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CD0u; }
        if (ctx->pc != 0x428CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CD0u; }
        if (ctx->pc != 0x428CD0u) { return; }
    }
    ctx->pc = 0x428CD0u;
label_428cd0:
    // 0x428cd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x428cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428cd4:
    // 0x428cd4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x428cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_428cd8:
    // 0x428cd8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x428cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_428cdc:
    // 0x428cdc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x428cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_428ce0:
    // 0x428ce0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x428ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_428ce4:
    // 0x428ce4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x428ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_428ce8:
    // 0x428ce8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x428ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_428cec:
    // 0x428cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x428cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_428cf0:
    // 0x428cf0: 0xc0a997c  jal         func_2A65F0
label_428cf4:
    if (ctx->pc == 0x428CF4u) {
        ctx->pc = 0x428CF4u;
            // 0x428cf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x428CF8u;
        goto label_428cf8;
    }
    ctx->pc = 0x428CF0u;
    SET_GPR_U32(ctx, 31, 0x428CF8u);
    ctx->pc = 0x428CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428CF0u;
            // 0x428cf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CF8u; }
        if (ctx->pc != 0x428CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428CF8u; }
        if (ctx->pc != 0x428CF8u) { return; }
    }
    ctx->pc = 0x428CF8u;
label_428cf8:
    // 0x428cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x428cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_428cfc:
    // 0x428cfc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x428cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_428d00:
    // 0x428d00: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_428d04:
    if (ctx->pc == 0x428D04u) {
        ctx->pc = 0x428D04u;
            // 0x428d04: 0x26520430  addiu       $s2, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->pc = 0x428D08u;
        goto label_428d08;
    }
    ctx->pc = 0x428D00u;
    {
        const bool branch_taken_0x428d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428D00u;
            // 0x428d04: 0x26520430  addiu       $s2, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428d00) {
            ctx->pc = 0x428CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_428cd4;
        }
    }
    ctx->pc = 0x428D08u;
label_428d08:
    // 0x428d08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x428d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_428d0c:
    // 0x428d0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x428d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_428d10:
    // 0x428d10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x428d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_428d14:
    // 0x428d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x428d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_428d18:
    // 0x428d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_428d1c:
    // 0x428d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_428d20:
    // 0x428d20: 0x3e00008  jr          $ra
label_428d24:
    if (ctx->pc == 0x428D24u) {
        ctx->pc = 0x428D24u;
            // 0x428d24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x428D28u;
        goto label_428d28;
    }
    ctx->pc = 0x428D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428D20u;
            // 0x428d24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428D28u;
label_428d28:
    // 0x428d28: 0x0  nop
    ctx->pc = 0x428d28u;
    // NOP
label_428d2c:
    // 0x428d2c: 0x0  nop
    ctx->pc = 0x428d2cu;
    // NOP
label_428d30:
    // 0x428d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x428d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_428d34:
    // 0x428d34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x428d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_428d38:
    // 0x428d38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x428d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_428d3c:
    // 0x428d3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428d40:
    // 0x428d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x428d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_428d44:
    // 0x428d44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x428d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_428d48:
    // 0x428d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_428d4c:
    // 0x428d4c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x428d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_428d50:
    // 0x428d50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x428d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_428d54:
    // 0x428d54: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x428d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_428d58:
    // 0x428d58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x428d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_428d5c:
    // 0x428d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x428d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_428d60:
    // 0x428d60: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x428d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_428d64:
    // 0x428d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x428d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_428d68:
    // 0x428d68: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x428d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_428d6c:
    // 0x428d6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428d6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428d70:
    // 0x428d70: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x428d70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_428d74:
    // 0x428d74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x428d74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_428d78:
    // 0x428d78: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x428d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_428d7c:
    // 0x428d7c: 0xc04cbd8  jal         func_132F60
label_428d80:
    if (ctx->pc == 0x428D80u) {
        ctx->pc = 0x428D80u;
            // 0x428d80: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x428D84u;
        goto label_428d84;
    }
    ctx->pc = 0x428D7Cu;
    SET_GPR_U32(ctx, 31, 0x428D84u);
    ctx->pc = 0x428D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428D7Cu;
            // 0x428d80: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428D84u; }
        if (ctx->pc != 0x428D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428D84u; }
        if (ctx->pc != 0x428D84u) { return; }
    }
    ctx->pc = 0x428D84u;
label_428d84:
    // 0x428d84: 0xc04c968  jal         func_1325A0
label_428d88:
    if (ctx->pc == 0x428D88u) {
        ctx->pc = 0x428D88u;
            // 0x428d88: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x428D8Cu;
        goto label_428d8c;
    }
    ctx->pc = 0x428D84u;
    SET_GPR_U32(ctx, 31, 0x428D8Cu);
    ctx->pc = 0x428D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428D84u;
            // 0x428d88: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428D8Cu; }
        if (ctx->pc != 0x428D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428D8Cu; }
        if (ctx->pc != 0x428D8Cu) { return; }
    }
    ctx->pc = 0x428D8Cu;
label_428d8c:
    // 0x428d8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_428d90:
    // 0x428d90: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x428d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_428d94:
    // 0x428d94: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x428d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_428d98:
    // 0x428d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428d9c:
    // 0x428d9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x428d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_428da0:
    // 0x428da0: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x428da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_428da4:
    // 0x428da4: 0x2463bfb0  addiu       $v1, $v1, -0x4050
    ctx->pc = 0x428da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950832));
label_428da8:
    // 0x428da8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x428da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_428dac:
    // 0x428dac: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x428dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
label_428db0:
    // 0x428db0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x428db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_428db4:
    // 0x428db4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428db4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428db8:
    // 0x428db8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x428db8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_428dbc:
    // 0x428dbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x428dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_428dc0:
    // 0x428dc0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x428dc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_428dc4:
    // 0x428dc4: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x428dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
label_428dc8:
    // 0x428dc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x428dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_428dcc:
    // 0x428dcc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x428dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_428dd0:
    // 0x428dd0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x428dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_428dd4:
    // 0x428dd4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x428dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_428dd8:
    // 0x428dd8: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x428dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
label_428ddc:
    // 0x428ddc: 0xa60000a2  sh          $zero, 0xA2($s0)
    ctx->pc = 0x428ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
label_428de0:
    // 0x428de0: 0xa60200a4  sh          $v0, 0xA4($s0)
    ctx->pc = 0x428de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 2));
label_428de4:
    // 0x428de4: 0xc04cbd8  jal         func_132F60
label_428de8:
    if (ctx->pc == 0x428DE8u) {
        ctx->pc = 0x428DE8u;
            // 0x428de8: 0xa60000a6  sh          $zero, 0xA6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x428DECu;
        goto label_428dec;
    }
    ctx->pc = 0x428DE4u;
    SET_GPR_U32(ctx, 31, 0x428DECu);
    ctx->pc = 0x428DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428DE4u;
            // 0x428de8: 0xa60000a6  sh          $zero, 0xA6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428DECu; }
        if (ctx->pc != 0x428DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428DECu; }
        if (ctx->pc != 0x428DECu) { return; }
    }
    ctx->pc = 0x428DECu;
label_428dec:
    // 0x428dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428df0:
    // 0x428df0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x428df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_428df4:
    // 0x428df4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428df4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428df8:
    // 0x428df8: 0xc04cbd8  jal         func_132F60
label_428dfc:
    if (ctx->pc == 0x428DFCu) {
        ctx->pc = 0x428DFCu;
            // 0x428dfc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428E00u;
        goto label_428e00;
    }
    ctx->pc = 0x428DF8u;
    SET_GPR_U32(ctx, 31, 0x428E00u);
    ctx->pc = 0x428DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428DF8u;
            // 0x428dfc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E00u; }
        if (ctx->pc != 0x428E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E00u; }
        if (ctx->pc != 0x428E00u) { return; }
    }
    ctx->pc = 0x428E00u;
label_428e00:
    // 0x428e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428e04:
    // 0x428e04: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x428e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_428e08:
    // 0x428e08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428e08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428e0c:
    // 0x428e0c: 0xc04cbd8  jal         func_132F60
label_428e10:
    if (ctx->pc == 0x428E10u) {
        ctx->pc = 0x428E10u;
            // 0x428e10: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428E14u;
        goto label_428e14;
    }
    ctx->pc = 0x428E0Cu;
    SET_GPR_U32(ctx, 31, 0x428E14u);
    ctx->pc = 0x428E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E0Cu;
            // 0x428e10: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E14u; }
        if (ctx->pc != 0x428E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E14u; }
        if (ctx->pc != 0x428E14u) { return; }
    }
    ctx->pc = 0x428E14u;
label_428e14:
    // 0x428e14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428e18:
    // 0x428e18: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x428e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_428e1c:
    // 0x428e1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428e1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428e20:
    // 0x428e20: 0xc04cbd8  jal         func_132F60
label_428e24:
    if (ctx->pc == 0x428E24u) {
        ctx->pc = 0x428E24u;
            // 0x428e24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428E28u;
        goto label_428e28;
    }
    ctx->pc = 0x428E20u;
    SET_GPR_U32(ctx, 31, 0x428E28u);
    ctx->pc = 0x428E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E20u;
            // 0x428e24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E28u; }
        if (ctx->pc != 0x428E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E28u; }
        if (ctx->pc != 0x428E28u) { return; }
    }
    ctx->pc = 0x428E28u;
label_428e28:
    // 0x428e28: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x428e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_428e2c:
    // 0x428e2c: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x428e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_428e30:
    // 0x428e30: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x428e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_428e34:
    // 0x428e34: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x428e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_428e38:
    // 0x428e38: 0xc04c968  jal         func_1325A0
label_428e3c:
    if (ctx->pc == 0x428E3Cu) {
        ctx->pc = 0x428E3Cu;
            // 0x428e3c: 0xa2000148  sb          $zero, 0x148($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x428E40u;
        goto label_428e40;
    }
    ctx->pc = 0x428E38u;
    SET_GPR_U32(ctx, 31, 0x428E40u);
    ctx->pc = 0x428E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E38u;
            // 0x428e3c: 0xa2000148  sb          $zero, 0x148($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E40u; }
        if (ctx->pc != 0x428E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E40u; }
        if (ctx->pc != 0x428E40u) { return; }
    }
    ctx->pc = 0x428E40u;
label_428e40:
    // 0x428e40: 0xc04c968  jal         func_1325A0
label_428e44:
    if (ctx->pc == 0x428E44u) {
        ctx->pc = 0x428E44u;
            // 0x428e44: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x428E48u;
        goto label_428e48;
    }
    ctx->pc = 0x428E40u;
    SET_GPR_U32(ctx, 31, 0x428E48u);
    ctx->pc = 0x428E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E40u;
            // 0x428e44: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E48u; }
        if (ctx->pc != 0x428E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E48u; }
        if (ctx->pc != 0x428E48u) { return; }
    }
    ctx->pc = 0x428E48u;
label_428e48:
    // 0x428e48: 0xc04c968  jal         func_1325A0
label_428e4c:
    if (ctx->pc == 0x428E4Cu) {
        ctx->pc = 0x428E4Cu;
            // 0x428e4c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x428E50u;
        goto label_428e50;
    }
    ctx->pc = 0x428E48u;
    SET_GPR_U32(ctx, 31, 0x428E50u);
    ctx->pc = 0x428E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E48u;
            // 0x428e4c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E50u; }
        if (ctx->pc != 0x428E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E50u; }
        if (ctx->pc != 0x428E50u) { return; }
    }
    ctx->pc = 0x428E50u;
label_428e50:
    // 0x428e50: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x428e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_428e54:
    // 0x428e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x428e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_428e58:
    // 0x428e58: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x428e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_428e5c:
    // 0x428e5c: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x428e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_428e60:
    // 0x428e60: 0xc04f26c  jal         func_13C9B0
label_428e64:
    if (ctx->pc == 0x428E64u) {
        ctx->pc = 0x428E64u;
            // 0x428e64: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x428E68u;
        goto label_428e68;
    }
    ctx->pc = 0x428E60u;
    SET_GPR_U32(ctx, 31, 0x428E68u);
    ctx->pc = 0x428E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E60u;
            // 0x428e64: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E68u; }
        if (ctx->pc != 0x428E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E68u; }
        if (ctx->pc != 0x428E68u) { return; }
    }
    ctx->pc = 0x428E68u;
label_428e68:
    // 0x428e68: 0xc04c968  jal         func_1325A0
label_428e6c:
    if (ctx->pc == 0x428E6Cu) {
        ctx->pc = 0x428E6Cu;
            // 0x428e6c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x428E70u;
        goto label_428e70;
    }
    ctx->pc = 0x428E68u;
    SET_GPR_U32(ctx, 31, 0x428E70u);
    ctx->pc = 0x428E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E68u;
            // 0x428e6c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E70u; }
        if (ctx->pc != 0x428E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E70u; }
        if (ctx->pc != 0x428E70u) { return; }
    }
    ctx->pc = 0x428E70u;
label_428e70:
    // 0x428e70: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x428e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_428e74:
    // 0x428e74: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x428e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_428e78:
    // 0x428e78: 0xc04cc04  jal         func_133010
label_428e7c:
    if (ctx->pc == 0x428E7Cu) {
        ctx->pc = 0x428E7Cu;
            // 0x428e7c: 0x24a5ca40  addiu       $a1, $a1, -0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953536));
        ctx->pc = 0x428E80u;
        goto label_428e80;
    }
    ctx->pc = 0x428E78u;
    SET_GPR_U32(ctx, 31, 0x428E80u);
    ctx->pc = 0x428E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428E78u;
            // 0x428e7c: 0x24a5ca40  addiu       $a1, $a1, -0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E80u; }
        if (ctx->pc != 0x428E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428E80u; }
        if (ctx->pc != 0x428E80u) { return; }
    }
    ctx->pc = 0x428E80u;
label_428e80:
    // 0x428e80: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x428e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
label_428e84:
    // 0x428e84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428e88:
    // 0x428e88: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x428e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
label_428e8c:
    // 0x428e8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x428e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_428e90:
    // 0x428e90: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x428e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
label_428e94:
    // 0x428e94: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x428e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_428e98:
    // 0x428e98: 0xa60001d0  sh          $zero, 0x1D0($s0)
    ctx->pc = 0x428e98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 464), (uint16_t)GPR_U32(ctx, 0));
label_428e9c:
    // 0x428e9c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428e9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428ea0:
    // 0x428ea0: 0xa60001d2  sh          $zero, 0x1D2($s0)
    ctx->pc = 0x428ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 466), (uint16_t)GPR_U32(ctx, 0));
label_428ea4:
    // 0x428ea4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x428ea4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_428ea8:
    // 0x428ea8: 0xa60201d4  sh          $v0, 0x1D4($s0)
    ctx->pc = 0x428ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 468), (uint16_t)GPR_U32(ctx, 2));
label_428eac:
    // 0x428eac: 0xc04cbd8  jal         func_132F60
label_428eb0:
    if (ctx->pc == 0x428EB0u) {
        ctx->pc = 0x428EB0u;
            // 0x428eb0: 0xa60001d6  sh          $zero, 0x1D6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x428EB4u;
        goto label_428eb4;
    }
    ctx->pc = 0x428EACu;
    SET_GPR_U32(ctx, 31, 0x428EB4u);
    ctx->pc = 0x428EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428EACu;
            // 0x428eb0: 0xa60001d6  sh          $zero, 0x1D6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EB4u; }
        if (ctx->pc != 0x428EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EB4u; }
        if (ctx->pc != 0x428EB4u) { return; }
    }
    ctx->pc = 0x428EB4u;
label_428eb4:
    // 0x428eb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428eb8:
    // 0x428eb8: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x428eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_428ebc:
    // 0x428ebc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428ebcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428ec0:
    // 0x428ec0: 0xc04cbd8  jal         func_132F60
label_428ec4:
    if (ctx->pc == 0x428EC4u) {
        ctx->pc = 0x428EC4u;
            // 0x428ec4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428EC8u;
        goto label_428ec8;
    }
    ctx->pc = 0x428EC0u;
    SET_GPR_U32(ctx, 31, 0x428EC8u);
    ctx->pc = 0x428EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428EC0u;
            // 0x428ec4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EC8u; }
        if (ctx->pc != 0x428EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EC8u; }
        if (ctx->pc != 0x428EC8u) { return; }
    }
    ctx->pc = 0x428EC8u;
label_428ec8:
    // 0x428ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428ecc:
    // 0x428ecc: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x428eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_428ed0:
    // 0x428ed0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428ed0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428ed4:
    // 0x428ed4: 0xc04cbd8  jal         func_132F60
label_428ed8:
    if (ctx->pc == 0x428ED8u) {
        ctx->pc = 0x428ED8u;
            // 0x428ed8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428EDCu;
        goto label_428edc;
    }
    ctx->pc = 0x428ED4u;
    SET_GPR_U32(ctx, 31, 0x428EDCu);
    ctx->pc = 0x428ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428ED4u;
            // 0x428ed8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EDCu; }
        if (ctx->pc != 0x428EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EDCu; }
        if (ctx->pc != 0x428EDCu) { return; }
    }
    ctx->pc = 0x428EDCu;
label_428edc:
    // 0x428edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x428edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428ee0:
    // 0x428ee0: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x428ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_428ee4:
    // 0x428ee4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x428ee4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_428ee8:
    // 0x428ee8: 0xc04cbd8  jal         func_132F60
label_428eec:
    if (ctx->pc == 0x428EECu) {
        ctx->pc = 0x428EECu;
            // 0x428eec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x428EF0u;
        goto label_428ef0;
    }
    ctx->pc = 0x428EE8u;
    SET_GPR_U32(ctx, 31, 0x428EF0u);
    ctx->pc = 0x428EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428EE8u;
            // 0x428eec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EF0u; }
        if (ctx->pc != 0x428EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428EF0u; }
        if (ctx->pc != 0x428EF0u) { return; }
    }
    ctx->pc = 0x428EF0u;
label_428ef0:
    // 0x428ef0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x428ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_428ef4:
    // 0x428ef4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x428ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_428ef8:
    // 0x428ef8: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x428ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_428efc:
    // 0x428efc: 0x24a56e60  addiu       $a1, $a1, 0x6E60
    ctx->pc = 0x428efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28256));
label_428f00:
    // 0x428f00: 0x24c668b0  addiu       $a2, $a2, 0x68B0
    ctx->pc = 0x428f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26800));
label_428f04:
    // 0x428f04: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x428f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_428f08:
    // 0x428f08: 0xc040804  jal         func_102010
label_428f0c:
    if (ctx->pc == 0x428F0Cu) {
        ctx->pc = 0x428F0Cu;
            // 0x428f0c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x428F10u;
        goto label_428f10;
    }
    ctx->pc = 0x428F08u;
    SET_GPR_U32(ctx, 31, 0x428F10u);
    ctx->pc = 0x428F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428F08u;
            // 0x428f0c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428F10u; }
        if (ctx->pc != 0x428F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428F10u; }
        if (ctx->pc != 0x428F10u) { return; }
    }
    ctx->pc = 0x428F10u;
label_428f10:
    // 0x428f10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x428f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_428f14:
    // 0x428f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x428f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_428f18:
    // 0x428f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_428f1c:
    // 0x428f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_428f20:
    // 0x428f20: 0x3e00008  jr          $ra
label_428f24:
    if (ctx->pc == 0x428F24u) {
        ctx->pc = 0x428F24u;
            // 0x428f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x428F28u;
        goto label_428f28;
    }
    ctx->pc = 0x428F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428F20u;
            // 0x428f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428F28u;
label_428f28:
    // 0x428f28: 0x0  nop
    ctx->pc = 0x428f28u;
    // NOP
label_428f2c:
    // 0x428f2c: 0x0  nop
    ctx->pc = 0x428f2cu;
    // NOP
label_428f30:
    // 0x428f30: 0x3e00008  jr          $ra
label_428f34:
    if (ctx->pc == 0x428F34u) {
        ctx->pc = 0x428F34u;
            // 0x428f34: 0x240261da  addiu       $v0, $zero, 0x61DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25050));
        ctx->pc = 0x428F38u;
        goto label_428f38;
    }
    ctx->pc = 0x428F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428F30u;
            // 0x428f34: 0x240261da  addiu       $v0, $zero, 0x61DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428F38u;
label_428f38:
    // 0x428f38: 0x0  nop
    ctx->pc = 0x428f38u;
    // NOP
label_428f3c:
    // 0x428f3c: 0x0  nop
    ctx->pc = 0x428f3cu;
    // NOP
label_428f40:
    // 0x428f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x428f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_428f44:
    // 0x428f44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x428f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_428f48:
    // 0x428f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x428f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_428f4c:
    // 0x428f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x428f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_428f50:
    // 0x428f50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x428f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_428f54:
    // 0x428f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x428f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_428f58:
    // 0x428f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x428f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_428f5c:
    // 0x428f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_428f60:
    // 0x428f60: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x428f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_428f64:
    // 0x428f64: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_428f68:
    if (ctx->pc == 0x428F68u) {
        ctx->pc = 0x428F68u;
            // 0x428f68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428F6Cu;
        goto label_428f6c;
    }
    ctx->pc = 0x428F64u;
    {
        const bool branch_taken_0x428f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x428F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428F64u;
            // 0x428f68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428f64) {
            ctx->pc = 0x428FA8u;
            goto label_428fa8;
        }
    }
    ctx->pc = 0x428F6Cu;
label_428f6c:
    // 0x428f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x428f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428f70:
    // 0x428f70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x428f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428f74:
    // 0x428f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x428f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428f78:
    // 0x428f78: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x428f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_428f7c:
    // 0x428f7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x428f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_428f80:
    // 0x428f80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x428f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_428f84:
    // 0x428f84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x428f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_428f88:
    // 0x428f88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x428f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_428f8c:
    // 0x428f8c: 0x320f809  jalr        $t9
label_428f90:
    if (ctx->pc == 0x428F90u) {
        ctx->pc = 0x428F94u;
        goto label_428f94;
    }
    ctx->pc = 0x428F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x428F94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x428F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x428F94u; }
            if (ctx->pc != 0x428F94u) { return; }
        }
        }
    }
    ctx->pc = 0x428F94u;
label_428f94:
    // 0x428f94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x428f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_428f98:
    // 0x428f98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x428f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_428f9c:
    // 0x428f9c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x428f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_428fa0:
    // 0x428fa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_428fa4:
    if (ctx->pc == 0x428FA4u) {
        ctx->pc = 0x428FA4u;
            // 0x428fa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x428FA8u;
        goto label_428fa8;
    }
    ctx->pc = 0x428FA0u;
    {
        const bool branch_taken_0x428fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428FA0u;
            // 0x428fa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428fa0) {
            ctx->pc = 0x428F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_428f78;
        }
    }
    ctx->pc = 0x428FA8u;
label_428fa8:
    // 0x428fa8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x428fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_428fac:
    // 0x428fac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x428facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_428fb0:
    // 0x428fb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x428fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_428fb4:
    // 0x428fb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x428fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_428fb8:
    // 0x428fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x428fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_428fbc:
    // 0x428fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_428fc0:
    // 0x428fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_428fc4:
    // 0x428fc4: 0x3e00008  jr          $ra
label_428fc8:
    if (ctx->pc == 0x428FC8u) {
        ctx->pc = 0x428FC8u;
            // 0x428fc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x428FCCu;
        goto label_428fcc;
    }
    ctx->pc = 0x428FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428FC4u;
            // 0x428fc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428FCCu;
label_428fcc:
    // 0x428fcc: 0x0  nop
    ctx->pc = 0x428fccu;
    // NOP
label_428fd0:
    // 0x428fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x428fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_428fd4:
    // 0x428fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x428fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_428fd8:
    // 0x428fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_428fdc:
    // 0x428fdc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x428fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_428fe0:
    // 0x428fe0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_428fe4:
    if (ctx->pc == 0x428FE4u) {
        ctx->pc = 0x428FE4u;
            // 0x428fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428FE8u;
        goto label_428fe8;
    }
    ctx->pc = 0x428FE0u;
    {
        const bool branch_taken_0x428fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428FE0u;
            // 0x428fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428fe0) {
            ctx->pc = 0x429100u;
            goto label_429100;
        }
    }
    ctx->pc = 0x428FE8u;
label_428fe8:
    // 0x428fe8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x428fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_428fec:
    // 0x428fec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x428fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_428ff0:
    // 0x428ff0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x428ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_428ff4:
    // 0x428ff4: 0xc075128  jal         func_1D44A0
label_428ff8:
    if (ctx->pc == 0x428FF8u) {
        ctx->pc = 0x428FF8u;
            // 0x428ff8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x428FFCu;
        goto label_428ffc;
    }
    ctx->pc = 0x428FF4u;
    SET_GPR_U32(ctx, 31, 0x428FFCu);
    ctx->pc = 0x428FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428FF4u;
            // 0x428ff8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428FFCu; }
        if (ctx->pc != 0x428FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428FFCu; }
        if (ctx->pc != 0x428FFCu) { return; }
    }
    ctx->pc = 0x428FFCu;
label_428ffc:
    // 0x428ffc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x428ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_429000:
    // 0x429000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_429004:
    // 0x429004: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x429004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_429008:
    // 0x429008: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x429008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42900c:
    // 0x42900c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42900cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_429010:
    // 0x429010: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_429014:
    if (ctx->pc == 0x429014u) {
        ctx->pc = 0x429014u;
            // 0x429014: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x429018u;
        goto label_429018;
    }
    ctx->pc = 0x429010u;
    {
        const bool branch_taken_0x429010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x429014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429010u;
            // 0x429014: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429010) {
            ctx->pc = 0x429020u;
            goto label_429020;
        }
    }
    ctx->pc = 0x429018u;
label_429018:
    // 0x429018: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42901c:
    // 0x42901c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x42901cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_429020:
    // 0x429020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x429020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_429024:
    // 0x429024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_429028:
    // 0x429028: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x429028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42902c:
    // 0x42902c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_429030:
    // 0x429030: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x429030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_429034:
    // 0x429034: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_429038:
    if (ctx->pc == 0x429038u) {
        ctx->pc = 0x429038u;
            // 0x429038: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42903Cu;
        goto label_42903c;
    }
    ctx->pc = 0x429034u;
    {
        const bool branch_taken_0x429034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429034) {
            ctx->pc = 0x429038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429034u;
            // 0x429038: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429048u;
            goto label_429048;
        }
    }
    ctx->pc = 0x42903Cu;
label_42903c:
    // 0x42903c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42903cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_429040:
    // 0x429040: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x429040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_429044:
    // 0x429044: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x429044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_429048:
    // 0x429048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42904c:
    // 0x42904c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x42904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_429050:
    // 0x429050: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x429050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_429054:
    // 0x429054: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x429054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_429058:
    // 0x429058: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42905c:
    if (ctx->pc == 0x42905Cu) {
        ctx->pc = 0x42905Cu;
            // 0x42905c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x429060u;
        goto label_429060;
    }
    ctx->pc = 0x429058u;
    {
        const bool branch_taken_0x429058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429058) {
            ctx->pc = 0x42905Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429058u;
            // 0x42905c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42906Cu;
            goto label_42906c;
        }
    }
    ctx->pc = 0x429060u;
label_429060:
    // 0x429060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_429064:
    // 0x429064: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x429064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_429068:
    // 0x429068: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x429068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42906c:
    // 0x42906c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x42906cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_429070:
    // 0x429070: 0x320f809  jalr        $t9
label_429074:
    if (ctx->pc == 0x429074u) {
        ctx->pc = 0x429074u;
            // 0x429074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429078u;
        goto label_429078;
    }
    ctx->pc = 0x429070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429078u);
        ctx->pc = 0x429074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429070u;
            // 0x429074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429078u; }
            if (ctx->pc != 0x429078u) { return; }
        }
        }
    }
    ctx->pc = 0x429078u;
label_429078:
    // 0x429078: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x429078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42907c:
    // 0x42907c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_429080:
    // 0x429080: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x429080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_429084:
    // 0x429084: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x429084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_429088:
    // 0x429088: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x429088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42908c:
    // 0x42908c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x42908cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_429090:
    // 0x429090: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_429094:
    if (ctx->pc == 0x429094u) {
        ctx->pc = 0x429094u;
            // 0x429094: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x429098u;
        goto label_429098;
    }
    ctx->pc = 0x429090u;
    {
        const bool branch_taken_0x429090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429090) {
            ctx->pc = 0x429094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429090u;
            // 0x429094: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4290A4u;
            goto label_4290a4;
        }
    }
    ctx->pc = 0x429098u;
label_429098:
    // 0x429098: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x429098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42909c:
    // 0x42909c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x42909cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4290a0:
    // 0x4290a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4290a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4290a4:
    // 0x4290a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290a8:
    // 0x4290a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4290a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4290ac:
    // 0x4290ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4290acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4290b0:
    // 0x4290b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4290b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4290b4:
    // 0x4290b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4290b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4290b8:
    // 0x4290b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4290bc:
    if (ctx->pc == 0x4290BCu) {
        ctx->pc = 0x4290C0u;
        goto label_4290c0;
    }
    ctx->pc = 0x4290B8u;
    {
        const bool branch_taken_0x4290b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4290b8) {
            ctx->pc = 0x4290C8u;
            goto label_4290c8;
        }
    }
    ctx->pc = 0x4290C0u;
label_4290c0:
    // 0x4290c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290c4:
    // 0x4290c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4290c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4290c8:
    // 0x4290c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290cc:
    // 0x4290cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4290ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4290d0:
    // 0x4290d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4290d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4290d4:
    // 0x4290d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4290d8:
    if (ctx->pc == 0x4290D8u) {
        ctx->pc = 0x4290DCu;
        goto label_4290dc;
    }
    ctx->pc = 0x4290D4u;
    {
        const bool branch_taken_0x4290d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4290d4) {
            ctx->pc = 0x4290E4u;
            goto label_4290e4;
        }
    }
    ctx->pc = 0x4290DCu;
label_4290dc:
    // 0x4290dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290e0:
    // 0x4290e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4290e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4290e4:
    // 0x4290e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290e8:
    // 0x4290e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4290e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4290ec:
    // 0x4290ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4290ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4290f0:
    // 0x4290f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4290f4:
    if (ctx->pc == 0x4290F4u) {
        ctx->pc = 0x4290F4u;
            // 0x4290f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4290F8u;
        goto label_4290f8;
    }
    ctx->pc = 0x4290F0u;
    {
        const bool branch_taken_0x4290f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4290f0) {
            ctx->pc = 0x4290F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4290F0u;
            // 0x4290f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429104u;
            goto label_429104;
        }
    }
    ctx->pc = 0x4290F8u;
label_4290f8:
    // 0x4290f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4290f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4290fc:
    // 0x4290fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4290fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_429100:
    // 0x429100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x429100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_429104:
    // 0x429104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429108:
    // 0x429108: 0x3e00008  jr          $ra
label_42910c:
    if (ctx->pc == 0x42910Cu) {
        ctx->pc = 0x42910Cu;
            // 0x42910c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x429110u;
        goto label_429110;
    }
    ctx->pc = 0x429108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429108u;
            // 0x42910c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429110u;
label_429110:
    // 0x429110: 0x810a270  j           func_4289C0
label_429114:
    if (ctx->pc == 0x429114u) {
        ctx->pc = 0x429114u;
            // 0x429114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x429118u;
        goto label_429118;
    }
    ctx->pc = 0x429110u;
    ctx->pc = 0x429114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429110u;
            // 0x429114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4289C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4289C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x429118u;
label_429118:
    // 0x429118: 0x0  nop
    ctx->pc = 0x429118u;
    // NOP
label_42911c:
    // 0x42911c: 0x0  nop
    ctx->pc = 0x42911cu;
    // NOP
label_429120:
    // 0x429120: 0x8109cd0  j           func_427340
label_429124:
    if (ctx->pc == 0x429124u) {
        ctx->pc = 0x429124u;
            // 0x429124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x429128u;
        goto label_429128;
    }
    ctx->pc = 0x429120u;
    ctx->pc = 0x429124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429120u;
            // 0x429124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427340u;
    if (runtime->hasFunction(0x427340u)) {
        auto targetFn = runtime->lookupFunction(0x427340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00427340_0x427340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x429128u;
label_429128:
    // 0x429128: 0x0  nop
    ctx->pc = 0x429128u;
    // NOP
label_42912c:
    // 0x42912c: 0x0  nop
    ctx->pc = 0x42912cu;
    // NOP
label_429130:
    // 0x429130: 0x8109cac  j           func_4272B0
label_429134:
    if (ctx->pc == 0x429134u) {
        ctx->pc = 0x429134u;
            // 0x429134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x429138u;
        goto label_429138;
    }
    ctx->pc = 0x429130u;
    ctx->pc = 0x429134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429130u;
            // 0x429134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4272B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4272B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x429138u;
label_429138:
    // 0x429138: 0x0  nop
    ctx->pc = 0x429138u;
    // NOP
label_42913c:
    // 0x42913c: 0x0  nop
    ctx->pc = 0x42913cu;
    // NOP
label_429140:
    // 0x429140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x429140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_429144:
    // 0x429144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x429144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_429148:
    // 0x429148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x429148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42914c:
    // 0x42914c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42914cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429150:
    // 0x429150: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_429154:
    if (ctx->pc == 0x429154u) {
        ctx->pc = 0x429154u;
            // 0x429154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429158u;
        goto label_429158;
    }
    ctx->pc = 0x429150u;
    {
        const bool branch_taken_0x429150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x429150) {
            ctx->pc = 0x429154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429150u;
            // 0x429154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429190u;
            goto label_429190;
        }
    }
    ctx->pc = 0x429158u;
label_429158:
    // 0x429158: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x429158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42915c:
    // 0x42915c: 0x2442c0a0  addiu       $v0, $v0, -0x3F60
    ctx->pc = 0x42915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951072));
label_429160:
    // 0x429160: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_429164:
    if (ctx->pc == 0x429164u) {
        ctx->pc = 0x429164u;
            // 0x429164: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x429168u;
        goto label_429168;
    }
    ctx->pc = 0x429160u;
    {
        const bool branch_taken_0x429160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x429164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429160u;
            // 0x429164: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429160) {
            ctx->pc = 0x429174u;
            goto label_429174;
        }
    }
    ctx->pc = 0x429168u;
label_429168:
    // 0x429168: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x429168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42916c:
    // 0x42916c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x42916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_429170:
    // 0x429170: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x429170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_429174:
    // 0x429174: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x429174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_429178:
    // 0x429178: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x429178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42917c:
    // 0x42917c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_429180:
    if (ctx->pc == 0x429180u) {
        ctx->pc = 0x429184u;
        goto label_429184;
    }
    ctx->pc = 0x42917Cu;
    {
        const bool branch_taken_0x42917c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42917c) {
            ctx->pc = 0x42918Cu;
            goto label_42918c;
        }
    }
    ctx->pc = 0x429184u;
label_429184:
    // 0x429184: 0xc0400a8  jal         func_1002A0
label_429188:
    if (ctx->pc == 0x429188u) {
        ctx->pc = 0x429188u;
            // 0x429188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42918Cu;
        goto label_42918c;
    }
    ctx->pc = 0x429184u;
    SET_GPR_U32(ctx, 31, 0x42918Cu);
    ctx->pc = 0x429188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429184u;
            // 0x429188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42918Cu; }
        if (ctx->pc != 0x42918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42918Cu; }
        if (ctx->pc != 0x42918Cu) { return; }
    }
    ctx->pc = 0x42918Cu;
label_42918c:
    // 0x42918c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_429190:
    // 0x429190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x429190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_429194:
    // 0x429194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429198:
    // 0x429198: 0x3e00008  jr          $ra
label_42919c:
    if (ctx->pc == 0x42919Cu) {
        ctx->pc = 0x42919Cu;
            // 0x42919c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4291A0u;
        goto label_4291a0;
    }
    ctx->pc = 0x429198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429198u;
            // 0x42919c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4291A0u;
label_4291a0:
    // 0x4291a0: 0x3e00008  jr          $ra
label_4291a4:
    if (ctx->pc == 0x4291A4u) {
        ctx->pc = 0x4291A4u;
            // 0x4291a4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x4291A8u;
        goto label_4291a8;
    }
    ctx->pc = 0x4291A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4291A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4291A0u;
            // 0x4291a4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4291A8u;
label_4291a8:
    // 0x4291a8: 0x0  nop
    ctx->pc = 0x4291a8u;
    // NOP
label_4291ac:
    // 0x4291ac: 0x0  nop
    ctx->pc = 0x4291acu;
    // NOP
label_4291b0:
    // 0x4291b0: 0x3e00008  jr          $ra
label_4291b4:
    if (ctx->pc == 0x4291B4u) {
        ctx->pc = 0x4291B8u;
        goto label_4291b8;
    }
    ctx->pc = 0x4291B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4291B8u;
label_4291b8:
    // 0x4291b8: 0x0  nop
    ctx->pc = 0x4291b8u;
    // NOP
label_4291bc:
    // 0x4291bc: 0x0  nop
    ctx->pc = 0x4291bcu;
    // NOP
label_4291c0:
    // 0x4291c0: 0x9486000c  lhu         $a2, 0xC($a0)
    ctx->pc = 0x4291c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_4291c4:
    // 0x4291c4: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4291c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4291c8:
    // 0x4291c8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x4291c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_4291cc:
    // 0x4291cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4291ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_4291d0:
    // 0x4291d0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x4291d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4291d4:
    // 0x4291d4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4291d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4291d8:
    // 0x4291d8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x4291d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_4291dc:
    // 0x4291dc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x4291dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_4291e0:
    // 0x4291e0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x4291e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4291e4:
    // 0x4291e4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x4291e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_4291e8:
    // 0x4291e8: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x4291e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_4291ec:
    // 0x4291ec: 0x3e00008  jr          $ra
label_4291f0:
    if (ctx->pc == 0x4291F0u) {
        ctx->pc = 0x4291F0u;
            // 0x4291f0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x4291F4u;
        goto label_4291f4;
    }
    ctx->pc = 0x4291ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4291F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4291ECu;
            // 0x4291f0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4291F4u;
label_4291f4:
    // 0x4291f4: 0x0  nop
    ctx->pc = 0x4291f4u;
    // NOP
label_4291f8:
    // 0x4291f8: 0x0  nop
    ctx->pc = 0x4291f8u;
    // NOP
label_4291fc:
    // 0x4291fc: 0x0  nop
    ctx->pc = 0x4291fcu;
    // NOP
label_429200:
    // 0x429200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_429204:
    // 0x429204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x429204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_429208:
    // 0x429208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42920c:
    // 0x42920c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429210:
    // 0x429210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x429210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_429214:
    // 0x429214: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x429214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429218:
    // 0x429218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x429218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42921c:
    // 0x42921c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x42921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_429220:
    // 0x429220: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x429220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_429224:
    // 0x429224: 0xc04cc04  jal         func_133010
label_429228:
    if (ctx->pc == 0x429228u) {
        ctx->pc = 0x429228u;
            // 0x429228: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x42922Cu;
        goto label_42922c;
    }
    ctx->pc = 0x429224u;
    SET_GPR_U32(ctx, 31, 0x42922Cu);
    ctx->pc = 0x429228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429224u;
            // 0x429228: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42922Cu; }
        if (ctx->pc != 0x42922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42922Cu; }
        if (ctx->pc != 0x42922Cu) { return; }
    }
    ctx->pc = 0x42922Cu;
label_42922c:
    // 0x42922c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x42922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_429230:
    // 0x429230: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x429230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_429234:
    // 0x429234: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x429234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429238:
    // 0x429238: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x429238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_42923c:
    // 0x42923c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x42923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_429240:
    // 0x429240: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x429240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_429244:
    // 0x429244: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x429244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_429248:
    // 0x429248: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x429248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_42924c:
    // 0x42924c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x42924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429250:
    // 0x429250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x429250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_429254:
    // 0x429254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x429254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_429258:
    // 0x429258: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x429258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_42925c:
    // 0x42925c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x42925cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_429260:
    // 0x429260: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x429260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_429264:
    // 0x429264: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x429264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_429268:
    // 0x429268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x429268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42926c:
    // 0x42926c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_429270:
    if (ctx->pc == 0x429270u) {
        ctx->pc = 0x429270u;
            // 0x429270: 0x92030080  lbu         $v1, 0x80($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x429274u;
        goto label_429274;
    }
    ctx->pc = 0x42926Cu;
    {
        const bool branch_taken_0x42926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42926c) {
            ctx->pc = 0x429270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42926Cu;
            // 0x429270: 0x92030080  lbu         $v1, 0x80($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429284u;
            goto label_429284;
        }
    }
    ctx->pc = 0x429274u;
label_429274:
    // 0x429274: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x429274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_429278:
    // 0x429278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x429278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42927c:
    // 0x42927c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x42927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_429280:
    // 0x429280: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x429280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_429284:
    // 0x429284: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x429284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_429288:
    // 0x429288: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x429288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_42928c:
    // 0x42928c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x42928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_429290:
    // 0x429290: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x429290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_429294:
    // 0x429294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x429294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_429298:
    // 0x429298: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x429298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42929c:
    // 0x42929c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x42929cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4292a0:
    // 0x4292a0: 0xc0b89e4  jal         func_2E2790
label_4292a4:
    if (ctx->pc == 0x4292A4u) {
        ctx->pc = 0x4292A4u;
            // 0x4292a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4292A8u;
        goto label_4292a8;
    }
    ctx->pc = 0x4292A0u;
    SET_GPR_U32(ctx, 31, 0x4292A8u);
    ctx->pc = 0x4292A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4292A0u;
            // 0x4292a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4292A8u; }
        if (ctx->pc != 0x4292A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4292A8u; }
        if (ctx->pc != 0x4292A8u) { return; }
    }
    ctx->pc = 0x4292A8u;
label_4292a8:
    // 0x4292a8: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x4292a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_4292ac:
    // 0x4292ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4292acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4292b0:
    // 0x4292b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4292b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4292b4:
    // 0x4292b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4292b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4292b8:
    // 0x4292b8: 0x3e00008  jr          $ra
label_4292bc:
    if (ctx->pc == 0x4292BCu) {
        ctx->pc = 0x4292BCu;
            // 0x4292bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4292C0u;
        goto label_4292c0;
    }
    ctx->pc = 0x4292B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4292BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4292B8u;
            // 0x4292bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4292C0u;
label_4292c0:
    // 0x4292c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4292c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4292c4:
    // 0x4292c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4292c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4292c8:
    // 0x4292c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4292c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4292cc:
    // 0x4292cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4292ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4292d0:
    // 0x4292d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4292d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4292d4:
    // 0x4292d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4292d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4292d8:
    // 0x4292d8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4292d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4292dc:
    // 0x4292dc: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x4292dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4292e0:
    // 0x4292e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4292e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4292e4:
    // 0x4292e4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4292e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4292e8:
    // 0x4292e8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4292e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4292ec:
    // 0x4292ec: 0xc0b8024  jal         func_2E0090
label_4292f0:
    if (ctx->pc == 0x4292F0u) {
        ctx->pc = 0x4292F0u;
            // 0x4292f0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4292F4u;
        goto label_4292f4;
    }
    ctx->pc = 0x4292ECu;
    SET_GPR_U32(ctx, 31, 0x4292F4u);
    ctx->pc = 0x4292F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4292ECu;
            // 0x4292f0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (runtime->hasFunction(0x2E0090u)) {
        auto targetFn = runtime->lookupFunction(0x2E0090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4292F4u; }
        if (ctx->pc != 0x4292F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0090_0x2e0090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4292F4u; }
        if (ctx->pc != 0x4292F4u) { return; }
    }
    ctx->pc = 0x4292F4u;
label_4292f4:
    // 0x4292f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4292f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4292f8:
    // 0x4292f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4292f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4292fc:
    // 0x4292fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4292fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_429300:
    // 0x429300: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x429300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_429304:
    // 0x429304: 0xc04cbd8  jal         func_132F60
label_429308:
    if (ctx->pc == 0x429308u) {
        ctx->pc = 0x429308u;
            // 0x429308: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42930Cu;
        goto label_42930c;
    }
    ctx->pc = 0x429304u;
    SET_GPR_U32(ctx, 31, 0x42930Cu);
    ctx->pc = 0x429308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429304u;
            // 0x429308: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42930Cu; }
        if (ctx->pc != 0x42930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42930Cu; }
        if (ctx->pc != 0x42930Cu) { return; }
    }
    ctx->pc = 0x42930Cu;
label_42930c:
    // 0x42930c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_429310:
    // 0x429310: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x429310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_429314:
    // 0x429314: 0xc04cbe0  jal         func_132F80
label_429318:
    if (ctx->pc == 0x429318u) {
        ctx->pc = 0x429318u;
            // 0x429318: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x42931Cu;
        goto label_42931c;
    }
    ctx->pc = 0x429314u;
    SET_GPR_U32(ctx, 31, 0x42931Cu);
    ctx->pc = 0x429318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429314u;
            // 0x429318: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42931Cu; }
        if (ctx->pc != 0x42931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42931Cu; }
        if (ctx->pc != 0x42931Cu) { return; }
    }
    ctx->pc = 0x42931Cu;
label_42931c:
    // 0x42931c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x42931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_429320:
    // 0x429320: 0xc04cc04  jal         func_133010
label_429324:
    if (ctx->pc == 0x429324u) {
        ctx->pc = 0x429324u;
            // 0x429324: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x429328u;
        goto label_429328;
    }
    ctx->pc = 0x429320u;
    SET_GPR_U32(ctx, 31, 0x429328u);
    ctx->pc = 0x429324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429320u;
            // 0x429324: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429328u; }
        if (ctx->pc != 0x429328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429328u; }
        if (ctx->pc != 0x429328u) { return; }
    }
    ctx->pc = 0x429328u;
label_429328:
    // 0x429328: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x429328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_42932c:
    // 0x42932c: 0xc04cc04  jal         func_133010
label_429330:
    if (ctx->pc == 0x429330u) {
        ctx->pc = 0x429330u;
            // 0x429330: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x429334u;
        goto label_429334;
    }
    ctx->pc = 0x42932Cu;
    SET_GPR_U32(ctx, 31, 0x429334u);
    ctx->pc = 0x429330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42932Cu;
            // 0x429330: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429334u; }
        if (ctx->pc != 0x429334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429334u; }
        if (ctx->pc != 0x429334u) { return; }
    }
    ctx->pc = 0x429334u;
label_429334:
    // 0x429334: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x429334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_429338:
    // 0x429338: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x429338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_42933c:
    // 0x42933c: 0xc0bc684  jal         func_2F1A10
label_429340:
    if (ctx->pc == 0x429340u) {
        ctx->pc = 0x429340u;
            // 0x429340: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x429344u;
        goto label_429344;
    }
    ctx->pc = 0x42933Cu;
    SET_GPR_U32(ctx, 31, 0x429344u);
    ctx->pc = 0x429340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42933Cu;
            // 0x429340: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429344u; }
        if (ctx->pc != 0x429344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429344u; }
        if (ctx->pc != 0x429344u) { return; }
    }
    ctx->pc = 0x429344u;
label_429344:
    // 0x429344: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x429344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_429348:
    // 0x429348: 0xc04f278  jal         func_13C9E0
label_42934c:
    if (ctx->pc == 0x42934Cu) {
        ctx->pc = 0x42934Cu;
            // 0x42934c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x429350u;
        goto label_429350;
    }
    ctx->pc = 0x429348u;
    SET_GPR_U32(ctx, 31, 0x429350u);
    ctx->pc = 0x42934Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429348u;
            // 0x42934c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429350u; }
        if (ctx->pc != 0x429350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429350u; }
        if (ctx->pc != 0x429350u) { return; }
    }
    ctx->pc = 0x429350u;
label_429350:
    // 0x429350: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x429350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_429354:
    // 0x429354: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x429354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_429358:
    // 0x429358: 0xc04cca0  jal         func_133280
label_42935c:
    if (ctx->pc == 0x42935Cu) {
        ctx->pc = 0x42935Cu;
            // 0x42935c: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x429360u;
        goto label_429360;
    }
    ctx->pc = 0x429358u;
    SET_GPR_U32(ctx, 31, 0x429360u);
    ctx->pc = 0x42935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429358u;
            // 0x42935c: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429360u; }
        if (ctx->pc != 0x429360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429360u; }
        if (ctx->pc != 0x429360u) { return; }
    }
    ctx->pc = 0x429360u;
label_429360:
    // 0x429360: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x429360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_429364:
    // 0x429364: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x429364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_429368:
    // 0x429368: 0xc04cbe0  jal         func_132F80
label_42936c:
    if (ctx->pc == 0x42936Cu) {
        ctx->pc = 0x42936Cu;
            // 0x42936c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429370u;
        goto label_429370;
    }
    ctx->pc = 0x429368u;
    SET_GPR_U32(ctx, 31, 0x429370u);
    ctx->pc = 0x42936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429368u;
            // 0x42936c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429370u; }
        if (ctx->pc != 0x429370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429370u; }
        if (ctx->pc != 0x429370u) { return; }
    }
    ctx->pc = 0x429370u;
label_429370:
    // 0x429370: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x429370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_429374:
    // 0x429374: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x429374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_429378:
    // 0x429378: 0xc04cbe0  jal         func_132F80
label_42937c:
    if (ctx->pc == 0x42937Cu) {
        ctx->pc = 0x42937Cu;
            // 0x42937c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429380u;
        goto label_429380;
    }
    ctx->pc = 0x429378u;
    SET_GPR_U32(ctx, 31, 0x429380u);
    ctx->pc = 0x42937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429378u;
            // 0x42937c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429380u; }
        if (ctx->pc != 0x429380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429380u; }
        if (ctx->pc != 0x429380u) { return; }
    }
    ctx->pc = 0x429380u;
label_429380:
    // 0x429380: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x429380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429384:
    // 0x429384: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x429384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_429388:
    // 0x429388: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x429388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42938c:
    // 0x42938c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x42938cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_429390:
    // 0x429390: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x429390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429394:
    // 0x429394: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x429394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_429398:
    // 0x429398: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x429398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42939c:
    // 0x42939c: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x42939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_4293a0:
    // 0x4293a0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4293a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4293a4:
    // 0x4293a4: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x4293a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_4293a8:
    // 0x4293a8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4293a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4293ac:
    // 0x4293ac: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x4293acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_4293b0:
    // 0x4293b0: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x4293b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4293b4:
    // 0x4293b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4293b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4293b8:
    // 0x4293b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4293bc:
    if (ctx->pc == 0x4293BCu) {
        ctx->pc = 0x4293BCu;
            // 0x4293bc: 0x96230070  lhu         $v1, 0x70($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x4293C0u;
        goto label_4293c0;
    }
    ctx->pc = 0x4293B8u;
    {
        const bool branch_taken_0x4293b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4293b8) {
            ctx->pc = 0x4293BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4293B8u;
            // 0x4293bc: 0x96230070  lhu         $v1, 0x70($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4293DCu;
            goto label_4293dc;
        }
    }
    ctx->pc = 0x4293C0u;
label_4293c0:
    // 0x4293c0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x4293c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4293c4:
    // 0x4293c4: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x4293c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_4293c8:
    // 0x4293c8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x4293c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4293cc:
    // 0x4293cc: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x4293ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_4293d0:
    // 0x4293d0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4293d4:
    // 0x4293d4: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x4293d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_4293d8:
    // 0x4293d8: 0x96230070  lhu         $v1, 0x70($s1)
    ctx->pc = 0x4293d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_4293dc:
    // 0x4293dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4293dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4293e0:
    // 0x4293e0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_4293e4:
    if (ctx->pc == 0x4293E4u) {
        ctx->pc = 0x4293E4u;
            // 0x4293e4: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x4293E8u;
        goto label_4293e8;
    }
    ctx->pc = 0x4293E0u;
    {
        const bool branch_taken_0x4293e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4293e0) {
            ctx->pc = 0x4293E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4293E0u;
            // 0x4293e4: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4293F0u;
            goto label_4293f0;
        }
    }
    ctx->pc = 0x4293E8u;
label_4293e8:
    // 0x4293e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_4293ec:
    if (ctx->pc == 0x4293ECu) {
        ctx->pc = 0x4293ECu;
            // 0x4293ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4293F0u;
        goto label_4293f0;
    }
    ctx->pc = 0x4293E8u;
    {
        const bool branch_taken_0x4293e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4293ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4293E8u;
            // 0x4293ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4293e8) {
            ctx->pc = 0x429424u;
            goto label_429424;
        }
    }
    ctx->pc = 0x4293F0u;
label_4293f0:
    // 0x4293f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4293f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4293f4:
    // 0x4293f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4293f8:
    if (ctx->pc == 0x4293F8u) {
        ctx->pc = 0x4293F8u;
            // 0x4293f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4293FCu;
        goto label_4293fc;
    }
    ctx->pc = 0x4293F4u;
    {
        const bool branch_taken_0x4293f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4293f4) {
            ctx->pc = 0x4293F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4293F4u;
            // 0x4293f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42941Cu;
            goto label_42941c;
        }
    }
    ctx->pc = 0x4293FCu;
label_4293fc:
    // 0x4293fc: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x4293fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_429400:
    // 0x429400: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x429400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_429404:
    // 0x429404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x429404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_429408:
    // 0x429408: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_42940c:
    if (ctx->pc == 0x42940Cu) {
        ctx->pc = 0x429410u;
        goto label_429410;
    }
    ctx->pc = 0x429408u;
    {
        const bool branch_taken_0x429408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x429408) {
            ctx->pc = 0x429418u;
            goto label_429418;
        }
    }
    ctx->pc = 0x429410u;
label_429410:
    // 0x429410: 0x10000004  b           . + 4 + (0x4 << 2)
label_429414:
    if (ctx->pc == 0x429414u) {
        ctx->pc = 0x429414u;
            // 0x429414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429418u;
        goto label_429418;
    }
    ctx->pc = 0x429410u;
    {
        const bool branch_taken_0x429410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429410u;
            // 0x429414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429410) {
            ctx->pc = 0x429424u;
            goto label_429424;
        }
    }
    ctx->pc = 0x429418u;
label_429418:
    // 0x429418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x429418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42941c:
    // 0x42941c: 0xc0a9388  jal         func_2A4E20
label_429420:
    if (ctx->pc == 0x429420u) {
        ctx->pc = 0x429424u;
        goto label_429424;
    }
    ctx->pc = 0x42941Cu;
    SET_GPR_U32(ctx, 31, 0x429424u);
    ctx->pc = 0x2A4E20u;
    if (runtime->hasFunction(0x2A4E20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429424u; }
        if (ctx->pc != 0x429424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E20_0x2a4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429424u; }
        if (ctx->pc != 0x429424u) { return; }
    }
    ctx->pc = 0x429424u;
label_429424:
    // 0x429424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x429424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_429428:
    // 0x429428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42942c:
    // 0x42942c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42942cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429430:
    // 0x429430: 0x3e00008  jr          $ra
label_429434:
    if (ctx->pc == 0x429434u) {
        ctx->pc = 0x429434u;
            // 0x429434: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x429438u;
        goto label_429438;
    }
    ctx->pc = 0x429430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429430u;
            // 0x429434: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429438u;
label_429438:
    // 0x429438: 0x0  nop
    ctx->pc = 0x429438u;
    // NOP
label_42943c:
    // 0x42943c: 0x0  nop
    ctx->pc = 0x42943cu;
    // NOP
label_429440:
    // 0x429440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_429444:
    // 0x429444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x429444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_429448:
    // 0x429448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42944c:
    // 0x42944c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429450:
    // 0x429450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x429450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429454:
    // 0x429454: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x429454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_429458:
    // 0x429458: 0xc07649c  jal         func_1D9270
label_42945c:
    if (ctx->pc == 0x42945Cu) {
        ctx->pc = 0x42945Cu;
            // 0x42945c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429460u;
        goto label_429460;
    }
    ctx->pc = 0x429458u;
    SET_GPR_U32(ctx, 31, 0x429460u);
    ctx->pc = 0x42945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429458u;
            // 0x42945c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429460u; }
        if (ctx->pc != 0x429460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429460u; }
        if (ctx->pc != 0x429460u) { return; }
    }
    ctx->pc = 0x429460u;
label_429460:
    // 0x429460: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x429460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_429464:
    // 0x429464: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x429464u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_429468:
    // 0x429468: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x429468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_42946c:
    // 0x42946c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_429470:
    if (ctx->pc == 0x429470u) {
        ctx->pc = 0x429470u;
            // 0x429470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429474u;
        goto label_429474;
    }
    ctx->pc = 0x42946Cu;
    {
        const bool branch_taken_0x42946c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x429470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42946Cu;
            // 0x429470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42946c) {
            ctx->pc = 0x429484u;
            goto label_429484;
        }
    }
    ctx->pc = 0x429474u;
label_429474:
    // 0x429474: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x429474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_429478:
    // 0x429478: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_42947c:
    if (ctx->pc == 0x42947Cu) {
        ctx->pc = 0x429480u;
        goto label_429480;
    }
    ctx->pc = 0x429478u;
    {
        const bool branch_taken_0x429478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429478) {
            ctx->pc = 0x429484u;
            goto label_429484;
        }
    }
    ctx->pc = 0x429480u;
label_429480:
    // 0x429480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x429480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_429484:
    // 0x429484: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_429488:
    if (ctx->pc == 0x429488u) {
        ctx->pc = 0x42948Cu;
        goto label_42948c;
    }
    ctx->pc = 0x429484u;
    {
        const bool branch_taken_0x429484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x429484) {
            ctx->pc = 0x4294A0u;
            goto label_4294a0;
        }
    }
    ctx->pc = 0x42948Cu;
label_42948c:
    // 0x42948c: 0xc075eb4  jal         func_1D7AD0
label_429490:
    if (ctx->pc == 0x429490u) {
        ctx->pc = 0x429494u;
        goto label_429494;
    }
    ctx->pc = 0x42948Cu;
    SET_GPR_U32(ctx, 31, 0x429494u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429494u; }
        if (ctx->pc != 0x429494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429494u; }
        if (ctx->pc != 0x429494u) { return; }
    }
    ctx->pc = 0x429494u;
label_429494:
    // 0x429494: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_429498:
    if (ctx->pc == 0x429498u) {
        ctx->pc = 0x42949Cu;
        goto label_42949c;
    }
    ctx->pc = 0x429494u;
    {
        const bool branch_taken_0x429494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x429494) {
            ctx->pc = 0x4294A0u;
            goto label_4294a0;
        }
    }
    ctx->pc = 0x42949Cu;
label_42949c:
    // 0x42949c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42949cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4294a0:
    // 0x4294a0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_4294a4:
    if (ctx->pc == 0x4294A4u) {
        ctx->pc = 0x4294A8u;
        goto label_4294a8;
    }
    ctx->pc = 0x4294A0u;
    {
        const bool branch_taken_0x4294a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4294a0) {
            ctx->pc = 0x4294BCu;
            goto label_4294bc;
        }
    }
    ctx->pc = 0x4294A8u;
label_4294a8:
    // 0x4294a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4294a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4294ac:
    // 0x4294ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4294acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4294b0:
    // 0x4294b0: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4294b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4294b4:
    // 0x4294b4: 0x54830021  bnel        $a0, $v1, . + 4 + (0x21 << 2)
label_4294b8:
    if (ctx->pc == 0x4294B8u) {
        ctx->pc = 0x4294B8u;
            // 0x4294b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4294BCu;
        goto label_4294bc;
    }
    ctx->pc = 0x4294B4u;
    {
        const bool branch_taken_0x4294b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4294b4) {
            ctx->pc = 0x4294B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4294B4u;
            // 0x4294b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42953Cu;
            goto label_42953c;
        }
    }
    ctx->pc = 0x4294BCu;
label_4294bc:
    // 0x4294bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4294bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4294c0:
    // 0x4294c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4294c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4294c4:
    // 0x4294c4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4294c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4294c8:
    // 0x4294c8: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x4294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4294cc:
    // 0x4294cc: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_4294d0:
    if (ctx->pc == 0x4294D0u) {
        ctx->pc = 0x4294D0u;
            // 0x4294d0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4294D4u;
        goto label_4294d4;
    }
    ctx->pc = 0x4294CCu;
    {
        const bool branch_taken_0x4294cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4294cc) {
            ctx->pc = 0x4294D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4294CCu;
            // 0x4294d0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42951Cu;
            goto label_42951c;
        }
    }
    ctx->pc = 0x4294D4u;
label_4294d4:
    // 0x4294d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4294d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4294d8:
    // 0x4294d8: 0xc072b78  jal         func_1CADE0
label_4294dc:
    if (ctx->pc == 0x4294DCu) {
        ctx->pc = 0x4294DCu;
            // 0x4294dc: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x4294E0u;
        goto label_4294e0;
    }
    ctx->pc = 0x4294D8u;
    SET_GPR_U32(ctx, 31, 0x4294E0u);
    ctx->pc = 0x4294DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4294D8u;
            // 0x4294dc: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4294E0u; }
        if (ctx->pc != 0x4294E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4294E0u; }
        if (ctx->pc != 0x4294E0u) { return; }
    }
    ctx->pc = 0x4294E0u;
label_4294e0:
    // 0x4294e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4294e4:
    if (ctx->pc == 0x4294E4u) {
        ctx->pc = 0x4294E4u;
            // 0x4294e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4294E8u;
        goto label_4294e8;
    }
    ctx->pc = 0x4294E0u;
    {
        const bool branch_taken_0x4294e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4294e0) {
            ctx->pc = 0x4294E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4294E0u;
            // 0x4294e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4294F8u;
            goto label_4294f8;
        }
    }
    ctx->pc = 0x4294E8u;
label_4294e8:
    // 0x4294e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4294e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4294ec:
    // 0x4294ec: 0xc072aaa  jal         func_1CAAA8
label_4294f0:
    if (ctx->pc == 0x4294F0u) {
        ctx->pc = 0x4294F0u;
            // 0x4294f0: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x4294F4u;
        goto label_4294f4;
    }
    ctx->pc = 0x4294ECu;
    SET_GPR_U32(ctx, 31, 0x4294F4u);
    ctx->pc = 0x4294F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4294ECu;
            // 0x4294f0: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4294F4u; }
        if (ctx->pc != 0x4294F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4294F4u; }
        if (ctx->pc != 0x4294F4u) { return; }
    }
    ctx->pc = 0x4294F4u;
label_4294f4:
    // 0x4294f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4294f8:
    // 0x4294f8: 0xc072b78  jal         func_1CADE0
label_4294fc:
    if (ctx->pc == 0x4294FCu) {
        ctx->pc = 0x4294FCu;
            // 0x4294fc: 0x90440074  lbu         $a0, 0x74($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->pc = 0x429500u;
        goto label_429500;
    }
    ctx->pc = 0x4294F8u;
    SET_GPR_U32(ctx, 31, 0x429500u);
    ctx->pc = 0x4294FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4294F8u;
            // 0x4294fc: 0x90440074  lbu         $a0, 0x74($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429500u; }
        if (ctx->pc != 0x429500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429500u; }
        if (ctx->pc != 0x429500u) { return; }
    }
    ctx->pc = 0x429500u;
label_429500:
    // 0x429500: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_429504:
    if (ctx->pc == 0x429504u) {
        ctx->pc = 0x429508u;
        goto label_429508;
    }
    ctx->pc = 0x429500u;
    {
        const bool branch_taken_0x429500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x429500) {
            ctx->pc = 0x429538u;
            goto label_429538;
        }
    }
    ctx->pc = 0x429508u;
label_429508:
    // 0x429508: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x429508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_42950c:
    // 0x42950c: 0xc072aaa  jal         func_1CAAA8
label_429510:
    if (ctx->pc == 0x429510u) {
        ctx->pc = 0x429510u;
            // 0x429510: 0x90440074  lbu         $a0, 0x74($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->pc = 0x429514u;
        goto label_429514;
    }
    ctx->pc = 0x42950Cu;
    SET_GPR_U32(ctx, 31, 0x429514u);
    ctx->pc = 0x429510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42950Cu;
            // 0x429510: 0x90440074  lbu         $a0, 0x74($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429514u; }
        if (ctx->pc != 0x429514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429514u; }
        if (ctx->pc != 0x429514u) { return; }
    }
    ctx->pc = 0x429514u;
label_429514:
    // 0x429514: 0x10000008  b           . + 4 + (0x8 << 2)
label_429518:
    if (ctx->pc == 0x429518u) {
        ctx->pc = 0x42951Cu;
        goto label_42951c;
    }
    ctx->pc = 0x429514u;
    {
        const bool branch_taken_0x429514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429514) {
            ctx->pc = 0x429538u;
            goto label_429538;
        }
    }
    ctx->pc = 0x42951Cu;
label_42951c:
    // 0x42951c: 0xc072b78  jal         func_1CADE0
label_429520:
    if (ctx->pc == 0x429520u) {
        ctx->pc = 0x429520u;
            // 0x429520: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x429524u;
        goto label_429524;
    }
    ctx->pc = 0x42951Cu;
    SET_GPR_U32(ctx, 31, 0x429524u);
    ctx->pc = 0x429520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42951Cu;
            // 0x429520: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429524u; }
        if (ctx->pc != 0x429524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429524u; }
        if (ctx->pc != 0x429524u) { return; }
    }
    ctx->pc = 0x429524u;
label_429524:
    // 0x429524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_429528:
    if (ctx->pc == 0x429528u) {
        ctx->pc = 0x42952Cu;
        goto label_42952c;
    }
    ctx->pc = 0x429524u;
    {
        const bool branch_taken_0x429524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x429524) {
            ctx->pc = 0x429538u;
            goto label_429538;
        }
    }
    ctx->pc = 0x42952Cu;
label_42952c:
    // 0x42952c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x42952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_429530:
    // 0x429530: 0xc072aaa  jal         func_1CAAA8
label_429534:
    if (ctx->pc == 0x429534u) {
        ctx->pc = 0x429534u;
            // 0x429534: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x429538u;
        goto label_429538;
    }
    ctx->pc = 0x429530u;
    SET_GPR_U32(ctx, 31, 0x429538u);
    ctx->pc = 0x429534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429530u;
            // 0x429534: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429538u; }
        if (ctx->pc != 0x429538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429538u; }
        if (ctx->pc != 0x429538u) { return; }
    }
    ctx->pc = 0x429538u;
label_429538:
    // 0x429538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x429538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42953c:
    // 0x42953c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429540:
    // 0x429540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429544:
    // 0x429544: 0x3e00008  jr          $ra
label_429548:
    if (ctx->pc == 0x429548u) {
        ctx->pc = 0x429548u;
            // 0x429548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42954Cu;
        goto label_42954c;
    }
    ctx->pc = 0x429544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429544u;
            // 0x429548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42954Cu;
label_42954c:
    // 0x42954c: 0x0  nop
    ctx->pc = 0x42954cu;
    // NOP
label_429550:
    // 0x429550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_429554:
    // 0x429554: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x429554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_429558:
    // 0x429558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x429558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42955c:
    // 0x42955c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_429560:
    // 0x429560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x429560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429564:
    // 0x429564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x429564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429568:
    // 0x429568: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x429568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_42956c:
    // 0x42956c: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x42956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_429570:
    // 0x429570: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x429570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_429574:
    // 0x429574: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x429574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_429578:
    // 0x429578: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x429578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_42957c:
    // 0x42957c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x42957cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_429580:
    // 0x429580: 0x54600057  bnel        $v1, $zero, . + 4 + (0x57 << 2)
label_429584:
    if (ctx->pc == 0x429584u) {
        ctx->pc = 0x429584u;
            // 0x429584: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x429588u;
        goto label_429588;
    }
    ctx->pc = 0x429580u;
    {
        const bool branch_taken_0x429580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429580) {
            ctx->pc = 0x429584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429580u;
            // 0x429584: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4296E0u;
            goto label_4296e0;
        }
    }
    ctx->pc = 0x429588u;
label_429588:
    // 0x429588: 0x8c830a6c  lw          $v1, 0xA6C($a0)
    ctx->pc = 0x429588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
label_42958c:
    // 0x42958c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_429590:
    if (ctx->pc == 0x429590u) {
        ctx->pc = 0x429590u;
            // 0x429590: 0x8c830e34  lw          $v1, 0xE34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
        ctx->pc = 0x429594u;
        goto label_429594;
    }
    ctx->pc = 0x42958Cu;
    {
        const bool branch_taken_0x42958c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42958c) {
            ctx->pc = 0x429590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42958Cu;
            // 0x429590: 0x8c830e34  lw          $v1, 0xE34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4295A0u;
            goto label_4295a0;
        }
    }
    ctx->pc = 0x429594u;
label_429594:
    // 0x429594: 0x10000051  b           . + 4 + (0x51 << 2)
label_429598:
    if (ctx->pc == 0x429598u) {
        ctx->pc = 0x42959Cu;
        goto label_42959c;
    }
    ctx->pc = 0x429594u;
    {
        const bool branch_taken_0x429594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429594) {
            ctx->pc = 0x4296DCu;
            goto label_4296dc;
        }
    }
    ctx->pc = 0x42959Cu;
label_42959c:
    // 0x42959c: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x42959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4295a0:
    // 0x4295a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4295a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4295a4:
    // 0x4295a4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4295a8:
    if (ctx->pc == 0x4295A8u) {
        ctx->pc = 0x4295A8u;
            // 0x4295a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4295ACu;
        goto label_4295ac;
    }
    ctx->pc = 0x4295A4u;
    {
        const bool branch_taken_0x4295a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4295A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4295A4u;
            // 0x4295a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4295a4) {
            ctx->pc = 0x4295BCu;
            goto label_4295bc;
        }
    }
    ctx->pc = 0x4295ACu;
label_4295ac:
    // 0x4295ac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4295acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4295b0:
    // 0x4295b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4295b4:
    if (ctx->pc == 0x4295B4u) {
        ctx->pc = 0x4295B8u;
        goto label_4295b8;
    }
    ctx->pc = 0x4295B0u;
    {
        const bool branch_taken_0x4295b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4295b0) {
            ctx->pc = 0x4295BCu;
            goto label_4295bc;
        }
    }
    ctx->pc = 0x4295B8u;
label_4295b8:
    // 0x4295b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4295b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4295bc:
    // 0x4295bc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4295c0:
    if (ctx->pc == 0x4295C0u) {
        ctx->pc = 0x4295C4u;
        goto label_4295c4;
    }
    ctx->pc = 0x4295BCu;
    {
        const bool branch_taken_0x4295bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4295bc) {
            ctx->pc = 0x4295D8u;
            goto label_4295d8;
        }
    }
    ctx->pc = 0x4295C4u;
label_4295c4:
    // 0x4295c4: 0xc075eb4  jal         func_1D7AD0
label_4295c8:
    if (ctx->pc == 0x4295C8u) {
        ctx->pc = 0x4295CCu;
        goto label_4295cc;
    }
    ctx->pc = 0x4295C4u;
    SET_GPR_U32(ctx, 31, 0x4295CCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4295CCu; }
        if (ctx->pc != 0x4295CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4295CCu; }
        if (ctx->pc != 0x4295CCu) { return; }
    }
    ctx->pc = 0x4295CCu;
label_4295cc:
    // 0x4295cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4295d0:
    if (ctx->pc == 0x4295D0u) {
        ctx->pc = 0x4295D4u;
        goto label_4295d4;
    }
    ctx->pc = 0x4295CCu;
    {
        const bool branch_taken_0x4295cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4295cc) {
            ctx->pc = 0x4295D8u;
            goto label_4295d8;
        }
    }
    ctx->pc = 0x4295D4u;
label_4295d4:
    // 0x4295d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4295d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4295d8:
    // 0x4295d8: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_4295dc:
    if (ctx->pc == 0x4295DCu) {
        ctx->pc = 0x4295DCu;
            // 0x4295dc: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x4295E0u;
        goto label_4295e0;
    }
    ctx->pc = 0x4295D8u;
    {
        const bool branch_taken_0x4295d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4295d8) {
            ctx->pc = 0x4295DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4295D8u;
            // 0x4295dc: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4295F8u;
            goto label_4295f8;
        }
    }
    ctx->pc = 0x4295E0u;
label_4295e0:
    // 0x4295e0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4295e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4295e4:
    // 0x4295e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4295e8:
    // 0x4295e8: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4295e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4295ec:
    // 0x4295ec: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
label_4295f0:
    if (ctx->pc == 0x4295F0u) {
        ctx->pc = 0x4295F4u;
        goto label_4295f4;
    }
    ctx->pc = 0x4295ECu;
    {
        const bool branch_taken_0x4295ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4295ec) {
            ctx->pc = 0x4296DCu;
            goto label_4296dc;
        }
    }
    ctx->pc = 0x4295F4u;
label_4295f4:
    // 0x4295f4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x4295f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4295f8:
    // 0x4295f8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4295f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4295fc:
    // 0x4295fc: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x4295fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_429600:
    // 0x429600: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x429600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_429604:
    // 0x429604: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x429604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_429608:
    // 0x429608: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x429608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42960c:
    // 0x42960c: 0xc4c30de4  lwc1        $f3, 0xDE4($a2)
    ctx->pc = 0x42960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_429610:
    // 0x429610: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x429610u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_429614:
    // 0x429614: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x429614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_429618:
    // 0x429618: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x429618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_42961c:
    // 0x42961c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x42961cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_429620:
    // 0x429620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x429620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_429624:
    // 0x429624: 0x0  nop
    ctx->pc = 0x429624u;
    // NOP
label_429628:
    // 0x429628: 0x0  nop
    ctx->pc = 0x429628u;
    // NOP
label_42962c:
    // 0x42962c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42962cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429630:
    // 0x429630: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
label_429634:
    if (ctx->pc == 0x429634u) {
        ctx->pc = 0x429634u;
            // 0x429634: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x429638u;
        goto label_429638;
    }
    ctx->pc = 0x429630u;
    {
        const bool branch_taken_0x429630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x429630) {
            ctx->pc = 0x429634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429630u;
            // 0x429634: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4296CCu;
            goto label_4296cc;
        }
    }
    ctx->pc = 0x429638u;
label_429638:
    // 0x429638: 0x3c0342a4  lui         $v1, 0x42A4
    ctx->pc = 0x429638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17060 << 16));
label_42963c:
    // 0x42963c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x42963cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_429640:
    // 0x429640: 0x0  nop
    ctx->pc = 0x429640u;
    // NOP
label_429644:
    // 0x429644: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x429644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429648:
    // 0x429648: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_42964c:
    if (ctx->pc == 0x42964Cu) {
        ctx->pc = 0x42964Cu;
            // 0x42964c: 0x64100004  daddiu      $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->pc = 0x429650u;
        goto label_429650;
    }
    ctx->pc = 0x429648u;
    {
        const bool branch_taken_0x429648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x429648) {
            ctx->pc = 0x42964Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429648u;
            // 0x42964c: 0x64100004  daddiu      $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x42965Cu;
            goto label_42965c;
        }
    }
    ctx->pc = 0x429650u;
label_429650:
    // 0x429650: 0x10000002  b           . + 4 + (0x2 << 2)
label_429654:
    if (ctx->pc == 0x429654u) {
        ctx->pc = 0x429654u;
            // 0x429654: 0x64100006  daddiu      $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
        ctx->pc = 0x429658u;
        goto label_429658;
    }
    ctx->pc = 0x429650u;
    {
        const bool branch_taken_0x429650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429650u;
            // 0x429654: 0x64100006  daddiu      $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x429650) {
            ctx->pc = 0x42965Cu;
            goto label_42965c;
        }
    }
    ctx->pc = 0x429658u;
label_429658:
    // 0x429658: 0x64100004  daddiu      $s0, $zero, 0x4
    ctx->pc = 0x429658u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_42965c:
    // 0x42965c: 0x90c40e3e  lbu         $a0, 0xE3E($a2)
    ctx->pc = 0x42965cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3646)));
label_429660:
    // 0x429660: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x429660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_429664:
    // 0x429664: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x429664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_429668:
    // 0x429668: 0xa0c40e3e  sb          $a0, 0xE3E($a2)
    ctx->pc = 0x429668u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3646), (uint8_t)GPR_U32(ctx, 4));
label_42966c:
    // 0x42966c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x42966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429670:
    // 0x429670: 0x90a40e3e  lbu         $a0, 0xE3E($a1)
    ctx->pc = 0x429670u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3646)));
label_429674:
    // 0x429674: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x429674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_429678:
    // 0x429678: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_42967c:
    if (ctx->pc == 0x42967Cu) {
        ctx->pc = 0x429680u;
        goto label_429680;
    }
    ctx->pc = 0x429678u;
    {
        const bool branch_taken_0x429678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429678) {
            ctx->pc = 0x4296C8u;
            goto label_4296c8;
        }
    }
    ctx->pc = 0x429680u;
label_429680:
    // 0x429680: 0x3c0242a4  lui         $v0, 0x42A4
    ctx->pc = 0x429680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17060 << 16));
label_429684:
    // 0x429684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x429684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_429688:
    // 0x429688: 0x0  nop
    ctx->pc = 0x429688u;
    // NOP
label_42968c:
    // 0x42968c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42968cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429690:
    // 0x429690: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_429694:
    if (ctx->pc == 0x429694u) {
        ctx->pc = 0x429694u;
            // 0x429694: 0xa0a00e3e  sb          $zero, 0xE3E($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x429698u;
        goto label_429698;
    }
    ctx->pc = 0x429690u;
    {
        const bool branch_taken_0x429690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x429694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429690u;
            // 0x429694: 0xa0a00e3e  sb          $zero, 0xE3E($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429690) {
            ctx->pc = 0x4296B4u;
            goto label_4296b4;
        }
    }
    ctx->pc = 0x429698u;
label_429698:
    // 0x429698: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x429698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_42969c:
    // 0x42969c: 0x904411aa  lbu         $a0, 0x11AA($v0)
    ctx->pc = 0x42969cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_4296a0:
    // 0x4296a0: 0x24450890  addiu       $a1, $v0, 0x890
    ctx->pc = 0x4296a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
label_4296a4:
    // 0x4296a4: 0xc0baf28  jal         func_2EBCA0
label_4296a8:
    if (ctx->pc == 0x4296A8u) {
        ctx->pc = 0x4296A8u;
            // 0x4296a8: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x4296ACu;
        goto label_4296ac;
    }
    ctx->pc = 0x4296A4u;
    SET_GPR_U32(ctx, 31, 0x4296ACu);
    ctx->pc = 0x4296A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4296A4u;
            // 0x4296a8: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBCA0u;
    if (runtime->hasFunction(0x2EBCA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4296ACu; }
        if (ctx->pc != 0x4296ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBCA0_0x2ebca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4296ACu; }
        if (ctx->pc != 0x4296ACu) { return; }
    }
    ctx->pc = 0x4296ACu;
label_4296ac:
    // 0x4296ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_4296b0:
    if (ctx->pc == 0x4296B0u) {
        ctx->pc = 0x4296B4u;
        goto label_4296b4;
    }
    ctx->pc = 0x4296ACu;
    {
        const bool branch_taken_0x4296ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4296ac) {
            ctx->pc = 0x4296C8u;
            goto label_4296c8;
        }
    }
    ctx->pc = 0x4296B4u;
label_4296b4:
    // 0x4296b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4296b8:
    // 0x4296b8: 0x904411aa  lbu         $a0, 0x11AA($v0)
    ctx->pc = 0x4296b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_4296bc:
    // 0x4296bc: 0x24450890  addiu       $a1, $v0, 0x890
    ctx->pc = 0x4296bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
label_4296c0:
    // 0x4296c0: 0xc0bae98  jal         func_2EBA60
label_4296c4:
    if (ctx->pc == 0x4296C4u) {
        ctx->pc = 0x4296C4u;
            // 0x4296c4: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x4296C8u;
        goto label_4296c8;
    }
    ctx->pc = 0x4296C0u;
    SET_GPR_U32(ctx, 31, 0x4296C8u);
    ctx->pc = 0x4296C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4296C0u;
            // 0x4296c4: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA60u;
    if (runtime->hasFunction(0x2EBA60u)) {
        auto targetFn = runtime->lookupFunction(0x2EBA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4296C8u; }
        if (ctx->pc != 0x4296C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBA60_0x2eba60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4296C8u; }
        if (ctx->pc != 0x4296C8u) { return; }
    }
    ctx->pc = 0x4296C8u;
label_4296c8:
    // 0x4296c8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4296c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4296cc:
    // 0x4296cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4296d0:
    if (ctx->pc == 0x4296D0u) {
        ctx->pc = 0x4296D4u;
        goto label_4296d4;
    }
    ctx->pc = 0x4296CCu;
    {
        const bool branch_taken_0x4296cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4296cc) {
            ctx->pc = 0x4296DCu;
            goto label_4296dc;
        }
    }
    ctx->pc = 0x4296D4u;
label_4296d4:
    // 0x4296d4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4296d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4296d8:
    // 0x4296d8: 0xa0600e3e  sb          $zero, 0xE3E($v1)
    ctx->pc = 0x4296d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3646), (uint8_t)GPR_U32(ctx, 0));
label_4296dc:
    // 0x4296dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4296dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4296e0:
    // 0x4296e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4296e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4296e4:
    // 0x4296e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4296e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4296e8:
    // 0x4296e8: 0x3e00008  jr          $ra
label_4296ec:
    if (ctx->pc == 0x4296ECu) {
        ctx->pc = 0x4296ECu;
            // 0x4296ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4296F0u;
        goto label_4296f0;
    }
    ctx->pc = 0x4296E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4296ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4296E8u;
            // 0x4296ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4296F0u;
label_4296f0:
    // 0x4296f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4296f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4296f4:
    // 0x4296f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4296f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4296f8:
    // 0x4296f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4296f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4296fc:
    // 0x4296fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4296fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429700:
    // 0x429700: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x429700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_429704:
    // 0x429704: 0x8cc30d70  lw          $v1, 0xD70($a2)
    ctx->pc = 0x429704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3440)));
label_429708:
    // 0x429708: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x429708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_42970c:
    // 0x42970c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x42970cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_429710:
    // 0x429710: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
label_429714:
    if (ctx->pc == 0x429714u) {
        ctx->pc = 0x429714u;
            // 0x429714: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429718u;
        goto label_429718;
    }
    ctx->pc = 0x429710u;
    {
        const bool branch_taken_0x429710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429710u;
            // 0x429714: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429710) {
            ctx->pc = 0x42993Cu;
            goto label_42993c;
        }
    }
    ctx->pc = 0x429718u;
label_429718:
    // 0x429718: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x429718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42971c:
    // 0x42971c: 0x8cc50da0  lw          $a1, 0xDA0($a2)
    ctx->pc = 0x42971cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3488)));
label_429720:
    // 0x429720: 0x8c64ffe8  lw          $a0, -0x18($v1)
    ctx->pc = 0x429720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
label_429724:
    // 0x429724: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x429724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_429728:
    // 0x429728: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x429728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_42972c:
    // 0x42972c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x42972cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_429730:
    // 0x429730: 0x54600083  bnel        $v1, $zero, . + 4 + (0x83 << 2)
label_429734:
    if (ctx->pc == 0x429734u) {
        ctx->pc = 0x429734u;
            // 0x429734: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x429738u;
        goto label_429738;
    }
    ctx->pc = 0x429730u;
    {
        const bool branch_taken_0x429730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429730) {
            ctx->pc = 0x429734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429730u;
            // 0x429734: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429940u;
            goto label_429940;
        }
    }
    ctx->pc = 0x429738u;
label_429738:
    // 0x429738: 0x8cc30a6c  lw          $v1, 0xA6C($a2)
    ctx->pc = 0x429738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2668)));
label_42973c:
    // 0x42973c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_429740:
    if (ctx->pc == 0x429740u) {
        ctx->pc = 0x429740u;
            // 0x429740: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->pc = 0x429744u;
        goto label_429744;
    }
    ctx->pc = 0x42973Cu;
    {
        const bool branch_taken_0x42973c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42973c) {
            ctx->pc = 0x429740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42973Cu;
            // 0x429740: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429750u;
            goto label_429750;
        }
    }
    ctx->pc = 0x429744u;
label_429744:
    // 0x429744: 0x1000007d  b           . + 4 + (0x7D << 2)
label_429748:
    if (ctx->pc == 0x429748u) {
        ctx->pc = 0x42974Cu;
        goto label_42974c;
    }
    ctx->pc = 0x429744u;
    {
        const bool branch_taken_0x429744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429744) {
            ctx->pc = 0x42993Cu;
            goto label_42993c;
        }
    }
    ctx->pc = 0x42974Cu;
label_42974c:
    // 0x42974c: 0x24c40440  addiu       $a0, $a2, 0x440
    ctx->pc = 0x42974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
label_429750:
    // 0x429750: 0xc0754b4  jal         func_1D52D0
label_429754:
    if (ctx->pc == 0x429754u) {
        ctx->pc = 0x429758u;
        goto label_429758;
    }
    ctx->pc = 0x429750u;
    SET_GPR_U32(ctx, 31, 0x429758u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429758u; }
        if (ctx->pc != 0x429758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429758u; }
        if (ctx->pc != 0x429758u) { return; }
    }
    ctx->pc = 0x429758u;
label_429758:
    // 0x429758: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x429758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_42975c:
    // 0x42975c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x42975cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_429760:
    // 0x429760: 0x54600038  bnel        $v1, $zero, . + 4 + (0x38 << 2)
label_429764:
    if (ctx->pc == 0x429764u) {
        ctx->pc = 0x429764u;
            // 0x429764: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x429768u;
        goto label_429768;
    }
    ctx->pc = 0x429760u;
    {
        const bool branch_taken_0x429760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429760) {
            ctx->pc = 0x429764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429760u;
            // 0x429764: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429844u;
            goto label_429844;
        }
    }
    ctx->pc = 0x429768u;
label_429768:
    // 0x429768: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x429768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_42976c:
    // 0x42976c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x42976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_429770:
    // 0x429770: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x429770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_429774:
    // 0x429774: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x429774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_429778:
    // 0x429778: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x429778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_42977c:
    // 0x42977c: 0x320f809  jalr        $t9
label_429780:
    if (ctx->pc == 0x429780u) {
        ctx->pc = 0x429780u;
            // 0x429780: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x429784u;
        goto label_429784;
    }
    ctx->pc = 0x42977Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429784u);
        ctx->pc = 0x429780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42977Cu;
            // 0x429780: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429784u; }
            if (ctx->pc != 0x429784u) { return; }
        }
        }
    }
    ctx->pc = 0x429784u;
label_429784:
    // 0x429784: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x429784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429788:
    // 0x429788: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x429788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42978c:
    // 0x42978c: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x42978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_429790:
    // 0x429790: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_429794:
    if (ctx->pc == 0x429794u) {
        ctx->pc = 0x429798u;
        goto label_429798;
    }
    ctx->pc = 0x429790u;
    {
        const bool branch_taken_0x429790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x429790) {
            ctx->pc = 0x429840u;
            goto label_429840;
        }
    }
    ctx->pc = 0x429798u;
label_429798:
    // 0x429798: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x429798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_42979c:
    // 0x42979c: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_4297a0:
    if (ctx->pc == 0x4297A0u) {
        ctx->pc = 0x4297A4u;
        goto label_4297a4;
    }
    ctx->pc = 0x42979Cu;
    {
        const bool branch_taken_0x42979c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x42979c) {
            ctx->pc = 0x429840u;
            goto label_429840;
        }
    }
    ctx->pc = 0x4297A4u;
label_4297a4:
    // 0x4297a4: 0x8cb00550  lw          $s0, 0x550($a1)
    ctx->pc = 0x4297a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_4297a8:
    // 0x4297a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4297a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4297ac:
    // 0x4297ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4297acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4297b0:
    // 0x4297b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4297b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4297b4:
    // 0x4297b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4297b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4297b8:
    // 0x4297b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4297b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4297bc:
    // 0x4297bc: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x4297bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_4297c0:
    // 0x4297c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4297c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4297c4:
    // 0x4297c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4297c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4297c8:
    // 0x4297c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4297c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4297cc:
    // 0x4297cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4297ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4297d0:
    // 0x4297d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4297d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4297d4:
    // 0x4297d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4297d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4297d8:
    // 0x4297d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4297d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4297dc:
    // 0x4297dc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4297dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4297e0:
    // 0x4297e0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4297e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4297e4:
    // 0x4297e4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x4297e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_4297e8:
    // 0x4297e8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4297e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4297ec:
    // 0x4297ec: 0x320f809  jalr        $t9
label_4297f0:
    if (ctx->pc == 0x4297F0u) {
        ctx->pc = 0x4297F0u;
            // 0x4297f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4297F4u;
        goto label_4297f4;
    }
    ctx->pc = 0x4297ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4297F4u);
        ctx->pc = 0x4297F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4297ECu;
            // 0x4297f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4297F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4297F4u; }
            if (ctx->pc != 0x4297F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4297F4u;
label_4297f4:
    // 0x4297f4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4297f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4297f8:
    // 0x4297f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4297f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4297fc:
    // 0x4297fc: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x4297fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_429800:
    // 0x429800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x429800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_429804:
    // 0x429804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x429804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_429808:
    // 0x429808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x429808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42980c:
    // 0x42980c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x42980cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_429810:
    // 0x429810: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x429810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_429814:
    // 0x429814: 0x320f809  jalr        $t9
label_429818:
    if (ctx->pc == 0x429818u) {
        ctx->pc = 0x429818u;
            // 0x429818: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x42981Cu;
        goto label_42981c;
    }
    ctx->pc = 0x429814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42981Cu);
        ctx->pc = 0x429818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429814u;
            // 0x429818: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42981Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42981Cu; }
            if (ctx->pc != 0x42981Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42981Cu;
label_42981c:
    // 0x42981c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x42981cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_429820:
    // 0x429820: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x429820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_429824:
    // 0x429824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x429824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_429828:
    // 0x429828: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x429828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_42982c:
    // 0x42982c: 0x320f809  jalr        $t9
label_429830:
    if (ctx->pc == 0x429830u) {
        ctx->pc = 0x429830u;
            // 0x429830: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429834u;
        goto label_429834;
    }
    ctx->pc = 0x42982Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429834u);
        ctx->pc = 0x429830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42982Cu;
            // 0x429830: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429834u; }
            if (ctx->pc != 0x429834u) { return; }
        }
        }
    }
    ctx->pc = 0x429834u;
label_429834:
    // 0x429834: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x429834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429838:
    // 0x429838: 0xc07649c  jal         func_1D9270
label_42983c:
    if (ctx->pc == 0x42983Cu) {
        ctx->pc = 0x42983Cu;
            // 0x42983c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x429840u;
        goto label_429840;
    }
    ctx->pc = 0x429838u;
    SET_GPR_U32(ctx, 31, 0x429840u);
    ctx->pc = 0x42983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429838u;
            // 0x42983c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429840u; }
        if (ctx->pc != 0x429840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429840u; }
        if (ctx->pc != 0x429840u) { return; }
    }
    ctx->pc = 0x429840u;
label_429840:
    // 0x429840: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x429840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429844:
    // 0x429844: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x429844u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_429848:
    // 0x429848: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x429848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_42984c:
    // 0x42984c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_429850:
    if (ctx->pc == 0x429850u) {
        ctx->pc = 0x429850u;
            // 0x429850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429854u;
        goto label_429854;
    }
    ctx->pc = 0x42984Cu;
    {
        const bool branch_taken_0x42984c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x429850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42984Cu;
            // 0x429850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42984c) {
            ctx->pc = 0x429864u;
            goto label_429864;
        }
    }
    ctx->pc = 0x429854u;
label_429854:
    // 0x429854: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x429854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_429858:
    // 0x429858: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_42985c:
    if (ctx->pc == 0x42985Cu) {
        ctx->pc = 0x429860u;
        goto label_429860;
    }
    ctx->pc = 0x429858u;
    {
        const bool branch_taken_0x429858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429858) {
            ctx->pc = 0x429864u;
            goto label_429864;
        }
    }
    ctx->pc = 0x429860u;
label_429860:
    // 0x429860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x429860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_429864:
    // 0x429864: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_429868:
    if (ctx->pc == 0x429868u) {
        ctx->pc = 0x42986Cu;
        goto label_42986c;
    }
    ctx->pc = 0x429864u;
    {
        const bool branch_taken_0x429864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x429864) {
            ctx->pc = 0x429880u;
            goto label_429880;
        }
    }
    ctx->pc = 0x42986Cu;
label_42986c:
    // 0x42986c: 0xc075eb4  jal         func_1D7AD0
label_429870:
    if (ctx->pc == 0x429870u) {
        ctx->pc = 0x429874u;
        goto label_429874;
    }
    ctx->pc = 0x42986Cu;
    SET_GPR_U32(ctx, 31, 0x429874u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429874u; }
        if (ctx->pc != 0x429874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429874u; }
        if (ctx->pc != 0x429874u) { return; }
    }
    ctx->pc = 0x429874u;
label_429874:
    // 0x429874: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_429878:
    if (ctx->pc == 0x429878u) {
        ctx->pc = 0x42987Cu;
        goto label_42987c;
    }
    ctx->pc = 0x429874u;
    {
        const bool branch_taken_0x429874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x429874) {
            ctx->pc = 0x429880u;
            goto label_429880;
        }
    }
    ctx->pc = 0x42987Cu;
label_42987c:
    // 0x42987c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42987cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429880:
    // 0x429880: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_429884:
    if (ctx->pc == 0x429884u) {
        ctx->pc = 0x429888u;
        goto label_429888;
    }
    ctx->pc = 0x429880u;
    {
        const bool branch_taken_0x429880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x429880) {
            ctx->pc = 0x42989Cu;
            goto label_42989c;
        }
    }
    ctx->pc = 0x429888u;
label_429888:
    // 0x429888: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x429888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_42988c:
    // 0x42988c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x42988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_429890:
    // 0x429890: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x429890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_429894:
    // 0x429894: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_429898:
    if (ctx->pc == 0x429898u) {
        ctx->pc = 0x42989Cu;
        goto label_42989c;
    }
    ctx->pc = 0x429894u;
    {
        const bool branch_taken_0x429894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x429894) {
            ctx->pc = 0x42993Cu;
            goto label_42993c;
        }
    }
    ctx->pc = 0x42989Cu;
label_42989c:
    // 0x42989c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4298a0:
    // 0x4298a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4298a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4298a4:
    // 0x4298a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4298a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4298a8:
    // 0x4298a8: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x4298a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4298ac:
    // 0x4298ac: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
label_4298b0:
    if (ctx->pc == 0x4298B0u) {
        ctx->pc = 0x4298B0u;
            // 0x4298b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x4298B4u;
        goto label_4298b4;
    }
    ctx->pc = 0x4298ACu;
    {
        const bool branch_taken_0x4298ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4298ac) {
            ctx->pc = 0x4298B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4298ACu;
            // 0x4298b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429934u;
            goto label_429934;
        }
    }
    ctx->pc = 0x4298B4u;
label_4298b4:
    // 0x4298b4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x4298b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4298b8:
    // 0x4298b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4298b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4298bc:
    // 0x4298bc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4298bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4298c0:
    // 0x4298c0: 0x8ca30d98  lw          $v1, 0xD98($a1)
    ctx->pc = 0x4298c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_4298c4:
    // 0x4298c4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x4298c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_4298c8:
    // 0x4298c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4298c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4298cc:
    // 0x4298cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4298ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4298d0:
    // 0x4298d0: 0x90630461  lbu         $v1, 0x461($v1)
    ctx->pc = 0x4298d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1121)));
label_4298d4:
    // 0x4298d4: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_4298d8:
    if (ctx->pc == 0x4298D8u) {
        ctx->pc = 0x4298D8u;
            // 0x4298d8: 0x90a40074  lbu         $a0, 0x74($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->pc = 0x4298DCu;
        goto label_4298dc;
    }
    ctx->pc = 0x4298D4u;
    {
        const bool branch_taken_0x4298d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4298d4) {
            ctx->pc = 0x4298D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4298D4u;
            // 0x4298d8: 0x90a40074  lbu         $a0, 0x74($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42990Cu;
            goto label_42990c;
        }
    }
    ctx->pc = 0x4298DCu;
label_4298dc:
    // 0x4298dc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x4298dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_4298e0:
    // 0x4298e0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4298e4:
    if (ctx->pc == 0x4298E4u) {
        ctx->pc = 0x4298E8u;
        goto label_4298e8;
    }
    ctx->pc = 0x4298E0u;
    {
        const bool branch_taken_0x4298e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4298e0) {
            ctx->pc = 0x429908u;
            goto label_429908;
        }
    }
    ctx->pc = 0x4298E8u;
label_4298e8:
    // 0x4298e8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x4298e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_4298ec:
    // 0x4298ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4298f0:
    if (ctx->pc == 0x4298F0u) {
        ctx->pc = 0x4298F4u;
        goto label_4298f4;
    }
    ctx->pc = 0x4298ECu;
    {
        const bool branch_taken_0x4298ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4298ec) {
            ctx->pc = 0x429908u;
            goto label_429908;
        }
    }
    ctx->pc = 0x4298F4u;
label_4298f4:
    // 0x4298f4: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x4298f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_4298f8:
    // 0x4298f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4298fc:
    if (ctx->pc == 0x4298FCu) {
        ctx->pc = 0x429900u;
        goto label_429900;
    }
    ctx->pc = 0x4298F8u;
    {
        const bool branch_taken_0x4298f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4298f8) {
            ctx->pc = 0x429908u;
            goto label_429908;
        }
    }
    ctx->pc = 0x429900u;
label_429900:
    // 0x429900: 0x10000007  b           . + 4 + (0x7 << 2)
label_429904:
    if (ctx->pc == 0x429904u) {
        ctx->pc = 0x429904u;
            // 0x429904: 0x90a40070  lbu         $a0, 0x70($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->pc = 0x429908u;
        goto label_429908;
    }
    ctx->pc = 0x429900u;
    {
        const bool branch_taken_0x429900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429900u;
            // 0x429904: 0x90a40070  lbu         $a0, 0x70($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429900) {
            ctx->pc = 0x429920u;
            goto label_429920;
        }
    }
    ctx->pc = 0x429908u;
label_429908:
    // 0x429908: 0x90a40074  lbu         $a0, 0x74($a1)
    ctx->pc = 0x429908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
label_42990c:
    // 0x42990c: 0xc072a56  jal         func_1CA958
label_429910:
    if (ctx->pc == 0x429910u) {
        ctx->pc = 0x429914u;
        goto label_429914;
    }
    ctx->pc = 0x42990Cu;
    SET_GPR_U32(ctx, 31, 0x429914u);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429914u; }
        if (ctx->pc != 0x429914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429914u; }
        if (ctx->pc != 0x429914u) { return; }
    }
    ctx->pc = 0x429914u;
label_429914:
    // 0x429914: 0x10000009  b           . + 4 + (0x9 << 2)
label_429918:
    if (ctx->pc == 0x429918u) {
        ctx->pc = 0x42991Cu;
        goto label_42991c;
    }
    ctx->pc = 0x429914u;
    {
        const bool branch_taken_0x429914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429914) {
            ctx->pc = 0x42993Cu;
            goto label_42993c;
        }
    }
    ctx->pc = 0x42991Cu;
label_42991c:
    // 0x42991c: 0x90a40070  lbu         $a0, 0x70($a1)
    ctx->pc = 0x42991cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_429920:
    // 0x429920: 0xc072a56  jal         func_1CA958
label_429924:
    if (ctx->pc == 0x429924u) {
        ctx->pc = 0x429928u;
        goto label_429928;
    }
    ctx->pc = 0x429920u;
    SET_GPR_U32(ctx, 31, 0x429928u);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429928u; }
        if (ctx->pc != 0x429928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429928u; }
        if (ctx->pc != 0x429928u) { return; }
    }
    ctx->pc = 0x429928u;
label_429928:
    // 0x429928: 0x10000004  b           . + 4 + (0x4 << 2)
label_42992c:
    if (ctx->pc == 0x42992Cu) {
        ctx->pc = 0x429930u;
        goto label_429930;
    }
    ctx->pc = 0x429928u;
    {
        const bool branch_taken_0x429928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429928) {
            ctx->pc = 0x42993Cu;
            goto label_42993c;
        }
    }
    ctx->pc = 0x429930u;
label_429930:
    // 0x429930: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x429930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_429934:
    // 0x429934: 0xc072a56  jal         func_1CA958
label_429938:
    if (ctx->pc == 0x429938u) {
        ctx->pc = 0x429938u;
            // 0x429938: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x42993Cu;
        goto label_42993c;
    }
    ctx->pc = 0x429934u;
    SET_GPR_U32(ctx, 31, 0x42993Cu);
    ctx->pc = 0x429938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429934u;
            // 0x429938: 0x90440070  lbu         $a0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42993Cu; }
        if (ctx->pc != 0x42993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42993Cu; }
        if (ctx->pc != 0x42993Cu) { return; }
    }
    ctx->pc = 0x42993Cu;
label_42993c:
    // 0x42993c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_429940:
    // 0x429940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429944:
    // 0x429944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429948:
    // 0x429948: 0x3e00008  jr          $ra
label_42994c:
    if (ctx->pc == 0x42994Cu) {
        ctx->pc = 0x42994Cu;
            // 0x42994c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x429950u;
        goto label_429950;
    }
    ctx->pc = 0x429948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429948u;
            // 0x42994c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429950u;
label_429950:
    // 0x429950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_429954:
    // 0x429954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x429954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_429958:
    // 0x429958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42995c:
    // 0x42995c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429960:
    // 0x429960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x429960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429964:
    // 0x429964: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_429968:
    if (ctx->pc == 0x429968u) {
        ctx->pc = 0x429968u;
            // 0x429968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42996Cu;
        goto label_42996c;
    }
    ctx->pc = 0x429964u;
    {
        const bool branch_taken_0x429964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x429968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429964u;
            // 0x429968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429964) {
            ctx->pc = 0x429998u;
            goto label_429998;
        }
    }
    ctx->pc = 0x42996Cu;
label_42996c:
    // 0x42996c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_429970:
    // 0x429970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429974:
    // 0x429974: 0x2442c0d0  addiu       $v0, $v0, -0x3F30
    ctx->pc = 0x429974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951120));
label_429978:
    // 0x429978: 0xc0ccf5c  jal         func_333D70
label_42997c:
    if (ctx->pc == 0x42997Cu) {
        ctx->pc = 0x42997Cu;
            // 0x42997c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x429980u;
        goto label_429980;
    }
    ctx->pc = 0x429978u;
    SET_GPR_U32(ctx, 31, 0x429980u);
    ctx->pc = 0x42997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429978u;
            // 0x42997c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429980u; }
        if (ctx->pc != 0x429980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429980u; }
        if (ctx->pc != 0x429980u) { return; }
    }
    ctx->pc = 0x429980u;
label_429980:
    // 0x429980: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x429980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_429984:
    // 0x429984: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x429984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_429988:
    // 0x429988: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42998c:
    if (ctx->pc == 0x42998Cu) {
        ctx->pc = 0x42998Cu;
            // 0x42998c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429990u;
        goto label_429990;
    }
    ctx->pc = 0x429988u;
    {
        const bool branch_taken_0x429988 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x429988) {
            ctx->pc = 0x42998Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429988u;
            // 0x42998c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42999Cu;
            goto label_42999c;
        }
    }
    ctx->pc = 0x429990u;
label_429990:
    // 0x429990: 0xc0400a8  jal         func_1002A0
label_429994:
    if (ctx->pc == 0x429994u) {
        ctx->pc = 0x429994u;
            // 0x429994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429998u;
        goto label_429998;
    }
    ctx->pc = 0x429990u;
    SET_GPR_U32(ctx, 31, 0x429998u);
    ctx->pc = 0x429994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429990u;
            // 0x429994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429998u; }
        if (ctx->pc != 0x429998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429998u; }
        if (ctx->pc != 0x429998u) { return; }
    }
    ctx->pc = 0x429998u;
label_429998:
    // 0x429998: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x429998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42999c:
    // 0x42999c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42999cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4299a0:
    // 0x4299a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4299a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4299a4:
    // 0x4299a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4299a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4299a8:
    // 0x4299a8: 0x3e00008  jr          $ra
label_4299ac:
    if (ctx->pc == 0x4299ACu) {
        ctx->pc = 0x4299ACu;
            // 0x4299ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4299B0u;
        goto label_4299b0;
    }
    ctx->pc = 0x4299A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4299ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4299A8u;
            // 0x4299ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4299B0u;
label_4299b0:
    // 0x4299b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4299b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4299b4:
    // 0x4299b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4299b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4299b8:
    // 0x4299b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4299b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4299bc:
    // 0x4299bc: 0x2442d530  addiu       $v0, $v0, -0x2AD0
    ctx->pc = 0x4299bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956336));
label_4299c0:
    // 0x4299c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4299c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4299c4:
    // 0x4299c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4299c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4299c8:
    // 0x4299c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4299c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4299cc:
    // 0x4299cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4299ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4299d0:
    // 0x4299d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4299d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4299d4:
    // 0x4299d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4299d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4299d8:
    // 0x4299d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4299d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4299dc:
    // 0x4299dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4299dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4299e0:
    // 0x4299e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4299e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4299e4:
    // 0x4299e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4299e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4299e8:
    // 0x4299e8: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x4299e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_4299ec:
    // 0x4299ec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4299ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_4299f0:
    // 0x4299f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4299f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4299f4:
    // 0x4299f4: 0xc04a508  jal         func_129420
label_4299f8:
    if (ctx->pc == 0x4299F8u) {
        ctx->pc = 0x4299F8u;
            // 0x4299f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4299FCu;
        goto label_4299fc;
    }
    ctx->pc = 0x4299F4u;
    SET_GPR_U32(ctx, 31, 0x4299FCu);
    ctx->pc = 0x4299F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4299F4u;
            // 0x4299f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4299FCu; }
        if (ctx->pc != 0x4299FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4299FCu; }
        if (ctx->pc != 0x4299FCu) { return; }
    }
    ctx->pc = 0x4299FCu;
label_4299fc:
    // 0x4299fc: 0xaea00cd0  sw          $zero, 0xCD0($s5)
    ctx->pc = 0x4299fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3280), GPR_U32(ctx, 0));
label_429a00:
    // 0x429a00: 0x8ea40d00  lw          $a0, 0xD00($s5)
    ctx->pc = 0x429a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3328)));
label_429a04:
    // 0x429a04: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_429a08:
    if (ctx->pc == 0x429A08u) {
        ctx->pc = 0x429A08u;
            // 0x429a08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429A0Cu;
        goto label_429a0c;
    }
    ctx->pc = 0x429A04u;
    {
        const bool branch_taken_0x429a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x429a04) {
            ctx->pc = 0x429A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429A04u;
            // 0x429a08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429A24u;
            goto label_429a24;
        }
    }
    ctx->pc = 0x429A0Cu;
label_429a0c:
    // 0x429a0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x429a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_429a10:
    // 0x429a10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x429a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_429a14:
    // 0x429a14: 0x320f809  jalr        $t9
label_429a18:
    if (ctx->pc == 0x429A18u) {
        ctx->pc = 0x429A18u;
            // 0x429a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429A1Cu;
        goto label_429a1c;
    }
    ctx->pc = 0x429A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429A1Cu);
        ctx->pc = 0x429A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429A14u;
            // 0x429a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429A1Cu; }
            if (ctx->pc != 0x429A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x429A1Cu;
label_429a1c:
    // 0x429a1c: 0xaea00d00  sw          $zero, 0xD00($s5)
    ctx->pc = 0x429a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3328), GPR_U32(ctx, 0));
label_429a20:
    // 0x429a20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x429a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_429a24:
    // 0x429a24: 0xc0cc888  jal         func_332220
label_429a28:
    if (ctx->pc == 0x429A28u) {
        ctx->pc = 0x429A2Cu;
        goto label_429a2c;
    }
    ctx->pc = 0x429A24u;
    SET_GPR_U32(ctx, 31, 0x429A2Cu);
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A2Cu; }
        if (ctx->pc != 0x429A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A2Cu; }
        if (ctx->pc != 0x429A2Cu) { return; }
    }
    ctx->pc = 0x429A2Cu;
label_429a2c:
    // 0x429a2c: 0x8ea60cbc  lw          $a2, 0xCBC($s5)
    ctx->pc = 0x429a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_429a30:
    // 0x429a30: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x429a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_429a34:
    // 0x429a34: 0x8ea70cc0  lw          $a3, 0xCC0($s5)
    ctx->pc = 0x429a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3264)));
label_429a38:
    // 0x429a38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x429a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_429a3c:
    // 0x429a3c: 0x8ea80cc4  lw          $t0, 0xCC4($s5)
    ctx->pc = 0x429a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3268)));
label_429a40:
    // 0x429a40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x429a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_429a44:
    // 0x429a44: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x429a44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_429a48:
    // 0x429a48: 0xc0cc878  jal         func_3321E0
label_429a4c:
    if (ctx->pc == 0x429A4Cu) {
        ctx->pc = 0x429A4Cu;
            // 0x429a4c: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x429A50u;
        goto label_429a50;
    }
    ctx->pc = 0x429A48u;
    SET_GPR_U32(ctx, 31, 0x429A50u);
    ctx->pc = 0x429A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429A48u;
            // 0x429a4c: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A50u; }
        if (ctx->pc != 0x429A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A50u; }
        if (ctx->pc != 0x429A50u) { return; }
    }
    ctx->pc = 0x429A50u;
label_429a50:
    // 0x429a50: 0x26a40cd4  addiu       $a0, $s5, 0xCD4
    ctx->pc = 0x429a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3284));
label_429a54:
    // 0x429a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429a58:
    // 0x429a58: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x429a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_429a5c:
    // 0x429a5c: 0xc04a576  jal         func_1295D8
label_429a60:
    if (ctx->pc == 0x429A60u) {
        ctx->pc = 0x429A60u;
            // 0x429a60: 0xaea00ce4  sw          $zero, 0xCE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3300), GPR_U32(ctx, 0));
        ctx->pc = 0x429A64u;
        goto label_429a64;
    }
    ctx->pc = 0x429A5Cu;
    SET_GPR_U32(ctx, 31, 0x429A64u);
    ctx->pc = 0x429A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429A5Cu;
            // 0x429a60: 0xaea00ce4  sw          $zero, 0xCE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A64u; }
        if (ctx->pc != 0x429A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A64u; }
        if (ctx->pc != 0x429A64u) { return; }
    }
    ctx->pc = 0x429A64u;
label_429a64:
    // 0x429a64: 0x26a40ce8  addiu       $a0, $s5, 0xCE8
    ctx->pc = 0x429a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3304));
label_429a68:
    // 0x429a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429a6c:
    // 0x429a6c: 0xc04a576  jal         func_1295D8
label_429a70:
    if (ctx->pc == 0x429A70u) {
        ctx->pc = 0x429A70u;
            // 0x429a70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x429A74u;
        goto label_429a74;
    }
    ctx->pc = 0x429A6Cu;
    SET_GPR_U32(ctx, 31, 0x429A74u);
    ctx->pc = 0x429A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429A6Cu;
            // 0x429a70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A74u; }
        if (ctx->pc != 0x429A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429A74u; }
        if (ctx->pc != 0x429A74u) { return; }
    }
    ctx->pc = 0x429A74u;
label_429a74:
    // 0x429a74: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x429a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_429a78:
    // 0x429a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x429a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_429a7c:
    // 0x429a7c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x429a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_429a80:
    // 0x429a80: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x429a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_429a84:
    // 0x429a84: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x429a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_429a88:
    // 0x429a88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x429a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_429a8c:
    // 0x429a8c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x429a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429a90:
    // 0x429a90: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x429a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_429a94:
    // 0x429a94: 0xe4426528  swc1        $f2, 0x6528($v0)
    ctx->pc = 0x429a94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 25896), bits); }
label_429a98:
    // 0x429a98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x429a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_429a9c:
    // 0x429a9c: 0xe4816510  swc1        $f1, 0x6510($a0)
    ctx->pc = 0x429a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 25872), bits); }
label_429aa0:
    // 0x429aa0: 0xac406598  sw          $zero, 0x6598($v0)
    ctx->pc = 0x429aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26008), GPR_U32(ctx, 0));
label_429aa4:
    // 0x429aa4: 0xe4606514  swc1        $f0, 0x6514($v1)
    ctx->pc = 0x429aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25876), bits); }
label_429aa8:
    // 0x429aa8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x429aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_429aac:
    // 0x429aac: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x429aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429ab0:
    // 0x429ab0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x429ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_429ab4:
    // 0x429ab4: 0x8e130a5c  lw          $s3, 0xA5C($s0)
    ctx->pc = 0x429ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2652)));
label_429ab8:
    // 0x429ab8: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x429ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_429abc:
    // 0x429abc: 0x8e120a60  lw          $s2, 0xA60($s0)
    ctx->pc = 0x429abcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
label_429ac0:
    // 0x429ac0: 0x26160440  addiu       $s6, $s0, 0x440
    ctx->pc = 0x429ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_429ac4:
    // 0x429ac4: 0xe6000a98  swc1        $f0, 0xA98($s0)
    ctx->pc = 0x429ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2712), bits); }
label_429ac8:
    // 0x429ac8: 0xe6000a9c  swc1        $f0, 0xA9C($s0)
    ctx->pc = 0x429ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2716), bits); }
label_429acc:
    // 0x429acc: 0xc0eea24  jal         func_3BA890
label_429ad0:
    if (ctx->pc == 0x429AD0u) {
        ctx->pc = 0x429AD0u;
            // 0x429ad0: 0xae020a7c  sw          $v0, 0xA7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2684), GPR_U32(ctx, 2));
        ctx->pc = 0x429AD4u;
        goto label_429ad4;
    }
    ctx->pc = 0x429ACCu;
    SET_GPR_U32(ctx, 31, 0x429AD4u);
    ctx->pc = 0x429AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429ACCu;
            // 0x429ad0: 0xae020a7c  sw          $v0, 0xA7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429AD4u; }
        if (ctx->pc != 0x429AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429AD4u; }
        if (ctx->pc != 0x429AD4u) { return; }
    }
    ctx->pc = 0x429AD4u;
label_429ad4:
    // 0x429ad4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x429ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429ad8:
    // 0x429ad8: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x429ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_429adc:
    // 0x429adc: 0x8e790014  lw          $t9, 0x14($s3)
    ctx->pc = 0x429adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_429ae0:
    // 0x429ae0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x429ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_429ae4:
    // 0x429ae4: 0x320f809  jalr        $t9
label_429ae8:
    if (ctx->pc == 0x429AE8u) {
        ctx->pc = 0x429AE8u;
            // 0x429ae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429AECu;
        goto label_429aec;
    }
    ctx->pc = 0x429AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429AECu);
        ctx->pc = 0x429AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429AE4u;
            // 0x429ae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429AECu; }
            if (ctx->pc != 0x429AECu) { return; }
        }
        }
    }
    ctx->pc = 0x429AECu;
label_429aec:
    // 0x429aec: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x429aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_429af0:
    // 0x429af0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x429af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_429af4:
    // 0x429af4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x429af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_429af8:
    // 0x429af8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x429af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429afc:
    // 0x429afc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x429afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_429b00:
    // 0x429b00: 0x8e590014  lw          $t9, 0x14($s2)
    ctx->pc = 0x429b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_429b04:
    // 0x429b04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x429b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_429b08:
    // 0x429b08: 0x320f809  jalr        $t9
label_429b0c:
    if (ctx->pc == 0x429B0Cu) {
        ctx->pc = 0x429B0Cu;
            // 0x429b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429B10u;
        goto label_429b10;
    }
    ctx->pc = 0x429B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429B10u);
        ctx->pc = 0x429B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429B08u;
            // 0x429b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429B10u; }
            if (ctx->pc != 0x429B10u) { return; }
        }
        }
    }
    ctx->pc = 0x429B10u;
label_429b10:
    // 0x429b10: 0x8e020d6c  lw          $v0, 0xD6C($s0)
    ctx->pc = 0x429b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_429b14:
    // 0x429b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x429b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_429b18:
    // 0x429b18: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x429b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_429b1c:
    // 0x429b1c: 0x8e050d6c  lw          $a1, 0xD6C($s0)
    ctx->pc = 0x429b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_429b20:
    // 0x429b20: 0x8e060d70  lw          $a2, 0xD70($s0)
    ctx->pc = 0x429b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_429b24:
    // 0x429b24: 0xc0753f0  jal         func_1D4FC0
label_429b28:
    if (ctx->pc == 0x429B28u) {
        ctx->pc = 0x429B28u;
            // 0x429b28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429B2Cu;
        goto label_429b2c;
    }
    ctx->pc = 0x429B24u;
    SET_GPR_U32(ctx, 31, 0x429B2Cu);
    ctx->pc = 0x429B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429B24u;
            // 0x429b28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FC0u;
    if (runtime->hasFunction(0x1D4FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B2Cu; }
        if (ctx->pc != 0x429B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FC0_0x1d4fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B2Cu; }
        if (ctx->pc != 0x429B2Cu) { return; }
    }
    ctx->pc = 0x429B2Cu;
label_429b2c:
    // 0x429b2c: 0xc0754e0  jal         func_1D5380
label_429b30:
    if (ctx->pc == 0x429B30u) {
        ctx->pc = 0x429B30u;
            // 0x429b30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429B34u;
        goto label_429b34;
    }
    ctx->pc = 0x429B2Cu;
    SET_GPR_U32(ctx, 31, 0x429B34u);
    ctx->pc = 0x429B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429B2Cu;
            // 0x429b30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B34u; }
        if (ctx->pc != 0x429B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B34u; }
        if (ctx->pc != 0x429B34u) { return; }
    }
    ctx->pc = 0x429B34u;
label_429b34:
    // 0x429b34: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x429b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_429b38:
    // 0x429b38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x429b38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_429b3c:
    // 0x429b3c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x429b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_429b40:
    // 0x429b40: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_429b44:
    if (ctx->pc == 0x429B44u) {
        ctx->pc = 0x429B44u;
            // 0x429b44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x429B48u;
        goto label_429b48;
    }
    ctx->pc = 0x429B40u;
    {
        const bool branch_taken_0x429b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429B40u;
            // 0x429b44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429b40) {
            ctx->pc = 0x429AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429aa8;
        }
    }
    ctx->pc = 0x429B48u;
label_429b48:
    // 0x429b48: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x429b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_429b4c:
    // 0x429b4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x429b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_429b50:
    // 0x429b50: 0x2442d530  addiu       $v0, $v0, -0x2AD0
    ctx->pc = 0x429b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956336));
label_429b54:
    // 0x429b54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x429b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_429b58:
    // 0x429b58: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x429b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_429b5c:
    // 0x429b5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x429b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429b60:
    // 0x429b60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x429b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_429b64:
    // 0x429b64: 0xc04a508  jal         func_129420
label_429b68:
    if (ctx->pc == 0x429B68u) {
        ctx->pc = 0x429B68u;
            // 0x429b68: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x429B6Cu;
        goto label_429b6c;
    }
    ctx->pc = 0x429B64u;
    SET_GPR_U32(ctx, 31, 0x429B6Cu);
    ctx->pc = 0x429B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429B64u;
            // 0x429b68: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B6Cu; }
        if (ctx->pc != 0x429B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B6Cu; }
        if (ctx->pc != 0x429B6Cu) { return; }
    }
    ctx->pc = 0x429B6Cu;
label_429b6c:
    // 0x429b6c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x429b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_429b70:
    // 0x429b70: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x429b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_429b74:
    // 0x429b74: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x429b74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_429b78:
    // 0x429b78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x429b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_429b7c:
    // 0x429b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429b80:
    // 0x429b80: 0xc04a576  jal         func_1295D8
label_429b84:
    if (ctx->pc == 0x429B84u) {
        ctx->pc = 0x429B84u;
            // 0x429b84: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x429B88u;
        goto label_429b88;
    }
    ctx->pc = 0x429B80u;
    SET_GPR_U32(ctx, 31, 0x429B88u);
    ctx->pc = 0x429B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429B80u;
            // 0x429b84: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B88u; }
        if (ctx->pc != 0x429B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429B88u; }
        if (ctx->pc != 0x429B88u) { return; }
    }
    ctx->pc = 0x429B88u;
label_429b88:
    // 0x429b88: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x429b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_429b8c:
    // 0x429b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x429b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_429b90:
    // 0x429b90: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x429b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429b94:
    // 0x429b94: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x429b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_429b98:
    // 0x429b98: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x429b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_429b9c:
    // 0x429b9c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x429b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_429ba0:
    // 0x429ba0: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x429ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_429ba4:
    // 0x429ba4: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x429ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_429ba8:
    // 0x429ba8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x429ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_429bac:
    // 0x429bac: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_429bb0:
    if (ctx->pc == 0x429BB0u) {
        ctx->pc = 0x429BB0u;
            // 0x429bb0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x429BB4u;
        goto label_429bb4;
    }
    ctx->pc = 0x429BACu;
    {
        const bool branch_taken_0x429bac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x429bac) {
            ctx->pc = 0x429BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429BACu;
            // 0x429bb0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429BBCu;
            goto label_429bbc;
        }
    }
    ctx->pc = 0x429BB4u;
label_429bb4:
    // 0x429bb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_429bb8:
    if (ctx->pc == 0x429BB8u) {
        ctx->pc = 0x429BB8u;
            // 0x429bb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429BBCu;
        goto label_429bbc;
    }
    ctx->pc = 0x429BB4u;
    {
        const bool branch_taken_0x429bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429BB4u;
            // 0x429bb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429bb4) {
            ctx->pc = 0x429BC8u;
            goto label_429bc8;
        }
    }
    ctx->pc = 0x429BBCu;
label_429bbc:
    // 0x429bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x429bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_429bc0:
    // 0x429bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x429bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_429bc4:
    // 0x429bc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x429bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_429bc8:
    // 0x429bc8: 0xc0b771c  jal         func_2DDC70
label_429bcc:
    if (ctx->pc == 0x429BCCu) {
        ctx->pc = 0x429BCCu;
            // 0x429bcc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x429BD0u;
        goto label_429bd0;
    }
    ctx->pc = 0x429BC8u;
    SET_GPR_U32(ctx, 31, 0x429BD0u);
    ctx->pc = 0x429BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429BC8u;
            // 0x429bcc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (runtime->hasFunction(0x2DDC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429BD0u; }
        if (ctx->pc != 0x429BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDC70_0x2ddc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429BD0u; }
        if (ctx->pc != 0x429BD0u) { return; }
    }
    ctx->pc = 0x429BD0u;
label_429bd0:
    // 0x429bd0: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x429bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_429bd4:
    // 0x429bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x429bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_429bd8:
    // 0x429bd8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x429bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_429bdc:
    // 0x429bdc: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_429be0:
    if (ctx->pc == 0x429BE0u) {
        ctx->pc = 0x429BE0u;
            // 0x429be0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x429BE4u;
        goto label_429be4;
    }
    ctx->pc = 0x429BDCu;
    {
        const bool branch_taken_0x429bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429BDCu;
            // 0x429be0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429bdc) {
            ctx->pc = 0x429B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429b74;
        }
    }
    ctx->pc = 0x429BE4u;
label_429be4:
    // 0x429be4: 0x26a40d04  addiu       $a0, $s5, 0xD04
    ctx->pc = 0x429be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3332));
label_429be8:
    // 0x429be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429bec:
    // 0x429bec: 0xc04a576  jal         func_1295D8
label_429bf0:
    if (ctx->pc == 0x429BF0u) {
        ctx->pc = 0x429BF0u;
            // 0x429bf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x429BF4u;
        goto label_429bf4;
    }
    ctx->pc = 0x429BECu;
    SET_GPR_U32(ctx, 31, 0x429BF4u);
    ctx->pc = 0x429BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429BECu;
            // 0x429bf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429BF4u; }
        if (ctx->pc != 0x429BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429BF4u; }
        if (ctx->pc != 0x429BF4u) { return; }
    }
    ctx->pc = 0x429BF4u;
label_429bf4:
    // 0x429bf4: 0xa2a00d08  sb          $zero, 0xD08($s5)
    ctx->pc = 0x429bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3336), (uint8_t)GPR_U32(ctx, 0));
label_429bf8:
    // 0x429bf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x429bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_429bfc:
    // 0x429bfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x429bfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_429c00:
    // 0x429c00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x429c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_429c04:
    // 0x429c04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x429c04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_429c08:
    // 0x429c08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x429c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_429c0c:
    // 0x429c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x429c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429c10:
    // 0x429c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429c14:
    // 0x429c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429c18:
    // 0x429c18: 0x3e00008  jr          $ra
label_429c1c:
    if (ctx->pc == 0x429C1Cu) {
        ctx->pc = 0x429C1Cu;
            // 0x429c1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x429C20u;
        goto label_429c20;
    }
    ctx->pc = 0x429C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429C18u;
            // 0x429c1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429C20u;
label_429c20:
    // 0x429c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x429c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_429c24:
    // 0x429c24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x429c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_429c28:
    // 0x429c28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x429c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_429c2c:
    // 0x429c2c: 0x2442d530  addiu       $v0, $v0, -0x2AD0
    ctx->pc = 0x429c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956336));
label_429c30:
    // 0x429c30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x429c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_429c34:
    // 0x429c34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x429c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_429c38:
    // 0x429c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_429c3c:
    // 0x429c3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x429c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429c40:
    // 0x429c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x429c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429c44:
    // 0x429c44: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x429c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_429c48:
    // 0x429c48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x429c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_429c4c:
    // 0x429c4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x429c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_429c50:
    // 0x429c50: 0xc04a508  jal         func_129420
label_429c54:
    if (ctx->pc == 0x429C54u) {
        ctx->pc = 0x429C54u;
            // 0x429c54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x429C58u;
        goto label_429c58;
    }
    ctx->pc = 0x429C50u;
    SET_GPR_U32(ctx, 31, 0x429C58u);
    ctx->pc = 0x429C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429C50u;
            // 0x429c54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C58u; }
        if (ctx->pc != 0x429C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C58u; }
        if (ctx->pc != 0x429C58u) { return; }
    }
    ctx->pc = 0x429C58u;
label_429c58:
    // 0x429c58: 0xc0bc6ec  jal         func_2F1BB0
label_429c5c:
    if (ctx->pc == 0x429C5Cu) {
        ctx->pc = 0x429C5Cu;
            // 0x429c5c: 0x26440838  addiu       $a0, $s2, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2104));
        ctx->pc = 0x429C60u;
        goto label_429c60;
    }
    ctx->pc = 0x429C58u;
    SET_GPR_U32(ctx, 31, 0x429C60u);
    ctx->pc = 0x429C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429C58u;
            // 0x429c5c: 0x26440838  addiu       $a0, $s2, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C60u; }
        if (ctx->pc != 0x429C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C60u; }
        if (ctx->pc != 0x429C60u) { return; }
    }
    ctx->pc = 0x429C60u;
label_429c60:
    // 0x429c60: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x429c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_429c64:
    // 0x429c64: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x429c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_429c68:
    // 0x429c68: 0x320f809  jalr        $t9
label_429c6c:
    if (ctx->pc == 0x429C6Cu) {
        ctx->pc = 0x429C6Cu;
            // 0x429c6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429C70u;
        goto label_429c70;
    }
    ctx->pc = 0x429C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429C70u);
        ctx->pc = 0x429C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429C68u;
            // 0x429c6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429C70u; }
            if (ctx->pc != 0x429C70u) { return; }
        }
        }
    }
    ctx->pc = 0x429C70u;
label_429c70:
    // 0x429c70: 0x92430859  lbu         $v1, 0x859($s2)
    ctx->pc = 0x429c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2137)));
label_429c74:
    // 0x429c74: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_429c78:
    if (ctx->pc == 0x429C78u) {
        ctx->pc = 0x429C78u;
            // 0x429c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429C7Cu;
        goto label_429c7c;
    }
    ctx->pc = 0x429C74u;
    {
        const bool branch_taken_0x429c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x429c74) {
            ctx->pc = 0x429C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429C74u;
            // 0x429c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429CA0u;
            goto label_429ca0;
        }
    }
    ctx->pc = 0x429C7Cu;
label_429c7c:
    // 0x429c7c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x429c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_429c80:
    // 0x429c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x429c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_429c84:
    // 0x429c84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x429c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_429c88:
    // 0x429c88: 0x320f809  jalr        $t9
label_429c8c:
    if (ctx->pc == 0x429C8Cu) {
        ctx->pc = 0x429C8Cu;
            // 0x429c8c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x429C90u;
        goto label_429c90;
    }
    ctx->pc = 0x429C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429C90u);
        ctx->pc = 0x429C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429C88u;
            // 0x429c8c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429C90u; }
            if (ctx->pc != 0x429C90u) { return; }
        }
        }
    }
    ctx->pc = 0x429C90u;
label_429c90:
    // 0x429c90: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x429c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_429c94:
    // 0x429c94: 0xc073234  jal         func_1CC8D0
label_429c98:
    if (ctx->pc == 0x429C98u) {
        ctx->pc = 0x429C98u;
            // 0x429c98: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x429C9Cu;
        goto label_429c9c;
    }
    ctx->pc = 0x429C94u;
    SET_GPR_U32(ctx, 31, 0x429C9Cu);
    ctx->pc = 0x429C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429C94u;
            // 0x429c98: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C9Cu; }
        if (ctx->pc != 0x429C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429C9Cu; }
        if (ctx->pc != 0x429C9Cu) { return; }
    }
    ctx->pc = 0x429C9Cu;
label_429c9c:
    // 0x429c9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x429c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429ca0:
    // 0x429ca0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x429ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_429ca4:
    // 0x429ca4: 0x8e440cc8  lw          $a0, 0xCC8($s2)
    ctx->pc = 0x429ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
label_429ca8:
    // 0x429ca8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_429cac:
    if (ctx->pc == 0x429CACu) {
        ctx->pc = 0x429CB0u;
        goto label_429cb0;
    }
    ctx->pc = 0x429CA8u;
    {
        const bool branch_taken_0x429ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x429ca8) {
            ctx->pc = 0x429CE0u;
            goto label_429ce0;
        }
    }
    ctx->pc = 0x429CB0u;
label_429cb0:
    // 0x429cb0: 0x8e030ce8  lw          $v1, 0xCE8($s0)
    ctx->pc = 0x429cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
label_429cb4:
    // 0x429cb4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x429cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_429cb8:
    // 0x429cb8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_429cbc:
    if (ctx->pc == 0x429CBCu) {
        ctx->pc = 0x429CC0u;
        goto label_429cc0;
    }
    ctx->pc = 0x429CB8u;
    {
        const bool branch_taken_0x429cb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x429cb8) {
            ctx->pc = 0x429CE0u;
            goto label_429ce0;
        }
    }
    ctx->pc = 0x429CC0u;
label_429cc0:
    // 0x429cc0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x429cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_429cc4:
    // 0x429cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x429cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_429cc8:
    // 0x429cc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x429cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_429ccc:
    // 0x429ccc: 0x320f809  jalr        $t9
label_429cd0:
    if (ctx->pc == 0x429CD0u) {
        ctx->pc = 0x429CD0u;
            // 0x429cd0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x429CD4u;
        goto label_429cd4;
    }
    ctx->pc = 0x429CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429CD4u);
        ctx->pc = 0x429CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429CCCu;
            // 0x429cd0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429CD4u; }
            if (ctx->pc != 0x429CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x429CD4u;
label_429cd4:
    // 0x429cd4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x429cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_429cd8:
    // 0x429cd8: 0xc073234  jal         func_1CC8D0
label_429cdc:
    if (ctx->pc == 0x429CDCu) {
        ctx->pc = 0x429CDCu;
            // 0x429cdc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x429CE0u;
        goto label_429ce0;
    }
    ctx->pc = 0x429CD8u;
    SET_GPR_U32(ctx, 31, 0x429CE0u);
    ctx->pc = 0x429CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429CD8u;
            // 0x429cdc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429CE0u; }
        if (ctx->pc != 0x429CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429CE0u; }
        if (ctx->pc != 0x429CE0u) { return; }
    }
    ctx->pc = 0x429CE0u;
label_429ce0:
    // 0x429ce0: 0x8e43077c  lw          $v1, 0x77C($s2)
    ctx->pc = 0x429ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_429ce4:
    // 0x429ce4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x429ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_429ce8:
    // 0x429ce8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x429ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_429cec:
    // 0x429cec: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_429cf0:
    if (ctx->pc == 0x429CF0u) {
        ctx->pc = 0x429CF0u;
            // 0x429cf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x429CF4u;
        goto label_429cf4;
    }
    ctx->pc = 0x429CECu;
    {
        const bool branch_taken_0x429cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x429CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429CECu;
            // 0x429cf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429cec) {
            ctx->pc = 0x429CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429ca4;
        }
    }
    ctx->pc = 0x429CF4u;
label_429cf4:
    // 0x429cf4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x429cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_429cf8:
    // 0x429cf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x429cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429cfc:
    // 0x429cfc: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x429cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_429d00:
    // 0x429d00: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x429d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_429d04:
    // 0x429d04: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x429d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_429d08:
    // 0x429d08: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x429d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_429d0c:
    // 0x429d0c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_429d10:
    if (ctx->pc == 0x429D10u) {
        ctx->pc = 0x429D10u;
            // 0x429d10: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->pc = 0x429D14u;
        goto label_429d14;
    }
    ctx->pc = 0x429D0Cu;
    {
        const bool branch_taken_0x429d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429D0Cu;
            // 0x429d10: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d0c) {
            ctx->pc = 0x429D50u;
            goto label_429d50;
        }
    }
    ctx->pc = 0x429D14u;
label_429d14:
    // 0x429d14: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x429d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_429d18:
    // 0x429d18: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x429d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_429d1c:
    // 0x429d1c: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_429d20:
    if (ctx->pc == 0x429D20u) {
        ctx->pc = 0x429D24u;
        goto label_429d24;
    }
    ctx->pc = 0x429D1Cu;
    {
        const bool branch_taken_0x429d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x429d1c) {
            ctx->pc = 0x429D88u;
            goto label_429d88;
        }
    }
    ctx->pc = 0x429D24u;
label_429d24:
    // 0x429d24: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x429d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429d28:
    // 0x429d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x429d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_429d2c:
    // 0x429d2c: 0x0  nop
    ctx->pc = 0x429d2cu;
    // NOP
label_429d30:
    // 0x429d30: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x429d30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429d34:
    // 0x429d34: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_429d38:
    if (ctx->pc == 0x429D38u) {
        ctx->pc = 0x429D3Cu;
        goto label_429d3c;
    }
    ctx->pc = 0x429D34u;
    {
        const bool branch_taken_0x429d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x429d34) {
            ctx->pc = 0x429D88u;
            goto label_429d88;
        }
    }
    ctx->pc = 0x429D3Cu;
label_429d3c:
    // 0x429d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429d40:
    // 0x429d40: 0xc0bdf9c  jal         func_2F7E70
label_429d44:
    if (ctx->pc == 0x429D44u) {
        ctx->pc = 0x429D44u;
            // 0x429d44: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x429D48u;
        goto label_429d48;
    }
    ctx->pc = 0x429D40u;
    SET_GPR_U32(ctx, 31, 0x429D48u);
    ctx->pc = 0x429D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429D40u;
            // 0x429d44: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429D48u; }
        if (ctx->pc != 0x429D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429D48u; }
        if (ctx->pc != 0x429D48u) { return; }
    }
    ctx->pc = 0x429D48u;
label_429d48:
    // 0x429d48: 0x1000000f  b           . + 4 + (0xF << 2)
label_429d4c:
    if (ctx->pc == 0x429D4Cu) {
        ctx->pc = 0x429D50u;
        goto label_429d50;
    }
    ctx->pc = 0x429D48u;
    {
        const bool branch_taken_0x429d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429d48) {
            ctx->pc = 0x429D88u;
            goto label_429d88;
        }
    }
    ctx->pc = 0x429D50u;
label_429d50:
    // 0x429d50: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x429d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_429d54:
    // 0x429d54: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x429d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_429d58:
    // 0x429d58: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_429d5c:
    if (ctx->pc == 0x429D5Cu) {
        ctx->pc = 0x429D60u;
        goto label_429d60;
    }
    ctx->pc = 0x429D58u;
    {
        const bool branch_taken_0x429d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x429d58) {
            ctx->pc = 0x429D88u;
            goto label_429d88;
        }
    }
    ctx->pc = 0x429D60u;
label_429d60:
    // 0x429d60: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x429d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_429d64:
    // 0x429d64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x429d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_429d68:
    // 0x429d68: 0x0  nop
    ctx->pc = 0x429d68u;
    // NOP
label_429d6c:
    // 0x429d6c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x429d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429d70:
    // 0x429d70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_429d74:
    if (ctx->pc == 0x429D74u) {
        ctx->pc = 0x429D78u;
        goto label_429d78;
    }
    ctx->pc = 0x429D70u;
    {
        const bool branch_taken_0x429d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x429d70) {
            ctx->pc = 0x429D88u;
            goto label_429d88;
        }
    }
    ctx->pc = 0x429D78u;
label_429d78:
    // 0x429d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x429d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_429d7c:
    // 0x429d7c: 0xc0bdf9c  jal         func_2F7E70
label_429d80:
    if (ctx->pc == 0x429D80u) {
        ctx->pc = 0x429D80u;
            // 0x429d80: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x429D84u;
        goto label_429d84;
    }
    ctx->pc = 0x429D7Cu;
    SET_GPR_U32(ctx, 31, 0x429D84u);
    ctx->pc = 0x429D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429D7Cu;
            // 0x429d80: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429D84u; }
        if (ctx->pc != 0x429D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429D84u; }
        if (ctx->pc != 0x429D84u) { return; }
    }
    ctx->pc = 0x429D84u;
label_429d84:
    // 0x429d84: 0x0  nop
    ctx->pc = 0x429d84u;
    // NOP
label_429d88:
    // 0x429d88: 0x8e43077c  lw          $v1, 0x77C($s2)
    ctx->pc = 0x429d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_429d8c:
    // 0x429d8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x429d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_429d90:
    // 0x429d90: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x429d90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_429d94:
    // 0x429d94: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_429d98:
    if (ctx->pc == 0x429D98u) {
        ctx->pc = 0x429D98u;
            // 0x429d98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x429D9Cu;
        goto label_429d9c;
    }
    ctx->pc = 0x429D94u;
    {
        const bool branch_taken_0x429d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x429D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429D94u;
            // 0x429d98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d94) {
            ctx->pc = 0x429D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429d00;
        }
    }
    ctx->pc = 0x429D9Cu;
label_429d9c:
    // 0x429d9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x429d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_429da0:
    // 0x429da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x429da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429da4:
    // 0x429da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429da8:
    // 0x429da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x429da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_429dac:
    // 0x429dac: 0x3e00008  jr          $ra
label_429db0:
    if (ctx->pc == 0x429DB0u) {
        ctx->pc = 0x429DB0u;
            // 0x429db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x429DB4u;
        goto label_429db4;
    }
    ctx->pc = 0x429DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429DACu;
            // 0x429db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429DB4u;
label_429db4:
    // 0x429db4: 0x0  nop
    ctx->pc = 0x429db4u;
    // NOP
label_429db8:
    // 0x429db8: 0x0  nop
    ctx->pc = 0x429db8u;
    // NOP
label_429dbc:
    // 0x429dbc: 0x0  nop
    ctx->pc = 0x429dbcu;
    // NOP
label_429dc0:
    // 0x429dc0: 0x3e00008  jr          $ra
label_429dc4:
    if (ctx->pc == 0x429DC4u) {
        ctx->pc = 0x429DC8u;
        goto label_429dc8;
    }
    ctx->pc = 0x429DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x429DC8u;
label_429dc8:
    // 0x429dc8: 0x0  nop
    ctx->pc = 0x429dc8u;
    // NOP
label_429dcc:
    // 0x429dcc: 0x0  nop
    ctx->pc = 0x429dccu;
    // NOP
label_429dd0:
    // 0x429dd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x429dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_429dd4:
    // 0x429dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x429dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_429dd8:
    // 0x429dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x429dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_429ddc:
    // 0x429ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x429ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_429de0:
    // 0x429de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x429de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_429de4:
    // 0x429de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x429de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_429de8:
    // 0x429de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_429dec:
    // 0x429dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x429decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_429df0:
    // 0x429df0: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x429df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_429df4:
    // 0x429df4: 0xac830cb8  sw          $v1, 0xCB8($a0)
    ctx->pc = 0x429df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3256), GPR_U32(ctx, 3));
label_429df8:
    // 0x429df8: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x429df8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_429dfc:
    // 0x429dfc: 0x10e50205  beq         $a3, $a1, . + 4 + (0x205 << 2)
label_429e00:
    if (ctx->pc == 0x429E00u) {
        ctx->pc = 0x429E00u;
            // 0x429e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429E04u;
        goto label_429e04;
    }
    ctx->pc = 0x429DFCu;
    {
        const bool branch_taken_0x429dfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x429E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429DFCu;
            // 0x429e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429dfc) {
            ctx->pc = 0x42A614u;
            goto label_42a614;
        }
    }
    ctx->pc = 0x429E04u;
label_429e04:
    // 0x429e04: 0x50e001fe  beql        $a3, $zero, . + 4 + (0x1FE << 2)
label_429e08:
    if (ctx->pc == 0x429E08u) {
        ctx->pc = 0x429E08u;
            // 0x429e08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x429E0Cu;
        goto label_429e0c;
    }
    ctx->pc = 0x429E04u;
    {
        const bool branch_taken_0x429e04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x429e04) {
            ctx->pc = 0x429E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E04u;
            // 0x429e08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A600u;
            goto label_42a600;
        }
    }
    ctx->pc = 0x429E0Cu;
label_429e0c:
    // 0x429e0c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x429e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_429e10:
    // 0x429e10: 0x50e301bb  beql        $a3, $v1, . + 4 + (0x1BB << 2)
label_429e14:
    if (ctx->pc == 0x429E14u) {
        ctx->pc = 0x429E14u;
            // 0x429e14: 0x8e030ca8  lw          $v1, 0xCA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3240)));
        ctx->pc = 0x429E18u;
        goto label_429e18;
    }
    ctx->pc = 0x429E10u;
    {
        const bool branch_taken_0x429e10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x429e10) {
            ctx->pc = 0x429E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E10u;
            // 0x429e14: 0x8e030ca8  lw          $v1, 0xCA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A500u;
            goto label_42a500;
        }
    }
    ctx->pc = 0x429E18u;
label_429e18:
    // 0x429e18: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x429e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_429e1c:
    // 0x429e1c: 0x10e60197  beq         $a3, $a2, . + 4 + (0x197 << 2)
label_429e20:
    if (ctx->pc == 0x429E20u) {
        ctx->pc = 0x429E24u;
        goto label_429e24;
    }
    ctx->pc = 0x429E1Cu;
    {
        const bool branch_taken_0x429e1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x429e1c) {
            ctx->pc = 0x42A47Cu;
            goto label_42a47c;
        }
    }
    ctx->pc = 0x429E24u;
label_429e24:
    // 0x429e24: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x429e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_429e28:
    // 0x429e28: 0x50e30182  beql        $a3, $v1, . + 4 + (0x182 << 2)
label_429e2c:
    if (ctx->pc == 0x429E2Cu) {
        ctx->pc = 0x429E2Cu;
            // 0x429e2c: 0xc6000ce4  lwc1        $f0, 0xCE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x429E30u;
        goto label_429e30;
    }
    ctx->pc = 0x429E28u;
    {
        const bool branch_taken_0x429e28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x429e28) {
            ctx->pc = 0x429E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E28u;
            // 0x429e2c: 0xc6000ce4  lwc1        $f0, 0xCE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A434u;
            goto label_42a434;
        }
    }
    ctx->pc = 0x429E30u;
label_429e30:
    // 0x429e30: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x429e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_429e34:
    // 0x429e34: 0x50e3014f  beql        $a3, $v1, . + 4 + (0x14F << 2)
label_429e38:
    if (ctx->pc == 0x429E38u) {
        ctx->pc = 0x429E38u;
            // 0x429e38: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x429E3Cu;
        goto label_429e3c;
    }
    ctx->pc = 0x429E34u;
    {
        const bool branch_taken_0x429e34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x429e34) {
            ctx->pc = 0x429E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E34u;
            // 0x429e38: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A374u;
            goto label_42a374;
        }
    }
    ctx->pc = 0x429E3Cu;
label_429e3c:
    // 0x429e3c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x429e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_429e40:
    // 0x429e40: 0x50e300f0  beql        $a3, $v1, . + 4 + (0xF0 << 2)
label_429e44:
    if (ctx->pc == 0x429E44u) {
        ctx->pc = 0x429E44u;
            // 0x429e44: 0x92030d08  lbu         $v1, 0xD08($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3336)));
        ctx->pc = 0x429E48u;
        goto label_429e48;
    }
    ctx->pc = 0x429E40u;
    {
        const bool branch_taken_0x429e40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x429e40) {
            ctx->pc = 0x429E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E40u;
            // 0x429e44: 0x92030d08  lbu         $v1, 0xD08($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A204u;
            goto label_42a204;
        }
    }
    ctx->pc = 0x429E48u;
label_429e48:
    // 0x429e48: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x429e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_429e4c:
    // 0x429e4c: 0x10e20045  beq         $a3, $v0, . + 4 + (0x45 << 2)
label_429e50:
    if (ctx->pc == 0x429E50u) {
        ctx->pc = 0x429E54u;
        goto label_429e54;
    }
    ctx->pc = 0x429E4Cu;
    {
        const bool branch_taken_0x429e4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x429e4c) {
            ctx->pc = 0x429F64u;
            goto label_429f64;
        }
    }
    ctx->pc = 0x429E54u;
label_429e54:
    // 0x429e54: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x429e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_429e58:
    // 0x429e58: 0x50e2002c  beql        $a3, $v0, . + 4 + (0x2C << 2)
label_429e5c:
    if (ctx->pc == 0x429E5Cu) {
        ctx->pc = 0x429E5Cu;
            // 0x429e5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x429E60u;
        goto label_429e60;
    }
    ctx->pc = 0x429E58u;
    {
        const bool branch_taken_0x429e58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x429e58) {
            ctx->pc = 0x429E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429E58u;
            // 0x429e5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x429F0Cu;
            goto label_429f0c;
        }
    }
    ctx->pc = 0x429E60u;
label_429e60:
    // 0x429e60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x429e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_429e64:
    // 0x429e64: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_429e68:
    if (ctx->pc == 0x429E68u) {
        ctx->pc = 0x429E6Cu;
        goto label_429e6c;
    }
    ctx->pc = 0x429E64u;
    {
        const bool branch_taken_0x429e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x429e64) {
            ctx->pc = 0x429E74u;
            goto label_429e74;
        }
    }
    ctx->pc = 0x429E6Cu;
label_429e6c:
    // 0x429e6c: 0x100001f0  b           . + 4 + (0x1F0 << 2)
label_429e70:
    if (ctx->pc == 0x429E70u) {
        ctx->pc = 0x429E74u;
        goto label_429e74;
    }
    ctx->pc = 0x429E6Cu;
    {
        const bool branch_taken_0x429e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429e6c) {
            ctx->pc = 0x42A630u;
            goto label_42a630;
        }
    }
    ctx->pc = 0x429E74u;
label_429e74:
    // 0x429e74: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x429e74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_429e78:
    // 0x429e78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x429e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429e7c:
    // 0x429e7c: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x429e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_429e80:
    // 0x429e80: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x429e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_429e84:
    // 0x429e84: 0xc0ca7b0  jal         func_329EC0
label_429e88:
    if (ctx->pc == 0x429E88u) {
        ctx->pc = 0x429E88u;
            // 0x429e88: 0x8e440d78  lw          $a0, 0xD78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
        ctx->pc = 0x429E8Cu;
        goto label_429e8c;
    }
    ctx->pc = 0x429E84u;
    SET_GPR_U32(ctx, 31, 0x429E8Cu);
    ctx->pc = 0x429E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429E84u;
            // 0x429e88: 0x8e440d78  lw          $a0, 0xD78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329EC0u;
    if (runtime->hasFunction(0x329EC0u)) {
        auto targetFn = runtime->lookupFunction(0x329EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429E8Cu; }
        if (ctx->pc != 0x429E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329EC0_0x329ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429E8Cu; }
        if (ctx->pc != 0x429E8Cu) { return; }
    }
    ctx->pc = 0x429E8Cu;
label_429e8c:
    // 0x429e8c: 0xc6410a7c  lwc1        $f1, 0xA7C($s2)
    ctx->pc = 0x429e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_429e90:
    // 0x429e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x429e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_429e94:
    // 0x429e94: 0x0  nop
    ctx->pc = 0x429e94u;
    // NOP
label_429e98:
    // 0x429e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x429e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_429e9c:
    // 0x429e9c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_429ea0:
    if (ctx->pc == 0x429EA0u) {
        ctx->pc = 0x429EA4u;
        goto label_429ea4;
    }
    ctx->pc = 0x429E9Cu;
    {
        const bool branch_taken_0x429e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x429e9c) {
            ctx->pc = 0x429ED8u;
            goto label_429ed8;
        }
    }
    ctx->pc = 0x429EA4u;
label_429ea4:
    // 0x429ea4: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x429ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_429ea8:
    // 0x429ea8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x429ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_429eac:
    // 0x429eac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_429eb0:
    if (ctx->pc == 0x429EB0u) {
        ctx->pc = 0x429EB4u;
        goto label_429eb4;
    }
    ctx->pc = 0x429EACu;
    {
        const bool branch_taken_0x429eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x429eac) {
            ctx->pc = 0x429ED8u;
            goto label_429ed8;
        }
    }
    ctx->pc = 0x429EB4u;
label_429eb4:
    // 0x429eb4: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x429eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_429eb8:
    // 0x429eb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x429eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_429ebc:
    // 0x429ebc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x429ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_429ec0:
    // 0x429ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x429ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_429ec4:
    // 0x429ec4: 0xc0bdf9c  jal         func_2F7E70
label_429ec8:
    if (ctx->pc == 0x429EC8u) {
        ctx->pc = 0x429EC8u;
            // 0x429ec8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x429ECCu;
        goto label_429ecc;
    }
    ctx->pc = 0x429EC4u;
    SET_GPR_U32(ctx, 31, 0x429ECCu);
    ctx->pc = 0x429EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429EC4u;
            // 0x429ec8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429ECCu; }
        if (ctx->pc != 0x429ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429ECCu; }
        if (ctx->pc != 0x429ECCu) { return; }
    }
    ctx->pc = 0x429ECCu;
label_429ecc:
    // 0x429ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x429eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_429ed0:
    // 0x429ed0: 0xc077fb0  jal         func_1DFEC0
label_429ed4:
    if (ctx->pc == 0x429ED4u) {
        ctx->pc = 0x429ED4u;
            // 0x429ed4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x429ED8u;
        goto label_429ed8;
    }
    ctx->pc = 0x429ED0u;
    SET_GPR_U32(ctx, 31, 0x429ED8u);
    ctx->pc = 0x429ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429ED0u;
            // 0x429ed4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429ED8u; }
        if (ctx->pc != 0x429ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429ED8u; }
        if (ctx->pc != 0x429ED8u) { return; }
    }
    ctx->pc = 0x429ED8u;
label_429ed8:
    // 0x429ed8: 0x8e02077c  lw          $v0, 0x77C($s0)
    ctx->pc = 0x429ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_429edc:
    // 0x429edc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x429edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_429ee0:
    // 0x429ee0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x429ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_429ee4:
    // 0x429ee4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_429ee8:
    if (ctx->pc == 0x429EE8u) {
        ctx->pc = 0x429EE8u;
            // 0x429ee8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x429EECu;
        goto label_429eec;
    }
    ctx->pc = 0x429EE4u;
    {
        const bool branch_taken_0x429ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429EE4u;
            // 0x429ee8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ee4) {
            ctx->pc = 0x429E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429e80;
        }
    }
    ctx->pc = 0x429EECu;
label_429eec:
    // 0x429eec: 0xc12aee8  jal         func_4ABBA0
label_429ef0:
    if (ctx->pc == 0x429EF0u) {
        ctx->pc = 0x429EF4u;
        goto label_429ef4;
    }
    ctx->pc = 0x429EECu;
    SET_GPR_U32(ctx, 31, 0x429EF4u);
    ctx->pc = 0x4ABBA0u;
    if (runtime->hasFunction(0x4ABBA0u)) {
        auto targetFn = runtime->lookupFunction(0x4ABBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429EF4u; }
        if (ctx->pc != 0x429EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ABBA0_0x4abba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429EF4u; }
        if (ctx->pc != 0x429EF4u) { return; }
    }
    ctx->pc = 0x429EF4u;
label_429ef4:
    // 0x429ef4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x429ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_429ef8:
    // 0x429ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x429ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_429efc:
    // 0x429efc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x429efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_429f00:
    // 0x429f00: 0x320f809  jalr        $t9
label_429f04:
    if (ctx->pc == 0x429F04u) {
        ctx->pc = 0x429F04u;
            // 0x429f04: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x429F08u;
        goto label_429f08;
    }
    ctx->pc = 0x429F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429F08u);
        ctx->pc = 0x429F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429F00u;
            // 0x429f04: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429F08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429F08u; }
            if (ctx->pc != 0x429F08u) { return; }
        }
        }
    }
    ctx->pc = 0x429F08u;
label_429f08:
    // 0x429f08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x429f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_429f0c:
    // 0x429f0c: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x429f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_429f10:
    // 0x429f10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x429f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_429f14:
    // 0x429f14: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x429f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_429f18:
    // 0x429f18: 0x320f809  jalr        $t9
label_429f1c:
    if (ctx->pc == 0x429F1Cu) {
        ctx->pc = 0x429F1Cu;
            // 0x429f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429F20u;
        goto label_429f20;
    }
    ctx->pc = 0x429F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429F20u);
        ctx->pc = 0x429F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429F18u;
            // 0x429f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429F20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429F20u; }
            if (ctx->pc != 0x429F20u) { return; }
        }
        }
    }
    ctx->pc = 0x429F20u;
label_429f20:
    // 0x429f20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x429f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_429f24:
    // 0x429f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x429f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_429f28:
    // 0x429f28: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x429f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_429f2c:
    // 0x429f2c: 0x320f809  jalr        $t9
label_429f30:
    if (ctx->pc == 0x429F30u) {
        ctx->pc = 0x429F30u;
            // 0x429f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429F34u;
        goto label_429f34;
    }
    ctx->pc = 0x429F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x429F34u);
        ctx->pc = 0x429F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429F2Cu;
            // 0x429f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x429F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x429F34u; }
            if (ctx->pc != 0x429F34u) { return; }
        }
        }
    }
    ctx->pc = 0x429F34u;
label_429f34:
    // 0x429f34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x429f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_429f38:
    // 0x429f38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x429f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_429f3c:
    // 0x429f3c: 0x8c63a140  lw          $v1, -0x5EC0($v1)
    ctx->pc = 0x429f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_429f40:
    // 0x429f40: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x429f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_429f44:
    // 0x429f44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x429f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_429f48:
    // 0x429f48: 0x506001bc  beql        $v1, $zero, . + 4 + (0x1BC << 2)
label_429f4c:
    if (ctx->pc == 0x429F4Cu) {
        ctx->pc = 0x429F4Cu;
            // 0x429f4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x429F50u;
        goto label_429f50;
    }
    ctx->pc = 0x429F48u;
    {
        const bool branch_taken_0x429f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x429f48) {
            ctx->pc = 0x429F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x429F48u;
            // 0x429f4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A63Cu;
            goto label_42a63c;
        }
    }
    ctx->pc = 0x429F50u;
label_429f50:
    // 0x429f50: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x429f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_429f54:
    // 0x429f54: 0xc073234  jal         func_1CC8D0
label_429f58:
    if (ctx->pc == 0x429F58u) {
        ctx->pc = 0x429F58u;
            // 0x429f58: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x429F5Cu;
        goto label_429f5c;
    }
    ctx->pc = 0x429F54u;
    SET_GPR_U32(ctx, 31, 0x429F5Cu);
    ctx->pc = 0x429F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429F54u;
            // 0x429f58: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429F5Cu; }
        if (ctx->pc != 0x429F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429F5Cu; }
        if (ctx->pc != 0x429F5Cu) { return; }
    }
    ctx->pc = 0x429F5Cu;
label_429f5c:
    // 0x429f5c: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_429f60:
    if (ctx->pc == 0x429F60u) {
        ctx->pc = 0x429F64u;
        goto label_429f64;
    }
    ctx->pc = 0x429F5Cu;
    {
        const bool branch_taken_0x429f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429f5c) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x429F64u;
label_429f64:
    // 0x429f64: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x429f64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_429f68:
    // 0x429f68: 0xa2050d08  sb          $a1, 0xD08($s0)
    ctx->pc = 0x429f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3336), (uint8_t)GPR_U32(ctx, 5));
label_429f6c:
    // 0x429f6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x429f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429f70:
    // 0x429f70: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x429f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_429f74:
    // 0x429f74: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x429f74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_429f78:
    // 0x429f78: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x429f78u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_429f7c:
    // 0x429f7c: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x429f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_429f80:
    // 0x429f80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_429f84:
    if (ctx->pc == 0x429F84u) {
        ctx->pc = 0x429F84u;
            // 0x429f84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429F88u;
        goto label_429f88;
    }
    ctx->pc = 0x429F80u;
    {
        const bool branch_taken_0x429f80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x429F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429F80u;
            // 0x429f84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429f80) {
            ctx->pc = 0x429F98u;
            goto label_429f98;
        }
    }
    ctx->pc = 0x429F88u;
label_429f88:
    // 0x429f88: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x429f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_429f8c:
    // 0x429f8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_429f90:
    if (ctx->pc == 0x429F90u) {
        ctx->pc = 0x429F94u;
        goto label_429f94;
    }
    ctx->pc = 0x429F8Cu;
    {
        const bool branch_taken_0x429f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x429f8c) {
            ctx->pc = 0x429F98u;
            goto label_429f98;
        }
    }
    ctx->pc = 0x429F94u;
label_429f94:
    // 0x429f94: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x429f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_429f98:
    // 0x429f98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_429f9c:
    if (ctx->pc == 0x429F9Cu) {
        ctx->pc = 0x429FA0u;
        goto label_429fa0;
    }
    ctx->pc = 0x429F98u;
    {
        const bool branch_taken_0x429f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429f98) {
            ctx->pc = 0x429FB8u;
            goto label_429fb8;
        }
    }
    ctx->pc = 0x429FA0u;
label_429fa0:
    // 0x429fa0: 0xc075eb4  jal         func_1D7AD0
label_429fa4:
    if (ctx->pc == 0x429FA4u) {
        ctx->pc = 0x429FA4u;
            // 0x429fa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429FA8u;
        goto label_429fa8;
    }
    ctx->pc = 0x429FA0u;
    SET_GPR_U32(ctx, 31, 0x429FA8u);
    ctx->pc = 0x429FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429FA0u;
            // 0x429fa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FA8u; }
        if (ctx->pc != 0x429FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FA8u; }
        if (ctx->pc != 0x429FA8u) { return; }
    }
    ctx->pc = 0x429FA8u;
label_429fa8:
    // 0x429fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_429fac:
    if (ctx->pc == 0x429FACu) {
        ctx->pc = 0x429FB0u;
        goto label_429fb0;
    }
    ctx->pc = 0x429FA8u;
    {
        const bool branch_taken_0x429fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x429fa8) {
            ctx->pc = 0x429FB8u;
            goto label_429fb8;
        }
    }
    ctx->pc = 0x429FB0u;
label_429fb0:
    // 0x429fb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x429fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429fb4:
    // 0x429fb4: 0x0  nop
    ctx->pc = 0x429fb4u;
    // NOP
label_429fb8:
    // 0x429fb8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_429fbc:
    if (ctx->pc == 0x429FBCu) {
        ctx->pc = 0x429FC0u;
        goto label_429fc0;
    }
    ctx->pc = 0x429FB8u;
    {
        const bool branch_taken_0x429fb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x429fb8) {
            ctx->pc = 0x429FD0u;
            goto label_429fd0;
        }
    }
    ctx->pc = 0x429FC0u;
label_429fc0:
    // 0x429fc0: 0xc07634c  jal         func_1D8D30
label_429fc4:
    if (ctx->pc == 0x429FC4u) {
        ctx->pc = 0x429FC4u;
            // 0x429fc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429FC8u;
        goto label_429fc8;
    }
    ctx->pc = 0x429FC0u;
    SET_GPR_U32(ctx, 31, 0x429FC8u);
    ctx->pc = 0x429FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429FC0u;
            // 0x429fc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FC8u; }
        if (ctx->pc != 0x429FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FC8u; }
        if (ctx->pc != 0x429FC8u) { return; }
    }
    ctx->pc = 0x429FC8u;
label_429fc8:
    // 0x429fc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_429fcc:
    if (ctx->pc == 0x429FCCu) {
        ctx->pc = 0x429FD0u;
        goto label_429fd0;
    }
    ctx->pc = 0x429FC8u;
    {
        const bool branch_taken_0x429fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429fc8) {
            ctx->pc = 0x429FD8u;
            goto label_429fd8;
        }
    }
    ctx->pc = 0x429FD0u;
label_429fd0:
    // 0x429fd0: 0xc076338  jal         func_1D8CE0
label_429fd4:
    if (ctx->pc == 0x429FD4u) {
        ctx->pc = 0x429FD4u;
            // 0x429fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x429FD8u;
        goto label_429fd8;
    }
    ctx->pc = 0x429FD0u;
    SET_GPR_U32(ctx, 31, 0x429FD8u);
    ctx->pc = 0x429FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x429FD0u;
            // 0x429fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CE0u;
    if (runtime->hasFunction(0x1D8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FD8u; }
        if (ctx->pc != 0x429FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8CE0_0x1d8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x429FD8u; }
        if (ctx->pc != 0x429FD8u) { return; }
    }
    ctx->pc = 0x429FD8u;
label_429fd8:
    // 0x429fd8: 0x8e02077c  lw          $v0, 0x77C($s0)
    ctx->pc = 0x429fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_429fdc:
    // 0x429fdc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x429fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_429fe0:
    // 0x429fe0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x429fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_429fe4:
    // 0x429fe4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_429fe8:
    if (ctx->pc == 0x429FE8u) {
        ctx->pc = 0x429FE8u;
            // 0x429fe8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x429FECu;
        goto label_429fec;
    }
    ctx->pc = 0x429FE4u;
    {
        const bool branch_taken_0x429fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x429FE4u;
            // 0x429fe8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429fe4) {
            ctx->pc = 0x429F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_429f74;
        }
    }
    ctx->pc = 0x429FECu;
label_429fec:
    // 0x429fec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x429fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_429ff0:
    // 0x429ff0: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x429ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_429ff4:
    // 0x429ff4: 0x8c437488  lw          $v1, 0x7488($v0)
    ctx->pc = 0x429ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29832)));
label_429ff8:
    // 0x429ff8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x429ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_429ffc:
    // 0x429ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a000:
    // 0x42a000: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x42a000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
label_42a004:
    // 0x42a004: 0x24c67490  addiu       $a2, $a2, 0x7490
    ctx->pc = 0x42a004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
label_42a008:
    // 0x42a008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a00c:
    // 0x42a00c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42a010:
    // 0x42a010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42a014:
    // 0x42a014: 0xac437488  sw          $v1, 0x7488($v0)
    ctx->pc = 0x42a014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29832), GPR_U32(ctx, 3));
label_42a018:
    // 0x42a018: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x42a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_42a01c:
    // 0x42a01c: 0x80420e3f  lb          $v0, 0xE3F($v0)
    ctx->pc = 0x42a01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
label_42a020:
    // 0x42a020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42a024:
    if (ctx->pc == 0x42A024u) {
        ctx->pc = 0x42A028u;
        goto label_42a028;
    }
    ctx->pc = 0x42A020u;
    {
        const bool branch_taken_0x42a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a020) {
            ctx->pc = 0x42A038u;
            goto label_42a038;
        }
    }
    ctx->pc = 0x42A028u;
label_42a028:
    // 0x42a028: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x42a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_42a02c:
    // 0x42a02c: 0x10000008  b           . + 4 + (0x8 << 2)
label_42a030:
    if (ctx->pc == 0x42A030u) {
        ctx->pc = 0x42A030u;
            // 0x42a030: 0xa0400d04  sb          $zero, 0xD04($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3332), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x42A034u;
        goto label_42a034;
    }
    ctx->pc = 0x42A02Cu;
    {
        const bool branch_taken_0x42a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A02Cu;
            // 0x42a030: 0xa0400d04  sb          $zero, 0xD04($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3332), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a02c) {
            ctx->pc = 0x42A050u;
            goto label_42a050;
        }
    }
    ctx->pc = 0x42A034u;
label_42a034:
    // 0x42a034: 0x0  nop
    ctx->pc = 0x42a034u;
    // NOP
label_42a038:
    // 0x42a038: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x42a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_42a03c:
    // 0x42a03c: 0xa0440d04  sb          $a0, 0xD04($v0)
    ctx->pc = 0x42a03cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3332), (uint8_t)GPR_U32(ctx, 4));
label_42a040:
    // 0x42a040: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a044:
    // 0x42a044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42a048:
    // 0x42a048: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x42a048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_42a04c:
    // 0x42a04c: 0x0  nop
    ctx->pc = 0x42a04cu;
    // NOP
label_42a050:
    // 0x42a050: 0x8e030780  lw          $v1, 0x780($s0)
    ctx->pc = 0x42a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
label_42a054:
    // 0x42a054: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x42a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_42a058:
    // 0x42a058: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x42a058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_42a05c:
    // 0x42a05c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x42a05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42a060:
    // 0x42a060: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_42a064:
    if (ctx->pc == 0x42A064u) {
        ctx->pc = 0x42A064u;
            // 0x42a064: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x42A068u;
        goto label_42a068;
    }
    ctx->pc = 0x42A060u;
    {
        const bool branch_taken_0x42a060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A060u;
            // 0x42a064: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a060) {
            ctx->pc = 0x42A018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a018;
        }
    }
    ctx->pc = 0x42A068u;
label_42a068:
    // 0x42a068: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_42a06c:
    if (ctx->pc == 0x42A06Cu) {
        ctx->pc = 0x42A06Cu;
            // 0x42a06c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A070u;
        goto label_42a070;
    }
    ctx->pc = 0x42A068u;
    {
        const bool branch_taken_0x42a068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A068u;
            // 0x42a06c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a068) {
            ctx->pc = 0x42A0B8u;
            goto label_42a0b8;
        }
    }
    ctx->pc = 0x42A070u;
label_42a070:
    // 0x42a070: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x42a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_42a074:
    // 0x42a074: 0x90420d04  lbu         $v0, 0xD04($v0)
    ctx->pc = 0x42a074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3332)));
label_42a078:
    // 0x42a078: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42a078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42a07c:
    // 0x42a07c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42a07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_42a080:
    // 0x42a080: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_42a084:
    if (ctx->pc == 0x42A084u) {
        ctx->pc = 0x42A084u;
            // 0x42a084: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x42A088u;
        goto label_42a088;
    }
    ctx->pc = 0x42A080u;
    {
        const bool branch_taken_0x42a080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a080) {
            ctx->pc = 0x42A084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A080u;
            // 0x42a084: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A0A8u;
            goto label_42a0a8;
        }
    }
    ctx->pc = 0x42A088u;
label_42a088:
    // 0x42a088: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42a088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42a08c:
    // 0x42a08c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x42a08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_42a090:
    // 0x42a090: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x42a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_42a094:
    // 0x42a094: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x42a094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_42a098:
    // 0x42a098: 0xc05d85a  jal         func_176168
label_42a09c:
    if (ctx->pc == 0x42A09Cu) {
        ctx->pc = 0x42A09Cu;
            // 0x42a09c: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
        ctx->pc = 0x42A0A0u;
        goto label_42a0a0;
    }
    ctx->pc = 0x42A098u;
    SET_GPR_U32(ctx, 31, 0x42A0A0u);
    ctx->pc = 0x42A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A098u;
            // 0x42a09c: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0A0u; }
        if (ctx->pc != 0x42A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0A0u; }
        if (ctx->pc != 0x42A0A0u) { return; }
    }
    ctx->pc = 0x42A0A0u;
label_42a0a0:
    // 0x42a0a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_42a0a4:
    if (ctx->pc == 0x42A0A4u) {
        ctx->pc = 0x42A0A8u;
        goto label_42a0a8;
    }
    ctx->pc = 0x42A0A0u;
    {
        const bool branch_taken_0x42a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a0a0) {
            ctx->pc = 0x42A0B8u;
            goto label_42a0b8;
        }
    }
    ctx->pc = 0x42A0A8u;
label_42a0a8:
    // 0x42a0a8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x42a0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42a0ac:
    // 0x42a0ac: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_42a0b0:
    if (ctx->pc == 0x42A0B0u) {
        ctx->pc = 0x42A0B0u;
            // 0x42a0b0: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->pc = 0x42A0B4u;
        goto label_42a0b4;
    }
    ctx->pc = 0x42A0ACu;
    {
        const bool branch_taken_0x42a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a0ac) {
            ctx->pc = 0x42A0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A0ACu;
            // 0x42a0b0: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a074;
        }
    }
    ctx->pc = 0x42A0B4u;
label_42a0b4:
    // 0x42a0b4: 0x0  nop
    ctx->pc = 0x42a0b4u;
    // NOP
label_42a0b8:
    // 0x42a0b8: 0xc040180  jal         func_100600
label_42a0bc:
    if (ctx->pc == 0x42A0BCu) {
        ctx->pc = 0x42A0BCu;
            // 0x42a0bc: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x42A0C0u;
        goto label_42a0c0;
    }
    ctx->pc = 0x42A0B8u;
    SET_GPR_U32(ctx, 31, 0x42A0C0u);
    ctx->pc = 0x42A0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A0B8u;
            // 0x42a0bc: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0C0u; }
        if (ctx->pc != 0x42A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0C0u; }
        if (ctx->pc != 0x42A0C0u) { return; }
    }
    ctx->pc = 0x42A0C0u;
label_42a0c0:
    // 0x42a0c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_42a0c4:
    if (ctx->pc == 0x42A0C4u) {
        ctx->pc = 0x42A0C4u;
            // 0x42a0c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A0C8u;
        goto label_42a0c8;
    }
    ctx->pc = 0x42A0C0u;
    {
        const bool branch_taken_0x42a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A0C0u;
            // 0x42a0c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a0c0) {
            ctx->pc = 0x42A138u;
            goto label_42a138;
        }
    }
    ctx->pc = 0x42A0C8u;
label_42a0c8:
    // 0x42a0c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42a0cc:
    // 0x42a0cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42a0d0:
    // 0x42a0d0: 0x8c517488  lw          $s1, 0x7488($v0)
    ctx->pc = 0x42a0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29832)));
label_42a0d4:
    // 0x42a0d4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x42a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42a0d8:
    // 0x42a0d8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x42a0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42a0dc:
    // 0x42a0dc: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x42a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_42a0e0:
    // 0x42a0e0: 0xc10ca68  jal         func_4329A0
label_42a0e4:
    if (ctx->pc == 0x42A0E4u) {
        ctx->pc = 0x42A0E4u;
            // 0x42a0e4: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->pc = 0x42A0E8u;
        goto label_42a0e8;
    }
    ctx->pc = 0x42A0E0u;
    SET_GPR_U32(ctx, 31, 0x42A0E8u);
    ctx->pc = 0x42A0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A0E0u;
            // 0x42a0e4: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0E8u; }
        if (ctx->pc != 0x42A0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A0E8u; }
        if (ctx->pc != 0x42A0E8u) { return; }
    }
    ctx->pc = 0x42A0E8u;
label_42a0e8:
    // 0x42a0e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42a0ec:
    // 0x42a0ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42a0f0:
    // 0x42a0f0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x42a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_42a0f4:
    // 0x42a0f4: 0x2463c190  addiu       $v1, $v1, -0x3E70
    ctx->pc = 0x42a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951312));
label_42a0f8:
    // 0x42a0f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x42a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42a0fc:
    // 0x42a0fc: 0x26040d08  addiu       $a0, $s0, 0xD08
    ctx->pc = 0x42a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3336));
label_42a100:
    // 0x42a100: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x42a100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_42a104:
    // 0x42a104: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x42a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42a108:
    // 0x42a108: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x42a108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_42a10c:
    // 0x42a10c: 0x26030d04  addiu       $v1, $s0, 0xD04
    ctx->pc = 0x42a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3332));
label_42a110:
    // 0x42a110: 0xa2400071  sb          $zero, 0x71($s2)
    ctx->pc = 0x42a110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
label_42a114:
    // 0x42a114: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42a118:
    // 0x42a118: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x42a118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
label_42a11c:
    // 0x42a11c: 0x24427490  addiu       $v0, $v0, 0x7490
    ctx->pc = 0x42a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29840));
label_42a120:
    // 0x42a120: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x42a120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_42a124:
    // 0x42a124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42a128:
    // 0x42a128: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x42a128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_42a12c:
    // 0x42a12c: 0xae51008c  sw          $s1, 0x8C($s2)
    ctx->pc = 0x42a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 17));
label_42a130:
    // 0x42a130: 0xc128de4  jal         func_4A3790
label_42a134:
    if (ctx->pc == 0x42A134u) {
        ctx->pc = 0x42A134u;
            // 0x42a134: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x42A138u;
        goto label_42a138;
    }
    ctx->pc = 0x42A130u;
    SET_GPR_U32(ctx, 31, 0x42A138u);
    ctx->pc = 0x42A134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A130u;
            // 0x42a134: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A3790u;
    if (runtime->hasFunction(0x4A3790u)) {
        auto targetFn = runtime->lookupFunction(0x4A3790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A138u; }
        if (ctx->pc != 0x42A138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A3790_0x4a3790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A138u; }
        if (ctx->pc != 0x42A138u) { return; }
    }
    ctx->pc = 0x42A138u;
label_42a138:
    // 0x42a138: 0xae120d00  sw          $s2, 0xD00($s0)
    ctx->pc = 0x42a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3328), GPR_U32(ctx, 18));
label_42a13c:
    // 0x42a13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a140:
    // 0x42a140: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42a140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42a144:
    // 0x42a144: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a148:
    // 0x42a148: 0x320f809  jalr        $t9
label_42a14c:
    if (ctx->pc == 0x42A14Cu) {
        ctx->pc = 0x42A14Cu;
            // 0x42a14c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x42A150u;
        goto label_42a150;
    }
    ctx->pc = 0x42A148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A150u);
        ctx->pc = 0x42A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A148u;
            // 0x42a14c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A150u; }
            if (ctx->pc != 0x42A150u) { return; }
        }
        }
    }
    ctx->pc = 0x42A150u;
label_42a150:
    // 0x42a150: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x42a150u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_42a154:
    // 0x42a154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42a154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a158:
    // 0x42a158: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x42a158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_42a15c:
    // 0x42a15c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42a160:
    // 0x42a160: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x42a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_42a164:
    // 0x42a164: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x42a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_42a168:
    // 0x42a168: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_42a16c:
    if (ctx->pc == 0x42A16Cu) {
        ctx->pc = 0x42A16Cu;
            // 0x42a16c: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->pc = 0x42A170u;
        goto label_42a170;
    }
    ctx->pc = 0x42A168u;
    {
        const bool branch_taken_0x42a168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A168u;
            // 0x42a16c: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a168) {
            ctx->pc = 0x42A1B0u;
            goto label_42a1b0;
        }
    }
    ctx->pc = 0x42A170u;
label_42a170:
    // 0x42a170: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a174:
    // 0x42a174: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x42a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_42a178:
    // 0x42a178: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
label_42a17c:
    if (ctx->pc == 0x42A17Cu) {
        ctx->pc = 0x42A180u;
        goto label_42a180;
    }
    ctx->pc = 0x42A178u;
    {
        const bool branch_taken_0x42a178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x42a178) {
            ctx->pc = 0x42A1E8u;
            goto label_42a1e8;
        }
    }
    ctx->pc = 0x42A180u;
label_42a180:
    // 0x42a180: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a184:
    // 0x42a184: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a188:
    // 0x42a188: 0x0  nop
    ctx->pc = 0x42a188u;
    // NOP
label_42a18c:
    // 0x42a18c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x42a18cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a190:
    // 0x42a190: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_42a194:
    if (ctx->pc == 0x42A194u) {
        ctx->pc = 0x42A198u;
        goto label_42a198;
    }
    ctx->pc = 0x42A190u;
    {
        const bool branch_taken_0x42a190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a190) {
            ctx->pc = 0x42A1E8u;
            goto label_42a1e8;
        }
    }
    ctx->pc = 0x42A198u;
label_42a198:
    // 0x42a198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a19c:
    // 0x42a19c: 0xc0bdf9c  jal         func_2F7E70
label_42a1a0:
    if (ctx->pc == 0x42A1A0u) {
        ctx->pc = 0x42A1A0u;
            // 0x42a1a0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x42A1A4u;
        goto label_42a1a4;
    }
    ctx->pc = 0x42A19Cu;
    SET_GPR_U32(ctx, 31, 0x42A1A4u);
    ctx->pc = 0x42A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A19Cu;
            // 0x42a1a0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A1A4u; }
        if (ctx->pc != 0x42A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A1A4u; }
        if (ctx->pc != 0x42A1A4u) { return; }
    }
    ctx->pc = 0x42A1A4u;
label_42a1a4:
    // 0x42a1a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_42a1a8:
    if (ctx->pc == 0x42A1A8u) {
        ctx->pc = 0x42A1ACu;
        goto label_42a1ac;
    }
    ctx->pc = 0x42A1A4u;
    {
        const bool branch_taken_0x42a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a1a4) {
            ctx->pc = 0x42A1E8u;
            goto label_42a1e8;
        }
    }
    ctx->pc = 0x42A1ACu;
label_42a1ac:
    // 0x42a1ac: 0x0  nop
    ctx->pc = 0x42a1acu;
    // NOP
label_42a1b0:
    // 0x42a1b0: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a1b4:
    // 0x42a1b4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x42a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_42a1b8:
    // 0x42a1b8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_42a1bc:
    if (ctx->pc == 0x42A1BCu) {
        ctx->pc = 0x42A1C0u;
        goto label_42a1c0;
    }
    ctx->pc = 0x42A1B8u;
    {
        const bool branch_taken_0x42a1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42a1b8) {
            ctx->pc = 0x42A1E8u;
            goto label_42a1e8;
        }
    }
    ctx->pc = 0x42A1C0u;
label_42a1c0:
    // 0x42a1c0: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a1c4:
    // 0x42a1c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a1c8:
    // 0x42a1c8: 0x0  nop
    ctx->pc = 0x42a1c8u;
    // NOP
label_42a1cc:
    // 0x42a1cc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x42a1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a1d0:
    // 0x42a1d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_42a1d4:
    if (ctx->pc == 0x42A1D4u) {
        ctx->pc = 0x42A1D8u;
        goto label_42a1d8;
    }
    ctx->pc = 0x42A1D0u;
    {
        const bool branch_taken_0x42a1d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a1d0) {
            ctx->pc = 0x42A1E8u;
            goto label_42a1e8;
        }
    }
    ctx->pc = 0x42A1D8u;
label_42a1d8:
    // 0x42a1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a1dc:
    // 0x42a1dc: 0xc0bdf9c  jal         func_2F7E70
label_42a1e0:
    if (ctx->pc == 0x42A1E0u) {
        ctx->pc = 0x42A1E0u;
            // 0x42a1e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x42A1E4u;
        goto label_42a1e4;
    }
    ctx->pc = 0x42A1DCu;
    SET_GPR_U32(ctx, 31, 0x42A1E4u);
    ctx->pc = 0x42A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A1DCu;
            // 0x42a1e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A1E4u; }
        if (ctx->pc != 0x42A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A1E4u; }
        if (ctx->pc != 0x42A1E4u) { return; }
    }
    ctx->pc = 0x42A1E4u;
label_42a1e4:
    // 0x42a1e4: 0x0  nop
    ctx->pc = 0x42a1e4u;
    // NOP
label_42a1e8:
    // 0x42a1e8: 0x8e03077c  lw          $v1, 0x77C($s0)
    ctx->pc = 0x42a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_42a1ec:
    // 0x42a1ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42a1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42a1f0:
    // 0x42a1f0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x42a1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42a1f4:
    // 0x42a1f4: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_42a1f8:
    if (ctx->pc == 0x42A1F8u) {
        ctx->pc = 0x42A1F8u;
            // 0x42a1f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42A1FCu;
        goto label_42a1fc;
    }
    ctx->pc = 0x42A1F4u;
    {
        const bool branch_taken_0x42a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A1F4u;
            // 0x42a1f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a1f4) {
            ctx->pc = 0x42A15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a15c;
        }
    }
    ctx->pc = 0x42A1FCu;
label_42a1fc:
    // 0x42a1fc: 0x1000010e  b           . + 4 + (0x10E << 2)
label_42a200:
    if (ctx->pc == 0x42A200u) {
        ctx->pc = 0x42A204u;
        goto label_42a204;
    }
    ctx->pc = 0x42A1FCu;
    {
        const bool branch_taken_0x42a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a1fc) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A204u;
label_42a204:
    // 0x42a204: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_42a208:
    if (ctx->pc == 0x42A208u) {
        ctx->pc = 0x42A20Cu;
        goto label_42a20c;
    }
    ctx->pc = 0x42A204u;
    {
        const bool branch_taken_0x42a204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a204) {
            ctx->pc = 0x42A2C0u;
            goto label_42a2c0;
        }
    }
    ctx->pc = 0x42A20Cu;
label_42a20c:
    // 0x42a20c: 0x92030758  lbu         $v1, 0x758($s0)
    ctx->pc = 0x42a20cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1880)));
label_42a210:
    // 0x42a210: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x42a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_42a214:
    // 0x42a214: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x42a214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_42a218:
    // 0x42a218: 0x8e040d00  lw          $a0, 0xD00($s0)
    ctx->pc = 0x42a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3328)));
label_42a21c:
    // 0x42a21c: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x42a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
label_42a220:
    // 0x42a220: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_42a224:
    if (ctx->pc == 0x42A224u) {
        ctx->pc = 0x42A224u;
            // 0x42a224: 0x28fbe  dsrl32      $s1, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x42A228u;
        goto label_42a228;
    }
    ctx->pc = 0x42A220u;
    {
        const bool branch_taken_0x42a220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A220u;
            // 0x42a224: 0x28fbe  dsrl32      $s1, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a220) {
            ctx->pc = 0x42A23Cu;
            goto label_42a23c;
        }
    }
    ctx->pc = 0x42A228u;
label_42a228:
    // 0x42a228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42a228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42a22c:
    // 0x42a22c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a230:
    // 0x42a230: 0x320f809  jalr        $t9
label_42a234:
    if (ctx->pc == 0x42A234u) {
        ctx->pc = 0x42A234u;
            // 0x42a234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A238u;
        goto label_42a238;
    }
    ctx->pc = 0x42A230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A238u);
        ctx->pc = 0x42A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A230u;
            // 0x42a234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A238u; }
            if (ctx->pc != 0x42A238u) { return; }
        }
        }
    }
    ctx->pc = 0x42A238u;
label_42a238:
    // 0x42a238: 0xae000d00  sw          $zero, 0xD00($s0)
    ctx->pc = 0x42a238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3328), GPR_U32(ctx, 0));
label_42a23c:
    // 0x42a23c: 0xc040180  jal         func_100600
label_42a240:
    if (ctx->pc == 0x42A240u) {
        ctx->pc = 0x42A240u;
            // 0x42a240: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x42A244u;
        goto label_42a244;
    }
    ctx->pc = 0x42A23Cu;
    SET_GPR_U32(ctx, 31, 0x42A244u);
    ctx->pc = 0x42A240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A23Cu;
            // 0x42a240: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A244u; }
        if (ctx->pc != 0x42A244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A244u; }
        if (ctx->pc != 0x42A244u) { return; }
    }
    ctx->pc = 0x42A244u;
label_42a244:
    // 0x42a244: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_42a248:
    if (ctx->pc == 0x42A248u) {
        ctx->pc = 0x42A248u;
            // 0x42a248: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A24Cu;
        goto label_42a24c;
    }
    ctx->pc = 0x42A244u;
    {
        const bool branch_taken_0x42a244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A244u;
            // 0x42a248: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a244) {
            ctx->pc = 0x42A2ACu;
            goto label_42a2ac;
        }
    }
    ctx->pc = 0x42A24Cu;
label_42a24c:
    // 0x42a24c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x42a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_42a250:
    // 0x42a250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42a254:
    // 0x42a254: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x42a254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_42a258:
    // 0x42a258: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x42a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42a25c:
    // 0x42a25c: 0xc10ca68  jal         func_4329A0
label_42a260:
    if (ctx->pc == 0x42A260u) {
        ctx->pc = 0x42A260u;
            // 0x42a260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A264u;
        goto label_42a264;
    }
    ctx->pc = 0x42A25Cu;
    SET_GPR_U32(ctx, 31, 0x42A264u);
    ctx->pc = 0x42A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A25Cu;
            // 0x42a260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A264u; }
        if (ctx->pc != 0x42A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A264u; }
        if (ctx->pc != 0x42A264u) { return; }
    }
    ctx->pc = 0x42A264u;
label_42a264:
    // 0x42a264: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42a264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42a268:
    // 0x42a268: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42a268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42a26c:
    // 0x42a26c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x42a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_42a270:
    // 0x42a270: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x42a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
label_42a274:
    // 0x42a274: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x42a274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42a278:
    // 0x42a278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a27c:
    // 0x42a27c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x42a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_42a280:
    // 0x42a280: 0x26020ca8  addiu       $v0, $s0, 0xCA8
    ctx->pc = 0x42a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3240));
label_42a284:
    // 0x42a284: 0xa2510054  sb          $s1, 0x54($s2)
    ctx->pc = 0x42a284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 17));
label_42a288:
    // 0x42a288: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x42a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42a28c:
    // 0x42a28c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x42a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_42a290:
    // 0x42a290: 0xa244005c  sb          $a0, 0x5C($s2)
    ctx->pc = 0x42a290u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 4));
label_42a294:
    // 0x42a294: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x42a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_42a298:
    // 0x42a298: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x42a298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_42a29c:
    // 0x42a29c: 0xa240005d  sb          $zero, 0x5D($s2)
    ctx->pc = 0x42a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 0));
label_42a2a0:
    // 0x42a2a0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x42a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_42a2a4:
    // 0x42a2a4: 0xc073234  jal         func_1CC8D0
label_42a2a8:
    if (ctx->pc == 0x42A2A8u) {
        ctx->pc = 0x42A2A8u;
            // 0x42a2a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x42A2ACu;
        goto label_42a2ac;
    }
    ctx->pc = 0x42A2A4u;
    SET_GPR_U32(ctx, 31, 0x42A2ACu);
    ctx->pc = 0x42A2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A2A4u;
            // 0x42a2a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A2ACu; }
        if (ctx->pc != 0x42A2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A2ACu; }
        if (ctx->pc != 0x42A2ACu) { return; }
    }
    ctx->pc = 0x42A2ACu;
label_42a2ac:
    // 0x42a2ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42a2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42a2b0:
    // 0x42a2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a2b4:
    // 0x42a2b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a2b8:
    // 0x42a2b8: 0x320f809  jalr        $t9
label_42a2bc:
    if (ctx->pc == 0x42A2BCu) {
        ctx->pc = 0x42A2BCu;
            // 0x42a2bc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x42A2C0u;
        goto label_42a2c0;
    }
    ctx->pc = 0x42A2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A2C0u);
        ctx->pc = 0x42A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A2B8u;
            // 0x42a2bc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A2C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A2C0u; }
            if (ctx->pc != 0x42A2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x42A2C0u;
label_42a2c0:
    // 0x42a2c0: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x42a2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_42a2c4:
    // 0x42a2c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42a2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a2c8:
    // 0x42a2c8: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x42a2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_42a2cc:
    // 0x42a2cc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42a2d0:
    // 0x42a2d0: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x42a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_42a2d4:
    // 0x42a2d4: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x42a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_42a2d8:
    // 0x42a2d8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_42a2dc:
    if (ctx->pc == 0x42A2DCu) {
        ctx->pc = 0x42A2DCu;
            // 0x42a2dc: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->pc = 0x42A2E0u;
        goto label_42a2e0;
    }
    ctx->pc = 0x42A2D8u;
    {
        const bool branch_taken_0x42a2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A2D8u;
            // 0x42a2dc: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a2d8) {
            ctx->pc = 0x42A320u;
            goto label_42a320;
        }
    }
    ctx->pc = 0x42A2E0u;
label_42a2e0:
    // 0x42a2e0: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a2e4:
    // 0x42a2e4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x42a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_42a2e8:
    // 0x42a2e8: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
label_42a2ec:
    if (ctx->pc == 0x42A2ECu) {
        ctx->pc = 0x42A2F0u;
        goto label_42a2f0;
    }
    ctx->pc = 0x42A2E8u;
    {
        const bool branch_taken_0x42a2e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x42a2e8) {
            ctx->pc = 0x42A358u;
            goto label_42a358;
        }
    }
    ctx->pc = 0x42A2F0u;
label_42a2f0:
    // 0x42a2f0: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a2f4:
    // 0x42a2f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a2f8:
    // 0x42a2f8: 0x0  nop
    ctx->pc = 0x42a2f8u;
    // NOP
label_42a2fc:
    // 0x42a2fc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x42a2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a300:
    // 0x42a300: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_42a304:
    if (ctx->pc == 0x42A304u) {
        ctx->pc = 0x42A308u;
        goto label_42a308;
    }
    ctx->pc = 0x42A300u;
    {
        const bool branch_taken_0x42a300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a300) {
            ctx->pc = 0x42A358u;
            goto label_42a358;
        }
    }
    ctx->pc = 0x42A308u;
label_42a308:
    // 0x42a308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a30c:
    // 0x42a30c: 0xc0bdf9c  jal         func_2F7E70
label_42a310:
    if (ctx->pc == 0x42A310u) {
        ctx->pc = 0x42A310u;
            // 0x42a310: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x42A314u;
        goto label_42a314;
    }
    ctx->pc = 0x42A30Cu;
    SET_GPR_U32(ctx, 31, 0x42A314u);
    ctx->pc = 0x42A310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A30Cu;
            // 0x42a310: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A314u; }
        if (ctx->pc != 0x42A314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A314u; }
        if (ctx->pc != 0x42A314u) { return; }
    }
    ctx->pc = 0x42A314u;
label_42a314:
    // 0x42a314: 0x10000010  b           . + 4 + (0x10 << 2)
label_42a318:
    if (ctx->pc == 0x42A318u) {
        ctx->pc = 0x42A31Cu;
        goto label_42a31c;
    }
    ctx->pc = 0x42A314u;
    {
        const bool branch_taken_0x42a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a314) {
            ctx->pc = 0x42A358u;
            goto label_42a358;
        }
    }
    ctx->pc = 0x42A31Cu;
label_42a31c:
    // 0x42a31c: 0x0  nop
    ctx->pc = 0x42a31cu;
    // NOP
label_42a320:
    // 0x42a320: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a324:
    // 0x42a324: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x42a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_42a328:
    // 0x42a328: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_42a32c:
    if (ctx->pc == 0x42A32Cu) {
        ctx->pc = 0x42A330u;
        goto label_42a330;
    }
    ctx->pc = 0x42A328u;
    {
        const bool branch_taken_0x42a328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42a328) {
            ctx->pc = 0x42A358u;
            goto label_42a358;
        }
    }
    ctx->pc = 0x42A330u;
label_42a330:
    // 0x42a330: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a334:
    // 0x42a334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a338:
    // 0x42a338: 0x0  nop
    ctx->pc = 0x42a338u;
    // NOP
label_42a33c:
    // 0x42a33c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x42a33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a340:
    // 0x42a340: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_42a344:
    if (ctx->pc == 0x42A344u) {
        ctx->pc = 0x42A348u;
        goto label_42a348;
    }
    ctx->pc = 0x42A340u;
    {
        const bool branch_taken_0x42a340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a340) {
            ctx->pc = 0x42A358u;
            goto label_42a358;
        }
    }
    ctx->pc = 0x42A348u;
label_42a348:
    // 0x42a348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42a348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a34c:
    // 0x42a34c: 0xc0bdf9c  jal         func_2F7E70
label_42a350:
    if (ctx->pc == 0x42A350u) {
        ctx->pc = 0x42A350u;
            // 0x42a350: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x42A354u;
        goto label_42a354;
    }
    ctx->pc = 0x42A34Cu;
    SET_GPR_U32(ctx, 31, 0x42A354u);
    ctx->pc = 0x42A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A34Cu;
            // 0x42a350: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A354u; }
        if (ctx->pc != 0x42A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A354u; }
        if (ctx->pc != 0x42A354u) { return; }
    }
    ctx->pc = 0x42A354u;
label_42a354:
    // 0x42a354: 0x0  nop
    ctx->pc = 0x42a354u;
    // NOP
label_42a358:
    // 0x42a358: 0x8e03077c  lw          $v1, 0x77C($s0)
    ctx->pc = 0x42a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_42a35c:
    // 0x42a35c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42a35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42a360:
    // 0x42a360: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x42a360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42a364:
    // 0x42a364: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_42a368:
    if (ctx->pc == 0x42A368u) {
        ctx->pc = 0x42A368u;
            // 0x42a368: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42A36Cu;
        goto label_42a36c;
    }
    ctx->pc = 0x42A364u;
    {
        const bool branch_taken_0x42a364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A364u;
            // 0x42a368: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a364) {
            ctx->pc = 0x42A2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a2cc;
        }
    }
    ctx->pc = 0x42A36Cu;
label_42a36c:
    // 0x42a36c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_42a370:
    if (ctx->pc == 0x42A370u) {
        ctx->pc = 0x42A374u;
        goto label_42a374;
    }
    ctx->pc = 0x42A36Cu;
    {
        const bool branch_taken_0x42a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a36c) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A374u;
label_42a374:
    // 0x42a374: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x42a374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_42a378:
    // 0x42a378: 0x320f809  jalr        $t9
label_42a37c:
    if (ctx->pc == 0x42A37Cu) {
        ctx->pc = 0x42A380u;
        goto label_42a380;
    }
    ctx->pc = 0x42A378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A380u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A380u; }
            if (ctx->pc != 0x42A380u) { return; }
        }
        }
    }
    ctx->pc = 0x42A380u;
label_42a380:
    // 0x42a380: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x42a380u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_42a384:
    // 0x42a384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42a384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a388:
    // 0x42a388: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x42a388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_42a38c:
    // 0x42a38c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42a390:
    // 0x42a390: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x42a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_42a394:
    // 0x42a394: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x42a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_42a398:
    // 0x42a398: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_42a39c:
    if (ctx->pc == 0x42A39Cu) {
        ctx->pc = 0x42A39Cu;
            // 0x42a39c: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->pc = 0x42A3A0u;
        goto label_42a3a0;
    }
    ctx->pc = 0x42A398u;
    {
        const bool branch_taken_0x42a398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A398u;
            // 0x42a39c: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a398) {
            ctx->pc = 0x42A3E0u;
            goto label_42a3e0;
        }
    }
    ctx->pc = 0x42A3A0u;
label_42a3a0:
    // 0x42a3a0: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a3a4:
    // 0x42a3a4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x42a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_42a3a8:
    // 0x42a3a8: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
label_42a3ac:
    if (ctx->pc == 0x42A3ACu) {
        ctx->pc = 0x42A3B0u;
        goto label_42a3b0;
    }
    ctx->pc = 0x42A3A8u;
    {
        const bool branch_taken_0x42a3a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x42a3a8) {
            ctx->pc = 0x42A418u;
            goto label_42a418;
        }
    }
    ctx->pc = 0x42A3B0u;
label_42a3b0:
    // 0x42a3b0: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a3b4:
    // 0x42a3b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a3b8:
    // 0x42a3b8: 0x0  nop
    ctx->pc = 0x42a3b8u;
    // NOP
label_42a3bc:
    // 0x42a3bc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x42a3bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a3c0:
    // 0x42a3c0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_42a3c4:
    if (ctx->pc == 0x42A3C4u) {
        ctx->pc = 0x42A3C8u;
        goto label_42a3c8;
    }
    ctx->pc = 0x42A3C0u;
    {
        const bool branch_taken_0x42a3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a3c0) {
            ctx->pc = 0x42A418u;
            goto label_42a418;
        }
    }
    ctx->pc = 0x42A3C8u;
label_42a3c8:
    // 0x42a3c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a3cc:
    // 0x42a3cc: 0xc0bdf9c  jal         func_2F7E70
label_42a3d0:
    if (ctx->pc == 0x42A3D0u) {
        ctx->pc = 0x42A3D0u;
            // 0x42a3d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x42A3D4u;
        goto label_42a3d4;
    }
    ctx->pc = 0x42A3CCu;
    SET_GPR_U32(ctx, 31, 0x42A3D4u);
    ctx->pc = 0x42A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A3CCu;
            // 0x42a3d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A3D4u; }
        if (ctx->pc != 0x42A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A3D4u; }
        if (ctx->pc != 0x42A3D4u) { return; }
    }
    ctx->pc = 0x42A3D4u;
label_42a3d4:
    // 0x42a3d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_42a3d8:
    if (ctx->pc == 0x42A3D8u) {
        ctx->pc = 0x42A3DCu;
        goto label_42a3dc;
    }
    ctx->pc = 0x42A3D4u;
    {
        const bool branch_taken_0x42a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a3d4) {
            ctx->pc = 0x42A418u;
            goto label_42a418;
        }
    }
    ctx->pc = 0x42A3DCu;
label_42a3dc:
    // 0x42a3dc: 0x0  nop
    ctx->pc = 0x42a3dcu;
    // NOP
label_42a3e0:
    // 0x42a3e0: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x42a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_42a3e4:
    // 0x42a3e4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x42a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_42a3e8:
    // 0x42a3e8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_42a3ec:
    if (ctx->pc == 0x42A3ECu) {
        ctx->pc = 0x42A3F0u;
        goto label_42a3f0;
    }
    ctx->pc = 0x42A3E8u;
    {
        const bool branch_taken_0x42a3e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42a3e8) {
            ctx->pc = 0x42A418u;
            goto label_42a418;
        }
    }
    ctx->pc = 0x42A3F0u;
label_42a3f0:
    // 0x42a3f0: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x42a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42a3f4:
    // 0x42a3f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42a3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a3f8:
    // 0x42a3f8: 0x0  nop
    ctx->pc = 0x42a3f8u;
    // NOP
label_42a3fc:
    // 0x42a3fc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x42a3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a400:
    // 0x42a400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_42a404:
    if (ctx->pc == 0x42A404u) {
        ctx->pc = 0x42A408u;
        goto label_42a408;
    }
    ctx->pc = 0x42A400u;
    {
        const bool branch_taken_0x42a400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42a400) {
            ctx->pc = 0x42A418u;
            goto label_42a418;
        }
    }
    ctx->pc = 0x42A408u;
label_42a408:
    // 0x42a408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a40c:
    // 0x42a40c: 0xc0bdf9c  jal         func_2F7E70
label_42a410:
    if (ctx->pc == 0x42A410u) {
        ctx->pc = 0x42A410u;
            // 0x42a410: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x42A414u;
        goto label_42a414;
    }
    ctx->pc = 0x42A40Cu;
    SET_GPR_U32(ctx, 31, 0x42A414u);
    ctx->pc = 0x42A410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A40Cu;
            // 0x42a410: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A414u; }
        if (ctx->pc != 0x42A414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A414u; }
        if (ctx->pc != 0x42A414u) { return; }
    }
    ctx->pc = 0x42A414u;
label_42a414:
    // 0x42a414: 0x0  nop
    ctx->pc = 0x42a414u;
    // NOP
label_42a418:
    // 0x42a418: 0x8e03077c  lw          $v1, 0x77C($s0)
    ctx->pc = 0x42a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_42a41c:
    // 0x42a41c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42a41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42a420:
    // 0x42a420: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x42a420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42a424:
    // 0x42a424: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_42a428:
    if (ctx->pc == 0x42A428u) {
        ctx->pc = 0x42A428u;
            // 0x42a428: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42A42Cu;
        goto label_42a42c;
    }
    ctx->pc = 0x42A424u;
    {
        const bool branch_taken_0x42a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A424u;
            // 0x42a428: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a424) {
            ctx->pc = 0x42A38Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a38c;
        }
    }
    ctx->pc = 0x42A42Cu;
label_42a42c:
    // 0x42a42c: 0x10000082  b           . + 4 + (0x82 << 2)
label_42a430:
    if (ctx->pc == 0x42A430u) {
        ctx->pc = 0x42A434u;
        goto label_42a434;
    }
    ctx->pc = 0x42A42Cu;
    {
        const bool branch_taken_0x42a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a42c) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A434u;
label_42a434:
    // 0x42a434: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42a438:
    // 0x42a438: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_42a43c:
    // 0x42a43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42a43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_42a440:
    // 0x42a440: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x42a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42a444:
    // 0x42a444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42a444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_42a448:
    // 0x42a448: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42a448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_42a44c:
    // 0x42a44c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x42a44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_42a450:
    // 0x42a450: 0x0  nop
    ctx->pc = 0x42a450u;
    // NOP
label_42a454:
    // 0x42a454: 0xae030ce4  sw          $v1, 0xCE4($s0)
    ctx->pc = 0x42a454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3300), GPR_U32(ctx, 3));
label_42a458:
    // 0x42a458: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x42a458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
label_42a45c:
    // 0x42a45c: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
label_42a460:
    if (ctx->pc == 0x42A460u) {
        ctx->pc = 0x42A464u;
        goto label_42a464;
    }
    ctx->pc = 0x42A45Cu;
    {
        const bool branch_taken_0x42a45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a45c) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A464u;
label_42a464:
    // 0x42a464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42a464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42a468:
    // 0x42a468: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a46c:
    // 0x42a46c: 0x320f809  jalr        $t9
label_42a470:
    if (ctx->pc == 0x42A470u) {
        ctx->pc = 0x42A470u;
            // 0x42a470: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A474u;
        goto label_42a474;
    }
    ctx->pc = 0x42A46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A474u);
        ctx->pc = 0x42A470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A46Cu;
            // 0x42a470: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A474u; }
            if (ctx->pc != 0x42A474u) { return; }
        }
        }
    }
    ctx->pc = 0x42A474u;
label_42a474:
    // 0x42a474: 0x10000070  b           . + 4 + (0x70 << 2)
label_42a478:
    if (ctx->pc == 0x42A478u) {
        ctx->pc = 0x42A47Cu;
        goto label_42a47c;
    }
    ctx->pc = 0x42A474u;
    {
        const bool branch_taken_0x42a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a474) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A47Cu;
label_42a47c:
    // 0x42a47c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42a480:
    // 0x42a480: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x42a480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_42a484:
    // 0x42a484: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x42a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42a488:
    // 0x42a488: 0xc040180  jal         func_100600
label_42a48c:
    if (ctx->pc == 0x42A48Cu) {
        ctx->pc = 0x42A48Cu;
            // 0x42a48c: 0xa0450082  sb          $a1, 0x82($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x42A490u;
        goto label_42a490;
    }
    ctx->pc = 0x42A488u;
    SET_GPR_U32(ctx, 31, 0x42A490u);
    ctx->pc = 0x42A48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A488u;
            // 0x42a48c: 0xa0450082  sb          $a1, 0x82($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A490u; }
        if (ctx->pc != 0x42A490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A490u; }
        if (ctx->pc != 0x42A490u) { return; }
    }
    ctx->pc = 0x42A490u;
label_42a490:
    // 0x42a490: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_42a494:
    if (ctx->pc == 0x42A494u) {
        ctx->pc = 0x42A494u;
            // 0x42a494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A498u;
        goto label_42a498;
    }
    ctx->pc = 0x42A490u;
    {
        const bool branch_taken_0x42a490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A490u;
            // 0x42a494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a490) {
            ctx->pc = 0x42A4E4u;
            goto label_42a4e4;
        }
    }
    ctx->pc = 0x42A498u;
label_42a498:
    // 0x42a498: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x42a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_42a49c:
    // 0x42a49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a4a0:
    // 0x42a4a0: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x42a4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_42a4a4:
    // 0x42a4a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x42a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42a4a8:
    // 0x42a4a8: 0xc10ca68  jal         func_4329A0
label_42a4ac:
    if (ctx->pc == 0x42A4ACu) {
        ctx->pc = 0x42A4ACu;
            // 0x42a4ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A4B0u;
        goto label_42a4b0;
    }
    ctx->pc = 0x42A4A8u;
    SET_GPR_U32(ctx, 31, 0x42A4B0u);
    ctx->pc = 0x42A4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A4A8u;
            // 0x42a4ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A4B0u; }
        if (ctx->pc != 0x42A4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A4B0u; }
        if (ctx->pc != 0x42A4B0u) { return; }
    }
    ctx->pc = 0x42A4B0u;
label_42a4b0:
    // 0x42a4b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42a4b4:
    // 0x42a4b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42a4b8:
    // 0x42a4b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x42a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_42a4bc:
    // 0x42a4bc: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x42a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
label_42a4c0:
    // 0x42a4c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42a4c4:
    // 0x42a4c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42a4c8:
    // 0x42a4c8: 0x26030ca8  addiu       $v1, $s0, 0xCA8
    ctx->pc = 0x42a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3240));
label_42a4cc:
    // 0x42a4cc: 0xa2200054  sb          $zero, 0x54($s1)
    ctx->pc = 0x42a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 0));
label_42a4d0:
    // 0x42a4d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42a4d4:
    // 0x42a4d4: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x42a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
label_42a4d8:
    // 0x42a4d8: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x42a4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
label_42a4dc:
    // 0x42a4dc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x42a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_42a4e0:
    // 0x42a4e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x42a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_42a4e4:
    // 0x42a4e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42a4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42a4e8:
    // 0x42a4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a4ec:
    // 0x42a4ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a4f0:
    // 0x42a4f0: 0x320f809  jalr        $t9
label_42a4f4:
    if (ctx->pc == 0x42A4F4u) {
        ctx->pc = 0x42A4F4u;
            // 0x42a4f4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x42A4F8u;
        goto label_42a4f8;
    }
    ctx->pc = 0x42A4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A4F8u);
        ctx->pc = 0x42A4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A4F0u;
            // 0x42a4f4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A4F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A4F8u; }
            if (ctx->pc != 0x42A4F8u) { return; }
        }
        }
    }
    ctx->pc = 0x42A4F8u;
label_42a4f8:
    // 0x42a4f8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_42a4fc:
    if (ctx->pc == 0x42A4FCu) {
        ctx->pc = 0x42A500u;
        goto label_42a500;
    }
    ctx->pc = 0x42A4F8u;
    {
        const bool branch_taken_0x42a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a4f8) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A500u;
label_42a500:
    // 0x42a500: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_42a504:
    if (ctx->pc == 0x42A504u) {
        ctx->pc = 0x42A508u;
        goto label_42a508;
    }
    ctx->pc = 0x42A500u;
    {
        const bool branch_taken_0x42a500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a500) {
            ctx->pc = 0x42A5B4u;
            goto label_42a5b4;
        }
    }
    ctx->pc = 0x42A508u;
label_42a508:
    // 0x42a508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42a50c:
    // 0x42a50c: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x42a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_42a510:
    // 0x42a510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42a510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42a514:
    // 0x42a514: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x42a514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_42a518:
    // 0x42a518: 0x320f809  jalr        $t9
label_42a51c:
    if (ctx->pc == 0x42A51Cu) {
        ctx->pc = 0x42A51Cu;
            // 0x42a51c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x42A520u;
        goto label_42a520;
    }
    ctx->pc = 0x42A518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A520u);
        ctx->pc = 0x42A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A518u;
            // 0x42a51c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A520u; }
            if (ctx->pc != 0x42A520u) { return; }
        }
        }
    }
    ctx->pc = 0x42A520u;
label_42a520:
    // 0x42a520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42a524:
    // 0x42a524: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x42a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_42a528:
    // 0x42a528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42a528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42a52c:
    // 0x42a52c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x42a52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_42a530:
    // 0x42a530: 0x320f809  jalr        $t9
label_42a534:
    if (ctx->pc == 0x42A534u) {
        ctx->pc = 0x42A538u;
        goto label_42a538;
    }
    ctx->pc = 0x42A530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A538u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A538u; }
            if (ctx->pc != 0x42A538u) { return; }
        }
        }
    }
    ctx->pc = 0x42A538u;
label_42a538:
    // 0x42a538: 0xc040180  jal         func_100600
label_42a53c:
    if (ctx->pc == 0x42A53Cu) {
        ctx->pc = 0x42A53Cu;
            // 0x42a53c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x42A540u;
        goto label_42a540;
    }
    ctx->pc = 0x42A538u;
    SET_GPR_U32(ctx, 31, 0x42A540u);
    ctx->pc = 0x42A53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A538u;
            // 0x42a53c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A540u; }
        if (ctx->pc != 0x42A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A540u; }
        if (ctx->pc != 0x42A540u) { return; }
    }
    ctx->pc = 0x42A540u;
label_42a540:
    // 0x42a540: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_42a544:
    if (ctx->pc == 0x42A544u) {
        ctx->pc = 0x42A544u;
            // 0x42a544: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A548u;
        goto label_42a548;
    }
    ctx->pc = 0x42A540u;
    {
        const bool branch_taken_0x42a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A540u;
            // 0x42a544: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a540) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A548u;
label_42a548:
    // 0x42a548: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x42a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_42a54c:
    // 0x42a54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a550:
    // 0x42a550: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x42a550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_42a554:
    // 0x42a554: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x42a554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42a558:
    // 0x42a558: 0xc10ca68  jal         func_4329A0
label_42a55c:
    if (ctx->pc == 0x42A55Cu) {
        ctx->pc = 0x42A55Cu;
            // 0x42a55c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x42A560u;
        goto label_42a560;
    }
    ctx->pc = 0x42A558u;
    SET_GPR_U32(ctx, 31, 0x42A560u);
    ctx->pc = 0x42A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A558u;
            // 0x42a55c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A560u; }
        if (ctx->pc != 0x42A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A560u; }
        if (ctx->pc != 0x42A560u) { return; }
    }
    ctx->pc = 0x42A560u;
label_42a560:
    // 0x42a560: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x42a560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_42a564:
    // 0x42a564: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42a568:
    // 0x42a568: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x42a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_42a56c:
    // 0x42a56c: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x42a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_42a570:
    // 0x42a570: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x42a570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_42a574:
    // 0x42a574: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x42a574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_42a578:
    // 0x42a578: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42a578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42a57c:
    // 0x42a57c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x42a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_42a580:
    // 0x42a580: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x42a580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_42a584:
    // 0x42a584: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x42a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42a588:
    // 0x42a588: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x42a588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_42a58c:
    // 0x42a58c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a590:
    // 0x42a590: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x42a590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_42a594:
    // 0x42a594: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x42a594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_42a598:
    // 0x42a598: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42a59c:
    // 0x42a59c: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x42a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_42a5a0:
    // 0x42a5a0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_42a5a4:
    // 0x42a5a4: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x42a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_42a5a8:
    // 0x42a5a8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x42a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_42a5ac:
    // 0x42a5ac: 0x10000022  b           . + 4 + (0x22 << 2)
label_42a5b0:
    if (ctx->pc == 0x42A5B0u) {
        ctx->pc = 0x42A5B0u;
            // 0x42a5b0: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x42A5B4u;
        goto label_42a5b4;
    }
    ctx->pc = 0x42A5ACu;
    {
        const bool branch_taken_0x42a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A5ACu;
            // 0x42a5b0: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5ac) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A5B4u;
label_42a5b4:
    // 0x42a5b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42a5b8:
    // 0x42a5b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x42a5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42a5bc:
    // 0x42a5bc: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x42a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_42a5c0:
    // 0x42a5c0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x42a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42a5c4:
    // 0x42a5c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a5c8:
    // 0x42a5c8: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x42a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_42a5cc:
    // 0x42a5cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x42a5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_42a5d0:
    // 0x42a5d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_42a5d4:
    if (ctx->pc == 0x42A5D4u) {
        ctx->pc = 0x42A5D4u;
            // 0x42a5d4: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x42A5D8u;
        goto label_42a5d8;
    }
    ctx->pc = 0x42A5D0u;
    {
        const bool branch_taken_0x42a5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A5D0u;
            // 0x42a5d4: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5d0) {
            ctx->pc = 0x42A5E8u;
            goto label_42a5e8;
        }
    }
    ctx->pc = 0x42A5D8u;
label_42a5d8:
    // 0x42a5d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x42a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42a5dc:
    // 0x42a5dc: 0x8c63fff8  lw          $v1, -0x8($v1)
    ctx->pc = 0x42a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_42a5e0:
    // 0x42a5e0: 0x601827  not         $v1, $v1
    ctx->pc = 0x42a5e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_42a5e4:
    // 0x42a5e4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x42a5e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_42a5e8:
    // 0x42a5e8: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x42a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_42a5ec:
    // 0x42a5ec: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x42a5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_42a5f0:
    // 0x42a5f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x42a5f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_42a5f4:
    // 0x42a5f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42a5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_42a5f8:
    // 0x42a5f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_42a5fc:
    if (ctx->pc == 0x42A5FCu) {
        ctx->pc = 0x42A5FCu;
            // 0x42a5fc: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x42A600u;
        goto label_42a600;
    }
    ctx->pc = 0x42A5F8u;
    {
        const bool branch_taken_0x42a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A5F8u;
            // 0x42a5fc: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5f8) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A600u;
label_42a600:
    // 0x42a600: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x42a600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_42a604:
    // 0x42a604: 0x320f809  jalr        $t9
label_42a608:
    if (ctx->pc == 0x42A608u) {
        ctx->pc = 0x42A60Cu;
        goto label_42a60c;
    }
    ctx->pc = 0x42A604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42A60Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42A60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42A60Cu; }
            if (ctx->pc != 0x42A60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42A60Cu;
label_42a60c:
    // 0x42a60c: 0x1000000a  b           . + 4 + (0xA << 2)
label_42a610:
    if (ctx->pc == 0x42A610u) {
        ctx->pc = 0x42A614u;
        goto label_42a614;
    }
    ctx->pc = 0x42A60Cu;
    {
        const bool branch_taken_0x42a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a60c) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A614u;
label_42a614:
    // 0x42a614: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42a618:
    // 0x42a618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42a618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a61c:
    // 0x42a61c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x42a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42a620:
    // 0x42a620: 0xc057b7c  jal         func_15EDF0
label_42a624:
    if (ctx->pc == 0x42A624u) {
        ctx->pc = 0x42A624u;
            // 0x42a624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42A628u;
        goto label_42a628;
    }
    ctx->pc = 0x42A620u;
    SET_GPR_U32(ctx, 31, 0x42A628u);
    ctx->pc = 0x42A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A620u;
            // 0x42a624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A628u; }
        if (ctx->pc != 0x42A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A628u; }
        if (ctx->pc != 0x42A628u) { return; }
    }
    ctx->pc = 0x42A628u;
label_42a628:
    // 0x42a628: 0x10000003  b           . + 4 + (0x3 << 2)
label_42a62c:
    if (ctx->pc == 0x42A62Cu) {
        ctx->pc = 0x42A630u;
        goto label_42a630;
    }
    ctx->pc = 0x42A628u;
    {
        const bool branch_taken_0x42a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a628) {
            ctx->pc = 0x42A638u;
            goto label_42a638;
        }
    }
    ctx->pc = 0x42A630u;
label_42a630:
    // 0x42a630: 0xc0cb834  jal         func_32E0D0
label_42a634:
    if (ctx->pc == 0x42A634u) {
        ctx->pc = 0x42A638u;
        goto label_42a638;
    }
    ctx->pc = 0x42A630u;
    SET_GPR_U32(ctx, 31, 0x42A638u);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A638u; }
        if (ctx->pc != 0x42A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A638u; }
        if (ctx->pc != 0x42A638u) { return; }
    }
    ctx->pc = 0x42A638u;
label_42a638:
    // 0x42a638: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42a638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42a63c:
    // 0x42a63c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42a63cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42a640:
    // 0x42a640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42a640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42a644:
    // 0x42a644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42a644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42a648:
    // 0x42a648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42a648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42a64c:
    // 0x42a64c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42a64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42a650:
    // 0x42a650: 0x3e00008  jr          $ra
label_42a654:
    if (ctx->pc == 0x42A654u) {
        ctx->pc = 0x42A654u;
            // 0x42a654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x42A658u;
        goto label_42a658;
    }
    ctx->pc = 0x42A650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A650u;
            // 0x42a654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42A658u;
label_42a658:
    // 0x42a658: 0x0  nop
    ctx->pc = 0x42a658u;
    // NOP
label_42a65c:
    // 0x42a65c: 0x0  nop
    ctx->pc = 0x42a65cu;
    // NOP
label_42a660:
    // 0x42a660: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x42a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_42a664:
    // 0x42a664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42a664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a668:
    // 0x42a668: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x42a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_42a66c:
    // 0x42a66c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x42a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42a670:
    // 0x42a670: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42a674:
    // 0x42a674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42a678:
    // 0x42a678: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x42a678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42a67c:
    // 0x42a67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42a67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42a680:
    // 0x42a680: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42a684:
    // 0x42a684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42a688:
    // 0x42a688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42a68c:
    // 0x42a68c: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x42a68cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
label_42a690:
    // 0x42a690: 0x8ca30ce8  lw          $v1, 0xCE8($a1)
    ctx->pc = 0x42a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3304)));
label_42a694:
    // 0x42a694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x42a694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42a698:
    // 0x42a698: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x42a698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_42a69c:
    // 0x42a69c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x42a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_42a6a0:
    // 0x42a6a0: 0x8e84077c  lw          $a0, 0x77C($s4)
    ctx->pc = 0x42a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_42a6a4:
    // 0x42a6a4: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x42a6a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42a6a8:
    // 0x42a6a8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_42a6ac:
    if (ctx->pc == 0x42A6ACu) {
        ctx->pc = 0x42A6ACu;
            // 0x42a6ac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x42A6B0u;
        goto label_42a6b0;
    }
    ctx->pc = 0x42A6A8u;
    {
        const bool branch_taken_0x42a6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A6A8u;
            // 0x42a6ac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6a8) {
            ctx->pc = 0x42A68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a68c;
        }
    }
    ctx->pc = 0x42A6B0u;
label_42a6b0:
    // 0x42a6b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x42a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42a6b4:
    // 0x42a6b4: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
label_42a6b8:
    if (ctx->pc == 0x42A6B8u) {
        ctx->pc = 0x42A6B8u;
            // 0x42a6b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42A6BCu;
        goto label_42a6bc;
    }
    ctx->pc = 0x42A6B4u;
    {
        const bool branch_taken_0x42a6b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x42A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A6B4u;
            // 0x42a6b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6b4) {
            ctx->pc = 0x42A758u;
            goto label_42a758;
        }
    }
    ctx->pc = 0x42A6BCu;
label_42a6bc:
    // 0x42a6bc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x42a6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42a6c0:
    // 0x42a6c0: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x42a6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42a6c4:
    // 0x42a6c4: 0x264082a  slt         $at, $s3, $a0
    ctx->pc = 0x42a6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42a6c8:
    // 0x42a6c8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_42a6cc:
    if (ctx->pc == 0x42A6CCu) {
        ctx->pc = 0x42A6D0u;
        goto label_42a6d0;
    }
    ctx->pc = 0x42A6C8u;
    {
        const bool branch_taken_0x42a6c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a6c8) {
            ctx->pc = 0x42A740u;
            goto label_42a740;
        }
    }
    ctx->pc = 0x42A6D0u;
label_42a6d0:
    // 0x42a6d0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x42a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_42a6d4:
    // 0x42a6d4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x42a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_42a6d8:
    // 0x42a6d8: 0x24710060  addiu       $s1, $v1, 0x60
    ctx->pc = 0x42a6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_42a6dc:
    // 0x42a6dc: 0x0  nop
    ctx->pc = 0x42a6dcu;
    // NOP
label_42a6e0:
    // 0x42a6e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x42a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_42a6e4:
    // 0x42a6e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x42a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42a6e8:
    // 0x42a6e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x42a6e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_42a6ec:
    // 0x42a6ec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_42a6f0:
    if (ctx->pc == 0x42A6F0u) {
        ctx->pc = 0x42A6F4u;
        goto label_42a6f4;
    }
    ctx->pc = 0x42A6ECu;
    {
        const bool branch_taken_0x42a6ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a6ec) {
            ctx->pc = 0x42A728u;
            goto label_42a728;
        }
    }
    ctx->pc = 0x42A6F4u;
label_42a6f4:
    // 0x42a6f4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x42a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_42a6f8:
    // 0x42a6f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42a6fc:
    // 0x42a6fc: 0xc04a508  jal         func_129420
label_42a700:
    if (ctx->pc == 0x42A700u) {
        ctx->pc = 0x42A700u;
            // 0x42a700: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x42A704u;
        goto label_42a704;
    }
    ctx->pc = 0x42A6FCu;
    SET_GPR_U32(ctx, 31, 0x42A704u);
    ctx->pc = 0x42A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A6FCu;
            // 0x42a700: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A704u; }
        if (ctx->pc != 0x42A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A704u; }
        if (ctx->pc != 0x42A704u) { return; }
    }
    ctx->pc = 0x42A704u;
label_42a704:
    // 0x42a704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42a708:
    // 0x42a708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42a708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a70c:
    // 0x42a70c: 0xc04a508  jal         func_129420
label_42a710:
    if (ctx->pc == 0x42A710u) {
        ctx->pc = 0x42A710u;
            // 0x42a710: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x42A714u;
        goto label_42a714;
    }
    ctx->pc = 0x42A70Cu;
    SET_GPR_U32(ctx, 31, 0x42A714u);
    ctx->pc = 0x42A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A70Cu;
            // 0x42a710: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A714u; }
        if (ctx->pc != 0x42A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A714u; }
        if (ctx->pc != 0x42A714u) { return; }
    }
    ctx->pc = 0x42A714u;
label_42a714:
    // 0x42a714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a718:
    // 0x42a718: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x42a718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_42a71c:
    // 0x42a71c: 0xc04a508  jal         func_129420
label_42a720:
    if (ctx->pc == 0x42A720u) {
        ctx->pc = 0x42A720u;
            // 0x42a720: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x42A724u;
        goto label_42a724;
    }
    ctx->pc = 0x42A71Cu;
    SET_GPR_U32(ctx, 31, 0x42A724u);
    ctx->pc = 0x42A720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A71Cu;
            // 0x42a720: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A724u; }
        if (ctx->pc != 0x42A724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A724u; }
        if (ctx->pc != 0x42A724u) { return; }
    }
    ctx->pc = 0x42A724u;
label_42a724:
    // 0x42a724: 0x0  nop
    ctx->pc = 0x42a724u;
    // NOP
label_42a728:
    // 0x42a728: 0x8e84077c  lw          $a0, 0x77C($s4)
    ctx->pc = 0x42a728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_42a72c:
    // 0x42a72c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42a72cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42a730:
    // 0x42a730: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x42a730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42a734:
    // 0x42a734: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_42a738:
    if (ctx->pc == 0x42A738u) {
        ctx->pc = 0x42A738u;
            // 0x42a738: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x42A73Cu;
        goto label_42a73c;
    }
    ctx->pc = 0x42A734u;
    {
        const bool branch_taken_0x42a734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A734u;
            // 0x42a738: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a734) {
            ctx->pc = 0x42A6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a6e0;
        }
    }
    ctx->pc = 0x42A73Cu;
label_42a73c:
    // 0x42a73c: 0x0  nop
    ctx->pc = 0x42a73cu;
    // NOP
label_42a740:
    // 0x42a740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42a740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42a744:
    // 0x42a744: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x42a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42a748:
    // 0x42a748: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x42a748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_42a74c:
    // 0x42a74c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_42a750:
    if (ctx->pc == 0x42A750u) {
        ctx->pc = 0x42A750u;
            // 0x42a750: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x42A754u;
        goto label_42a754;
    }
    ctx->pc = 0x42A74Cu;
    {
        const bool branch_taken_0x42a74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A74Cu;
            // 0x42a750: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a74c) {
            ctx->pc = 0x42A6C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a6c0;
        }
    }
    ctx->pc = 0x42A754u;
label_42a754:
    // 0x42a754: 0x0  nop
    ctx->pc = 0x42a754u;
    // NOP
label_42a758:
    // 0x42a758: 0x87a40060  lh          $a0, 0x60($sp)
    ctx->pc = 0x42a758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
label_42a75c:
    // 0x42a75c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42a760:
    // 0x42a760: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x42a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_42a764:
    // 0x42a764: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x42a764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_42a768:
    // 0x42a768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_42a76c:
    // 0x42a76c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a770:
    // 0x42a770: 0xa0600e3f  sb          $zero, 0xE3F($v1)
    ctx->pc = 0x42a770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3647), (uint8_t)GPR_U32(ctx, 0));
label_42a774:
    // 0x42a774: 0x8e83077c  lw          $v1, 0x77C($s4)
    ctx->pc = 0x42a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_42a778:
    // 0x42a778: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x42a778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_42a77c:
    // 0x42a77c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_42a780:
    if (ctx->pc == 0x42A780u) {
        ctx->pc = 0x42A784u;
        goto label_42a784;
    }
    ctx->pc = 0x42A77Cu;
    {
        const bool branch_taken_0x42a77c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a77c) {
            ctx->pc = 0x42A7F0u;
            goto label_42a7f0;
        }
    }
    ctx->pc = 0x42A784u;
label_42a784:
    // 0x42a784: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x42a784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_42a788:
    // 0x42a788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x42a788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a78c:
    // 0x42a78c: 0x27a90068  addiu       $t1, $sp, 0x68
    ctx->pc = 0x42a78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_42a790:
    // 0x42a790: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x42a790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42a794:
    // 0x42a794: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x42a794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_42a798:
    // 0x42a798: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x42a798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_42a79c:
    // 0x42a79c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x42a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_42a7a0:
    // 0x42a7a0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x42a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_42a7a4:
    // 0x42a7a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x42a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42a7a8:
    // 0x42a7a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x42a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_42a7ac:
    // 0x42a7ac: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_42a7b0:
    if (ctx->pc == 0x42A7B0u) {
        ctx->pc = 0x42A7B0u;
            // 0x42a7b0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x42A7B4u;
        goto label_42a7b4;
    }
    ctx->pc = 0x42A7ACu;
    {
        const bool branch_taken_0x42a7ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x42A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A7ACu;
            // 0x42a7b0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7ac) {
            ctx->pc = 0x42A7D0u;
            goto label_42a7d0;
        }
    }
    ctx->pc = 0x42A7B4u;
label_42a7b4:
    // 0x42a7b4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x42a7b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_42a7b8:
    // 0x42a7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42a7bc:
    // 0x42a7bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x42a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_42a7c0:
    // 0x42a7c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x42a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42a7c4:
    // 0x42a7c4: 0x80630e3f  lb          $v1, 0xE3F($v1)
    ctx->pc = 0x42a7c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3647)));
label_42a7c8:
    // 0x42a7c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_42a7cc:
    if (ctx->pc == 0x42A7CCu) {
        ctx->pc = 0x42A7CCu;
            // 0x42a7cc: 0xa0a30e3f  sb          $v1, 0xE3F($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3647), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42A7D0u;
        goto label_42a7d0;
    }
    ctx->pc = 0x42A7C8u;
    {
        const bool branch_taken_0x42a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A7C8u;
            // 0x42a7cc: 0xa0a30e3f  sb          $v1, 0xE3F($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3647), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7c8) {
            ctx->pc = 0x42A7D8u;
            goto label_42a7d8;
        }
    }
    ctx->pc = 0x42A7D0u;
label_42a7d0:
    // 0x42a7d0: 0xa0a70e3f  sb          $a3, 0xE3F($a1)
    ctx->pc = 0x42a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3647), (uint8_t)GPR_U32(ctx, 7));
label_42a7d4:
    // 0x42a7d4: 0x0  nop
    ctx->pc = 0x42a7d4u;
    // NOP
label_42a7d8:
    // 0x42a7d8: 0x8e83077c  lw          $v1, 0x77C($s4)
    ctx->pc = 0x42a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_42a7dc:
    // 0x42a7dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x42a7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42a7e0:
    // 0x42a7e0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x42a7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_42a7e4:
    // 0x42a7e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x42a7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_42a7e8:
    // 0x42a7e8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_42a7ec:
    if (ctx->pc == 0x42A7ECu) {
        ctx->pc = 0x42A7ECu;
            // 0x42a7ec: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->pc = 0x42A7F0u;
        goto label_42a7f0;
    }
    ctx->pc = 0x42A7E8u;
    {
        const bool branch_taken_0x42a7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A7E8u;
            // 0x42a7ec: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7e8) {
            ctx->pc = 0x42A798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42a798;
        }
    }
    ctx->pc = 0x42A7F0u;
label_42a7f0:
    // 0x42a7f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42a7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42a7f4:
    // 0x42a7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42a7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42a7f8:
    // 0x42a7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42a7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42a7fc:
    // 0x42a7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42a7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42a800:
    // 0x42a800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42a800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42a804:
    // 0x42a804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42a804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42a808:
    // 0x42a808: 0x3e00008  jr          $ra
label_42a80c:
    if (ctx->pc == 0x42A80Cu) {
        ctx->pc = 0x42A80Cu;
            // 0x42a80c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x42A810u;
        goto label_fallthrough_0x42a808;
    }
    ctx->pc = 0x42A808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A808u;
            // 0x42a80c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x42a808:
    ctx->pc = 0x42A810u;
}
