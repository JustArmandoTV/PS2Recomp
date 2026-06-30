#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C900
// Address: 0x48c900 - 0x48c920
void sub_0048C900_0x48c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C900_0x48c900");
#endif

    ctx->pc = 0x48c900u;

    // 0x48c900: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48c904: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x48c904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48c908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48c90c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c910: 0x8123724  j           func_48DC90
    ctx->pc = 0x48C910u;
    ctx->pc = 0x48C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C910u;
            // 0x48c914: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48DC90u;
    {
        auto targetFn = runtime->lookupFunction(0x48DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x48C918u;
    // 0x48c918: 0x0  nop
    ctx->pc = 0x48c918u;
    // NOP
    // 0x48c91c: 0x0  nop
    ctx->pc = 0x48c91cu;
    // NOP
}
