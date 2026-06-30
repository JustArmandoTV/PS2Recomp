#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1550
// Address: 0x1c1550 - 0x1c1840
void sub_001C1550_0x1c1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1550_0x1c1550");
#endif

    switch (ctx->pc) {
        case 0x1c1550u: goto label_1c1550;
        case 0x1c1554u: goto label_1c1554;
        case 0x1c1558u: goto label_1c1558;
        case 0x1c155cu: goto label_1c155c;
        case 0x1c1560u: goto label_1c1560;
        case 0x1c1564u: goto label_1c1564;
        case 0x1c1568u: goto label_1c1568;
        case 0x1c156cu: goto label_1c156c;
        case 0x1c1570u: goto label_1c1570;
        case 0x1c1574u: goto label_1c1574;
        case 0x1c1578u: goto label_1c1578;
        case 0x1c157cu: goto label_1c157c;
        case 0x1c1580u: goto label_1c1580;
        case 0x1c1584u: goto label_1c1584;
        case 0x1c1588u: goto label_1c1588;
        case 0x1c158cu: goto label_1c158c;
        case 0x1c1590u: goto label_1c1590;
        case 0x1c1594u: goto label_1c1594;
        case 0x1c1598u: goto label_1c1598;
        case 0x1c159cu: goto label_1c159c;
        case 0x1c15a0u: goto label_1c15a0;
        case 0x1c15a4u: goto label_1c15a4;
        case 0x1c15a8u: goto label_1c15a8;
        case 0x1c15acu: goto label_1c15ac;
        case 0x1c15b0u: goto label_1c15b0;
        case 0x1c15b4u: goto label_1c15b4;
        case 0x1c15b8u: goto label_1c15b8;
        case 0x1c15bcu: goto label_1c15bc;
        case 0x1c15c0u: goto label_1c15c0;
        case 0x1c15c4u: goto label_1c15c4;
        case 0x1c15c8u: goto label_1c15c8;
        case 0x1c15ccu: goto label_1c15cc;
        case 0x1c15d0u: goto label_1c15d0;
        case 0x1c15d4u: goto label_1c15d4;
        case 0x1c15d8u: goto label_1c15d8;
        case 0x1c15dcu: goto label_1c15dc;
        case 0x1c15e0u: goto label_1c15e0;
        case 0x1c15e4u: goto label_1c15e4;
        case 0x1c15e8u: goto label_1c15e8;
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15f0u: goto label_1c15f0;
        case 0x1c15f4u: goto label_1c15f4;
        case 0x1c15f8u: goto label_1c15f8;
        case 0x1c15fcu: goto label_1c15fc;
        case 0x1c1600u: goto label_1c1600;
        case 0x1c1604u: goto label_1c1604;
        case 0x1c1608u: goto label_1c1608;
        case 0x1c160cu: goto label_1c160c;
        case 0x1c1610u: goto label_1c1610;
        case 0x1c1614u: goto label_1c1614;
        case 0x1c1618u: goto label_1c1618;
        case 0x1c161cu: goto label_1c161c;
        case 0x1c1620u: goto label_1c1620;
        case 0x1c1624u: goto label_1c1624;
        case 0x1c1628u: goto label_1c1628;
        case 0x1c162cu: goto label_1c162c;
        case 0x1c1630u: goto label_1c1630;
        case 0x1c1634u: goto label_1c1634;
        case 0x1c1638u: goto label_1c1638;
        case 0x1c163cu: goto label_1c163c;
        case 0x1c1640u: goto label_1c1640;
        case 0x1c1644u: goto label_1c1644;
        case 0x1c1648u: goto label_1c1648;
        case 0x1c164cu: goto label_1c164c;
        case 0x1c1650u: goto label_1c1650;
        case 0x1c1654u: goto label_1c1654;
        case 0x1c1658u: goto label_1c1658;
        case 0x1c165cu: goto label_1c165c;
        case 0x1c1660u: goto label_1c1660;
        case 0x1c1664u: goto label_1c1664;
        case 0x1c1668u: goto label_1c1668;
        case 0x1c166cu: goto label_1c166c;
        case 0x1c1670u: goto label_1c1670;
        case 0x1c1674u: goto label_1c1674;
        case 0x1c1678u: goto label_1c1678;
        case 0x1c167cu: goto label_1c167c;
        case 0x1c1680u: goto label_1c1680;
        case 0x1c1684u: goto label_1c1684;
        case 0x1c1688u: goto label_1c1688;
        case 0x1c168cu: goto label_1c168c;
        case 0x1c1690u: goto label_1c1690;
        case 0x1c1694u: goto label_1c1694;
        case 0x1c1698u: goto label_1c1698;
        case 0x1c169cu: goto label_1c169c;
        case 0x1c16a0u: goto label_1c16a0;
        case 0x1c16a4u: goto label_1c16a4;
        case 0x1c16a8u: goto label_1c16a8;
        case 0x1c16acu: goto label_1c16ac;
        case 0x1c16b0u: goto label_1c16b0;
        case 0x1c16b4u: goto label_1c16b4;
        case 0x1c16b8u: goto label_1c16b8;
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c0u: goto label_1c16c0;
        case 0x1c16c4u: goto label_1c16c4;
        case 0x1c16c8u: goto label_1c16c8;
        case 0x1c16ccu: goto label_1c16cc;
        case 0x1c16d0u: goto label_1c16d0;
        case 0x1c16d4u: goto label_1c16d4;
        case 0x1c16d8u: goto label_1c16d8;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e0u: goto label_1c16e0;
        case 0x1c16e4u: goto label_1c16e4;
        case 0x1c16e8u: goto label_1c16e8;
        case 0x1c16ecu: goto label_1c16ec;
        case 0x1c16f0u: goto label_1c16f0;
        case 0x1c16f4u: goto label_1c16f4;
        case 0x1c16f8u: goto label_1c16f8;
        case 0x1c16fcu: goto label_1c16fc;
        case 0x1c1700u: goto label_1c1700;
        case 0x1c1704u: goto label_1c1704;
        case 0x1c1708u: goto label_1c1708;
        case 0x1c170cu: goto label_1c170c;
        case 0x1c1710u: goto label_1c1710;
        case 0x1c1714u: goto label_1c1714;
        case 0x1c1718u: goto label_1c1718;
        case 0x1c171cu: goto label_1c171c;
        case 0x1c1720u: goto label_1c1720;
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1728u: goto label_1c1728;
        case 0x1c172cu: goto label_1c172c;
        case 0x1c1730u: goto label_1c1730;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1738u: goto label_1c1738;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1740u: goto label_1c1740;
        case 0x1c1744u: goto label_1c1744;
        case 0x1c1748u: goto label_1c1748;
        case 0x1c174cu: goto label_1c174c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1754u: goto label_1c1754;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c175cu: goto label_1c175c;
        case 0x1c1760u: goto label_1c1760;
        case 0x1c1764u: goto label_1c1764;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c176cu: goto label_1c176c;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c1774u: goto label_1c1774;
        case 0x1c1778u: goto label_1c1778;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c1780u: goto label_1c1780;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1788u: goto label_1c1788;
        case 0x1c178cu: goto label_1c178c;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c1794u: goto label_1c1794;
        case 0x1c1798u: goto label_1c1798;
        case 0x1c179cu: goto label_1c179c;
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17acu: goto label_1c17ac;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17b4u: goto label_1c17b4;
        case 0x1c17b8u: goto label_1c17b8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c17c4u: goto label_1c17c4;
        case 0x1c17c8u: goto label_1c17c8;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d0u: goto label_1c17d0;
        case 0x1c17d4u: goto label_1c17d4;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17dcu: goto label_1c17dc;
        case 0x1c17e0u: goto label_1c17e0;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17e8u: goto label_1c17e8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f0u: goto label_1c17f0;
        case 0x1c17f4u: goto label_1c17f4;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1800u: goto label_1c1800;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c1808u: goto label_1c1808;
        case 0x1c180cu: goto label_1c180c;
        case 0x1c1810u: goto label_1c1810;
        case 0x1c1814u: goto label_1c1814;
        case 0x1c1818u: goto label_1c1818;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1820u: goto label_1c1820;
        case 0x1c1824u: goto label_1c1824;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c182cu: goto label_1c182c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1834u: goto label_1c1834;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c183cu: goto label_1c183c;
        default: break;
    }

    ctx->pc = 0x1c1550u;

