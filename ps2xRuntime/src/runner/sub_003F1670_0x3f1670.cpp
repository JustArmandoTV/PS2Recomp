#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1670
// Address: 0x3f1670 - 0x3f1ac0
void sub_003F1670_0x3f1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1670_0x3f1670");
#endif

    switch (ctx->pc) {
        case 0x3f1670u: goto label_3f1670;
        case 0x3f1674u: goto label_3f1674;
        case 0x3f1678u: goto label_3f1678;
        case 0x3f167cu: goto label_3f167c;
        case 0x3f1680u: goto label_3f1680;
        case 0x3f1684u: goto label_3f1684;
        case 0x3f1688u: goto label_3f1688;
        case 0x3f168cu: goto label_3f168c;
        case 0x3f1690u: goto label_3f1690;
        case 0x3f1694u: goto label_3f1694;
        case 0x3f1698u: goto label_3f1698;
        case 0x3f169cu: goto label_3f169c;
        case 0x3f16a0u: goto label_3f16a0;
        case 0x3f16a4u: goto label_3f16a4;
        case 0x3f16a8u: goto label_3f16a8;
        case 0x3f16acu: goto label_3f16ac;
        case 0x3f16b0u: goto label_3f16b0;
        case 0x3f16b4u: goto label_3f16b4;
        case 0x3f16b8u: goto label_3f16b8;
        case 0x3f16bcu: goto label_3f16bc;
        case 0x3f16c0u: goto label_3f16c0;
        case 0x3f16c4u: goto label_3f16c4;
        case 0x3f16c8u: goto label_3f16c8;
        case 0x3f16ccu: goto label_3f16cc;
        case 0x3f16d0u: goto label_3f16d0;
        case 0x3f16d4u: goto label_3f16d4;
        case 0x3f16d8u: goto label_3f16d8;
        case 0x3f16dcu: goto label_3f16dc;
        case 0x3f16e0u: goto label_3f16e0;
        case 0x3f16e4u: goto label_3f16e4;
        case 0x3f16e8u: goto label_3f16e8;
        case 0x3f16ecu: goto label_3f16ec;
        case 0x3f16f0u: goto label_3f16f0;
        case 0x3f16f4u: goto label_3f16f4;
        case 0x3f16f8u: goto label_3f16f8;
        case 0x3f16fcu: goto label_3f16fc;
        case 0x3f1700u: goto label_3f1700;
        case 0x3f1704u: goto label_3f1704;
        case 0x3f1708u: goto label_3f1708;
        case 0x3f170cu: goto label_3f170c;
        case 0x3f1710u: goto label_3f1710;
        case 0x3f1714u: goto label_3f1714;
        case 0x3f1718u: goto label_3f1718;
        case 0x3f171cu: goto label_3f171c;
        case 0x3f1720u: goto label_3f1720;
        case 0x3f1724u: goto label_3f1724;
        case 0x3f1728u: goto label_3f1728;
        case 0x3f172cu: goto label_3f172c;
        case 0x3f1730u: goto label_3f1730;
        case 0x3f1734u: goto label_3f1734;
        case 0x3f1738u: goto label_3f1738;
        case 0x3f173cu: goto label_3f173c;
        case 0x3f1740u: goto label_3f1740;
        case 0x3f1744u: goto label_3f1744;
        case 0x3f1748u: goto label_3f1748;
        case 0x3f174cu: goto label_3f174c;
        case 0x3f1750u: goto label_3f1750;
        case 0x3f1754u: goto label_3f1754;
        case 0x3f1758u: goto label_3f1758;
        case 0x3f175cu: goto label_3f175c;
        case 0x3f1760u: goto label_3f1760;
        case 0x3f1764u: goto label_3f1764;
        case 0x3f1768u: goto label_3f1768;
        case 0x3f176cu: goto label_3f176c;
        case 0x3f1770u: goto label_3f1770;
        case 0x3f1774u: goto label_3f1774;
        case 0x3f1778u: goto label_3f1778;
        case 0x3f177cu: goto label_3f177c;
        case 0x3f1780u: goto label_3f1780;
        case 0x3f1784u: goto label_3f1784;
        case 0x3f1788u: goto label_3f1788;
        case 0x3f178cu: goto label_3f178c;
        case 0x3f1790u: goto label_3f1790;
        case 0x3f1794u: goto label_3f1794;
        case 0x3f1798u: goto label_3f1798;
        case 0x3f179cu: goto label_3f179c;
        case 0x3f17a0u: goto label_3f17a0;
        case 0x3f17a4u: goto label_3f17a4;
        case 0x3f17a8u: goto label_3f17a8;
        case 0x3f17acu: goto label_3f17ac;
        case 0x3f17b0u: goto label_3f17b0;
        case 0x3f17b4u: goto label_3f17b4;
        case 0x3f17b8u: goto label_3f17b8;
        case 0x3f17bcu: goto label_3f17bc;
        case 0x3f17c0u: goto label_3f17c0;
        case 0x3f17c4u: goto label_3f17c4;
        case 0x3f17c8u: goto label_3f17c8;
        case 0x3f17ccu: goto label_3f17cc;
        case 0x3f17d0u: goto label_3f17d0;
        case 0x3f17d4u: goto label_3f17d4;
        case 0x3f17d8u: goto label_3f17d8;
        case 0x3f17dcu: goto label_3f17dc;
        case 0x3f17e0u: goto label_3f17e0;
        case 0x3f17e4u: goto label_3f17e4;
        case 0x3f17e8u: goto label_3f17e8;
        case 0x3f17ecu: goto label_3f17ec;
        case 0x3f17f0u: goto label_3f17f0;
        case 0x3f17f4u: goto label_3f17f4;
        case 0x3f17f8u: goto label_3f17f8;
        case 0x3f17fcu: goto label_3f17fc;
        case 0x3f1800u: goto label_3f1800;
        case 0x3f1804u: goto label_3f1804;
        case 0x3f1808u: goto label_3f1808;
        case 0x3f180cu: goto label_3f180c;
        case 0x3f1810u: goto label_3f1810;
        case 0x3f1814u: goto label_3f1814;
        case 0x3f1818u: goto label_3f1818;
        case 0x3f181cu: goto label_3f181c;
        case 0x3f1820u: goto label_3f1820;
        case 0x3f1824u: goto label_3f1824;
        case 0x3f1828u: goto label_3f1828;
        case 0x3f182cu: goto label_3f182c;
        case 0x3f1830u: goto label_3f1830;
        case 0x3f1834u: goto label_3f1834;
        case 0x3f1838u: goto label_3f1838;
        case 0x3f183cu: goto label_3f183c;
        case 0x3f1840u: goto label_3f1840;
        case 0x3f1844u: goto label_3f1844;
        case 0x3f1848u: goto label_3f1848;
        case 0x3f184cu: goto label_3f184c;
        case 0x3f1850u: goto label_3f1850;
        case 0x3f1854u: goto label_3f1854;
        case 0x3f1858u: goto label_3f1858;
        case 0x3f185cu: goto label_3f185c;
        case 0x3f1860u: goto label_3f1860;
        case 0x3f1864u: goto label_3f1864;
        case 0x3f1868u: goto label_3f1868;
        case 0x3f186cu: goto label_3f186c;
        case 0x3f1870u: goto label_3f1870;
        case 0x3f1874u: goto label_3f1874;
        case 0x3f1878u: goto label_3f1878;
        case 0x3f187cu: goto label_3f187c;
        case 0x3f1880u: goto label_3f1880;
        case 0x3f1884u: goto label_3f1884;
        case 0x3f1888u: goto label_3f1888;
        case 0x3f188cu: goto label_3f188c;
        case 0x3f1890u: goto label_3f1890;
        case 0x3f1894u: goto label_3f1894;
        case 0x3f1898u: goto label_3f1898;
        case 0x3f189cu: goto label_3f189c;
        case 0x3f18a0u: goto label_3f18a0;
        case 0x3f18a4u: goto label_3f18a4;
        case 0x3f18a8u: goto label_3f18a8;
        case 0x3f18acu: goto label_3f18ac;
        case 0x3f18b0u: goto label_3f18b0;
        case 0x3f18b4u: goto label_3f18b4;
        case 0x3f18b8u: goto label_3f18b8;
        case 0x3f18bcu: goto label_3f18bc;
        case 0x3f18c0u: goto label_3f18c0;
        case 0x3f18c4u: goto label_3f18c4;
        case 0x3f18c8u: goto label_3f18c8;
        case 0x3f18ccu: goto label_3f18cc;
        case 0x3f18d0u: goto label_3f18d0;
        case 0x3f18d4u: goto label_3f18d4;
        case 0x3f18d8u: goto label_3f18d8;
        case 0x3f18dcu: goto label_3f18dc;
        case 0x3f18e0u: goto label_3f18e0;
        case 0x3f18e4u: goto label_3f18e4;
        case 0x3f18e8u: goto label_3f18e8;
        case 0x3f18ecu: goto label_3f18ec;
        case 0x3f18f0u: goto label_3f18f0;
        case 0x3f18f4u: goto label_3f18f4;
        case 0x3f18f8u: goto label_3f18f8;
        case 0x3f18fcu: goto label_3f18fc;
        case 0x3f1900u: goto label_3f1900;
        case 0x3f1904u: goto label_3f1904;
        case 0x3f1908u: goto label_3f1908;
        case 0x3f190cu: goto label_3f190c;
        case 0x3f1910u: goto label_3f1910;
        case 0x3f1914u: goto label_3f1914;
        case 0x3f1918u: goto label_3f1918;
        case 0x3f191cu: goto label_3f191c;
        case 0x3f1920u: goto label_3f1920;
        case 0x3f1924u: goto label_3f1924;
        case 0x3f1928u: goto label_3f1928;
        case 0x3f192cu: goto label_3f192c;
        case 0x3f1930u: goto label_3f1930;
        case 0x3f1934u: goto label_3f1934;
        case 0x3f1938u: goto label_3f1938;
        case 0x3f193cu: goto label_3f193c;
        case 0x3f1940u: goto label_3f1940;
        case 0x3f1944u: goto label_3f1944;
        case 0x3f1948u: goto label_3f1948;
        case 0x3f194cu: goto label_3f194c;
        case 0x3f1950u: goto label_3f1950;
        case 0x3f1954u: goto label_3f1954;
        case 0x3f1958u: goto label_3f1958;
        case 0x3f195cu: goto label_3f195c;
        case 0x3f1960u: goto label_3f1960;
        case 0x3f1964u: goto label_3f1964;
        case 0x3f1968u: goto label_3f1968;
        case 0x3f196cu: goto label_3f196c;
        case 0x3f1970u: goto label_3f1970;
        case 0x3f1974u: goto label_3f1974;
        case 0x3f1978u: goto label_3f1978;
        case 0x3f197cu: goto label_3f197c;
        case 0x3f1980u: goto label_3f1980;
        case 0x3f1984u: goto label_3f1984;
        case 0x3f1988u: goto label_3f1988;
        case 0x3f198cu: goto label_3f198c;
        case 0x3f1990u: goto label_3f1990;
        case 0x3f1994u: goto label_3f1994;
        case 0x3f1998u: goto label_3f1998;
        case 0x3f199cu: goto label_3f199c;
        case 0x3f19a0u: goto label_3f19a0;
        case 0x3f19a4u: goto label_3f19a4;
        case 0x3f19a8u: goto label_3f19a8;
        case 0x3f19acu: goto label_3f19ac;
        case 0x3f19b0u: goto label_3f19b0;
        case 0x3f19b4u: goto label_3f19b4;
        case 0x3f19b8u: goto label_3f19b8;
        case 0x3f19bcu: goto label_3f19bc;
        case 0x3f19c0u: goto label_3f19c0;
        case 0x3f19c4u: goto label_3f19c4;
        case 0x3f19c8u: goto label_3f19c8;
        case 0x3f19ccu: goto label_3f19cc;
        case 0x3f19d0u: goto label_3f19d0;
        case 0x3f19d4u: goto label_3f19d4;
        case 0x3f19d8u: goto label_3f19d8;
        case 0x3f19dcu: goto label_3f19dc;
        case 0x3f19e0u: goto label_3f19e0;
        case 0x3f19e4u: goto label_3f19e4;
        case 0x3f19e8u: goto label_3f19e8;
        case 0x3f19ecu: goto label_3f19ec;
        case 0x3f19f0u: goto label_3f19f0;
        case 0x3f19f4u: goto label_3f19f4;
        case 0x3f19f8u: goto label_3f19f8;
        case 0x3f19fcu: goto label_3f19fc;
        case 0x3f1a00u: goto label_3f1a00;
        case 0x3f1a04u: goto label_3f1a04;
        case 0x3f1a08u: goto label_3f1a08;
        case 0x3f1a0cu: goto label_3f1a0c;
        case 0x3f1a10u: goto label_3f1a10;
        case 0x3f1a14u: goto label_3f1a14;
        case 0x3f1a18u: goto label_3f1a18;
        case 0x3f1a1cu: goto label_3f1a1c;
        case 0x3f1a20u: goto label_3f1a20;
        case 0x3f1a24u: goto label_3f1a24;
        case 0x3f1a28u: goto label_3f1a28;
        case 0x3f1a2cu: goto label_3f1a2c;
        case 0x3f1a30u: goto label_3f1a30;
        case 0x3f1a34u: goto label_3f1a34;
        case 0x3f1a38u: goto label_3f1a38;
        case 0x3f1a3cu: goto label_3f1a3c;
        case 0x3f1a40u: goto label_3f1a40;
        case 0x3f1a44u: goto label_3f1a44;
        case 0x3f1a48u: goto label_3f1a48;
        case 0x3f1a4cu: goto label_3f1a4c;
        case 0x3f1a50u: goto label_3f1a50;
        case 0x3f1a54u: goto label_3f1a54;
        case 0x3f1a58u: goto label_3f1a58;
        case 0x3f1a5cu: goto label_3f1a5c;
        case 0x3f1a60u: goto label_3f1a60;
        case 0x3f1a64u: goto label_3f1a64;
        case 0x3f1a68u: goto label_3f1a68;
        case 0x3f1a6cu: goto label_3f1a6c;
        case 0x3f1a70u: goto label_3f1a70;
        case 0x3f1a74u: goto label_3f1a74;
        case 0x3f1a78u: goto label_3f1a78;
        case 0x3f1a7cu: goto label_3f1a7c;
        case 0x3f1a80u: goto label_3f1a80;
        case 0x3f1a84u: goto label_3f1a84;
        case 0x3f1a88u: goto label_3f1a88;
        case 0x3f1a8cu: goto label_3f1a8c;
        case 0x3f1a90u: goto label_3f1a90;
        case 0x3f1a94u: goto label_3f1a94;
        case 0x3f1a98u: goto label_3f1a98;
        case 0x3f1a9cu: goto label_3f1a9c;
        case 0x3f1aa0u: goto label_3f1aa0;
        case 0x3f1aa4u: goto label_3f1aa4;
        case 0x3f1aa8u: goto label_3f1aa8;
        case 0x3f1aacu: goto label_3f1aac;
        case 0x3f1ab0u: goto label_3f1ab0;
        case 0x3f1ab4u: goto label_3f1ab4;
        case 0x3f1ab8u: goto label_3f1ab8;
        case 0x3f1abcu: goto label_3f1abc;
        default: break;
    }

    ctx->pc = 0x3f1670u;

