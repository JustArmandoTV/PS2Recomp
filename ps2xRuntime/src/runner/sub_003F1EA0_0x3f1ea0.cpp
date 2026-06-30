#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1EA0
// Address: 0x3f1ea0 - 0x3f1eb0
void sub_003F1EA0_0x3f1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1EA0_0x3f1ea0");
#endif

    ctx->pc = 0x3f1ea0u;

    // 0x3f1ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1EA8u;
    // 0x3f1ea8: 0x0  nop
    ctx->pc = 0x3f1ea8u;
    // NOP
    // 0x3f1eac: 0x0  nop
    ctx->pc = 0x3f1eacu;
    // NOP
}
