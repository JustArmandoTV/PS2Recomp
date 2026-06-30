#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D430
// Address: 0x31d430 - 0x31d450
void sub_0031D430_0x31d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D430_0x31d430");
#endif

    ctx->pc = 0x31d430u;

    // 0x31d430: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31d430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31d434: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d438: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x31d43c: 0x805d416  j           func_175058
    ctx->pc = 0x31D43Cu;
    ctx->pc = 0x31D440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D43Cu;
            // 0x31d440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175058_0x175058(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x31D444u;
    // 0x31d444: 0x0  nop
    ctx->pc = 0x31d444u;
    // NOP
    // 0x31d448: 0x0  nop
    ctx->pc = 0x31d448u;
    // NOP
    // 0x31d44c: 0x0  nop
    ctx->pc = 0x31d44cu;
    // NOP
}