label_3f1670:
    // 0x3f1670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f1674:
    // 0x3f1674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f1678:
    // 0x3f1678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f167c:
    // 0x3f167c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f1680:
    // 0x3f1680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f1680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1684:
    // 0x3f1684: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3f1688:
    if (ctx->pc == 0x3F1688u) {
        ctx->pc = 0x3F1688u;
            // 0x3f1688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F168Cu;
        goto label_3f168c;
    }
    ctx->pc = 0x3F1684u;
    {
        const bool branch_taken_0x3f1684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1684u;
            // 0x3f1688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1684) {
            ctx->pc = 0x3F17B8u;
            goto label_3f17b8;
        }
    }
    ctx->pc = 0x3F168Cu;
label_3f168c:
    // 0x3f168c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f1690:
    // 0x3f1690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f1694:
    // 0x3f1694: 0x2463a100  addiu       $v1, $v1, -0x5F00
    ctx->pc = 0x3f1694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942976));
label_3f1698:
    // 0x3f1698: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3f1698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_3f169c:
    // 0x3f169c: 0x2442a138  addiu       $v0, $v0, -0x5EC8
    ctx->pc = 0x3f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943032));
label_3f16a0:
    // 0x3f16a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f16a4:
    // 0x3f16a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3f16a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3f16a8:
    // 0x3f16a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3f16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3f16ac:
    // 0x3f16ac: 0xc0407c0  jal         func_101F00
