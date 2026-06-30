#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1310
// Address: 0x2a1310 - 0x2a1cd0
void sub_002A1310_0x2a1310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1310_0x2a1310");
#endif

    switch (ctx->pc) {
        case 0x2a1310u: goto label_2a1310;
        case 0x2a1314u: goto label_2a1314;
        case 0x2a1318u: goto label_2a1318;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1320u: goto label_2a1320;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1328u: goto label_2a1328;
        case 0x2a132cu: goto label_2a132c;
        case 0x2a1330u: goto label_2a1330;
        case 0x2a1334u: goto label_2a1334;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1340u: goto label_2a1340;
        case 0x2a1344u: goto label_2a1344;
        case 0x2a1348u: goto label_2a1348;
        case 0x2a134cu: goto label_2a134c;
        case 0x2a1350u: goto label_2a1350;
        case 0x2a1354u: goto label_2a1354;
        case 0x2a1358u: goto label_2a1358;
        case 0x2a135cu: goto label_2a135c;
        case 0x2a1360u: goto label_2a1360;
        case 0x2a1364u: goto label_2a1364;
        case 0x2a1368u: goto label_2a1368;
        case 0x2a136cu: goto label_2a136c;
        case 0x2a1370u: goto label_2a1370;
        case 0x2a1374u: goto label_2a1374;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a137cu: goto label_2a137c;
        case 0x2a1380u: goto label_2a1380;
        case 0x2a1384u: goto label_2a1384;
        case 0x2a1388u: goto label_2a1388;
        case 0x2a138cu: goto label_2a138c;
        case 0x2a1390u: goto label_2a1390;
        case 0x2a1394u: goto label_2a1394;
        case 0x2a1398u: goto label_2a1398;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13a0u: goto label_2a13a0;
        case 0x2a13a4u: goto label_2a13a4;
        case 0x2a13a8u: goto label_2a13a8;
        case 0x2a13acu: goto label_2a13ac;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13b4u: goto label_2a13b4;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13bcu: goto label_2a13bc;
        case 0x2a13c0u: goto label_2a13c0;
        case 0x2a13c4u: goto label_2a13c4;
        case 0x2a13c8u: goto label_2a13c8;
        case 0x2a13ccu: goto label_2a13cc;
        case 0x2a13d0u: goto label_2a13d0;
        case 0x2a13d4u: goto label_2a13d4;
        case 0x2a13d8u: goto label_2a13d8;
        case 0x2a13dcu: goto label_2a13dc;
        case 0x2a13e0u: goto label_2a13e0;
        case 0x2a13e4u: goto label_2a13e4;
        case 0x2a13e8u: goto label_2a13e8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13f0u: goto label_2a13f0;
        case 0x2a13f4u: goto label_2a13f4;
        case 0x2a13f8u: goto label_2a13f8;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1400u: goto label_2a1400;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1408u: goto label_2a1408;
        case 0x2a140cu: goto label_2a140c;
        case 0x2a1410u: goto label_2a1410;
        case 0x2a1414u: goto label_2a1414;
        case 0x2a1418u: goto label_2a1418;
        case 0x2a141cu: goto label_2a141c;
        case 0x2a1420u: goto label_2a1420;
        case 0x2a1424u: goto label_2a1424;
        case 0x2a1428u: goto label_2a1428;
        case 0x2a142cu: goto label_2a142c;
        case 0x2a1430u: goto label_2a1430;
        case 0x2a1434u: goto label_2a1434;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a143cu: goto label_2a143c;
        case 0x2a1440u: goto label_2a1440;
        case 0x2a1444u: goto label_2a1444;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a144cu: goto label_2a144c;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a1454u: goto label_2a1454;
        case 0x2a1458u: goto label_2a1458;
        case 0x2a145cu: goto label_2a145c;
        case 0x2a1460u: goto label_2a1460;
        case 0x2a1464u: goto label_2a1464;
        case 0x2a1468u: goto label_2a1468;
        case 0x2a146cu: goto label_2a146c;
        case 0x2a1470u: goto label_2a1470;
        case 0x2a1474u: goto label_2a1474;
        case 0x2a1478u: goto label_2a1478;
        case 0x2a147cu: goto label_2a147c;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a1484u: goto label_2a1484;
        case 0x2a1488u: goto label_2a1488;
        case 0x2a148cu: goto label_2a148c;
        case 0x2a1490u: goto label_2a1490;
        case 0x2a1494u: goto label_2a1494;
        case 0x2a1498u: goto label_2a1498;
        case 0x2a149cu: goto label_2a149c;
        case 0x2a14a0u: goto label_2a14a0;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14a8u: goto label_2a14a8;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14b0u: goto label_2a14b0;
        case 0x2a14b4u: goto label_2a14b4;
        case 0x2a14b8u: goto label_2a14b8;
        case 0x2a14bcu: goto label_2a14bc;
        case 0x2a14c0u: goto label_2a14c0;
        case 0x2a14c4u: goto label_2a14c4;
        case 0x2a14c8u: goto label_2a14c8;
        case 0x2a14ccu: goto label_2a14cc;
        case 0x2a14d0u: goto label_2a14d0;
        case 0x2a14d4u: goto label_2a14d4;
        case 0x2a14d8u: goto label_2a14d8;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14e0u: goto label_2a14e0;
        case 0x2a14e4u: goto label_2a14e4;
        case 0x2a14e8u: goto label_2a14e8;
        case 0x2a14ecu: goto label_2a14ec;
        case 0x2a14f0u: goto label_2a14f0;
        case 0x2a14f4u: goto label_2a14f4;
        case 0x2a14f8u: goto label_2a14f8;
        case 0x2a14fcu: goto label_2a14fc;
        case 0x2a1500u: goto label_2a1500;
        case 0x2a1504u: goto label_2a1504;
        case 0x2a1508u: goto label_2a1508;
        case 0x2a150cu: goto label_2a150c;
        case 0x2a1510u: goto label_2a1510;
        case 0x2a1514u: goto label_2a1514;
        case 0x2a1518u: goto label_2a1518;
        case 0x2a151cu: goto label_2a151c;
        case 0x2a1520u: goto label_2a1520;
        case 0x2a1524u: goto label_2a1524;
        case 0x2a1528u: goto label_2a1528;
        case 0x2a152cu: goto label_2a152c;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1534u: goto label_2a1534;
        case 0x2a1538u: goto label_2a1538;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a1540u: goto label_2a1540;
        case 0x2a1544u: goto label_2a1544;
        case 0x2a1548u: goto label_2a1548;
        case 0x2a154cu: goto label_2a154c;
        case 0x2a1550u: goto label_2a1550;
        case 0x2a1554u: goto label_2a1554;
        case 0x2a1558u: goto label_2a1558;
        case 0x2a155cu: goto label_2a155c;
        case 0x2a1560u: goto label_2a1560;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a1568u: goto label_2a1568;
        case 0x2a156cu: goto label_2a156c;
        case 0x2a1570u: goto label_2a1570;
        case 0x2a1574u: goto label_2a1574;
        case 0x2a1578u: goto label_2a1578;
        case 0x2a157cu: goto label_2a157c;
        case 0x2a1580u: goto label_2a1580;
        case 0x2a1584u: goto label_2a1584;
        case 0x2a1588u: goto label_2a1588;
        case 0x2a158cu: goto label_2a158c;
        case 0x2a1590u: goto label_2a1590;
        case 0x2a1594u: goto label_2a1594;
        case 0x2a1598u: goto label_2a1598;
        case 0x2a159cu: goto label_2a159c;
        case 0x2a15a0u: goto label_2a15a0;
        case 0x2a15a4u: goto label_2a15a4;
        case 0x2a15a8u: goto label_2a15a8;
        case 0x2a15acu: goto label_2a15ac;
        case 0x2a15b0u: goto label_2a15b0;
        case 0x2a15b4u: goto label_2a15b4;
        case 0x2a15b8u: goto label_2a15b8;
        case 0x2a15bcu: goto label_2a15bc;
        case 0x2a15c0u: goto label_2a15c0;
        case 0x2a15c4u: goto label_2a15c4;
        case 0x2a15c8u: goto label_2a15c8;
        case 0x2a15ccu: goto label_2a15cc;
        case 0x2a15d0u: goto label_2a15d0;
        case 0x2a15d4u: goto label_2a15d4;
        case 0x2a15d8u: goto label_2a15d8;
        case 0x2a15dcu: goto label_2a15dc;
        case 0x2a15e0u: goto label_2a15e0;
        case 0x2a15e4u: goto label_2a15e4;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a15ecu: goto label_2a15ec;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a15f4u: goto label_2a15f4;
        case 0x2a15f8u: goto label_2a15f8;
        case 0x2a15fcu: goto label_2a15fc;
        case 0x2a1600u: goto label_2a1600;
        case 0x2a1604u: goto label_2a1604;
        case 0x2a1608u: goto label_2a1608;
        case 0x2a160cu: goto label_2a160c;
        case 0x2a1610u: goto label_2a1610;
        case 0x2a1614u: goto label_2a1614;
        case 0x2a1618u: goto label_2a1618;
        case 0x2a161cu: goto label_2a161c;
        case 0x2a1620u: goto label_2a1620;
        case 0x2a1624u: goto label_2a1624;
        case 0x2a1628u: goto label_2a1628;
        case 0x2a162cu: goto label_2a162c;
        case 0x2a1630u: goto label_2a1630;
        case 0x2a1634u: goto label_2a1634;
        case 0x2a1638u: goto label_2a1638;
        case 0x2a163cu: goto label_2a163c;
        case 0x2a1640u: goto label_2a1640;
        case 0x2a1644u: goto label_2a1644;
        case 0x2a1648u: goto label_2a1648;
        case 0x2a164cu: goto label_2a164c;
        case 0x2a1650u: goto label_2a1650;
        case 0x2a1654u: goto label_2a1654;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a165cu: goto label_2a165c;
        case 0x2a1660u: goto label_2a1660;
        case 0x2a1664u: goto label_2a1664;
        case 0x2a1668u: goto label_2a1668;
        case 0x2a166cu: goto label_2a166c;
        case 0x2a1670u: goto label_2a1670;
        case 0x2a1674u: goto label_2a1674;
        case 0x2a1678u: goto label_2a1678;
        case 0x2a167cu: goto label_2a167c;
        case 0x2a1680u: goto label_2a1680;
        case 0x2a1684u: goto label_2a1684;
        case 0x2a1688u: goto label_2a1688;
        case 0x2a168cu: goto label_2a168c;
        case 0x2a1690u: goto label_2a1690;
        case 0x2a1694u: goto label_2a1694;
        case 0x2a1698u: goto label_2a1698;
        case 0x2a169cu: goto label_2a169c;
        case 0x2a16a0u: goto label_2a16a0;
        case 0x2a16a4u: goto label_2a16a4;
        case 0x2a16a8u: goto label_2a16a8;
        case 0x2a16acu: goto label_2a16ac;
        case 0x2a16b0u: goto label_2a16b0;
        case 0x2a16b4u: goto label_2a16b4;
        case 0x2a16b8u: goto label_2a16b8;
        case 0x2a16bcu: goto label_2a16bc;
        case 0x2a16c0u: goto label_2a16c0;
        case 0x2a16c4u: goto label_2a16c4;
        case 0x2a16c8u: goto label_2a16c8;
        case 0x2a16ccu: goto label_2a16cc;
        case 0x2a16d0u: goto label_2a16d0;
        case 0x2a16d4u: goto label_2a16d4;
        case 0x2a16d8u: goto label_2a16d8;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16e0u: goto label_2a16e0;
        case 0x2a16e4u: goto label_2a16e4;
        case 0x2a16e8u: goto label_2a16e8;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a16f0u: goto label_2a16f0;
        case 0x2a16f4u: goto label_2a16f4;
        case 0x2a16f8u: goto label_2a16f8;
        case 0x2a16fcu: goto label_2a16fc;
        case 0x2a1700u: goto label_2a1700;
        case 0x2a1704u: goto label_2a1704;
        case 0x2a1708u: goto label_2a1708;
        case 0x2a170cu: goto label_2a170c;
        case 0x2a1710u: goto label_2a1710;
        case 0x2a1714u: goto label_2a1714;
        case 0x2a1718u: goto label_2a1718;
        case 0x2a171cu: goto label_2a171c;
        case 0x2a1720u: goto label_2a1720;
        case 0x2a1724u: goto label_2a1724;
        case 0x2a1728u: goto label_2a1728;
        case 0x2a172cu: goto label_2a172c;
        case 0x2a1730u: goto label_2a1730;
        case 0x2a1734u: goto label_2a1734;
        case 0x2a1738u: goto label_2a1738;
        case 0x2a173cu: goto label_2a173c;
        case 0x2a1740u: goto label_2a1740;
        case 0x2a1744u: goto label_2a1744;
        case 0x2a1748u: goto label_2a1748;
        case 0x2a174cu: goto label_2a174c;
        case 0x2a1750u: goto label_2a1750;
        case 0x2a1754u: goto label_2a1754;
        case 0x2a1758u: goto label_2a1758;
        case 0x2a175cu: goto label_2a175c;
        case 0x2a1760u: goto label_2a1760;
        case 0x2a1764u: goto label_2a1764;
        case 0x2a1768u: goto label_2a1768;
        case 0x2a176cu: goto label_2a176c;
        case 0x2a1770u: goto label_2a1770;
        case 0x2a1774u: goto label_2a1774;
        case 0x2a1778u: goto label_2a1778;
        case 0x2a177cu: goto label_2a177c;
        case 0x2a1780u: goto label_2a1780;
        case 0x2a1784u: goto label_2a1784;
        case 0x2a1788u: goto label_2a1788;
        case 0x2a178cu: goto label_2a178c;
        case 0x2a1790u: goto label_2a1790;
        case 0x2a1794u: goto label_2a1794;
        case 0x2a1798u: goto label_2a1798;
        case 0x2a179cu: goto label_2a179c;
        case 0x2a17a0u: goto label_2a17a0;
        case 0x2a17a4u: goto label_2a17a4;
        case 0x2a17a8u: goto label_2a17a8;
        case 0x2a17acu: goto label_2a17ac;
        case 0x2a17b0u: goto label_2a17b0;
        case 0x2a17b4u: goto label_2a17b4;
        case 0x2a17b8u: goto label_2a17b8;
        case 0x2a17bcu: goto label_2a17bc;
        case 0x2a17c0u: goto label_2a17c0;
        case 0x2a17c4u: goto label_2a17c4;
        case 0x2a17c8u: goto label_2a17c8;
        case 0x2a17ccu: goto label_2a17cc;
        case 0x2a17d0u: goto label_2a17d0;
        case 0x2a17d4u: goto label_2a17d4;
        case 0x2a17d8u: goto label_2a17d8;
        case 0x2a17dcu: goto label_2a17dc;
        case 0x2a17e0u: goto label_2a17e0;
        case 0x2a17e4u: goto label_2a17e4;
        case 0x2a17e8u: goto label_2a17e8;
        case 0x2a17ecu: goto label_2a17ec;
        case 0x2a17f0u: goto label_2a17f0;
        case 0x2a17f4u: goto label_2a17f4;
        case 0x2a17f8u: goto label_2a17f8;
        case 0x2a17fcu: goto label_2a17fc;
        case 0x2a1800u: goto label_2a1800;
        case 0x2a1804u: goto label_2a1804;
        case 0x2a1808u: goto label_2a1808;
        case 0x2a180cu: goto label_2a180c;
        case 0x2a1810u: goto label_2a1810;
        case 0x2a1814u: goto label_2a1814;
        case 0x2a1818u: goto label_2a1818;
        case 0x2a181cu: goto label_2a181c;
        case 0x2a1820u: goto label_2a1820;
        case 0x2a1824u: goto label_2a1824;
        case 0x2a1828u: goto label_2a1828;
        case 0x2a182cu: goto label_2a182c;
        case 0x2a1830u: goto label_2a1830;
        case 0x2a1834u: goto label_2a1834;
        case 0x2a1838u: goto label_2a1838;
        case 0x2a183cu: goto label_2a183c;
        case 0x2a1840u: goto label_2a1840;
        case 0x2a1844u: goto label_2a1844;
        case 0x2a1848u: goto label_2a1848;
        case 0x2a184cu: goto label_2a184c;
        case 0x2a1850u: goto label_2a1850;
        case 0x2a1854u: goto label_2a1854;
        case 0x2a1858u: goto label_2a1858;
        case 0x2a185cu: goto label_2a185c;
        case 0x2a1860u: goto label_2a1860;
        case 0x2a1864u: goto label_2a1864;
        case 0x2a1868u: goto label_2a1868;
        case 0x2a186cu: goto label_2a186c;
        case 0x2a1870u: goto label_2a1870;
        case 0x2a1874u: goto label_2a1874;
        case 0x2a1878u: goto label_2a1878;
        case 0x2a187cu: goto label_2a187c;
        case 0x2a1880u: goto label_2a1880;
        case 0x2a1884u: goto label_2a1884;
        case 0x2a1888u: goto label_2a1888;
        case 0x2a188cu: goto label_2a188c;
        case 0x2a1890u: goto label_2a1890;
        case 0x2a1894u: goto label_2a1894;
        case 0x2a1898u: goto label_2a1898;
        case 0x2a189cu: goto label_2a189c;
        case 0x2a18a0u: goto label_2a18a0;
        case 0x2a18a4u: goto label_2a18a4;
        case 0x2a18a8u: goto label_2a18a8;
        case 0x2a18acu: goto label_2a18ac;
        case 0x2a18b0u: goto label_2a18b0;
        case 0x2a18b4u: goto label_2a18b4;
        case 0x2a18b8u: goto label_2a18b8;
        case 0x2a18bcu: goto label_2a18bc;
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a18c4u: goto label_2a18c4;
        case 0x2a18c8u: goto label_2a18c8;
        case 0x2a18ccu: goto label_2a18cc;
        case 0x2a18d0u: goto label_2a18d0;
        case 0x2a18d4u: goto label_2a18d4;
        case 0x2a18d8u: goto label_2a18d8;
        case 0x2a18dcu: goto label_2a18dc;
        case 0x2a18e0u: goto label_2a18e0;
        case 0x2a18e4u: goto label_2a18e4;
        case 0x2a18e8u: goto label_2a18e8;
        case 0x2a18ecu: goto label_2a18ec;
        case 0x2a18f0u: goto label_2a18f0;
        case 0x2a18f4u: goto label_2a18f4;
        case 0x2a18f8u: goto label_2a18f8;
        case 0x2a18fcu: goto label_2a18fc;
        case 0x2a1900u: goto label_2a1900;
        case 0x2a1904u: goto label_2a1904;
        case 0x2a1908u: goto label_2a1908;
        case 0x2a190cu: goto label_2a190c;
        case 0x2a1910u: goto label_2a1910;
        case 0x2a1914u: goto label_2a1914;
        case 0x2a1918u: goto label_2a1918;
        case 0x2a191cu: goto label_2a191c;
        case 0x2a1920u: goto label_2a1920;
        case 0x2a1924u: goto label_2a1924;
        case 0x2a1928u: goto label_2a1928;
        case 0x2a192cu: goto label_2a192c;
        case 0x2a1930u: goto label_2a1930;
        case 0x2a1934u: goto label_2a1934;
        case 0x2a1938u: goto label_2a1938;
        case 0x2a193cu: goto label_2a193c;
        case 0x2a1940u: goto label_2a1940;
        case 0x2a1944u: goto label_2a1944;
        case 0x2a1948u: goto label_2a1948;
        case 0x2a194cu: goto label_2a194c;
        case 0x2a1950u: goto label_2a1950;
        case 0x2a1954u: goto label_2a1954;
        case 0x2a1958u: goto label_2a1958;
        case 0x2a195cu: goto label_2a195c;
        case 0x2a1960u: goto label_2a1960;
        case 0x2a1964u: goto label_2a1964;
        case 0x2a1968u: goto label_2a1968;
        case 0x2a196cu: goto label_2a196c;
        case 0x2a1970u: goto label_2a1970;
        case 0x2a1974u: goto label_2a1974;
        case 0x2a1978u: goto label_2a1978;
        case 0x2a197cu: goto label_2a197c;
        case 0x2a1980u: goto label_2a1980;
        case 0x2a1984u: goto label_2a1984;
        case 0x2a1988u: goto label_2a1988;
        case 0x2a198cu: goto label_2a198c;
        case 0x2a1990u: goto label_2a1990;
        case 0x2a1994u: goto label_2a1994;
        case 0x2a1998u: goto label_2a1998;
        case 0x2a199cu: goto label_2a199c;
        case 0x2a19a0u: goto label_2a19a0;
        case 0x2a19a4u: goto label_2a19a4;
        case 0x2a19a8u: goto label_2a19a8;
        case 0x2a19acu: goto label_2a19ac;
        case 0x2a19b0u: goto label_2a19b0;
        case 0x2a19b4u: goto label_2a19b4;
        case 0x2a19b8u: goto label_2a19b8;
        case 0x2a19bcu: goto label_2a19bc;
        case 0x2a19c0u: goto label_2a19c0;
        case 0x2a19c4u: goto label_2a19c4;
        case 0x2a19c8u: goto label_2a19c8;
        case 0x2a19ccu: goto label_2a19cc;
        case 0x2a19d0u: goto label_2a19d0;
        case 0x2a19d4u: goto label_2a19d4;
        case 0x2a19d8u: goto label_2a19d8;
        case 0x2a19dcu: goto label_2a19dc;
        case 0x2a19e0u: goto label_2a19e0;
        case 0x2a19e4u: goto label_2a19e4;
        case 0x2a19e8u: goto label_2a19e8;
        case 0x2a19ecu: goto label_2a19ec;
        case 0x2a19f0u: goto label_2a19f0;
        case 0x2a19f4u: goto label_2a19f4;
        case 0x2a19f8u: goto label_2a19f8;
        case 0x2a19fcu: goto label_2a19fc;
        case 0x2a1a00u: goto label_2a1a00;
        case 0x2a1a04u: goto label_2a1a04;
        case 0x2a1a08u: goto label_2a1a08;
        case 0x2a1a0cu: goto label_2a1a0c;
        case 0x2a1a10u: goto label_2a1a10;
        case 0x2a1a14u: goto label_2a1a14;
        case 0x2a1a18u: goto label_2a1a18;
        case 0x2a1a1cu: goto label_2a1a1c;
        case 0x2a1a20u: goto label_2a1a20;
        case 0x2a1a24u: goto label_2a1a24;
        case 0x2a1a28u: goto label_2a1a28;
        case 0x2a1a2cu: goto label_2a1a2c;
        case 0x2a1a30u: goto label_2a1a30;
        case 0x2a1a34u: goto label_2a1a34;
        case 0x2a1a38u: goto label_2a1a38;
        case 0x2a1a3cu: goto label_2a1a3c;
        case 0x2a1a40u: goto label_2a1a40;
        case 0x2a1a44u: goto label_2a1a44;
        case 0x2a1a48u: goto label_2a1a48;
        case 0x2a1a4cu: goto label_2a1a4c;
        case 0x2a1a50u: goto label_2a1a50;
        case 0x2a1a54u: goto label_2a1a54;
        case 0x2a1a58u: goto label_2a1a58;
        case 0x2a1a5cu: goto label_2a1a5c;
        case 0x2a1a60u: goto label_2a1a60;
        case 0x2a1a64u: goto label_2a1a64;
        case 0x2a1a68u: goto label_2a1a68;
        case 0x2a1a6cu: goto label_2a1a6c;
        case 0x2a1a70u: goto label_2a1a70;
        case 0x2a1a74u: goto label_2a1a74;
        case 0x2a1a78u: goto label_2a1a78;
        case 0x2a1a7cu: goto label_2a1a7c;
        case 0x2a1a80u: goto label_2a1a80;
        case 0x2a1a84u: goto label_2a1a84;
        case 0x2a1a88u: goto label_2a1a88;
        case 0x2a1a8cu: goto label_2a1a8c;
        case 0x2a1a90u: goto label_2a1a90;
        case 0x2a1a94u: goto label_2a1a94;
        case 0x2a1a98u: goto label_2a1a98;
        case 0x2a1a9cu: goto label_2a1a9c;
        case 0x2a1aa0u: goto label_2a1aa0;
        case 0x2a1aa4u: goto label_2a1aa4;
        case 0x2a1aa8u: goto label_2a1aa8;
        case 0x2a1aacu: goto label_2a1aac;
        case 0x2a1ab0u: goto label_2a1ab0;
        case 0x2a1ab4u: goto label_2a1ab4;
        case 0x2a1ab8u: goto label_2a1ab8;
        case 0x2a1abcu: goto label_2a1abc;
        case 0x2a1ac0u: goto label_2a1ac0;
        case 0x2a1ac4u: goto label_2a1ac4;
        case 0x2a1ac8u: goto label_2a1ac8;
        case 0x2a1accu: goto label_2a1acc;
        case 0x2a1ad0u: goto label_2a1ad0;
        case 0x2a1ad4u: goto label_2a1ad4;
        case 0x2a1ad8u: goto label_2a1ad8;
        case 0x2a1adcu: goto label_2a1adc;
        case 0x2a1ae0u: goto label_2a1ae0;
        case 0x2a1ae4u: goto label_2a1ae4;
        case 0x2a1ae8u: goto label_2a1ae8;
        case 0x2a1aecu: goto label_2a1aec;
        case 0x2a1af0u: goto label_2a1af0;
        case 0x2a1af4u: goto label_2a1af4;
        case 0x2a1af8u: goto label_2a1af8;
        case 0x2a1afcu: goto label_2a1afc;
        case 0x2a1b00u: goto label_2a1b00;
        case 0x2a1b04u: goto label_2a1b04;
        case 0x2a1b08u: goto label_2a1b08;
        case 0x2a1b0cu: goto label_2a1b0c;
        case 0x2a1b10u: goto label_2a1b10;
        case 0x2a1b14u: goto label_2a1b14;
        case 0x2a1b18u: goto label_2a1b18;
        case 0x2a1b1cu: goto label_2a1b1c;
        case 0x2a1b20u: goto label_2a1b20;
        case 0x2a1b24u: goto label_2a1b24;
        case 0x2a1b28u: goto label_2a1b28;
        case 0x2a1b2cu: goto label_2a1b2c;
        case 0x2a1b30u: goto label_2a1b30;
        case 0x2a1b34u: goto label_2a1b34;
        case 0x2a1b38u: goto label_2a1b38;
        case 0x2a1b3cu: goto label_2a1b3c;
        case 0x2a1b40u: goto label_2a1b40;
        case 0x2a1b44u: goto label_2a1b44;
        case 0x2a1b48u: goto label_2a1b48;
        case 0x2a1b4cu: goto label_2a1b4c;
        case 0x2a1b50u: goto label_2a1b50;
        case 0x2a1b54u: goto label_2a1b54;
        case 0x2a1b58u: goto label_2a1b58;
        case 0x2a1b5cu: goto label_2a1b5c;
        case 0x2a1b60u: goto label_2a1b60;
        case 0x2a1b64u: goto label_2a1b64;
        case 0x2a1b68u: goto label_2a1b68;
        case 0x2a1b6cu: goto label_2a1b6c;
        case 0x2a1b70u: goto label_2a1b70;
        case 0x2a1b74u: goto label_2a1b74;
        case 0x2a1b78u: goto label_2a1b78;
        case 0x2a1b7cu: goto label_2a1b7c;
        case 0x2a1b80u: goto label_2a1b80;
        case 0x2a1b84u: goto label_2a1b84;
        case 0x2a1b88u: goto label_2a1b88;
        case 0x2a1b8cu: goto label_2a1b8c;
        case 0x2a1b90u: goto label_2a1b90;
        case 0x2a1b94u: goto label_2a1b94;
        case 0x2a1b98u: goto label_2a1b98;
        case 0x2a1b9cu: goto label_2a1b9c;
        case 0x2a1ba0u: goto label_2a1ba0;
        case 0x2a1ba4u: goto label_2a1ba4;
        case 0x2a1ba8u: goto label_2a1ba8;
        case 0x2a1bacu: goto label_2a1bac;
        case 0x2a1bb0u: goto label_2a1bb0;
        case 0x2a1bb4u: goto label_2a1bb4;
        case 0x2a1bb8u: goto label_2a1bb8;
        case 0x2a1bbcu: goto label_2a1bbc;
        case 0x2a1bc0u: goto label_2a1bc0;
        case 0x2a1bc4u: goto label_2a1bc4;
        case 0x2a1bc8u: goto label_2a1bc8;
        case 0x2a1bccu: goto label_2a1bcc;
        case 0x2a1bd0u: goto label_2a1bd0;
        case 0x2a1bd4u: goto label_2a1bd4;
        case 0x2a1bd8u: goto label_2a1bd8;
        case 0x2a1bdcu: goto label_2a1bdc;
        case 0x2a1be0u: goto label_2a1be0;
        case 0x2a1be4u: goto label_2a1be4;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1becu: goto label_2a1bec;
        case 0x2a1bf0u: goto label_2a1bf0;
        case 0x2a1bf4u: goto label_2a1bf4;
        case 0x2a1bf8u: goto label_2a1bf8;
        case 0x2a1bfcu: goto label_2a1bfc;
        case 0x2a1c00u: goto label_2a1c00;
        case 0x2a1c04u: goto label_2a1c04;
        case 0x2a1c08u: goto label_2a1c08;
        case 0x2a1c0cu: goto label_2a1c0c;
        case 0x2a1c10u: goto label_2a1c10;
        case 0x2a1c14u: goto label_2a1c14;
        case 0x2a1c18u: goto label_2a1c18;
        case 0x2a1c1cu: goto label_2a1c1c;
        case 0x2a1c20u: goto label_2a1c20;
        case 0x2a1c24u: goto label_2a1c24;
        case 0x2a1c28u: goto label_2a1c28;
        case 0x2a1c2cu: goto label_2a1c2c;
        case 0x2a1c30u: goto label_2a1c30;
        case 0x2a1c34u: goto label_2a1c34;
        case 0x2a1c38u: goto label_2a1c38;
        case 0x2a1c3cu: goto label_2a1c3c;
        case 0x2a1c40u: goto label_2a1c40;
        case 0x2a1c44u: goto label_2a1c44;
        case 0x2a1c48u: goto label_2a1c48;
        case 0x2a1c4cu: goto label_2a1c4c;
        case 0x2a1c50u: goto label_2a1c50;
        case 0x2a1c54u: goto label_2a1c54;
        case 0x2a1c58u: goto label_2a1c58;
        case 0x2a1c5cu: goto label_2a1c5c;
        case 0x2a1c60u: goto label_2a1c60;
        case 0x2a1c64u: goto label_2a1c64;
        case 0x2a1c68u: goto label_2a1c68;
        case 0x2a1c6cu: goto label_2a1c6c;
        case 0x2a1c70u: goto label_2a1c70;
        case 0x2a1c74u: goto label_2a1c74;
        case 0x2a1c78u: goto label_2a1c78;
        case 0x2a1c7cu: goto label_2a1c7c;
        case 0x2a1c80u: goto label_2a1c80;
        case 0x2a1c84u: goto label_2a1c84;
        case 0x2a1c88u: goto label_2a1c88;
        case 0x2a1c8cu: goto label_2a1c8c;
        case 0x2a1c90u: goto label_2a1c90;
        case 0x2a1c94u: goto label_2a1c94;
        case 0x2a1c98u: goto label_2a1c98;
        case 0x2a1c9cu: goto label_2a1c9c;
        case 0x2a1ca0u: goto label_2a1ca0;
        case 0x2a1ca4u: goto label_2a1ca4;
        case 0x2a1ca8u: goto label_2a1ca8;
        case 0x2a1cacu: goto label_2a1cac;
        case 0x2a1cb0u: goto label_2a1cb0;
        case 0x2a1cb4u: goto label_2a1cb4;
        case 0x2a1cb8u: goto label_2a1cb8;
        case 0x2a1cbcu: goto label_2a1cbc;
        case 0x2a1cc0u: goto label_2a1cc0;
        case 0x2a1cc4u: goto label_2a1cc4;
        case 0x2a1cc8u: goto label_2a1cc8;
        case 0x2a1cccu: goto label_2a1ccc;
        default: break;
    }

    ctx->pc = 0x2a1310u;

