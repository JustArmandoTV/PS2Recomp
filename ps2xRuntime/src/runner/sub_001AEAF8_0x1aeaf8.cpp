#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEAF8
// Address: 0x1aeaf8 - 0x1aeb80
void sub_001AEAF8_0x1aeaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEAF8_0x1aeaf8");
#endif

    ctx->pc = 0x1aeaf8u;

    // 0x1aeaf8: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1aeafc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aeb00: 0x1502001b  bne         $t0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AEB00u;
    {
        const bool branch_taken_0x1aeb00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB00u;
            // 0x1aeb04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb00) {
            ctx->pc = 0x1AEB70u;
            goto label_1aeb70;
        }
    }
    ctx->pc = 0x1AEB08u;
    // 0x1aeb08: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1aeb0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aeb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aeb10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEB10u;
    {
        const bool branch_taken_0x1aeb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB10u;
            // 0x1aeb14: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb10) {
            ctx->pc = 0x1AEB30u;
            goto label_1aeb30;
        }
    }
    ctx->pc = 0x1AEB18u;
    // 0x1aeb18: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AEB18u;
    {
        const bool branch_taken_0x1aeb18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb18) {
            ctx->pc = 0x1AEB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB18u;
            // 0x1aeb1c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB74u;
            goto label_1aeb74;
        }
    }
    ctx->pc = 0x1AEB20u;
    // 0x1aeb20: 0x50680009  beql        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEB20u;
    {
        const bool branch_taken_0x1aeb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1aeb20) {
            ctx->pc = 0x1AEB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB20u;
            // 0x1aeb24: 0x8c850164  lw          $a1, 0x164($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB48u;
            goto label_1aeb48;
        }
    }
    ctx->pc = 0x1AEB28u;
    // 0x1aeb28: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AEB28u;
    {
        const bool branch_taken_0x1aeb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB28u;
            // 0x1aeb2c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb28) {
            ctx->pc = 0x1AEB74u;
            goto label_1aeb74;
        }
    }
    ctx->pc = 0x1AEB30u;
label_1aeb30:
    // 0x1aeb30: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1aeb34: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1aeb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1aeb38: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1aeb38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1aeb3c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1aeb40: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB40u;
            // 0x1aeb44: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEB48u;
label_1aeb48:
    // 0x1aeb48: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1aeb4c: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1aeb50: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1aeb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeb58: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1aeb58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1aeb5c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1aeb60: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1aeb64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aeb68: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB68u;
            // 0x1aeb6c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEB70u;
label_1aeb70:
    // 0x1aeb70: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1aeb70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1aeb74:
    // 0x1aeb74: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB74u;
            // 0x1aeb78: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEB7Cu;
    // 0x1aeb7c: 0x0  nop
    ctx->pc = 0x1aeb7cu;
    // NOP
}
