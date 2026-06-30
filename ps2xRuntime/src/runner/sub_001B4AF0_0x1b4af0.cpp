#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4AF0
// Address: 0x1b4af0 - 0x1b4b00
void sub_001B4AF0_0x1b4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AF0_0x1b4af0");
#endif

    ctx->pc = 0x1b4af0u;

    // 0x1b4af0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1b4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1b4af4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1b4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1b4af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AF8u;
            // 0x1b4afc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4B00u;
}
