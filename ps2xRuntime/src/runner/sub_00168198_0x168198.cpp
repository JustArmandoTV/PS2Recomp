#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168198
// Address: 0x168198 - 0x1681c8
void sub_00168198_0x168198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168198_0x168198");
#endif

    switch (ctx->pc) {
        case 0x1681acu: goto label_1681ac;
        case 0x1681b4u: goto label_1681b4;
        default: break;
    }

    ctx->pc = 0x168198u;

    // 0x168198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16819c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1681a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1681a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1681a4: 0xc05a144  jal         func_168510
    ctx->pc = 0x1681A4u;
    SET_GPR_U32(ctx, 31, 0x1681ACu);
    ctx->pc = 0x1681A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1681A4u;
            // 0x1681a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681ACu; }
        if (ctx->pc != 0x1681ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681ACu; }
        if (ctx->pc != 0x1681ACu) { return; }
    }
    ctx->pc = 0x1681ACu;
label_1681ac:
    // 0x1681ac: 0xc05a072  jal         func_1681C8
    ctx->pc = 0x1681ACu;
    SET_GPR_U32(ctx, 31, 0x1681B4u);
    ctx->pc = 0x1681B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1681ACu;
            // 0x1681b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1681C8u;
    if (runtime->hasFunction(0x1681C8u)) {
        auto targetFn = runtime->lookupFunction(0x1681C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B4u; }
        if (ctx->pc != 0x1681B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001681C8_0x1681c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B4u; }
        if (ctx->pc != 0x1681B4u) { return; }
    }
    ctx->pc = 0x1681B4u;
label_1681b4:
    // 0x1681b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1681b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1681b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1681bc: 0x805a146  j           func_168518
    ctx->pc = 0x1681BCu;
    ctx->pc = 0x1681C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1681BCu;
            // 0x1681c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168518_0x168518(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1681C4u;
    // 0x1681c4: 0x0  nop
    ctx->pc = 0x1681c4u;
    // NOP
}
