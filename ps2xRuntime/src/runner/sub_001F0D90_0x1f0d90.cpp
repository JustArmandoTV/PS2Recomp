#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0D90
// Address: 0x1f0d90 - 0x1f13c0
void sub_001F0D90_0x1f0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0D90_0x1f0d90");
#endif

    switch (ctx->pc) {
        case 0x1f0d90u: goto label_1f0d90;
        case 0x1f0d94u: goto label_1f0d94;
        case 0x1f0d98u: goto label_1f0d98;
        case 0x1f0d9cu: goto label_1f0d9c;
        case 0x1f0da0u: goto label_1f0da0;
        case 0x1f0da4u: goto label_1f0da4;
        case 0x1f0da8u: goto label_1f0da8;
        case 0x1f0dacu: goto label_1f0dac;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0db4u: goto label_1f0db4;
        case 0x1f0db8u: goto label_1f0db8;
        case 0x1f0dbcu: goto label_1f0dbc;
        case 0x1f0dc0u: goto label_1f0dc0;
        case 0x1f0dc4u: goto label_1f0dc4;
        case 0x1f0dc8u: goto label_1f0dc8;
        case 0x1f0dccu: goto label_1f0dcc;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0dd4u: goto label_1f0dd4;
        case 0x1f0dd8u: goto label_1f0dd8;
        case 0x1f0ddcu: goto label_1f0ddc;
        case 0x1f0de0u: goto label_1f0de0;
        case 0x1f0de4u: goto label_1f0de4;
        case 0x1f0de8u: goto label_1f0de8;
        case 0x1f0decu: goto label_1f0dec;
        case 0x1f0df0u: goto label_1f0df0;
        case 0x1f0df4u: goto label_1f0df4;
        case 0x1f0df8u: goto label_1f0df8;
        case 0x1f0dfcu: goto label_1f0dfc;
        case 0x1f0e00u: goto label_1f0e00;
        case 0x1f0e04u: goto label_1f0e04;
        case 0x1f0e08u: goto label_1f0e08;
        case 0x1f0e0cu: goto label_1f0e0c;
        case 0x1f0e10u: goto label_1f0e10;
        case 0x1f0e14u: goto label_1f0e14;
        case 0x1f0e18u: goto label_1f0e18;
        case 0x1f0e1cu: goto label_1f0e1c;
        case 0x1f0e20u: goto label_1f0e20;
        case 0x1f0e24u: goto label_1f0e24;
        case 0x1f0e28u: goto label_1f0e28;
        case 0x1f0e2cu: goto label_1f0e2c;
        case 0x1f0e30u: goto label_1f0e30;
        case 0x1f0e34u: goto label_1f0e34;
        case 0x1f0e38u: goto label_1f0e38;
        case 0x1f0e3cu: goto label_1f0e3c;
        case 0x1f0e40u: goto label_1f0e40;
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e48u: goto label_1f0e48;
        case 0x1f0e4cu: goto label_1f0e4c;
        case 0x1f0e50u: goto label_1f0e50;
        case 0x1f0e54u: goto label_1f0e54;
        case 0x1f0e58u: goto label_1f0e58;
        case 0x1f0e5cu: goto label_1f0e5c;
        case 0x1f0e60u: goto label_1f0e60;
        case 0x1f0e64u: goto label_1f0e64;
        case 0x1f0e68u: goto label_1f0e68;
        case 0x1f0e6cu: goto label_1f0e6c;
        case 0x1f0e70u: goto label_1f0e70;
        case 0x1f0e74u: goto label_1f0e74;
        case 0x1f0e78u: goto label_1f0e78;
        case 0x1f0e7cu: goto label_1f0e7c;
        case 0x1f0e80u: goto label_1f0e80;
        case 0x1f0e84u: goto label_1f0e84;
        case 0x1f0e88u: goto label_1f0e88;
        case 0x1f0e8cu: goto label_1f0e8c;
        case 0x1f0e90u: goto label_1f0e90;
        case 0x1f0e94u: goto label_1f0e94;
        case 0x1f0e98u: goto label_1f0e98;
        case 0x1f0e9cu: goto label_1f0e9c;
        case 0x1f0ea0u: goto label_1f0ea0;
        case 0x1f0ea4u: goto label_1f0ea4;
        case 0x1f0ea8u: goto label_1f0ea8;
        case 0x1f0eacu: goto label_1f0eac;
        case 0x1f0eb0u: goto label_1f0eb0;
        case 0x1f0eb4u: goto label_1f0eb4;
        case 0x1f0eb8u: goto label_1f0eb8;
        case 0x1f0ebcu: goto label_1f0ebc;
        case 0x1f0ec0u: goto label_1f0ec0;
        case 0x1f0ec4u: goto label_1f0ec4;
        case 0x1f0ec8u: goto label_1f0ec8;
        case 0x1f0eccu: goto label_1f0ecc;
        case 0x1f0ed0u: goto label_1f0ed0;
        case 0x1f0ed4u: goto label_1f0ed4;
        case 0x1f0ed8u: goto label_1f0ed8;
        case 0x1f0edcu: goto label_1f0edc;
        case 0x1f0ee0u: goto label_1f0ee0;
        case 0x1f0ee4u: goto label_1f0ee4;
        case 0x1f0ee8u: goto label_1f0ee8;
        case 0x1f0eecu: goto label_1f0eec;
        case 0x1f0ef0u: goto label_1f0ef0;
        case 0x1f0ef4u: goto label_1f0ef4;
        case 0x1f0ef8u: goto label_1f0ef8;
        case 0x1f0efcu: goto label_1f0efc;
        case 0x1f0f00u: goto label_1f0f00;
        case 0x1f0f04u: goto label_1f0f04;
        case 0x1f0f08u: goto label_1f0f08;
        case 0x1f0f0cu: goto label_1f0f0c;
        case 0x1f0f10u: goto label_1f0f10;
        case 0x1f0f14u: goto label_1f0f14;
        case 0x1f0f18u: goto label_1f0f18;
        case 0x1f0f1cu: goto label_1f0f1c;
        case 0x1f0f20u: goto label_1f0f20;
        case 0x1f0f24u: goto label_1f0f24;
        case 0x1f0f28u: goto label_1f0f28;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f30u: goto label_1f0f30;
        case 0x1f0f34u: goto label_1f0f34;
        case 0x1f0f38u: goto label_1f0f38;
        case 0x1f0f3cu: goto label_1f0f3c;
        case 0x1f0f40u: goto label_1f0f40;
        case 0x1f0f44u: goto label_1f0f44;
        case 0x1f0f48u: goto label_1f0f48;
        case 0x1f0f4cu: goto label_1f0f4c;
        case 0x1f0f50u: goto label_1f0f50;
        case 0x1f0f54u: goto label_1f0f54;
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f5cu: goto label_1f0f5c;
        case 0x1f0f60u: goto label_1f0f60;
        case 0x1f0f64u: goto label_1f0f64;
        case 0x1f0f68u: goto label_1f0f68;
        case 0x1f0f6cu: goto label_1f0f6c;
        case 0x1f0f70u: goto label_1f0f70;
        case 0x1f0f74u: goto label_1f0f74;
        case 0x1f0f78u: goto label_1f0f78;
        case 0x1f0f7cu: goto label_1f0f7c;
        case 0x1f0f80u: goto label_1f0f80;
        case 0x1f0f84u: goto label_1f0f84;
        case 0x1f0f88u: goto label_1f0f88;
        case 0x1f0f8cu: goto label_1f0f8c;
        case 0x1f0f90u: goto label_1f0f90;
        case 0x1f0f94u: goto label_1f0f94;
        case 0x1f0f98u: goto label_1f0f98;
        case 0x1f0f9cu: goto label_1f0f9c;
        case 0x1f0fa0u: goto label_1f0fa0;
        case 0x1f0fa4u: goto label_1f0fa4;
        case 0x1f0fa8u: goto label_1f0fa8;
        case 0x1f0facu: goto label_1f0fac;
        case 0x1f0fb0u: goto label_1f0fb0;
        case 0x1f0fb4u: goto label_1f0fb4;
        case 0x1f0fb8u: goto label_1f0fb8;
        case 0x1f0fbcu: goto label_1f0fbc;
        case 0x1f0fc0u: goto label_1f0fc0;
        case 0x1f0fc4u: goto label_1f0fc4;
        case 0x1f0fc8u: goto label_1f0fc8;
        case 0x1f0fccu: goto label_1f0fcc;
        case 0x1f0fd0u: goto label_1f0fd0;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0fd8u: goto label_1f0fd8;
        case 0x1f0fdcu: goto label_1f0fdc;
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0fe4u: goto label_1f0fe4;
        case 0x1f0fe8u: goto label_1f0fe8;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f0ff0u: goto label_1f0ff0;
        case 0x1f0ff4u: goto label_1f0ff4;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f0ffcu: goto label_1f0ffc;
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1004u: goto label_1f1004;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f100cu: goto label_1f100c;
        case 0x1f1010u: goto label_1f1010;
        case 0x1f1014u: goto label_1f1014;
        case 0x1f1018u: goto label_1f1018;
        case 0x1f101cu: goto label_1f101c;
        case 0x1f1020u: goto label_1f1020;
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1028u: goto label_1f1028;
        case 0x1f102cu: goto label_1f102c;
        case 0x1f1030u: goto label_1f1030;
        case 0x1f1034u: goto label_1f1034;
        case 0x1f1038u: goto label_1f1038;
        case 0x1f103cu: goto label_1f103c;
        case 0x1f1040u: goto label_1f1040;
        case 0x1f1044u: goto label_1f1044;
        case 0x1f1048u: goto label_1f1048;
        case 0x1f104cu: goto label_1f104c;
        case 0x1f1050u: goto label_1f1050;
        case 0x1f1054u: goto label_1f1054;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f105cu: goto label_1f105c;
        case 0x1f1060u: goto label_1f1060;
        case 0x1f1064u: goto label_1f1064;
        case 0x1f1068u: goto label_1f1068;
        case 0x1f106cu: goto label_1f106c;
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1074u: goto label_1f1074;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f107cu: goto label_1f107c;
        case 0x1f1080u: goto label_1f1080;
        case 0x1f1084u: goto label_1f1084;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f108cu: goto label_1f108c;
        case 0x1f1090u: goto label_1f1090;
        case 0x1f1094u: goto label_1f1094;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f109cu: goto label_1f109c;
        case 0x1f10a0u: goto label_1f10a0;
        case 0x1f10a4u: goto label_1f10a4;
        case 0x1f10a8u: goto label_1f10a8;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10b0u: goto label_1f10b0;
        case 0x1f10b4u: goto label_1f10b4;
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10c0u: goto label_1f10c0;
        case 0x1f10c4u: goto label_1f10c4;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f10ccu: goto label_1f10cc;
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10d8u: goto label_1f10d8;
        case 0x1f10dcu: goto label_1f10dc;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f10e8u: goto label_1f10e8;
        case 0x1f10ecu: goto label_1f10ec;
        case 0x1f10f0u: goto label_1f10f0;
        case 0x1f10f4u: goto label_1f10f4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f10fcu: goto label_1f10fc;
        case 0x1f1100u: goto label_1f1100;
        case 0x1f1104u: goto label_1f1104;
        case 0x1f1108u: goto label_1f1108;
        case 0x1f110cu: goto label_1f110c;
        case 0x1f1110u: goto label_1f1110;
        case 0x1f1114u: goto label_1f1114;
        case 0x1f1118u: goto label_1f1118;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1120u: goto label_1f1120;
        case 0x1f1124u: goto label_1f1124;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f1130u: goto label_1f1130;
        case 0x1f1134u: goto label_1f1134;
        case 0x1f1138u: goto label_1f1138;
        case 0x1f113cu: goto label_1f113c;
        case 0x1f1140u: goto label_1f1140;
        case 0x1f1144u: goto label_1f1144;
        case 0x1f1148u: goto label_1f1148;
        case 0x1f114cu: goto label_1f114c;
        case 0x1f1150u: goto label_1f1150;
        case 0x1f1154u: goto label_1f1154;
        case 0x1f1158u: goto label_1f1158;
        case 0x1f115cu: goto label_1f115c;
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1164u: goto label_1f1164;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f116cu: goto label_1f116c;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f1174u: goto label_1f1174;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f117cu: goto label_1f117c;
        case 0x1f1180u: goto label_1f1180;
        case 0x1f1184u: goto label_1f1184;
        case 0x1f1188u: goto label_1f1188;
        case 0x1f118cu: goto label_1f118c;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f1194u: goto label_1f1194;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f119cu: goto label_1f119c;
        case 0x1f11a0u: goto label_1f11a0;
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11acu: goto label_1f11ac;
        case 0x1f11b0u: goto label_1f11b0;
        case 0x1f11b4u: goto label_1f11b4;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11bcu: goto label_1f11bc;
        case 0x1f11c0u: goto label_1f11c0;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11c8u: goto label_1f11c8;
        case 0x1f11ccu: goto label_1f11cc;
        case 0x1f11d0u: goto label_1f11d0;
        case 0x1f11d4u: goto label_1f11d4;
        case 0x1f11d8u: goto label_1f11d8;
        case 0x1f11dcu: goto label_1f11dc;
        case 0x1f11e0u: goto label_1f11e0;
        case 0x1f11e4u: goto label_1f11e4;
        case 0x1f11e8u: goto label_1f11e8;
        case 0x1f11ecu: goto label_1f11ec;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f11f4u: goto label_1f11f4;
        case 0x1f11f8u: goto label_1f11f8;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f1200u: goto label_1f1200;
        case 0x1f1204u: goto label_1f1204;
        case 0x1f1208u: goto label_1f1208;
        case 0x1f120cu: goto label_1f120c;
        case 0x1f1210u: goto label_1f1210;
        case 0x1f1214u: goto label_1f1214;
        case 0x1f1218u: goto label_1f1218;
        case 0x1f121cu: goto label_1f121c;
        case 0x1f1220u: goto label_1f1220;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f1228u: goto label_1f1228;
        case 0x1f122cu: goto label_1f122c;
        case 0x1f1230u: goto label_1f1230;
        case 0x1f1234u: goto label_1f1234;
        case 0x1f1238u: goto label_1f1238;
        case 0x1f123cu: goto label_1f123c;
        case 0x1f1240u: goto label_1f1240;
        case 0x1f1244u: goto label_1f1244;
        case 0x1f1248u: goto label_1f1248;
        case 0x1f124cu: goto label_1f124c;
        case 0x1f1250u: goto label_1f1250;
        case 0x1f1254u: goto label_1f1254;
        case 0x1f1258u: goto label_1f1258;
        case 0x1f125cu: goto label_1f125c;
        case 0x1f1260u: goto label_1f1260;
        case 0x1f1264u: goto label_1f1264;
        case 0x1f1268u: goto label_1f1268;
        case 0x1f126cu: goto label_1f126c;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f1274u: goto label_1f1274;
        case 0x1f1278u: goto label_1f1278;
        case 0x1f127cu: goto label_1f127c;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f1284u: goto label_1f1284;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f128cu: goto label_1f128c;
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        default: break;
    }

    ctx->pc = 0x1f0d90u;

