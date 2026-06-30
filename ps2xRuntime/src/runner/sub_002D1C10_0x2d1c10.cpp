#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1C10
// Address: 0x2d1c10 - 0x2d1c20
void sub_002D1C10_0x2d1c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C10_0x2d1c10");
#endif

    ctx->pc = 0x2d1c10u;

    // 0x2d1c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C10u;
            // 0x2d1c14: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1C18u;
    // 0x2d1c18: 0x0  nop
    ctx->pc = 0x2d1c18u;
    // NOP
    // 0x2d1c1c: 0x0  nop
    ctx->pc = 0x2d1c1cu;
    // NOP
}
