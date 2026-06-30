#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E1650
// Address: 0x4e1650 - 0x4e1780
void sub_004E1650_0x4e1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1650_0x4e1650");
#endif

    switch (ctx->pc) {
        case 0x4e1650u: goto label_4e1650;
        case 0x4e1654u: goto label_4e1654;
        case 0x4e1658u: goto label_4e1658;
        case 0x4e165cu: goto label_4e165c;
        case 0x4e1660u: goto label_4e1660;
        case 0x4e1664u: goto label_4e1664;
        case 0x4e1668u: goto label_4e1668;
        case 0x4e166cu: goto label_4e166c;
        case 0x4e1670u: goto label_4e1670;
        case 0x4e1674u: goto label_4e1674;
        case 0x4e1678u: goto label_4e1678;
        case 0x4e167cu: goto label_4e167c;
        case 0x4e1680u: goto label_4e1680;
        case 0x4e1684u: goto label_4e1684;
        case 0x4e1688u: goto label_4e1688;
        case 0x4e168cu: goto label_4e168c;
        case 0x4e1690u: goto label_4e1690;
        case 0x4e1694u: goto label_4e1694;
        case 0x4e1698u: goto label_4e1698;
        case 0x4e169cu: goto label_4e169c;
        case 0x4e16a0u: goto label_4e16a0;
        case 0x4e16a4u: goto label_4e16a4;
        case 0x4e16a8u: goto label_4e16a8;
        case 0x4e16acu: goto label_4e16ac;
        case 0x4e16b0u: goto label_4e16b0;
        case 0x4e16b4u: goto label_4e16b4;
        case 0x4e16b8u: goto label_4e16b8;
        case 0x4e16bcu: goto label_4e16bc;
        case 0x4e16c0u: goto label_4e16c0;
        case 0x4e16c4u: goto label_4e16c4;
        case 0x4e16c8u: goto label_4e16c8;
        case 0x4e16ccu: goto label_4e16cc;
        case 0x4e16d0u: goto label_4e16d0;
        case 0x4e16d4u: goto label_4e16d4;
        case 0x4e16d8u: goto label_4e16d8;
        case 0x4e16dcu: goto label_4e16dc;
        case 0x4e16e0u: goto label_4e16e0;
        case 0x4e16e4u: goto label_4e16e4;
        case 0x4e16e8u: goto label_4e16e8;
        case 0x4e16ecu: goto label_4e16ec;
        case 0x4e16f0u: goto label_4e16f0;
        case 0x4e16f4u: goto label_4e16f4;
        case 0x4e16f8u: goto label_4e16f8;
        case 0x4e16fcu: goto label_4e16fc;
        case 0x4e1700u: goto label_4e1700;
        case 0x4e1704u: goto label_4e1704;
        case 0x4e1708u: goto label_4e1708;
        case 0x4e170cu: goto label_4e170c;
        case 0x4e1710u: goto label_4e1710;
        case 0x4e1714u: goto label_4e1714;
        case 0x4e1718u: goto label_4e1718;
        case 0x4e171cu: goto label_4e171c;
        case 0x4e1720u: goto label_4e1720;
        case 0x4e1724u: goto label_4e1724;
        case 0x4e1728u: goto label_4e1728;
        case 0x4e172cu: goto label_4e172c;
        case 0x4e1730u: goto label_4e1730;
        case 0x4e1734u: goto label_4e1734;
        case 0x4e1738u: goto label_4e1738;
        case 0x4e173cu: goto label_4e173c;
        case 0x4e1740u: goto label_4e1740;
        case 0x4e1744u: goto label_4e1744;
        case 0x4e1748u: goto label_4e1748;
        case 0x4e174cu: goto label_4e174c;
        case 0x4e1750u: goto label_4e1750;
        case 0x4e1754u: goto label_4e1754;
        case 0x4e1758u: goto label_4e1758;
        case 0x4e175cu: goto label_4e175c;
        case 0x4e1760u: goto label_4e1760;
        case 0x4e1764u: goto label_4e1764;
        case 0x4e1768u: goto label_4e1768;
        case 0x4e176cu: goto label_4e176c;
        case 0x4e1770u: goto label_4e1770;
        case 0x4e1774u: goto label_4e1774;
        case 0x4e1778u: goto label_4e1778;
        case 0x4e177cu: goto label_4e177c;
        default: break;
    }

    ctx->pc = 0x4e1650u;

