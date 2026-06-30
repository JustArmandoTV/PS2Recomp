#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D4A0
// Address: 0x31d4a0 - 0x31d4b0
void sub_0031D4A0_0x31d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D4A0_0x31d4a0");
#endif

    ctx->pc = 0x31d4a0u;

    // 0x31d4a0: 0xa0800090  sb          $zero, 0x90($a0)
    ctx->pc = 0x31d4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31D4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4A4u;
            // 0x31d4a8: 0xa080008f  sb          $zero, 0x8F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D4ACu;
    // 0x31d4ac: 0x0  nop
    ctx->pc = 0x31d4acu;
    // NOP
}
