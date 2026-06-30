#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002442C0
// Address: 0x2442c0 - 0x244350
void sub_002442C0_0x2442c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002442C0_0x2442c0");
#endif

    ctx->pc = 0x2442c0u;

    // 0x2442c0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2442c4: 0x246343c0  addiu       $v1, $v1, 0x43C0
    ctx->pc = 0x2442c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17344));
    // 0x2442c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2442c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2442cc: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2442d0: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x2442d4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2442d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2442d8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2442dc: 0x246344c0  addiu       $v1, $v1, 0x44C0
    ctx->pc = 0x2442dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17600));
    // 0x2442e0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2442e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2442e4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2442e8: 0x24634530  addiu       $v1, $v1, 0x4530
    ctx->pc = 0x2442e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17712));
    // 0x2442ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2442ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2442f0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2442f4: 0x24634580  addiu       $v1, $v1, 0x4580
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17792));
    // 0x2442f8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2442f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2442fc: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2442fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x244300: 0x246345d0  addiu       $v1, $v1, 0x45D0
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17872));
    // 0x244304: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x244304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x244308: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x244308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x24430c: 0x24634620  addiu       $v1, $v1, 0x4620
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17952));
    // 0x244310: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x244310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x244314: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x244314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x244318: 0x24635340  addiu       $v1, $v1, 0x5340
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21312));
    // 0x24431c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x24431cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x244320: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x244320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x244324: 0x246353e0  addiu       $v1, $v1, 0x53E0
    ctx->pc = 0x244324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21472));
    // 0x244328: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x244328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x24432c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x24432cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x244330: 0x24635410  addiu       $v1, $v1, 0x5410
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21520));
    // 0x244334: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x244334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x244338: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x244338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x24433c: 0x24634420  addiu       $v1, $v1, 0x4420
    ctx->pc = 0x24433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17440));
    // 0x244340: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x244340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x244344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244348: 0x3e00008  jr          $ra
    ctx->pc = 0x244348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244348u;
            // 0x24434c: 0xa083002c  sb          $v1, 0x2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244350u;
}
