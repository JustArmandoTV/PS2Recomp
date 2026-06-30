#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E37B0
// Address: 0x1e37b0 - 0x1e37f0
void sub_001E37B0_0x1e37b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E37B0_0x1e37b0");
#endif

    ctx->pc = 0x1e37b0u;

    // 0x1e37b0: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e37b4: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x1e37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x1e37b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e37bc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e37c0: 0x24634190  addiu       $v1, $v1, 0x4190
    ctx->pc = 0x1e37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16784));
    // 0x1e37c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1e37c8: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e37cc: 0x24633e60  addiu       $v1, $v1, 0x3E60
    ctx->pc = 0x1e37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15968));
    // 0x1e37d0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e37d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1e37d4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e37d8: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x1e37dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1e37dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e37e0: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x1e37e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e37e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E37E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37E4u;
            // 0x1e37e8: 0xa0800011  sb          $zero, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E37ECu;
    // 0x1e37ec: 0x0  nop
    ctx->pc = 0x1e37ecu;
    // NOP
}
