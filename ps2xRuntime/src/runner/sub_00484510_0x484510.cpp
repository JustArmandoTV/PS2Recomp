#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00484510
// Address: 0x484510 - 0x484520
void sub_00484510_0x484510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484510_0x484510");
#endif

    ctx->pc = 0x484510u;

    // 0x484510: 0x3e00008  jr          $ra
    ctx->pc = 0x484510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484510u;
            // 0x484514: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484518u;
    // 0x484518: 0x0  nop
    ctx->pc = 0x484518u;
    // NOP
    // 0x48451c: 0x0  nop
    ctx->pc = 0x48451cu;
    // NOP
}