label_1f0d90:
    // 0x1f0d90: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_1f0d94:
    // 0x1f0d94: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f0d98:
    // 0x1f0d98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f0d9c:
    // 0x1f0d9c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f0d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f0da0:
    // 0x1f0da0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f0da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f0da4:
    // 0x1f0da4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f0da8:
    // 0x1f0da8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f0da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f0dac:
    // 0x1f0dac: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1f0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1f0db0:
    // 0x1f0db0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f0db4:
    // 0x1f0db4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f0db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0db8:
    // 0x1f0db8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f0dbc:
    // 0x1f0dbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f0dbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dc0:
    // 0x1f0dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f0dc4:
    // 0x1f0dc4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f0dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dc8:
    // 0x1f0dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0dcc:
    // 0x1f0dcc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f0dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dd0:
    // 0x1f0dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0dd4:
    // 0x1f0dd4: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x1f0dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1f0dd8:
    // 0x1f0dd8: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x1f0dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
label_1f0ddc:
    // 0x1f0ddc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1f0ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f0de0:
    // 0x1f0de0: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1f0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1f0de4:
    // 0x1f0de4: 0xafa301fc  sw          $v1, 0x1FC($sp)
    ctx->pc = 0x1f0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 3));
label_1f0de8:
    // 0x1f0de8: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x1f0de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
