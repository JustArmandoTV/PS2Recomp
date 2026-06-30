#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0CC0
// Address: 0x3a0cc0 - 0x3a2040
void sub_003A0CC0_0x3a0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0CC0_0x3a0cc0");
#endif

    switch (ctx->pc) {
        case 0x3a0cc0u: goto label_3a0cc0;
        case 0x3a0cc4u: goto label_3a0cc4;
        case 0x3a0cc8u: goto label_3a0cc8;
        case 0x3a0cccu: goto label_3a0ccc;
        case 0x3a0cd0u: goto label_3a0cd0;
        case 0x3a0cd4u: goto label_3a0cd4;
        case 0x3a0cd8u: goto label_3a0cd8;
        case 0x3a0cdcu: goto label_3a0cdc;
        case 0x3a0ce0u: goto label_3a0ce0;
        case 0x3a0ce4u: goto label_3a0ce4;
        case 0x3a0ce8u: goto label_3a0ce8;
        case 0x3a0cecu: goto label_3a0cec;
        case 0x3a0cf0u: goto label_3a0cf0;
        case 0x3a0cf4u: goto label_3a0cf4;
        case 0x3a0cf8u: goto label_3a0cf8;
        case 0x3a0cfcu: goto label_3a0cfc;
        case 0x3a0d00u: goto label_3a0d00;
        case 0x3a0d04u: goto label_3a0d04;
        case 0x3a0d08u: goto label_3a0d08;
        case 0x3a0d0cu: goto label_3a0d0c;
        case 0x3a0d10u: goto label_3a0d10;
        case 0x3a0d14u: goto label_3a0d14;
        case 0x3a0d18u: goto label_3a0d18;
        case 0x3a0d1cu: goto label_3a0d1c;
        case 0x3a0d20u: goto label_3a0d20;
        case 0x3a0d24u: goto label_3a0d24;
        case 0x3a0d28u: goto label_3a0d28;
        case 0x3a0d2cu: goto label_3a0d2c;
        case 0x3a0d30u: goto label_3a0d30;
        case 0x3a0d34u: goto label_3a0d34;
        case 0x3a0d38u: goto label_3a0d38;
        case 0x3a0d3cu: goto label_3a0d3c;
        case 0x3a0d40u: goto label_3a0d40;
        case 0x3a0d44u: goto label_3a0d44;
        case 0x3a0d48u: goto label_3a0d48;
        case 0x3a0d4cu: goto label_3a0d4c;
        case 0x3a0d50u: goto label_3a0d50;
        case 0x3a0d54u: goto label_3a0d54;
        case 0x3a0d58u: goto label_3a0d58;
        case 0x3a0d5cu: goto label_3a0d5c;
        case 0x3a0d60u: goto label_3a0d60;
        case 0x3a0d64u: goto label_3a0d64;
        case 0x3a0d68u: goto label_3a0d68;
        case 0x3a0d6cu: goto label_3a0d6c;
        case 0x3a0d70u: goto label_3a0d70;
        case 0x3a0d74u: goto label_3a0d74;
        case 0x3a0d78u: goto label_3a0d78;
        case 0x3a0d7cu: goto label_3a0d7c;
        case 0x3a0d80u: goto label_3a0d80;
        case 0x3a0d84u: goto label_3a0d84;
        case 0x3a0d88u: goto label_3a0d88;
        case 0x3a0d8cu: goto label_3a0d8c;
        case 0x3a0d90u: goto label_3a0d90;
        case 0x3a0d94u: goto label_3a0d94;
        case 0x3a0d98u: goto label_3a0d98;
        case 0x3a0d9cu: goto label_3a0d9c;
        case 0x3a0da0u: goto label_3a0da0;
        case 0x3a0da4u: goto label_3a0da4;
        case 0x3a0da8u: goto label_3a0da8;
        case 0x3a0dacu: goto label_3a0dac;
        case 0x3a0db0u: goto label_3a0db0;
        case 0x3a0db4u: goto label_3a0db4;
        case 0x3a0db8u: goto label_3a0db8;
        case 0x3a0dbcu: goto label_3a0dbc;
        case 0x3a0dc0u: goto label_3a0dc0;
        case 0x3a0dc4u: goto label_3a0dc4;
        case 0x3a0dc8u: goto label_3a0dc8;
        case 0x3a0dccu: goto label_3a0dcc;
        case 0x3a0dd0u: goto label_3a0dd0;
        case 0x3a0dd4u: goto label_3a0dd4;
        case 0x3a0dd8u: goto label_3a0dd8;
        case 0x3a0ddcu: goto label_3a0ddc;
        case 0x3a0de0u: goto label_3a0de0;
        case 0x3a0de4u: goto label_3a0de4;
        case 0x3a0de8u: goto label_3a0de8;
        case 0x3a0decu: goto label_3a0dec;
        case 0x3a0df0u: goto label_3a0df0;
        case 0x3a0df4u: goto label_3a0df4;
        case 0x3a0df8u: goto label_3a0df8;
        case 0x3a0dfcu: goto label_3a0dfc;
        case 0x3a0e00u: goto label_3a0e00;
        case 0x3a0e04u: goto label_3a0e04;
        case 0x3a0e08u: goto label_3a0e08;
        case 0x3a0e0cu: goto label_3a0e0c;
        case 0x3a0e10u: goto label_3a0e10;
        case 0x3a0e14u: goto label_3a0e14;
        case 0x3a0e18u: goto label_3a0e18;
        case 0x3a0e1cu: goto label_3a0e1c;
        case 0x3a0e20u: goto label_3a0e20;
        case 0x3a0e24u: goto label_3a0e24;
        case 0x3a0e28u: goto label_3a0e28;
        case 0x3a0e2cu: goto label_3a0e2c;
        case 0x3a0e30u: goto label_3a0e30;
        case 0x3a0e34u: goto label_3a0e34;
        case 0x3a0e38u: goto label_3a0e38;
        case 0x3a0e3cu: goto label_3a0e3c;
        case 0x3a0e40u: goto label_3a0e40;
        case 0x3a0e44u: goto label_3a0e44;
        case 0x3a0e48u: goto label_3a0e48;
        case 0x3a0e4cu: goto label_3a0e4c;
        case 0x3a0e50u: goto label_3a0e50;
        case 0x3a0e54u: goto label_3a0e54;
        case 0x3a0e58u: goto label_3a0e58;
        case 0x3a0e5cu: goto label_3a0e5c;
        case 0x3a0e60u: goto label_3a0e60;
        case 0x3a0e64u: goto label_3a0e64;
        case 0x3a0e68u: goto label_3a0e68;
        case 0x3a0e6cu: goto label_3a0e6c;
        case 0x3a0e70u: goto label_3a0e70;
        case 0x3a0e74u: goto label_3a0e74;
        case 0x3a0e78u: goto label_3a0e78;
        case 0x3a0e7cu: goto label_3a0e7c;
        case 0x3a0e80u: goto label_3a0e80;
        case 0x3a0e84u: goto label_3a0e84;
        case 0x3a0e88u: goto label_3a0e88;
        case 0x3a0e8cu: goto label_3a0e8c;
        case 0x3a0e90u: goto label_3a0e90;
        case 0x3a0e94u: goto label_3a0e94;
        case 0x3a0e98u: goto label_3a0e98;
        case 0x3a0e9cu: goto label_3a0e9c;
        case 0x3a0ea0u: goto label_3a0ea0;
        case 0x3a0ea4u: goto label_3a0ea4;
        case 0x3a0ea8u: goto label_3a0ea8;
        case 0x3a0eacu: goto label_3a0eac;
        case 0x3a0eb0u: goto label_3a0eb0;
        case 0x3a0eb4u: goto label_3a0eb4;
        case 0x3a0eb8u: goto label_3a0eb8;
        case 0x3a0ebcu: goto label_3a0ebc;
        case 0x3a0ec0u: goto label_3a0ec0;
        case 0x3a0ec4u: goto label_3a0ec4;
        case 0x3a0ec8u: goto label_3a0ec8;
        case 0x3a0eccu: goto label_3a0ecc;
        case 0x3a0ed0u: goto label_3a0ed0;
        case 0x3a0ed4u: goto label_3a0ed4;
        case 0x3a0ed8u: goto label_3a0ed8;
        case 0x3a0edcu: goto label_3a0edc;
        case 0x3a0ee0u: goto label_3a0ee0;
        case 0x3a0ee4u: goto label_3a0ee4;
        case 0x3a0ee8u: goto label_3a0ee8;
        case 0x3a0eecu: goto label_3a0eec;
        case 0x3a0ef0u: goto label_3a0ef0;
        case 0x3a0ef4u: goto label_3a0ef4;
        case 0x3a0ef8u: goto label_3a0ef8;
        case 0x3a0efcu: goto label_3a0efc;
        case 0x3a0f00u: goto label_3a0f00;
        case 0x3a0f04u: goto label_3a0f04;
        case 0x3a0f08u: goto label_3a0f08;
        case 0x3a0f0cu: goto label_3a0f0c;
        case 0x3a0f10u: goto label_3a0f10;
        case 0x3a0f14u: goto label_3a0f14;
        case 0x3a0f18u: goto label_3a0f18;
        case 0x3a0f1cu: goto label_3a0f1c;
        case 0x3a0f20u: goto label_3a0f20;
        case 0x3a0f24u: goto label_3a0f24;
        case 0x3a0f28u: goto label_3a0f28;
        case 0x3a0f2cu: goto label_3a0f2c;
        case 0x3a0f30u: goto label_3a0f30;
        case 0x3a0f34u: goto label_3a0f34;
        case 0x3a0f38u: goto label_3a0f38;
        case 0x3a0f3cu: goto label_3a0f3c;
        case 0x3a0f40u: goto label_3a0f40;
        case 0x3a0f44u: goto label_3a0f44;
        case 0x3a0f48u: goto label_3a0f48;
        case 0x3a0f4cu: goto label_3a0f4c;
        case 0x3a0f50u: goto label_3a0f50;
        case 0x3a0f54u: goto label_3a0f54;
        case 0x3a0f58u: goto label_3a0f58;
        case 0x3a0f5cu: goto label_3a0f5c;
        case 0x3a0f60u: goto label_3a0f60;
        case 0x3a0f64u: goto label_3a0f64;
        case 0x3a0f68u: goto label_3a0f68;
        case 0x3a0f6cu: goto label_3a0f6c;
        case 0x3a0f70u: goto label_3a0f70;
        case 0x3a0f74u: goto label_3a0f74;
        case 0x3a0f78u: goto label_3a0f78;
        case 0x3a0f7cu: goto label_3a0f7c;
        case 0x3a0f80u: goto label_3a0f80;
        case 0x3a0f84u: goto label_3a0f84;
        case 0x3a0f88u: goto label_3a0f88;
        case 0x3a0f8cu: goto label_3a0f8c;
        case 0x3a0f90u: goto label_3a0f90;
        case 0x3a0f94u: goto label_3a0f94;
        case 0x3a0f98u: goto label_3a0f98;
        case 0x3a0f9cu: goto label_3a0f9c;
        case 0x3a0fa0u: goto label_3a0fa0;
        case 0x3a0fa4u: goto label_3a0fa4;
        case 0x3a0fa8u: goto label_3a0fa8;
        case 0x3a0facu: goto label_3a0fac;
        case 0x3a0fb0u: goto label_3a0fb0;
        case 0x3a0fb4u: goto label_3a0fb4;
        case 0x3a0fb8u: goto label_3a0fb8;
        case 0x3a0fbcu: goto label_3a0fbc;
        case 0x3a0fc0u: goto label_3a0fc0;
        case 0x3a0fc4u: goto label_3a0fc4;
        case 0x3a0fc8u: goto label_3a0fc8;
        case 0x3a0fccu: goto label_3a0fcc;
        case 0x3a0fd0u: goto label_3a0fd0;
        case 0x3a0fd4u: goto label_3a0fd4;
        case 0x3a0fd8u: goto label_3a0fd8;
        case 0x3a0fdcu: goto label_3a0fdc;
        case 0x3a0fe0u: goto label_3a0fe0;
        case 0x3a0fe4u: goto label_3a0fe4;
        case 0x3a0fe8u: goto label_3a0fe8;
        case 0x3a0fecu: goto label_3a0fec;
        case 0x3a0ff0u: goto label_3a0ff0;
        case 0x3a0ff4u: goto label_3a0ff4;
        case 0x3a0ff8u: goto label_3a0ff8;
        case 0x3a0ffcu: goto label_3a0ffc;
        case 0x3a1000u: goto label_3a1000;
        case 0x3a1004u: goto label_3a1004;
        case 0x3a1008u: goto label_3a1008;
        case 0x3a100cu: goto label_3a100c;
        case 0x3a1010u: goto label_3a1010;
        case 0x3a1014u: goto label_3a1014;
        case 0x3a1018u: goto label_3a1018;
        case 0x3a101cu: goto label_3a101c;
        case 0x3a1020u: goto label_3a1020;
        case 0x3a1024u: goto label_3a1024;
        case 0x3a1028u: goto label_3a1028;
        case 0x3a102cu: goto label_3a102c;
        case 0x3a1030u: goto label_3a1030;
        case 0x3a1034u: goto label_3a1034;
        case 0x3a1038u: goto label_3a1038;
        case 0x3a103cu: goto label_3a103c;
        case 0x3a1040u: goto label_3a1040;
        case 0x3a1044u: goto label_3a1044;
        case 0x3a1048u: goto label_3a1048;
        case 0x3a104cu: goto label_3a104c;
        case 0x3a1050u: goto label_3a1050;
        case 0x3a1054u: goto label_3a1054;
        case 0x3a1058u: goto label_3a1058;
        case 0x3a105cu: goto label_3a105c;
        case 0x3a1060u: goto label_3a1060;
        case 0x3a1064u: goto label_3a1064;
        case 0x3a1068u: goto label_3a1068;
        case 0x3a106cu: goto label_3a106c;
        case 0x3a1070u: goto label_3a1070;
        case 0x3a1074u: goto label_3a1074;
        case 0x3a1078u: goto label_3a1078;
        case 0x3a107cu: goto label_3a107c;
        case 0x3a1080u: goto label_3a1080;
        case 0x3a1084u: goto label_3a1084;
        case 0x3a1088u: goto label_3a1088;
        case 0x3a108cu: goto label_3a108c;
        case 0x3a1090u: goto label_3a1090;
        case 0x3a1094u: goto label_3a1094;
        case 0x3a1098u: goto label_3a1098;
        case 0x3a109cu: goto label_3a109c;
        case 0x3a10a0u: goto label_3a10a0;
        case 0x3a10a4u: goto label_3a10a4;
        case 0x3a10a8u: goto label_3a10a8;
        case 0x3a10acu: goto label_3a10ac;
        case 0x3a10b0u: goto label_3a10b0;
        case 0x3a10b4u: goto label_3a10b4;
        case 0x3a10b8u: goto label_3a10b8;
        case 0x3a10bcu: goto label_3a10bc;
        case 0x3a10c0u: goto label_3a10c0;
        case 0x3a10c4u: goto label_3a10c4;
        case 0x3a10c8u: goto label_3a10c8;
        case 0x3a10ccu: goto label_3a10cc;
        case 0x3a10d0u: goto label_3a10d0;
        case 0x3a10d4u: goto label_3a10d4;
        case 0x3a10d8u: goto label_3a10d8;
        case 0x3a10dcu: goto label_3a10dc;
        case 0x3a10e0u: goto label_3a10e0;
        case 0x3a10e4u: goto label_3a10e4;
        case 0x3a10e8u: goto label_3a10e8;
        case 0x3a10ecu: goto label_3a10ec;
        case 0x3a10f0u: goto label_3a10f0;
        case 0x3a10f4u: goto label_3a10f4;
        case 0x3a10f8u: goto label_3a10f8;
        case 0x3a10fcu: goto label_3a10fc;
        case 0x3a1100u: goto label_3a1100;
        case 0x3a1104u: goto label_3a1104;
        case 0x3a1108u: goto label_3a1108;
        case 0x3a110cu: goto label_3a110c;
        case 0x3a1110u: goto label_3a1110;
        case 0x3a1114u: goto label_3a1114;
        case 0x3a1118u: goto label_3a1118;
        case 0x3a111cu: goto label_3a111c;
        case 0x3a1120u: goto label_3a1120;
        case 0x3a1124u: goto label_3a1124;
        case 0x3a1128u: goto label_3a1128;
        case 0x3a112cu: goto label_3a112c;
        case 0x3a1130u: goto label_3a1130;
        case 0x3a1134u: goto label_3a1134;
        case 0x3a1138u: goto label_3a1138;
        case 0x3a113cu: goto label_3a113c;
        case 0x3a1140u: goto label_3a1140;
        case 0x3a1144u: goto label_3a1144;
        case 0x3a1148u: goto label_3a1148;
        case 0x3a114cu: goto label_3a114c;
        case 0x3a1150u: goto label_3a1150;
        case 0x3a1154u: goto label_3a1154;
        case 0x3a1158u: goto label_3a1158;
        case 0x3a115cu: goto label_3a115c;
        case 0x3a1160u: goto label_3a1160;
        case 0x3a1164u: goto label_3a1164;
        case 0x3a1168u: goto label_3a1168;
        case 0x3a116cu: goto label_3a116c;
        case 0x3a1170u: goto label_3a1170;
        case 0x3a1174u: goto label_3a1174;
        case 0x3a1178u: goto label_3a1178;
        case 0x3a117cu: goto label_3a117c;
        case 0x3a1180u: goto label_3a1180;
        case 0x3a1184u: goto label_3a1184;
        case 0x3a1188u: goto label_3a1188;
        case 0x3a118cu: goto label_3a118c;
        case 0x3a1190u: goto label_3a1190;
        case 0x3a1194u: goto label_3a1194;
        case 0x3a1198u: goto label_3a1198;
        case 0x3a119cu: goto label_3a119c;
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11a4u: goto label_3a11a4;
        case 0x3a11a8u: goto label_3a11a8;
        case 0x3a11acu: goto label_3a11ac;
        case 0x3a11b0u: goto label_3a11b0;
        case 0x3a11b4u: goto label_3a11b4;
        case 0x3a11b8u: goto label_3a11b8;
        case 0x3a11bcu: goto label_3a11bc;
        case 0x3a11c0u: goto label_3a11c0;
        case 0x3a11c4u: goto label_3a11c4;
        case 0x3a11c8u: goto label_3a11c8;
        case 0x3a11ccu: goto label_3a11cc;
        case 0x3a11d0u: goto label_3a11d0;
        case 0x3a11d4u: goto label_3a11d4;
        case 0x3a11d8u: goto label_3a11d8;
        case 0x3a11dcu: goto label_3a11dc;
        case 0x3a11e0u: goto label_3a11e0;
        case 0x3a11e4u: goto label_3a11e4;
        case 0x3a11e8u: goto label_3a11e8;
        case 0x3a11ecu: goto label_3a11ec;
        case 0x3a11f0u: goto label_3a11f0;
        case 0x3a11f4u: goto label_3a11f4;
        case 0x3a11f8u: goto label_3a11f8;
        case 0x3a11fcu: goto label_3a11fc;
        case 0x3a1200u: goto label_3a1200;
        case 0x3a1204u: goto label_3a1204;
        case 0x3a1208u: goto label_3a1208;
        case 0x3a120cu: goto label_3a120c;
        case 0x3a1210u: goto label_3a1210;
        case 0x3a1214u: goto label_3a1214;
        case 0x3a1218u: goto label_3a1218;
        case 0x3a121cu: goto label_3a121c;
        case 0x3a1220u: goto label_3a1220;
        case 0x3a1224u: goto label_3a1224;
        case 0x3a1228u: goto label_3a1228;
        case 0x3a122cu: goto label_3a122c;
        case 0x3a1230u: goto label_3a1230;
        case 0x3a1234u: goto label_3a1234;
        case 0x3a1238u: goto label_3a1238;
        case 0x3a123cu: goto label_3a123c;
        case 0x3a1240u: goto label_3a1240;
        case 0x3a1244u: goto label_3a1244;
        case 0x3a1248u: goto label_3a1248;
        case 0x3a124cu: goto label_3a124c;
        case 0x3a1250u: goto label_3a1250;
        case 0x3a1254u: goto label_3a1254;
        case 0x3a1258u: goto label_3a1258;
        case 0x3a125cu: goto label_3a125c;
        case 0x3a1260u: goto label_3a1260;
        case 0x3a1264u: goto label_3a1264;
        case 0x3a1268u: goto label_3a1268;
        case 0x3a126cu: goto label_3a126c;
        case 0x3a1270u: goto label_3a1270;
        case 0x3a1274u: goto label_3a1274;
        case 0x3a1278u: goto label_3a1278;
        case 0x3a127cu: goto label_3a127c;
        case 0x3a1280u: goto label_3a1280;
        case 0x3a1284u: goto label_3a1284;
        case 0x3a1288u: goto label_3a1288;
        case 0x3a128cu: goto label_3a128c;
        case 0x3a1290u: goto label_3a1290;
        case 0x3a1294u: goto label_3a1294;
        case 0x3a1298u: goto label_3a1298;
        case 0x3a129cu: goto label_3a129c;
        case 0x3a12a0u: goto label_3a12a0;
        case 0x3a12a4u: goto label_3a12a4;
        case 0x3a12a8u: goto label_3a12a8;
        case 0x3a12acu: goto label_3a12ac;
        case 0x3a12b0u: goto label_3a12b0;
        case 0x3a12b4u: goto label_3a12b4;
        case 0x3a12b8u: goto label_3a12b8;
        case 0x3a12bcu: goto label_3a12bc;
        case 0x3a12c0u: goto label_3a12c0;
        case 0x3a12c4u: goto label_3a12c4;
        case 0x3a12c8u: goto label_3a12c8;
        case 0x3a12ccu: goto label_3a12cc;
        case 0x3a12d0u: goto label_3a12d0;
        case 0x3a12d4u: goto label_3a12d4;
        case 0x3a12d8u: goto label_3a12d8;
        case 0x3a12dcu: goto label_3a12dc;
        case 0x3a12e0u: goto label_3a12e0;
        case 0x3a12e4u: goto label_3a12e4;
        case 0x3a12e8u: goto label_3a12e8;
        case 0x3a12ecu: goto label_3a12ec;
        case 0x3a12f0u: goto label_3a12f0;
        case 0x3a12f4u: goto label_3a12f4;
        case 0x3a12f8u: goto label_3a12f8;
        case 0x3a12fcu: goto label_3a12fc;
        case 0x3a1300u: goto label_3a1300;
        case 0x3a1304u: goto label_3a1304;
        case 0x3a1308u: goto label_3a1308;
        case 0x3a130cu: goto label_3a130c;
        case 0x3a1310u: goto label_3a1310;
        case 0x3a1314u: goto label_3a1314;
        case 0x3a1318u: goto label_3a1318;
        case 0x3a131cu: goto label_3a131c;
        case 0x3a1320u: goto label_3a1320;
        case 0x3a1324u: goto label_3a1324;
        case 0x3a1328u: goto label_3a1328;
        case 0x3a132cu: goto label_3a132c;
        case 0x3a1330u: goto label_3a1330;
        case 0x3a1334u: goto label_3a1334;
        case 0x3a1338u: goto label_3a1338;
        case 0x3a133cu: goto label_3a133c;
        case 0x3a1340u: goto label_3a1340;
        case 0x3a1344u: goto label_3a1344;
        case 0x3a1348u: goto label_3a1348;
        case 0x3a134cu: goto label_3a134c;
        case 0x3a1350u: goto label_3a1350;
        case 0x3a1354u: goto label_3a1354;
        case 0x3a1358u: goto label_3a1358;
        case 0x3a135cu: goto label_3a135c;
        case 0x3a1360u: goto label_3a1360;
        case 0x3a1364u: goto label_3a1364;
        case 0x3a1368u: goto label_3a1368;
        case 0x3a136cu: goto label_3a136c;
        case 0x3a1370u: goto label_3a1370;
        case 0x3a1374u: goto label_3a1374;
        case 0x3a1378u: goto label_3a1378;
        case 0x3a137cu: goto label_3a137c;
        case 0x3a1380u: goto label_3a1380;
        case 0x3a1384u: goto label_3a1384;
        case 0x3a1388u: goto label_3a1388;
        case 0x3a138cu: goto label_3a138c;
        case 0x3a1390u: goto label_3a1390;
        case 0x3a1394u: goto label_3a1394;
        case 0x3a1398u: goto label_3a1398;
        case 0x3a139cu: goto label_3a139c;
        case 0x3a13a0u: goto label_3a13a0;
        case 0x3a13a4u: goto label_3a13a4;
        case 0x3a13a8u: goto label_3a13a8;
        case 0x3a13acu: goto label_3a13ac;
        case 0x3a13b0u: goto label_3a13b0;
        case 0x3a13b4u: goto label_3a13b4;
        case 0x3a13b8u: goto label_3a13b8;
        case 0x3a13bcu: goto label_3a13bc;
        case 0x3a13c0u: goto label_3a13c0;
        case 0x3a13c4u: goto label_3a13c4;
        case 0x3a13c8u: goto label_3a13c8;
        case 0x3a13ccu: goto label_3a13cc;
        case 0x3a13d0u: goto label_3a13d0;
        case 0x3a13d4u: goto label_3a13d4;
        case 0x3a13d8u: goto label_3a13d8;
        case 0x3a13dcu: goto label_3a13dc;
        case 0x3a13e0u: goto label_3a13e0;
        case 0x3a13e4u: goto label_3a13e4;
        case 0x3a13e8u: goto label_3a13e8;
        case 0x3a13ecu: goto label_3a13ec;
        case 0x3a13f0u: goto label_3a13f0;
        case 0x3a13f4u: goto label_3a13f4;
        case 0x3a13f8u: goto label_3a13f8;
        case 0x3a13fcu: goto label_3a13fc;
        case 0x3a1400u: goto label_3a1400;
        case 0x3a1404u: goto label_3a1404;
        case 0x3a1408u: goto label_3a1408;
        case 0x3a140cu: goto label_3a140c;
        case 0x3a1410u: goto label_3a1410;
        case 0x3a1414u: goto label_3a1414;
        case 0x3a1418u: goto label_3a1418;
        case 0x3a141cu: goto label_3a141c;
        case 0x3a1420u: goto label_3a1420;
        case 0x3a1424u: goto label_3a1424;
        case 0x3a1428u: goto label_3a1428;
        case 0x3a142cu: goto label_3a142c;
        case 0x3a1430u: goto label_3a1430;
        case 0x3a1434u: goto label_3a1434;
        case 0x3a1438u: goto label_3a1438;
        case 0x3a143cu: goto label_3a143c;
        case 0x3a1440u: goto label_3a1440;
        case 0x3a1444u: goto label_3a1444;
        case 0x3a1448u: goto label_3a1448;
        case 0x3a144cu: goto label_3a144c;
        case 0x3a1450u: goto label_3a1450;
        case 0x3a1454u: goto label_3a1454;
        case 0x3a1458u: goto label_3a1458;
        case 0x3a145cu: goto label_3a145c;
        case 0x3a1460u: goto label_3a1460;
        case 0x3a1464u: goto label_3a1464;
        case 0x3a1468u: goto label_3a1468;
        case 0x3a146cu: goto label_3a146c;
        case 0x3a1470u: goto label_3a1470;
        case 0x3a1474u: goto label_3a1474;
        case 0x3a1478u: goto label_3a1478;
        case 0x3a147cu: goto label_3a147c;
        case 0x3a1480u: goto label_3a1480;
        case 0x3a1484u: goto label_3a1484;
        case 0x3a1488u: goto label_3a1488;
        case 0x3a148cu: goto label_3a148c;
        case 0x3a1490u: goto label_3a1490;
        case 0x3a1494u: goto label_3a1494;
        case 0x3a1498u: goto label_3a1498;
        case 0x3a149cu: goto label_3a149c;
        case 0x3a14a0u: goto label_3a14a0;
        case 0x3a14a4u: goto label_3a14a4;
        case 0x3a14a8u: goto label_3a14a8;
        case 0x3a14acu: goto label_3a14ac;
        case 0x3a14b0u: goto label_3a14b0;
        case 0x3a14b4u: goto label_3a14b4;
        case 0x3a14b8u: goto label_3a14b8;
        case 0x3a14bcu: goto label_3a14bc;
        case 0x3a14c0u: goto label_3a14c0;
        case 0x3a14c4u: goto label_3a14c4;
        case 0x3a14c8u: goto label_3a14c8;
        case 0x3a14ccu: goto label_3a14cc;
        case 0x3a14d0u: goto label_3a14d0;
        case 0x3a14d4u: goto label_3a14d4;
        case 0x3a14d8u: goto label_3a14d8;
        case 0x3a14dcu: goto label_3a14dc;
        case 0x3a14e0u: goto label_3a14e0;
        case 0x3a14e4u: goto label_3a14e4;
        case 0x3a14e8u: goto label_3a14e8;
        case 0x3a14ecu: goto label_3a14ec;
        case 0x3a14f0u: goto label_3a14f0;
        case 0x3a14f4u: goto label_3a14f4;
        case 0x3a14f8u: goto label_3a14f8;
        case 0x3a14fcu: goto label_3a14fc;
        case 0x3a1500u: goto label_3a1500;
        case 0x3a1504u: goto label_3a1504;
        case 0x3a1508u: goto label_3a1508;
        case 0x3a150cu: goto label_3a150c;
        case 0x3a1510u: goto label_3a1510;
        case 0x3a1514u: goto label_3a1514;
        case 0x3a1518u: goto label_3a1518;
        case 0x3a151cu: goto label_3a151c;
        case 0x3a1520u: goto label_3a1520;
        case 0x3a1524u: goto label_3a1524;
        case 0x3a1528u: goto label_3a1528;
        case 0x3a152cu: goto label_3a152c;
        case 0x3a1530u: goto label_3a1530;
        case 0x3a1534u: goto label_3a1534;
        case 0x3a1538u: goto label_3a1538;
        case 0x3a153cu: goto label_3a153c;
        case 0x3a1540u: goto label_3a1540;
        case 0x3a1544u: goto label_3a1544;
        case 0x3a1548u: goto label_3a1548;
        case 0x3a154cu: goto label_3a154c;
        case 0x3a1550u: goto label_3a1550;
        case 0x3a1554u: goto label_3a1554;
        case 0x3a1558u: goto label_3a1558;
        case 0x3a155cu: goto label_3a155c;
        case 0x3a1560u: goto label_3a1560;
        case 0x3a1564u: goto label_3a1564;
        case 0x3a1568u: goto label_3a1568;
        case 0x3a156cu: goto label_3a156c;
        case 0x3a1570u: goto label_3a1570;
        case 0x3a1574u: goto label_3a1574;
        case 0x3a1578u: goto label_3a1578;
        case 0x3a157cu: goto label_3a157c;
        case 0x3a1580u: goto label_3a1580;
        case 0x3a1584u: goto label_3a1584;
        case 0x3a1588u: goto label_3a1588;
        case 0x3a158cu: goto label_3a158c;
        case 0x3a1590u: goto label_3a1590;
        case 0x3a1594u: goto label_3a1594;
        case 0x3a1598u: goto label_3a1598;
        case 0x3a159cu: goto label_3a159c;
        case 0x3a15a0u: goto label_3a15a0;
        case 0x3a15a4u: goto label_3a15a4;
        case 0x3a15a8u: goto label_3a15a8;
        case 0x3a15acu: goto label_3a15ac;
        case 0x3a15b0u: goto label_3a15b0;
        case 0x3a15b4u: goto label_3a15b4;
        case 0x3a15b8u: goto label_3a15b8;
        case 0x3a15bcu: goto label_3a15bc;
        case 0x3a15c0u: goto label_3a15c0;
        case 0x3a15c4u: goto label_3a15c4;
        case 0x3a15c8u: goto label_3a15c8;
        case 0x3a15ccu: goto label_3a15cc;
        case 0x3a15d0u: goto label_3a15d0;
        case 0x3a15d4u: goto label_3a15d4;
        case 0x3a15d8u: goto label_3a15d8;
        case 0x3a15dcu: goto label_3a15dc;
        case 0x3a15e0u: goto label_3a15e0;
        case 0x3a15e4u: goto label_3a15e4;
        case 0x3a15e8u: goto label_3a15e8;
        case 0x3a15ecu: goto label_3a15ec;
        case 0x3a15f0u: goto label_3a15f0;
        case 0x3a15f4u: goto label_3a15f4;
        case 0x3a15f8u: goto label_3a15f8;
        case 0x3a15fcu: goto label_3a15fc;
        case 0x3a1600u: goto label_3a1600;
        case 0x3a1604u: goto label_3a1604;
        case 0x3a1608u: goto label_3a1608;
        case 0x3a160cu: goto label_3a160c;
        case 0x3a1610u: goto label_3a1610;
        case 0x3a1614u: goto label_3a1614;
        case 0x3a1618u: goto label_3a1618;
        case 0x3a161cu: goto label_3a161c;
        case 0x3a1620u: goto label_3a1620;
        case 0x3a1624u: goto label_3a1624;
        case 0x3a1628u: goto label_3a1628;
        case 0x3a162cu: goto label_3a162c;
        case 0x3a1630u: goto label_3a1630;
        case 0x3a1634u: goto label_3a1634;
        case 0x3a1638u: goto label_3a1638;
        case 0x3a163cu: goto label_3a163c;
        case 0x3a1640u: goto label_3a1640;
        case 0x3a1644u: goto label_3a1644;
        case 0x3a1648u: goto label_3a1648;
        case 0x3a164cu: goto label_3a164c;
        case 0x3a1650u: goto label_3a1650;
        case 0x3a1654u: goto label_3a1654;
        case 0x3a1658u: goto label_3a1658;
        case 0x3a165cu: goto label_3a165c;
        case 0x3a1660u: goto label_3a1660;
        case 0x3a1664u: goto label_3a1664;
        case 0x3a1668u: goto label_3a1668;
        case 0x3a166cu: goto label_3a166c;
        case 0x3a1670u: goto label_3a1670;
        case 0x3a1674u: goto label_3a1674;
        case 0x3a1678u: goto label_3a1678;
        case 0x3a167cu: goto label_3a167c;
        case 0x3a1680u: goto label_3a1680;
        case 0x3a1684u: goto label_3a1684;
        case 0x3a1688u: goto label_3a1688;
        case 0x3a168cu: goto label_3a168c;
        case 0x3a1690u: goto label_3a1690;
        case 0x3a1694u: goto label_3a1694;
        case 0x3a1698u: goto label_3a1698;
        case 0x3a169cu: goto label_3a169c;
        case 0x3a16a0u: goto label_3a16a0;
        case 0x3a16a4u: goto label_3a16a4;
        case 0x3a16a8u: goto label_3a16a8;
        case 0x3a16acu: goto label_3a16ac;
        case 0x3a16b0u: goto label_3a16b0;
        case 0x3a16b4u: goto label_3a16b4;
        case 0x3a16b8u: goto label_3a16b8;
        case 0x3a16bcu: goto label_3a16bc;
        case 0x3a16c0u: goto label_3a16c0;
        case 0x3a16c4u: goto label_3a16c4;
        case 0x3a16c8u: goto label_3a16c8;
        case 0x3a16ccu: goto label_3a16cc;
        case 0x3a16d0u: goto label_3a16d0;
        case 0x3a16d4u: goto label_3a16d4;
        case 0x3a16d8u: goto label_3a16d8;
        case 0x3a16dcu: goto label_3a16dc;
        case 0x3a16e0u: goto label_3a16e0;
        case 0x3a16e4u: goto label_3a16e4;
        case 0x3a16e8u: goto label_3a16e8;
        case 0x3a16ecu: goto label_3a16ec;
        case 0x3a16f0u: goto label_3a16f0;
        case 0x3a16f4u: goto label_3a16f4;
        case 0x3a16f8u: goto label_3a16f8;
        case 0x3a16fcu: goto label_3a16fc;
        case 0x3a1700u: goto label_3a1700;
        case 0x3a1704u: goto label_3a1704;
        case 0x3a1708u: goto label_3a1708;
        case 0x3a170cu: goto label_3a170c;
        case 0x3a1710u: goto label_3a1710;
        case 0x3a1714u: goto label_3a1714;
        case 0x3a1718u: goto label_3a1718;
        case 0x3a171cu: goto label_3a171c;
        case 0x3a1720u: goto label_3a1720;
        case 0x3a1724u: goto label_3a1724;
        case 0x3a1728u: goto label_3a1728;
        case 0x3a172cu: goto label_3a172c;
        case 0x3a1730u: goto label_3a1730;
        case 0x3a1734u: goto label_3a1734;
        case 0x3a1738u: goto label_3a1738;
        case 0x3a173cu: goto label_3a173c;
        case 0x3a1740u: goto label_3a1740;
        case 0x3a1744u: goto label_3a1744;
        case 0x3a1748u: goto label_3a1748;
        case 0x3a174cu: goto label_3a174c;
        case 0x3a1750u: goto label_3a1750;
        case 0x3a1754u: goto label_3a1754;
        case 0x3a1758u: goto label_3a1758;
        case 0x3a175cu: goto label_3a175c;
        case 0x3a1760u: goto label_3a1760;
        case 0x3a1764u: goto label_3a1764;
        case 0x3a1768u: goto label_3a1768;
        case 0x3a176cu: goto label_3a176c;
        case 0x3a1770u: goto label_3a1770;
        case 0x3a1774u: goto label_3a1774;
        case 0x3a1778u: goto label_3a1778;
        case 0x3a177cu: goto label_3a177c;
        case 0x3a1780u: goto label_3a1780;
        case 0x3a1784u: goto label_3a1784;
        case 0x3a1788u: goto label_3a1788;
        case 0x3a178cu: goto label_3a178c;
        case 0x3a1790u: goto label_3a1790;
        case 0x3a1794u: goto label_3a1794;
        case 0x3a1798u: goto label_3a1798;
        case 0x3a179cu: goto label_3a179c;
        case 0x3a17a0u: goto label_3a17a0;
        case 0x3a17a4u: goto label_3a17a4;
        case 0x3a17a8u: goto label_3a17a8;
        case 0x3a17acu: goto label_3a17ac;
        case 0x3a17b0u: goto label_3a17b0;
        case 0x3a17b4u: goto label_3a17b4;
        case 0x3a17b8u: goto label_3a17b8;
        case 0x3a17bcu: goto label_3a17bc;
        case 0x3a17c0u: goto label_3a17c0;
        case 0x3a17c4u: goto label_3a17c4;
        case 0x3a17c8u: goto label_3a17c8;
        case 0x3a17ccu: goto label_3a17cc;
        case 0x3a17d0u: goto label_3a17d0;
        case 0x3a17d4u: goto label_3a17d4;
        case 0x3a17d8u: goto label_3a17d8;
        case 0x3a17dcu: goto label_3a17dc;
        case 0x3a17e0u: goto label_3a17e0;
        case 0x3a17e4u: goto label_3a17e4;
        case 0x3a17e8u: goto label_3a17e8;
        case 0x3a17ecu: goto label_3a17ec;
        case 0x3a17f0u: goto label_3a17f0;
        case 0x3a17f4u: goto label_3a17f4;
        case 0x3a17f8u: goto label_3a17f8;
        case 0x3a17fcu: goto label_3a17fc;
        case 0x3a1800u: goto label_3a1800;
        case 0x3a1804u: goto label_3a1804;
        case 0x3a1808u: goto label_3a1808;
        case 0x3a180cu: goto label_3a180c;
        case 0x3a1810u: goto label_3a1810;
        case 0x3a1814u: goto label_3a1814;
        case 0x3a1818u: goto label_3a1818;
        case 0x3a181cu: goto label_3a181c;
        case 0x3a1820u: goto label_3a1820;
        case 0x3a1824u: goto label_3a1824;
        case 0x3a1828u: goto label_3a1828;
        case 0x3a182cu: goto label_3a182c;
        case 0x3a1830u: goto label_3a1830;
        case 0x3a1834u: goto label_3a1834;
        case 0x3a1838u: goto label_3a1838;
        case 0x3a183cu: goto label_3a183c;
        case 0x3a1840u: goto label_3a1840;
        case 0x3a1844u: goto label_3a1844;
        case 0x3a1848u: goto label_3a1848;
        case 0x3a184cu: goto label_3a184c;
        case 0x3a1850u: goto label_3a1850;
        case 0x3a1854u: goto label_3a1854;
        case 0x3a1858u: goto label_3a1858;
        case 0x3a185cu: goto label_3a185c;
        case 0x3a1860u: goto label_3a1860;
        case 0x3a1864u: goto label_3a1864;
        case 0x3a1868u: goto label_3a1868;
        case 0x3a186cu: goto label_3a186c;
        case 0x3a1870u: goto label_3a1870;
        case 0x3a1874u: goto label_3a1874;
        case 0x3a1878u: goto label_3a1878;
        case 0x3a187cu: goto label_3a187c;
        case 0x3a1880u: goto label_3a1880;
        case 0x3a1884u: goto label_3a1884;
        case 0x3a1888u: goto label_3a1888;
        case 0x3a188cu: goto label_3a188c;
        case 0x3a1890u: goto label_3a1890;
        case 0x3a1894u: goto label_3a1894;
        case 0x3a1898u: goto label_3a1898;
        case 0x3a189cu: goto label_3a189c;
        case 0x3a18a0u: goto label_3a18a0;
        case 0x3a18a4u: goto label_3a18a4;
        case 0x3a18a8u: goto label_3a18a8;
        case 0x3a18acu: goto label_3a18ac;
        case 0x3a18b0u: goto label_3a18b0;
        case 0x3a18b4u: goto label_3a18b4;
        case 0x3a18b8u: goto label_3a18b8;
        case 0x3a18bcu: goto label_3a18bc;
        case 0x3a18c0u: goto label_3a18c0;
        case 0x3a18c4u: goto label_3a18c4;
        case 0x3a18c8u: goto label_3a18c8;
        case 0x3a18ccu: goto label_3a18cc;
        case 0x3a18d0u: goto label_3a18d0;
        case 0x3a18d4u: goto label_3a18d4;
        case 0x3a18d8u: goto label_3a18d8;
        case 0x3a18dcu: goto label_3a18dc;
        case 0x3a18e0u: goto label_3a18e0;
        case 0x3a18e4u: goto label_3a18e4;
        case 0x3a18e8u: goto label_3a18e8;
        case 0x3a18ecu: goto label_3a18ec;
        case 0x3a18f0u: goto label_3a18f0;
        case 0x3a18f4u: goto label_3a18f4;
        case 0x3a18f8u: goto label_3a18f8;
        case 0x3a18fcu: goto label_3a18fc;
        case 0x3a1900u: goto label_3a1900;
        case 0x3a1904u: goto label_3a1904;
        case 0x3a1908u: goto label_3a1908;
        case 0x3a190cu: goto label_3a190c;
        case 0x3a1910u: goto label_3a1910;
        case 0x3a1914u: goto label_3a1914;
        case 0x3a1918u: goto label_3a1918;
        case 0x3a191cu: goto label_3a191c;
        case 0x3a1920u: goto label_3a1920;
        case 0x3a1924u: goto label_3a1924;
        case 0x3a1928u: goto label_3a1928;
        case 0x3a192cu: goto label_3a192c;
        case 0x3a1930u: goto label_3a1930;
        case 0x3a1934u: goto label_3a1934;
        case 0x3a1938u: goto label_3a1938;
        case 0x3a193cu: goto label_3a193c;
        case 0x3a1940u: goto label_3a1940;
        case 0x3a1944u: goto label_3a1944;
        case 0x3a1948u: goto label_3a1948;
        case 0x3a194cu: goto label_3a194c;
        case 0x3a1950u: goto label_3a1950;
        case 0x3a1954u: goto label_3a1954;
        case 0x3a1958u: goto label_3a1958;
        case 0x3a195cu: goto label_3a195c;
        case 0x3a1960u: goto label_3a1960;
        case 0x3a1964u: goto label_3a1964;
        case 0x3a1968u: goto label_3a1968;
        case 0x3a196cu: goto label_3a196c;
        case 0x3a1970u: goto label_3a1970;
        case 0x3a1974u: goto label_3a1974;
        case 0x3a1978u: goto label_3a1978;
        case 0x3a197cu: goto label_3a197c;
        case 0x3a1980u: goto label_3a1980;
        case 0x3a1984u: goto label_3a1984;
        case 0x3a1988u: goto label_3a1988;
        case 0x3a198cu: goto label_3a198c;
        case 0x3a1990u: goto label_3a1990;
        case 0x3a1994u: goto label_3a1994;
        case 0x3a1998u: goto label_3a1998;
        case 0x3a199cu: goto label_3a199c;
        case 0x3a19a0u: goto label_3a19a0;
        case 0x3a19a4u: goto label_3a19a4;
        case 0x3a19a8u: goto label_3a19a8;
        case 0x3a19acu: goto label_3a19ac;
        case 0x3a19b0u: goto label_3a19b0;
        case 0x3a19b4u: goto label_3a19b4;
        case 0x3a19b8u: goto label_3a19b8;
        case 0x3a19bcu: goto label_3a19bc;
        case 0x3a19c0u: goto label_3a19c0;
        case 0x3a19c4u: goto label_3a19c4;
        case 0x3a19c8u: goto label_3a19c8;
        case 0x3a19ccu: goto label_3a19cc;
        case 0x3a19d0u: goto label_3a19d0;
        case 0x3a19d4u: goto label_3a19d4;
        case 0x3a19d8u: goto label_3a19d8;
        case 0x3a19dcu: goto label_3a19dc;
        case 0x3a19e0u: goto label_3a19e0;
        case 0x3a19e4u: goto label_3a19e4;
        case 0x3a19e8u: goto label_3a19e8;
        case 0x3a19ecu: goto label_3a19ec;
        case 0x3a19f0u: goto label_3a19f0;
        case 0x3a19f4u: goto label_3a19f4;
        case 0x3a19f8u: goto label_3a19f8;
        case 0x3a19fcu: goto label_3a19fc;
        case 0x3a1a00u: goto label_3a1a00;
        case 0x3a1a04u: goto label_3a1a04;
        case 0x3a1a08u: goto label_3a1a08;
        case 0x3a1a0cu: goto label_3a1a0c;
        case 0x3a1a10u: goto label_3a1a10;
        case 0x3a1a14u: goto label_3a1a14;
        case 0x3a1a18u: goto label_3a1a18;
        case 0x3a1a1cu: goto label_3a1a1c;
        case 0x3a1a20u: goto label_3a1a20;
        case 0x3a1a24u: goto label_3a1a24;
        case 0x3a1a28u: goto label_3a1a28;
        case 0x3a1a2cu: goto label_3a1a2c;
        case 0x3a1a30u: goto label_3a1a30;
        case 0x3a1a34u: goto label_3a1a34;
        case 0x3a1a38u: goto label_3a1a38;
        case 0x3a1a3cu: goto label_3a1a3c;
        case 0x3a1a40u: goto label_3a1a40;
        case 0x3a1a44u: goto label_3a1a44;
        case 0x3a1a48u: goto label_3a1a48;
        case 0x3a1a4cu: goto label_3a1a4c;
        case 0x3a1a50u: goto label_3a1a50;
        case 0x3a1a54u: goto label_3a1a54;
        case 0x3a1a58u: goto label_3a1a58;
        case 0x3a1a5cu: goto label_3a1a5c;
        case 0x3a1a60u: goto label_3a1a60;
        case 0x3a1a64u: goto label_3a1a64;
        case 0x3a1a68u: goto label_3a1a68;
        case 0x3a1a6cu: goto label_3a1a6c;
        case 0x3a1a70u: goto label_3a1a70;
        case 0x3a1a74u: goto label_3a1a74;
        case 0x3a1a78u: goto label_3a1a78;
        case 0x3a1a7cu: goto label_3a1a7c;
        case 0x3a1a80u: goto label_3a1a80;
        case 0x3a1a84u: goto label_3a1a84;
        case 0x3a1a88u: goto label_3a1a88;
        case 0x3a1a8cu: goto label_3a1a8c;
        case 0x3a1a90u: goto label_3a1a90;
        case 0x3a1a94u: goto label_3a1a94;
        case 0x3a1a98u: goto label_3a1a98;
        case 0x3a1a9cu: goto label_3a1a9c;
        case 0x3a1aa0u: goto label_3a1aa0;
        case 0x3a1aa4u: goto label_3a1aa4;
        case 0x3a1aa8u: goto label_3a1aa8;
        case 0x3a1aacu: goto label_3a1aac;
        case 0x3a1ab0u: goto label_3a1ab0;
        case 0x3a1ab4u: goto label_3a1ab4;
        case 0x3a1ab8u: goto label_3a1ab8;
        case 0x3a1abcu: goto label_3a1abc;
        case 0x3a1ac0u: goto label_3a1ac0;
        case 0x3a1ac4u: goto label_3a1ac4;
        case 0x3a1ac8u: goto label_3a1ac8;
        case 0x3a1accu: goto label_3a1acc;
        case 0x3a1ad0u: goto label_3a1ad0;
        case 0x3a1ad4u: goto label_3a1ad4;
        case 0x3a1ad8u: goto label_3a1ad8;
        case 0x3a1adcu: goto label_3a1adc;
        case 0x3a1ae0u: goto label_3a1ae0;
        case 0x3a1ae4u: goto label_3a1ae4;
        case 0x3a1ae8u: goto label_3a1ae8;
        case 0x3a1aecu: goto label_3a1aec;
        case 0x3a1af0u: goto label_3a1af0;
        case 0x3a1af4u: goto label_3a1af4;
        case 0x3a1af8u: goto label_3a1af8;
        case 0x3a1afcu: goto label_3a1afc;
        case 0x3a1b00u: goto label_3a1b00;
        case 0x3a1b04u: goto label_3a1b04;
        case 0x3a1b08u: goto label_3a1b08;
        case 0x3a1b0cu: goto label_3a1b0c;
        case 0x3a1b10u: goto label_3a1b10;
        case 0x3a1b14u: goto label_3a1b14;
        case 0x3a1b18u: goto label_3a1b18;
        case 0x3a1b1cu: goto label_3a1b1c;
        case 0x3a1b20u: goto label_3a1b20;
        case 0x3a1b24u: goto label_3a1b24;
        case 0x3a1b28u: goto label_3a1b28;
        case 0x3a1b2cu: goto label_3a1b2c;
        case 0x3a1b30u: goto label_3a1b30;
        case 0x3a1b34u: goto label_3a1b34;
        case 0x3a1b38u: goto label_3a1b38;
        case 0x3a1b3cu: goto label_3a1b3c;
        case 0x3a1b40u: goto label_3a1b40;
        case 0x3a1b44u: goto label_3a1b44;
        case 0x3a1b48u: goto label_3a1b48;
        case 0x3a1b4cu: goto label_3a1b4c;
        case 0x3a1b50u: goto label_3a1b50;
        case 0x3a1b54u: goto label_3a1b54;
        case 0x3a1b58u: goto label_3a1b58;
        case 0x3a1b5cu: goto label_3a1b5c;
        case 0x3a1b60u: goto label_3a1b60;
        case 0x3a1b64u: goto label_3a1b64;
        case 0x3a1b68u: goto label_3a1b68;
        case 0x3a1b6cu: goto label_3a1b6c;
        case 0x3a1b70u: goto label_3a1b70;
        case 0x3a1b74u: goto label_3a1b74;
        case 0x3a1b78u: goto label_3a1b78;
        case 0x3a1b7cu: goto label_3a1b7c;
        case 0x3a1b80u: goto label_3a1b80;
        case 0x3a1b84u: goto label_3a1b84;
        case 0x3a1b88u: goto label_3a1b88;
        case 0x3a1b8cu: goto label_3a1b8c;
        case 0x3a1b90u: goto label_3a1b90;
        case 0x3a1b94u: goto label_3a1b94;
        case 0x3a1b98u: goto label_3a1b98;
        case 0x3a1b9cu: goto label_3a1b9c;
        case 0x3a1ba0u: goto label_3a1ba0;
        case 0x3a1ba4u: goto label_3a1ba4;
        case 0x3a1ba8u: goto label_3a1ba8;
        case 0x3a1bacu: goto label_3a1bac;
        case 0x3a1bb0u: goto label_3a1bb0;
        case 0x3a1bb4u: goto label_3a1bb4;
        case 0x3a1bb8u: goto label_3a1bb8;
        case 0x3a1bbcu: goto label_3a1bbc;
        case 0x3a1bc0u: goto label_3a1bc0;
        case 0x3a1bc4u: goto label_3a1bc4;
        case 0x3a1bc8u: goto label_3a1bc8;
        case 0x3a1bccu: goto label_3a1bcc;
        case 0x3a1bd0u: goto label_3a1bd0;
        case 0x3a1bd4u: goto label_3a1bd4;
        case 0x3a1bd8u: goto label_3a1bd8;
        case 0x3a1bdcu: goto label_3a1bdc;
        case 0x3a1be0u: goto label_3a1be0;
        case 0x3a1be4u: goto label_3a1be4;
        case 0x3a1be8u: goto label_3a1be8;
        case 0x3a1becu: goto label_3a1bec;
        case 0x3a1bf0u: goto label_3a1bf0;
        case 0x3a1bf4u: goto label_3a1bf4;
        case 0x3a1bf8u: goto label_3a1bf8;
        case 0x3a1bfcu: goto label_3a1bfc;
        case 0x3a1c00u: goto label_3a1c00;
        case 0x3a1c04u: goto label_3a1c04;
        case 0x3a1c08u: goto label_3a1c08;
        case 0x3a1c0cu: goto label_3a1c0c;
        case 0x3a1c10u: goto label_3a1c10;
        case 0x3a1c14u: goto label_3a1c14;
        case 0x3a1c18u: goto label_3a1c18;
        case 0x3a1c1cu: goto label_3a1c1c;
        case 0x3a1c20u: goto label_3a1c20;
        case 0x3a1c24u: goto label_3a1c24;
        case 0x3a1c28u: goto label_3a1c28;
        case 0x3a1c2cu: goto label_3a1c2c;
        case 0x3a1c30u: goto label_3a1c30;
        case 0x3a1c34u: goto label_3a1c34;
        case 0x3a1c38u: goto label_3a1c38;
        case 0x3a1c3cu: goto label_3a1c3c;
        case 0x3a1c40u: goto label_3a1c40;
        case 0x3a1c44u: goto label_3a1c44;
        case 0x3a1c48u: goto label_3a1c48;
        case 0x3a1c4cu: goto label_3a1c4c;
        case 0x3a1c50u: goto label_3a1c50;
        case 0x3a1c54u: goto label_3a1c54;
        case 0x3a1c58u: goto label_3a1c58;
        case 0x3a1c5cu: goto label_3a1c5c;
        case 0x3a1c60u: goto label_3a1c60;
        case 0x3a1c64u: goto label_3a1c64;
        case 0x3a1c68u: goto label_3a1c68;
        case 0x3a1c6cu: goto label_3a1c6c;
        case 0x3a1c70u: goto label_3a1c70;
        case 0x3a1c74u: goto label_3a1c74;
        case 0x3a1c78u: goto label_3a1c78;
        case 0x3a1c7cu: goto label_3a1c7c;
        case 0x3a1c80u: goto label_3a1c80;
        case 0x3a1c84u: goto label_3a1c84;
        case 0x3a1c88u: goto label_3a1c88;
        case 0x3a1c8cu: goto label_3a1c8c;
        case 0x3a1c90u: goto label_3a1c90;
        case 0x3a1c94u: goto label_3a1c94;
        case 0x3a1c98u: goto label_3a1c98;
        case 0x3a1c9cu: goto label_3a1c9c;
        case 0x3a1ca0u: goto label_3a1ca0;
        case 0x3a1ca4u: goto label_3a1ca4;
        case 0x3a1ca8u: goto label_3a1ca8;
        case 0x3a1cacu: goto label_3a1cac;
        case 0x3a1cb0u: goto label_3a1cb0;
        case 0x3a1cb4u: goto label_3a1cb4;
        case 0x3a1cb8u: goto label_3a1cb8;
        case 0x3a1cbcu: goto label_3a1cbc;
        case 0x3a1cc0u: goto label_3a1cc0;
        case 0x3a1cc4u: goto label_3a1cc4;
        case 0x3a1cc8u: goto label_3a1cc8;
        case 0x3a1cccu: goto label_3a1ccc;
        case 0x3a1cd0u: goto label_3a1cd0;
        case 0x3a1cd4u: goto label_3a1cd4;
        case 0x3a1cd8u: goto label_3a1cd8;
        case 0x3a1cdcu: goto label_3a1cdc;
        case 0x3a1ce0u: goto label_3a1ce0;
        case 0x3a1ce4u: goto label_3a1ce4;
        case 0x3a1ce8u: goto label_3a1ce8;
        case 0x3a1cecu: goto label_3a1cec;
        case 0x3a1cf0u: goto label_3a1cf0;
        case 0x3a1cf4u: goto label_3a1cf4;
        case 0x3a1cf8u: goto label_3a1cf8;
        case 0x3a1cfcu: goto label_3a1cfc;
        case 0x3a1d00u: goto label_3a1d00;
        case 0x3a1d04u: goto label_3a1d04;
        case 0x3a1d08u: goto label_3a1d08;
        case 0x3a1d0cu: goto label_3a1d0c;
        case 0x3a1d10u: goto label_3a1d10;
        case 0x3a1d14u: goto label_3a1d14;
        case 0x3a1d18u: goto label_3a1d18;
        case 0x3a1d1cu: goto label_3a1d1c;
        case 0x3a1d20u: goto label_3a1d20;
        case 0x3a1d24u: goto label_3a1d24;
        case 0x3a1d28u: goto label_3a1d28;
        case 0x3a1d2cu: goto label_3a1d2c;
        case 0x3a1d30u: goto label_3a1d30;
        case 0x3a1d34u: goto label_3a1d34;
        case 0x3a1d38u: goto label_3a1d38;
        case 0x3a1d3cu: goto label_3a1d3c;
        case 0x3a1d40u: goto label_3a1d40;
        case 0x3a1d44u: goto label_3a1d44;
        case 0x3a1d48u: goto label_3a1d48;
        case 0x3a1d4cu: goto label_3a1d4c;
        case 0x3a1d50u: goto label_3a1d50;
        case 0x3a1d54u: goto label_3a1d54;
        case 0x3a1d58u: goto label_3a1d58;
        case 0x3a1d5cu: goto label_3a1d5c;
        case 0x3a1d60u: goto label_3a1d60;
        case 0x3a1d64u: goto label_3a1d64;
        case 0x3a1d68u: goto label_3a1d68;
        case 0x3a1d6cu: goto label_3a1d6c;
        case 0x3a1d70u: goto label_3a1d70;
        case 0x3a1d74u: goto label_3a1d74;
        case 0x3a1d78u: goto label_3a1d78;
        case 0x3a1d7cu: goto label_3a1d7c;
        case 0x3a1d80u: goto label_3a1d80;
        case 0x3a1d84u: goto label_3a1d84;
        case 0x3a1d88u: goto label_3a1d88;
        case 0x3a1d8cu: goto label_3a1d8c;
        case 0x3a1d90u: goto label_3a1d90;
        case 0x3a1d94u: goto label_3a1d94;
        case 0x3a1d98u: goto label_3a1d98;
        case 0x3a1d9cu: goto label_3a1d9c;
        case 0x3a1da0u: goto label_3a1da0;
        case 0x3a1da4u: goto label_3a1da4;
        case 0x3a1da8u: goto label_3a1da8;
        case 0x3a1dacu: goto label_3a1dac;
        case 0x3a1db0u: goto label_3a1db0;
        case 0x3a1db4u: goto label_3a1db4;
        case 0x3a1db8u: goto label_3a1db8;
        case 0x3a1dbcu: goto label_3a1dbc;
        case 0x3a1dc0u: goto label_3a1dc0;
        case 0x3a1dc4u: goto label_3a1dc4;
        case 0x3a1dc8u: goto label_3a1dc8;
        case 0x3a1dccu: goto label_3a1dcc;
        case 0x3a1dd0u: goto label_3a1dd0;
        case 0x3a1dd4u: goto label_3a1dd4;
        case 0x3a1dd8u: goto label_3a1dd8;
        case 0x3a1ddcu: goto label_3a1ddc;
        case 0x3a1de0u: goto label_3a1de0;
        case 0x3a1de4u: goto label_3a1de4;
        case 0x3a1de8u: goto label_3a1de8;
        case 0x3a1decu: goto label_3a1dec;
        case 0x3a1df0u: goto label_3a1df0;
        case 0x3a1df4u: goto label_3a1df4;
        case 0x3a1df8u: goto label_3a1df8;
        case 0x3a1dfcu: goto label_3a1dfc;
        case 0x3a1e00u: goto label_3a1e00;
        case 0x3a1e04u: goto label_3a1e04;
        case 0x3a1e08u: goto label_3a1e08;
        case 0x3a1e0cu: goto label_3a1e0c;
        case 0x3a1e10u: goto label_3a1e10;
        case 0x3a1e14u: goto label_3a1e14;
        case 0x3a1e18u: goto label_3a1e18;
        case 0x3a1e1cu: goto label_3a1e1c;
        case 0x3a1e20u: goto label_3a1e20;
        case 0x3a1e24u: goto label_3a1e24;
        case 0x3a1e28u: goto label_3a1e28;
        case 0x3a1e2cu: goto label_3a1e2c;
        case 0x3a1e30u: goto label_3a1e30;
        case 0x3a1e34u: goto label_3a1e34;
        case 0x3a1e38u: goto label_3a1e38;
        case 0x3a1e3cu: goto label_3a1e3c;
        case 0x3a1e40u: goto label_3a1e40;
        case 0x3a1e44u: goto label_3a1e44;
        case 0x3a1e48u: goto label_3a1e48;
        case 0x3a1e4cu: goto label_3a1e4c;
        case 0x3a1e50u: goto label_3a1e50;
        case 0x3a1e54u: goto label_3a1e54;
        case 0x3a1e58u: goto label_3a1e58;
        case 0x3a1e5cu: goto label_3a1e5c;
        case 0x3a1e60u: goto label_3a1e60;
        case 0x3a1e64u: goto label_3a1e64;
        case 0x3a1e68u: goto label_3a1e68;
        case 0x3a1e6cu: goto label_3a1e6c;
        case 0x3a1e70u: goto label_3a1e70;
        case 0x3a1e74u: goto label_3a1e74;
        case 0x3a1e78u: goto label_3a1e78;
        case 0x3a1e7cu: goto label_3a1e7c;
        case 0x3a1e80u: goto label_3a1e80;
        case 0x3a1e84u: goto label_3a1e84;
        case 0x3a1e88u: goto label_3a1e88;
        case 0x3a1e8cu: goto label_3a1e8c;
        case 0x3a1e90u: goto label_3a1e90;
        case 0x3a1e94u: goto label_3a1e94;
        case 0x3a1e98u: goto label_3a1e98;
        case 0x3a1e9cu: goto label_3a1e9c;
        case 0x3a1ea0u: goto label_3a1ea0;
        case 0x3a1ea4u: goto label_3a1ea4;
        case 0x3a1ea8u: goto label_3a1ea8;
        case 0x3a1eacu: goto label_3a1eac;
        case 0x3a1eb0u: goto label_3a1eb0;
        case 0x3a1eb4u: goto label_3a1eb4;
        case 0x3a1eb8u: goto label_3a1eb8;
        case 0x3a1ebcu: goto label_3a1ebc;
        case 0x3a1ec0u: goto label_3a1ec0;
        case 0x3a1ec4u: goto label_3a1ec4;
        case 0x3a1ec8u: goto label_3a1ec8;
        case 0x3a1eccu: goto label_3a1ecc;
        case 0x3a1ed0u: goto label_3a1ed0;
        case 0x3a1ed4u: goto label_3a1ed4;
        case 0x3a1ed8u: goto label_3a1ed8;
        case 0x3a1edcu: goto label_3a1edc;
        case 0x3a1ee0u: goto label_3a1ee0;
        case 0x3a1ee4u: goto label_3a1ee4;
        case 0x3a1ee8u: goto label_3a1ee8;
        case 0x3a1eecu: goto label_3a1eec;
        case 0x3a1ef0u: goto label_3a1ef0;
        case 0x3a1ef4u: goto label_3a1ef4;
        case 0x3a1ef8u: goto label_3a1ef8;
        case 0x3a1efcu: goto label_3a1efc;
        case 0x3a1f00u: goto label_3a1f00;
        case 0x3a1f04u: goto label_3a1f04;
        case 0x3a1f08u: goto label_3a1f08;
        case 0x3a1f0cu: goto label_3a1f0c;
        case 0x3a1f10u: goto label_3a1f10;
        case 0x3a1f14u: goto label_3a1f14;
        case 0x3a1f18u: goto label_3a1f18;
        case 0x3a1f1cu: goto label_3a1f1c;
        case 0x3a1f20u: goto label_3a1f20;
        case 0x3a1f24u: goto label_3a1f24;
        case 0x3a1f28u: goto label_3a1f28;
        case 0x3a1f2cu: goto label_3a1f2c;
        case 0x3a1f30u: goto label_3a1f30;
        case 0x3a1f34u: goto label_3a1f34;
        case 0x3a1f38u: goto label_3a1f38;
        case 0x3a1f3cu: goto label_3a1f3c;
        case 0x3a1f40u: goto label_3a1f40;
        case 0x3a1f44u: goto label_3a1f44;
        case 0x3a1f48u: goto label_3a1f48;
        case 0x3a1f4cu: goto label_3a1f4c;
        case 0x3a1f50u: goto label_3a1f50;
        case 0x3a1f54u: goto label_3a1f54;
        case 0x3a1f58u: goto label_3a1f58;
        case 0x3a1f5cu: goto label_3a1f5c;
        case 0x3a1f60u: goto label_3a1f60;
        case 0x3a1f64u: goto label_3a1f64;
        case 0x3a1f68u: goto label_3a1f68;
        case 0x3a1f6cu: goto label_3a1f6c;
        case 0x3a1f70u: goto label_3a1f70;
        case 0x3a1f74u: goto label_3a1f74;
        case 0x3a1f78u: goto label_3a1f78;
        case 0x3a1f7cu: goto label_3a1f7c;
        case 0x3a1f80u: goto label_3a1f80;
        case 0x3a1f84u: goto label_3a1f84;
        case 0x3a1f88u: goto label_3a1f88;
        case 0x3a1f8cu: goto label_3a1f8c;
        case 0x3a1f90u: goto label_3a1f90;
        case 0x3a1f94u: goto label_3a1f94;
        case 0x3a1f98u: goto label_3a1f98;
        case 0x3a1f9cu: goto label_3a1f9c;
        case 0x3a1fa0u: goto label_3a1fa0;
        case 0x3a1fa4u: goto label_3a1fa4;
        case 0x3a1fa8u: goto label_3a1fa8;
        case 0x3a1facu: goto label_3a1fac;
        case 0x3a1fb0u: goto label_3a1fb0;
        case 0x3a1fb4u: goto label_3a1fb4;
        case 0x3a1fb8u: goto label_3a1fb8;
        case 0x3a1fbcu: goto label_3a1fbc;
        case 0x3a1fc0u: goto label_3a1fc0;
        case 0x3a1fc4u: goto label_3a1fc4;
        case 0x3a1fc8u: goto label_3a1fc8;
        case 0x3a1fccu: goto label_3a1fcc;
        case 0x3a1fd0u: goto label_3a1fd0;
        case 0x3a1fd4u: goto label_3a1fd4;
        case 0x3a1fd8u: goto label_3a1fd8;
        case 0x3a1fdcu: goto label_3a1fdc;
        case 0x3a1fe0u: goto label_3a1fe0;
        case 0x3a1fe4u: goto label_3a1fe4;
        case 0x3a1fe8u: goto label_3a1fe8;
        case 0x3a1fecu: goto label_3a1fec;
        case 0x3a1ff0u: goto label_3a1ff0;
        case 0x3a1ff4u: goto label_3a1ff4;
        case 0x3a1ff8u: goto label_3a1ff8;
        case 0x3a1ffcu: goto label_3a1ffc;
        case 0x3a2000u: goto label_3a2000;
        case 0x3a2004u: goto label_3a2004;
        case 0x3a2008u: goto label_3a2008;
        case 0x3a200cu: goto label_3a200c;
        case 0x3a2010u: goto label_3a2010;
        case 0x3a2014u: goto label_3a2014;
        case 0x3a2018u: goto label_3a2018;
        case 0x3a201cu: goto label_3a201c;
        case 0x3a2020u: goto label_3a2020;
        case 0x3a2024u: goto label_3a2024;
        case 0x3a2028u: goto label_3a2028;
        case 0x3a202cu: goto label_3a202c;
        case 0x3a2030u: goto label_3a2030;
        case 0x3a2034u: goto label_3a2034;
        case 0x3a2038u: goto label_3a2038;
        case 0x3a203cu: goto label_3a203c;
        default: break;
    }

    ctx->pc = 0x3a0cc0u;