label_2a1310:
    // 0x2a1310: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x2a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
label_2a1314:
    // 0x2a1314: 0x3e00008  jr          $ra
label_2a1318:
    if (ctx->pc == 0x2A1318u) {
        ctx->pc = 0x2A1318u;
            // 0x2a1318: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2A131Cu;
        goto label_2a131c;
    }
    ctx->pc = 0x2A1314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1314u;
            // 0x2a1318: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A131Cu;
label_2a131c:
    // 0x2a131c: 0x0  nop
    ctx->pc = 0x2a131cu;
    // NOP
label_2a1320:
    // 0x2a1320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a1324:
    // 0x2a1324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a1328:
    // 0x2a1328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a132c:
    // 0x2a132c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a132cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1330:
    // 0x2a1330: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_2a1334:
    if (ctx->pc == 0x2A1334u) {
        ctx->pc = 0x2A1334u;
            // 0x2a1334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1338u;
        goto label_2a1338;
    }
    ctx->pc = 0x2A1330u;
    {
        const bool branch_taken_0x2a1330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1330) {
            ctx->pc = 0x2A1334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1330u;
            // 0x2a1334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A139Cu;
            goto label_2a139c;
        }
    }
    ctx->pc = 0x2A1338u;
label_2a1338:
    // 0x2a1338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a133c:
    // 0x2a133c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a1340:
    // 0x2a1340: 0x2442f940  addiu       $v0, $v0, -0x6C0
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_2a1344:
    // 0x2a1344: 0x2463f94c  addiu       $v1, $v1, -0x6B4
    ctx->pc = 0x2a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965580));
