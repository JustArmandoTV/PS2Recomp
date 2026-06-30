#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD990
// Address: 0x2cd990 - 0x2cd9a0
void sub_002CD990_0x2cd990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD990_0x2cd990");
#endif

    ctx->pc = 0x2cd990u;

    // 0x2cd990: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2cd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2cd994: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD994u;
            // 0x2cd998: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD99Cu;
    // 0x2cd99c: 0x0  nop
    ctx->pc = 0x2cd99cu;
    // NOP
}