label_1f0dec:
    // 0x1f0dec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0df0:
    // 0x1f0df0: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1f0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_1f0df4:
    // 0x1f0df4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1f0df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0df8:
    // 0x1f0df8: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x1f0df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_1f0dfc:
    // 0x1f0dfc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1f0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f0e00:
    // 0x1f0e00: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x1f0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_1f0e04:
    // 0x1f0e04: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f0e08:
    // 0x1f0e08: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x1f0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_1f0e0c:
    // 0x1f0e0c: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x1f0e0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1f0e10:
    // 0x1f0e10: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x1f0e10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
label_1f0e14:
    // 0x1f0e14: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x1f0e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0e18:
    // 0x1f0e18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f0e1c:
    // 0x1f0e1c: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1f0e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_1f0e20:
    // 0x1f0e20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0e24:
    // 0x1f0e24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0e28:
    // 0x1f0e28: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1f0e28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0e2c:
    // 0x1f0e2c: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f0e30:
    // 0x1f0e30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f0e34:
    // 0x1f0e34: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1f0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1f0e38:
    // 0x1f0e38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f0e3c:
    // 0x1f0e3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f0e40:
    // 0x1f0e40: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f0e40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f0e44:
    // 0x1f0e44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0e48:
    // 0x1f0e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0e4c:
    // 0x1f0e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f0e50:
    // 0x1f0e50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f0e54:
    // 0x1f0e54: 0x8c5609a8  lw          $s6, 0x9A8($v0)
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1f0e58:
    // 0x1f0e58: 0x2c0f809  jalr        $s6
label_1f0e5c:
    if (ctx->pc == 0x1F0E5Cu) {
        ctx->pc = 0x1F0E5Cu;
            // 0x1f0e5c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1F0E60u;
        goto label_1f0e60;
    }
    ctx->pc = 0x1F0E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1F0E60u);
        ctx->pc = 0x1F0E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E58u;
            // 0x1f0e5c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E60u; }
            if (ctx->pc != 0x1F0E60u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0E60u;
label_1f0e60:
    // 0x1f0e60: 0x83a301d8  lb          $v1, 0x1D8($sp)
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_1f0e64:
    // 0x1f0e64: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1f0e68:
    if (ctx->pc == 0x1F0E68u) {
        ctx->pc = 0x1F0E68u;
            // 0x1f0e68: 0xc7a201f0  lwc1        $f2, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F0E6Cu;
        goto label_1f0e6c;
    }
    ctx->pc = 0x1F0E64u;
    {
        const bool branch_taken_0x1f0e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e64) {
            ctx->pc = 0x1F0E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E64u;
            // 0x1f0e68: 0xc7a201f0  lwc1        $f2, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0E7Cu;
            goto label_1f0e7c;
        }
    }
    ctx->pc = 0x1F0E6Cu;
label_1f0e6c:
    // 0x1f0e6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0e70:
    // 0x1f0e70: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0e74:
    // 0x1f0e74: 0x10000145  b           . + 4 + (0x145 << 2)
label_1f0e78:
    if (ctx->pc == 0x1F0E78u) {
        ctx->pc = 0x1F0E78u;
            // 0x1f0e78: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0E7Cu;
        goto label_1f0e7c;
    }
    ctx->pc = 0x1F0E74u;
    {
        const bool branch_taken_0x1f0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E74u;
            // 0x1f0e78: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e74) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F0E7Cu;
label_1f0e7c:
    // 0x1f0e7c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1f0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1f0e80:
    // 0x1f0e80: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x1f0e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0e84:
    // 0x1f0e84: 0xafb501a0  sw          $s5, 0x1A0($sp)
    ctx->pc = 0x1f0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 21));