label_2a1348:
    // 0x2a1348: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a1348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a134c:
    // 0x2a134c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2a134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2a1350:
    // 0x2a1350: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a1354:
    if (ctx->pc == 0x2A1354u) {
        ctx->pc = 0x2A1354u;
            // 0x2a1354: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2A1358u;
        goto label_2a1358;
    }
    ctx->pc = 0x2A1350u;
    {
        const bool branch_taken_0x2a1350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1350u;
            // 0x2a1354: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1350) {
            ctx->pc = 0x2A1364u;
            goto label_2a1364;
        }
    }
    ctx->pc = 0x2A1358u;
label_2a1358:
    // 0x2a1358: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a135c:
    // 0x2a135c: 0x2442cb90  addiu       $v0, $v0, -0x3470
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953872));
label_2a1360:
    // 0x2a1360: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a1360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a1364:
    // 0x2a1364: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_2a1368:
    if (ctx->pc == 0x2A1368u) {
        ctx->pc = 0x2A1368u;
            // 0x2a1368: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x2A136Cu;
        goto label_2a136c;
    }
    ctx->pc = 0x2A1364u;
    {
        const bool branch_taken_0x2a1364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1364) {
            ctx->pc = 0x2A1368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1364u;
            // 0x2a1368: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1384u;
            goto label_2a1384;
        }
    }
    ctx->pc = 0x2A136Cu;
label_2a136c:
    // 0x2a136c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a1370:
    // 0x2a1370: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a1374:
    // 0x2a1374: 0x2463cbb8  addiu       $v1, $v1, -0x3448
    ctx->pc = 0x2a1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953912));
label_2a1378:
    // 0x2a1378: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a1378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2a137c:
    // 0x2a137c: 0xac4089e0  sw          $zero, -0x7620($v0)
    ctx->pc = 0x2a137cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937056), GPR_U32(ctx, 0));
label_2a1380:
    // 0x2a1380: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a1380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2a1384:
    // 0x2a1384: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a1384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a1388:
    // 0x2a1388: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2a138c:
    if (ctx->pc == 0x2A138Cu) {
        ctx->pc = 0x2A1390u;
        goto label_2a1390;
    }
    ctx->pc = 0x2A1388u;
    {
        const bool branch_taken_0x2a1388 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a1388) {
            ctx->pc = 0x2A1398u;
            goto label_2a1398;
        }
    }
    ctx->pc = 0x2A1390u;
label_2a1390:
    // 0x2a1390: 0xc0400a8  jal         func_1002A0
label_2a1394:
    if (ctx->pc == 0x2A1394u) {
        ctx->pc = 0x2A1394u;
            // 0x2a1394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1398u;
        goto label_2a1398;
    }
    ctx->pc = 0x2A1390u;
    SET_GPR_U32(ctx, 31, 0x2A1398u);
    ctx->pc = 0x2A1394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1390u;
            // 0x2a1394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1398u; }
        if (ctx->pc != 0x2A1398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1398u; }
        if (ctx->pc != 0x2A1398u) { return; }
    }
    ctx->pc = 0x2A1398u;
label_2a1398:
    // 0x2a1398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a1398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a139c:
    // 0x2a139c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a13a0:
    // 0x2a13a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a13a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a13a4:
    // 0x2a13a4: 0x3e00008  jr          $ra
label_2a13a8:
    if (ctx->pc == 0x2A13A8u) {
        ctx->pc = 0x2A13A8u;
            // 0x2a13a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A13ACu;
        goto label_2a13ac;
    }
    ctx->pc = 0x2A13A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A13A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13A4u;
            // 0x2a13a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A13ACu;
label_2a13ac:
    // 0x2a13ac: 0x0  nop
    ctx->pc = 0x2a13acu;
    // NOP
label_2a13b0:
    // 0x2a13b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a13b4:
    // 0x2a13b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a13b8:
    // 0x2a13b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a13bc:
    // 0x2a13bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a13c0:
    // 0x2a13c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a13c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a13c4:
    // 0x2a13c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a13c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a13c8:
    // 0x2a13c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a13c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a13cc:
    // 0x2a13cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a13ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d0:
    // 0x2a13d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a13d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2a13d4:
    // 0x2a13d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a13d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d8:
    // 0x2a13d8: 0xc050f78  jal         func_143DE0
label_2a13dc:
    if (ctx->pc == 0x2A13DCu) {
        ctx->pc = 0x2A13DCu;
            // 0x2a13dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A13E0u;
        goto label_2a13e0;
    }
    ctx->pc = 0x2A13D8u;
    SET_GPR_U32(ctx, 31, 0x2A13E0u);
    ctx->pc = 0x2A13DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13D8u;
            // 0x2a13dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143DE0u;
    if (runtime->hasFunction(0x143DE0u)) {
        auto targetFn = runtime->lookupFunction(0x143DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13E0u; }
        if (ctx->pc != 0x2A13E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DE0_0x143de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13E0u; }
        if (ctx->pc != 0x2A13E0u) { return; }
    }
    ctx->pc = 0x2A13E0u;
label_2a13e0:
    // 0x2a13e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a13e4:
    // 0x2a13e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a13e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a13e8:
    // 0x2a13e8: 0xc05102c  jal         func_1440B0
label_2a13ec:
    if (ctx->pc == 0x2A13ECu) {
        ctx->pc = 0x2A13ECu;
            // 0x2a13ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2A13F0u;
        goto label_2a13f0;
    }
    ctx->pc = 0x2A13E8u;
    SET_GPR_U32(ctx, 31, 0x2A13F0u);
    ctx->pc = 0x2A13ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13E8u;
            // 0x2a13ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1440B0u;
    if (runtime->hasFunction(0x1440B0u)) {
        auto targetFn = runtime->lookupFunction(0x1440B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13F0u; }
        if (ctx->pc != 0x2A13F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001440B0_0x1440b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13F0u; }
        if (ctx->pc != 0x2A13F0u) { return; }
    }
    ctx->pc = 0x2A13F0u;
label_2a13f0:
    // 0x2a13f0: 0xc0512e4  jal         func_144B90
label_2a13f4:
    if (ctx->pc == 0x2A13F4u) {
        ctx->pc = 0x2A13F8u;
        goto label_2a13f8;
    }
    ctx->pc = 0x2A13F0u;
    SET_GPR_U32(ctx, 31, 0x2A13F8u);
    ctx->pc = 0x144B90u;
    if (runtime->hasFunction(0x144B90u)) {
        auto targetFn = runtime->lookupFunction(0x144B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13F8u; }
        if (ctx->pc != 0x2A13F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144B90_0x144b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13F8u; }
        if (ctx->pc != 0x2A13F8u) { return; }
    }
    ctx->pc = 0x2A13F8u;