label_3f16b0:
    if (ctx->pc == 0x3F16B0u) {
        ctx->pc = 0x3F16B0u;
            // 0x3f16b0: 0x24a517d0  addiu       $a1, $a1, 0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
        ctx->pc = 0x3F16B4u;
        goto label_3f16b4;
    }
    ctx->pc = 0x3F16ACu;
    SET_GPR_U32(ctx, 31, 0x3F16B4u);
    ctx->pc = 0x3F16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F16ACu;
            // 0x3f16b0: 0x24a517d0  addiu       $a1, $a1, 0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16B4u; }
        if (ctx->pc != 0x3F16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16B4u; }
        if (ctx->pc != 0x3F16B4u) { return; }
    }
    ctx->pc = 0x3F16B4u;
label_3f16b4:
    // 0x3f16b4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3f16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3f16b8:
    // 0x3f16b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3f16bc:
    if (ctx->pc == 0x3F16BCu) {
        ctx->pc = 0x3F16BCu;
            // 0x3f16bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3F16C0u;
        goto label_3f16c0;
    }
    ctx->pc = 0x3F16B8u;
    {
        const bool branch_taken_0x3f16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16b8) {
            ctx->pc = 0x3F16BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F16B8u;
            // 0x3f16bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F16CCu;
            goto label_3f16cc;
        }
    }
    ctx->pc = 0x3F16C0u;
label_3f16c0:
    // 0x3f16c0: 0xc07507c  jal         func_1D41F0
label_3f16c4:
    if (ctx->pc == 0x3F16C4u) {
        ctx->pc = 0x3F16C4u;
            // 0x3f16c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3F16C8u;
        goto label_3f16c8;
    }
    ctx->pc = 0x3F16C0u;
    SET_GPR_U32(ctx, 31, 0x3F16C8u);
    ctx->pc = 0x3F16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F16C0u;
            // 0x3f16c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16C8u; }
        if (ctx->pc != 0x3F16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16C8u; }
        if (ctx->pc != 0x3F16C8u) { return; }
    }
    ctx->pc = 0x3F16C8u;
label_3f16c8:
    // 0x3f16c8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3f16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3f16cc:
    // 0x3f16cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3f16d0:
    if (ctx->pc == 0x3F16D0u) {
        ctx->pc = 0x3F16D0u;
            // 0x3f16d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3F16D4u;
        goto label_3f16d4;
    }
    ctx->pc = 0x3F16CCu;
    {
        const bool branch_taken_0x3f16cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16cc) {
            ctx->pc = 0x3F16D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F16CCu;
            // 0x3f16d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F16FCu;
            goto label_3f16fc;
        }
    }
    ctx->pc = 0x3F16D4u;
label_3f16d4:
    // 0x3f16d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3f16d8:
    if (ctx->pc == 0x3F16D8u) {
        ctx->pc = 0x3F16DCu;
        goto label_3f16dc;
    }
    ctx->pc = 0x3F16D4u;
    {
        const bool branch_taken_0x3f16d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16d4) {
            ctx->pc = 0x3F16F8u;
            goto label_3f16f8;
        }
    }
    ctx->pc = 0x3F16DCu;
label_3f16dc:
    // 0x3f16dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f16e0:
    if (ctx->pc == 0x3F16E0u) {
        ctx->pc = 0x3F16E4u;
        goto label_3f16e4;
    }
    ctx->pc = 0x3F16DCu;
    {
        const bool branch_taken_0x3f16dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16dc) {
            ctx->pc = 0x3F16F8u;
            goto label_3f16f8;
        }
    }
    ctx->pc = 0x3F16E4u;
label_3f16e4:
    // 0x3f16e4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3f16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3f16e8:
    // 0x3f16e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3f16ec:
    if (ctx->pc == 0x3F16ECu) {
        ctx->pc = 0x3F16F0u;
        goto label_3f16f0;
    }
    ctx->pc = 0x3F16E8u;
    {
        const bool branch_taken_0x3f16e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16e8) {
            ctx->pc = 0x3F16F8u;
            goto label_3f16f8;
        }
    }
    ctx->pc = 0x3F16F0u;
label_3f16f0:
    // 0x3f16f0: 0xc0400a8  jal         func_1002A0
label_3f16f4:
    if (ctx->pc == 0x3F16F4u) {
        ctx->pc = 0x3F16F8u;
        goto label_3f16f8;
    }
    ctx->pc = 0x3F16F0u;
    SET_GPR_U32(ctx, 31, 0x3F16F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16F8u; }
        if (ctx->pc != 0x3F16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F16F8u; }
        if (ctx->pc != 0x3F16F8u) { return; }
    }
    ctx->pc = 0x3F16F8u;
