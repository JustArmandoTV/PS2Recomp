#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CCF0
// Address: 0x25ccf0 - 0x25cd00
void sub_0025CCF0_0x25ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CCF0_0x25ccf0");
#endif

    ctx->pc = 0x25ccf0u;

    // 0x25ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CCF8u;
    // 0x25ccf8: 0x0  nop
    ctx->pc = 0x25ccf8u;
    // NOP
    // 0x25ccfc: 0x0  nop
    ctx->pc = 0x25ccfcu;
    // NOP
}
