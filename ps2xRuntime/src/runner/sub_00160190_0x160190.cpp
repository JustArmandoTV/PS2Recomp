#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160190
// Address: 0x160190 - 0x1601a0
void sub_00160190_0x160190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160190_0x160190");
#endif

    ctx->pc = 0x160190u;

    // 0x160190: 0x3e00008  jr          $ra
    ctx->pc = 0x160190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160190u;
            // 0x160194: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160198u;
    // 0x160198: 0x0  nop
    ctx->pc = 0x160198u;
    // NOP
    // 0x16019c: 0x0  nop
    ctx->pc = 0x16019cu;
    // NOP
}
