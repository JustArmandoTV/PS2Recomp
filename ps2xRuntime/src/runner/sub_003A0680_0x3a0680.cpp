#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0680
// Address: 0x3a0680 - 0x3a06a0
void sub_003A0680_0x3a0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0680_0x3a0680");
#endif

    ctx->pc = 0x3a0680u;

    // 0x3a0680: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3a0680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x3a0684: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3a0684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x3a0688: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3a0688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x3a068c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A068Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A068Cu;
            // 0x3a0690: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0694u;
    // 0x3a0694: 0x0  nop
    ctx->pc = 0x3a0694u;
    // NOP
    // 0x3a0698: 0x0  nop
    ctx->pc = 0x3a0698u;
    // NOP
    // 0x3a069c: 0x0  nop
    ctx->pc = 0x3a069cu;
    // NOP
}
