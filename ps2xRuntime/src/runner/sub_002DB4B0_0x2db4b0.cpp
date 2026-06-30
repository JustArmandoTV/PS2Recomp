#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB4B0
// Address: 0x2db4b0 - 0x2db4c0
void sub_002DB4B0_0x2db4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4B0_0x2db4b0");
#endif

    ctx->pc = 0x2db4b0u;

    // 0x2db4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4B0u;
            // 0x2db4b4: 0x8c820200  lw          $v0, 0x200($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB4B8u;
    // 0x2db4b8: 0x0  nop
    ctx->pc = 0x2db4b8u;
    // NOP
    // 0x2db4bc: 0x0  nop
    ctx->pc = 0x2db4bcu;
    // NOP
}
