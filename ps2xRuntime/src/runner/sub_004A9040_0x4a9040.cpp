#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9040
// Address: 0x4a9040 - 0x4a9080
void sub_004A9040_0x4a9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9040_0x4a9040");
#endif

    ctx->pc = 0x4a9040u;

    // 0x4a9040: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9044: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a9044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a9048: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4a9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a904c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4a904cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4a9050: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a9054: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a9054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4a9058: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4a9058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a905c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4a905cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4a9060: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4a9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a9064: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4a9064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4a9068: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a906c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A906Cu;
            // 0x4a9070: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9074u;
    // 0x4a9074: 0x0  nop
    ctx->pc = 0x4a9074u;
    // NOP
    // 0x4a9078: 0x0  nop
    ctx->pc = 0x4a9078u;
    // NOP
    // 0x4a907c: 0x0  nop
    ctx->pc = 0x4a907cu;
    // NOP
}
