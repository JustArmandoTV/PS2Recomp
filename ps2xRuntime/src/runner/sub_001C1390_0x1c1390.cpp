#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1390
// Address: 0x1c1390 - 0x1c14a0
void sub_001C1390_0x1c1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1390_0x1c1390");
#endif

    switch (ctx->pc) {
        case 0x1c1390u: goto label_1c1390;
        case 0x1c1394u: goto label_1c1394;
        case 0x1c1398u: goto label_1c1398;
        case 0x1c139cu: goto label_1c139c;
        case 0x1c13a0u: goto label_1c13a0;
        case 0x1c13a4u: goto label_1c13a4;
        case 0x1c13a8u: goto label_1c13a8;
        case 0x1c13acu: goto label_1c13ac;
        case 0x1c13b0u: goto label_1c13b0;
        case 0x1c13b4u: goto label_1c13b4;
        case 0x1c13b8u: goto label_1c13b8;
        case 0x1c13bcu: goto label_1c13bc;
        case 0x1c13c0u: goto label_1c13c0;
        case 0x1c13c4u: goto label_1c13c4;
        case 0x1c13c8u: goto label_1c13c8;
        case 0x1c13ccu: goto label_1c13cc;
        case 0x1c13d0u: goto label_1c13d0;
        case 0x1c13d4u: goto label_1c13d4;
        case 0x1c13d8u: goto label_1c13d8;
        case 0x1c13dcu: goto label_1c13dc;
        case 0x1c13e0u: goto label_1c13e0;
        case 0x1c13e4u: goto label_1c13e4;
        case 0x1c13e8u: goto label_1c13e8;
        case 0x1c13ecu: goto label_1c13ec;
        case 0x1c13f0u: goto label_1c13f0;
        case 0x1c13f4u: goto label_1c13f4;
        case 0x1c13f8u: goto label_1c13f8;
        case 0x1c13fcu: goto label_1c13fc;
        case 0x1c1400u: goto label_1c1400;
        case 0x1c1404u: goto label_1c1404;
        case 0x1c1408u: goto label_1c1408;
        case 0x1c140cu: goto label_1c140c;
        case 0x1c1410u: goto label_1c1410;
        case 0x1c1414u: goto label_1c1414;
        case 0x1c1418u: goto label_1c1418;
        case 0x1c141cu: goto label_1c141c;
        case 0x1c1420u: goto label_1c1420;
        case 0x1c1424u: goto label_1c1424;
        case 0x1c1428u: goto label_1c1428;
        case 0x1c142cu: goto label_1c142c;
        case 0x1c1430u: goto label_1c1430;
        case 0x1c1434u: goto label_1c1434;
        case 0x1c1438u: goto label_1c1438;
        case 0x1c143cu: goto label_1c143c;
        case 0x1c1440u: goto label_1c1440;
        case 0x1c1444u: goto label_1c1444;
        case 0x1c1448u: goto label_1c1448;
        case 0x1c144cu: goto label_1c144c;
        case 0x1c1450u: goto label_1c1450;
        case 0x1c1454u: goto label_1c1454;
        case 0x1c1458u: goto label_1c1458;
        case 0x1c145cu: goto label_1c145c;
        case 0x1c1460u: goto label_1c1460;
        case 0x1c1464u: goto label_1c1464;
        case 0x1c1468u: goto label_1c1468;
        case 0x1c146cu: goto label_1c146c;
        case 0x1c1470u: goto label_1c1470;
        case 0x1c1474u: goto label_1c1474;
        case 0x1c1478u: goto label_1c1478;
        case 0x1c147cu: goto label_1c147c;
        case 0x1c1480u: goto label_1c1480;
        case 0x1c1484u: goto label_1c1484;
        case 0x1c1488u: goto label_1c1488;
        case 0x1c148cu: goto label_1c148c;
        case 0x1c1490u: goto label_1c1490;
        case 0x1c1494u: goto label_1c1494;
        case 0x1c1498u: goto label_1c1498;
        case 0x1c149cu: goto label_1c149c;
        default: break;
    }

    ctx->pc = 0x1c1390u;

label_1c1390:
    // 0x1c1390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1394:
    // 0x1c1394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1398:
    // 0x1c1398: 0xc0723b0  jal         func_1C8EC0
