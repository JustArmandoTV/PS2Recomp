#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B22D0
// Address: 0x1b22d0 - 0x1b2318
void sub_001B22D0_0x1b22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B22D0_0x1b22d0");
#endif

    switch (ctx->pc) {
        case 0x1b22e4u: goto label_1b22e4;
        default: break;
    }

    ctx->pc = 0x1b22d0u;

    // 0x1b22d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b22d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b22d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b22dc: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B22DCu;
    SET_GPR_U32(ctx, 31, 0x1B22E4u);
    ctx->pc = 0x1B22E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22DCu;
            // 0x1b22e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22E4u; }
        if (ctx->pc != 0x1B22E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22E4u; }
        if (ctx->pc != 0x1B22E4u) { return; }
    }
    ctx->pc = 0x1B22E4u;
label_1b22e4:
    // 0x1b22e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b22e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b22e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b22e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B22ECu;
    {
        const bool branch_taken_0x1b22ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22ECu;
            // 0x1b22f0: 0x34a50143  ori         $a1, $a1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22ec) {
            ctx->pc = 0x1B2308u;
            goto label_1b2308;
        }
    }
    ctx->pc = 0x1B22F4u;
    // 0x1b22f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b22f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b22f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b22f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b22fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2300: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B2300u;
    ctx->pc = 0x1B2304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2300u;
            // 0x1b2304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2308u;
label_1b2308:
    // 0x1b2308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b230c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2310: 0x806c8c6  j           func_1B2318
    ctx->pc = 0x1B2310u;
    ctx->pc = 0x1B2314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2310u;
            // 0x1b2314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2318u;
    if (runtime->hasFunction(0x1B2318u)) {
        auto targetFn = runtime->lookupFunction(0x1B2318u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B2318_0x1b2318(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2318u;
}
