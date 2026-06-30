#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E1160
// Address: 0x4e1160 - 0x4e1650
void sub_004E1160_0x4e1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1160_0x4e1160");
#endif

    switch (ctx->pc) {
        case 0x4e1160u: goto label_4e1160;
        case 0x4e1164u: goto label_4e1164;
        case 0x4e1168u: goto label_4e1168;
        case 0x4e116cu: goto label_4e116c;
        case 0x4e1170u: goto label_4e1170;
        case 0x4e1174u: goto label_4e1174;
        case 0x4e1178u: goto label_4e1178;
        case 0x4e117cu: goto label_4e117c;
        case 0x4e1180u: goto label_4e1180;
        case 0x4e1184u: goto label_4e1184;
        case 0x4e1188u: goto label_4e1188;
        case 0x4e118cu: goto label_4e118c;
        case 0x4e1190u: goto label_4e1190;
        case 0x4e1194u: goto label_4e1194;
        case 0x4e1198u: goto label_4e1198;
        case 0x4e119cu: goto label_4e119c;
        case 0x4e11a0u: goto label_4e11a0;
        case 0x4e11a4u: goto label_4e11a4;
        case 0x4e11a8u: goto label_4e11a8;
        case 0x4e11acu: goto label_4e11ac;
        case 0x4e11b0u: goto label_4e11b0;
        case 0x4e11b4u: goto label_4e11b4;
        case 0x4e11b8u: goto label_4e11b8;
        case 0x4e11bcu: goto label_4e11bc;
        case 0x4e11c0u: goto label_4e11c0;
        case 0x4e11c4u: goto label_4e11c4;
        case 0x4e11c8u: goto label_4e11c8;
        case 0x4e11ccu: goto label_4e11cc;
        case 0x4e11d0u: goto label_4e11d0;
        case 0x4e11d4u: goto label_4e11d4;
        case 0x4e11d8u: goto label_4e11d8;
        case 0x4e11dcu: goto label_4e11dc;
        case 0x4e11e0u: goto label_4e11e0;
        case 0x4e11e4u: goto label_4e11e4;
        case 0x4e11e8u: goto label_4e11e8;
        case 0x4e11ecu: goto label_4e11ec;
        case 0x4e11f0u: goto label_4e11f0;
        case 0x4e11f4u: goto label_4e11f4;
        case 0x4e11f8u: goto label_4e11f8;
        case 0x4e11fcu: goto label_4e11fc;
        case 0x4e1200u: goto label_4e1200;
        case 0x4e1204u: goto label_4e1204;
        case 0x4e1208u: goto label_4e1208;
        case 0x4e120cu: goto label_4e120c;
        case 0x4e1210u: goto label_4e1210;
        case 0x4e1214u: goto label_4e1214;
        case 0x4e1218u: goto label_4e1218;
        case 0x4e121cu: goto label_4e121c;
        case 0x4e1220u: goto label_4e1220;
        case 0x4e1224u: goto label_4e1224;
        case 0x4e1228u: goto label_4e1228;
        case 0x4e122cu: goto label_4e122c;
        case 0x4e1230u: goto label_4e1230;
        case 0x4e1234u: goto label_4e1234;
        case 0x4e1238u: goto label_4e1238;
        case 0x4e123cu: goto label_4e123c;
        case 0x4e1240u: goto label_4e1240;
        case 0x4e1244u: goto label_4e1244;
        case 0x4e1248u: goto label_4e1248;
        case 0x4e124cu: goto label_4e124c;
        case 0x4e1250u: goto label_4e1250;
        case 0x4e1254u: goto label_4e1254;
        case 0x4e1258u: goto label_4e1258;
        case 0x4e125cu: goto label_4e125c;
        case 0x4e1260u: goto label_4e1260;
        case 0x4e1264u: goto label_4e1264;
        case 0x4e1268u: goto label_4e1268;
        case 0x4e126cu: goto label_4e126c;
        case 0x4e1270u: goto label_4e1270;
        case 0x4e1274u: goto label_4e1274;
        case 0x4e1278u: goto label_4e1278;
        case 0x4e127cu: goto label_4e127c;
        case 0x4e1280u: goto label_4e1280;
        case 0x4e1284u: goto label_4e1284;
        case 0x4e1288u: goto label_4e1288;
        case 0x4e128cu: goto label_4e128c;
        case 0x4e1290u: goto label_4e1290;
        case 0x4e1294u: goto label_4e1294;
        case 0x4e1298u: goto label_4e1298;
        case 0x4e129cu: goto label_4e129c;
        case 0x4e12a0u: goto label_4e12a0;
        case 0x4e12a4u: goto label_4e12a4;
        case 0x4e12a8u: goto label_4e12a8;
        case 0x4e12acu: goto label_4e12ac;
        case 0x4e12b0u: goto label_4e12b0;
        case 0x4e12b4u: goto label_4e12b4;
        case 0x4e12b8u: goto label_4e12b8;
        case 0x4e12bcu: goto label_4e12bc;
        case 0x4e12c0u: goto label_4e12c0;
        case 0x4e12c4u: goto label_4e12c4;
        case 0x4e12c8u: goto label_4e12c8;
        case 0x4e12ccu: goto label_4e12cc;
        case 0x4e12d0u: goto label_4e12d0;
        case 0x4e12d4u: goto label_4e12d4;
        case 0x4e12d8u: goto label_4e12d8;
        case 0x4e12dcu: goto label_4e12dc;
        case 0x4e12e0u: goto label_4e12e0;
        case 0x4e12e4u: goto label_4e12e4;
        case 0x4e12e8u: goto label_4e12e8;
        case 0x4e12ecu: goto label_4e12ec;
        case 0x4e12f0u: goto label_4e12f0;
        case 0x4e12f4u: goto label_4e12f4;
        case 0x4e12f8u: goto label_4e12f8;
        case 0x4e12fcu: goto label_4e12fc;
        case 0x4e1300u: goto label_4e1300;
        case 0x4e1304u: goto label_4e1304;
        case 0x4e1308u: goto label_4e1308;
        case 0x4e130cu: goto label_4e130c;
        case 0x4e1310u: goto label_4e1310;
        case 0x4e1314u: goto label_4e1314;
        case 0x4e1318u: goto label_4e1318;
        case 0x4e131cu: goto label_4e131c;
        case 0x4e1320u: goto label_4e1320;
        case 0x4e1324u: goto label_4e1324;
        case 0x4e1328u: goto label_4e1328;
        case 0x4e132cu: goto label_4e132c;
        case 0x4e1330u: goto label_4e1330;
        case 0x4e1334u: goto label_4e1334;
        case 0x4e1338u: goto label_4e1338;
        case 0x4e133cu: goto label_4e133c;
        case 0x4e1340u: goto label_4e1340;
        case 0x4e1344u: goto label_4e1344;
        case 0x4e1348u: goto label_4e1348;
        case 0x4e134cu: goto label_4e134c;
        case 0x4e1350u: goto label_4e1350;
        case 0x4e1354u: goto label_4e1354;
        case 0x4e1358u: goto label_4e1358;
        case 0x4e135cu: goto label_4e135c;
        case 0x4e1360u: goto label_4e1360;
        case 0x4e1364u: goto label_4e1364;
        case 0x4e1368u: goto label_4e1368;
        case 0x4e136cu: goto label_4e136c;
        case 0x4e1370u: goto label_4e1370;
        case 0x4e1374u: goto label_4e1374;
        case 0x4e1378u: goto label_4e1378;
        case 0x4e137cu: goto label_4e137c;
        case 0x4e1380u: goto label_4e1380;
        case 0x4e1384u: goto label_4e1384;
        case 0x4e1388u: goto label_4e1388;
        case 0x4e138cu: goto label_4e138c;
        case 0x4e1390u: goto label_4e1390;
        case 0x4e1394u: goto label_4e1394;
        case 0x4e1398u: goto label_4e1398;
        case 0x4e139cu: goto label_4e139c;
        case 0x4e13a0u: goto label_4e13a0;
        case 0x4e13a4u: goto label_4e13a4;
        case 0x4e13a8u: goto label_4e13a8;
        case 0x4e13acu: goto label_4e13ac;
        case 0x4e13b0u: goto label_4e13b0;
        case 0x4e13b4u: goto label_4e13b4;
        case 0x4e13b8u: goto label_4e13b8;
        case 0x4e13bcu: goto label_4e13bc;
        case 0x4e13c0u: goto label_4e13c0;
        case 0x4e13c4u: goto label_4e13c4;
        case 0x4e13c8u: goto label_4e13c8;
        case 0x4e13ccu: goto label_4e13cc;
        case 0x4e13d0u: goto label_4e13d0;
        case 0x4e13d4u: goto label_4e13d4;
        case 0x4e13d8u: goto label_4e13d8;
        case 0x4e13dcu: goto label_4e13dc;
        case 0x4e13e0u: goto label_4e13e0;
        case 0x4e13e4u: goto label_4e13e4;
        case 0x4e13e8u: goto label_4e13e8;
        case 0x4e13ecu: goto label_4e13ec;
        case 0x4e13f0u: goto label_4e13f0;
        case 0x4e13f4u: goto label_4e13f4;
        case 0x4e13f8u: goto label_4e13f8;
        case 0x4e13fcu: goto label_4e13fc;
        case 0x4e1400u: goto label_4e1400;
        case 0x4e1404u: goto label_4e1404;
        case 0x4e1408u: goto label_4e1408;
        case 0x4e140cu: goto label_4e140c;
        case 0x4e1410u: goto label_4e1410;
        case 0x4e1414u: goto label_4e1414;
        case 0x4e1418u: goto label_4e1418;
        case 0x4e141cu: goto label_4e141c;
        case 0x4e1420u: goto label_4e1420;
        case 0x4e1424u: goto label_4e1424;
        case 0x4e1428u: goto label_4e1428;
        case 0x4e142cu: goto label_4e142c;
        case 0x4e1430u: goto label_4e1430;
        case 0x4e1434u: goto label_4e1434;
        case 0x4e1438u: goto label_4e1438;
        case 0x4e143cu: goto label_4e143c;
        case 0x4e1440u: goto label_4e1440;
        case 0x4e1444u: goto label_4e1444;
        case 0x4e1448u: goto label_4e1448;
        case 0x4e144cu: goto label_4e144c;
        case 0x4e1450u: goto label_4e1450;
        case 0x4e1454u: goto label_4e1454;
        case 0x4e1458u: goto label_4e1458;
        case 0x4e145cu: goto label_4e145c;
        case 0x4e1460u: goto label_4e1460;
        case 0x4e1464u: goto label_4e1464;
        case 0x4e1468u: goto label_4e1468;
        case 0x4e146cu: goto label_4e146c;
        case 0x4e1470u: goto label_4e1470;
        case 0x4e1474u: goto label_4e1474;
        case 0x4e1478u: goto label_4e1478;
        case 0x4e147cu: goto label_4e147c;
        case 0x4e1480u: goto label_4e1480;
        case 0x4e1484u: goto label_4e1484;
        case 0x4e1488u: goto label_4e1488;
        case 0x4e148cu: goto label_4e148c;
        case 0x4e1490u: goto label_4e1490;
        case 0x4e1494u: goto label_4e1494;
        case 0x4e1498u: goto label_4e1498;
        case 0x4e149cu: goto label_4e149c;
        case 0x4e14a0u: goto label_4e14a0;
        case 0x4e14a4u: goto label_4e14a4;
        case 0x4e14a8u: goto label_4e14a8;
        case 0x4e14acu: goto label_4e14ac;
        case 0x4e14b0u: goto label_4e14b0;
        case 0x4e14b4u: goto label_4e14b4;
        case 0x4e14b8u: goto label_4e14b8;
        case 0x4e14bcu: goto label_4e14bc;
        case 0x4e14c0u: goto label_4e14c0;
        case 0x4e14c4u: goto label_4e14c4;
        case 0x4e14c8u: goto label_4e14c8;
        case 0x4e14ccu: goto label_4e14cc;
        case 0x4e14d0u: goto label_4e14d0;
        case 0x4e14d4u: goto label_4e14d4;
        case 0x4e14d8u: goto label_4e14d8;
        case 0x4e14dcu: goto label_4e14dc;
        case 0x4e14e0u: goto label_4e14e0;
        case 0x4e14e4u: goto label_4e14e4;
        case 0x4e14e8u: goto label_4e14e8;
        case 0x4e14ecu: goto label_4e14ec;
        case 0x4e14f0u: goto label_4e14f0;
        case 0x4e14f4u: goto label_4e14f4;
        case 0x4e14f8u: goto label_4e14f8;
        case 0x4e14fcu: goto label_4e14fc;
        case 0x4e1500u: goto label_4e1500;
        case 0x4e1504u: goto label_4e1504;
        case 0x4e1508u: goto label_4e1508;
        case 0x4e150cu: goto label_4e150c;
        case 0x4e1510u: goto label_4e1510;
        case 0x4e1514u: goto label_4e1514;
        case 0x4e1518u: goto label_4e1518;
        case 0x4e151cu: goto label_4e151c;
        case 0x4e1520u: goto label_4e1520;
        case 0x4e1524u: goto label_4e1524;
        case 0x4e1528u: goto label_4e1528;
        case 0x4e152cu: goto label_4e152c;
        case 0x4e1530u: goto label_4e1530;
        case 0x4e1534u: goto label_4e1534;
        case 0x4e1538u: goto label_4e1538;
        case 0x4e153cu: goto label_4e153c;
        case 0x4e1540u: goto label_4e1540;
        case 0x4e1544u: goto label_4e1544;
        case 0x4e1548u: goto label_4e1548;
        case 0x4e154cu: goto label_4e154c;
        case 0x4e1550u: goto label_4e1550;
        case 0x4e1554u: goto label_4e1554;
        case 0x4e1558u: goto label_4e1558;
        case 0x4e155cu: goto label_4e155c;
        case 0x4e1560u: goto label_4e1560;
        case 0x4e1564u: goto label_4e1564;
        case 0x4e1568u: goto label_4e1568;
        case 0x4e156cu: goto label_4e156c;
        case 0x4e1570u: goto label_4e1570;
        case 0x4e1574u: goto label_4e1574;
        case 0x4e1578u: goto label_4e1578;
        case 0x4e157cu: goto label_4e157c;
        case 0x4e1580u: goto label_4e1580;
        case 0x4e1584u: goto label_4e1584;
        case 0x4e1588u: goto label_4e1588;
        case 0x4e158cu: goto label_4e158c;
        case 0x4e1590u: goto label_4e1590;
        case 0x4e1594u: goto label_4e1594;
        case 0x4e1598u: goto label_4e1598;
        case 0x4e159cu: goto label_4e159c;
        case 0x4e15a0u: goto label_4e15a0;
        case 0x4e15a4u: goto label_4e15a4;
        case 0x4e15a8u: goto label_4e15a8;
        case 0x4e15acu: goto label_4e15ac;
        case 0x4e15b0u: goto label_4e15b0;
        case 0x4e15b4u: goto label_4e15b4;
        case 0x4e15b8u: goto label_4e15b8;
        case 0x4e15bcu: goto label_4e15bc;
        case 0x4e15c0u: goto label_4e15c0;
        case 0x4e15c4u: goto label_4e15c4;
        case 0x4e15c8u: goto label_4e15c8;
        case 0x4e15ccu: goto label_4e15cc;
        case 0x4e15d0u: goto label_4e15d0;
        case 0x4e15d4u: goto label_4e15d4;
        case 0x4e15d8u: goto label_4e15d8;
        case 0x4e15dcu: goto label_4e15dc;
        case 0x4e15e0u: goto label_4e15e0;
        case 0x4e15e4u: goto label_4e15e4;
        case 0x4e15e8u: goto label_4e15e8;
        case 0x4e15ecu: goto label_4e15ec;
        case 0x4e15f0u: goto label_4e15f0;
        case 0x4e15f4u: goto label_4e15f4;
        case 0x4e15f8u: goto label_4e15f8;
        case 0x4e15fcu: goto label_4e15fc;
        case 0x4e1600u: goto label_4e1600;
        case 0x4e1604u: goto label_4e1604;
        case 0x4e1608u: goto label_4e1608;
        case 0x4e160cu: goto label_4e160c;
        case 0x4e1610u: goto label_4e1610;
        case 0x4e1614u: goto label_4e1614;
        case 0x4e1618u: goto label_4e1618;
        case 0x4e161cu: goto label_4e161c;
        case 0x4e1620u: goto label_4e1620;
        case 0x4e1624u: goto label_4e1624;
        case 0x4e1628u: goto label_4e1628;
        case 0x4e162cu: goto label_4e162c;
        case 0x4e1630u: goto label_4e1630;
        case 0x4e1634u: goto label_4e1634;
        case 0x4e1638u: goto label_4e1638;
        case 0x4e163cu: goto label_4e163c;
        case 0x4e1640u: goto label_4e1640;
        case 0x4e1644u: goto label_4e1644;
        case 0x4e1648u: goto label_4e1648;
        case 0x4e164cu: goto label_4e164c;
        default: break;
    }

    ctx->pc = 0x4e1160u;

