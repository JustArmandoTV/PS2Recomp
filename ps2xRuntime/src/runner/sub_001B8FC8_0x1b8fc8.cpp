#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8FC8
// Address: 0x1b8fc8 - 0x1b8fe0
void sub_001B8FC8_0x1b8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8FC8_0x1b8fc8");
#endif

    switch (ctx->pc) {
        case 0x1b8fd8u: goto label_1b8fd8;
        default: break;
    }

    ctx->pc = 0x1b8fc8u;

    // 0x1b8fc8: 0x5ca00001  bgtzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8FC8u;
    {
        const bool branch_taken_0x1b8fc8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1b8fc8) {
            ctx->pc = 0x1B8FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FC8u;
            // 0x1b8fcc: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8FD0u;
            goto label_1b8fd0;
        }
    }
    ctx->pc = 0x1B8FD0u;
label_1b8fd0:
    // 0x1b8fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8FD8u;
label_1b8fd8:
    // 0x1b8fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FD8u;
            // 0x1b8fdc: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8FE0u;
}