label_1c1550:
    // 0x1c1550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1554:
    // 0x1c1554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1558:
    // 0x1c1558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c155c:
    // 0x1c155c: 0xc071236  jal         func_1C48D8
label_1c1560:
    if (ctx->pc == 0x1C1560u) {
        ctx->pc = 0x1C1560u;
            // 0x1c1560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1564u;
        goto label_1c1564;
    }
    ctx->pc = 0x1C155Cu;
    SET_GPR_U32(ctx, 31, 0x1C1564u);
    ctx->pc = 0x1C1560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C155Cu;
            // 0x1c1560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1564u; }
        if (ctx->pc != 0x1C1564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1564u; }
        if (ctx->pc != 0x1C1564u) { return; }
    }
    ctx->pc = 0x1C1564u;
label_1c1564:
    // 0x1c1564: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1568:
    // 0x1c1568: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c156c:
    // 0x1c156c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1570:
    // 0x1c1570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1574:
    // 0x1c1574: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
label_1c1578:
    // 0x1c1578: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_1c157c:
    // 0x1c157c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c157cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1580:
    // 0x1c1580: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1584:
    if (ctx->pc == 0x1C1584u) {
        ctx->pc = 0x1C1584u;
            // 0x1c1584: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1588u;
        goto label_1c1588;
    }
    ctx->pc = 0x1C1580u;
    {
        const bool branch_taken_0x1c1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1580u;
            // 0x1c1584: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1580) {
            ctx->pc = 0x1C15A8u;
            goto label_1c15a8;
        }
    }
    ctx->pc = 0x1C1588u;
