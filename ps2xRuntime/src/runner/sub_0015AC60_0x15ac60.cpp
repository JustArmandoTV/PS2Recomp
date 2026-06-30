#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC60
// Address: 0x15ac60 - 0x15ac80
void sub_0015AC60_0x15ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC60_0x15ac60");
#endif

    ctx->pc = 0x15ac60u;

    // 0x15ac60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15ac60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15ac64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac6c: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ac70: 0x8056d14  j           func_15B450
    ctx->pc = 0x15AC70u;
    ctx->pc = 0x15AC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC70u;
            // 0x15ac74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B450u;
    {
        auto targetFn = runtime->lookupFunction(0x15B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15AC78u;
    // 0x15ac78: 0x0  nop
    ctx->pc = 0x15ac78u;
    // NOP
    // 0x15ac7c: 0x0  nop
    ctx->pc = 0x15ac7cu;
    // NOP
}
