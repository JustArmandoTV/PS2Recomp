#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1260
// Address: 0x4f1260 - 0x4f1760
void sub_004F1260_0x4f1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1260_0x4f1260");
#endif

    switch (ctx->pc) {
        case 0x4f1260u: goto label_4f1260;
        case 0x4f1264u: goto label_4f1264;
        case 0x4f1268u: goto label_4f1268;
        case 0x4f126cu: goto label_4f126c;
        case 0x4f1270u: goto label_4f1270;
        case 0x4f1274u: goto label_4f1274;
        case 0x4f1278u: goto label_4f1278;
        case 0x4f127cu: goto label_4f127c;
        case 0x4f1280u: goto label_4f1280;
        case 0x4f1284u: goto label_4f1284;
        case 0x4f1288u: goto label_4f1288;
        case 0x4f128cu: goto label_4f128c;
        case 0x4f1290u: goto label_4f1290;
        case 0x4f1294u: goto label_4f1294;
        case 0x4f1298u: goto label_4f1298;
        case 0x4f129cu: goto label_4f129c;
        case 0x4f12a0u: goto label_4f12a0;
        case 0x4f12a4u: goto label_4f12a4;
        case 0x4f12a8u: goto label_4f12a8;
        case 0x4f12acu: goto label_4f12ac;
        case 0x4f12b0u: goto label_4f12b0;
        case 0x4f12b4u: goto label_4f12b4;
        case 0x4f12b8u: goto label_4f12b8;
        case 0x4f12bcu: goto label_4f12bc;
        case 0x4f12c0u: goto label_4f12c0;
        case 0x4f12c4u: goto label_4f12c4;
        case 0x4f12c8u: goto label_4f12c8;
        case 0x4f12ccu: goto label_4f12cc;
        case 0x4f12d0u: goto label_4f12d0;
        case 0x4f12d4u: goto label_4f12d4;
        case 0x4f12d8u: goto label_4f12d8;
        case 0x4f12dcu: goto label_4f12dc;
        case 0x4f12e0u: goto label_4f12e0;
        case 0x4f12e4u: goto label_4f12e4;
        case 0x4f12e8u: goto label_4f12e8;
        case 0x4f12ecu: goto label_4f12ec;
        case 0x4f12f0u: goto label_4f12f0;
        case 0x4f12f4u: goto label_4f12f4;
        case 0x4f12f8u: goto label_4f12f8;
        case 0x4f12fcu: goto label_4f12fc;
        case 0x4f1300u: goto label_4f1300;
        case 0x4f1304u: goto label_4f1304;
        case 0x4f1308u: goto label_4f1308;
        case 0x4f130cu: goto label_4f130c;
        case 0x4f1310u: goto label_4f1310;
        case 0x4f1314u: goto label_4f1314;
        case 0x4f1318u: goto label_4f1318;
        case 0x4f131cu: goto label_4f131c;
        case 0x4f1320u: goto label_4f1320;
        case 0x4f1324u: goto label_4f1324;
        case 0x4f1328u: goto label_4f1328;
        case 0x4f132cu: goto label_4f132c;
        case 0x4f1330u: goto label_4f1330;
        case 0x4f1334u: goto label_4f1334;
        case 0x4f1338u: goto label_4f1338;
        case 0x4f133cu: goto label_4f133c;
        case 0x4f1340u: goto label_4f1340;
        case 0x4f1344u: goto label_4f1344;
        case 0x4f1348u: goto label_4f1348;
        case 0x4f134cu: goto label_4f134c;
        case 0x4f1350u: goto label_4f1350;
        case 0x4f1354u: goto label_4f1354;
        case 0x4f1358u: goto label_4f1358;
        case 0x4f135cu: goto label_4f135c;
        case 0x4f1360u: goto label_4f1360;
        case 0x4f1364u: goto label_4f1364;
        case 0x4f1368u: goto label_4f1368;
        case 0x4f136cu: goto label_4f136c;
        case 0x4f1370u: goto label_4f1370;
        case 0x4f1374u: goto label_4f1374;
        case 0x4f1378u: goto label_4f1378;
        case 0x4f137cu: goto label_4f137c;
        case 0x4f1380u: goto label_4f1380;
        case 0x4f1384u: goto label_4f1384;
        case 0x4f1388u: goto label_4f1388;
        case 0x4f138cu: goto label_4f138c;
        case 0x4f1390u: goto label_4f1390;
        case 0x4f1394u: goto label_4f1394;
        case 0x4f1398u: goto label_4f1398;
        case 0x4f139cu: goto label_4f139c;
        case 0x4f13a0u: goto label_4f13a0;
        case 0x4f13a4u: goto label_4f13a4;
        case 0x4f13a8u: goto label_4f13a8;
        case 0x4f13acu: goto label_4f13ac;
        case 0x4f13b0u: goto label_4f13b0;
        case 0x4f13b4u: goto label_4f13b4;
        case 0x4f13b8u: goto label_4f13b8;
        case 0x4f13bcu: goto label_4f13bc;
        case 0x4f13c0u: goto label_4f13c0;
        case 0x4f13c4u: goto label_4f13c4;
        case 0x4f13c8u: goto label_4f13c8;
        case 0x4f13ccu: goto label_4f13cc;
        case 0x4f13d0u: goto label_4f13d0;
        case 0x4f13d4u: goto label_4f13d4;
        case 0x4f13d8u: goto label_4f13d8;
        case 0x4f13dcu: goto label_4f13dc;
        case 0x4f13e0u: goto label_4f13e0;
        case 0x4f13e4u: goto label_4f13e4;
        case 0x4f13e8u: goto label_4f13e8;
        case 0x4f13ecu: goto label_4f13ec;
        case 0x4f13f0u: goto label_4f13f0;
        case 0x4f13f4u: goto label_4f13f4;
        case 0x4f13f8u: goto label_4f13f8;
        case 0x4f13fcu: goto label_4f13fc;
        case 0x4f1400u: goto label_4f1400;
        case 0x4f1404u: goto label_4f1404;
        case 0x4f1408u: goto label_4f1408;
        case 0x4f140cu: goto label_4f140c;
        case 0x4f1410u: goto label_4f1410;
        case 0x4f1414u: goto label_4f1414;
        case 0x4f1418u: goto label_4f1418;
        case 0x4f141cu: goto label_4f141c;
        case 0x4f1420u: goto label_4f1420;
        case 0x4f1424u: goto label_4f1424;
        case 0x4f1428u: goto label_4f1428;
        case 0x4f142cu: goto label_4f142c;
        case 0x4f1430u: goto label_4f1430;
        case 0x4f1434u: goto label_4f1434;
        case 0x4f1438u: goto label_4f1438;
        case 0x4f143cu: goto label_4f143c;
        case 0x4f1440u: goto label_4f1440;
        case 0x4f1444u: goto label_4f1444;
        case 0x4f1448u: goto label_4f1448;
        case 0x4f144cu: goto label_4f144c;
        case 0x4f1450u: goto label_4f1450;
        case 0x4f1454u: goto label_4f1454;
        case 0x4f1458u: goto label_4f1458;
        case 0x4f145cu: goto label_4f145c;
        case 0x4f1460u: goto label_4f1460;
        case 0x4f1464u: goto label_4f1464;
        case 0x4f1468u: goto label_4f1468;
        case 0x4f146cu: goto label_4f146c;
        case 0x4f1470u: goto label_4f1470;
        case 0x4f1474u: goto label_4f1474;
        case 0x4f1478u: goto label_4f1478;
        case 0x4f147cu: goto label_4f147c;
        case 0x4f1480u: goto label_4f1480;
        case 0x4f1484u: goto label_4f1484;
        case 0x4f1488u: goto label_4f1488;
        case 0x4f148cu: goto label_4f148c;
        case 0x4f1490u: goto label_4f1490;
        case 0x4f1494u: goto label_4f1494;
        case 0x4f1498u: goto label_4f1498;
        case 0x4f149cu: goto label_4f149c;
        case 0x4f14a0u: goto label_4f14a0;
        case 0x4f14a4u: goto label_4f14a4;
        case 0x4f14a8u: goto label_4f14a8;
        case 0x4f14acu: goto label_4f14ac;
        case 0x4f14b0u: goto label_4f14b0;
        case 0x4f14b4u: goto label_4f14b4;
        case 0x4f14b8u: goto label_4f14b8;
        case 0x4f14bcu: goto label_4f14bc;
        case 0x4f14c0u: goto label_4f14c0;
        case 0x4f14c4u: goto label_4f14c4;
        case 0x4f14c8u: goto label_4f14c8;
        case 0x4f14ccu: goto label_4f14cc;
        case 0x4f14d0u: goto label_4f14d0;
        case 0x4f14d4u: goto label_4f14d4;
        case 0x4f14d8u: goto label_4f14d8;
        case 0x4f14dcu: goto label_4f14dc;
        case 0x4f14e0u: goto label_4f14e0;
        case 0x4f14e4u: goto label_4f14e4;
        case 0x4f14e8u: goto label_4f14e8;
        case 0x4f14ecu: goto label_4f14ec;
        case 0x4f14f0u: goto label_4f14f0;
        case 0x4f14f4u: goto label_4f14f4;
        case 0x4f14f8u: goto label_4f14f8;
        case 0x4f14fcu: goto label_4f14fc;
        case 0x4f1500u: goto label_4f1500;
        case 0x4f1504u: goto label_4f1504;
        case 0x4f1508u: goto label_4f1508;
        case 0x4f150cu: goto label_4f150c;
        case 0x4f1510u: goto label_4f1510;
        case 0x4f1514u: goto label_4f1514;
        case 0x4f1518u: goto label_4f1518;
        case 0x4f151cu: goto label_4f151c;
        case 0x4f1520u: goto label_4f1520;
        case 0x4f1524u: goto label_4f1524;
        case 0x4f1528u: goto label_4f1528;
        case 0x4f152cu: goto label_4f152c;
        case 0x4f1530u: goto label_4f1530;
        case 0x4f1534u: goto label_4f1534;
        case 0x4f1538u: goto label_4f1538;
        case 0x4f153cu: goto label_4f153c;
        case 0x4f1540u: goto label_4f1540;
        case 0x4f1544u: goto label_4f1544;
        case 0x4f1548u: goto label_4f1548;
        case 0x4f154cu: goto label_4f154c;
        case 0x4f1550u: goto label_4f1550;
        case 0x4f1554u: goto label_4f1554;
        case 0x4f1558u: goto label_4f1558;
        case 0x4f155cu: goto label_4f155c;
        case 0x4f1560u: goto label_4f1560;
        case 0x4f1564u: goto label_4f1564;
        case 0x4f1568u: goto label_4f1568;
        case 0x4f156cu: goto label_4f156c;
        case 0x4f1570u: goto label_4f1570;
        case 0x4f1574u: goto label_4f1574;
        case 0x4f1578u: goto label_4f1578;
        case 0x4f157cu: goto label_4f157c;
        case 0x4f1580u: goto label_4f1580;
        case 0x4f1584u: goto label_4f1584;
        case 0x4f1588u: goto label_4f1588;
        case 0x4f158cu: goto label_4f158c;
        case 0x4f1590u: goto label_4f1590;
        case 0x4f1594u: goto label_4f1594;
        case 0x4f1598u: goto label_4f1598;
        case 0x4f159cu: goto label_4f159c;
        case 0x4f15a0u: goto label_4f15a0;
        case 0x4f15a4u: goto label_4f15a4;
        case 0x4f15a8u: goto label_4f15a8;
        case 0x4f15acu: goto label_4f15ac;
        case 0x4f15b0u: goto label_4f15b0;
        case 0x4f15b4u: goto label_4f15b4;
        case 0x4f15b8u: goto label_4f15b8;
        case 0x4f15bcu: goto label_4f15bc;
        case 0x4f15c0u: goto label_4f15c0;
        case 0x4f15c4u: goto label_4f15c4;
        case 0x4f15c8u: goto label_4f15c8;
        case 0x4f15ccu: goto label_4f15cc;
        case 0x4f15d0u: goto label_4f15d0;
        case 0x4f15d4u: goto label_4f15d4;
        case 0x4f15d8u: goto label_4f15d8;
        case 0x4f15dcu: goto label_4f15dc;
        case 0x4f15e0u: goto label_4f15e0;
        case 0x4f15e4u: goto label_4f15e4;
        case 0x4f15e8u: goto label_4f15e8;
        case 0x4f15ecu: goto label_4f15ec;
        case 0x4f15f0u: goto label_4f15f0;
        case 0x4f15f4u: goto label_4f15f4;
        case 0x4f15f8u: goto label_4f15f8;
        case 0x4f15fcu: goto label_4f15fc;
        case 0x4f1600u: goto label_4f1600;
        case 0x4f1604u: goto label_4f1604;
        case 0x4f1608u: goto label_4f1608;
        case 0x4f160cu: goto label_4f160c;
        case 0x4f1610u: goto label_4f1610;
        case 0x4f1614u: goto label_4f1614;
        case 0x4f1618u: goto label_4f1618;
        case 0x4f161cu: goto label_4f161c;
        case 0x4f1620u: goto label_4f1620;
        case 0x4f1624u: goto label_4f1624;
        case 0x4f1628u: goto label_4f1628;
        case 0x4f162cu: goto label_4f162c;
        case 0x4f1630u: goto label_4f1630;
        case 0x4f1634u: goto label_4f1634;
        case 0x4f1638u: goto label_4f1638;
        case 0x4f163cu: goto label_4f163c;
        case 0x4f1640u: goto label_4f1640;
        case 0x4f1644u: goto label_4f1644;
        case 0x4f1648u: goto label_4f1648;
        case 0x4f164cu: goto label_4f164c;
        case 0x4f1650u: goto label_4f1650;
        case 0x4f1654u: goto label_4f1654;
        case 0x4f1658u: goto label_4f1658;
        case 0x4f165cu: goto label_4f165c;
        case 0x4f1660u: goto label_4f1660;
        case 0x4f1664u: goto label_4f1664;
        case 0x4f1668u: goto label_4f1668;
        case 0x4f166cu: goto label_4f166c;
        case 0x4f1670u: goto label_4f1670;
        case 0x4f1674u: goto label_4f1674;
        case 0x4f1678u: goto label_4f1678;
        case 0x4f167cu: goto label_4f167c;
        case 0x4f1680u: goto label_4f1680;
        case 0x4f1684u: goto label_4f1684;
        case 0x4f1688u: goto label_4f1688;
        case 0x4f168cu: goto label_4f168c;
        case 0x4f1690u: goto label_4f1690;
        case 0x4f1694u: goto label_4f1694;
        case 0x4f1698u: goto label_4f1698;
        case 0x4f169cu: goto label_4f169c;
        case 0x4f16a0u: goto label_4f16a0;
        case 0x4f16a4u: goto label_4f16a4;
        case 0x4f16a8u: goto label_4f16a8;
        case 0x4f16acu: goto label_4f16ac;
        case 0x4f16b0u: goto label_4f16b0;
        case 0x4f16b4u: goto label_4f16b4;
        case 0x4f16b8u: goto label_4f16b8;
        case 0x4f16bcu: goto label_4f16bc;
        case 0x4f16c0u: goto label_4f16c0;
        case 0x4f16c4u: goto label_4f16c4;
        case 0x4f16c8u: goto label_4f16c8;
        case 0x4f16ccu: goto label_4f16cc;
        case 0x4f16d0u: goto label_4f16d0;
        case 0x4f16d4u: goto label_4f16d4;
        case 0x4f16d8u: goto label_4f16d8;
        case 0x4f16dcu: goto label_4f16dc;
        case 0x4f16e0u: goto label_4f16e0;
        case 0x4f16e4u: goto label_4f16e4;
        case 0x4f16e8u: goto label_4f16e8;
        case 0x4f16ecu: goto label_4f16ec;
        case 0x4f16f0u: goto label_4f16f0;
        case 0x4f16f4u: goto label_4f16f4;
        case 0x4f16f8u: goto label_4f16f8;
        case 0x4f16fcu: goto label_4f16fc;
        case 0x4f1700u: goto label_4f1700;
        case 0x4f1704u: goto label_4f1704;
        case 0x4f1708u: goto label_4f1708;
        case 0x4f170cu: goto label_4f170c;
        case 0x4f1710u: goto label_4f1710;
        case 0x4f1714u: goto label_4f1714;
        case 0x4f1718u: goto label_4f1718;
        case 0x4f171cu: goto label_4f171c;
        case 0x4f1720u: goto label_4f1720;
        case 0x4f1724u: goto label_4f1724;
        case 0x4f1728u: goto label_4f1728;
        case 0x4f172cu: goto label_4f172c;
        case 0x4f1730u: goto label_4f1730;
        case 0x4f1734u: goto label_4f1734;
        case 0x4f1738u: goto label_4f1738;
        case 0x4f173cu: goto label_4f173c;
        case 0x4f1740u: goto label_4f1740;
        case 0x4f1744u: goto label_4f1744;
        case 0x4f1748u: goto label_4f1748;
        case 0x4f174cu: goto label_4f174c;
        case 0x4f1750u: goto label_4f1750;
        case 0x4f1754u: goto label_4f1754;
        case 0x4f1758u: goto label_4f1758;
        case 0x4f175cu: goto label_4f175c;
        default: break;
    }

    ctx->pc = 0x4f1260u;

