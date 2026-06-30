#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7B40
// Address: 0x1b7b40 - 0x1b7b80
void sub_001B7B40_0x1b7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B40_0x1b7b40");
#endif

    ctx->pc = 0x1b7b40u;

    // 0x1b7b40: 0x8c820920  lw          $v0, 0x920($a0)
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2336)));
    // 0x1b7b44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7B44u;
    {
        const bool branch_taken_0x1b7b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B44u;
            // 0x1b7b48: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b44) {
            ctx->pc = 0x1B7B60u;
            goto label_1b7b60;
        }
    }
    ctx->pc = 0x1B7B4Cu;
    // 0x1b7b4c: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x1b7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x1b7b50: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1b7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1b7b54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B54u;
            // 0x1b7b58: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B5Cu;
    // 0x1b7b5c: 0x0  nop
    ctx->pc = 0x1b7b5cu;
    // NOP
label_1b7b60:
    // 0x1b7b60: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1b7b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x1b7b64: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1b7b68: 0x8c23ae40  lw          $v1, -0x51C0($at)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946368)));
    // 0x1b7b6c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b7b70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b7b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B74u;
            // 0x1b7b78: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B7Cu;
    // 0x1b7b7c: 0x0  nop
    ctx->pc = 0x1b7b7cu;
    // NOP
}
