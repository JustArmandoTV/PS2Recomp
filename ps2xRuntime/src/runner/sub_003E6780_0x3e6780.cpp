#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6780
// Address: 0x3e6780 - 0x3e6790
void sub_003E6780_0x3e6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6780_0x3e6780");
#endif

    ctx->pc = 0x3e6780u;

    // 0x3e6780: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6788u;
    // 0x3e6788: 0x0  nop
    ctx->pc = 0x3e6788u;
    // NOP
    // 0x3e678c: 0x0  nop
    ctx->pc = 0x3e678cu;
    // NOP
}