label_1f0e88:
    // 0x1f0e88: 0xafb401a4  sw          $s4, 0x1A4($sp)
    ctx->pc = 0x1f0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 20));
label_1f0e8c:
    // 0x1f0e8c: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1f0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0e90:
    // 0x1f0e90: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x1f0e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f0e94:
    // 0x1f0e94: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x1f0e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1f0e98:
    // 0x1f0e98: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1f0e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f0e9c:
    // 0x1f0e9c: 0xc7a201fc  lwc1        $f2, 0x1FC($sp)
    ctx->pc = 0x1f0e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0ea0:
    // 0x1f0ea0: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x1f0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0ea4:
    // 0x1f0ea4: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1f0ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ea8:
    // 0x1f0ea8: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x1f0ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f0eac:
    // 0x1f0eac: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x1f0eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f0eb0:
    // 0x1f0eb0: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x1f0eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f0eb4:
    // 0x1f0eb4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1f0eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0eb8:
    // 0x1f0eb8: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1f0eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ebc:
    // 0x1f0ebc: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1f0ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f0ec0:
    // 0x1f0ec0: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f0ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f0ec4:
    // 0x1f0ec4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1f0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ec8:
    // 0x1f0ec8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f0ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0ecc:
    // 0x1f0ecc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1f0ed0:
    if (ctx->pc == 0x1F0ED0u) {
        ctx->pc = 0x1F0ED0u;
            // 0x1f0ed0: 0x2471001c  addiu       $s1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->pc = 0x1F0ED4u;
        goto label_1f0ed4;
    }
    ctx->pc = 0x1F0ECCu;
    {
        const bool branch_taken_0x1f0ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0ECCu;
            // 0x1f0ed0: 0x2471001c  addiu       $s1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ecc) {
            ctx->pc = 0x1F0EF0u;
            goto label_1f0ef0;
        }
    }
    ctx->pc = 0x1F0ED4u;
label_1f0ed4:
    // 0x1f0ed4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f0ed8:
    if (ctx->pc == 0x1F0ED8u) {
        ctx->pc = 0x1F0ED8u;
            // 0x1f0ed8: 0xc7a101f4  lwc1        $f1, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F0EDCu;
        goto label_1f0edc;
    }
    ctx->pc = 0x1F0ED4u;
    {
        const bool branch_taken_0x1f0ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ed4) {
            ctx->pc = 0x1F0ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0ED4u;
            // 0x1f0ed8: 0xc7a101f4  lwc1        $f1, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EF4u;
            goto label_1f0ef4;
        }
    }
    ctx->pc = 0x1F0EDCu;
label_1f0edc:
    // 0x1f0edc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0ee0:
    // 0x1f0ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ee4:
    // 0x1f0ee4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f0ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f0ee8:
    // 0x1f0ee8: 0x320f809  jalr        $t9
label_1f0eec:
    if (ctx->pc == 0x1F0EECu) {
        ctx->pc = 0x1F0EECu;
            // 0x1f0eec: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F0EF0u;
        goto label_1f0ef0;
    }
    ctx->pc = 0x1F0EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0EF0u);
        ctx->pc = 0x1F0EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EE8u;
            // 0x1f0eec: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0EF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0EF0u; }
            if (ctx->pc != 0x1F0EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0EF0u;
label_1f0ef0:
    // 0x1f0ef0: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x1f0ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0ef4:
    // 0x1f0ef4: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x1f0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ef8:
    // 0x1f0ef8: 0xc7a401f0  lwc1        $f4, 0x1F0($sp)
    ctx->pc = 0x1f0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0efc:
    // 0x1f0efc: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x1f0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0f00:
    // 0x1f0f00: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1f0f00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f0f04:
    // 0x1f0f04: 0xc7a601f8  lwc1        $f6, 0x1F8($sp)
    ctx->pc = 0x1f0f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0f08:
    // 0x1f0f08: 0xc6650028  lwc1        $f5, 0x28($s3)
    ctx->pc = 0x1f0f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0f0c:
    // 0x1f0f0c: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x1f0f0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f0f10:
    // 0x1f0f10: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x1f0f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f0f14:
    // 0x1f0f14: 0x4605309c  madd.s      $f2, $f6, $f5
    ctx->pc = 0x1f0f14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f0f18:
    // 0x1f0f18: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f0f1c:
    // 0x1f0f1c: 0x0  nop
    ctx->pc = 0x1f0f1cu;
    // NOP
label_1f0f20:
    // 0x1f0f20: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x1f0f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_1f0f24:
    // 0x1f0f24: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1f0f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0f28:
    // 0x1f0f28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f0f2c:
    if (ctx->pc == 0x1F0F2Cu) {
        ctx->pc = 0x1F0F2Cu;
            // 0x1f0f2c: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x1F0F30u;
        goto label_1f0f30;
    }
    ctx->pc = 0x1F0F28u;
    {
        const bool branch_taken_0x1f0f28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F28u;
            // 0x1f0f2c: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f28) {
            ctx->pc = 0x1F0F40u;
            goto label_1f0f40;
        }
    }
    ctx->pc = 0x1F0F30u;
label_1f0f30:
    // 0x1f0f30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0f34:
    // 0x1f0f34: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0f38:
    // 0x1f0f38: 0x10000114  b           . + 4 + (0x114 << 2)
label_1f0f3c:
    if (ctx->pc == 0x1F0F3Cu) {
        ctx->pc = 0x1F0F3Cu;
            // 0x1f0f3c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0F40u;
        goto label_1f0f40;
    }
    ctx->pc = 0x1F0F38u;
    {
        const bool branch_taken_0x1f0f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F38u;
            // 0x1f0f3c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f38) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F0F40u;
label_1f0f40:
    // 0x1f0f40: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x1f0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0f44:
    // 0x1f0f44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1f0f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f0f48:
    // 0x1f0f48: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1f0f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0f4c:
    // 0x1f0f4c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1f0f50:
    if (ctx->pc == 0x1F0F50u) {
        ctx->pc = 0x1F0F50u;
            // 0x1f0f50: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->pc = 0x1F0F54u;
        goto label_1f0f54;
    }
    ctx->pc = 0x1F0F4Cu;
    {
        const bool branch_taken_0x1f0f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f4c) {
            ctx->pc = 0x1F0F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F4Cu;
            // 0x1f0f50: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F64u;
            goto label_1f0f64;
        }
    }
    ctx->pc = 0x1F0F54u;
