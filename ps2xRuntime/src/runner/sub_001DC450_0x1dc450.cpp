#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC450
// Address: 0x1dc450 - 0x1dc470
void sub_001DC450_0x1dc450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC450_0x1dc450");
#endif

    ctx->pc = 0x1dc450u;

    // 0x1dc450: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1dc450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dc454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc458: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc45c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc460: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dc460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc464: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC464u;
            // 0x1dc468: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC46Cu;
    // 0x1dc46c: 0x0  nop
    ctx->pc = 0x1dc46cu;
    // NOP
}
