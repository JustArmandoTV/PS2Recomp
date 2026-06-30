#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A50E0
// Address: 0x1a50e0 - 0x1a51a8
void sub_001A50E0_0x1a50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A50E0_0x1a50e0");
#endif

    switch (ctx->pc) {
        case 0x1a5150u: goto label_1a5150;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5184u: goto label_1a5184;
        default: break;
    }

    ctx->pc = 0x1a50e0u;

    // 0x1a50e0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a50e4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a50e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a50ec: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1a50ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a50f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a50f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a50f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a50f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a50f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a50fc: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a5100: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a5100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a5104: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a5108: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a5108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a510c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a510cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5110: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a5114: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1a5114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5118: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1a5118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a511c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1a511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1a5120: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a5120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a5124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5128: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1a5128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a512c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A512Cu;
    {
        const bool branch_taken_0x1a512c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A512Cu;
            // 0x1a5130: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a512c) {
            ctx->pc = 0x1A5140u;
            goto label_1a5140;
        }
    }
    ctx->pc = 0x1A5134u;
    // 0x1a5134: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a5134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5138: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A5138u;
    {
        const bool branch_taken_0x1a5138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5138u;
            // 0x1a513c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5138) {
            ctx->pc = 0x1A5174u;
            goto label_1a5174;
        }
    }
    ctx->pc = 0x1A5140u;
label_1a5140:
    // 0x1a5140: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a5140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5144: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a5144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5148: 0xc06946a  jal         func_1A51A8
    ctx->pc = 0x1A5148u;
    SET_GPR_U32(ctx, 31, 0x1A5150u);
    ctx->pc = 0x1A514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5148u;
            // 0x1a514c: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A51A8u;
    if (runtime->hasFunction(0x1A51A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A51A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5150u; }
        if (ctx->pc != 0x1A5150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A51A8_0x1a51a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5150u; }
        if (ctx->pc != 0x1A5150u) { return; }
    }
    ctx->pc = 0x1A5150u;
label_1a5150:
    // 0x1a5150: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a5150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a515c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A515Cu;
    {
        const bool branch_taken_0x1a515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A515Cu;
            // 0x1a5160: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a515c) {
            ctx->pc = 0x1A5188u;
            goto label_1a5188;
        }
    }
    ctx->pc = 0x1A5164u;
    // 0x1a5164: 0xc0695b8  jal         func_1A56E0
    ctx->pc = 0x1A5164u;
    SET_GPR_U32(ctx, 31, 0x1A516Cu);
    ctx->pc = 0x1A56E0u;
    if (runtime->hasFunction(0x1A56E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A56E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A516Cu; }
        if (ctx->pc != 0x1A516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A56E0_0x1a56e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A516Cu; }
        if (ctx->pc != 0x1A516Cu) { return; }
    }
    ctx->pc = 0x1A516Cu;
label_1a516c:
    // 0x1a516c: 0xc06d2b6  jal         func_1B4AD8
    ctx->pc = 0x1A516Cu;
    SET_GPR_U32(ctx, 31, 0x1A5174u);
    ctx->pc = 0x1A5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A516Cu;
            // 0x1a5170: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD8u;
    if (runtime->hasFunction(0x1B4AD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5174u; }
        if (ctx->pc != 0x1A5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4AD8_0x1b4ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5174u; }
        if (ctx->pc != 0x1A5174u) { return; }
    }
    ctx->pc = 0x1A5174u;
label_1a5174:
    // 0x1a5174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5178: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a5178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a517c: 0xc069546  jal         func_1A5518
    ctx->pc = 0x1A517Cu;
    SET_GPR_U32(ctx, 31, 0x1A5184u);
    ctx->pc = 0x1A5180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A517Cu;
            // 0x1a5180: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5518u;
    if (runtime->hasFunction(0x1A5518u)) {
        auto targetFn = runtime->lookupFunction(0x1A5518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5184u; }
        if (ctx->pc != 0x1A5184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5518_0x1a5518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5184u; }
        if (ctx->pc != 0x1A5184u) { return; }
    }
    ctx->pc = 0x1A5184u;
label_1a5184:
    // 0x1a5184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5188:
    // 0x1a5188: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a518c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a518cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5190: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a5190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5194: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a5194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a519c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A519Cu;
            // 0x1a51a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A51A4u;
    // 0x1a51a4: 0x0  nop
    ctx->pc = 0x1a51a4u;
    // NOP
}
