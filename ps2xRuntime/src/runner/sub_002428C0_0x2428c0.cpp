#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002428C0
// Address: 0x2428c0 - 0x242930
void sub_002428C0_0x2428c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002428C0_0x2428c0");
#endif

    ctx->pc = 0x2428c0u;

    // 0x2428c0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2428c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2428c4: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2428c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x2428c8: 0x24632990  addiu       $v1, $v1, 0x2990
    ctx->pc = 0x2428c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10640));
    // 0x2428cc: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x2428ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x2428d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2428d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2428d4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2428d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2428d8: 0x24632b80  addiu       $v1, $v1, 0x2B80
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11136));
    // 0x2428dc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2428dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2428e0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2428e4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2428e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2428e8: 0x246329d0  addiu       $v1, $v1, 0x29D0
    ctx->pc = 0x2428e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10704));
    // 0x2428ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2428ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2428f0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2428f4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2428f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2428f8: 0x24632b00  addiu       $v1, $v1, 0x2B00
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11008));
    // 0x2428fc: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x242900: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x242900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x242904: 0x24a52b50  addiu       $a1, $a1, 0x2B50
    ctx->pc = 0x242904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11088));
    // 0x242908: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x242908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x24290c: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x24290cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x242910: 0x24632b60  addiu       $v1, $v1, 0x2B60
    ctx->pc = 0x242910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11104));
    // 0x242914: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x242914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x242918: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x242918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x24291c: 0x3e00008  jr          $ra
    ctx->pc = 0x24291Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24291Cu;
            // 0x242920: 0xa080002c  sb          $zero, 0x2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242924u;
    // 0x242924: 0x0  nop
    ctx->pc = 0x242924u;
    // NOP
    // 0x242928: 0x0  nop
    ctx->pc = 0x242928u;
    // NOP
    // 0x24292c: 0x0  nop
    ctx->pc = 0x24292cu;
    // NOP
}
