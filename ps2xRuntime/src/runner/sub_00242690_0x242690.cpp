#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242690
// Address: 0x242690 - 0x2426d0
void sub_00242690_0x242690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242690_0x242690");
#endif

    ctx->pc = 0x242690u;

    // 0x242690: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242694: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x242698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24269c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x24269cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2426a0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2426a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2426a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2426a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2426a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2426ac: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2426acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2426b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2426b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2426b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2426b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2426b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2426b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2426bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2426BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2426C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2426BCu;
            // 0x2426c0: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2426C4u;
    // 0x2426c4: 0x0  nop
    ctx->pc = 0x2426c4u;
    // NOP
    // 0x2426c8: 0x0  nop
    ctx->pc = 0x2426c8u;
    // NOP
    // 0x2426cc: 0x0  nop
    ctx->pc = 0x2426ccu;
    // NOP
}
