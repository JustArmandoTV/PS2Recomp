#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481900
// Address: 0x481900 - 0x481930
void sub_00481900_0x481900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481900_0x481900");
#endif

    ctx->pc = 0x481900u;

    // 0x481900: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x481900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481904: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x481904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x481908: 0x34214240  ori         $at, $at, 0x4240
    ctx->pc = 0x481908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16960);
    // 0x48190c: 0xa1082b  sltu        $at, $a1, $at
    ctx->pc = 0x48190cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x481910: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x481910u;
    {
        const bool branch_taken_0x481910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481910u;
            // 0x481914: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481910) {
            ctx->pc = 0x481928u;
            goto label_481928;
        }
    }
    ctx->pc = 0x481918u;
    // 0x481918: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x481918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48191c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x48191cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x481920: 0x3484423f  ori         $a0, $a0, 0x423F
    ctx->pc = 0x481920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16959);
    // 0x481924: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x481924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_481928:
    // 0x481928: 0x3e00008  jr          $ra
    ctx->pc = 0x481928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481930u;
}