label_3f16f8:
    // 0x3f16f8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3f16fc:
    // 0x3f16fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3f1700:
    if (ctx->pc == 0x3F1700u) {
        ctx->pc = 0x3F1700u;
            // 0x3f1700: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3F1704u;
        goto label_3f1704;
    }
    ctx->pc = 0x3F16FCu;
    {
        const bool branch_taken_0x3f16fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f16fc) {
            ctx->pc = 0x3F1700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F16FCu;
            // 0x3f1700: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F172Cu;
            goto label_3f172c;
        }
    }
    ctx->pc = 0x3F1704u;
label_3f1704:
    // 0x3f1704: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3f1708:
    if (ctx->pc == 0x3F1708u) {
        ctx->pc = 0x3F170Cu;
        goto label_3f170c;
    }
    ctx->pc = 0x3F1704u;
    {
        const bool branch_taken_0x3f1704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1704) {
            ctx->pc = 0x3F1728u;
            goto label_3f1728;
        }
    }
    ctx->pc = 0x3F170Cu;
label_3f170c:
    // 0x3f170c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f1710:
    if (ctx->pc == 0x3F1710u) {
        ctx->pc = 0x3F1714u;
        goto label_3f1714;
    }
    ctx->pc = 0x3F170Cu;
    {
        const bool branch_taken_0x3f170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f170c) {
            ctx->pc = 0x3F1728u;
            goto label_3f1728;
        }
    }
    ctx->pc = 0x3F1714u;
label_3f1714:
    // 0x3f1714: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3f1714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3f1718:
    // 0x3f1718: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3f171c:
    if (ctx->pc == 0x3F171Cu) {
        ctx->pc = 0x3F1720u;
        goto label_3f1720;
    }
    ctx->pc = 0x3F1718u;
    {
        const bool branch_taken_0x3f1718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1718) {
            ctx->pc = 0x3F1728u;
            goto label_3f1728;
        }
    }
    ctx->pc = 0x3F1720u;
label_3f1720:
    // 0x3f1720: 0xc0400a8  jal         func_1002A0
label_3f1724:
    if (ctx->pc == 0x3F1724u) {
        ctx->pc = 0x3F1728u;
        goto label_3f1728;
    }
    ctx->pc = 0x3F1720u;
    SET_GPR_U32(ctx, 31, 0x3F1728u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1728u; }
        if (ctx->pc != 0x3F1728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1728u; }
        if (ctx->pc != 0x3F1728u) { return; }
    }
    ctx->pc = 0x3F1728u;
label_3f1728:
    // 0x3f1728: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3f1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3f172c:
    // 0x3f172c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f1730:
    if (ctx->pc == 0x3F1730u) {
        ctx->pc = 0x3F1734u;
        goto label_3f1734;
    }
    ctx->pc = 0x3F172Cu;
    {
        const bool branch_taken_0x3f172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f172c) {
            ctx->pc = 0x3F1748u;
            goto label_3f1748;
        }
    }
    ctx->pc = 0x3F1734u;
label_3f1734:
    // 0x3f1734: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f1734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f1738:
    // 0x3f1738: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f1738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f173c:
    // 0x3f173c: 0x2463a0e8  addiu       $v1, $v1, -0x5F18
    ctx->pc = 0x3f173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942952));
label_3f1740:
    // 0x3f1740: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3f1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3f1744:
    // 0x3f1744: 0xac406f10  sw          $zero, 0x6F10($v0)
    ctx->pc = 0x3f1744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28432), GPR_U32(ctx, 0));
label_3f1748:
    // 0x3f1748: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3f174c:
    if (ctx->pc == 0x3F174Cu) {
        ctx->pc = 0x3F174Cu;
            // 0x3f174c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3F1750u;
        goto label_3f1750;
    }
    ctx->pc = 0x3F1748u;
    {
        const bool branch_taken_0x3f1748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1748) {
            ctx->pc = 0x3F174Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1748u;
            // 0x3f174c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F17A4u;
            goto label_3f17a4;
        }
    }
    ctx->pc = 0x3F1750u;
label_3f1750:
    // 0x3f1750: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f1750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f1754:
    // 0x3f1754: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3f1754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3f1758:
    // 0x3f1758: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f1758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f175c:
    // 0x3f175c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3f175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3f1760:
    // 0x3f1760: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f1764:
    if (ctx->pc == 0x3F1764u) {
        ctx->pc = 0x3F1764u;
            // 0x3f1764: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3F1768u;
        goto label_3f1768;
    }
    ctx->pc = 0x3F1760u;
    {
        const bool branch_taken_0x3f1760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1760) {
            ctx->pc = 0x3F1764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1760u;
            // 0x3f1764: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F177Cu;
            goto label_3f177c;
        }
    }
    ctx->pc = 0x3F1768u;
label_3f1768:
    // 0x3f1768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f1768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f176c:
    // 0x3f176c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f176cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f1770:
    // 0x3f1770: 0x320f809  jalr        $t9
label_3f1774:
    if (ctx->pc == 0x3F1774u) {
        ctx->pc = 0x3F1774u;
            // 0x3f1774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F1778u;
        goto label_3f1778;
    }
    ctx->pc = 0x3F1770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1778u);
        ctx->pc = 0x3F1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1770u;
            // 0x3f1774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1778u; }
            if (ctx->pc != 0x3F1778u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1778u;
label_3f1778:
    // 0x3f1778: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3f1778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3f177c:
    // 0x3f177c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f1780:
    if (ctx->pc == 0x3F1780u) {
        ctx->pc = 0x3F1780u;
            // 0x3f1780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1784u;
        goto label_3f1784;
    }
    ctx->pc = 0x3F177Cu;
    {
        const bool branch_taken_0x3f177c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f177c) {
            ctx->pc = 0x3F1780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F177Cu;
            // 0x3f1780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1798u;
            goto label_3f1798;
        }
    }
    ctx->pc = 0x3F1784u;
label_3f1784:
    // 0x3f1784: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f1784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1788:
    // 0x3f1788: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f1788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f178c:
    // 0x3f178c: 0x320f809  jalr        $t9
label_3f1790:
    if (ctx->pc == 0x3F1790u) {
        ctx->pc = 0x3F1790u;
            // 0x3f1790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F1794u;
        goto label_3f1794;
    }
    ctx->pc = 0x3F178Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1794u);
        ctx->pc = 0x3F1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F178Cu;
            // 0x3f1790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1794u; }
            if (ctx->pc != 0x3F1794u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1794u;
label_3f1794:
    // 0x3f1794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1798:
    // 0x3f1798: 0xc075bf8  jal         func_1D6FE0
label_3f179c:
    if (ctx->pc == 0x3F179Cu) {
        ctx->pc = 0x3F179Cu;
            // 0x3f179c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F17A0u;
        goto label_3f17a0;
    }
    ctx->pc = 0x3F1798u;
    SET_GPR_U32(ctx, 31, 0x3F17A0u);
    ctx->pc = 0x3F179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1798u;
            // 0x3f179c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F17A0u; }
        if (ctx->pc != 0x3F17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F17A0u; }
        if (ctx->pc != 0x3F17A0u) { return; }
    }
    ctx->pc = 0x3F17A0u;