label_4f1260:
    // 0x4f1260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f1264:
    // 0x4f1264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f1264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f1268:
    // 0x4f1268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f126c:
    // 0x4f126c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f1270:
    // 0x4f1270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f1270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1274:
    // 0x4f1274: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4f1278:
    if (ctx->pc == 0x4F1278u) {
        ctx->pc = 0x4F1278u;
            // 0x4f1278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F127Cu;
        goto label_4f127c;
    }
    ctx->pc = 0x4F1274u;
    {
        const bool branch_taken_0x4f1274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1274u;
            // 0x4f1278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1274) {
            ctx->pc = 0x4F13A8u;
            goto label_4f13a8;
        }
    }
    ctx->pc = 0x4F127Cu;
label_4f127c:
    // 0x4f127c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f1280:
    // 0x4f1280: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f1284:
    // 0x4f1284: 0x246340a0  addiu       $v1, $v1, 0x40A0
    ctx->pc = 0x4f1284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16544));
label_4f1288:
    // 0x4f1288: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f1288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f128c:
    // 0x4f128c: 0x244240d8  addiu       $v0, $v0, 0x40D8
    ctx->pc = 0x4f128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16600));
label_4f1290:
    // 0x4f1290: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f1290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4f1294:
    // 0x4f1294: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4f1294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4f1298:
    // 0x4f1298: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4f1298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4f129c:
    // 0x4f129c: 0xc0407c0  jal         func_101F00
