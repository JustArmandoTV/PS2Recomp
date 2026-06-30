#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412070
// Address: 0x412070 - 0x412090
void sub_00412070_0x412070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412070_0x412070");
#endif

    ctx->pc = 0x412070u;

    // 0x412070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x412070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x412074: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x412074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412078: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x412078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x41207c: 0x3e00008  jr          $ra
    ctx->pc = 0x41207Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41207Cu;
            // 0x412080: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412084u;
    // 0x412084: 0x0  nop
    ctx->pc = 0x412084u;
    // NOP
    // 0x412088: 0x0  nop
    ctx->pc = 0x412088u;
    // NOP
    // 0x41208c: 0x0  nop
    ctx->pc = 0x41208cu;
    // NOP
}
