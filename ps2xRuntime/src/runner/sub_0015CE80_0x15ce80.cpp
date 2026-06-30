#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CE80
// Address: 0x15ce80 - 0x15cec0
void sub_0015CE80_0x15ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CE80_0x15ce80");
#endif

    switch (ctx->pc) {
        case 0x15cea0u: goto label_15cea0;
        default: break;
    }

    ctx->pc = 0x15ce80u;

    // 0x15ce80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15ce80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15ce84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ce88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce8c: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ce90: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15CE90u;
    ctx->pc = 0x15CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE90u;
            // 0x15ce94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15CE98u;
    // 0x15ce98: 0x0  nop
    ctx->pc = 0x15ce98u;
    // NOP
    // 0x15ce9c: 0x0  nop
    ctx->pc = 0x15ce9cu;
    // NOP
label_15cea0:
    // 0x15cea0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15cea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cea4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15cea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15cea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ceac: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ceb0: 0x8056df0  j           func_15B7C0
    ctx->pc = 0x15CEB0u;
    ctx->pc = 0x15CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEB0u;
            // 0x15ceb4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B7C0u;
    {
        auto targetFn = runtime->lookupFunction(0x15B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15CEB8u;
    // 0x15ceb8: 0x0  nop
    ctx->pc = 0x15ceb8u;
    // NOP
    // 0x15cebc: 0x0  nop
    ctx->pc = 0x15cebcu;
    // NOP
}