label_4e1160:
    // 0x4e1160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e1164:
    // 0x4e1164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e1168:
    // 0x4e1168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e116c:
    // 0x4e116c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1170:
    // 0x4e1170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e1170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e1174:
    // 0x4e1174: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4e1178:
    if (ctx->pc == 0x4E1178u) {
        ctx->pc = 0x4E1178u;
            // 0x4e1178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E117Cu;
        goto label_4e117c;
    }
    ctx->pc = 0x4E1174u;
    {
        const bool branch_taken_0x4e1174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1174u;
            // 0x4e1178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1174) {
            ctx->pc = 0x4E12A8u;
            goto label_4e12a8;
        }
    }
    ctx->pc = 0x4E117Cu;
label_4e117c:
    // 0x4e117c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e117cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e1180:
    // 0x4e1180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e1180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e1184:
    // 0x4e1184: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x4e1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
label_4e1188:
    // 0x4e1188: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e1188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e118c:
    // 0x4e118c: 0x24423588  addiu       $v0, $v0, 0x3588
    ctx->pc = 0x4e118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13704));
label_4e1190:
    // 0x4e1190: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e1190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e1194:
    // 0x4e1194: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e1194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e1198:
    // 0x4e1198: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4e1198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4e119c:
    // 0x4e119c: 0xc0407c0  jal         func_101F00
