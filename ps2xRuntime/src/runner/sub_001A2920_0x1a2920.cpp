#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2920
// Address: 0x1a2920 - 0x1a2970
void sub_001A2920_0x1a2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2920_0x1a2920");
#endif

    switch (ctx->pc) {
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2940u: goto label_1a2940;
        case 0x1a2948u: goto label_1a2948;
        case 0x1a2954u: goto label_1a2954;
        case 0x1a295cu: goto label_1a295c;
        default: break;
    }

    ctx->pc = 0x1a2920u;

    // 0x1a2920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a292c: 0xc06739c  jal         func_19CE70
    ctx->pc = 0x1A292Cu;
    SET_GPR_U32(ctx, 31, 0x1A2934u);
    ctx->pc = 0x1A2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A292Cu;
            // 0x1a2930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CE70u;
    if (runtime->hasFunction(0x19CE70u)) {
        auto targetFn = runtime->lookupFunction(0x19CE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2934u; }
        if (ctx->pc != 0x1A2934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CE70_0x19ce70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2934u; }
        if (ctx->pc != 0x1A2934u) { return; }
    }
    ctx->pc = 0x1A2934u;
label_1a2934:
    // 0x1a2934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2938: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A2938u;
    SET_GPR_U32(ctx, 31, 0x1A2940u);
    ctx->pc = 0x1A293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2938u;
            // 0x1a293c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2940u; }
        if (ctx->pc != 0x1A2940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2940u; }
        if (ctx->pc != 0x1A2940u) { return; }
    }
    ctx->pc = 0x1A2940u;
label_1a2940:
    // 0x1a2940: 0xc0686ec  jal         func_1A1BB0
    ctx->pc = 0x1A2940u;
    SET_GPR_U32(ctx, 31, 0x1A2948u);
    ctx->pc = 0x1A1BB0u;
    if (runtime->hasFunction(0x1A1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2948u; }
        if (ctx->pc != 0x1A2948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1BB0_0x1a1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2948u; }
        if (ctx->pc != 0x1A2948u) { return; }
    }
    ctx->pc = 0x1A2948u;
label_1a2948:
    // 0x1a2948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a294c: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A294Cu;
    SET_GPR_U32(ctx, 31, 0x1A2954u);
    ctx->pc = 0x1A2950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A294Cu;
            // 0x1a2950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2954u; }
        if (ctx->pc != 0x1A2954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2954u; }
        if (ctx->pc != 0x1A2954u) { return; }
    }
    ctx->pc = 0x1A2954u;
label_1a2954:
    // 0x1a2954: 0xc0673a2  jal         func_19CE88
    ctx->pc = 0x1A2954u;
    SET_GPR_U32(ctx, 31, 0x1A295Cu);
    ctx->pc = 0x19CE88u;
    if (runtime->hasFunction(0x19CE88u)) {
        auto targetFn = runtime->lookupFunction(0x19CE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A295Cu; }
        if (ctx->pc != 0x1A295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CE88_0x19ce88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A295Cu; }
        if (ctx->pc != 0x1A295Cu) { return; }
    }
    ctx->pc = 0x1A295Cu;
label_1a295c:
    // 0x1a295c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2968: 0x8068708  j           func_1A1C20
    ctx->pc = 0x1A2968u;
    ctx->pc = 0x1A296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2968u;
            // 0x1a296c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C20u;
    {
        auto targetFn = runtime->lookupFunction(0x1A1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A2970u;
}
