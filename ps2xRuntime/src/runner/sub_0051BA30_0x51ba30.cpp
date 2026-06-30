#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BA30
// Address: 0x51ba30 - 0x51ba50
void sub_0051BA30_0x51ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BA30_0x51ba30");
#endif

    ctx->pc = 0x51ba30u;

    // 0x51ba30: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x51ba34: 0x8c66ce50  lw          $a2, -0x31B0($v1)
    ctx->pc = 0x51ba34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954576)));
    // 0x51ba38: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x51ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x51ba3c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x51ba3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x51ba40: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x51ba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x51ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x51BA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BA44u;
            // 0x51ba48: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BA4Cu;
    // 0x51ba4c: 0x0  nop
    ctx->pc = 0x51ba4cu;
    // NOP
}
