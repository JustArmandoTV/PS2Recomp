#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C15B0
// Address: 0x2c15b0 - 0x2c18f0
void sub_002C15B0_0x2c15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C15B0_0x2c15b0");
#endif

    switch (ctx->pc) {
        case 0x2c15b0u: goto label_2c15b0;
        case 0x2c15b4u: goto label_2c15b4;
        case 0x2c15b8u: goto label_2c15b8;
        case 0x2c15bcu: goto label_2c15bc;
        case 0x2c15c0u: goto label_2c15c0;
        case 0x2c15c4u: goto label_2c15c4;
        case 0x2c15c8u: goto label_2c15c8;
        case 0x2c15ccu: goto label_2c15cc;
        case 0x2c15d0u: goto label_2c15d0;
        case 0x2c15d4u: goto label_2c15d4;
        case 0x2c15d8u: goto label_2c15d8;
        case 0x2c15dcu: goto label_2c15dc;
        case 0x2c15e0u: goto label_2c15e0;
        case 0x2c15e4u: goto label_2c15e4;
        case 0x2c15e8u: goto label_2c15e8;
        case 0x2c15ecu: goto label_2c15ec;
        case 0x2c15f0u: goto label_2c15f0;
        case 0x2c15f4u: goto label_2c15f4;
        case 0x2c15f8u: goto label_2c15f8;
        case 0x2c15fcu: goto label_2c15fc;
        case 0x2c1600u: goto label_2c1600;
        case 0x2c1604u: goto label_2c1604;
        case 0x2c1608u: goto label_2c1608;
        case 0x2c160cu: goto label_2c160c;
        case 0x2c1610u: goto label_2c1610;
        case 0x2c1614u: goto label_2c1614;
        case 0x2c1618u: goto label_2c1618;
        case 0x2c161cu: goto label_2c161c;
        case 0x2c1620u: goto label_2c1620;
        case 0x2c1624u: goto label_2c1624;
        case 0x2c1628u: goto label_2c1628;
        case 0x2c162cu: goto label_2c162c;
        case 0x2c1630u: goto label_2c1630;
        case 0x2c1634u: goto label_2c1634;
        case 0x2c1638u: goto label_2c1638;
        case 0x2c163cu: goto label_2c163c;
        case 0x2c1640u: goto label_2c1640;
        case 0x2c1644u: goto label_2c1644;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c1650u: goto label_2c1650;
        case 0x2c1654u: goto label_2c1654;
        case 0x2c1658u: goto label_2c1658;
        case 0x2c165cu: goto label_2c165c;
        case 0x2c1660u: goto label_2c1660;
        case 0x2c1664u: goto label_2c1664;
        case 0x2c1668u: goto label_2c1668;
        case 0x2c166cu: goto label_2c166c;
        case 0x2c1670u: goto label_2c1670;
        case 0x2c1674u: goto label_2c1674;
        case 0x2c1678u: goto label_2c1678;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c1680u: goto label_2c1680;
        case 0x2c1684u: goto label_2c1684;
        case 0x2c1688u: goto label_2c1688;
        case 0x2c168cu: goto label_2c168c;
        case 0x2c1690u: goto label_2c1690;
        case 0x2c1694u: goto label_2c1694;
        case 0x2c1698u: goto label_2c1698;
        case 0x2c169cu: goto label_2c169c;
        case 0x2c16a0u: goto label_2c16a0;
        case 0x2c16a4u: goto label_2c16a4;
        case 0x2c16a8u: goto label_2c16a8;
        case 0x2c16acu: goto label_2c16ac;
        case 0x2c16b0u: goto label_2c16b0;
        case 0x2c16b4u: goto label_2c16b4;
        case 0x2c16b8u: goto label_2c16b8;
        case 0x2c16bcu: goto label_2c16bc;
        case 0x2c16c0u: goto label_2c16c0;
        case 0x2c16c4u: goto label_2c16c4;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c16ccu: goto label_2c16cc;
        case 0x2c16d0u: goto label_2c16d0;
        case 0x2c16d4u: goto label_2c16d4;
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16dcu: goto label_2c16dc;
        case 0x2c16e0u: goto label_2c16e0;
        case 0x2c16e4u: goto label_2c16e4;
        case 0x2c16e8u: goto label_2c16e8;
        case 0x2c16ecu: goto label_2c16ec;
        case 0x2c16f0u: goto label_2c16f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c16f8u: goto label_2c16f8;
        case 0x2c16fcu: goto label_2c16fc;
        case 0x2c1700u: goto label_2c1700;
        case 0x2c1704u: goto label_2c1704;
        case 0x2c1708u: goto label_2c1708;
        case 0x2c170cu: goto label_2c170c;
        case 0x2c1710u: goto label_2c1710;
        case 0x2c1714u: goto label_2c1714;
        case 0x2c1718u: goto label_2c1718;
        case 0x2c171cu: goto label_2c171c;
        case 0x2c1720u: goto label_2c1720;
        case 0x2c1724u: goto label_2c1724;
        case 0x2c1728u: goto label_2c1728;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c1730u: goto label_2c1730;
        case 0x2c1734u: goto label_2c1734;
        case 0x2c1738u: goto label_2c1738;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1740u: goto label_2c1740;
        case 0x2c1744u: goto label_2c1744;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c174cu: goto label_2c174c;
        case 0x2c1750u: goto label_2c1750;
        case 0x2c1754u: goto label_2c1754;
        case 0x2c1758u: goto label_2c1758;
        case 0x2c175cu: goto label_2c175c;
        case 0x2c1760u: goto label_2c1760;
        case 0x2c1764u: goto label_2c1764;
        case 0x2c1768u: goto label_2c1768;
        case 0x2c176cu: goto label_2c176c;
        case 0x2c1770u: goto label_2c1770;
        case 0x2c1774u: goto label_2c1774;
        case 0x2c1778u: goto label_2c1778;
        case 0x2c177cu: goto label_2c177c;
        case 0x2c1780u: goto label_2c1780;
        case 0x2c1784u: goto label_2c1784;
        case 0x2c1788u: goto label_2c1788;
        case 0x2c178cu: goto label_2c178c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c1794u: goto label_2c1794;
        case 0x2c1798u: goto label_2c1798;
        case 0x2c179cu: goto label_2c179c;
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17a4u: goto label_2c17a4;
        case 0x2c17a8u: goto label_2c17a8;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b0u: goto label_2c17b0;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17b8u: goto label_2c17b8;
        case 0x2c17bcu: goto label_2c17bc;
        case 0x2c17c0u: goto label_2c17c0;
        case 0x2c17c4u: goto label_2c17c4;
        case 0x2c17c8u: goto label_2c17c8;
        case 0x2c17ccu: goto label_2c17cc;
        case 0x2c17d0u: goto label_2c17d0;
        case 0x2c17d4u: goto label_2c17d4;
        case 0x2c17d8u: goto label_2c17d8;
        case 0x2c17dcu: goto label_2c17dc;
        case 0x2c17e0u: goto label_2c17e0;
        case 0x2c17e4u: goto label_2c17e4;
        case 0x2c17e8u: goto label_2c17e8;
        case 0x2c17ecu: goto label_2c17ec;
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f4u: goto label_2c17f4;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c17fcu: goto label_2c17fc;
        case 0x2c1800u: goto label_2c1800;
        case 0x2c1804u: goto label_2c1804;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c180cu: goto label_2c180c;
        case 0x2c1810u: goto label_2c1810;
        case 0x2c1814u: goto label_2c1814;
        case 0x2c1818u: goto label_2c1818;
        case 0x2c181cu: goto label_2c181c;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1824u: goto label_2c1824;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c182cu: goto label_2c182c;
        case 0x2c1830u: goto label_2c1830;
        case 0x2c1834u: goto label_2c1834;
        case 0x2c1838u: goto label_2c1838;
        case 0x2c183cu: goto label_2c183c;
        case 0x2c1840u: goto label_2c1840;
        case 0x2c1844u: goto label_2c1844;
        case 0x2c1848u: goto label_2c1848;
        case 0x2c184cu: goto label_2c184c;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1854u: goto label_2c1854;
        case 0x2c1858u: goto label_2c1858;
        case 0x2c185cu: goto label_2c185c;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1864u: goto label_2c1864;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c186cu: goto label_2c186c;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1874u: goto label_2c1874;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c187cu: goto label_2c187c;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1884u: goto label_2c1884;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c188cu: goto label_2c188c;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1894u: goto label_2c1894;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c189cu: goto label_2c189c;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a4u: goto label_2c18a4;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18acu: goto label_2c18ac;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b4u: goto label_2c18b4;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18bcu: goto label_2c18bc;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c4u: goto label_2c18c4;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18ccu: goto label_2c18cc;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d4u: goto label_2c18d4;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18dcu: goto label_2c18dc;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e4u: goto label_2c18e4;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18ecu: goto label_2c18ec;
        default: break;
    }

    ctx->pc = 0x2c15b0u;

