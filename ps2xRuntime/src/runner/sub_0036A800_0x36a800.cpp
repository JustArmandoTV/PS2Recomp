#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A800
// Address: 0x36a800 - 0x36a8d0
void sub_0036A800_0x36a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A800_0x36a800");
#endif

    switch (ctx->pc) {
        case 0x36a844u: goto label_36a844;
        case 0x36a85cu: goto label_36a85c;
        case 0x36a864u: goto label_36a864;
        case 0x36a878u: goto label_36a878;
        case 0x36a894u: goto label_36a894;
        case 0x36a8a8u: goto label_36a8a8;
        default: break;
    }

    ctx->pc = 0x36a800u;

    // 0x36a800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a804: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36a80c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a810: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36a814: 0x24425c40  addiu       $v0, $v0, 0x5C40
    ctx->pc = 0x36a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23616));
    // 0x36a818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a81c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36a81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36a828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a82c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x36a82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a830: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36a830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36a834: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x36a834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a838: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x36a838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a83c: 0xc074e24  jal         func_1D3890
    ctx->pc = 0x36A83Cu;
    SET_GPR_U32(ctx, 31, 0x36A844u);
    ctx->pc = 0x36A840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A83Cu;
            // 0x36a840: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3890u;
    if (runtime->hasFunction(0x1D3890u)) {
        auto targetFn = runtime->lookupFunction(0x1D3890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A844u; }
        if (ctx->pc != 0x36A844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3890_0x1d3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A844u; }
        if (ctx->pc != 0x36A844u) { return; }
    }
    ctx->pc = 0x36A844u;
label_36a844:
    // 0x36a844: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36A844u;
    {
        const bool branch_taken_0x36a844 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a844) {
            ctx->pc = 0x36A848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A844u;
            // 0x36a848: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A84Cu;
            goto label_36a84c;
        }
    }
    ctx->pc = 0x36A84Cu;
label_36a84c:
    // 0x36a84c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x36a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x36a850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a854: 0xc05190c  jal         func_146430
    ctx->pc = 0x36A854u;
    SET_GPR_U32(ctx, 31, 0x36A85Cu);
    ctx->pc = 0x36A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A854u;
            // 0x36a858: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A85Cu; }
        if (ctx->pc != 0x36A85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146430_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A85Cu; }
        if (ctx->pc != 0x36A85Cu) { return; }
    }
    ctx->pc = 0x36A85Cu;
label_36a85c:
    // 0x36a85c: 0xc112b24  jal         func_44AC90
    ctx->pc = 0x36A85Cu;
    SET_GPR_U32(ctx, 31, 0x36A864u);
    ctx->pc = 0x36A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A85Cu;
            // 0x36a860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AC90u;
    if (runtime->hasFunction(0x44AC90u)) {
        auto targetFn = runtime->lookupFunction(0x44AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A864u; }
        if (ctx->pc != 0x36A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AC90_0x44ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A864u; }
        if (ctx->pc != 0x36A864u) { return; }
    }
    ctx->pc = 0x36A864u;
label_36a864:
    // 0x36a864: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36a868: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x36a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x36a86c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36a870: 0xc112b24  jal         func_44AC90
    ctx->pc = 0x36A870u;
    SET_GPR_U32(ctx, 31, 0x36A878u);
    ctx->pc = 0x36A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A870u;
            // 0x36a874: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AC90u;
    if (runtime->hasFunction(0x44AC90u)) {
        auto targetFn = runtime->lookupFunction(0x44AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A878u; }
        if (ctx->pc != 0x36A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AC90_0x44ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A878u; }
        if (ctx->pc != 0x36A878u) { return; }
    }
    ctx->pc = 0x36A878u;
label_36a878:
    // 0x36a878: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36a878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36a87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a880: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x36a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x36a884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36a88c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x36A88Cu;
    SET_GPR_U32(ctx, 31, 0x36A894u);
    ctx->pc = 0x36A890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A88Cu;
            // 0x36a890: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A894u; }
        if (ctx->pc != 0x36A894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A894u; }
        if (ctx->pc != 0x36A894u) { return; }
    }
    ctx->pc = 0x36A894u;
label_36a894:
    // 0x36a894: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36a898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a89c: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x36a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x36a8a0: 0xc051a64  jal         func_146990
    ctx->pc = 0x36A8A0u;
    SET_GPR_U32(ctx, 31, 0x36A8A8u);
    ctx->pc = 0x36A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A8A0u;
            // 0x36a8a4: 0x240703ff  addiu       $a3, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (runtime->hasFunction(0x146990u)) {
        auto targetFn = runtime->lookupFunction(0x146990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A8A8u; }
        if (ctx->pc != 0x36A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146990_0x146990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A8A8u; }
        if (ctx->pc != 0x36A8A8u) { return; }
    }
    ctx->pc = 0x36A8A8u;
label_36a8a8:
    // 0x36a8a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a8ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36a8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a8b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A8BCu;
            // 0x36a8c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A8C4u;
    // 0x36a8c4: 0x0  nop
    ctx->pc = 0x36a8c4u;
    // NOP
    // 0x36a8c8: 0x0  nop
    ctx->pc = 0x36a8c8u;
    // NOP
    // 0x36a8cc: 0x0  nop
    ctx->pc = 0x36a8ccu;
    // NOP
}