label_1c1588:
    // 0x1c1588: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1c1588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1c158c:
    // 0x1c158c: 0x40f809  jalr        $v0
label_1c1590:
    if (ctx->pc == 0x1C1590u) {
        ctx->pc = 0x1C1594u;
        goto label_1c1594;
    }
    ctx->pc = 0x1C158Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1594u; }
            if (ctx->pc != 0x1C1594u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1594u;
label_1c1594:
    // 0x1c1594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1598:
    // 0x1c1598: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c159c:
    // 0x1c159c: 0x3e00008  jr          $ra
label_1c15a0:
    if (ctx->pc == 0x1C15A0u) {
        ctx->pc = 0x1C15A0u;
            // 0x1c15a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C15A4u;
        goto label_1c15a4;
    }
    ctx->pc = 0x1C159Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C15A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C159Cu;
            // 0x1c15a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C15A4u;
label_1c15a4:
    // 0x1c15a4: 0x0  nop
    ctx->pc = 0x1c15a4u;
    // NOP
label_1c15a8:
    // 0x1c15a8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c15ac:
    // 0x1c15ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c15acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c15b0:
    // 0x1c15b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c15b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c15b4:
    // 0x1c15b4: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c15b8:
    // 0x1c15b8: 0x80711fe  j           func_1C47F8
label_1c15bc:
    if (ctx->pc == 0x1C15BCu) {
        ctx->pc = 0x1C15BCu;
            // 0x1c15bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C15C0u;
        goto label_1c15c0;
    }
    ctx->pc = 0x1C15B8u;
    ctx->pc = 0x1C15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15B8u;
            // 0x1c15bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C15C0u;
label_1c15c0:
    // 0x1c15c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c15c4:
    // 0x1c15c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c15c8:
    // 0x1c15c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c15cc:
    // 0x1c15cc: 0xc071236  jal         func_1C48D8
label_1c15d0:
    if (ctx->pc == 0x1C15D0u) {
        ctx->pc = 0x1C15D0u;
            // 0x1c15d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C15D4u;
        goto label_1c15d4;
    }
    ctx->pc = 0x1C15CCu;
    SET_GPR_U32(ctx, 31, 0x1C15D4u);
    ctx->pc = 0x1C15D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15CCu;
            // 0x1c15d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    }
    ctx->pc = 0x1C15D4u;
label_1c15d4:
    // 0x1c15d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c15d8:
    // 0x1c15d8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c15d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c15dc:
    // 0x1c15dc: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c15e0:
    // 0x1c15e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c15e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c15e4:
    // 0x1c15e4: 0x24c6b990  addiu       $a2, $a2, -0x4670
    ctx->pc = 0x1c15e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949264));