label_1f0f54:
    // 0x1f0f54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0f58:
    // 0x1f0f58: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0f5c:
    // 0x1f0f5c: 0x1000010b  b           . + 4 + (0x10B << 2)
label_1f0f60:
    if (ctx->pc == 0x1F0F60u) {
        ctx->pc = 0x1F0F60u;
            // 0x1f0f60: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0F64u;
        goto label_1f0f64;
    }
    ctx->pc = 0x1F0F5Cu;
    {
        const bool branch_taken_0x1f0f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F5Cu;
            // 0x1f0f60: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f5c) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F0F64u;
label_1f0f64:
    // 0x1f0f64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0f68:
    // 0x1f0f68: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1f0f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0f6c:
    // 0x1f0f6c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_1f0f70:
    if (ctx->pc == 0x1F0F70u) {
        ctx->pc = 0x1F0F70u;
            // 0x1f0f70: 0x46013801  sub.s       $f0, $f7, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->pc = 0x1F0F74u;
        goto label_1f0f74;
    }
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F0F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F6Cu;
            // 0x1f0f70: 0x46013801  sub.s       $f0, $f7, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0FD4u;
            goto label_1f0fd4;
        }
    }
    ctx->pc = 0x1F0F74u;
label_1f0f74:
    // 0x1f0f74: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x1f0f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0f78:
    // 0x1f0f78: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_1f0f7c:
    if (ctx->pc == 0x1F0F7Cu) {
        ctx->pc = 0x1F0F7Cu;
            // 0x1f0f7c: 0xe7a3019c  swc1        $f3, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F0F80u;
        goto label_1f0f80;
    }
    ctx->pc = 0x1F0F78u;
    {
        const bool branch_taken_0x1f0f78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f78) {
            ctx->pc = 0x1F0F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F78u;
            // 0x1f0f7c: 0xe7a3019c  swc1        $f3, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0FB0u;
            goto label_1f0fb0;
        }
    }
    ctx->pc = 0x1F0F80u;
label_1f0f80:
    // 0x1f0f80: 0x46013801  sub.s       $f0, $f7, $f1
    ctx->pc = 0x1f0f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1f0f84:
    // 0x1f0f84: 0x0  nop
    ctx->pc = 0x1f0f84u;
    // NOP
label_1f0f88:
    // 0x1f0f88: 0x46003843  div.s       $f1, $f7, $f0
    ctx->pc = 0x1f0f88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[1] = ctx->f[7] / ctx->f[0];
label_1f0f8c:
    // 0x1f0f8c: 0x0  nop
    ctx->pc = 0x1f0f8cu;
    // NOP
label_1f0f90:
    // 0x1f0f90: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f0f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0f94:
    // 0x1f0f94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0f98:
    // 0x1f0f98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1f0f9c:
    if (ctx->pc == 0x1F0F9Cu) {
        ctx->pc = 0x1F0F9Cu;
            // 0x1f0f9c: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F0FA0u;
        goto label_1f0fa0;
    }
    ctx->pc = 0x1F0F98u;
    {
        const bool branch_taken_0x1f0f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f98) {
            ctx->pc = 0x1F0F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F98u;
            // 0x1f0f9c: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0FB0u;
            goto label_1f0fb0;
        }
    }
    ctx->pc = 0x1F0FA0u;
label_1f0fa0:
    // 0x1f0fa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0fa4:
    // 0x1f0fa4: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0fa8:
    // 0x1f0fa8: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_1f0fac:
    if (ctx->pc == 0x1F0FACu) {
        ctx->pc = 0x1F0FACu;
            // 0x1f0fac: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0FB0u;
        goto label_1f0fb0;
    }
    ctx->pc = 0x1F0FA8u;
    {
        const bool branch_taken_0x1f0fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FA8u;
            // 0x1f0fac: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fa8) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F0FB0u;
label_1f0fb0:
    // 0x1f0fb0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0fb4:
    // 0x1f0fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fb8:
    // 0x1f0fb8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f0fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f0fbc:
    // 0x1f0fbc: 0x320f809  jalr        $t9
label_1f0fc0:
    if (ctx->pc == 0x1F0FC0u) {
        ctx->pc = 0x1F0FC0u;
            // 0x1f0fc0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F0FC4u;
        goto label_1f0fc4;
    }
    ctx->pc = 0x1F0FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0FC4u);
        ctx->pc = 0x1F0FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FBCu;
            // 0x1f0fc0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FC4u; }
            if (ctx->pc != 0x1F0FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0FC4u;
label_1f0fc4:
    // 0x1f0fc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0fc8:
    // 0x1f0fc8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0fcc:
    // 0x1f0fcc: 0x100000ef  b           . + 4 + (0xEF << 2)
label_1f0fd0:
    if (ctx->pc == 0x1F0FD0u) {
        ctx->pc = 0x1F0FD0u;
            // 0x1f0fd0: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0FD4u;
        goto label_1f0fd4;
    }
    ctx->pc = 0x1F0FCCu;
    {
        const bool branch_taken_0x1f0fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FCCu;
            // 0x1f0fd0: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fcc) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F0FD4u;
label_1f0fd4:
    // 0x1f0fd4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_1f0fd8:
    // 0x1f0fd8: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x1f0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_1f0fdc:
    // 0x1f0fdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f0fe0:
    // 0x1f0fe0: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1f0fe4:
    // 0x1f0fe4: 0xa3a00158  sb          $zero, 0x158($sp)
    ctx->pc = 0x1f0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 0));
label_1f0fe8:
    // 0x1f0fe8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1f0fec:
    // 0x1f0fec: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x1f0fecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
label_1f0ff0:
    // 0x1f0ff0: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x1f0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_1f0ff4:
    // 0x1f0ff4: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x1f0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
