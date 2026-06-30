#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001703B8
// Address: 0x1703b8 - 0x1703c0
void sub_001703B8_0x1703b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703B8_0x1703b8");
#endif

    ctx->pc = 0x1703b8u;

    // 0x1703b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1703B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703B8u;
            // 0x1703bc: 0x24820058  addiu       $v0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1703C0u;
}