label_2c15b0:
    // 0x2c15b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2c15b4:
    // 0x2c15b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c15b8:
    // 0x2c15b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c15b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2c15bc:
    // 0x2c15bc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c15bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2c15c0:
    // 0x2c15c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c15c4:
    // 0x2c15c4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c15c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c15c8:
    // 0x2c15c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c15cc:
    // 0x2c15cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c15d0:
    // 0x2c15d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c15d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c15d4:
    // 0x2c15d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c15d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c15d8:
    // 0x2c15d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c15d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c15dc:
    // 0x2c15dc: 0xc0aeaf4  jal         func_2BABD0
label_2c15e0:
    if (ctx->pc == 0x2C15E0u) {
        ctx->pc = 0x2C15E0u;
            // 0x2c15e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C15E4u;
        goto label_2c15e4;
    }
    ctx->pc = 0x2C15DCu;
    SET_GPR_U32(ctx, 31, 0x2C15E4u);
    ctx->pc = 0x2C15E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15DCu;
            // 0x2c15e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15E4u; }
        if (ctx->pc != 0x2C15E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15E4u; }
        if (ctx->pc != 0x2C15E4u) { return; }
    }
    ctx->pc = 0x2C15E4u;
label_2c15e4:
    // 0x2c15e4: 0xc0b0720  jal         func_2C1C80
