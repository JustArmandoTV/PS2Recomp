#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5660
// Address: 0x3e5660 - 0x3e5670
void sub_003E5660_0x3e5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5660_0x3e5660");
#endif

    ctx->pc = 0x3e5660u;

    // 0x3e5660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e5664: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5664u;
            // 0x3e5668: 0x8c426ec8  lw          $v0, 0x6EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E566Cu;
    // 0x3e566c: 0x0  nop
    ctx->pc = 0x3e566cu;
    // NOP
}
