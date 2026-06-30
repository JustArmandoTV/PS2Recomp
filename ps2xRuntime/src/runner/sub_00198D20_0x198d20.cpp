#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198D20
// Address: 0x198d20 - 0x198d78
void sub_00198D20_0x198d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198D20_0x198d20");
#endif

    switch (ctx->pc) {
        case 0x198d50u: goto label_198d50;
        default: break;
    }

    ctx->pc = 0x198d20u;

    // 0x198d20: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x198d24: 0x24820460  addiu       $v0, $a0, 0x460
    ctx->pc = 0x198d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    // 0x198d28: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x198d2c: 0x248704f4  addiu       $a3, $a0, 0x4F4
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1268));
    // 0x198d30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x198d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x198d34: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x198d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x198d38: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x198d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x198d3c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x198d40: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x198d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x198d44: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x198d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x198d48: 0xac800474  sw          $zero, 0x474($a0)
    ctx->pc = 0x198d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 0));
    // 0x198d4c: 0x0  nop
    ctx->pc = 0x198d4cu;
    // NOP
label_198d50:
    // 0x198d50: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x198d54: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x198d54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x198d58: 0x0  nop
    ctx->pc = 0x198d58u;
    // NOP
    // 0x198d5c: 0x0  nop
    ctx->pc = 0x198d5cu;
    // NOP
    // 0x198d60: 0x0  nop
    ctx->pc = 0x198d60u;
    // NOP
    // 0x198d64: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198D64u;
    {
        const bool branch_taken_0x198d64 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x198D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D64u;
            // 0x198d68: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d64) {
            ctx->pc = 0x198D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198d50;
        }
    }
    ctx->pc = 0x198D6Cu;
    // 0x198d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x198D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198D74u;
    // 0x198d74: 0x0  nop
    ctx->pc = 0x198d74u;
    // NOP
}
