#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039EB40
// Address: 0x39eb40 - 0x39eb50
void sub_0039EB40_0x39eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB40_0x39eb40");
#endif

    ctx->pc = 0x39eb40u;

    // 0x39eb40: 0x3e00008  jr          $ra
    ctx->pc = 0x39EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB40u;
            // 0x39eb44: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EB48u;
    // 0x39eb48: 0x0  nop
    ctx->pc = 0x39eb48u;
    // NOP
    // 0x39eb4c: 0x0  nop
    ctx->pc = 0x39eb4cu;
    // NOP
}
