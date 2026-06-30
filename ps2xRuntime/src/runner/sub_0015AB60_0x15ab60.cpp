#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AB60
// Address: 0x15ab60 - 0x15abe0
void sub_0015AB60_0x15ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AB60_0x15ab60");
#endif

    switch (ctx->pc) {
        case 0x15ab88u: goto label_15ab88;
        case 0x15ab9cu: goto label_15ab9c;
        case 0x15aba4u: goto label_15aba4;
        case 0x15abacu: goto label_15abac;
        case 0x15abb4u: goto label_15abb4;
        case 0x15abc4u: goto label_15abc4;
        default: break;
    }

    ctx->pc = 0x15ab60u;

    // 0x15ab60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ab64: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15ab68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ab6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ab70: 0x8c63cc6c  lw          $v1, -0x3394($v1)
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954092)));
    // 0x15ab74: 0x30630700  andi        $v1, $v1, 0x700
    ctx->pc = 0x15ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
    // 0x15ab78: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x15AB78u;
    {
        const bool branch_taken_0x15ab78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab78) {
            ctx->pc = 0x15AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB78u;
            // 0x15ab7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ABC8u;
            goto label_15abc8;
        }
    }
    ctx->pc = 0x15AB80u;
    // 0x15ab80: 0xc045968  jal         func_1165A0
    ctx->pc = 0x15AB80u;
    SET_GPR_U32(ctx, 31, 0x15AB88u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB88u; }
        if (ctx->pc != 0x15AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB88u; }
        if (ctx->pc != 0x15AB88u) { return; }
    }
    ctx->pc = 0x15AB88u;
label_15ab88:
    // 0x15ab88: 0x8f85842c  lw          $a1, -0x7BD4($gp)
    ctx->pc = 0x15ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935596)));
    // 0x15ab8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15ab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab94: 0xc043018  jal         func_10C060
    ctx->pc = 0x15AB94u;
    SET_GPR_U32(ctx, 31, 0x15AB9Cu);
    ctx->pc = 0x15AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB94u;
            // 0x15ab98: 0xaf808434  sw          $zero, -0x7BCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C060u;
    if (runtime->hasFunction(0x10C060u)) {
        auto targetFn = runtime->lookupFunction(0x10C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB9Cu; }
        if (ctx->pc != 0x15AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C060_0x10c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB9Cu; }
        if (ctx->pc != 0x15AB9Cu) { return; }
    }
    ctx->pc = 0x15AB9Cu;
label_15ab9c:
    // 0x15ab9c: 0xc040e48  jal         func_103920
    ctx->pc = 0x15AB9Cu;
    SET_GPR_U32(ctx, 31, 0x15ABA4u);
    ctx->pc = 0x103920u;
    if (runtime->hasFunction(0x103920u)) {
        auto targetFn = runtime->lookupFunction(0x103920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABA4u; }
        if (ctx->pc != 0x15ABA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103920_0x103920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABA4u; }
        if (ctx->pc != 0x15ABA4u) { return; }
    }
    ctx->pc = 0x15ABA4u;
label_15aba4:
    // 0x15aba4: 0xc040cee  jal         func_1033B8
    ctx->pc = 0x15ABA4u;
    SET_GPR_U32(ctx, 31, 0x15ABACu);
    ctx->pc = 0x15ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABA4u;
            // 0x15aba8: 0x34440300  ori         $a0, $v0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1033B8u;
    if (runtime->hasFunction(0x1033B8u)) {
        auto targetFn = runtime->lookupFunction(0x1033B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABACu; }
        if (ctx->pc != 0x15ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001033B8_0x1033b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABACu; }
        if (ctx->pc != 0x15ABACu) { return; }
    }
    ctx->pc = 0x15ABACu;
label_15abac:
    // 0x15abac: 0xc043390  jal         func_10CE40
    ctx->pc = 0x15ABACu;
    SET_GPR_U32(ctx, 31, 0x15ABB4u);
    ctx->pc = 0x15ABB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABACu;
            // 0x15abb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABB4u; }
        if (ctx->pc != 0x15ABB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABB4u; }
        if (ctx->pc != 0x15ABB4u) { return; }
    }
    ctx->pc = 0x15ABB4u;
label_15abb4:
    // 0x15abb4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ABB4u;
    {
        const bool branch_taken_0x15abb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abb4) {
            ctx->pc = 0x15ABC4u;
            goto label_15abc4;
        }
    }
    ctx->pc = 0x15ABBCu;
    // 0x15abbc: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x15ABBCu;
    SET_GPR_U32(ctx, 31, 0x15ABC4u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABC4u; }
        if (ctx->pc != 0x15ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABC4u; }
        if (ctx->pc != 0x15ABC4u) { return; }
    }
    ctx->pc = 0x15ABC4u;
label_15abc4:
    // 0x15abc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15abc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15abc8:
    // 0x15abc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABCCu;
            // 0x15abd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ABD4u;
    // 0x15abd4: 0x0  nop
    ctx->pc = 0x15abd4u;
    // NOP
    // 0x15abd8: 0x0  nop
    ctx->pc = 0x15abd8u;
    // NOP
    // 0x15abdc: 0x0  nop
    ctx->pc = 0x15abdcu;
    // NOP
}
