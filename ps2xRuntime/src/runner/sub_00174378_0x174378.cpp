#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174378
// Address: 0x174378 - 0x174390
void sub_00174378_0x174378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174378_0x174378");
#endif

    ctx->pc = 0x174378u;

    // 0x174378: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17437c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x174380: 0xac443f24  sw          $a0, 0x3F24($v0)
    ctx->pc = 0x174380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16164), GPR_U32(ctx, 4));
    // 0x174384: 0x3e00008  jr          $ra
    ctx->pc = 0x174384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174384u;
            // 0x174388: 0xac643f28  sw          $a0, 0x3F28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17438Cu;
    // 0x17438c: 0x0  nop
    ctx->pc = 0x17438cu;
    // NOP
}
