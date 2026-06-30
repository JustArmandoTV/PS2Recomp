#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C4A0
// Address: 0x47c4a0 - 0x47c4b0
void sub_0047C4A0_0x47c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C4A0_0x47c4a0");
#endif

    ctx->pc = 0x47c4a0u;

    // 0x47c4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x47C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C4A0u;
            // 0x47c4a4: 0x8c8201c4  lw          $v0, 0x1C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C4A8u;
    // 0x47c4a8: 0x0  nop
    ctx->pc = 0x47c4a8u;
    // NOP
    // 0x47c4ac: 0x0  nop
    ctx->pc = 0x47c4acu;
    // NOP
}
