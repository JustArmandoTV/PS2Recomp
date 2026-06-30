#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1600
// Address: 0x4d1600 - 0x4d1860
void sub_004D1600_0x4d1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1600_0x4d1600");
#endif

    switch (ctx->pc) {
        case 0x4d1600u: goto label_4d1600;
        case 0x4d1604u: goto label_4d1604;
        case 0x4d1608u: goto label_4d1608;
        case 0x4d160cu: goto label_4d160c;
        case 0x4d1610u: goto label_4d1610;
        case 0x4d1614u: goto label_4d1614;
        case 0x4d1618u: goto label_4d1618;
        case 0x4d161cu: goto label_4d161c;
        case 0x4d1620u: goto label_4d1620;
        case 0x4d1624u: goto label_4d1624;
        case 0x4d1628u: goto label_4d1628;
        case 0x4d162cu: goto label_4d162c;
        case 0x4d1630u: goto label_4d1630;
        case 0x4d1634u: goto label_4d1634;
        case 0x4d1638u: goto label_4d1638;
        case 0x4d163cu: goto label_4d163c;
        case 0x4d1640u: goto label_4d1640;
        case 0x4d1644u: goto label_4d1644;
        case 0x4d1648u: goto label_4d1648;
        case 0x4d164cu: goto label_4d164c;
        case 0x4d1650u: goto label_4d1650;
        case 0x4d1654u: goto label_4d1654;
        case 0x4d1658u: goto label_4d1658;
        case 0x4d165cu: goto label_4d165c;
        case 0x4d1660u: goto label_4d1660;
        case 0x4d1664u: goto label_4d1664;
        case 0x4d1668u: goto label_4d1668;
        case 0x4d166cu: goto label_4d166c;
        case 0x4d1670u: goto label_4d1670;
        case 0x4d1674u: goto label_4d1674;
        case 0x4d1678u: goto label_4d1678;
        case 0x4d167cu: goto label_4d167c;
        case 0x4d1680u: goto label_4d1680;
        case 0x4d1684u: goto label_4d1684;
        case 0x4d1688u: goto label_4d1688;
        case 0x4d168cu: goto label_4d168c;
        case 0x4d1690u: goto label_4d1690;
        case 0x4d1694u: goto label_4d1694;
        case 0x4d1698u: goto label_4d1698;
        case 0x4d169cu: goto label_4d169c;
        case 0x4d16a0u: goto label_4d16a0;
        case 0x4d16a4u: goto label_4d16a4;
        case 0x4d16a8u: goto label_4d16a8;
        case 0x4d16acu: goto label_4d16ac;
        case 0x4d16b0u: goto label_4d16b0;
        case 0x4d16b4u: goto label_4d16b4;
        case 0x4d16b8u: goto label_4d16b8;
        case 0x4d16bcu: goto label_4d16bc;
        case 0x4d16c0u: goto label_4d16c0;
        case 0x4d16c4u: goto label_4d16c4;
        case 0x4d16c8u: goto label_4d16c8;
        case 0x4d16ccu: goto label_4d16cc;
        case 0x4d16d0u: goto label_4d16d0;
        case 0x4d16d4u: goto label_4d16d4;
        case 0x4d16d8u: goto label_4d16d8;
        case 0x4d16dcu: goto label_4d16dc;
        case 0x4d16e0u: goto label_4d16e0;
        case 0x4d16e4u: goto label_4d16e4;
        case 0x4d16e8u: goto label_4d16e8;
        case 0x4d16ecu: goto label_4d16ec;
        case 0x4d16f0u: goto label_4d16f0;
        case 0x4d16f4u: goto label_4d16f4;
        case 0x4d16f8u: goto label_4d16f8;
        case 0x4d16fcu: goto label_4d16fc;
        case 0x4d1700u: goto label_4d1700;
        case 0x4d1704u: goto label_4d1704;
        case 0x4d1708u: goto label_4d1708;
        case 0x4d170cu: goto label_4d170c;
        case 0x4d1710u: goto label_4d1710;
        case 0x4d1714u: goto label_4d1714;
        case 0x4d1718u: goto label_4d1718;
        case 0x4d171cu: goto label_4d171c;
        case 0x4d1720u: goto label_4d1720;
        case 0x4d1724u: goto label_4d1724;
        case 0x4d1728u: goto label_4d1728;
        case 0x4d172cu: goto label_4d172c;
        case 0x4d1730u: goto label_4d1730;
        case 0x4d1734u: goto label_4d1734;
        case 0x4d1738u: goto label_4d1738;
        case 0x4d173cu: goto label_4d173c;
        case 0x4d1740u: goto label_4d1740;
        case 0x4d1744u: goto label_4d1744;
        case 0x4d1748u: goto label_4d1748;
        case 0x4d174cu: goto label_4d174c;
        case 0x4d1750u: goto label_4d1750;
        case 0x4d1754u: goto label_4d1754;
        case 0x4d1758u: goto label_4d1758;
        case 0x4d175cu: goto label_4d175c;
        case 0x4d1760u: goto label_4d1760;
        case 0x4d1764u: goto label_4d1764;
        case 0x4d1768u: goto label_4d1768;
        case 0x4d176cu: goto label_4d176c;
        case 0x4d1770u: goto label_4d1770;
        case 0x4d1774u: goto label_4d1774;
        case 0x4d1778u: goto label_4d1778;
        case 0x4d177cu: goto label_4d177c;
        case 0x4d1780u: goto label_4d1780;
        case 0x4d1784u: goto label_4d1784;
        case 0x4d1788u: goto label_4d1788;
        case 0x4d178cu: goto label_4d178c;
        case 0x4d1790u: goto label_4d1790;
        case 0x4d1794u: goto label_4d1794;
        case 0x4d1798u: goto label_4d1798;
        case 0x4d179cu: goto label_4d179c;
        case 0x4d17a0u: goto label_4d17a0;
        case 0x4d17a4u: goto label_4d17a4;
        case 0x4d17a8u: goto label_4d17a8;
        case 0x4d17acu: goto label_4d17ac;
        case 0x4d17b0u: goto label_4d17b0;
        case 0x4d17b4u: goto label_4d17b4;
        case 0x4d17b8u: goto label_4d17b8;
        case 0x4d17bcu: goto label_4d17bc;
        case 0x4d17c0u: goto label_4d17c0;
        case 0x4d17c4u: goto label_4d17c4;
        case 0x4d17c8u: goto label_4d17c8;
        case 0x4d17ccu: goto label_4d17cc;
        case 0x4d17d0u: goto label_4d17d0;
        case 0x4d17d4u: goto label_4d17d4;
        case 0x4d17d8u: goto label_4d17d8;
        case 0x4d17dcu: goto label_4d17dc;
        case 0x4d17e0u: goto label_4d17e0;
        case 0x4d17e4u: goto label_4d17e4;
        case 0x4d17e8u: goto label_4d17e8;
        case 0x4d17ecu: goto label_4d17ec;
        case 0x4d17f0u: goto label_4d17f0;
        case 0x4d17f4u: goto label_4d17f4;
        case 0x4d17f8u: goto label_4d17f8;
        case 0x4d17fcu: goto label_4d17fc;
        case 0x4d1800u: goto label_4d1800;
        case 0x4d1804u: goto label_4d1804;
        case 0x4d1808u: goto label_4d1808;
        case 0x4d180cu: goto label_4d180c;
        case 0x4d1810u: goto label_4d1810;
        case 0x4d1814u: goto label_4d1814;
        case 0x4d1818u: goto label_4d1818;
        case 0x4d181cu: goto label_4d181c;
        case 0x4d1820u: goto label_4d1820;
        case 0x4d1824u: goto label_4d1824;
        case 0x4d1828u: goto label_4d1828;
        case 0x4d182cu: goto label_4d182c;
        case 0x4d1830u: goto label_4d1830;
        case 0x4d1834u: goto label_4d1834;
        case 0x4d1838u: goto label_4d1838;
        case 0x4d183cu: goto label_4d183c;
        case 0x4d1840u: goto label_4d1840;
        case 0x4d1844u: goto label_4d1844;
        case 0x4d1848u: goto label_4d1848;
        case 0x4d184cu: goto label_4d184c;
        case 0x4d1850u: goto label_4d1850;
        case 0x4d1854u: goto label_4d1854;
        case 0x4d1858u: goto label_4d1858;
        case 0x4d185cu: goto label_4d185c;
        default: break;
    }

    ctx->pc = 0x4d1600u;

