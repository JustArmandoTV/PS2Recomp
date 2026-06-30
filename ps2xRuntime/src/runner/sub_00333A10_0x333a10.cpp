#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333A10
// Address: 0x333a10 - 0x333a20
void sub_00333A10_0x333a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333A10_0x333a10");
#endif

    ctx->pc = 0x333a10u;

    // 0x333a10: 0x3e00008  jr          $ra
    ctx->pc = 0x333A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333A18u;
    // 0x333a18: 0x0  nop
    ctx->pc = 0x333a18u;
    // NOP
    // 0x333a1c: 0x0  nop
    ctx->pc = 0x333a1cu;
    // NOP
}
