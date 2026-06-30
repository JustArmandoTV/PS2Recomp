#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384370
// Address: 0x384370 - 0x384380
void sub_00384370_0x384370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384370_0x384370");
#endif

    ctx->pc = 0x384370u;

    // 0x384370: 0x3e00008  jr          $ra
    ctx->pc = 0x384370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384370u;
            // 0x384374: 0x94820110  lhu         $v0, 0x110($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384378u;
    // 0x384378: 0x0  nop
    ctx->pc = 0x384378u;
    // NOP
    // 0x38437c: 0x0  nop
    ctx->pc = 0x38437cu;
    // NOP
}
