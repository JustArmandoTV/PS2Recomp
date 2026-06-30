#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7F40
// Address: 0x4b7f40 - 0x4b7f50
void sub_004B7F40_0x4b7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F40_0x4b7f40");
#endif

    ctx->pc = 0x4b7f40u;

    // 0x4b7f40: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F40u;
            // 0x4b7f44: 0x90820038  lbu         $v0, 0x38($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7F48u;
    // 0x4b7f48: 0x0  nop
    ctx->pc = 0x4b7f48u;
    // NOP
    // 0x4b7f4c: 0x0  nop
    ctx->pc = 0x4b7f4cu;
    // NOP
}
