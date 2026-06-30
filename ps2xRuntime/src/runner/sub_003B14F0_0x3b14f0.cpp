#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B14F0
// Address: 0x3b14f0 - 0x3b1680
void sub_003B14F0_0x3b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B14F0_0x3b14f0");
#endif

    switch (ctx->pc) {
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        case 0x3b1648u: goto label_3b1648;
        case 0x3b164cu: goto label_3b164c;
        case 0x3b1650u: goto label_3b1650;
        case 0x3b1654u: goto label_3b1654;
        case 0x3b1658u: goto label_3b1658;
        case 0x3b165cu: goto label_3b165c;
        case 0x3b1660u: goto label_3b1660;
        case 0x3b1664u: goto label_3b1664;
        case 0x3b1668u: goto label_3b1668;
        case 0x3b166cu: goto label_3b166c;
        case 0x3b1670u: goto label_3b1670;
        case 0x3b1674u: goto label_3b1674;
        case 0x3b1678u: goto label_3b1678;
        case 0x3b167cu: goto label_3b167c;
        default: break;
    }

    ctx->pc = 0x3b14f0u;

label_3b14f0:
    // 0x3b14f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b14f4:
    // 0x3b14f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b14f8:
    // 0x3b14f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b14fc:
    // 0x3b14fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b1500:
    // 0x3b1500: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b1500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1504:
    // 0x3b1504: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b1504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1508:
    // 0x3b1508: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3b1508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3b150c:
    // 0x3b150c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3b150cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b1510:
    // 0x3b1510: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3b1510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3b1514:
    // 0x3b1514: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x3b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_3b1518:
    // 0x3b1518: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3b1518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b151c:
    // 0x3b151c: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x3b151cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3b1520:
    // 0x3b1520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b1524:
    // 0x3b1524: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b1524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b1528:
    // 0x3b1528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b152c:
    // 0x3b152c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x3b152cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b1530:
    // 0x3b1530: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b1530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b1534:
    // 0x3b1534: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3b1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b1538:
    // 0x3b1538: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x3b1538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3b153c:
    // 0x3b153c: 0x2490002c  addiu       $s0, $a0, 0x2C
    ctx->pc = 0x3b153cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_3b1540:
    // 0x3b1540: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x3b1540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3b1544:
    // 0x3b1544: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
label_3b1548:
    if (ctx->pc == 0x3B1548u) {
        ctx->pc = 0x3B1548u;
            // 0x3b1548: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x3B154Cu;
        goto label_3b154c;
    }
    ctx->pc = 0x3B1544u;
    {
        const bool branch_taken_0x3b1544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B1548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1544u;
            // 0x3b1548: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1544) {
            ctx->pc = 0x3B165Cu;
            goto label_3b165c;
        }
    }
    ctx->pc = 0x3B154Cu;
label_3b154c:
    // 0x3b154c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b1550:
    // 0x3b1550: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_3b1554:
    if (ctx->pc == 0x3B1554u) {
        ctx->pc = 0x3B1558u;
        goto label_3b1558;
    }
    ctx->pc = 0x3B1550u;
    {
        const bool branch_taken_0x3b1550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1550) {
            ctx->pc = 0x3B1584u;
            goto label_3b1584;
        }
    }
    ctx->pc = 0x3B1558u;
label_3b1558:
    // 0x3b1558: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b1558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b155c:
    // 0x3b155c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_3b1560:
    if (ctx->pc == 0x3B1560u) {
        ctx->pc = 0x3B1564u;
        goto label_3b1564;
    }
    ctx->pc = 0x3B155Cu;
    {
        const bool branch_taken_0x3b155c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b155c) {
            ctx->pc = 0x3B1584u;
            goto label_3b1584;
        }
    }
    ctx->pc = 0x3B1564u;
label_3b1564:
    // 0x3b1564: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b1564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b1568:
    // 0x3b1568: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3b156c:
    if (ctx->pc == 0x3B156Cu) {
        ctx->pc = 0x3B1570u;
        goto label_3b1570;
    }
    ctx->pc = 0x3B1568u;
    {
        const bool branch_taken_0x3b1568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1568) {
            ctx->pc = 0x3B1584u;
            goto label_3b1584;
        }
    }
    ctx->pc = 0x3B1570u;
label_3b1570:
    // 0x3b1570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1574:
    // 0x3b1574: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3b1578:
    if (ctx->pc == 0x3B1578u) {
        ctx->pc = 0x3B157Cu;
        goto label_3b157c;
    }
    ctx->pc = 0x3B1574u;
    {
        const bool branch_taken_0x3b1574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1574) {
            ctx->pc = 0x3B1584u;
            goto label_3b1584;
        }
    }
    ctx->pc = 0x3B157Cu;
label_3b157c:
    // 0x3b157c: 0x10000038  b           . + 4 + (0x38 << 2)
