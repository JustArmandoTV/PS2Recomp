#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4638
// Address: 0x1a4638 - 0x1a4750
void sub_001A4638_0x1a4638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4638_0x1a4638");
#endif

    switch (ctx->pc) {
        case 0x1a464cu: goto label_1a464c;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a472cu: goto label_1a472c;
        default: break;
    }

    ctx->pc = 0x1a4638u;

    // 0x1a4638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a463c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4640: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a4644: 0xc05cc84  jal         func_173210
    ctx->pc = 0x1A4644u;
    SET_GPR_U32(ctx, 31, 0x1A464Cu);
    ctx->pc = 0x1A4648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4644u;
            // 0x1a4648: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A464Cu; }
        if (ctx->pc != 0x1A464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A464Cu; }
        if (ctx->pc != 0x1A464Cu) { return; }
    }
    ctx->pc = 0x1A464Cu;
label_1a464c:
    // 0x1a464c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a464cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4654: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4654u;
            // 0x1a4658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A465Cu;
    // 0x1a465c: 0x0  nop
    ctx->pc = 0x1a465cu;
    // NOP
    // 0x1a4660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4664: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a4664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4668: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a4668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a466c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a466cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4670: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a4670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a4674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4678: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a4678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a467c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a4680: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a4680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a4684: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a4684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1a4688: 0x8e932074  lw          $s3, 0x2074($s4)
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8308)));
    // 0x1a468c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A468Cu;
    {
        const bool branch_taken_0x1a468c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A468Cu;
            // 0x1a4690: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a468c) {
            ctx->pc = 0x1A46B4u;
            goto label_1a46b4;
        }
    }
    ctx->pc = 0x1A4694u;
    // 0x1a4694: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4694u;
    {
        const bool branch_taken_0x1a4694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4694) {
            ctx->pc = 0x1A4698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4694u;
            // 0x1a4698: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A46B0u;
            goto label_1a46b0;
        }
    }
    ctx->pc = 0x1A469Cu;
    // 0x1a469c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a46a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A46A0u;
    {
        const bool branch_taken_0x1a46a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A46A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46A0u;
            // 0x1a46a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46a0) {
            ctx->pc = 0x1A46C8u;
            goto label_1a46c8;
        }
    }
    ctx->pc = 0x1A46A8u;
    // 0x1a46a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A46A8u;
    {
        const bool branch_taken_0x1a46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46A8u;
            // 0x1a46ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46a8) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46B0u;
label_1a46b0:
    // 0x1a46b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a46b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a46b4:
    // 0x1a46b4: 0xc0691e8  jal         func_1A47A0
    ctx->pc = 0x1A46B4u;
    SET_GPR_U32(ctx, 31, 0x1A46BCu);
    ctx->pc = 0x1A47A0u;
    if (runtime->hasFunction(0x1A47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46BCu; }
        if (ctx->pc != 0x1A46BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A47A0_0x1a47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46BCu; }
        if (ctx->pc != 0x1A46BCu) { return; }
    }
    ctx->pc = 0x1A46BCu;
label_1a46bc:
    // 0x1a46bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A46BCu;
    {
        const bool branch_taken_0x1a46bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46BCu;
            // 0x1a46c0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46bc) {
            ctx->pc = 0x1A4730u;
            goto label_1a4730;
        }
    }
    ctx->pc = 0x1A46C4u;
    // 0x1a46c4: 0x0  nop
    ctx->pc = 0x1a46c4u;
    // NOP
label_1a46c8:
    // 0x1a46c8: 0xc068fd0  jal         func_1A3F40
    ctx->pc = 0x1A46C8u;
    SET_GPR_U32(ctx, 31, 0x1A46D0u);
    ctx->pc = 0x1A46CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46C8u;
            // 0x1a46cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F40u;
    if (runtime->hasFunction(0x1A3F40u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46D0u; }
        if (ctx->pc != 0x1A46D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F40_0x1a3f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46D0u; }
        if (ctx->pc != 0x1A46D0u) { return; }
    }
    ctx->pc = 0x1A46D0u;
label_1a46d0:
    // 0x1a46d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A46D0u;
    {
        const bool branch_taken_0x1a46d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46D0u;
            // 0x1a46d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46d0) {
            ctx->pc = 0x1A4730u;
            goto label_1a4730;
        }
    }
    ctx->pc = 0x1A46D8u;
    // 0x1a46d8: 0xc05ceb6  jal         func_173AD8
    ctx->pc = 0x1A46D8u;
    SET_GPR_U32(ctx, 31, 0x1A46E0u);
    ctx->pc = 0x1A46DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46D8u;
            // 0x1a46dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AD8u;
    if (runtime->hasFunction(0x173AD8u)) {
        auto targetFn = runtime->lookupFunction(0x173AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46E0u; }
        if (ctx->pc != 0x1A46E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173AD8_0x173ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46E0u; }
        if (ctx->pc != 0x1A46E0u) { return; }
    }
    ctx->pc = 0x1A46E0u;
label_1a46e0:
    // 0x1a46e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a46e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a46e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a46e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a46e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a46ec: 0xc06920a  jal         func_1A4828
    ctx->pc = 0x1A46ECu;
    SET_GPR_U32(ctx, 31, 0x1A46F4u);
    ctx->pc = 0x1A46F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46ECu;
            // 0x1a46f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4828u;
    if (runtime->hasFunction(0x1A4828u)) {
        auto targetFn = runtime->lookupFunction(0x1A4828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46F4u; }
        if (ctx->pc != 0x1A46F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4828_0x1a4828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46F4u; }
        if (ctx->pc != 0x1A46F4u) { return; }
    }
    ctx->pc = 0x1A46F4u;
label_1a46f4:
    // 0x1a46f4: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1a46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1a46f8: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a46fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4700: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4704: 0xc05d53a  jal         func_1754E8
    ctx->pc = 0x1A4704u;
    SET_GPR_U32(ctx, 31, 0x1A470Cu);
    ctx->pc = 0x1A4708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4704u;
            // 0x1a4708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (runtime->hasFunction(0x1754E8u)) {
        auto targetFn = runtime->lookupFunction(0x1754E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A470Cu; }
        if (ctx->pc != 0x1A470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001754E8_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A470Cu; }
        if (ctx->pc != 0x1A470Cu) { return; }
    }
    ctx->pc = 0x1A470Cu;
label_1a470c:
    // 0x1a470c: 0x26841080  addiu       $a0, $s4, 0x1080
    ctx->pc = 0x1a470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4224));
    // 0x1a4710: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1a4710u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4718: 0xae700030  sw          $s0, 0x30($s3)
    ctx->pc = 0x1a4718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    // 0x1a471c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4724: 0xc06e3fa  jal         func_1B8FE8
    ctx->pc = 0x1A4724u;
    SET_GPR_U32(ctx, 31, 0x1A472Cu);
    ctx->pc = 0x1A4728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4724u;
            // 0x1a4728: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FE8u;
    if (runtime->hasFunction(0x1B8FE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A472Cu; }
        if (ctx->pc != 0x1A472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8FE8_0x1b8fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A472Cu; }
        if (ctx->pc != 0x1A472Cu) { return; }
    }
    ctx->pc = 0x1A472Cu;
label_1a472c:
    // 0x1a472c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a472cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4730:
    // 0x1a4730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4734:
    // 0x1a4734: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a4734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a4738: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a4738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a473c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a473cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4740: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a4740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4744: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4748: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4748u;
            // 0x1a474c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4750u;
}
