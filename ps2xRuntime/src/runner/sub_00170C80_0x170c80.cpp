#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C80
// Address: 0x170c80 - 0x170cb8
void sub_00170C80_0x170c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C80_0x170c80");
#endif

    ctx->pc = 0x170c80u;

    // 0x170c80: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x170c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x170c84: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x170c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x170c88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170C88u;
    {
        const bool branch_taken_0x170c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C88u;
            // 0x170c8c: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c88) {
            ctx->pc = 0x170C98u;
            goto label_170c98;
        }
    }
    ctx->pc = 0x170C90u;
    // 0x170c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170C90u;
    {
        const bool branch_taken_0x170c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C90u;
            // 0x170c94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c90) {
            ctx->pc = 0x170C9Cu;
            goto label_170c9c;
        }
    }
    ctx->pc = 0x170C98u;
label_170c98:
    // 0x170c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170c9c:
    // 0x170c9c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x170c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x170ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ca4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x170ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x170ca8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x170ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x170cac: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x170cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x170cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x170CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CB0u;
            // 0x170cb4: 0xa082004b  sb          $v0, 0x4B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170CB8u;
}
