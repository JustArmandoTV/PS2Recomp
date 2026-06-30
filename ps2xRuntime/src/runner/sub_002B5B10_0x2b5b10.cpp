#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5B10
// Address: 0x2b5b10 - 0x2b5b20
void sub_002B5B10_0x2b5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B10_0x2b5b10");
#endif

    ctx->pc = 0x2b5b10u;

    // 0x2b5b10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5B18u;
    // 0x2b5b18: 0x0  nop
    ctx->pc = 0x2b5b18u;
    // NOP
    // 0x2b5b1c: 0x0  nop
    ctx->pc = 0x2b5b1cu;
    // NOP
}
