#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9B00
// Address: 0x3b9b00 - 0x3b9b10
void sub_003B9B00_0x3b9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9B00_0x3b9b00");
#endif

    ctx->pc = 0x3b9b00u;

    // 0x3b9b00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9B08u;
    // 0x3b9b08: 0x0  nop
    ctx->pc = 0x3b9b08u;
    // NOP
    // 0x3b9b0c: 0x0  nop
    ctx->pc = 0x3b9b0cu;
    // NOP
}
