#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3E10
// Address: 0x3c3e10 - 0x3c3e30
void sub_003C3E10_0x3c3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3E10_0x3c3e10");
#endif

    ctx->pc = 0x3c3e10u;

    // 0x3c3e10: 0xac8501a8  sw          $a1, 0x1A8($a0)
    ctx->pc = 0x3c3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 5));
    // 0x3c3e14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c3e18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3E1Cu;
            // 0x3c3e20: 0xac600e30  sw          $zero, 0xE30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3E24u;
    // 0x3c3e24: 0x0  nop
    ctx->pc = 0x3c3e24u;
    // NOP
    // 0x3c3e28: 0x0  nop
    ctx->pc = 0x3c3e28u;
    // NOP
    // 0x3c3e2c: 0x0  nop
    ctx->pc = 0x3c3e2cu;
    // NOP
}