label_1c15e8:
    // 0x1c15e8: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x1c15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_1c15ec:
    // 0x1c15ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c15ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c15f0:
    // 0x1c15f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c15f4:
    if (ctx->pc == 0x1C15F4u) {
        ctx->pc = 0x1C15F4u;
            // 0x1c15f4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C15F8u;
        goto label_1c15f8;
    }
    ctx->pc = 0x1C15F0u;
    {
        const bool branch_taken_0x1c15f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15F0u;
            // 0x1c15f4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15f0) {
            ctx->pc = 0x1C1618u;
            goto label_1c1618;
        }
    }
    ctx->pc = 0x1C15F8u;
label_1c15f8:
    // 0x1c15f8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1c15fc:
    // 0x1c15fc: 0x40f809  jalr        $v0
label_1c1600:
    if (ctx->pc == 0x1C1600u) {
        ctx->pc = 0x1C1604u;
        goto label_1c1604;
    }
    ctx->pc = 0x1C15FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1604u; }
            if (ctx->pc != 0x1C1604u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1604u;
label_1c1604:
    // 0x1c1604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1608:
    // 0x1c1608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c160c:
    // 0x1c160c: 0x3e00008  jr          $ra
label_1c1610:
    if (ctx->pc == 0x1C1610u) {
        ctx->pc = 0x1C1610u;
            // 0x1c1610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1614u;
        goto label_1c1614;
    }
    ctx->pc = 0x1C160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C160Cu;
            // 0x1c1610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1614u;
label_1c1614:
    // 0x1c1614: 0x0  nop
    ctx->pc = 0x1c1614u;
    // NOP
label_1c1618:
    // 0x1c1618: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c161c:
    // 0x1c161c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c161cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1620:
    // 0x1c1620: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1624:
    // 0x1c1624: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1628:
    // 0x1c1628: 0x80711fe  j           func_1C47F8
label_1c162c:
    if (ctx->pc == 0x1C162Cu) {
        ctx->pc = 0x1C162Cu;
            // 0x1c162c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1630u;
        goto label_1c1630;
    }
    ctx->pc = 0x1C1628u;
    ctx->pc = 0x1C162Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1628u;
            // 0x1c162c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1630u;
label_1c1630:
    // 0x1c1630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1634:
    // 0x1c1634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1638:
    // 0x1c1638: 0xc071236  jal         func_1C48D8
label_1c163c:
    if (ctx->pc == 0x1C163Cu) {
        ctx->pc = 0x1C1640u;
        goto label_1c1640;
    }
    ctx->pc = 0x1C1638u;
    SET_GPR_U32(ctx, 31, 0x1C1640u);
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1640u; }
        if (ctx->pc != 0x1C1640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1640u; }
        if (ctx->pc != 0x1C1640u) { return; }
    }
    ctx->pc = 0x1C1640u;
