#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A83F0
// Address: 0x1a83f0 - 0x1a8420
void sub_001A83F0_0x1a83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A83F0_0x1a83f0");
#endif

    ctx->pc = 0x1a83f0u;

    // 0x1a83f0: 0x24850098  addiu       $a1, $a0, 0x98
    ctx->pc = 0x1a83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x1a83f4: 0x2484090c  addiu       $a0, $a0, 0x90C
    ctx->pc = 0x1a83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x1a83f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a83fc: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1a83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1a8400: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a8404: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1a8404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1a8408: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a840c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A840Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A840Cu;
            // 0x1a8410: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8414u;
    // 0x1a8414: 0x0  nop
    ctx->pc = 0x1a8414u;
    // NOP
    // 0x1a8418: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8418u;
            // 0x1a841c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8420u;
}
