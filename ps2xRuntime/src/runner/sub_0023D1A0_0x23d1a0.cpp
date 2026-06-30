#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D1A0
// Address: 0x23d1a0 - 0x23d1e0
void sub_0023D1A0_0x23d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D1A0_0x23d1a0");
#endif

    ctx->pc = 0x23d1a0u;

    // 0x23d1a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x23d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d1a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d1a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x23d1ac: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x23d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x23d1b0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x23d1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23d1b4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x23d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23d1b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x23d1bc: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x23d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x23d1c0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x23d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23d1c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23d1c8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23d1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1CCu;
            // 0x23d1d0: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D1D4u;
    // 0x23d1d4: 0x0  nop
    ctx->pc = 0x23d1d4u;
    // NOP
    // 0x23d1d8: 0x0  nop
    ctx->pc = 0x23d1d8u;
    // NOP
    // 0x23d1dc: 0x0  nop
    ctx->pc = 0x23d1dcu;
    // NOP
}
