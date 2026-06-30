#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8500
// Address: 0x1b8500 - 0x1b85a8
void sub_001B8500_0x1b8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8500_0x1b8500");
#endif

    switch (ctx->pc) {
        case 0x1b8500u: goto label_1b8500;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b851cu: goto label_1b851c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8524u: goto label_1b8524;
        case 0x1b8528u: goto label_1b8528;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8530u: goto label_1b8530;
        case 0x1b8534u: goto label_1b8534;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8544u: goto label_1b8544;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8554u: goto label_1b8554;
        case 0x1b8558u: goto label_1b8558;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8564u: goto label_1b8564;
        case 0x1b8568u: goto label_1b8568;
        case 0x1b856cu: goto label_1b856c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b857cu: goto label_1b857c;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        default: break;
    }

    ctx->pc = 0x1b8500u;

label_1b8500:
    // 0x1b8500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b8504:
    // 0x1b8504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b8508:
    // 0x1b8508: 0xc070180  jal         func_1C0600
label_1b850c:
    if (ctx->pc == 0x1B850Cu) {
        ctx->pc = 0x1B8510u;
        goto label_1b8510;
    }
    ctx->pc = 0x1B8508u;
    SET_GPR_U32(ctx, 31, 0x1B8510u);
    ctx->pc = 0x1C0600u;
    if (runtime->hasFunction(0x1C0600u)) {
        auto targetFn = runtime->lookupFunction(0x1C0600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0600_0x1c0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    }
    ctx->pc = 0x1B8510u;
label_1b8510:
    // 0x1b8510: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1b8514:
    // 0x1b8514: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b8518:
    if (ctx->pc == 0x1B8518u) {
        ctx->pc = 0x1B8518u;
            // 0x1b8518: 0x24639980  addiu       $v1, $v1, -0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941056));
        ctx->pc = 0x1B851Cu;
        goto label_1b851c;
    }
    ctx->pc = 0x1B8514u;
    {
        const bool branch_taken_0x1b8514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8514u;
            // 0x1b8518: 0x24639980  addiu       $v1, $v1, -0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8514) {
            ctx->pc = 0x1B8538u;
            goto label_1b8538;
        }
    }
    ctx->pc = 0x1B851Cu;
label_1b851c:
    // 0x1b851c: 0xc07018a  jal         func_1C0628
label_1b8520:
    if (ctx->pc == 0x1B8520u) {
        ctx->pc = 0x1B8524u;
        goto label_1b8524;
    }
    ctx->pc = 0x1B851Cu;
    SET_GPR_U32(ctx, 31, 0x1B8524u);
    ctx->pc = 0x1C0628u;
    if (runtime->hasFunction(0x1C0628u)) {
        auto targetFn = runtime->lookupFunction(0x1C0628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8524u; }
        if (ctx->pc != 0x1B8524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0628_0x1c0628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8524u; }
        if (ctx->pc != 0x1B8524u) { return; }
    }
    ctx->pc = 0x1B8524u;
label_1b8524:
    // 0x1b8524: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1b8528:
    // 0x1b8528: 0xc070136  jal         func_1C04D8
label_1b852c:
    if (ctx->pc == 0x1B852Cu) {
        ctx->pc = 0x1B852Cu;
            // 0x1b852c: 0xfc621e88  sd          $v0, 0x1E88($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 7816), GPR_U64(ctx, 2));
        ctx->pc = 0x1B8530u;
        goto label_1b8530;
    }
    ctx->pc = 0x1B8528u;
    SET_GPR_U32(ctx, 31, 0x1B8530u);
    ctx->pc = 0x1B852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8528u;
            // 0x1b852c: 0xfc621e88  sd          $v0, 0x1E88($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 7816), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C04D8u;
    if (runtime->hasFunction(0x1C04D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C04D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8530u; }
        if (ctx->pc != 0x1B8530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C04D8_0x1c04d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8530u; }
        if (ctx->pc != 0x1B8530u) { return; }
    }
    ctx->pc = 0x1B8530u;
label_1b8530:
    // 0x1b8530: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b8534:
    if (ctx->pc == 0x1B8534u) {
        ctx->pc = 0x1B8534u;
            // 0x1b8534: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1B8538u;
        goto label_1b8538;
    }
    ctx->pc = 0x1B8530u;
    {
        const bool branch_taken_0x1b8530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8530u;
            // 0x1b8534: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8530) {
            ctx->pc = 0x1B859Cu;
            goto label_1b859c;
        }
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b853c:
    // 0x1b853c: 0x8c449978  lw          $a0, -0x6688($v0)
    ctx->pc = 0x1b853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941048)));
