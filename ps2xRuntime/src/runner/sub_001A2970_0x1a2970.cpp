#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2970
// Address: 0x1a2970 - 0x1a29a8
void sub_001A2970_0x1a2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2970_0x1a2970");
#endif

    switch (ctx->pc) {
        case 0x1a2988u: goto label_1a2988;
        case 0x1a2990u: goto label_1a2990;
        default: break;
    }

    ctx->pc = 0x1a2970u;

    // 0x1a2970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a297c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2980: 0xc068236  jal         func_1A08D8
    ctx->pc = 0x1A2980u;
    SET_GPR_U32(ctx, 31, 0x1A2988u);
    ctx->pc = 0x1A2984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2980u;
            // 0x1a2984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A08D8u;
    if (runtime->hasFunction(0x1A08D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A08D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2988u; }
        if (ctx->pc != 0x1A2988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A08D8_0x1a08d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2988u; }
        if (ctx->pc != 0x1A2988u) { return; }
    }
    ctx->pc = 0x1A2988u;
label_1a2988:
    // 0x1a2988: 0xc067536  jal         func_19D4D8
    ctx->pc = 0x1A2988u;
    SET_GPR_U32(ctx, 31, 0x1A2990u);
    ctx->pc = 0x1A298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2988u;
            // 0x1a298c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4D8u;
    if (runtime->hasFunction(0x19D4D8u)) {
        auto targetFn = runtime->lookupFunction(0x19D4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2990u; }
        if (ctx->pc != 0x1A2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D4D8_0x19d4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2990u; }
        if (ctx->pc != 0x1A2990u) { return; }
    }
    ctx->pc = 0x1A2990u;
label_1a2990:
    // 0x1a2990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a299c: 0x8068b84  j           func_1A2E10
    ctx->pc = 0x1A299Cu;
    ctx->pc = 0x1A29A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A299Cu;
            // 0x1a29a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E10u;
    if (runtime->hasFunction(0x1A2E10u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A2E10_0x1a2e10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A29A4u;
    // 0x1a29a4: 0x0  nop
    ctx->pc = 0x1a29a4u;
    // NOP
}
