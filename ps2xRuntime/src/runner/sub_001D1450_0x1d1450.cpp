#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1450
// Address: 0x1d1450 - 0x1d16b0
void sub_001D1450_0x1d1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1450_0x1d1450");
#endif

    switch (ctx->pc) {
        case 0x1d1450u: goto label_1d1450;
        case 0x1d1454u: goto label_1d1454;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1468u: goto label_1d1468;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1474u: goto label_1d1474;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d147cu: goto label_1d147c;
        case 0x1d1480u: goto label_1d1480;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d1488u: goto label_1d1488;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d1494u: goto label_1d1494;
        case 0x1d1498u: goto label_1d1498;
        case 0x1d149cu: goto label_1d149c;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14a4u: goto label_1d14a4;
        case 0x1d14a8u: goto label_1d14a8;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b0u: goto label_1d14b0;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14b8u: goto label_1d14b8;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d14c0u: goto label_1d14c0;
        case 0x1d14c4u: goto label_1d14c4;
        case 0x1d14c8u: goto label_1d14c8;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14d4u: goto label_1d14d4;
        case 0x1d14d8u: goto label_1d14d8;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d14e0u: goto label_1d14e0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14e8u: goto label_1d14e8;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d14f4u: goto label_1d14f4;
        case 0x1d14f8u: goto label_1d14f8;
        case 0x1d14fcu: goto label_1d14fc;
        case 0x1d1500u: goto label_1d1500;
        case 0x1d1504u: goto label_1d1504;
        case 0x1d1508u: goto label_1d1508;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1510u: goto label_1d1510;
        case 0x1d1514u: goto label_1d1514;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1520u: goto label_1d1520;
        case 0x1d1524u: goto label_1d1524;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d152cu: goto label_1d152c;
        case 0x1d1530u: goto label_1d1530;
        case 0x1d1534u: goto label_1d1534;
        case 0x1d1538u: goto label_1d1538;
        case 0x1d153cu: goto label_1d153c;
        case 0x1d1540u: goto label_1d1540;
        case 0x1d1544u: goto label_1d1544;
        case 0x1d1548u: goto label_1d1548;
        case 0x1d154cu: goto label_1d154c;
        case 0x1d1550u: goto label_1d1550;
        case 0x1d1554u: goto label_1d1554;
        case 0x1d1558u: goto label_1d1558;
        case 0x1d155cu: goto label_1d155c;
        case 0x1d1560u: goto label_1d1560;
        case 0x1d1564u: goto label_1d1564;
        case 0x1d1568u: goto label_1d1568;
        case 0x1d156cu: goto label_1d156c;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1574u: goto label_1d1574;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d157cu: goto label_1d157c;
        case 0x1d1580u: goto label_1d1580;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d1588u: goto label_1d1588;
        case 0x1d158cu: goto label_1d158c;
        case 0x1d1590u: goto label_1d1590;
        case 0x1d1594u: goto label_1d1594;
        case 0x1d1598u: goto label_1d1598;
        case 0x1d159cu: goto label_1d159c;
        case 0x1d15a0u: goto label_1d15a0;
        case 0x1d15a4u: goto label_1d15a4;
        case 0x1d15a8u: goto label_1d15a8;
        case 0x1d15acu: goto label_1d15ac;
        case 0x1d15b0u: goto label_1d15b0;
        case 0x1d15b4u: goto label_1d15b4;
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15c4u: goto label_1d15c4;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d15ccu: goto label_1d15cc;
        case 0x1d15d0u: goto label_1d15d0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d15dcu: goto label_1d15dc;
        case 0x1d15e0u: goto label_1d15e0;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15e8u: goto label_1d15e8;
        case 0x1d15ecu: goto label_1d15ec;
        case 0x1d15f0u: goto label_1d15f0;
        case 0x1d15f4u: goto label_1d15f4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d15fcu: goto label_1d15fc;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1604u: goto label_1d1604;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d160cu: goto label_1d160c;
        case 0x1d1610u: goto label_1d1610;
        case 0x1d1614u: goto label_1d1614;
        case 0x1d1618u: goto label_1d1618;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1624u: goto label_1d1624;
        case 0x1d1628u: goto label_1d1628;
        case 0x1d162cu: goto label_1d162c;
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1634u: goto label_1d1634;
        case 0x1d1638u: goto label_1d1638;
        case 0x1d163cu: goto label_1d163c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1644u: goto label_1d1644;
        case 0x1d1648u: goto label_1d1648;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1650u: goto label_1d1650;
        case 0x1d1654u: goto label_1d1654;
        case 0x1d1658u: goto label_1d1658;
        case 0x1d165cu: goto label_1d165c;
        case 0x1d1660u: goto label_1d1660;
        case 0x1d1664u: goto label_1d1664;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d166cu: goto label_1d166c;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1674u: goto label_1d1674;
        case 0x1d1678u: goto label_1d1678;
        case 0x1d167cu: goto label_1d167c;
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1684u: goto label_1d1684;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d168cu: goto label_1d168c;
        case 0x1d1690u: goto label_1d1690;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d1698u: goto label_1d1698;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16a0u: goto label_1d16a0;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16a8u: goto label_1d16a8;
        case 0x1d16acu: goto label_1d16ac;
        default: break;
    }

    ctx->pc = 0x1d1450u;