label_4e1650:
    // 0x4e1650: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1654:
    // 0x4e1654: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4e1654u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4e1658:
    // 0x4e1658: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4e1658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e165c:
    // 0x4e165c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e165cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1660:
    // 0x4e1660: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4e1660u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4e1664:
    // 0x4e1664: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4e1664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4e1668:
    // 0x4e1668: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e166c:
    // 0x4e166c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4e166cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4e1670:
    // 0x4e1670: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1674:
    // 0x4e1674: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4e1674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e1678:
    // 0x4e1678: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4e1678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4e167c:
    // 0x4e167c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4e167cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4e1680:
    // 0x4e1680: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4e1680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4e1684:
    // 0x4e1684: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e1684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e1688:
    // 0x4e1688: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4e1688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4e168c:
    // 0x4e168c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1690:
    // 0x4e1690: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4e1690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4e1694:
    // 0x4e1694: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e1694u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e1698:
    // 0x4e1698: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4e1698u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4e169c:
    // 0x4e169c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e169cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4e16a0:
    // 0x4e16a0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4e16a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4e16a4:
    // 0x4e16a4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e16a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4e16a8:
    // 0x4e16a8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4e16a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e16ac:
    // 0x4e16ac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4e16acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4e16b0:
    // 0x4e16b0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4e16b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4e16b4:
    // 0x4e16b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4e16b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4e16b8:
    // 0x4e16b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e16bc:
    // 0x4e16bc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4e16c0:
    // 0x4e16c0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4e16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4e16c4:
    // 0x4e16c4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4e16c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e16c8:
    // 0x4e16c8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4e16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4e16cc:
    // 0x4e16cc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4e16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4e16d0:
    // 0x4e16d0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4e16d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4e16d4:
    // 0x4e16d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e16d8:
    // 0x4e16d8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4e16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4e16dc:
    // 0x4e16dc: 0x3e00008  jr          $ra
label_4e16e0:
    if (ctx->pc == 0x4E16E0u) {
        ctx->pc = 0x4E16E0u;
            // 0x4e16e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4E16E4u;
        goto label_4e16e4;
    }
    ctx->pc = 0x4E16DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E16E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E16DCu;
            // 0x4e16e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E16E4u;
label_4e16e4:
    // 0x4e16e4: 0x0  nop
    ctx->pc = 0x4e16e4u;
    // NOP
label_4e16e8:
    // 0x4e16e8: 0x0  nop
    ctx->pc = 0x4e16e8u;
    // NOP
label_4e16ec:
    // 0x4e16ec: 0x0  nop
    ctx->pc = 0x4e16ecu;
    // NOP
label_4e16f0:
    // 0x4e16f0: 0x3e00008  jr          $ra
label_4e16f4:
    if (ctx->pc == 0x4E16F4u) {
        ctx->pc = 0x4E16F8u;
        goto label_4e16f8;
    }
    ctx->pc = 0x4E16F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E16F8u;
label_4e16f8:
    // 0x4e16f8: 0x0  nop
    ctx->pc = 0x4e16f8u;
    // NOP
label_4e16fc:
    // 0x4e16fc: 0x0  nop
    ctx->pc = 0x4e16fcu;
    // NOP
label_4e1700:
    // 0x4e1700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e1704:
    // 0x4e1704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e1704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e1708:
    // 0x4e1708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e1708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e170c:
    // 0x4e170c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1710:
    // 0x4e1710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e1714:
    // 0x4e1714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1718:
    // 0x4e1718: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4e1718u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e171c:
    // 0x4e171c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4e1720:
    if (ctx->pc == 0x4E1720u) {
        ctx->pc = 0x4E1720u;
            // 0x4e1720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1724u;
        goto label_4e1724;
    }
    ctx->pc = 0x4E171Cu;
    {
        const bool branch_taken_0x4e171c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E171Cu;
            // 0x4e1720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e171c) {
            ctx->pc = 0x4E1758u;
            goto label_4e1758;
        }
    }
    ctx->pc = 0x4E1724u;
label_4e1724:
    // 0x4e1724: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e1724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1728:
    // 0x4e1728: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e1728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e172c:
    // 0x4e172c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e1730:
    // 0x4e1730: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e1734:
    // 0x4e1734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1738:
    // 0x4e1738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e1738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e173c:
    // 0x4e173c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e173cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e1740:
    // 0x4e1740: 0x320f809  jalr        $t9
label_4e1744:
    if (ctx->pc == 0x4E1744u) {
        ctx->pc = 0x4E1748u;
        goto label_4e1748;
    }
    ctx->pc = 0x4E1740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1748u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1748u; }
            if (ctx->pc != 0x4E1748u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1748u;
label_4e1748:
    // 0x4e1748: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e1748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e174c:
    // 0x4e174c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e174cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e1750:
    // 0x4e1750: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4e1754:
    if (ctx->pc == 0x4E1754u) {
        ctx->pc = 0x4E1754u;
            // 0x4e1754: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E1758u;
        goto label_4e1758;
    }
    ctx->pc = 0x4E1750u;
    {
        const bool branch_taken_0x4e1750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1750u;
            // 0x4e1754: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1750) {
            ctx->pc = 0x4E172Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e172c;
        }
    }
    ctx->pc = 0x4E1758u;
label_4e1758:
    // 0x4e1758: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e175c:
    // 0x4e175c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e175cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1760:
    // 0x4e1760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1764:
    // 0x4e1764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1768:
    // 0x4e1768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e176c:
    // 0x4e176c: 0x3e00008  jr          $ra
label_4e1770:
    if (ctx->pc == 0x4E1770u) {
        ctx->pc = 0x4E1770u;
            // 0x4e1770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E1774u;
        goto label_4e1774;
    }
    ctx->pc = 0x4E176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E176Cu;
            // 0x4e1770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1774u;
label_4e1774:
    // 0x4e1774: 0x0  nop
    ctx->pc = 0x4e1774u;
    // NOP
label_4e1778:
    // 0x4e1778: 0x0  nop
    ctx->pc = 0x4e1778u;
    // NOP
label_4e177c:
    // 0x4e177c: 0x0  nop
    ctx->pc = 0x4e177cu;
    // NOP
}
