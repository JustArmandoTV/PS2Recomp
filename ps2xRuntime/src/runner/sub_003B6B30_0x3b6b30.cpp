#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6B30
// Address: 0x3b6b30 - 0x3b6b50
void sub_003B6B30_0x3b6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6B30_0x3b6b30");
#endif

    ctx->pc = 0x3b6b30u;

    // 0x3b6b30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6b34: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3b6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x3b6b38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6B3Cu;
            // 0x3b6b40: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6B44u;
    // 0x3b6b44: 0x0  nop
    ctx->pc = 0x3b6b44u;
    // NOP
    // 0x3b6b48: 0x0  nop
    ctx->pc = 0x3b6b48u;
    // NOP
    // 0x3b6b4c: 0x0  nop
    ctx->pc = 0x3b6b4cu;
    // NOP
}
