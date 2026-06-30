#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4AD8
// Address: 0x1b4ad8 - 0x1b4af0
void sub_001B4AD8_0x1b4ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AD8_0x1b4ad8");
#endif

    ctx->pc = 0x1b4ad8u;

    // 0x1b4ad8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1b4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1b4adc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b4ae0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b4ae4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1b4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1b4ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AE8u;
            // 0x1b4aec: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4AF0u;
}