label_4f12a0:
    if (ctx->pc == 0x4F12A0u) {
        ctx->pc = 0x4F12A0u;
            // 0x4f12a0: 0x24a513c0  addiu       $a1, $a1, 0x13C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5056));
        ctx->pc = 0x4F12A4u;
        goto label_4f12a4;
    }
    ctx->pc = 0x4F129Cu;
    SET_GPR_U32(ctx, 31, 0x4F12A4u);
    ctx->pc = 0x4F12A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F129Cu;
            // 0x4f12a0: 0x24a513c0  addiu       $a1, $a1, 0x13C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12A4u; }
        if (ctx->pc != 0x4F12A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12A4u; }
        if (ctx->pc != 0x4F12A4u) { return; }
    }
    ctx->pc = 0x4F12A4u;
label_4f12a4:
    // 0x4f12a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4f12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4f12a8:
    // 0x4f12a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4f12ac:
    if (ctx->pc == 0x4F12ACu) {
        ctx->pc = 0x4F12ACu;
            // 0x4f12ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4F12B0u;
        goto label_4f12b0;
    }
    ctx->pc = 0x4F12A8u;
    {
        const bool branch_taken_0x4f12a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12a8) {
            ctx->pc = 0x4F12ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F12A8u;
            // 0x4f12ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F12BCu;
            goto label_4f12bc;
        }
    }
    ctx->pc = 0x4F12B0u;
label_4f12b0:
    // 0x4f12b0: 0xc07507c  jal         func_1D41F0
label_4f12b4:
    if (ctx->pc == 0x4F12B4u) {
        ctx->pc = 0x4F12B4u;
            // 0x4f12b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4F12B8u;
        goto label_4f12b8;
    }
    ctx->pc = 0x4F12B0u;
    SET_GPR_U32(ctx, 31, 0x4F12B8u);
    ctx->pc = 0x4F12B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F12B0u;
            // 0x4f12b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12B8u; }
        if (ctx->pc != 0x4F12B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12B8u; }
        if (ctx->pc != 0x4F12B8u) { return; }
    }
    ctx->pc = 0x4F12B8u;
label_4f12b8:
    // 0x4f12b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4f12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4f12bc:
    // 0x4f12bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f12c0:
    if (ctx->pc == 0x4F12C0u) {
        ctx->pc = 0x4F12C0u;
            // 0x4f12c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4F12C4u;
        goto label_4f12c4;
    }
    ctx->pc = 0x4F12BCu;
    {
        const bool branch_taken_0x4f12bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12bc) {
            ctx->pc = 0x4F12C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F12BCu;
            // 0x4f12c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F12ECu;
            goto label_4f12ec;
        }
    }
    ctx->pc = 0x4F12C4u;
label_4f12c4:
    // 0x4f12c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f12c8:
    if (ctx->pc == 0x4F12C8u) {
        ctx->pc = 0x4F12CCu;
        goto label_4f12cc;
    }
    ctx->pc = 0x4F12C4u;
    {
        const bool branch_taken_0x4f12c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12c4) {
            ctx->pc = 0x4F12E8u;
            goto label_4f12e8;
        }
    }
    ctx->pc = 0x4F12CCu;
label_4f12cc:
    // 0x4f12cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f12d0:
    if (ctx->pc == 0x4F12D0u) {
        ctx->pc = 0x4F12D4u;
        goto label_4f12d4;
    }
    ctx->pc = 0x4F12CCu;
    {
        const bool branch_taken_0x4f12cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12cc) {
            ctx->pc = 0x4F12E8u;
            goto label_4f12e8;
        }
    }
    ctx->pc = 0x4F12D4u;
label_4f12d4:
    // 0x4f12d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4f12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4f12d8:
    // 0x4f12d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f12dc:
    if (ctx->pc == 0x4F12DCu) {
        ctx->pc = 0x4F12E0u;
        goto label_4f12e0;
    }
    ctx->pc = 0x4F12D8u;
    {
        const bool branch_taken_0x4f12d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12d8) {
            ctx->pc = 0x4F12E8u;
            goto label_4f12e8;
        }
    }
    ctx->pc = 0x4F12E0u;
label_4f12e0:
    // 0x4f12e0: 0xc0400a8  jal         func_1002A0
label_4f12e4:
    if (ctx->pc == 0x4F12E4u) {
        ctx->pc = 0x4F12E8u;
        goto label_4f12e8;
    }
    ctx->pc = 0x4F12E0u;
    SET_GPR_U32(ctx, 31, 0x4F12E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12E8u; }
        if (ctx->pc != 0x4F12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F12E8u; }
        if (ctx->pc != 0x4F12E8u) { return; }
    }
    ctx->pc = 0x4F12E8u;
label_4f12e8:
    // 0x4f12e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4f12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4f12ec:
    // 0x4f12ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f12f0:
    if (ctx->pc == 0x4F12F0u) {
        ctx->pc = 0x4F12F0u;
            // 0x4f12f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4F12F4u;
        goto label_4f12f4;
    }
    ctx->pc = 0x4F12ECu;
    {
        const bool branch_taken_0x4f12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12ec) {
            ctx->pc = 0x4F12F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F12ECu;
            // 0x4f12f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F131Cu;
            goto label_4f131c;
        }
    }
    ctx->pc = 0x4F12F4u;
label_4f12f4:
    // 0x4f12f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f12f8:
    if (ctx->pc == 0x4F12F8u) {
        ctx->pc = 0x4F12FCu;
        goto label_4f12fc;
    }
    ctx->pc = 0x4F12F4u;
    {
        const bool branch_taken_0x4f12f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12f4) {
            ctx->pc = 0x4F1318u;
            goto label_4f1318;
        }
    }
    ctx->pc = 0x4F12FCu;
