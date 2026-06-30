#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D400
// Address: 0x31d400 - 0x31d410
void sub_0031D400_0x31d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D400_0x31d400");
#endif

    ctx->pc = 0x31d400u;

    // 0x31d400: 0x3e00008  jr          $ra
    ctx->pc = 0x31D400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D400u;
            // 0x31d404: 0x8c820154  lw          $v0, 0x154($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D408u;
    // 0x31d408: 0x0  nop
    ctx->pc = 0x31d408u;
    // NOP
    // 0x31d40c: 0x0  nop
    ctx->pc = 0x31d40cu;
    // NOP
}
