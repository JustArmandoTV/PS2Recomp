#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F11F0
// Address: 0x3f11f0 - 0x3f1670
void sub_003F11F0_0x3f11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F11F0_0x3f11f0");
#endif

    switch (ctx->pc) {
        case 0x3f11f0u: goto label_3f11f0;
        case 0x3f11f4u: goto label_3f11f4;
        case 0x3f11f8u: goto label_3f11f8;
        case 0x3f11fcu: goto label_3f11fc;
        case 0x3f1200u: goto label_3f1200;
        case 0x3f1204u: goto label_3f1204;
        case 0x3f1208u: goto label_3f1208;
        case 0x3f120cu: goto label_3f120c;
        case 0x3f1210u: goto label_3f1210;
        case 0x3f1214u: goto label_3f1214;
        case 0x3f1218u: goto label_3f1218;
        case 0x3f121cu: goto label_3f121c;
        case 0x3f1220u: goto label_3f1220;
        case 0x3f1224u: goto label_3f1224;
        case 0x3f1228u: goto label_3f1228;
        case 0x3f122cu: goto label_3f122c;
        case 0x3f1230u: goto label_3f1230;
        case 0x3f1234u: goto label_3f1234;
        case 0x3f1238u: goto label_3f1238;
        case 0x3f123cu: goto label_3f123c;
        case 0x3f1240u: goto label_3f1240;
        case 0x3f1244u: goto label_3f1244;
        case 0x3f1248u: goto label_3f1248;
        case 0x3f124cu: goto label_3f124c;
        case 0x3f1250u: goto label_3f1250;
        case 0x3f1254u: goto label_3f1254;
        case 0x3f1258u: goto label_3f1258;
        case 0x3f125cu: goto label_3f125c;
        case 0x3f1260u: goto label_3f1260;
        case 0x3f1264u: goto label_3f1264;
        case 0x3f1268u: goto label_3f1268;
        case 0x3f126cu: goto label_3f126c;
        case 0x3f1270u: goto label_3f1270;
        case 0x3f1274u: goto label_3f1274;
        case 0x3f1278u: goto label_3f1278;
        case 0x3f127cu: goto label_3f127c;
        case 0x3f1280u: goto label_3f1280;
        case 0x3f1284u: goto label_3f1284;
        case 0x3f1288u: goto label_3f1288;
        case 0x3f128cu: goto label_3f128c;
        case 0x3f1290u: goto label_3f1290;
        case 0x3f1294u: goto label_3f1294;
        case 0x3f1298u: goto label_3f1298;
        case 0x3f129cu: goto label_3f129c;
        case 0x3f12a0u: goto label_3f12a0;
        case 0x3f12a4u: goto label_3f12a4;
        case 0x3f12a8u: goto label_3f12a8;
        case 0x3f12acu: goto label_3f12ac;
        case 0x3f12b0u: goto label_3f12b0;
        case 0x3f12b4u: goto label_3f12b4;
        case 0x3f12b8u: goto label_3f12b8;
        case 0x3f12bcu: goto label_3f12bc;
        case 0x3f12c0u: goto label_3f12c0;
        case 0x3f12c4u: goto label_3f12c4;
        case 0x3f12c8u: goto label_3f12c8;
        case 0x3f12ccu: goto label_3f12cc;
        case 0x3f12d0u: goto label_3f12d0;
        case 0x3f12d4u: goto label_3f12d4;
        case 0x3f12d8u: goto label_3f12d8;
        case 0x3f12dcu: goto label_3f12dc;
        case 0x3f12e0u: goto label_3f12e0;
        case 0x3f12e4u: goto label_3f12e4;
        case 0x3f12e8u: goto label_3f12e8;
        case 0x3f12ecu: goto label_3f12ec;
        case 0x3f12f0u: goto label_3f12f0;
        case 0x3f12f4u: goto label_3f12f4;
        case 0x3f12f8u: goto label_3f12f8;
        case 0x3f12fcu: goto label_3f12fc;
        case 0x3f1300u: goto label_3f1300;
        case 0x3f1304u: goto label_3f1304;
        case 0x3f1308u: goto label_3f1308;
        case 0x3f130cu: goto label_3f130c;
        case 0x3f1310u: goto label_3f1310;
        case 0x3f1314u: goto label_3f1314;
        case 0x3f1318u: goto label_3f1318;
        case 0x3f131cu: goto label_3f131c;
        case 0x3f1320u: goto label_3f1320;
        case 0x3f1324u: goto label_3f1324;
        case 0x3f1328u: goto label_3f1328;
        case 0x3f132cu: goto label_3f132c;
        case 0x3f1330u: goto label_3f1330;
        case 0x3f1334u: goto label_3f1334;
        case 0x3f1338u: goto label_3f1338;
        case 0x3f133cu: goto label_3f133c;
        case 0x3f1340u: goto label_3f1340;
        case 0x3f1344u: goto label_3f1344;
        case 0x3f1348u: goto label_3f1348;
        case 0x3f134cu: goto label_3f134c;
        case 0x3f1350u: goto label_3f1350;
        case 0x3f1354u: goto label_3f1354;
        case 0x3f1358u: goto label_3f1358;
        case 0x3f135cu: goto label_3f135c;
        case 0x3f1360u: goto label_3f1360;
        case 0x3f1364u: goto label_3f1364;
        case 0x3f1368u: goto label_3f1368;
        case 0x3f136cu: goto label_3f136c;
        case 0x3f1370u: goto label_3f1370;
        case 0x3f1374u: goto label_3f1374;
        case 0x3f1378u: goto label_3f1378;
        case 0x3f137cu: goto label_3f137c;
        case 0x3f1380u: goto label_3f1380;
        case 0x3f1384u: goto label_3f1384;
        case 0x3f1388u: goto label_3f1388;
        case 0x3f138cu: goto label_3f138c;
        case 0x3f1390u: goto label_3f1390;
        case 0x3f1394u: goto label_3f1394;
        case 0x3f1398u: goto label_3f1398;
        case 0x3f139cu: goto label_3f139c;
        case 0x3f13a0u: goto label_3f13a0;
        case 0x3f13a4u: goto label_3f13a4;
        case 0x3f13a8u: goto label_3f13a8;
        case 0x3f13acu: goto label_3f13ac;
        case 0x3f13b0u: goto label_3f13b0;
        case 0x3f13b4u: goto label_3f13b4;
        case 0x3f13b8u: goto label_3f13b8;
        case 0x3f13bcu: goto label_3f13bc;
        case 0x3f13c0u: goto label_3f13c0;
        case 0x3f13c4u: goto label_3f13c4;
        case 0x3f13c8u: goto label_3f13c8;
        case 0x3f13ccu: goto label_3f13cc;
        case 0x3f13d0u: goto label_3f13d0;
        case 0x3f13d4u: goto label_3f13d4;
        case 0x3f13d8u: goto label_3f13d8;
        case 0x3f13dcu: goto label_3f13dc;
        case 0x3f13e0u: goto label_3f13e0;
        case 0x3f13e4u: goto label_3f13e4;
        case 0x3f13e8u: goto label_3f13e8;
        case 0x3f13ecu: goto label_3f13ec;
        case 0x3f13f0u: goto label_3f13f0;
        case 0x3f13f4u: goto label_3f13f4;
        case 0x3f13f8u: goto label_3f13f8;
        case 0x3f13fcu: goto label_3f13fc;
        case 0x3f1400u: goto label_3f1400;
        case 0x3f1404u: goto label_3f1404;
        case 0x3f1408u: goto label_3f1408;
        case 0x3f140cu: goto label_3f140c;
        case 0x3f1410u: goto label_3f1410;
        case 0x3f1414u: goto label_3f1414;
        case 0x3f1418u: goto label_3f1418;
        case 0x3f141cu: goto label_3f141c;
        case 0x3f1420u: goto label_3f1420;
        case 0x3f1424u: goto label_3f1424;
        case 0x3f1428u: goto label_3f1428;
        case 0x3f142cu: goto label_3f142c;
        case 0x3f1430u: goto label_3f1430;
        case 0x3f1434u: goto label_3f1434;
        case 0x3f1438u: goto label_3f1438;
        case 0x3f143cu: goto label_3f143c;
        case 0x3f1440u: goto label_3f1440;
        case 0x3f1444u: goto label_3f1444;
        case 0x3f1448u: goto label_3f1448;
        case 0x3f144cu: goto label_3f144c;
        case 0x3f1450u: goto label_3f1450;
        case 0x3f1454u: goto label_3f1454;
        case 0x3f1458u: goto label_3f1458;
        case 0x3f145cu: goto label_3f145c;
        case 0x3f1460u: goto label_3f1460;
        case 0x3f1464u: goto label_3f1464;
        case 0x3f1468u: goto label_3f1468;
        case 0x3f146cu: goto label_3f146c;
        case 0x3f1470u: goto label_3f1470;
        case 0x3f1474u: goto label_3f1474;
        case 0x3f1478u: goto label_3f1478;
        case 0x3f147cu: goto label_3f147c;
        case 0x3f1480u: goto label_3f1480;
        case 0x3f1484u: goto label_3f1484;
        case 0x3f1488u: goto label_3f1488;
        case 0x3f148cu: goto label_3f148c;
        case 0x3f1490u: goto label_3f1490;
        case 0x3f1494u: goto label_3f1494;
        case 0x3f1498u: goto label_3f1498;
        case 0x3f149cu: goto label_3f149c;
        case 0x3f14a0u: goto label_3f14a0;
        case 0x3f14a4u: goto label_3f14a4;
        case 0x3f14a8u: goto label_3f14a8;
        case 0x3f14acu: goto label_3f14ac;
        case 0x3f14b0u: goto label_3f14b0;
        case 0x3f14b4u: goto label_3f14b4;
        case 0x3f14b8u: goto label_3f14b8;
        case 0x3f14bcu: goto label_3f14bc;
        case 0x3f14c0u: goto label_3f14c0;
        case 0x3f14c4u: goto label_3f14c4;
        case 0x3f14c8u: goto label_3f14c8;
        case 0x3f14ccu: goto label_3f14cc;
        case 0x3f14d0u: goto label_3f14d0;
        case 0x3f14d4u: goto label_3f14d4;
        case 0x3f14d8u: goto label_3f14d8;
        case 0x3f14dcu: goto label_3f14dc;
        case 0x3f14e0u: goto label_3f14e0;
        case 0x3f14e4u: goto label_3f14e4;
        case 0x3f14e8u: goto label_3f14e8;
        case 0x3f14ecu: goto label_3f14ec;
        case 0x3f14f0u: goto label_3f14f0;
        case 0x3f14f4u: goto label_3f14f4;
        case 0x3f14f8u: goto label_3f14f8;
        case 0x3f14fcu: goto label_3f14fc;
        case 0x3f1500u: goto label_3f1500;
        case 0x3f1504u: goto label_3f1504;
        case 0x3f1508u: goto label_3f1508;
        case 0x3f150cu: goto label_3f150c;
        case 0x3f1510u: goto label_3f1510;
        case 0x3f1514u: goto label_3f1514;
        case 0x3f1518u: goto label_3f1518;
        case 0x3f151cu: goto label_3f151c;
        case 0x3f1520u: goto label_3f1520;
        case 0x3f1524u: goto label_3f1524;
        case 0x3f1528u: goto label_3f1528;
        case 0x3f152cu: goto label_3f152c;
        case 0x3f1530u: goto label_3f1530;
        case 0x3f1534u: goto label_3f1534;
        case 0x3f1538u: goto label_3f1538;
        case 0x3f153cu: goto label_3f153c;
        case 0x3f1540u: goto label_3f1540;
        case 0x3f1544u: goto label_3f1544;
        case 0x3f1548u: goto label_3f1548;
        case 0x3f154cu: goto label_3f154c;
        case 0x3f1550u: goto label_3f1550;
        case 0x3f1554u: goto label_3f1554;
        case 0x3f1558u: goto label_3f1558;
        case 0x3f155cu: goto label_3f155c;
        case 0x3f1560u: goto label_3f1560;
        case 0x3f1564u: goto label_3f1564;
        case 0x3f1568u: goto label_3f1568;
        case 0x3f156cu: goto label_3f156c;
        case 0x3f1570u: goto label_3f1570;
        case 0x3f1574u: goto label_3f1574;
        case 0x3f1578u: goto label_3f1578;
        case 0x3f157cu: goto label_3f157c;
        case 0x3f1580u: goto label_3f1580;
        case 0x3f1584u: goto label_3f1584;
        case 0x3f1588u: goto label_3f1588;
        case 0x3f158cu: goto label_3f158c;
        case 0x3f1590u: goto label_3f1590;
        case 0x3f1594u: goto label_3f1594;
        case 0x3f1598u: goto label_3f1598;
        case 0x3f159cu: goto label_3f159c;
        case 0x3f15a0u: goto label_3f15a0;
        case 0x3f15a4u: goto label_3f15a4;
        case 0x3f15a8u: goto label_3f15a8;
        case 0x3f15acu: goto label_3f15ac;
        case 0x3f15b0u: goto label_3f15b0;
        case 0x3f15b4u: goto label_3f15b4;
        case 0x3f15b8u: goto label_3f15b8;
        case 0x3f15bcu: goto label_3f15bc;
        case 0x3f15c0u: goto label_3f15c0;
        case 0x3f15c4u: goto label_3f15c4;
        case 0x3f15c8u: goto label_3f15c8;
        case 0x3f15ccu: goto label_3f15cc;
        case 0x3f15d0u: goto label_3f15d0;
        case 0x3f15d4u: goto label_3f15d4;
        case 0x3f15d8u: goto label_3f15d8;
        case 0x3f15dcu: goto label_3f15dc;
        case 0x3f15e0u: goto label_3f15e0;
        case 0x3f15e4u: goto label_3f15e4;
        case 0x3f15e8u: goto label_3f15e8;
        case 0x3f15ecu: goto label_3f15ec;
        case 0x3f15f0u: goto label_3f15f0;
        case 0x3f15f4u: goto label_3f15f4;
        case 0x3f15f8u: goto label_3f15f8;
        case 0x3f15fcu: goto label_3f15fc;
        case 0x3f1600u: goto label_3f1600;
        case 0x3f1604u: goto label_3f1604;
        case 0x3f1608u: goto label_3f1608;
        case 0x3f160cu: goto label_3f160c;
        case 0x3f1610u: goto label_3f1610;
        case 0x3f1614u: goto label_3f1614;
        case 0x3f1618u: goto label_3f1618;
        case 0x3f161cu: goto label_3f161c;
        case 0x3f1620u: goto label_3f1620;
        case 0x3f1624u: goto label_3f1624;
        case 0x3f1628u: goto label_3f1628;
        case 0x3f162cu: goto label_3f162c;
        case 0x3f1630u: goto label_3f1630;
        case 0x3f1634u: goto label_3f1634;
        case 0x3f1638u: goto label_3f1638;
        case 0x3f163cu: goto label_3f163c;
        case 0x3f1640u: goto label_3f1640;
        case 0x3f1644u: goto label_3f1644;
        case 0x3f1648u: goto label_3f1648;
        case 0x3f164cu: goto label_3f164c;
        case 0x3f1650u: goto label_3f1650;
        case 0x3f1654u: goto label_3f1654;
        case 0x3f1658u: goto label_3f1658;
        case 0x3f165cu: goto label_3f165c;
        case 0x3f1660u: goto label_3f1660;
        case 0x3f1664u: goto label_3f1664;
        case 0x3f1668u: goto label_3f1668;
        case 0x3f166cu: goto label_3f166c;
        default: break;
    }

    ctx->pc = 0x3f11f0u;