label_3f17a0:
    // 0x3f17a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f17a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f17a4:
    // 0x3f17a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f17a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f17a8:
    // 0x3f17a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f17ac:
    if (ctx->pc == 0x3F17ACu) {
        ctx->pc = 0x3F17ACu;
            // 0x3f17ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F17B0u;
        goto label_3f17b0;
    }
    ctx->pc = 0x3F17A8u;
    {
        const bool branch_taken_0x3f17a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f17a8) {
            ctx->pc = 0x3F17ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F17A8u;
            // 0x3f17ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F17BCu;
            goto label_3f17bc;
        }
    }
    ctx->pc = 0x3F17B0u;
label_3f17b0:
    // 0x3f17b0: 0xc0400a8  jal         func_1002A0
label_3f17b4:
    if (ctx->pc == 0x3F17B4u) {
        ctx->pc = 0x3F17B4u;
            // 0x3f17b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F17B8u;
        goto label_3f17b8;
    }
    ctx->pc = 0x3F17B0u;
    SET_GPR_U32(ctx, 31, 0x3F17B8u);
    ctx->pc = 0x3F17B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F17B0u;
            // 0x3f17b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F17B8u; }
        if (ctx->pc != 0x3F17B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F17B8u; }
        if (ctx->pc != 0x3F17B8u) { return; }
    }
    ctx->pc = 0x3F17B8u;
label_3f17b8:
    // 0x3f17b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f17b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f17bc:
    // 0x3f17bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f17bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f17c0:
    // 0x3f17c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f17c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f17c4:
    // 0x3f17c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f17c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f17c8:
    // 0x3f17c8: 0x3e00008  jr          $ra
label_3f17cc:
    if (ctx->pc == 0x3F17CCu) {
        ctx->pc = 0x3F17CCu;
            // 0x3f17cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F17D0u;
        goto label_3f17d0;
    }
    ctx->pc = 0x3F17C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F17CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F17C8u;
            // 0x3f17cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F17D0u;
label_3f17d0:
    // 0x3f17d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f17d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f17d4:
    // 0x3f17d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f17d8:
    // 0x3f17d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f17dc:
    // 0x3f17dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f17e0:
    // 0x3f17e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f17e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f17e4:
    // 0x3f17e4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3f17e8:
    if (ctx->pc == 0x3F17E8u) {
        ctx->pc = 0x3F17E8u;
            // 0x3f17e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F17ECu;
        goto label_3f17ec;
    }
    ctx->pc = 0x3F17E4u;
    {
        const bool branch_taken_0x3f17e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F17E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F17E4u;
            // 0x3f17e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f17e4) {
            ctx->pc = 0x3F1844u;
            goto label_3f1844;
        }
    }
    ctx->pc = 0x3F17ECu;
label_3f17ec:
    // 0x3f17ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f17f0:
    // 0x3f17f0: 0x2442a1a0  addiu       $v0, $v0, -0x5E60
    ctx->pc = 0x3f17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943136));
label_3f17f4:
    // 0x3f17f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f17f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f17f8:
    // 0x3f17f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f17f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f17fc:
    // 0x3f17fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3f17fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3f1800:
    // 0x3f1800: 0x320f809  jalr        $t9
label_3f1804:
    if (ctx->pc == 0x3F1804u) {
        ctx->pc = 0x3F1808u;
        goto label_3f1808;
    }
    ctx->pc = 0x3F1800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1808u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1808u; }
            if (ctx->pc != 0x3F1808u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1808u;
label_3f1808:
    // 0x3f1808: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3f180c:
    if (ctx->pc == 0x3F180Cu) {
        ctx->pc = 0x3F180Cu;
            // 0x3f180c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3F1810u;
        goto label_3f1810;
    }
    ctx->pc = 0x3F1808u;
    {
        const bool branch_taken_0x3f1808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1808) {
            ctx->pc = 0x3F180Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1808u;
            // 0x3f180c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1830u;
            goto label_3f1830;
        }
    }
    ctx->pc = 0x3F1810u;
label_3f1810:
    // 0x3f1810: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f1810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f1814:
    // 0x3f1814: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3f1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3f1818:
    // 0x3f1818: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3f181c:
    if (ctx->pc == 0x3F181Cu) {
        ctx->pc = 0x3F181Cu;
            // 0x3f181c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F1820u;
        goto label_3f1820;
    }
    ctx->pc = 0x3F1818u;
    {
        const bool branch_taken_0x3f1818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1818u;
            // 0x3f181c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1818) {
            ctx->pc = 0x3F182Cu;
            goto label_3f182c;
        }
    }
    ctx->pc = 0x3F1820u;
label_3f1820:
    // 0x3f1820: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f1820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f1824:
    // 0x3f1824: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3f1824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3f1828:
    // 0x3f1828: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f1828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f182c:
    // 0x3f182c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f1830:
    // 0x3f1830: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f1830u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f1834:
    // 0x3f1834: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f1838:
    if (ctx->pc == 0x3F1838u) {
        ctx->pc = 0x3F1838u;
            // 0x3f1838: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F183Cu;
        goto label_3f183c;
    }
    ctx->pc = 0x3F1834u;
    {
        const bool branch_taken_0x3f1834 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f1834) {
            ctx->pc = 0x3F1838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1834u;
            // 0x3f1838: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1848u;
            goto label_3f1848;
        }
    }
    ctx->pc = 0x3F183Cu;
label_3f183c:
    // 0x3f183c: 0xc0400a8  jal         func_1002A0
label_3f1840:
    if (ctx->pc == 0x3F1840u) {
        ctx->pc = 0x3F1840u;
            // 0x3f1840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1844u;
        goto label_3f1844;
    }
    ctx->pc = 0x3F183Cu;
    SET_GPR_U32(ctx, 31, 0x3F1844u);
    ctx->pc = 0x3F1840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F183Cu;
            // 0x3f1840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1844u; }
        if (ctx->pc != 0x3F1844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1844u; }
        if (ctx->pc != 0x3F1844u) { return; }
    }
    ctx->pc = 0x3F1844u;
label_3f1844:
    // 0x3f1844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f1844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1848:
    // 0x3f1848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f1848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f184c:
    // 0x3f184c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f184cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1850:
    // 0x3f1850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1854:
    // 0x3f1854: 0x3e00008  jr          $ra
label_3f1858:
    if (ctx->pc == 0x3F1858u) {
        ctx->pc = 0x3F1858u;
            // 0x3f1858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F185Cu;
        goto label_3f185c;
    }
    ctx->pc = 0x3F1854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1854u;
            // 0x3f1858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F185Cu;
label_3f185c:
    // 0x3f185c: 0x0  nop
    ctx->pc = 0x3f185cu;
    // NOP
label_3f1860:
    // 0x3f1860: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3f1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3f1864:
    // 0x3f1864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f1864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f1868:
    // 0x3f1868: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3f1868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3f186c:
    // 0x3f186c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3f186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3f1870:
    // 0x3f1870: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3f1870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3f1874:
    // 0x3f1874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3f1874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3f1878:
    // 0x3f1878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f1878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3f187c:
    // 0x3f187c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3f1880:
    // 0x3f1880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f1880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3f1884:
    // 0x3f1884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f1888:
    // 0x3f1888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f1888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f188c:
    // 0x3f188c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f1890:
    // 0x3f1890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f1890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f1894:
    // 0x3f1894: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3f1894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3f1898:
    // 0x3f1898: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3f1898u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3f189c:
    // 0x3f189c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f18a0:
    // 0x3f18a0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3f18a4:
    if (ctx->pc == 0x3F18A4u) {
        ctx->pc = 0x3F18A4u;
            // 0x3f18a4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F18A8u;
        goto label_3f18a8;
    }
    ctx->pc = 0x3F18A0u;
    {
        const bool branch_taken_0x3f18a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F18A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F18A0u;
            // 0x3f18a4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18a0) {
            ctx->pc = 0x3F18E4u;
            goto label_3f18e4;
        }
    }
    ctx->pc = 0x3F18A8u;
