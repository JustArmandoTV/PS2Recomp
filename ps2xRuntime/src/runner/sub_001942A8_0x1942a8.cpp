#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001942A8
// Address: 0x1942a8 - 0x1942d0
void sub_001942A8_0x1942a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001942A8_0x1942a8");
#endif

    ctx->pc = 0x1942a8u;

    // 0x1942a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942A8u;
    {
        const bool branch_taken_0x1942a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942A8u;
            // 0x1942ac: 0x2484040c  addiu       $a0, $a0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942a8) {
            ctx->pc = 0x1942B8u;
            goto label_1942b8;
        }
    }
    ctx->pc = 0x1942B0u;
    // 0x1942b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1942b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1942b8:
    // 0x1942b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942B8u;
    {
        const bool branch_taken_0x1942b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942b8) {
            ctx->pc = 0x1942C8u;
            goto label_1942c8;
        }
    }
    ctx->pc = 0x1942C0u;
    // 0x1942c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1942c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1942c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1942c8:
    // 0x1942c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1942C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1942D0u;
}
