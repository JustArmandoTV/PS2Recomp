#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2828
// Address: 0x1a2828 - 0x1a2890
void sub_001A2828_0x1a2828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2828_0x1a2828");
#endif

    switch (ctx->pc) {
        case 0x1a2840u: goto label_1a2840;
        case 0x1a285cu: goto label_1a285c;
        case 0x1a2870u: goto label_1a2870;
        default: break;
    }

    ctx->pc = 0x1a2828u;

    // 0x1a2828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a282c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2838: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A2838u;
    SET_GPR_U32(ctx, 31, 0x1A2840u);
    ctx->pc = 0x1A283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2838u;
            // 0x1a283c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2840u; }
        if (ctx->pc != 0x1A2840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2840u; }
        if (ctx->pc != 0x1A2840u) { return; }
    }
    ctx->pc = 0x1A2840u;
label_1a2840:
    // 0x1a2840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2848: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2848u;
    {
        const bool branch_taken_0x1a2848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2848u;
            // 0x1a284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2848) {
            ctx->pc = 0x1A2868u;
            goto label_1a2868;
        }
    }
    ctx->pc = 0x1A2850u;
    // 0x1a2850: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a2854: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A2854u;
    SET_GPR_U32(ctx, 31, 0x1A285Cu);
    ctx->pc = 0x1A2858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2854u;
            // 0x1a2858: 0x2484a8c0  addiu       $a0, $a0, -0x5740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A285Cu; }
        if (ctx->pc != 0x1A285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A285Cu; }
        if (ctx->pc != 0x1A285Cu) { return; }
    }
    ctx->pc = 0x1A285Cu;
label_1a285c:
    // 0x1a285c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A285Cu;
    {
        const bool branch_taken_0x1a285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A285Cu;
            // 0x1a2860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a285c) {
            ctx->pc = 0x1A2878u;
            goto label_1a2878;
        }
    }
    ctx->pc = 0x1A2864u;
    // 0x1a2864: 0x0  nop
    ctx->pc = 0x1a2864u;
    // NOP
label_1a2868:
    // 0x1a2868: 0xc068a04  jal         func_1A2810
    ctx->pc = 0x1A2868u;
    SET_GPR_U32(ctx, 31, 0x1A2870u);
    ctx->pc = 0x1A2810u;
    if (runtime->hasFunction(0x1A2810u)) {
        auto targetFn = runtime->lookupFunction(0x1A2810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2870u; }
        if (ctx->pc != 0x1A2870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2810_0x1a2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2870u; }
        if (ctx->pc != 0x1A2870u) { return; }
    }
    ctx->pc = 0x1A2870u;
label_1a2870:
    // 0x1a2870: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1a2870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x1a2874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a2874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2878:
    // 0x1a2878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a287c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a287cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2884: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2884u;
            // 0x1a2888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A288Cu;
    // 0x1a288c: 0x0  nop
    ctx->pc = 0x1a288cu;
    // NOP
}
