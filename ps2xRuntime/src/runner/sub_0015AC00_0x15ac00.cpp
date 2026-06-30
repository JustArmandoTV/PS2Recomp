#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC00
// Address: 0x15ac00 - 0x15ac10
void sub_0015AC00_0x15ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC00_0x15ac00");
#endif

    ctx->pc = 0x15ac00u;

    // 0x15ac00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac04: 0x8056d60  j           func_15B580
    ctx->pc = 0x15AC04u;
    ctx->pc = 0x15AC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC04u;
            // 0x15ac08: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B580_0x15b580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15AC0Cu;
    // 0x15ac0c: 0x0  nop
    ctx->pc = 0x15ac0cu;
    // NOP
}
