#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C1450
// Address: 0x4c1450 - 0x4c22a0
void sub_004C1450_0x4c1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1450_0x4c1450");
#endif

    switch (ctx->pc) {
        case 0x4c1450u: goto label_4c1450;
        case 0x4c1454u: goto label_4c1454;
        case 0x4c1458u: goto label_4c1458;
        case 0x4c145cu: goto label_4c145c;
        case 0x4c1460u: goto label_4c1460;
        case 0x4c1464u: goto label_4c1464;
        case 0x4c1468u: goto label_4c1468;
        case 0x4c146cu: goto label_4c146c;
        case 0x4c1470u: goto label_4c1470;
        case 0x4c1474u: goto label_4c1474;
        case 0x4c1478u: goto label_4c1478;
        case 0x4c147cu: goto label_4c147c;
        case 0x4c1480u: goto label_4c1480;
        case 0x4c1484u: goto label_4c1484;
        case 0x4c1488u: goto label_4c1488;
        case 0x4c148cu: goto label_4c148c;
        case 0x4c1490u: goto label_4c1490;
        case 0x4c1494u: goto label_4c1494;
        case 0x4c1498u: goto label_4c1498;
        case 0x4c149cu: goto label_4c149c;
        case 0x4c14a0u: goto label_4c14a0;
        case 0x4c14a4u: goto label_4c14a4;
        case 0x4c14a8u: goto label_4c14a8;
        case 0x4c14acu: goto label_4c14ac;
        case 0x4c14b0u: goto label_4c14b0;
        case 0x4c14b4u: goto label_4c14b4;
        case 0x4c14b8u: goto label_4c14b8;
        case 0x4c14bcu: goto label_4c14bc;
        case 0x4c14c0u: goto label_4c14c0;
        case 0x4c14c4u: goto label_4c14c4;
        case 0x4c14c8u: goto label_4c14c8;
        case 0x4c14ccu: goto label_4c14cc;
        case 0x4c14d0u: goto label_4c14d0;
        case 0x4c14d4u: goto label_4c14d4;
        case 0x4c14d8u: goto label_4c14d8;
        case 0x4c14dcu: goto label_4c14dc;
        case 0x4c14e0u: goto label_4c14e0;
        case 0x4c14e4u: goto label_4c14e4;
        case 0x4c14e8u: goto label_4c14e8;
        case 0x4c14ecu: goto label_4c14ec;
        case 0x4c14f0u: goto label_4c14f0;
        case 0x4c14f4u: goto label_4c14f4;
        case 0x4c14f8u: goto label_4c14f8;
        case 0x4c14fcu: goto label_4c14fc;
        case 0x4c1500u: goto label_4c1500;
        case 0x4c1504u: goto label_4c1504;
        case 0x4c1508u: goto label_4c1508;
        case 0x4c150cu: goto label_4c150c;
        case 0x4c1510u: goto label_4c1510;
        case 0x4c1514u: goto label_4c1514;
        case 0x4c1518u: goto label_4c1518;
        case 0x4c151cu: goto label_4c151c;
        case 0x4c1520u: goto label_4c1520;
        case 0x4c1524u: goto label_4c1524;
        case 0x4c1528u: goto label_4c1528;
        case 0x4c152cu: goto label_4c152c;
        case 0x4c1530u: goto label_4c1530;
        case 0x4c1534u: goto label_4c1534;
        case 0x4c1538u: goto label_4c1538;
        case 0x4c153cu: goto label_4c153c;
        case 0x4c1540u: goto label_4c1540;
        case 0x4c1544u: goto label_4c1544;
        case 0x4c1548u: goto label_4c1548;
        case 0x4c154cu: goto label_4c154c;
        case 0x4c1550u: goto label_4c1550;
        case 0x4c1554u: goto label_4c1554;
        case 0x4c1558u: goto label_4c1558;
        case 0x4c155cu: goto label_4c155c;
        case 0x4c1560u: goto label_4c1560;
        case 0x4c1564u: goto label_4c1564;
        case 0x4c1568u: goto label_4c1568;
        case 0x4c156cu: goto label_4c156c;
        case 0x4c1570u: goto label_4c1570;
        case 0x4c1574u: goto label_4c1574;
        case 0x4c1578u: goto label_4c1578;
        case 0x4c157cu: goto label_4c157c;
        case 0x4c1580u: goto label_4c1580;
        case 0x4c1584u: goto label_4c1584;
        case 0x4c1588u: goto label_4c1588;
        case 0x4c158cu: goto label_4c158c;
        case 0x4c1590u: goto label_4c1590;
        case 0x4c1594u: goto label_4c1594;
        case 0x4c1598u: goto label_4c1598;
        case 0x4c159cu: goto label_4c159c;
        case 0x4c15a0u: goto label_4c15a0;
        case 0x4c15a4u: goto label_4c15a4;
        case 0x4c15a8u: goto label_4c15a8;
        case 0x4c15acu: goto label_4c15ac;
        case 0x4c15b0u: goto label_4c15b0;
        case 0x4c15b4u: goto label_4c15b4;
        case 0x4c15b8u: goto label_4c15b8;
        case 0x4c15bcu: goto label_4c15bc;
        case 0x4c15c0u: goto label_4c15c0;
        case 0x4c15c4u: goto label_4c15c4;
        case 0x4c15c8u: goto label_4c15c8;
        case 0x4c15ccu: goto label_4c15cc;
        case 0x4c15d0u: goto label_4c15d0;
        case 0x4c15d4u: goto label_4c15d4;
        case 0x4c15d8u: goto label_4c15d8;
        case 0x4c15dcu: goto label_4c15dc;
        case 0x4c15e0u: goto label_4c15e0;
        case 0x4c15e4u: goto label_4c15e4;
        case 0x4c15e8u: goto label_4c15e8;
        case 0x4c15ecu: goto label_4c15ec;
        case 0x4c15f0u: goto label_4c15f0;
        case 0x4c15f4u: goto label_4c15f4;
        case 0x4c15f8u: goto label_4c15f8;
        case 0x4c15fcu: goto label_4c15fc;
        case 0x4c1600u: goto label_4c1600;
        case 0x4c1604u: goto label_4c1604;
        case 0x4c1608u: goto label_4c1608;
        case 0x4c160cu: goto label_4c160c;
        case 0x4c1610u: goto label_4c1610;
        case 0x4c1614u: goto label_4c1614;
        case 0x4c1618u: goto label_4c1618;
        case 0x4c161cu: goto label_4c161c;
        case 0x4c1620u: goto label_4c1620;
        case 0x4c1624u: goto label_4c1624;
        case 0x4c1628u: goto label_4c1628;
        case 0x4c162cu: goto label_4c162c;
        case 0x4c1630u: goto label_4c1630;
        case 0x4c1634u: goto label_4c1634;
        case 0x4c1638u: goto label_4c1638;
        case 0x4c163cu: goto label_4c163c;
        case 0x4c1640u: goto label_4c1640;
        case 0x4c1644u: goto label_4c1644;
        case 0x4c1648u: goto label_4c1648;
        case 0x4c164cu: goto label_4c164c;
        case 0x4c1650u: goto label_4c1650;
        case 0x4c1654u: goto label_4c1654;
        case 0x4c1658u: goto label_4c1658;
        case 0x4c165cu: goto label_4c165c;
        case 0x4c1660u: goto label_4c1660;
        case 0x4c1664u: goto label_4c1664;
        case 0x4c1668u: goto label_4c1668;
        case 0x4c166cu: goto label_4c166c;
        case 0x4c1670u: goto label_4c1670;
        case 0x4c1674u: goto label_4c1674;
        case 0x4c1678u: goto label_4c1678;
        case 0x4c167cu: goto label_4c167c;
        case 0x4c1680u: goto label_4c1680;
        case 0x4c1684u: goto label_4c1684;
        case 0x4c1688u: goto label_4c1688;
        case 0x4c168cu: goto label_4c168c;
        case 0x4c1690u: goto label_4c1690;
        case 0x4c1694u: goto label_4c1694;
        case 0x4c1698u: goto label_4c1698;
        case 0x4c169cu: goto label_4c169c;
        case 0x4c16a0u: goto label_4c16a0;
        case 0x4c16a4u: goto label_4c16a4;
        case 0x4c16a8u: goto label_4c16a8;
        case 0x4c16acu: goto label_4c16ac;
        case 0x4c16b0u: goto label_4c16b0;
        case 0x4c16b4u: goto label_4c16b4;
        case 0x4c16b8u: goto label_4c16b8;
        case 0x4c16bcu: goto label_4c16bc;
        case 0x4c16c0u: goto label_4c16c0;
        case 0x4c16c4u: goto label_4c16c4;
        case 0x4c16c8u: goto label_4c16c8;
        case 0x4c16ccu: goto label_4c16cc;
        case 0x4c16d0u: goto label_4c16d0;
        case 0x4c16d4u: goto label_4c16d4;
        case 0x4c16d8u: goto label_4c16d8;
        case 0x4c16dcu: goto label_4c16dc;
        case 0x4c16e0u: goto label_4c16e0;
        case 0x4c16e4u: goto label_4c16e4;
        case 0x4c16e8u: goto label_4c16e8;
        case 0x4c16ecu: goto label_4c16ec;
        case 0x4c16f0u: goto label_4c16f0;
        case 0x4c16f4u: goto label_4c16f4;
        case 0x4c16f8u: goto label_4c16f8;
        case 0x4c16fcu: goto label_4c16fc;
        case 0x4c1700u: goto label_4c1700;
        case 0x4c1704u: goto label_4c1704;
        case 0x4c1708u: goto label_4c1708;
        case 0x4c170cu: goto label_4c170c;
        case 0x4c1710u: goto label_4c1710;
        case 0x4c1714u: goto label_4c1714;
        case 0x4c1718u: goto label_4c1718;
        case 0x4c171cu: goto label_4c171c;
        case 0x4c1720u: goto label_4c1720;
        case 0x4c1724u: goto label_4c1724;
        case 0x4c1728u: goto label_4c1728;
        case 0x4c172cu: goto label_4c172c;
        case 0x4c1730u: goto label_4c1730;
        case 0x4c1734u: goto label_4c1734;
        case 0x4c1738u: goto label_4c1738;
        case 0x4c173cu: goto label_4c173c;
        case 0x4c1740u: goto label_4c1740;
        case 0x4c1744u: goto label_4c1744;
        case 0x4c1748u: goto label_4c1748;
        case 0x4c174cu: goto label_4c174c;
        case 0x4c1750u: goto label_4c1750;
        case 0x4c1754u: goto label_4c1754;
        case 0x4c1758u: goto label_4c1758;
        case 0x4c175cu: goto label_4c175c;
        case 0x4c1760u: goto label_4c1760;
        case 0x4c1764u: goto label_4c1764;
        case 0x4c1768u: goto label_4c1768;
        case 0x4c176cu: goto label_4c176c;
        case 0x4c1770u: goto label_4c1770;
        case 0x4c1774u: goto label_4c1774;
        case 0x4c1778u: goto label_4c1778;
        case 0x4c177cu: goto label_4c177c;
        case 0x4c1780u: goto label_4c1780;
        case 0x4c1784u: goto label_4c1784;
        case 0x4c1788u: goto label_4c1788;
        case 0x4c178cu: goto label_4c178c;
        case 0x4c1790u: goto label_4c1790;
        case 0x4c1794u: goto label_4c1794;
        case 0x4c1798u: goto label_4c1798;
        case 0x4c179cu: goto label_4c179c;
        case 0x4c17a0u: goto label_4c17a0;
        case 0x4c17a4u: goto label_4c17a4;
        case 0x4c17a8u: goto label_4c17a8;
        case 0x4c17acu: goto label_4c17ac;
        case 0x4c17b0u: goto label_4c17b0;
        case 0x4c17b4u: goto label_4c17b4;
        case 0x4c17b8u: goto label_4c17b8;
        case 0x4c17bcu: goto label_4c17bc;
        case 0x4c17c0u: goto label_4c17c0;
        case 0x4c17c4u: goto label_4c17c4;
        case 0x4c17c8u: goto label_4c17c8;
        case 0x4c17ccu: goto label_4c17cc;
        case 0x4c17d0u: goto label_4c17d0;
        case 0x4c17d4u: goto label_4c17d4;
        case 0x4c17d8u: goto label_4c17d8;
        case 0x4c17dcu: goto label_4c17dc;
        case 0x4c17e0u: goto label_4c17e0;
        case 0x4c17e4u: goto label_4c17e4;
        case 0x4c17e8u: goto label_4c17e8;
        case 0x4c17ecu: goto label_4c17ec;
        case 0x4c17f0u: goto label_4c17f0;
        case 0x4c17f4u: goto label_4c17f4;
        case 0x4c17f8u: goto label_4c17f8;
        case 0x4c17fcu: goto label_4c17fc;
        case 0x4c1800u: goto label_4c1800;
        case 0x4c1804u: goto label_4c1804;
        case 0x4c1808u: goto label_4c1808;
        case 0x4c180cu: goto label_4c180c;
        case 0x4c1810u: goto label_4c1810;
        case 0x4c1814u: goto label_4c1814;
        case 0x4c1818u: goto label_4c1818;
        case 0x4c181cu: goto label_4c181c;
        case 0x4c1820u: goto label_4c1820;
        case 0x4c1824u: goto label_4c1824;
        case 0x4c1828u: goto label_4c1828;
        case 0x4c182cu: goto label_4c182c;
        case 0x4c1830u: goto label_4c1830;
        case 0x4c1834u: goto label_4c1834;
        case 0x4c1838u: goto label_4c1838;
        case 0x4c183cu: goto label_4c183c;
        case 0x4c1840u: goto label_4c1840;
        case 0x4c1844u: goto label_4c1844;
        case 0x4c1848u: goto label_4c1848;
        case 0x4c184cu: goto label_4c184c;
        case 0x4c1850u: goto label_4c1850;
        case 0x4c1854u: goto label_4c1854;
        case 0x4c1858u: goto label_4c1858;
        case 0x4c185cu: goto label_4c185c;
        case 0x4c1860u: goto label_4c1860;
        case 0x4c1864u: goto label_4c1864;
        case 0x4c1868u: goto label_4c1868;
        case 0x4c186cu: goto label_4c186c;
        case 0x4c1870u: goto label_4c1870;
        case 0x4c1874u: goto label_4c1874;
        case 0x4c1878u: goto label_4c1878;
        case 0x4c187cu: goto label_4c187c;
        case 0x4c1880u: goto label_4c1880;
        case 0x4c1884u: goto label_4c1884;
        case 0x4c1888u: goto label_4c1888;
        case 0x4c188cu: goto label_4c188c;
        case 0x4c1890u: goto label_4c1890;
        case 0x4c1894u: goto label_4c1894;
        case 0x4c1898u: goto label_4c1898;
        case 0x4c189cu: goto label_4c189c;
        case 0x4c18a0u: goto label_4c18a0;
        case 0x4c18a4u: goto label_4c18a4;
        case 0x4c18a8u: goto label_4c18a8;
        case 0x4c18acu: goto label_4c18ac;
        case 0x4c18b0u: goto label_4c18b0;
        case 0x4c18b4u: goto label_4c18b4;
        case 0x4c18b8u: goto label_4c18b8;
        case 0x4c18bcu: goto label_4c18bc;
        case 0x4c18c0u: goto label_4c18c0;
        case 0x4c18c4u: goto label_4c18c4;
        case 0x4c18c8u: goto label_4c18c8;
        case 0x4c18ccu: goto label_4c18cc;
        case 0x4c18d0u: goto label_4c18d0;
        case 0x4c18d4u: goto label_4c18d4;
        case 0x4c18d8u: goto label_4c18d8;
        case 0x4c18dcu: goto label_4c18dc;
        case 0x4c18e0u: goto label_4c18e0;
        case 0x4c18e4u: goto label_4c18e4;
        case 0x4c18e8u: goto label_4c18e8;
        case 0x4c18ecu: goto label_4c18ec;
        case 0x4c18f0u: goto label_4c18f0;
        case 0x4c18f4u: goto label_4c18f4;
        case 0x4c18f8u: goto label_4c18f8;
        case 0x4c18fcu: goto label_4c18fc;
        case 0x4c1900u: goto label_4c1900;
        case 0x4c1904u: goto label_4c1904;
        case 0x4c1908u: goto label_4c1908;
        case 0x4c190cu: goto label_4c190c;
        case 0x4c1910u: goto label_4c1910;
        case 0x4c1914u: goto label_4c1914;
        case 0x4c1918u: goto label_4c1918;
        case 0x4c191cu: goto label_4c191c;
        case 0x4c1920u: goto label_4c1920;
        case 0x4c1924u: goto label_4c1924;
        case 0x4c1928u: goto label_4c1928;
        case 0x4c192cu: goto label_4c192c;
        case 0x4c1930u: goto label_4c1930;
        case 0x4c1934u: goto label_4c1934;
        case 0x4c1938u: goto label_4c1938;
        case 0x4c193cu: goto label_4c193c;
        case 0x4c1940u: goto label_4c1940;
        case 0x4c1944u: goto label_4c1944;
        case 0x4c1948u: goto label_4c1948;
        case 0x4c194cu: goto label_4c194c;
        case 0x4c1950u: goto label_4c1950;
        case 0x4c1954u: goto label_4c1954;
        case 0x4c1958u: goto label_4c1958;
        case 0x4c195cu: goto label_4c195c;
        case 0x4c1960u: goto label_4c1960;
        case 0x4c1964u: goto label_4c1964;
        case 0x4c1968u: goto label_4c1968;
        case 0x4c196cu: goto label_4c196c;
        case 0x4c1970u: goto label_4c1970;
        case 0x4c1974u: goto label_4c1974;
        case 0x4c1978u: goto label_4c1978;
        case 0x4c197cu: goto label_4c197c;
        case 0x4c1980u: goto label_4c1980;
        case 0x4c1984u: goto label_4c1984;
        case 0x4c1988u: goto label_4c1988;
        case 0x4c198cu: goto label_4c198c;
        case 0x4c1990u: goto label_4c1990;
        case 0x4c1994u: goto label_4c1994;
        case 0x4c1998u: goto label_4c1998;
        case 0x4c199cu: goto label_4c199c;
        case 0x4c19a0u: goto label_4c19a0;
        case 0x4c19a4u: goto label_4c19a4;
        case 0x4c19a8u: goto label_4c19a8;
        case 0x4c19acu: goto label_4c19ac;
        case 0x4c19b0u: goto label_4c19b0;
        case 0x4c19b4u: goto label_4c19b4;
        case 0x4c19b8u: goto label_4c19b8;
        case 0x4c19bcu: goto label_4c19bc;
        case 0x4c19c0u: goto label_4c19c0;
        case 0x4c19c4u: goto label_4c19c4;
        case 0x4c19c8u: goto label_4c19c8;
        case 0x4c19ccu: goto label_4c19cc;
        case 0x4c19d0u: goto label_4c19d0;
        case 0x4c19d4u: goto label_4c19d4;
        case 0x4c19d8u: goto label_4c19d8;
        case 0x4c19dcu: goto label_4c19dc;
        case 0x4c19e0u: goto label_4c19e0;
        case 0x4c19e4u: goto label_4c19e4;
        case 0x4c19e8u: goto label_4c19e8;
        case 0x4c19ecu: goto label_4c19ec;
        case 0x4c19f0u: goto label_4c19f0;
        case 0x4c19f4u: goto label_4c19f4;
        case 0x4c19f8u: goto label_4c19f8;
        case 0x4c19fcu: goto label_4c19fc;
        case 0x4c1a00u: goto label_4c1a00;
        case 0x4c1a04u: goto label_4c1a04;
        case 0x4c1a08u: goto label_4c1a08;
        case 0x4c1a0cu: goto label_4c1a0c;
        case 0x4c1a10u: goto label_4c1a10;
        case 0x4c1a14u: goto label_4c1a14;
        case 0x4c1a18u: goto label_4c1a18;
        case 0x4c1a1cu: goto label_4c1a1c;
        case 0x4c1a20u: goto label_4c1a20;
        case 0x4c1a24u: goto label_4c1a24;
        case 0x4c1a28u: goto label_4c1a28;
        case 0x4c1a2cu: goto label_4c1a2c;
        case 0x4c1a30u: goto label_4c1a30;
        case 0x4c1a34u: goto label_4c1a34;
        case 0x4c1a38u: goto label_4c1a38;
        case 0x4c1a3cu: goto label_4c1a3c;
        case 0x4c1a40u: goto label_4c1a40;
        case 0x4c1a44u: goto label_4c1a44;
        case 0x4c1a48u: goto label_4c1a48;
        case 0x4c1a4cu: goto label_4c1a4c;
        case 0x4c1a50u: goto label_4c1a50;
        case 0x4c1a54u: goto label_4c1a54;
        case 0x4c1a58u: goto label_4c1a58;
        case 0x4c1a5cu: goto label_4c1a5c;
        case 0x4c1a60u: goto label_4c1a60;
        case 0x4c1a64u: goto label_4c1a64;
        case 0x4c1a68u: goto label_4c1a68;
        case 0x4c1a6cu: goto label_4c1a6c;
        case 0x4c1a70u: goto label_4c1a70;
        case 0x4c1a74u: goto label_4c1a74;
        case 0x4c1a78u: goto label_4c1a78;
        case 0x4c1a7cu: goto label_4c1a7c;
        case 0x4c1a80u: goto label_4c1a80;
        case 0x4c1a84u: goto label_4c1a84;
        case 0x4c1a88u: goto label_4c1a88;
        case 0x4c1a8cu: goto label_4c1a8c;
        case 0x4c1a90u: goto label_4c1a90;
        case 0x4c1a94u: goto label_4c1a94;
        case 0x4c1a98u: goto label_4c1a98;
        case 0x4c1a9cu: goto label_4c1a9c;
        case 0x4c1aa0u: goto label_4c1aa0;
        case 0x4c1aa4u: goto label_4c1aa4;
        case 0x4c1aa8u: goto label_4c1aa8;
        case 0x4c1aacu: goto label_4c1aac;
        case 0x4c1ab0u: goto label_4c1ab0;
        case 0x4c1ab4u: goto label_4c1ab4;
        case 0x4c1ab8u: goto label_4c1ab8;
        case 0x4c1abcu: goto label_4c1abc;
        case 0x4c1ac0u: goto label_4c1ac0;
        case 0x4c1ac4u: goto label_4c1ac4;
        case 0x4c1ac8u: goto label_4c1ac8;
        case 0x4c1accu: goto label_4c1acc;
        case 0x4c1ad0u: goto label_4c1ad0;
        case 0x4c1ad4u: goto label_4c1ad4;
        case 0x4c1ad8u: goto label_4c1ad8;
        case 0x4c1adcu: goto label_4c1adc;
        case 0x4c1ae0u: goto label_4c1ae0;
        case 0x4c1ae4u: goto label_4c1ae4;
        case 0x4c1ae8u: goto label_4c1ae8;
        case 0x4c1aecu: goto label_4c1aec;
        case 0x4c1af0u: goto label_4c1af0;
        case 0x4c1af4u: goto label_4c1af4;
        case 0x4c1af8u: goto label_4c1af8;
        case 0x4c1afcu: goto label_4c1afc;
        case 0x4c1b00u: goto label_4c1b00;
        case 0x4c1b04u: goto label_4c1b04;
        case 0x4c1b08u: goto label_4c1b08;
        case 0x4c1b0cu: goto label_4c1b0c;
        case 0x4c1b10u: goto label_4c1b10;
        case 0x4c1b14u: goto label_4c1b14;
        case 0x4c1b18u: goto label_4c1b18;
        case 0x4c1b1cu: goto label_4c1b1c;
        case 0x4c1b20u: goto label_4c1b20;
        case 0x4c1b24u: goto label_4c1b24;
        case 0x4c1b28u: goto label_4c1b28;
        case 0x4c1b2cu: goto label_4c1b2c;
        case 0x4c1b30u: goto label_4c1b30;
        case 0x4c1b34u: goto label_4c1b34;
        case 0x4c1b38u: goto label_4c1b38;
        case 0x4c1b3cu: goto label_4c1b3c;
        case 0x4c1b40u: goto label_4c1b40;
        case 0x4c1b44u: goto label_4c1b44;
        case 0x4c1b48u: goto label_4c1b48;
        case 0x4c1b4cu: goto label_4c1b4c;
        case 0x4c1b50u: goto label_4c1b50;
        case 0x4c1b54u: goto label_4c1b54;
        case 0x4c1b58u: goto label_4c1b58;
        case 0x4c1b5cu: goto label_4c1b5c;
        case 0x4c1b60u: goto label_4c1b60;
        case 0x4c1b64u: goto label_4c1b64;
        case 0x4c1b68u: goto label_4c1b68;
        case 0x4c1b6cu: goto label_4c1b6c;
        case 0x4c1b70u: goto label_4c1b70;
        case 0x4c1b74u: goto label_4c1b74;
        case 0x4c1b78u: goto label_4c1b78;
        case 0x4c1b7cu: goto label_4c1b7c;
        case 0x4c1b80u: goto label_4c1b80;
        case 0x4c1b84u: goto label_4c1b84;
        case 0x4c1b88u: goto label_4c1b88;
        case 0x4c1b8cu: goto label_4c1b8c;
        case 0x4c1b90u: goto label_4c1b90;
        case 0x4c1b94u: goto label_4c1b94;
        case 0x4c1b98u: goto label_4c1b98;
        case 0x4c1b9cu: goto label_4c1b9c;
        case 0x4c1ba0u: goto label_4c1ba0;
        case 0x4c1ba4u: goto label_4c1ba4;
        case 0x4c1ba8u: goto label_4c1ba8;
        case 0x4c1bacu: goto label_4c1bac;
        case 0x4c1bb0u: goto label_4c1bb0;
        case 0x4c1bb4u: goto label_4c1bb4;
        case 0x4c1bb8u: goto label_4c1bb8;
        case 0x4c1bbcu: goto label_4c1bbc;
        case 0x4c1bc0u: goto label_4c1bc0;
        case 0x4c1bc4u: goto label_4c1bc4;
        case 0x4c1bc8u: goto label_4c1bc8;
        case 0x4c1bccu: goto label_4c1bcc;
        case 0x4c1bd0u: goto label_4c1bd0;
        case 0x4c1bd4u: goto label_4c1bd4;
        case 0x4c1bd8u: goto label_4c1bd8;
        case 0x4c1bdcu: goto label_4c1bdc;
        case 0x4c1be0u: goto label_4c1be0;
        case 0x4c1be4u: goto label_4c1be4;
        case 0x4c1be8u: goto label_4c1be8;
        case 0x4c1becu: goto label_4c1bec;
        case 0x4c1bf0u: goto label_4c1bf0;
        case 0x4c1bf4u: goto label_4c1bf4;
        case 0x4c1bf8u: goto label_4c1bf8;
        case 0x4c1bfcu: goto label_4c1bfc;
        case 0x4c1c00u: goto label_4c1c00;
        case 0x4c1c04u: goto label_4c1c04;
        case 0x4c1c08u: goto label_4c1c08;
        case 0x4c1c0cu: goto label_4c1c0c;
        case 0x4c1c10u: goto label_4c1c10;
        case 0x4c1c14u: goto label_4c1c14;
        case 0x4c1c18u: goto label_4c1c18;
        case 0x4c1c1cu: goto label_4c1c1c;
        case 0x4c1c20u: goto label_4c1c20;
        case 0x4c1c24u: goto label_4c1c24;
        case 0x4c1c28u: goto label_4c1c28;
        case 0x4c1c2cu: goto label_4c1c2c;
        case 0x4c1c30u: goto label_4c1c30;
        case 0x4c1c34u: goto label_4c1c34;
        case 0x4c1c38u: goto label_4c1c38;
        case 0x4c1c3cu: goto label_4c1c3c;
        case 0x4c1c40u: goto label_4c1c40;
        case 0x4c1c44u: goto label_4c1c44;
        case 0x4c1c48u: goto label_4c1c48;
        case 0x4c1c4cu: goto label_4c1c4c;
        case 0x4c1c50u: goto label_4c1c50;
        case 0x4c1c54u: goto label_4c1c54;
        case 0x4c1c58u: goto label_4c1c58;
        case 0x4c1c5cu: goto label_4c1c5c;
        case 0x4c1c60u: goto label_4c1c60;
        case 0x4c1c64u: goto label_4c1c64;
        case 0x4c1c68u: goto label_4c1c68;
        case 0x4c1c6cu: goto label_4c1c6c;
        case 0x4c1c70u: goto label_4c1c70;
        case 0x4c1c74u: goto label_4c1c74;
        case 0x4c1c78u: goto label_4c1c78;
        case 0x4c1c7cu: goto label_4c1c7c;
        case 0x4c1c80u: goto label_4c1c80;
        case 0x4c1c84u: goto label_4c1c84;
        case 0x4c1c88u: goto label_4c1c88;
        case 0x4c1c8cu: goto label_4c1c8c;
        case 0x4c1c90u: goto label_4c1c90;
        case 0x4c1c94u: goto label_4c1c94;
        case 0x4c1c98u: goto label_4c1c98;
        case 0x4c1c9cu: goto label_4c1c9c;
        case 0x4c1ca0u: goto label_4c1ca0;
        case 0x4c1ca4u: goto label_4c1ca4;
        case 0x4c1ca8u: goto label_4c1ca8;
        case 0x4c1cacu: goto label_4c1cac;
        case 0x4c1cb0u: goto label_4c1cb0;
        case 0x4c1cb4u: goto label_4c1cb4;
        case 0x4c1cb8u: goto label_4c1cb8;
        case 0x4c1cbcu: goto label_4c1cbc;
        case 0x4c1cc0u: goto label_4c1cc0;
        case 0x4c1cc4u: goto label_4c1cc4;
        case 0x4c1cc8u: goto label_4c1cc8;
        case 0x4c1cccu: goto label_4c1ccc;
        case 0x4c1cd0u: goto label_4c1cd0;
        case 0x4c1cd4u: goto label_4c1cd4;
        case 0x4c1cd8u: goto label_4c1cd8;
        case 0x4c1cdcu: goto label_4c1cdc;
        case 0x4c1ce0u: goto label_4c1ce0;
        case 0x4c1ce4u: goto label_4c1ce4;
        case 0x4c1ce8u: goto label_4c1ce8;
        case 0x4c1cecu: goto label_4c1cec;
        case 0x4c1cf0u: goto label_4c1cf0;
        case 0x4c1cf4u: goto label_4c1cf4;
        case 0x4c1cf8u: goto label_4c1cf8;
        case 0x4c1cfcu: goto label_4c1cfc;
        case 0x4c1d00u: goto label_4c1d00;
        case 0x4c1d04u: goto label_4c1d04;
        case 0x4c1d08u: goto label_4c1d08;
        case 0x4c1d0cu: goto label_4c1d0c;
        case 0x4c1d10u: goto label_4c1d10;
        case 0x4c1d14u: goto label_4c1d14;
        case 0x4c1d18u: goto label_4c1d18;
        case 0x4c1d1cu: goto label_4c1d1c;
        case 0x4c1d20u: goto label_4c1d20;
        case 0x4c1d24u: goto label_4c1d24;
        case 0x4c1d28u: goto label_4c1d28;
        case 0x4c1d2cu: goto label_4c1d2c;
        case 0x4c1d30u: goto label_4c1d30;
        case 0x4c1d34u: goto label_4c1d34;
        case 0x4c1d38u: goto label_4c1d38;
        case 0x4c1d3cu: goto label_4c1d3c;
        case 0x4c1d40u: goto label_4c1d40;
        case 0x4c1d44u: goto label_4c1d44;
        case 0x4c1d48u: goto label_4c1d48;
        case 0x4c1d4cu: goto label_4c1d4c;
        case 0x4c1d50u: goto label_4c1d50;
        case 0x4c1d54u: goto label_4c1d54;
        case 0x4c1d58u: goto label_4c1d58;
        case 0x4c1d5cu: goto label_4c1d5c;
        case 0x4c1d60u: goto label_4c1d60;
        case 0x4c1d64u: goto label_4c1d64;
        case 0x4c1d68u: goto label_4c1d68;
        case 0x4c1d6cu: goto label_4c1d6c;
        case 0x4c1d70u: goto label_4c1d70;
        case 0x4c1d74u: goto label_4c1d74;
        case 0x4c1d78u: goto label_4c1d78;
        case 0x4c1d7cu: goto label_4c1d7c;
        case 0x4c1d80u: goto label_4c1d80;
        case 0x4c1d84u: goto label_4c1d84;
        case 0x4c1d88u: goto label_4c1d88;
        case 0x4c1d8cu: goto label_4c1d8c;
        case 0x4c1d90u: goto label_4c1d90;
        case 0x4c1d94u: goto label_4c1d94;
        case 0x4c1d98u: goto label_4c1d98;
        case 0x4c1d9cu: goto label_4c1d9c;
        case 0x4c1da0u: goto label_4c1da0;
        case 0x4c1da4u: goto label_4c1da4;
        case 0x4c1da8u: goto label_4c1da8;
        case 0x4c1dacu: goto label_4c1dac;
        case 0x4c1db0u: goto label_4c1db0;
        case 0x4c1db4u: goto label_4c1db4;
        case 0x4c1db8u: goto label_4c1db8;
        case 0x4c1dbcu: goto label_4c1dbc;
        case 0x4c1dc0u: goto label_4c1dc0;
        case 0x4c1dc4u: goto label_4c1dc4;
        case 0x4c1dc8u: goto label_4c1dc8;
        case 0x4c1dccu: goto label_4c1dcc;
        case 0x4c1dd0u: goto label_4c1dd0;
        case 0x4c1dd4u: goto label_4c1dd4;
        case 0x4c1dd8u: goto label_4c1dd8;
        case 0x4c1ddcu: goto label_4c1ddc;
        case 0x4c1de0u: goto label_4c1de0;
        case 0x4c1de4u: goto label_4c1de4;
        case 0x4c1de8u: goto label_4c1de8;
        case 0x4c1decu: goto label_4c1dec;
        case 0x4c1df0u: goto label_4c1df0;
        case 0x4c1df4u: goto label_4c1df4;
        case 0x4c1df8u: goto label_4c1df8;
        case 0x4c1dfcu: goto label_4c1dfc;
        case 0x4c1e00u: goto label_4c1e00;
        case 0x4c1e04u: goto label_4c1e04;
        case 0x4c1e08u: goto label_4c1e08;
        case 0x4c1e0cu: goto label_4c1e0c;
        case 0x4c1e10u: goto label_4c1e10;
        case 0x4c1e14u: goto label_4c1e14;
        case 0x4c1e18u: goto label_4c1e18;
        case 0x4c1e1cu: goto label_4c1e1c;
        case 0x4c1e20u: goto label_4c1e20;
        case 0x4c1e24u: goto label_4c1e24;
        case 0x4c1e28u: goto label_4c1e28;
        case 0x4c1e2cu: goto label_4c1e2c;
        case 0x4c1e30u: goto label_4c1e30;
        case 0x4c1e34u: goto label_4c1e34;
        case 0x4c1e38u: goto label_4c1e38;
        case 0x4c1e3cu: goto label_4c1e3c;
        case 0x4c1e40u: goto label_4c1e40;
        case 0x4c1e44u: goto label_4c1e44;
        case 0x4c1e48u: goto label_4c1e48;
        case 0x4c1e4cu: goto label_4c1e4c;
        case 0x4c1e50u: goto label_4c1e50;
        case 0x4c1e54u: goto label_4c1e54;
        case 0x4c1e58u: goto label_4c1e58;
        case 0x4c1e5cu: goto label_4c1e5c;
        case 0x4c1e60u: goto label_4c1e60;
        case 0x4c1e64u: goto label_4c1e64;
        case 0x4c1e68u: goto label_4c1e68;
        case 0x4c1e6cu: goto label_4c1e6c;
        case 0x4c1e70u: goto label_4c1e70;
        case 0x4c1e74u: goto label_4c1e74;
        case 0x4c1e78u: goto label_4c1e78;
        case 0x4c1e7cu: goto label_4c1e7c;
        case 0x4c1e80u: goto label_4c1e80;
        case 0x4c1e84u: goto label_4c1e84;
        case 0x4c1e88u: goto label_4c1e88;
        case 0x4c1e8cu: goto label_4c1e8c;
        case 0x4c1e90u: goto label_4c1e90;
        case 0x4c1e94u: goto label_4c1e94;
        case 0x4c1e98u: goto label_4c1e98;
        case 0x4c1e9cu: goto label_4c1e9c;
        case 0x4c1ea0u: goto label_4c1ea0;
        case 0x4c1ea4u: goto label_4c1ea4;
        case 0x4c1ea8u: goto label_4c1ea8;
        case 0x4c1eacu: goto label_4c1eac;
        case 0x4c1eb0u: goto label_4c1eb0;
        case 0x4c1eb4u: goto label_4c1eb4;
        case 0x4c1eb8u: goto label_4c1eb8;
        case 0x4c1ebcu: goto label_4c1ebc;
        case 0x4c1ec0u: goto label_4c1ec0;
        case 0x4c1ec4u: goto label_4c1ec4;
        case 0x4c1ec8u: goto label_4c1ec8;
        case 0x4c1eccu: goto label_4c1ecc;
        case 0x4c1ed0u: goto label_4c1ed0;
        case 0x4c1ed4u: goto label_4c1ed4;
        case 0x4c1ed8u: goto label_4c1ed8;
        case 0x4c1edcu: goto label_4c1edc;
        case 0x4c1ee0u: goto label_4c1ee0;
        case 0x4c1ee4u: goto label_4c1ee4;
        case 0x4c1ee8u: goto label_4c1ee8;
        case 0x4c1eecu: goto label_4c1eec;
        case 0x4c1ef0u: goto label_4c1ef0;
        case 0x4c1ef4u: goto label_4c1ef4;
        case 0x4c1ef8u: goto label_4c1ef8;
        case 0x4c1efcu: goto label_4c1efc;
        case 0x4c1f00u: goto label_4c1f00;
        case 0x4c1f04u: goto label_4c1f04;
        case 0x4c1f08u: goto label_4c1f08;
        case 0x4c1f0cu: goto label_4c1f0c;
        case 0x4c1f10u: goto label_4c1f10;
        case 0x4c1f14u: goto label_4c1f14;
        case 0x4c1f18u: goto label_4c1f18;
        case 0x4c1f1cu: goto label_4c1f1c;
        case 0x4c1f20u: goto label_4c1f20;
        case 0x4c1f24u: goto label_4c1f24;
        case 0x4c1f28u: goto label_4c1f28;
        case 0x4c1f2cu: goto label_4c1f2c;
        case 0x4c1f30u: goto label_4c1f30;
        case 0x4c1f34u: goto label_4c1f34;
        case 0x4c1f38u: goto label_4c1f38;
        case 0x4c1f3cu: goto label_4c1f3c;
        case 0x4c1f40u: goto label_4c1f40;
        case 0x4c1f44u: goto label_4c1f44;
        case 0x4c1f48u: goto label_4c1f48;
        case 0x4c1f4cu: goto label_4c1f4c;
        case 0x4c1f50u: goto label_4c1f50;
        case 0x4c1f54u: goto label_4c1f54;
        case 0x4c1f58u: goto label_4c1f58;
        case 0x4c1f5cu: goto label_4c1f5c;
        case 0x4c1f60u: goto label_4c1f60;
        case 0x4c1f64u: goto label_4c1f64;
        case 0x4c1f68u: goto label_4c1f68;
        case 0x4c1f6cu: goto label_4c1f6c;
        case 0x4c1f70u: goto label_4c1f70;
        case 0x4c1f74u: goto label_4c1f74;
        case 0x4c1f78u: goto label_4c1f78;
        case 0x4c1f7cu: goto label_4c1f7c;
        case 0x4c1f80u: goto label_4c1f80;
        case 0x4c1f84u: goto label_4c1f84;
        case 0x4c1f88u: goto label_4c1f88;
        case 0x4c1f8cu: goto label_4c1f8c;
        case 0x4c1f90u: goto label_4c1f90;
        case 0x4c1f94u: goto label_4c1f94;
        case 0x4c1f98u: goto label_4c1f98;
        case 0x4c1f9cu: goto label_4c1f9c;
        case 0x4c1fa0u: goto label_4c1fa0;
        case 0x4c1fa4u: goto label_4c1fa4;
        case 0x4c1fa8u: goto label_4c1fa8;
        case 0x4c1facu: goto label_4c1fac;
        case 0x4c1fb0u: goto label_4c1fb0;
        case 0x4c1fb4u: goto label_4c1fb4;
        case 0x4c1fb8u: goto label_4c1fb8;
        case 0x4c1fbcu: goto label_4c1fbc;
        case 0x4c1fc0u: goto label_4c1fc0;
        case 0x4c1fc4u: goto label_4c1fc4;
        case 0x4c1fc8u: goto label_4c1fc8;
        case 0x4c1fccu: goto label_4c1fcc;
        case 0x4c1fd0u: goto label_4c1fd0;
        case 0x4c1fd4u: goto label_4c1fd4;
        case 0x4c1fd8u: goto label_4c1fd8;
        case 0x4c1fdcu: goto label_4c1fdc;
        case 0x4c1fe0u: goto label_4c1fe0;
        case 0x4c1fe4u: goto label_4c1fe4;
        case 0x4c1fe8u: goto label_4c1fe8;
        case 0x4c1fecu: goto label_4c1fec;
        case 0x4c1ff0u: goto label_4c1ff0;
        case 0x4c1ff4u: goto label_4c1ff4;
        case 0x4c1ff8u: goto label_4c1ff8;
        case 0x4c1ffcu: goto label_4c1ffc;
        case 0x4c2000u: goto label_4c2000;
        case 0x4c2004u: goto label_4c2004;
        case 0x4c2008u: goto label_4c2008;
        case 0x4c200cu: goto label_4c200c;
        case 0x4c2010u: goto label_4c2010;
        case 0x4c2014u: goto label_4c2014;
        case 0x4c2018u: goto label_4c2018;
        case 0x4c201cu: goto label_4c201c;
        case 0x4c2020u: goto label_4c2020;
        case 0x4c2024u: goto label_4c2024;
        case 0x4c2028u: goto label_4c2028;
        case 0x4c202cu: goto label_4c202c;
        case 0x4c2030u: goto label_4c2030;
        case 0x4c2034u: goto label_4c2034;
        case 0x4c2038u: goto label_4c2038;
        case 0x4c203cu: goto label_4c203c;
        case 0x4c2040u: goto label_4c2040;
        case 0x4c2044u: goto label_4c2044;
        case 0x4c2048u: goto label_4c2048;
        case 0x4c204cu: goto label_4c204c;
        case 0x4c2050u: goto label_4c2050;
        case 0x4c2054u: goto label_4c2054;
        case 0x4c2058u: goto label_4c2058;
        case 0x4c205cu: goto label_4c205c;
        case 0x4c2060u: goto label_4c2060;
        case 0x4c2064u: goto label_4c2064;
        case 0x4c2068u: goto label_4c2068;
        case 0x4c206cu: goto label_4c206c;
        case 0x4c2070u: goto label_4c2070;
        case 0x4c2074u: goto label_4c2074;
        case 0x4c2078u: goto label_4c2078;
        case 0x4c207cu: goto label_4c207c;
        case 0x4c2080u: goto label_4c2080;
        case 0x4c2084u: goto label_4c2084;
        case 0x4c2088u: goto label_4c2088;
        case 0x4c208cu: goto label_4c208c;
        case 0x4c2090u: goto label_4c2090;
        case 0x4c2094u: goto label_4c2094;
        case 0x4c2098u: goto label_4c2098;
        case 0x4c209cu: goto label_4c209c;
        case 0x4c20a0u: goto label_4c20a0;
        case 0x4c20a4u: goto label_4c20a4;
        case 0x4c20a8u: goto label_4c20a8;
        case 0x4c20acu: goto label_4c20ac;
        case 0x4c20b0u: goto label_4c20b0;
        case 0x4c20b4u: goto label_4c20b4;
        case 0x4c20b8u: goto label_4c20b8;
        case 0x4c20bcu: goto label_4c20bc;
        case 0x4c20c0u: goto label_4c20c0;
        case 0x4c20c4u: goto label_4c20c4;
        case 0x4c20c8u: goto label_4c20c8;
        case 0x4c20ccu: goto label_4c20cc;
        case 0x4c20d0u: goto label_4c20d0;
        case 0x4c20d4u: goto label_4c20d4;
        case 0x4c20d8u: goto label_4c20d8;
        case 0x4c20dcu: goto label_4c20dc;
        case 0x4c20e0u: goto label_4c20e0;
        case 0x4c20e4u: goto label_4c20e4;
        case 0x4c20e8u: goto label_4c20e8;
        case 0x4c20ecu: goto label_4c20ec;
        case 0x4c20f0u: goto label_4c20f0;
        case 0x4c20f4u: goto label_4c20f4;
        case 0x4c20f8u: goto label_4c20f8;
        case 0x4c20fcu: goto label_4c20fc;
        case 0x4c2100u: goto label_4c2100;
        case 0x4c2104u: goto label_4c2104;
        case 0x4c2108u: goto label_4c2108;
        case 0x4c210cu: goto label_4c210c;
        case 0x4c2110u: goto label_4c2110;
        case 0x4c2114u: goto label_4c2114;
        case 0x4c2118u: goto label_4c2118;
        case 0x4c211cu: goto label_4c211c;
        case 0x4c2120u: goto label_4c2120;
        case 0x4c2124u: goto label_4c2124;
        case 0x4c2128u: goto label_4c2128;
        case 0x4c212cu: goto label_4c212c;
        case 0x4c2130u: goto label_4c2130;
        case 0x4c2134u: goto label_4c2134;
        case 0x4c2138u: goto label_4c2138;
        case 0x4c213cu: goto label_4c213c;
        case 0x4c2140u: goto label_4c2140;
        case 0x4c2144u: goto label_4c2144;
        case 0x4c2148u: goto label_4c2148;
        case 0x4c214cu: goto label_4c214c;
        case 0x4c2150u: goto label_4c2150;
        case 0x4c2154u: goto label_4c2154;
        case 0x4c2158u: goto label_4c2158;
        case 0x4c215cu: goto label_4c215c;
        case 0x4c2160u: goto label_4c2160;
        case 0x4c2164u: goto label_4c2164;
        case 0x4c2168u: goto label_4c2168;
        case 0x4c216cu: goto label_4c216c;
        case 0x4c2170u: goto label_4c2170;
        case 0x4c2174u: goto label_4c2174;
        case 0x4c2178u: goto label_4c2178;
        case 0x4c217cu: goto label_4c217c;
        case 0x4c2180u: goto label_4c2180;
        case 0x4c2184u: goto label_4c2184;
        case 0x4c2188u: goto label_4c2188;
        case 0x4c218cu: goto label_4c218c;
        case 0x4c2190u: goto label_4c2190;
        case 0x4c2194u: goto label_4c2194;
        case 0x4c2198u: goto label_4c2198;
        case 0x4c219cu: goto label_4c219c;
        case 0x4c21a0u: goto label_4c21a0;
        case 0x4c21a4u: goto label_4c21a4;
        case 0x4c21a8u: goto label_4c21a8;
        case 0x4c21acu: goto label_4c21ac;
        case 0x4c21b0u: goto label_4c21b0;
        case 0x4c21b4u: goto label_4c21b4;
        case 0x4c21b8u: goto label_4c21b8;
        case 0x4c21bcu: goto label_4c21bc;
        case 0x4c21c0u: goto label_4c21c0;
        case 0x4c21c4u: goto label_4c21c4;
        case 0x4c21c8u: goto label_4c21c8;
        case 0x4c21ccu: goto label_4c21cc;
        case 0x4c21d0u: goto label_4c21d0;
        case 0x4c21d4u: goto label_4c21d4;
        case 0x4c21d8u: goto label_4c21d8;
        case 0x4c21dcu: goto label_4c21dc;
        case 0x4c21e0u: goto label_4c21e0;
        case 0x4c21e4u: goto label_4c21e4;
        case 0x4c21e8u: goto label_4c21e8;
        case 0x4c21ecu: goto label_4c21ec;
        case 0x4c21f0u: goto label_4c21f0;
        case 0x4c21f4u: goto label_4c21f4;
        case 0x4c21f8u: goto label_4c21f8;
        case 0x4c21fcu: goto label_4c21fc;
        case 0x4c2200u: goto label_4c2200;
        case 0x4c2204u: goto label_4c2204;
        case 0x4c2208u: goto label_4c2208;
        case 0x4c220cu: goto label_4c220c;
        case 0x4c2210u: goto label_4c2210;
        case 0x4c2214u: goto label_4c2214;
        case 0x4c2218u: goto label_4c2218;
        case 0x4c221cu: goto label_4c221c;
        case 0x4c2220u: goto label_4c2220;
        case 0x4c2224u: goto label_4c2224;
        case 0x4c2228u: goto label_4c2228;
        case 0x4c222cu: goto label_4c222c;
        case 0x4c2230u: goto label_4c2230;
        case 0x4c2234u: goto label_4c2234;
        case 0x4c2238u: goto label_4c2238;
        case 0x4c223cu: goto label_4c223c;
        case 0x4c2240u: goto label_4c2240;
        case 0x4c2244u: goto label_4c2244;
        case 0x4c2248u: goto label_4c2248;
        case 0x4c224cu: goto label_4c224c;
        case 0x4c2250u: goto label_4c2250;
        case 0x4c2254u: goto label_4c2254;
        case 0x4c2258u: goto label_4c2258;
        case 0x4c225cu: goto label_4c225c;
        case 0x4c2260u: goto label_4c2260;
        case 0x4c2264u: goto label_4c2264;
        case 0x4c2268u: goto label_4c2268;
        case 0x4c226cu: goto label_4c226c;
        case 0x4c2270u: goto label_4c2270;
        case 0x4c2274u: goto label_4c2274;
        case 0x4c2278u: goto label_4c2278;
        case 0x4c227cu: goto label_4c227c;
        case 0x4c2280u: goto label_4c2280;
        case 0x4c2284u: goto label_4c2284;
        case 0x4c2288u: goto label_4c2288;
        case 0x4c228cu: goto label_4c228c;
        case 0x4c2290u: goto label_4c2290;
        case 0x4c2294u: goto label_4c2294;
        case 0x4c2298u: goto label_4c2298;
        case 0x4c229cu: goto label_4c229c;
        default: break;
    }

    ctx->pc = 0x4c1450u;

