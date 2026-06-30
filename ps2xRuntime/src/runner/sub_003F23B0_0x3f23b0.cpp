#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F23B0
// Address: 0x3f23b0 - 0x3f23c0
void sub_003F23B0_0x3f23b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F23B0_0x3f23b0");
#endif

    ctx->pc = 0x3f23b0u;

    // 0x3f23b0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3f23b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F23B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F23B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F23B4u;
            // 0x3f23b8: 0xa0656088  sb          $a1, 0x6088($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24712), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F23BCu;
    // 0x3f23bc: 0x0  nop
    ctx->pc = 0x3f23bcu;
    // NOP
}
