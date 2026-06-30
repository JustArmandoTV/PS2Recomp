#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A64F0
// Address: 0x1a64f0 - 0x1a6520
void sub_001A64F0_0x1a64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A64F0_0x1a64f0");
#endif

    ctx->pc = 0x1a64f0u;

    // 0x1a64f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a64f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a64f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a64fc: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A64FCu;
    {
        const bool branch_taken_0x1a64fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64FCu;
            // 0x1a6500: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64fc) {
            ctx->pc = 0x1A6514u;
            goto label_1a6514;
        }
    }
    ctx->pc = 0x1A6504u;
    // 0x1a6504: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a650c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6510: 0xac461388  sw          $a2, 0x1388($v0)
    ctx->pc = 0x1a6510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5000), GPR_U32(ctx, 6));
label_1a6514:
    // 0x1a6514: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A651Cu;
    // 0x1a651c: 0x0  nop
    ctx->pc = 0x1a651cu;
    // NOP
}