label_3f11f0:
    // 0x3f11f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f11f4:
    // 0x3f11f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f11f8:
    // 0x3f11f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f11fc:
    // 0x3f11fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f1200:
    // 0x3f1200: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f1200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1204:
    // 0x3f1204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1208:
    // 0x3f1208: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f1208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f120c:
    // 0x3f120c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f1210:
    // 0x3f1210: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f1210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f1214:
    // 0x3f1214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f1218:
    // 0x3f1218: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3f1218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3f121c:
    // 0x3f121c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3f121cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3f1220:
    // 0x3f1220: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x3f1220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_3f1224:
    // 0x3f1224: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3f1224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f1228:
    // 0x3f1228: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3f1228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3f122c:
    // 0x3f122c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f1230:
    // 0x3f1230: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3f1230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f1234:
    // 0x3f1234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f1234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f1238:
    // 0x3f1238: 0x2848821  addu        $s1, $s4, $a0
    ctx->pc = 0x3f1238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3f123c:
    // 0x3f123c: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x3f123cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3f1240:
    // 0x3f1240: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f1244:
    // 0x3f1244: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3f1248:
    if (ctx->pc == 0x3F1248u) {
        ctx->pc = 0x3F1248u;
            // 0x3f1248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F124Cu;
        goto label_3f124c;
    }
    ctx->pc = 0x3F1244u;
    {
        const bool branch_taken_0x3f1244 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1244u;
            // 0x3f1248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1244) {
            ctx->pc = 0x3F1278u;
            goto label_3f1278;
        }
    }
    ctx->pc = 0x3F124Cu;
