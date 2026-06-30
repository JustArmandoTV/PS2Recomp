#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117848
// Address: 0x117848 - 0x117890
void sub_00117848_0x117848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117848_0x117848");
#endif

    switch (ctx->pc) {
        case 0x117860u: goto label_117860;
        case 0x117868u: goto label_117868;
        case 0x117878u: goto label_117878;
        default: break;
    }

    ctx->pc = 0x117848u;

    // 0x117848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11784c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117858: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117858u;
    SET_GPR_U32(ctx, 31, 0x117860u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117860u; }
        if (ctx->pc != 0x117860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117860u; }
        if (ctx->pc != 0x117860u) { return; }
    }
    ctx->pc = 0x117860u;
label_117860:
    // 0x117860: 0xc045df6  jal         func_1177D8
    ctx->pc = 0x117860u;
    SET_GPR_U32(ctx, 31, 0x117868u);
    ctx->pc = 0x117864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117860u;
            // 0x117864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177D8u;
    if (runtime->hasFunction(0x1177D8u)) {
        auto targetFn = runtime->lookupFunction(0x1177D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117868u; }
        if (ctx->pc != 0x117868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001177D8_0x1177d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117868u; }
        if (ctx->pc != 0x117868u) { return; }
    }
    ctx->pc = 0x117868u;
label_117868:
    // 0x117868: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117868u;
    {
        const bool branch_taken_0x117868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117868u;
            // 0x11786c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117868) {
            ctx->pc = 0x117878u;
            goto label_117878;
        }
    }
    ctx->pc = 0x117870u;
    // 0x117870: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117870u;
    SET_GPR_U32(ctx, 31, 0x117878u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117878u; }
        if (ctx->pc != 0x117878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117878u; }
        if (ctx->pc != 0x117878u) { return; }
    }
    ctx->pc = 0x117878u;
label_117878:
    // 0x117878: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11787c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11787cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117888: 0x3e00008  jr          $ra
    ctx->pc = 0x117888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117888u;
            // 0x11788c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117890u;
}