label_4e11a0:
    if (ctx->pc == 0x4E11A0u) {
        ctx->pc = 0x4E11A0u;
            // 0x4e11a0: 0x24a512c0  addiu       $a1, $a1, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
        ctx->pc = 0x4E11A4u;
        goto label_4e11a4;
    }
    ctx->pc = 0x4E119Cu;
    SET_GPR_U32(ctx, 31, 0x4E11A4u);
    ctx->pc = 0x4E11A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E119Cu;
            // 0x4e11a0: 0x24a512c0  addiu       $a1, $a1, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11A4u; }
        if (ctx->pc != 0x4E11A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11A4u; }
        if (ctx->pc != 0x4E11A4u) { return; }
    }
    ctx->pc = 0x4E11A4u;
label_4e11a4:
    // 0x4e11a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4e11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4e11a8:
    // 0x4e11a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4e11ac:
    if (ctx->pc == 0x4E11ACu) {
        ctx->pc = 0x4E11ACu;
            // 0x4e11ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4E11B0u;
        goto label_4e11b0;
    }
    ctx->pc = 0x4E11A8u;
    {
        const bool branch_taken_0x4e11a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11a8) {
            ctx->pc = 0x4E11ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E11A8u;
            // 0x4e11ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E11BCu;
            goto label_4e11bc;
        }
    }
    ctx->pc = 0x4E11B0u;
label_4e11b0:
    // 0x4e11b0: 0xc07507c  jal         func_1D41F0
label_4e11b4:
    if (ctx->pc == 0x4E11B4u) {
        ctx->pc = 0x4E11B4u;
            // 0x4e11b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4E11B8u;
        goto label_4e11b8;
    }
    ctx->pc = 0x4E11B0u;
    SET_GPR_U32(ctx, 31, 0x4E11B8u);
    ctx->pc = 0x4E11B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E11B0u;
            // 0x4e11b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11B8u; }
        if (ctx->pc != 0x4E11B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11B8u; }
        if (ctx->pc != 0x4E11B8u) { return; }
    }
    ctx->pc = 0x4E11B8u;
label_4e11b8:
    // 0x4e11b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4e11bc:
    // 0x4e11bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e11c0:
    if (ctx->pc == 0x4E11C0u) {
        ctx->pc = 0x4E11C0u;
            // 0x4e11c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4E11C4u;
        goto label_4e11c4;
    }
    ctx->pc = 0x4E11BCu;
    {
        const bool branch_taken_0x4e11bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11bc) {
            ctx->pc = 0x4E11C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E11BCu;
            // 0x4e11c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E11ECu;
            goto label_4e11ec;
        }
    }
    ctx->pc = 0x4E11C4u;
label_4e11c4:
    // 0x4e11c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e11c8:
    if (ctx->pc == 0x4E11C8u) {
        ctx->pc = 0x4E11CCu;
        goto label_4e11cc;
    }
    ctx->pc = 0x4E11C4u;
    {
        const bool branch_taken_0x4e11c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11c4) {
            ctx->pc = 0x4E11E8u;
            goto label_4e11e8;
        }
    }
    ctx->pc = 0x4E11CCu;
label_4e11cc:
    // 0x4e11cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e11d0:
    if (ctx->pc == 0x4E11D0u) {
        ctx->pc = 0x4E11D4u;
        goto label_4e11d4;
    }
    ctx->pc = 0x4E11CCu;
    {
        const bool branch_taken_0x4e11cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11cc) {
            ctx->pc = 0x4E11E8u;
            goto label_4e11e8;
        }
    }
    ctx->pc = 0x4E11D4u;
label_4e11d4:
    // 0x4e11d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4e11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4e11d8:
    // 0x4e11d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e11dc:
    if (ctx->pc == 0x4E11DCu) {
        ctx->pc = 0x4E11E0u;
        goto label_4e11e0;
    }
    ctx->pc = 0x4E11D8u;
    {
        const bool branch_taken_0x4e11d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11d8) {
            ctx->pc = 0x4E11E8u;
            goto label_4e11e8;
        }
    }
    ctx->pc = 0x4E11E0u;
label_4e11e0:
    // 0x4e11e0: 0xc0400a8  jal         func_1002A0
label_4e11e4:
    if (ctx->pc == 0x4E11E4u) {
        ctx->pc = 0x4E11E8u;
        goto label_4e11e8;
    }
    ctx->pc = 0x4E11E0u;
    SET_GPR_U32(ctx, 31, 0x4E11E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11E8u; }
        if (ctx->pc != 0x4E11E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E11E8u; }
        if (ctx->pc != 0x4E11E8u) { return; }
    }
    ctx->pc = 0x4E11E8u;
label_4e11e8:
    // 0x4e11e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4e11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4e11ec:
    // 0x4e11ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e11f0:
    if (ctx->pc == 0x4E11F0u) {
        ctx->pc = 0x4E11F0u;
            // 0x4e11f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4E11F4u;
        goto label_4e11f4;
    }
    ctx->pc = 0x4E11ECu;
    {
        const bool branch_taken_0x4e11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11ec) {
            ctx->pc = 0x4E11F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E11ECu;
            // 0x4e11f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E121Cu;
            goto label_4e121c;
        }
    }
    ctx->pc = 0x4E11F4u;
label_4e11f4:
    // 0x4e11f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e11f8:
    if (ctx->pc == 0x4E11F8u) {
        ctx->pc = 0x4E11FCu;
        goto label_4e11fc;
    }
    ctx->pc = 0x4E11F4u;
    {
        const bool branch_taken_0x4e11f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11f4) {
            ctx->pc = 0x4E1218u;
            goto label_4e1218;
        }
    }
    ctx->pc = 0x4E11FCu;
label_4e11fc:
    // 0x4e11fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e1200:
    if (ctx->pc == 0x4E1200u) {
        ctx->pc = 0x4E1204u;
        goto label_4e1204;
    }
    ctx->pc = 0x4E11FCu;
    {
        const bool branch_taken_0x4e11fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11fc) {
            ctx->pc = 0x4E1218u;
            goto label_4e1218;
        }
    }
    ctx->pc = 0x4E1204u;
label_4e1204:
    // 0x4e1204: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4e1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4e1208:
    // 0x4e1208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e120c:
    if (ctx->pc == 0x4E120Cu) {
        ctx->pc = 0x4E1210u;
        goto label_4e1210;
    }
    ctx->pc = 0x4E1208u;
    {
        const bool branch_taken_0x4e1208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1208) {
            ctx->pc = 0x4E1218u;
            goto label_4e1218;
        }
    }
    ctx->pc = 0x4E1210u;