label_1f0ff8:
    // 0x1f0ff8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1f0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f0ffc:
    // 0x1f0ffc: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1f0ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f1000:
    // 0x1f1000: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f1004:
    // 0x1f1004: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x1f1004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f1008:
    // 0x1f1008: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x1f1008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f100c:
    // 0x1f100c: 0xc48d000c  lwc1        $f13, 0xC($a0)
    ctx->pc = 0x1f100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f1010:
    // 0x1f1010: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1f1010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f1014:
    // 0x1f1014: 0xc48b0014  lwc1        $f11, 0x14($a0)
    ctx->pc = 0x1f1014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f1018:
    // 0x1f1018: 0xc48a0018  lwc1        $f10, 0x18($a0)
    ctx->pc = 0x1f1018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f101c:
    // 0x1f101c: 0xc489001c  lwc1        $f9, 0x1C($a0)
    ctx->pc = 0x1f101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f1020:
    // 0x1f1020: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x1f1020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f1024:
    // 0x1f1024: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x1f1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f1028:
    // 0x1f1028: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x1f1028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f102c:
    // 0x1f102c: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x1f102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f1030:
    // 0x1f1030: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x1f1030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f1034:
    // 0x1f1034: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x1f1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1038:
    // 0x1f1038: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x1f1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f103c:
    // 0x1f103c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x1f103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1040:
    // 0x1f1040: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1044:
    // 0x1f1044: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f1044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f1048:
    // 0x1f1048: 0xe7af0094  swc1        $f15, 0x94($sp)
    ctx->pc = 0x1f1048u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f104c:
    // 0x1f104c: 0xe7ae0098  swc1        $f14, 0x98($sp)
    ctx->pc = 0x1f104cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f1050:
    // 0x1f1050: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x1f1050u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f1054:
    // 0x1f1054: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x1f1054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f1058:
    // 0x1f1058: 0xe7ab00a4  swc1        $f11, 0xA4($sp)
    ctx->pc = 0x1f1058u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f105c:
    // 0x1f105c: 0xe7aa00a8  swc1        $f10, 0xA8($sp)
    ctx->pc = 0x1f105cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f1060:
    // 0x1f1060: 0xe7a900ac  swc1        $f9, 0xAC($sp)
    ctx->pc = 0x1f1060u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f1064:
    // 0x1f1064: 0xe7a800b0  swc1        $f8, 0xB0($sp)
    ctx->pc = 0x1f1064u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f1068:
    // 0x1f1068: 0xe7a700b4  swc1        $f7, 0xB4($sp)
    ctx->pc = 0x1f1068u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f106c:
    // 0x1f106c: 0xe7a600b8  swc1        $f6, 0xB8($sp)
    ctx->pc = 0x1f106cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f1070:
    // 0x1f1070: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x1f1070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f1074:
    // 0x1f1074: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x1f1074u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f1078:
    // 0x1f1078: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x1f1078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f107c:
    // 0x1f107c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1f107cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f1080:
    // 0x1f1080: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x1f1080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f1084:
    // 0x1f1084: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x1f1084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1088:
    // 0x1f1088: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f1088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f108c:
    // 0x1f108c: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1f108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1090:
    // 0x1f1090: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f1090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f1094:
    // 0x1f1094: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x1f1094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1098:
    // 0x1f1098: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f109c:
    // 0x1f109c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1f109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10a0:
    // 0x1f10a0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1f10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f10a4:
    // 0x1f10a4: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x1f10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10a8:
    // 0x1f10a8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f10a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f10ac:
    // 0x1f10ac: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1f10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10b0:
    // 0x1f10b0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f10b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f10b4:
    // 0x1f10b4: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1f10b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10b8:
    // 0x1f10b8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f10bc:
    // 0x1f10bc: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1f10bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10c0:
    // 0x1f10c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f10c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f10c4:
    // 0x1f10c4: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x1f10c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10c8:
    // 0x1f10c8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f10c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f10cc:
    // 0x1f10cc: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x1f10ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10d0:
    // 0x1f10d0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f10d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f10d4:
    // 0x1f10d4: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x1f10d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10d8:
    // 0x1f10d8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f10d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f10dc:
    // 0x1f10dc: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x1f10dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10e0:
    // 0x1f10e0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f10e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f10e4:
    // 0x1f10e4: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x1f10e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10e8:
    // 0x1f10e8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f10e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f10ec:
    // 0x1f10ec: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1f10ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10f0:
    // 0x1f10f0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f10f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f10f4:
    // 0x1f10f4: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x1f10f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10f8:
    // 0x1f10f8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f10f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f10fc:
    // 0x1f10fc: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x1f10fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1100:
    // 0x1f1100: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f1100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f1104:
    // 0x1f1104: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1f1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1108:
    // 0x1f1108: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f1108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f110c:
    // 0x1f110c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1110:
    // 0x1f1110: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f1110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f1114:
    // 0x1f1114: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f1114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1118:
    // 0x1f1118: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f1118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f111c:
    // 0x1f111c: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1120:
    // 0x1f1120: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f1120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f1124:
    // 0x1f1124: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f1124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1128:
    // 0x1f1128: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f1128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f112c:
    // 0x1f112c: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x1f112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1130:
    // 0x1f1130: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f1130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f1134:
    // 0x1f1134: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1138:
    // 0x1f1138: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f1138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f113c:
    // 0x1f113c: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x1f113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1140:
    // 0x1f1140: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f1140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f1144:
    // 0x1f1144: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x1f1144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1148:
    // 0x1f1148: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f1148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f114c:
    // 0x1f114c: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x1f114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1150:
    // 0x1f1150: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f1150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f1154:
    // 0x1f1154: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x1f1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1158:
    // 0x1f1158: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f1158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f115c:
    // 0x1f115c: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x1f115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1160:
    // 0x1f1160: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f1160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f1164:
    // 0x1f1164: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x1f1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1168:
    // 0x1f1168: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f1168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f116c:
    // 0x1f116c: 0x948300b4  lhu         $v1, 0xB4($a0)
    ctx->pc = 0x1f116cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
label_1f1170:
    // 0x1f1170: 0xa7a30144  sh          $v1, 0x144($sp)
    ctx->pc = 0x1f1170u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 3));
label_1f1174:
    // 0x1f1174: 0x948300b6  lhu         $v1, 0xB6($a0)
    ctx->pc = 0x1f1174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 182)));
label_1f1178:
    // 0x1f1178: 0xa7a30146  sh          $v1, 0x146($sp)
    ctx->pc = 0x1f1178u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 326), (uint16_t)GPR_U32(ctx, 3));
label_1f117c:
    // 0x1f117c: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1f117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1180:
    // 0x1f1180: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1f1180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1184:
    // 0x1f1184: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x1f1184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f1188:
    // 0x1f1188: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1f1188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1f118c:
    // 0x1f118c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f1190:
    // 0x1f1190: 0xafb5008c  sw          $s5, 0x8C($sp)
    ctx->pc = 0x1f1190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 21));
label_1f1194:
    // 0x1f1194: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1f1194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f1198:
    // 0x1f1198: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1f1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1f119c:
    // 0x1f119c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1f119cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1f11a0:
    // 0x1f11a0: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1f11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_1f11a4:
    // 0x1f11a4: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1f11a8:
    // 0x1f11a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f11ac:
    // 0x1f11ac: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f11b0:
    // 0x1f11b0: 0x620006b  bltz        $s1, . + 4 + (0x6B << 2)
label_1f11b4:
    if (ctx->pc == 0x1F11B4u) {
        ctx->pc = 0x1F11B8u;
        goto label_1f11b8;
    }
    ctx->pc = 0x1F11B0u;
    {
        const bool branch_taken_0x1f11b0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1f11b0) {
            ctx->pc = 0x1F1360u;
            goto label_1f1360;
        }
    }
    ctx->pc = 0x1F11B8u;
