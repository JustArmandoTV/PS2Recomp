#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481320
// Address: 0x481320 - 0x481340
void sub_00481320_0x481320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481320_0x481320");
#endif

    ctx->pc = 0x481320u;

    // 0x481320: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x481320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481324: 0x24840054  addiu       $a0, $a0, 0x54
    ctx->pc = 0x481324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x481328: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x481328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48132c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x48132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x481330: 0x80ca4b0  j           func_3292C0
    ctx->pc = 0x481330u;
    ctx->pc = 0x481334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481330u;
            // 0x481334: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003292C0_0x3292c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x481338u;
    // 0x481338: 0x0  nop
    ctx->pc = 0x481338u;
    // NOP
    // 0x48133c: 0x0  nop
    ctx->pc = 0x48133cu;
    // NOP
}
