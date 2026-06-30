#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC2C0
// Address: 0x1dc2c0 - 0x1dc2d0
void sub_001DC2C0_0x1dc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC2C0_0x1dc2c0");
#endif

    ctx->pc = 0x1dc2c0u;

    // 0x1dc2c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2C4u;
            // 0x1dc2c8: 0x90420054  lbu         $v0, 0x54($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2CCu;
    // 0x1dc2cc: 0x0  nop
    ctx->pc = 0x1dc2ccu;
    // NOP
}
