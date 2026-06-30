#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BECA0
// Address: 0x2beca0 - 0x2becb0
void sub_002BECA0_0x2beca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECA0_0x2beca0");
#endif

    ctx->pc = 0x2beca0u;

    // 0x2beca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BECA0u;
            // 0x2beca4: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BECA8u;
    // 0x2beca8: 0x0  nop
    ctx->pc = 0x2beca8u;
    // NOP
    // 0x2becac: 0x0  nop
    ctx->pc = 0x2becacu;
    // NOP
}