label_2a13f8:
    // 0x2a13f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a13fc:
    // 0x2a13fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a1400:
    // 0x2a1400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a1400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1404:
    // 0x2a1404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a1404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1408:
    // 0x2a1408: 0x3e00008  jr          $ra
label_2a140c:
    if (ctx->pc == 0x2A140Cu) {
        ctx->pc = 0x2A140Cu;
            // 0x2a140c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A1410u;
        goto label_2a1410;
    }
    ctx->pc = 0x2A1408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1408u;
            // 0x2a140c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1410u;
label_2a1410:
    // 0x2a1410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a1414:
    // 0x2a1414: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a1418:
    // 0x2a1418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a141c:
    // 0x2a141c: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2a1420:
    // 0x2a1420: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a1424:
    // 0x2a1424: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a1428:
    if (ctx->pc == 0x2A1428u) {
        ctx->pc = 0x2A1428u;
            // 0x2a1428: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x2A142Cu;
        goto label_2a142c;
    }
    ctx->pc = 0x2A1424u;
    {
        const bool branch_taken_0x2a1424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1424u;
            // 0x2a1428: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1424) {
            ctx->pc = 0x2A1448u;
            goto label_2a1448;
        }
    }
    ctx->pc = 0x2A142Cu;
label_2a142c:
    // 0x2a142c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2a142cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a1430:
    // 0x2a1430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a1434:
    // 0x2a1434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a1438:
    // 0x2a1438: 0x0  nop
    ctx->pc = 0x2a1438u;
    // NOP
label_2a143c:
    // 0x2a143c: 0x0  nop
    ctx->pc = 0x2a143cu;
    // NOP
label_2a1440:
    // 0x2a1440: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2a1444:
    if (ctx->pc == 0x2A1444u) {
        ctx->pc = 0x2A1448u;
        goto label_2a1448;
    }
    ctx->pc = 0x2A1440u;
    {
        const bool branch_taken_0x2a1440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1440) {
            ctx->pc = 0x2A142Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a142c;
        }
    }
    ctx->pc = 0x2A1448u;
label_2a1448:
    // 0x2a1448: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a144c:
    // 0x2a144c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a1450:
    // 0x2a1450: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x2a1450u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2a1454:
    // 0x2a1454: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a1458:
    if (ctx->pc == 0x2A1458u) {
        ctx->pc = 0x2A1458u;
            // 0x2a1458: 0xe7ad003c  swc1        $f13, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x2A145Cu;
        goto label_2a145c;
    }
    ctx->pc = 0x2A1454u;
    {
        const bool branch_taken_0x2a1454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1454u;
            // 0x2a1458: 0xe7ad003c  swc1        $f13, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1454) {
            ctx->pc = 0x2A1478u;
            goto label_2a1478;
        }
    }
    ctx->pc = 0x2A145Cu;
label_2a145c:
    // 0x2a145c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2a145cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a1460:
    // 0x2a1460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a1464:
    // 0x2a1464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a1468:
    // 0x2a1468: 0x0  nop
    ctx->pc = 0x2a1468u;
    // NOP
label_2a146c:
    // 0x2a146c: 0x0  nop
    ctx->pc = 0x2a146cu;
    // NOP
label_2a1470:
    // 0x2a1470: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2a1474:
    if (ctx->pc == 0x2A1474u) {
        ctx->pc = 0x2A1478u;
        goto label_2a1478;
    }
    ctx->pc = 0x2A1470u;
    {
        const bool branch_taken_0x2a1470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1470) {
            ctx->pc = 0x2A145Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a145c;
        }
    }
    ctx->pc = 0x2A1478u;
label_2a1478:
    // 0x2a1478: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x2a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_2a147c:
    // 0x2a147c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a1480:
    // 0x2a1480: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a1484:
    if (ctx->pc == 0x2A1484u) {
        ctx->pc = 0x2A1484u;
            // 0x2a1484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A1488u;
        goto label_2a1488;
    }
    ctx->pc = 0x2A1480u;
    {
        const bool branch_taken_0x2a1480 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a1480) {
            ctx->pc = 0x2A1484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1480u;
            // 0x2a1484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1494u;
            goto label_2a1494;
        }
    }
    ctx->pc = 0x2A1488u;
label_2a1488:
    // 0x2a1488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a148c:
    // 0x2a148c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a1490:
    if (ctx->pc == 0x2A1490u) {
        ctx->pc = 0x2A1490u;
            // 0x2a1490: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A1494u;
        goto label_2a1494;
    }
    ctx->pc = 0x2A148Cu;
    {
        const bool branch_taken_0x2a148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A148Cu;
            // 0x2a1490: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a148c) {
            ctx->pc = 0x2A14ACu;
            goto label_2a14ac;
        }
    }
    ctx->pc = 0x2A1494u;
label_2a1494:
    // 0x2a1494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a1498:
    // 0x2a1498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a1498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a149c:
    // 0x2a149c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a149cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a14a0:
    // 0x2a14a0: 0x0  nop
    ctx->pc = 0x2a14a0u;
    // NOP
label_2a14a4:
    // 0x2a14a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a14a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a14a8:
    // 0x2a14a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a14a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a14ac:
    // 0x2a14ac: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_2a14b0:
    // 0x2a14b0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_2a14b4:
    // 0x2a14b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a14b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a14b8:
    // 0x2a14b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a14bc:
    // 0x2a14bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a14bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a14c0:
    // 0x2a14c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a14c4:
    if (ctx->pc == 0x2A14C4u) {
        ctx->pc = 0x2A14C4u;
            // 0x2a14c4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->pc = 0x2A14C8u;
        goto label_2a14c8;
    }
    ctx->pc = 0x2A14C0u;
    {
        const bool branch_taken_0x2a14c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A14C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14C0u;
            // 0x2a14c4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14c0) {
            ctx->pc = 0x2A14D4u;
            goto label_2a14d4;
        }
    }
    ctx->pc = 0x2A14C8u;
label_2a14c8:
    // 0x2a14c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a14c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a14cc:
    // 0x2a14cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a14d0:
    if (ctx->pc == 0x2A14D0u) {
        ctx->pc = 0x2A14D0u;
            // 0x2a14d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A14D4u;
        goto label_2a14d4;
    }
    ctx->pc = 0x2A14CCu;
    {
        const bool branch_taken_0x2a14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A14D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14CCu;
            // 0x2a14d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14cc) {
            ctx->pc = 0x2A14F0u;
            goto label_2a14f0;
        }
    }
    ctx->pc = 0x2A14D4u;
label_2a14d4:
    // 0x2a14d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a14d8:
    // 0x2a14d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a14d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a14dc:
    // 0x2a14dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a14dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a14e0:
    // 0x2a14e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a14e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a14e4:
    // 0x2a14e4: 0x0  nop
    ctx->pc = 0x2a14e4u;
    // NOP
label_2a14e8:
    // 0x2a14e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a14e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a14ec:
    // 0x2a14ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a14ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a14f0:
    // 0x2a14f0: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x2a14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_2a14f4:
    // 0x2a14f4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x2a14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_2a14f8:
    // 0x2a14f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a14f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a14fc:
    // 0x2a14fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a14fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a1500:
    // 0x2a1500: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a1500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a1504:
    // 0x2a1504: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a1508:
    if (ctx->pc == 0x2A1508u) {
        ctx->pc = 0x2A1508u;
            // 0x2a1508: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x2A150Cu;
        goto label_2a150c;
    }
    ctx->pc = 0x2A1504u;
    {
        const bool branch_taken_0x2a1504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A1508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1504u;
            // 0x2a1508: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1504) {
            ctx->pc = 0x2A1518u;
            goto label_2a1518;
        }
    }
    ctx->pc = 0x2A150Cu;
label_2a150c:
    // 0x2a150c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a150cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1510:
    // 0x2a1510: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a1514:
    if (ctx->pc == 0x2A1514u) {
        ctx->pc = 0x2A1514u;
            // 0x2a1514: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A1518u;
        goto label_2a1518;
    }
    ctx->pc = 0x2A1510u;
    {
        const bool branch_taken_0x2a1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1510u;
            // 0x2a1514: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1510) {
            ctx->pc = 0x2A1534u;
            goto label_2a1534;
        }
    }
    ctx->pc = 0x2A1518u;
label_2a1518:
    // 0x2a1518: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a1518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a151c:
    // 0x2a151c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a1520:
    // 0x2a1520: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a1520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a1524:
    // 0x2a1524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1528:
    // 0x2a1528: 0x0  nop
    ctx->pc = 0x2a1528u;
    // NOP
label_2a152c:
    // 0x2a152c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a152cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a1530:
    // 0x2a1530: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a1530u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a1534:
    // 0x2a1534: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x2a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_2a1538:
    // 0x2a1538: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a1538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a153c:
    // 0x2a153c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a153cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1540:
    // 0x2a1540: 0x0  nop
    ctx->pc = 0x2a1540u;
    // NOP
label_2a1544:
    // 0x2a1544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a1544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a1548:
    // 0x2a1548: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a154c:
    if (ctx->pc == 0x2A154Cu) {
        ctx->pc = 0x2A154Cu;
            // 0x2a154c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x2A1550u;
        goto label_2a1550;
    }
    ctx->pc = 0x2A1548u;
    {
        const bool branch_taken_0x2a1548 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1548u;
            // 0x2a154c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1548) {
            ctx->pc = 0x2A155Cu;
            goto label_2a155c;
        }
    }
    ctx->pc = 0x2A1550u;
label_2a1550:
    // 0x2a1550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1554:
    // 0x2a1554: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a1558:
    if (ctx->pc == 0x2A1558u) {
        ctx->pc = 0x2A1558u;
            // 0x2a1558: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A155Cu;
        goto label_2a155c;
    }
    ctx->pc = 0x2A1554u;
    {
        const bool branch_taken_0x2a1554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1554u;
            // 0x2a1558: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1554) {
            ctx->pc = 0x2A1578u;
            goto label_2a1578;
        }
    }
    ctx->pc = 0x2A155Cu;
label_2a155c:
    // 0x2a155c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a155cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a1560:
    // 0x2a1560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a1564:
    // 0x2a1564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a1564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a1568:
    // 0x2a1568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a156c:
    // 0x2a156c: 0x0  nop
    ctx->pc = 0x2a156cu;
    // NOP
label_2a1570:
    // 0x2a1570: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a1570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a1574:
    // 0x2a1574: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a1574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a1578:
    // 0x2a1578: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2a1578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_2a157c:
    // 0x2a157c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1580:
    // 0x2a1580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1584:
    // 0x2a1584: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a1584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a1588:
    // 0x2a1588: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a1588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a158c:
    // 0x2a158c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1590:
    // 0x2a1590: 0xc050f78  jal         func_143DE0
label_2a1594:
    if (ctx->pc == 0x2A1594u) {
        ctx->pc = 0x2A1594u;
            // 0x2a1594: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x2A1598u;
        goto label_2a1598;
    }
    ctx->pc = 0x2A1590u;
    SET_GPR_U32(ctx, 31, 0x2A1598u);
    ctx->pc = 0x2A1594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1590u;
            // 0x2a1594: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143DE0u;
    if (runtime->hasFunction(0x143DE0u)) {
        auto targetFn = runtime->lookupFunction(0x143DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1598u; }
        if (ctx->pc != 0x2A1598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DE0_0x143de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1598u; }
        if (ctx->pc != 0x2A1598u) { return; }
    }
    ctx->pc = 0x2A1598u;
label_2a1598:
    // 0x2a1598: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a1598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a159c:
    // 0x2a159c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2a15a0:
    // 0x2a15a0: 0xc05102c  jal         func_1440B0
label_2a15a4:
    if (ctx->pc == 0x2A15A4u) {
        ctx->pc = 0x2A15A4u;
            // 0x2a15a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A15A8u;
        goto label_2a15a8;
    }
    ctx->pc = 0x2A15A0u;
    SET_GPR_U32(ctx, 31, 0x2A15A8u);
    ctx->pc = 0x2A15A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15A0u;
            // 0x2a15a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1440B0u;
    if (runtime->hasFunction(0x1440B0u)) {
        auto targetFn = runtime->lookupFunction(0x1440B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15A8u; }
        if (ctx->pc != 0x2A15A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001440B0_0x1440b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15A8u; }
        if (ctx->pc != 0x2A15A8u) { return; }
    }
    ctx->pc = 0x2A15A8u;
label_2a15a8:
    // 0x2a15a8: 0xc0512e4  jal         func_144B90
label_2a15ac:
    if (ctx->pc == 0x2A15ACu) {
        ctx->pc = 0x2A15B0u;
        goto label_2a15b0;
    }
    ctx->pc = 0x2A15A8u;
    SET_GPR_U32(ctx, 31, 0x2A15B0u);
    ctx->pc = 0x144B90u;
    if (runtime->hasFunction(0x144B90u)) {
        auto targetFn = runtime->lookupFunction(0x144B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15B0u; }
        if (ctx->pc != 0x2A15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144B90_0x144b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15B0u; }
        if (ctx->pc != 0x2A15B0u) { return; }
    }
    ctx->pc = 0x2A15B0u;
label_2a15b0:
    // 0x2a15b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a15b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a15b4:
    // 0x2a15b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a15b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a15b8:
    // 0x2a15b8: 0x3e00008  jr          $ra
label_2a15bc:
    if (ctx->pc == 0x2A15BCu) {
        ctx->pc = 0x2A15BCu;
            // 0x2a15bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A15C0u;
        goto label_2a15c0;
    }
    ctx->pc = 0x2A15B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A15BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15B8u;
            // 0x2a15bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A15C0u;