label_3b1580:
    if (ctx->pc == 0x3B1580u) {
        ctx->pc = 0x3B1580u;
            // 0x3b1580: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3B1584u;
        goto label_3b1584;
    }
    ctx->pc = 0x3B157Cu;
    {
        const bool branch_taken_0x3b157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B157Cu;
            // 0x3b1580: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b157c) {
            ctx->pc = 0x3B1660u;
            goto label_3b1660;
        }
    }
    ctx->pc = 0x3B1584u;
label_3b1584:
    // 0x3b1584: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3b1584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3b1588:
    // 0x3b1588: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3b1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3b158c:
    // 0x3b158c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3b158cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3b1590:
    // 0x3b1590: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3b1590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3b1594:
    // 0x3b1594: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3b1598:
    if (ctx->pc == 0x3B1598u) {
        ctx->pc = 0x3B159Cu;
        goto label_3b159c;
    }
    ctx->pc = 0x3B1594u;
    {
        const bool branch_taken_0x3b1594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1594) {
            ctx->pc = 0x3B15A8u;
            goto label_3b15a8;
        }
    }
    ctx->pc = 0x3B159Cu;
label_3b159c:
    // 0x3b159c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3b159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b15a0:
    // 0x3b15a0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3b15a4:
    if (ctx->pc == 0x3B15A4u) {
        ctx->pc = 0x3B15A4u;
            // 0x3b15a4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3B15A8u;
        goto label_3b15a8;
    }
    ctx->pc = 0x3B15A0u;
    {
        const bool branch_taken_0x3b15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B15A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B15A0u;
            // 0x3b15a4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15a0) {
            ctx->pc = 0x3B165Cu;
            goto label_3b165c;
        }
    }
    ctx->pc = 0x3B15A8u;
label_3b15a8:
    // 0x3b15a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b15ac:
    // 0x3b15ac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b15acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b15b0:
    // 0x3b15b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b15b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b15b4:
    // 0x3b15b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b15b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b15b8:
    // 0x3b15b8: 0x320f809  jalr        $t9
label_3b15bc:
    if (ctx->pc == 0x3B15BCu) {
        ctx->pc = 0x3B15BCu;
            // 0x3b15bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B15C0u;
        goto label_3b15c0;
    }
    ctx->pc = 0x3B15B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B15C0u);
        ctx->pc = 0x3B15BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B15B8u;
            // 0x3b15bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B15C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B15C0u; }
            if (ctx->pc != 0x3B15C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B15C0u;
label_3b15c0:
    // 0x3b15c0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3b15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3b15c4:
    // 0x3b15c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b15c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b15c8:
    // 0x3b15c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3b15cc:
    if (ctx->pc == 0x3B15CCu) {
        ctx->pc = 0x3B15CCu;
            // 0x3b15cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B15D0u;
        goto label_3b15d0;
    }
    ctx->pc = 0x3B15C8u;
    {
        const bool branch_taken_0x3b15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b15c8) {
            ctx->pc = 0x3B15CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B15C8u;
            // 0x3b15cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B15DCu;
            goto label_3b15dc;
        }
    }
    ctx->pc = 0x3B15D0u;
label_3b15d0:
    // 0x3b15d0: 0xc110754  jal         func_441D50
label_3b15d4:
    if (ctx->pc == 0x3B15D4u) {
        ctx->pc = 0x3B15D4u;
            // 0x3b15d4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x3B15D8u;
        goto label_3b15d8;
    }
    ctx->pc = 0x3B15D0u;
    SET_GPR_U32(ctx, 31, 0x3B15D8u);
    ctx->pc = 0x3B15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B15D0u;
            // 0x3b15d4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B15D8u; }
        if (ctx->pc != 0x3B15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B15D8u; }
        if (ctx->pc != 0x3B15D8u) { return; }
    }
    ctx->pc = 0x3B15D8u;
label_3b15d8:
    // 0x3b15d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b15d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b15dc:
    // 0x3b15dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b15dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b15e0:
    // 0x3b15e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b15e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b15e4:
    // 0x3b15e4: 0xc0ec5b8  jal         func_3B16E0
label_3b15e8:
    if (ctx->pc == 0x3B15E8u) {
        ctx->pc = 0x3B15E8u;
            // 0x3b15e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B15ECu;
        goto label_3b15ec;
    }
    ctx->pc = 0x3B15E4u;
    SET_GPR_U32(ctx, 31, 0x3B15ECu);
    ctx->pc = 0x3B15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B15E4u;
            // 0x3b15e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B16E0u;
    if (runtime->hasFunction(0x3B16E0u)) {
        auto targetFn = runtime->lookupFunction(0x3B16E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B15ECu; }
        if (ctx->pc != 0x3B15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B16E0_0x3b16e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B15ECu; }
        if (ctx->pc != 0x3B15ECu) { return; }
    }
    ctx->pc = 0x3B15ECu;
label_3b15ec:
    // 0x3b15ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b15f0:
    // 0x3b15f0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b15f4:
    // 0x3b15f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b15f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b15f8:
    // 0x3b15f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b15f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b15fc:
    // 0x3b15fc: 0x320f809  jalr        $t9