label_3a0cc0:
    // 0x3a0cc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a0cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a0cc4:
    // 0x3a0cc4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3a0cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0cc8:
    // 0x3a0cc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a0ccc:
    // 0x3a0ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a0cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a0cd0:
    // 0x3a0cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a0cd4:
    // 0x3a0cd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a0cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cd8:
    // 0x3a0cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a0cdc:
    // 0x3a0cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0ce0:
    // 0x3a0ce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a0ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ce4:
    // 0x3a0ce4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a0ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ce8:
    // 0x3a0ce8: 0xc10ca68  jal         func_4329A0
label_3a0cec:
    if (ctx->pc == 0x3A0CECu) {
        ctx->pc = 0x3A0CECu;
            // 0x3a0cec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A0CF0u;
        goto label_3a0cf0;
    }
    ctx->pc = 0x3A0CE8u;
    SET_GPR_U32(ctx, 31, 0x3A0CF0u);
    ctx->pc = 0x3A0CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0CE8u;
            // 0x3a0cec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0CF0u; }
        if (ctx->pc != 0x3A0CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0CF0u; }
        if (ctx->pc != 0x3A0CF0u) { return; }
    }
    ctx->pc = 0x3A0CF0u;
label_3a0cf0:
    // 0x3a0cf0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a0cf4:
    // 0x3a0cf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a0cf8:
    // 0x3a0cf8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3a0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3a0cfc:
    // 0x3a0cfc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3a0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3a0d00:
    // 0x3a0d00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3a0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3a0d04:
    // 0x3a0d04: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3a0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3a0d08:
    // 0x3a0d08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3a0d0c:
    // 0x3a0d0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a0d10:
    // 0x3a0d10: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3a0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3a0d14:
    // 0x3a0d14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a0d18:
    // 0x3a0d18: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3a0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3a0d1c:
    // 0x3a0d1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3a0d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3a0d20:
    // 0x3a0d20: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3a0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3a0d24:
    // 0x3a0d24: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3a0d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3a0d28:
    // 0x3a0d28: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3a0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3a0d2c:
    // 0x3a0d2c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3a0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3a0d30:
    // 0x3a0d30: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3a0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3a0d34:
    // 0x3a0d34: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3a0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3a0d38:
    // 0x3a0d38: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3a0d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3a0d3c:
    // 0x3a0d3c: 0xc0582cc  jal         func_160B30