label_4e1210:
    // 0x4e1210: 0xc0400a8  jal         func_1002A0
label_4e1214:
    if (ctx->pc == 0x4E1214u) {
        ctx->pc = 0x4E1218u;
        goto label_4e1218;
    }
    ctx->pc = 0x4E1210u;
    SET_GPR_U32(ctx, 31, 0x4E1218u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1218u; }
        if (ctx->pc != 0x4E1218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1218u; }
        if (ctx->pc != 0x4E1218u) { return; }
    }
    ctx->pc = 0x4E1218u;
label_4e1218:
    // 0x4e1218: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4e121c:
    // 0x4e121c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e1220:
    if (ctx->pc == 0x4E1220u) {
        ctx->pc = 0x4E1224u;
        goto label_4e1224;
    }
    ctx->pc = 0x4E121Cu;
    {
        const bool branch_taken_0x4e121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e121c) {
            ctx->pc = 0x4E1238u;
            goto label_4e1238;
        }
    }
    ctx->pc = 0x4E1224u;
label_4e1224:
    // 0x4e1224: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e1228:
    // 0x4e1228: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e122c:
    // 0x4e122c: 0x24633538  addiu       $v1, $v1, 0x3538
    ctx->pc = 0x4e122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13624));
label_4e1230:
    // 0x4e1230: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4e1230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4e1234:
    // 0x4e1234: 0xac40aa90  sw          $zero, -0x5570($v0)
    ctx->pc = 0x4e1234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945424), GPR_U32(ctx, 0));
label_4e1238:
    // 0x4e1238: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4e123c:
    if (ctx->pc == 0x4E123Cu) {
        ctx->pc = 0x4E123Cu;
            // 0x4e123c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4E1240u;
        goto label_4e1240;
    }
    ctx->pc = 0x4E1238u;
    {
        const bool branch_taken_0x4e1238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1238) {
            ctx->pc = 0x4E123Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1238u;
            // 0x4e123c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1294u;
            goto label_4e1294;
        }
    }
    ctx->pc = 0x4E1240u;
label_4e1240:
    // 0x4e1240: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e1240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e1244:
    // 0x4e1244: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e1248:
    // 0x4e1248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e1248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e124c:
    // 0x4e124c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4e124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e1250:
    // 0x4e1250: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e1254:
    if (ctx->pc == 0x4E1254u) {
        ctx->pc = 0x4E1254u;
            // 0x4e1254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4E1258u;
        goto label_4e1258;
    }
    ctx->pc = 0x4E1250u;
    {
        const bool branch_taken_0x4e1250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1250) {
            ctx->pc = 0x4E1254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1250u;
            // 0x4e1254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E126Cu;
            goto label_4e126c;
        }
    }
    ctx->pc = 0x4E1258u;
label_4e1258:
    // 0x4e1258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e1258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e125c:
    // 0x4e125c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e125cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e1260:
    // 0x4e1260: 0x320f809  jalr        $t9
label_4e1264:
    if (ctx->pc == 0x4E1264u) {
        ctx->pc = 0x4E1264u;
            // 0x4e1264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E1268u;
        goto label_4e1268;
    }
    ctx->pc = 0x4E1260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1268u);
        ctx->pc = 0x4E1264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1260u;
            // 0x4e1264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1268u; }
            if (ctx->pc != 0x4E1268u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1268u;
label_4e1268:
    // 0x4e1268: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4e1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4e126c:
    // 0x4e126c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e1270:
    if (ctx->pc == 0x4E1270u) {
        ctx->pc = 0x4E1270u;
            // 0x4e1270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1274u;
        goto label_4e1274;
    }
    ctx->pc = 0x4E126Cu;
    {
        const bool branch_taken_0x4e126c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e126c) {
            ctx->pc = 0x4E1270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E126Cu;
            // 0x4e1270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1288u;
            goto label_4e1288;
        }
    }
    ctx->pc = 0x4E1274u;
label_4e1274:
    // 0x4e1274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e1274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1278:
    // 0x4e1278: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e1278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e127c:
    // 0x4e127c: 0x320f809  jalr        $t9
label_4e1280:
    if (ctx->pc == 0x4E1280u) {
        ctx->pc = 0x4E1280u;
            // 0x4e1280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E1284u;
        goto label_4e1284;
    }
    ctx->pc = 0x4E127Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1284u);
        ctx->pc = 0x4E1280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E127Cu;
            // 0x4e1280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1284u; }
            if (ctx->pc != 0x4E1284u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1284u;
label_4e1284:
    // 0x4e1284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e1288:
    // 0x4e1288: 0xc075bf8  jal         func_1D6FE0
label_4e128c:
    if (ctx->pc == 0x4E128Cu) {
        ctx->pc = 0x4E128Cu;
            // 0x4e128c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1290u;
        goto label_4e1290;
    }
    ctx->pc = 0x4E1288u;
    SET_GPR_U32(ctx, 31, 0x4E1290u);
    ctx->pc = 0x4E128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1288u;
            // 0x4e128c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1290u; }
        if (ctx->pc != 0x4E1290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1290u; }
        if (ctx->pc != 0x4E1290u) { return; }
    }
    ctx->pc = 0x4E1290u;
label_4e1290:
    // 0x4e1290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e1290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e1294:
    // 0x4e1294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e1294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e1298:
    // 0x4e1298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e129c:
    if (ctx->pc == 0x4E129Cu) {
        ctx->pc = 0x4E129Cu;
            // 0x4e129c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E12A0u;
        goto label_4e12a0;
    }
    ctx->pc = 0x4E1298u;
    {
        const bool branch_taken_0x4e1298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e1298) {
            ctx->pc = 0x4E129Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1298u;
            // 0x4e129c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E12ACu;
            goto label_4e12ac;
        }
    }
    ctx->pc = 0x4E12A0u;
label_4e12a0:
    // 0x4e12a0: 0xc0400a8  jal         func_1002A0
label_4e12a4:
    if (ctx->pc == 0x4E12A4u) {
        ctx->pc = 0x4E12A4u;
            // 0x4e12a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E12A8u;
        goto label_4e12a8;
    }
    ctx->pc = 0x4E12A0u;
    SET_GPR_U32(ctx, 31, 0x4E12A8u);
    ctx->pc = 0x4E12A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E12A0u;
            // 0x4e12a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E12A8u; }
        if (ctx->pc != 0x4E12A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E12A8u; }
        if (ctx->pc != 0x4E12A8u) { return; }
    }
    ctx->pc = 0x4E12A8u;
label_4e12a8:
    // 0x4e12a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e12a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e12ac:
    // 0x4e12ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e12acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e12b0:
    // 0x4e12b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e12b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e12b4:
    // 0x4e12b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e12b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e12b8:
    // 0x4e12b8: 0x3e00008  jr          $ra
label_4e12bc:
    if (ctx->pc == 0x4E12BCu) {
        ctx->pc = 0x4E12BCu;
            // 0x4e12bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E12C0u;
        goto label_4e12c0;
    }
    ctx->pc = 0x4E12B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E12BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E12B8u;
            // 0x4e12bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E12C0u;
label_4e12c0:
    // 0x4e12c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e12c4:
    // 0x4e12c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e12c8:
    // 0x4e12c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e12cc:
    // 0x4e12cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e12d0:
    // 0x4e12d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e12d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e12d4:
    // 0x4e12d4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4e12d8:
    if (ctx->pc == 0x4E12D8u) {
        ctx->pc = 0x4E12D8u;
            // 0x4e12d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E12DCu;
        goto label_4e12dc;
    }
    ctx->pc = 0x4E12D4u;
    {
        const bool branch_taken_0x4e12d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E12D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E12D4u;
            // 0x4e12d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e12d4) {
            ctx->pc = 0x4E1328u;
            goto label_4e1328;
        }
    }
    ctx->pc = 0x4E12DCu;
label_4e12dc:
    // 0x4e12dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e12e0:
    // 0x4e12e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e12e4:
    // 0x4e12e4: 0x246335f0  addiu       $v1, $v1, 0x35F0
    ctx->pc = 0x4e12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13808));
