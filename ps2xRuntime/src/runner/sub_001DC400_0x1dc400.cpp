#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC400
// Address: 0x1dc400 - 0x1dc410
void sub_001DC400_0x1dc400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC400_0x1dc400");
#endif

    ctx->pc = 0x1dc400u;

    // 0x1dc400: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC408u;
    // 0x1dc408: 0x0  nop
    ctx->pc = 0x1dc408u;
    // NOP
    // 0x1dc40c: 0x0  nop
    ctx->pc = 0x1dc40cu;
    // NOP
}