label_3f124c:
    // 0x3f124c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3f124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1250:
    // 0x3f1250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f1250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1254:
    // 0x3f1254: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
label_3f1258:
    if (ctx->pc == 0x3F1258u) {
        ctx->pc = 0x3F1258u;
            // 0x3f1258: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3F125Cu;
        goto label_3f125c;
    }
    ctx->pc = 0x3F1254u;
    {
        const bool branch_taken_0x3f1254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3f1254) {
            ctx->pc = 0x3F1258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1254u;
            // 0x3f1258: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1264u;
            goto label_3f1264;
        }
    }
    ctx->pc = 0x3F125Cu;
label_3f125c:
    // 0x3f125c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f1260:
    if (ctx->pc == 0x3F1260u) {
        ctx->pc = 0x3F1260u;
            // 0x3f1260: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F1264u;
        goto label_3f1264;
    }
    ctx->pc = 0x3F125Cu;
    {
        const bool branch_taken_0x3f125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F125Cu;
            // 0x3f1260: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f125c) {
            ctx->pc = 0x3F1280u;
            goto label_3f1280;
        }
    }
    ctx->pc = 0x3F1264u;
label_3f1264:
    // 0x3f1264: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f1264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f1268:
    // 0x3f1268: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x3f1268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f126c:
    // 0x3f126c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3f1270:
    if (ctx->pc == 0x3F1270u) {
        ctx->pc = 0x3F1270u;
            // 0x3f1270: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3F1274u;
        goto label_3f1274;
    }
    ctx->pc = 0x3F126Cu;
    {
        const bool branch_taken_0x3f126c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F126Cu;
            // 0x3f1270: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f126c) {
            ctx->pc = 0x3F1250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f1250;
        }
    }
    ctx->pc = 0x3F1274u;
label_3f1274:
    // 0x3f1274: 0x0  nop
    ctx->pc = 0x3f1274u;
    // NOP
label_3f1278:
    // 0x3f1278: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3f1278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f127c:
    // 0x3f127c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1280:
    // 0x3f1280: 0x54c300bd  bnel        $a2, $v1, . + 4 + (0xBD << 2)
label_3f1284:
    if (ctx->pc == 0x3F1284u) {
        ctx->pc = 0x3F1284u;
            // 0x3f1284: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F1288u;
        goto label_3f1288;
    }
    ctx->pc = 0x3F1280u;
    {
        const bool branch_taken_0x3f1280 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1280) {
            ctx->pc = 0x3F1284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1280u;
            // 0x3f1284: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1578u;
            goto label_3f1578;
        }
    }
    ctx->pc = 0x3F1288u;