label_4f12fc:
    // 0x4f12fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f1300:
    if (ctx->pc == 0x4F1300u) {
        ctx->pc = 0x4F1304u;
        goto label_4f1304;
    }
    ctx->pc = 0x4F12FCu;
    {
        const bool branch_taken_0x4f12fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f12fc) {
            ctx->pc = 0x4F1318u;
            goto label_4f1318;
        }
    }
    ctx->pc = 0x4F1304u;
label_4f1304:
    // 0x4f1304: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4f1304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4f1308:
    // 0x4f1308: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f130c:
    if (ctx->pc == 0x4F130Cu) {
        ctx->pc = 0x4F1310u;
        goto label_4f1310;
    }
    ctx->pc = 0x4F1308u;
    {
        const bool branch_taken_0x4f1308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1308) {
            ctx->pc = 0x4F1318u;
            goto label_4f1318;
        }
    }
    ctx->pc = 0x4F1310u;
label_4f1310:
    // 0x4f1310: 0xc0400a8  jal         func_1002A0
label_4f1314:
    if (ctx->pc == 0x4F1314u) {
        ctx->pc = 0x4F1318u;
        goto label_4f1318;
    }
    ctx->pc = 0x4F1310u;
    SET_GPR_U32(ctx, 31, 0x4F1318u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1318u; }
        if (ctx->pc != 0x4F1318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1318u; }
        if (ctx->pc != 0x4F1318u) { return; }
    }
    ctx->pc = 0x4F1318u;
label_4f1318:
    // 0x4f1318: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4f1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4f131c:
    // 0x4f131c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f1320:
    if (ctx->pc == 0x4F1320u) {
        ctx->pc = 0x4F1324u;
        goto label_4f1324;
    }
    ctx->pc = 0x4F131Cu;
    {
        const bool branch_taken_0x4f131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f131c) {
            ctx->pc = 0x4F1338u;
            goto label_4f1338;
        }
    }
    ctx->pc = 0x4F1324u;
label_4f1324:
    // 0x4f1324: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f1328:
    // 0x4f1328: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f132c:
    // 0x4f132c: 0x24634088  addiu       $v1, $v1, 0x4088
    ctx->pc = 0x4f132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16520));
label_4f1330:
    // 0x4f1330: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4f1330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4f1334:
    // 0x4f1334: 0xac40aa58  sw          $zero, -0x55A8($v0)
    ctx->pc = 0x4f1334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945368), GPR_U32(ctx, 0));
label_4f1338:
    // 0x4f1338: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4f133c:
    if (ctx->pc == 0x4F133Cu) {
        ctx->pc = 0x4F133Cu;
            // 0x4f133c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F1340u;
        goto label_4f1340;
    }
    ctx->pc = 0x4F1338u;
    {
        const bool branch_taken_0x4f1338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1338) {
            ctx->pc = 0x4F133Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1338u;
            // 0x4f133c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1394u;
            goto label_4f1394;
        }
    }
    ctx->pc = 0x4F1340u;
label_4f1340:
    // 0x4f1340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f1344:
    // 0x4f1344: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f1344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4f1348:
    // 0x4f1348: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f1348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f134c:
    // 0x4f134c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4f134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f1350:
    // 0x4f1350: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f1354:
    if (ctx->pc == 0x4F1354u) {
        ctx->pc = 0x4F1354u;
            // 0x4f1354: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4F1358u;
        goto label_4f1358;
    }
    ctx->pc = 0x4F1350u;
    {
        const bool branch_taken_0x4f1350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1350) {
            ctx->pc = 0x4F1354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1350u;
            // 0x4f1354: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F136Cu;
            goto label_4f136c;
        }
    }
    ctx->pc = 0x4F1358u;
label_4f1358:
    // 0x4f1358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f1358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f135c:
    // 0x4f135c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f135cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f1360:
    // 0x4f1360: 0x320f809  jalr        $t9
label_4f1364:
    if (ctx->pc == 0x4F1364u) {
        ctx->pc = 0x4F1364u;
            // 0x4f1364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1368u;
        goto label_4f1368;
    }
    ctx->pc = 0x4F1360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1368u);
        ctx->pc = 0x4F1364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1360u;
            // 0x4f1364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1368u; }
            if (ctx->pc != 0x4F1368u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1368u;
label_4f1368:
    // 0x4f1368: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4f1368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4f136c:
    // 0x4f136c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f1370:
    if (ctx->pc == 0x4F1370u) {
        ctx->pc = 0x4F1370u;
            // 0x4f1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1374u;
        goto label_4f1374;
    }
    ctx->pc = 0x4F136Cu;
    {
        const bool branch_taken_0x4f136c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f136c) {
            ctx->pc = 0x4F1370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F136Cu;
            // 0x4f1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1388u;
            goto label_4f1388;
        }
    }
    ctx->pc = 0x4F1374u;
label_4f1374:
    // 0x4f1374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f1374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1378:
    // 0x4f1378: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f1378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f137c:
    // 0x4f137c: 0x320f809  jalr        $t9
label_4f1380:
    if (ctx->pc == 0x4F1380u) {
        ctx->pc = 0x4F1380u;
            // 0x4f1380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1384u;
        goto label_4f1384;
    }
    ctx->pc = 0x4F137Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1384u);
        ctx->pc = 0x4F1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F137Cu;
            // 0x4f1380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1384u; }
            if (ctx->pc != 0x4F1384u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1384u;
label_4f1384:
    // 0x4f1384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f1384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f1388:
    // 0x4f1388: 0xc075bf8  jal         func_1D6FE0
label_4f138c:
    if (ctx->pc == 0x4F138Cu) {
        ctx->pc = 0x4F138Cu;
            // 0x4f138c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1390u;
        goto label_4f1390;
    }
    ctx->pc = 0x4F1388u;
    SET_GPR_U32(ctx, 31, 0x4F1390u);
    ctx->pc = 0x4F138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1388u;
            // 0x4f138c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1390u; }
        if (ctx->pc != 0x4F1390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1390u; }
        if (ctx->pc != 0x4F1390u) { return; }
    }
    ctx->pc = 0x4F1390u;
label_4f1390:
    // 0x4f1390: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f1394:
    // 0x4f1394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f1394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f1398:
    // 0x4f1398: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f139c:
    if (ctx->pc == 0x4F139Cu) {
        ctx->pc = 0x4F139Cu;
            // 0x4f139c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F13A0u;
        goto label_4f13a0;
    }
    ctx->pc = 0x4F1398u;
    {
        const bool branch_taken_0x4f1398 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f1398) {
            ctx->pc = 0x4F139Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1398u;
            // 0x4f139c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F13ACu;
            goto label_4f13ac;
        }
    }
    ctx->pc = 0x4F13A0u;
label_4f13a0:
    // 0x4f13a0: 0xc0400a8  jal         func_1002A0
label_4f13a4:
    if (ctx->pc == 0x4F13A4u) {
        ctx->pc = 0x4F13A4u;
            // 0x4f13a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F13A8u;
        goto label_4f13a8;
    }
    ctx->pc = 0x4F13A0u;
    SET_GPR_U32(ctx, 31, 0x4F13A8u);
    ctx->pc = 0x4F13A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F13A0u;
            // 0x4f13a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F13A8u; }
        if (ctx->pc != 0x4F13A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F13A8u; }
        if (ctx->pc != 0x4F13A8u) { return; }
    }
    ctx->pc = 0x4F13A8u;
label_4f13a8:
    // 0x4f13a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f13a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f13ac:
    // 0x4f13ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f13acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f13b0:
    // 0x4f13b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f13b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f13b4:
    // 0x4f13b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f13b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f13b8:
    // 0x4f13b8: 0x3e00008  jr          $ra
label_4f13bc:
    if (ctx->pc == 0x4F13BCu) {
        ctx->pc = 0x4F13BCu;
            // 0x4f13bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F13C0u;
        goto label_4f13c0;
    }
    ctx->pc = 0x4F13B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F13B8u;
            // 0x4f13bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F13C0u;
