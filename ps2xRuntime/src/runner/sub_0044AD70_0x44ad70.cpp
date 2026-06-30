#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AD70
// Address: 0x44ad70 - 0x44ada0
void sub_0044AD70_0x44ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AD70_0x44ad70");
#endif

    ctx->pc = 0x44ad70u;

    // 0x44ad70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x44ad74: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x44ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x44ad78: 0x8c6689c8  lw          $a2, -0x7638($v1)
    ctx->pc = 0x44ad78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937032)));
    // 0x44ad7c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x44ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x44ad80: 0x8c843eb8  lw          $a0, 0x3EB8($a0)
    ctx->pc = 0x44ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16056)));
    // 0x44ad84: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x44ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x44ad88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44ad8c: 0xaca67568  sw          $a2, 0x7568($a1)
    ctx->pc = 0x44ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30056), GPR_U32(ctx, 6));
    // 0x44ad90: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x44ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ad94: 0x3e00008  jr          $ra
    ctx->pc = 0x44AD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AD94u;
            // 0x44ad98: 0xac647580  sw          $a0, 0x7580($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AD9Cu;
    // 0x44ad9c: 0x0  nop
    ctx->pc = 0x44ad9cu;
    // NOP
}