label_3f18a8:
    // 0x3f18a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f18ac:
    // 0x3f18ac: 0x50a30078  beql        $a1, $v1, . + 4 + (0x78 << 2)
label_3f18b0:
    if (ctx->pc == 0x3F18B0u) {
        ctx->pc = 0x3F18B0u;
            // 0x3f18b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3F18B4u;
        goto label_3f18b4;
    }
    ctx->pc = 0x3F18ACu;
    {
        const bool branch_taken_0x3f18ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f18ac) {
            ctx->pc = 0x3F18B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F18ACu;
            // 0x3f18b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1A90u;
            goto label_3f1a90;
        }
    }
    ctx->pc = 0x3F18B4u;
label_3f18b4:
    // 0x3f18b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f18b8:
    // 0x3f18b8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3f18bc:
    if (ctx->pc == 0x3F18BCu) {
        ctx->pc = 0x3F18BCu;
            // 0x3f18bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F18C0u;
        goto label_3f18c0;
    }
    ctx->pc = 0x3F18B8u;
    {
        const bool branch_taken_0x3f18b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f18b8) {
            ctx->pc = 0x3F18BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F18B8u;
            // 0x3f18bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F18C8u;
            goto label_3f18c8;
        }
    }
    ctx->pc = 0x3F18C0u;
label_3f18c0:
    // 0x3f18c0: 0x10000072  b           . + 4 + (0x72 << 2)
label_3f18c4:
    if (ctx->pc == 0x3F18C4u) {
        ctx->pc = 0x3F18C8u;
        goto label_3f18c8;
    }
    ctx->pc = 0x3F18C0u;
    {
        const bool branch_taken_0x3f18c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f18c0) {
            ctx->pc = 0x3F1A8Cu;
            goto label_3f1a8c;
        }
    }
    ctx->pc = 0x3F18C8u;
label_3f18c8:
    // 0x3f18c8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3f18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3f18cc:
    // 0x3f18cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3f18ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3f18d0:
    // 0x3f18d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f18d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3f18d4:
    // 0x3f18d4: 0x320f809  jalr        $t9
label_3f18d8:
    if (ctx->pc == 0x3F18D8u) {
        ctx->pc = 0x3F18D8u;
            // 0x3f18d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3F18DCu;
        goto label_3f18dc;
    }
    ctx->pc = 0x3F18D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F18DCu);
        ctx->pc = 0x3F18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F18D4u;
            // 0x3f18d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F18DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F18DCu; }
            if (ctx->pc != 0x3F18DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3F18DCu;
label_3f18dc:
    // 0x3f18dc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3f18e0:
    if (ctx->pc == 0x3F18E0u) {
        ctx->pc = 0x3F18E4u;
        goto label_3f18e4;
    }
    ctx->pc = 0x3F18DCu;
    {
        const bool branch_taken_0x3f18dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f18dc) {
            ctx->pc = 0x3F1A8Cu;
            goto label_3f1a8c;
        }
    }
    ctx->pc = 0x3F18E4u;
label_3f18e4:
    // 0x3f18e4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x3f18e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_3f18e8:
    // 0x3f18e8: 0x12e00068  beqz        $s7, . + 4 + (0x68 << 2)
label_3f18ec:
    if (ctx->pc == 0x3F18ECu) {
        ctx->pc = 0x3F18F0u;
        goto label_3f18f0;
    }
    ctx->pc = 0x3F18E8u;
    {
        const bool branch_taken_0x3f18e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f18e8) {
            ctx->pc = 0x3F1A8Cu;
            goto label_3f1a8c;
        }
    }
    ctx->pc = 0x3F18F0u;
label_3f18f0:
    // 0x3f18f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3f18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3f18f4:
    // 0x3f18f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f18f8:
    // 0x3f18f8: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3f18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3f18fc:
    // 0x3f18fc: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x3f18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3f1900:
    // 0x3f1900: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3f1900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3f1904:
    // 0x3f1904: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1908:
    // 0x3f1908: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3f1908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f190c:
    // 0x3f190c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f1910:
    // 0x3f1910: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3f1910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f1914:
    // 0x3f1914: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3f1914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3f1918:
    // 0x3f1918: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3f1918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f191c:
    // 0x3f191c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3f191cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3f1920:
    // 0x3f1920: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x3f1920u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3f1924:
    // 0x3f1924: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3f1924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3f1928:
    // 0x3f1928: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x3f1928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_3f192c:
    // 0x3f192c: 0xc04e738  jal         func_139CE0
label_3f1930:
    if (ctx->pc == 0x3F1930u) {
        ctx->pc = 0x3F1930u;
            // 0x3f1930: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x3F1934u;
        goto label_3f1934;
    }
    ctx->pc = 0x3F192Cu;
    SET_GPR_U32(ctx, 31, 0x3F1934u);
    ctx->pc = 0x3F1930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F192Cu;
            // 0x3f1930: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1934u; }
        if (ctx->pc != 0x3F1934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1934u; }
        if (ctx->pc != 0x3F1934u) { return; }
    }
    ctx->pc = 0x3F1934u;
label_3f1934:
    // 0x3f1934: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3f1938:
    // 0x3f1938: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f1938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f193c:
    // 0x3f193c: 0xc454a330  lwc1        $f20, -0x5CD0($v0)
    ctx->pc = 0x3f193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f1940:
    // 0x3f1940: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1944:
    // 0x3f1944: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x3f1944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_3f1948:
    // 0x3f1948: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x3f1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3f194c:
    // 0x3f194c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x3f194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_3f1950:
    // 0x3f1950: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3f1950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3f1954:
    // 0x3f1954: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3f1954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3f1958:
    // 0x3f1958: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3f1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3f195c:
    // 0x3f195c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3f195cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f1960:
    // 0x3f1960: 0xc0d1c14  jal         func_347050
label_3f1964:
    if (ctx->pc == 0x3F1964u) {
        ctx->pc = 0x3F1964u;
            // 0x3f1964: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1968u;
        goto label_3f1968;
    }
    ctx->pc = 0x3F1960u;
    SET_GPR_U32(ctx, 31, 0x3F1968u);
    ctx->pc = 0x3F1964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1960u;
            // 0x3f1964: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1968u; }
        if (ctx->pc != 0x3F1968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1968u; }
        if (ctx->pc != 0x3F1968u) { return; }
    }
    ctx->pc = 0x3F1968u;
label_3f1968:
    // 0x3f1968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f1968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f196c:
    // 0x3f196c: 0xc04f278  jal         func_13C9E0
label_3f1970:
    if (ctx->pc == 0x3F1970u) {
        ctx->pc = 0x3F1970u;
            // 0x3f1970: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F1974u;
        goto label_3f1974;
    }
    ctx->pc = 0x3F196Cu;
    SET_GPR_U32(ctx, 31, 0x3F1974u);
    ctx->pc = 0x3F1970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F196Cu;
            // 0x3f1970: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1974u; }
        if (ctx->pc != 0x3F1974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1974u; }
        if (ctx->pc != 0x3F1974u) { return; }
    }
    ctx->pc = 0x3F1974u;