label_3a0d40:
    if (ctx->pc == 0x3A0D40u) {
        ctx->pc = 0x3A0D40u;
            // 0x3a0d40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3A0D44u;
        goto label_3a0d44;
    }
    ctx->pc = 0x3A0D3Cu;
    SET_GPR_U32(ctx, 31, 0x3A0D44u);
    ctx->pc = 0x3A0D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0D3Cu;
            // 0x3a0d40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0D44u; }
        if (ctx->pc != 0x3A0D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0D44u; }
        if (ctx->pc != 0x3A0D44u) { return; }
    }
    ctx->pc = 0x3A0D44u;
label_3a0d44:
    // 0x3a0d44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3a0d48:
    // 0x3a0d48: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3a0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3a0d4c:
    // 0x3a0d4c: 0x246386d8  addiu       $v1, $v1, -0x7928
    ctx->pc = 0x3a0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936280));
label_3a0d50:
    // 0x3a0d50: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3a0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3a0d54:
    // 0x3a0d54: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3a0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3a0d58:
    // 0x3a0d58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a0d5c:
    // 0x3a0d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3a0d60:
    // 0x3a0d60: 0xac446498  sw          $a0, 0x6498($v0)
    ctx->pc = 0x3a0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25752), GPR_U32(ctx, 4));
label_3a0d64:
    // 0x3a0d64: 0x246386f0  addiu       $v1, $v1, -0x7910
    ctx->pc = 0x3a0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936304));
label_3a0d68:
    // 0x3a0d68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a0d6c:
    // 0x3a0d6c: 0x24428728  addiu       $v0, $v0, -0x78D8
    ctx->pc = 0x3a0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
label_3a0d70:
    // 0x3a0d70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3a0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3a0d74:
    // 0x3a0d74: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3a0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3a0d78:
    // 0x3a0d78: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3a0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3a0d7c:
    // 0x3a0d7c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3a0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3a0d80:
    // 0x3a0d80: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3a0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3a0d84:
    // 0x3a0d84: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3a0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3a0d88:
    // 0x3a0d88: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3a0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3a0d8c:
    // 0x3a0d8c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3a0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3a0d90:
    // 0x3a0d90: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3a0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3a0d94:
    // 0x3a0d94: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3a0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3a0d98:
    // 0x3a0d98: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3a0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3a0d9c:
    // 0x3a0d9c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3a0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3a0da0:
    // 0x3a0da0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x3a0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_3a0da4:
    // 0x3a0da4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x3a0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_3a0da8:
    // 0x3a0da8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x3a0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_3a0dac:
    // 0x3a0dac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x3a0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_3a0db0:
    // 0x3a0db0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x3a0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_3a0db4:
    // 0x3a0db4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x3a0db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_3a0db8:
    // 0x3a0db8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3a0db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3a0dbc:
    // 0x3a0dbc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3a0dc0:
    if (ctx->pc == 0x3A0DC0u) {
        ctx->pc = 0x3A0DC4u;
        goto label_3a0dc4;
    }
    ctx->pc = 0x3A0DBCu;
    {
        const bool branch_taken_0x3a0dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0dbc) {
            ctx->pc = 0x3A0E50u;
            goto label_3a0e50;
        }
    }
    ctx->pc = 0x3A0DC4u;
label_3a0dc4:
    // 0x3a0dc4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3a0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3a0dc8:
    // 0x3a0dc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a0dcc:
    // 0x3a0dcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a0dd0:
    // 0x3a0dd0: 0xc040138  jal         func_1004E0
label_3a0dd4:
    if (ctx->pc == 0x3A0DD4u) {
        ctx->pc = 0x3A0DD4u;
            // 0x3a0dd4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3A0DD8u;
        goto label_3a0dd8;
    }
    ctx->pc = 0x3A0DD0u;
    SET_GPR_U32(ctx, 31, 0x3A0DD8u);
    ctx->pc = 0x3A0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0DD0u;
            // 0x3a0dd4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0DD8u; }
        if (ctx->pc != 0x3A0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0DD8u; }
        if (ctx->pc != 0x3A0DD8u) { return; }
    }
    ctx->pc = 0x3A0DD8u;
label_3a0dd8:
    // 0x3a0dd8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a0dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_3a0ddc:
    // 0x3a0ddc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x3a0ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_3a0de0:
    // 0x3a0de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a0de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0de4:
    // 0x3a0de4: 0x24a50e70  addiu       $a1, $a1, 0xE70
    ctx->pc = 0x3a0de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
label_3a0de8:
    // 0x3a0de8: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x3a0de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_3a0dec:
    // 0x3a0dec: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x3a0decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_3a0df0:
    // 0x3a0df0: 0xc040840  jal         func_102100
label_3a0df4:
    if (ctx->pc == 0x3A0DF4u) {
        ctx->pc = 0x3A0DF4u;
            // 0x3a0df4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DF8u;
        goto label_3a0df8;
    }
    ctx->pc = 0x3A0DF0u;
    SET_GPR_U32(ctx, 31, 0x3A0DF8u);
    ctx->pc = 0x3A0DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0DF0u;
            // 0x3a0df4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0DF8u; }
        if (ctx->pc != 0x3A0DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0DF8u; }
        if (ctx->pc != 0x3A0DF8u) { return; }
    }
    ctx->pc = 0x3A0DF8u;
label_3a0df8:
    // 0x3a0df8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3a0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3a0dfc:
    // 0x3a0dfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a0dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0e00:
    // 0x3a0e00: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3a0e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3a0e04:
    // 0x3a0e04: 0xc0788fc  jal         func_1E23F0
label_3a0e08:
    if (ctx->pc == 0x3A0E08u) {
        ctx->pc = 0x3A0E08u;
            // 0x3a0e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E0Cu;
        goto label_3a0e0c;
    }
    ctx->pc = 0x3A0E04u;
    SET_GPR_U32(ctx, 31, 0x3A0E0Cu);
    ctx->pc = 0x3A0E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0E04u;
            // 0x3a0e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E0Cu; }
        if (ctx->pc != 0x3A0E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E0Cu; }
        if (ctx->pc != 0x3A0E0Cu) { return; }
    }
    ctx->pc = 0x3A0E0Cu;
label_3a0e0c:
    // 0x3a0e0c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3a0e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3a0e10:
    // 0x3a0e10: 0xc0788fc  jal         func_1E23F0
label_3a0e14:
    if (ctx->pc == 0x3A0E14u) {
        ctx->pc = 0x3A0E14u;
            // 0x3a0e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E18u;
        goto label_3a0e18;
    }
    ctx->pc = 0x3A0E10u;
    SET_GPR_U32(ctx, 31, 0x3A0E18u);
    ctx->pc = 0x3A0E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0E10u;
            // 0x3a0e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E18u; }
        if (ctx->pc != 0x3A0E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E18u; }
        if (ctx->pc != 0x3A0E18u) { return; }
    }
    ctx->pc = 0x3A0E18u;
label_3a0e18:
    // 0x3a0e18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a0e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0e1c:
    // 0x3a0e1c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3a0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3a0e20:
    // 0x3a0e20: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3a0e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3a0e24:
    // 0x3a0e24: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3a0e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3a0e28:
    // 0x3a0e28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a0e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0e2c:
    // 0x3a0e2c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3a0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3a0e30:
    // 0x3a0e30: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3a0e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3a0e34:
    // 0x3a0e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a0e38:
    // 0x3a0e38: 0xc0a997c  jal         func_2A65F0
label_3a0e3c:
    if (ctx->pc == 0x3A0E3Cu) {
        ctx->pc = 0x3A0E3Cu;
            // 0x3a0e3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3A0E40u;
        goto label_3a0e40;
    }
    ctx->pc = 0x3A0E38u;
    SET_GPR_U32(ctx, 31, 0x3A0E40u);
    ctx->pc = 0x3A0E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0E38u;
            // 0x3a0e3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E40u; }
        if (ctx->pc != 0x3A0E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0E40u; }
        if (ctx->pc != 0x3A0E40u) { return; }
    }
    ctx->pc = 0x3A0E40u;
label_3a0e40:
    // 0x3a0e40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a0e44:
    // 0x3a0e44: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3a0e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3a0e48:
    // 0x3a0e48: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3a0e4c:
    if (ctx->pc == 0x3A0E4Cu) {
        ctx->pc = 0x3A0E4Cu;
            // 0x3a0e4c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x3A0E50u;
        goto label_3a0e50;
    }
    ctx->pc = 0x3A0E48u;
    {
        const bool branch_taken_0x3a0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0E48u;
            // 0x3a0e4c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e48) {
            ctx->pc = 0x3A0E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a0e1c;
        }
    }
    ctx->pc = 0x3A0E50u;
label_3a0e50:
    // 0x3a0e50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a0e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a0e54:
    // 0x3a0e54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a0e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0e58:
    // 0x3a0e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a0e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a0e5c:
    // 0x3a0e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a0e60:
    // 0x3a0e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0e64:
    // 0x3a0e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0e68:
    // 0x3a0e68: 0x3e00008  jr          $ra
label_3a0e6c:
    if (ctx->pc == 0x3A0E6Cu) {
        ctx->pc = 0x3A0E6Cu;
            // 0x3a0e6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3A0E70u;
        goto label_3a0e70;
    }
    ctx->pc = 0x3A0E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0E68u;
            // 0x3a0e6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0E70u;
label_3a0e70:
    // 0x3a0e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a0e74:
    // 0x3a0e74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a0e78:
    // 0x3a0e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a0e7c:
    // 0x3a0e7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a0e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a0e80:
    // 0x3a0e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0e84:
    // 0x3a0e84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3a0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3a0e88:
    // 0x3a0e88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a0e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a0e8c:
    // 0x3a0e8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3a0e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3a0e90:
    // 0x3a0e90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3a0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_3a0e94:
    // 0x3a0e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0e98:
    // 0x3a0e98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a0e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3a0e9c:
    // 0x3a0e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ea0:
    // 0x3a0ea0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_3a0ea4:
    // 0x3a0ea4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3a0ea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3a0ea8:
    // 0x3a0ea8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3a0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_3a0eac:
    // 0x3a0eac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3a0eacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3a0eb0:
    // 0x3a0eb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3a0eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_3a0eb4:
    // 0x3a0eb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3a0eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_3a0eb8:
    // 0x3a0eb8: 0xc04cbd8  jal         func_132F60
label_3a0ebc:
    if (ctx->pc == 0x3A0EBCu) {
        ctx->pc = 0x3A0EBCu;
            // 0x3a0ebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3A0EC0u;
        goto label_3a0ec0;
    }
    ctx->pc = 0x3A0EB8u;
    SET_GPR_U32(ctx, 31, 0x3A0EC0u);
    ctx->pc = 0x3A0EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0EB8u;
            // 0x3a0ebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0EC0u; }
        if (ctx->pc != 0x3A0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0EC0u; }
        if (ctx->pc != 0x3A0EC0u) { return; }
    }
    ctx->pc = 0x3A0EC0u;
label_3a0ec0:
    // 0x3a0ec0: 0xc04c968  jal         func_1325A0
label_3a0ec4:
    if (ctx->pc == 0x3A0EC4u) {
        ctx->pc = 0x3A0EC4u;
            // 0x3a0ec4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3A0EC8u;
        goto label_3a0ec8;
    }
    ctx->pc = 0x3A0EC0u;
    SET_GPR_U32(ctx, 31, 0x3A0EC8u);
    ctx->pc = 0x3A0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0EC0u;
            // 0x3a0ec4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0EC8u; }
        if (ctx->pc != 0x3A0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0EC8u; }
        if (ctx->pc != 0x3A0EC8u) { return; }
    }
    ctx->pc = 0x3A0EC8u;
label_3a0ec8:
    // 0x3a0ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a0ecc:
    // 0x3a0ecc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x3a0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_3a0ed0:
    // 0x3a0ed0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x3a0ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a0ed4:
    // 0x3a0ed4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3a0ed8:
    // 0x3a0ed8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x3a0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
label_3a0edc:
    // 0x3a0edc: 0x24638790  addiu       $v1, $v1, -0x7870
    ctx->pc = 0x3a0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936464));
label_3a0ee0:
    // 0x3a0ee0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x3a0ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_3a0ee4:
    // 0x3a0ee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ee8:
    // 0x3a0ee8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3a0eec:
    // 0x3a0eec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3a0eecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a0ef0:
    // 0x3a0ef0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x3a0ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
label_3a0ef4:
    // 0x3a0ef4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3a0ef8:
    // 0x3a0ef8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3a0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3a0efc:
    // 0x3a0efc: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3a0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_3a0f00:
    // 0x3a0f00: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x3a0f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_3a0f04:
    // 0x3a0f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0f08:
    // 0x3a0f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0f0c:
    // 0x3a0f0c: 0x3e00008  jr          $ra
label_3a0f10:
    if (ctx->pc == 0x3A0F10u) {
        ctx->pc = 0x3A0F10u;
            // 0x3a0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A0F14u;
        goto label_3a0f14;
    }
    ctx->pc = 0x3A0F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F0Cu;
            // 0x3a0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0F14u;
label_3a0f14:
    // 0x3a0f14: 0x0  nop
    ctx->pc = 0x3a0f14u;
    // NOP
label_3a0f18:
    // 0x3a0f18: 0x0  nop
    ctx->pc = 0x3a0f18u;
    // NOP
label_3a0f1c:
    // 0x3a0f1c: 0x0  nop
    ctx->pc = 0x3a0f1cu;
    // NOP
label_3a0f20:
    // 0x3a0f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a0f24:
    // 0x3a0f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a0f28:
    // 0x3a0f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0f2c:
    // 0x3a0f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0f30:
    // 0x3a0f30: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x3a0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3a0f34:
    // 0x3a0f34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a0f38:
    if (ctx->pc == 0x3A0F38u) {
        ctx->pc = 0x3A0F38u;
            // 0x3a0f38: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x3A0F3Cu;
        goto label_3a0f3c;
    }
    ctx->pc = 0x3A0F34u;
    {
        const bool branch_taken_0x3a0f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0f34) {
            ctx->pc = 0x3A0F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F34u;
            // 0x3a0f38: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0F50u;
            goto label_3a0f50;
        }
    }
    ctx->pc = 0x3A0F3Cu;
label_3a0f3c:
    // 0x3a0f3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a0f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a0f40:
    // 0x3a0f40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a0f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a0f44:
    // 0x3a0f44: 0x320f809  jalr        $t9
label_3a0f48:
    if (ctx->pc == 0x3A0F48u) {
        ctx->pc = 0x3A0F48u;
            // 0x3a0f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A0F4Cu;
        goto label_3a0f4c;
    }
    ctx->pc = 0x3A0F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A0F4Cu);
        ctx->pc = 0x3A0F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F44u;
            // 0x3a0f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A0F4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A0F4Cu; }
            if (ctx->pc != 0x3A0F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A0F4Cu;
label_3a0f4c:
    // 0x3a0f4c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3a0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_3a0f50:
    // 0x3a0f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0f54:
    // 0x3a0f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0f58:
    // 0x3a0f58: 0x3e00008  jr          $ra
label_3a0f5c:
    if (ctx->pc == 0x3A0F5Cu) {
        ctx->pc = 0x3A0F5Cu;
            // 0x3a0f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A0F60u;
        goto label_3a0f60;
    }
    ctx->pc = 0x3A0F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F58u;
            // 0x3a0f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0F60u;
label_3a0f60:
    // 0x3a0f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a0f64:
    // 0x3a0f64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a0f68:
    // 0x3a0f68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a0f6c:
    // 0x3a0f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a0f70:
    // 0x3a0f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0f74:
    // 0x3a0f74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3a0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3a0f78:
    // 0x3a0f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0f7c:
    // 0x3a0f7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3a0f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a0f80:
    // 0x3a0f80: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x3a0f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_3a0f84:
    // 0x3a0f84: 0x50a40031  beql        $a1, $a0, . + 4 + (0x31 << 2)
label_3a0f88:
    if (ctx->pc == 0x3A0F88u) {
        ctx->pc = 0x3A0F88u;
            // 0x3a0f88: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3A0F8Cu;
        goto label_3a0f8c;
    }
    ctx->pc = 0x3A0F84u;
    {
        const bool branch_taken_0x3a0f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a0f84) {
            ctx->pc = 0x3A0F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F84u;
            // 0x3a0f88: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A104Cu;
            goto label_3a104c;
        }
    }
    ctx->pc = 0x3A0F8Cu;