label_2c15e8:
    if (ctx->pc == 0x2C15E8u) {
        ctx->pc = 0x2C15E8u;
            // 0x2c15e8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x2C15ECu;
        goto label_2c15ec;
    }
    ctx->pc = 0x2C15E4u;
    SET_GPR_U32(ctx, 31, 0x2C15ECu);
    ctx->pc = 0x2C15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15E4u;
            // 0x2c15e8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1C80u;
    if (runtime->hasFunction(0x2C1C80u)) {
        auto targetFn = runtime->lookupFunction(0x2C1C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15ECu; }
        if (ctx->pc != 0x2C15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1C80_0x2c1c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15ECu; }
        if (ctx->pc != 0x2C15ECu) { return; }
    }
    ctx->pc = 0x2C15ECu;
label_2c15ec:
    // 0x2c15ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c15f0:
    // 0x2c15f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c15f4:
    // 0x2c15f4: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x2c15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
label_2c15f8:
    // 0x2c15f8: 0x24421738  addiu       $v0, $v0, 0x1738
    ctx->pc = 0x2c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5944));
label_2c15fc:
    // 0x2c15fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c1600:
    // 0x2c1600: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x2c1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_2c1604:
    // 0x2c1604: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2c1604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_2c1608:
    // 0x2c1608: 0xc0b0718  jal         func_2C1C60
label_2c160c:
    if (ctx->pc == 0x2C160Cu) {
        ctx->pc = 0x2C160Cu;
            // 0x2c160c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2C1610u;
        goto label_2c1610;
    }
    ctx->pc = 0x2C1608u;
    SET_GPR_U32(ctx, 31, 0x2C1610u);
    ctx->pc = 0x2C160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1608u;
            // 0x2c160c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1C60u;
    if (runtime->hasFunction(0x2C1C60u)) {
        auto targetFn = runtime->lookupFunction(0x2C1C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1610u; }
        if (ctx->pc != 0x2C1610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1C60_0x2c1c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1610u; }
        if (ctx->pc != 0x2C1610u) { return; }
    }
    ctx->pc = 0x2C1610u;
label_2c1610:
    // 0x2c1610: 0xc0b0718  jal         func_2C1C60
label_2c1614:
    if (ctx->pc == 0x2C1614u) {
        ctx->pc = 0x2C1614u;
            // 0x2c1614: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x2C1618u;
        goto label_2c1618;
    }
    ctx->pc = 0x2C1610u;
    SET_GPR_U32(ctx, 31, 0x2C1618u);
    ctx->pc = 0x2C1614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1610u;
            // 0x2c1614: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1C60u;
    if (runtime->hasFunction(0x2C1C60u)) {
        auto targetFn = runtime->lookupFunction(0x2C1C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1618u; }
        if (ctx->pc != 0x2C1618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1C60_0x2c1c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1618u; }
        if (ctx->pc != 0x2C1618u) { return; }
    }
    ctx->pc = 0x2C1618u;
label_2c1618:
    // 0x2c1618: 0xc0a8d10  jal         func_2A3440
label_2c161c:
    if (ctx->pc == 0x2C161Cu) {
        ctx->pc = 0x2C161Cu;
            // 0x2c161c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x2C1620u;
        goto label_2c1620;
    }
    ctx->pc = 0x2C1618u;
    SET_GPR_U32(ctx, 31, 0x2C1620u);
    ctx->pc = 0x2C161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1618u;
            // 0x2c161c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1620u; }
        if (ctx->pc != 0x2C1620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1620u; }
        if (ctx->pc != 0x2C1620u) { return; }
    }
    ctx->pc = 0x2C1620u;
label_2c1620:
    // 0x2c1620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1624:
    // 0x2c1624: 0xc0aeac0  jal         func_2BAB00
label_2c1628:
    if (ctx->pc == 0x2C1628u) {
        ctx->pc = 0x2C1628u;
            // 0x2c1628: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x2C162Cu;
        goto label_2c162c;
    }
    ctx->pc = 0x2C1624u;
    SET_GPR_U32(ctx, 31, 0x2C162Cu);
    ctx->pc = 0x2C1628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1624u;
            // 0x2c1628: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C162Cu; }
        if (ctx->pc != 0x2C162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C162Cu; }
        if (ctx->pc != 0x2C162Cu) { return; }
    }
    ctx->pc = 0x2C162Cu;
label_2c162c:
    // 0x2c162c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c162cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1630:
    // 0x2c1630: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_2c1634:
    if (ctx->pc == 0x2C1634u) {
        ctx->pc = 0x2C1638u;
        goto label_2c1638;
    }
    ctx->pc = 0x2C1630u;
    {
        const bool branch_taken_0x2c1630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1630) {
            ctx->pc = 0x2C16A8u;
            goto label_2c16a8;
        }
    }
    ctx->pc = 0x2C1638u;
label_2c1638:
    // 0x2c1638: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x2c1638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_2c163c:
    // 0x2c163c: 0xc040138  jal         func_1004E0
label_2c1640:
    if (ctx->pc == 0x2C1640u) {
        ctx->pc = 0x2C1640u;
            // 0x2c1640: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C1644u;
        goto label_2c1644;
    }
    ctx->pc = 0x2C163Cu;
    SET_GPR_U32(ctx, 31, 0x2C1644u);
    ctx->pc = 0x2C1640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C163Cu;
            // 0x2c1640: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1644u; }
        if (ctx->pc != 0x2C1644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1644u; }
        if (ctx->pc != 0x2C1644u) { return; }
    }
    ctx->pc = 0x2C1644u;
