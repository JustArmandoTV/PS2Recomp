#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452E90
// Address: 0x452e90 - 0x452ea0
void sub_00452E90_0x452e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452E90_0x452e90");
#endif

    ctx->pc = 0x452e90u;

    // 0x452e90: 0x3e00008  jr          $ra
    ctx->pc = 0x452E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452E90u;
            // 0x452e94: 0xa0850308  sb          $a1, 0x308($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 776), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452E98u;
    // 0x452e98: 0x0  nop
    ctx->pc = 0x452e98u;
    // NOP
    // 0x452e9c: 0x0  nop
    ctx->pc = 0x452e9cu;
    // NOP
}