label_1c139c:
    if (ctx->pc == 0x1C139Cu) {
        ctx->pc = 0x1C13A0u;
        goto label_1c13a0;
    }
    ctx->pc = 0x1C1398u;
    SET_GPR_U32(ctx, 31, 0x1C13A0u);
    ctx->pc = 0x1C8EC0u;
    if (runtime->hasFunction(0x1C8EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C8EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13A0u; }
        if (ctx->pc != 0x1C13A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8EC0_0x1c8ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13A0u; }
        if (ctx->pc != 0x1C13A0u) { return; }
    }
    ctx->pc = 0x1C13A0u;
label_1c13a0:
    // 0x1c13a0: 0xc0723b0  jal         func_1C8EC0
label_1c13a4:
    if (ctx->pc == 0x1C13A4u) {
        ctx->pc = 0x1C13A8u;
        goto label_1c13a8;
    }
    ctx->pc = 0x1C13A0u;
    SET_GPR_U32(ctx, 31, 0x1C13A8u);
    ctx->pc = 0x1C8EC0u;
    if (runtime->hasFunction(0x1C8EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C8EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13A8u; }
        if (ctx->pc != 0x1C13A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8EC0_0x1c8ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13A8u; }
        if (ctx->pc != 0x1C13A8u) { return; }
    }
    ctx->pc = 0x1C13A8u;
label_1c13a8:
    // 0x1c13a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c13a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c13ac:
    // 0x1c13ac: 0x3e00008  jr          $ra
label_1c13b0:
    if (ctx->pc == 0x1C13B0u) {
        ctx->pc = 0x1C13B0u;
            // 0x1c13b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C13B4u;
        goto label_1c13b4;
    }
    ctx->pc = 0x1C13ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13ACu;
            // 0x1c13b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C13B4u;
label_1c13b4:
    // 0x1c13b4: 0x0  nop
    ctx->pc = 0x1c13b4u;
    // NOP
label_1c13b8:
    // 0x1c13b8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1c13bc:
    // 0x1c13bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c13c0:
    // 0x1c13c0: 0x2463bb10  addiu       $v1, $v1, -0x44F0
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949648));
label_1c13c4:
    // 0x1c13c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c13c8:
    // 0x1c13c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c13cc:
    // 0x1c13cc: 0xac43a4d0  sw          $v1, -0x5B30($v0)
    ctx->pc = 0x1c13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943952), GPR_U32(ctx, 3));
label_1c13d0:
    // 0x1c13d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c13d4:
    // 0x1c13d4: 0x40f809  jalr        $v0
label_1c13d8:
    if (ctx->pc == 0x1C13D8u) {
        ctx->pc = 0x1C13D8u;
            // 0x1c13d8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C13DCu;
        goto label_1c13dc;
    }
    ctx->pc = 0x1C13D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C13DCu);
        ctx->pc = 0x1C13D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13D4u;
            // 0x1c13d8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C13DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C13DCu; }
            if (ctx->pc != 0x1C13DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C13DCu;
label_1c13dc:
    // 0x1c13dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c13dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c13e0:
    // 0x1c13e0: 0x3e00008  jr          $ra
label_1c13e4:
    if (ctx->pc == 0x1C13E4u) {
        ctx->pc = 0x1C13E4u;
            // 0x1c13e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C13E8u;
        goto label_1c13e8;
    }
    ctx->pc = 0x1C13E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13E0u;
            // 0x1c13e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C13E8u;
label_1c13e8:
    // 0x1c13e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c13ec:
    // 0x1c13ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c13ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c13f0:
    // 0x1c13f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c13f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c13f4:
    // 0x1c13f4: 0xc071236  jal         func_1C48D8
label_1c13f8:
    if (ctx->pc == 0x1C13F8u) {
        ctx->pc = 0x1C13FCu;
        goto label_1c13fc;
    }
    ctx->pc = 0x1C13F4u;
    SET_GPR_U32(ctx, 31, 0x1C13FCu);
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13FCu; }
        if (ctx->pc != 0x1C13FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13FCu; }
        if (ctx->pc != 0x1C13FCu) { return; }
    }
    ctx->pc = 0x1C13FCu;
label_1c13fc:
    // 0x1c13fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1400:
    // 0x1c1400: 0x2450a4d0  addiu       $s0, $v0, -0x5B30
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943952));
label_1c1404:
    // 0x1c1404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1408:
    // 0x1c1408: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c140c:
    if (ctx->pc == 0x1C140Cu) {
        ctx->pc = 0x1C140Cu;
            // 0x1c140c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C1410u;
        goto label_1c1410;
    }
    ctx->pc = 0x1C1408u;
    {
        const bool branch_taken_0x1c1408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1408) {
            ctx->pc = 0x1C140Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1408u;
            // 0x1c140c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1424u;
            goto label_1c1424;
        }
    }
    ctx->pc = 0x1C1410u;
