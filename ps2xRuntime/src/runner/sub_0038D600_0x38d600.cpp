#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D600
// Address: 0x38d600 - 0x38d610
void sub_0038D600_0x38d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D600_0x38d600");
#endif

    ctx->pc = 0x38d600u;

    // 0x38d600: 0x3e00008  jr          $ra
    ctx->pc = 0x38D600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D608u;
    // 0x38d608: 0x0  nop
    ctx->pc = 0x38d608u;
    // NOP
    // 0x38d60c: 0x0  nop
    ctx->pc = 0x38d60cu;
    // NOP
}