label_3f1288:
    // 0x3f1288: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x3f1288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3f128c:
    // 0x3f128c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f1290:
    // 0x3f1290: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f1290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f1294:
    // 0x3f1294: 0x320f809  jalr        $t9
label_3f1298:
    if (ctx->pc == 0x3F1298u) {
        ctx->pc = 0x3F1298u;
            // 0x3f1298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F129Cu;
        goto label_3f129c;
    }
    ctx->pc = 0x3F1294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F129Cu);
        ctx->pc = 0x3F1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1294u;
            // 0x3f1298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F129Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F129Cu; }
            if (ctx->pc != 0x3F129Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F129Cu;
label_3f129c:
    // 0x3f129c: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_3f12a0:
    if (ctx->pc == 0x3F12A0u) {
        ctx->pc = 0x3F12A4u;
        goto label_3f12a4;
    }
    ctx->pc = 0x3F129Cu;
    {
        const bool branch_taken_0x3f129c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f129c) {
            ctx->pc = 0x3F1574u;
            goto label_3f1574;
        }
    }
    ctx->pc = 0x3F12A4u;
label_3f12a4:
    // 0x3f12a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3f12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f12a8:
    // 0x3f12a8: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_3f12ac:
    if (ctx->pc == 0x3F12ACu) {
        ctx->pc = 0x3F12ACu;
            // 0x3f12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F12B0u;
        goto label_3f12b0;
    }
    ctx->pc = 0x3F12A8u;
    {
        const bool branch_taken_0x3f12a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F12ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12A8u;
            // 0x3f12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f12a8) {
            ctx->pc = 0x3F12D8u;
            goto label_3f12d8;
        }
    }
    ctx->pc = 0x3F12B0u;
label_3f12b0:
    // 0x3f12b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f12b4:
    // 0x3f12b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f12b8:
    // 0x3f12b8: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
label_3f12bc:
    if (ctx->pc == 0x3F12BCu) {
        ctx->pc = 0x3F12BCu;
            // 0x3f12bc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3F12C0u;
        goto label_3f12c0;
    }
    ctx->pc = 0x3F12B8u;
    {
        const bool branch_taken_0x3f12b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3f12b8) {
            ctx->pc = 0x3F12BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12B8u;
            // 0x3f12bc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F12C8u;
            goto label_3f12c8;
        }
    }
    ctx->pc = 0x3F12C0u;
label_3f12c0:
    // 0x3f12c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f12c4:
    if (ctx->pc == 0x3F12C4u) {
        ctx->pc = 0x3F12C4u;
            // 0x3f12c4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F12C8u;
        goto label_3f12c8;
    }
    ctx->pc = 0x3F12C0u;
    {
        const bool branch_taken_0x3f12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F12C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12C0u;
            // 0x3f12c4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f12c0) {
            ctx->pc = 0x3F12E0u;
            goto label_3f12e0;
        }
    }
    ctx->pc = 0x3F12C8u;
label_3f12c8:
    // 0x3f12c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f12c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f12cc:
    // 0x3f12cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3f12ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f12d0:
    // 0x3f12d0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3f12d4:
    if (ctx->pc == 0x3F12D4u) {
        ctx->pc = 0x3F12D4u;
            // 0x3f12d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3F12D8u;
        goto label_3f12d8;
    }
    ctx->pc = 0x3F12D0u;
    {
        const bool branch_taken_0x3f12d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12D0u;
            // 0x3f12d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f12d0) {
            ctx->pc = 0x3F12B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f12b4;
        }
    }
    ctx->pc = 0x3F12D8u;
label_3f12d8:
    // 0x3f12d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3f12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f12dc:
    // 0x3f12dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f12e0:
    // 0x3f12e0: 0x54a30043  bnel        $a1, $v1, . + 4 + (0x43 << 2)
label_3f12e4:
    if (ctx->pc == 0x3F12E4u) {
        ctx->pc = 0x3F12E4u;
            // 0x3f12e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3F12E8u;
        goto label_3f12e8;
    }
    ctx->pc = 0x3F12E0u;
    {
        const bool branch_taken_0x3f12e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f12e0) {
            ctx->pc = 0x3F12E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12E0u;
            // 0x3f12e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F13F0u;
            goto label_3f13f0;
        }
    }
    ctx->pc = 0x3F12E8u;
label_3f12e8:
    // 0x3f12e8: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3f12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3f12ec:
    // 0x3f12ec: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3f12f0:
    if (ctx->pc == 0x3F12F0u) {
        ctx->pc = 0x3F12F0u;
            // 0x3f12f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F12F4u;
        goto label_3f12f4;
    }
    ctx->pc = 0x3F12ECu;
    {
        const bool branch_taken_0x3f12ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12ECu;
            // 0x3f12f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f12ec) {
            ctx->pc = 0x3F1320u;
            goto label_3f1320;
        }
    }
    ctx->pc = 0x3F12F4u;
label_3f12f4:
    // 0x3f12f4: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x3f12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3f12f8:
    // 0x3f12f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f12fc:
    // 0x3f12fc: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
label_3f1300:
    if (ctx->pc == 0x3F1300u) {
        ctx->pc = 0x3F1300u;
            // 0x3f1300: 0x8e83001c  lw          $v1, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x3F1304u;
        goto label_3f1304;
    }
    ctx->pc = 0x3F12FCu;
    {
        const bool branch_taken_0x3f12fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3f12fc) {
            ctx->pc = 0x3F1300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F12FCu;
            // 0x3f1300: 0x8e83001c  lw          $v1, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F130Cu;
            goto label_3f130c;
        }
    }
    ctx->pc = 0x3F1304u;
label_3f1304:
    // 0x3f1304: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f1308:
    if (ctx->pc == 0x3F1308u) {
        ctx->pc = 0x3F1308u;
            // 0x3f1308: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F130Cu;
        goto label_3f130c;
    }
    ctx->pc = 0x3F1304u;
    {
        const bool branch_taken_0x3f1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1304u;
            // 0x3f1308: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1304) {
            ctx->pc = 0x3F1328u;
            goto label_3f1328;
        }
    }
    ctx->pc = 0x3F130Cu;
label_3f130c:
    // 0x3f130c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f1310:
    // 0x3f1310: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3f1310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f1314:
    // 0x3f1314: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3f1318:
    if (ctx->pc == 0x3F1318u) {
        ctx->pc = 0x3F1318u;
            // 0x3f1318: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3F131Cu;
        goto label_3f131c;
    }
    ctx->pc = 0x3F1314u;
    {
        const bool branch_taken_0x3f1314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1314u;
            // 0x3f1318: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1314) {
            ctx->pc = 0x3F12F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f12f8;
        }
    }
    ctx->pc = 0x3F131Cu;
