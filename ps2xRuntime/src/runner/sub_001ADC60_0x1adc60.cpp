#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADC60
// Address: 0x1adc60 - 0x1adc98
void sub_001ADC60_0x1adc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADC60_0x1adc60");
#endif

    ctx->pc = 0x1adc60u;

    // 0x1adc60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1adc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1adc64: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1adc68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1adc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1adc6c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1adc70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1adc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1adc74: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1adc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1adc78: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1adc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1adc7c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1adc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1adc80: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x1adc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x1adc84: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1adc84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1adc88: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x1adc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x1adc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC8Cu;
            // 0x1adc90: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADC94u;
    // 0x1adc94: 0x0  nop
    ctx->pc = 0x1adc94u;
    // NOP
}
