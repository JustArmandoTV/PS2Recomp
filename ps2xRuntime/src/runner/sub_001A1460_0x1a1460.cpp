#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1460
// Address: 0x1a1460 - 0x1a15f0
void sub_001A1460_0x1a1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1460_0x1a1460");
#endif

    switch (ctx->pc) {
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1464u: goto label_1a1464;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1470u: goto label_1a1470;
        case 0x1a1474u: goto label_1a1474;
        case 0x1a1478u: goto label_1a1478;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a1488u: goto label_1a1488;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1494u: goto label_1a1494;
        case 0x1a1498u: goto label_1a1498;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14a4u: goto label_1a14a4;
        case 0x1a14a8u: goto label_1a14a8;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a14b4u: goto label_1a14b4;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14bcu: goto label_1a14bc;
        case 0x1a14c0u: goto label_1a14c0;
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14ccu: goto label_1a14cc;
        case 0x1a14d0u: goto label_1a14d0;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14d8u: goto label_1a14d8;
        case 0x1a14dcu: goto label_1a14dc;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14e4u: goto label_1a14e4;
        case 0x1a14e8u: goto label_1a14e8;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a14f0u: goto label_1a14f0;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a14f8u: goto label_1a14f8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1508u: goto label_1a1508;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1510u: goto label_1a1510;
        case 0x1a1514u: goto label_1a1514;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a151cu: goto label_1a151c;
        case 0x1a1520u: goto label_1a1520;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1528u: goto label_1a1528;
        case 0x1a152cu: goto label_1a152c;
        case 0x1a1530u: goto label_1a1530;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1538u: goto label_1a1538;
        case 0x1a153cu: goto label_1a153c;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        default: break;
    }

    ctx->pc = 0x1a1460u;

label_1a1460:
    // 0x1a1460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1464:
    // 0x1a1464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1468:
    // 0x1a1468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a146c:
    // 0x1a146c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1470:
    // 0x1a1470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1474:
    // 0x1a1474: 0xc0685d4  jal         func_1A1750
label_1a1478:
    if (ctx->pc == 0x1A1478u) {
        ctx->pc = 0x1A1478u;
            // 0x1a1478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A147Cu;
        goto label_1a147c;
    }
    ctx->pc = 0x1A1474u;
    SET_GPR_U32(ctx, 31, 0x1A147Cu);
    ctx->pc = 0x1A1478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1474u;
            // 0x1a1478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A147Cu; }
        if (ctx->pc != 0x1A147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A147Cu; }
        if (ctx->pc != 0x1A147Cu) { return; }
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1480:
    // 0x1a1480: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1a1484:
    if (ctx->pc == 0x1A1484u) {
        ctx->pc = 0x1A1484u;
            // 0x1a1484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1488u;
        goto label_1a1488;
    }
    ctx->pc = 0x1A1480u;
    {
        const bool branch_taken_0x1a1480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1480) {
            ctx->pc = 0x1A1484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1480u;
            // 0x1a1484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A14ACu;
            goto label_1a14ac;
        }
    }
    ctx->pc = 0x1A1488u;
label_1a1488:
    // 0x1a1488: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a148c:
    // 0x1a148c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a1490:
    if (ctx->pc == 0x1A1490u) {
        ctx->pc = 0x1A1490u;
            // 0x1a1490: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A1494u;
        goto label_1a1494;
    }
    ctx->pc = 0x1A148Cu;
    {
        const bool branch_taken_0x1a148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A148Cu;
            // 0x1a1490: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a148c) {
            ctx->pc = 0x1A14A8u;
            goto label_1a14a8;
        }
    }
    ctx->pc = 0x1A1494u;
label_1a1494:
    // 0x1a1494: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a1498:
    // 0x1a1498: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a149c:
    if (ctx->pc == 0x1A149Cu) {
        ctx->pc = 0x1A149Cu;
            // 0x1a149c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A14A0u;
        goto label_1a14a0;
    }
    ctx->pc = 0x1A1498u;
    {
        const bool branch_taken_0x1a1498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1498) {
            ctx->pc = 0x1A149Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1498u;
            // 0x1a149c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A14ACu;
            goto label_1a14ac;
        }
    }
    ctx->pc = 0x1A14A0u;
