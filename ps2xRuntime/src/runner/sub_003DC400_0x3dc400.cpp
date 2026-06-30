#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC400
// Address: 0x3dc400 - 0x3dc420
void sub_003DC400_0x3dc400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC400_0x3dc400");
#endif

    ctx->pc = 0x3dc400u;

    // 0x3dc400: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc404: 0x2442c9a0  addiu       $v0, $v0, -0x3660
    ctx->pc = 0x3dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
    // 0x3dc408: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3dc408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3dc40c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x3dc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x3dc410: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3dc410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc414: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x3dc414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dc418: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC418u;
            // 0x3dc41c: 0xa0800009  sb          $zero, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC420u;
}
