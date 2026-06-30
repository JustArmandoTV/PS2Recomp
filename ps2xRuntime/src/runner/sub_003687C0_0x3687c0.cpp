#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003687C0
// Address: 0x3687c0 - 0x3688a0
void sub_003687C0_0x3687c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003687C0_0x3687c0");
#endif

    switch (ctx->pc) {
        case 0x3687dcu: goto label_3687dc;
        case 0x368804u: goto label_368804;
        case 0x36882cu: goto label_36882c;
        case 0x368840u: goto label_368840;
        case 0x368858u: goto label_368858;
        case 0x36886cu: goto label_36886c;
        default: break;
    }

    ctx->pc = 0x3687c0u;

    // 0x3687c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3687c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3687c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3687c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3687c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3687c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3687cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3687ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3687d0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3687d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3687d4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3687d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x3687d8: 0x261046fc  addiu       $s0, $s0, 0x46FC
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18172));
label_3687dc:
    // 0x3687dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3687dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3687e0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3687E0u;
    {
        const bool branch_taken_0x3687e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3687e0) {
            ctx->pc = 0x368840u;
            goto label_368840;
        }
    }
    ctx->pc = 0x3687E8u;
    // 0x3687e8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3687e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3687ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3687ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3687f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3687f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3687f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3687F4u;
    {
        const bool branch_taken_0x3687f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3687f4) {
            ctx->pc = 0x368838u;
            goto label_368838;
        }
    }
    ctx->pc = 0x3687FCu;
    // 0x3687fc: 0xc0d9ddc  jal         func_367770
    ctx->pc = 0x3687FCu;
    SET_GPR_U32(ctx, 31, 0x368804u);
    ctx->pc = 0x367770u;
    if (runtime->hasFunction(0x367770u)) {
        auto targetFn = runtime->lookupFunction(0x367770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368804u; }
        if (ctx->pc != 0x368804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367770_0x367770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368804u; }
        if (ctx->pc != 0x368804u) { return; }
    }
    ctx->pc = 0x368804u;
label_368804:
    // 0x368804: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x368804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368808: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x368808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36880c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x368810: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x368810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x368814: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x368814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x368818: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x368818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x36881c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x36881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x368820: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x368820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368824: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x368824u;
    SET_GPR_U32(ctx, 31, 0x36882Cu);
    ctx->pc = 0x368828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368824u;
            // 0x368828: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36882Cu; }
        if (ctx->pc != 0x36882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36882Cu; }
        if (ctx->pc != 0x36882Cu) { return; }
    }
    ctx->pc = 0x36882Cu;
label_36882c:
    // 0x36882c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36882Cu;
    {
        const bool branch_taken_0x36882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36882Cu;
            // 0x368830: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36882c) {
            ctx->pc = 0x368840u;
            goto label_368840;
        }
    }
    ctx->pc = 0x368834u;
    // 0x368834: 0x0  nop
    ctx->pc = 0x368834u;
    // NOP
label_368838:
    // 0x368838: 0xc0d9ddc  jal         func_367770
    ctx->pc = 0x368838u;
    SET_GPR_U32(ctx, 31, 0x368840u);
    ctx->pc = 0x367770u;
    if (runtime->hasFunction(0x367770u)) {
        auto targetFn = runtime->lookupFunction(0x367770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368840u; }
        if (ctx->pc != 0x368840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367770_0x367770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368840u; }
        if (ctx->pc != 0x368840u) { return; }
    }
    ctx->pc = 0x368840u;
label_368840:
    // 0x368840: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x368840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x368844: 0x621ffe5  bgez        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x368844u;
    {
        const bool branch_taken_0x368844 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x368848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368844u;
            // 0x368848: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368844) {
            ctx->pc = 0x3687DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3687dc;
        }
    }
    ctx->pc = 0x36884Cu;
    // 0x36884c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x36884cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x368850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368854: 0x26314680  addiu       $s1, $s1, 0x4680
    ctx->pc = 0x368854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18048));
label_368858:
    // 0x368858: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36885c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36885Cu;
    {
        const bool branch_taken_0x36885c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36885c) {
            ctx->pc = 0x368870u;
            goto label_368870;
        }
    }
    ctx->pc = 0x368864u;
    // 0x368864: 0xc0d9ccc  jal         func_367330
    ctx->pc = 0x368864u;
    SET_GPR_U32(ctx, 31, 0x36886Cu);
    ctx->pc = 0x367330u;
    if (runtime->hasFunction(0x367330u)) {
        auto targetFn = runtime->lookupFunction(0x367330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36886Cu; }
        if (ctx->pc != 0x36886Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367330_0x367330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36886Cu; }
        if (ctx->pc != 0x36886Cu) { return; }
    }
    ctx->pc = 0x36886Cu;
label_36886c:
    // 0x36886c: 0x0  nop
    ctx->pc = 0x36886cu;
    // NOP
label_368870:
    // 0x368870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368874: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x368874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368878: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x368878u;
    {
        const bool branch_taken_0x368878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368878u;
            // 0x36887c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368878) {
            ctx->pc = 0x368858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_368858;
        }
    }
    ctx->pc = 0x368880u;
    // 0x368880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36888c: 0x3e00008  jr          $ra
    ctx->pc = 0x36888Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36888Cu;
            // 0x368890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368894u;
    // 0x368894: 0x0  nop
    ctx->pc = 0x368894u;
    // NOP
    // 0x368898: 0x0  nop
    ctx->pc = 0x368898u;
    // NOP
    // 0x36889c: 0x0  nop
    ctx->pc = 0x36889cu;
    // NOP
}
