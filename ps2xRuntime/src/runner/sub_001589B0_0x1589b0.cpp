#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001589B0
// Address: 0x1589b0 - 0x1589c0
void sub_001589B0_0x1589b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001589B0_0x1589b0");
#endif

    ctx->pc = 0x1589b0u;

    // 0x1589b0: 0xaf8483a0  sw          $a0, -0x7C60($gp)
    ctx->pc = 0x1589b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935456), GPR_U32(ctx, 4));
    // 0x1589b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1589B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589B4u;
            // 0x1589b8: 0xaf8583a4  sw          $a1, -0x7C5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935460), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1589BCu;
    // 0x1589bc: 0x0  nop
    ctx->pc = 0x1589bcu;
    // NOP
}