label_4d1600:
    // 0x4d1600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d1604:
    // 0x4d1604: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d1604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d1608:
    // 0x4d1608: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d1608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d160c:
    // 0x4d160c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d1610:
    // 0x4d1610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d1610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d1614:
    // 0x4d1614: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d1614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d1618:
    // 0x4d1618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d161c:
    // 0x4d161c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d1620:
    // 0x4d1620: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d1620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d1624:
    // 0x4d1624: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d1624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d1628:
    // 0x4d1628: 0xc10ca68  jal         func_4329A0
label_4d162c:
    if (ctx->pc == 0x4D162Cu) {
        ctx->pc = 0x4D162Cu;
            // 0x4d162c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D1630u;
        goto label_4d1630;
    }
    ctx->pc = 0x4D1628u;
    SET_GPR_U32(ctx, 31, 0x4D1630u);
    ctx->pc = 0x4D162Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1628u;
            // 0x4d162c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1630u; }
        if (ctx->pc != 0x4D1630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1630u; }
        if (ctx->pc != 0x4D1630u) { return; }
    }
    ctx->pc = 0x4D1630u;
label_4d1630:
    // 0x4d1630: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d1630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d1634:
    // 0x4d1634: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d1634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d1638:
    // 0x4d1638: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d163c:
    // 0x4d163c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d1640:
    // 0x4d1640: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d1640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d1644:
    // 0x4d1644: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d1644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d1648:
    // 0x4d1648: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d1648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d164c:
    // 0x4d164c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d1650:
    // 0x4d1650: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d1650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d1654:
    // 0x4d1654: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d1658:
    // 0x4d1658: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d1658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d165c:
    // 0x4d165c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d165cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d1660:
    // 0x4d1660: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d1660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d1664:
    // 0x4d1664: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d1664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d1668:
    // 0x4d1668: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d1668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d166c:
    // 0x4d166c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d1670:
    // 0x4d1670: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d1670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d1674:
    // 0x4d1674: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d1674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d1678:
    // 0x4d1678: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d1678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d167c:
    // 0x4d167c: 0xc0582cc  jal         func_160B30
