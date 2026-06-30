#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9BB0
// Address: 0x4a9bb0 - 0x4a9bc0
void sub_004A9BB0_0x4a9bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BB0_0x4a9bb0");
#endif

    ctx->pc = 0x4a9bb0u;

    // 0x4a9bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9BB0u;
            // 0x4a9bb4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9BB8u;
    // 0x4a9bb8: 0x0  nop
    ctx->pc = 0x4a9bb8u;
    // NOP
    // 0x4a9bbc: 0x0  nop
    ctx->pc = 0x4a9bbcu;
    // NOP
}