label_3a0f8c:
    // 0x3a0f8c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a0f90:
    // 0x3a0f90: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3a0f94:
    if (ctx->pc == 0x3A0F94u) {
        ctx->pc = 0x3A0F94u;
            // 0x3a0f94: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3A0F98u;
        goto label_3a0f98;
    }
    ctx->pc = 0x3A0F90u;
    {
        const bool branch_taken_0x3a0f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0f90) {
            ctx->pc = 0x3A0F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F90u;
            // 0x3a0f94: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0FA0u;
            goto label_3a0fa0;
        }
    }
    ctx->pc = 0x3A0F98u;
label_3a0f98:
    // 0x3a0f98: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3a0f9c:
    if (ctx->pc == 0x3A0F9Cu) {
        ctx->pc = 0x3A0F9Cu;
            // 0x3a0f9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3A0FA0u;
        goto label_3a0fa0;
    }
    ctx->pc = 0x3A0F98u;
    {
        const bool branch_taken_0x3a0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0F98u;
            // 0x3a0f9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f98) {
            ctx->pc = 0x3A10C4u;
            goto label_3a10c4;
        }
    }
    ctx->pc = 0x3A0FA0u;
label_3a0fa0:
    // 0x3a0fa0: 0xc040180  jal         func_100600
label_3a0fa4:
    if (ctx->pc == 0x3A0FA4u) {
        ctx->pc = 0x3A0FA8u;
        goto label_3a0fa8;
    }
    ctx->pc = 0x3A0FA0u;
    SET_GPR_U32(ctx, 31, 0x3A0FA8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FA8u; }
        if (ctx->pc != 0x3A0FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FA8u; }
        if (ctx->pc != 0x3A0FA8u) { return; }
    }
    ctx->pc = 0x3A0FA8u;
label_3a0fa8:
    // 0x3a0fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a0fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0fac:
    // 0x3a0fac: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_3a0fb0:
    if (ctx->pc == 0x3A0FB0u) {
        ctx->pc = 0x3A0FB0u;
            // 0x3a0fb0: 0x3c034774  lui         $v1, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x3A0FB4u;
        goto label_3a0fb4;
    }
    ctx->pc = 0x3A0FACu;
    {
        const bool branch_taken_0x3a0fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0fac) {
            ctx->pc = 0x3A0FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0FACu;
            // 0x3a0fb0: 0x3c034774  lui         $v1, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0FECu;
            goto label_3a0fec;
        }
    }
    ctx->pc = 0x3A0FB4u;
label_3a0fb4:
    // 0x3a0fb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a0fb8:
    // 0x3a0fb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a0fbc:
    // 0x3a0fbc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3a0fc0:
    // 0x3a0fc0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3a0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3a0fc4:
    // 0x3a0fc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3a0fc8:
    // 0x3a0fc8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a0fcc:
    // 0x3a0fcc: 0xc040138  jal         func_1004E0
label_3a0fd0:
    if (ctx->pc == 0x3A0FD0u) {
        ctx->pc = 0x3A0FD0u;
            // 0x3a0fd0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3A0FD4u;
        goto label_3a0fd4;
    }
    ctx->pc = 0x3A0FCCu;
    SET_GPR_U32(ctx, 31, 0x3A0FD4u);
    ctx->pc = 0x3A0FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0FCCu;
            // 0x3a0fd0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FD4u; }
        if (ctx->pc != 0x3A0FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FD4u; }
        if (ctx->pc != 0x3A0FD4u) { return; }
    }
    ctx->pc = 0x3A0FD4u;
label_3a0fd4:
    // 0x3a0fd4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3a0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3a0fd8:
    // 0x3a0fd8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3a0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3a0fdc:
    // 0x3a0fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0fe0:
    // 0x3a0fe0: 0xc04a576  jal         func_1295D8
label_3a0fe4:
    if (ctx->pc == 0x3A0FE4u) {
        ctx->pc = 0x3A0FE4u;
            // 0x3a0fe4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A0FE8u;
        goto label_3a0fe8;
    }
    ctx->pc = 0x3A0FE0u;
    SET_GPR_U32(ctx, 31, 0x3A0FE8u);
    ctx->pc = 0x3A0FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0FE0u;
            // 0x3a0fe4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FE8u; }
        if (ctx->pc != 0x3A0FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0FE8u; }
        if (ctx->pc != 0x3A0FE8u) { return; }
    }
    ctx->pc = 0x3A0FE8u;
label_3a0fe8:
    // 0x3a0fe8: 0x3c034774  lui         $v1, 0x4774
    ctx->pc = 0x3a0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
label_3a0fec:
    // 0x3a0fec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3a0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3a0ff0:
    // 0x3a0ff0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x3a0ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_3a0ff4:
    // 0x3a0ff4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3a0ff8:
    // 0x3a0ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ffc:
    // 0x3a0ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1000:
    // 0x3a1000: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3a1000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1004:
    // 0x3a1004: 0x240612ae  addiu       $a2, $zero, 0x12AE
    ctx->pc = 0x3a1004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4782));
label_3a1008:
    // 0x3a1008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a1008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a100c:
    // 0x3a100c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a100cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1010:
    // 0x3a1010: 0xc122cd8  jal         func_48B360
label_3a1014:
    if (ctx->pc == 0x3A1014u) {
        ctx->pc = 0x3A1014u;
            // 0x3a1014: 0xae11007c  sw          $s1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
        ctx->pc = 0x3A1018u;
        goto label_3a1018;
    }
    ctx->pc = 0x3A1010u;
    SET_GPR_U32(ctx, 31, 0x3A1018u);
    ctx->pc = 0x3A1014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1010u;
            // 0x3a1014: 0xae11007c  sw          $s1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1018u; }
        if (ctx->pc != 0x3A1018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1018u; }
        if (ctx->pc != 0x3A1018u) { return; }
    }
    ctx->pc = 0x3A1018u;
label_3a1018:
    // 0x3a1018: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x3a1018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_3a101c:
    // 0x3a101c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3a101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3a1020:
    // 0x3a1020: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x3a1020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_3a1024:
    // 0x3a1024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1028:
    // 0x3a1028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a1028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a102c:
    // 0x3a102c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a102cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1030:
    // 0x3a1030: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a1030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a1034:
    // 0x3a1034: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a1034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a1038:
    // 0x3a1038: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3a1038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a103c:
    // 0x3a103c: 0xc122cd8  jal         func_48B360
label_3a1040:
    if (ctx->pc == 0x3A1040u) {
        ctx->pc = 0x3A1040u;
            // 0x3a1040: 0x344612ae  ori         $a2, $v0, 0x12AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4782);
        ctx->pc = 0x3A1044u;
        goto label_3a1044;
    }
    ctx->pc = 0x3A103Cu;
    SET_GPR_U32(ctx, 31, 0x3A1044u);
    ctx->pc = 0x3A1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A103Cu;
            // 0x3a1040: 0x344612ae  ori         $a2, $v0, 0x12AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4782);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1044u; }
        if (ctx->pc != 0x3A1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1044u; }
        if (ctx->pc != 0x3A1044u) { return; }
    }
    ctx->pc = 0x3A1044u;
label_3a1044:
    // 0x3a1044: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a1048:
    if (ctx->pc == 0x3A1048u) {
        ctx->pc = 0x3A104Cu;
        goto label_3a104c;
    }
    ctx->pc = 0x3A1044u;
    {
        const bool branch_taken_0x3a1044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1044) {
            ctx->pc = 0x3A10C0u;
            goto label_3a10c0;
        }
    }
    ctx->pc = 0x3A104Cu;
label_3a104c:
    // 0x3a104c: 0xc040180  jal         func_100600
label_3a1050:
    if (ctx->pc == 0x3A1050u) {
        ctx->pc = 0x3A1054u;
        goto label_3a1054;
    }
    ctx->pc = 0x3A104Cu;
    SET_GPR_U32(ctx, 31, 0x3A1054u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1054u; }
        if (ctx->pc != 0x3A1054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1054u; }
        if (ctx->pc != 0x3A1054u) { return; }
    }
    ctx->pc = 0x3A1054u;
label_3a1054:
    // 0x3a1054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a1054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1058:
    // 0x3a1058: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_3a105c:
    if (ctx->pc == 0x3A105Cu) {
        ctx->pc = 0x3A105Cu;
            // 0x3a105c: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x3A1060u;
        goto label_3a1060;
    }
    ctx->pc = 0x3A1058u;
    {
        const bool branch_taken_0x3a1058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1058) {
            ctx->pc = 0x3A105Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1058u;
            // 0x3a105c: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1098u;
            goto label_3a1098;
        }
    }
    ctx->pc = 0x3A1060u;
label_3a1060:
    // 0x3a1060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a1060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a1064:
    // 0x3a1064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1068:
    // 0x3a1068: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3a1068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3a106c:
    // 0x3a106c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3a106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3a1070:
    // 0x3a1070: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a1070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3a1074:
    // 0x3a1074: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a1074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a1078:
    // 0x3a1078: 0xc040138  jal         func_1004E0
label_3a107c:
    if (ctx->pc == 0x3A107Cu) {
        ctx->pc = 0x3A107Cu;
            // 0x3a107c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3A1080u;
        goto label_3a1080;
    }
    ctx->pc = 0x3A1078u;
    SET_GPR_U32(ctx, 31, 0x3A1080u);
    ctx->pc = 0x3A107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1078u;
            // 0x3a107c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1080u; }
        if (ctx->pc != 0x3A1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1080u; }
        if (ctx->pc != 0x3A1080u) { return; }
    }
    ctx->pc = 0x3A1080u;
label_3a1080:
    // 0x3a1080: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3a1080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3a1084:
    // 0x3a1084: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3a1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3a1088:
    // 0x3a1088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a1088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a108c:
    // 0x3a108c: 0xc04a576  jal         func_1295D8
label_3a1090:
    if (ctx->pc == 0x3A1090u) {
        ctx->pc = 0x3A1090u;
            // 0x3a1090: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A1094u;
        goto label_3a1094;
    }
    ctx->pc = 0x3A108Cu;
    SET_GPR_U32(ctx, 31, 0x3A1094u);
    ctx->pc = 0x3A1090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A108Cu;
            // 0x3a1090: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1094u; }
        if (ctx->pc != 0x3A1094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1094u; }
        if (ctx->pc != 0x3A1094u) { return; }
    }
    ctx->pc = 0x3A1094u;
label_3a1094:
    // 0x3a1094: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x3a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_3a1098:
    // 0x3a1098: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3a109c:
    // 0x3a109c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3a109cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_3a10a0:
    // 0x3a10a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a10a4:
    // 0x3a10a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a10a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a10a8:
    // 0x3a10a8: 0x240615ae  addiu       $a2, $zero, 0x15AE
    ctx->pc = 0x3a10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5550));
label_3a10ac:
    // 0x3a10ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3a10acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a10b0:
    // 0x3a10b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a10b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a10b4:
    // 0x3a10b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a10b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a10b8:
    // 0x3a10b8: 0xc122cd8  jal         func_48B360
label_3a10bc:
    if (ctx->pc == 0x3A10BCu) {
        ctx->pc = 0x3A10BCu;
            // 0x3a10bc: 0xae11007c  sw          $s1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
        ctx->pc = 0x3A10C0u;
        goto label_3a10c0;
    }
    ctx->pc = 0x3A10B8u;
    SET_GPR_U32(ctx, 31, 0x3A10C0u);
    ctx->pc = 0x3A10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A10B8u;
            // 0x3a10bc: 0xae11007c  sw          $s1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A10C0u; }
        if (ctx->pc != 0x3A10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A10C0u; }
        if (ctx->pc != 0x3A10C0u) { return; }
    }
    ctx->pc = 0x3A10C0u;
label_3a10c0:
    // 0x3a10c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a10c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a10c4:
    // 0x3a10c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a10c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a10c8:
    // 0x3a10c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a10c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a10cc:
    // 0x3a10cc: 0x3e00008  jr          $ra
label_3a10d0:
    if (ctx->pc == 0x3A10D0u) {
        ctx->pc = 0x3A10D0u;
            // 0x3a10d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A10D4u;
        goto label_3a10d4;
    }
    ctx->pc = 0x3A10CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A10D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A10CCu;
            // 0x3a10d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A10D4u;
label_3a10d4:
    // 0x3a10d4: 0x0  nop
    ctx->pc = 0x3a10d4u;
    // NOP
label_3a10d8:
    // 0x3a10d8: 0x0  nop
    ctx->pc = 0x3a10d8u;
    // NOP
label_3a10dc:
    // 0x3a10dc: 0x0  nop
    ctx->pc = 0x3a10dcu;
    // NOP
label_3a10e0:
    // 0x3a10e0: 0x3e00008  jr          $ra
label_3a10e4:
    if (ctx->pc == 0x3A10E4u) {
        ctx->pc = 0x3A10E4u;
            // 0x3a10e4: 0x2402083e  addiu       $v0, $zero, 0x83E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2110));
        ctx->pc = 0x3A10E8u;
        goto label_3a10e8;
    }
    ctx->pc = 0x3A10E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A10E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A10E0u;
            // 0x3a10e4: 0x2402083e  addiu       $v0, $zero, 0x83E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A10E8u;
label_3a10e8:
    // 0x3a10e8: 0x0  nop
    ctx->pc = 0x3a10e8u;
    // NOP
label_3a10ec:
    // 0x3a10ec: 0x0  nop
    ctx->pc = 0x3a10ecu;
    // NOP
label_3a10f0:
    // 0x3a10f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a10f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a10f4:
    // 0x3a10f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a10f8:
    // 0x3a10f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a10f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a10fc:
    // 0x3a10fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a10fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a1100:
    // 0x3a1100: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a1100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1104:
    // 0x3a1104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a1104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a1108:
    // 0x3a1108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a1108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a110c:
    // 0x3a110c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a1110:
    // 0x3a1110: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3a1110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3a1114:
    // 0x3a1114: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3a1118:
    if (ctx->pc == 0x3A1118u) {
        ctx->pc = 0x3A1118u;
            // 0x3a1118: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A111Cu;
        goto label_3a111c;
    }
    ctx->pc = 0x3A1114u;
    {
        const bool branch_taken_0x3a1114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1114u;
            // 0x3a1118: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1114) {
            ctx->pc = 0x3A1158u;
            goto label_3a1158;
        }
    }
    ctx->pc = 0x3A111Cu;
label_3a111c:
    // 0x3a111c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a111cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1120:
    // 0x3a1120: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a1120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1124:
    // 0x3a1124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a1124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1128:
    // 0x3a1128: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3a112c:
    // 0x3a112c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a1130:
    // 0x3a1130: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1134:
    // 0x3a1134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a1134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1138:
    // 0x3a1138: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a1138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a113c:
    // 0x3a113c: 0x320f809  jalr        $t9
label_3a1140:
    if (ctx->pc == 0x3A1140u) {
        ctx->pc = 0x3A1144u;
        goto label_3a1144;
    }
    ctx->pc = 0x3A113Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1144u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1144u; }
            if (ctx->pc != 0x3A1144u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1144u;
label_3a1144:
    // 0x3a1144: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3a1144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3a1148:
    // 0x3a1148: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a1148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a114c:
    // 0x3a114c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3a114cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3a1150:
    // 0x3a1150: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a1154:
    if (ctx->pc == 0x3A1154u) {
        ctx->pc = 0x3A1154u;
            // 0x3a1154: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3A1158u;
        goto label_3a1158;
    }
    ctx->pc = 0x3A1150u;
    {
        const bool branch_taken_0x3a1150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1150u;
            // 0x3a1154: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1150) {
            ctx->pc = 0x3A1128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a1128;
        }
    }
    ctx->pc = 0x3A1158u;
label_3a1158:
    // 0x3a1158: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a1158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a115c:
    // 0x3a115c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a115cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1160:
    // 0x3a1160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a1160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1164:
    // 0x3a1164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a1164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1168:
    // 0x3a1168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a1168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a116c:
    // 0x3a116c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a116cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1170:
    // 0x3a1170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a1170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1174:
    // 0x3a1174: 0x3e00008  jr          $ra
label_3a1178:
    if (ctx->pc == 0x3A1178u) {
        ctx->pc = 0x3A1178u;
            // 0x3a1178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3A117Cu;
        goto label_3a117c;
    }
    ctx->pc = 0x3A1174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1174u;
            // 0x3a1178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A117Cu;
label_3a117c:
    // 0x3a117c: 0x0  nop
    ctx->pc = 0x3a117cu;
    // NOP
label_3a1180:
    // 0x3a1180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a1184:
    // 0x3a1184: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a1184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1188:
    // 0x3a1188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a118c:
    // 0x3a118c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3a118cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3a1190:
    // 0x3a1190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a1190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a1194:
    // 0x3a1194: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3a1198:
    // 0x3a1198: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a1198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a119c:
    // 0x3a119c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3a119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3a11a0:
    // 0x3a11a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a11a4:
    // 0x3a11a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a11a8:
    // 0x3a11a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3a11ac:
    // 0x3a11ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3a11acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a11b0:
    // 0x3a11b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3a11b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a11b4:
    // 0x3a11b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a11b8:
    // 0x3a11b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3a11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3a11bc:
    // 0x3a11bc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3a11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3a11c0:
    // 0x3a11c0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3a11c4:
    // 0x3a11c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a11c8:
    // 0x3a11c8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3a11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3a11cc:
    // 0x3a11cc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3a11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3a11d0:
    // 0x3a11d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3a11d4:
    // 0x3a11d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a11d8:
    // 0x3a11d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3a11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a11dc:
    // 0x3a11dc: 0xc0a997c  jal         func_2A65F0
label_3a11e0:
    if (ctx->pc == 0x3A11E0u) {
        ctx->pc = 0x3A11E0u;
            // 0x3a11e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3A11E4u;
        goto label_3a11e4;
    }
    ctx->pc = 0x3A11DCu;
    SET_GPR_U32(ctx, 31, 0x3A11E4u);
    ctx->pc = 0x3A11E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A11DCu;
            // 0x3a11e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A11E4u; }
        if (ctx->pc != 0x3A11E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A11E4u; }
        if (ctx->pc != 0x3A11E4u) { return; }
    }
    ctx->pc = 0x3A11E4u;
label_3a11e4:
    // 0x3a11e4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3a11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3a11e8:
    // 0x3a11e8: 0xc0d879c  jal         func_361E70
label_3a11ec:
    if (ctx->pc == 0x3A11ECu) {
        ctx->pc = 0x3A11ECu;
            // 0x3a11ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A11F0u;
        goto label_3a11f0;
    }
    ctx->pc = 0x3A11E8u;
    SET_GPR_U32(ctx, 31, 0x3A11F0u);
    ctx->pc = 0x3A11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A11E8u;
            // 0x3a11ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A11F0u; }
        if (ctx->pc != 0x3A11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A11F0u; }
        if (ctx->pc != 0x3A11F0u) { return; }
    }
    ctx->pc = 0x3A11F0u;
label_3a11f0:
    // 0x3a11f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a11f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a11f4:
    // 0x3a11f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a11f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a11f8:
    // 0x3a11f8: 0x3e00008  jr          $ra
label_3a11fc:
    if (ctx->pc == 0x3A11FCu) {
        ctx->pc = 0x3A11FCu;
            // 0x3a11fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A1200u;
        goto label_3a1200;
    }
    ctx->pc = 0x3A11F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A11FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A11F8u;
            // 0x3a11fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1200u;
label_3a1200:
    // 0x3a1200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a1204:
    // 0x3a1204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a1204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a1208:
    // 0x3a1208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a1208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a120c:
    // 0x3a120c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3a120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3a1210:
    // 0x3a1210: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3a1214:
    if (ctx->pc == 0x3A1214u) {
        ctx->pc = 0x3A1214u;
            // 0x3a1214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1218u;
        goto label_3a1218;
    }
    ctx->pc = 0x3A1210u;
    {
        const bool branch_taken_0x3a1210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1210u;
            // 0x3a1214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1210) {
            ctx->pc = 0x3A1330u;
            goto label_3a1330;
        }
    }
    ctx->pc = 0x3A1218u;
label_3a1218:
    // 0x3a1218: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a121c:
    // 0x3a121c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3a121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3a1220:
    // 0x3a1220: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a1220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3a1224:
    // 0x3a1224: 0xc075128  jal         func_1D44A0
label_3a1228:
    if (ctx->pc == 0x3A1228u) {
        ctx->pc = 0x3A1228u;
            // 0x3a1228: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3A122Cu;
        goto label_3a122c;
    }
    ctx->pc = 0x3A1224u;
    SET_GPR_U32(ctx, 31, 0x3A122Cu);
    ctx->pc = 0x3A1228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1224u;
            // 0x3a1228: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A122Cu; }
        if (ctx->pc != 0x3A122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A122Cu; }
        if (ctx->pc != 0x3A122Cu) { return; }
    }
    ctx->pc = 0x3A122Cu;
label_3a122c:
    // 0x3a122c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3a122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3a1230:
    // 0x3a1230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a1234:
    // 0x3a1234: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3a1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3a1238:
    // 0x3a1238: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3a123c:
    // 0x3a123c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3a123cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a1240:
    // 0x3a1240: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3a1244:
    if (ctx->pc == 0x3A1244u) {
        ctx->pc = 0x3A1244u;
            // 0x3a1244: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3A1248u;
        goto label_3a1248;
    }
    ctx->pc = 0x3A1240u;
    {
        const bool branch_taken_0x3a1240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1240u;
            // 0x3a1244: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1240) {
            ctx->pc = 0x3A1250u;
            goto label_3a1250;
        }
    }
    ctx->pc = 0x3A1248u;
label_3a1248:
    // 0x3a1248: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a124c:
    // 0x3a124c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3a124cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3a1250:
    // 0x3a1250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a1250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1254:
    // 0x3a1254: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a1258:
    // 0x3a1258: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3a1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3a125c:
    // 0x3a125c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3a125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3a1260:
    // 0x3a1260: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3a1260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a1264:
    // 0x3a1264: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3a1268:
    if (ctx->pc == 0x3A1268u) {
        ctx->pc = 0x3A1268u;
            // 0x3a1268: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3A126Cu;
        goto label_3a126c;
    }
    ctx->pc = 0x3A1264u;
    {
        const bool branch_taken_0x3a1264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1264) {
            ctx->pc = 0x3A1268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1264u;
            // 0x3a1268: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1278u;
            goto label_3a1278;
        }
    }
    ctx->pc = 0x3A126Cu;
label_3a126c:
    // 0x3a126c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a1270:
    // 0x3a1270: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3a1270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3a1274:
    // 0x3a1274: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1278:
    // 0x3a1278: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a127c:
    // 0x3a127c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3a127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3a1280:
    // 0x3a1280: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3a1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3a1284:
    // 0x3a1284: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3a1284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a1288:
    // 0x3a1288: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3a128c:
    if (ctx->pc == 0x3A128Cu) {
        ctx->pc = 0x3A128Cu;
            // 0x3a128c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3A1290u;
        goto label_3a1290;
    }
    ctx->pc = 0x3A1288u;
    {
        const bool branch_taken_0x3a1288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1288) {
            ctx->pc = 0x3A128Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1288u;
            // 0x3a128c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A129Cu;
            goto label_3a129c;
        }
    }
    ctx->pc = 0x3A1290u;
label_3a1290:
    // 0x3a1290: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a1294:
    // 0x3a1294: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3a1294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3a1298:
    // 0x3a1298: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3a1298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a129c:
    // 0x3a129c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3a129cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3a12a0:
    // 0x3a12a0: 0x320f809  jalr        $t9
label_3a12a4:
    if (ctx->pc == 0x3A12A4u) {
        ctx->pc = 0x3A12A4u;
            // 0x3a12a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A12A8u;
        goto label_3a12a8;
    }
    ctx->pc = 0x3A12A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A12A8u);
        ctx->pc = 0x3A12A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A12A0u;
            // 0x3a12a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A12A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A12A8u; }
            if (ctx->pc != 0x3A12A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A12A8u;
label_3a12a8:
    // 0x3a12a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3a12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3a12ac:
    // 0x3a12ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a12acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a12b0:
    // 0x3a12b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3a12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3a12b4:
    // 0x3a12b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3a12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3a12b8:
    // 0x3a12b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3a12b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3a12bc:
    // 0x3a12bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3a12bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3a12c0:
    // 0x3a12c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3a12c4:
    if (ctx->pc == 0x3A12C4u) {
        ctx->pc = 0x3A12C4u;
            // 0x3a12c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3A12C8u;
        goto label_3a12c8;
    }
    ctx->pc = 0x3A12C0u;
    {
        const bool branch_taken_0x3a12c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a12c0) {
            ctx->pc = 0x3A12C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A12C0u;
            // 0x3a12c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A12D4u;
            goto label_3a12d4;
        }
    }
    ctx->pc = 0x3A12C8u;
label_3a12c8:
    // 0x3a12c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a12cc:
    // 0x3a12cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3a12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3a12d0:
    // 0x3a12d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3a12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3a12d4:
    // 0x3a12d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a12d8:
    // 0x3a12d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3a12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3a12dc:
    // 0x3a12dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3a12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3a12e0:
    // 0x3a12e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3a12e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3a12e4:
    // 0x3a12e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3a12e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3a12e8:
    // 0x3a12e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3a12ec:
    if (ctx->pc == 0x3A12ECu) {
        ctx->pc = 0x3A12F0u;
        goto label_3a12f0;
    }
    ctx->pc = 0x3A12E8u;
    {
        const bool branch_taken_0x3a12e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a12e8) {
            ctx->pc = 0x3A12F8u;
            goto label_3a12f8;
        }
    }
    ctx->pc = 0x3A12F0u;
label_3a12f0:
    // 0x3a12f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a12f4:
    // 0x3a12f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3a12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3a12f8:
    // 0x3a12f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a12fc:
    // 0x3a12fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3a12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3a1300:
    // 0x3a1300: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3a1300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a1304:
    // 0x3a1304: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3a1308:
    if (ctx->pc == 0x3A1308u) {
        ctx->pc = 0x3A130Cu;
        goto label_3a130c;
    }
    ctx->pc = 0x3A1304u;
    {
        const bool branch_taken_0x3a1304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1304) {
            ctx->pc = 0x3A1314u;
            goto label_3a1314;
        }
    }
    ctx->pc = 0x3A130Cu;
label_3a130c:
    // 0x3a130c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a1310:
    // 0x3a1310: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3a1310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3a1314:
    // 0x3a1314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a1318:
    // 0x3a1318: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3a1318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3a131c:
    // 0x3a131c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3a131cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a1320:
    // 0x3a1320: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3a1324:
    if (ctx->pc == 0x3A1324u) {
        ctx->pc = 0x3A1324u;
            // 0x3a1324: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A1328u;
        goto label_3a1328;
    }
    ctx->pc = 0x3A1320u;
    {
        const bool branch_taken_0x3a1320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1320) {
            ctx->pc = 0x3A1324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1320u;
            // 0x3a1324: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1334u;
            goto label_3a1334;
        }
    }
    ctx->pc = 0x3A1328u;
label_3a1328:
    // 0x3a1328: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a132c:
    // 0x3a132c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3a132cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3a1330:
    // 0x3a1330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1334:
    // 0x3a1334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a1334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1338:
    // 0x3a1338: 0x3e00008  jr          $ra
label_3a133c:
    if (ctx->pc == 0x3A133Cu) {
        ctx->pc = 0x3A133Cu;
            // 0x3a133c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A1340u;
        goto label_3a1340;
    }
    ctx->pc = 0x3A1338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1338u;
            // 0x3a133c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1340u;
label_3a1340:
    // 0x3a1340: 0x80e82c8  j           func_3A0B20
