#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BF80
// Address: 0x34bf80 - 0x34bf90
void sub_0034BF80_0x34bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BF80_0x34bf80");
#endif

    ctx->pc = 0x34bf80u;

    // 0x34bf80: 0x3e00008  jr          $ra
    ctx->pc = 0x34BF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF80u;
            // 0x34bf84: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BF88u;
    // 0x34bf88: 0x0  nop
    ctx->pc = 0x34bf88u;
    // NOP
    // 0x34bf8c: 0x0  nop
    ctx->pc = 0x34bf8cu;
    // NOP
}