label_1d1450:
    // 0x1d1450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1454:
    // 0x1d1454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d1458:
    // 0x1d1458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d145c:
    // 0x1d145c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1460:
    // 0x1d1460: 0x249101b7  addiu       $s1, $a0, 0x1B7
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 439));
label_1d1464:
    // 0x1d1464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1468:
    // 0x1d1468: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1468u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1d146c:
    // 0x1d146c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d1470:
    if (ctx->pc == 0x1D1470u) {
        ctx->pc = 0x1D1474u;
        goto label_1d1474;
    }
    ctx->pc = 0x1D146Cu;
    {
        const bool branch_taken_0x1d146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d146c) {
            ctx->pc = 0x1D1480u;
            goto label_1d1480;
        }
    }
    ctx->pc = 0x1D1474u;
label_1d1474:
    // 0x1d1474: 0xc072aaa  jal         func_1CAAA8
label_1d1478:
    if (ctx->pc == 0x1D1478u) {
        ctx->pc = 0x1D1478u;
            // 0x1d1478: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1D147Cu;
        goto label_1d147c;
    }
    ctx->pc = 0x1D1474u;
    SET_GPR_U32(ctx, 31, 0x1D147Cu);
    ctx->pc = 0x1D1478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1474u;
            // 0x1d1478: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D147Cu; }
        if (ctx->pc != 0x1D147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D147Cu; }
        if (ctx->pc != 0x1D147Cu) { return; }
    }
    ctx->pc = 0x1D147Cu;
label_1d147c:
    // 0x1d147c: 0x0  nop
    ctx->pc = 0x1d147cu;
    // NOP
label_1d1480:
    // 0x1d1480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1484:
    // 0x1d1484: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1d1484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d1488:
    // 0x1d1488: 0x2e010100  sltiu       $at, $s0, 0x100
    ctx->pc = 0x1d1488u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1d148c:
    // 0x1d148c: 0x1420fff6  bnez        $at, . + 4 + (-0xA << 2)
label_1d1490:
    if (ctx->pc == 0x1D1490u) {
        ctx->pc = 0x1D1490u;
            // 0x1d1490: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1D1494u;
        goto label_1d1494;
    }
    ctx->pc = 0x1D148Cu;
    {
        const bool branch_taken_0x1d148c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D148Cu;
            // 0x1d1490: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d148c) {
            ctx->pc = 0x1D1468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1468;
        }
    }
    ctx->pc = 0x1D1494u;
label_1d1494:
    // 0x1d1494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1498:
    // 0x1d1498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d149c:
    // 0x1d149c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d149cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d14a0:
    // 0x1d14a0: 0x3e00008  jr          $ra
label_1d14a4:
    if (ctx->pc == 0x1D14A4u) {
        ctx->pc = 0x1D14A4u;
            // 0x1d14a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D14A8u;
        goto label_1d14a8;
    }
    ctx->pc = 0x1D14A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D14A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14A0u;
            // 0x1d14a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D14A8u;
label_1d14a8:
    // 0x1d14a8: 0x0  nop
    ctx->pc = 0x1d14a8u;
    // NOP
label_1d14ac:
    // 0x1d14ac: 0x0  nop
    ctx->pc = 0x1d14acu;
    // NOP