label_2c1644:
    // 0x2c1644: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c1644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c1648:
    // 0x2c1648: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c1648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c164c:
    // 0x2c164c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1650:
    // 0x2c1650: 0x24a51ad0  addiu       $a1, $a1, 0x1AD0
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6864));
label_2c1654:
    // 0x2c1654: 0x24c619f0  addiu       $a2, $a2, 0x19F0
    ctx->pc = 0x2c1654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6640));
label_2c1658:
    // 0x2c1658: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2c1658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c165c:
    // 0x2c165c: 0xc040840  jal         func_102100
label_2c1660:
    if (ctx->pc == 0x2C1660u) {
        ctx->pc = 0x2C1660u;
            // 0x2c1660: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1664u;
        goto label_2c1664;
    }
    ctx->pc = 0x2C165Cu;
    SET_GPR_U32(ctx, 31, 0x2C1664u);
    ctx->pc = 0x2C1660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C165Cu;
            // 0x2c1660: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1664u; }
        if (ctx->pc != 0x2C1664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1664u; }
        if (ctx->pc != 0x2C1664u) { return; }
    }
    ctx->pc = 0x2C1664u;
label_2c1664:
    // 0x2c1664: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x2c1664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_2c1668:
    // 0x2c1668: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c1668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c166c:
    // 0x2c166c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x2c166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_2c1670:
    // 0x2c1670: 0xc0b0678  jal         func_2C19E0
label_2c1674:
    if (ctx->pc == 0x2C1674u) {
        ctx->pc = 0x2C1674u;
            // 0x2c1674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1678u;
        goto label_2c1678;
    }
    ctx->pc = 0x2C1670u;
    SET_GPR_U32(ctx, 31, 0x2C1678u);
    ctx->pc = 0x2C1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1670u;
            // 0x2c1674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C19E0u;
    if (runtime->hasFunction(0x2C19E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1678u; }
        if (ctx->pc != 0x2C1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C19E0_0x2c19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1678u; }
        if (ctx->pc != 0x2C1678u) { return; }
    }
    ctx->pc = 0x2C1678u;
label_2c1678:
    // 0x2c1678: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x2c1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_2c167c:
    // 0x2c167c: 0xc0b0678  jal         func_2C19E0
label_2c1680:
    if (ctx->pc == 0x2C1680u) {
        ctx->pc = 0x2C1680u;
            // 0x2c1680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1684u;
        goto label_2c1684;
    }
    ctx->pc = 0x2C167Cu;
    SET_GPR_U32(ctx, 31, 0x2C1684u);
    ctx->pc = 0x2C1680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C167Cu;
            // 0x2c1680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C19E0u;
    if (runtime->hasFunction(0x2C19E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1684u; }
        if (ctx->pc != 0x2C1684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C19E0_0x2c19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1684u; }
        if (ctx->pc != 0x2C1684u) { return; }
    }
    ctx->pc = 0x2C1684u;
label_2c1684:
    // 0x2c1684: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c1684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1688:
    // 0x2c1688: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x2c1688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_2c168c:
    // 0x2c168c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2c168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2c1690:
    // 0x2c1690: 0xc0b0670  jal         func_2C19C0
label_2c1694:
    if (ctx->pc == 0x2C1694u) {
        ctx->pc = 0x2C1694u;
            // 0x2c1694: 0xafb4007c  sw          $s4, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 20));
        ctx->pc = 0x2C1698u;
        goto label_2c1698;
    }
    ctx->pc = 0x2C1690u;
    SET_GPR_U32(ctx, 31, 0x2C1698u);
    ctx->pc = 0x2C1694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1690u;
            // 0x2c1694: 0xafb4007c  sw          $s4, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C19C0u;
    if (runtime->hasFunction(0x2C19C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C19C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1698u; }
        if (ctx->pc != 0x2C1698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C19C0_0x2c19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1698u; }
        if (ctx->pc != 0x2C1698u) { return; }
    }
    ctx->pc = 0x2C1698u;
label_2c1698:
    // 0x2c1698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c169c:
    // 0x2c169c: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x2c169cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c16a0:
    // 0x2c16a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2c16a4:
    if (ctx->pc == 0x2C16A4u) {
        ctx->pc = 0x2C16A4u;
            // 0x2c16a4: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->pc = 0x2C16A8u;
        goto label_2c16a8;
    }
    ctx->pc = 0x2C16A0u;
    {
        const bool branch_taken_0x2c16a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C16A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16A0u;
            // 0x2c16a4: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16a0) {
            ctx->pc = 0x2C1688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1688;
        }
    }
    ctx->pc = 0x2C16A8u;
label_2c16a8:
    // 0x2c16a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c16ac:
    // 0x2c16ac: 0x244216b0  addiu       $v0, $v0, 0x16B0
    ctx->pc = 0x2c16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
label_2c16b0:
    // 0x2c16b0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2c16b4:
    // 0x2c16b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2c16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2c16b8:
    // 0x2c16b8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2c16b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2c16bc:
    // 0x2c16bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c16c0:
    // 0x2c16c0: 0x244216e8  addiu       $v0, $v0, 0x16E8
    ctx->pc = 0x2c16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5864));
label_2c16c4:
    // 0x2c16c4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_2c16c8:
    // 0x2c16c8: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2c16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_2c16cc:
    // 0x2c16cc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2c16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_2c16d0:
    // 0x2c16d0: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