label_3f1974:
    // 0x3f1974: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3f1974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3f1978:
    // 0x3f1978: 0xc04cce8  jal         func_1333A0
label_3f197c:
    if (ctx->pc == 0x3F197Cu) {
        ctx->pc = 0x3F197Cu;
            // 0x3f197c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F1980u;
        goto label_3f1980;
    }
    ctx->pc = 0x3F1978u;
    SET_GPR_U32(ctx, 31, 0x3F1980u);
    ctx->pc = 0x3F197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1978u;
            // 0x3f197c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1980u; }
        if (ctx->pc != 0x3F1980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1980u; }
        if (ctx->pc != 0x3F1980u) { return; }
    }
    ctx->pc = 0x3F1980u;
label_3f1980:
    // 0x3f1980: 0xc0d1c10  jal         func_347040
label_3f1984:
    if (ctx->pc == 0x3F1984u) {
        ctx->pc = 0x3F1984u;
            // 0x3f1984: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1988u;
        goto label_3f1988;
    }
    ctx->pc = 0x3F1980u;
    SET_GPR_U32(ctx, 31, 0x3F1988u);
    ctx->pc = 0x3F1984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1980u;
            // 0x3f1984: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1988u; }
        if (ctx->pc != 0x3F1988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1988u; }
        if (ctx->pc != 0x3F1988u) { return; }
    }
    ctx->pc = 0x3F1988u;
label_3f1988:
    // 0x3f1988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f1988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f198c:
    // 0x3f198c: 0xc04ce80  jal         func_133A00
label_3f1990:
    if (ctx->pc == 0x3F1990u) {
        ctx->pc = 0x3F1990u;
            // 0x3f1990: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F1994u;
        goto label_3f1994;
    }
    ctx->pc = 0x3F198Cu;
    SET_GPR_U32(ctx, 31, 0x3F1994u);
    ctx->pc = 0x3F1990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F198Cu;
            // 0x3f1990: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1994u; }
        if (ctx->pc != 0x3F1994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1994u; }
        if (ctx->pc != 0x3F1994u) { return; }
    }
    ctx->pc = 0x3F1994u;
label_3f1994:
    // 0x3f1994: 0xc0d4108  jal         func_350420
label_3f1998:
    if (ctx->pc == 0x3F1998u) {
        ctx->pc = 0x3F199Cu;
        goto label_3f199c;
    }
    ctx->pc = 0x3F1994u;
    SET_GPR_U32(ctx, 31, 0x3F199Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F199Cu; }
        if (ctx->pc != 0x3F199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F199Cu; }
        if (ctx->pc != 0x3F199Cu) { return; }
    }
    ctx->pc = 0x3F199Cu;
label_3f199c:
    // 0x3f199c: 0xc0b36b4  jal         func_2CDAD0
label_3f19a0:
    if (ctx->pc == 0x3F19A0u) {
        ctx->pc = 0x3F19A0u;
            // 0x3f19a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F19A4u;
        goto label_3f19a4;
    }
    ctx->pc = 0x3F199Cu;
    SET_GPR_U32(ctx, 31, 0x3F19A4u);
    ctx->pc = 0x3F19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F199Cu;
            // 0x3f19a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19A4u; }
        if (ctx->pc != 0x3F19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19A4u; }
        if (ctx->pc != 0x3F19A4u) { return; }
    }
    ctx->pc = 0x3F19A4u;
label_3f19a4:
    // 0x3f19a4: 0xc0b9c64  jal         func_2E7190
label_3f19a8:
    if (ctx->pc == 0x3F19A8u) {
        ctx->pc = 0x3F19A8u;
            // 0x3f19a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F19ACu;
        goto label_3f19ac;
    }
    ctx->pc = 0x3F19A4u;
    SET_GPR_U32(ctx, 31, 0x3F19ACu);
    ctx->pc = 0x3F19A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F19A4u;
            // 0x3f19a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19ACu; }
        if (ctx->pc != 0x3F19ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19ACu; }
        if (ctx->pc != 0x3F19ACu) { return; }
    }
    ctx->pc = 0x3F19ACu;
label_3f19ac:
    // 0x3f19ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f19acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f19b0:
    // 0x3f19b0: 0xc0d4104  jal         func_350410
label_3f19b4:
    if (ctx->pc == 0x3F19B4u) {
        ctx->pc = 0x3F19B4u;
            // 0x3f19b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F19B8u;
        goto label_3f19b8;
    }
    ctx->pc = 0x3F19B0u;
    SET_GPR_U32(ctx, 31, 0x3F19B8u);
    ctx->pc = 0x3F19B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F19B0u;
            // 0x3f19b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19B8u; }
        if (ctx->pc != 0x3F19B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19B8u; }
        if (ctx->pc != 0x3F19B8u) { return; }
    }
    ctx->pc = 0x3F19B8u;
label_3f19b8:
    // 0x3f19b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3f19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f19bc:
    // 0x3f19bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f19bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f19c0:
    // 0x3f19c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f19c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f19c4:
    // 0x3f19c4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x3f19c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f19c8:
    // 0x3f19c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3f19c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f19cc:
    // 0x3f19cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f19ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f19d0:
    // 0x3f19d0: 0xc0d40ac  jal         func_3502B0
label_3f19d4:
    if (ctx->pc == 0x3F19D4u) {
        ctx->pc = 0x3F19D4u;
            // 0x3f19d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3F19D8u;
        goto label_3f19d8;
    }
    ctx->pc = 0x3F19D0u;
    SET_GPR_U32(ctx, 31, 0x3F19D8u);
    ctx->pc = 0x3F19D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F19D0u;
            // 0x3f19d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19D8u; }
        if (ctx->pc != 0x3F19D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19D8u; }
        if (ctx->pc != 0x3F19D8u) { return; }
    }
    ctx->pc = 0x3F19D8u;
label_3f19d8:
    // 0x3f19d8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3f19d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f19dc:
    // 0x3f19dc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_3f19e0:
    if (ctx->pc == 0x3F19E0u) {
        ctx->pc = 0x3F19E0u;
            // 0x3f19e0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3F19E4u;
        goto label_3f19e4;
    }
    ctx->pc = 0x3F19DCu;
    {
        const bool branch_taken_0x3f19dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F19E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F19DCu;
            // 0x3f19e0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f19dc) {
            ctx->pc = 0x3F1A50u;
            goto label_3f1a50;
        }
    }
    ctx->pc = 0x3F19E4u;
label_3f19e4:
    // 0x3f19e4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3f19e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f19e8:
    // 0x3f19e8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3f19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3f19ec:
    // 0x3f19ec: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x3f19ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_3f19f0:
    // 0x3f19f0: 0xc0fc6b0  jal         func_3F1AC0
