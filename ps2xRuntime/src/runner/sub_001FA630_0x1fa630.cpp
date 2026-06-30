#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA630
// Address: 0x1fa630 - 0x1fa670
void sub_001FA630_0x1fa630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA630_0x1fa630");
#endif

    ctx->pc = 0x1fa630u;

    // 0x1fa630: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa634: 0x2463a6e0  addiu       $v1, $v1, -0x5920
    ctx->pc = 0x1fa634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944480));
    // 0x1fa638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fa63c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa640: 0x2463be10  addiu       $v1, $v1, -0x41F0
    ctx->pc = 0x1fa640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950416));
    // 0x1fa644: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1fa648: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa64c: 0x2463bd70  addiu       $v1, $v1, -0x4290
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950256));
    // 0x1fa650: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1fa650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1fa654: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa658: 0x2463bc30  addiu       $v1, $v1, -0x43D0
    ctx->pc = 0x1fa658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949936));
    // 0x1fa65c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1fa65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fa660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa664: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1fa664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa668: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA668u;
            // 0x1fa66c: 0xa0800011  sb          $zero, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA670u;
}
