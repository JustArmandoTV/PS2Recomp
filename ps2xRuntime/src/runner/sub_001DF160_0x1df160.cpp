#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF160
// Address: 0x1df160 - 0x1df170
void sub_001DF160_0x1df160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF160_0x1df160");
#endif

    ctx->pc = 0x1df160u;

    // 0x1df160: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF168u;
    // 0x1df168: 0x0  nop
    ctx->pc = 0x1df168u;
    // NOP
    // 0x1df16c: 0x0  nop
    ctx->pc = 0x1df16cu;
    // NOP
}