label_2c16d4:
    // 0x2c16d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2c16d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2c16d8:
    // 0x2c16d8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2c16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_2c16dc:
    // 0x2c16dc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2c16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2c16e0:
    // 0x2c16e0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2c16e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_2c16e4:
    // 0x2c16e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c16e8:
    // 0x2c16e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2c16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2c16ec:
    // 0x2c16ec: 0xc0a7a88  jal         func_29EA20
label_2c16f0:
    if (ctx->pc == 0x2C16F0u) {
        ctx->pc = 0x2C16F0u;
            // 0x2c16f0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x2C16F4u;
        goto label_2c16f4;
    }
    ctx->pc = 0x2C16ECu;
    SET_GPR_U32(ctx, 31, 0x2C16F4u);
    ctx->pc = 0x2C16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16ECu;
            // 0x2c16f0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16F4u; }
        if (ctx->pc != 0x2C16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16F4u; }
        if (ctx->pc != 0x2C16F4u) { return; }
    }
    ctx->pc = 0x2C16F4u;
label_2c16f4:
    // 0x2c16f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2c16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2c16f8:
    // 0x2c16f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c16f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c16fc:
    // 0x2c16fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2c1700:
    if (ctx->pc == 0x2C1700u) {
        ctx->pc = 0x2C1700u;
            // 0x2c1700: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2C1704u;
        goto label_2c1704;
    }
    ctx->pc = 0x2C16FCu;
    {
        const bool branch_taken_0x2c16fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16FCu;
            // 0x2c1700: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16fc) {
            ctx->pc = 0x2C1718u;
            goto label_2c1718;
        }
    }
    ctx->pc = 0x2C1704u;
label_2c1704:
    // 0x2c1704: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2c1704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2c1708:
    // 0x2c1708: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2c1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c170c:
    // 0x2c170c: 0xc0804bc  jal         func_2012F0
label_2c1710:
    if (ctx->pc == 0x2C1710u) {
        ctx->pc = 0x2C1710u;
            // 0x2c1710: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C1714u;
        goto label_2c1714;
    }
    ctx->pc = 0x2C170Cu;
    SET_GPR_U32(ctx, 31, 0x2C1714u);
    ctx->pc = 0x2C1710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C170Cu;
            // 0x2c1710: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1714u; }
        if (ctx->pc != 0x2C1714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1714u; }
        if (ctx->pc != 0x2C1714u) { return; }
    }
    ctx->pc = 0x2C1714u;
label_2c1714:
    // 0x2c1714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1718:
    // 0x2c1718: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x2c1718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_2c171c:
    // 0x2c171c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c1720:
    // 0x2c1720: 0x8c430e28  lw          $v1, 0xE28($v0)
    ctx->pc = 0x2c1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3624)));
label_2c1724:
    // 0x2c1724: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2c1724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2c1728:
    // 0x2c1728: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c1728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c172c:
    // 0x2c172c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c172cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c1730:
    // 0x2c1730: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c1734:
    // 0x2c1734: 0x24700084  addiu       $s0, $v1, 0x84
    ctx->pc = 0x2c1734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_2c1738:
    // 0x2c1738: 0xc040140  jal         func_100500
label_2c173c:
    if (ctx->pc == 0x2C173Cu) {
        ctx->pc = 0x2C173Cu;
            // 0x2c173c: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x2C1740u;
        goto label_2c1740;
    }
    ctx->pc = 0x2C1738u;
    SET_GPR_U32(ctx, 31, 0x2C1740u);
    ctx->pc = 0x2C173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1738u;
            // 0x2c173c: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1740u; }
        if (ctx->pc != 0x2C1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1740u; }
        if (ctx->pc != 0x2C1740u) { return; }
    }
    ctx->pc = 0x2C1740u;
label_2c1740:
    // 0x2c1740: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2c1744:
    if (ctx->pc == 0x2C1744u) {
        ctx->pc = 0x2C1744u;
            // 0x2c1744: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1748u;
        goto label_2c1748;
    }
    ctx->pc = 0x2C1740u;
    {
        const bool branch_taken_0x2c1740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1740) {
            ctx->pc = 0x2C1744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1740u;
            // 0x2c1744: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1760u;
            goto label_2c1760;
        }
    }
    ctx->pc = 0x2C1748u;
label_2c1748:
    // 0x2c1748: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2c1748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c174c:
    // 0x2c174c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1750:
    // 0x2c1750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1754:
    // 0x2c1754: 0xc0b4554  jal         func_2D1550
label_2c1758:
    if (ctx->pc == 0x2C1758u) {
        ctx->pc = 0x2C1758u;
            // 0x2c1758: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C175Cu;
        goto label_2c175c;
    }
    ctx->pc = 0x2C1754u;
    SET_GPR_U32(ctx, 31, 0x2C175Cu);
    ctx->pc = 0x2C1758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1754u;
            // 0x2c1758: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C175Cu; }
        if (ctx->pc != 0x2C175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C175Cu; }
        if (ctx->pc != 0x2C175Cu) { return; }
    }
    ctx->pc = 0x2C175Cu;