label_4c1450:
    // 0x4c1450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c1454:
    // 0x4c1454: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4c1454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c1458:
    // 0x4c1458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c145c:
    // 0x4c145c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c1460:
    // 0x4c1460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c1464:
    // 0x4c1464: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c1464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1468:
    // 0x4c1468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c146c:
    // 0x4c146c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c1470:
    // 0x4c1470: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c1470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1474:
    // 0x4c1474: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4c1474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c1478:
    // 0x4c1478: 0xc10ca68  jal         func_4329A0
label_4c147c:
    if (ctx->pc == 0x4C147Cu) {
        ctx->pc = 0x4C147Cu;
            // 0x4c147c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4C1480u;
        goto label_4c1480;
    }
    ctx->pc = 0x4C1478u;
    SET_GPR_U32(ctx, 31, 0x4C1480u);
    ctx->pc = 0x4C147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1478u;
            // 0x4c147c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1480u; }
        if (ctx->pc != 0x4C1480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1480u; }
        if (ctx->pc != 0x4C1480u) { return; }
    }
    ctx->pc = 0x4C1480u;
label_4c1480:
    // 0x4c1480: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c1480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c1484:
    // 0x4c1484: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c1488:
    // 0x4c1488: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4c148c:
    // 0x4c148c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c1490:
    // 0x4c1490: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c1490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4c1494:
    // 0x4c1494: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4c1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4c1498:
    // 0x4c1498: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c1498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4c149c:
    // 0x4c149c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c14a0:
    // 0x4c14a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4c14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4c14a4:
    // 0x4c14a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c14a8:
    // 0x4c14a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4c14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4c14ac:
    // 0x4c14ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4c14acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c14b0:
    // 0x4c14b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4c14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4c14b4:
    // 0x4c14b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4c14b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4c14b8:
    // 0x4c14b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4c14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4c14bc:
    // 0x4c14bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4c14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4c14c0:
    // 0x4c14c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4c14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4c14c4:
    // 0x4c14c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4c14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4c14c8:
    // 0x4c14c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4c14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4c14cc:
    // 0x4c14cc: 0xc0582cc  jal         func_160B30