label_1d14b0:
    // 0x1d14b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d14b4:
    // 0x1d14b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d14b8:
    // 0x1d14b8: 0xc072bca  jal         func_1CAF28
label_1d14bc:
    if (ctx->pc == 0x1D14BCu) {
        ctx->pc = 0x1D14BCu;
            // 0x1d14bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D14C0u;
        goto label_1d14c0;
    }
    ctx->pc = 0x1D14B8u;
    SET_GPR_U32(ctx, 31, 0x1D14C0u);
    ctx->pc = 0x1D14BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14B8u;
            // 0x1d14bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF28u;
    if (runtime->hasFunction(0x1CAF28u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14C0u; }
        if (ctx->pc != 0x1D14C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF28_0x1caf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14C0u; }
        if (ctx->pc != 0x1D14C0u) { return; }
    }
    ctx->pc = 0x1D14C0u;
label_1d14c0:
    // 0x1d14c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d14c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d14c4:
    // 0x1d14c4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1d14c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1d14c8:
    // 0x1d14c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d14c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d14cc:
    // 0x1d14cc: 0x3e00008  jr          $ra
label_1d14d0:
    if (ctx->pc == 0x1D14D0u) {
        ctx->pc = 0x1D14D0u;
            // 0x1d14d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D14D4u;
        goto label_1d14d4;
    }
    ctx->pc = 0x1D14CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D14D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14CCu;
            // 0x1d14d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D14D4u;
label_1d14d4:
    // 0x1d14d4: 0x0  nop
    ctx->pc = 0x1d14d4u;
    // NOP
label_1d14d8:
    // 0x1d14d8: 0x0  nop
    ctx->pc = 0x1d14d8u;
    // NOP
label_1d14dc:
    // 0x1d14dc: 0x0  nop
    ctx->pc = 0x1d14dcu;
    // NOP
label_1d14e0:
    // 0x1d14e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d14e4:
    // 0x1d14e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d14e8:
    // 0x1d14e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d14ec:
    // 0x1d14ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d14f0:
    // 0x1d14f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d14f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d14f4:
    // 0x1d14f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d14f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d14f8:
    // 0x1d14f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d14fc:
    // 0x1d14fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d14fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d1500:
    // 0x1d1500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1504:
    // 0x1d1504: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d1504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d1508:
    // 0x1d1508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d150c:
    // 0x1d150c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d1510:
    // 0x1d1510: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_1d1514:
    // 0x1d1514: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1d1514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1d1518:
    // 0x1d1518: 0xc0fe5bc  jal         func_3F96F0
label_1d151c:
    if (ctx->pc == 0x1D151Cu) {
        ctx->pc = 0x1D151Cu;
            // 0x1d151c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1D1520u;
        goto label_1d1520;
    }
    ctx->pc = 0x1D1518u;
    SET_GPR_U32(ctx, 31, 0x1D1520u);
    ctx->pc = 0x1D151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1518u;
            // 0x1d151c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1520u; }
        if (ctx->pc != 0x1D1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1520u; }
        if (ctx->pc != 0x1D1520u) { return; }
    }
    ctx->pc = 0x1D1520u;
label_1d1520:
    // 0x1d1520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1524:
    // 0x1d1524: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x1d1524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1d1528:
    // 0x1d1528: 0x828201b5  lb          $v0, 0x1B5($s4)
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d152c:
    // 0x1d152c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1530:
    // 0x1d1530: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1534:
    // 0x1d1534: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x1d1534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_1d1538:
    // 0x1d1538: 0x828201b5  lb          $v0, 0x1B5($s4)
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d153c:
    // 0x1d153c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1540:
    // 0x1d1540: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1544:
    // 0x1d1544: 0xc0724fe  jal         func_1C93F8
label_1d1548:
    if (ctx->pc == 0x1D1548u) {
        ctx->pc = 0x1D1548u;
            // 0x1d1548: 0xac5100c4  sw          $s1, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
        ctx->pc = 0x1D154Cu;
        goto label_1d154c;
    }
    ctx->pc = 0x1D1544u;
    SET_GPR_U32(ctx, 31, 0x1D154Cu);
    ctx->pc = 0x1D1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1544u;
            // 0x1d1548: 0xac5100c4  sw          $s1, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C93F8u;
    if (runtime->hasFunction(0x1C93F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C93F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D154Cu; }
        if (ctx->pc != 0x1D154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C93F8_0x1c93f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D154Cu; }
        if (ctx->pc != 0x1D154Cu) { return; }
    }
    ctx->pc = 0x1D154Cu;
