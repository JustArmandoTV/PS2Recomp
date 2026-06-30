#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E7470
// Address: 0x3e7470 - 0x3e7480
void sub_003E7470_0x3e7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7470_0x3e7470");
#endif

    ctx->pc = 0x3e7470u;

    // 0x3e7470: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7470u;
            // 0x3e7474: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7478u;
    // 0x3e7478: 0x0  nop
    ctx->pc = 0x3e7478u;
    // NOP
    // 0x3e747c: 0x0  nop
    ctx->pc = 0x3e747cu;
    // NOP
}
