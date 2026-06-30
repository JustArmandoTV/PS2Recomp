#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BF90
// Address: 0x34bf90 - 0x34bfa0
void sub_0034BF90_0x34bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BF90_0x34bf90");
#endif

    ctx->pc = 0x34bf90u;

    // 0x34bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x34BF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF90u;
            // 0x34bf94: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BF98u;
    // 0x34bf98: 0x0  nop
    ctx->pc = 0x34bf98u;
    // NOP
    // 0x34bf9c: 0x0  nop
    ctx->pc = 0x34bf9cu;
    // NOP
}
