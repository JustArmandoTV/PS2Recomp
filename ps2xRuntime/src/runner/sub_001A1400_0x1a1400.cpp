#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1400
// Address: 0x1a1400 - 0x1a1460
void sub_001A1400_0x1a1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1400_0x1a1400");
#endif

    switch (ctx->pc) {
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        default: break;
    }

    ctx->pc = 0x1a1400u;

label_1a1400:
    // 0x1a1400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1404:
    // 0x1a1404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1408:
    // 0x1a1408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a140c:
    // 0x1a140c: 0xc0685d4  jal         func_1A1750
label_1a1410:
    if (ctx->pc == 0x1A1410u) {
        ctx->pc = 0x1A1410u;
            // 0x1a1410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1414u;
        goto label_1a1414;
    }
    ctx->pc = 0x1A140Cu;
    SET_GPR_U32(ctx, 31, 0x1A1414u);
    ctx->pc = 0x1A1410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A140Cu;
            // 0x1a1410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1414u; }
        if (ctx->pc != 0x1A1414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1414u; }
        if (ctx->pc != 0x1A1414u) { return; }
    }
    ctx->pc = 0x1A1414u;
label_1a1414:
    // 0x1a1414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1418:
    // 0x1a1418: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a141c:
    if (ctx->pc == 0x1A141Cu) {
        ctx->pc = 0x1A141Cu;
            // 0x1a141c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1420u;
        goto label_1a1420;
    }
    ctx->pc = 0x1A1418u;
    {
        const bool branch_taken_0x1a1418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1418u;
            // 0x1a141c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1418) {
            ctx->pc = 0x1A1428u;
            goto label_1a1428;
        }
    }
    ctx->pc = 0x1A1420u;
label_1a1420:
    // 0x1a1420: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a1424:
    if (ctx->pc == 0x1A1424u) {
        ctx->pc = 0x1A1424u;
            // 0x1a1424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1428u;
        goto label_1a1428;
    }
    ctx->pc = 0x1A1420u;
    {
        const bool branch_taken_0x1a1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1420u;
            // 0x1a1424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1420) {
            ctx->pc = 0x1A1450u;
            goto label_1a1450;
        }
    }
    ctx->pc = 0x1A1428u;
label_1a1428:
    // 0x1a1428: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a142c:
    // 0x1a142c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1430:
    if (ctx->pc == 0x1A1430u) {
        ctx->pc = 0x1A1430u;
            // 0x1a1430: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A1434u;
        goto label_1a1434;
    }
    ctx->pc = 0x1A142Cu;
    {
        const bool branch_taken_0x1a142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A142Cu;
            // 0x1a1430: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a142c) {
            ctx->pc = 0x1A144Cu;
            goto label_1a144c;
        }
    }
    ctx->pc = 0x1A1434u;
label_1a1434:
    // 0x1a1434: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a1438:
    // 0x1a1438: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a143c:
    if (ctx->pc == 0x1A143Cu) {
        ctx->pc = 0x1A143Cu;
            // 0x1a143c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1440u;
        goto label_1a1440;
    }
    ctx->pc = 0x1A1438u;
    {
        const bool branch_taken_0x1a1438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1438) {
            ctx->pc = 0x1A143Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1438u;
            // 0x1a143c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1450u;
            goto label_1a1450;
        }
    }
    ctx->pc = 0x1A1440u;
label_1a1440:
    // 0x1a1440: 0x40f809  jalr        $v0
label_1a1444:
    if (ctx->pc == 0x1A1444u) {
        ctx->pc = 0x1A1448u;
        goto label_1a1448;
    }
    ctx->pc = 0x1A1440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1448u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1448u; }
            if (ctx->pc != 0x1A1448u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1448u;
label_1a1448:
    // 0x1a1448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a144c:
    // 0x1a144c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a144cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1450:
    // 0x1a1450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1454:
    // 0x1a1454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1458:
    // 0x1a1458: 0x3e00008  jr          $ra
label_1a145c:
    if (ctx->pc == 0x1A145Cu) {
        ctx->pc = 0x1A145Cu;
            // 0x1a145c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1460u;
        goto label_fallthrough_0x1a1458;
    }
    ctx->pc = 0x1A1458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1458u;
            // 0x1a145c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a1458:
    ctx->pc = 0x1A1460u;
}
