#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003645A0
// Address: 0x3645a0 - 0x3645c0
void sub_003645A0_0x3645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003645A0_0x3645a0");
#endif

    ctx->pc = 0x3645a0u;

    // 0x3645a0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x3645a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x3645a4: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3645a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x3645a8: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x3645a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x3645ac: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x3645acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x3645b0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x3645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x3645b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3645B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3645B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3645B4u;
            // 0x3645b8: 0xa0800094  sb          $zero, 0x94($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3645BCu;
    // 0x3645bc: 0x0  nop
    ctx->pc = 0x3645bcu;
    // NOP
}
