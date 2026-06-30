#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6DF0
// Address: 0x2b6df0 - 0x2b6e00
void sub_002B6DF0_0x2b6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DF0_0x2b6df0");
#endif

    ctx->pc = 0x2b6df0u;

    // 0x2b6df0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6DF4u;
            // 0x2b6df8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6DFCu;
    // 0x2b6dfc: 0x0  nop
    ctx->pc = 0x2b6dfcu;
    // NOP
}