label_1c1640:
    // 0x1c1640: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1644:
    // 0x1c1644: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1648:
    // 0x1c1648: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c164c:
    // 0x1c164c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c164cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1650:
    // 0x1c1650: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1654:
    // 0x1c1654: 0x24c6b9a8  addiu       $a2, $a2, -0x4658
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949288));
label_1c1658:
    // 0x1c1658: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c165c:
    // 0x1c165c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c165cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1660:
    // 0x1c1660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c1664:
    if (ctx->pc == 0x1C1664u) {
        ctx->pc = 0x1C1664u;
            // 0x1c1664: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1668u;
        goto label_1c1668;
    }
    ctx->pc = 0x1C1660u;
    {
        const bool branch_taken_0x1c1660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1660u;
            // 0x1c1664: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1660) {
            ctx->pc = 0x1C1680u;
            goto label_1c1680;
        }
    }
    ctx->pc = 0x1C1668u;
label_1c1668:
    // 0x1c1668: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1c1668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1c166c:
    // 0x1c166c: 0x40f809  jalr        $v0
label_1c1670:
    if (ctx->pc == 0x1C1670u) {
        ctx->pc = 0x1C1674u;
        goto label_1c1674;
    }
    ctx->pc = 0x1C166Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1674u; }
            if (ctx->pc != 0x1C1674u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1674u;
label_1c1674:
    // 0x1c1674: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1678:
    if (ctx->pc == 0x1C1678u) {
        ctx->pc = 0x1C1678u;
            // 0x1c1678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C167Cu;
        goto label_1c167c;
    }
    ctx->pc = 0x1C1674u;
    {
        const bool branch_taken_0x1c1674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1674u;
            // 0x1c1678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1674) {
            ctx->pc = 0x1C1690u;
            goto label_1c1690;
        }
    }
    ctx->pc = 0x1C167Cu;
label_1c167c:
    // 0x1c167c: 0x0  nop
    ctx->pc = 0x1c167cu;
    // NOP
label_1c1680:
    // 0x1c1680: 0xc0711fe  jal         func_1C47F8
label_1c1684:
    if (ctx->pc == 0x1C1684u) {
        ctx->pc = 0x1C1688u;
        goto label_1c1688;
    }
    ctx->pc = 0x1C1680u;
    SET_GPR_U32(ctx, 31, 0x1C1688u);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    }
    ctx->pc = 0x1C1688u;
label_1c1688:
    // 0x1c1688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c168c:
    // 0x1c168c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1690:
    // 0x1c1690: 0x3e00008  jr          $ra
label_1c1694:
    if (ctx->pc == 0x1C1694u) {
        ctx->pc = 0x1C1694u;
            // 0x1c1694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1698u;
        goto label_1c1698;
    }
    ctx->pc = 0x1C1690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1690u;
            // 0x1c1694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1698u;
label_1c1698:
    // 0x1c1698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c169c:
    // 0x1c169c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c16a0:
    // 0x1c16a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c16a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c16a4:
    // 0x1c16a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c16a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c16a8:
    // 0x1c16a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c16a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c16ac:
    // 0x1c16ac: 0xc071236  jal         func_1C48D8
label_1c16b0:
    if (ctx->pc == 0x1C16B0u) {
        ctx->pc = 0x1C16B0u;
            // 0x1c16b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C16B4u;
        goto label_1c16b4;
    }
    ctx->pc = 0x1C16ACu;
    SET_GPR_U32(ctx, 31, 0x1C16B4u);
    ctx->pc = 0x1C16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16ACu;
            // 0x1c16b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    }
    ctx->pc = 0x1C16B4u;
label_1c16b4:
    // 0x1c16b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c16b8:
    // 0x1c16b8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c16b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c16bc:
    // 0x1c16bc: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c16c0:
    // 0x1c16c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c16c4:
    // 0x1c16c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c16c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c16c8:
    // 0x1c16c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c16c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16cc:
    // 0x1c16cc: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x1c16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
