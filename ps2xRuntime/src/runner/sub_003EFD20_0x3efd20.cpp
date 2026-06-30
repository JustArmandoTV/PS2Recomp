#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EFD20
// Address: 0x3efd20 - 0x3efd30
void sub_003EFD20_0x3efd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD20_0x3efd20");
#endif

    ctx->pc = 0x3efd20u;

    // 0x3efd20: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFD20u;
            // 0x3efd24: 0x8c8200d4  lw          $v0, 0xD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EFD28u;
    // 0x3efd28: 0x0  nop
    ctx->pc = 0x3efd28u;
    // NOP
    // 0x3efd2c: 0x0  nop
    ctx->pc = 0x3efd2cu;
    // NOP
}
