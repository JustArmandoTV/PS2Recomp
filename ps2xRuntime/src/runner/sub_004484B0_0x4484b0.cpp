#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004484B0
// Address: 0x4484b0 - 0x448590
void sub_004484B0_0x4484b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004484B0_0x4484b0");
#endif

    switch (ctx->pc) {
        case 0x4484b0u: goto label_4484b0;
        case 0x4484b4u: goto label_4484b4;
        case 0x4484b8u: goto label_4484b8;
        case 0x4484bcu: goto label_4484bc;
        case 0x4484c0u: goto label_4484c0;
        case 0x4484c4u: goto label_4484c4;
        case 0x4484c8u: goto label_4484c8;
        case 0x4484ccu: goto label_4484cc;
        case 0x4484d0u: goto label_4484d0;
        case 0x4484d4u: goto label_4484d4;
        case 0x4484d8u: goto label_4484d8;
        case 0x4484dcu: goto label_4484dc;
        case 0x4484e0u: goto label_4484e0;
        case 0x4484e4u: goto label_4484e4;
        case 0x4484e8u: goto label_4484e8;
        case 0x4484ecu: goto label_4484ec;
        case 0x4484f0u: goto label_4484f0;
        case 0x4484f4u: goto label_4484f4;
        case 0x4484f8u: goto label_4484f8;
        case 0x4484fcu: goto label_4484fc;
        case 0x448500u: goto label_448500;
        case 0x448504u: goto label_448504;
        case 0x448508u: goto label_448508;
        case 0x44850cu: goto label_44850c;
        case 0x448510u: goto label_448510;
        case 0x448514u: goto label_448514;
        case 0x448518u: goto label_448518;
        case 0x44851cu: goto label_44851c;
        case 0x448520u: goto label_448520;
        case 0x448524u: goto label_448524;
        case 0x448528u: goto label_448528;
        case 0x44852cu: goto label_44852c;
        case 0x448530u: goto label_448530;
        case 0x448534u: goto label_448534;
        case 0x448538u: goto label_448538;
        case 0x44853cu: goto label_44853c;
        case 0x448540u: goto label_448540;
        case 0x448544u: goto label_448544;
        case 0x448548u: goto label_448548;
        case 0x44854cu: goto label_44854c;
        case 0x448550u: goto label_448550;
        case 0x448554u: goto label_448554;
        case 0x448558u: goto label_448558;
        case 0x44855cu: goto label_44855c;
        case 0x448560u: goto label_448560;
        case 0x448564u: goto label_448564;
        case 0x448568u: goto label_448568;
        case 0x44856cu: goto label_44856c;
        case 0x448570u: goto label_448570;
        case 0x448574u: goto label_448574;
        case 0x448578u: goto label_448578;
        case 0x44857cu: goto label_44857c;
        case 0x448580u: goto label_448580;
        case 0x448584u: goto label_448584;
        case 0x448588u: goto label_448588;
        case 0x44858cu: goto label_44858c;
        default: break;
    }

    ctx->pc = 0x4484b0u;

label_4484b0:
    // 0x4484b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4484b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4484b4:
    // 0x4484b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4484b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4484b8:
    // 0x4484b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4484b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4484bc:
    // 0x4484bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4484bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4484c0:
    // 0x4484c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4484c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4484c4:
    // 0x4484c4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x4484c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4484c8:
    // 0x4484c8: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_4484cc:
    if (ctx->pc == 0x4484CCu) {
        ctx->pc = 0x4484CCu;
            // 0x4484cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4484D0u;
        goto label_4484d0;
    }
    ctx->pc = 0x4484C8u;
    {
        const bool branch_taken_0x4484c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4484C8u;
            // 0x4484cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484c8) {
            ctx->pc = 0x448578u;
            goto label_448578;
        }
    }
    ctx->pc = 0x4484D0u;
label_4484d0:
    // 0x4484d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4484d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4484d4:
    // 0x4484d4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4484d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4484d8:
    // 0x4484d8: 0xc04a508  jal         func_129420
label_4484dc:
    if (ctx->pc == 0x4484DCu) {
        ctx->pc = 0x4484DCu;
            // 0x4484dc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x4484E0u;
        goto label_4484e0;
    }
    ctx->pc = 0x4484D8u;
    SET_GPR_U32(ctx, 31, 0x4484E0u);
    ctx->pc = 0x4484DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4484D8u;
            // 0x4484dc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4484E0u; }
        if (ctx->pc != 0x4484E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4484E0u; }
        if (ctx->pc != 0x4484E0u) { return; }
    }
    ctx->pc = 0x4484E0u;
label_4484e0:
    // 0x4484e0: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x4484e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4484e4:
    // 0x4484e4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4484e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4484e8:
    // 0x4484e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4484ec:
    // 0x4484ec: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x4484ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_4484f0:
    // 0x4484f0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_4484f4:
    if (ctx->pc == 0x4484F4u) {
        ctx->pc = 0x4484F8u;
        goto label_4484f8;
    }
    ctx->pc = 0x4484F0u;
    {
        const bool branch_taken_0x4484f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4484f0) {
            ctx->pc = 0x448548u;
            goto label_448548;
        }
    }
    ctx->pc = 0x4484F8u;
label_4484f8:
    // 0x4484f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4484f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4484fc:
    // 0x4484fc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_448500:
    if (ctx->pc == 0x448500u) {
        ctx->pc = 0x448504u;
        goto label_448504;
    }
    ctx->pc = 0x4484FCu;
    {
        const bool branch_taken_0x4484fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4484fc) {
            ctx->pc = 0x448520u;
            goto label_448520;
        }
    }
    ctx->pc = 0x448504u;