label_1c16d0:
    // 0x1c16d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c16d4:
    if (ctx->pc == 0x1C16D4u) {
        ctx->pc = 0x1C16D4u;
            // 0x1c16d4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C16D8u;
        goto label_1c16d8;
    }
    ctx->pc = 0x1C16D0u;
    {
        const bool branch_taken_0x1c16d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16D0u;
            // 0x1c16d4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16d0) {
            ctx->pc = 0x1C16F0u;
            goto label_1c16f0;
        }
    }
    ctx->pc = 0x1C16D8u;
label_1c16d8:
    // 0x1c16d8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1c16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1c16dc:
    // 0x1c16dc: 0x40f809  jalr        $v0
label_1c16e0:
    if (ctx->pc == 0x1C16E0u) {
        ctx->pc = 0x1C16E4u;
        goto label_1c16e4;
    }
    ctx->pc = 0x1C16DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C16E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C16E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C16E4u; }
            if (ctx->pc != 0x1C16E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C16E4u;
label_1c16e4:
    // 0x1c16e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c16e8:
    if (ctx->pc == 0x1C16E8u) {
        ctx->pc = 0x1C16E8u;
            // 0x1c16e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C16ECu;
        goto label_1c16ec;
    }
    ctx->pc = 0x1C16E4u;
    {
        const bool branch_taken_0x1c16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16E4u;
            // 0x1c16e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16e4) {
            ctx->pc = 0x1C1708u;
            goto label_1c1708;
        }
    }
    ctx->pc = 0x1C16ECu;
label_1c16ec:
    // 0x1c16ec: 0x0  nop
    ctx->pc = 0x1c16ecu;
    // NOP
label_1c16f0:
    // 0x1c16f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c16f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c16f4:
    // 0x1c16f4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1c16f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1c16f8:
    // 0x1c16f8: 0xc0711fe  jal         func_1C47F8
label_1c16fc:
    if (ctx->pc == 0x1C16FCu) {
        ctx->pc = 0x1C16FCu;
            // 0x1c16fc: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->pc = 0x1C1700u;
        goto label_1c1700;
    }
    ctx->pc = 0x1C16F8u;
    SET_GPR_U32(ctx, 31, 0x1C1700u);
    ctx->pc = 0x1C16FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16F8u;
            // 0x1c16fc: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1700u; }
        if (ctx->pc != 0x1C1700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1700u; }
        if (ctx->pc != 0x1C1700u) { return; }
    }
    ctx->pc = 0x1C1700u;
label_1c1700:
    // 0x1c1700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1704:
    // 0x1c1704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1708:
    // 0x1c1708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c170c:
    // 0x1c170c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1710:
    // 0x1c1710: 0x3e00008  jr          $ra
label_1c1714:
    if (ctx->pc == 0x1C1714u) {
        ctx->pc = 0x1C1714u;
            // 0x1c1714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1718u;
        goto label_1c1718;
    }
    ctx->pc = 0x1C1710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1710u;
            // 0x1c1714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1718u;
label_1c1718:
    // 0x1c1718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c171c:
    // 0x1c171c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1720:
    // 0x1c1720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1724:
    // 0x1c1724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1728:
    // 0x1c1728: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c172c:
    // 0x1c172c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1730:
    // 0x1c1730: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1734:
    // 0x1c1734: 0xc071236  jal         func_1C48D8
label_1c1738:
    if (ctx->pc == 0x1C1738u) {
        ctx->pc = 0x1C1738u;
            // 0x1c1738: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C173Cu;
        goto label_1c173c;
    }
    ctx->pc = 0x1C1734u;
    SET_GPR_U32(ctx, 31, 0x1C173Cu);
    ctx->pc = 0x1C1738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1734u;
            // 0x1c1738: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C173Cu; }
        if (ctx->pc != 0x1C173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C173Cu; }
        if (ctx->pc != 0x1C173Cu) { return; }
    }
    ctx->pc = 0x1C173Cu;
