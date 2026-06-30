#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BF08
// Address: 0x19bf08 - 0x19bf18
void sub_0019BF08_0x19bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF08_0x19bf08");
#endif

    ctx->pc = 0x19bf08u;

    // 0x19bf08: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x19bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x19bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF0Cu;
            // 0x19bf10: 0xac80008c  sw          $zero, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF14u;
    // 0x19bf14: 0x0  nop
    ctx->pc = 0x19bf14u;
    // NOP
}