label_1c1410:
    // 0x1c1410: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1c1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1c1414:
    // 0x1c1414: 0x40f809  jalr        $v0
label_1c1418:
    if (ctx->pc == 0x1C1418u) {
        ctx->pc = 0x1C141Cu;
        goto label_1c141c;
    }
    ctx->pc = 0x1C1414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C141Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C141Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C141Cu; }
            if (ctx->pc != 0x1C141Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C141Cu;
label_1c141c:
    // 0x1c141c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c1420:
    // 0x1c1420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1424:
    // 0x1c1424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1428:
    // 0x1c1428: 0x3e00008  jr          $ra
label_1c142c:
    if (ctx->pc == 0x1C142Cu) {
        ctx->pc = 0x1C142Cu;
            // 0x1c142c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1430u;
        goto label_1c1430;
    }
    ctx->pc = 0x1C1428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1428u;
            // 0x1c142c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1434:
    // 0x1c1434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1438:
    // 0x1c1438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c143c:
    // 0x1c143c: 0xc071236  jal         func_1C48D8
label_1c1440:
    if (ctx->pc == 0x1C1440u) {
        ctx->pc = 0x1C1440u;
            // 0x1c1440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1444u;
        goto label_1c1444;
    }
    ctx->pc = 0x1C143Cu;
    SET_GPR_U32(ctx, 31, 0x1C1444u);
    ctx->pc = 0x1C1440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C143Cu;
            // 0x1c1440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1444u; }
        if (ctx->pc != 0x1C1444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1444u; }
        if (ctx->pc != 0x1C1444u) { return; }
    }
    ctx->pc = 0x1C1444u;
label_1c1444:
    // 0x1c1444: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1448:
    // 0x1c1448: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c144c:
    // 0x1c144c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1450:
    // 0x1c1450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1454:
    // 0x1c1454: 0x24c6b958  addiu       $a2, $a2, -0x46A8
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949208));
label_1c1458:
    // 0x1c1458: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_1c145c:
    // 0x1c145c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c145cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1460:
    // 0x1c1460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1464:
    if (ctx->pc == 0x1C1464u) {
        ctx->pc = 0x1C1464u;
            // 0x1c1464: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1468u;
        goto label_1c1468;
    }
    ctx->pc = 0x1C1460u;
    {
        const bool branch_taken_0x1c1460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1460u;
            // 0x1c1464: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1460) {
            ctx->pc = 0x1C1488u;
            goto label_1c1488;
        }
    }
    ctx->pc = 0x1C1468u;
label_1c1468:
    // 0x1c1468: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c146c:
    // 0x1c146c: 0x40f809  jalr        $v0
label_1c1470:
    if (ctx->pc == 0x1C1470u) {
        ctx->pc = 0x1C1474u;
        goto label_1c1474;
    }
    ctx->pc = 0x1C146Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1474u; }
            if (ctx->pc != 0x1C1474u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1474u;
label_1c1474:
    // 0x1c1474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1478:
    // 0x1c1478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c147c:
    // 0x1c147c: 0x3e00008  jr          $ra
label_1c1480:
    if (ctx->pc == 0x1C1480u) {
        ctx->pc = 0x1C1480u;
            // 0x1c1480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1484u;
        goto label_1c1484;
    }
    ctx->pc = 0x1C147Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C147Cu;
            // 0x1c1480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1484u;
label_1c1484:
    // 0x1c1484: 0x0  nop
    ctx->pc = 0x1c1484u;
    // NOP
label_1c1488:
    // 0x1c1488: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c148c:
    // 0x1c148c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c148cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1490:
    // 0x1c1490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1494:
    // 0x1c1494: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1498:
    // 0x1c1498: 0x80711fe  j           func_1C47F8
label_1c149c:
    if (ctx->pc == 0x1C149Cu) {
        ctx->pc = 0x1C149Cu;
            // 0x1c149c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C14A0u;
        goto label_fallthrough_0x1c1498;
    }
    ctx->pc = 0x1C1498u;
    ctx->pc = 0x1C149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1498u;
            // 0x1c149c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1c1498:
    ctx->pc = 0x1C14A0u;
}
