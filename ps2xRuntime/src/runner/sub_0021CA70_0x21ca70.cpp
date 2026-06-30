#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CA70
// Address: 0x21ca70 - 0x21ca80
void sub_0021CA70_0x21ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA70_0x21ca70");
#endif

    ctx->pc = 0x21ca70u;

    // 0x21ca70: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CA78u;
    // 0x21ca78: 0x0  nop
    ctx->pc = 0x21ca78u;
    // NOP
    // 0x21ca7c: 0x0  nop
    ctx->pc = 0x21ca7cu;
    // NOP
}