label_4c14d0:
    if (ctx->pc == 0x4C14D0u) {
        ctx->pc = 0x4C14D0u;
            // 0x4c14d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4C14D4u;
        goto label_4c14d4;
    }
    ctx->pc = 0x4C14CCu;
    SET_GPR_U32(ctx, 31, 0x4C14D4u);
    ctx->pc = 0x4C14D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C14CCu;
            // 0x4c14d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C14D4u; }
        if (ctx->pc != 0x4C14D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C14D4u; }
        if (ctx->pc != 0x4C14D4u) { return; }
    }
    ctx->pc = 0x4C14D4u;
label_4c14d4:
    // 0x4c14d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c14d8:
    // 0x4c14d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4c14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4c14dc:
    // 0x4c14dc: 0x24631390  addiu       $v1, $v1, 0x1390
    ctx->pc = 0x4c14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5008));
label_4c14e0:
    // 0x4c14e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4c14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4c14e4:
    // 0x4c14e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4c14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4c14e8:
    // 0x4c14e8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c14ec:
    // 0x4c14ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c14f0:
    // 0x4c14f0: 0xac44a9f0  sw          $a0, -0x5610($v0)
    ctx->pc = 0x4c14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945264), GPR_U32(ctx, 4));
label_4c14f4:
    // 0x4c14f4: 0x246313a0  addiu       $v1, $v1, 0x13A0
    ctx->pc = 0x4c14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5024));
label_4c14f8:
    // 0x4c14f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c14fc:
    // 0x4c14fc: 0x244213d8  addiu       $v0, $v0, 0x13D8
    ctx->pc = 0x4c14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5080));
label_4c1500:
    // 0x4c1500: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c1500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4c1504:
    // 0x4c1504: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4c1504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4c1508:
    // 0x4c1508: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4c1508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4c150c:
    // 0x4c150c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4c150cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4c1510:
    // 0x4c1510: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4c1510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4c1514:
    // 0x4c1514: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4c1514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4c1518:
    // 0x4c1518: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4c1518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4c151c:
    // 0x4c151c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4c151cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4c1520:
    // 0x4c1520: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4c1520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4c1524:
    // 0x4c1524: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4c1524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4c1528:
    // 0x4c1528: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4c1528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4c152c:
    // 0x4c152c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4c152cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4c1530:
    // 0x4c1530: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4c1530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4c1534:
    // 0x4c1534: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4c1538:
    if (ctx->pc == 0x4C1538u) {
        ctx->pc = 0x4C153Cu;
        goto label_4c153c;
    }
    ctx->pc = 0x4C1534u;
    {
        const bool branch_taken_0x4c1534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1534) {
            ctx->pc = 0x4C15C8u;
            goto label_4c15c8;
        }
    }
    ctx->pc = 0x4C153Cu;
label_4c153c:
    // 0x4c153c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4c153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c1540:
    // 0x4c1540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c1544:
    // 0x4c1544: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4c1544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4c1548:
    // 0x4c1548: 0xc040138  jal         func_1004E0
label_4c154c:
    if (ctx->pc == 0x4C154Cu) {
        ctx->pc = 0x4C154Cu;
            // 0x4c154c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4C1550u;
        goto label_4c1550;
    }
    ctx->pc = 0x4C1548u;
    SET_GPR_U32(ctx, 31, 0x4C1550u);
    ctx->pc = 0x4C154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1548u;
            // 0x4c154c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1550u; }
        if (ctx->pc != 0x4C1550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1550u; }
        if (ctx->pc != 0x4C1550u) { return; }
    }
    ctx->pc = 0x4C1550u;
label_4c1550:
    // 0x4c1550: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c1550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4c1554:
    // 0x4c1554: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4c1554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
label_4c1558:
    // 0x4c1558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c155c:
    // 0x4c155c: 0x24a515f0  addiu       $a1, $a1, 0x15F0
    ctx->pc = 0x4c155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5616));
label_4c1560:
    // 0x4c1560: 0x24c60e90  addiu       $a2, $a2, 0xE90
    ctx->pc = 0x4c1560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3728));
label_4c1564:
    // 0x4c1564: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x4c1564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4c1568:
    // 0x4c1568: 0xc040840  jal         func_102100
label_4c156c:
    if (ctx->pc == 0x4C156Cu) {
        ctx->pc = 0x4C156Cu;
            // 0x4c156c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1570u;
        goto label_4c1570;
    }
    ctx->pc = 0x4C1568u;
    SET_GPR_U32(ctx, 31, 0x4C1570u);
    ctx->pc = 0x4C156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1568u;
            // 0x4c156c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1570u; }
        if (ctx->pc != 0x4C1570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1570u; }
        if (ctx->pc != 0x4C1570u) { return; }
    }
    ctx->pc = 0x4C1570u;
label_4c1570:
    // 0x4c1570: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4c1570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4c1574:
    // 0x4c1574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c1574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1578:
    // 0x4c1578: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4c1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4c157c:
    // 0x4c157c: 0xc0788fc  jal         func_1E23F0
label_4c1580:
    if (ctx->pc == 0x4C1580u) {
        ctx->pc = 0x4C1580u;
            // 0x4c1580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1584u;
        goto label_4c1584;
    }
    ctx->pc = 0x4C157Cu;
    SET_GPR_U32(ctx, 31, 0x4C1584u);
    ctx->pc = 0x4C1580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C157Cu;
            // 0x4c1580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1584u; }
        if (ctx->pc != 0x4C1584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1584u; }
        if (ctx->pc != 0x4C1584u) { return; }
    }
    ctx->pc = 0x4C1584u;
label_4c1584:
    // 0x4c1584: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c1584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4c1588:
    // 0x4c1588: 0xc0788fc  jal         func_1E23F0
label_4c158c:
    if (ctx->pc == 0x4C158Cu) {
        ctx->pc = 0x4C158Cu;
            // 0x4c158c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1590u;
        goto label_4c1590;
    }
    ctx->pc = 0x4C1588u;
    SET_GPR_U32(ctx, 31, 0x4C1590u);
    ctx->pc = 0x4C158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1588u;
            // 0x4c158c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1590u; }
        if (ctx->pc != 0x4C1590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1590u; }
        if (ctx->pc != 0x4C1590u) { return; }
    }
    ctx->pc = 0x4C1590u;
label_4c1590:
    // 0x4c1590: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c1590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1594:
    // 0x4c1594: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4c1594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4c1598:
    // 0x4c1598: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c1598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4c159c:
    // 0x4c159c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4c159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4c15a0:
    // 0x4c15a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c15a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c15a4:
    // 0x4c15a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4c15a8:
    // 0x4c15a8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4c15a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4c15ac:
    // 0x4c15ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c15acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c15b0:
    // 0x4c15b0: 0xc0a997c  jal         func_2A65F0
label_4c15b4:
    if (ctx->pc == 0x4C15B4u) {
        ctx->pc = 0x4C15B4u;
            // 0x4c15b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C15B8u;
        goto label_4c15b8;
    }
    ctx->pc = 0x4C15B0u;
    SET_GPR_U32(ctx, 31, 0x4C15B8u);
    ctx->pc = 0x4C15B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C15B0u;
            // 0x4c15b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C15B8u; }
        if (ctx->pc != 0x4C15B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C15B8u; }
        if (ctx->pc != 0x4C15B8u) { return; }
    }
    ctx->pc = 0x4C15B8u;
