#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567420
// Address: 0x567420 - 0x567430
void sub_00567420_0x567420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567420_0x567420");
#endif

    ctx->pc = 0x567420u;

    // 0x567420: 0x3e00008  jr          $ra
    ctx->pc = 0x567420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567420u;
            // 0x567424: 0x80820012  lb          $v0, 0x12($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567428u;
    // 0x567428: 0x0  nop
    ctx->pc = 0x567428u;
    // NOP
    // 0x56742c: 0x0  nop
    ctx->pc = 0x56742cu;
    // NOP
}