label_2a15c0:
    // 0x2a15c0: 0x80508a4  j           func_142290
label_2a15c4:
    if (ctx->pc == 0x2A15C4u) {
        ctx->pc = 0x2A15C8u;
        goto label_2a15c8;
    }
    ctx->pc = 0x2A15C0u;
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00142290_0x142290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A15C8u;
label_2a15c8:
    // 0x2a15c8: 0x0  nop
    ctx->pc = 0x2a15c8u;
    // NOP
label_2a15cc:
    // 0x2a15cc: 0x0  nop
    ctx->pc = 0x2a15ccu;
    // NOP
label_2a15d0:
    // 0x2a15d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a15d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a15d4:
    // 0x2a15d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a15d8:
    // 0x2a15d8: 0x8050780  j           func_141E00
label_2a15dc:
    if (ctx->pc == 0x2A15DCu) {
        ctx->pc = 0x2A15DCu;
            // 0x2a15dc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A15E0u;
        goto label_2a15e0;
    }
    ctx->pc = 0x2A15D8u;
    ctx->pc = 0x2A15DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15D8u;
            // 0x2a15dc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00141E00_0x141e00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A15E0u;
label_2a15e0:
    // 0x2a15e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a15e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2a15e4:
    // 0x2a15e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a15e8:
    // 0x2a15e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a15e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a15ec:
    // 0x2a15ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a15ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2a15f0:
    // 0x2a15f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a15f4:
    // 0x2a15f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a15f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a15f8:
    // 0x2a15f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2a15fc:
    // 0x2a15fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a15fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a1600:
    // 0x2a1600: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2a1600u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a1604:
    // 0x2a1604: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a1604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a1608:
    // 0x2a1608: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2a1608u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2a160c:
    // 0x2a160c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a160cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a1610:
    // 0x2a1610: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a1610u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a1614:
    // 0x2a1614: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a1618:
    // 0x2a1618: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a161c:
    // 0x2a161c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2a161cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_2a1620:
    // 0x2a1620: 0x8c42dc70  lw          $v0, -0x2390($v0)
    ctx->pc = 0x2a1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958192)));
label_2a1624:
    // 0x2a1624: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2a1624u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_2a1628:
    // 0x2a1628: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2a1628u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_2a162c:
    // 0x2a162c: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x2a162cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
label_2a1630:
    // 0x2a1630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a1634:
    // 0x2a1634: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_2a1638:
    if (ctx->pc == 0x2A1638u) {
        ctx->pc = 0x2A1638u;
            // 0x2a1638: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->pc = 0x2A163Cu;
        goto label_2a163c;
    }
    ctx->pc = 0x2A1634u;
    {
        const bool branch_taken_0x2a1634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1634u;
            // 0x2a1638: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1634) {
            ctx->pc = 0x2A176Cu;
            goto label_2a176c;
        }
    }
    ctx->pc = 0x2A163Cu;
label_2a163c:
    // 0x2a163c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2a1640:
    if (ctx->pc == 0x2A1640u) {
        ctx->pc = 0x2A1644u;
        goto label_2a1644;
    }
    ctx->pc = 0x2A163Cu;
    {
        const bool branch_taken_0x2a163c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a163c) {
            ctx->pc = 0x2A1668u;
            goto label_2a1668;
        }
    }
    ctx->pc = 0x2A1644u;
label_2a1644:
    // 0x2a1644: 0xe7b800e8  swc1        $f24, 0xE8($sp)
    ctx->pc = 0x2a1644u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2a1648:
    // 0x2a1648: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2a1648u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2a164c:
    // 0x2a164c: 0xe7b700e0  swc1        $f23, 0xE0($sp)
    ctx->pc = 0x2a164cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2a1650:
    // 0x2a1650: 0xe7b700d4  swc1        $f23, 0xD4($sp)
    ctx->pc = 0x2a1650u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2a1654:
    // 0x2a1654: 0xe7b600f4  swc1        $f22, 0xF4($sp)
    ctx->pc = 0x2a1654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2a1658:
    // 0x2a1658: 0xe7b600dc  swc1        $f22, 0xDC($sp)
    ctx->pc = 0x2a1658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2a165c:
    // 0x2a165c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2a165cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2a1660:
    // 0x2a1660: 0x10000035  b           . + 4 + (0x35 << 2)
label_2a1664:
    if (ctx->pc == 0x2A1664u) {
        ctx->pc = 0x2A1664u;
            // 0x2a1664: 0xe7b500ec  swc1        $f21, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->pc = 0x2A1668u;
        goto label_2a1668;
    }
    ctx->pc = 0x2A1660u;
    {
        const bool branch_taken_0x2a1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1660u;
            // 0x2a1664: 0xe7b500ec  swc1        $f21, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1660) {
            ctx->pc = 0x2A1738u;
            goto label_2a1738;
        }
    }
    ctx->pc = 0x2A1668u;
label_2a1668:
    // 0x2a1668: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a1668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a166c:
    // 0x2a166c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1670:
    // 0x2a1670: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a1674:
    // 0x2a1674: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a1678:
    // 0x2a1678: 0xe478dcd0  swc1        $f24, -0x2330($v1)
    ctx->pc = 0x2a1678u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294958288), bits); }
label_2a167c:
    // 0x2a167c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a167cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1680:
    // 0x2a1680: 0xe457dcd4  swc1        $f23, -0x232C($v0)
    ctx->pc = 0x2a1680u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958292), bits); }
label_2a1684:
    // 0x2a1684: 0xc04cca0  jal         func_133280
label_2a1688:
    if (ctx->pc == 0x2A1688u) {
        ctx->pc = 0x2A1688u;
            // 0x2a1688: 0x24c6dcd0  addiu       $a2, $a2, -0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
        ctx->pc = 0x2A168Cu;
        goto label_2a168c;
    }
    ctx->pc = 0x2A1684u;
    SET_GPR_U32(ctx, 31, 0x2A168Cu);
    ctx->pc = 0x2A1688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1684u;
            // 0x2a1688: 0x24c6dcd0  addiu       $a2, $a2, -0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A168Cu; }
        if (ctx->pc != 0x2A168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A168Cu; }
        if (ctx->pc != 0x2A168Cu) { return; }
    }
    ctx->pc = 0x2A168Cu;
label_2a168c:
    // 0x2a168c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1690:
    // 0x2a1690: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1694:
    // 0x2a1694: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a1694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1698:
    // 0x2a1698: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a1698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a169c:
    // 0x2a169c: 0xe456dcd0  swc1        $f22, -0x2330($v0)
    ctx->pc = 0x2a169cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958288), bits); }
label_2a16a0:
    // 0x2a16a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a16a4:
    // 0x2a16a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a16a8:
    // 0x2a16a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a16a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a16ac:
    // 0x2a16ac: 0xe457dcd4  swc1        $f23, -0x232C($v0)
    ctx->pc = 0x2a16acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958292), bits); }
label_2a16b0:
    // 0x2a16b0: 0x24c6dcd0  addiu       $a2, $a2, -0x2330
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
label_2a16b4:
    // 0x2a16b4: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a16b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2a16b8:
    // 0x2a16b8: 0xc04cca0  jal         func_133280
label_2a16bc:
    if (ctx->pc == 0x2A16BCu) {
        ctx->pc = 0x2A16BCu;
            // 0x2a16bc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x2A16C0u;
        goto label_2a16c0;
    }
    ctx->pc = 0x2A16B8u;
    SET_GPR_U32(ctx, 31, 0x2A16C0u);
    ctx->pc = 0x2A16BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A16B8u;
            // 0x2a16bc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16C0u; }
        if (ctx->pc != 0x2A16C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16C0u; }
        if (ctx->pc != 0x2A16C0u) { return; }
    }
    ctx->pc = 0x2A16C0u;
label_2a16c0:
    // 0x2a16c0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a16c4:
    // 0x2a16c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a16c8:
    // 0x2a16c8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a16cc:
    // 0x2a16cc: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a16d0:
    // 0x2a16d0: 0xe458dcd0  swc1        $f24, -0x2330($v0)
    ctx->pc = 0x2a16d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958288), bits); }
label_2a16d4:
    // 0x2a16d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a16d8:
    // 0x2a16d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a16dc:
    // 0x2a16dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a16dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a16e0:
    // 0x2a16e0: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x2a16e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2a16e4:
    // 0x2a16e4: 0x24c6dcd0  addiu       $a2, $a2, -0x2330
    ctx->pc = 0x2a16e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
label_2a16e8:
    // 0x2a16e8: 0xe455dcd4  swc1        $f21, -0x232C($v0)
    ctx->pc = 0x2a16e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958292), bits); }
label_2a16ec:
    // 0x2a16ec: 0xc04cca0  jal         func_133280
label_2a16f0:
    if (ctx->pc == 0x2A16F0u) {
        ctx->pc = 0x2A16F0u;
            // 0x2a16f0: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x2A16F4u;
        goto label_2a16f4;
    }
    ctx->pc = 0x2A16ECu;
    SET_GPR_U32(ctx, 31, 0x2A16F4u);
    ctx->pc = 0x2A16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A16ECu;
            // 0x2a16f0: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16F4u; }
        if (ctx->pc != 0x2A16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16F4u; }
        if (ctx->pc != 0x2A16F4u) { return; }
    }
    ctx->pc = 0x2A16F4u;
label_2a16f4:
    // 0x2a16f4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a16f8:
    // 0x2a16f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a16fc:
    // 0x2a16fc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a16fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1700:
    // 0x2a1700: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a1700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a1704:
    // 0x2a1704: 0xe456dcd0  swc1        $f22, -0x2330($v0)
    ctx->pc = 0x2a1704u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958288), bits); }
label_2a1708:
    // 0x2a1708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a170c:
    // 0x2a170c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1710:
    // 0x2a1710: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a1714:
    // 0x2a1714: 0xe455dcd4  swc1        $f21, -0x232C($v0)
    ctx->pc = 0x2a1714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958292), bits); }
label_2a1718:
    // 0x2a1718: 0x24c6dcd0  addiu       $a2, $a2, -0x2330
    ctx->pc = 0x2a1718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
label_2a171c:
    // 0x2a171c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x2a171cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2a1720:
    // 0x2a1720: 0xc04cca0  jal         func_133280
label_2a1724:
    if (ctx->pc == 0x2A1724u) {
        ctx->pc = 0x2A1724u;
            // 0x2a1724: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->pc = 0x2A1728u;
        goto label_2a1728;
    }
    ctx->pc = 0x2A1720u;
    SET_GPR_U32(ctx, 31, 0x2A1728u);
    ctx->pc = 0x2A1724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1720u;
            // 0x2a1724: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1728u; }
        if (ctx->pc != 0x2A1728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1728u; }
        if (ctx->pc != 0x2A1728u) { return; }
    }
    ctx->pc = 0x2A1728u;
label_2a1728:
    // 0x2a1728: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a172c:
    // 0x2a172c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1730:
    // 0x2a1730: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2a1730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2a1734:
    // 0x2a1734: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a1734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2a1738:
    // 0x2a1738: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2a1738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_2a173c:
    // 0x2a173c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1740:
    // 0x2a1740: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a1744:
    // 0x2a1744: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2a1744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a1748:
    // 0x2a1748: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a1748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a174c:
    // 0x2a174c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2a174cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_2a1750:
    // 0x2a1750: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2a1750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2a1754:
    // 0x2a1754: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1758:
    // 0x2a1758: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2a1758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_2a175c:
    // 0x2a175c: 0xc050780  jal         func_141E00
label_2a1760:
    if (ctx->pc == 0x2A1760u) {
        ctx->pc = 0x2A1760u;
            // 0x2a1760: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x2A1764u;
        goto label_2a1764;
    }
    ctx->pc = 0x2A175Cu;
    SET_GPR_U32(ctx, 31, 0x2A1764u);
    ctx->pc = 0x2A1760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A175Cu;
            // 0x2a1760: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1764u; }
        if (ctx->pc != 0x2A1764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1764u; }
        if (ctx->pc != 0x2A1764u) { return; }
    }
    ctx->pc = 0x2A1764u;
label_2a1764:
    // 0x2a1764: 0x10000065  b           . + 4 + (0x65 << 2)
label_2a1768:
    if (ctx->pc == 0x2A1768u) {
        ctx->pc = 0x2A1768u;
            // 0x2a1768: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2A176Cu;
        goto label_2a176c;
    }
    ctx->pc = 0x2A1764u;
    {
        const bool branch_taken_0x2a1764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1764u;
            // 0x2a1768: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1764) {
            ctx->pc = 0x2A18FCu;
            goto label_2a18fc;
        }
    }
    ctx->pc = 0x2A176Cu;
label_2a176c:
    // 0x2a176c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a176cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a1770:
    // 0x2a1770: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a1770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a1774:
    // 0x2a1774: 0x24c6dc80  addiu       $a2, $a2, -0x2380
    ctx->pc = 0x2a1774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958208));
label_2a1778:
    // 0x2a1778: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a1778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a177c:
    // 0x2a177c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a1780:
    // 0x2a1780: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a1780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a1784:
    // 0x2a1784: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2a1788:
    // 0x2a1788: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a1788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2a178c:
    // 0x2a178c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2a1790:
    // 0x2a1790: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a1790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2a1794:
    // 0x2a1794: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_2a1798:
    if (ctx->pc == 0x2A1798u) {
        ctx->pc = 0x2A1798u;
            // 0x2a1798: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2A179Cu;
        goto label_2a179c;
    }
    ctx->pc = 0x2A1794u;
    {
        const bool branch_taken_0x2a1794 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A1798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1794u;
            // 0x2a1798: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1794) {
            ctx->pc = 0x2A177Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a177c;
        }
    }
    ctx->pc = 0x2A179Cu;