label_4c15b8:
    // 0x4c15b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c15b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c15bc:
    // 0x4c15bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4c15bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c15c0:
    // 0x4c15c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4c15c4:
    if (ctx->pc == 0x4C15C4u) {
        ctx->pc = 0x4C15C4u;
            // 0x4c15c4: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x4C15C8u;
        goto label_4c15c8;
    }
    ctx->pc = 0x4C15C0u;
    {
        const bool branch_taken_0x4c15c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C15C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C15C0u;
            // 0x4c15c4: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c15c0) {
            ctx->pc = 0x4C1594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c1594;
        }
    }
    ctx->pc = 0x4C15C8u;
label_4c15c8:
    // 0x4c15c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c15c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c15cc:
    // 0x4c15cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c15ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c15d0:
    // 0x4c15d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c15d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c15d4:
    // 0x4c15d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c15d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c15d8:
    // 0x4c15d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c15d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c15dc:
    // 0x4c15dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c15dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c15e0:
    // 0x4c15e0: 0x3e00008  jr          $ra
label_4c15e4:
    if (ctx->pc == 0x4C15E4u) {
        ctx->pc = 0x4C15E4u;
            // 0x4c15e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C15E8u;
        goto label_4c15e8;
    }
    ctx->pc = 0x4C15E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C15E0u;
            // 0x4c15e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C15E8u;
label_4c15e8:
    // 0x4c15e8: 0x0  nop
    ctx->pc = 0x4c15e8u;
    // NOP
label_4c15ec:
    // 0x4c15ec: 0x0  nop
    ctx->pc = 0x4c15ecu;
    // NOP
label_4c15f0:
    // 0x4c15f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c15f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c15f4:
    // 0x4c15f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c15f8:
    // 0x4c15f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c15fc:
    // 0x4c15fc: 0xc0b1370  jal         func_2C4DC0
label_4c1600:
    if (ctx->pc == 0x4C1600u) {
        ctx->pc = 0x4C1600u;
            // 0x4c1600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1604u;
        goto label_4c1604;
    }
    ctx->pc = 0x4C15FCu;
    SET_GPR_U32(ctx, 31, 0x4C1604u);
    ctx->pc = 0x4C1600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C15FCu;
            // 0x4c1600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1604u; }
        if (ctx->pc != 0x4C1604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1604u; }
        if (ctx->pc != 0x4C1604u) { return; }
    }
    ctx->pc = 0x4C1604u;
label_4c1604:
    // 0x4c1604: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c1604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c1608:
    // 0x4c1608: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c1608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c160c:
    // 0x4c160c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4c160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4c1610:
    // 0x4c1610: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4c1610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_4c1614:
    // 0x4c1614: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c1614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c1618:
    // 0x4c1618: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4c1618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4c161c:
    // 0x4c161c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c161cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c1620:
    // 0x4c1620: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4c1620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4c1624:
    // 0x4c1624: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4c1624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4c1628:
    // 0x4c1628: 0x24a512e0  addiu       $a1, $a1, 0x12E0
    ctx->pc = 0x4c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4832));
label_4c162c:
    // 0x4c162c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x4c162cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_4c1630:
    // 0x4c1630: 0x24841320  addiu       $a0, $a0, 0x1320
    ctx->pc = 0x4c1630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4896));
label_4c1634:
    // 0x4c1634: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x4c1634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_4c1638:
    // 0x4c1638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c163c:
    // 0x4c163c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4c163cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_4c1640:
    // 0x4c1640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c1640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1644:
    // 0x4c1644: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4c1644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4c1648:
    // 0x4c1648: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4c1648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4c164c:
    // 0x4c164c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4c164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4c1650:
    // 0x4c1650: 0xa2030130  sb          $v1, 0x130($s0)
    ctx->pc = 0x4c1650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 3));
label_4c1654:
    // 0x4c1654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c1654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1658:
    // 0x4c1658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c165c:
    // 0x4c165c: 0x3e00008  jr          $ra
label_4c1660:
    if (ctx->pc == 0x4C1660u) {
        ctx->pc = 0x4C1660u;
            // 0x4c1660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C1664u;
        goto label_4c1664;
    }
    ctx->pc = 0x4C165Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C165Cu;
            // 0x4c1660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1664u;
label_4c1664:
    // 0x4c1664: 0x0  nop
    ctx->pc = 0x4c1664u;
    // NOP
label_4c1668:
    // 0x4c1668: 0x0  nop
    ctx->pc = 0x4c1668u;
    // NOP
label_4c166c:
    // 0x4c166c: 0x0  nop
    ctx->pc = 0x4c166cu;
    // NOP
label_4c1670:
    // 0x4c1670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c1670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c1674:
    // 0x4c1674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c1678:
    // 0x4c1678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c167c:
    // 0x4c167c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c1680:
    // 0x4c1680: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x4c1680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4c1684:
    // 0x4c1684: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4c1688:
    if (ctx->pc == 0x4C1688u) {
        ctx->pc = 0x4C1688u;
            // 0x4c1688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C168Cu;
        goto label_4c168c;
    }
    ctx->pc = 0x4C1684u;
    {
        const bool branch_taken_0x4c1684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1684u;
            // 0x4c1688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1684) {
            ctx->pc = 0x4C16BCu;
            goto label_4c16bc;
        }
    }
    ctx->pc = 0x4C168Cu;
label_4c168c:
    // 0x4c168c: 0xc04008c  jal         func_100230
label_4c1690:
    if (ctx->pc == 0x4C1690u) {
        ctx->pc = 0x4C1690u;
            // 0x4c1690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C1694u;
        goto label_4c1694;
    }
    ctx->pc = 0x4C168Cu;
    SET_GPR_U32(ctx, 31, 0x4C1694u);
    ctx->pc = 0x4C1690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C168Cu;
            // 0x4c1690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1694u; }
        if (ctx->pc != 0x4C1694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1694u; }
        if (ctx->pc != 0x4C1694u) { return; }
    }
    ctx->pc = 0x4C1694u;
label_4c1694:
    // 0x4c1694: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c1694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c1698:
    // 0x4c1698: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4c1698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4c169c:
    // 0x4c169c: 0xc0407c0  jal         func_101F00
label_4c16a0:
    if (ctx->pc == 0x4C16A0u) {
        ctx->pc = 0x4C16A0u;
            // 0x4c16a0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4C16A4u;
        goto label_4c16a4;
    }
    ctx->pc = 0x4C169Cu;
    SET_GPR_U32(ctx, 31, 0x4C16A4u);
    ctx->pc = 0x4C16A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C169Cu;
            // 0x4c16a0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16A4u; }
        if (ctx->pc != 0x4C16A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16A4u; }
        if (ctx->pc != 0x4C16A4u) { return; }
    }
    ctx->pc = 0x4C16A4u;
label_4c16a4:
    // 0x4c16a4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4c16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c16a8:
    // 0x4c16a8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4c16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4c16ac:
    // 0x4c16ac: 0xc0407c0  jal         func_101F00
label_4c16b0:
    if (ctx->pc == 0x4C16B0u) {
        ctx->pc = 0x4C16B0u;
            // 0x4c16b0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4C16B4u;
        goto label_4c16b4;
    }
    ctx->pc = 0x4C16ACu;
    SET_GPR_U32(ctx, 31, 0x4C16B4u);
    ctx->pc = 0x4C16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16ACu;
            // 0x4c16b0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16B4u; }
        if (ctx->pc != 0x4C16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16B4u; }
        if (ctx->pc != 0x4C16B4u) { return; }
    }
    ctx->pc = 0x4C16B4u;
label_4c16b4:
    // 0x4c16b4: 0xc0400a8  jal         func_1002A0
label_4c16b8:
    if (ctx->pc == 0x4C16B8u) {
        ctx->pc = 0x4C16B8u;
            // 0x4c16b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C16BCu;
        goto label_4c16bc;
    }
    ctx->pc = 0x4C16B4u;
    SET_GPR_U32(ctx, 31, 0x4C16BCu);
    ctx->pc = 0x4C16B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16B4u;
            // 0x4c16b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16BCu; }
        if (ctx->pc != 0x4C16BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C16BCu; }
        if (ctx->pc != 0x4C16BCu) { return; }
    }
    ctx->pc = 0x4C16BCu;
label_4c16bc:
    // 0x4c16bc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4c16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4c16c0:
    // 0x4c16c0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x4c16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4c16c4:
    // 0x4c16c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c16c8:
    if (ctx->pc == 0x4C16C8u) {
        ctx->pc = 0x4C16C8u;
            // 0x4c16c8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4C16CCu;
        goto label_4c16cc;
    }
    ctx->pc = 0x4C16C4u;
    {
        const bool branch_taken_0x4c16c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c16c4) {
            ctx->pc = 0x4C16C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16C4u;
            // 0x4c16c8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C16E0u;
            goto label_4c16e0;
        }
    }
    ctx->pc = 0x4C16CCu;
label_4c16cc:
    // 0x4c16cc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4c16ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c16d0:
    // 0x4c16d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c16d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c16d4:
    // 0x4c16d4: 0x320f809  jalr        $t9
label_4c16d8:
    if (ctx->pc == 0x4C16D8u) {
        ctx->pc = 0x4C16D8u;
            // 0x4c16d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C16DCu;
        goto label_4c16dc;
    }
    ctx->pc = 0x4C16D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C16DCu);
        ctx->pc = 0x4C16D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16D4u;
            // 0x4c16d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C16DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C16DCu; }
            if (ctx->pc != 0x4C16DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4C16DCu;
label_4c16dc:
    // 0x4c16dc: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4c16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4c16e0:
    // 0x4c16e0: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x4c16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4c16e4:
    // 0x4c16e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c16e8:
    if (ctx->pc == 0x4C16E8u) {
        ctx->pc = 0x4C16E8u;
            // 0x4c16e8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4C16ECu;
        goto label_4c16ec;
    }
    ctx->pc = 0x4C16E4u;
    {
        const bool branch_taken_0x4c16e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c16e4) {
            ctx->pc = 0x4C16E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16E4u;
            // 0x4c16e8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1700u;
            goto label_4c1700;
        }
    }
    ctx->pc = 0x4C16ECu;
label_4c16ec:
    // 0x4c16ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c16ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c16f0:
    // 0x4c16f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c16f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c16f4:
    // 0x4c16f4: 0x320f809  jalr        $t9
label_4c16f8:
    if (ctx->pc == 0x4C16F8u) {
        ctx->pc = 0x4C16F8u;
            // 0x4c16f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C16FCu;
        goto label_4c16fc;
    }
    ctx->pc = 0x4C16F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C16FCu);
        ctx->pc = 0x4C16F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C16F4u;
            // 0x4c16f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C16FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C16FCu; }
            if (ctx->pc != 0x4C16FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4C16FCu;
label_4c16fc:
    // 0x4c16fc: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x4c16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_4c1700:
    // 0x4c1700: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4c1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4c1704:
    // 0x4c1704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c1708:
    if (ctx->pc == 0x4C1708u) {
        ctx->pc = 0x4C1708u;
            // 0x4c1708: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4C170Cu;
        goto label_4c170c;
    }
    ctx->pc = 0x4C1704u;
    {
        const bool branch_taken_0x4c1704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1704) {
            ctx->pc = 0x4C1708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1704u;
            // 0x4c1708: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1720u;
            goto label_4c1720;
        }
    }
    ctx->pc = 0x4C170Cu;
label_4c170c:
    // 0x4c170c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c170cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1710:
    // 0x4c1710: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c1710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c1714:
    // 0x4c1714: 0x320f809  jalr        $t9
label_4c1718:
    if (ctx->pc == 0x4C1718u) {
        ctx->pc = 0x4C1718u;
            // 0x4c1718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C171Cu;
        goto label_4c171c;
    }
    ctx->pc = 0x4C1714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C171Cu);
        ctx->pc = 0x4C1718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1714u;
            // 0x4c1718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C171Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C171Cu; }
            if (ctx->pc != 0x4C171Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C171Cu;
label_4c171c:
    // 0x4c171c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4c171cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4c1720:
    // 0x4c1720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1724:
    // 0x4c1724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c1724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1728:
    // 0x4c1728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c172c:
    // 0x4c172c: 0x3e00008  jr          $ra
label_4c1730:
    if (ctx->pc == 0x4C1730u) {
        ctx->pc = 0x4C1730u;
            // 0x4c1730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C1734u;
        goto label_4c1734;
    }
    ctx->pc = 0x4C172Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C172Cu;
            // 0x4c1730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1734u;
label_4c1734:
    // 0x4c1734: 0x0  nop
    ctx->pc = 0x4c1734u;
    // NOP
label_4c1738:
    // 0x4c1738: 0x0  nop
    ctx->pc = 0x4c1738u;
    // NOP
label_4c173c:
    // 0x4c173c: 0x0  nop
    ctx->pc = 0x4c173cu;
    // NOP
label_4c1740:
    // 0x4c1740: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4c1740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4c1744:
    // 0x4c1744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c1744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c1748:
    // 0x4c1748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c1748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c174c:
    // 0x4c174c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c174cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1750:
    // 0x4c1750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c1750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c1754:
    // 0x4c1754: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4c1754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c1758:
    // 0x4c1758: 0xc0892d0  jal         func_224B40
label_4c175c:
    if (ctx->pc == 0x4C175Cu) {
        ctx->pc = 0x4C175Cu;
            // 0x4c175c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C1760u;
        goto label_4c1760;
    }
    ctx->pc = 0x4C1758u;
    SET_GPR_U32(ctx, 31, 0x4C1760u);
    ctx->pc = 0x4C175Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1758u;
            // 0x4c175c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1760u; }
        if (ctx->pc != 0x4C1760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1760u; }
        if (ctx->pc != 0x4C1760u) { return; }
    }
    ctx->pc = 0x4C1760u;
label_4c1760:
    // 0x4c1760: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c1760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c1764:
    // 0x4c1764: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c1764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c1768:
    // 0x4c1768: 0x8c42a9f0  lw          $v0, -0x5610($v0)
    ctx->pc = 0x4c1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945264)));
label_4c176c:
    // 0x4c176c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c1770:
    // 0x4c1770: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x4c1770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4c1774:
    // 0x4c1774: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x4c1774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4c1778:
    // 0x4c1778: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4c1778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4c177c:
    // 0x4c177c: 0xc0b6e68  jal         func_2DB9A0
label_4c1780:
    if (ctx->pc == 0x4C1780u) {
        ctx->pc = 0x4C1780u;
            // 0x4c1780: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4C1784u;
        goto label_4c1784;
    }
    ctx->pc = 0x4C177Cu;
    SET_GPR_U32(ctx, 31, 0x4C1784u);
    ctx->pc = 0x4C1780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C177Cu;
            // 0x4c1780: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1784u; }
        if (ctx->pc != 0x4C1784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1784u; }
        if (ctx->pc != 0x4C1784u) { return; }
    }
    ctx->pc = 0x4C1784u;
label_4c1784:
    // 0x4c1784: 0xc0b6dac  jal         func_2DB6B0
label_4c1788:
    if (ctx->pc == 0x4C1788u) {
        ctx->pc = 0x4C1788u;
            // 0x4c1788: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C178Cu;
        goto label_4c178c;
    }
    ctx->pc = 0x4C1784u;
    SET_GPR_U32(ctx, 31, 0x4C178Cu);
    ctx->pc = 0x4C1788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1784u;
            // 0x4c1788: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C178Cu; }
        if (ctx->pc != 0x4C178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C178Cu; }
        if (ctx->pc != 0x4C178Cu) { return; }
    }
    ctx->pc = 0x4C178Cu;
label_4c178c:
    // 0x4c178c: 0xc0cac94  jal         func_32B250
label_4c1790:
    if (ctx->pc == 0x4C1790u) {
        ctx->pc = 0x4C1790u;
            // 0x4c1790: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C1794u;
        goto label_4c1794;
    }
    ctx->pc = 0x4C178Cu;
    SET_GPR_U32(ctx, 31, 0x4C1794u);
    ctx->pc = 0x4C1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C178Cu;
            // 0x4c1790: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1794u; }
        if (ctx->pc != 0x4C1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1794u; }
        if (ctx->pc != 0x4C1794u) { return; }
    }
    ctx->pc = 0x4C1794u;
label_4c1794:
    // 0x4c1794: 0xc0cac84  jal         func_32B210
label_4c1798:
    if (ctx->pc == 0x4C1798u) {
        ctx->pc = 0x4C1798u;
            // 0x4c1798: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C179Cu;
        goto label_4c179c;
    }
    ctx->pc = 0x4C1794u;
    SET_GPR_U32(ctx, 31, 0x4C179Cu);
    ctx->pc = 0x4C1798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1794u;
            // 0x4c1798: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C179Cu; }
        if (ctx->pc != 0x4C179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C179Cu; }
        if (ctx->pc != 0x4C179Cu) { return; }
    }
    ctx->pc = 0x4C179Cu;
label_4c179c:
    // 0x4c179c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4c179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4c17a0:
    // 0x4c17a0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4c17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4c17a4:
    // 0x4c17a4: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4c17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c17a8:
    // 0x4c17a8: 0xc0a5a68  jal         func_2969A0
label_4c17ac:
    if (ctx->pc == 0x4C17ACu) {
        ctx->pc = 0x4C17ACu;
            // 0x4c17ac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C17B0u;
        goto label_4c17b0;
    }
    ctx->pc = 0x4C17A8u;
    SET_GPR_U32(ctx, 31, 0x4C17B0u);
    ctx->pc = 0x4C17ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C17A8u;
            // 0x4c17ac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C17B0u; }
        if (ctx->pc != 0x4C17B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C17B0u; }
        if (ctx->pc != 0x4C17B0u) { return; }
    }
    ctx->pc = 0x4C17B0u;
label_4c17b0:
    // 0x4c17b0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c17b4:
    // 0x4c17b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c17b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c17b8:
    // 0x4c17b8: 0x8c44a9f0  lw          $a0, -0x5610($v0)
    ctx->pc = 0x4c17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945264)));
label_4c17bc:
    // 0x4c17bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4c17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c17c0:
    // 0x4c17c0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x4c17c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c17c4:
    // 0x4c17c4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4c17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c17c8:
    // 0x4c17c8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4c17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c17cc:
    // 0x4c17cc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4c17ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4c17d0:
    // 0x4c17d0: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x4c17d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4c17d4:
    // 0x4c17d4: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x4c17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_4c17d8:
    // 0x4c17d8: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x4c17d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_4c17dc:
    // 0x4c17dc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c17e0:
    // 0x4c17e0: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x4c17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_4c17e4:
    // 0x4c17e4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c17e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c17e8:
    // 0x4c17e8: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x4c17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4c17ec:
    // 0x4c17ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c17f0:
    // 0x4c17f0: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x4c17f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4c17f4:
    // 0x4c17f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c17f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c17f8:
    // 0x4c17f8: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x4c17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4c17fc:
    // 0x4c17fc: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x4c17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c1800:
    // 0x4c1800: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x4c1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c1804:
    // 0x4c1804: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x4c1804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4c1808:
    // 0x4c1808: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4c1808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4c180c:
    // 0x4c180c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4c180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1810:
    // 0x4c1810: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4c1810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4c1814:
    // 0x4c1814: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x4c1814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4c1818:
    // 0x4c1818: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4c1818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4c181c:
    // 0x4c181c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x4c181cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4c1820:
    // 0x4c1820: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4c1820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4c1824:
    // 0x4c1824: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x4c1824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4c1828:
    // 0x4c1828: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x4c1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c182c:
    // 0x4c182c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x4c182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1830:
    // 0x4c1830: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x4c1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1834:
    // 0x4c1834: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x4c1834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4c1838:
    // 0x4c1838: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x4c1838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4c183c:
    // 0x4c183c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x4c183cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4c1840:
    // 0x4c1840: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x4c1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1844:
    // 0x4c1844: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x4c1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1848:
    // 0x4c1848: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4c1848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c184c:
    // 0x4c184c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x4c184cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4c1850:
    // 0x4c1850: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x4c1850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4c1854:
    // 0x4c1854: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4c1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4c1858:
    // 0x4c1858: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x4c1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c185c:
    // 0x4c185c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x4c185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c1860:
    // 0x4c1860: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x4c1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1864:
    // 0x4c1864: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4c1864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1868:
    // 0x4c1868: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4c1868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c186c:
    // 0x4c186c: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x4c186cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4c1870:
    // 0x4c1870: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x4c1870u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4c1874:
    // 0x4c1874: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x4c1874u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4c1878:
    // 0x4c1878: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x4c1878u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4c187c:
    // 0x4c187c: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x4c187cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4c1880:
    // 0x4c1880: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x4c1880u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4c1884:
    // 0x4c1884: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x4c1884u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4c1888:
    // 0x4c1888: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4c1888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4c188c:
    // 0x4c188c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4c188cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4c1890:
    // 0x4c1890: 0xc0a7a88  jal         func_29EA20