label_1d154c:
    // 0x1d154c: 0x828401b5  lb          $a0, 0x1B5($s4)
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d1550:
    // 0x1d1550: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1554:
    // 0x1d1554: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1558:
    // 0x1d1558: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x1d1558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_1d155c:
    // 0x1d155c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1560:
    // 0x1d1560: 0xc0730e6  jal         func_1CC398
label_1d1564:
    if (ctx->pc == 0x1D1564u) {
        ctx->pc = 0x1D1564u;
            // 0x1d1564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1568u;
        goto label_1d1568;
    }
    ctx->pc = 0x1D1560u;
    SET_GPR_U32(ctx, 31, 0x1D1568u);
    ctx->pc = 0x1D1564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1560u;
            // 0x1d1564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC398u;
    if (runtime->hasFunction(0x1CC398u)) {
        auto targetFn = runtime->lookupFunction(0x1CC398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1568u; }
        if (ctx->pc != 0x1D1568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC398_0x1cc398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1568u; }
        if (ctx->pc != 0x1D1568u) { return; }
    }
    ctx->pc = 0x1D1568u;
label_1d1568:
    // 0x1d1568: 0x828201b5  lb          $v0, 0x1B5($s4)
    ctx->pc = 0x1d1568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d156c:
    // 0x1d156c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d1570:
    // 0x1d1570: 0xa28301b5  sb          $v1, 0x1B5($s4)
    ctx->pc = 0x1d1570u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 437), (uint8_t)GPR_U32(ctx, 3));
label_1d1574:
    // 0x1d1574: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1578:
    // 0x1d1578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d157c:
    // 0x1d157c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d157cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1580:
    // 0x1d1580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1584:
    // 0x1d1584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1588:
    // 0x1d1588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d158c:
    // 0x1d158c: 0x3e00008  jr          $ra
label_1d1590:
    if (ctx->pc == 0x1D1590u) {
        ctx->pc = 0x1D1590u;
            // 0x1d1590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D1594u;
        goto label_1d1594;
    }
    ctx->pc = 0x1D158Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D158Cu;
            // 0x1d1590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1594u;
label_1d1594:
    // 0x1d1594: 0x0  nop
    ctx->pc = 0x1d1594u;
    // NOP
label_1d1598:
    // 0x1d1598: 0x0  nop
    ctx->pc = 0x1d1598u;
    // NOP
label_1d159c:
    // 0x1d159c: 0x0  nop
    ctx->pc = 0x1d159cu;
    // NOP
label_1d15a0:
    // 0x1d15a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d15a4:
    // 0x1d15a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d15a8:
    // 0x1d15a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d15ac:
    // 0x1d15ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d15acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d15b0:
    // 0x1d15b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d15b4:
    // 0x1d15b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d15b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d15b8:
    // 0x1d15b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d15bc:
    // 0x1d15bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d15bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d15c0:
    // 0x1d15c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d15c4:
    // 0x1d15c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d15c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d15c8:
    // 0x1d15c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d15cc:
    // 0x1d15cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d15ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d15d0:
    // 0x1d15d0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_1d15d4:
    // 0x1d15d4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1d15d8:
    // 0x1d15d8: 0xc0fe5bc  jal         func_3F96F0
label_1d15dc:
    if (ctx->pc == 0x1D15DCu) {
        ctx->pc = 0x1D15DCu;
            // 0x1d15dc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1D15E0u;
        goto label_1d15e0;
    }
    ctx->pc = 0x1D15D8u;
    SET_GPR_U32(ctx, 31, 0x1D15E0u);
    ctx->pc = 0x1D15DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15D8u;
            // 0x1d15dc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15E0u; }
        if (ctx->pc != 0x1D15E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15E0u; }
        if (ctx->pc != 0x1D15E0u) { return; }
    }
    ctx->pc = 0x1D15E0u;