label_4f13c0:
    // 0x4f13c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f13c4:
    // 0x4f13c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f13c8:
    // 0x4f13c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f13cc:
    // 0x4f13cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f13d0:
    // 0x4f13d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f13d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f13d4:
    // 0x4f13d4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4f13d8:
    if (ctx->pc == 0x4F13D8u) {
        ctx->pc = 0x4F13D8u;
            // 0x4f13d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F13DCu;
        goto label_4f13dc;
    }
    ctx->pc = 0x4F13D4u;
    {
        const bool branch_taken_0x4f13d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F13D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F13D4u;
            // 0x4f13d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f13d4) {
            ctx->pc = 0x4F149Cu;
            goto label_4f149c;
        }
    }
    ctx->pc = 0x4F13DCu;
label_4f13dc:
    // 0x4f13dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f13e0:
    // 0x4f13e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f13e4:
    // 0x4f13e4: 0x24634140  addiu       $v1, $v1, 0x4140
    ctx->pc = 0x4f13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16704));
label_4f13e8:
    // 0x4f13e8: 0x24424180  addiu       $v0, $v0, 0x4180
    ctx->pc = 0x4f13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16768));
label_4f13ec:
    // 0x4f13ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f13f0:
    // 0x4f13f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f13f4:
    // 0x4f13f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f13f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f13f8:
    // 0x4f13f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4f13f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4f13fc:
    // 0x4f13fc: 0x320f809  jalr        $t9
label_4f1400:
    if (ctx->pc == 0x4F1400u) {
        ctx->pc = 0x4F1404u;
        goto label_4f1404;
    }
    ctx->pc = 0x4F13FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1404u; }
            if (ctx->pc != 0x4F1404u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1404u;
label_4f1404:
    // 0x4f1404: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4f1408:
    if (ctx->pc == 0x4F1408u) {
        ctx->pc = 0x4F1408u;
            // 0x4f1408: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4F140Cu;
        goto label_4f140c;
    }
    ctx->pc = 0x4F1404u;
    {
        const bool branch_taken_0x4f1404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1404) {
            ctx->pc = 0x4F1408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1404u;
            // 0x4f1408: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1488u;
            goto label_4f1488;
        }
    }
    ctx->pc = 0x4F140Cu;
label_4f140c:
    // 0x4f140c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f1410:
    // 0x4f1410: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f1414:
    // 0x4f1414: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4f1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4f1418:
    // 0x4f1418: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4f1418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4f141c:
    // 0x4f141c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f1420:
    // 0x4f1420: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f1420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f1424:
    // 0x4f1424: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4f1424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4f1428:
    // 0x4f1428: 0xc0aecc4  jal         func_2BB310
label_4f142c:
    if (ctx->pc == 0x4F142Cu) {
        ctx->pc = 0x4F142Cu;
            // 0x4f142c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1430u;
        goto label_4f1430;
    }
    ctx->pc = 0x4F1428u;
    SET_GPR_U32(ctx, 31, 0x4F1430u);
    ctx->pc = 0x4F142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1428u;
            // 0x4f142c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1430u; }
        if (ctx->pc != 0x4F1430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1430u; }
        if (ctx->pc != 0x4F1430u) { return; }
    }
    ctx->pc = 0x4F1430u;
label_4f1430:
    // 0x4f1430: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4f1430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4f1434:
    // 0x4f1434: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4f1434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4f1438:
    // 0x4f1438: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f143c:
    if (ctx->pc == 0x4F143Cu) {
        ctx->pc = 0x4F143Cu;
            // 0x4f143c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4F1440u;
        goto label_4f1440;
    }
    ctx->pc = 0x4F1438u;
    {
        const bool branch_taken_0x4f1438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1438) {
            ctx->pc = 0x4F143Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1438u;
            // 0x4f143c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1454u;
            goto label_4f1454;
        }
    }
    ctx->pc = 0x4F1440u;
label_4f1440:
    // 0x4f1440: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4f1440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4f1444:
    // 0x4f1444: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f1444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f1448:
    // 0x4f1448: 0x320f809  jalr        $t9
label_4f144c:
    if (ctx->pc == 0x4F144Cu) {
        ctx->pc = 0x4F144Cu;
            // 0x4f144c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1450u;
        goto label_4f1450;
    }
    ctx->pc = 0x4F1448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1450u);
        ctx->pc = 0x4F144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1448u;
            // 0x4f144c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1450u; }
            if (ctx->pc != 0x4F1450u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1450u;
label_4f1450:
    // 0x4f1450: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f1450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4f1454:
    // 0x4f1454: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4f1454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f1458:
    // 0x4f1458: 0xc0aec9c  jal         func_2BB270
label_4f145c:
    if (ctx->pc == 0x4F145Cu) {
        ctx->pc = 0x4F145Cu;
            // 0x4f145c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4F1460u;
        goto label_4f1460;
    }
    ctx->pc = 0x4F1458u;
    SET_GPR_U32(ctx, 31, 0x4F1460u);
    ctx->pc = 0x4F145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1458u;
            // 0x4f145c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1460u; }
        if (ctx->pc != 0x4F1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1460u; }
        if (ctx->pc != 0x4F1460u) { return; }
    }
    ctx->pc = 0x4F1460u;
label_4f1460:
    // 0x4f1460: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4f1460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4f1464:
    // 0x4f1464: 0xc0aec88  jal         func_2BB220
label_4f1468:
    if (ctx->pc == 0x4F1468u) {
        ctx->pc = 0x4F1468u;
            // 0x4f1468: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4F146Cu;
        goto label_4f146c;
    }
    ctx->pc = 0x4F1464u;
    SET_GPR_U32(ctx, 31, 0x4F146Cu);
    ctx->pc = 0x4F1468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1464u;
            // 0x4f1468: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F146Cu; }
        if (ctx->pc != 0x4F146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F146Cu; }
        if (ctx->pc != 0x4F146Cu) { return; }
    }
    ctx->pc = 0x4F146Cu;
label_4f146c:
    // 0x4f146c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4f146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4f1470:
    // 0x4f1470: 0xc0aec0c  jal         func_2BB030
label_4f1474:
    if (ctx->pc == 0x4F1474u) {
        ctx->pc = 0x4F1474u;
            // 0x4f1474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1478u;
        goto label_4f1478;
    }
    ctx->pc = 0x4F1470u;
    SET_GPR_U32(ctx, 31, 0x4F1478u);
    ctx->pc = 0x4F1474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1470u;
            // 0x4f1474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1478u; }
        if (ctx->pc != 0x4F1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1478u; }
        if (ctx->pc != 0x4F1478u) { return; }
    }
    ctx->pc = 0x4F1478u;
label_4f1478:
    // 0x4f1478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f147c:
    // 0x4f147c: 0xc0aeaa8  jal         func_2BAAA0
label_4f1480:
    if (ctx->pc == 0x4F1480u) {
        ctx->pc = 0x4F1480u;
            // 0x4f1480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1484u;
        goto label_4f1484;
    }
    ctx->pc = 0x4F147Cu;
    SET_GPR_U32(ctx, 31, 0x4F1484u);
    ctx->pc = 0x4F1480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F147Cu;
            // 0x4f1480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1484u; }
        if (ctx->pc != 0x4F1484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1484u; }
        if (ctx->pc != 0x4F1484u) { return; }
    }
    ctx->pc = 0x4F1484u;
label_4f1484:
    // 0x4f1484: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f1488:
    // 0x4f1488: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f1488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f148c:
    // 0x4f148c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f1490:
    if (ctx->pc == 0x4F1490u) {
        ctx->pc = 0x4F1490u;
            // 0x4f1490: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1494u;
        goto label_4f1494;
    }
    ctx->pc = 0x4F148Cu;
    {
        const bool branch_taken_0x4f148c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f148c) {
            ctx->pc = 0x4F1490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F148Cu;
            // 0x4f1490: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F14A0u;
            goto label_4f14a0;
        }
    }
    ctx->pc = 0x4F1494u;
label_4f1494:
    // 0x4f1494: 0xc0400a8  jal         func_1002A0
label_4f1498:
    if (ctx->pc == 0x4F1498u) {
        ctx->pc = 0x4F1498u;
            // 0x4f1498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F149Cu;
        goto label_4f149c;
    }
    ctx->pc = 0x4F1494u;
    SET_GPR_U32(ctx, 31, 0x4F149Cu);
    ctx->pc = 0x4F1498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1494u;
            // 0x4f1498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F149Cu; }
        if (ctx->pc != 0x4F149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F149Cu; }
        if (ctx->pc != 0x4F149Cu) { return; }
    }
    ctx->pc = 0x4F149Cu;
