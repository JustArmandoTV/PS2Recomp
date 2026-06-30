#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109468
// Address: 0x109468 - 0x109620
void sub_00109468_0x109468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109468_0x109468");
#endif

    switch (ctx->pc) {
        case 0x1094b0u: goto label_1094b0;
        case 0x1094ccu: goto label_1094cc;
        case 0x1094d4u: goto label_1094d4;
        case 0x1094dcu: goto label_1094dc;
        case 0x1094f0u: goto label_1094f0;
        case 0x1094f8u: goto label_1094f8;
        case 0x109500u: goto label_109500;
        case 0x109558u: goto label_109558;
        case 0x109580u: goto label_109580;
        case 0x1095a4u: goto label_1095a4;
        case 0x1095c8u: goto label_1095c8;
        default: break;
    }

    ctx->pc = 0x109468u;

    // 0x109468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10946c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109470: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109474: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109478: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10947c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10947cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109480: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x109484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10948c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10948cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x109490: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x109494: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x109494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x109498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109498u;
    {
        const bool branch_taken_0x109498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10949Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109498u;
            // 0x10949c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109498) {
            ctx->pc = 0x1094B8u;
            goto label_1094b8;
        }
    }
    ctx->pc = 0x1094A0u;
    // 0x1094a0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1094a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1094a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1094a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094a8: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x1094A8u;
    SET_GPR_U32(ctx, 31, 0x1094B0u);
    ctx->pc = 0x1094ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1094A8u;
            // 0x1094ac: 0x24a5ea20  addiu       $a1, $a1, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094B0u; }
        if (ctx->pc != 0x1094B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094B0u; }
        if (ctx->pc != 0x1094B0u) { return; }
    }
    ctx->pc = 0x1094B0u;
label_1094b0:
    // 0x1094b0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1094B0u;
    {
        const bool branch_taken_0x1094b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094B0u;
            // 0x1094b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094b0) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x1094B8u;
label_1094b8:
    // 0x1094b8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x1094b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1094bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1094BCu;
    {
        const bool branch_taken_0x1094bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094BCu;
            // 0x1094c0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094bc) {
            ctx->pc = 0x1094E4u;
            goto label_1094e4;
        }
    }
    ctx->pc = 0x1094C4u;
    // 0x1094c4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1094C4u;
    SET_GPR_U32(ctx, 31, 0x1094CCu);
    ctx->pc = 0x1094C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1094C4u;
            // 0x1094c8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094CCu; }
        if (ctx->pc != 0x1094CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094CCu; }
        if (ctx->pc != 0x1094CCu) { return; }
    }
    ctx->pc = 0x1094CCu;
label_1094cc:
    // 0x1094cc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1094CCu;
    {
        const bool branch_taken_0x1094cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094CCu;
            // 0x1094d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094cc) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x1094D4u;
label_1094d4:
    // 0x1094d4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1094D4u;
    SET_GPR_U32(ctx, 31, 0x1094DCu);
    ctx->pc = 0x1094D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1094D4u;
            // 0x1094d8: 0x2484eaa0  addiu       $a0, $a0, -0x1560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094DCu; }
        if (ctx->pc != 0x1094DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094DCu; }
        if (ctx->pc != 0x1094DCu) { return; }
    }
    ctx->pc = 0x1094DCu;
label_1094dc:
    // 0x1094dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1094DCu;
    {
        const bool branch_taken_0x1094dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094DCu;
            // 0x1094e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094dc) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x1094E4u;
label_1094e4:
    // 0x1094e4: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x1094e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x1094e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1094ec: 0x0  nop
    ctx->pc = 0x1094ecu;
    // NOP
label_1094f0:
    // 0x1094f0: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1094F0u;
    {
        const bool branch_taken_0x1094f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1094F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094F0u;
            // 0x1094f4: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094f0) {
            ctx->pc = 0x109530u;
            goto label_109530;
        }
    }
    ctx->pc = 0x1094F8u;
label_1094f8:
    // 0x1094f8: 0xc0422f2  jal         func_108BC8
    ctx->pc = 0x1094F8u;
    SET_GPR_U32(ctx, 31, 0x109500u);
    ctx->pc = 0x1094FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1094F8u;
            // 0x1094fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC8u;
    if (runtime->hasFunction(0x108BC8u)) {
        auto targetFn = runtime->lookupFunction(0x108BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109500u; }
        if (ctx->pc != 0x109500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC8_0x108bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109500u; }
        if (ctx->pc != 0x109500u) { return; }
    }
    ctx->pc = 0x109500u;
label_109500:
    // 0x109500: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109504: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x109504u;
    {
        const bool branch_taken_0x109504 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x109508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109504u;
            // 0x109508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109504) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x10950Cu;
    // 0x10950c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10950Cu;
    {
        const bool branch_taken_0x10950c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10950Cu;
            // 0x109510: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10950c) {
            ctx->pc = 0x109530u;
            goto label_109530;
        }
    }
    ctx->pc = 0x109514u;
    // 0x109514: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x109514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x109518: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x109518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x10951c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10951Cu;
    {
        const bool branch_taken_0x10951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10951Cu;
            // 0x109520: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10951c) {
            ctx->pc = 0x109530u;
            goto label_109530;
        }
    }
    ctx->pc = 0x109524u;
    // 0x109524: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x109524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x109528: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x109528u;
    {
        const bool branch_taken_0x109528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109528u;
            // 0x10952c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109528) {
            ctx->pc = 0x1094F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1094f8;
        }
    }
    ctx->pc = 0x109530u;
