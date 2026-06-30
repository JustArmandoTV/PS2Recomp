#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4E40
// Address: 0x1b4e40 - 0x1b4f08
void sub_001B4E40_0x1b4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4E40_0x1b4e40");
#endif

    switch (ctx->pc) {
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4ea4u: goto label_1b4ea4;
        default: break;
    }

    ctx->pc = 0x1b4e40u;

    // 0x1b4e40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4e44: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b4e48: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1b4e48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b4e4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e50: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B4E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E50u;
            // 0x1b4e54: 0x8c890010  lw          $t1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4F00u;
            goto label_1b4f00;
        }
    }
    ctx->pc = 0x1B4E58u;
    // 0x1b4e58: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1b4e58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4e5c: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x1b4e5cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b4e60: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b4e60u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e64: 0xac682b  sltu        $t5, $a1, $t4
    ctx->pc = 0x1b4e64u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1b4e68: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1b4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
label_1b4e70:
    // 0x1b4e70: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1b4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1b4e74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4e78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b4e7c: 0xa3402b  sltu        $t0, $a1, $v1
    ctx->pc = 0x1b4e7cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b4e80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b4e84: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x1b4e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b4e88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4E88u;
    {
        const bool branch_taken_0x1b4e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E88u;
            // 0x1b4e8c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e88) {
            ctx->pc = 0x1B4EB0u;
            goto label_1b4eb0;
        }
    }
    ctx->pc = 0x1B4E90u;
    // 0x1b4e90: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4E90u;
    {
        const bool branch_taken_0x1b4e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E90u;
            // 0x1b4e94: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e90) {
            ctx->pc = 0x1B4EDCu;
            goto label_1b4edc;
        }
    }
    ctx->pc = 0x1B4E98u;
    // 0x1b4e98: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1b4e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b4e9c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4E9Cu;
    {
        const bool branch_taken_0x1b4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e9c) {
            ctx->pc = 0x1B4EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E9Cu;
            // 0x1b4ea0: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4EDCu;
            goto label_1b4edc;
        }
    }
    ctx->pc = 0x1B4EA4u;
label_1b4ea4:
    // 0x1b4ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EA4u;
            // 0x1b4ea8: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4EACu;
    // 0x1b4eac: 0x0  nop
    ctx->pc = 0x1b4eacu;
    // NOP
label_1b4eb0:
    // 0x1b4eb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4EB0u;
    {
        const bool branch_taken_0x1b4eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4eb0) {
            ctx->pc = 0x1B4EC0u;
            goto label_1b4ec0;
        }
    }
    ctx->pc = 0x1B4EB8u;
    // 0x1b4eb8: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4EB8u;
    {
        const bool branch_taken_0x1b4eb8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4eb8) {
            ctx->pc = 0x1B4EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4ea4;
        }
    }
    ctx->pc = 0x1B4EC0u;
label_1b4ec0:
    // 0x1b4ec0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4EC0u;
    {
        const bool branch_taken_0x1b4ec0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EC0u;
            // 0x1b4ec4: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ec0) {
            ctx->pc = 0x1B4EDCu;
            goto label_1b4edc;
        }
    }
    ctx->pc = 0x1B4EC8u;
    // 0x1b4ec8: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x1b4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b4ecc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1b4eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4ed0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B4ED0u;
    {
        const bool branch_taken_0x1b4ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ed0) {
            ctx->pc = 0x1B4EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4ea4;
        }
    }
    ctx->pc = 0x1B4ED8u;
    // 0x1b4ed8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1b4edc:
    // 0x1b4edc: 0x4b182a  slt         $v1, $v0, $t3
    ctx->pc = 0x1b4edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1b4ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4EE0u;
    {
        const bool branch_taken_0x1b4ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EE0u;
            // 0x1b4ee4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ee0) {
            ctx->pc = 0x1B4EF0u;
            goto label_1b4ef0;
        }
    }
    ctx->pc = 0x1B4EE8u;
    // 0x1b4ee8: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1b4eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b4ef0:
    // 0x1b4ef0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b4ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ef4: 0x14e102a  slt         $v0, $t2, $t6
    ctx->pc = 0x1b4ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1b4ef8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1B4EF8u;
    {
        const bool branch_taken_0x1b4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ef8) {
            ctx->pc = 0x1B4EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EF8u;
            // 0x1b4efc: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4e70;
        }
    }
    ctx->pc = 0x1B4F00u;
label_1b4f00:
    // 0x1b4f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F00u;
            // 0x1b4f04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4F08u;
}