label_3a1344:
    if (ctx->pc == 0x3A1344u) {
        ctx->pc = 0x3A1344u;
            // 0x3a1344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3A1348u;
        goto label_3a1348;
    }
    ctx->pc = 0x3A1340u;
    ctx->pc = 0x3A1344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1340u;
            // 0x3a1344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B20u;
    {
        auto targetFn = runtime->lookupFunction(0x3A0B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3A1348u;
label_3a1348:
    // 0x3a1348: 0x0  nop
    ctx->pc = 0x3a1348u;
    // NOP
label_3a134c:
    // 0x3a134c: 0x0  nop
    ctx->pc = 0x3a134cu;
    // NOP
label_3a1350:
    // 0x3a1350: 0x80e7fa8  j           func_39FEA0
label_3a1354:
    if (ctx->pc == 0x3A1354u) {
        ctx->pc = 0x3A1354u;
            // 0x3a1354: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3A1358u;
        goto label_3a1358;
    }
    ctx->pc = 0x3A1350u;
    ctx->pc = 0x3A1354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1350u;
            // 0x3a1354: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39FEA0u;
    if (runtime->hasFunction(0x39FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x39FEA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0039FEA0_0x39fea0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3A1358u;
label_3a1358:
    // 0x3a1358: 0x0  nop
    ctx->pc = 0x3a1358u;
    // NOP
label_3a135c:
    // 0x3a135c: 0x0  nop
    ctx->pc = 0x3a135cu;
    // NOP
label_3a1360:
    // 0x3a1360: 0x80e7f84  j           func_39FE10
label_3a1364:
    if (ctx->pc == 0x3A1364u) {
        ctx->pc = 0x3A1364u;
            // 0x3a1364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3A1368u;
        goto label_3a1368;
    }
    ctx->pc = 0x3A1360u;
    ctx->pc = 0x3A1364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1360u;
            // 0x3a1364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39FE10u;
    {
        auto targetFn = runtime->lookupFunction(0x39FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3A1368u;
label_3a1368:
    // 0x3a1368: 0x0  nop
    ctx->pc = 0x3a1368u;
    // NOP
label_3a136c:
    // 0x3a136c: 0x0  nop
    ctx->pc = 0x3a136cu;
    // NOP
label_3a1370:
    // 0x3a1370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a1374:
    // 0x3a1374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a1378:
    // 0x3a1378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a137c:
    // 0x3a137c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a1380:
    // 0x3a1380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1384:
    // 0x3a1384: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3a1388:
    if (ctx->pc == 0x3A1388u) {
        ctx->pc = 0x3A1388u;
            // 0x3a1388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A138Cu;
        goto label_3a138c;
    }
    ctx->pc = 0x3A1384u;
    {
        const bool branch_taken_0x3a1384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1384u;
            // 0x3a1388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1384) {
            ctx->pc = 0x3A13C8u;
            goto label_3a13c8;
        }
    }
    ctx->pc = 0x3A138Cu;
label_3a138c:
    // 0x3a138c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a1390:
    // 0x3a1390: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x3a1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
label_3a1394:
    // 0x3a1394: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3a1398:
    if (ctx->pc == 0x3A1398u) {
        ctx->pc = 0x3A1398u;
            // 0x3a1398: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A139Cu;
        goto label_3a139c;
    }
    ctx->pc = 0x3A1394u;
    {
        const bool branch_taken_0x3a1394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1394u;
            // 0x3a1398: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1394) {
            ctx->pc = 0x3A13B0u;
            goto label_3a13b0;
        }
    }
    ctx->pc = 0x3A139Cu;
label_3a139c:
    // 0x3a139c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a13a0:
    // 0x3a13a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a13a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a13a4:
    // 0x3a13a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3a13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3a13a8:
    // 0x3a13a8: 0xc057a68  jal         func_15E9A0
label_3a13ac:
    if (ctx->pc == 0x3A13ACu) {
        ctx->pc = 0x3A13ACu;
            // 0x3a13ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A13B0u;
        goto label_3a13b0;
    }
    ctx->pc = 0x3A13A8u;
    SET_GPR_U32(ctx, 31, 0x3A13B0u);
    ctx->pc = 0x3A13ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A13A8u;
            // 0x3a13ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A13B0u; }
        if (ctx->pc != 0x3A13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A13B0u; }
        if (ctx->pc != 0x3A13B0u) { return; }
    }
    ctx->pc = 0x3A13B0u;
label_3a13b0:
    // 0x3a13b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a13b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3a13b4:
    // 0x3a13b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a13b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a13b8:
    // 0x3a13b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3a13bc:
    if (ctx->pc == 0x3A13BCu) {
        ctx->pc = 0x3A13BCu;
            // 0x3a13bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A13C0u;
        goto label_3a13c0;
    }
    ctx->pc = 0x3A13B8u;
    {
        const bool branch_taken_0x3a13b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a13b8) {
            ctx->pc = 0x3A13BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A13B8u;
            // 0x3a13bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A13CCu;
            goto label_3a13cc;
        }
    }
    ctx->pc = 0x3A13C0u;
label_3a13c0:
    // 0x3a13c0: 0xc0400a8  jal         func_1002A0
label_3a13c4:
    if (ctx->pc == 0x3A13C4u) {
        ctx->pc = 0x3A13C4u;
            // 0x3a13c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A13C8u;
        goto label_3a13c8;
    }
    ctx->pc = 0x3A13C0u;
    SET_GPR_U32(ctx, 31, 0x3A13C8u);
    ctx->pc = 0x3A13C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A13C0u;
            // 0x3a13c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A13C8u; }
        if (ctx->pc != 0x3A13C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A13C8u; }
        if (ctx->pc != 0x3A13C8u) { return; }
    }
    ctx->pc = 0x3A13C8u;
label_3a13c8:
    // 0x3a13c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a13c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a13cc:
    // 0x3a13cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a13ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a13d0:
    // 0x3a13d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a13d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a13d4:
    // 0x3a13d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a13d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a13d8:
    // 0x3a13d8: 0x3e00008  jr          $ra
label_3a13dc:
    if (ctx->pc == 0x3A13DCu) {
        ctx->pc = 0x3A13DCu;
            // 0x3a13dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A13E0u;
        goto label_3a13e0;
    }
    ctx->pc = 0x3A13D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A13DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A13D8u;
            // 0x3a13dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A13E0u;
label_3a13e0:
    // 0x3a13e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a13e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3a13e4:
    // 0x3a13e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a13e8:
    // 0x3a13e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a13e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3a13ec:
    // 0x3a13ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3a13ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3a13f0:
    // 0x3a13f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a13f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a13f4:
    // 0x3a13f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a13f8:
    // 0x3a13f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a13fc:
    // 0x3a13fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a13fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a1400:
    // 0x3a1400: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a1404:
    // 0x3a1404: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a1404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a1408:
    // 0x3a1408: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a1408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a140c:
    // 0x3a140c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a1410:
    // 0x3a1410: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a1410u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a1414:
    // 0x3a1414: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a1414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a1418:
    // 0x3a1418: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3a1418u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a141c:
    // 0x3a141c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3a1420:
    if (ctx->pc == 0x3A1420u) {
        ctx->pc = 0x3A1420u;
            // 0x3a1420: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1424u;
        goto label_3a1424;
    }
    ctx->pc = 0x3A141Cu;
    {
        const bool branch_taken_0x3a141c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A141Cu;
            // 0x3a1420: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a141c) {
            ctx->pc = 0x3A1460u;
            goto label_3a1460;
        }
    }
    ctx->pc = 0x3A1424u;
label_3a1424:
    // 0x3a1424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a1428:
    // 0x3a1428: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3a142c:
    if (ctx->pc == 0x3A142Cu) {
        ctx->pc = 0x3A1430u;
        goto label_3a1430;
    }
    ctx->pc = 0x3A1428u;
    {
        const bool branch_taken_0x3a1428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1428) {
            ctx->pc = 0x3A1438u;
            goto label_3a1438;
        }
    }
    ctx->pc = 0x3A1430u;
label_3a1430:
    // 0x3a1430: 0x100000ed  b           . + 4 + (0xED << 2)
label_3a1434:
    if (ctx->pc == 0x3A1434u) {
        ctx->pc = 0x3A1438u;
        goto label_3a1438;
    }
    ctx->pc = 0x3A1430u;
    {
        const bool branch_taken_0x3a1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1430) {
            ctx->pc = 0x3A17E8u;
            goto label_3a17e8;
        }
    }
    ctx->pc = 0x3A1438u;
label_3a1438:
    // 0x3a1438: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a143c:
    // 0x3a143c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a143cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1440:
    // 0x3a1440: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a1440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a1444:
    // 0x3a1444: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3a1444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3a1448:
    // 0x3a1448: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3a1448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3a144c:
    // 0x3a144c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a144cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a1450:
    // 0x3a1450: 0x320f809  jalr        $t9
label_3a1454:
    if (ctx->pc == 0x3A1454u) {
        ctx->pc = 0x3A1454u;
            // 0x3a1454: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3A1458u;
        goto label_3a1458;
    }
    ctx->pc = 0x3A1450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1458u);
        ctx->pc = 0x3A1454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1450u;
            // 0x3a1454: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1458u; }
            if (ctx->pc != 0x3A1458u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1458u;
label_3a1458:
    // 0x3a1458: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_3a145c:
    if (ctx->pc == 0x3A145Cu) {
        ctx->pc = 0x3A1460u;
        goto label_3a1460;
    }
    ctx->pc = 0x3A1458u;
    {
        const bool branch_taken_0x3a1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1458) {
            ctx->pc = 0x3A17E8u;
            goto label_3a17e8;
        }
    }
    ctx->pc = 0x3A1460u;
label_3a1460:
    // 0x3a1460: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a1460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a1464:
    // 0x3a1464: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3a1464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3a1468:
    // 0x3a1468: 0x8c7489e8  lw          $s4, -0x7618($v1)
    ctx->pc = 0x3a1468u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3a146c:
    // 0x3a146c: 0x26b30088  addiu       $s3, $s5, 0x88
    ctx->pc = 0x3a146cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 136));
label_3a1470:
    // 0x3a1470: 0x8c50d120  lw          $s0, -0x2EE0($v0)
    ctx->pc = 0x3a1470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3a1474:
    // 0x3a1474: 0x26b60074  addiu       $s6, $s5, 0x74
    ctx->pc = 0x3a1474u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_3a1478:
    // 0x3a1478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a147c:
    // 0x3a147c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3a147cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a1480:
    // 0x3a1480: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x3a1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3a1484:
    // 0x3a1484: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1488:
    // 0x3a1488: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a148c:
    // 0x3a148c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3a148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3a1490:
    // 0x3a1490: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a1490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1494:
    // 0x3a1494: 0xc4550018  lwc1        $f21, 0x18($v0)
    ctx->pc = 0x3a1494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a1498:
    // 0x3a1498: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x3a1498u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3a149c:
    // 0x3a149c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3a149cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3a14a0:
    // 0x3a14a0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x3a14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_3a14a4:
    // 0x3a14a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3a14a8:
    // 0x3a14a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3a14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3a14ac:
    // 0x3a14ac: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x3a14acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3a14b0:
    // 0x3a14b0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3a14b4:
    // 0x3a14b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3a14b8:
    if (ctx->pc == 0x3A14B8u) {
        ctx->pc = 0x3A14BCu;
        goto label_3a14bc;
    }
    ctx->pc = 0x3A14B4u;
    {
        const bool branch_taken_0x3a14b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a14b4) {
            ctx->pc = 0x3A14A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a14a0;
        }
    }
    ctx->pc = 0x3A14BCu;
label_3a14bc:
    // 0x3a14bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a14bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a14c0:
    // 0x3a14c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a14c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a14c4:
    // 0x3a14c4: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x3a14c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a14c8:
    // 0x3a14c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a14cc:
    // 0x3a14cc: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x3a14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_3a14d0:
    // 0x3a14d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3a14d4:
    // 0x3a14d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a14d8:
    // 0x3a14d8: 0xc04cc34  jal         func_1330D0
label_3a14dc:
    if (ctx->pc == 0x3A14DCu) {
        ctx->pc = 0x3A14DCu;
            // 0x3a14dc: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3A14E0u;
        goto label_3a14e0;
    }
    ctx->pc = 0x3A14D8u;
    SET_GPR_U32(ctx, 31, 0x3A14E0u);
    ctx->pc = 0x3A14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A14D8u;
            // 0x3a14dc: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A14E0u; }
        if (ctx->pc != 0x3A14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A14E0u; }
        if (ctx->pc != 0x3A14E0u) { return; }
    }
    ctx->pc = 0x3A14E0u;
label_3a14e0:
    // 0x3a14e0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3a14e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a14e4:
    // 0x3a14e4: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_3a14e8:
    if (ctx->pc == 0x3A14E8u) {
        ctx->pc = 0x3A14ECu;
        goto label_3a14ec;
    }
    ctx->pc = 0x3A14E4u;
    {
        const bool branch_taken_0x3a14e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a14e4) {
            ctx->pc = 0x3A1638u;
            goto label_3a1638;
        }
    }
    ctx->pc = 0x3A14ECu;
label_3a14ec:
    // 0x3a14ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3a14ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a14f0:
    // 0x3a14f0: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x3a14f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_3a14f4:
    // 0x3a14f4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_3a14f8:
    if (ctx->pc == 0x3A14F8u) {
        ctx->pc = 0x3A14FCu;
        goto label_3a14fc;
    }
    ctx->pc = 0x3A14F4u;
    {
        const bool branch_taken_0x3a14f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a14f4) {
            ctx->pc = 0x3A1588u;
            goto label_3a1588;
        }
    }
    ctx->pc = 0x3A14FCu;
label_3a14fc:
    // 0x3a14fc: 0x92a2009c  lbu         $v0, 0x9C($s5)
    ctx->pc = 0x3a14fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_3a1500:
    // 0x3a1500: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3a1500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a1504:
    // 0x3a1504: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_3a1508:
    if (ctx->pc == 0x3A1508u) {
        ctx->pc = 0x3A150Cu;
        goto label_3a150c;
    }
    ctx->pc = 0x3A1504u;
    {
        const bool branch_taken_0x3a1504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1504) {
            ctx->pc = 0x3A1560u;
            goto label_3a1560;
        }
    }
    ctx->pc = 0x3A150Cu;
label_3a150c:
    // 0x3a150c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x3a150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3a1510:
    // 0x3a1510: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a1510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a1514:
    // 0x3a1514: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a1514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1518:
    // 0x3a1518: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x3a1518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_3a151c:
    // 0x3a151c: 0x320f809  jalr        $t9
label_3a1520:
    if (ctx->pc == 0x3A1520u) {
        ctx->pc = 0x3A1520u;
            // 0x3a1520: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1524u;
        goto label_3a1524;
    }
    ctx->pc = 0x3A151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1524u);
        ctx->pc = 0x3A1520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A151Cu;
            // 0x3a1520: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1524u; }
            if (ctx->pc != 0x3A1524u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1524u;
label_3a1524:
    // 0x3a1524: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a1524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3a1528:
    // 0x3a1528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a152c:
    // 0x3a152c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a1530:
    // 0x3a1530: 0xc6ac0098  lwc1        $f12, 0x98($s5)
    ctx->pc = 0x3a1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a1534:
    // 0x3a1534: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a1534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a1538:
    // 0x3a1538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a153c:
    // 0x3a153c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a153cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1540:
    // 0x3a1540: 0x26a80060  addiu       $t0, $s5, 0x60
    ctx->pc = 0x3a1540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_3a1544:
    // 0x3a1544: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x3a1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3a1548:
    // 0x3a1548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a154c:
    // 0x3a154c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a154cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a1550:
    // 0x3a1550: 0x320f809  jalr        $t9
label_3a1554:
    if (ctx->pc == 0x3A1554u) {
        ctx->pc = 0x3A1554u;
            // 0x3a1554: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3A1558u;
        goto label_3a1558;
    }
    ctx->pc = 0x3A1550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1558u);
        ctx->pc = 0x3A1554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1550u;
            // 0x3a1554: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1558u; }
            if (ctx->pc != 0x3A1558u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1558u;
label_3a1558:
    // 0x3a1558: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3a155c:
    if (ctx->pc == 0x3A155Cu) {
        ctx->pc = 0x3A1560u;
        goto label_3a1560;
    }
    ctx->pc = 0x3A1558u;
    {
        const bool branch_taken_0x3a1558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1558) {
            ctx->pc = 0x3A15C8u;
            goto label_3a15c8;
        }
    }
    ctx->pc = 0x3A1560u;
label_3a1560:
    // 0x3a1560: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a1564:
    // 0x3a1564: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x3a1564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_3a1568:
    // 0x3a1568: 0xa2f10000  sb          $s1, 0x0($s7)
    ctx->pc = 0x3a1568u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 17));
label_3a156c:
    // 0x3a156c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3a1570:
    // 0x3a1570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1574:
    // 0x3a1574: 0xc04cc34  jal         func_1330D0
label_3a1578:
    if (ctx->pc == 0x3A1578u) {
        ctx->pc = 0x3A1578u;
            // 0x3a1578: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3A157Cu;
        goto label_3a157c;
    }
    ctx->pc = 0x3A1574u;
    SET_GPR_U32(ctx, 31, 0x3A157Cu);
    ctx->pc = 0x3A1578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1574u;
            // 0x3a1578: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A157Cu; }
        if (ctx->pc != 0x3A157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A157Cu; }
        if (ctx->pc != 0x3A157Cu) { return; }
    }
    ctx->pc = 0x3A157Cu;
label_3a157c:
    // 0x3a157c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a1580:
    if (ctx->pc == 0x3A1580u) {
        ctx->pc = 0x3A1580u;
            // 0x3a1580: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->pc = 0x3A1584u;
        goto label_3a1584;
    }
    ctx->pc = 0x3A157Cu;
    {
        const bool branch_taken_0x3a157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A157Cu;
            // 0x3a1580: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a157c) {
            ctx->pc = 0x3A15C8u;
            goto label_3a15c8;
        }
    }
    ctx->pc = 0x3A1584u;
label_3a1584:
    // 0x3a1584: 0x0  nop
    ctx->pc = 0x3a1584u;
    // NOP
label_3a1588:
    // 0x3a1588: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3a158c:
    // 0x3a158c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a1590:
    // 0x3a1590: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
label_3a1594:
    if (ctx->pc == 0x3A1594u) {
        ctx->pc = 0x3A1598u;
        goto label_3a1598;
    }
    ctx->pc = 0x3A1590u;
    {
        const bool branch_taken_0x3a1590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1590) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A1598u;
label_3a1598:
    // 0x3a1598: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a159c:
    // 0x3a159c: 0xc6ac0098  lwc1        $f12, 0x98($s5)
    ctx->pc = 0x3a159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a15a0:
    // 0x3a15a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a15a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a15a4:
    // 0x3a15a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a15a8:
    // 0x3a15a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a15a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a15ac:
    // 0x3a15ac: 0x26a80060  addiu       $t0, $s5, 0x60
    ctx->pc = 0x3a15acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_3a15b0:
    // 0x3a15b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3a15b4:
    // 0x3a15b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a15b8:
    // 0x3a15b8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a15b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a15bc:
    // 0x3a15bc: 0x320f809  jalr        $t9
label_3a15c0:
    if (ctx->pc == 0x3A15C0u) {
        ctx->pc = 0x3A15C0u;
            // 0x3a15c0: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3A15C4u;
        goto label_3a15c4;
    }
    ctx->pc = 0x3A15BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A15C4u);
        ctx->pc = 0x3A15C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A15BCu;
            // 0x3a15c0: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A15C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A15C4u; }
            if (ctx->pc != 0x3A15C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A15C4u;
label_3a15c4:
    // 0x3a15c4: 0x0  nop
    ctx->pc = 0x3a15c4u;
    // NOP
label_3a15c8:
    // 0x3a15c8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3a15c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a15cc:
    // 0x3a15cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a15ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a15d0:
    // 0x3a15d0: 0x0  nop
    ctx->pc = 0x3a15d0u;
    // NOP
label_3a15d4:
    // 0x3a15d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a15d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a15d8:
    // 0x3a15d8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_3a15dc:
    if (ctx->pc == 0x3A15DCu) {
        ctx->pc = 0x3A15E0u;
        goto label_3a15e0;
    }
    ctx->pc = 0x3A15D8u;
    {
        const bool branch_taken_0x3a15d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a15d8) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A15E0u;
label_3a15e0:
    // 0x3a15e0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3a15e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_3a15e4:
    // 0x3a15e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a15e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a15e8:
    // 0x3a15e8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3a15ec:
    if (ctx->pc == 0x3A15ECu) {
        ctx->pc = 0x3A15ECu;
            // 0x3a15ec: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x3A15F0u;
        goto label_3a15f0;
    }
    ctx->pc = 0x3A15E8u;
    {
        const bool branch_taken_0x3a15e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A15ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A15E8u;
            // 0x3a15ec: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15e8) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A15F0u;
label_3a15f0:
    // 0x3a15f0: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x3a15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3a15f4:
    // 0x3a15f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a15f8:
    // 0x3a15f8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x3a15f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_3a15fc:
    // 0x3a15fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3a15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a1600:
    // 0x3a1600: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
label_3a1604:
    if (ctx->pc == 0x3A1604u) {
        ctx->pc = 0x3A1608u;
        goto label_3a1608;
    }
    ctx->pc = 0x3A1600u;
    {
        const bool branch_taken_0x3a1600 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3a1600) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A1608u;
label_3a1608:
    // 0x3a1608: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3a160c:
    // 0x3a160c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a1610:
    // 0x3a1610: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_3a1614:
    if (ctx->pc == 0x3A1614u) {
        ctx->pc = 0x3A1618u;
        goto label_3a1618;
    }
    ctx->pc = 0x3A1610u;
    {
        const bool branch_taken_0x3a1610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1610) {
            ctx->pc = 0x3A1628u;
            goto label_3a1628;
        }
    }
    ctx->pc = 0x3A1618u;
label_3a1618:
    // 0x3a1618: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a1618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a161c:
    // 0x3a161c: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3a161cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3a1620:
    // 0x3a1620: 0x320f809  jalr        $t9
label_3a1624:
    if (ctx->pc == 0x3A1624u) {
        ctx->pc = 0x3A1624u;
            // 0x3a1624: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1628u;
        goto label_3a1628;
    }
    ctx->pc = 0x3A1620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1628u);
        ctx->pc = 0x3A1624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1620u;
            // 0x3a1624: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1628u; }
            if (ctx->pc != 0x3A1628u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1628u;
label_3a1628:
    // 0x3a1628: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a1628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a162c:
    // 0x3a162c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3a1630:
    if (ctx->pc == 0x3A1630u) {
        ctx->pc = 0x3A1630u;
            // 0x3a1630: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A1634u;
        goto label_3a1634;
    }
    ctx->pc = 0x3A162Cu;
    {
        const bool branch_taken_0x3a162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A162Cu;
            // 0x3a1630: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a162c) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A1634u;
label_3a1634:
    // 0x3a1634: 0x0  nop
    ctx->pc = 0x3a1634u;
    // NOP
label_3a1638:
    // 0x3a1638: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3a1638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a163c:
    // 0x3a163c: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
label_3a1640:
    if (ctx->pc == 0x3A1640u) {
        ctx->pc = 0x3A1644u;
        goto label_3a1644;
    }
    ctx->pc = 0x3A163Cu;
    {
        const bool branch_taken_0x3a163c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3a163c) {
            ctx->pc = 0x3A1670u;
            goto label_3a1670;
        }
    }
    ctx->pc = 0x3A1644u;
label_3a1644:
    // 0x3a1644: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3a1648:
    // 0x3a1648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a164c:
    // 0x3a164c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_3a1650:
    if (ctx->pc == 0x3A1650u) {
        ctx->pc = 0x3A1654u;
        goto label_3a1654;
    }
    ctx->pc = 0x3A164Cu;
    {
        const bool branch_taken_0x3a164c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a164c) {
            ctx->pc = 0x3A1668u;
            goto label_3a1668;
        }
    }
    ctx->pc = 0x3A1654u;
label_3a1654:
    // 0x3a1654: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a1654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a1658:
    // 0x3a1658: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3a1658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3a165c:
    // 0x3a165c: 0x320f809  jalr        $t9
label_3a1660:
    if (ctx->pc == 0x3A1660u) {
        ctx->pc = 0x3A1660u;
            // 0x3a1660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1664u;
        goto label_3a1664;
    }
    ctx->pc = 0x3A165Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1664u);
        ctx->pc = 0x3A1660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A165Cu;
            // 0x3a1660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1664u; }
            if (ctx->pc != 0x3A1664u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1664u;
label_3a1664:
    // 0x3a1664: 0x0  nop
    ctx->pc = 0x3a1664u;
    // NOP
label_3a1668:
    // 0x3a1668: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a166c:
    // 0x3a166c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3a166cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3a1670:
    // 0x3a1670: 0x92a4009c  lbu         $a0, 0x9C($s5)
    ctx->pc = 0x3a1670u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_3a1674:
    // 0x3a1674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a1674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a1678:
    // 0x3a1678: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3a1678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3a167c:
    // 0x3a167c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3a167cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3a1680:
    // 0x3a1680: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a1680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a1684:
    // 0x3a1684: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x3a1684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3a1688:
    // 0x3a1688: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_3a168c:
    if (ctx->pc == 0x3A168Cu) {
        ctx->pc = 0x3A168Cu;
            // 0x3a168c: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->pc = 0x3A1690u;
        goto label_3a1690;
    }
    ctx->pc = 0x3A1688u;
    {
        const bool branch_taken_0x3a1688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1688u;
            // 0x3a168c: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1688) {
            ctx->pc = 0x3A14C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a14c8;
        }
    }
    ctx->pc = 0x3A1690u;
label_3a1690:
    // 0x3a1690: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x3a1690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a1694:
    // 0x3a1694: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_3a1698:
    if (ctx->pc == 0x3A1698u) {
        ctx->pc = 0x3A169Cu;
        goto label_3a169c;
    }
    ctx->pc = 0x3A1694u;
    {
        const bool branch_taken_0x3a1694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1694) {
            ctx->pc = 0x3A17E8u;
            goto label_3a17e8;
        }
    }
    ctx->pc = 0x3A169Cu;
label_3a169c:
    // 0x3a169c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a169cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a16a0:
    // 0x3a16a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a16a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a16a4:
    // 0x3a16a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a16a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a16a8:
    // 0x3a16a8: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x3a16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_3a16ac:
    // 0x3a16ac: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x3a16acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3a16b0:
    // 0x3a16b0: 0x246600c0  addiu       $a2, $v1, 0xC0
    ctx->pc = 0x3a16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3a16b4:
    // 0x3a16b4: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x3a16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_3a16b8:
    // 0x3a16b8: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3a16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3a16bc:
    // 0x3a16bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3a16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3a16c0:
    // 0x3a16c0: 0x246800c0  addiu       $t0, $v1, 0xC0
    ctx->pc = 0x3a16c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3a16c4:
    // 0x3a16c4: 0x0  nop
    ctx->pc = 0x3a16c4u;
    // NOP
label_3a16c8:
    // 0x3a16c8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3a16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a16cc:
    // 0x3a16cc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3a16ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a16d0:
    // 0x3a16d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a16d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a16d4:
    // 0x3a16d4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3a16d8:
    if (ctx->pc == 0x3A16D8u) {
        ctx->pc = 0x3A16DCu;
        goto label_3a16dc;
    }
    ctx->pc = 0x3A16D4u;
    {
        const bool branch_taken_0x3a16d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a16d4) {
            ctx->pc = 0x3A1700u;
            goto label_3a1700;
        }
    }
    ctx->pc = 0x3A16DCu;
label_3a16dc:
    // 0x3a16dc: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x3a16dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3a16e0:
    // 0x3a16e0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3a16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a16e4:
    // 0x3a16e4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x3a16e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3a16e8:
    // 0x3a16e8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3a16e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a16ec:
    // 0x3a16ec: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3a16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a16f0:
    // 0x3a16f0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3a16f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3a16f4:
    // 0x3a16f4: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x3a16f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_3a16f8:
    // 0x3a16f8: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x3a16f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_3a16fc:
    // 0x3a16fc: 0x0  nop
    ctx->pc = 0x3a16fcu;
    // NOP
label_3a1700:
    // 0x3a1700: 0x92a4009c  lbu         $a0, 0x9C($s5)
    ctx->pc = 0x3a1700u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_3a1704:
    // 0x3a1704: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a1704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a1708:
    // 0x3a1708: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x3a1708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3a170c:
    // 0x3a170c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_3a1710:
    if (ctx->pc == 0x3A1710u) {
        ctx->pc = 0x3A1710u;
            // 0x3a1710: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x3A1714u;
        goto label_3a1714;
    }
    ctx->pc = 0x3A170Cu;
    {
        const bool branch_taken_0x3a170c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A170Cu;
            // 0x3a1710: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a170c) {
            ctx->pc = 0x3A16C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a16c8;
        }
    }
    ctx->pc = 0x3A1714u;
label_3a1714:
    // 0x3a1714: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3a1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a1718:
    // 0x3a1718: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a1718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3a171c:
    // 0x3a171c: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x3a171cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a1720:
    // 0x3a1720: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_3a1724:
    if (ctx->pc == 0x3A1724u) {
        ctx->pc = 0x3A1724u;
            // 0x3a1724: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x3A1728u;
        goto label_3a1728;
    }
    ctx->pc = 0x3A1720u;
    {
        const bool branch_taken_0x3a1720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1720u;
            // 0x3a1724: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1720) {
            ctx->pc = 0x3A16A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a16a8;
        }
    }
    ctx->pc = 0x3A1728u;