label_4c1894:
    if (ctx->pc == 0x4C1894u) {
        ctx->pc = 0x4C1894u;
            // 0x4c1894: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4C1898u;
        goto label_4c1898;
    }
    ctx->pc = 0x4C1890u;
    SET_GPR_U32(ctx, 31, 0x4C1898u);
    ctx->pc = 0x4C1894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1890u;
            // 0x4c1894: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1898u; }
        if (ctx->pc != 0x4C1898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1898u; }
        if (ctx->pc != 0x4C1898u) { return; }
    }
    ctx->pc = 0x4C1898u;
label_4c1898:
    // 0x4c1898: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4c1898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c189c:
    // 0x4c189c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c18a0:
    // 0x4c18a0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4c18a4:
    if (ctx->pc == 0x4C18A4u) {
        ctx->pc = 0x4C18A4u;
            // 0x4c18a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C18A8u;
        goto label_4c18a8;
    }
    ctx->pc = 0x4C18A0u;
    {
        const bool branch_taken_0x4c18a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C18A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C18A0u;
            // 0x4c18a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c18a0) {
            ctx->pc = 0x4C18F0u;
            goto label_4c18f0;
        }
    }
    ctx->pc = 0x4C18A8u;
label_4c18a8:
    // 0x4c18a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c18ac:
    // 0x4c18ac: 0xc088ef4  jal         func_223BD0
label_4c18b0:
    if (ctx->pc == 0x4C18B0u) {
        ctx->pc = 0x4C18B0u;
            // 0x4c18b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C18B4u;
        goto label_4c18b4;
    }
    ctx->pc = 0x4C18ACu;
    SET_GPR_U32(ctx, 31, 0x4C18B4u);
    ctx->pc = 0x4C18B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C18ACu;
            // 0x4c18b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C18B4u; }
        if (ctx->pc != 0x4C18B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C18B4u; }
        if (ctx->pc != 0x4C18B4u) { return; }
    }
    ctx->pc = 0x4C18B4u;
label_4c18b4:
    // 0x4c18b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c18b8:
    // 0x4c18b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c18bc:
    // 0x4c18bc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4c18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4c18c0:
    // 0x4c18c0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4c18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4c18c4:
    // 0x4c18c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c18c8:
    // 0x4c18c8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4c18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4c18cc:
    // 0x4c18cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c18d0:
    // 0x4c18d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c18d4:
    // 0x4c18d4: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x4c18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_4c18d8:
    // 0x4c18d8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x4c18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_4c18dc:
    // 0x4c18dc: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4c18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4c18e0:
    // 0x4c18e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c18e4:
    // 0x4c18e4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4c18e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c18e8:
    // 0x4c18e8: 0xc088b38  jal         func_222CE0
label_4c18ec:
    if (ctx->pc == 0x4C18ECu) {
        ctx->pc = 0x4C18ECu;
            // 0x4c18ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C18F0u;
        goto label_4c18f0;
    }
    ctx->pc = 0x4C18E8u;
    SET_GPR_U32(ctx, 31, 0x4C18F0u);
    ctx->pc = 0x4C18ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C18E8u;
            // 0x4c18ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C18F0u; }
        if (ctx->pc != 0x4C18F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C18F0u; }
        if (ctx->pc != 0x4C18F0u) { return; }
    }
    ctx->pc = 0x4C18F0u;
label_4c18f0:
    // 0x4c18f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c18f4:
    // 0x4c18f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c18f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c18f8:
    // 0x4c18f8: 0xc08c164  jal         func_230590
label_4c18fc:
    if (ctx->pc == 0x4C18FCu) {
        ctx->pc = 0x4C18FCu;
            // 0x4c18fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C1900u;
        goto label_4c1900;
    }
    ctx->pc = 0x4C18F8u;
    SET_GPR_U32(ctx, 31, 0x4C1900u);
    ctx->pc = 0x4C18FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C18F8u;
            // 0x4c18fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1900u; }
        if (ctx->pc != 0x4C1900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1900u; }
        if (ctx->pc != 0x4C1900u) { return; }
    }
    ctx->pc = 0x4C1900u;
label_4c1900:
    // 0x4c1900: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4c1900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4c1904:
    // 0x4c1904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1908:
    // 0x4c1908: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x4c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_4c190c:
    // 0x4c190c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c1910:
    // 0x4c1910: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x4c1910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_4c1914:
    // 0x4c1914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c1914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1918:
    // 0x4c1918: 0xc08914c  jal         func_224530
label_4c191c:
    if (ctx->pc == 0x4C191Cu) {
        ctx->pc = 0x4C191Cu;
            // 0x4c191c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1920u;
        goto label_4c1920;
    }
    ctx->pc = 0x4C1918u;
    SET_GPR_U32(ctx, 31, 0x4C1920u);
    ctx->pc = 0x4C191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1918u;
            // 0x4c191c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1920u; }
        if (ctx->pc != 0x4C1920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1920u; }
        if (ctx->pc != 0x4C1920u) { return; }
    }
    ctx->pc = 0x4C1920u;
label_4c1920:
    // 0x4c1920: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4c1920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4c1924:
    // 0x4c1924: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4c1924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4c1928:
    // 0x4c1928: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x4c1928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4c192c:
    // 0x4c192c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4c192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4c1930:
    // 0x4c1930: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4c1930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4c1934:
    // 0x4c1934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1938:
    // 0x4c1938: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4c1938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4c193c:
    // 0x4c193c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c1940:
    // 0x4c1940: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4c1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1944:
    // 0x4c1944: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4c1944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c1948:
    // 0x4c1948: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4c1948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c194c:
    // 0x4c194c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4c194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1950:
    // 0x4c1950: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4c1950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4c1954:
    // 0x4c1954: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c1954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c1958:
    // 0x4c1958: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4c1958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4c195c:
    // 0x4c195c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4c195cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4c1960:
    // 0x4c1960: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4c1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c1964:
    // 0x4c1964: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4c1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1968:
    // 0x4c1968: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4c1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c196c:
    // 0x4c196c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4c196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1970:
    // 0x4c1970: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c1970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c1974:
    // 0x4c1974: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c1974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c1978:
    // 0x4c1978: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c1978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c197c:
    // 0x4c197c: 0xc0892b0  jal         func_224AC0
label_4c1980:
    if (ctx->pc == 0x4C1980u) {
        ctx->pc = 0x4C1980u;
            // 0x4c1980: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4C1984u;
        goto label_4c1984;
    }
    ctx->pc = 0x4C197Cu;
    SET_GPR_U32(ctx, 31, 0x4C1984u);
    ctx->pc = 0x4C1980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C197Cu;
            // 0x4c1980: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1984u; }
        if (ctx->pc != 0x4C1984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1984u; }
        if (ctx->pc != 0x4C1984u) { return; }
    }
    ctx->pc = 0x4C1984u;
label_4c1984:
    // 0x4c1984: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4c1984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4c1988:
    // 0x4c1988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c198c:
    // 0x4c198c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4c198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4c1990:
    // 0x4c1990: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c1990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c1994:
    // 0x4c1994: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4c1994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4c1998:
    // 0x4c1998: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4c1998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4c199c:
    // 0x4c199c: 0xc0891d8  jal         func_224760
label_4c19a0:
    if (ctx->pc == 0x4C19A0u) {
        ctx->pc = 0x4C19A0u;
            // 0x4c19a0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4C19A4u;
        goto label_4c19a4;
    }
    ctx->pc = 0x4C199Cu;
    SET_GPR_U32(ctx, 31, 0x4C19A4u);
    ctx->pc = 0x4C19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C199Cu;
            // 0x4c19a0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19A4u; }
        if (ctx->pc != 0x4C19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19A4u; }
        if (ctx->pc != 0x4C19A4u) { return; }
    }
    ctx->pc = 0x4C19A4u;
label_4c19a4:
    // 0x4c19a4: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4c19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4c19a8:
    // 0x4c19a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c19ac:
    // 0x4c19ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c19b0:
    // 0x4c19b0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4c19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c19b4:
    // 0x4c19b4: 0xc0a7a88  jal         func_29EA20
label_4c19b8:
    if (ctx->pc == 0x4C19B8u) {
        ctx->pc = 0x4C19B8u;
            // 0x4c19b8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4C19BCu;
        goto label_4c19bc;
    }
    ctx->pc = 0x4C19B4u;
    SET_GPR_U32(ctx, 31, 0x4C19BCu);
    ctx->pc = 0x4C19B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C19B4u;
            // 0x4c19b8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19BCu; }
        if (ctx->pc != 0x4C19BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19BCu; }
        if (ctx->pc != 0x4C19BCu) { return; }
    }
    ctx->pc = 0x4C19BCu;
label_4c19bc:
    // 0x4c19bc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4c19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c19c0:
    // 0x4c19c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c19c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c19c4:
    // 0x4c19c4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4c19c8:
    if (ctx->pc == 0x4C19C8u) {
        ctx->pc = 0x4C19C8u;
            // 0x4c19c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C19CCu;
        goto label_4c19cc;
    }
    ctx->pc = 0x4C19C4u;
    {
        const bool branch_taken_0x4c19c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C19C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C19C4u;
            // 0x4c19c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c19c4) {
            ctx->pc = 0x4C19E8u;
            goto label_4c19e8;
        }
    }
    ctx->pc = 0x4C19CCu;
label_4c19cc:
    // 0x4c19cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c19d0:
    // 0x4c19d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c19d4:
    // 0x4c19d4: 0xc0869d0  jal         func_21A740
label_4c19d8:
    if (ctx->pc == 0x4C19D8u) {
        ctx->pc = 0x4C19D8u;
            // 0x4c19d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C19DCu;
        goto label_4c19dc;
    }
    ctx->pc = 0x4C19D4u;
    SET_GPR_U32(ctx, 31, 0x4C19DCu);
    ctx->pc = 0x4C19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C19D4u;
            // 0x4c19d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19DCu; }
        if (ctx->pc != 0x4C19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C19DCu; }
        if (ctx->pc != 0x4C19DCu) { return; }
    }
    ctx->pc = 0x4C19DCu;
label_4c19dc:
    // 0x4c19dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c19e0:
    // 0x4c19e0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4c19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4c19e4:
    // 0x4c19e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c19e8:
    // 0x4c19e8: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4c19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4c19ec:
    // 0x4c19ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c19f0:
    // 0x4c19f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c19f4:
    // 0x4c19f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c19f8:
    // 0x4c19f8: 0xc08c650  jal         func_231940
label_4c19fc:
    if (ctx->pc == 0x4C19FCu) {
        ctx->pc = 0x4C19FCu;
            // 0x4c19fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1A00u;
        goto label_4c1a00;
    }
    ctx->pc = 0x4C19F8u;
    SET_GPR_U32(ctx, 31, 0x4C1A00u);
    ctx->pc = 0x4C19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C19F8u;
            // 0x4c19fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A00u; }
        if (ctx->pc != 0x4C1A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A00u; }
        if (ctx->pc != 0x4C1A00u) { return; }
    }
    ctx->pc = 0x4C1A00u;
label_4c1a00:
    // 0x4c1a00: 0xc040180  jal         func_100600
label_4c1a04:
    if (ctx->pc == 0x4C1A04u) {
        ctx->pc = 0x4C1A04u;
            // 0x4c1a04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4C1A08u;
        goto label_4c1a08;
    }
    ctx->pc = 0x4C1A00u;
    SET_GPR_U32(ctx, 31, 0x4C1A08u);
    ctx->pc = 0x4C1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1A00u;
            // 0x4c1a04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A08u; }
        if (ctx->pc != 0x4C1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A08u; }
        if (ctx->pc != 0x4C1A08u) { return; }
    }
    ctx->pc = 0x4C1A08u;
label_4c1a08:
    // 0x4c1a08: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_4c1a0c:
    if (ctx->pc == 0x4C1A0Cu) {
        ctx->pc = 0x4C1A0Cu;
            // 0x4c1a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1A10u;
        goto label_4c1a10;
    }
    ctx->pc = 0x4C1A08u;
    {
        const bool branch_taken_0x4c1a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1A08u;
            // 0x4c1a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1a08) {
            ctx->pc = 0x4C1A78u;
            goto label_4c1a78;
        }
    }
    ctx->pc = 0x4C1A10u;
label_4c1a10:
    // 0x4c1a10: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x4c1a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4c1a14:
    // 0x4c1a14: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4c1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4c1a18:
    // 0x4c1a18: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x4c1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_4c1a1c:
    // 0x4c1a1c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4c1a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4c1a20:
    // 0x4c1a20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c1a24:
    // 0x4c1a24: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x4c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_4c1a28:
    // 0x4c1a28: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x4c1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_4c1a2c:
    // 0x4c1a2c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x4c1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_4c1a30:
    // 0x4c1a30: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4c1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4c1a34:
    // 0x4c1a34: 0x24a57070  addiu       $a1, $a1, 0x7070
    ctx->pc = 0x4c1a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28784));
label_4c1a38:
    // 0x4c1a38: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x4c1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_4c1a3c:
    // 0x4c1a3c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x4c1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_4c1a40:
    // 0x4c1a40: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x4c1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_4c1a44:
    // 0x4c1a44: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4c1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4c1a48:
    // 0x4c1a48: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4c1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4c1a4c:
    // 0x4c1a4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4c1a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4c1a50:
    // 0x4c1a50: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4c1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4c1a54:
    // 0x4c1a54: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4c1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_4c1a58:
    // 0x4c1a58: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x4c1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_4c1a5c:
    // 0x4c1a5c: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x4c1a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_4c1a60:
    // 0x4c1a60: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4c1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_4c1a64:
    // 0x4c1a64: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4c1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4c1a68:
    // 0x4c1a68: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4c1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_4c1a6c:
    // 0x4c1a6c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4c1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4c1a70:
    // 0x4c1a70: 0xc04c968  jal         func_1325A0
label_4c1a74:
    if (ctx->pc == 0x4C1A74u) {
        ctx->pc = 0x4C1A74u;
            // 0x4c1a74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4C1A78u;
        goto label_4c1a78;
    }
    ctx->pc = 0x4C1A70u;
    SET_GPR_U32(ctx, 31, 0x4C1A78u);
    ctx->pc = 0x4C1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1A70u;
            // 0x4c1a74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A78u; }
        if (ctx->pc != 0x4C1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1A78u; }
        if (ctx->pc != 0x4C1A78u) { return; }
    }
    ctx->pc = 0x4C1A78u;
label_4c1a78:
    // 0x4c1a78: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x4c1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_4c1a7c:
    // 0x4c1a7c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4c1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4c1a80:
    // 0x4c1a80: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4c1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4c1a84:
    // 0x4c1a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c1a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c1a88:
    // 0x4c1a88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c1a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c1a8c:
    // 0x4c1a8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4c1a90:
    // 0x4c1a90: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x4c1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_4c1a94:
    // 0x4c1a94: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x4c1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1a98:
    // 0x4c1a98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4c1a98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c1a9c:
    // 0x4c1a9c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_4c1aa0:
    if (ctx->pc == 0x4C1AA0u) {
        ctx->pc = 0x4C1AA0u;
            // 0x4c1aa0: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4C1AA4u;
        goto label_4c1aa4;
    }
    ctx->pc = 0x4C1A9Cu;
    {
        const bool branch_taken_0x4c1a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c1a9c) {
            ctx->pc = 0x4C1AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1A9Cu;
            // 0x4c1aa0: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1AE8u;
            goto label_4c1ae8;
        }
    }
    ctx->pc = 0x4C1AA4u;
label_4c1aa4:
    // 0x4c1aa4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x4c1aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4c1aa8:
    // 0x4c1aa8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4c1aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c1aac:
    // 0x4c1aac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4c1aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1ab0:
    // 0x4c1ab0: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x4c1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_4c1ab4:
    // 0x4c1ab4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4c1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4c1ab8:
    // 0x4c1ab8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4c1ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4c1abc:
    // 0x4c1abc: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4c1abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_4c1ac0:
    // 0x4c1ac0: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x4c1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_4c1ac4:
    // 0x4c1ac4: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x4c1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_4c1ac8:
    // 0x4c1ac8: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4c1ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4c1acc:
    // 0x4c1acc: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x4c1accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_4c1ad0:
    // 0x4c1ad0: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4c1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_4c1ad4:
    // 0x4c1ad4: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x4c1ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_4c1ad8:
    // 0x4c1ad8: 0xa2440069  sb          $a0, 0x69($s2)
    ctx->pc = 0x4c1ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 4));
label_4c1adc:
    // 0x4c1adc: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4c1adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4c1ae0:
    // 0x4c1ae0: 0x10000010  b           . + 4 + (0x10 << 2)
label_4c1ae4:
    if (ctx->pc == 0x4C1AE4u) {
        ctx->pc = 0x4C1AE4u;
            // 0x4c1ae4: 0xa244006b  sb          $a0, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4C1AE8u;
        goto label_4c1ae8;
    }
    ctx->pc = 0x4C1AE0u;
    {
        const bool branch_taken_0x4c1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1AE0u;
            // 0x4c1ae4: 0xa244006b  sb          $a0, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1ae0) {
            ctx->pc = 0x4C1B24u;
            goto label_4c1b24;
        }
    }
    ctx->pc = 0x4C1AE8u;
label_4c1ae8:
    // 0x4c1ae8: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x4c1ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c1aec:
    // 0x4c1aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1af0:
    // 0x4c1af0: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4c1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4c1af4:
    // 0x4c1af4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4c1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4c1af8:
    // 0x4c1af8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c1afc:
    // 0x4c1afc: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c1afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4c1b00:
    // 0x4c1b00: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x4c1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_4c1b04:
    // 0x4c1b04: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x4c1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_4c1b08:
    // 0x4c1b08: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4c1b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4c1b0c:
    // 0x4c1b0c: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x4c1b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_4c1b10:
    // 0x4c1b10: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x4c1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_4c1b14:
    // 0x4c1b14: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x4c1b14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_4c1b18:
    // 0x4c1b18: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x4c1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_4c1b1c:
    // 0x4c1b1c: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4c1b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4c1b20:
    // 0x4c1b20: 0xa245006b  sb          $a1, 0x6B($s2)
    ctx->pc = 0x4c1b20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
label_4c1b24:
    // 0x4c1b24: 0xc040180  jal         func_100600
label_4c1b28:
    if (ctx->pc == 0x4C1B28u) {
        ctx->pc = 0x4C1B28u;
            // 0x4c1b28: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x4C1B2Cu;
        goto label_4c1b2c;
    }
    ctx->pc = 0x4C1B24u;
    SET_GPR_U32(ctx, 31, 0x4C1B2Cu);
    ctx->pc = 0x4C1B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1B24u;
            // 0x4c1b28: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B2Cu; }
        if (ctx->pc != 0x4C1B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B2Cu; }
        if (ctx->pc != 0x4C1B2Cu) { return; }
    }
    ctx->pc = 0x4C1B2Cu;