label_2c175c:
    // 0x2c175c: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x2c175cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_2c1760:
    // 0x2c1760: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c1760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1764:
    // 0x2c1764: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c1764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c1768:
    // 0x2c1768: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c176c:
    // 0x2c176c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c176cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1770:
    // 0x2c1770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1774:
    // 0x2c1774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1778:
    // 0x2c1778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c177c:
    // 0x2c177c: 0x3e00008  jr          $ra
label_2c1780:
    if (ctx->pc == 0x2C1780u) {
        ctx->pc = 0x2C1780u;
            // 0x2c1780: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2C1784u;
        goto label_2c1784;
    }
    ctx->pc = 0x2C177Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C177Cu;
            // 0x2c1780: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1784u;
label_2c1784:
    // 0x2c1784: 0x0  nop
    ctx->pc = 0x2c1784u;
    // NOP
label_2c1788:
    // 0x2c1788: 0x0  nop
    ctx->pc = 0x2c1788u;
    // NOP
label_2c178c:
    // 0x2c178c: 0x0  nop
    ctx->pc = 0x2c178cu;
    // NOP
label_2c1790:
    // 0x2c1790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c1794:
    // 0x2c1794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c1798:
    // 0x2c1798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c179c:
    // 0x2c179c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c17a0:
    // 0x2c17a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c17a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c17a4:
    // 0x2c17a4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c17a8:
    if (ctx->pc == 0x2C17A8u) {
        ctx->pc = 0x2C17A8u;
            // 0x2c17a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C17ACu;
        goto label_2c17ac;
    }
    ctx->pc = 0x2C17A4u;
    {
        const bool branch_taken_0x2c17a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17A4u;
            // 0x2c17a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17a4) {
            ctx->pc = 0x2C18D8u;
            goto label_2c18d8;
        }
    }
    ctx->pc = 0x2C17ACu;
label_2c17ac:
    // 0x2c17ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c17acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c17b0:
    // 0x2c17b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c17b4:
    // 0x2c17b4: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x2c17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
label_2c17b8:
    // 0x2c17b8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c17bc:
    // 0x2c17bc: 0x24421738  addiu       $v0, $v0, 0x1738
    ctx->pc = 0x2c17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5944));
label_2c17c0:
    // 0x2c17c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c17c4:
    // 0x2c17c4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c17c8:
    // 0x2c17c8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c17cc:
    // 0x2c17cc: 0xc0407c0  jal         func_101F00
label_2c17d0:
    if (ctx->pc == 0x2C17D0u) {
        ctx->pc = 0x2C17D0u;
            // 0x2c17d0: 0x24a519f0  addiu       $a1, $a1, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
        ctx->pc = 0x2C17D4u;
        goto label_2c17d4;
    }
    ctx->pc = 0x2C17CCu;
    SET_GPR_U32(ctx, 31, 0x2C17D4u);
    ctx->pc = 0x2C17D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17CCu;
            // 0x2c17d0: 0x24a519f0  addiu       $a1, $a1, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17D4u; }
        if (ctx->pc != 0x2C17D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17D4u; }
        if (ctx->pc != 0x2C17D4u) { return; }
    }
    ctx->pc = 0x2C17D4u;
label_2c17d4:
    // 0x2c17d4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c17d8:
    // 0x2c17d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c17dc:
    if (ctx->pc == 0x2C17DCu) {
        ctx->pc = 0x2C17DCu;
            // 0x2c17dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C17E0u;
        goto label_2c17e0;
    }
    ctx->pc = 0x2C17D8u;
    {
        const bool branch_taken_0x2c17d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17d8) {
            ctx->pc = 0x2C17DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17D8u;
            // 0x2c17dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C17ECu;
            goto label_2c17ec;
        }
    }
    ctx->pc = 0x2C17E0u;
label_2c17e0:
    // 0x2c17e0: 0xc07507c  jal         func_1D41F0
label_2c17e4:
    if (ctx->pc == 0x2C17E4u) {
        ctx->pc = 0x2C17E4u;
            // 0x2c17e4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C17E8u;
        goto label_2c17e8;
    }
    ctx->pc = 0x2C17E0u;
    SET_GPR_U32(ctx, 31, 0x2C17E8u);
    ctx->pc = 0x2C17E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17E0u;
            // 0x2c17e4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17E8u; }
        if (ctx->pc != 0x2C17E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17E8u; }
        if (ctx->pc != 0x2C17E8u) { return; }
    }
    ctx->pc = 0x2C17E8u;
label_2c17e8:
    // 0x2c17e8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c17ec:
    // 0x2c17ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c17f0:
    if (ctx->pc == 0x2C17F0u) {
        ctx->pc = 0x2C17F0u;
            // 0x2c17f0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C17F4u;
        goto label_2c17f4;
    }
    ctx->pc = 0x2C17ECu;
    {
        const bool branch_taken_0x2c17ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17ec) {
            ctx->pc = 0x2C17F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17ECu;
            // 0x2c17f0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C181Cu;
            goto label_2c181c;
        }
    }
    ctx->pc = 0x2C17F4u;
label_2c17f4:
    // 0x2c17f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c17f8:
    if (ctx->pc == 0x2C17F8u) {
        ctx->pc = 0x2C17FCu;
        goto label_2c17fc;
    }
    ctx->pc = 0x2C17F4u;
    {
        const bool branch_taken_0x2c17f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17f4) {
            ctx->pc = 0x2C1818u;
            goto label_2c1818;
        }
    }
    ctx->pc = 0x2C17FCu;