label_4e12e8:
    // 0x4e12e8: 0x24423630  addiu       $v0, $v0, 0x3630
    ctx->pc = 0x4e12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
label_4e12ec:
    // 0x4e12ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e12f0:
    // 0x4e12f0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4e12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4e12f4:
    // 0x4e12f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e12f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e12f8:
    // 0x4e12f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e12f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e12fc:
    // 0x4e12fc: 0x320f809  jalr        $t9
label_4e1300:
    if (ctx->pc == 0x4E1300u) {
        ctx->pc = 0x4E1304u;
        goto label_4e1304;
    }
    ctx->pc = 0x4E12FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1304u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1304u; }
            if (ctx->pc != 0x4E1304u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1304u;
label_4e1304:
    // 0x4e1304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e1304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e1308:
    // 0x4e1308: 0xc12e684  jal         func_4B9A10
label_4e130c:
    if (ctx->pc == 0x4E130Cu) {
        ctx->pc = 0x4E130Cu;
            // 0x4e130c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1310u;
        goto label_4e1310;
    }
    ctx->pc = 0x4E1308u;
    SET_GPR_U32(ctx, 31, 0x4E1310u);
    ctx->pc = 0x4E130Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1308u;
            // 0x4e130c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1310u; }
        if (ctx->pc != 0x4E1310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1310u; }
        if (ctx->pc != 0x4E1310u) { return; }
    }
    ctx->pc = 0x4E1310u;
label_4e1310:
    // 0x4e1310: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e1310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e1314:
    // 0x4e1314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e1314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e1318:
    // 0x4e1318: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e131c:
    if (ctx->pc == 0x4E131Cu) {
        ctx->pc = 0x4E131Cu;
            // 0x4e131c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1320u;
        goto label_4e1320;
    }
    ctx->pc = 0x4E1318u;
    {
        const bool branch_taken_0x4e1318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e1318) {
            ctx->pc = 0x4E131Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1318u;
            // 0x4e131c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E132Cu;
            goto label_4e132c;
        }
    }
    ctx->pc = 0x4E1320u;
label_4e1320:
    // 0x4e1320: 0xc0400a8  jal         func_1002A0
label_4e1324:
    if (ctx->pc == 0x4E1324u) {
        ctx->pc = 0x4E1324u;
            // 0x4e1324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1328u;
        goto label_4e1328;
    }
    ctx->pc = 0x4E1320u;
    SET_GPR_U32(ctx, 31, 0x4E1328u);
    ctx->pc = 0x4E1324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1320u;
            // 0x4e1324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1328u; }
        if (ctx->pc != 0x4E1328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1328u; }
        if (ctx->pc != 0x4E1328u) { return; }
    }
    ctx->pc = 0x4E1328u;
label_4e1328:
    // 0x4e1328: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e1328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e132c:
    // 0x4e132c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1330:
    // 0x4e1330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1334:
    // 0x4e1334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1338:
    // 0x4e1338: 0x3e00008  jr          $ra
label_4e133c:
    if (ctx->pc == 0x4E133Cu) {
        ctx->pc = 0x4E133Cu;
            // 0x4e133c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E1340u;
        goto label_4e1340;
    }
    ctx->pc = 0x4E1338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1338u;
            // 0x4e133c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1340u;
label_4e1340:
    // 0x4e1340: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4e1340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4e1344:
    // 0x4e1344: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e1348:
    // 0x4e1348: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e1348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e134c:
    // 0x4e134c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e1350:
    // 0x4e1350: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e1350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e1354:
    // 0x4e1354: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e1354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e1358:
    // 0x4e1358: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e135c:
    // 0x4e135c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e1360:
    // 0x4e1360: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e1360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e1364:
    // 0x4e1364: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e1364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e1368:
    // 0x4e1368: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e136c:
    // 0x4e136c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e1370:
    // 0x4e1370: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e1370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e1374:
    // 0x4e1374: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e1374u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e1378:
    // 0x4e1378: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4e137c:
    if (ctx->pc == 0x4E137Cu) {
        ctx->pc = 0x4E137Cu;
            // 0x4e137c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1380u;
        goto label_4e1380;
    }
    ctx->pc = 0x4E1378u;
    {
        const bool branch_taken_0x4e1378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E137Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1378u;
            // 0x4e137c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1378) {
            ctx->pc = 0x4E13DCu;
            goto label_4e13dc;
        }
    }
    ctx->pc = 0x4E1380u;
label_4e1380:
    // 0x4e1380: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e1380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e1384:
    // 0x4e1384: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4e1388:
    if (ctx->pc == 0x4E1388u) {
        ctx->pc = 0x4E1388u;
            // 0x4e1388: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E138Cu;
        goto label_4e138c;
    }
    ctx->pc = 0x4E1384u;
    {
        const bool branch_taken_0x4e1384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e1384) {
            ctx->pc = 0x4E1388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1384u;
            // 0x4e1388: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E13C8u;
            goto label_4e13c8;
        }
    }
    ctx->pc = 0x4E138Cu;
label_4e138c:
    // 0x4e138c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e1390:
    // 0x4e1390: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4e1394:
    if (ctx->pc == 0x4E1394u) {
        ctx->pc = 0x4E1398u;
        goto label_4e1398;
    }
    ctx->pc = 0x4E1390u;
    {
        const bool branch_taken_0x4e1390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e1390) {
            ctx->pc = 0x4E13A0u;
            goto label_4e13a0;
        }
    }
    ctx->pc = 0x4E1398u;
label_4e1398:
    // 0x4e1398: 0x1000009f  b           . + 4 + (0x9F << 2)
label_4e139c:
    if (ctx->pc == 0x4E139Cu) {
        ctx->pc = 0x4E139Cu;
            // 0x4e139c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4E13A0u;
        goto label_4e13a0;
    }
    ctx->pc = 0x4E1398u;
    {
        const bool branch_taken_0x4e1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1398u;
            // 0x4e139c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1398) {
            ctx->pc = 0x4E1618u;
            goto label_4e1618;
        }
    }
    ctx->pc = 0x4E13A0u;
label_4e13a0:
    // 0x4e13a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e13a4:
    // 0x4e13a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e13a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e13a8:
    // 0x4e13a8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e13ac:
    // 0x4e13ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4e13acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4e13b0:
    // 0x4e13b0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4e13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4e13b4:
    // 0x4e13b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4e13b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4e13b8:
    // 0x4e13b8: 0x320f809  jalr        $t9
label_4e13bc:
    if (ctx->pc == 0x4E13BCu) {
        ctx->pc = 0x4E13BCu;
            // 0x4e13bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4E13C0u;
        goto label_4e13c0;
    }
    ctx->pc = 0x4E13B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E13C0u);
        ctx->pc = 0x4E13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E13B8u;
            // 0x4e13bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E13C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E13C0u; }
            if (ctx->pc != 0x4E13C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4E13C0u;
label_4e13c0:
    // 0x4e13c0: 0x10000094  b           . + 4 + (0x94 << 2)
label_4e13c4:
    if (ctx->pc == 0x4E13C4u) {
        ctx->pc = 0x4E13C8u;
        goto label_4e13c8;
    }
    ctx->pc = 0x4E13C0u;
    {
        const bool branch_taken_0x4e13c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e13c0) {
            ctx->pc = 0x4E1614u;
            goto label_4e1614;
        }
    }
    ctx->pc = 0x4E13C8u;
label_4e13c8:
    // 0x4e13c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e13c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e13cc:
    // 0x4e13cc: 0x320f809  jalr        $t9
label_4e13d0:
    if (ctx->pc == 0x4E13D0u) {
        ctx->pc = 0x4E13D4u;
        goto label_4e13d4;
    }
    ctx->pc = 0x4E13CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E13D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E13D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E13D4u; }
            if (ctx->pc != 0x4E13D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E13D4u;
label_4e13d4:
    // 0x4e13d4: 0x1000008f  b           . + 4 + (0x8F << 2)
label_4e13d8:
    if (ctx->pc == 0x4E13D8u) {
        ctx->pc = 0x4E13DCu;
        goto label_4e13dc;
    }
    ctx->pc = 0x4E13D4u;
    {
        const bool branch_taken_0x4e13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e13d4) {
            ctx->pc = 0x4E1614u;
            goto label_4e1614;
        }
    }
    ctx->pc = 0x4E13DCu;
