#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B27E0
// Address: 0x1b27e0 - 0x1b28a0
void sub_001B27E0_0x1b27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B27E0_0x1b27e0");
#endif

    switch (ctx->pc) {
        case 0x1b2804u: goto label_1b2804;
        case 0x1b2814u: goto label_1b2814;
        case 0x1b2868u: goto label_1b2868;
        case 0x1b2878u: goto label_1b2878;
        default: break;
    }

    ctx->pc = 0x1b27e0u;

    // 0x1b27e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b27e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b27e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b27e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b27e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b27ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b27f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b27f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b27f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b27f8: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x1b27f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1b27fc: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x1B27FCu;
    SET_GPR_U32(ctx, 31, 0x1B2804u);
    ctx->pc = 0x1B2800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27FCu;
            // 0x1b2800: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (runtime->hasFunction(0x1B28A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B28A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2804u; }
        if (ctx->pc != 0x1B2804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B28A0_0x1b28a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2804u; }
        if (ctx->pc != 0x1B2804u) { return; }
    }
    ctx->pc = 0x1B2804u;
label_1b2804:
    // 0x1b2804: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2804u;
            // 0x1b2808: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2888u;
            goto label_1b2888;
        }
    }
    ctx->pc = 0x1B280Cu;
    // 0x1b280c: 0xc06ca54  jal         func_1B2950
    ctx->pc = 0x1B280Cu;
    SET_GPR_U32(ctx, 31, 0x1B2814u);
    ctx->pc = 0x1B2810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B280Cu;
            // 0x1b2810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2950u;
    if (runtime->hasFunction(0x1B2950u)) {
        auto targetFn = runtime->lookupFunction(0x1B2950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2814u; }
        if (ctx->pc != 0x1B2814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2950_0x1b2950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2814u; }
        if (ctx->pc != 0x1B2814u) { return; }
    }
    ctx->pc = 0x1B2814u;
label_1b2814:
    // 0x1b2814: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b2814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2818: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B2818u;
    {
        const bool branch_taken_0x1b2818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2818u;
            // 0x1b281c: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2818) {
            ctx->pc = 0x1B2880u;
            goto label_1b2880;
        }
    }
    ctx->pc = 0x1B2820u;
    // 0x1b2820: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2820u;
    {
        const bool branch_taken_0x1b2820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2820u;
            // 0x1b2824: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2820) {
            ctx->pc = 0x1B2840u;
            goto label_1b2840;
        }
    }
    ctx->pc = 0x1B2828u;
    // 0x1b2828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b282c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B282Cu;
    {
        const bool branch_taken_0x1b282c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B282Cu;
            // 0x1b2830: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b282c) {
            ctx->pc = 0x1B2858u;
            goto label_1b2858;
        }
    }
    ctx->pc = 0x1B2834u;
    // 0x1b2834: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2834u;
    {
        const bool branch_taken_0x1b2834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2834u;
            // 0x1b2838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2834) {
            ctx->pc = 0x1B288Cu;
            goto label_1b288c;
        }
    }
    ctx->pc = 0x1B283Cu;
    // 0x1b283c: 0x0  nop
    ctx->pc = 0x1b283cu;
    // NOP
label_1b2840:
    // 0x1b2840: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2840u;
    {
        const bool branch_taken_0x1b2840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2840u;
            // 0x1b2844: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2840) {
            ctx->pc = 0x1B2860u;
            goto label_1b2860;
        }
    }
    ctx->pc = 0x1B2848u;
    // 0x1b2848: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2848u;
    {
        const bool branch_taken_0x1b2848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2848u;
            // 0x1b284c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2848) {
            ctx->pc = 0x1B2860u;
            goto label_1b2860;
        }
    }
    ctx->pc = 0x1B2850u;
    // 0x1b2850: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B2850u;
    {
        const bool branch_taken_0x1b2850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2850u;
            // 0x1b2854: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2850) {
            ctx->pc = 0x1B288Cu;
            goto label_1b288c;
        }
    }
    ctx->pc = 0x1B2858u;
label_1b2858:
    // 0x1b2858: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2858u;
    {
        const bool branch_taken_0x1b2858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2858u;
            // 0x1b285c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2858) {
            ctx->pc = 0x1B2884u;
            goto label_1b2884;
        }
    }
    ctx->pc = 0x1B2860u;
label_1b2860:
    // 0x1b2860: 0xc06cb1e  jal         func_1B2C78
    ctx->pc = 0x1B2860u;
    SET_GPR_U32(ctx, 31, 0x1B2868u);
    ctx->pc = 0x1B2864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2860u;
            // 0x1b2864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C78u;
    if (runtime->hasFunction(0x1B2C78u)) {
        auto targetFn = runtime->lookupFunction(0x1B2C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2868u; }
        if (ctx->pc != 0x1B2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2C78_0x1b2c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2868u; }
        if (ctx->pc != 0x1B2868u) { return; }
    }
    ctx->pc = 0x1B2868u;
label_1b2868:
    // 0x1b2868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2868u;
    {
        const bool branch_taken_0x1b2868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2868u;
            // 0x1b286c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2868) {
            ctx->pc = 0x1B2880u;
            goto label_1b2880;
        }
    }
    ctx->pc = 0x1B2870u;
    // 0x1b2870: 0xc06cf32  jal         func_1B3CC8
    ctx->pc = 0x1B2870u;
    SET_GPR_U32(ctx, 31, 0x1B2878u);
    ctx->pc = 0x1B2874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2870u;
            // 0x1b2874: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CC8u;
    if (runtime->hasFunction(0x1B3CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2878u; }
        if (ctx->pc != 0x1B2878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3CC8_0x1b3cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2878u; }
        if (ctx->pc != 0x1B2878u) { return; }
    }
    ctx->pc = 0x1B2878u;
label_1b2878:
    // 0x1b2878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2878u;
    {
        const bool branch_taken_0x1b2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2878u;
            // 0x1b287c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2878) {
            ctx->pc = 0x1B2888u;
            goto label_1b2888;
        }
    }
    ctx->pc = 0x1B2880u;
label_1b2880:
    // 0x1b2880: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1b2880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b2884:
    // 0x1b2884: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b2884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2888:
    // 0x1b2888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b288c:
    // 0x1b288c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b288cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2894: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2898: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2898u;
            // 0x1b289c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B28A0u;
}