label_2c17fc:
    // 0x2c17fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1800:
    if (ctx->pc == 0x2C1800u) {
        ctx->pc = 0x2C1804u;
        goto label_2c1804;
    }
    ctx->pc = 0x2C17FCu;
    {
        const bool branch_taken_0x2c17fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17fc) {
            ctx->pc = 0x2C1818u;
            goto label_2c1818;
        }
    }
    ctx->pc = 0x2C1804u;
label_2c1804:
    // 0x2c1804: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c1804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c1808:
    // 0x2c1808: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c180c:
    if (ctx->pc == 0x2C180Cu) {
        ctx->pc = 0x2C1810u;
        goto label_2c1810;
    }
    ctx->pc = 0x2C1808u;
    {
        const bool branch_taken_0x2c1808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1808) {
            ctx->pc = 0x2C1818u;
            goto label_2c1818;
        }
    }
    ctx->pc = 0x2C1810u;
label_2c1810:
    // 0x2c1810: 0xc0400a8  jal         func_1002A0
label_2c1814:
    if (ctx->pc == 0x2C1814u) {
        ctx->pc = 0x2C1818u;
        goto label_2c1818;
    }
    ctx->pc = 0x2C1810u;
    SET_GPR_U32(ctx, 31, 0x2C1818u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1818u; }
        if (ctx->pc != 0x2C1818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1818u; }
        if (ctx->pc != 0x2C1818u) { return; }
    }
    ctx->pc = 0x2C1818u;
label_2c1818:
    // 0x2c1818: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c181c:
    // 0x2c181c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c1820:
    if (ctx->pc == 0x2C1820u) {
        ctx->pc = 0x2C1820u;
            // 0x2c1820: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C1824u;
        goto label_2c1824;
    }
    ctx->pc = 0x2C181Cu;
    {
        const bool branch_taken_0x2c181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c181c) {
            ctx->pc = 0x2C1820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C181Cu;
            // 0x2c1820: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C184Cu;
            goto label_2c184c;
        }
    }
    ctx->pc = 0x2C1824u;
label_2c1824:
    // 0x2c1824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c1828:
    if (ctx->pc == 0x2C1828u) {
        ctx->pc = 0x2C182Cu;
        goto label_2c182c;
    }
    ctx->pc = 0x2C1824u;
    {
        const bool branch_taken_0x2c1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1824) {
            ctx->pc = 0x2C1848u;
            goto label_2c1848;
        }
    }
    ctx->pc = 0x2C182Cu;
label_2c182c:
    // 0x2c182c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1830:
    if (ctx->pc == 0x2C1830u) {
        ctx->pc = 0x2C1834u;
        goto label_2c1834;
    }
    ctx->pc = 0x2C182Cu;
    {
        const bool branch_taken_0x2c182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c182c) {
            ctx->pc = 0x2C1848u;
            goto label_2c1848;
        }
    }
    ctx->pc = 0x2C1834u;
label_2c1834:
    // 0x2c1834: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c1834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c1838:
    // 0x2c1838: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c183c:
    if (ctx->pc == 0x2C183Cu) {
        ctx->pc = 0x2C1840u;
        goto label_2c1840;
    }
    ctx->pc = 0x2C1838u;
    {
        const bool branch_taken_0x2c1838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1838) {
            ctx->pc = 0x2C1848u;
            goto label_2c1848;
        }
    }
    ctx->pc = 0x2C1840u;
label_2c1840:
    // 0x2c1840: 0xc0400a8  jal         func_1002A0
label_2c1844:
    if (ctx->pc == 0x2C1844u) {
        ctx->pc = 0x2C1848u;
        goto label_2c1848;
    }
    ctx->pc = 0x2C1840u;
    SET_GPR_U32(ctx, 31, 0x2C1848u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1848u; }
        if (ctx->pc != 0x2C1848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1848u; }
        if (ctx->pc != 0x2C1848u) { return; }
    }
    ctx->pc = 0x2C1848u;
label_2c1848:
    // 0x2c1848: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c1848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c184c:
    // 0x2c184c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1850:
    if (ctx->pc == 0x2C1850u) {
        ctx->pc = 0x2C1854u;
        goto label_2c1854;
    }
    ctx->pc = 0x2C184Cu;
    {
        const bool branch_taken_0x2c184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c184c) {
            ctx->pc = 0x2C1868u;
            goto label_2c1868;
        }
    }
    ctx->pc = 0x2C1854u;
label_2c1854:
    // 0x2c1854: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1858:
    // 0x2c1858: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c185c:
    // 0x2c185c: 0x246316a0  addiu       $v1, $v1, 0x16A0
    ctx->pc = 0x2c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5792));
label_2c1860:
    // 0x2c1860: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c1860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c1864:
    // 0x2c1864: 0xac400ce8  sw          $zero, 0xCE8($v0)
    ctx->pc = 0x2c1864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3304), GPR_U32(ctx, 0));
label_2c1868:
    // 0x2c1868: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c186c:
    if (ctx->pc == 0x2C186Cu) {
        ctx->pc = 0x2C186Cu;
            // 0x2c186c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C1870u;
        goto label_2c1870;
    }
    ctx->pc = 0x2C1868u;
    {
        const bool branch_taken_0x2c1868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1868) {
            ctx->pc = 0x2C186Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1868u;
            // 0x2c186c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18C4u;
            goto label_2c18c4;
        }
    }
    ctx->pc = 0x2C1870u;