label_3b1600:
    if (ctx->pc == 0x3B1600u) {
        ctx->pc = 0x3B1604u;
        goto label_3b1604;
    }
    ctx->pc = 0x3B15FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B1604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B1604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B1604u; }
            if (ctx->pc != 0x3B1604u) { return; }
        }
        }
    }
    ctx->pc = 0x3B1604u;
label_3b1604:
    // 0x3b1604: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3b1604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3b1608:
    // 0x3b1608: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3b1608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3b160c:
    // 0x3b160c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_3b1610:
    if (ctx->pc == 0x3B1610u) {
        ctx->pc = 0x3B1614u;
        goto label_3b1614;
    }
    ctx->pc = 0x3B160Cu;
    {
        const bool branch_taken_0x3b160c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b160c) {
            ctx->pc = 0x3B165Cu;
            goto label_3b165c;
        }
    }
    ctx->pc = 0x3B1614u;
label_3b1614:
    // 0x3b1614: 0xc05068c  jal         func_141A30
label_3b1618:
    if (ctx->pc == 0x3B1618u) {
        ctx->pc = 0x3B1618u;
            // 0x3b1618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B161Cu;
        goto label_3b161c;
    }
    ctx->pc = 0x3B1614u;
    SET_GPR_U32(ctx, 31, 0x3B161Cu);
    ctx->pc = 0x3B1618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1614u;
            // 0x3b1618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B161Cu; }
        if (ctx->pc != 0x3B161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B161Cu; }
        if (ctx->pc != 0x3B161Cu) { return; }
    }
    ctx->pc = 0x3B161Cu;
label_3b161c:
    // 0x3b161c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b1620:
    // 0x3b1620: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b1620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b1624:
    // 0x3b1624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b1624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b1628:
    // 0x3b1628: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b1628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b162c:
    // 0x3b162c: 0x320f809  jalr        $t9
label_3b1630:
    if (ctx->pc == 0x3B1630u) {
        ctx->pc = 0x3B1630u;
            // 0x3b1630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B1634u;
        goto label_3b1634;
    }
    ctx->pc = 0x3B162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B1634u);
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B162Cu;
            // 0x3b1630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B1634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B1634u; }
            if (ctx->pc != 0x3B1634u) { return; }
        }
        }
    }
    ctx->pc = 0x3B1634u;
label_3b1634:
    // 0x3b1634: 0xc110754  jal         func_441D50
label_3b1638:
    if (ctx->pc == 0x3B1638u) {
        ctx->pc = 0x3B1638u;
            // 0x3b1638: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x3B163Cu;
        goto label_3b163c;
    }
    ctx->pc = 0x3B1634u;
    SET_GPR_U32(ctx, 31, 0x3B163Cu);
    ctx->pc = 0x3B1638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1634u;
            // 0x3b1638: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B163Cu; }
        if (ctx->pc != 0x3B163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B163Cu; }
        if (ctx->pc != 0x3B163Cu) { return; }
    }
    ctx->pc = 0x3B163Cu;
label_3b163c:
    // 0x3b163c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b1640:
    // 0x3b1640: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b1640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b1644:
    // 0x3b1644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b1644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b1648:
    // 0x3b1648: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b1648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b164c:
    // 0x3b164c: 0x320f809  jalr        $t9
label_3b1650:
    if (ctx->pc == 0x3B1650u) {
        ctx->pc = 0x3B1654u;
        goto label_3b1654;
    }
    ctx->pc = 0x3B164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B1654u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B1654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B1654u; }
            if (ctx->pc != 0x3B1654u) { return; }
        }
        }
    }
    ctx->pc = 0x3B1654u;
label_3b1654:
    // 0x3b1654: 0xc05068c  jal         func_141A30
label_3b1658:
    if (ctx->pc == 0x3B1658u) {
        ctx->pc = 0x3B1658u;
            // 0x3b1658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B165Cu;
        goto label_3b165c;
    }
    ctx->pc = 0x3B1654u;
    SET_GPR_U32(ctx, 31, 0x3B165Cu);
    ctx->pc = 0x3B1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1654u;
            // 0x3b1658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B165Cu; }
        if (ctx->pc != 0x3B165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B165Cu; }
        if (ctx->pc != 0x3B165Cu) { return; }
    }
    ctx->pc = 0x3B165Cu;
label_3b165c:
    // 0x3b165c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b165cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1660:
    // 0x3b1660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b1660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1664:
    // 0x3b1664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b1664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1668:
    // 0x3b1668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b1668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b166c:
    // 0x3b166c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b166cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1670:
    // 0x3b1670: 0x3e00008  jr          $ra
label_3b1674:
    if (ctx->pc == 0x3B1674u) {
        ctx->pc = 0x3B1674u;
            // 0x3b1674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3B1678u;
        goto label_3b1678;
    }
    ctx->pc = 0x3B1670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1670u;
            // 0x3b1674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B1678u;
label_3b1678:
    // 0x3b1678: 0x0  nop
    ctx->pc = 0x3b1678u;
    // NOP
label_3b167c:
    // 0x3b167c: 0x0  nop
    ctx->pc = 0x3b167cu;
    // NOP
}