label_4e13dc:
    // 0x4e13dc: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4e13dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4e13e0:
    // 0x4e13e0: 0x12e0008c  beqz        $s7, . + 4 + (0x8C << 2)
label_4e13e4:
    if (ctx->pc == 0x4E13E4u) {
        ctx->pc = 0x4E13E8u;
        goto label_4e13e8;
    }
    ctx->pc = 0x4E13E0u;
    {
        const bool branch_taken_0x4e13e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e13e0) {
            ctx->pc = 0x4E1614u;
            goto label_4e1614;
        }
    }
    ctx->pc = 0x4E13E8u;
label_4e13e8:
    // 0x4e13e8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e13ec:
    // 0x4e13ec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e13f0:
    // 0x4e13f0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e13f4:
    // 0x4e13f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e13f8:
    // 0x4e13f8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4e13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e13fc:
    // 0x4e13fc: 0x26d00084  addiu       $s0, $s6, 0x84
    ctx->pc = 0x4e13fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4e1400:
    // 0x4e1400: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e1400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1404:
    // 0x4e1404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e1404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1408:
    // 0x4e1408: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4e1408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e140c:
    // 0x4e140c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1410:
    // 0x4e1410: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4e1410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e1414:
    // 0x4e1414: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e1418:
    // 0x4e1418: 0xc4548120  lwc1        $f20, -0x7EE0($v0)
    ctx->pc = 0x4e1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e141c:
    // 0x4e141c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4e141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e1420:
    // 0x4e1420: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4e1424:
    // 0x4e1424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1428:
    // 0x4e1428: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4e1428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4e142c:
    // 0x4e142c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4e142cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4e1430:
    // 0x4e1430: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4e1430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4e1434:
    // 0x4e1434: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4e1434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4e1438:
    // 0x4e1438: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4e1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4e143c:
    // 0x4e143c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4e143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4e1440:
    // 0x4e1440: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4e1440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4e1444:
    // 0x4e1444: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4e1448:
    // 0x4e1448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e144c:
    // 0x4e144c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4e144cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1450:
    // 0x4e1450: 0xc0d639c  jal         func_358E70
label_4e1454:
    if (ctx->pc == 0x4E1454u) {
        ctx->pc = 0x4E1454u;
            // 0x4e1454: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x4E1458u;
        goto label_4e1458;
    }
    ctx->pc = 0x4E1450u;
    SET_GPR_U32(ctx, 31, 0x4E1458u);
    ctx->pc = 0x4E1454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1450u;
            // 0x4e1454: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1458u; }
        if (ctx->pc != 0x4E1458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1458u; }
        if (ctx->pc != 0x4E1458u) { return; }
    }
    ctx->pc = 0x4E1458u;
label_4e1458:
    // 0x4e1458: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_4e145c:
    if (ctx->pc == 0x4E145Cu) {
        ctx->pc = 0x4E1460u;
        goto label_4e1460;
    }
    ctx->pc = 0x4E1458u;
    {
        const bool branch_taken_0x4e1458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1458) {
            ctx->pc = 0x4E15C0u;
            goto label_4e15c0;
        }
    }
    ctx->pc = 0x4E1460u;
label_4e1460:
    // 0x4e1460: 0xc0d1c14  jal         func_347050
label_4e1464:
    if (ctx->pc == 0x4E1464u) {
        ctx->pc = 0x4E1464u;
            // 0x4e1464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1468u;
        goto label_4e1468;
    }
    ctx->pc = 0x4E1460u;
    SET_GPR_U32(ctx, 31, 0x4E1468u);
    ctx->pc = 0x4E1464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1460u;
            // 0x4e1464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1468u; }
        if (ctx->pc != 0x4E1468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1468u; }
        if (ctx->pc != 0x4E1468u) { return; }
    }
    ctx->pc = 0x4E1468u;
label_4e1468:
    // 0x4e1468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e1468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e146c:
    // 0x4e146c: 0xc04f278  jal         func_13C9E0
label_4e1470:
    if (ctx->pc == 0x4E1470u) {
        ctx->pc = 0x4E1470u;
            // 0x4e1470: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E1474u;
        goto label_4e1474;
    }
    ctx->pc = 0x4E146Cu;
    SET_GPR_U32(ctx, 31, 0x4E1474u);
    ctx->pc = 0x4E1470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E146Cu;
            // 0x4e1470: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1474u; }
        if (ctx->pc != 0x4E1474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1474u; }
        if (ctx->pc != 0x4E1474u) { return; }
    }
    ctx->pc = 0x4E1474u;
label_4e1474:
    // 0x4e1474: 0xc0d1c10  jal         func_347040
label_4e1478:
    if (ctx->pc == 0x4E1478u) {
        ctx->pc = 0x4E1478u;
            // 0x4e1478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E147Cu;
        goto label_4e147c;
    }
    ctx->pc = 0x4E1474u;
    SET_GPR_U32(ctx, 31, 0x4E147Cu);
    ctx->pc = 0x4E1478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1474u;
            // 0x4e1478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E147Cu; }
        if (ctx->pc != 0x4E147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E147Cu; }
        if (ctx->pc != 0x4E147Cu) { return; }
    }
    ctx->pc = 0x4E147Cu;
label_4e147c:
    // 0x4e147c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1480:
    // 0x4e1480: 0xc04ce80  jal         func_133A00
label_4e1484:
    if (ctx->pc == 0x4E1484u) {
        ctx->pc = 0x4E1484u;
            // 0x4e1484: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E1488u;
        goto label_4e1488;
    }
    ctx->pc = 0x4E1480u;
    SET_GPR_U32(ctx, 31, 0x4E1488u);
    ctx->pc = 0x4E1484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1480u;
            // 0x4e1484: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1488u; }
        if (ctx->pc != 0x4E1488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1488u; }
        if (ctx->pc != 0x4E1488u) { return; }
    }
    ctx->pc = 0x4E1488u;
label_4e1488:
    // 0x4e1488: 0xc0775b8  jal         func_1DD6E0
label_4e148c:
    if (ctx->pc == 0x4E148Cu) {
        ctx->pc = 0x4E1490u;
        goto label_4e1490;
    }
    ctx->pc = 0x4E1488u;
    SET_GPR_U32(ctx, 31, 0x4E1490u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1490u; }
        if (ctx->pc != 0x4E1490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1490u; }
        if (ctx->pc != 0x4E1490u) { return; }
    }
    ctx->pc = 0x4E1490u;
label_4e1490:
    // 0x4e1490: 0xc077314  jal         func_1DCC50
label_4e1494:
    if (ctx->pc == 0x4E1494u) {
        ctx->pc = 0x4E1494u;
            // 0x4e1494: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E1498u;
        goto label_4e1498;
    }
    ctx->pc = 0x4E1490u;
    SET_GPR_U32(ctx, 31, 0x4E1498u);
    ctx->pc = 0x4E1494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1490u;
            // 0x4e1494: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1498u; }
        if (ctx->pc != 0x4E1498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1498u; }
        if (ctx->pc != 0x4E1498u) { return; }
    }
    ctx->pc = 0x4E1498u;
label_4e1498:
    // 0x4e1498: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e1498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e149c:
    // 0x4e149c: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_4e14a0:
    if (ctx->pc == 0x4E14A0u) {
        ctx->pc = 0x4E14A4u;
        goto label_4e14a4;
    }
    ctx->pc = 0x4E149Cu;
    {
        const bool branch_taken_0x4e149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e149c) {
            ctx->pc = 0x4E1508u;
            goto label_4e1508;
        }
    }
    ctx->pc = 0x4E14A4u;
label_4e14a4:
    // 0x4e14a4: 0xc0d4108  jal         func_350420
label_4e14a8:
    if (ctx->pc == 0x4E14A8u) {
        ctx->pc = 0x4E14ACu;
        goto label_4e14ac;
    }
    ctx->pc = 0x4E14A4u;
    SET_GPR_U32(ctx, 31, 0x4E14ACu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14ACu; }
        if (ctx->pc != 0x4E14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14ACu; }
        if (ctx->pc != 0x4E14ACu) { return; }
    }
    ctx->pc = 0x4E14ACu;
label_4e14ac:
    // 0x4e14ac: 0xc0b36b4  jal         func_2CDAD0