label_3f131c:
    // 0x3f131c: 0x0  nop
    ctx->pc = 0x3f131cu;
    // NOP
label_3f1320:
    // 0x3f1320: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3f1320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1324:
    // 0x3f1324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1328:
    // 0x3f1328: 0x14a30030  bne         $a1, $v1, . + 4 + (0x30 << 2)
label_3f132c:
    if (ctx->pc == 0x3F132Cu) {
        ctx->pc = 0x3F1330u;
        goto label_3f1330;
    }
    ctx->pc = 0x3F1328u;
    {
        const bool branch_taken_0x3f1328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1328) {
            ctx->pc = 0x3F13ECu;
            goto label_3f13ec;
        }
    }
    ctx->pc = 0x3F1330u;
label_3f1330:
    // 0x3f1330: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3f1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3f1334:
    // 0x3f1334: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3f1334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3f1338:
    // 0x3f1338: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f1338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3f133c:
    // 0x3f133c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3f1340:
    // 0x3f1340: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f1344:
    if (ctx->pc == 0x3F1344u) {
        ctx->pc = 0x3F1344u;
            // 0x3f1344: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x3F1348u;
        goto label_3f1348;
    }
    ctx->pc = 0x3F1340u;
    {
        const bool branch_taken_0x3f1340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1340) {
            ctx->pc = 0x3F1344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1340u;
            // 0x3f1344: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1358u;
            goto label_3f1358;
        }
    }
    ctx->pc = 0x3F1348u;
label_3f1348:
    // 0x3f1348: 0x26840018  addiu       $a0, $s4, 0x18
    ctx->pc = 0x3f1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_3f134c:
    // 0x3f134c: 0xc0a728c  jal         func_29CA30
label_3f1350:
    if (ctx->pc == 0x3F1350u) {
        ctx->pc = 0x3F1350u;
            // 0x3f1350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F1354u;
        goto label_3f1354;
    }
    ctx->pc = 0x3F134Cu;
    SET_GPR_U32(ctx, 31, 0x3F1354u);
    ctx->pc = 0x3F1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F134Cu;
            // 0x3f1350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1354u; }
        if (ctx->pc != 0x3F1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1354u; }
        if (ctx->pc != 0x3F1354u) { return; }
    }
    ctx->pc = 0x3F1354u;
label_3f1354:
    // 0x3f1354: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3f1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3f1358:
    // 0x3f1358: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f1358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f135c:
    // 0x3f135c: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x3f135cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_3f1360:
    // 0x3f1360: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f1360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3f1364:
    // 0x3f1364: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3f1364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3f1368:
    // 0x3f1368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f136c:
    // 0x3f136c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3f136cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3f1370:
    // 0x3f1370: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x3f1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3f1374:
    // 0x3f1374: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x3f1374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3f1378:
    // 0x3f1378: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3f137c:
    // 0x3f137c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3f1380:
    // 0x3f1380: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f1384:
    if (ctx->pc == 0x3F1384u) {
        ctx->pc = 0x3F1384u;
            // 0x3f1384: 0x8e840028  lw          $a0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->pc = 0x3F1388u;
        goto label_3f1388;
    }
    ctx->pc = 0x3F1380u;
    {
        const bool branch_taken_0x3f1380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1380) {
            ctx->pc = 0x3F1384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1380u;
            // 0x3f1384: 0x8e840028  lw          $a0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1398u;
            goto label_3f1398;
        }
    }
    ctx->pc = 0x3F1388u;
label_3f1388:
    // 0x3f1388: 0x26840024  addiu       $a0, $s4, 0x24
    ctx->pc = 0x3f1388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_3f138c:
    // 0x3f138c: 0xc0a728c  jal         func_29CA30
label_3f1390:
    if (ctx->pc == 0x3F1390u) {
        ctx->pc = 0x3F1390u;
            // 0x3f1390: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F1394u;
        goto label_3f1394;
    }
    ctx->pc = 0x3F138Cu;
    SET_GPR_U32(ctx, 31, 0x3F1394u);
    ctx->pc = 0x3F1390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F138Cu;
            // 0x3f1390: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1394u; }
        if (ctx->pc != 0x3F1394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1394u; }
        if (ctx->pc != 0x3F1394u) { return; }
    }
    ctx->pc = 0x3F1394u;
label_3f1394:
    // 0x3f1394: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x3f1394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3f1398:
    // 0x3f1398: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f139c:
    // 0x3f139c: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x3f139cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_3f13a0:
    // 0x3f13a0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3f13a4:
    // 0x3f13a4: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x3f13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3f13a8:
    // 0x3f13a8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3f13a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13ac:
    // 0x3f13ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f13b0:
    // 0x3f13b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3f13b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f13b4:
    // 0x3f13b4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3f13b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13b8:
    // 0x3f13b8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3f13b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f13bc:
    // 0x3f13bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3f13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13c0:
    // 0x3f13c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3f13c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f13c4:
    // 0x3f13c4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3f13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13c8:
    // 0x3f13c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f13c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f13cc:
    // 0x3f13cc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3f13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13d0:
    // 0x3f13d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3f13d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3f13d4:
    // 0x3f13d4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3f13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13d8:
    // 0x3f13d8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3f13d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3f13dc:
    // 0x3f13dc: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3f13dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13e0:
    // 0x3f13e0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3f13e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_3f13e4:
    // 0x3f13e4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3f13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f13e8:
    // 0x3f13e8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3f13e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_3f13ec:
    // 0x3f13ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3f13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f13f0:
    // 0x3f13f0: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_3f13f4:
    if (ctx->pc == 0x3F13F4u) {
        ctx->pc = 0x3F13F4u;
            // 0x3f13f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F13F8u;
        goto label_3f13f8;
    }
    ctx->pc = 0x3F13F0u;
    {
        const bool branch_taken_0x3f13f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F13F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F13F0u;
            // 0x3f13f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f13f0) {
            ctx->pc = 0x3F1420u;
            goto label_3f1420;
        }
    }
    ctx->pc = 0x3F13F8u;
label_3f13f8:
    // 0x3f13f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f13fc:
    // 0x3f13fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1400:
    // 0x3f1400: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
label_3f1404:
    if (ctx->pc == 0x3F1404u) {
        ctx->pc = 0x3F1404u;
            // 0x3f1404: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3F1408u;
        goto label_3f1408;
    }
    ctx->pc = 0x3F1400u;
    {
        const bool branch_taken_0x3f1400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3f1400) {
            ctx->pc = 0x3F1404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1400u;
            // 0x3f1404: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1410u;
            goto label_3f1410;
        }
    }
    ctx->pc = 0x3F1408u;
