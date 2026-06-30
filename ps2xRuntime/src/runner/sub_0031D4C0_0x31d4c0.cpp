#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D4C0
// Address: 0x31d4c0 - 0x31d4d0
void sub_0031D4C0_0x31d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D4C0_0x31d4c0");
#endif

    ctx->pc = 0x31d4c0u;

    // 0x31d4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x31d4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31D4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4C4u;
            // 0x31d4c8: 0x8c42a348  lw          $v0, -0x5CB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D4CCu;
    // 0x31d4cc: 0x0  nop
    ctx->pc = 0x31d4ccu;
    // NOP
}