label_1f11b8:
    // 0x1f11b8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f11bc:
    // 0x1f11bc: 0xa3a00158  sb          $zero, 0x158($sp)
    ctx->pc = 0x1f11bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 0));
label_1f11c0:
    // 0x1f11c0: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x1f11c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f11c4:
    // 0x1f11c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f11c8:
    // 0x1f11c8: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1f11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_1f11cc:
    // 0x1f11cc: 0xc7a7019c  lwc1        $f7, 0x19C($sp)
    ctx->pc = 0x1f11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f11d0:
    // 0x1f11d0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1f11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1f11d4:
    // 0x1f11d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f11d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f11d8:
    // 0x1f11d8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1f11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f11dc:
    // 0x1f11dc: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x1f11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f11e0:
    // 0x1f11e0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1f11e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f11e4:
    // 0x1f11e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f11e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f11e8:
    // 0x1f11e8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1f11e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f11ec:
    // 0x1f11ec: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1f11ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1f11f0:
    // 0x1f11f0: 0xc4450034  lwc1        $f5, 0x34($v0)
    ctx->pc = 0x1f11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f11f4:
    // 0x1f11f4: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1f11f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1f11f8:
    // 0x1f11f8: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f11fc:
    // 0x1f11fc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1200:
    // 0x1f1200: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x1f1200u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_1f1204:
    // 0x1f1204: 0x4606395c  madd.s      $f5, $f7, $f6
    ctx->pc = 0x1f1204u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_1f1208:
    // 0x1f1208: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x1f1208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1f120c:
    // 0x1f120c: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x1f120cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_1f1210:
    // 0x1f1210: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1f1210u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1f1214:
    // 0x1f1214: 0x4601389c  madd.s      $f2, $f7, $f1
    ctx->pc = 0x1f1214u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_1f1218:
    // 0x1f1218: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1f1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f121c:
    // 0x1f121c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1220:
    // 0x1f1220: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1f1220u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1f1224:
    // 0x1f1224: 0x4601381c  madd.s      $f0, $f7, $f1
    ctx->pc = 0x1f1224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_1f1228:
    // 0x1f1228: 0xe7a500c4  swc1        $f5, 0xC4($sp)
    ctx->pc = 0x1f1228u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f122c:
    // 0x1f122c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f1230:
    // 0x1f1230: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x1f1230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f1234:
    // 0x1f1234: 0x2c0f809  jalr        $s6
label_1f1238:
    if (ctx->pc == 0x1F1238u) {
        ctx->pc = 0x1F1238u;
            // 0x1f1238: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x1F123Cu;
        goto label_1f123c;
    }
    ctx->pc = 0x1F1234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1F123Cu);
        ctx->pc = 0x1F1238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1234u;
            // 0x1f1238: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F123Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F123Cu; }
            if (ctx->pc != 0x1F123Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F123Cu;
label_1f123c:
    // 0x1f123c: 0x83a30158  lb          $v1, 0x158($sp)
    ctx->pc = 0x1f123cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 344)));
label_1f1240:
    // 0x1f1240: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1f1244:
    if (ctx->pc == 0x1F1244u) {
        ctx->pc = 0x1F1244u;
            // 0x1f1244: 0xc7a50174  lwc1        $f5, 0x174($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x1F1248u;
        goto label_1f1248;
    }
    ctx->pc = 0x1F1240u;
    {
        const bool branch_taken_0x1f1240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1240) {
            ctx->pc = 0x1F1244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1240u;
            // 0x1f1244: 0xc7a50174  lwc1        $f5, 0x174($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F125Cu;
            goto label_1f125c;
        }
    }
    ctx->pc = 0x1F1248u;
label_1f1248:
    // 0x1f1248: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f124c:
    // 0x1f124c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f1250:
    // 0x1f1250: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f1250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f1254:
    // 0x1f1254: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1f1258:
    if (ctx->pc == 0x1F1258u) {
        ctx->pc = 0x1F1258u;
            // 0x1f1258: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F125Cu;
        goto label_1f125c;
    }
    ctx->pc = 0x1F1254u;
    {
        const bool branch_taken_0x1f1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1254u;
            // 0x1f1258: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1254) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F125Cu;
label_1f125c:
    // 0x1f125c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1f125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1f1260:
    // 0x1f1260: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1264:
    // 0x1f1264: 0xc7a60170  lwc1        $f6, 0x170($sp)
    ctx->pc = 0x1f1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f1268:
    // 0x1f1268: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f126c:
    // 0x1f126c: 0x4600281a  mula.s      $f5, $f0
    ctx->pc = 0x1f126cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1f1270:
    // 0x1f1270: 0xc7a70178  lwc1        $f7, 0x178($sp)
    ctx->pc = 0x1f1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f1274:
    // 0x1f1274: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1f1274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1278:
    // 0x1f1278: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x1f1278u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_1f127c:
    // 0x1f127c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f127cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f1280:
    // 0x1f1280: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x1f1280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1f1284:
    // 0x1f1284: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1f1284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1288:
    // 0x1f1288: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1f128c:
    if (ctx->pc == 0x1F128Cu) {
        ctx->pc = 0x1F128Cu;
            // 0x1f128c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1F1290u;
        goto label_1f1290;
    }
    ctx->pc = 0x1F1288u;
    {
        const bool branch_taken_0x1f1288 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1288u;
            // 0x1f128c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1288) {
            ctx->pc = 0x1F12A4u;
            goto label_1f12a4;
        }
    }
    ctx->pc = 0x1F1290u;
label_1f1290:
    // 0x1f1290: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f1294:
    // 0x1f1294: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f1294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f1298:
    // 0x1f1298: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f1298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f129c:
    // 0x1f129c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1f12a0:
    if (ctx->pc == 0x1F12A0u) {
        ctx->pc = 0x1F12A0u;
            // 0x1f12a0: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F12A4u;
        goto label_1f12a4;
    }
    ctx->pc = 0x1F129Cu;
    {
        const bool branch_taken_0x1f129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F129Cu;
            // 0x1f12a0: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f129c) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F12A4u;
label_1f12a4:
    // 0x1f12a4: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x1f12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f12a8:
    // 0x1f12a8: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x1f12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f12ac:
    // 0x1f12ac: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1f12acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_1f12b0:
    // 0x1f12b0: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1f12b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1f12b4:
    // 0x1f12b4: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1f12b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_1f12b8:
    // 0x1f12b8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1f12b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f12bc:
    // 0x1f12bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1f12c0:
    if (ctx->pc == 0x1F12C0u) {
        ctx->pc = 0x1F12C4u;
        goto label_1f12c4;
    }
    ctx->pc = 0x1F12BCu;
    {
        const bool branch_taken_0x1f12bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f12bc) {
            ctx->pc = 0x1F12D8u;
            goto label_1f12d8;
        }
    }
    ctx->pc = 0x1F12C4u;
