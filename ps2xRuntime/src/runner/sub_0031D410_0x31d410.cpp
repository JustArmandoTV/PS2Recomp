#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D410
// Address: 0x31d410 - 0x31d420
void sub_0031D410_0x31d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D410_0x31d410");
#endif

    ctx->pc = 0x31d410u;

    // 0x31d410: 0x3e00008  jr          $ra
    ctx->pc = 0x31D410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D410u;
            // 0x31d414: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D418u;
    // 0x31d418: 0x0  nop
    ctx->pc = 0x31d418u;
    // NOP
    // 0x31d41c: 0x0  nop
    ctx->pc = 0x31d41cu;
    // NOP
}
