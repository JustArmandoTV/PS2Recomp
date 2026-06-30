#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ACF40
// Address: 0x4acf40 - 0x4acf50
void sub_004ACF40_0x4acf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACF40_0x4acf40");
#endif

    ctx->pc = 0x4acf40u;

    // 0x4acf40: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4acf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4acf44: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACF44u;
            // 0x4acf48: 0x8c42a990  lw          $v0, -0x5670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ACF4Cu;
    // 0x4acf4c: 0x0  nop
    ctx->pc = 0x4acf4cu;
    // NOP
}
