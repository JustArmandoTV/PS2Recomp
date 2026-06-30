#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1400
// Address: 0x1f1400 - 0x1f1440
void sub_001F1400_0x1f1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1400_0x1f1400");
#endif

    ctx->pc = 0x1f1400u;

    // 0x1f1400: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1404: 0x24631750  addiu       $v1, $v1, 0x1750
    ctx->pc = 0x1f1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5968));
    // 0x1f1408: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f140c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1410: 0x2463e800  addiu       $v1, $v1, -0x1800
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
    // 0x1f1414: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f1414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f1418: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f1418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f141c: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
    // 0x1f1420: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f1420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f1424: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f1424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1428: 0x2463e670  addiu       $v1, $v1, -0x1990
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960752));
    // 0x1f142c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f142cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1f1430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1434: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x1f1434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1438: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1438u;
            // 0x1f143c: 0xa0830011  sb          $v1, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1440u;
}
