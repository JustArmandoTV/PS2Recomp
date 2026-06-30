#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500870
// Address: 0x500870 - 0x500890
void sub_00500870_0x500870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500870_0x500870");
#endif

    ctx->pc = 0x500870u;

    // 0x500870: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x500870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x500874: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x500874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x500878: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x500878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x50087c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x50087cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x500880: 0x3e00008  jr          $ra
    ctx->pc = 0x500880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500880u;
            // 0x500884: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500888u;
    // 0x500888: 0x0  nop
    ctx->pc = 0x500888u;
    // NOP
    // 0x50088c: 0x0  nop
    ctx->pc = 0x50088cu;
    // NOP
}
