#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376080
// Address: 0x376080 - 0x376090
void sub_00376080_0x376080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376080_0x376080");
#endif

    ctx->pc = 0x376080u;

    // 0x376080: 0x3e00008  jr          $ra
    ctx->pc = 0x376080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376080u;
            // 0x376084: 0xa08511a3  sb          $a1, 0x11A3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4515), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376088u;
    // 0x376088: 0x0  nop
    ctx->pc = 0x376088u;
    // NOP
    // 0x37608c: 0x0  nop
    ctx->pc = 0x37608cu;
    // NOP
}
