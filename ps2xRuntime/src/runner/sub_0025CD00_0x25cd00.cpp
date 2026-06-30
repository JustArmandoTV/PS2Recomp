#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CD00
// Address: 0x25cd00 - 0x25cd10
void sub_0025CD00_0x25cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD00_0x25cd00");
#endif

    ctx->pc = 0x25cd00u;

    // 0x25cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CD08u;
    // 0x25cd08: 0x0  nop
    ctx->pc = 0x25cd08u;
    // NOP
    // 0x25cd0c: 0x0  nop
    ctx->pc = 0x25cd0cu;
    // NOP
}