label_4d1680:
    if (ctx->pc == 0x4D1680u) {
        ctx->pc = 0x4D1680u;
            // 0x4d1680: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D1684u;
        goto label_4d1684;
    }
    ctx->pc = 0x4D167Cu;
    SET_GPR_U32(ctx, 31, 0x4D1684u);
    ctx->pc = 0x4D1680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D167Cu;
            // 0x4d1680: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1684u; }
        if (ctx->pc != 0x4D1684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1684u; }
        if (ctx->pc != 0x4D1684u) { return; }
    }
    ctx->pc = 0x4D1684u;
label_4d1684:
    // 0x4d1684: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d1684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d1688:
    // 0x4d1688: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d168c:
    // 0x4d168c: 0x24632108  addiu       $v1, $v1, 0x2108
    ctx->pc = 0x4d168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8456));
label_4d1690:
    // 0x4d1690: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d1694:
    // 0x4d1694: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d1694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d1698:
    // 0x4d1698: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d1698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d169c:
    // 0x4d169c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d169cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d16a0:
    // 0x4d16a0: 0xac44aa30  sw          $a0, -0x55D0($v0)
    ctx->pc = 0x4d16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945328), GPR_U32(ctx, 4));
label_4d16a4:
    // 0x4d16a4: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x4d16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
label_4d16a8:
    // 0x4d16a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d16ac:
    // 0x4d16ac: 0x24422158  addiu       $v0, $v0, 0x2158
    ctx->pc = 0x4d16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8536));
