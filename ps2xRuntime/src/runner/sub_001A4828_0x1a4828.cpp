#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4828
// Address: 0x1a4828 - 0x1a4988
void sub_001A4828_0x1a4828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4828_0x1a4828");
#endif

    switch (ctx->pc) {
        case 0x1a484cu: goto label_1a484c;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4958u: goto label_1a4958;
        default: break;
    }

    ctx->pc = 0x1a4828u;

    // 0x1a4828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a482c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a4830: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a4830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4834: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a4834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a4838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a483c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a4840: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4844: 0xc06ded0  jal         func_1B7B40
    ctx->pc = 0x1A4844u;
    SET_GPR_U32(ctx, 31, 0x1A484Cu);
    ctx->pc = 0x1A4848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4844u;
            // 0x1a4848: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B40u;
    if (runtime->hasFunction(0x1B7B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A484Cu; }
        if (ctx->pc != 0x1A484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B40_0x1b7b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A484Cu; }
        if (ctx->pc != 0x1A484Cu) { return; }
    }
    ctx->pc = 0x1A484Cu;
label_1a484c:
    // 0x1a484c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4854: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1A4854u;
    SET_GPR_U32(ctx, 31, 0x1A485Cu);
    ctx->pc = 0x1A4858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4854u;
            // 0x1a4858: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A485Cu; }
        if (ctx->pc != 0x1A485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A485Cu; }
        if (ctx->pc != 0x1A485Cu) { return; }
    }
    ctx->pc = 0x1A485Cu;
label_1a485c:
    // 0x1a485c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a485cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a4860: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a4860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4864: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a4864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a486c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A486Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A486Cu;
            // 0x1a4870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4874u;
    // 0x1a4874: 0x0  nop
    ctx->pc = 0x1a4874u;
    // NOP
    // 0x1a4878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a487c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4884: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1a4884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1a4888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a488c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A488Cu;
    ctx->pc = 0x1A4890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A488Cu;
            // 0x1a4890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4894u;
    // 0x1a4894: 0x0  nop
    ctx->pc = 0x1a4894u;
    // NOP
    // 0x1a4898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a489c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a489cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a48a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a48a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a48a4: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1a48a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1a48a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a48a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a48ac: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A48ACu;
    ctx->pc = 0x1A48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48ACu;
            // 0x1a48b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A48B4u;
    // 0x1a48b4: 0x0  nop
    ctx->pc = 0x1a48b4u;
    // NOP
    // 0x1a48b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a48bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a48bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a48c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a48c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a48c4: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1a48c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1a48c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a48c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a48cc: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A48CCu;
    ctx->pc = 0x1A48D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48CCu;
            // 0x1a48d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A48D4u;
    // 0x1a48d4: 0x0  nop
    ctx->pc = 0x1a48d4u;
    // NOP
    // 0x1a48d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a48dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a48dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a48e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a48e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a48e4: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1a48e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1a48e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a48e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a48ec: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A48ECu;
    ctx->pc = 0x1A48F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48ECu;
            // 0x1a48f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A48F4u;
    // 0x1a48f4: 0x0  nop
    ctx->pc = 0x1a48f4u;
    // NOP
    // 0x1a48f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a48fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4908: 0xc069262  jal         func_1A4988
    ctx->pc = 0x1A4908u;
    SET_GPR_U32(ctx, 31, 0x1A4910u);
    ctx->pc = 0x1A490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4908u;
            // 0x1a490c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4988u;
    if (runtime->hasFunction(0x1A4988u)) {
        auto targetFn = runtime->lookupFunction(0x1A4988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4910u; }
        if (ctx->pc != 0x1A4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4988_0x1a4988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4910u; }
        if (ctx->pc != 0x1A4910u) { return; }
    }
    ctx->pc = 0x1A4910u;
label_1a4910:
    // 0x1a4910: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a4910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4914: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4914u;
    {
        const bool branch_taken_0x1a4914 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4914) {
            ctx->pc = 0x1A4918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4914u;
            // 0x1a4918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4974u;
            goto label_1a4974;
        }
    }
    ctx->pc = 0x1A491Cu;
    // 0x1a491c: 0x8e102074  lw          $s0, 0x2074($s0)
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
    // 0x1a4920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4924: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a4928: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A4928u;
    {
        const bool branch_taken_0x1a4928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4928u;
            // 0x1a492c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4928) {
            ctx->pc = 0x1A4970u;
            goto label_1a4970;
        }
    }
    ctx->pc = 0x1A4930u;
    // 0x1a4930: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a4934: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4934u;
    {
        const bool branch_taken_0x1a4934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4934u;
            // 0x1a4938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4934) {
            ctx->pc = 0x1A4970u;
            goto label_1a4970;
        }
    }
    ctx->pc = 0x1A493Cu;
    // 0x1a493c: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a4940: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a4944: 0xc05af66  jal         func_16BD98
    ctx->pc = 0x1A4944u;
    SET_GPR_U32(ctx, 31, 0x1A494Cu);
    ctx->pc = 0x1A4948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4944u;
            // 0x1a4948: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD98u;
    if (runtime->hasFunction(0x16BD98u)) {
        auto targetFn = runtime->lookupFunction(0x16BD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A494Cu; }
        if (ctx->pc != 0x1A494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BD98_0x16bd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A494Cu; }
        if (ctx->pc != 0x1A494Cu) { return; }
    }
    ctx->pc = 0x1A494Cu;
label_1a494c:
    // 0x1a494c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4950: 0xc05d596  jal         func_175658
    ctx->pc = 0x1A4950u;
    SET_GPR_U32(ctx, 31, 0x1A4958u);
    ctx->pc = 0x1A4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4950u;
            // 0x1a4954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175658u;
    if (runtime->hasFunction(0x175658u)) {
        auto targetFn = runtime->lookupFunction(0x175658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4958u; }
        if (ctx->pc != 0x1A4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175658_0x175658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4958u; }
        if (ctx->pc != 0x1A4958u) { return; }
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a495c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a4960: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a4960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1a4964: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
    // 0x1a4968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a496c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1a496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_1a4970:
    // 0x1a4970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4974:
    // 0x1a4974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a497c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A497Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A497Cu;
            // 0x1a4980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4984u;
    // 0x1a4984: 0x0  nop
    ctx->pc = 0x1a4984u;
    // NOP
}
