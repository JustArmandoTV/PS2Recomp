#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BFC50
// Address: 0x2bfc50 - 0x2bfc60
void sub_002BFC50_0x2bfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFC50_0x2bfc50");
#endif

    ctx->pc = 0x2bfc50u;

    // 0x2bfc50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bfc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bfc54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC54u;
            // 0x2bfc58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFC5Cu;
    // 0x2bfc5c: 0x0  nop
    ctx->pc = 0x2bfc5cu;
    // NOP
}