label_4d16b0:
    // 0x4d16b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d16b4:
    // 0x4d16b4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d16b8:
    // 0x4d16b8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d16bc:
    // 0x4d16bc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d16c0:
    // 0x4d16c0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d16c4:
    // 0x4d16c4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d16c8:
    // 0x4d16c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d16cc:
    // 0x4d16cc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d16d0:
    // 0x4d16d0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d16d4:
    // 0x4d16d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d16d8:
    // 0x4d16d8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d16dc:
    // 0x4d16dc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d16e0:
    // 0x4d16e0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4d16e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_4d16e4:
    // 0x4d16e4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4d16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_4d16e8:
    // 0x4d16e8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d16e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d16ec:
    // 0x4d16ec: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4d16f0:
    if (ctx->pc == 0x4D16F0u) {
        ctx->pc = 0x4D16F4u;
        goto label_4d16f4;
    }
    ctx->pc = 0x4D16ECu;
    {
        const bool branch_taken_0x4d16ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d16ec) {
            ctx->pc = 0x4D1788u;
            goto label_4d1788;
        }
    }
    ctx->pc = 0x4D16F4u;
label_4d16f4:
    // 0x4d16f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4d16f8:
    // 0x4d16f8: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4d16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d16fc:
    // 0x4d16fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d1700:
    // 0x4d1700: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d1700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d1704:
    // 0x4d1704: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4d1708:
    // 0x4d1708: 0xc040138  jal         func_1004E0
label_4d170c:
    if (ctx->pc == 0x4D170Cu) {
        ctx->pc = 0x4D170Cu;
            // 0x4d170c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D1710u;
        goto label_4d1710;
    }
    ctx->pc = 0x4D1708u;
    SET_GPR_U32(ctx, 31, 0x4D1710u);
    ctx->pc = 0x4D170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1708u;
            // 0x4d170c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1710u; }
        if (ctx->pc != 0x4D1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1710u; }
        if (ctx->pc != 0x4D1710u) { return; }
    }
    ctx->pc = 0x4D1710u;
label_4d1710:
    // 0x4d1710: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d1710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d1714:
    // 0x4d1714: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d1714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d1718:
    // 0x4d1718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d1718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d171c:
    // 0x4d171c: 0x24a517b0  addiu       $a1, $a1, 0x17B0
    ctx->pc = 0x4d171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
label_4d1720:
    // 0x4d1720: 0x24c60ec0  addiu       $a2, $a2, 0xEC0
    ctx->pc = 0x4d1720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3776));
label_4d1724:
    // 0x4d1724: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x4d1724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4d1728:
    // 0x4d1728: 0xc040840  jal         func_102100
label_4d172c:
    if (ctx->pc == 0x4D172Cu) {
        ctx->pc = 0x4D172Cu;
            // 0x4d172c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1730u;
        goto label_4d1730;
    }
    ctx->pc = 0x4D1728u;
    SET_GPR_U32(ctx, 31, 0x4D1730u);
    ctx->pc = 0x4D172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1728u;
            // 0x4d172c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1730u; }
        if (ctx->pc != 0x4D1730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1730u; }
        if (ctx->pc != 0x4D1730u) { return; }
    }
    ctx->pc = 0x4D1730u;
label_4d1730:
    // 0x4d1730: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d1730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d1734:
    // 0x4d1734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d1734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1738:
    // 0x4d1738: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d1738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d173c:
    // 0x4d173c: 0xc0788fc  jal         func_1E23F0
label_4d1740:
    if (ctx->pc == 0x4D1740u) {
        ctx->pc = 0x4D1740u;
            // 0x4d1740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1744u;
        goto label_4d1744;
    }
    ctx->pc = 0x4D173Cu;
    SET_GPR_U32(ctx, 31, 0x4D1744u);
    ctx->pc = 0x4D1740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D173Cu;
            // 0x4d1740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1744u; }
        if (ctx->pc != 0x4D1744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1744u; }
        if (ctx->pc != 0x4D1744u) { return; }
    }
    ctx->pc = 0x4D1744u;
label_4d1744:
    // 0x4d1744: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d1748:
    // 0x4d1748: 0xc0788fc  jal         func_1E23F0
label_4d174c:
    if (ctx->pc == 0x4D174Cu) {
        ctx->pc = 0x4D174Cu;
            // 0x4d174c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1750u;
        goto label_4d1750;
    }
    ctx->pc = 0x4D1748u;
    SET_GPR_U32(ctx, 31, 0x4D1750u);
    ctx->pc = 0x4D174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1748u;
            // 0x4d174c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1750u; }
        if (ctx->pc != 0x4D1750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1750u; }
        if (ctx->pc != 0x4D1750u) { return; }
    }
    ctx->pc = 0x4D1750u;
