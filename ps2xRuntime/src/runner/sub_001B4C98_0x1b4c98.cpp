#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4C98
// Address: 0x1b4c98 - 0x1b4d30
void sub_001B4C98_0x1b4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C98_0x1b4c98");
#endif

    ctx->pc = 0x1b4c98u;

    // 0x1b4c98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c9c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1b4c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ca0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1b4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b4ca4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1b4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b4ca8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CA8u;
    {
        const bool branch_taken_0x1b4ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CA8u;
            // 0x1b4cac: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ca8) {
            ctx->pc = 0x1B4CC0u;
            goto label_1b4cc0;
        }
    }
    ctx->pc = 0x1B4CB0u;
    // 0x1b4cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4cb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CB8u;
            // 0x1b4cbc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4CC0u;
label_1b4cc0:
    // 0x1b4cc0: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1b4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b4cc4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b4cc8: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1b4cc8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b4ccc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b4cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4cd4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b4cd8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1b4cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1b4cdc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b4cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ce0: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b4ce4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1b4ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1b4ce8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1b4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b4cec: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1b4cecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4cf0: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4CF0u;
    {
        const bool branch_taken_0x1b4cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CF0u;
            // 0x1b4cf4: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cf0) {
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4CF8u;
    // 0x1b4cf8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1b4cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b4cfc:
    // 0x1b4cfc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1b4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b4d00: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x1b4d00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x1b4d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4d08: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b4d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4d0c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4D0Cu;
    {
        const bool branch_taken_0x1b4d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D0Cu;
            // 0x1b4d10: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d0c) {
            ctx->pc = 0x1B4D20u;
            goto label_1b4d20;
        }
    }
    ctx->pc = 0x1B4D14u;
    // 0x1b4d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4D18u;
    {
        const bool branch_taken_0x1b4d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D18u;
            // 0x1b4d1c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d18) {
            ctx->pc = 0x1B4D24u;
            goto label_1b4d24;
        }
    }
    ctx->pc = 0x1B4D20u;
label_1b4d20:
    // 0x1b4d20: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1b4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_1b4d24:
    // 0x1b4d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D24u;
            // 0x1b4d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4D2Cu;
    // 0x1b4d2c: 0x0  nop
    ctx->pc = 0x1b4d2cu;
    // NOP
}
