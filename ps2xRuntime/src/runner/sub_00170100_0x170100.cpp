#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170100
// Address: 0x170100 - 0x170118
void sub_00170100_0x170100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170100_0x170100");
#endif

    ctx->pc = 0x170100u;

    // 0x170100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170108: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17010c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17010cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170110: 0x8059386  j           func_164E18
    ctx->pc = 0x170110u;
    ctx->pc = 0x170114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170110u;
            // 0x170114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00164E18_0x164e18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170118u;
}
