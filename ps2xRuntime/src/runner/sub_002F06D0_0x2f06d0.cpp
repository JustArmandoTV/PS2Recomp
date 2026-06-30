#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F06D0
// Address: 0x2f06d0 - 0x2f06e0
void sub_002F06D0_0x2f06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06D0_0x2f06d0");
#endif

    ctx->pc = 0x2f06d0u;

    // 0x2f06d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2f06d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06D4u;
            // 0x2f06d8: 0x8c42e3f0  lw          $v0, -0x1C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F06DCu;
    // 0x2f06dc: 0x0  nop
    ctx->pc = 0x2f06dcu;
    // NOP
}