label_3f19f4:
    if (ctx->pc == 0x3F19F4u) {
        ctx->pc = 0x3F19F4u;
            // 0x3f19f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F19F8u;
        goto label_3f19f8;
    }
    ctx->pc = 0x3F19F0u;
    SET_GPR_U32(ctx, 31, 0x3F19F8u);
    ctx->pc = 0x3F19F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F19F0u;
            // 0x3f19f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1AC0u;
    if (runtime->hasFunction(0x3F1AC0u)) {
        auto targetFn = runtime->lookupFunction(0x3F1AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19F8u; }
        if (ctx->pc != 0x3F19F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1AC0_0x3f1ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F19F8u; }
        if (ctx->pc != 0x3F19F8u) { return; }
    }
    ctx->pc = 0x3F19F8u;
label_3f19f8:
    // 0x3f19f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f19fc:
    // 0x3f19fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3f19fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3f1a00:
    // 0x3f1a00: 0xc04cd60  jal         func_133580
label_3f1a04:
    if (ctx->pc == 0x3F1A04u) {
        ctx->pc = 0x3F1A04u;
            // 0x3f1a04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A08u;
        goto label_3f1a08;
    }
    ctx->pc = 0x3F1A00u;
    SET_GPR_U32(ctx, 31, 0x3F1A08u);
    ctx->pc = 0x3F1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A00u;
            // 0x3f1a04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A08u; }
        if (ctx->pc != 0x3F1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A08u; }
        if (ctx->pc != 0x3F1A08u) { return; }
    }
    ctx->pc = 0x3F1A08u;
label_3f1a08:
    // 0x3f1a08: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x3f1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_3f1a0c:
    // 0x3f1a0c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x3f1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3f1a10:
    // 0x3f1a10: 0xc04e4a4  jal         func_139290
label_3f1a14:
    if (ctx->pc == 0x3F1A14u) {
        ctx->pc = 0x3F1A14u;
            // 0x3f1a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A18u;
        goto label_3f1a18;
    }
    ctx->pc = 0x3F1A10u;
    SET_GPR_U32(ctx, 31, 0x3F1A18u);
    ctx->pc = 0x3F1A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A10u;
            // 0x3f1a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A18u; }
        if (ctx->pc != 0x3F1A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A18u; }
        if (ctx->pc != 0x3F1A18u) { return; }
    }
    ctx->pc = 0x3F1A18u;
label_3f1a18:
    // 0x3f1a18: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3f1a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f1a1c:
    // 0x3f1a1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3f1a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3f1a20:
    // 0x3f1a20: 0x320f809  jalr        $t9
label_3f1a24:
    if (ctx->pc == 0x3F1A24u) {
        ctx->pc = 0x3F1A24u;
            // 0x3f1a24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A28u;
        goto label_3f1a28;
    }
    ctx->pc = 0x3F1A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1A28u);
        ctx->pc = 0x3F1A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A20u;
            // 0x3f1a24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A28u; }
            if (ctx->pc != 0x3F1A28u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1A28u;
label_3f1a28:
    // 0x3f1a28: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3f1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3f1a2c:
    // 0x3f1a2c: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x3f1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f1a30:
    // 0x3f1a30: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3f1a30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3f1a34:
    // 0x3f1a34: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x3f1a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_3f1a38:
    // 0x3f1a38: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3f1a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f1a3c:
    // 0x3f1a3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f1a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1a40:
    // 0x3f1a40: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x3f1a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f1a44:
    // 0x3f1a44: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3f1a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3f1a48:
    // 0x3f1a48: 0xc04cff4  jal         func_133FD0
label_3f1a4c:
    if (ctx->pc == 0x3F1A4Cu) {
        ctx->pc = 0x3F1A4Cu;
            // 0x3f1a4c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A50u;
        goto label_3f1a50;
    }
    ctx->pc = 0x3F1A48u;
    SET_GPR_U32(ctx, 31, 0x3F1A50u);
    ctx->pc = 0x3F1A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A48u;
            // 0x3f1a4c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A50u; }
        if (ctx->pc != 0x3F1A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A50u; }
        if (ctx->pc != 0x3F1A50u) { return; }
    }
    ctx->pc = 0x3F1A50u;
label_3f1a50:
    // 0x3f1a50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3f1a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3f1a54:
    // 0x3f1a54: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x3f1a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_3f1a58:
    // 0x3f1a58: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_3f1a5c:
    if (ctx->pc == 0x3F1A5Cu) {
        ctx->pc = 0x3F1A5Cu;
            // 0x3f1a5c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3F1A60u;
        goto label_3f1a60;
    }
    ctx->pc = 0x3F1A58u;
    {
        const bool branch_taken_0x3f1a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A58u;
            // 0x3f1a5c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a58) {
            ctx->pc = 0x3F1944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f1944;
        }
    }
    ctx->pc = 0x3F1A60u;
label_3f1a60:
    // 0x3f1a60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1a64:
    // 0x3f1a64: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3f1a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3f1a68:
    // 0x3f1a68: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_3f1a6c:
    if (ctx->pc == 0x3F1A6Cu) {
        ctx->pc = 0x3F1A6Cu;
            // 0x3f1a6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3F1A70u;
        goto label_3f1a70;
    }
    ctx->pc = 0x3F1A68u;
    {
        const bool branch_taken_0x3f1a68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3F1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A68u;
            // 0x3f1a6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a68) {
            ctx->pc = 0x3F1A8Cu;
            goto label_3f1a8c;
        }
    }
    ctx->pc = 0x3F1A70u;
label_3f1a70:
    // 0x3f1a70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1a74:
    // 0x3f1a74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f1a78:
    // 0x3f1a78: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3f1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3f1a7c:
    // 0x3f1a7c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3f1a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3f1a80:
    // 0x3f1a80: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3f1a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3f1a84:
    // 0x3f1a84: 0xc055990  jal         func_156640
label_3f1a88:
    if (ctx->pc == 0x3F1A88u) {
        ctx->pc = 0x3F1A88u;
            // 0x3f1a88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A8Cu;
        goto label_3f1a8c;
    }
    ctx->pc = 0x3F1A84u;
    SET_GPR_U32(ctx, 31, 0x3F1A8Cu);
    ctx->pc = 0x3F1A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1A84u;
            // 0x3f1a88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A8Cu; }
        if (ctx->pc != 0x3F1A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1A8Cu; }
        if (ctx->pc != 0x3F1A8Cu) { return; }
    }
    ctx->pc = 0x3F1A8Cu;
label_3f1a8c:
    // 0x3f1a8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3f1a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3f1a90:
    // 0x3f1a90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f1a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f1a94:
    // 0x3f1a94: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3f1a94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f1a98:
    // 0x3f1a98: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3f1a98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f1a9c:
    // 0x3f1a9c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3f1a9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f1aa0:
    // 0x3f1aa0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f1aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f1aa4:
    // 0x3f1aa4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f1aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f1aa8:
    // 0x3f1aa8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f1aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1aac:
    // 0x3f1aac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f1aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1ab0:
    // 0x3f1ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f1ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1ab4:
    // 0x3f1ab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f1ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1ab8:
    // 0x3f1ab8: 0x3e00008  jr          $ra
label_3f1abc:
    if (ctx->pc == 0x3F1ABCu) {
        ctx->pc = 0x3F1ABCu;
            // 0x3f1abc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x3F1AC0u;
        goto label_fallthrough_0x3f1ab8;
    }
    ctx->pc = 0x3F1AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1AB8u;
            // 0x3f1abc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f1ab8:
    ctx->pc = 0x3F1AC0u;
}
