#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C3410
// Address: 0x4c3410 - 0x4c3420
void sub_004C3410_0x4c3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3410_0x4c3410");
#endif

    ctx->pc = 0x4c3410u;

    // 0x4c3410: 0x3e00008  jr          $ra
    ctx->pc = 0x4C3410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3410u;
            // 0x4c3414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3418u;
    // 0x4c3418: 0x0  nop
    ctx->pc = 0x4c3418u;
    // NOP
    // 0x4c341c: 0x0  nop
    ctx->pc = 0x4c341cu;
    // NOP
}