label_109530:
    // 0x109530: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x109530u;
    {
        const bool branch_taken_0x109530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109530u;
            // 0x109534: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109530) {
            ctx->pc = 0x1095D8u;
            goto label_1095d8;
        }
    }
    ctx->pc = 0x109538u;
    // 0x109538: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x109538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10953c: 0x2442eac0  addiu       $v0, $v0, -0x1540
    ctx->pc = 0x10953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x109540: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109544: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109548: 0x800008  jr          $a0
    ctx->pc = 0x109548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109550u: goto label_109550;
            case 0x109564u: goto label_109564;
            case 0x109594u: goto label_109594;
            case 0x1095B8u: goto label_1095b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109550u;
label_109550:
    // 0x109550: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x109550u;
    SET_GPR_U32(ctx, 31, 0x109558u);
    ctx->pc = 0x109554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109550u;
            // 0x109554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (runtime->hasFunction(0x10ACD8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109558u; }
        if (ctx->pc != 0x109558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACD8_0x10acd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109558u; }
        if (ctx->pc != 0x109558u) { return; }
    }
    ctx->pc = 0x109558u;
label_109558:
    // 0x109558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10955c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10955Cu;
    {
        const bool branch_taken_0x10955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10955Cu;
            // 0x109560: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10955c) {
            ctx->pc = 0x1095D8u;
            goto label_1095d8;
        }
    }
    ctx->pc = 0x109564u;
label_109564:
    // 0x109564: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x109564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x109568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10956c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x10956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x109570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109574: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x109574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x109578: 0xc0427fc  jal         func_109FF0
    ctx->pc = 0x109578u;
    SET_GPR_U32(ctx, 31, 0x109580u);
    ctx->pc = 0x10957Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109578u;
            // 0x10957c: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109FF0u;
    if (runtime->hasFunction(0x109FF0u)) {
        auto targetFn = runtime->lookupFunction(0x109FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109580u; }
        if (ctx->pc != 0x109580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109FF0_0x109ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109580u; }
        if (ctx->pc != 0x109580u) { return; }
    }
    ctx->pc = 0x109580u;
label_109580:
    // 0x109580: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x109580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x109584: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10958c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10958Cu;
    {
        const bool branch_taken_0x10958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10958Cu;
            // 0x109590: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10958c) {
            ctx->pc = 0x1095D8u;
            goto label_1095d8;
        }
    }
    ctx->pc = 0x109594u;
label_109594:
    // 0x109594: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x109594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x109598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10959c: 0xc0427fc  jal         func_109FF0
    ctx->pc = 0x10959Cu;
    SET_GPR_U32(ctx, 31, 0x1095A4u);
    ctx->pc = 0x1095A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10959Cu;
            // 0x1095a0: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109FF0u;
    if (runtime->hasFunction(0x109FF0u)) {
        auto targetFn = runtime->lookupFunction(0x109FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1095A4u; }
        if (ctx->pc != 0x1095A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109FF0_0x109ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1095A4u; }
        if (ctx->pc != 0x1095A4u) { return; }
    }
    ctx->pc = 0x1095A4u;
label_1095a4:
    // 0x1095a4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1095a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1095a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1095a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1095acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1095b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1095B0u;
    {
        const bool branch_taken_0x1095b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1095B0u;
            // 0x1095b4: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095b0) {
            ctx->pc = 0x1095D8u;
            goto label_1095d8;
        }
    }
    ctx->pc = 0x1095B8u;
label_1095b8:
    // 0x1095b8: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1095b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1095bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095c0: 0xc0427fc  jal         func_109FF0
    ctx->pc = 0x1095C0u;
    SET_GPR_U32(ctx, 31, 0x1095C8u);
    ctx->pc = 0x1095C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1095C0u;
            // 0x1095c4: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109FF0u;
    if (runtime->hasFunction(0x109FF0u)) {
        auto targetFn = runtime->lookupFunction(0x109FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1095C8u; }
        if (ctx->pc != 0x1095C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109FF0_0x109ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1095C8u; }
        if (ctx->pc != 0x1095C8u) { return; }
    }
    ctx->pc = 0x1095C8u;
label_1095c8:
    // 0x1095c8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1095c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1095cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1095ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1095d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1095d4: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1095d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_1095d8:
    // 0x1095d8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x1095d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1095dc: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1095DCu;
    {
        const bool branch_taken_0x1095dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1095E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1095DCu;
            // 0x1095e0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095dc) {
            ctx->pc = 0x1094D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1094d4;
        }
    }
    ctx->pc = 0x1095E4u;
    // 0x1095e4: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x1095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x1095e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1095E8u;
    {
        const bool branch_taken_0x1095e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1095ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1095E8u;
            // 0x1095ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095e8) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x1095F0u;
    // 0x1095f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1095f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1095f4: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1095F4u;
    {
        const bool branch_taken_0x1095f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1095F4u;
            // 0x1095f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095f4) {
            ctx->pc = 0x1094F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1094f0;
        }
    }
    ctx->pc = 0x1095FCu;
    // 0x1095fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1095fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109600:
    // 0x109600: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109604: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109608: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10960c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10960cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109614: 0x3e00008  jr          $ra
    ctx->pc = 0x109614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109614u;
            // 0x109618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10961Cu;
    // 0x10961c: 0x0  nop
    ctx->pc = 0x10961cu;
    // NOP
}
