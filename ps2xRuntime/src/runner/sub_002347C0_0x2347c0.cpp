#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002347C0
// Address: 0x2347c0 - 0x2347d0
void sub_002347C0_0x2347c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002347C0_0x2347c0");
#endif

    ctx->pc = 0x2347c0u;

    // 0x2347c0: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x2347c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2347c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2347C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2347CCu;
    // 0x2347cc: 0x0  nop
    ctx->pc = 0x2347ccu;
    // NOP
}
