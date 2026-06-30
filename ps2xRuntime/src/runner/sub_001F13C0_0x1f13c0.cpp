#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F13C0
// Address: 0x1f13c0 - 0x1f1400
void sub_001F13C0_0x1f13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F13C0_0x1f13c0");
#endif

    ctx->pc = 0x1f13c0u;

    // 0x1f13c0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f13c4: 0x246314b0  addiu       $v1, $v1, 0x14B0
    ctx->pc = 0x1f13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5296));
    // 0x1f13c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f13cc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f13d0: 0x24635de0  addiu       $v1, $v1, 0x5DE0
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24032));
    // 0x1f13d4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f13d8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f13dc: 0x246356c0  addiu       $v1, $v1, 0x56C0
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22208));
    // 0x1f13e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f13e4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f13e8: 0x24635a50  addiu       $v1, $v1, 0x5A50
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23120));
    // 0x1f13ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1f13f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f13f4: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1f13f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f13f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F13F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F13FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13F8u;
            // 0x1f13fc: 0xa0830011  sb          $v1, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1400u;
}