label_1b8540:
    // 0x1b8540: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_1b8544:
    if (ctx->pc == 0x1B8544u) {
        ctx->pc = 0x1B8544u;
            // 0x1b8544: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->pc = 0x1B8548u;
        goto label_1b8548;
    }
    ctx->pc = 0x1B8540u;
    {
        const bool branch_taken_0x1b8540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8540) {
            ctx->pc = 0x1B8544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8540u;
            // 0x1b8544: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8584u;
            goto label_1b8584;
        }
    }
    ctx->pc = 0x1B8548u;
label_1b8548:
    // 0x1b8548: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1b854c:
    // 0x1b854c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1b8550:
    if (ctx->pc == 0x1B8550u) {
        ctx->pc = 0x1B8550u;
            // 0x1b8550: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->pc = 0x1B8554u;
        goto label_1b8554;
    }
    ctx->pc = 0x1B854Cu;
    {
        const bool branch_taken_0x1b854c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b854c) {
            ctx->pc = 0x1B8550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B854Cu;
            // 0x1b8550: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8584u;
            goto label_1b8584;
        }
    }
    ctx->pc = 0x1B8554u;
label_1b8554:
    // 0x1b8554: 0x8c821064  lw          $v0, 0x1064($a0)
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4196)));
label_1b8558:
    // 0x1b8558: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b855c:
    if (ctx->pc == 0x1B855Cu) {
        ctx->pc = 0x1B855Cu;
            // 0x1b855c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8560u;
        goto label_1b8560;
    }
    ctx->pc = 0x1B8558u;
    {
        const bool branch_taken_0x1b8558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8558u;
            // 0x1b855c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8558) {
            ctx->pc = 0x1B8580u;
            goto label_1b8580;
        }
    }
    ctx->pc = 0x1B8560u;
label_1b8560:
    // 0x1b8560: 0x8c841078  lw          $a0, 0x1078($a0)
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4216)));
label_1b8564:
    // 0x1b8564: 0x40f809  jalr        $v0
label_1b8568:
    if (ctx->pc == 0x1B8568u) {
        ctx->pc = 0x1B8568u;
            // 0x1b8568: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1B856Cu;
        goto label_1b856c;
    }
    ctx->pc = 0x1B8564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B856Cu);
        ctx->pc = 0x1B8568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8564u;
            // 0x1b8568: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B856Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B856Cu; }
            if (ctx->pc != 0x1B856Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B856Cu;
label_1b856c:
    // 0x1b856c: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1b856cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
label_1b8570:
    // 0x1b8570: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b8574:
    // 0x1b8574: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b8574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8578:
    // 0x1b8578: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b857c:
    if (ctx->pc == 0x1B857Cu) {
        ctx->pc = 0x1B857Cu;
            // 0x1b857c: 0xfc831e88  sd          $v1, 0x1E88($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 7816), GPR_U64(ctx, 3));
        ctx->pc = 0x1B8580u;
        goto label_1b8580;
    }
    ctx->pc = 0x1B8578u;
    {
        const bool branch_taken_0x1b8578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8578u;
            // 0x1b857c: 0xfc831e88  sd          $v1, 0x1E88($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 7816), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8578) {
            ctx->pc = 0x1B8598u;
            goto label_1b8598;
        }
    }
    ctx->pc = 0x1B8580u;
label_1b8580:
    // 0x1b8580: 0x8c6401c0  lw          $a0, 0x1C0($v1)
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_1b8584:
    // 0x1b8584: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_1b8588:
    // 0x1b8588: 0x8c6501bc  lw          $a1, 0x1BC($v1)
    ctx->pc = 0x1b8588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1b858c:
    // 0x1b858c: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1b8590:
    // 0x1b8590: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1b8590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b8594:
    // 0x1b8594: 0xfc651e88  sd          $a1, 0x1E88($v1)
    ctx->pc = 0x1b8594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 7816), GPR_U64(ctx, 5));
label_1b8598:
    // 0x1b8598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b859c:
    // 0x1b859c: 0x3e00008  jr          $ra
label_1b85a0:
    if (ctx->pc == 0x1B85A0u) {
        ctx->pc = 0x1B85A0u;
            // 0x1b85a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B85A4u;
        goto label_1b85a4;
    }
    ctx->pc = 0x1B859Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B85A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B859Cu;
            // 0x1b85a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B85A4u;
label_1b85a4:
    // 0x1b85a4: 0x0  nop
    ctx->pc = 0x1b85a4u;
    // NOP
}
