#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC40
// Address: 0x15ac40 - 0x15ac60
void sub_0015AC40_0x15ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC40_0x15ac40");
#endif

    switch (ctx->pc) {
        case 0x15ac50u: goto label_15ac50;
        default: break;
    }

    ctx->pc = 0x15ac40u;

    // 0x15ac40: 0x8056e28  j           func_15B8A0
    ctx->pc = 0x15AC40u;
    ctx->pc = 0x15AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC40u;
            // 0x15ac44: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B8A0u;
    {
        auto targetFn = runtime->lookupFunction(0x15B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15AC48u;
    // 0x15ac48: 0x0  nop
    ctx->pc = 0x15ac48u;
    // NOP
    // 0x15ac4c: 0x0  nop
    ctx->pc = 0x15ac4cu;
    // NOP
label_15ac50:
    // 0x15ac50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac54: 0x8056d00  j           func_15B400
    ctx->pc = 0x15AC54u;
    ctx->pc = 0x15AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC54u;
            // 0x15ac58: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B400u;
    {
        auto targetFn = runtime->lookupFunction(0x15B400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15AC5Cu;
    // 0x15ac5c: 0x0  nop
    ctx->pc = 0x15ac5cu;
    // NOP
}
