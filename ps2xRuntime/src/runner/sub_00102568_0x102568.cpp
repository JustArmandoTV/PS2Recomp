#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102568
// Address: 0x102568 - 0x102578
void sub_00102568_0x102568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102568_0x102568");
#endif

    ctx->pc = 0x102568u;

    // 0x102568: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x10256c: 0x3e00008  jr          $ra
    ctx->pc = 0x10256Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10256Cu;
            // 0x102570: 0x2442e170  addiu       $v0, $v0, -0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102574u;
    // 0x102574: 0x0  nop
    ctx->pc = 0x102574u;
    // NOP
}