label_4d1750:
    // 0x4d1750: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d1750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1754:
    // 0x4d1754: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d1754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d1758:
    // 0x4d1758: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d1758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d175c:
    // 0x4d175c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d1760:
    // 0x4d1760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d1760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1764:
    // 0x4d1764: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d1768:
    // 0x4d1768: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d1768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d176c:
    // 0x4d176c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d176cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d1770:
    // 0x4d1770: 0xc0a997c  jal         func_2A65F0
label_4d1774:
    if (ctx->pc == 0x4D1774u) {
        ctx->pc = 0x4D1774u;
            // 0x4d1774: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D1778u;
        goto label_4d1778;
    }
    ctx->pc = 0x4D1770u;
    SET_GPR_U32(ctx, 31, 0x4D1778u);
    ctx->pc = 0x4D1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1770u;
            // 0x4d1774: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1778u; }
        if (ctx->pc != 0x4D1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1778u; }
        if (ctx->pc != 0x4D1778u) { return; }
    }
    ctx->pc = 0x4D1778u;
label_4d1778:
    // 0x4d1778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d1778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d177c:
    // 0x4d177c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d177cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d1780:
    // 0x4d1780: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d1784:
    if (ctx->pc == 0x4D1784u) {
        ctx->pc = 0x4D1784u;
            // 0x4d1784: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->pc = 0x4D1788u;
        goto label_4d1788;
    }
    ctx->pc = 0x4D1780u;
    {
        const bool branch_taken_0x4d1780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1780u;
            // 0x4d1784: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1780) {
            ctx->pc = 0x4D1754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d1754;
        }
    }
    ctx->pc = 0x4D1788u;
label_4d1788:
    // 0x4d1788: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d1788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d178c:
    // 0x4d178c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d1790:
    // 0x4d1790: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d1790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d1794:
    // 0x4d1794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d1794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1798:
    // 0x4d1798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d1798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d179c:
    // 0x4d179c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d17a0:
    // 0x4d17a0: 0x3e00008  jr          $ra
label_4d17a4:
    if (ctx->pc == 0x4D17A4u) {
        ctx->pc = 0x4D17A4u;
            // 0x4d17a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D17A8u;
        goto label_4d17a8;
    }
    ctx->pc = 0x4D17A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D17A0u;
            // 0x4d17a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D17A8u;
label_4d17a8:
    // 0x4d17a8: 0x0  nop
    ctx->pc = 0x4d17a8u;
    // NOP
label_4d17ac:
    // 0x4d17ac: 0x0  nop
    ctx->pc = 0x4d17acu;
    // NOP
label_4d17b0:
    // 0x4d17b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d17b4:
    // 0x4d17b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d17b8:
    // 0x4d17b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d17bc:
    // 0x4d17bc: 0xc12e6bc  jal         func_4B9AF0
label_4d17c0:
    if (ctx->pc == 0x4D17C0u) {
        ctx->pc = 0x4D17C0u;
            // 0x4d17c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D17C4u;
        goto label_4d17c4;
    }
    ctx->pc = 0x4D17BCu;
    SET_GPR_U32(ctx, 31, 0x4D17C4u);
    ctx->pc = 0x4D17C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D17BCu;
            // 0x4d17c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D17C4u; }
        if (ctx->pc != 0x4D17C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D17C4u; }
        if (ctx->pc != 0x4D17C4u) { return; }
    }
    ctx->pc = 0x4D17C4u;
label_4d17c4:
    // 0x4d17c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d17c8:
    // 0x4d17c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d17cc:
    // 0x4d17cc: 0x244221c0  addiu       $v0, $v0, 0x21C0
    ctx->pc = 0x4d17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
label_4d17d0:
    // 0x4d17d0: 0x24632200  addiu       $v1, $v1, 0x2200
    ctx->pc = 0x4d17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8704));
