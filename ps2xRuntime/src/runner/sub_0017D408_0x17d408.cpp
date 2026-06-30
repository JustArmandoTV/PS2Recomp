#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D408
// Address: 0x17d408 - 0x17d428
void sub_0017D408_0x17d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D408_0x17d408");
#endif

    ctx->pc = 0x17d408u;

    // 0x17d408: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17d40c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17d410: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17d414: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x17d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17d418: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17d41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d420: 0x3e00008  jr          $ra
    ctx->pc = 0x17D420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D420u;
            // 0x17d424: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D428u;
}
