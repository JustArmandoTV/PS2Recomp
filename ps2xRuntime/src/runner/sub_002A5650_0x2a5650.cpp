#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5650
// Address: 0x2a5650 - 0x2a5660
void sub_002A5650_0x2a5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5650_0x2a5650");
#endif

    ctx->pc = 0x2a5650u;

    // 0x2a5650: 0xac8501c8  sw          $a1, 0x1C8($a0)
    ctx->pc = 0x2a5650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 5));
    // 0x2a5654: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5654u;
            // 0x2a5658: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A565Cu;
    // 0x2a565c: 0x0  nop
    ctx->pc = 0x2a565cu;
    // NOP
}
