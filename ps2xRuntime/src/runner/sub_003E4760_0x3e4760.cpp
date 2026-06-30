#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4760
// Address: 0x3e4760 - 0x3e4780
void sub_003E4760_0x3e4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4760_0x3e4760");
#endif

    ctx->pc = 0x3e4760u;

    // 0x3e4760: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3e4760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e4764: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3e4764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4768: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3e4768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e476c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e476cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e4770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e4774: 0x80a997c  j           func_2A65F0
    ctx->pc = 0x3E4774u;
    ctx->pc = 0x3E4778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4774u;
            // 0x3e4778: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E477Cu;
    // 0x3e477c: 0x0  nop
    ctx->pc = 0x3e477cu;
    // NOP
}
