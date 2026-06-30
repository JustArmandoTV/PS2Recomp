#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439D30
// Address: 0x439d30 - 0x439d50
void sub_00439D30_0x439d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439D30_0x439d30");
#endif

    ctx->pc = 0x439d30u;

    // 0x439d30: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x439d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x439d34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x439d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x439d38: 0xa066000c  sb          $a2, 0xC($v1)
    ctx->pc = 0x439d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x439d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x439D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439D3Cu;
            // 0x439d40: 0xa067000d  sb          $a3, 0xD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439D44u;
    // 0x439d44: 0x0  nop
    ctx->pc = 0x439d44u;
    // NOP
    // 0x439d48: 0x0  nop
    ctx->pc = 0x439d48u;
    // NOP
    // 0x439d4c: 0x0  nop
    ctx->pc = 0x439d4cu;
    // NOP
}
