#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B02B0
// Address: 0x1b02b0 - 0x1b02c0
void sub_001B02B0_0x1b02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B02B0_0x1b02b0");
#endif

    ctx->pc = 0x1b02b0u;

    // 0x1b02b0: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b02b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B02B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02B4u;
            // 0x1b02b8: 0xac450080  sw          $a1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B02BCu;
    // 0x1b02bc: 0x0  nop
    ctx->pc = 0x1b02bcu;
    // NOP
}
