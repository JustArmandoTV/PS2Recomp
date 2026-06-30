#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3360
// Address: 0x3c3360 - 0x3c3370
void sub_003C3360_0x3c3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3360_0x3c3360");
#endif

    ctx->pc = 0x3c3360u;

    // 0x3c3360: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3360u;
            // 0x3c3364: 0x24820090  addiu       $v0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3368u;
    // 0x3c3368: 0x0  nop
    ctx->pc = 0x3c3368u;
    // NOP
    // 0x3c336c: 0x0  nop
    ctx->pc = 0x3c336cu;
    // NOP
}
