#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333A20
// Address: 0x333a20 - 0x333a30
void sub_00333A20_0x333a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333A20_0x333a20");
#endif

    ctx->pc = 0x333a20u;

    // 0x333a20: 0x3e00008  jr          $ra
    ctx->pc = 0x333A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333A28u;
    // 0x333a28: 0x0  nop
    ctx->pc = 0x333a28u;
    // NOP
    // 0x333a2c: 0x0  nop
    ctx->pc = 0x333a2cu;
    // NOP
}
