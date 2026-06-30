#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7E10
// Address: 0x2b7e10 - 0x2b7e20
void sub_002B7E10_0x2b7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E10_0x2b7e10");
#endif

    ctx->pc = 0x2b7e10u;

    // 0x2b7e10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E14u;
            // 0x2b7e18: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7E1Cu;
    // 0x2b7e1c: 0x0  nop
    ctx->pc = 0x2b7e1cu;
    // NOP
}