label_1d15e0:
    // 0x1d15e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d15e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d15e4:
    // 0x1d15e4: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1d15e8:
    // 0x1d15e8: 0x828201b5  lb          $v0, 0x1B5($s4)
    ctx->pc = 0x1d15e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d15ec:
    // 0x1d15ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d15f0:
    // 0x1d15f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d15f4:
    // 0x1d15f4: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x1d15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_1d15f8:
    // 0x1d15f8: 0x828201b5  lb          $v0, 0x1B5($s4)
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d15fc:
    // 0x1d15fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1600:
    // 0x1d1600: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1604:
    // 0x1d1604: 0xc0724fe  jal         func_1C93F8
label_1d1608:
    if (ctx->pc == 0x1D1608u) {
        ctx->pc = 0x1D1608u;
            // 0x1d1608: 0xac5100c4  sw          $s1, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
        ctx->pc = 0x1D160Cu;
        goto label_1d160c;
    }
    ctx->pc = 0x1D1604u;
    SET_GPR_U32(ctx, 31, 0x1D160Cu);
    ctx->pc = 0x1D1608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1604u;
            // 0x1d1608: 0xac5100c4  sw          $s1, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C93F8u;
    if (runtime->hasFunction(0x1C93F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C93F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D160Cu; }
        if (ctx->pc != 0x1D160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C93F8_0x1c93f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D160Cu; }
        if (ctx->pc != 0x1D160Cu) { return; }
    }
    ctx->pc = 0x1D160Cu;
label_1d160c:
    // 0x1d160c: 0x828401b5  lb          $a0, 0x1B5($s4)
    ctx->pc = 0x1d160cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d1610:
    // 0x1d1610: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d1610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1614:
    // 0x1d1614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1618:
    // 0x1d1618: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x1d1618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_1d161c:
    // 0x1d161c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d161cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1620:
    // 0x1d1620: 0xc0730e6  jal         func_1CC398
label_1d1624:
    if (ctx->pc == 0x1D1624u) {
        ctx->pc = 0x1D1624u;
            // 0x1d1624: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1628u;
        goto label_1d1628;
    }
    ctx->pc = 0x1D1620u;
    SET_GPR_U32(ctx, 31, 0x1D1628u);
    ctx->pc = 0x1D1624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1620u;
            // 0x1d1624: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC398u;
    if (runtime->hasFunction(0x1CC398u)) {
        auto targetFn = runtime->lookupFunction(0x1CC398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1628u; }
        if (ctx->pc != 0x1D1628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC398_0x1cc398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1628u; }
        if (ctx->pc != 0x1D1628u) { return; }
    }
    ctx->pc = 0x1D1628u;
label_1d1628:
    // 0x1d1628: 0xc072bca  jal         func_1CAF28
label_1d162c:
    if (ctx->pc == 0x1D162Cu) {
        ctx->pc = 0x1D162Cu;
            // 0x1d162c: 0x828401b5  lb          $a0, 0x1B5($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
        ctx->pc = 0x1D1630u;
        goto label_1d1630;
    }
    ctx->pc = 0x1D1628u;
    SET_GPR_U32(ctx, 31, 0x1D1630u);
    ctx->pc = 0x1D162Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1628u;
            // 0x1d162c: 0x828401b5  lb          $a0, 0x1B5($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF28u;
    if (runtime->hasFunction(0x1CAF28u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1630u; }
        if (ctx->pc != 0x1D1630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF28_0x1caf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1630u; }
        if (ctx->pc != 0x1D1630u) { return; }
    }
    ctx->pc = 0x1D1630u;
label_1d1630:
    // 0x1d1630: 0xc0aa478  jal         func_2A91E0
label_1d1634:
    if (ctx->pc == 0x1D1634u) {
        ctx->pc = 0x1D1634u;
            // 0x1d1634: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1638u;
        goto label_1d1638;
    }
    ctx->pc = 0x1D1630u;
    SET_GPR_U32(ctx, 31, 0x1D1638u);
    ctx->pc = 0x1D1634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1630u;
            // 0x1d1634: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A91E0u;
    if (runtime->hasFunction(0x2A91E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1638u; }
        if (ctx->pc != 0x1D1638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A91E0_0x2a91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1638u; }
        if (ctx->pc != 0x1D1638u) { return; }
    }
    ctx->pc = 0x1D1638u;
label_1d1638:
    // 0x1d1638: 0xc05b774  jal         func_16DDD0