label_1a14a0:
    // 0x1a14a0: 0x40f809  jalr        $v0
label_1a14a4:
    if (ctx->pc == 0x1A14A4u) {
        ctx->pc = 0x1A14A4u;
            // 0x1a14a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A14A8u;
        goto label_1a14a8;
    }
    ctx->pc = 0x1A14A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A14A8u);
        ctx->pc = 0x1A14A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14A0u;
            // 0x1a14a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A14A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A14A8u; }
            if (ctx->pc != 0x1A14A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A14A8u;
label_1a14a8:
    // 0x1a14a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a14a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a14ac:
    // 0x1a14ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a14acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a14b0:
    // 0x1a14b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a14b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a14b4:
    // 0x1a14b4: 0x3e00008  jr          $ra
label_1a14b8:
    if (ctx->pc == 0x1A14B8u) {
        ctx->pc = 0x1A14B8u;
            // 0x1a14b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A14BCu;
        goto label_1a14bc;
    }
    ctx->pc = 0x1A14B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14B4u;
            // 0x1a14b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A14BCu;
label_1a14bc:
    // 0x1a14bc: 0x0  nop
    ctx->pc = 0x1a14bcu;
    // NOP
label_1a14c0:
    // 0x1a14c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a14c4:
    // 0x1a14c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a14c8:
    // 0x1a14c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a14cc:
    // 0x1a14cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a14d0:
    // 0x1a14d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a14d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a14d4:
    // 0x1a14d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a14d8:
    // 0x1a14d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a14d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a14dc:
    // 0x1a14dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a14dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1a14e0:
    // 0x1a14e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a14e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a14e4:
    // 0x1a14e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1a14e8:
    // 0x1a14e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a14e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a14ec:
    // 0x1a14ec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a14ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1a14f0:
    // 0x1a14f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1a14f4:
    // 0x1a14f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1a14f8:
    // 0x1a14f8: 0xc0685c8  jal         func_1A1720
label_1a14fc:
    if (ctx->pc == 0x1A14FCu) {
        ctx->pc = 0x1A14FCu;
            // 0x1a14fc: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1500u;
        goto label_1a1500;
    }
    ctx->pc = 0x1A14F8u;
    SET_GPR_U32(ctx, 31, 0x1A1500u);
    ctx->pc = 0x1A14FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14F8u;
            // 0x1a14fc: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1500u; }
        if (ctx->pc != 0x1A1500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1500u; }
        if (ctx->pc != 0x1A1500u) { return; }
    }
    ctx->pc = 0x1A1500u;
label_1a1500:
    // 0x1a1500: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a1500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1504:
    // 0x1a1504: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
label_1a1508:
    if (ctx->pc == 0x1A1508u) {
        ctx->pc = 0x1A1508u;
            // 0x1a1508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A150Cu;
        goto label_1a150c;
    }
    ctx->pc = 0x1A1504u;
    {
        const bool branch_taken_0x1a1504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1504u;
            // 0x1a1508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1504) {
            ctx->pc = 0x1A15C8u;
            goto label_1a15c8;
        }
    }
    ctx->pc = 0x1A150Cu;
label_1a150c:
    // 0x1a150c: 0xc0683f8  jal         func_1A0FE0
label_1a1510:
    if (ctx->pc == 0x1A1510u) {
        ctx->pc = 0x1A1510u;
            // 0x1a1510: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A1514u;
        goto label_1a1514;
    }
    ctx->pc = 0x1A150Cu;
    SET_GPR_U32(ctx, 31, 0x1A1514u);
    ctx->pc = 0x1A1510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A150Cu;
            // 0x1a1510: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FE0u;
    if (runtime->hasFunction(0x1A0FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1514u; }
        if (ctx->pc != 0x1A1514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0FE0_0x1a0fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1514u; }
        if (ctx->pc != 0x1A1514u) { return; }
    }
    ctx->pc = 0x1A1514u;