label_1c173c:
    // 0x1c173c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1740:
    // 0x1c1740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1744:
    // 0x1c1744: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1748:
    // 0x1c1748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c174c:
    // 0x1c174c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c174cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1750:
    // 0x1c1750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1754:
    // 0x1c1754: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1758:
    if (ctx->pc == 0x1C1758u) {
        ctx->pc = 0x1C1758u;
            // 0x1c1758: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C175Cu;
        goto label_1c175c;
    }
    ctx->pc = 0x1C1754u;
    {
        const bool branch_taken_0x1c1754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1754u;
            // 0x1c1758: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1754) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C175Cu;
label_1c175c:
    // 0x1c175c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1c175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1c1760:
    // 0x1c1760: 0x40f809  jalr        $v0
label_1c1764:
    if (ctx->pc == 0x1C1764u) {
        ctx->pc = 0x1C1768u;
        goto label_1c1768;
    }
    ctx->pc = 0x1C1760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1768u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1768u; }
            if (ctx->pc != 0x1C1768u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1768u;
label_1c1768:
    // 0x1c1768: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c176c:
    if (ctx->pc == 0x1C176Cu) {
        ctx->pc = 0x1C176Cu;
            // 0x1c176c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C1770u;
        goto label_1c1770;
    }
    ctx->pc = 0x1C1768u;
    {
        const bool branch_taken_0x1c1768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1768u;
            // 0x1c176c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1768) {
            ctx->pc = 0x1C1790u;
            goto label_1c1790;
        }
    }
    ctx->pc = 0x1C1770u;
label_1c1770:
    // 0x1c1770: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1774:
    // 0x1c1774: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1778:
    // 0x1c1778: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c177c:
    // 0x1c177c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1c177cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_1c1780:
    // 0x1c1780: 0xc0711fe  jal         func_1C47F8
label_1c1784:
    if (ctx->pc == 0x1C1784u) {
        ctx->pc = 0x1C1784u;
            // 0x1c1784: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x1C1788u;
        goto label_1c1788;
    }
    ctx->pc = 0x1C1780u;
    SET_GPR_U32(ctx, 31, 0x1C1788u);
    ctx->pc = 0x1C1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1780u;
            // 0x1c1784: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1788u; }
        if (ctx->pc != 0x1C1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1788u; }
        if (ctx->pc != 0x1C1788u) { return; }
    }
    ctx->pc = 0x1C1788u;
label_1c1788:
    // 0x1c1788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c178c:
    // 0x1c178c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1790:
    // 0x1c1790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1794:
    // 0x1c1794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1798:
    // 0x1c1798: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c179c:
    // 0x1c179c: 0x3e00008  jr          $ra
label_1c17a0:
    if (ctx->pc == 0x1C17A0u) {
        ctx->pc = 0x1C17A0u;
            // 0x1c17a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C17A4u;
        goto label_1c17a4;
    }
    ctx->pc = 0x1C179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C179Cu;
            // 0x1c17a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C17A4u;
label_1c17a4:
    // 0x1c17a4: 0x0  nop
    ctx->pc = 0x1c17a4u;
    // NOP
label_1c17a8:
    // 0x1c17a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c17a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c17ac:
    // 0x1c17ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c17acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c17b0:
    // 0x1c17b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c17b4:
    // 0x1c17b4: 0xc071236  jal         func_1C48D8
label_1c17b8:
    if (ctx->pc == 0x1C17B8u) {
        ctx->pc = 0x1C17B8u;
            // 0x1c17b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C17BCu;
        goto label_1c17bc;
    }
    ctx->pc = 0x1C17B4u;
    SET_GPR_U32(ctx, 31, 0x1C17BCu);
    ctx->pc = 0x1C17B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17B4u;
            // 0x1c17b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17BCu; }
        if (ctx->pc != 0x1C17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17BCu; }
        if (ctx->pc != 0x1C17BCu) { return; }
    }
    ctx->pc = 0x1C17BCu;