label_4f149c:
    // 0x4f149c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f149cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f14a0:
    // 0x4f14a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f14a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f14a4:
    // 0x4f14a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f14a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f14a8:
    // 0x4f14a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f14a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f14ac:
    // 0x4f14ac: 0x3e00008  jr          $ra
label_4f14b0:
    if (ctx->pc == 0x4F14B0u) {
        ctx->pc = 0x4F14B0u;
            // 0x4f14b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F14B4u;
        goto label_4f14b4;
    }
    ctx->pc = 0x4F14ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F14B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F14ACu;
            // 0x4f14b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F14B4u;
label_4f14b4:
    // 0x4f14b4: 0x0  nop
    ctx->pc = 0x4f14b4u;
    // NOP
label_4f14b8:
    // 0x4f14b8: 0x0  nop
    ctx->pc = 0x4f14b8u;
    // NOP
label_4f14bc:
    // 0x4f14bc: 0x0  nop
    ctx->pc = 0x4f14bcu;
    // NOP
label_4f14c0:
    // 0x4f14c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4f14c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_4f14c4:
    // 0x4f14c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f14c8:
    // 0x4f14c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4f14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4f14cc:
    // 0x4f14cc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4f14ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4f14d0:
    // 0x4f14d0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f14d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4f14d4:
    // 0x4f14d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f14d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4f14d8:
    // 0x4f14d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f14d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4f14dc:
    // 0x4f14dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f14dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f14e0:
    // 0x4f14e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f14e4:
    // 0x4f14e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f14e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f14e8:
    // 0x4f14e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f14e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f14ec:
    // 0x4f14ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f14f0:
    // 0x4f14f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f14f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f14f4:
    // 0x4f14f4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f14f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f14f8:
    // 0x4f14f8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4f14fc:
    if (ctx->pc == 0x4F14FCu) {
        ctx->pc = 0x4F14FCu;
            // 0x4f14fc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1500u;
        goto label_4f1500;
    }
    ctx->pc = 0x4F14F8u;
    {
        const bool branch_taken_0x4f14f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F14FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F14F8u;
            // 0x4f14fc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f14f8) {
            ctx->pc = 0x4F1548u;
            goto label_4f1548;
        }
    }
    ctx->pc = 0x4F1500u;
label_4f1500:
    // 0x4f1500: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f1500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f1504:
    // 0x4f1504: 0x50a30087  beql        $a1, $v1, . + 4 + (0x87 << 2)
label_4f1508:
    if (ctx->pc == 0x4F1508u) {
        ctx->pc = 0x4F1508u;
            // 0x4f1508: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4F150Cu;
        goto label_4f150c;
    }
    ctx->pc = 0x4F1504u;
    {
        const bool branch_taken_0x4f1504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f1504) {
            ctx->pc = 0x4F1508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1504u;
            // 0x4f1508: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1724u;
            goto label_4f1724;
        }
    }
    ctx->pc = 0x4F150Cu;
label_4f150c:
    // 0x4f150c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f1510:
    // 0x4f1510: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4f1514:
    if (ctx->pc == 0x4F1514u) {
        ctx->pc = 0x4F1518u;
        goto label_4f1518;
    }
    ctx->pc = 0x4F1510u;
    {
        const bool branch_taken_0x4f1510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f1510) {
            ctx->pc = 0x4F1520u;
            goto label_4f1520;
        }
    }
    ctx->pc = 0x4F1518u;
label_4f1518:
    // 0x4f1518: 0x10000081  b           . + 4 + (0x81 << 2)
label_4f151c:
    if (ctx->pc == 0x4F151Cu) {
        ctx->pc = 0x4F1520u;
        goto label_4f1520;
    }
    ctx->pc = 0x4F1518u;
    {
        const bool branch_taken_0x4f1518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1518) {
            ctx->pc = 0x4F1720u;
            goto label_4f1720;
        }
    }
    ctx->pc = 0x4F1520u;
label_4f1520:
    // 0x4f1520: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f1520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f1524:
    // 0x4f1524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f1524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1528:
    // 0x4f1528: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4f1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4f152c:
    // 0x4f152c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4f152cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4f1530:
    // 0x4f1530: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4f1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4f1534:
    // 0x4f1534: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f1534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f1538:
    // 0x4f1538: 0x320f809  jalr        $t9
label_4f153c:
    if (ctx->pc == 0x4F153Cu) {
        ctx->pc = 0x4F153Cu;
            // 0x4f153c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4F1540u;
        goto label_4f1540;
    }
    ctx->pc = 0x4F1538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1540u);
        ctx->pc = 0x4F153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1538u;
            // 0x4f153c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1540u; }
            if (ctx->pc != 0x4F1540u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1540u;
label_4f1540:
    // 0x4f1540: 0x10000077  b           . + 4 + (0x77 << 2)
label_4f1544:
    if (ctx->pc == 0x4F1544u) {
        ctx->pc = 0x4F1548u;
        goto label_4f1548;
    }
    ctx->pc = 0x4F1540u;
    {
        const bool branch_taken_0x4f1540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1540) {
            ctx->pc = 0x4F1720u;
            goto label_4f1720;
        }
    }
    ctx->pc = 0x4F1548u;
label_4f1548:
    // 0x4f1548: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x4f1548u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4f154c:
    // 0x4f154c: 0x12e00074  beqz        $s7, . + 4 + (0x74 << 2)
label_4f1550:
    if (ctx->pc == 0x4F1550u) {
        ctx->pc = 0x4F1554u;
        goto label_4f1554;
    }
    ctx->pc = 0x4F154Cu;
    {
        const bool branch_taken_0x4f154c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f154c) {
            ctx->pc = 0x4F1720u;
            goto label_4f1720;
        }
    }
    ctx->pc = 0x4F1554u;
label_4f1554:
    // 0x4f1554: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x4f1554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_4f1558:
    // 0x4f1558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f155c:
    // 0x4f155c: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x4f155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_4f1560:
    // 0x4f1560: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4f1560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4f1564:
    // 0x4f1564: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4f1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4f1568:
    // 0x4f1568: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x4f1568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4f156c:
    // 0x4f156c: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x4f156cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4f1570:
    // 0x4f1570: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4f1570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4f1574:
    // 0x4f1574: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4f1574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4f1578:
    // 0x4f1578: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f157c:
    // 0x4f157c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4f157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4f1580:
    // 0x4f1580: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x4f1580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_4f1584:
    // 0x4f1584: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1588:
    // 0x4f1588: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f1588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f158c:
    // 0x4f158c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1590:
    // 0x4f1590: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4f1590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4f1594:
    // 0x4f1594: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1598:
    // 0x4f1598: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4f1598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4f159c:
    // 0x4f159c: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x4f159cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4f15a0:
    // 0x4f15a0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4f15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4f15a4:
    // 0x4f15a4: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4f15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4f15a8:
    // 0x4f15a8: 0xc04e738  jal         func_139CE0
label_4f15ac:
    if (ctx->pc == 0x4F15ACu) {
        ctx->pc = 0x4F15ACu;
            // 0x4f15ac: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x4F15B0u;
        goto label_4f15b0;
    }
    ctx->pc = 0x4F15A8u;
    SET_GPR_U32(ctx, 31, 0x4F15B0u);
    ctx->pc = 0x4F15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F15A8u;
            // 0x4f15ac: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15B0u; }
        if (ctx->pc != 0x4F15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15B0u; }
        if (ctx->pc != 0x4F15B0u) { return; }
    }
    ctx->pc = 0x4F15B0u;
label_4f15b0:
    // 0x4f15b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4f15b4:
    // 0x4f15b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f15b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f15b8:
    // 0x4f15b8: 0xc4548938  lwc1        $f20, -0x76C8($v0)
    ctx->pc = 0x4f15b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f15bc:
    // 0x4f15bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f15bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f15c0:
    // 0x4f15c0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4f15c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4f15c4:
    // 0x4f15c4: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x4f15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_4f15c8:
    // 0x4f15c8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4f15c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4f15cc:
    // 0x4f15cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4f15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4f15d0:
    // 0x4f15d0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4f15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4f15d4:
    // 0x4f15d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f15d8:
    // 0x4f15d8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4f15d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f15dc:
    // 0x4f15dc: 0xc0d410c  jal         func_350430
