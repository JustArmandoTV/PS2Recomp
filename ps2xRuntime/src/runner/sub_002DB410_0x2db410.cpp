#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB410
// Address: 0x2db410 - 0x2db420
void sub_002DB410_0x2db410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB410_0x2db410");
#endif

    ctx->pc = 0x2db410u;

    // 0x2db410: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB410u;
            // 0x2db414: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB418u;
    // 0x2db418: 0x0  nop
    ctx->pc = 0x2db418u;
    // NOP
    // 0x2db41c: 0x0  nop
    ctx->pc = 0x2db41cu;
    // NOP
}