label_3f1408:
    // 0x3f1408: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f140c:
    if (ctx->pc == 0x3F140Cu) {
        ctx->pc = 0x3F140Cu;
            // 0x3f140c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F1410u;
        goto label_3f1410;
    }
    ctx->pc = 0x3F1408u;
    {
        const bool branch_taken_0x3f1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1408u;
            // 0x3f140c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1408) {
            ctx->pc = 0x3F1428u;
            goto label_3f1428;
        }
    }
    ctx->pc = 0x3F1410u;
label_3f1410:
    // 0x3f1410: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f1410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f1414:
    // 0x3f1414: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3f1414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f1418:
    // 0x3f1418: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3f141c:
    if (ctx->pc == 0x3F141Cu) {
        ctx->pc = 0x3F141Cu;
            // 0x3f141c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3F1420u;
        goto label_3f1420;
    }
    ctx->pc = 0x3F1418u;
    {
        const bool branch_taken_0x3f1418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1418u;
            // 0x3f141c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1418) {
            ctx->pc = 0x3F13FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f13fc;
        }
    }
    ctx->pc = 0x3F1420u;
label_3f1420:
    // 0x3f1420: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3f1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1424:
    // 0x3f1424: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1428:
    // 0x3f1428: 0x50a30043  beql        $a1, $v1, . + 4 + (0x43 << 2)
label_3f142c:
    if (ctx->pc == 0x3F142Cu) {
        ctx->pc = 0x3F142Cu;
            // 0x3f142c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3F1430u;
        goto label_3f1430;
    }
    ctx->pc = 0x3F1428u;
    {
        const bool branch_taken_0x3f1428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1428) {
            ctx->pc = 0x3F142Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1428u;
            // 0x3f142c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1538u;
            goto label_3f1538;
        }
    }
    ctx->pc = 0x3F1430u;
label_3f1430:
    // 0x3f1430: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3f1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_3f1434:
    // 0x3f1434: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3f1438:
    if (ctx->pc == 0x3F1438u) {
        ctx->pc = 0x3F1438u;
            // 0x3f1438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F143Cu;
        goto label_3f143c;
    }
    ctx->pc = 0x3F1434u;
    {
        const bool branch_taken_0x3f1434 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F1438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1434u;
            // 0x3f1438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1434) {
            ctx->pc = 0x3F1468u;
            goto label_3f1468;
        }
    }
    ctx->pc = 0x3F143Cu;
label_3f143c:
    // 0x3f143c: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3f143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_3f1440:
    // 0x3f1440: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1444:
    // 0x3f1444: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
label_3f1448:
    if (ctx->pc == 0x3F1448u) {
        ctx->pc = 0x3F1448u;
            // 0x3f1448: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x3F144Cu;
        goto label_3f144c;
    }
    ctx->pc = 0x3F1444u;
    {
        const bool branch_taken_0x3f1444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3f1444) {
            ctx->pc = 0x3F1448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1444u;
            // 0x3f1448: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1454u;
            goto label_3f1454;
        }
    }
    ctx->pc = 0x3F144Cu;
label_3f144c:
    // 0x3f144c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f1450:
    if (ctx->pc == 0x3F1450u) {
        ctx->pc = 0x3F1450u;
            // 0x3f1450: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F1454u;
        goto label_3f1454;
    }
    ctx->pc = 0x3F144Cu;
    {
        const bool branch_taken_0x3f144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F144Cu;
            // 0x3f1450: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f144c) {
            ctx->pc = 0x3F1470u;
            goto label_3f1470;
        }
    }
    ctx->pc = 0x3F1454u;
label_3f1454:
    // 0x3f1454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f1454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f1458:
    // 0x3f1458: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3f1458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f145c:
    // 0x3f145c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3f1460:
    if (ctx->pc == 0x3F1460u) {
        ctx->pc = 0x3F1460u;
            // 0x3f1460: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3F1464u;
        goto label_3f1464;
    }
    ctx->pc = 0x3F145Cu;
    {
        const bool branch_taken_0x3f145c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F145Cu;
            // 0x3f1460: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f145c) {
            ctx->pc = 0x3F1440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f1440;
        }
    }
    ctx->pc = 0x3F1464u;
label_3f1464:
    // 0x3f1464: 0x0  nop
    ctx->pc = 0x3f1464u;
    // NOP
label_3f1468:
    // 0x3f1468: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3f1468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f146c:
    // 0x3f146c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1470:
    // 0x3f1470: 0x14a30030  bne         $a1, $v1, . + 4 + (0x30 << 2)
label_3f1474:
    if (ctx->pc == 0x3F1474u) {
        ctx->pc = 0x3F1478u;
        goto label_3f1478;
    }
    ctx->pc = 0x3F1470u;
    {
        const bool branch_taken_0x3f1470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1470) {
            ctx->pc = 0x3F1534u;
            goto label_3f1534;
        }
    }
    ctx->pc = 0x3F1478u;
label_3f1478:
    // 0x3f1478: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3f1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_3f147c:
    // 0x3f147c: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x3f147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_3f1480:
    // 0x3f1480: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f1480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3f1484:
    // 0x3f1484: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f1484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3f1488:
    // 0x3f1488: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f148c:
    if (ctx->pc == 0x3F148Cu) {
        ctx->pc = 0x3F148Cu;
            // 0x3f148c: 0x8e840034  lw          $a0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x3F1490u;
        goto label_3f1490;
    }
    ctx->pc = 0x3F1488u;
    {
        const bool branch_taken_0x3f1488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1488) {
            ctx->pc = 0x3F148Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1488u;
            // 0x3f148c: 0x8e840034  lw          $a0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F14A0u;
            goto label_3f14a0;
        }
    }
    ctx->pc = 0x3F1490u;
label_3f1490:
    // 0x3f1490: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x3f1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_3f1494:
    // 0x3f1494: 0xc0a728c  jal         func_29CA30
label_3f1498:
    if (ctx->pc == 0x3F1498u) {
        ctx->pc = 0x3F1498u;
            // 0x3f1498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F149Cu;
        goto label_3f149c;
    }
    ctx->pc = 0x3F1494u;
    SET_GPR_U32(ctx, 31, 0x3F149Cu);
    ctx->pc = 0x3F1498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1494u;
            // 0x3f1498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F149Cu; }
        if (ctx->pc != 0x3F149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F149Cu; }
        if (ctx->pc != 0x3F149Cu) { return; }
    }
    ctx->pc = 0x3F149Cu;