label_4e14b0:
    if (ctx->pc == 0x4E14B0u) {
        ctx->pc = 0x4E14B0u;
            // 0x4e14b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E14B4u;
        goto label_4e14b4;
    }
    ctx->pc = 0x4E14ACu;
    SET_GPR_U32(ctx, 31, 0x4E14B4u);
    ctx->pc = 0x4E14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E14ACu;
            // 0x4e14b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14B4u; }
        if (ctx->pc != 0x4E14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14B4u; }
        if (ctx->pc != 0x4E14B4u) { return; }
    }
    ctx->pc = 0x4E14B4u;
label_4e14b4:
    // 0x4e14b4: 0xc0b9c64  jal         func_2E7190
label_4e14b8:
    if (ctx->pc == 0x4E14B8u) {
        ctx->pc = 0x4E14B8u;
            // 0x4e14b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E14BCu;
        goto label_4e14bc;
    }
    ctx->pc = 0x4E14B4u;
    SET_GPR_U32(ctx, 31, 0x4E14BCu);
    ctx->pc = 0x4E14B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E14B4u;
            // 0x4e14b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14BCu; }
        if (ctx->pc != 0x4E14BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14BCu; }
        if (ctx->pc != 0x4E14BCu) { return; }
    }
    ctx->pc = 0x4E14BCu;
label_4e14bc:
    // 0x4e14bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4e14bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e14c0:
    // 0x4e14c0: 0xc0d4104  jal         func_350410
label_4e14c4:
    if (ctx->pc == 0x4E14C4u) {
        ctx->pc = 0x4E14C4u;
            // 0x4e14c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E14C8u;
        goto label_4e14c8;
    }
    ctx->pc = 0x4E14C0u;
    SET_GPR_U32(ctx, 31, 0x4E14C8u);
    ctx->pc = 0x4E14C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E14C0u;
            // 0x4e14c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14C8u; }
        if (ctx->pc != 0x4E14C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14C8u; }
        if (ctx->pc != 0x4E14C8u) { return; }
    }
    ctx->pc = 0x4E14C8u;
label_4e14c8:
    // 0x4e14c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4e14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4e14cc:
    // 0x4e14cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e14d0:
    // 0x4e14d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e14d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e14d4:
    // 0x4e14d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e14d8:
    // 0x4e14d8: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x4e14d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_4e14dc:
    // 0x4e14dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e14dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e14e0:
    // 0x4e14e0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4e14e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4e14e4:
    // 0x4e14e4: 0x0  nop
    ctx->pc = 0x4e14e4u;
    // NOP
label_4e14e8:
    // 0x4e14e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e14e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e14ec:
    // 0x4e14ec: 0xc0d40ac  jal         func_3502B0
label_4e14f0:
    if (ctx->pc == 0x4E14F0u) {
        ctx->pc = 0x4E14F0u;
            // 0x4e14f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E14F4u;
        goto label_4e14f4;
    }
    ctx->pc = 0x4E14ECu;
    SET_GPR_U32(ctx, 31, 0x4E14F4u);
    ctx->pc = 0x4E14F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E14ECu;
            // 0x4e14f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14F4u; }
        if (ctx->pc != 0x4E14F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E14F4u; }
        if (ctx->pc != 0x4E14F4u) { return; }
    }
    ctx->pc = 0x4E14F4u;
label_4e14f4:
    // 0x4e14f4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e14f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e14f8:
    // 0x4e14f8: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_4e14fc:
    if (ctx->pc == 0x4E14FCu) {
        ctx->pc = 0x4E14FCu;
            // 0x4e14fc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E1500u;
        goto label_4e1500;
    }
    ctx->pc = 0x4E14F8u;
    {
        const bool branch_taken_0x4e14f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E14FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E14F8u;
            // 0x4e14fc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e14f8) {
            ctx->pc = 0x4E1558u;
            goto label_4e1558;
        }
    }
    ctx->pc = 0x4E1500u;
label_4e1500:
    // 0x4e1500: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4e1504:
    if (ctx->pc == 0x4E1504u) {
        ctx->pc = 0x4E1508u;
        goto label_4e1508;
    }
    ctx->pc = 0x4E1500u;
    {
        const bool branch_taken_0x4e1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1500) {
            ctx->pc = 0x4E15C0u;
            goto label_4e15c0;
        }
    }
    ctx->pc = 0x4E1508u;
label_4e1508:
    // 0x4e1508: 0xc0d4108  jal         func_350420
label_4e150c:
    if (ctx->pc == 0x4E150Cu) {
        ctx->pc = 0x4E1510u;
        goto label_4e1510;
    }
    ctx->pc = 0x4E1508u;
    SET_GPR_U32(ctx, 31, 0x4E1510u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1510u; }
        if (ctx->pc != 0x4E1510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1510u; }
        if (ctx->pc != 0x4E1510u) { return; }
    }
    ctx->pc = 0x4E1510u;
label_4e1510:
    // 0x4e1510: 0xc0b36b4  jal         func_2CDAD0
label_4e1514:
    if (ctx->pc == 0x4E1514u) {
        ctx->pc = 0x4E1514u;
            // 0x4e1514: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1518u;
        goto label_4e1518;
    }
    ctx->pc = 0x4E1510u;
    SET_GPR_U32(ctx, 31, 0x4E1518u);
    ctx->pc = 0x4E1514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1510u;
            // 0x4e1514: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1518u; }
        if (ctx->pc != 0x4E1518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1518u; }
        if (ctx->pc != 0x4E1518u) { return; }
    }
    ctx->pc = 0x4E1518u;
label_4e1518:
    // 0x4e1518: 0xc0b9c64  jal         func_2E7190
label_4e151c:
    if (ctx->pc == 0x4E151Cu) {
        ctx->pc = 0x4E151Cu;
            // 0x4e151c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1520u;
        goto label_4e1520;
    }
    ctx->pc = 0x4E1518u;
    SET_GPR_U32(ctx, 31, 0x4E1520u);
    ctx->pc = 0x4E151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1518u;
            // 0x4e151c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1520u; }
        if (ctx->pc != 0x4E1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1520u; }
        if (ctx->pc != 0x4E1520u) { return; }
    }
    ctx->pc = 0x4E1520u;
label_4e1520:
    // 0x4e1520: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4e1520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1524:
    // 0x4e1524: 0xc0d4104  jal         func_350410
label_4e1528:
    if (ctx->pc == 0x4E1528u) {
        ctx->pc = 0x4E1528u;
            // 0x4e1528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E152Cu;
        goto label_4e152c;
    }
    ctx->pc = 0x4E1524u;
    SET_GPR_U32(ctx, 31, 0x4E152Cu);
    ctx->pc = 0x4E1528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1524u;
            // 0x4e1528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E152Cu; }
        if (ctx->pc != 0x4E152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E152Cu; }
        if (ctx->pc != 0x4E152Cu) { return; }
    }
    ctx->pc = 0x4E152Cu;
label_4e152c:
    // 0x4e152c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e152cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e1530:
    // 0x4e1530: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e1534:
    // 0x4e1534: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e1534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e1538:
    // 0x4e1538: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4e1538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4e153c:
    // 0x4e153c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e153cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1540:
    // 0x4e1540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e1540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1544:
    // 0x4e1544: 0xc0d40ac  jal         func_3502B0
label_4e1548:
    if (ctx->pc == 0x4E1548u) {
        ctx->pc = 0x4E1548u;
            // 0x4e1548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4E154Cu;
        goto label_4e154c;
    }
    ctx->pc = 0x4E1544u;
    SET_GPR_U32(ctx, 31, 0x4E154Cu);
    ctx->pc = 0x4E1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1544u;
            // 0x4e1548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E154Cu; }
        if (ctx->pc != 0x4E154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E154Cu; }
        if (ctx->pc != 0x4E154Cu) { return; }
    }
    ctx->pc = 0x4E154Cu;
label_4e154c:
    // 0x4e154c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e154cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e1550:
    // 0x4e1550: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4e1554:
    if (ctx->pc == 0x4E1554u) {
        ctx->pc = 0x4E1554u;
            // 0x4e1554: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E1558u;
        goto label_4e1558;
    }
    ctx->pc = 0x4E1550u;
    {
        const bool branch_taken_0x4e1550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1550u;
            // 0x4e1554: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1550) {
            ctx->pc = 0x4E15C0u;
            goto label_4e15c0;
        }
    }
    ctx->pc = 0x4E1558u;
