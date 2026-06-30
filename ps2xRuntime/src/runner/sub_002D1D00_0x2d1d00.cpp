#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1D00
// Address: 0x2d1d00 - 0x2d1d30
void sub_002D1D00_0x2d1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D00_0x2d1d00");
#endif

    ctx->pc = 0x2d1d00u;

    // 0x2d1d00: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2d1d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1d04: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2d1d08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d1d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d0c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2d1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2d1d10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d1d14: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2d1d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1d18: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2d1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2d1d1c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d1d20: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2d1d20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1d24: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x2d1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d1d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D28u;
            // 0x2d1d2c: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1D30u;
}