label_3a1728:
    // 0x3a1728: 0x26a30088  addiu       $v1, $s5, 0x88
    ctx->pc = 0x3a1728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 136));
label_3a172c:
    // 0x3a172c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a172cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1730:
    // 0x3a1730: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3a1730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3a1734:
    // 0x3a1734: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x3a1734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a1738:
    // 0x3a1738: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3a1738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a173c:
    // 0x3a173c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a173cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1740:
    // 0x3a1740: 0x0  nop
    ctx->pc = 0x3a1740u;
    // NOP
label_3a1744:
    // 0x3a1744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a1744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a1748:
    // 0x3a1748: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_3a174c:
    if (ctx->pc == 0x3A174Cu) {
        ctx->pc = 0x3A1750u;
        goto label_3a1750;
    }
    ctx->pc = 0x3A1748u;
    {
        const bool branch_taken_0x3a1748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a1748) {
            ctx->pc = 0x3A17D0u;
            goto label_3a17d0;
        }
    }
    ctx->pc = 0x3A1750u;
label_3a1750:
    // 0x3a1750: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3a1750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a1754:
    // 0x3a1754: 0x92560000  lbu         $s6, 0x0($s2)
    ctx->pc = 0x3a1754u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1758:
    // 0x3a1758: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x3a1758u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a175c:
    // 0x3a175c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3a175cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a1760:
    // 0x3a1760: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x3a1760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a1764:
    // 0x3a1764: 0x16b880  sll         $s7, $s6, 2
    ctx->pc = 0x3a1764u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3a1768:
    // 0x3a1768: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_3a176c:
    if (ctx->pc == 0x3A176Cu) {
        ctx->pc = 0x3A176Cu;
            // 0x3a176c: 0x77f021  addu        $fp, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->pc = 0x3A1770u;
        goto label_3a1770;
    }
    ctx->pc = 0x3A1768u;
    {
        const bool branch_taken_0x3a1768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1768u;
            // 0x3a176c: 0x77f021  addu        $fp, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1768) {
            ctx->pc = 0x3A1780u;
            goto label_3a1780;
        }
    }
    ctx->pc = 0x3A1770u;
label_3a1770:
    // 0x3a1770: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3a1774:
    // 0x3a1774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a1778:
    // 0x3a1778: 0x10000015  b           . + 4 + (0x15 << 2)
label_3a177c:
    if (ctx->pc == 0x3A177Cu) {
        ctx->pc = 0x3A177Cu;
            // 0x3a177c: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A1780u;
        goto label_3a1780;
    }
    ctx->pc = 0x3A1778u;
    {
        const bool branch_taken_0x3a1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1778u;
            // 0x3a177c: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1778) {
            ctx->pc = 0x3A17D0u;
            goto label_3a17d0;
        }
    }
    ctx->pc = 0x3A1780u;
label_3a1780:
    // 0x3a1780: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x3a1780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3a1784:
    // 0x3a1784: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a1784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a1788:
    // 0x3a1788: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a1788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a178c:
    // 0x3a178c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x3a178cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_3a1790:
    // 0x3a1790: 0x320f809  jalr        $t9
label_3a1794:
    if (ctx->pc == 0x3A1794u) {
        ctx->pc = 0x3A1794u;
            // 0x3a1794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1798u;
        goto label_3a1798;
    }
    ctx->pc = 0x3A1790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1798u);
        ctx->pc = 0x3A1794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1790u;
            // 0x3a1794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1798u; }
            if (ctx->pc != 0x3A1798u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1798u;
label_3a1798:
    // 0x3a1798: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3a1798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3a179c:
    // 0x3a179c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a17a0:
    // 0x3a17a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a17a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a17a4:
    // 0x3a17a4: 0xc6ac0098  lwc1        $f12, 0x98($s5)
    ctx->pc = 0x3a17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a17a8:
    // 0x3a17a8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3a17a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a17ac:
    // 0x3a17ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a17acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a17b0:
    // 0x3a17b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a17b4:
    // 0x3a17b4: 0x26a80060  addiu       $t0, $s5, 0x60
    ctx->pc = 0x3a17b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_3a17b8:
    // 0x3a17b8: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x3a17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_3a17bc:
    // 0x3a17bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a17c0:
    // 0x3a17c0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a17c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a17c4:
    // 0x3a17c4: 0x320f809  jalr        $t9
label_3a17c8:
    if (ctx->pc == 0x3A17C8u) {
        ctx->pc = 0x3A17C8u;
            // 0x3a17c8: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3A17CCu;
        goto label_3a17cc;
    }
    ctx->pc = 0x3A17C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A17CCu);
        ctx->pc = 0x3A17C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A17C4u;
            // 0x3a17c8: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A17CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A17CCu; }
            if (ctx->pc != 0x3A17CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A17CCu;
label_3a17cc:
    // 0x3a17cc: 0x0  nop
    ctx->pc = 0x3a17ccu;
    // NOP
label_3a17d0:
    // 0x3a17d0: 0x92a3009c  lbu         $v1, 0x9C($s5)
    ctx->pc = 0x3a17d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_3a17d4:
    // 0x3a17d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a17d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a17d8:
    // 0x3a17d8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3a17d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a17dc:
    // 0x3a17dc: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_3a17e0:
    if (ctx->pc == 0x3A17E0u) {
        ctx->pc = 0x3A17E0u;
            // 0x3a17e0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x3A17E4u;
        goto label_3a17e4;
    }
    ctx->pc = 0x3A17DCu;
    {
        const bool branch_taken_0x3a17dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A17E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A17DCu;
            // 0x3a17e0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17dc) {
            ctx->pc = 0x3A1738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a1738;
        }
    }
    ctx->pc = 0x3A17E4u;
label_3a17e4:
    // 0x3a17e4: 0x0  nop
    ctx->pc = 0x3a17e4u;
    // NOP
label_3a17e8:
    // 0x3a17e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a17e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a17ec:
    // 0x3a17ec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3a17ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a17f0:
    // 0x3a17f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a17f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a17f4:
    // 0x3a17f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a17f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a17f8:
    // 0x3a17f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a17fc:
    // 0x3a17fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a17fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a1800:
    // 0x3a1800: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a1800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1804:
    // 0x3a1804: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a1804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1808:
    // 0x3a1808: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a1808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a180c:
    // 0x3a180c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a180cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1810:
    // 0x3a1810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a1810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1814:
    // 0x3a1814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a1814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1818:
    // 0x3a1818: 0x3e00008  jr          $ra
label_3a181c:
    if (ctx->pc == 0x3A181Cu) {
        ctx->pc = 0x3A181Cu;
            // 0x3a181c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3A1820u;
        goto label_3a1820;
    }
    ctx->pc = 0x3A1818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1818u;
            // 0x3a181c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1820u;
label_3a1820:
    // 0x3a1820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a1824:
    // 0x3a1824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a1824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a1828:
    // 0x3a1828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a182c:
    // 0x3a182c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a1830:
    // 0x3a1830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a1830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a1834:
    // 0x3a1834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a1834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a1838:
    // 0x3a1838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a183c:
    // 0x3a183c: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3a183cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3a1840:
    // 0x3a1840: 0xc0be258  jal         func_2F8960
label_3a1844:
    if (ctx->pc == 0x3A1844u) {
        ctx->pc = 0x3A1844u;
            // 0x3a1844: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3A1848u;
        goto label_3a1848;
    }
    ctx->pc = 0x3A1840u;
    SET_GPR_U32(ctx, 31, 0x3A1848u);
    ctx->pc = 0x3A1844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1840u;
            // 0x3a1844: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1848u; }
        if (ctx->pc != 0x3A1848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1848u; }
        if (ctx->pc != 0x3A1848u) { return; }
    }
    ctx->pc = 0x3A1848u;
label_3a1848:
    // 0x3a1848: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a1848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a184c:
    // 0x3a184c: 0xc0754b4  jal         func_1D52D0
label_3a1850:
    if (ctx->pc == 0x3A1850u) {
        ctx->pc = 0x3A1850u;
            // 0x3a1850: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x3A1854u;
        goto label_3a1854;
    }
    ctx->pc = 0x3A184Cu;
    SET_GPR_U32(ctx, 31, 0x3A1854u);
    ctx->pc = 0x3A1850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A184Cu;
            // 0x3a1850: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1854u; }
        if (ctx->pc != 0x3A1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1854u; }
        if (ctx->pc != 0x3A1854u) { return; }
    }
    ctx->pc = 0x3A1854u;
label_3a1854:
    // 0x3a1854: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3a1854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a1858:
    // 0x3a1858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a1858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a185c:
    // 0x3a185c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x3a185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_3a1860:
    // 0x3a1860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a1860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1864:
    // 0x3a1864: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x3a1864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_3a1868:
    // 0x3a1868: 0x320f809  jalr        $t9
label_3a186c:
    if (ctx->pc == 0x3A186Cu) {
        ctx->pc = 0x3A186Cu;
            // 0x3a186c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1870u;
        goto label_3a1870;
    }
    ctx->pc = 0x3A1868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1870u);
        ctx->pc = 0x3A186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1868u;
            // 0x3a186c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1870u; }
            if (ctx->pc != 0x3A1870u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1870u;
label_3a1870:
    // 0x3a1870: 0xc0c1560  jal         func_305580
label_3a1874:
    if (ctx->pc == 0x3A1874u) {
        ctx->pc = 0x3A1874u;
            // 0x3a1874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1878u;
        goto label_3a1878;
    }
    ctx->pc = 0x3A1870u;
    SET_GPR_U32(ctx, 31, 0x3A1878u);
    ctx->pc = 0x3A1874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1870u;
            // 0x3a1874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1878u; }
        if (ctx->pc != 0x3A1878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1878u; }
        if (ctx->pc != 0x3A1878u) { return; }
    }
    ctx->pc = 0x3A1878u;
label_3a1878:
    // 0x3a1878: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x3a1878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a187c:
    // 0x3a187c: 0xc0c1540  jal         func_305500
label_3a1880:
    if (ctx->pc == 0x3A1880u) {
        ctx->pc = 0x3A1880u;
            // 0x3a1880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1884u;
        goto label_3a1884;
    }
    ctx->pc = 0x3A187Cu;
    SET_GPR_U32(ctx, 31, 0x3A1884u);
    ctx->pc = 0x3A1880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A187Cu;
            // 0x3a1880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1884u; }
        if (ctx->pc != 0x3A1884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1884u; }
        if (ctx->pc != 0x3A1884u) { return; }
    }
    ctx->pc = 0x3A1884u;
label_3a1884:
    // 0x3a1884: 0x8e240e30  lw          $a0, 0xE30($s1)
    ctx->pc = 0x3a1884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_3a1888:
    // 0x3a1888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a188c:
    // 0x3a188c: 0x5083009d  beql        $a0, $v1, . + 4 + (0x9D << 2)
label_3a1890:
    if (ctx->pc == 0x3A1890u) {
        ctx->pc = 0x3A1890u;
            // 0x3a1890: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x3A1894u;
        goto label_3a1894;
    }
    ctx->pc = 0x3A188Cu;
    {
        const bool branch_taken_0x3a188c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a188c) {
            ctx->pc = 0x3A1890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A188Cu;
            // 0x3a1890: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1B04u;
            goto label_3a1b04;
        }
    }
    ctx->pc = 0x3A1894u;
label_3a1894:
    // 0x3a1894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a1894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1898:
    // 0x3a1898: 0x5086003f  beql        $a0, $a2, . + 4 + (0x3F << 2)
label_3a189c:
    if (ctx->pc == 0x3A189Cu) {
        ctx->pc = 0x3A189Cu;
            // 0x3a189c: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x3A18A0u;
        goto label_3a18a0;
    }
    ctx->pc = 0x3A1898u;
    {
        const bool branch_taken_0x3a1898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x3a1898) {
            ctx->pc = 0x3A189Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1898u;
            // 0x3a189c: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A18A0u;
label_3a18a0:
    // 0x3a18a0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3a18a4:
    if (ctx->pc == 0x3A18A4u) {
        ctx->pc = 0x3A18A4u;
            // 0x3a18a4: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x3A18A8u;
        goto label_3a18a8;
    }
    ctx->pc = 0x3A18A0u;
    {
        const bool branch_taken_0x3a18a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a18a0) {
            ctx->pc = 0x3A18A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A18A0u;
            // 0x3a18a4: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A18B0u;
            goto label_3a18b0;
        }
    }
    ctx->pc = 0x3A18A8u;
label_3a18a8:
    // 0x3a18a8: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_3a18ac:
    if (ctx->pc == 0x3A18ACu) {
        ctx->pc = 0x3A18ACu;
            // 0x3a18ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3A18B0u;
        goto label_3a18b0;
    }
    ctx->pc = 0x3A18A8u;
    {
        const bool branch_taken_0x3a18a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A18ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A18A8u;
            // 0x3a18ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a18a8) {
            ctx->pc = 0x3A1B40u;
            goto label_3a1b40;
        }
    }
    ctx->pc = 0x3A18B0u;
label_3a18b0:
    // 0x3a18b0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3a18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3a18b4:
    // 0x3a18b4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_3a18b8:
    if (ctx->pc == 0x3A18B8u) {
        ctx->pc = 0x3A18B8u;
            // 0x3a18b8: 0x8203010c  lb          $v1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->pc = 0x3A18BCu;
        goto label_3a18bc;
    }
    ctx->pc = 0x3A18B4u;
    {
        const bool branch_taken_0x3a18b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a18b4) {
            ctx->pc = 0x3A18B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A18B4u;
            // 0x3a18b8: 0x8203010c  lb          $v1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1924u;
            goto label_3a1924;
        }
    }
    ctx->pc = 0x3A18BCu;
label_3a18bc:
    // 0x3a18bc: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x3a18bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3a18c0:
    // 0x3a18c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a18c4:
    // 0x3a18c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a18c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a18c8:
    // 0x3a18c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a18cc:
    // 0x3a18cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a18ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a18d0:
    // 0x3a18d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a18d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a18d4:
    // 0x3a18d4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x3a18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3a18d8:
    // 0x3a18d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a18d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a18dc:
    // 0x3a18dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3a18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a18e0:
    // 0x3a18e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a18e4:
    // 0x3a18e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a18e8:
    // 0x3a18e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a18ec:
    // 0x3a18ec: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3a18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3a18f0:
    // 0x3a18f0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a18f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a18f4:
    // 0x3a18f4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3a18f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3a18f8:
    // 0x3a18f8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3a18f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3a18fc:
    // 0x3a18fc: 0x320f809  jalr        $t9
label_3a1900:
    if (ctx->pc == 0x3A1900u) {
        ctx->pc = 0x3A1900u;
            // 0x3a1900: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x3A1904u;
        goto label_3a1904;
    }
    ctx->pc = 0x3A18FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1904u);
        ctx->pc = 0x3A1900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A18FCu;
            // 0x3a1900: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1904u; }
            if (ctx->pc != 0x3A1904u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1904u;
label_3a1904:
    // 0x3a1904: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1908:
    // 0x3a1908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a190c:
    // 0x3a190c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1910:
    // 0x3a1910: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3a1910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3a1914:
    // 0x3a1914: 0x320f809  jalr        $t9
label_3a1918:
    if (ctx->pc == 0x3A1918u) {
        ctx->pc = 0x3A1918u;
            // 0x3a1918: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A191Cu;
        goto label_3a191c;
    }
    ctx->pc = 0x3A1914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A191Cu);
        ctx->pc = 0x3A1918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1914u;
            // 0x3a1918: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A191Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A191Cu; }
            if (ctx->pc != 0x3A191Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A191Cu;
label_3a191c:
    // 0x3a191c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3a1920:
    if (ctx->pc == 0x3A1920u) {
        ctx->pc = 0x3A1920u;
            // 0x3a1920: 0x3c043e8e  lui         $a0, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16014 << 16));
        ctx->pc = 0x3A1924u;
        goto label_3a1924;
    }
    ctx->pc = 0x3A191Cu;
    {
        const bool branch_taken_0x3a191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A191Cu;
            // 0x3a1920: 0x3c043e8e  lui         $a0, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16014 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a191c) {
            ctx->pc = 0x3A1984u;
            goto label_3a1984;
        }
    }
    ctx->pc = 0x3A1924u;
label_3a1924:
    // 0x3a1924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a1924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a1928:
    // 0x3a1928: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a1928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a192c:
    // 0x3a192c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1930:
    // 0x3a1930: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a1930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1934:
    // 0x3a1934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1938:
    // 0x3a1938: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x3a1938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3a193c:
    // 0x3a193c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a193cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a1940:
    // 0x3a1940: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a1944:
    // 0x3a1944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1948:
    // 0x3a1948: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a1948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a194c:
    // 0x3a194c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a1950:
    // 0x3a1950: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3a1950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3a1954:
    // 0x3a1954: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1958:
    // 0x3a1958: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3a1958u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3a195c:
    // 0x3a195c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3a195cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3a1960:
    // 0x3a1960: 0x320f809  jalr        $t9
label_3a1964:
    if (ctx->pc == 0x3A1964u) {
        ctx->pc = 0x3A1964u;
            // 0x3a1964: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x3A1968u;
        goto label_3a1968;
    }
    ctx->pc = 0x3A1960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1968u);
        ctx->pc = 0x3A1964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1960u;
            // 0x3a1964: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1968u; }
            if (ctx->pc != 0x3A1968u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1968u;
label_3a1968:
    // 0x3a1968: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a196c:
    // 0x3a196c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1970:
    // 0x3a1970: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a1970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1974:
    // 0x3a1974: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3a1974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3a1978:
    // 0x3a1978: 0x320f809  jalr        $t9
label_3a197c:
    if (ctx->pc == 0x3A197Cu) {
        ctx->pc = 0x3A197Cu;
            // 0x3a197c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A1980u;
        goto label_3a1980;
    }
    ctx->pc = 0x3A1978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1980u);
        ctx->pc = 0x3A197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1978u;
            // 0x3a197c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1980u; }
            if (ctx->pc != 0x3A1980u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1980u;
label_3a1980:
    // 0x3a1980: 0x3c043e8e  lui         $a0, 0x3E8E
    ctx->pc = 0x3a1980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16014 << 16));
label_3a1984:
    // 0x3a1984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1988:
    // 0x3a1988: 0x348438e4  ori         $a0, $a0, 0x38E4
    ctx->pc = 0x3a1988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14564);
label_3a198c:
    // 0x3a198c: 0xae240de4  sw          $a0, 0xDE4($s1)
    ctx->pc = 0x3a198cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 4));
label_3a1990:
    // 0x3a1990: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3a1994:
    if (ctx->pc == 0x3A1994u) {
        ctx->pc = 0x3A1994u;
            // 0x3a1994: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x3A1998u;
        goto label_3a1998;
    }
    ctx->pc = 0x3A1990u;
    {
        const bool branch_taken_0x3a1990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1990u;
            // 0x3a1994: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1990) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A1998u;
label_3a1998:
    // 0x3a1998: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a1998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a199c:
    // 0x3a199c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_3a19a0:
    if (ctx->pc == 0x3A19A0u) {
        ctx->pc = 0x3A19A0u;
            // 0x3a19a0: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x3A19A4u;
        goto label_3a19a4;
    }
    ctx->pc = 0x3A199Cu;
    {
        const bool branch_taken_0x3a199c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a199c) {
            ctx->pc = 0x3A19A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A199Cu;
            // 0x3a19a0: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A19DCu;
            goto label_3a19dc;
        }
    }
    ctx->pc = 0x3A19A4u;
label_3a19a4:
    // 0x3a19a4: 0x8e230dac  lw          $v1, 0xDAC($s1)
    ctx->pc = 0x3a19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3500)));
label_3a19a8:
    // 0x3a19a8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3a19a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3a19ac:
    // 0x3a19ac: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_3a19b0:
    if (ctx->pc == 0x3A19B0u) {
        ctx->pc = 0x3A19B4u;
        goto label_3a19b4;
    }
    ctx->pc = 0x3A19ACu;
    {
        const bool branch_taken_0x3a19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a19ac) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A19B4u;
label_3a19b4:
    // 0x3a19b4: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x3a19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_3a19b8:
    // 0x3a19b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a19bc:
    // 0x3a19bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a19bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a19c0:
    // 0x3a19c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a19c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a19c4:
    // 0x3a19c4: 0x320f809  jalr        $t9
label_3a19c8:
    if (ctx->pc == 0x3A19C8u) {
        ctx->pc = 0x3A19CCu;
        goto label_3a19cc;
    }
    ctx->pc = 0x3A19C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A19CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A19CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A19CCu; }
            if (ctx->pc != 0x3A19CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A19CCu;
label_3a19cc:
    // 0x3a19cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3a19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3a19d0:
    // 0x3a19d0: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
label_3a19d4:
    if (ctx->pc == 0x3A19D4u) {
        ctx->pc = 0x3A19D8u;
        goto label_3a19d8;
    }
    ctx->pc = 0x3A19D0u;
    {
        const bool branch_taken_0x3a19d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a19d0) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A19D8u;
label_3a19d8:
    // 0x3a19d8: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x3a19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_3a19dc:
    // 0x3a19dc: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3a19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3a19e0:
    // 0x3a19e0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_3a19e4:
    if (ctx->pc == 0x3A19E4u) {
        ctx->pc = 0x3A19E4u;
            // 0x3a19e4: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->pc = 0x3A19E8u;
        goto label_3a19e8;
    }
    ctx->pc = 0x3A19E0u;
    {
        const bool branch_taken_0x3a19e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a19e0) {
            ctx->pc = 0x3A19E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A19E0u;
            // 0x3a19e4: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1A54u;
            goto label_3a1a54;
        }
    }
    ctx->pc = 0x3A19E8u;
label_3a19e8:
    // 0x3a19e8: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x3a19e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3a19ec:
    // 0x3a19ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a19f0:
    // 0x3a19f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a19f4:
    // 0x3a19f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3a19f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a19f8:
    // 0x3a19f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a19f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a19fc:
    // 0x3a19fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a19fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a00:
    // 0x3a1a00: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a1a04:
    // 0x3a1a04: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3a1a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a1a08:
    // 0x3a1a08: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3a1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a1a0c:
    // 0x3a1a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1a10:
    // 0x3a1a10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a1a14:
    // 0x3a1a14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a1a18:
    // 0x3a1a18: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3a1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3a1a1c:
    // 0x3a1a1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a1a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1a20:
    // 0x3a1a20: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1a24:
    // 0x3a1a24: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3a1a24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3a1a28:
    // 0x3a1a28: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3a1a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3a1a2c:
    // 0x3a1a2c: 0x320f809  jalr        $t9
label_3a1a30:
    if (ctx->pc == 0x3A1A30u) {
        ctx->pc = 0x3A1A30u;
            // 0x3a1a30: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A1A34u;
        goto label_3a1a34;
    }
    ctx->pc = 0x3A1A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1A34u);
        ctx->pc = 0x3A1A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1A2Cu;
            // 0x3a1a30: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1A34u; }
            if (ctx->pc != 0x3A1A34u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1A34u;
label_3a1a34:
    // 0x3a1a34: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1a38:
    // 0x3a1a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a3c:
    // 0x3a1a3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1a40:
    // 0x3a1a40: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3a1a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3a1a44:
    // 0x3a1a44: 0x320f809  jalr        $t9
label_3a1a48:
    if (ctx->pc == 0x3A1A48u) {
        ctx->pc = 0x3A1A48u;
            // 0x3a1a48: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A1A4Cu;
        goto label_3a1a4c;
    }
    ctx->pc = 0x3A1A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1A4Cu);
        ctx->pc = 0x3A1A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1A44u;
            // 0x3a1a48: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1A4Cu; }
            if (ctx->pc != 0x3A1A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A1A4Cu;
label_3a1a4c:
    // 0x3a1a4c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3a1a50:
    if (ctx->pc == 0x3A1A50u) {
        ctx->pc = 0x3A1A50u;
            // 0x3a1a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A54u;
        goto label_3a1a54;
    }
    ctx->pc = 0x3A1A4Cu;
    {
        const bool branch_taken_0x3a1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1A4Cu;
            // 0x3a1a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a4c) {
            ctx->pc = 0x3A1AB8u;
            goto label_3a1ab8;
        }
    }
    ctx->pc = 0x3A1A54u;
label_3a1a54:
    // 0x3a1a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1a58:
    // 0x3a1a58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a1a5c:
    // 0x3a1a5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3a1a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1a60:
    // 0x3a1a60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3a1a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a1a64:
    // 0x3a1a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a68:
    // 0x3a1a68: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a1a6c:
    // 0x3a1a6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3a1a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3a1a70:
    // 0x3a1a70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a1a74:
    // 0x3a1a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1a78:
    // 0x3a1a78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a1a7c:
    // 0x3a1a7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a1a80:
    // 0x3a1a80: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3a1a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3a1a84:
    // 0x3a1a84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a1a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1a88:
    // 0x3a1a88: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1a8c:
    // 0x3a1a8c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3a1a8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3a1a90:
    // 0x3a1a90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3a1a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3a1a94:
    // 0x3a1a94: 0x320f809  jalr        $t9
label_3a1a98:
    if (ctx->pc == 0x3A1A98u) {
        ctx->pc = 0x3A1A98u;
            // 0x3a1a98: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A1A9Cu;
        goto label_3a1a9c;
    }
    ctx->pc = 0x3A1A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1A9Cu);
        ctx->pc = 0x3A1A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1A94u;
            // 0x3a1a98: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1A9Cu; }
            if (ctx->pc != 0x3A1A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A1A9Cu;
label_3a1a9c:
    // 0x3a1a9c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3a1a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1aa0:
    // 0x3a1aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1aa4:
    // 0x3a1aa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a1aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1aa8:
    // 0x3a1aa8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3a1aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3a1aac:
    // 0x3a1aac: 0x320f809  jalr        $t9
label_3a1ab0:
    if (ctx->pc == 0x3A1AB0u) {
        ctx->pc = 0x3A1AB0u;
            // 0x3a1ab0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A1AB4u;
        goto label_3a1ab4;
    }
    ctx->pc = 0x3A1AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1AB4u);
        ctx->pc = 0x3A1AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1AACu;
            // 0x3a1ab0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1AB4u; }
            if (ctx->pc != 0x3A1AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1AB4u;
label_3a1ab4:
    // 0x3a1ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ab8:
    // 0x3a1ab8: 0xc0c1590  jal         func_305640
label_3a1abc:
    if (ctx->pc == 0x3A1ABCu) {
        ctx->pc = 0x3A1AC0u;
        goto label_3a1ac0;
    }
    ctx->pc = 0x3A1AB8u;
    SET_GPR_U32(ctx, 31, 0x3A1AC0u);
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1AC0u; }
        if (ctx->pc != 0x3A1AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1AC0u; }
        if (ctx->pc != 0x3A1AC0u) { return; }
    }
    ctx->pc = 0x3A1AC0u;
label_3a1ac0:
    // 0x3a1ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ac4:
    // 0x3a1ac4: 0xc07649c  jal         func_1D9270
label_3a1ac8:
    if (ctx->pc == 0x3A1AC8u) {
        ctx->pc = 0x3A1AC8u;
            // 0x3a1ac8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3A1ACCu;
        goto label_3a1acc;
    }
    ctx->pc = 0x3A1AC4u;
    SET_GPR_U32(ctx, 31, 0x3A1ACCu);
    ctx->pc = 0x3A1AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1AC4u;
            // 0x3a1ac8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1ACCu; }
        if (ctx->pc != 0x3A1ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1ACCu; }
        if (ctx->pc != 0x3A1ACCu) { return; }
    }
    ctx->pc = 0x3A1ACCu;
label_3a1acc:
    // 0x3a1acc: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x3a1accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_3a1ad0:
    // 0x3a1ad0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3a1ad4:
    // 0x3a1ad4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3a1ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3a1ad8:
    // 0x3a1ad8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a1ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a1adc:
    // 0x3a1adc: 0x320f809  jalr        $t9