label_2a179c:
    // 0x2a179c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2a17a0:
    if (ctx->pc == 0x2A17A0u) {
        ctx->pc = 0x2A17A4u;
        goto label_2a17a4;
    }
    ctx->pc = 0x2A179Cu;
    {
        const bool branch_taken_0x2a179c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a179c) {
            ctx->pc = 0x2A17C8u;
            goto label_2a17c8;
        }
    }
    ctx->pc = 0x2A17A4u;
label_2a17a4:
    // 0x2a17a4: 0xe7b800a8  swc1        $f24, 0xA8($sp)
    ctx->pc = 0x2a17a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2a17a8:
    // 0x2a17a8: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x2a17a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a17ac:
    // 0x2a17ac: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x2a17acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2a17b0:
    // 0x2a17b0: 0xe7b70084  swc1        $f23, 0x84($sp)
    ctx->pc = 0x2a17b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2a17b4:
    // 0x2a17b4: 0xe7b600bc  swc1        $f22, 0xBC($sp)
    ctx->pc = 0x2a17b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2a17b8:
    // 0x2a17b8: 0xe7b60094  swc1        $f22, 0x94($sp)
    ctx->pc = 0x2a17b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2a17bc:
    // 0x2a17bc: 0xe7b500c0  swc1        $f21, 0xC0($sp)
    ctx->pc = 0x2a17bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a17c0:
    // 0x2a17c0: 0x10000035  b           . + 4 + (0x35 << 2)
label_2a17c4:
    if (ctx->pc == 0x2A17C4u) {
        ctx->pc = 0x2A17C4u;
            // 0x2a17c4: 0xe7b500ac  swc1        $f21, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x2A17C8u;
        goto label_2a17c8;
    }
    ctx->pc = 0x2A17C0u;
    {
        const bool branch_taken_0x2a17c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17C0u;
            // 0x2a17c4: 0xe7b500ac  swc1        $f21, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17c0) {
            ctx->pc = 0x2A1898u;
            goto label_2a1898;
        }
    }
    ctx->pc = 0x2A17C8u;
label_2a17c8:
    // 0x2a17c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a17cc:
    // 0x2a17cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a17d0:
    // 0x2a17d0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a17d4:
    // 0x2a17d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a17d8:
    // 0x2a17d8: 0xe478dce0  swc1        $f24, -0x2320($v1)
    ctx->pc = 0x2a17d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294958304), bits); }
label_2a17dc:
    // 0x2a17dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a17e0:
    // 0x2a17e0: 0xe457dce4  swc1        $f23, -0x231C($v0)
    ctx->pc = 0x2a17e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958308), bits); }
label_2a17e4:
    // 0x2a17e4: 0xc04cca0  jal         func_133280
label_2a17e8:
    if (ctx->pc == 0x2A17E8u) {
        ctx->pc = 0x2A17E8u;
            // 0x2a17e8: 0x24c6dce0  addiu       $a2, $a2, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
        ctx->pc = 0x2A17ECu;
        goto label_2a17ec;
    }
    ctx->pc = 0x2A17E4u;
    SET_GPR_U32(ctx, 31, 0x2A17ECu);
    ctx->pc = 0x2A17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17E4u;
            // 0x2a17e8: 0x24c6dce0  addiu       $a2, $a2, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17ECu; }
        if (ctx->pc != 0x2A17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17ECu; }
        if (ctx->pc != 0x2A17ECu) { return; }
    }
    ctx->pc = 0x2A17ECu;
label_2a17ec:
    // 0x2a17ec: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a17f0:
    // 0x2a17f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a17f4:
    // 0x2a17f4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a17f8:
    // 0x2a17f8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a17f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a17fc:
    // 0x2a17fc: 0xe456dce0  swc1        $f22, -0x2320($v0)
    ctx->pc = 0x2a17fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958304), bits); }
label_2a1800:
    // 0x2a1800: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a1804:
    // 0x2a1804: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1808:
    // 0x2a1808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a180c:
    // 0x2a180c: 0xe457dce4  swc1        $f23, -0x231C($v0)
    ctx->pc = 0x2a180cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958308), bits); }
label_2a1810:
    // 0x2a1810: 0x24c6dce0  addiu       $a2, $a2, -0x2320
    ctx->pc = 0x2a1810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
label_2a1814:
    // 0x2a1814: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2a1814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a1818:
    // 0x2a1818: 0xc04cca0  jal         func_133280
label_2a181c:
    if (ctx->pc == 0x2A181Cu) {
        ctx->pc = 0x2A181Cu;
            // 0x2a181c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x2A1820u;
        goto label_2a1820;
    }
    ctx->pc = 0x2A1818u;
    SET_GPR_U32(ctx, 31, 0x2A1820u);
    ctx->pc = 0x2A181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1818u;
            // 0x2a181c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1820u; }
        if (ctx->pc != 0x2A1820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1820u; }
        if (ctx->pc != 0x2A1820u) { return; }
    }
    ctx->pc = 0x2A1820u;
label_2a1820:
    // 0x2a1820: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a1820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1824:
    // 0x2a1824: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1828:
    // 0x2a1828: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a182c:
    // 0x2a182c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a182cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a1830:
    // 0x2a1830: 0xe458dce0  swc1        $f24, -0x2320($v0)
    ctx->pc = 0x2a1830u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958304), bits); }
label_2a1834:
    // 0x2a1834: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a1834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a1838:
    // 0x2a1838: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a183c:
    // 0x2a183c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a183cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1840:
    // 0x2a1840: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2a1840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2a1844:
    // 0x2a1844: 0x24c6dce0  addiu       $a2, $a2, -0x2320
    ctx->pc = 0x2a1844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
label_2a1848:
    // 0x2a1848: 0xe455dce4  swc1        $f21, -0x231C($v0)
    ctx->pc = 0x2a1848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958308), bits); }
label_2a184c:
    // 0x2a184c: 0xc04cca0  jal         func_133280
label_2a1850:
    if (ctx->pc == 0x2A1850u) {
        ctx->pc = 0x2A1850u;
            // 0x2a1850: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x2A1854u;
        goto label_2a1854;
    }
    ctx->pc = 0x2A184Cu;
    SET_GPR_U32(ctx, 31, 0x2A1854u);
    ctx->pc = 0x2A1850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A184Cu;
            // 0x2a1850: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1854u; }
        if (ctx->pc != 0x2A1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1854u; }
        if (ctx->pc != 0x2A1854u) { return; }
    }
    ctx->pc = 0x2A1854u;
label_2a1854:
    // 0x2a1854: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a1854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1858:
    // 0x2a1858: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a185c:
    // 0x2a185c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1860:
    // 0x2a1860: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2a1860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2a1864:
    // 0x2a1864: 0xe456dce0  swc1        $f22, -0x2320($v0)
    ctx->pc = 0x2a1864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958304), bits); }
label_2a1868:
    // 0x2a1868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a186c:
    // 0x2a186c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1870:
    // 0x2a1870: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a1874:
    // 0x2a1874: 0xe455dce4  swc1        $f21, -0x231C($v0)
    ctx->pc = 0x2a1874u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958308), bits); }
label_2a1878:
    // 0x2a1878: 0x24c6dce0  addiu       $a2, $a2, -0x2320
    ctx->pc = 0x2a1878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
label_2a187c:
    // 0x2a187c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2a187cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2a1880:
    // 0x2a1880: 0xc04cca0  jal         func_133280
label_2a1884:
    if (ctx->pc == 0x2A1884u) {
        ctx->pc = 0x2A1884u;
            // 0x2a1884: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x2A1888u;
        goto label_2a1888;
    }
    ctx->pc = 0x2A1880u;
    SET_GPR_U32(ctx, 31, 0x2A1888u);
    ctx->pc = 0x2A1884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1880u;
            // 0x2a1884: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1888u; }
        if (ctx->pc != 0x2A1888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1888u; }
        if (ctx->pc != 0x2A1888u) { return; }
    }
    ctx->pc = 0x2A1888u;
label_2a1888:
    // 0x2a1888: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a1888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a188c:
    // 0x2a188c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1890:
    // 0x2a1890: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x2a1890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2a1894:
    // 0x2a1894: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a1894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a1898:
    // 0x2a1898: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2a1898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_2a189c:
    // 0x2a189c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a189cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a18a0:
    // 0x2a18a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2a18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_2a18a4:
    // 0x2a18a4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2a18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2a18a8:
    // 0x2a18a8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2a18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2a18ac:
    // 0x2a18ac: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2a18b0:
    if (ctx->pc == 0x2A18B0u) {
        ctx->pc = 0x2A18B0u;
            // 0x2a18b0: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x2A18B4u;
        goto label_2a18b4;
    }
    ctx->pc = 0x2A18ACu;
    {
        const bool branch_taken_0x2a18ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A18ACu;
            // 0x2a18b0: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18ac) {
            ctx->pc = 0x2A18E4u;
            goto label_2a18e4;
        }
    }
    ctx->pc = 0x2A18B4u;
label_2a18b4:
    // 0x2a18b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a18b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a18b8:
    // 0x2a18b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2a18b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2a18bc:
    // 0x2a18bc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a18bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2a18c0:
    // 0x2a18c0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a18c4:
    // 0x2a18c4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2a18c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2a18c8:
    // 0x2a18c8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a18c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2a18cc:
    // 0x2a18cc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a18ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a18d0:
    // 0x2a18d0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a18d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2a18d4:
    // 0x2a18d4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a18d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a18d8:
    // 0x2a18d8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2a18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a18dc:
    // 0x2a18dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a18dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2a18e0:
    // 0x2a18e0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2a18e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2a18e4:
    // 0x2a18e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a18e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a18e8:
    // 0x2a18e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a18ec:
    // 0x2a18ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a18f0:
    // 0x2a18f0: 0xc050780  jal         func_141E00
label_2a18f4:
    if (ctx->pc == 0x2A18F4u) {
        ctx->pc = 0x2A18F4u;
            // 0x2a18f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2A18F8u;
        goto label_2a18f8;
    }
    ctx->pc = 0x2A18F0u;
    SET_GPR_U32(ctx, 31, 0x2A18F8u);
    ctx->pc = 0x2A18F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A18F0u;
            // 0x2a18f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A18F8u; }
        if (ctx->pc != 0x2A18F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A18F8u; }
        if (ctx->pc != 0x2A18F8u) { return; }
    }
    ctx->pc = 0x2A18F8u;
label_2a18f8:
    // 0x2a18f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a18f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a18fc:
    // 0x2a18fc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2a18fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2a1900:
    // 0x2a1900: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a1900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a1904:
    // 0x2a1904: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2a1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2a1908:
    // 0x2a1908: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a1908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a190c:
    // 0x2a190c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a1910:
    // 0x2a1910: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a1910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1914:
    // 0x2a1914: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a1914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a1918:
    // 0x2a1918: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a191c:
    // 0x2a191c: 0x3e00008  jr          $ra
label_2a1920:
    if (ctx->pc == 0x2A1920u) {
        ctx->pc = 0x2A1920u;
            // 0x2a1920: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2A1924u;
        goto label_2a1924;
    }
    ctx->pc = 0x2A191Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A191Cu;
            // 0x2a1920: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1924u;
label_2a1924:
    // 0x2a1924: 0x0  nop
    ctx->pc = 0x2a1924u;
    // NOP
label_2a1928:
    // 0x2a1928: 0x0  nop
    ctx->pc = 0x2a1928u;
    // NOP
label_2a192c:
    // 0x2a192c: 0x0  nop
    ctx->pc = 0x2a192cu;
    // NOP
label_2a1930:
    // 0x2a1930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a1934:
    // 0x2a1934: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1938:
    // 0x2a1938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a193c:
    // 0x2a193c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1940:
    // 0x2a1940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a1944:
    // 0x2a1944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a1948:
    // 0x2a1948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a1948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a194c:
    // 0x2a194c: 0x8c44dc60  lw          $a0, -0x23A0($v0)
    ctx->pc = 0x2a194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958176)));
label_2a1950:
    // 0x2a1950: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a1950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1954:
    // 0x2a1954: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a1958:
    // 0x2a1958: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x2a1958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_2a195c:
    // 0x2a195c: 0x8c42dc68  lw          $v0, -0x2398($v0)
    ctx->pc = 0x2a195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958184)));
label_2a1960:
    // 0x2a1960: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x2a1960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_2a1964:
    // 0x2a1964: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2a1964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_2a1968:
    // 0x2a1968: 0xc0506cc  jal         func_141B30
label_2a196c:
    if (ctx->pc == 0x2A196Cu) {
        ctx->pc = 0x2A196Cu;
            // 0x2a196c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x2A1970u;
        goto label_2a1970;
    }
    ctx->pc = 0x2A1968u;
    SET_GPR_U32(ctx, 31, 0x2A1970u);
    ctx->pc = 0x2A196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1968u;
            // 0x2a196c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1970u; }
        if (ctx->pc != 0x2A1970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1970u; }
        if (ctx->pc != 0x2A1970u) { return; }
    }
    ctx->pc = 0x2A1970u;
label_2a1970:
    // 0x2a1970: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2a1970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_2a1974:
    // 0x2a1974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a1974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1978:
    // 0x2a1978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a197c:
    // 0x2a197c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a197cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1980:
    // 0x2a1980: 0x3e00008  jr          $ra
label_2a1984:
    if (ctx->pc == 0x2A1984u) {
        ctx->pc = 0x2A1984u;
            // 0x2a1984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A1988u;
        goto label_2a1988;
    }
    ctx->pc = 0x2A1980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1980u;
            // 0x2a1984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1988u;