label_4e1558:
    // 0x4e1558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e1558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e155c:
    // 0x4e155c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4e155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4e1560:
    // 0x4e1560: 0xc138594  jal         func_4E1650
label_4e1564:
    if (ctx->pc == 0x4E1564u) {
        ctx->pc = 0x4E1564u;
            // 0x4e1564: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4E1568u;
        goto label_4e1568;
    }
    ctx->pc = 0x4E1560u;
    SET_GPR_U32(ctx, 31, 0x4E1568u);
    ctx->pc = 0x4E1564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1560u;
            // 0x4e1564: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1650u;
    if (runtime->hasFunction(0x4E1650u)) {
        auto targetFn = runtime->lookupFunction(0x4E1650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1568u; }
        if (ctx->pc != 0x4E1568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E1650_0x4e1650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1568u; }
        if (ctx->pc != 0x4E1568u) { return; }
    }
    ctx->pc = 0x4E1568u;
label_4e1568:
    // 0x4e1568: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4e1568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e156c:
    // 0x4e156c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4e156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e1570:
    // 0x4e1570: 0xc04cd60  jal         func_133580
label_4e1574:
    if (ctx->pc == 0x4E1574u) {
        ctx->pc = 0x4E1574u;
            // 0x4e1574: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E1578u;
        goto label_4e1578;
    }
    ctx->pc = 0x4E1570u;
    SET_GPR_U32(ctx, 31, 0x4E1578u);
    ctx->pc = 0x4E1574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1570u;
            // 0x4e1574: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1578u; }
        if (ctx->pc != 0x4E1578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1578u; }
        if (ctx->pc != 0x4E1578u) { return; }
    }
    ctx->pc = 0x4E1578u;
label_4e1578:
    // 0x4e1578: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e1578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e157c:
    // 0x4e157c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4e157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e1580:
    // 0x4e1580: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e1580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e1584:
    // 0x4e1584: 0xc04e4a4  jal         func_139290
label_4e1588:
    if (ctx->pc == 0x4E1588u) {
        ctx->pc = 0x4E1588u;
            // 0x4e1588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E158Cu;
        goto label_4e158c;
    }
    ctx->pc = 0x4E1584u;
    SET_GPR_U32(ctx, 31, 0x4E158Cu);
    ctx->pc = 0x4E1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1584u;
            // 0x4e1588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E158Cu; }
        if (ctx->pc != 0x4E158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E158Cu; }
        if (ctx->pc != 0x4E158Cu) { return; }
    }
    ctx->pc = 0x4E158Cu;
label_4e158c:
    // 0x4e158c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4e158cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e1590:
    // 0x4e1590: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e1590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e1594:
    // 0x4e1594: 0x320f809  jalr        $t9
label_4e1598:
    if (ctx->pc == 0x4E1598u) {
        ctx->pc = 0x4E1598u;
            // 0x4e1598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E159Cu;
        goto label_4e159c;
    }
    ctx->pc = 0x4E1594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E159Cu);
        ctx->pc = 0x4E1598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1594u;
            // 0x4e1598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E159Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E159Cu; }
            if (ctx->pc != 0x4E159Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E159Cu;
label_4e159c:
    // 0x4e159c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4e159cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4e15a0:
    // 0x4e15a0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e15a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e15a4:
    // 0x4e15a4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4e15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e15a8:
    // 0x4e15a8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4e15a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e15ac:
    // 0x4e15ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e15acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e15b0:
    // 0x4e15b0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4e15b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4e15b4:
    // 0x4e15b4: 0xc04cfcc  jal         func_133F30
label_4e15b8:
    if (ctx->pc == 0x4E15B8u) {
        ctx->pc = 0x4E15B8u;
            // 0x4e15b8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E15BCu;
        goto label_4e15bc;
    }
    ctx->pc = 0x4E15B4u;
    SET_GPR_U32(ctx, 31, 0x4E15BCu);
    ctx->pc = 0x4E15B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E15B4u;
            // 0x4e15b8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E15BCu; }
        if (ctx->pc != 0x4E15BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E15BCu; }
        if (ctx->pc != 0x4E15BCu) { return; }
    }
    ctx->pc = 0x4E15BCu;
label_4e15bc:
    // 0x4e15bc: 0x0  nop
    ctx->pc = 0x4e15bcu;
    // NOP
label_4e15c0:
    // 0x4e15c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e15c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e15c4:
    // 0x4e15c4: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x4e15c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4e15c8:
    // 0x4e15c8: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_4e15cc:
    if (ctx->pc == 0x4E15CCu) {
        ctx->pc = 0x4E15CCu;
            // 0x4e15cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E15D0u;
        goto label_4e15d0;
    }
    ctx->pc = 0x4E15C8u;
    {
        const bool branch_taken_0x4e15c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E15CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E15C8u;
            // 0x4e15cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e15c8) {
            ctx->pc = 0x4E1434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e1434;
        }
    }
    ctx->pc = 0x4E15D0u;
label_4e15d0:
    // 0x4e15d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e15d4:
    // 0x4e15d4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4e15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e15d8:
    // 0x4e15d8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4e15dc:
    if (ctx->pc == 0x4E15DCu) {
        ctx->pc = 0x4E15E0u;
        goto label_4e15e0;
    }
    ctx->pc = 0x4E15D8u;
    {
        const bool branch_taken_0x4e15d8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4e15d8) {
            ctx->pc = 0x4E1614u;
            goto label_4e1614;
        }
    }
    ctx->pc = 0x4E15E0u;
label_4e15e0:
    // 0x4e15e0: 0xc04e738  jal         func_139CE0
label_4e15e4:
    if (ctx->pc == 0x4E15E4u) {
        ctx->pc = 0x4E15E4u;
            // 0x4e15e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x4E15E8u;
        goto label_4e15e8;
    }
    ctx->pc = 0x4E15E0u;
    SET_GPR_U32(ctx, 31, 0x4E15E8u);
    ctx->pc = 0x4E15E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E15E0u;
            // 0x4e15e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E15E8u; }
        if (ctx->pc != 0x4E15E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E15E8u; }
        if (ctx->pc != 0x4E15E8u) { return; }
    }
    ctx->pc = 0x4E15E8u;
label_4e15e8:
    // 0x4e15e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e15ec:
    // 0x4e15ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e15f0:
    // 0x4e15f0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4e15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4e15f4:
    // 0x4e15f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e15f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e15f8:
    // 0x4e15f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e15f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e15fc:
    // 0x4e15fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1600:
    // 0x4e1600: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e1600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e1604:
    // 0x4e1604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1608:
    // 0x4e1608: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4e1608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e160c:
    // 0x4e160c: 0xc055d28  jal         func_1574A0
label_4e1610:
    if (ctx->pc == 0x4E1610u) {
        ctx->pc = 0x4E1610u;
            // 0x4e1610: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1614u;
        goto label_4e1614;
    }
    ctx->pc = 0x4E160Cu;
    SET_GPR_U32(ctx, 31, 0x4E1614u);
    ctx->pc = 0x4E1610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E160Cu;
            // 0x4e1610: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1614u; }
        if (ctx->pc != 0x4E1614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1614u; }
        if (ctx->pc != 0x4E1614u) { return; }
    }
    ctx->pc = 0x4E1614u;
label_4e1614:
    // 0x4e1614: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e1614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e1618:
    // 0x4e1618: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e161c:
    // 0x4e161c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e161cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e1620:
    // 0x4e1620: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e1620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e1624:
    // 0x4e1624: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e1624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e1628:
    // 0x4e1628: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e1628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e162c:
    // 0x4e162c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e162cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e1630:
    // 0x4e1630: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e1630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1634:
    // 0x4e1634: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e1634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1638:
    // 0x4e1638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e1638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e163c:
    // 0x4e163c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e163cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1640:
    // 0x4e1640: 0x3e00008  jr          $ra
label_4e1644:
    if (ctx->pc == 0x4E1644u) {
        ctx->pc = 0x4E1644u;
            // 0x4e1644: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4E1648u;
        goto label_4e1648;
    }
    ctx->pc = 0x4E1640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1640u;
            // 0x4e1644: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1648u;
label_4e1648:
    // 0x4e1648: 0x0  nop
    ctx->pc = 0x4e1648u;
    // NOP
label_4e164c:
    // 0x4e164c: 0x0  nop
    ctx->pc = 0x4e164cu;
    // NOP
}
