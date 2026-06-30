#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CB6E0
// Address: 0x3cb6e0 - 0x3cb6f0
void sub_003CB6E0_0x3cb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB6E0_0x3cb6e0");
#endif

    ctx->pc = 0x3cb6e0u;

    // 0x3cb6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB6E0u;
            // 0x3cb6e4: 0x9082004d  lbu         $v0, 0x4D($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CB6E8u;
    // 0x3cb6e8: 0x0  nop
    ctx->pc = 0x3cb6e8u;
    // NOP
    // 0x3cb6ec: 0x0  nop
    ctx->pc = 0x3cb6ecu;
    // NOP
}