label_4c1b2c:
    // 0x4c1b2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c1b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1b30:
    // 0x4c1b30: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4c1b34:
    if (ctx->pc == 0x4C1B34u) {
        ctx->pc = 0x4C1B38u;
        goto label_4c1b38;
    }
    ctx->pc = 0x4C1B30u;
    {
        const bool branch_taken_0x4c1b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1b30) {
            ctx->pc = 0x4C1BB0u;
            goto label_4c1bb0;
        }
    }
    ctx->pc = 0x4C1B38u;
label_4c1b38:
    // 0x4c1b38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4c1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4c1b3c:
    // 0x4c1b3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c1b40:
    // 0x4c1b40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c1b44:
    // 0x4c1b44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4c1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4c1b48:
    // 0x4c1b48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4c1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4c1b4c:
    // 0x4c1b4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4c1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4c1b50:
    // 0x4c1b50: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4c1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4c1b54:
    // 0x4c1b54: 0xc040138  jal         func_1004E0
label_4c1b58:
    if (ctx->pc == 0x4C1B58u) {
        ctx->pc = 0x4C1B58u;
            // 0x4c1b58: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4C1B5Cu;
        goto label_4c1b5c;
    }
    ctx->pc = 0x4C1B54u;
    SET_GPR_U32(ctx, 31, 0x4C1B5Cu);
    ctx->pc = 0x4C1B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1B54u;
            // 0x4c1b58: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B5Cu; }
        if (ctx->pc != 0x4C1B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B5Cu; }
        if (ctx->pc != 0x4C1B5Cu) { return; }
    }
    ctx->pc = 0x4C1B5Cu;
label_4c1b5c:
    // 0x4c1b5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c1b60:
    // 0x4c1b60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c1b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1b64:
    // 0x4c1b64: 0xc040138  jal         func_1004E0
label_4c1b68:
    if (ctx->pc == 0x4C1B68u) {
        ctx->pc = 0x4C1B68u;
            // 0x4c1b68: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x4C1B6Cu;
        goto label_4c1b6c;
    }
    ctx->pc = 0x4C1B64u;
    SET_GPR_U32(ctx, 31, 0x4C1B6Cu);
    ctx->pc = 0x4C1B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1B64u;
            // 0x4c1b68: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B6Cu; }
        if (ctx->pc != 0x4C1B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B6Cu; }
        if (ctx->pc != 0x4C1B6Cu) { return; }
    }
    ctx->pc = 0x4C1B6Cu;
label_4c1b6c:
    // 0x4c1b6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4c1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4c1b70:
    // 0x4c1b70: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4c1b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4c1b74:
    // 0x4c1b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1b78:
    // 0x4c1b78: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4c1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4c1b7c:
    // 0x4c1b7c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4c1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4c1b80:
    // 0x4c1b80: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4c1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4c1b84:
    // 0x4c1b84: 0xc040840  jal         func_102100
label_4c1b88:
    if (ctx->pc == 0x4C1B88u) {
        ctx->pc = 0x4C1B88u;
            // 0x4c1b88: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C1B8Cu;
        goto label_4c1b8c;
    }
    ctx->pc = 0x4C1B84u;
    SET_GPR_U32(ctx, 31, 0x4C1B8Cu);
    ctx->pc = 0x4C1B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1B84u;
            // 0x4c1b88: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B8Cu; }
        if (ctx->pc != 0x4C1B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1B8Cu; }
        if (ctx->pc != 0x4C1B8Cu) { return; }
    }
    ctx->pc = 0x4C1B8Cu;
label_4c1b8c:
    // 0x4c1b8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c1b90:
    // 0x4c1b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4c1b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1b94:
    // 0x4c1b94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c1b98:
    // 0x4c1b98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c1b9c:
    // 0x4c1b9c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x4c1b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_4c1ba0:
    // 0x4c1ba0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4c1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4c1ba4:
    // 0x4c1ba4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4c1ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4c1ba8:
    // 0x4c1ba8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c1bac:
    if (ctx->pc == 0x4C1BACu) {
        ctx->pc = 0x4C1BB0u;
        goto label_4c1bb0;
    }
    ctx->pc = 0x4C1BA8u;
    {
        const bool branch_taken_0x4c1ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1ba8) {
            ctx->pc = 0x4C1B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c1b94;
        }
    }
    ctx->pc = 0x4C1BB0u;
label_4c1bb0:
    // 0x4c1bb0: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x4c1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_4c1bb4:
    // 0x4c1bb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c1bb8:
    // 0x4c1bb8: 0x3c024407  lui         $v0, 0x4407
    ctx->pc = 0x4c1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17415 << 16));
label_4c1bbc:
    // 0x4c1bbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1bc0:
    // 0x4c1bc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c1bc4:
    // 0x4c1bc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c1bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1bc8:
    // 0x4c1bc8: 0xc0e7d2c  jal         func_39F4B0
label_4c1bcc:
    if (ctx->pc == 0x4C1BCCu) {
        ctx->pc = 0x4C1BCCu;
            // 0x4c1bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1BD0u;
        goto label_4c1bd0;
    }
    ctx->pc = 0x4C1BC8u;
    SET_GPR_U32(ctx, 31, 0x4C1BD0u);
    ctx->pc = 0x4C1BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1BC8u;
            // 0x4c1bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1BD0u; }
        if (ctx->pc != 0x4C1BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1BD0u; }
        if (ctx->pc != 0x4C1BD0u) { return; }
    }
    ctx->pc = 0x4C1BD0u;
label_4c1bd0:
    // 0x4c1bd0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c1bd4:
    // 0x4c1bd4: 0x3c024407  lui         $v0, 0x4407
    ctx->pc = 0x4c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17415 << 16));
label_4c1bd8:
    // 0x4c1bd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1bdc:
    // 0x4c1bdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c1be0:
    // 0x4c1be0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1be4:
    // 0x4c1be4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c1be8:
    // 0x4c1be8: 0xc0e7d2c  jal         func_39F4B0
label_4c1bec:
    if (ctx->pc == 0x4C1BECu) {
        ctx->pc = 0x4C1BECu;
            // 0x4c1bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1BF0u;
        goto label_4c1bf0;
    }
    ctx->pc = 0x4C1BE8u;
    SET_GPR_U32(ctx, 31, 0x4C1BF0u);
    ctx->pc = 0x4C1BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1BE8u;
            // 0x4c1bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1BF0u; }
        if (ctx->pc != 0x4C1BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1BF0u; }
        if (ctx->pc != 0x4C1BF0u) { return; }
    }
    ctx->pc = 0x4C1BF0u;
label_4c1bf0:
    // 0x4c1bf0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c1bf4:
    // 0x4c1bf4: 0x3c024407  lui         $v0, 0x4407
    ctx->pc = 0x4c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17415 << 16));
label_4c1bf8:
    // 0x4c1bf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1bfc:
    // 0x4c1bfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4c1bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c1c00:
    // 0x4c1c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1c04:
    // 0x4c1c04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4c1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4c1c08:
    // 0x4c1c08: 0xc0e7d2c  jal         func_39F4B0
label_4c1c0c:
    if (ctx->pc == 0x4C1C0Cu) {
        ctx->pc = 0x4C1C0Cu;
            // 0x4c1c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1C10u;
        goto label_4c1c10;
    }
    ctx->pc = 0x4C1C08u;
    SET_GPR_U32(ctx, 31, 0x4C1C10u);
    ctx->pc = 0x4C1C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C08u;
            // 0x4c1c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C10u; }
        if (ctx->pc != 0x4C1C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C10u; }
        if (ctx->pc != 0x4C1C10u) { return; }
    }
    ctx->pc = 0x4C1C10u;
label_4c1c10:
    // 0x4c1c10: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4c1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4c1c14:
    // 0x4c1c14: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4c1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4c1c18:
    // 0x4c1c18: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4c1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c1c1c:
    // 0x4c1c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c1c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c1c20:
    // 0x4c1c20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4c1c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_4c1c24:
    // 0x4c1c24: 0xc040180  jal         func_100600
label_4c1c28:
    if (ctx->pc == 0x4C1C28u) {
        ctx->pc = 0x4C1C28u;
            // 0x4c1c28: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4C1C2Cu;
        goto label_4c1c2c;
    }
    ctx->pc = 0x4C1C24u;
    SET_GPR_U32(ctx, 31, 0x4C1C2Cu);
    ctx->pc = 0x4C1C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C24u;
            // 0x4c1c28: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C2Cu; }
        if (ctx->pc != 0x4C1C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C2Cu; }
        if (ctx->pc != 0x4C1C2Cu) { return; }
    }
    ctx->pc = 0x4C1C2Cu;
label_4c1c2c:
    // 0x4c1c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c30:
    // 0x4c1c30: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4c1c34:
    if (ctx->pc == 0x4C1C34u) {
        ctx->pc = 0x4C1C34u;
            // 0x4c1c34: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4C1C38u;
        goto label_4c1c38;
    }
    ctx->pc = 0x4C1C30u;
    {
        const bool branch_taken_0x4c1c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1c30) {
            ctx->pc = 0x4C1C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C30u;
            // 0x4c1c34: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1C70u;
            goto label_4c1c70;
        }
    }
    ctx->pc = 0x4C1C38u;
label_4c1c38:
    // 0x4c1c38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c1c3c:
    // 0x4c1c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c1c40:
    // 0x4c1c40: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4c1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4c1c44:
    // 0x4c1c44: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4c1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4c1c48:
    // 0x4c1c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c1c4c:
    // 0x4c1c4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c1c50:
    // 0x4c1c50: 0xc040138  jal         func_1004E0
label_4c1c54:
    if (ctx->pc == 0x4C1C54u) {
        ctx->pc = 0x4C1C54u;
            // 0x4c1c54: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C1C58u;
        goto label_4c1c58;
    }
    ctx->pc = 0x4C1C50u;
    SET_GPR_U32(ctx, 31, 0x4C1C58u);
    ctx->pc = 0x4C1C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C50u;
            // 0x4c1c54: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C58u; }
        if (ctx->pc != 0x4C1C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C58u; }
        if (ctx->pc != 0x4C1C58u) { return; }
    }
    ctx->pc = 0x4C1C58u;
label_4c1c58:
    // 0x4c1c58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c1c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c1c5c:
    // 0x4c1c5c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4c1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4c1c60:
    // 0x4c1c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c64:
    // 0x4c1c64: 0xc04a576  jal         func_1295D8
label_4c1c68:
    if (ctx->pc == 0x4C1C68u) {
        ctx->pc = 0x4C1C68u;
            // 0x4c1c68: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4C1C6Cu;
        goto label_4c1c6c;
    }
    ctx->pc = 0x4C1C64u;
    SET_GPR_U32(ctx, 31, 0x4C1C6Cu);
    ctx->pc = 0x4C1C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C64u;
            // 0x4c1c68: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C6Cu; }
        if (ctx->pc != 0x4C1C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C6Cu; }
        if (ctx->pc != 0x4C1C6Cu) { return; }
    }
    ctx->pc = 0x4C1C6Cu;
label_4c1c6c:
    // 0x4c1c6c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4c1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4c1c70:
    // 0x4c1c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c1c74:
    // 0x4c1c74: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4c1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4c1c78:
    // 0x4c1c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c7c:
    // 0x4c1c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1c80:
    // 0x4c1c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c84:
    // 0x4c1c84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4c1c88:
    // 0x4c1c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c1c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c8c:
    // 0x4c1c8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c1c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c1c90:
    // 0x4c1c90: 0x344615ae  ori         $a2, $v0, 0x15AE
    ctx->pc = 0x4c1c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5550);
label_4c1c94:
    // 0x4c1c94: 0xc122cd8  jal         func_48B360
label_4c1c98:
    if (ctx->pc == 0x4C1C98u) {
        ctx->pc = 0x4C1C98u;
            // 0x4c1c98: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x4C1C9Cu;
        goto label_4c1c9c;
    }
    ctx->pc = 0x4C1C94u;
    SET_GPR_U32(ctx, 31, 0x4C1C9Cu);
    ctx->pc = 0x4C1C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1C94u;
            // 0x4c1c98: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C9Cu; }
        if (ctx->pc != 0x4C1C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1C9Cu; }
        if (ctx->pc != 0x4C1C9Cu) { return; }
    }
    ctx->pc = 0x4C1C9Cu;
label_4c1c9c:
    // 0x4c1c9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4c1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4c1ca0:
    // 0x4c1ca0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4c1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4c1ca4:
    // 0x4c1ca4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4c1ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c1ca8:
    // 0x4c1ca8: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x4c1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_4c1cac:
    // 0x4c1cac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4c1cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4c1cb0:
    // 0x4c1cb0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4c1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4c1cb4:
    // 0x4c1cb4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4c1cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1cb8:
    // 0x4c1cb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1cbc:
    // 0x4c1cbc: 0x344615ae  ori         $a2, $v0, 0x15AE
    ctx->pc = 0x4c1cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5550);
label_4c1cc0:
    // 0x4c1cc0: 0xc122cd8  jal         func_48B360
label_4c1cc4:
    if (ctx->pc == 0x4C1CC4u) {
        ctx->pc = 0x4C1CC4u;
            // 0x4c1cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1CC8u;
        goto label_4c1cc8;
    }
    ctx->pc = 0x4C1CC0u;
    SET_GPR_U32(ctx, 31, 0x4C1CC8u);
    ctx->pc = 0x4C1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1CC0u;
            // 0x4c1cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1CC8u; }
        if (ctx->pc != 0x4C1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1CC8u; }
        if (ctx->pc != 0x4C1CC8u) { return; }
    }
    ctx->pc = 0x4C1CC8u;
label_4c1cc8:
    // 0x4c1cc8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x4c1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_4c1ccc:
    // 0x4c1ccc: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x4c1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
label_4c1cd0:
    // 0x4c1cd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c1cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c1cd4:
    // 0x4c1cd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c1cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1cd8:
    // 0x4c1cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c1cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1cdc:
    // 0x4c1cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1ce0:
    // 0x4c1ce0: 0x3e00008  jr          $ra
label_4c1ce4:
    if (ctx->pc == 0x4C1CE4u) {
        ctx->pc = 0x4C1CE4u;
            // 0x4c1ce4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4C1CE8u;
        goto label_4c1ce8;
    }
    ctx->pc = 0x4C1CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1CE0u;
            // 0x4c1ce4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1CE8u;
label_4c1ce8:
    // 0x4c1ce8: 0x0  nop
    ctx->pc = 0x4c1ce8u;
    // NOP
label_4c1cec:
    // 0x4c1cec: 0x0  nop
    ctx->pc = 0x4c1cecu;
    // NOP
label_4c1cf0:
    // 0x4c1cf0: 0x3e00008  jr          $ra
label_4c1cf4:
    if (ctx->pc == 0x4C1CF4u) {
        ctx->pc = 0x4C1CF8u;
        goto label_4c1cf8;
    }
    ctx->pc = 0x4C1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1CF8u;
label_4c1cf8:
    // 0x4c1cf8: 0x0  nop
    ctx->pc = 0x4c1cf8u;
    // NOP
label_4c1cfc:
    // 0x4c1cfc: 0x0  nop
    ctx->pc = 0x4c1cfcu;
    // NOP
label_4c1d00:
    // 0x4c1d00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4c1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4c1d04:
    // 0x4c1d04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c1d08:
    // 0x4c1d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c1d0c:
    // 0x4c1d0c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4c1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4c1d10:
    // 0x4c1d10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c1d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c1d14:
    // 0x4c1d14: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4c1d18:
    // 0x4c1d18: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x4c1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4c1d1c:
    // 0x4c1d1c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4c1d20:
    if (ctx->pc == 0x4C1D20u) {
        ctx->pc = 0x4C1D20u;
            // 0x4c1d20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D24u;
        goto label_4c1d24;
    }
    ctx->pc = 0x4C1D1Cu;
    {
        const bool branch_taken_0x4c1d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C1D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D1Cu;
            // 0x4c1d20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d1c) {
            ctx->pc = 0x4C1D2Cu;
            goto label_4c1d2c;
        }
    }
    ctx->pc = 0x4C1D24u;
label_4c1d24:
    // 0x4c1d24: 0x10000012  b           . + 4 + (0x12 << 2)
label_4c1d28:
    if (ctx->pc == 0x4C1D28u) {
        ctx->pc = 0x4C1D28u;
            // 0x4c1d28: 0x8cd00050  lw          $s0, 0x50($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
        ctx->pc = 0x4C1D2Cu;
        goto label_4c1d2c;
    }
    ctx->pc = 0x4C1D24u;
    {
        const bool branch_taken_0x4c1d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D24u;
            // 0x4c1d28: 0x8cd00050  lw          $s0, 0x50($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d24) {
            ctx->pc = 0x4C1D70u;
            goto label_4c1d70;
        }
    }
    ctx->pc = 0x4C1D2Cu;
label_4c1d2c:
    // 0x4c1d2c: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x4c1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c1d30:
    // 0x4c1d30: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x4c1d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4c1d34:
    // 0x4c1d34: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x4c1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4c1d38:
    // 0x4c1d38: 0xc04cbd8  jal         func_132F60
label_4c1d3c:
    if (ctx->pc == 0x4C1D3Cu) {
        ctx->pc = 0x4C1D3Cu;
            // 0x4c1d3c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C1D40u;
        goto label_4c1d40;
    }
    ctx->pc = 0x4C1D38u;
    SET_GPR_U32(ctx, 31, 0x4C1D40u);
    ctx->pc = 0x4C1D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D38u;
            // 0x4c1d3c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D40u; }
        if (ctx->pc != 0x4C1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D40u; }
        if (ctx->pc != 0x4C1D40u) { return; }
    }
    ctx->pc = 0x4C1D40u;
label_4c1d40:
    // 0x4c1d40: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x4c1d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c1d44:
    // 0x4c1d44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c1d48:
    // 0x4c1d48: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4c1d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c1d4c:
    // 0x4c1d4c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x4c1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_4c1d50:
    // 0x4c1d50: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x4c1d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4c1d54:
    // 0x4c1d54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c1d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c1d58:
    // 0x4c1d58: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x4c1d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4c1d5c:
    // 0x4c1d5c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x4c1d5cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_4c1d60:
    // 0x4c1d60: 0xc0bafb8  jal         func_2EBEE0
label_4c1d64:
    if (ctx->pc == 0x4C1D64u) {
        ctx->pc = 0x4C1D64u;
            // 0x4c1d64: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x4C1D68u;
        goto label_4c1d68;
    }
    ctx->pc = 0x4C1D60u;
    SET_GPR_U32(ctx, 31, 0x4C1D68u);
    ctx->pc = 0x4C1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D60u;
            // 0x4c1d64: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D68u; }
        if (ctx->pc != 0x4C1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D68u; }
        if (ctx->pc != 0x4C1D68u) { return; }
    }
    ctx->pc = 0x4C1D68u;
label_4c1d68:
    // 0x4c1d68: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4c1d6c:
    if (ctx->pc == 0x4C1D6Cu) {
        ctx->pc = 0x4C1D6Cu;
            // 0x4c1d6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C1D70u;
        goto label_4c1d70;
    }
    ctx->pc = 0x4C1D68u;
    {
        const bool branch_taken_0x4c1d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D68u;
            // 0x4c1d6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d68) {
            ctx->pc = 0x4C1E94u;
            goto label_4c1e94;
        }
    }
    ctx->pc = 0x4C1D70u;
label_4c1d70:
    // 0x4c1d70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4c1d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1d74:
    // 0x4c1d74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4c1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c1d78:
    // 0x4c1d78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4c1d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4c1d7c:
    // 0x4c1d7c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4c1d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1d80:
    // 0x4c1d80: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x4c1d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4c1d84:
    // 0x4c1d84: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4c1d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1d88:
    // 0x4c1d88: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4c1d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4c1d8c:
    // 0x4c1d8c: 0xc04f278  jal         func_13C9E0