label_3a1ae0:
    if (ctx->pc == 0x3A1AE0u) {
        ctx->pc = 0x3A1AE0u;
            // 0x3a1ae0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3A1AE4u;
        goto label_3a1ae4;
    }
    ctx->pc = 0x3A1ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1AE4u);
        ctx->pc = 0x3A1AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1ADCu;
            // 0x3a1ae0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1AE4u; }
            if (ctx->pc != 0x3A1AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1AE4u;
label_3a1ae4:
    // 0x3a1ae4: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x3a1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_3a1ae8:
    // 0x3a1ae8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3a1ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3a1aec:
    // 0x3a1aec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a1aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a1af0:
    // 0x3a1af0: 0x320f809  jalr        $t9
label_3a1af4:
    if (ctx->pc == 0x3A1AF4u) {
        ctx->pc = 0x3A1AF4u;
            // 0x3a1af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A1AF8u;
        goto label_3a1af8;
    }
    ctx->pc = 0x3A1AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1AF8u);
        ctx->pc = 0x3A1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1AF0u;
            // 0x3a1af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1AF8u; }
            if (ctx->pc != 0x3A1AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1AF8u;
label_3a1af8:
    // 0x3a1af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a1afc:
    // 0x3a1afc: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a1b00:
    if (ctx->pc == 0x3A1B00u) {
        ctx->pc = 0x3A1B00u;
            // 0x3a1b00: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x3A1B04u;
        goto label_3a1b04;
    }
    ctx->pc = 0x3A1AFCu;
    {
        const bool branch_taken_0x3a1afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1AFCu;
            // 0x3a1b00: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1afc) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A1B04u;
label_3a1b04:
    // 0x3a1b04: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3a1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3a1b08:
    // 0x3a1b08: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3a1b0c:
    if (ctx->pc == 0x3A1B0Cu) {
        ctx->pc = 0x3A1B0Cu;
            // 0x3a1b0c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3A1B10u;
        goto label_3a1b10;
    }
    ctx->pc = 0x3A1B08u;
    {
        const bool branch_taken_0x3a1b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b08) {
            ctx->pc = 0x3A1B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1B08u;
            // 0x3a1b0c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1B2Cu;
            goto label_3a1b2c;
        }
    }
    ctx->pc = 0x3A1B10u;
label_3a1b10:
    // 0x3a1b10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a1b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1b14:
    // 0x3a1b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b18:
    // 0x3a1b18: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a1b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a1b1c:
    // 0x3a1b1c: 0x320f809  jalr        $t9
label_3a1b20:
    if (ctx->pc == 0x3A1B20u) {
        ctx->pc = 0x3A1B20u;
            // 0x3a1b20: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3A1B24u;
        goto label_3a1b24;
    }
    ctx->pc = 0x3A1B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1B24u);
        ctx->pc = 0x3A1B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1B1Cu;
            // 0x3a1b20: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1B24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1B24u; }
            if (ctx->pc != 0x3A1B24u) { return; }
        }
        }
    }
    ctx->pc = 0x3A1B24u;
label_3a1b24:
    // 0x3a1b24: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a1b28:
    if (ctx->pc == 0x3A1B28u) {
        ctx->pc = 0x3A1B2Cu;
        goto label_3a1b2c;
    }
    ctx->pc = 0x3A1B24u;
    {
        const bool branch_taken_0x3a1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b24) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A1B2Cu;
label_3a1b2c:
    // 0x3a1b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b30:
    // 0x3a1b30: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a1b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a1b34:
    // 0x3a1b34: 0x320f809  jalr        $t9
label_3a1b38:
    if (ctx->pc == 0x3A1B38u) {
        ctx->pc = 0x3A1B38u;
            // 0x3a1b38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A1B3Cu;
        goto label_3a1b3c;
    }
    ctx->pc = 0x3A1B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1B3Cu);
        ctx->pc = 0x3A1B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1B34u;
            // 0x3a1b38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A1B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A1B3Cu; }
            if (ctx->pc != 0x3A1B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A1B3Cu;
label_3a1b3c:
    // 0x3a1b3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a1b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1b40:
    // 0x3a1b40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a1b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1b44:
    // 0x3a1b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a1b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1b48:
    // 0x3a1b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a1b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1b4c:
    // 0x3a1b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a1b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1b50:
    // 0x3a1b50: 0x3e00008  jr          $ra
label_3a1b54:
    if (ctx->pc == 0x3A1B54u) {
        ctx->pc = 0x3A1B54u;
            // 0x3a1b54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3A1B58u;
        goto label_3a1b58;
    }
    ctx->pc = 0x3A1B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1B50u;
            // 0x3a1b54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1B58u;
label_3a1b58:
    // 0x3a1b58: 0x0  nop
    ctx->pc = 0x3a1b58u;
    // NOP
label_3a1b5c:
    // 0x3a1b5c: 0x0  nop
    ctx->pc = 0x3a1b5cu;
    // NOP
label_3a1b60:
    // 0x3a1b60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3a1b64:
    // 0x3a1b64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3a1b68:
    // 0x3a1b68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a1b6c:
    // 0x3a1b6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a1b70:
    // 0x3a1b70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a1b74:
    // 0x3a1b74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a1b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b78:
    // 0x3a1b78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a1b7c:
    // 0x3a1b7c: 0x26930580  addiu       $s3, $s4, 0x580
    ctx->pc = 0x3a1b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
label_3a1b80:
    // 0x3a1b80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a1b84:
    // 0x3a1b84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a1b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a1b88:
    // 0x3a1b88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a1b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a1b8c:
    // 0x3a1b8c: 0x8c920d74  lw          $s2, 0xD74($a0)
    ctx->pc = 0x3a1b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_3a1b90:
    // 0x3a1b90: 0x8c900d70  lw          $s0, 0xD70($a0)
    ctx->pc = 0x3a1b90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3a1b94:
    // 0x3a1b94: 0xc0754b4  jal         func_1D52D0
label_3a1b98:
    if (ctx->pc == 0x3A1B98u) {
        ctx->pc = 0x3A1B98u;
            // 0x3a1b98: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->pc = 0x3A1B9Cu;
        goto label_3a1b9c;
    }
    ctx->pc = 0x3A1B94u;
    SET_GPR_U32(ctx, 31, 0x3A1B9Cu);
    ctx->pc = 0x3A1B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1B94u;
            // 0x3a1b98: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1B9Cu; }
        if (ctx->pc != 0x3A1B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1B9Cu; }
        if (ctx->pc != 0x3A1B9Cu) { return; }
    }
    ctx->pc = 0x3A1B9Cu;
label_3a1b9c:
    // 0x3a1b9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a1b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ba0:
    // 0x3a1ba0: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x3a1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3a1ba4:
    // 0x3a1ba4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3a1ba8:
    if (ctx->pc == 0x3A1BA8u) {
        ctx->pc = 0x3A1BA8u;
            // 0x3a1ba8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A1BACu;
        goto label_3a1bac;
    }
    ctx->pc = 0x3A1BA4u;
    {
        const bool branch_taken_0x3a1ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1ba4) {
            ctx->pc = 0x3A1BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1BA4u;
            // 0x3a1ba8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1BC8u;
            goto label_3a1bc8;
        }
    }
    ctx->pc = 0x3A1BACu;
label_3a1bac:
    // 0x3a1bac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a1bb0:
    // 0x3a1bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1bb4:
    // 0x3a1bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a1bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1bb8:
    // 0x3a1bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1bbc:
    // 0x3a1bbc: 0xc0bdf9c  jal         func_2F7E70
label_3a1bc0:
    if (ctx->pc == 0x3A1BC0u) {
        ctx->pc = 0x3A1BC0u;
            // 0x3a1bc0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3A1BC4u;
        goto label_3a1bc4;
    }
    ctx->pc = 0x3A1BBCu;
    SET_GPR_U32(ctx, 31, 0x3A1BC4u);
    ctx->pc = 0x3A1BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1BBCu;
            // 0x3a1bc0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1BC4u; }
        if (ctx->pc != 0x3A1BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1BC4u; }
        if (ctx->pc != 0x3A1BC4u) { return; }
    }
    ctx->pc = 0x3A1BC4u;
label_3a1bc4:
    // 0x3a1bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1bc8:
    // 0x3a1bc8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3a1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3a1bcc:
    // 0x3a1bcc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3a1bd0:
    // 0x3a1bd0: 0xa28311c0  sb          $v1, 0x11C0($s4)
    ctx->pc = 0x3a1bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4544), (uint8_t)GPR_U32(ctx, 3));
label_3a1bd4:
    // 0x3a1bd4: 0x26840340  addiu       $a0, $s4, 0x340
    ctx->pc = 0x3a1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_3a1bd8:
    // 0x3a1bd8: 0xae820db8  sw          $v0, 0xDB8($s4)
    ctx->pc = 0x3a1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 2));
label_3a1bdc:
    // 0x3a1bdc: 0xc04cc04  jal         func_133010
label_3a1be0:
    if (ctx->pc == 0x3A1BE0u) {
        ctx->pc = 0x3A1BE0u;
            // 0x3a1be0: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->pc = 0x3A1BE4u;
        goto label_3a1be4;
    }
    ctx->pc = 0x3A1BDCu;
    SET_GPR_U32(ctx, 31, 0x3A1BE4u);
    ctx->pc = 0x3A1BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1BDCu;
            // 0x3a1be0: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1BE4u; }
        if (ctx->pc != 0x3A1BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1BE4u; }
        if (ctx->pc != 0x3A1BE4u) { return; }
    }
    ctx->pc = 0x3A1BE4u;
label_3a1be4:
    // 0x3a1be4: 0x8e900d74  lw          $s0, 0xD74($s4)
    ctx->pc = 0x3a1be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_3a1be8:
    // 0x3a1be8: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x3a1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_3a1bec:
    // 0x3a1bec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3a1bf0:
    // 0x3a1bf0: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x3a1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3a1bf4:
    // 0x3a1bf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a1bf8:
    // 0x3a1bf8: 0xc0a545c  jal         func_295170
label_3a1bfc:
    if (ctx->pc == 0x3A1BFCu) {
        ctx->pc = 0x3A1BFCu;
            // 0x3a1bfc: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3A1C00u;
        goto label_3a1c00;
    }
    ctx->pc = 0x3A1BF8u;
    SET_GPR_U32(ctx, 31, 0x3A1C00u);
    ctx->pc = 0x3A1BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1BF8u;
            // 0x3a1bfc: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C00u; }
        if (ctx->pc != 0x3A1C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C00u; }
        if (ctx->pc != 0x3A1C00u) { return; }
    }
    ctx->pc = 0x3A1C00u;
label_3a1c00:
    // 0x3a1c00: 0xac55002c  sw          $s5, 0x2C($v0)
    ctx->pc = 0x3a1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 21));
label_3a1c04:
    // 0x3a1c04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a1c08:
    // 0x3a1c08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3a1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a1c0c:
    // 0x3a1c0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3a1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3a1c10:
    // 0x3a1c10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a1c14:
    // 0x3a1c14: 0xc08bf20  jal         func_22FC80
label_3a1c18:
    if (ctx->pc == 0x3A1C18u) {
        ctx->pc = 0x3A1C18u;
            // 0x3a1c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C1Cu;
        goto label_3a1c1c;
    }
    ctx->pc = 0x3A1C14u;
    SET_GPR_U32(ctx, 31, 0x3A1C1Cu);
    ctx->pc = 0x3A1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C14u;
            // 0x3a1c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C1Cu; }
        if (ctx->pc != 0x3A1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C1Cu; }
        if (ctx->pc != 0x3A1C1Cu) { return; }
    }
    ctx->pc = 0x3A1C1Cu;
label_3a1c1c:
    // 0x3a1c1c: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x3a1c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_3a1c20:
    // 0x3a1c20: 0xae800e1c  sw          $zero, 0xE1C($s4)
    ctx->pc = 0x3a1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3612), GPR_U32(ctx, 0));
label_3a1c24:
    // 0x3a1c24: 0x268508d0  addiu       $a1, $s4, 0x8D0
    ctx->pc = 0x3a1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2256));
label_3a1c28:
    // 0x3a1c28: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a1c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c2c:
    // 0x3a1c2c: 0xc075378  jal         func_1D4DE0
label_3a1c30:
    if (ctx->pc == 0x3A1C30u) {
        ctx->pc = 0x3A1C30u;
            // 0x3a1c30: 0xae800e20  sw          $zero, 0xE20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3616), GPR_U32(ctx, 0));
        ctx->pc = 0x3A1C34u;
        goto label_3a1c34;
    }
    ctx->pc = 0x3A1C2Cu;
    SET_GPR_U32(ctx, 31, 0x3A1C34u);
    ctx->pc = 0x3A1C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C2Cu;
            // 0x3a1c30: 0xae800e20  sw          $zero, 0xE20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C34u; }
        if (ctx->pc != 0x3A1C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C34u; }
        if (ctx->pc != 0x3A1C34u) { return; }
    }
    ctx->pc = 0x3A1C34u;
label_3a1c34:
    // 0x3a1c34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a1c34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a1c38:
    // 0x3a1c38: 0x2684092c  addiu       $a0, $s4, 0x92C
    ctx->pc = 0x3a1c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2348));
label_3a1c3c:
    // 0x3a1c3c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3a1c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3a1c40:
    // 0x3a1c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a1c44:
    // 0x3a1c44: 0xc0c753c  jal         func_31D4F0
label_3a1c48:
    if (ctx->pc == 0x3A1C48u) {
        ctx->pc = 0x3A1C48u;
            // 0x3a1c48: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A1C4Cu;
        goto label_3a1c4c;
    }
    ctx->pc = 0x3A1C44u;
    SET_GPR_U32(ctx, 31, 0x3A1C4Cu);
    ctx->pc = 0x3A1C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C44u;
            // 0x3a1c48: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C4Cu; }
        if (ctx->pc != 0x3A1C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C4Cu; }
        if (ctx->pc != 0x3A1C4Cu) { return; }
    }
    ctx->pc = 0x3A1C4Cu;
label_3a1c4c:
    // 0x3a1c4c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3a1c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3a1c50:
    // 0x3a1c50: 0x2684087c  addiu       $a0, $s4, 0x87C
    ctx->pc = 0x3a1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2172));
label_3a1c54:
    // 0x3a1c54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a1c58:
    // 0x3a1c58: 0xc0c753c  jal         func_31D4F0
label_3a1c5c:
    if (ctx->pc == 0x3A1C5Cu) {
        ctx->pc = 0x3A1C5Cu;
            // 0x3a1c5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A1C60u;
        goto label_3a1c60;
    }
    ctx->pc = 0x3A1C58u;
    SET_GPR_U32(ctx, 31, 0x3A1C60u);
    ctx->pc = 0x3A1C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C58u;
            // 0x3a1c5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C60u; }
        if (ctx->pc != 0x3A1C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C60u; }
        if (ctx->pc != 0x3A1C60u) { return; }
    }
    ctx->pc = 0x3A1C60u;
label_3a1c60:
    // 0x3a1c60: 0xc0b9210  jal         func_2E4840
label_3a1c64:
    if (ctx->pc == 0x3A1C64u) {
        ctx->pc = 0x3A1C64u;
            // 0x3a1c64: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->pc = 0x3A1C68u;
        goto label_3a1c68;
    }
    ctx->pc = 0x3A1C60u;
    SET_GPR_U32(ctx, 31, 0x3A1C68u);
    ctx->pc = 0x3A1C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C60u;
            // 0x3a1c64: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C68u; }
        if (ctx->pc != 0x3A1C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C68u; }
        if (ctx->pc != 0x3A1C68u) { return; }
    }
    ctx->pc = 0x3A1C68u;
label_3a1c68:
    // 0x3a1c68: 0x26850560  addiu       $a1, $s4, 0x560
    ctx->pc = 0x3a1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_3a1c6c:
    // 0x3a1c6c: 0x268408f0  addiu       $a0, $s4, 0x8F0
    ctx->pc = 0x3a1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2288));
label_3a1c70:
    // 0x3a1c70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a1c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1c74:
    // 0x3a1c74: 0xc0c6250  jal         func_318940
label_3a1c78:
    if (ctx->pc == 0x3A1C78u) {
        ctx->pc = 0x3A1C78u;
            // 0x3a1c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C7Cu;
        goto label_3a1c7c;
    }
    ctx->pc = 0x3A1C74u;
    SET_GPR_U32(ctx, 31, 0x3A1C7Cu);
    ctx->pc = 0x3A1C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C74u;
            // 0x3a1c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C7Cu; }
        if (ctx->pc != 0x3A1C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1C7Cu; }
        if (ctx->pc != 0x3A1C7Cu) { return; }
    }
    ctx->pc = 0x3A1C7Cu;
label_3a1c7c:
    // 0x3a1c7c: 0x8e820e34  lw          $v0, 0xE34($s4)
    ctx->pc = 0x3a1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_3a1c80:
    // 0x3a1c80: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3a1c80u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a1c84:
    // 0x3a1c84: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3a1c88:
    if (ctx->pc == 0x3A1C88u) {
        ctx->pc = 0x3A1C88u;
            // 0x3a1c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C8Cu;
        goto label_3a1c8c;
    }
    ctx->pc = 0x3A1C84u;
    {
        const bool branch_taken_0x3a1c84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A1C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1C84u;
            // 0x3a1c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c84) {
            ctx->pc = 0x3A1C9Cu;
            goto label_3a1c9c;
        }
    }
    ctx->pc = 0x3A1C8Cu;
label_3a1c8c:
    // 0x3a1c8c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3a1c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a1c90:
    // 0x3a1c90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a1c94:
    if (ctx->pc == 0x3A1C94u) {
        ctx->pc = 0x3A1C98u;
        goto label_3a1c98;
    }
    ctx->pc = 0x3A1C90u;
    {
        const bool branch_taken_0x3a1c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1c90) {
            ctx->pc = 0x3A1C9Cu;
            goto label_3a1c9c;
        }
    }
    ctx->pc = 0x3A1C98u;
label_3a1c98:
    // 0x3a1c98: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3a1c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c9c:
    // 0x3a1c9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3a1ca0:
    if (ctx->pc == 0x3A1CA0u) {
        ctx->pc = 0x3A1CA4u;
        goto label_3a1ca4;
    }
    ctx->pc = 0x3A1C9Cu;
    {
        const bool branch_taken_0x3a1c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1c9c) {
            ctx->pc = 0x3A1CB8u;
            goto label_3a1cb8;
        }
    }
    ctx->pc = 0x3A1CA4u;
label_3a1ca4:
    // 0x3a1ca4: 0xc075eb4  jal         func_1D7AD0
label_3a1ca8:
    if (ctx->pc == 0x3A1CA8u) {
        ctx->pc = 0x3A1CA8u;
            // 0x3a1ca8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CACu;
        goto label_3a1cac;
    }
    ctx->pc = 0x3A1CA4u;
    SET_GPR_U32(ctx, 31, 0x3A1CACu);
    ctx->pc = 0x3A1CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1CA4u;
            // 0x3a1ca8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CACu; }
        if (ctx->pc != 0x3A1CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CACu; }
        if (ctx->pc != 0x3A1CACu) { return; }
    }
    ctx->pc = 0x3A1CACu;
label_3a1cac:
    // 0x3a1cac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a1cb0:
    if (ctx->pc == 0x3A1CB0u) {
        ctx->pc = 0x3A1CB4u;
        goto label_3a1cb4;
    }
    ctx->pc = 0x3A1CACu;
    {
        const bool branch_taken_0x3a1cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1cac) {
            ctx->pc = 0x3A1CB8u;
            goto label_3a1cb8;
        }
    }
    ctx->pc = 0x3A1CB4u;
label_3a1cb4:
    // 0x3a1cb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a1cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1cb8:
    // 0x3a1cb8: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3a1cbc:
    if (ctx->pc == 0x3A1CBCu) {
        ctx->pc = 0x3A1CBCu;
            // 0x3a1cbc: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x3A1CC0u;
        goto label_3a1cc0;
    }
    ctx->pc = 0x3A1CB8u;
    {
        const bool branch_taken_0x3a1cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1cb8) {
            ctx->pc = 0x3A1CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1CB8u;
            // 0x3a1cbc: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1CD4u;
            goto label_3a1cd4;
        }
    }
    ctx->pc = 0x3A1CC0u;
label_3a1cc0:
    // 0x3a1cc0: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x3a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_3a1cc4:
    // 0x3a1cc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3a1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a1cc8:
    // 0x3a1cc8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_3a1ccc:
    if (ctx->pc == 0x3A1CCCu) {
        ctx->pc = 0x3A1CD0u;
        goto label_3a1cd0;
    }
    ctx->pc = 0x3A1CC8u;
    {
        const bool branch_taken_0x3a1cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1cc8) {
            ctx->pc = 0x3A1CF8u;
            goto label_3a1cf8;
        }
    }
    ctx->pc = 0x3A1CD0u;
label_3a1cd0:
    // 0x3a1cd0: 0x9284005c  lbu         $a0, 0x5C($s4)
    ctx->pc = 0x3a1cd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
label_3a1cd4:
    // 0x3a1cd4: 0xc072b78  jal         func_1CADE0
label_3a1cd8:
    if (ctx->pc == 0x3A1CD8u) {
        ctx->pc = 0x3A1CDCu;
        goto label_3a1cdc;
    }
    ctx->pc = 0x3A1CD4u;
    SET_GPR_U32(ctx, 31, 0x3A1CDCu);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CDCu; }
        if (ctx->pc != 0x3A1CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CDCu; }
        if (ctx->pc != 0x3A1CDCu) { return; }
    }
    ctx->pc = 0x3A1CDCu;
label_3a1cdc:
    // 0x3a1cdc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a1ce0:
    if (ctx->pc == 0x3A1CE0u) {
        ctx->pc = 0x3A1CE0u;
            // 0x3a1ce0: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->pc = 0x3A1CE4u;
        goto label_3a1ce4;
    }
    ctx->pc = 0x3A1CDCu;
    {
        const bool branch_taken_0x3a1cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1cdc) {
            ctx->pc = 0x3A1CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1CDCu;
            // 0x3a1ce0: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1CF0u;
            goto label_3a1cf0;
        }
    }
    ctx->pc = 0x3A1CE4u;
label_3a1ce4:
    // 0x3a1ce4: 0xc072aaa  jal         func_1CAAA8
label_3a1ce8:
    if (ctx->pc == 0x3A1CE8u) {
        ctx->pc = 0x3A1CE8u;
            // 0x3a1ce8: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x3A1CECu;
        goto label_3a1cec;
    }
    ctx->pc = 0x3A1CE4u;
    SET_GPR_U32(ctx, 31, 0x3A1CECu);
    ctx->pc = 0x3A1CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1CE4u;
            // 0x3a1ce8: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CECu; }
        if (ctx->pc != 0x3A1CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CECu; }
        if (ctx->pc != 0x3A1CECu) { return; }
    }
    ctx->pc = 0x3A1CECu;
label_3a1cec:
    // 0x3a1cec: 0x8e840d70  lw          $a0, 0xD70($s4)
    ctx->pc = 0x3a1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_3a1cf0:
    // 0x3a1cf0: 0xc0bd98c  jal         func_2F6630
label_3a1cf4:
    if (ctx->pc == 0x3A1CF4u) {
        ctx->pc = 0x3A1CF8u;
        goto label_3a1cf8;
    }
    ctx->pc = 0x3A1CF0u;
    SET_GPR_U32(ctx, 31, 0x3A1CF8u);
    ctx->pc = 0x2F6630u;
    if (runtime->hasFunction(0x2F6630u)) {
        auto targetFn = runtime->lookupFunction(0x2F6630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CF8u; }
        if (ctx->pc != 0x3A1CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6630_0x2f6630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1CF8u; }
        if (ctx->pc != 0x3A1CF8u) { return; }
    }
    ctx->pc = 0x3A1CF8u;
label_3a1cf8:
    // 0x3a1cf8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3a1cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3a1cfc:
    // 0x3a1cfc: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x3a1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_3a1d00:
    // 0x3a1d00: 0xc04cc04  jal         func_133010
label_3a1d04:
    if (ctx->pc == 0x3A1D04u) {
        ctx->pc = 0x3A1D04u;
            // 0x3a1d04: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->pc = 0x3A1D08u;
        goto label_3a1d08;
    }
    ctx->pc = 0x3A1D00u;
    SET_GPR_U32(ctx, 31, 0x3A1D08u);
    ctx->pc = 0x3A1D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1D00u;
            // 0x3a1d04: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D08u; }
        if (ctx->pc != 0x3A1D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D08u; }
        if (ctx->pc != 0x3A1D08u) { return; }
    }
    ctx->pc = 0x3A1D08u;
label_3a1d08:
    // 0x3a1d08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1d0c:
    // 0x3a1d0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3a1d10:
    // 0x3a1d10: 0xa6820c68  sh          $v0, 0xC68($s4)
    ctx->pc = 0x3a1d10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 3176), (uint16_t)GPR_U32(ctx, 2));
label_3a1d14:
    // 0x3a1d14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1d18:
    // 0x3a1d18: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a1d1c:
    // 0x3a1d1c: 0xae830dbc  sw          $v1, 0xDBC($s4)
    ctx->pc = 0x3a1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3516), GPR_U32(ctx, 3));
label_3a1d20:
    // 0x3a1d20: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x3a1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1d24:
    // 0x3a1d24: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x3a1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_3a1d28:
    // 0x3a1d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1d2c:
    // 0x3a1d2c: 0x8e820550  lw          $v0, 0x550($s4)
    ctx->pc = 0x3a1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_3a1d30:
    // 0x3a1d30: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x3a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_3a1d34:
    // 0x3a1d34: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3a1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a1d38:
    // 0x3a1d38: 0xe6810de0  swc1        $f1, 0xDE0($s4)
    ctx->pc = 0x3a1d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3552), bits); }
label_3a1d3c:
    // 0x3a1d3c: 0xe6800ddc  swc1        $f0, 0xDDC($s4)
    ctx->pc = 0x3a1d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3548), bits); }
label_3a1d40:
    // 0x3a1d40: 0xae800de8  sw          $zero, 0xDE8($s4)
    ctx->pc = 0x3a1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
label_3a1d44:
    // 0x3a1d44: 0xc077fb0  jal         func_1DFEC0
label_3a1d48:
    if (ctx->pc == 0x3A1D48u) {
        ctx->pc = 0x3A1D48u;
            // 0x3a1d48: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x3A1D4Cu;
        goto label_3a1d4c;
    }
    ctx->pc = 0x3A1D44u;
    SET_GPR_U32(ctx, 31, 0x3A1D4Cu);
    ctx->pc = 0x3A1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1D44u;
            // 0x3a1d48: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D4Cu; }
        if (ctx->pc != 0x3A1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D4Cu; }
        if (ctx->pc != 0x3A1D4Cu) { return; }
    }
    ctx->pc = 0x3A1D4Cu;
label_3a1d4c:
    // 0x3a1d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1d50:
    // 0x3a1d50: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3a1d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_3a1d54:
    // 0x3a1d54: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x3a1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_3a1d58:
    // 0x3a1d58: 0xae4202b0  sw          $v0, 0x2B0($s2)
    ctx->pc = 0x3a1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
label_3a1d5c:
    // 0x3a1d5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a1d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1d60:
    // 0x3a1d60: 0xc04cca0  jal         func_133280
label_3a1d64:
    if (ctx->pc == 0x3A1D64u) {
        ctx->pc = 0x3A1D64u;
            // 0x3a1d64: 0x24c67530  addiu       $a2, $a2, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30000));
        ctx->pc = 0x3A1D68u;
        goto label_3a1d68;
    }
    ctx->pc = 0x3A1D60u;
    SET_GPR_U32(ctx, 31, 0x3A1D68u);
    ctx->pc = 0x3A1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1D60u;
            // 0x3a1d64: 0x24c67530  addiu       $a2, $a2, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D68u; }
        if (ctx->pc != 0x3A1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D68u; }
        if (ctx->pc != 0x3A1D68u) { return; }
    }
    ctx->pc = 0x3A1D68u;
label_3a1d68:
    // 0x3a1d68: 0xc62d0024  lwc1        $f13, 0x24($s1)
    ctx->pc = 0x3a1d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a1d6c:
    // 0x3a1d6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3a1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3a1d70:
    // 0x3a1d70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a1d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1d74:
    // 0x3a1d74: 0xc04cbd8  jal         func_132F60
label_3a1d78:
    if (ctx->pc == 0x3A1D78u) {
        ctx->pc = 0x3A1D78u;
            // 0x3a1d78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3A1D7Cu;
        goto label_3a1d7c;
    }
    ctx->pc = 0x3A1D74u;
    SET_GPR_U32(ctx, 31, 0x3A1D7Cu);
    ctx->pc = 0x3A1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1D74u;
            // 0x3a1d78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D7Cu; }
        if (ctx->pc != 0x3A1D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D7Cu; }
        if (ctx->pc != 0x3A1D7Cu) { return; }
    }
    ctx->pc = 0x3A1D7Cu;
label_3a1d7c:
    // 0x3a1d7c: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x3a1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_3a1d80:
    // 0x3a1d80: 0x268507e0  addiu       $a1, $s4, 0x7E0
    ctx->pc = 0x3a1d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
label_3a1d84:
    // 0x3a1d84: 0xc04cca0  jal         func_133280
label_3a1d88:
    if (ctx->pc == 0x3A1D88u) {
        ctx->pc = 0x3A1D88u;
            // 0x3a1d88: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3A1D8Cu;
        goto label_3a1d8c;
    }
    ctx->pc = 0x3A1D84u;
    SET_GPR_U32(ctx, 31, 0x3A1D8Cu);
    ctx->pc = 0x3A1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1D84u;
            // 0x3a1d88: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D8Cu; }
        if (ctx->pc != 0x3A1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1D8Cu; }
        if (ctx->pc != 0x3A1D8Cu) { return; }
    }
    ctx->pc = 0x3A1D8Cu;
