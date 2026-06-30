#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B27B0
// Address: 0x1b27b0 - 0x1b27e0
void sub_001B27B0_0x1b27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B27B0_0x1b27b0");
#endif

    ctx->pc = 0x1b27b0u;

    // 0x1b27b0: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1b27b4: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1b27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b27b8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1b27b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b27bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B27BCu;
    {
        const bool branch_taken_0x1b27bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B27C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27BCu;
            // 0x1b27c0: 0x28640005  slti        $a0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27bc) {
            ctx->pc = 0x1B27D8u;
            goto label_1b27d8;
        }
    }
    ctx->pc = 0x1B27C4u;
    // 0x1b27c4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B27C4u;
    {
        const bool branch_taken_0x1b27c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b27c4) {
            ctx->pc = 0x1B27C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27C4u;
            // 0x1b27c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B27D8u;
            goto label_1b27d8;
        }
    }
    ctx->pc = 0x1B27CCu;
    // 0x1b27cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b27d0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B27D0u;
    {
        const bool branch_taken_0x1b27d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b27d0) {
            ctx->pc = 0x1B27D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27D0u;
            // 0x1b27d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B27D8u;
            goto label_1b27d8;
        }
    }
    ctx->pc = 0x1B27D8u;
label_1b27d8:
    // 0x1b27d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B27D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B27DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27D8u;
            // 0x1b27dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B27E0u;
}