label_2c1870:
    // 0x2c1870: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1874:
    // 0x2c1874: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c1878:
    // 0x2c1878: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c187c:
    // 0x2c187c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c1880:
    // 0x2c1880: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c1884:
    if (ctx->pc == 0x2C1884u) {
        ctx->pc = 0x2C1884u;
            // 0x2c1884: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C1888u;
        goto label_2c1888;
    }
    ctx->pc = 0x2C1880u;
    {
        const bool branch_taken_0x2c1880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1880) {
            ctx->pc = 0x2C1884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1880u;
            // 0x2c1884: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C189Cu;
            goto label_2c189c;
        }
    }
    ctx->pc = 0x2C1888u;
label_2c1888:
    // 0x2c1888: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c1888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c188c:
    // 0x2c188c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c188cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c1890:
    // 0x2c1890: 0x320f809  jalr        $t9
label_2c1894:
    if (ctx->pc == 0x2C1894u) {
        ctx->pc = 0x2C1894u;
            // 0x2c1894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C1898u;
        goto label_2c1898;
    }
    ctx->pc = 0x2C1890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C1898u);
        ctx->pc = 0x2C1894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1890u;
            // 0x2c1894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1898u; }
            if (ctx->pc != 0x2C1898u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1898u;
label_2c1898:
    // 0x2c1898: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c1898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c189c:
    // 0x2c189c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c18a0:
    if (ctx->pc == 0x2C18A0u) {
        ctx->pc = 0x2C18A0u;
            // 0x2c18a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18A4u;
        goto label_2c18a4;
    }
    ctx->pc = 0x2C189Cu;
    {
        const bool branch_taken_0x2c189c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c189c) {
            ctx->pc = 0x2C18A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C189Cu;
            // 0x2c18a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18B8u;
            goto label_2c18b8;
        }
    }
    ctx->pc = 0x2C18A4u;
label_2c18a4:
    // 0x2c18a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c18a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c18a8:
    // 0x2c18a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c18a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c18ac:
    // 0x2c18ac: 0x320f809  jalr        $t9
label_2c18b0:
    if (ctx->pc == 0x2C18B0u) {
        ctx->pc = 0x2C18B0u;
            // 0x2c18b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C18B4u;
        goto label_2c18b4;
    }
    ctx->pc = 0x2C18ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C18B4u);
        ctx->pc = 0x2C18B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18ACu;
            // 0x2c18b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C18B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C18B4u; }
            if (ctx->pc != 0x2C18B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C18B4u;
label_2c18b4:
    // 0x2c18b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c18b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c18b8:
    // 0x2c18b8: 0xc075bf8  jal         func_1D6FE0
label_2c18bc:
    if (ctx->pc == 0x2C18BCu) {
        ctx->pc = 0x2C18BCu;
            // 0x2c18bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18C0u;
        goto label_2c18c0;
    }
    ctx->pc = 0x2C18B8u;
    SET_GPR_U32(ctx, 31, 0x2C18C0u);
    ctx->pc = 0x2C18BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18B8u;
            // 0x2c18bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18C0u; }
        if (ctx->pc != 0x2C18C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18C0u; }
        if (ctx->pc != 0x2C18C0u) { return; }
    }
    ctx->pc = 0x2C18C0u;
label_2c18c0:
    // 0x2c18c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c18c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c18c4:
    // 0x2c18c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c18c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c18c8:
    // 0x2c18c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c18cc:
    if (ctx->pc == 0x2C18CCu) {
        ctx->pc = 0x2C18CCu;
            // 0x2c18cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18D0u;
        goto label_2c18d0;
    }
    ctx->pc = 0x2C18C8u;
    {
        const bool branch_taken_0x2c18c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c18c8) {
            ctx->pc = 0x2C18CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18C8u;
            // 0x2c18cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18DCu;
            goto label_2c18dc;
        }
    }
    ctx->pc = 0x2C18D0u;
label_2c18d0:
    // 0x2c18d0: 0xc0400a8  jal         func_1002A0
label_2c18d4:
    if (ctx->pc == 0x2C18D4u) {
        ctx->pc = 0x2C18D4u;
            // 0x2c18d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18D8u;
        goto label_2c18d8;
    }
    ctx->pc = 0x2C18D0u;
    SET_GPR_U32(ctx, 31, 0x2C18D8u);
    ctx->pc = 0x2C18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18D0u;
            // 0x2c18d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18D8u; }
        if (ctx->pc != 0x2C18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18D8u; }
        if (ctx->pc != 0x2C18D8u) { return; }
    }
    ctx->pc = 0x2C18D8u;
label_2c18d8:
    // 0x2c18d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c18d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c18dc:
    // 0x2c18dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c18dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c18e0:
    // 0x2c18e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c18e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c18e4:
    // 0x2c18e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c18e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c18e8:
    // 0x2c18e8: 0x3e00008  jr          $ra
label_2c18ec:
    if (ctx->pc == 0x2C18ECu) {
        ctx->pc = 0x2C18ECu;
            // 0x2c18ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C18F0u;
        goto label_fallthrough_0x2c18e8;
    }
    ctx->pc = 0x2C18E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18E8u;
            // 0x2c18ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c18e8:
    ctx->pc = 0x2C18F0u;
}
