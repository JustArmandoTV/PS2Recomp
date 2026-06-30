#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233220
// Address: 0x233220 - 0x233230
void sub_00233220_0x233220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233220_0x233220");
#endif

    ctx->pc = 0x233220u;

    // 0x233220: 0x3e00008  jr          $ra
    ctx->pc = 0x233220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233228u;
    // 0x233228: 0x0  nop
    ctx->pc = 0x233228u;
    // NOP
    // 0x23322c: 0x0  nop
    ctx->pc = 0x23322cu;
    // NOP
}
