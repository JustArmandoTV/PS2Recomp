#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042EC90
// Address: 0x42ec90 - 0x42eca0
void sub_0042EC90_0x42ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EC90_0x42ec90");
#endif

    ctx->pc = 0x42ec90u;

    // 0x42ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x42EC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EC90u;
            // 0x42ec94: 0xa0850060  sb          $a1, 0x60($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EC98u;
    // 0x42ec98: 0x0  nop
    ctx->pc = 0x42ec98u;
    // NOP
    // 0x42ec9c: 0x0  nop
    ctx->pc = 0x42ec9cu;
    // NOP
}
