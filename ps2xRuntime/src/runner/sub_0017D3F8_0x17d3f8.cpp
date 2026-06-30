#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D3F8
// Address: 0x17d3f8 - 0x17d408
void sub_0017D3F8_0x17d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D3F8_0x17d3f8");
#endif

    ctx->pc = 0x17d3f8u;

    // 0x17d3f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17d3fc: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x17d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17d400: 0x3e00008  jr          $ra
    ctx->pc = 0x17D400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D400u;
            // 0x17d404: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D408u;
}