label_1a1514:
    // 0x1a1514: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1a1518:
    // 0x1a1518: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a151c:
    // 0x1a151c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a1520:
    // 0x1a1520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1524:
    // 0x1a1524: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a1528:
    // 0x1a1528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a152c:
    // 0x1a152c: 0x245004f8  addiu       $s0, $v0, 0x4F8
    ctx->pc = 0x1a152cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
label_1a1530:
    // 0x1a1530: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a1530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a1534:
    // 0x1a1534: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a1534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1a1538:
    // 0x1a1538: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1a1538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a153c:
    // 0x1a153c: 0xae15001c  sw          $s5, 0x1C($s0)
    ctx->pc = 0x1a153cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 21));
label_1a1540:
    // 0x1a1540: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a1540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1a1544:
    // 0x1a1544: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1a1544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_1a1548:
    // 0x1a1548: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1a1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1a154c:
    // 0x1a154c: 0xc068430  jal         func_1A10C0
label_1a1550:
    if (ctx->pc == 0x1A1550u) {
        ctx->pc = 0x1A1550u;
            // 0x1a1550: 0xae160018  sw          $s6, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x1A1554u;
        goto label_1a1554;
    }
    ctx->pc = 0x1A154Cu;
    SET_GPR_U32(ctx, 31, 0x1A1554u);
    ctx->pc = 0x1A1550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A154Cu;
            // 0x1a1550: 0xae160018  sw          $s6, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A10C0u;
    if (runtime->hasFunction(0x1A10C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A10C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1554u; }
        if (ctx->pc != 0x1A1554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A10C0_0x1a10c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1554u; }
        if (ctx->pc != 0x1A1554u) { return; }
    }
    ctx->pc = 0x1A1554u;
label_1a1554:
    // 0x1a1554: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a1558:
    // 0x1a1558: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1a1558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a155c:
    // 0x1a155c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1a1560:
    if (ctx->pc == 0x1A1560u) {
        ctx->pc = 0x1A1560u;
            // 0x1a1560: 0x2484a798  addiu       $a0, $a0, -0x5868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944664));
        ctx->pc = 0x1A1564u;
        goto label_1a1564;
    }
    ctx->pc = 0x1A155Cu;
    {
        const bool branch_taken_0x1a155c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A155Cu;
            // 0x1a1560: 0x2484a798  addiu       $a0, $a0, -0x5868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a155c) {
            ctx->pc = 0x1A15ACu;
            goto label_1a15ac;
        }
    }
    ctx->pc = 0x1A1564u;
label_1a1564:
    // 0x1a1564: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1568:
    // 0x1a1568: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a1568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a156c:
    // 0x1a156c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1a156cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1570:
    // 0x1a1570: 0xc06156e  jal         func_1855B8
label_1a1574:
    if (ctx->pc == 0x1A1574u) {
        ctx->pc = 0x1A1574u;
            // 0x1a1574: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x1A1578u;
        goto label_1a1578;
    }
    ctx->pc = 0x1A1570u;
    SET_GPR_U32(ctx, 31, 0x1A1578u);
    ctx->pc = 0x1A1574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1570u;
            // 0x1a1574: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1578u; }
        if (ctx->pc != 0x1A1578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1578u; }
        if (ctx->pc != 0x1A1578u) { return; }
    }
    ctx->pc = 0x1A1578u;
label_1a1578:
    // 0x1a1578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a157c:
    // 0x1a157c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a1580:
    if (ctx->pc == 0x1A1580u) {
        ctx->pc = 0x1A1580u;
            // 0x1a1580: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1584u;
        goto label_1a1584;
    }
    ctx->pc = 0x1A157Cu;
    {
        const bool branch_taken_0x1a157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A157Cu;
            // 0x1a1580: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a157c) {
            ctx->pc = 0x1A1590u;
            goto label_1a1590;
        }
    }
    ctx->pc = 0x1A1584u;
label_1a1584:
    // 0x1a1584: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a1584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a1588:
    // 0x1a1588: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a158c:
    if (ctx->pc == 0x1A158Cu) {
        ctx->pc = 0x1A158Cu;
            // 0x1a158c: 0x2484a7c8  addiu       $a0, $a0, -0x5838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944712));
        ctx->pc = 0x1A1590u;
        goto label_1a1590;
    }
    ctx->pc = 0x1A1588u;
    {
        const bool branch_taken_0x1a1588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1588u;
            // 0x1a158c: 0x2484a7c8  addiu       $a0, $a0, -0x5838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1588) {
            ctx->pc = 0x1A15ACu;
            goto label_1a15ac;
        }
    }
    ctx->pc = 0x1A1590u;