label_2a1988:
    // 0x2a1988: 0x0  nop
    ctx->pc = 0x2a1988u;
    // NOP
label_2a198c:
    // 0x2a198c: 0x0  nop
    ctx->pc = 0x2a198cu;
    // NOP
label_2a1990:
    // 0x2a1990: 0x80a84ec  j           func_2A13B0
label_2a1994:
    if (ctx->pc == 0x2A1994u) {
        ctx->pc = 0x2A1994u;
            // 0x2a1994: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A1998u;
        goto label_2a1998;
    }
    ctx->pc = 0x2A1990u;
    ctx->pc = 0x2A1994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1990u;
            // 0x2a1994: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A13B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a13b0;
    ctx->pc = 0x2A1998u;
label_2a1998:
    // 0x2a1998: 0x0  nop
    ctx->pc = 0x2a1998u;
    // NOP
label_2a199c:
    // 0x2a199c: 0x0  nop
    ctx->pc = 0x2a199cu;
    // NOP
label_2a19a0:
    // 0x2a19a0: 0x80a8504  j           func_2A1410
label_2a19a4:
    if (ctx->pc == 0x2A19A4u) {
        ctx->pc = 0x2A19A4u;
            // 0x2a19a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19A8u;
        goto label_2a19a8;
    }
    ctx->pc = 0x2A19A0u;
    ctx->pc = 0x2A19A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19A0u;
            // 0x2a19a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1410u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a1410;
    ctx->pc = 0x2A19A8u;
label_2a19a8:
    // 0x2a19a8: 0x0  nop
    ctx->pc = 0x2a19a8u;
    // NOP
label_2a19ac:
    // 0x2a19ac: 0x0  nop
    ctx->pc = 0x2a19acu;
    // NOP
label_2a19b0:
    // 0x2a19b0: 0x80a8570  j           func_2A15C0
label_2a19b4:
    if (ctx->pc == 0x2A19B4u) {
        ctx->pc = 0x2A19B4u;
            // 0x2a19b4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19B8u;
        goto label_2a19b8;
    }
    ctx->pc = 0x2A19B0u;
    ctx->pc = 0x2A19B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19B0u;
            // 0x2a19b4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A15C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a15c0;
    ctx->pc = 0x2A19B8u;
label_2a19b8:
    // 0x2a19b8: 0x0  nop
    ctx->pc = 0x2a19b8u;
    // NOP
label_2a19bc:
    // 0x2a19bc: 0x0  nop
    ctx->pc = 0x2a19bcu;
    // NOP
label_2a19c0:
    // 0x2a19c0: 0x80a8574  j           func_2A15D0
label_2a19c4:
    if (ctx->pc == 0x2A19C4u) {
        ctx->pc = 0x2A19C4u;
            // 0x2a19c4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19C8u;
        goto label_2a19c8;
    }
    ctx->pc = 0x2A19C0u;
    ctx->pc = 0x2A19C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19C0u;
            // 0x2a19c4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A15D0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a15d0;
    ctx->pc = 0x2A19C8u;
label_2a19c8:
    // 0x2a19c8: 0x0  nop
    ctx->pc = 0x2a19c8u;
    // NOP
label_2a19cc:
    // 0x2a19cc: 0x0  nop
    ctx->pc = 0x2a19ccu;
    // NOP
label_2a19d0:
    // 0x2a19d0: 0x80a8578  j           func_2A15E0
label_2a19d4:
    if (ctx->pc == 0x2A19D4u) {
        ctx->pc = 0x2A19D4u;
            // 0x2a19d4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19D8u;
        goto label_2a19d8;
    }
    ctx->pc = 0x2A19D0u;
    ctx->pc = 0x2A19D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19D0u;
            // 0x2a19d4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A15E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a15e0;
    ctx->pc = 0x2A19D8u;
label_2a19d8:
    // 0x2a19d8: 0x0  nop
    ctx->pc = 0x2a19d8u;
    // NOP
label_2a19dc:
    // 0x2a19dc: 0x0  nop
    ctx->pc = 0x2a19dcu;
    // NOP
label_2a19e0:
    // 0x2a19e0: 0x80a864c  j           func_2A1930
label_2a19e4:
    if (ctx->pc == 0x2A19E4u) {
        ctx->pc = 0x2A19E4u;
            // 0x2a19e4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19E8u;
        goto label_2a19e8;
    }
    ctx->pc = 0x2A19E0u;
    ctx->pc = 0x2A19E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19E0u;
            // 0x2a19e4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1930u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a1930;
    ctx->pc = 0x2A19E8u;
label_2a19e8:
    // 0x2a19e8: 0x0  nop
    ctx->pc = 0x2a19e8u;
    // NOP
label_2a19ec:
    // 0x2a19ec: 0x0  nop
    ctx->pc = 0x2a19ecu;
    // NOP
label_2a19f0:
    // 0x2a19f0: 0x80a84c8  j           func_2A1320
label_2a19f4:
    if (ctx->pc == 0x2A19F4u) {
        ctx->pc = 0x2A19F4u;
            // 0x2a19f4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A19F8u;
        goto label_2a19f8;
    }
    ctx->pc = 0x2A19F0u;
    ctx->pc = 0x2A19F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19F0u;
            // 0x2a19f4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1320u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a1320;
    ctx->pc = 0x2A19F8u;
label_2a19f8:
    // 0x2a19f8: 0x0  nop
    ctx->pc = 0x2a19f8u;
    // NOP
label_2a19fc:
    // 0x2a19fc: 0x0  nop
    ctx->pc = 0x2a19fcu;
    // NOP
label_2a1a00:
    // 0x2a1a00: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2a1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2a1a04:
    // 0x2a1a04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2a1a08:
    // 0x2a1a08: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x2a1a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2a1a0c:
    // 0x2a1a0c: 0x8ce80064  lw          $t0, 0x64($a3)
    ctx->pc = 0x2a1a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
label_2a1a10:
    // 0x2a1a10: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2a1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2a1a14:
    // 0x2a1a14: 0x8c670064  lw          $a3, 0x64($v1)
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2a1a18:
    // 0x2a1a18: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2a1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2a1a1c:
    // 0x2a1a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a1a20:
    // 0x2a1a20: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_2a1a24:
    if (ctx->pc == 0x2A1A24u) {
        ctx->pc = 0x2A1A24u;
            // 0x2a1a24: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2A1A28u;
        goto label_2a1a28;
    }
    ctx->pc = 0x2A1A20u;
    {
        const bool branch_taken_0x2a1a20 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a1a20) {
            ctx->pc = 0x2A1A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A20u;
            // 0x2a1a24: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A34u;
            goto label_2a1a34;
        }
    }
    ctx->pc = 0x2A1A28u;
label_2a1a28:
    // 0x2a1a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1a2c:
    // 0x2a1a2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a1a30:
    if (ctx->pc == 0x2A1A30u) {
        ctx->pc = 0x2A1A30u;
            // 0x2a1a30: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A1A34u;
        goto label_2a1a34;
    }
    ctx->pc = 0x2A1A2Cu;
    {
        const bool branch_taken_0x2a1a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A2Cu;
            // 0x2a1a30: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a2c) {
            ctx->pc = 0x2A1A4Cu;
            goto label_2a1a4c;
        }
    }
    ctx->pc = 0x2A1A34u;
label_2a1a34:
    // 0x2a1a34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a1a38:
    // 0x2a1a38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a1a3c:
    // 0x2a1a3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a1a3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1a40:
    // 0x2a1a40: 0x0  nop
    ctx->pc = 0x2a1a40u;
    // NOP
label_2a1a44:
    // 0x2a1a44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a1a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a1a48:
    // 0x2a1a48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a1a48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a1a4c:
    // 0x2a1a4c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2a1a50:
    // 0x2a1a50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a1a54:
    // 0x2a1a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1a58:
    // 0x2a1a58: 0x0  nop
    ctx->pc = 0x2a1a58u;
    // NOP
label_2a1a5c:
    // 0x2a1a5c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2a1a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a1a60:
    // 0x2a1a60: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2a1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a1a64:
    // 0x2a1a64: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a1a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1a68:
    // 0x2a1a68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a1a68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a1a6c:
    // 0x2a1a6c: 0x0  nop
    ctx->pc = 0x2a1a6cu;
    // NOP
label_2a1a70:
    // 0x2a1a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a1a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a1a74:
    // 0x2a1a74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a1a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a1a78:
    // 0x2a1a78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a1a7c:
    // 0x2a1a7c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a1a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2a1a80:
    // 0x2a1a80: 0x0  nop
    ctx->pc = 0x2a1a80u;
    // NOP
label_2a1a84:
    // 0x2a1a84: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2a1a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2a1a88:
    // 0x2a1a88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a1a88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2a1a8c:
    // 0x2a1a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a1a90:
    // 0x2a1a90: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2a1a90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a1a94:
    // 0x2a1a94: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2a1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_2a1a98:
    // 0x2a1a98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a1a9c:
    // 0x2a1a9c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_2a1aa0:
    if (ctx->pc == 0x2A1AA0u) {
        ctx->pc = 0x2A1AA0u;
            // 0x2a1aa0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2A1AA4u;
        goto label_2a1aa4;
    }
    ctx->pc = 0x2A1A9Cu;
    {
        const bool branch_taken_0x2a1a9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a1a9c) {
            ctx->pc = 0x2A1AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A9Cu;
            // 0x2a1aa0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1AB0u;
            goto label_2a1ab0;
        }
    }
    ctx->pc = 0x2A1AA4u;
label_2a1aa4:
    // 0x2a1aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1aa8:
    // 0x2a1aa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a1aac:
    if (ctx->pc == 0x2A1AACu) {
        ctx->pc = 0x2A1AACu;
            // 0x2a1aac: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A1AB0u;
        goto label_2a1ab0;
    }
    ctx->pc = 0x2A1AA8u;
    {
        const bool branch_taken_0x2a1aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1AA8u;
            // 0x2a1aac: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1aa8) {
            ctx->pc = 0x2A1AC8u;
            goto label_2a1ac8;
        }
    }
    ctx->pc = 0x2A1AB0u;
label_2a1ab0:
    // 0x2a1ab0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a1ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a1ab4:
    // 0x2a1ab4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a1ab8:
    // 0x2a1ab8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a1ab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1abc:
    // 0x2a1abc: 0x0  nop
    ctx->pc = 0x2a1abcu;
    // NOP
label_2a1ac0:
    // 0x2a1ac0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2a1ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2a1ac4:
    // 0x2a1ac4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a1ac4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a1ac8:
    // 0x2a1ac8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a1ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1acc:
    // 0x2a1acc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a1accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a1ad0:
    // 0x2a1ad0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2a1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2a1ad4:
    // 0x2a1ad4: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2a1ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_2a1ad8:
    // 0x2a1ad8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a1ad8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1adc:
    // 0x2a1adc: 0x0  nop
    ctx->pc = 0x2a1adcu;
    // NOP
label_2a1ae0:
    // 0x2a1ae0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2a1ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a1ae4:
    // 0x2a1ae4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a1ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1ae8:
    // 0x2a1ae8: 0x0  nop
    ctx->pc = 0x2a1ae8u;
    // NOP
label_2a1aec:
    // 0x2a1aec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a1af0:
    // 0x2a1af0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a1af0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2a1af4:
    // 0x2a1af4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a1af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a1af8:
    // 0x2a1af8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a1afc:
    // 0x2a1afc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a1afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2a1b00:
    // 0x2a1b00: 0x0  nop
    ctx->pc = 0x2a1b00u;
    // NOP
label_2a1b04:
    // 0x2a1b04: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2a1b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2a1b08:
    // 0x2a1b08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a1b08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2a1b0c:
    // 0x2a1b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a1b10:
    // 0x2a1b10: 0x3e00008  jr          $ra
label_2a1b14:
    if (ctx->pc == 0x2A1B14u) {
        ctx->pc = 0x2A1B14u;
            // 0x2a1b14: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A1B18u;
        goto label_2a1b18;
    }
    ctx->pc = 0x2A1B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B10u;
            // 0x2a1b14: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B18u;
label_2a1b18:
    // 0x2a1b18: 0x0  nop
    ctx->pc = 0x2a1b18u;
    // NOP
label_2a1b1c:
    // 0x2a1b1c: 0x0  nop
    ctx->pc = 0x2a1b1cu;
    // NOP
label_2a1b20:
    // 0x2a1b20: 0x3e00008  jr          $ra
label_2a1b24:
    if (ctx->pc == 0x2A1B24u) {
        ctx->pc = 0x2A1B24u;
            // 0x2a1b24: 0xc4800048  lwc1        $f0, 0x48($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A1B28u;
        goto label_2a1b28;
    }
    ctx->pc = 0x2A1B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B20u;
            // 0x2a1b24: 0xc4800048  lwc1        $f0, 0x48($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B28u;
label_2a1b28:
    // 0x2a1b28: 0x0  nop
    ctx->pc = 0x2a1b28u;
    // NOP
label_2a1b2c:
    // 0x2a1b2c: 0x0  nop
    ctx->pc = 0x2a1b2cu;
    // NOP
label_2a1b30:
    // 0x2a1b30: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x2a1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1b34:
    // 0x2a1b34: 0x3e00008  jr          $ra
label_2a1b38:
    if (ctx->pc == 0x2A1B38u) {
        ctx->pc = 0x2A1B38u;
            // 0x2a1b38: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x2A1B3Cu;
        goto label_2a1b3c;
    }
    ctx->pc = 0x2A1B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B34u;
            // 0x2a1b38: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B3Cu;
