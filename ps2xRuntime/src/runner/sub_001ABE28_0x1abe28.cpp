#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABE28
// Address: 0x1abe28 - 0x1abf80
void sub_001ABE28_0x1abe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABE28_0x1abe28");
#endif

    switch (ctx->pc) {
        case 0x1abe6cu: goto label_1abe6c;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abed8u: goto label_1abed8;
        case 0x1abef0u: goto label_1abef0;
        case 0x1abf00u: goto label_1abf00;
        case 0x1abf08u: goto label_1abf08;
        case 0x1abf38u: goto label_1abf38;
        case 0x1abf4cu: goto label_1abf4c;
        default: break;
    }

    ctx->pc = 0x1abe28u;

    // 0x1abe28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1abe2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1abe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1abe30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1abe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1abe34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1abe34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1abe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1abe3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1abe3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe40: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1abe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1abe44: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1abe44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abe4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1abe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1abe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1abe54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1abe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1abe58: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1abe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1abe5c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1abe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1abe60: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1abe64: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x1ABE64u;
    SET_GPR_U32(ctx, 31, 0x1ABE6Cu);
    ctx->pc = 0x1ABE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE64u;
            // 0x1abe68: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE6Cu; }
        if (ctx->pc != 0x1ABE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE6Cu; }
        if (ctx->pc != 0x1ABE6Cu) { return; }
    }
    ctx->pc = 0x1ABE6Cu;
label_1abe6c:
    // 0x1abe6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1abe6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe70: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABE70u;
    {
        const bool branch_taken_0x1abe70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe70) {
            ctx->pc = 0x1ABE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE70u;
            // 0x1abe74: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE98u;
            goto label_1abe98;
        }
    }
    ctx->pc = 0x1ABE78u;
    // 0x1abe78: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1ABE78u;
    {
        const bool branch_taken_0x1abe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe78) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABE80u;
label_1abe80:
    // 0x1abe80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1abe84: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x1abe84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x1abe88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1abe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abe8c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1abe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1abe90: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1ABE90u;
    {
        const bool branch_taken_0x1abe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE90u;
            // 0x1abe94: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe90) {
            ctx->pc = 0x1ABF54u;
            goto label_1abf54;
        }
    }
    ctx->pc = 0x1ABE98u;
label_1abe98:
    // 0x1abe98: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ABE98u;
    {
        const bool branch_taken_0x1abe98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE98u;
            // 0x1abe9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe98) {
            ctx->pc = 0x1ABF54u;
            goto label_1abf54;
        }
    }
    ctx->pc = 0x1ABEA0u;
    // 0x1abea0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1abea4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1abea8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1abea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abeac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1abeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abeb0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1abeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abeb4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1abeb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1abeb8: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x1abeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abebc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1abebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1abec0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1abec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abec4: 0xe2800b  movn        $s0, $a3, $v0
    ctx->pc = 0x1abec4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x1abec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1abec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abecc: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x1abeccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1abed0: 0xc04a508  jal         func_129420
    ctx->pc = 0x1ABED0u;
    SET_GPR_U32(ctx, 31, 0x1ABED8u);
    ctx->pc = 0x1ABED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABED0u;
            // 0x1abed4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABED8u; }
        if (ctx->pc != 0x1ABED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABED8u; }
        if (ctx->pc != 0x1ABED8u) { return; }
    }
    ctx->pc = 0x1ABED8u;
label_1abed8:
    // 0x1abed8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1abedc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1abedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abee0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1abee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1abee4: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1abee8: 0xc04a508  jal         func_129420
    ctx->pc = 0x1ABEE8u;
    SET_GPR_U32(ctx, 31, 0x1ABEF0u);
    ctx->pc = 0x1ABEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEE8u;
            // 0x1abeec: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEF0u; }
        if (ctx->pc != 0x1ABEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEF0u; }
        if (ctx->pc != 0x1ABEF0u) { return; }
    }
    ctx->pc = 0x1ABEF0u;
label_1abef0:
    // 0x1abef0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1abef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1abef4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1ABEF4u;
    {
        const bool branch_taken_0x1abef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abef4) {
            ctx->pc = 0x1ABEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEF4u;
            // 0x1abef8: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF2Cu;
            goto label_1abf2c;
        }
    }
    ctx->pc = 0x1ABEFCu;
    // 0x1abefc: 0x0  nop
    ctx->pc = 0x1abefcu;
    // NOP
label_1abf00:
    // 0x1abf00: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1ABF00u;
    SET_GPR_U32(ctx, 31, 0x1ABF08u);
    ctx->pc = 0x1ABF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF00u;
            // 0x1abf04: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF08u; }
        if (ctx->pc != 0x1ABF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF08u; }
        if (ctx->pc != 0x1ABF08u) { return; }
    }
    ctx->pc = 0x1ABF08u;
label_1abf08:
    // 0x1abf08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1abf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf0c: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x1abf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1abf10: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1ABF10u;
    {
        const bool branch_taken_0x1abf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf10) {
            ctx->pc = 0x1ABF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF10u;
            // 0x1abf14: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1abe80;
        }
    }
    ctx->pc = 0x1ABF18u;
    // 0x1abf18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1abf18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1abf1c: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x1abf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1abf20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ABF20u;
    {
        const bool branch_taken_0x1abf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf20) {
            ctx->pc = 0x1ABF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1abf00;
        }
    }
    ctx->pc = 0x1ABF28u;
    // 0x1abf28: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1abf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1abf2c:
    // 0x1abf2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1abf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf30: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x1ABF30u;
    SET_GPR_U32(ctx, 31, 0x1ABF38u);
    ctx->pc = 0x1ABF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF30u;
            // 0x1abf34: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF38u; }
        if (ctx->pc != 0x1ABF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF38u; }
        if (ctx->pc != 0x1ABF38u) { return; }
    }
    ctx->pc = 0x1ABF38u;
label_1abf38:
    // 0x1abf38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1abf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf3c: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABF3Cu;
    {
        const bool branch_taken_0x1abf3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abf3c) {
            ctx->pc = 0x1ABF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF3Cu;
            // 0x1abf40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF58u;
            goto label_1abf58;
        }
    }
    ctx->pc = 0x1ABF44u;
label_1abf44:
    // 0x1abf44: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1ABF44u;
    SET_GPR_U32(ctx, 31, 0x1ABF4Cu);
    ctx->pc = 0x1ABF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF44u;
            // 0x1abf48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF4Cu; }
        if (ctx->pc != 0x1ABF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF4Cu; }
        if (ctx->pc != 0x1ABF4Cu) { return; }
    }
    ctx->pc = 0x1ABF4Cu;
label_1abf4c:
    // 0x1abf4c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1abf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1abf50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1abf50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abf54:
    // 0x1abf54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abf58:
    // 0x1abf58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1abf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abf5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1abf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abf60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1abf60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abf64: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1abf64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abf68: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1abf68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abf6c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1abf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abf70: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1abf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1abf74: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF74u;
            // 0x1abf78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABF7Cu;
    // 0x1abf7c: 0x0  nop
    ctx->pc = 0x1abf7cu;
    // NOP
}
