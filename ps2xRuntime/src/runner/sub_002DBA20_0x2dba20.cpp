#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBA20
// Address: 0x2dba20 - 0x2dba30
void sub_002DBA20_0x2dba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBA20_0x2dba20");
#endif

    ctx->pc = 0x2dba20u;

    // 0x2dba20: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA20u;
            // 0x2dba24: 0x24820300  addiu       $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBA28u;
    // 0x2dba28: 0x0  nop
    ctx->pc = 0x2dba28u;
    // NOP
    // 0x2dba2c: 0x0  nop
    ctx->pc = 0x2dba2cu;
    // NOP
}