label_3a1d8c:
    // 0x3a1d8c: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3a1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_3a1d90:
    // 0x3a1d90: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3a1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3a1d94:
    // 0x3a1d94: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3a1d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3a1d98:
    // 0x3a1d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1d9c:
    // 0x3a1d9c: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x3a1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_3a1da0:
    // 0x3a1da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a1da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1da4:
    // 0x3a1da4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3a1da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1da8:
    // 0x3a1da8: 0xe6600110  swc1        $f0, 0x110($s3)
    ctx->pc = 0x3a1da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
label_3a1dac:
    // 0x3a1dac: 0xc0781cc  jal         func_1E0730
label_3a1db0:
    if (ctx->pc == 0x3A1DB0u) {
        ctx->pc = 0x3A1DB0u;
            // 0x3a1db0: 0xae800e30  sw          $zero, 0xE30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x3A1DB4u;
        goto label_3a1db4;
    }
    ctx->pc = 0x3A1DACu;
    SET_GPR_U32(ctx, 31, 0x3A1DB4u);
    ctx->pc = 0x3A1DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1DACu;
            // 0x3a1db0: 0xae800e30  sw          $zero, 0xE30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DB4u; }
        if (ctx->pc != 0x3A1DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DB4u; }
        if (ctx->pc != 0x3A1DB4u) { return; }
    }
    ctx->pc = 0x3A1DB4u;
label_3a1db4:
    // 0x3a1db4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1db8:
    // 0x3a1db8: 0xc07649c  jal         func_1D9270
label_3a1dbc:
    if (ctx->pc == 0x3A1DBCu) {
        ctx->pc = 0x3A1DBCu;
            // 0x3a1dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A1DC0u;
        goto label_3a1dc0;
    }
    ctx->pc = 0x3A1DB8u;
    SET_GPR_U32(ctx, 31, 0x3A1DC0u);
    ctx->pc = 0x3A1DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1DB8u;
            // 0x3a1dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DC0u; }
        if (ctx->pc != 0x3A1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DC0u; }
        if (ctx->pc != 0x3A1DC0u) { return; }
    }
    ctx->pc = 0x3A1DC0u;
label_3a1dc0:
    // 0x3a1dc0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a1dc4:
    // 0x3a1dc4: 0x8c640e48  lw          $a0, 0xE48($v1)
    ctx->pc = 0x3a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3656)));
label_3a1dc8:
    // 0x3a1dc8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a1dcc:
    if (ctx->pc == 0x3A1DCCu) {
        ctx->pc = 0x3A1DCCu;
            // 0x3a1dcc: 0x8e830e34  lw          $v1, 0xE34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
        ctx->pc = 0x3A1DD0u;
        goto label_3a1dd0;
    }
    ctx->pc = 0x3A1DC8u;
    {
        const bool branch_taken_0x3a1dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1dc8) {
            ctx->pc = 0x3A1DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1DC8u;
            // 0x3a1dcc: 0x8e830e34  lw          $v1, 0xE34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1DDCu;
            goto label_3a1ddc;
        }
    }
    ctx->pc = 0x3A1DD0u;
label_3a1dd0:
    // 0x3a1dd0: 0xc0d68b4  jal         func_35A2D0
label_3a1dd4:
    if (ctx->pc == 0x3A1DD4u) {
        ctx->pc = 0x3A1DD4u;
            // 0x3a1dd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DD8u;
        goto label_3a1dd8;
    }
    ctx->pc = 0x3A1DD0u;
    SET_GPR_U32(ctx, 31, 0x3A1DD8u);
    ctx->pc = 0x3A1DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1DD0u;
            // 0x3a1dd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A2D0u;
    if (runtime->hasFunction(0x35A2D0u)) {
        auto targetFn = runtime->lookupFunction(0x35A2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DD8u; }
        if (ctx->pc != 0x3A1DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A2D0_0x35a2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1DD8u; }
        if (ctx->pc != 0x3A1DD8u) { return; }
    }
    ctx->pc = 0x3A1DD8u;
label_3a1dd8:
    // 0x3a1dd8: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x3a1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_3a1ddc:
    // 0x3a1ddc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3a1ddcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a1de0:
    // 0x3a1de0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a1de4:
    if (ctx->pc == 0x3A1DE4u) {
        ctx->pc = 0x3A1DE4u;
            // 0x3a1de4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DE8u;
        goto label_3a1de8;
    }
    ctx->pc = 0x3A1DE0u;
    {
        const bool branch_taken_0x3a1de0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1DE0u;
            // 0x3a1de4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1de0) {
            ctx->pc = 0x3A1DF8u;
            goto label_3a1df8;
        }
    }
    ctx->pc = 0x3A1DE8u;
label_3a1de8:
    // 0x3a1de8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a1de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a1dec:
    // 0x3a1dec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a1df0:
    if (ctx->pc == 0x3A1DF0u) {
        ctx->pc = 0x3A1DF4u;
        goto label_3a1df4;
    }
    ctx->pc = 0x3A1DECu;
    {
        const bool branch_taken_0x3a1dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1dec) {
            ctx->pc = 0x3A1DF8u;
            goto label_3a1df8;
        }
    }
    ctx->pc = 0x3A1DF4u;
label_3a1df4:
    // 0x3a1df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1df8:
    // 0x3a1df8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a1dfc:
    if (ctx->pc == 0x3A1DFCu) {
        ctx->pc = 0x3A1E00u;
        goto label_3a1e00;
    }
    ctx->pc = 0x3A1DF8u;
    {
        const bool branch_taken_0x3a1df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1df8) {
            ctx->pc = 0x3A1E14u;
            goto label_3a1e14;
        }
    }
    ctx->pc = 0x3A1E00u;
label_3a1e00:
    // 0x3a1e00: 0xc075eb4  jal         func_1D7AD0
label_3a1e04:
    if (ctx->pc == 0x3A1E04u) {
        ctx->pc = 0x3A1E04u;
            // 0x3a1e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E08u;
        goto label_3a1e08;
    }
    ctx->pc = 0x3A1E00u;
    SET_GPR_U32(ctx, 31, 0x3A1E08u);
    ctx->pc = 0x3A1E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E00u;
            // 0x3a1e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E08u; }
        if (ctx->pc != 0x3A1E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E08u; }
        if (ctx->pc != 0x3A1E08u) { return; }
    }
    ctx->pc = 0x3A1E08u;
label_3a1e08:
    // 0x3a1e08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a1e0c:
    if (ctx->pc == 0x3A1E0Cu) {
        ctx->pc = 0x3A1E10u;
        goto label_3a1e10;
    }
    ctx->pc = 0x3A1E08u;
    {
        const bool branch_taken_0x3a1e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1e08) {
            ctx->pc = 0x3A1E14u;
            goto label_3a1e14;
        }
    }
    ctx->pc = 0x3A1E10u;
label_3a1e10:
    // 0x3a1e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a1e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1e14:
    // 0x3a1e14: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3a1e18:
    if (ctx->pc == 0x3A1E18u) {
        ctx->pc = 0x3A1E18u;
            // 0x3a1e18: 0x26841150  addiu       $a0, $s4, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
        ctx->pc = 0x3A1E1Cu;
        goto label_3a1e1c;
    }
    ctx->pc = 0x3A1E14u;
    {
        const bool branch_taken_0x3a1e14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1e14) {
            ctx->pc = 0x3A1E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E14u;
            // 0x3a1e18: 0x26841150  addiu       $a0, $s4, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E30u;
            goto label_3a1e30;
        }
    }
    ctx->pc = 0x3A1E1Cu;
label_3a1e1c:
    // 0x3a1e1c: 0x8e840e34  lw          $a0, 0xE34($s4)
    ctx->pc = 0x3a1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_3a1e20:
    // 0x3a1e20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a1e24:
    // 0x3a1e24: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3a1e28:
    if (ctx->pc == 0x3A1E28u) {
        ctx->pc = 0x3A1E28u;
            // 0x3a1e28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3A1E2Cu;
        goto label_3a1e2c;
    }
    ctx->pc = 0x3A1E24u;
    {
        const bool branch_taken_0x3a1e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a1e24) {
            ctx->pc = 0x3A1E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E24u;
            // 0x3a1e28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E3Cu;
            goto label_3a1e3c;
        }
    }
    ctx->pc = 0x3A1E2Cu;
label_3a1e2c:
    // 0x3a1e2c: 0x26841150  addiu       $a0, $s4, 0x1150
    ctx->pc = 0x3a1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
label_3a1e30:
    // 0x3a1e30: 0xc12ca3c  jal         func_4B28F0
label_3a1e34:
    if (ctx->pc == 0x3A1E34u) {
        ctx->pc = 0x3A1E34u;
            // 0x3a1e34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3A1E38u;
        goto label_3a1e38;
    }
    ctx->pc = 0x3A1E30u;
    SET_GPR_U32(ctx, 31, 0x3A1E38u);
    ctx->pc = 0x3A1E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E30u;
            // 0x3a1e34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E38u; }
        if (ctx->pc != 0x3A1E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E38u; }
        if (ctx->pc != 0x3A1E38u) { return; }
    }
    ctx->pc = 0x3A1E38u;
label_3a1e38:
    // 0x3a1e38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a1e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a1e3c:
    // 0x3a1e3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a1e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a1e40:
    // 0x3a1e40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a1e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1e44:
    // 0x3a1e44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a1e44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1e48:
    // 0x3a1e48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a1e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1e4c:
    // 0x3a1e4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a1e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1e50:
    // 0x3a1e50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a1e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1e54:
    // 0x3a1e54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a1e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1e58:
    // 0x3a1e58: 0x3e00008  jr          $ra
label_3a1e5c:
    if (ctx->pc == 0x3A1E5Cu) {
        ctx->pc = 0x3A1E5Cu;
            // 0x3a1e5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3A1E60u;
        goto label_3a1e60;
    }
    ctx->pc = 0x3A1E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E58u;
            // 0x3a1e5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1E60u;
label_3a1e60:
    // 0x3a1e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a1e64:
    // 0x3a1e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a1e68:
    // 0x3a1e68: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x3a1e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_3a1e6c:
    // 0x3a1e6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a1e70:
    if (ctx->pc == 0x3A1E70u) {
        ctx->pc = 0x3A1E70u;
            // 0x3a1e70: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x3A1E74u;
        goto label_3a1e74;
    }
    ctx->pc = 0x3A1E6Cu;
    {
        const bool branch_taken_0x3a1e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1e6c) {
            ctx->pc = 0x3A1E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E6Cu;
            // 0x3a1e70: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E84u;
            goto label_3a1e84;
        }
    }
    ctx->pc = 0x3A1E74u;
label_3a1e74:
    // 0x3a1e74: 0xc0e8c10  jal         func_3A3040
label_3a1e78:
    if (ctx->pc == 0x3A1E78u) {
        ctx->pc = 0x3A1E78u;
            // 0x3a1e78: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x3A1E7Cu;
        goto label_3a1e7c;
    }
    ctx->pc = 0x3A1E74u;
    SET_GPR_U32(ctx, 31, 0x3A1E7Cu);
    ctx->pc = 0x3A1E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E74u;
            // 0x3a1e78: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A3040u;
    if (runtime->hasFunction(0x3A3040u)) {
        auto targetFn = runtime->lookupFunction(0x3A3040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E7Cu; }
        if (ctx->pc != 0x3A1E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A3040_0x3a3040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1E7Cu; }
        if (ctx->pc != 0x3A1E7Cu) { return; }
    }
    ctx->pc = 0x3A1E7Cu;
label_3a1e7c:
    // 0x3a1e7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a1e80:
    if (ctx->pc == 0x3A1E80u) {
        ctx->pc = 0x3A1E80u;
            // 0x3a1e80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3A1E84u;
        goto label_3a1e84;
    }
    ctx->pc = 0x3A1E7Cu;
    {
        const bool branch_taken_0x3a1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E7Cu;
            // 0x3a1e80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e7c) {
            ctx->pc = 0x3A1EA8u;
            goto label_3a1ea8;
        }
    }
    ctx->pc = 0x3A1E84u;
label_3a1e84:
    // 0x3a1e84: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3a1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3a1e88:
    // 0x3a1e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a1e8c:
    // 0x3a1e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1e90:
    // 0x3a1e90: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3a1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3a1e94:
    // 0x3a1e94: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3a1e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1e98:
    // 0x3a1e98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a1e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a1e9c:
    // 0x3a1e9c: 0xc0e8d10  jal         func_3A3440
label_3a1ea0:
    if (ctx->pc == 0x3A1EA0u) {
        ctx->pc = 0x3A1EA0u;
            // 0x3a1ea0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A1EA4u;
        goto label_3a1ea4;
    }
    ctx->pc = 0x3A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x3A1EA4u);
    ctx->pc = 0x3A1EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1E9Cu;
            // 0x3a1ea0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A3440u;
    if (runtime->hasFunction(0x3A3440u)) {
        auto targetFn = runtime->lookupFunction(0x3A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1EA4u; }
        if (ctx->pc != 0x3A1EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A3440_0x3a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1EA4u; }
        if (ctx->pc != 0x3A1EA4u) { return; }
    }
    ctx->pc = 0x3A1EA4u;
label_3a1ea4:
    // 0x3a1ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1ea8:
    // 0x3a1ea8: 0x3e00008  jr          $ra
label_3a1eac:
    if (ctx->pc == 0x3A1EACu) {
        ctx->pc = 0x3A1EACu;
            // 0x3a1eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A1EB0u;
        goto label_3a1eb0;
    }
    ctx->pc = 0x3A1EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1EA8u;
            // 0x3a1eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1EB0u;
label_3a1eb0:
    // 0x3a1eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a1eb4:
    // 0x3a1eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a1eb8:
    // 0x3a1eb8: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x3a1eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_3a1ebc:
    // 0x3a1ebc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a1ec0:
    if (ctx->pc == 0x3A1EC0u) {
        ctx->pc = 0x3A1EC0u;
            // 0x3a1ec0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x3A1EC4u;
        goto label_3a1ec4;
    }
    ctx->pc = 0x3A1EBCu;
    {
        const bool branch_taken_0x3a1ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1ebc) {
            ctx->pc = 0x3A1EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1EBCu;
            // 0x3a1ec0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1ED4u;
            goto label_3a1ed4;
        }
    }
    ctx->pc = 0x3A1EC4u;
label_3a1ec4:
    // 0x3a1ec4: 0xc0e89f0  jal         func_3A27C0
label_3a1ec8:
    if (ctx->pc == 0x3A1EC8u) {
        ctx->pc = 0x3A1EC8u;
            // 0x3a1ec8: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x3A1ECCu;
        goto label_3a1ecc;
    }
    ctx->pc = 0x3A1EC4u;
    SET_GPR_U32(ctx, 31, 0x3A1ECCu);
    ctx->pc = 0x3A1EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1EC4u;
            // 0x3a1ec8: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A27C0u;
    if (runtime->hasFunction(0x3A27C0u)) {
        auto targetFn = runtime->lookupFunction(0x3A27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1ECCu; }
        if (ctx->pc != 0x3A1ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A27C0_0x3a27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1ECCu; }
        if (ctx->pc != 0x3A1ECCu) { return; }
    }
    ctx->pc = 0x3A1ECCu;
label_3a1ecc:
    // 0x3a1ecc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a1ed0:
    if (ctx->pc == 0x3A1ED0u) {
        ctx->pc = 0x3A1ED0u;
            // 0x3a1ed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3A1ED4u;
        goto label_3a1ed4;
    }
    ctx->pc = 0x3A1ECCu;
    {
        const bool branch_taken_0x3a1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1ECCu;
            // 0x3a1ed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ecc) {
            ctx->pc = 0x3A1EF8u;
            goto label_3a1ef8;
        }
    }
    ctx->pc = 0x3A1ED4u;
label_3a1ed4:
    // 0x3a1ed4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3a1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3a1ed8:
    // 0x3a1ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a1edc:
    // 0x3a1edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1ee0:
    // 0x3a1ee0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3a1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3a1ee4:
    // 0x3a1ee4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3a1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1ee8:
    // 0x3a1ee8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a1ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a1eec:
    // 0x3a1eec: 0xc0e8b20  jal         func_3A2C80
label_3a1ef0:
    if (ctx->pc == 0x3A1EF0u) {
        ctx->pc = 0x3A1EF0u;
            // 0x3a1ef0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A1EF4u;
        goto label_3a1ef4;
    }
    ctx->pc = 0x3A1EECu;
    SET_GPR_U32(ctx, 31, 0x3A1EF4u);
    ctx->pc = 0x3A1EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1EECu;
            // 0x3a1ef0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (runtime->hasFunction(0x3A2C80u)) {
        auto targetFn = runtime->lookupFunction(0x3A2C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1EF4u; }
        if (ctx->pc != 0x3A1EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A2C80_0x3a2c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1EF4u; }
        if (ctx->pc != 0x3A1EF4u) { return; }
    }
    ctx->pc = 0x3A1EF4u;
label_3a1ef4:
    // 0x3a1ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1ef8:
    // 0x3a1ef8: 0x3e00008  jr          $ra
label_3a1efc:
    if (ctx->pc == 0x3A1EFCu) {
        ctx->pc = 0x3A1EFCu;
            // 0x3a1efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A1F00u;
        goto label_3a1f00;
    }
    ctx->pc = 0x3A1EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1EF8u;
            // 0x3a1efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1F00u;
label_3a1f00:
    // 0x3a1f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a1f04:
    // 0x3a1f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a1f08:
    // 0x3a1f08: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x3a1f08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_3a1f0c:
    // 0x3a1f0c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3a1f10:
    if (ctx->pc == 0x3A1F10u) {
        ctx->pc = 0x3A1F10u;
            // 0x3a1f10: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x3A1F14u;
        goto label_3a1f14;
    }
    ctx->pc = 0x3A1F0Cu;
    {
        const bool branch_taken_0x3a1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f0c) {
            ctx->pc = 0x3A1F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1F0Cu;
            // 0x3a1f10: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A1F30u;
            goto label_3a1f30;
        }
    }
    ctx->pc = 0x3A1F14u;
label_3a1f14:
    // 0x3a1f14: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3a1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a1f18:
    // 0x3a1f18: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3a1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3a1f1c:
    // 0x3a1f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a1f20:
    // 0x3a1f20: 0xc0e8868  jal         func_3A21A0
label_3a1f24:
    if (ctx->pc == 0x3A1F24u) {
        ctx->pc = 0x3A1F24u;
            // 0x3a1f24: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A1F28u;
        goto label_3a1f28;
    }
    ctx->pc = 0x3A1F20u;
    SET_GPR_U32(ctx, 31, 0x3A1F28u);
    ctx->pc = 0x3A1F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1F20u;
            // 0x3a1f24: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A21A0u;
    if (runtime->hasFunction(0x3A21A0u)) {
        auto targetFn = runtime->lookupFunction(0x3A21A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1F28u; }
        if (ctx->pc != 0x3A1F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A21A0_0x3a21a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1F28u; }
        if (ctx->pc != 0x3A1F28u) { return; }
    }
    ctx->pc = 0x3A1F28u;
label_3a1f28:
    // 0x3a1f28: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a1f2c:
    if (ctx->pc == 0x3A1F2Cu) {
        ctx->pc = 0x3A1F2Cu;
            // 0x3a1f2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3A1F30u;
        goto label_3a1f30;
    }
    ctx->pc = 0x3A1F28u;
    {
        const bool branch_taken_0x3a1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1F28u;
            // 0x3a1f2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f28) {
            ctx->pc = 0x3A1F64u;
            goto label_3a1f64;
        }
    }
    ctx->pc = 0x3A1F30u;
label_3a1f30:
    // 0x3a1f30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a1f34:
    // 0x3a1f34: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3a1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3a1f38:
    // 0x3a1f38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3a1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1f3c:
    // 0x3a1f3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a1f40:
    // 0x3a1f40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a1f44:
    // 0x3a1f44: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x3a1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_3a1f48:
    // 0x3a1f48: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a1f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a1f4c:
    // 0x3a1f4c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3a1f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1f50:
    // 0x3a1f50: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3a1f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3a1f54:
    // 0x3a1f54: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3a1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a1f58:
    // 0x3a1f58: 0xc0e892c  jal         func_3A24B0
label_3a1f5c:
    if (ctx->pc == 0x3A1F5Cu) {
        ctx->pc = 0x3A1F5Cu;
            // 0x3a1f5c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A1F60u;
        goto label_3a1f60;
    }
    ctx->pc = 0x3A1F58u;
    SET_GPR_U32(ctx, 31, 0x3A1F60u);
    ctx->pc = 0x3A1F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1F58u;
            // 0x3a1f5c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A24B0u;
    if (runtime->hasFunction(0x3A24B0u)) {
        auto targetFn = runtime->lookupFunction(0x3A24B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1F60u; }
        if (ctx->pc != 0x3A1F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A24B0_0x3a24b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A1F60u; }
        if (ctx->pc != 0x3A1F60u) { return; }
    }
    ctx->pc = 0x3A1F60u;
label_3a1f60:
    // 0x3a1f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1f64:
    // 0x3a1f64: 0x3e00008  jr          $ra
label_3a1f68:
    if (ctx->pc == 0x3A1F68u) {
        ctx->pc = 0x3A1F68u;
            // 0x3a1f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A1F6Cu;
        goto label_3a1f6c;
    }
    ctx->pc = 0x3A1F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1F64u;
            // 0x3a1f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A1F6Cu;
label_3a1f6c:
    // 0x3a1f6c: 0x0  nop
    ctx->pc = 0x3a1f6cu;
    // NOP
label_3a1f70:
    // 0x3a1f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a1f74:
    // 0x3a1f74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1f78:
    // 0x3a1f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a1f7c:
    // 0x3a1f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a1f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a1f80:
    // 0x3a1f80: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x3a1f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a1f84:
    // 0x3a1f84: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3a1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3a1f88:
    // 0x3a1f88: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_3a1f8c:
    if (ctx->pc == 0x3A1F8Cu) {
        ctx->pc = 0x3A1F90u;
        goto label_3a1f90;
    }
    ctx->pc = 0x3A1F88u;
    {
        const bool branch_taken_0x3a1f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1f88) {
            ctx->pc = 0x3A1FE8u;
            goto label_3a1fe8;
        }
    }
    ctx->pc = 0x3A1F90u;
label_3a1f90:
    // 0x3a1f90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a1f94:
    // 0x3a1f94: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3a1f98:
    if (ctx->pc == 0x3A1F98u) {
        ctx->pc = 0x3A1F9Cu;
        goto label_3a1f9c;
    }
    ctx->pc = 0x3A1F94u;
    {
        const bool branch_taken_0x3a1f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1f94) {
            ctx->pc = 0x3A1FCCu;
            goto label_3a1fcc;
        }
    }
    ctx->pc = 0x3A1F9Cu;
label_3a1f9c:
    // 0x3a1f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1fa0:
    // 0x3a1fa0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3a1fa4:
    if (ctx->pc == 0x3A1FA4u) {
        ctx->pc = 0x3A1FA8u;
        goto label_3a1fa8;
    }
    ctx->pc = 0x3A1FA0u;
    {
        const bool branch_taken_0x3a1fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1fa0) {
            ctx->pc = 0x3A1FB0u;
            goto label_3a1fb0;
        }
    }
    ctx->pc = 0x3A1FA8u;
label_3a1fa8:
    // 0x3a1fa8: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a1fac:
    if (ctx->pc == 0x3A1FACu) {
        ctx->pc = 0x3A1FACu;
            // 0x3a1fac: 0x2402ff3a  addiu       $v0, $zero, -0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967098));
        ctx->pc = 0x3A1FB0u;
        goto label_3a1fb0;
    }
    ctx->pc = 0x3A1FA8u;
    {
        const bool branch_taken_0x3a1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1FA8u;
            // 0x3a1fac: 0x2402ff3a  addiu       $v0, $zero, -0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967098));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fa8) {
            ctx->pc = 0x3A2004u;
            goto label_3a2004;
        }
    }
    ctx->pc = 0x3A1FB0u;
label_3a1fb0:
    // 0x3a1fb0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a1fb4:
    // 0x3a1fb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a1fb8:
    // 0x3a1fb8: 0xdc63f368  ld          $v1, -0xC98($v1)
    ctx->pc = 0x3a1fb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964072)));
label_3a1fbc:
    // 0x3a1fbc: 0xc440f370  lwc1        $f0, -0xC90($v0)
    ctx->pc = 0x3a1fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1fc0:
    // 0x3a1fc0: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x3a1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_3a1fc4:
    // 0x3a1fc4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a1fc8:
    if (ctx->pc == 0x3A1FC8u) {
        ctx->pc = 0x3A1FC8u;
            // 0x3a1fc8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x3A1FCCu;
        goto label_3a1fcc;
    }
    ctx->pc = 0x3A1FC4u;
    {
        const bool branch_taken_0x3a1fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1FC4u;
            // 0x3a1fc8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fc4) {
            ctx->pc = 0x3A200Cu;
            goto label_3a200c;
        }
    }
    ctx->pc = 0x3A1FCCu;
label_3a1fcc:
    // 0x3a1fcc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a1fd0:
    // 0x3a1fd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a1fd4:
    // 0x3a1fd4: 0xdc63f378  ld          $v1, -0xC88($v1)
    ctx->pc = 0x3a1fd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964088)));
label_3a1fd8:
    // 0x3a1fd8: 0xc440f380  lwc1        $f0, -0xC80($v0)
    ctx->pc = 0x3a1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1fdc:
    // 0x3a1fdc: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x3a1fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_3a1fe0:
    // 0x3a1fe0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a1fe4:
    if (ctx->pc == 0x3A1FE4u) {
        ctx->pc = 0x3A1FE4u;
            // 0x3a1fe4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x3A1FE8u;
        goto label_3a1fe8;
    }
    ctx->pc = 0x3A1FE0u;
    {
        const bool branch_taken_0x3a1fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1FE0u;
            // 0x3a1fe4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fe0) {
            ctx->pc = 0x3A200Cu;
            goto label_3a200c;
        }
    }
    ctx->pc = 0x3A1FE8u;
label_3a1fe8:
    // 0x3a1fe8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a1fec:
    // 0x3a1fec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a1ff0:
    // 0x3a1ff0: 0xdc63f388  ld          $v1, -0xC78($v1)
    ctx->pc = 0x3a1ff0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964104)));
label_3a1ff4:
    // 0x3a1ff4: 0xc440f390  lwc1        $f0, -0xC70($v0)
    ctx->pc = 0x3a1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a1ff8:
    // 0x3a1ff8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x3a1ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_3a1ffc:
    // 0x3a1ffc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2000:
    if (ctx->pc == 0x3A2000u) {
        ctx->pc = 0x3A2000u;
            // 0x3a2000: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x3A2004u;
        goto label_3a2004;
    }
    ctx->pc = 0x3A1FFCu;
    {
        const bool branch_taken_0x3a1ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A1FFCu;
            // 0x3a2000: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ffc) {
            ctx->pc = 0x3A200Cu;
            goto label_3a200c;
        }
    }
    ctx->pc = 0x3A2004u;
label_3a2004:
    // 0x3a2004: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a2008:
    if (ctx->pc == 0x3A2008u) {
        ctx->pc = 0x3A2008u;
            // 0x3a2008: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x3A200Cu;
        goto label_3a200c;
    }
    ctx->pc = 0x3A2004u;
    {
        const bool branch_taken_0x3a2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2004u;
            // 0x3a2008: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2004) {
            ctx->pc = 0x3A201Cu;
            goto label_3a201c;
        }
    }
    ctx->pc = 0x3A200Cu;
label_3a200c:
    // 0x3a200c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2010:
    // 0x3a2010: 0xc0408c8  jal         func_102320
label_3a2014:
    if (ctx->pc == 0x3A2014u) {
        ctx->pc = 0x3A2014u;
            // 0x3a2014: 0x27b90020  addiu       $t9, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A2018u;
        goto label_3a2018;
    }
    ctx->pc = 0x3A2010u;
    SET_GPR_U32(ctx, 31, 0x3A2018u);
    ctx->pc = 0x3A2014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2010u;
            // 0x3a2014: 0x27b90020  addiu       $t9, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2018u; }
        if (ctx->pc != 0x3A2018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2018u; }
        if (ctx->pc != 0x3A2018u) { return; }
    }
    ctx->pc = 0x3A2018u;
label_3a2018:
    // 0x3a2018: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3a201c:
    // 0x3a201c: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x3a201cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
label_3a2020:
    // 0x3a2020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2024:
    // 0x3a2024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2028:
    // 0x3a2028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a202c:
    // 0x3a202c: 0x3e00008  jr          $ra
label_3a2030:
    if (ctx->pc == 0x3A2030u) {
        ctx->pc = 0x3A2030u;
            // 0x3a2030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A2034u;
        goto label_3a2034;
    }
    ctx->pc = 0x3A202Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A202Cu;
            // 0x3a2030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A2034u;
label_3a2034:
    // 0x3a2034: 0x0  nop
    ctx->pc = 0x3a2034u;
    // NOP
label_3a2038:
    // 0x3a2038: 0x0  nop
    ctx->pc = 0x3a2038u;
    // NOP
label_3a203c:
    // 0x3a203c: 0x0  nop
    ctx->pc = 0x3a203cu;
    // NOP
}