label_3f149c:
    // 0x3f149c: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x3f149cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_3f14a0:
    // 0x3f14a0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f14a4:
    // 0x3f14a4: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x3f14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_3f14a8:
    // 0x3f14a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3f14ac:
    // 0x3f14ac: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x3f14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_3f14b0:
    // 0x3f14b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f14b4:
    // 0x3f14b4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3f14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3f14b8:
    // 0x3f14b8: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x3f14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_3f14bc:
    // 0x3f14bc: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x3f14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3f14c0:
    // 0x3f14c0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f14c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3f14c4:
    // 0x3f14c4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f14c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3f14c8:
    // 0x3f14c8: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f14cc:
    if (ctx->pc == 0x3F14CCu) {
        ctx->pc = 0x3F14CCu;
            // 0x3f14cc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->pc = 0x3F14D0u;
        goto label_3f14d0;
    }
    ctx->pc = 0x3F14C8u;
    {
        const bool branch_taken_0x3f14c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f14c8) {
            ctx->pc = 0x3F14CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F14C8u;
            // 0x3f14cc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F14E0u;
            goto label_3f14e0;
        }
    }
    ctx->pc = 0x3F14D0u;
label_3f14d0:
    // 0x3f14d0: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x3f14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_3f14d4:
    // 0x3f14d4: 0xc0a728c  jal         func_29CA30
label_3f14d8:
    if (ctx->pc == 0x3F14D8u) {
        ctx->pc = 0x3F14D8u;
            // 0x3f14d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F14DCu;
        goto label_3f14dc;
    }
    ctx->pc = 0x3F14D4u;
    SET_GPR_U32(ctx, 31, 0x3F14DCu);
    ctx->pc = 0x3F14D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F14D4u;
            // 0x3f14d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F14DCu; }
        if (ctx->pc != 0x3F14DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F14DCu; }
        if (ctx->pc != 0x3F14DCu) { return; }
    }
    ctx->pc = 0x3F14DCu;
label_3f14dc:
    // 0x3f14dc: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x3f14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3f14e0:
    // 0x3f14e0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f14e4:
    // 0x3f14e4: 0xae830040  sw          $v1, 0x40($s4)
    ctx->pc = 0x3f14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
label_3f14e8:
    // 0x3f14e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3f14ec:
    // 0x3f14ec: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x3f14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_3f14f0:
    // 0x3f14f0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3f14f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f14f4:
    // 0x3f14f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f14f8:
    // 0x3f14f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3f14f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f14fc:
    // 0x3f14fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3f14fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1500:
    // 0x3f1500: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3f1500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f1504:
    // 0x3f1504: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3f1504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1508:
    // 0x3f1508: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3f1508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f150c:
    // 0x3f150c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3f150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1510:
    // 0x3f1510: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f1510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f1514:
    // 0x3f1514: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3f1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1518:
    // 0x3f1518: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3f1518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3f151c:
    // 0x3f151c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3f151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1520:
    // 0x3f1520: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3f1520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3f1524:
    // 0x3f1524: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3f1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1528:
    // 0x3f1528: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3f1528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_3f152c:
    // 0x3f152c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3f152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1530:
    // 0x3f1530: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3f1530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_3f1534:
    // 0x3f1534: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3f1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3f1538:
    // 0x3f1538: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f1538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f153c:
    // 0x3f153c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3f1540:
    // 0x3f1540: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f1540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3f1544:
    // 0x3f1544: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f1548:
    if (ctx->pc == 0x3F1548u) {
        ctx->pc = 0x3F1548u;
            // 0x3f1548: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3F154Cu;
        goto label_3f154c;
    }
    ctx->pc = 0x3F1544u;
    {
        const bool branch_taken_0x3f1544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1544) {
            ctx->pc = 0x3F1548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1544u;
            // 0x3f1548: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F155Cu;
            goto label_3f155c;
        }
    }
    ctx->pc = 0x3F154Cu;
label_3f154c:
    // 0x3f154c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1550:
    // 0x3f1550: 0xc0a728c  jal         func_29CA30
label_3f1554:
    if (ctx->pc == 0x3F1554u) {
        ctx->pc = 0x3F1554u;
            // 0x3f1554: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F1558u;
        goto label_3f1558;
    }
    ctx->pc = 0x3F1550u;
    SET_GPR_U32(ctx, 31, 0x3F1558u);
    ctx->pc = 0x3F1554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1550u;
            // 0x3f1554: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1558u; }
        if (ctx->pc != 0x3F1558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1558u; }
        if (ctx->pc != 0x3F1558u) { return; }
    }
    ctx->pc = 0x3F1558u;
label_3f1558:
    // 0x3f1558: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f1558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f155c:
    // 0x3f155c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f1560:
    // 0x3f1560: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3f1560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3f1564:
    // 0x3f1564: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f1564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3f1568:
    // 0x3f1568: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f156c:
    // 0x3f156c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f1570:
    // 0x3f1570: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3f1570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3f1574:
    // 0x3f1574: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f1574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f1578:
    // 0x3f1578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f1578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f157c:
    // 0x3f157c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f157cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1580:
    // 0x3f1580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1584:
    // 0x3f1584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1588:
    // 0x3f1588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f158c:
    // 0x3f158c: 0x3e00008  jr          $ra
label_3f1590:
    if (ctx->pc == 0x3F1590u) {
        ctx->pc = 0x3F1590u;
            // 0x3f1590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F1594u;
        goto label_3f1594;
    }
    ctx->pc = 0x3F158Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F158Cu;
            // 0x3f1590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1594u;
label_3f1594:
    // 0x3f1594: 0x0  nop
    ctx->pc = 0x3f1594u;
    // NOP
label_3f1598:
    // 0x3f1598: 0x0  nop
    ctx->pc = 0x3f1598u;
    // NOP
label_3f159c:
    // 0x3f159c: 0x0  nop
    ctx->pc = 0x3f159cu;
    // NOP
label_3f15a0:
    // 0x3f15a0: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x3f15a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3f15a4:
    // 0x3f15a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f15a8:
    // 0x3f15a8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3f15ac:
    if (ctx->pc == 0x3F15ACu) {
        ctx->pc = 0x3F15ACu;
            // 0x3f15ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F15B0u;
        goto label_3f15b0;
    }
    ctx->pc = 0x3F15A8u;
    {
        const bool branch_taken_0x3f15a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f15a8) {
            ctx->pc = 0x3F15ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F15A8u;
            // 0x3f15ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F15B8u;
            goto label_3f15b8;
        }
    }
    ctx->pc = 0x3F15B0u;
label_3f15b0:
    // 0x3f15b0: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x3f15b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3f15b4:
    // 0x3f15b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3f15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3f15b8:
    // 0x3f15b8: 0x3e00008  jr          $ra