label_4c1d90:
    if (ctx->pc == 0x4C1D90u) {
        ctx->pc = 0x4C1D90u;
            // 0x4c1d90: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x4C1D94u;
        goto label_4c1d94;
    }
    ctx->pc = 0x4C1D8Cu;
    SET_GPR_U32(ctx, 31, 0x4C1D94u);
    ctx->pc = 0x4C1D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1D8Cu;
            // 0x4c1d90: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D94u; }
        if (ctx->pc != 0x4C1D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1D94u; }
        if (ctx->pc != 0x4C1D94u) { return; }
    }
    ctx->pc = 0x4C1D94u;
label_4c1d94:
    // 0x4c1d94: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x4c1d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1d98:
    // 0x4c1d98: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x4c1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_4c1d9c:
    // 0x4c1d9c: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x4c1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1da0:
    // 0x4c1da0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4c1da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4c1da4:
    // 0x4c1da4: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x4c1da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1da8:
    // 0x4c1da8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c1dac:
    // 0x4c1dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1db0:
    // 0x4c1db0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1db4:
    // 0x4c1db4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4c1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4c1db8:
    // 0x4c1db8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4c1db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4c1dbc:
    // 0x4c1dbc: 0xc04cb6c  jal         func_132DB0
label_4c1dc0:
    if (ctx->pc == 0x4C1DC0u) {
        ctx->pc = 0x4C1DC0u;
            // 0x4c1dc0: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x4C1DC4u;
        goto label_4c1dc4;
    }
    ctx->pc = 0x4C1DBCu;
    SET_GPR_U32(ctx, 31, 0x4C1DC4u);
    ctx->pc = 0x4C1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1DBCu;
            // 0x4c1dc0: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DC4u; }
        if (ctx->pc != 0x4C1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DC4u; }
        if (ctx->pc != 0x4C1DC4u) { return; }
    }
    ctx->pc = 0x4C1DC4u;
label_4c1dc4:
    // 0x4c1dc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c1dc8:
    // 0x4c1dc8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4c1dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4c1dcc:
    // 0x4c1dcc: 0x24c67130  addiu       $a2, $a2, 0x7130
    ctx->pc = 0x4c1dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28976));
label_4c1dd0:
    // 0x4c1dd0: 0xc04cafc  jal         func_132BF0
label_4c1dd4:
    if (ctx->pc == 0x4C1DD4u) {
        ctx->pc = 0x4C1DD4u;
            // 0x4c1dd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1DD8u;
        goto label_4c1dd8;
    }
    ctx->pc = 0x4C1DD0u;
    SET_GPR_U32(ctx, 31, 0x4C1DD8u);
    ctx->pc = 0x4C1DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1DD0u;
            // 0x4c1dd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DD8u; }
        if (ctx->pc != 0x4C1DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DD8u; }
        if (ctx->pc != 0x4C1DD8u) { return; }
    }
    ctx->pc = 0x4C1DD8u;
label_4c1dd8:
    // 0x4c1dd8: 0xc040180  jal         func_100600
label_4c1ddc:
    if (ctx->pc == 0x4C1DDCu) {
        ctx->pc = 0x4C1DDCu;
            // 0x4c1ddc: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4C1DE0u;
        goto label_4c1de0;
    }
    ctx->pc = 0x4C1DD8u;
    SET_GPR_U32(ctx, 31, 0x4C1DE0u);
    ctx->pc = 0x4C1DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1DD8u;
            // 0x4c1ddc: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DE0u; }
        if (ctx->pc != 0x4C1DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1DE0u; }
        if (ctx->pc != 0x4C1DE0u) { return; }
    }
    ctx->pc = 0x4C1DE0u;
label_4c1de0:
    // 0x4c1de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1de4:
    // 0x4c1de4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_4c1de8:
    if (ctx->pc == 0x4C1DE8u) {
        ctx->pc = 0x4C1DECu;
        goto label_4c1dec;
    }
    ctx->pc = 0x4C1DE4u;
    {
        const bool branch_taken_0x4c1de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1de4) {
            ctx->pc = 0x4C1E90u;
            goto label_4c1e90;
        }
    }
    ctx->pc = 0x4C1DECu;
label_4c1dec:
    // 0x4c1dec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c1decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c1df0:
    // 0x4c1df0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4c1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4c1df4:
    // 0x4c1df4: 0xc4417170  lwc1        $f1, 0x7170($v0)
    ctx->pc = 0x4c1df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1df8:
    // 0x4c1df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c1df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c1dfc:
    // 0x4c1dfc: 0x0  nop
    ctx->pc = 0x4c1dfcu;
    // NOP
label_4c1e00:
    // 0x4c1e00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c1e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c1e04:
    // 0x4c1e04: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4c1e08:
    if (ctx->pc == 0x4C1E08u) {
        ctx->pc = 0x4C1E08u;
            // 0x4c1e08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C1E0Cu;
        goto label_4c1e0c;
    }
    ctx->pc = 0x4C1E04u;
    {
        const bool branch_taken_0x4c1e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c1e04) {
            ctx->pc = 0x4C1E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1E04u;
            // 0x4c1e08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1E1Cu;
            goto label_4c1e1c;
        }
    }
    ctx->pc = 0x4C1E0Cu;
label_4c1e0c:
    // 0x4c1e0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c1e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c1e10:
    // 0x4c1e10: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4c1e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4c1e14:
    // 0x4c1e14: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c1e18:
    if (ctx->pc == 0x4C1E18u) {
        ctx->pc = 0x4C1E1Cu;
        goto label_4c1e1c;
    }
    ctx->pc = 0x4C1E14u;
    {
        const bool branch_taken_0x4c1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1e14) {
            ctx->pc = 0x4C1E30u;
            goto label_4c1e30;
        }
    }
    ctx->pc = 0x4C1E1Cu;
label_4c1e1c:
    // 0x4c1e1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4c1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4c1e20:
    // 0x4c1e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c1e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c1e24:
    // 0x4c1e24: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4c1e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4c1e28:
    // 0x4c1e28: 0x0  nop
    ctx->pc = 0x4c1e28u;
    // NOP
label_4c1e2c:
    // 0x4c1e2c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c1e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4c1e30:
    // 0x4c1e30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c1e34:
    // 0x4c1e34: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4c1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4c1e38:
    // 0x4c1e38: 0x24637140  addiu       $v1, $v1, 0x7140
    ctx->pc = 0x4c1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28992));
label_4c1e3c:
    // 0x4c1e3c: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c1e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4c1e40:
    // 0x4c1e40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4c1e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c1e44:
    // 0x4c1e44: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4c1e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_4c1e48:
    // 0x4c1e48: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4c1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_4c1e4c:
    // 0x4c1e4c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4c1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4c1e50:
    // 0x4c1e50: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4c1e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4c1e54:
    // 0x4c1e54: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4c1e54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4c1e58:
    // 0x4c1e58: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x4c1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_4c1e5c:
    // 0x4c1e5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4c1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c1e60:
    // 0x4c1e60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4c1e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4c1e64:
    // 0x4c1e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4c1e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c1e68:
    // 0x4c1e68: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x4c1e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c1e6c:
    // 0x4c1e6c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x4c1e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c1e70:
    // 0x4c1e70: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4c1e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4c1e74:
    // 0x4c1e74: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x4c1e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c1e78:
    // 0x4c1e78: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4c1e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c1e7c:
    // 0x4c1e7c: 0x25297150  addiu       $t1, $t1, 0x7150
    ctx->pc = 0x4c1e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29008));
label_4c1e80:
    // 0x4c1e80: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4c1e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4c1e84:
    // 0x4c1e84: 0x254a7160  addiu       $t2, $t2, 0x7160
    ctx->pc = 0x4c1e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29024));
label_4c1e88:
    // 0x4c1e88: 0xc0db488  jal         func_36D220
label_4c1e8c:
    if (ctx->pc == 0x4C1E8Cu) {
        ctx->pc = 0x4C1E8Cu;
            // 0x4c1e8c: 0x27ab0080  addiu       $t3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C1E90u;
        goto label_4c1e90;
    }
    ctx->pc = 0x4C1E88u;
    SET_GPR_U32(ctx, 31, 0x4C1E90u);
    ctx->pc = 0x4C1E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1E88u;
            // 0x4c1e8c: 0x27ab0080  addiu       $t3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1E90u; }
        if (ctx->pc != 0x4C1E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1E90u; }
        if (ctx->pc != 0x4C1E90u) { return; }
    }
    ctx->pc = 0x4C1E90u;
label_4c1e90:
    // 0x4c1e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c1e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1e94:
    // 0x4c1e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c1e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1e98:
    // 0x4c1e98: 0x3e00008  jr          $ra
label_4c1e9c:
    if (ctx->pc == 0x4C1E9Cu) {
        ctx->pc = 0x4C1E9Cu;
            // 0x4c1e9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4C1EA0u;
        goto label_4c1ea0;
    }
    ctx->pc = 0x4C1E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1E98u;
            // 0x4c1e9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1EA0u;
label_4c1ea0:
    // 0x4c1ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c1ea4:
    // 0x4c1ea4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4c1ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4c1ea8:
    // 0x4c1ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c1eac:
    // 0x4c1eac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4c1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c1eb0:
    // 0x4c1eb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c1eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c1eb4:
    // 0x4c1eb4: 0x24c670e8  addiu       $a2, $a2, 0x70E8
    ctx->pc = 0x4c1eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28904));
label_4c1eb8:
    // 0x4c1eb8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x4c1eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1ebc:
    // 0x4c1ebc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c1ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1ec0:
    // 0x4c1ec0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x4c1ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1ec4:
    // 0x4c1ec4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x4c1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1ec8:
    // 0x4c1ec8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4c1ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c1ecc:
    // 0x4c1ecc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c1eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c1ed0:
    // 0x4c1ed0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4c1ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c1ed4:
    // 0x4c1ed4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x4c1ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c1ed8:
    // 0x4c1ed8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x4c1ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1edc:
    // 0x4c1edc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x4c1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c1ee0:
    // 0x4c1ee0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x4c1ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4c1ee4:
    // 0x4c1ee4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1ee8:
    // 0x4c1ee8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4c1ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4c1eec:
    // 0x4c1eec: 0xc04cafc  jal         func_132BF0
label_4c1ef0:
    if (ctx->pc == 0x4C1EF0u) {
        ctx->pc = 0x4C1EF0u;
            // 0x4c1ef0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4C1EF4u;
        goto label_4c1ef4;
    }
    ctx->pc = 0x4C1EECu;
    SET_GPR_U32(ctx, 31, 0x4C1EF4u);
    ctx->pc = 0x4C1EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1EECu;
            // 0x4c1ef0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1EF4u; }
        if (ctx->pc != 0x4C1EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1EF4u; }
        if (ctx->pc != 0x4C1EF4u) { return; }
    }
    ctx->pc = 0x4C1EF4u;
label_4c1ef4:
    // 0x4c1ef4: 0xc040180  jal         func_100600
label_4c1ef8:
    if (ctx->pc == 0x4C1EF8u) {
        ctx->pc = 0x4C1EF8u;
            // 0x4c1ef8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4C1EFCu;
        goto label_4c1efc;
    }
    ctx->pc = 0x4C1EF4u;
    SET_GPR_U32(ctx, 31, 0x4C1EFCu);
    ctx->pc = 0x4C1EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1EF4u;
            // 0x4c1ef8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1EFCu; }
        if (ctx->pc != 0x4C1EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1EFCu; }
        if (ctx->pc != 0x4C1EFCu) { return; }
    }
    ctx->pc = 0x4C1EFCu;
label_4c1efc:
    // 0x4c1efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1f00:
    // 0x4c1f00: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_4c1f04:
    if (ctx->pc == 0x4C1F04u) {
        ctx->pc = 0x4C1F04u;
            // 0x4c1f04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C1F08u;
        goto label_4c1f08;
    }
    ctx->pc = 0x4C1F00u;
    {
        const bool branch_taken_0x4c1f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1f00) {
            ctx->pc = 0x4C1F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1F00u;
            // 0x4c1f04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1FACu;
            goto label_4c1fac;
        }
    }
    ctx->pc = 0x4C1F08u;
label_4c1f08:
    // 0x4c1f08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c1f0c:
    // 0x4c1f0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4c1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4c1f10:
    // 0x4c1f10: 0xc4417128  lwc1        $f1, 0x7128($v0)
    ctx->pc = 0x4c1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c1f14:
    // 0x4c1f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c1f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c1f18:
    // 0x4c1f18: 0x0  nop
    ctx->pc = 0x4c1f18u;
    // NOP
label_4c1f1c:
    // 0x4c1f1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c1f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c1f20:
    // 0x4c1f20: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4c1f24:
    if (ctx->pc == 0x4C1F24u) {
        ctx->pc = 0x4C1F24u;
            // 0x4c1f24: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C1F28u;
        goto label_4c1f28;
    }
    ctx->pc = 0x4C1F20u;
    {
        const bool branch_taken_0x4c1f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c1f20) {
            ctx->pc = 0x4C1F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1F20u;
            // 0x4c1f24: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1F38u;
            goto label_4c1f38;
        }
    }
    ctx->pc = 0x4C1F28u;
label_4c1f28:
    // 0x4c1f28: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c1f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c1f2c:
    // 0x4c1f2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c1f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c1f30:
    // 0x4c1f30: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c1f34:
    if (ctx->pc == 0x4C1F34u) {
        ctx->pc = 0x4C1F38u;
        goto label_4c1f38;
    }
    ctx->pc = 0x4C1F30u;
    {
        const bool branch_taken_0x4c1f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1f30) {
            ctx->pc = 0x4C1F4Cu;
            goto label_4c1f4c;
        }
    }
    ctx->pc = 0x4C1F38u;
label_4c1f38:
    // 0x4c1f38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4c1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4c1f3c:
    // 0x4c1f3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c1f3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c1f40:
    // 0x4c1f40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c1f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c1f44:
    // 0x4c1f44: 0x0  nop
    ctx->pc = 0x4c1f44u;
    // NOP
label_4c1f48:
    // 0x4c1f48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c1f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c1f4c:
    // 0x4c1f4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c1f50:
    // 0x4c1f50: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c1f50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4c1f54:
    // 0x4c1f54: 0x244270f8  addiu       $v0, $v0, 0x70F8
    ctx->pc = 0x4c1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28920));
label_4c1f58:
    // 0x4c1f58: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4c1f58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4c1f5c:
    // 0x4c1f5c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4c1f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4c1f60:
    // 0x4c1f60: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x4c1f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4c1f64:
    // 0x4c1f64: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x4c1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_4c1f68:
    // 0x4c1f68: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4c1f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_4c1f6c:
    // 0x4c1f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c1f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c1f70:
    // 0x4c1f70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c1f74:
    // 0x4c1f74: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x4c1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_4c1f78:
    // 0x4c1f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1f7c:
    // 0x4c1f7c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c1f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c1f80:
    // 0x4c1f80: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4c1f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4c1f84:
    // 0x4c1f84: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4c1f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c1f88:
    // 0x4c1f88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4c1f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c1f8c:
    // 0x4c1f8c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4c1f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4c1f90:
    // 0x4c1f90: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x4c1f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c1f94:
    // 0x4c1f94: 0x25297108  addiu       $t1, $t1, 0x7108
    ctx->pc = 0x4c1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28936));
label_4c1f98:
    // 0x4c1f98: 0x254a7118  addiu       $t2, $t2, 0x7118
    ctx->pc = 0x4c1f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28952));
label_4c1f9c:
    // 0x4c1f9c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x4c1f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c1fa0:
    // 0x4c1fa0: 0xc0db488  jal         func_36D220
label_4c1fa4:
    if (ctx->pc == 0x4C1FA4u) {
        ctx->pc = 0x4C1FA4u;
            // 0x4c1fa4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4C1FA8u;
        goto label_4c1fa8;
    }
    ctx->pc = 0x4C1FA0u;
    SET_GPR_U32(ctx, 31, 0x4C1FA8u);
    ctx->pc = 0x4C1FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1FA0u;
            // 0x4c1fa4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1FA8u; }
        if (ctx->pc != 0x4C1FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1FA8u; }
        if (ctx->pc != 0x4C1FA8u) { return; }
    }
    ctx->pc = 0x4C1FA8u;
label_4c1fa8:
    // 0x4c1fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c1fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1fac:
    // 0x4c1fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c1facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1fb0:
    // 0x4c1fb0: 0x3e00008  jr          $ra
label_4c1fb4:
    if (ctx->pc == 0x4C1FB4u) {
        ctx->pc = 0x4C1FB4u;
            // 0x4c1fb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C1FB8u;
        goto label_4c1fb8;
    }
    ctx->pc = 0x4C1FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1FB0u;
            // 0x4c1fb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1FB8u;
label_4c1fb8:
    // 0x4c1fb8: 0x0  nop
    ctx->pc = 0x4c1fb8u;
    // NOP
label_4c1fbc:
    // 0x4c1fbc: 0x0  nop
    ctx->pc = 0x4c1fbcu;
    // NOP
label_4c1fc0:
    // 0x4c1fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c1fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c1fc4:
    // 0x4c1fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c1fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c1fc8:
    // 0x4c1fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c1fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c1fcc:
    // 0x4c1fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c1fd0:
    // 0x4c1fd0: 0x90830130  lbu         $v1, 0x130($a0)
    ctx->pc = 0x4c1fd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 304)));
label_4c1fd4:
    // 0x4c1fd4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_4c1fd8:
    if (ctx->pc == 0x4C1FD8u) {
        ctx->pc = 0x4C1FD8u;
            // 0x4c1fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1FDCu;
        goto label_4c1fdc;
    }
    ctx->pc = 0x4C1FD4u;
    {
        const bool branch_taken_0x4c1fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1FD4u;
            // 0x4c1fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1fd4) {
            ctx->pc = 0x4C2084u;
            goto label_4c2084;
        }
    }
    ctx->pc = 0x4C1FDCu;
label_4c1fdc:
    // 0x4c1fdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c1fe0:
    // 0x4c1fe0: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x4c1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_4c1fe4:
    // 0x4c1fe4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4c1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4c1fe8:
    // 0x4c1fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1fec:
    // 0x4c1fec: 0x8c510788  lw          $s1, 0x788($v0)
    ctx->pc = 0x4c1fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4c1ff0:
    // 0x4c1ff0: 0xc122d2c  jal         func_48B4B0
label_4c1ff4:
    if (ctx->pc == 0x4C1FF4u) {
        ctx->pc = 0x4C1FF4u;
            // 0x4c1ff4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4C1FF8u;
        goto label_4c1ff8;
    }
    ctx->pc = 0x4C1FF0u;
    SET_GPR_U32(ctx, 31, 0x4C1FF8u);
    ctx->pc = 0x4C1FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1FF0u;
            // 0x4c1ff4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1FF8u; }
        if (ctx->pc != 0x4C1FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1FF8u; }
        if (ctx->pc != 0x4C1FF8u) { return; }
    }
    ctx->pc = 0x4C1FF8u;
label_4c1ff8:
    // 0x4c1ff8: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x4c1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4c1ffc:
    // 0x4c1ffc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4c1ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4c2000:
    // 0x4c2000: 0xc04f278  jal         func_13C9E0
label_4c2004:
    if (ctx->pc == 0x4C2004u) {
        ctx->pc = 0x4C2004u;
            // 0x4c2004: 0xa2000130  sb          $zero, 0x130($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4C2008u;
        goto label_4c2008;
    }
    ctx->pc = 0x4C2000u;
    SET_GPR_U32(ctx, 31, 0x4C2008u);
    ctx->pc = 0x4C2004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2000u;
            // 0x4c2004: 0xa2000130  sb          $zero, 0x130($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2008u; }
        if (ctx->pc != 0x4C2008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2008u; }
        if (ctx->pc != 0x4C2008u) { return; }
    }
    ctx->pc = 0x4C2008u;
label_4c2008:
    // 0x4c2008: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x4c2008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_4c200c:
    // 0x4c200c: 0x5020001e  beql        $at, $zero, . + 4 + (0x1E << 2)