label_1c17bc:
    // 0x1c17bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c17bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c17c0:
    // 0x1c17c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c17c4:
    // 0x1c17c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c17c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c17c8:
    // 0x1c17c8: 0x8070322  j           func_1C0C88
label_1c17cc:
    if (ctx->pc == 0x1C17CCu) {
        ctx->pc = 0x1C17CCu;
            // 0x1c17cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C17D0u;
        goto label_1c17d0;
    }
    ctx->pc = 0x1C17C8u;
    ctx->pc = 0x1C17CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17C8u;
            // 0x1c17cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C17D0u;
label_1c17d0:
    // 0x1c17d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c17d4:
    // 0x1c17d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c17d8:
    // 0x1c17d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c17d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c17dc:
    // 0x1c17dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c17e0:
    // 0x1c17e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c17e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c17e4:
    // 0x1c17e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c17e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c17e8:
    // 0x1c17e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c17ec:
    // 0x1c17ec: 0xc071236  jal         func_1C48D8
label_1c17f0:
    if (ctx->pc == 0x1C17F0u) {
        ctx->pc = 0x1C17F0u;
            // 0x1c17f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C17F4u;
        goto label_1c17f4;
    }
    ctx->pc = 0x1C17ECu;
    SET_GPR_U32(ctx, 31, 0x1C17F4u);
    ctx->pc = 0x1C17F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17ECu;
            // 0x1c17f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17F4u; }
        if (ctx->pc != 0x1C17F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17F4u; }
        if (ctx->pc != 0x1C17F4u) { return; }
    }
    ctx->pc = 0x1C17F4u;
label_1c17f4:
    // 0x1c17f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c17f8:
    // 0x1c17f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c17fc:
    // 0x1c17fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c17fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1800:
    // 0x1c1800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1804:
    // 0x1c1804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1808:
    // 0x1c1808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c180c:
    // 0x1c180c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c180cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1810:
    // 0x1c1810: 0x80703b6  j           func_1C0ED8
label_1c1814:
    if (ctx->pc == 0x1C1814u) {
        ctx->pc = 0x1C1814u;
            // 0x1c1814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1818u;
        goto label_1c1818;
    }
    ctx->pc = 0x1C1810u;
    ctx->pc = 0x1C1814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1810u;
            // 0x1c1814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0ED8u;
    if (runtime->hasFunction(0x1C0ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1C0ED8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C0ED8_0x1c0ed8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1818u;
label_1c1818:
    // 0x1c1818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c181c:
    // 0x1c181c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1820:
    // 0x1c1820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c1824:
    // 0x1c1824: 0xc071236  jal         func_1C48D8
label_1c1828:
    if (ctx->pc == 0x1C1828u) {
        ctx->pc = 0x1C1828u;
            // 0x1c1828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C182Cu;
        goto label_1c182c;
    }
    ctx->pc = 0x1C1824u;
    SET_GPR_U32(ctx, 31, 0x1C182Cu);
    ctx->pc = 0x1C1828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1824u;
            // 0x1c1828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C182Cu; }
        if (ctx->pc != 0x1C182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C182Cu; }
        if (ctx->pc != 0x1C182Cu) { return; }
    }
    ctx->pc = 0x1C182Cu;
label_1c182c:
    // 0x1c182c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1830:
    // 0x1c1830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1834:
    // 0x1c1834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1838:
    // 0x1c1838: 0x8070492  j           func_1C1248
label_1c183c:
    if (ctx->pc == 0x1C183Cu) {
        ctx->pc = 0x1C183Cu;
            // 0x1c183c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1840u;
        goto label_fallthrough_0x1c1838;
    }
    ctx->pc = 0x1C1838u;
    ctx->pc = 0x1C183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1838u;
            // 0x1c183c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1248u;
    if (runtime->hasFunction(0x1C1248u)) {
        auto targetFn = runtime->lookupFunction(0x1C1248u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C1248_0x1c1248(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1c1838:
    ctx->pc = 0x1C1840u;
}