label_3f15bc:
    if (ctx->pc == 0x3F15BCu) {
        ctx->pc = 0x3F15BCu;
            // 0x3f15bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3F15C0u;
        goto label_3f15c0;
    }
    ctx->pc = 0x3F15B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F15BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F15B8u;
            // 0x3f15bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F15C0u;
label_3f15c0:
    // 0x3f15c0: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x3f15c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3f15c4:
    // 0x3f15c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f15c8:
    // 0x3f15c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3f15cc:
    if (ctx->pc == 0x3F15CCu) {
        ctx->pc = 0x3F15CCu;
            // 0x3f15cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F15D0u;
        goto label_3f15d0;
    }
    ctx->pc = 0x3F15C8u;
    {
        const bool branch_taken_0x3f15c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f15c8) {
            ctx->pc = 0x3F15CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F15C8u;
            // 0x3f15cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F15D8u;
            goto label_3f15d8;
        }
    }
    ctx->pc = 0x3F15D0u;
label_3f15d0:
    // 0x3f15d0: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x3f15d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3f15d4:
    // 0x3f15d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3f15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3f15d8:
    // 0x3f15d8: 0x3e00008  jr          $ra
label_3f15dc:
    if (ctx->pc == 0x3F15DCu) {
        ctx->pc = 0x3F15DCu;
            // 0x3f15dc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3F15E0u;
        goto label_3f15e0;
    }
    ctx->pc = 0x3F15D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F15DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F15D8u;
            // 0x3f15dc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F15E0u;
label_3f15e0:
    // 0x3f15e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f15e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f15e4:
    // 0x3f15e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f15e8:
    // 0x3f15e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f15e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f15ec:
    // 0x3f15ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f15ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f15f0:
    // 0x3f15f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f15f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f15f4:
    // 0x3f15f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3f15f8:
    if (ctx->pc == 0x3F15F8u) {
        ctx->pc = 0x3F15F8u;
            // 0x3f15f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F15FCu;
        goto label_3f15fc;
    }
    ctx->pc = 0x3F15F4u;
    {
        const bool branch_taken_0x3f15f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F15F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F15F4u;
            // 0x3f15f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f15f4) {
            ctx->pc = 0x3F1650u;
            goto label_3f1650;
        }
    }
    ctx->pc = 0x3F15FCu;
label_3f15fc:
    // 0x3f15fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f1600:
    // 0x3f1600: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f1604:
    // 0x3f1604: 0x2463a0a0  addiu       $v1, $v1, -0x5F60
    ctx->pc = 0x3f1604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942880));
label_3f1608:
    // 0x3f1608: 0x2442a0d8  addiu       $v0, $v0, -0x5F28
    ctx->pc = 0x3f1608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942936));
label_3f160c:
    // 0x3f160c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f160cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f1610:
    // 0x3f1610: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3f1614:
    if (ctx->pc == 0x3F1614u) {
        ctx->pc = 0x3F1614u;
            // 0x3f1614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3F1618u;
        goto label_3f1618;
    }
    ctx->pc = 0x3F1610u;
    {
        const bool branch_taken_0x3f1610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1610u;
            // 0x3f1614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1610) {
            ctx->pc = 0x3F1638u;
            goto label_3f1638;
        }
    }
    ctx->pc = 0x3F1618u;
label_3f1618:
    // 0x3f1618: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f1618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f161c:
    // 0x3f161c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f1620:
    // 0x3f1620: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x3f1620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
label_3f1624:
    // 0x3f1624: 0x2442a188  addiu       $v0, $v0, -0x5E78
    ctx->pc = 0x3f1624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943112));
label_3f1628:
    // 0x3f1628: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f1628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f162c:
    // 0x3f162c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1630:
    // 0x3f1630: 0xc0fc59c  jal         func_3F1670
label_3f1634:
    if (ctx->pc == 0x3F1634u) {
        ctx->pc = 0x3F1634u;
            // 0x3f1634: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3F1638u;
        goto label_3f1638;
    }
    ctx->pc = 0x3F1630u;
    SET_GPR_U32(ctx, 31, 0x3F1638u);
    ctx->pc = 0x3F1634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1630u;
            // 0x3f1634: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1670u;
    if (runtime->hasFunction(0x3F1670u)) {
        auto targetFn = runtime->lookupFunction(0x3F1670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1638u; }
        if (ctx->pc != 0x3F1638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1670_0x3f1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1638u; }
        if (ctx->pc != 0x3F1638u) { return; }
    }
    ctx->pc = 0x3F1638u;
label_3f1638:
    // 0x3f1638: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f1638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3f163c:
    // 0x3f163c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f163cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f1640:
    // 0x3f1640: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f1644:
    if (ctx->pc == 0x3F1644u) {
        ctx->pc = 0x3F1644u;
            // 0x3f1644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1648u;
        goto label_3f1648;
    }
    ctx->pc = 0x3F1640u;
    {
        const bool branch_taken_0x3f1640 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f1640) {
            ctx->pc = 0x3F1644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1640u;
            // 0x3f1644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1654u;
            goto label_3f1654;
        }
    }
    ctx->pc = 0x3F1648u;
label_3f1648:
    // 0x3f1648: 0xc0400a8  jal         func_1002A0
label_3f164c:
    if (ctx->pc == 0x3F164Cu) {
        ctx->pc = 0x3F164Cu;
            // 0x3f164c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1650u;
        goto label_3f1650;
    }
    ctx->pc = 0x3F1648u;
    SET_GPR_U32(ctx, 31, 0x3F1650u);
    ctx->pc = 0x3F164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1648u;
            // 0x3f164c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1650u; }
        if (ctx->pc != 0x3F1650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1650u; }
        if (ctx->pc != 0x3F1650u) { return; }
    }
    ctx->pc = 0x3F1650u;
label_3f1650:
    // 0x3f1650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f1650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1654:
    // 0x3f1654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f1654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1658:
    // 0x3f1658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f165c:
    // 0x3f165c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f165cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1660:
    // 0x3f1660: 0x3e00008  jr          $ra
label_3f1664:
    if (ctx->pc == 0x3F1664u) {
        ctx->pc = 0x3F1664u;
            // 0x3f1664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F1668u;
        goto label_3f1668;
    }
    ctx->pc = 0x3F1660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1660u;
            // 0x3f1664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1668u;
label_3f1668:
    // 0x3f1668: 0x0  nop
    ctx->pc = 0x3f1668u;
    // NOP
label_3f166c:
    // 0x3f166c: 0x0  nop
    ctx->pc = 0x3f166cu;
    // NOP
}