label_1f12c4:
    // 0x1f12c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f12c8:
    // 0x1f12c8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f12cc:
    // 0x1f12cc: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f12d0:
    // 0x1f12d0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1f12d4:
    if (ctx->pc == 0x1F12D4u) {
        ctx->pc = 0x1F12D4u;
            // 0x1f12d4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F12D8u;
        goto label_1f12d8;
    }
    ctx->pc = 0x1F12D0u;
    {
        const bool branch_taken_0x1f12d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12D0u;
            // 0x1f12d4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d0) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F12D8u;
label_1f12d8:
    // 0x1f12d8: 0x0  nop
    ctx->pc = 0x1f12d8u;
    // NOP
label_1f12dc:
    // 0x1f12dc: 0x0  nop
    ctx->pc = 0x1f12dcu;
    // NOP
label_1f12e0:
    // 0x1f12e0: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1f12e0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
label_1f12e4:
    // 0x1f12e4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f12e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f12e8:
    // 0x1f12e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f12e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f12ec:
    // 0x1f12ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f12ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f12f0:
    // 0x1f12f0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_1f12f4:
    if (ctx->pc == 0x1F12F4u) {
        ctx->pc = 0x1F12F4u;
            // 0x1f12f4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F12F8u;
        goto label_1f12f8;
    }
    ctx->pc = 0x1F12F0u;
    {
        const bool branch_taken_0x1f12f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f12f0) {
            ctx->pc = 0x1F12F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12F0u;
            // 0x1f12f4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F130Cu;
            goto label_1f130c;
        }
    }
    ctx->pc = 0x1F12F8u;
label_1f12f8:
    // 0x1f12f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f12fc:
    // 0x1f12fc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f1300:
    // 0x1f1300: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f1300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f1304:
    // 0x1f1304: 0x10000021  b           . + 4 + (0x21 << 2)
label_1f1308:
    if (ctx->pc == 0x1F1308u) {
        ctx->pc = 0x1F1308u;
            // 0x1f1308: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F130Cu;
        goto label_1f130c;
    }
    ctx->pc = 0x1F1304u;
    {
        const bool branch_taken_0x1f1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1304u;
            // 0x1f1308: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1304) {
            ctx->pc = 0x1F138Cu;
            goto label_1f138c;
        }
    }
    ctx->pc = 0x1F130Cu;
label_1f130c:
    // 0x1f130c: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x1f130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1310:
    // 0x1f1310: 0xe7a60190  swc1        $f6, 0x190($sp)
    ctx->pc = 0x1f1310u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f1314:
    // 0x1f1314: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1f1314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f1318:
    // 0x1f1318: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x1f1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f131c:
    // 0x1f131c: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x1f131cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f1320:
    // 0x1f1320: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1f1320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1324:
    // 0x1f1324: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1f1324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f1328:
    // 0x1f1328: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f132c:
    // 0x1f132c: 0xe7a50194  swc1        $f5, 0x194($sp)
    ctx->pc = 0x1f132cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1f1330:
    // 0x1f1330: 0xe7a70198  swc1        $f7, 0x198($sp)
    ctx->pc = 0x1f1330u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f1334:
    // 0x1f1334: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x1f1334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f1338:
    // 0x1f1338: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x1f1338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f133c:
    // 0x1f133c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f1340:
    // 0x1f1340: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1f1344:
    // 0x1f1344: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f1344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1348:
    // 0x1f1348: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f1348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f134c:
    // 0x1f134c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1f1350:
    if (ctx->pc == 0x1F1350u) {
        ctx->pc = 0x1F1354u;
        goto label_1f1354;
    }
    ctx->pc = 0x1F134Cu;
    {
        const bool branch_taken_0x1f134c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f134c) {
            ctx->pc = 0x1F1360u;
            goto label_1f1360;
        }
    }
    ctx->pc = 0x1F1354u;
label_1f1354:
    // 0x1f1354: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f1354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f1358:
    // 0x1f1358: 0x623ff98  bgezl       $s1, . + 4 + (-0x68 << 2)
label_1f135c:
    if (ctx->pc == 0x1F135Cu) {
        ctx->pc = 0x1F135Cu;
            // 0x1f135c: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->pc = 0x1F1360u;
        goto label_1f1360;
    }
    ctx->pc = 0x1F1358u;
    {
        const bool branch_taken_0x1f1358 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1f1358) {
            ctx->pc = 0x1F135Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1358u;
            // 0x1f135c: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F11BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f11bc;
        }
    }
    ctx->pc = 0x1F1360u;
label_1f1360:
    // 0x1f1360: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1364:
    // 0x1f1364: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1f1364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1f1368:
    // 0x1f1368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f136c:
    // 0x1f136c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1f1370:
    // 0x1f1370: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f1374:
    // 0x1f1374: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f1378:
    // 0x1f1378: 0x320f809  jalr        $t9
label_1f137c:
    if (ctx->pc == 0x1F137Cu) {
        ctx->pc = 0x1F137Cu;
            // 0x1f137c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F1380u;
        goto label_1f1380;
    }
    ctx->pc = 0x1F1378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1380u);
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1378u;
            // 0x1f137c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1380u; }
            if (ctx->pc != 0x1F1380u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f1384:
    // 0x1f1384: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f1388:
    // 0x1f1388: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x1f1388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
label_1f138c:
    // 0x1f138c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f138cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f1390:
    // 0x1f1390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f1390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1394:
    // 0x1f1394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f1394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1398:
    // 0x1f1398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f139c:
    // 0x1f139c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f139cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f13a0:
    // 0x1f13a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f13a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f13a4:
    // 0x1f13a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f13a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f13a8:
    // 0x1f13a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f13a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f13ac:
    // 0x1f13ac: 0x3e00008  jr          $ra
label_1f13b0:
    if (ctx->pc == 0x1F13B0u) {
        ctx->pc = 0x1F13B0u;
            // 0x1f13b0: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1F13B4u;
        goto label_1f13b4;
    }
    ctx->pc = 0x1F13ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13ACu;
            // 0x1f13b0: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F13B4u;
label_1f13b4:
    // 0x1f13b4: 0x0  nop
    ctx->pc = 0x1f13b4u;
    // NOP
label_1f13b8:
    // 0x1f13b8: 0x0  nop
    ctx->pc = 0x1f13b8u;
    // NOP
label_1f13bc:
    // 0x1f13bc: 0x0  nop
    ctx->pc = 0x1f13bcu;
    // NOP
}