label_4d17d4:
    // 0x4d17d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4d17d8:
    // 0x4d17d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4d17dc:
    // 0x4d17dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d17dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d17e0:
    // 0x4d17e0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x4d17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_4d17e4:
    // 0x4d17e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d17e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d17e8:
    // 0x4d17e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d17e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d17ec:
    // 0x4d17ec: 0x3e00008  jr          $ra
label_4d17f0:
    if (ctx->pc == 0x4D17F0u) {
        ctx->pc = 0x4D17F0u;
            // 0x4d17f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D17F4u;
        goto label_4d17f4;
    }
    ctx->pc = 0x4D17ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D17F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D17ECu;
            // 0x4d17f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D17F4u;
label_4d17f4:
    // 0x4d17f4: 0x0  nop
    ctx->pc = 0x4d17f4u;
    // NOP
label_4d17f8:
    // 0x4d17f8: 0x0  nop
    ctx->pc = 0x4d17f8u;
    // NOP
label_4d17fc:
    // 0x4d17fc: 0x0  nop
    ctx->pc = 0x4d17fcu;
    // NOP
label_4d1800:
    // 0x4d1800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d1804:
    // 0x4d1804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d1804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d1808:
    // 0x4d1808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d180c:
    // 0x4d180c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d180cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d1810:
    // 0x4d1810: 0x8c840140  lw          $a0, 0x140($a0)
    ctx->pc = 0x4d1810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_4d1814:
    // 0x4d1814: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d1818:
    if (ctx->pc == 0x4D1818u) {
        ctx->pc = 0x4D1818u;
            // 0x4d1818: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x4D181Cu;
        goto label_4d181c;
    }
    ctx->pc = 0x4D1814u;
    {
        const bool branch_taken_0x4d1814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1814) {
            ctx->pc = 0x4D1818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1814u;
            // 0x4d1818: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1830u;
            goto label_4d1830;
        }
    }
    ctx->pc = 0x4D181Cu;
label_4d181c:
    // 0x4d181c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d181cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d1820:
    // 0x4d1820: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d1820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d1824:
    // 0x4d1824: 0x320f809  jalr        $t9
label_4d1828:
    if (ctx->pc == 0x4D1828u) {
        ctx->pc = 0x4D1828u;
            // 0x4d1828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D182Cu;
        goto label_4d182c;
    }
    ctx->pc = 0x4D1824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D182Cu);
        ctx->pc = 0x4D1828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1824u;
            // 0x4d1828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D182Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D182Cu; }
            if (ctx->pc != 0x4D182Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D182Cu;
label_4d182c:
    // 0x4d182c: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x4d182cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_4d1830:
    // 0x4d1830: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d1830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1834:
    // 0x4d1834: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d1838:
    if (ctx->pc == 0x4D1838u) {
        ctx->pc = 0x4D1838u;
            // 0x4d1838: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4D183Cu;
        goto label_4d183c;
    }
    ctx->pc = 0x4D1834u;
    {
        const bool branch_taken_0x4d1834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1834) {
            ctx->pc = 0x4D1838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1834u;
            // 0x4d1838: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1850u;
            goto label_4d1850;
        }
    }
    ctx->pc = 0x4D183Cu;
label_4d183c:
    // 0x4d183c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d183cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d1840:
    // 0x4d1840: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d1840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d1844:
    // 0x4d1844: 0x320f809  jalr        $t9
label_4d1848:
    if (ctx->pc == 0x4D1848u) {
        ctx->pc = 0x4D1848u;
            // 0x4d1848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D184Cu;
        goto label_4d184c;
    }
    ctx->pc = 0x4D1844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D184Cu);
        ctx->pc = 0x4D1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1844u;
            // 0x4d1848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D184Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D184Cu; }
            if (ctx->pc != 0x4D184Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D184Cu;
label_4d184c:
    // 0x4d184c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4d184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4d1850:
    // 0x4d1850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1854:
    // 0x4d1854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1858:
    // 0x4d1858: 0x3e00008  jr          $ra
label_4d185c:
    if (ctx->pc == 0x4D185Cu) {
        ctx->pc = 0x4D185Cu;
            // 0x4d185c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D1860u;
        goto label_fallthrough_0x4d1858;
    }
    ctx->pc = 0x4D1858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1858u;
            // 0x4d185c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4d1858:
    ctx->pc = 0x4D1860u;
}