label_2a1b3c:
    // 0x2a1b3c: 0x0  nop
    ctx->pc = 0x2a1b3cu;
    // NOP
label_2a1b40:
    // 0x2a1b40: 0x3e00008  jr          $ra
label_2a1b44:
    if (ctx->pc == 0x2A1B44u) {
        ctx->pc = 0x2A1B44u;
            // 0x2a1b44: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->pc = 0x2A1B48u;
        goto label_2a1b48;
    }
    ctx->pc = 0x2A1B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B40u;
            // 0x2a1b44: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B48u;
label_2a1b48:
    // 0x2a1b48: 0x0  nop
    ctx->pc = 0x2a1b48u;
    // NOP
label_2a1b4c:
    // 0x2a1b4c: 0x0  nop
    ctx->pc = 0x2a1b4cu;
    // NOP
label_2a1b50:
    // 0x2a1b50: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2a1b54:
    // 0x2a1b54: 0x3e00008  jr          $ra
label_2a1b58:
    if (ctx->pc == 0x2A1B58u) {
        ctx->pc = 0x2A1B58u;
            // 0x2a1b58: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x2A1B5Cu;
        goto label_2a1b5c;
    }
    ctx->pc = 0x2A1B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B54u;
            // 0x2a1b58: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B5Cu;
label_2a1b5c:
    // 0x2a1b5c: 0x0  nop
    ctx->pc = 0x2a1b5cu;
    // NOP
label_2a1b60:
    // 0x2a1b60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a1b64:
    // 0x2a1b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a1b68:
    // 0x2a1b68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a1b6c:
    // 0x2a1b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a1b70:
    // 0x2a1b70: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x2a1b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_2a1b74:
    // 0x2a1b74: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a1b78:
    // 0x2a1b78: 0x3200008  jr          $t9
label_2a1b7c:
    if (ctx->pc == 0x2A1B7Cu) {
        ctx->pc = 0x2A1B80u;
        goto label_2a1b80;
    }
    ctx->pc = 0x2A1B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B80u;
label_2a1b80:
    // 0x2a1b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a1b84:
    // 0x2a1b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a1b88:
    // 0x2a1b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a1b8c:
    // 0x2a1b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a1b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1b90:
    // 0x2a1b90: 0xc057250  jal         func_15C940
label_2a1b94:
    if (ctx->pc == 0x2A1B94u) {
        ctx->pc = 0x2A1B94u;
            // 0x2a1b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B98u;
        goto label_2a1b98;
    }
    ctx->pc = 0x2A1B90u;
    SET_GPR_U32(ctx, 31, 0x2A1B98u);
    ctx->pc = 0x2A1B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B90u;
            // 0x2a1b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B98u; }
        if (ctx->pc != 0x2A1B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B98u; }
        if (ctx->pc != 0x2A1B98u) { return; }
    }
    ctx->pc = 0x2A1B98u;
label_2a1b98:
    // 0x2a1b98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2a1b9c:
    // 0x2a1b9c: 0xac705848  sw          $s0, 0x5848($v1)
    ctx->pc = 0x2a1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 16));
label_2a1ba0:
    // 0x2a1ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1ba4:
    // 0x2a1ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1ba8:
    // 0x2a1ba8: 0x3e00008  jr          $ra
label_2a1bac:
    if (ctx->pc == 0x2A1BACu) {
        ctx->pc = 0x2A1BACu;
            // 0x2a1bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A1BB0u;
        goto label_2a1bb0;
    }
    ctx->pc = 0x2A1BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BA8u;
            // 0x2a1bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1BB0u;
label_2a1bb0:
    // 0x2a1bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a1bb4:
    // 0x2a1bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a1bb8:
    // 0x2a1bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a1bbc:
    // 0x2a1bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1bc0:
    // 0x2a1bc0: 0xc057250  jal         func_15C940
label_2a1bc4:
    if (ctx->pc == 0x2A1BC4u) {
        ctx->pc = 0x2A1BC4u;
            // 0x2a1bc4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x2A1BC8u;
        goto label_2a1bc8;
    }
    ctx->pc = 0x2A1BC0u;
    SET_GPR_U32(ctx, 31, 0x2A1BC8u);
    ctx->pc = 0x2A1BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BC0u;
            // 0x2a1bc4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BC8u; }
        if (ctx->pc != 0x2A1BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BC8u; }
        if (ctx->pc != 0x2A1BC8u) { return; }
    }
    ctx->pc = 0x2A1BC8u;
label_2a1bc8:
    // 0x2a1bc8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2a1bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a1bcc:
    // 0x2a1bcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2a1bd0:
    // 0x2a1bd0: 0xac645848  sw          $a0, 0x5848($v1)
    ctx->pc = 0x2a1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 4));
label_2a1bd4:
    // 0x2a1bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1bd8:
    // 0x2a1bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1bdc:
    // 0x2a1bdc: 0x3e00008  jr          $ra
label_2a1be0:
    if (ctx->pc == 0x2A1BE0u) {
        ctx->pc = 0x2A1BE0u;
            // 0x2a1be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A1BE4u;
        goto label_2a1be4;
    }
    ctx->pc = 0x2A1BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BDCu;
            // 0x2a1be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1BE4u;
label_2a1be4:
    // 0x2a1be4: 0x0  nop
    ctx->pc = 0x2a1be4u;
    // NOP
label_2a1be8:
    // 0x2a1be8: 0x0  nop
    ctx->pc = 0x2a1be8u;
    // NOP
label_2a1bec:
    // 0x2a1bec: 0x0  nop
    ctx->pc = 0x2a1becu;
    // NOP
label_2a1bf0:
    // 0x2a1bf0: 0x3e00008  jr          $ra
label_2a1bf4:
    if (ctx->pc == 0x2A1BF4u) {
        ctx->pc = 0x2A1BF4u;
            // 0x2a1bf4: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x2A1BF8u;
        goto label_2a1bf8;
    }
    ctx->pc = 0x2A1BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BF0u;
            // 0x2a1bf4: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1BF8u;
label_2a1bf8:
    // 0x2a1bf8: 0x0  nop
    ctx->pc = 0x2a1bf8u;
    // NOP
label_2a1bfc:
    // 0x2a1bfc: 0x0  nop
    ctx->pc = 0x2a1bfcu;
    // NOP
label_2a1c00:
    // 0x2a1c00: 0x8051840  j           func_146100
label_2a1c04:
    if (ctx->pc == 0x2A1C04u) {
        ctx->pc = 0x2A1C04u;
            // 0x2a1c04: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2A1C08u;
        goto label_2a1c08;
    }
    ctx->pc = 0x2A1C00u;
    ctx->pc = 0x2A1C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C00u;
            // 0x2a1c04: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146100u;
    if (runtime->hasFunction(0x146100u)) {
        auto targetFn = runtime->lookupFunction(0x146100u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00146100_0x146100(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A1C08u;
label_2a1c08:
    // 0x2a1c08: 0x0  nop
    ctx->pc = 0x2a1c08u;
    // NOP
label_2a1c0c:
    // 0x2a1c0c: 0x0  nop
    ctx->pc = 0x2a1c0cu;
    // NOP
label_2a1c10:
    // 0x2a1c10: 0x80518e0  j           func_146380
label_2a1c14:
    if (ctx->pc == 0x2A1C14u) {
        ctx->pc = 0x2A1C14u;
            // 0x2a1c14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C18u;
        goto label_2a1c18;
    }
    ctx->pc = 0x2A1C10u;
    ctx->pc = 0x2A1C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C10u;
            // 0x2a1c14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146380u;
    if (runtime->hasFunction(0x146380u)) {
        auto targetFn = runtime->lookupFunction(0x146380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00146380_0x146380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A1C18u;
label_2a1c18:
    // 0x2a1c18: 0x0  nop
    ctx->pc = 0x2a1c18u;
    // NOP
label_2a1c1c:
    // 0x2a1c1c: 0x0  nop
    ctx->pc = 0x2a1c1cu;
    // NOP
label_2a1c20:
    // 0x2a1c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a1c24:
    // 0x2a1c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a1c28:
    // 0x2a1c28: 0xc0518e0  jal         func_146380
label_2a1c2c:
    if (ctx->pc == 0x2A1C2Cu) {
        ctx->pc = 0x2A1C2Cu;
            // 0x2a1c2c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x2A1C30u;
        goto label_2a1c30;
    }
    ctx->pc = 0x2A1C28u;
    SET_GPR_U32(ctx, 31, 0x2A1C30u);
    ctx->pc = 0x2A1C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C28u;
            // 0x2a1c2c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146380u;
    if (runtime->hasFunction(0x146380u)) {
        auto targetFn = runtime->lookupFunction(0x146380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C30u; }
        if (ctx->pc != 0x2A1C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146380_0x146380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C30u; }
        if (ctx->pc != 0x2A1C30u) { return; }
    }
    ctx->pc = 0x2A1C30u;
label_2a1c30:
    // 0x2a1c30: 0xc051840  jal         func_146100
label_2a1c34:
    if (ctx->pc == 0x2A1C34u) {
        ctx->pc = 0x2A1C34u;
            // 0x2a1c34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A1C38u;
        goto label_2a1c38;
    }
    ctx->pc = 0x2A1C30u;
    SET_GPR_U32(ctx, 31, 0x2A1C38u);
    ctx->pc = 0x2A1C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C30u;
            // 0x2a1c34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146100u;
    if (runtime->hasFunction(0x146100u)) {
        auto targetFn = runtime->lookupFunction(0x146100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C38u; }
        if (ctx->pc != 0x2A1C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146100_0x146100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C38u; }
        if (ctx->pc != 0x2A1C38u) { return; }
    }
    ctx->pc = 0x2A1C38u;
label_2a1c38:
    // 0x2a1c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1c3c:
    // 0x2a1c3c: 0x3e00008  jr          $ra
label_2a1c40:
    if (ctx->pc == 0x2A1C40u) {
        ctx->pc = 0x2A1C40u;
            // 0x2a1c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A1C44u;
        goto label_2a1c44;
    }
    ctx->pc = 0x2A1C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C3Cu;
            // 0x2a1c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1C44u;
label_2a1c44:
    // 0x2a1c44: 0x0  nop
    ctx->pc = 0x2a1c44u;
    // NOP
label_2a1c48:
    // 0x2a1c48: 0x0  nop
    ctx->pc = 0x2a1c48u;
    // NOP
label_2a1c4c:
    // 0x2a1c4c: 0x0  nop
    ctx->pc = 0x2a1c4cu;
    // NOP
label_2a1c50:
    // 0x2a1c50: 0x3e00008  jr          $ra
label_2a1c54:
    if (ctx->pc == 0x2A1C54u) {
        ctx->pc = 0x2A1C54u;
            // 0x2a1c54: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x2A1C58u;
        goto label_2a1c58;
    }
    ctx->pc = 0x2A1C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C50u;
            // 0x2a1c54: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1C58u;
label_2a1c58:
    // 0x2a1c58: 0x0  nop
    ctx->pc = 0x2a1c58u;
    // NOP
label_2a1c5c:
    // 0x2a1c5c: 0x0  nop
    ctx->pc = 0x2a1c5cu;
    // NOP
label_2a1c60:
    // 0x2a1c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a1c64:
    // 0x2a1c64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a1c68:
    // 0x2a1c68: 0xc460ddd0  lwc1        $f0, -0x2230($v1)
    ctx->pc = 0x2a1c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1c6c:
    // 0x2a1c6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a1c70:
    // 0x2a1c70: 0xc462ddd4  lwc1        $f2, -0x222C($v1)
    ctx->pc = 0x2a1c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a1c74:
    // 0x2a1c74: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a1c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a1c78:
    // 0x2a1c78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a1c7c:
    // 0x2a1c7c: 0xc461ddd8  lwc1        $f1, -0x2228($v1)
    ctx->pc = 0x2a1c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1c80:
    // 0x2a1c80: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2a1c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2a1c84:
    // 0x2a1c84: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a1c88:
    // 0x2a1c88: 0xc460dddc  lwc1        $f0, -0x2224($v1)
    ctx->pc = 0x2a1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1c8c:
    // 0x2a1c8c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a1c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a1c90:
    // 0x2a1c90: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x2a1c90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2a1c94:
    // 0x2a1c94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a1c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a1c98:
    // 0x2a1c98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a1c9c:
    // 0x2a1c9c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2a1ca0:
    // 0x2a1ca0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2a1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a1ca4:
    // 0x2a1ca4: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x2a1ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_2a1ca8:
    // 0x2a1ca8: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x2a1ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2a1cac:
    // 0x2a1cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a1cb0:
    // 0x2a1cb0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2a1cb4:
    // 0x2a1cb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a1cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1cb8:
    // 0x2a1cb8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2a1cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_2a1cbc:
    // 0x2a1cbc: 0x3e00008  jr          $ra
label_2a1cc0:
    if (ctx->pc == 0x2A1CC0u) {
        ctx->pc = 0x2A1CC0u;
            // 0x2a1cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A1CC4u;
        goto label_2a1cc4;
    }
    ctx->pc = 0x2A1CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CBCu;
            // 0x2a1cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1CC4u;
label_2a1cc4:
    // 0x2a1cc4: 0x0  nop
    ctx->pc = 0x2a1cc4u;
    // NOP
label_2a1cc8:
    // 0x2a1cc8: 0x0  nop
    ctx->pc = 0x2a1cc8u;
    // NOP
label_2a1ccc:
    // 0x2a1ccc: 0x0  nop
    ctx->pc = 0x2a1cccu;
    // NOP
}
