#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2320
// Address: 0x2d2320 - 0x2d2330
void sub_002D2320_0x2d2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2320_0x2d2320");
#endif

    ctx->pc = 0x2d2320u;

    // 0x2d2320: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2320u;
            // 0x2d2324: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2328u;
    // 0x2d2328: 0x0  nop
    ctx->pc = 0x2d2328u;
    // NOP
    // 0x2d232c: 0x0  nop
    ctx->pc = 0x2d232cu;
    // NOP
}
