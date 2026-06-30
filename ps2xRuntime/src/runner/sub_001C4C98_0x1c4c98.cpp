#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4C98
// Address: 0x1c4c98 - 0x1c4cb0
void sub_001C4C98_0x1c4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C98_0x1c4c98");
#endif

    ctx->pc = 0x1c4c98u;

    // 0x1c4c98: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c4c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c4c9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c4c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c4ca0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c4ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c4ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CA4u;
            // 0x1c4ca8: 0x82102d  daddu       $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4CACu;
    // 0x1c4cac: 0x0  nop
    ctx->pc = 0x1c4cacu;
    // NOP
}