label_1a1590:
    // 0x1a1590: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a1590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1a1594:
    // 0x1a1594: 0xc06844a  jal         func_1A1128
label_1a1598:
    if (ctx->pc == 0x1A1598u) {
        ctx->pc = 0x1A1598u;
            // 0x1a1598: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A159Cu;
        goto label_1a159c;
    }
    ctx->pc = 0x1A1594u;
    SET_GPR_U32(ctx, 31, 0x1A159Cu);
    ctx->pc = 0x1A1598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1594u;
            // 0x1a1598: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1128u;
    if (runtime->hasFunction(0x1A1128u)) {
        auto targetFn = runtime->lookupFunction(0x1A1128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A159Cu; }
        if (ctx->pc != 0x1A159Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1128_0x1a1128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A159Cu; }
        if (ctx->pc != 0x1A159Cu) { return; }
    }
    ctx->pc = 0x1A159Cu;
label_1a159c:
    // 0x1a159c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a159cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a15a0:
    // 0x1a15a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a15a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a15a4:
    // 0x1a15a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1a15a8:
    if (ctx->pc == 0x1A15A8u) {
        ctx->pc = 0x1A15A8u;
            // 0x1a15a8: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
        ctx->pc = 0x1A15ACu;
        goto label_1a15ac;
    }
    ctx->pc = 0x1A15A4u;
    {
        const bool branch_taken_0x1a15a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15A4u;
            // 0x1a15a8: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15a4) {
            ctx->pc = 0x1A15C0u;
            goto label_1a15c0;
        }
    }
    ctx->pc = 0x1A15ACu;
label_1a15ac:
    // 0x1a15ac: 0xc0686c6  jal         func_1A1B18
label_1a15b0:
    if (ctx->pc == 0x1A15B0u) {
        ctx->pc = 0x1A15B4u;
        goto label_1a15b4;
    }
    ctx->pc = 0x1A15ACu;
    SET_GPR_U32(ctx, 31, 0x1A15B4u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15B4u; }
        if (ctx->pc != 0x1A15B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15B4u; }
        if (ctx->pc != 0x1A15B4u) { return; }
    }
    ctx->pc = 0x1A15B4u;
label_1a15b4:
    // 0x1a15b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a15b8:
    if (ctx->pc == 0x1A15B8u) {
        ctx->pc = 0x1A15B8u;
            // 0x1a15b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A15BCu;
        goto label_1a15bc;
    }
    ctx->pc = 0x1A15B4u;
    {
        const bool branch_taken_0x1a15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15B4u;
            // 0x1a15b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15b4) {
            ctx->pc = 0x1A15C8u;
            goto label_1a15c8;
        }
    }
    ctx->pc = 0x1A15BCu;
label_1a15bc:
    // 0x1a15bc: 0x0  nop
    ctx->pc = 0x1a15bcu;
    // NOP
label_1a15c0:
    // 0x1a15c0: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1a15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_1a15c4:
    // 0x1a15c4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1a15c8:
    // 0x1a15c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a15c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a15cc:
    // 0x1a15cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a15ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a15d0:
    // 0x1a15d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a15d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a15d4:
    // 0x1a15d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a15d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a15d8:
    // 0x1a15d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a15dc:
    // 0x1a15dc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a15dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a15e0:
    // 0x1a15e0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a15e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a15e4:
    // 0x1a15e4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a15e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a15e8:
    // 0x1a15e8: 0x3e00008  jr          $ra
label_1a15ec:
    if (ctx->pc == 0x1A15ECu) {
        ctx->pc = 0x1A15ECu;
            // 0x1a15ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A15F0u;
        goto label_fallthrough_0x1a15e8;
    }
    ctx->pc = 0x1A15E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15E8u;
            // 0x1a15ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a15e8:
    ctx->pc = 0x1A15F0u;
}