label_4f15e0:
    if (ctx->pc == 0x4F15E0u) {
        ctx->pc = 0x4F15E0u;
            // 0x4f15e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F15E4u;
        goto label_4f15e4;
    }
    ctx->pc = 0x4F15DCu;
    SET_GPR_U32(ctx, 31, 0x4F15E4u);
    ctx->pc = 0x4F15E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F15DCu;
            // 0x4f15e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15E4u; }
        if (ctx->pc != 0x4F15E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15E4u; }
        if (ctx->pc != 0x4F15E4u) { return; }
    }
    ctx->pc = 0x4F15E4u;
label_4f15e4:
    // 0x4f15e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4f15e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4f15e8:
    // 0x4f15e8: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_4f15ec:
    if (ctx->pc == 0x4F15ECu) {
        ctx->pc = 0x4F15F0u;
        goto label_4f15f0;
    }
    ctx->pc = 0x4F15E8u;
    {
        const bool branch_taken_0x4f15e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f15e8) {
            ctx->pc = 0x4F16E0u;
            goto label_4f16e0;
        }
    }
    ctx->pc = 0x4F15F0u;
label_4f15f0:
    // 0x4f15f0: 0xc0d639c  jal         func_358E70
label_4f15f4:
    if (ctx->pc == 0x4F15F4u) {
        ctx->pc = 0x4F15F4u;
            // 0x4f15f4: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x4F15F8u;
        goto label_4f15f8;
    }
    ctx->pc = 0x4F15F0u;
    SET_GPR_U32(ctx, 31, 0x4F15F8u);
    ctx->pc = 0x4F15F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F15F0u;
            // 0x4f15f4: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15F8u; }
        if (ctx->pc != 0x4F15F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F15F8u; }
        if (ctx->pc != 0x4F15F8u) { return; }
    }
    ctx->pc = 0x4F15F8u;
label_4f15f8:
    // 0x4f15f8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4f15fc:
    if (ctx->pc == 0x4F15FCu) {
        ctx->pc = 0x4F1600u;
        goto label_4f1600;
    }
    ctx->pc = 0x4F15F8u;
    {
        const bool branch_taken_0x4f15f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f15f8) {
            ctx->pc = 0x4F16E0u;
            goto label_4f16e0;
        }
    }
    ctx->pc = 0x4F1600u;
label_4f1600:
    // 0x4f1600: 0xc0d1c14  jal         func_347050
label_4f1604:
    if (ctx->pc == 0x4F1604u) {
        ctx->pc = 0x4F1604u;
            // 0x4f1604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1608u;
        goto label_4f1608;
    }
    ctx->pc = 0x4F1600u;
    SET_GPR_U32(ctx, 31, 0x4F1608u);
    ctx->pc = 0x4F1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1600u;
            // 0x4f1604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1608u; }
        if (ctx->pc != 0x4F1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1608u; }
        if (ctx->pc != 0x4F1608u) { return; }
    }
    ctx->pc = 0x4F1608u;
label_4f1608:
    // 0x4f1608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f1608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f160c:
    // 0x4f160c: 0xc04f278  jal         func_13C9E0
label_4f1610:
    if (ctx->pc == 0x4F1610u) {
        ctx->pc = 0x4F1610u;
            // 0x4f1610: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F1614u;
        goto label_4f1614;
    }
    ctx->pc = 0x4F160Cu;
    SET_GPR_U32(ctx, 31, 0x4F1614u);
    ctx->pc = 0x4F1610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F160Cu;
            // 0x4f1610: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1614u; }
        if (ctx->pc != 0x4F1614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1614u; }
        if (ctx->pc != 0x4F1614u) { return; }
    }
    ctx->pc = 0x4F1614u;
label_4f1614:
    // 0x4f1614: 0xc0d1c10  jal         func_347040
label_4f1618:
    if (ctx->pc == 0x4F1618u) {
        ctx->pc = 0x4F1618u;
            // 0x4f1618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F161Cu;
        goto label_4f161c;
    }
    ctx->pc = 0x4F1614u;
    SET_GPR_U32(ctx, 31, 0x4F161Cu);
    ctx->pc = 0x4F1618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1614u;
            // 0x4f1618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F161Cu; }
        if (ctx->pc != 0x4F161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F161Cu; }
        if (ctx->pc != 0x4F161Cu) { return; }
    }
    ctx->pc = 0x4F161Cu;
label_4f161c:
    // 0x4f161c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1620:
    // 0x4f1620: 0xc04ce80  jal         func_133A00
label_4f1624:
    if (ctx->pc == 0x4F1624u) {
        ctx->pc = 0x4F1624u;
            // 0x4f1624: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F1628u;
        goto label_4f1628;
    }
    ctx->pc = 0x4F1620u;
    SET_GPR_U32(ctx, 31, 0x4F1628u);
    ctx->pc = 0x4F1624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1620u;
            // 0x4f1624: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1628u; }
        if (ctx->pc != 0x4F1628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1628u; }
        if (ctx->pc != 0x4F1628u) { return; }
    }
    ctx->pc = 0x4F1628u;
label_4f1628:
    // 0x4f1628: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4f162c:
    // 0x4f162c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4f162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4f1630:
    // 0x4f1630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f1630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f1634:
    // 0x4f1634: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f1634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1638:
    // 0x4f1638: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4f1638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4f163c:
    // 0x4f163c: 0xc04ce50  jal         func_133940
label_4f1640:
    if (ctx->pc == 0x4F1640u) {
        ctx->pc = 0x4F1640u;
            // 0x4f1640: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4F1644u;
        goto label_4f1644;
    }
    ctx->pc = 0x4F163Cu;
    SET_GPR_U32(ctx, 31, 0x4F1644u);
    ctx->pc = 0x4F1640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F163Cu;
            // 0x4f1640: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1644u; }
        if (ctx->pc != 0x4F1644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1644u; }
        if (ctx->pc != 0x4F1644u) { return; }
    }
    ctx->pc = 0x4F1644u;
label_4f1644:
    // 0x4f1644: 0xc0d4108  jal         func_350420
label_4f1648:
    if (ctx->pc == 0x4F1648u) {
        ctx->pc = 0x4F164Cu;
        goto label_4f164c;
    }
    ctx->pc = 0x4F1644u;
    SET_GPR_U32(ctx, 31, 0x4F164Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F164Cu; }
        if (ctx->pc != 0x4F164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F164Cu; }
        if (ctx->pc != 0x4F164Cu) { return; }
    }
    ctx->pc = 0x4F164Cu;
label_4f164c:
    // 0x4f164c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f164cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1650:
    // 0x4f1650: 0xc0d4104  jal         func_350410
label_4f1654:
    if (ctx->pc == 0x4F1654u) {
        ctx->pc = 0x4F1654u;
            // 0x4f1654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1658u;
        goto label_4f1658;
    }
    ctx->pc = 0x4F1650u;
    SET_GPR_U32(ctx, 31, 0x4F1658u);
    ctx->pc = 0x4F1654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1650u;
            // 0x4f1654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1658u; }
        if (ctx->pc != 0x4F1658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1658u; }
        if (ctx->pc != 0x4F1658u) { return; }
    }
    ctx->pc = 0x4F1658u;
label_4f1658:
    // 0x4f1658: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4f1658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4f165c:
    // 0x4f165c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1660:
    // 0x4f1660: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4f1660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f1664:
    // 0x4f1664: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x4f1664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4f1668:
    // 0x4f1668: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4f1668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f166c:
    // 0x4f166c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4f166cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1670:
    // 0x4f1670: 0xc0d40ac  jal         func_3502B0
label_4f1674:
    if (ctx->pc == 0x4F1674u) {
        ctx->pc = 0x4F1674u;
            // 0x4f1674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4F1678u;
        goto label_4f1678;
    }
    ctx->pc = 0x4F1670u;
    SET_GPR_U32(ctx, 31, 0x4F1678u);
    ctx->pc = 0x4F1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1670u;
            // 0x4f1674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1678u; }
        if (ctx->pc != 0x4F1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1678u; }
        if (ctx->pc != 0x4F1678u) { return; }
    }
    ctx->pc = 0x4F1678u;
