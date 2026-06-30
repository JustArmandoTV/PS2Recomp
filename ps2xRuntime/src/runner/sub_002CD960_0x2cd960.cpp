#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD960
// Address: 0x2cd960 - 0x2cd970
void sub_002CD960_0x2cd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD960_0x2cd960");
#endif

    ctx->pc = 0x2cd960u;

    // 0x2cd960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cd960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cd964: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD964u;
            // 0x2cd968: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD96Cu;
    // 0x2cd96c: 0x0  nop
    ctx->pc = 0x2cd96cu;
    // NOP
}
