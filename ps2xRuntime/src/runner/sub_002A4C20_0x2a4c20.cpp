#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4C20
// Address: 0x2a4c20 - 0x2a4ca0
void sub_002A4C20_0x2a4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4C20_0x2a4c20");
#endif

    switch (ctx->pc) {
        case 0x2a4c50u: goto label_2a4c50;
        default: break;
    }

    ctx->pc = 0x2a4c20u;

    // 0x2a4c20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a4c24: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a4c28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a4c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4c34: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2a4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4c38: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x2a4c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x2a4c3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4c40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4c44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A4C44u;
    {
        const bool branch_taken_0x2a4c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c44) {
            ctx->pc = 0x2A4C90u;
            goto label_2a4c90;
        }
    }
    ctx->pc = 0x2A4C4Cu;
    // 0x2a4c4c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a4c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_2a4c50:
    // 0x2a4c50: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2a4c50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2a4c54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4c58: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4C58u;
    {
        const bool branch_taken_0x2a4c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4c58) {
            ctx->pc = 0x2A4C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C58u;
            // 0x2a4c5c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4C7Cu;
            goto label_2a4c7c;
        }
    }
    ctx->pc = 0x2A4C60u;
    // 0x2a4c60: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a4c64: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4c68: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4C68u;
    {
        const bool branch_taken_0x2a4c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4c68) {
            ctx->pc = 0x2A4C74u;
            goto label_2a4c74;
        }
    }
    ctx->pc = 0x2A4C70u;
    // 0x2a4c70: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a4c74:
    // 0x2a4c74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4C74u;
    {
        const bool branch_taken_0x2a4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c74) {
            ctx->pc = 0x2A4C94u;
            goto label_2a4c94;
        }
    }
    ctx->pc = 0x2A4C7Cu;
label_2a4c7c:
    // 0x2a4c7c: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x2a4c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x2a4c80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4c84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4c88: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A4C88u;
    {
        const bool branch_taken_0x2a4c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c88) {
            ctx->pc = 0x2A4C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C88u;
            // 0x2a4c8c: 0x6303c  dsll32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4c50;
        }
    }
    ctx->pc = 0x2A4C90u;
label_2a4c90:
    // 0x2a4c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4c94:
    // 0x2a4c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4C9Cu;
    // 0x2a4c9c: 0x0  nop
    ctx->pc = 0x2a4c9cu;
    // NOP
}
