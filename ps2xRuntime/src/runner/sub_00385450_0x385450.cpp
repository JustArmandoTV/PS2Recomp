#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385450
// Address: 0x385450 - 0x385470
void sub_00385450_0x385450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385450_0x385450");
#endif

    ctx->pc = 0x385450u;

    // 0x385450: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x385450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x385454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x385454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x385458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x385458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38545c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38545cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x385460: 0x3e00008  jr          $ra
    ctx->pc = 0x385460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385460u;
            // 0x385464: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385468u;
    // 0x385468: 0x0  nop
    ctx->pc = 0x385468u;
    // NOP
    // 0x38546c: 0x0  nop
    ctx->pc = 0x38546cu;
    // NOP
}
