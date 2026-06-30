#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D23F0
// Address: 0x2d23f0 - 0x2d2410
void sub_002D23F0_0x2d23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D23F0_0x2d23f0");
#endif

    ctx->pc = 0x2d23f0u;

    // 0x2d23f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d23f4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2d23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d23f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d23f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d23fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d23fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2400: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2d2400u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2404: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x2d2404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d2408: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2408u;
            // 0x2d240c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2410u;
}
