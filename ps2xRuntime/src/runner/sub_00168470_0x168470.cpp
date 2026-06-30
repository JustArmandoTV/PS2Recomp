#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168470
// Address: 0x168470 - 0x1684a0
void sub_00168470_0x168470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168470_0x168470");
#endif

    switch (ctx->pc) {
        case 0x168484u: goto label_168484;
        case 0x16848cu: goto label_16848c;
        default: break;
    }

    ctx->pc = 0x168470u;

    // 0x168470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x168478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16847c: 0xc05a144  jal         func_168510
    ctx->pc = 0x16847Cu;
    SET_GPR_U32(ctx, 31, 0x168484u);
    ctx->pc = 0x168480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16847Cu;
            // 0x168480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168484u; }
        if (ctx->pc != 0x168484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168484u; }
        if (ctx->pc != 0x168484u) { return; }
    }
    ctx->pc = 0x168484u;
label_168484:
    // 0x168484: 0xc05a128  jal         func_1684A0
    ctx->pc = 0x168484u;
    SET_GPR_U32(ctx, 31, 0x16848Cu);
    ctx->pc = 0x168488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168484u;
            // 0x168488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684A0u;
    if (runtime->hasFunction(0x1684A0u)) {
        auto targetFn = runtime->lookupFunction(0x1684A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16848Cu; }
        if (ctx->pc != 0x16848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684A0_0x1684a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16848Cu; }
        if (ctx->pc != 0x16848Cu) { return; }
    }
    ctx->pc = 0x16848Cu;
label_16848c:
    // 0x16848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x168490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168494: 0x805a146  j           func_168518
    ctx->pc = 0x168494u;
    ctx->pc = 0x168498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168494u;
            // 0x168498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168518_0x168518(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16849Cu;
    // 0x16849c: 0x0  nop
    ctx->pc = 0x16849cu;
    // NOP
}