label_4f1678:
    // 0x4f1678: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4f1678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4f167c:
    // 0x4f167c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_4f1680:
    if (ctx->pc == 0x4F1680u) {
        ctx->pc = 0x4F1680u;
            // 0x4f1680: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4F1684u;
        goto label_4f1684;
    }
    ctx->pc = 0x4F167Cu;
    {
        const bool branch_taken_0x4f167c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F167Cu;
            // 0x4f1680: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f167c) {
            ctx->pc = 0x4F16E0u;
            goto label_4f16e0;
        }
    }
    ctx->pc = 0x4F1684u;
label_4f1684:
    // 0x4f1684: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4f1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4f1688:
    // 0x4f1688: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4f1688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f168c:
    // 0x4f168c: 0xc13c5d8  jal         func_4F1760
label_4f1690:
    if (ctx->pc == 0x4F1690u) {
        ctx->pc = 0x4F1690u;
            // 0x4f1690: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x4F1694u;
        goto label_4f1694;
    }
    ctx->pc = 0x4F168Cu;
    SET_GPR_U32(ctx, 31, 0x4F1694u);
    ctx->pc = 0x4F1690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F168Cu;
            // 0x4f1690: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1760u;
    if (runtime->hasFunction(0x4F1760u)) {
        auto targetFn = runtime->lookupFunction(0x4F1760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1694u; }
        if (ctx->pc != 0x4F1694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1760_0x4f1760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1694u; }
        if (ctx->pc != 0x4F1694u) { return; }
    }
    ctx->pc = 0x4F1694u;
label_4f1694:
    // 0x4f1694: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4f1698:
    // 0x4f1698: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x4f1698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4f169c:
    // 0x4f169c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4f169cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4f16a0:
    // 0x4f16a0: 0xc04e4a4  jal         func_139290
label_4f16a4:
    if (ctx->pc == 0x4F16A4u) {
        ctx->pc = 0x4F16A4u;
            // 0x4f16a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F16A8u;
        goto label_4f16a8;
    }
    ctx->pc = 0x4F16A0u;
    SET_GPR_U32(ctx, 31, 0x4F16A8u);
    ctx->pc = 0x4F16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16A0u;
            // 0x4f16a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16A8u; }
        if (ctx->pc != 0x4F16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16A8u; }
        if (ctx->pc != 0x4F16A8u) { return; }
    }
    ctx->pc = 0x4F16A8u;
label_4f16a8:
    // 0x4f16a8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x4f16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4f16ac:
    // 0x4f16ac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4f16acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4f16b0:
    // 0x4f16b0: 0xc04cd60  jal         func_133580
label_4f16b4:
    if (ctx->pc == 0x4F16B4u) {
        ctx->pc = 0x4F16B4u;
            // 0x4f16b4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F16B8u;
        goto label_4f16b8;
    }
    ctx->pc = 0x4F16B0u;
    SET_GPR_U32(ctx, 31, 0x4F16B8u);
    ctx->pc = 0x4F16B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16B0u;
            // 0x4f16b4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16B8u; }
        if (ctx->pc != 0x4F16B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16B8u; }
        if (ctx->pc != 0x4F16B8u) { return; }
    }
    ctx->pc = 0x4F16B8u;
label_4f16b8:
    // 0x4f16b8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4f16b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f16bc:
    // 0x4f16bc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4f16bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4f16c0:
    // 0x4f16c0: 0x320f809  jalr        $t9
label_4f16c4:
    if (ctx->pc == 0x4F16C4u) {
        ctx->pc = 0x4F16C4u;
            // 0x4f16c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F16C8u;
        goto label_4f16c8;
    }
    ctx->pc = 0x4F16C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F16C8u);
        ctx->pc = 0x4F16C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16C0u;
            // 0x4f16c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F16C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F16C8u; }
            if (ctx->pc != 0x4F16C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F16C8u;
label_4f16c8:
    // 0x4f16c8: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x4f16c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4f16cc:
    // 0x4f16cc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4f16ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4f16d0:
    // 0x4f16d0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x4f16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4f16d4:
    // 0x4f16d4: 0xc054fd4  jal         func_153F50
label_4f16d8:
    if (ctx->pc == 0x4F16D8u) {
        ctx->pc = 0x4F16D8u;
            // 0x4f16d8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F16DCu;
        goto label_4f16dc;
    }
    ctx->pc = 0x4F16D4u;
    SET_GPR_U32(ctx, 31, 0x4F16DCu);
    ctx->pc = 0x4F16D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16D4u;
            // 0x4f16d8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16DCu; }
        if (ctx->pc != 0x4F16DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F16DCu; }
        if (ctx->pc != 0x4F16DCu) { return; }
    }
    ctx->pc = 0x4F16DCu;
label_4f16dc:
    // 0x4f16dc: 0x0  nop
    ctx->pc = 0x4f16dcu;
    // NOP
label_4f16e0:
    // 0x4f16e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f16e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f16e4:
    // 0x4f16e4: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x4f16e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4f16e8:
    // 0x4f16e8: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_4f16ec:
    if (ctx->pc == 0x4F16ECu) {
        ctx->pc = 0x4F16ECu;
            // 0x4f16ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F16F0u;
        goto label_4f16f0;
    }
    ctx->pc = 0x4F16E8u;
    {
        const bool branch_taken_0x4f16e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16E8u;
            // 0x4f16ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f16e8) {
            ctx->pc = 0x4F15C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f15c0;
        }
    }
    ctx->pc = 0x4F16F0u;
label_4f16f0:
    // 0x4f16f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f16f4:
    // 0x4f16f4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4f16f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4f16f8:
    // 0x4f16f8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4f16fc:
    if (ctx->pc == 0x4F16FCu) {
        ctx->pc = 0x4F16FCu;
            // 0x4f16fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4F1700u;
        goto label_4f1700;
    }
    ctx->pc = 0x4F16F8u;
    {
        const bool branch_taken_0x4f16f8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4F16FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F16F8u;
            // 0x4f16fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f16f8) {
            ctx->pc = 0x4F1720u;
            goto label_4f1720;
        }
    }
    ctx->pc = 0x4F1700u;
label_4f1700:
    // 0x4f1700: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1704:
    // 0x4f1704: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1708:
    // 0x4f1708: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4f1708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4f170c:
    // 0x4f170c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f170cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4f1710:
    // 0x4f1710: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4f1710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4f1714:
    // 0x4f1714: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4f1714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f1718:
    // 0x4f1718: 0xc055ea8  jal         func_157AA0
label_4f171c:
    if (ctx->pc == 0x4F171Cu) {
        ctx->pc = 0x4F171Cu;
            // 0x4f171c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1720u;
        goto label_4f1720;
    }
    ctx->pc = 0x4F1718u;
    SET_GPR_U32(ctx, 31, 0x4F1720u);
    ctx->pc = 0x4F171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1718u;
            // 0x4f171c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1720u; }
        if (ctx->pc != 0x4F1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1720u; }
        if (ctx->pc != 0x4F1720u) { return; }
    }
    ctx->pc = 0x4F1720u;
label_4f1720:
    // 0x4f1720: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4f1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4f1724:
    // 0x4f1724: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f1728:
    // 0x4f1728: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4f1728u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f172c:
    // 0x4f172c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4f172cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f1730:
    // 0x4f1730: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4f1730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f1734:
    // 0x4f1734: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f1734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f1738:
    // 0x4f1738: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f1738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f173c:
    // 0x4f173c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f173cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1740:
    // 0x4f1740: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f1740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1744:
    // 0x4f1744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f1744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1748:
    // 0x4f1748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f1748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f174c:
    // 0x4f174c: 0x3e00008  jr          $ra
label_4f1750:
    if (ctx->pc == 0x4F1750u) {
        ctx->pc = 0x4F1750u;
            // 0x4f1750: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4F1754u;
        goto label_4f1754;
    }
    ctx->pc = 0x4F174Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F174Cu;
            // 0x4f1750: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1754u;
label_4f1754:
    // 0x4f1754: 0x0  nop
    ctx->pc = 0x4f1754u;
    // NOP
label_4f1758:
    // 0x4f1758: 0x0  nop
    ctx->pc = 0x4f1758u;
    // NOP
label_4f175c:
    // 0x4f175c: 0x0  nop
    ctx->pc = 0x4f175cu;
    // NOP
}