label_1d163c:
    if (ctx->pc == 0x1D163Cu) {
        ctx->pc = 0x1D1640u;
        goto label_1d1640;
    }
    ctx->pc = 0x1D1638u;
    SET_GPR_U32(ctx, 31, 0x1D1640u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1640u; }
        if (ctx->pc != 0x1D1640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1640u; }
        if (ctx->pc != 0x1D1640u) { return; }
    }
    ctx->pc = 0x1D1640u;
label_1d1640:
    // 0x1d1640: 0xc072cd2  jal         func_1CB348
label_1d1644:
    if (ctx->pc == 0x1D1644u) {
        ctx->pc = 0x1D1648u;
        goto label_1d1648;
    }
    ctx->pc = 0x1D1640u;
    SET_GPR_U32(ctx, 31, 0x1D1648u);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1648u; }
        if (ctx->pc != 0x1D1648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1648u; }
        if (ctx->pc != 0x1D1648u) { return; }
    }
    ctx->pc = 0x1D1648u;
label_1d1648:
    // 0x1d1648: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d164c:
    // 0x1d164c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x1d164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1d1650:
    // 0x1d1650: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1654:
    // 0x1d1654: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1d1658:
    // 0x1d1658: 0x320f809  jalr        $t9
label_1d165c:
    if (ctx->pc == 0x1D165Cu) {
        ctx->pc = 0x1D1660u;
        goto label_1d1660;
    }
    ctx->pc = 0x1D1658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1660u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1660u; }
            if (ctx->pc != 0x1D1660u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1660u;
label_1d1660:
    // 0x1d1660: 0x8e8302b8  lw          $v1, 0x2B8($s4)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_1d1664:
    // 0x1d1664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d1668:
    if (ctx->pc == 0x1D1668u) {
        ctx->pc = 0x1D166Cu;
        goto label_1d166c;
    }
    ctx->pc = 0x1D1664u;
    {
        const bool branch_taken_0x1d1664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1664) {
            ctx->pc = 0x1D1678u;
            goto label_1d1678;
        }
    }
    ctx->pc = 0x1D166Cu;
label_1d166c:
    // 0x1d166c: 0x60f809  jalr        $v1
label_1d1670:
    if (ctx->pc == 0x1D1670u) {
        ctx->pc = 0x1D1674u;
        goto label_1d1674;
    }
    ctx->pc = 0x1D166Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1674u; }
            if (ctx->pc != 0x1D1674u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1674u;
label_1d1674:
    // 0x1d1674: 0x0  nop
    ctx->pc = 0x1d1674u;
    // NOP
label_1d1678:
    // 0x1d1678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d167c:
    // 0x1d167c: 0x1603ffea  bne         $s0, $v1, . + 4 + (-0x16 << 2)
label_1d1680:
    if (ctx->pc == 0x1D1680u) {
        ctx->pc = 0x1D1684u;
        goto label_1d1684;
    }
    ctx->pc = 0x1D167Cu;
    {
        const bool branch_taken_0x1d167c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d167c) {
            ctx->pc = 0x1D1628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1628;
        }
    }
    ctx->pc = 0x1D1684u;
label_1d1684:
    // 0x1d1684: 0x828301b5  lb          $v1, 0x1B5($s4)
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 437)));
label_1d1688:
    // 0x1d1688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d168c:
    // 0x1d168c: 0xa28301b5  sb          $v1, 0x1B5($s4)
    ctx->pc = 0x1d168cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 437), (uint8_t)GPR_U32(ctx, 3));
label_1d1690:
    // 0x1d1690: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1694:
    // 0x1d1694: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1698:
    // 0x1d1698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d169c:
    // 0x1d169c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d169cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d16a0:
    // 0x1d16a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d16a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d16a4:
    // 0x1d16a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d16a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d16a8:
    // 0x1d16a8: 0x3e00008  jr          $ra
label_1d16ac:
    if (ctx->pc == 0x1D16ACu) {
        ctx->pc = 0x1D16ACu;
            // 0x1d16ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D16B0u;
        goto label_fallthrough_0x1d16a8;
    }
    ctx->pc = 0x1D16A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D16ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16A8u;
            // 0x1d16ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d16a8:
    ctx->pc = 0x1D16B0u;
}
