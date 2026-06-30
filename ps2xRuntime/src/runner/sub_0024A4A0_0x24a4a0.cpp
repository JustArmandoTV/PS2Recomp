#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A4A0
// Address: 0x24a4a0 - 0x24a510
void sub_0024A4A0_0x24a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4A0_0x24a4a0");
#endif

    ctx->pc = 0x24a4a0u;

    // 0x24a4a0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4a4: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x24a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x24a4a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24a4ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4b0: 0x2463a980  addiu       $v1, $v1, -0x5680
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945152));
    // 0x24a4b4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x24a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x24a4b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4bc: 0x2463a630  addiu       $v1, $v1, -0x59D0
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x24a4c0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x24a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x24a4c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4c8: 0x2463a8e0  addiu       $v1, $v1, -0x5720
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944992));
    // 0x24a4cc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x24a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x24a4d0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4d4: 0x2463a7d0  addiu       $v1, $v1, -0x5830
    ctx->pc = 0x24a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944720));
    // 0x24a4d8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x24a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x24a4dc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4e0: 0x2463a840  addiu       $v1, $v1, -0x57C0
    ctx->pc = 0x24a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x24a4e4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x24a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x24a4e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4ec: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x24a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x24a4f0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x24a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x24a4f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24a4f8: 0x2463a960  addiu       $v1, $v1, -0x56A0
    ctx->pc = 0x24a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945120));
    // 0x24a4fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x24a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x24a500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a504: 0x3e00008  jr          $ra
    ctx->pc = 0x24A504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A504u;
            // 0x24a508: 0xa083002c  sb          $v1, 0x2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A50Cu;
    // 0x24a50c: 0x0  nop
    ctx->pc = 0x24a50cu;
    // NOP
}
