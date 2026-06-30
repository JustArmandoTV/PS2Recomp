#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004121E0
// Address: 0x4121e0 - 0x4121f0
void sub_004121E0_0x4121e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004121E0_0x4121e0");
#endif

    ctx->pc = 0x4121e0u;

    // 0x4121e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4121E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4121E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4121E0u;
            // 0x4121e4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4121E8u;
    // 0x4121e8: 0x0  nop
    ctx->pc = 0x4121e8u;
    // NOP
    // 0x4121ec: 0x0  nop
    ctx->pc = 0x4121ecu;
    // NOP
}
