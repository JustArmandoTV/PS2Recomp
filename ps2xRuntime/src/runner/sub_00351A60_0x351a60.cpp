#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351A60
// Address: 0x351a60 - 0x351a80
void sub_00351A60_0x351a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351A60_0x351a60");
#endif

    ctx->pc = 0x351a60u;

    // 0x351a60: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x351a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x351a64: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x351a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x351a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351a6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351a70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x351a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351a74: 0x80d46ec  j           func_351BB0
    ctx->pc = 0x351A74u;
    ctx->pc = 0x351A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A74u;
            // 0x351a78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x351BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x351A7Cu;
    // 0x351a7c: 0x0  nop
    ctx->pc = 0x351a7cu;
    // NOP
}