label_448504:
    // 0x448504: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_448508:
    if (ctx->pc == 0x448508u) {
        ctx->pc = 0x44850Cu;
        goto label_44850c;
    }
    ctx->pc = 0x448504u;
    {
        const bool branch_taken_0x448504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448504) {
            ctx->pc = 0x448518u;
            goto label_448518;
        }
    }
    ctx->pc = 0x44850Cu;
label_44850c:
    // 0x44850c: 0x10000016  b           . + 4 + (0x16 << 2)
label_448510:
    if (ctx->pc == 0x448510u) {
        ctx->pc = 0x448514u;
        goto label_448514;
    }
    ctx->pc = 0x44850Cu;
    {
        const bool branch_taken_0x44850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44850c) {
            ctx->pc = 0x448568u;
            goto label_448568;
        }
    }
    ctx->pc = 0x448514u;
label_448514:
    // 0x448514: 0x0  nop
    ctx->pc = 0x448514u;
    // NOP
label_448518:
    // 0x448518: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x448518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_44851c:
    // 0x44851c: 0x0  nop
    ctx->pc = 0x44851cu;
    // NOP
label_448520:
    // 0x448520: 0xc11217c  jal         func_4485F0
label_448524:
    if (ctx->pc == 0x448524u) {
        ctx->pc = 0x448524u;
            // 0x448524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448528u;
        goto label_448528;
    }
    ctx->pc = 0x448520u;
    SET_GPR_U32(ctx, 31, 0x448528u);
    ctx->pc = 0x448524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448520u;
            // 0x448524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4485F0u;
    if (runtime->hasFunction(0x4485F0u)) {
        auto targetFn = runtime->lookupFunction(0x4485F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448528u; }
        if (ctx->pc != 0x448528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004485F0_0x4485f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448528u; }
        if (ctx->pc != 0x448528u) { return; }
    }
    ctx->pc = 0x448528u;
label_448528:
    // 0x448528: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x448528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_44852c:
    // 0x44852c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_448530:
    // 0x448530: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_448534:
    if (ctx->pc == 0x448534u) {
        ctx->pc = 0x448538u;
        goto label_448538;
    }
    ctx->pc = 0x448530u;
    {
        const bool branch_taken_0x448530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x448530) {
            ctx->pc = 0x448568u;
            goto label_448568;
        }
    }
    ctx->pc = 0x448538u;
label_448538:
    // 0x448538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x448538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44853c:
    // 0x44853c: 0x1000000a  b           . + 4 + (0xA << 2)
label_448540:
    if (ctx->pc == 0x448540u) {
        ctx->pc = 0x448540u;
            // 0x448540: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->pc = 0x448544u;
        goto label_448544;
    }
    ctx->pc = 0x44853Cu;
    {
        const bool branch_taken_0x44853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44853Cu;
            // 0x448540: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44853c) {
            ctx->pc = 0x448568u;
            goto label_448568;
        }
    }
    ctx->pc = 0x448544u;
label_448544:
    // 0x448544: 0x0  nop
    ctx->pc = 0x448544u;
    // NOP
label_448548:
    // 0x448548: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x448548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44854c:
    // 0x44854c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44854cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_448550:
    // 0x448550: 0x320f809  jalr        $t9
label_448554:
    if (ctx->pc == 0x448554u) {
        ctx->pc = 0x448554u;
            // 0x448554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448558u;
        goto label_448558;
    }
    ctx->pc = 0x448550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448558u);
        ctx->pc = 0x448554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448550u;
            // 0x448554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448558u; }
            if (ctx->pc != 0x448558u) { return; }
        }
        }
    }
    ctx->pc = 0x448558u;
label_448558:
    // 0x448558: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x448558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_44855c:
    // 0x44855c: 0xc112164  jal         func_448590
label_448560:
    if (ctx->pc == 0x448560u) {
        ctx->pc = 0x448560u;
            // 0x448560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448564u;
        goto label_448564;
    }
    ctx->pc = 0x44855Cu;
    SET_GPR_U32(ctx, 31, 0x448564u);
    ctx->pc = 0x448560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44855Cu;
            // 0x448560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448590u;
    if (runtime->hasFunction(0x448590u)) {
        auto targetFn = runtime->lookupFunction(0x448590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448564u; }
        if (ctx->pc != 0x448564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448590_0x448590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448564u; }
        if (ctx->pc != 0x448564u) { return; }
    }
    ctx->pc = 0x448564u;
label_448564:
    // 0x448564: 0x0  nop
    ctx->pc = 0x448564u;
    // NOP
label_448568:
    // 0x448568: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x448568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_44856c:
    // 0x44856c: 0x1640ffdd  bnez        $s2, . + 4 + (-0x23 << 2)
label_448570:
    if (ctx->pc == 0x448570u) {
        ctx->pc = 0x448570u;
            // 0x448570: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x448574u;
        goto label_448574;
    }
    ctx->pc = 0x44856Cu;
    {
        const bool branch_taken_0x44856c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x448570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44856Cu;
            // 0x448570: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44856c) {
            ctx->pc = 0x4484E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4484e4;
        }
    }
    ctx->pc = 0x448574u;
label_448574:
    // 0x448574: 0x0  nop
    ctx->pc = 0x448574u;
    // NOP
label_448578:
    // 0x448578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x448578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44857c:
    // 0x44857c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44857cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_448580:
    // 0x448580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x448580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_448584:
    // 0x448584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x448584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_448588:
    // 0x448588: 0x3e00008  jr          $ra
label_44858c:
    if (ctx->pc == 0x44858Cu) {
        ctx->pc = 0x44858Cu;
            // 0x44858c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x448590u;
        goto label_fallthrough_0x448588;
    }
    ctx->pc = 0x448588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448588u;
            // 0x44858c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x448588:
    ctx->pc = 0x448590u;
}
