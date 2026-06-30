#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CFA8
// Address: 0x16cfa8 - 0x16cfc0
void sub_0016CFA8_0x16cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CFA8_0x16cfa8");
#endif

    ctx->pc = 0x16cfa8u;

    // 0x16cfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16cfac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cfb4: 0x80430a0  j           func_10C280
    ctx->pc = 0x16CFB4u;
    ctx->pc = 0x16CFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFB4u;
            // 0x16cfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C280u;
    if (runtime->hasFunction(0x10C280u)) {
        auto targetFn = runtime->lookupFunction(0x10C280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C280_0x10c280(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CFBCu;
    // 0x16cfbc: 0x0  nop
    ctx->pc = 0x16cfbcu;
    // NOP
}
