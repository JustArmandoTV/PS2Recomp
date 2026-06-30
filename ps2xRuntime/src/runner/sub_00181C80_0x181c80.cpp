#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181C80
// Address: 0x181c80 - 0x181c98
void sub_00181C80_0x181c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C80_0x181c80");
#endif

    ctx->pc = 0x181c80u;

    // 0x181c80: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x181c84: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x181c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x181c88: 0xac44bf1c  sw          $a0, -0x40E4($v0)
    ctx->pc = 0x181c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950684), GPR_U32(ctx, 4));
    // 0x181c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x181C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C8Cu;
            // 0x181c90: 0xac65bf20  sw          $a1, -0x40E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181C94u;
    // 0x181c94: 0x0  nop
    ctx->pc = 0x181c94u;
    // NOP
}