label_4c2010:
    if (ctx->pc == 0x4C2010u) {
        ctx->pc = 0x4C2010u;
            // 0x4c2010: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C2014u;
        goto label_4c2014;
    }
    ctx->pc = 0x4C200Cu;
    {
        const bool branch_taken_0x4c200c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c200c) {
            ctx->pc = 0x4C2010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C200Cu;
            // 0x4c2010: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2088u;
            goto label_4c2088;
        }
    }
    ctx->pc = 0x4C2014u;
label_4c2014:
    // 0x4c2014: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x4c2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_4c2018:
    // 0x4c2018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c2018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c201c:
    // 0x4c201c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_4c2020:
    if (ctx->pc == 0x4C2020u) {
        ctx->pc = 0x4C2024u;
        goto label_4c2024;
    }
    ctx->pc = 0x4C201Cu;
    {
        const bool branch_taken_0x4c201c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c201c) {
            ctx->pc = 0x4C2060u;
            goto label_4c2060;
        }
    }
    ctx->pc = 0x4C2024u;
label_4c2024:
    // 0x4c2024: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c2028:
    if (ctx->pc == 0x4C2028u) {
        ctx->pc = 0x4C202Cu;
        goto label_4c202c;
    }
    ctx->pc = 0x4C2024u;
    {
        const bool branch_taken_0x4c2024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2024) {
            ctx->pc = 0x4C2034u;
            goto label_4c2034;
        }
    }
    ctx->pc = 0x4C202Cu;
label_4c202c:
    // 0x4c202c: 0x10000015  b           . + 4 + (0x15 << 2)
label_4c2030:
    if (ctx->pc == 0x4C2030u) {
        ctx->pc = 0x4C2034u;
        goto label_4c2034;
    }
    ctx->pc = 0x4C202Cu;
    {
        const bool branch_taken_0x4c202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c202c) {
            ctx->pc = 0x4C2084u;
            goto label_4c2084;
        }
    }
    ctx->pc = 0x4C2034u;
label_4c2034:
    // 0x4c2034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c2038:
    // 0x4c2038: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c2038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c203c:
    // 0x4c203c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4c203cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4c2040:
    // 0x4c2040: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x4c2040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4c2044:
    // 0x4c2044: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x4c2044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4c2048:
    // 0x4c2048: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4c2048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4c204c:
    // 0x4c204c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c204cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2050:
    // 0x4c2050: 0xc0bb404  jal         func_2ED010
label_4c2054:
    if (ctx->pc == 0x4C2054u) {
        ctx->pc = 0x4C2054u;
            // 0x4c2054: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4C2058u;
        goto label_4c2058;
    }
    ctx->pc = 0x4C2050u;
    SET_GPR_U32(ctx, 31, 0x4C2058u);
    ctx->pc = 0x4C2054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2050u;
            // 0x4c2054: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2058u; }
        if (ctx->pc != 0x4C2058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2058u; }
        if (ctx->pc != 0x4C2058u) { return; }
    }
    ctx->pc = 0x4C2058u;
label_4c2058:
    // 0x4c2058: 0x1000000a  b           . + 4 + (0xA << 2)
label_4c205c:
    if (ctx->pc == 0x4C205Cu) {
        ctx->pc = 0x4C2060u;
        goto label_4c2060;
    }
    ctx->pc = 0x4C2058u;
    {
        const bool branch_taken_0x4c2058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2058) {
            ctx->pc = 0x4C2084u;
            goto label_4c2084;
        }
    }
    ctx->pc = 0x4C2060u;
label_4c2060:
    // 0x4c2060: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c2064:
    // 0x4c2064: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c2068:
    // 0x4c2068: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4c2068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4c206c:
    // 0x4c206c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4c206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4c2070:
    // 0x4c2070: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x4c2070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4c2074:
    // 0x4c2074: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4c2074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4c2078:
    // 0x4c2078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c2078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c207c:
    // 0x4c207c: 0xc0bb404  jal         func_2ED010
label_4c2080:
    if (ctx->pc == 0x4C2080u) {
        ctx->pc = 0x4C2080u;
            // 0x4c2080: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4C2084u;
        goto label_4c2084;
    }
    ctx->pc = 0x4C207Cu;
    SET_GPR_U32(ctx, 31, 0x4C2084u);
    ctx->pc = 0x4C2080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C207Cu;
            // 0x4c2080: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2084u; }
        if (ctx->pc != 0x4C2084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2084u; }
        if (ctx->pc != 0x4C2084u) { return; }
    }
    ctx->pc = 0x4C2084u;
label_4c2084:
    // 0x4c2084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2088:
    // 0x4c2088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c208c:
    // 0x4c208c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c208cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c2090:
    // 0x4c2090: 0x3e00008  jr          $ra
label_4c2094:
    if (ctx->pc == 0x4C2094u) {
        ctx->pc = 0x4C2094u;
            // 0x4c2094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C2098u;
        goto label_4c2098;
    }
    ctx->pc = 0x4C2090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2090u;
            // 0x4c2094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2098u;
label_4c2098:
    // 0x4c2098: 0x0  nop
    ctx->pc = 0x4c2098u;
    // NOP
label_4c209c:
    // 0x4c209c: 0x0  nop
    ctx->pc = 0x4c209cu;
    // NOP
label_4c20a0:
    // 0x4c20a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c20a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c20a4:
    // 0x4c20a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c20a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c20a8:
    // 0x4c20a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c20a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c20ac:
    // 0x4c20ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c20acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c20b0:
    // 0x4c20b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c20b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c20b4:
    // 0x4c20b4: 0xc0ba938  jal         func_2EA4E0
label_4c20b8:
    if (ctx->pc == 0x4C20B8u) {
        ctx->pc = 0x4C20B8u;
            // 0x4c20b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4C20BCu;
        goto label_4c20bc;
    }
    ctx->pc = 0x4C20B4u;
    SET_GPR_U32(ctx, 31, 0x4C20BCu);
    ctx->pc = 0x4C20B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C20B4u;
            // 0x4c20b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C20BCu; }
        if (ctx->pc != 0x4C20BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C20BCu; }
        if (ctx->pc != 0x4C20BCu) { return; }
    }
    ctx->pc = 0x4C20BCu;
label_4c20bc:
    // 0x4c20bc: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x4c20bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_4c20c0:
    // 0x4c20c0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4c20c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4c20c4:
    // 0x4c20c4: 0xc122d2c  jal         func_48B4B0
label_4c20c8:
    if (ctx->pc == 0x4C20C8u) {
        ctx->pc = 0x4C20C8u;
            // 0x4c20c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C20CCu;
        goto label_4c20cc;
    }
    ctx->pc = 0x4C20C4u;
    SET_GPR_U32(ctx, 31, 0x4C20CCu);
    ctx->pc = 0x4C20C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C20C4u;
            // 0x4c20c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C20CCu; }
        if (ctx->pc != 0x4C20CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C20CCu; }
        if (ctx->pc != 0x4C20CCu) { return; }
    }
    ctx->pc = 0x4C20CCu;
label_4c20cc:
    // 0x4c20cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c20ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c20d0:
    // 0x4c20d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c20d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c20d4:
    // 0x4c20d4: 0x3e00008  jr          $ra
label_4c20d8:
    if (ctx->pc == 0x4C20D8u) {
        ctx->pc = 0x4C20D8u;
            // 0x4c20d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C20DCu;
        goto label_4c20dc;
    }
    ctx->pc = 0x4C20D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C20D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C20D4u;
            // 0x4c20d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C20DCu;
label_4c20dc:
    // 0x4c20dc: 0x0  nop
    ctx->pc = 0x4c20dcu;
    // NOP
label_4c20e0:
    // 0x4c20e0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x4c20e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4c20e4:
    // 0x4c20e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c20e8:
    // 0x4c20e8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_4c20ec:
    if (ctx->pc == 0x4C20ECu) {
        ctx->pc = 0x4C20F0u;
        goto label_4c20f0;
    }
    ctx->pc = 0x4C20E8u;
    {
        const bool branch_taken_0x4c20e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c20e8) {
            ctx->pc = 0x4C2164u;
            goto label_4c2164;
        }
    }
    ctx->pc = 0x4C20F0u;
label_4c20f0:
    // 0x4c20f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4c20f4:
    if (ctx->pc == 0x4C20F4u) {
        ctx->pc = 0x4C20F8u;
        goto label_4c20f8;
    }
    ctx->pc = 0x4C20F0u;
    {
        const bool branch_taken_0x4c20f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c20f0) {
            ctx->pc = 0x4C2100u;
            goto label_4c2100;
        }
    }
    ctx->pc = 0x4C20F8u;
label_4c20f8:
    // 0x4c20f8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4c20fc:
    if (ctx->pc == 0x4C20FCu) {
        ctx->pc = 0x4C2100u;
        goto label_4c2100;
    }
    ctx->pc = 0x4C20F8u;
    {
        const bool branch_taken_0x4c20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c20f8) {
            ctx->pc = 0x4C2164u;
            goto label_4c2164;
        }
    }
    ctx->pc = 0x4C2100u;
label_4c2100:
    // 0x4c2100: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4c2104:
    // 0x4c2104: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x4c2104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4c2108:
    // 0x4c2108: 0x8c63a9f0  lw          $v1, -0x5610($v1)
    ctx->pc = 0x4c2108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945264)));
label_4c210c:
    // 0x4c210c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4c210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4c2110:
    // 0x4c2110: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x4c2110u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4c2114:
    // 0x4c2114: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x4c2114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_4c2118:
    // 0x4c2118: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c211c:
    // 0x4c211c: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x4c211cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2120:
    // 0x4c2120: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x4c2120u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4c2124:
    // 0x4c2124: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4c2124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4c2128:
    // 0x4c2128: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4c2128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4c212c:
    // 0x4c212c: 0x8c65c7c0  lw          $a1, -0x3840($v1)
    ctx->pc = 0x4c212cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952896)));
label_4c2130:
    // 0x4c2130: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x4c2130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4c2134:
    // 0x4c2134: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c2134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c2138:
    // 0x4c2138: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4c2138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4c213c:
    // 0x4c213c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4c213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4c2140:
    // 0x4c2140: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4c2140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4c2144:
    // 0x4c2144: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x4c2144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4c2148:
    // 0x4c2148: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4c2148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c214c:
    // 0x4c214c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4c214cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4c2150:
    // 0x4c2150: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x4c2150u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c2154:
    // 0x4c2154: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_4c2158:
    if (ctx->pc == 0x4C2158u) {
        ctx->pc = 0x4C2158u;
            // 0x4c2158: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4C215Cu;
        goto label_4c215c;
    }
    ctx->pc = 0x4C2154u;
    {
        const bool branch_taken_0x4c2154 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x4C2158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2154u;
            // 0x4c2158: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2154) {
            ctx->pc = 0x4C2124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c2124;
        }
    }
    ctx->pc = 0x4C215Cu;
label_4c215c:
    // 0x4c215c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2160:
    // 0x4c2160: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x4c2160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_4c2164:
    // 0x4c2164: 0x3e00008  jr          $ra
label_4c2168:
    if (ctx->pc == 0x4C2168u) {
        ctx->pc = 0x4C216Cu;
        goto label_4c216c;
    }
    ctx->pc = 0x4C2164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C216Cu;
label_4c216c:
    // 0x4c216c: 0x0  nop
    ctx->pc = 0x4c216cu;
    // NOP
label_4c2170:
    // 0x4c2170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c2174:
    // 0x4c2174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c2178:
    // 0x4c2178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c217c:
    // 0x4c217c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c2180:
    // 0x4c2180: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4c2180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c2184:
    // 0x4c2184: 0xc0e393c  jal         func_38E4F0
label_4c2188:
    if (ctx->pc == 0x4C2188u) {
        ctx->pc = 0x4C2188u;
            // 0x4c2188: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C218Cu;
        goto label_4c218c;
    }
    ctx->pc = 0x4C2184u;
    SET_GPR_U32(ctx, 31, 0x4C218Cu);
    ctx->pc = 0x4C2188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2184u;
            // 0x4c2188: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C218Cu; }
        if (ctx->pc != 0x4C218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C218Cu; }
        if (ctx->pc != 0x4C218Cu) { return; }
    }
    ctx->pc = 0x4C218Cu;
label_4c218c:
    // 0x4c218c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c2190:
    // 0x4c2190: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4c2190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4c2194:
    // 0x4c2194: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c2194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c2198:
    // 0x4c2198: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4c2198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4c219c:
    // 0x4c219c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4c21a0:
    // 0x4c21a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c21a4:
    // 0x4c21a4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c21a8:
    // 0x4c21a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c21a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c21ac:
    // 0x4c21ac: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4c21b0:
    // 0x4c21b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c21b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c21b4:
    // 0x4c21b4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c21b8:
    // 0x4c21b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c21bc:
    // 0x4c21bc: 0xc08bff0  jal         func_22FFC0
label_4c21c0:
    if (ctx->pc == 0x4C21C0u) {
        ctx->pc = 0x4C21C0u;
            // 0x4c21c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C21C4u;
        goto label_4c21c4;
    }
    ctx->pc = 0x4C21BCu;
    SET_GPR_U32(ctx, 31, 0x4C21C4u);
    ctx->pc = 0x4C21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C21BCu;
            // 0x4c21c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C21C4u; }
        if (ctx->pc != 0x4C21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C21C4u; }
        if (ctx->pc != 0x4C21C4u) { return; }
    }
    ctx->pc = 0x4C21C4u;
label_4c21c4:
    // 0x4c21c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c21c8:
    // 0x4c21c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c21c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c21cc:
    // 0x4c21cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c21d0:
    // 0x4c21d0: 0xc08914c  jal         func_224530
label_4c21d4:
    if (ctx->pc == 0x4C21D4u) {
        ctx->pc = 0x4C21D4u;
            // 0x4c21d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C21D8u;
        goto label_4c21d8;
    }
    ctx->pc = 0x4C21D0u;
    SET_GPR_U32(ctx, 31, 0x4C21D8u);
    ctx->pc = 0x4C21D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C21D0u;
            // 0x4c21d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C21D8u; }
        if (ctx->pc != 0x4C21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C21D8u; }
        if (ctx->pc != 0x4C21D8u) { return; }
    }
    ctx->pc = 0x4C21D8u;
label_4c21d8:
    // 0x4c21d8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4c21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c21dc:
    // 0x4c21dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c21dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c21e0:
    // 0x4c21e0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4c21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c21e4:
    // 0x4c21e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4c21e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c21e8:
    // 0x4c21e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4c21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c21ec:
    // 0x4c21ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4c21ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c21f0:
    // 0x4c21f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c21f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c21f4:
    // 0x4c21f4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4c21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4c21f8:
    // 0x4c21f8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c21f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c21fc:
    // 0x4c21fc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c21fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c2200:
    // 0x4c2200: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4c2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c2204:
    // 0x4c2204: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4c2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c2208:
    // 0x4c2208: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4c2208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c220c:
    // 0x4c220c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4c220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c2210:
    // 0x4c2210: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4c2210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4c2214:
    // 0x4c2214: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4c2214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4c2218:
    // 0x4c2218: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4c2218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4c221c:
    // 0x4c221c: 0xc0892b0  jal         func_224AC0
label_4c2220:
    if (ctx->pc == 0x4C2220u) {
        ctx->pc = 0x4C2220u;
            // 0x4c2220: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4C2224u;
        goto label_4c2224;
    }
    ctx->pc = 0x4C221Cu;
    SET_GPR_U32(ctx, 31, 0x4C2224u);
    ctx->pc = 0x4C2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C221Cu;
            // 0x4c2220: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2224u; }
        if (ctx->pc != 0x4C2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2224u; }
        if (ctx->pc != 0x4C2224u) { return; }
    }
    ctx->pc = 0x4C2224u;
label_4c2224:
    // 0x4c2224: 0xc088b74  jal         func_222DD0
label_4c2228:
    if (ctx->pc == 0x4C2228u) {
        ctx->pc = 0x4C2228u;
            // 0x4c2228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C222Cu;
        goto label_4c222c;
    }
    ctx->pc = 0x4C2224u;
    SET_GPR_U32(ctx, 31, 0x4C222Cu);
    ctx->pc = 0x4C2228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2224u;
            // 0x4c2228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C222Cu; }
        if (ctx->pc != 0x4C222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C222Cu; }
        if (ctx->pc != 0x4C222Cu) { return; }
    }
    ctx->pc = 0x4C222Cu;
label_4c222c:
    // 0x4c222c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c222cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c2230:
    // 0x4c2230: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c2234:
    // 0x4c2234: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c2234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c2238:
    // 0x4c2238: 0x320f809  jalr        $t9
label_4c223c:
    if (ctx->pc == 0x4C223Cu) {
        ctx->pc = 0x4C223Cu;
            // 0x4c223c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C2240u;
        goto label_4c2240;
    }
    ctx->pc = 0x4C2238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C2240u);
        ctx->pc = 0x4C223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2238u;
            // 0x4c223c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C2240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C2240u; }
            if (ctx->pc != 0x4C2240u) { return; }
        }
        }
    }
    ctx->pc = 0x4C2240u;
label_4c2240:
    // 0x4c2240: 0xc088b74  jal         func_222DD0
label_4c2244:
    if (ctx->pc == 0x4C2244u) {
        ctx->pc = 0x4C2244u;
            // 0x4c2244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2248u;
        goto label_4c2248;
    }
    ctx->pc = 0x4C2240u;
    SET_GPR_U32(ctx, 31, 0x4C2248u);
    ctx->pc = 0x4C2244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2240u;
            // 0x4c2244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2248u; }
        if (ctx->pc != 0x4C2248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2248u; }
        if (ctx->pc != 0x4C2248u) { return; }
    }
    ctx->pc = 0x4C2248u;
label_4c2248:
    // 0x4c2248: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c2248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c224c:
    // 0x4c224c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c2250:
    // 0x4c2250: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4c2250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4c2254:
    // 0x4c2254: 0x320f809  jalr        $t9
label_4c2258:
    if (ctx->pc == 0x4C2258u) {
        ctx->pc = 0x4C2258u;
            // 0x4c2258: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C225Cu;
        goto label_4c225c;
    }
    ctx->pc = 0x4C2254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C225Cu);
        ctx->pc = 0x4C2258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2254u;
            // 0x4c2258: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C225Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C225Cu; }
            if (ctx->pc != 0x4C225Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C225Cu;
label_4c225c:
    // 0x4c225c: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x4c225cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_4c2260:
    // 0x4c2260: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x4c2260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_4c2264:
    // 0x4c2264: 0x34857084  ori         $a1, $a0, 0x7084
    ctx->pc = 0x4c2264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_4c2268:
    // 0x4c2268: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x4c2268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_4c226c:
    // 0x4c226c: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x4c226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_4c2270:
    // 0x4c2270: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x4c2270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_4c2274:
    // 0x4c2274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c2274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2278:
    // 0x4c2278: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x4c2278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4c227c:
    // 0x4c227c: 0xae2400e8  sw          $a0, 0xE8($s1)
    ctx->pc = 0x4c227cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 4));
label_4c2280:
    // 0x4c2280: 0xa2230130  sb          $v1, 0x130($s1)
    ctx->pc = 0x4c2280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 3));
label_4c2284:
    // 0x4c2284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2288:
    // 0x4c2288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c228c:
    // 0x4c228c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c228cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c2290:
    // 0x4c2290: 0x3e00008  jr          $ra
label_4c2294:
    if (ctx->pc == 0x4C2294u) {
        ctx->pc = 0x4C2294u;
            // 0x4c2294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C2298u;
        goto label_4c2298;
    }
    ctx->pc = 0x4C2290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2290u;
            // 0x4c2294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2298u;
label_4c2298:
    // 0x4c2298: 0x0  nop
    ctx->pc = 0x4c2298u;
    // NOP
label_4c229c:
    // 0x4c229c: 0x0  nop
    ctx->pc = 0x4c229cu;
    // NOP
}
