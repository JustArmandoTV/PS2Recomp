#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00495D70
// Address: 0x495d70 - 0x495eb0
void sub_00495D70_0x495d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495D70_0x495d70");
#endif

    switch (ctx->pc) {
        case 0x495e1cu: goto label_495e1c;
        case 0x495e7cu: goto label_495e7c;
        default: break;
    }

    ctx->pc = 0x495d70u;

    // 0x495d70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x495d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x495d74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x495d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x495d78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x495d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x495d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x495d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x495d80: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x495d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x495d84: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x495D84u;
    {
        const bool branch_taken_0x495d84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x495D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495D84u;
            // 0x495d88: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495d84) {
            ctx->pc = 0x495D94u;
            goto label_495d94;
        }
    }
    ctx->pc = 0x495D8Cu;
    // 0x495d8c: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x495d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x495d90: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x495d90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_495d94:
    // 0x495d94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x495d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x495d98: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x495D98u;
    {
        const bool branch_taken_0x495d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x495d98) {
            ctx->pc = 0x495E98u;
            goto label_495e98;
        }
    }
    ctx->pc = 0x495DA0u;
    // 0x495da0: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x495da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x495da4: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x495da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x495da8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x495DA8u;
    {
        const bool branch_taken_0x495da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x495DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495DA8u;
            // 0x495dac: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495da8) {
            ctx->pc = 0x495E98u;
            goto label_495e98;
        }
    }
    ctx->pc = 0x495DB0u;
    // 0x495db0: 0x465823  subu        $t3, $v0, $a2
    ctx->pc = 0x495db0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x495db4: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x495db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x495db8: 0x256a0003  addiu       $t2, $t3, 0x3
    ctx->pc = 0x495db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x495dbc: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x495DBCu;
    {
        const bool branch_taken_0x495dbc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x495DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495DBCu;
            // 0x495dc0: 0xa3883  sra         $a3, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495dbc) {
            ctx->pc = 0x495DCCu;
            goto label_495dcc;
        }
    }
    ctx->pc = 0x495DC4u;
    // 0x495dc4: 0x25470003  addiu       $a3, $t2, 0x3
    ctx->pc = 0x495dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x495dc8: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x495dc8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_495dcc:
    // 0x495dcc: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x495dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x495dd0: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x495DD0u;
    {
        const bool branch_taken_0x495dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495dd0) {
            ctx->pc = 0x495E70u;
            goto label_495e70;
        }
    }
    ctx->pc = 0x495DD8u;
    // 0x495dd8: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x495dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x495ddc: 0x47082b  sltu        $at, $v0, $a3
    ctx->pc = 0x495ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x495de0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x495DE0u;
    {
        const bool branch_taken_0x495de0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x495DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495DE0u;
            // 0x495de4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495de0) {
            ctx->pc = 0x495E14u;
            goto label_495e14;
        }
    }
    ctx->pc = 0x495DE8u;
    // 0x495de8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x495de8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x495dec: 0x1683824  and         $a3, $t3, $t0
    ctx->pc = 0x495decu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x495df0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x495DF0u;
    {
        const bool branch_taken_0x495df0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x495DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495DF0u;
            // 0x495df4: 0x640c0001  daddiu      $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495df0) {
            ctx->pc = 0x495E08u;
            goto label_495e08;
        }
    }
    ctx->pc = 0x495DF8u;
    // 0x495df8: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x495df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x495dfc: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x495DFCu;
    {
        const bool branch_taken_0x495dfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x495dfc) {
            ctx->pc = 0x495E08u;
            goto label_495e08;
        }
    }
    ctx->pc = 0x495E04u;
    // 0x495e04: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x495e04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495e08:
    // 0x495e08: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x495E08u;
    {
        const bool branch_taken_0x495e08 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e08) {
            ctx->pc = 0x495E14u;
            goto label_495e14;
        }
    }
    ctx->pc = 0x495E10u;
    // 0x495e10: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x495e10u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_495e14:
    // 0x495e14: 0x11a00016  beqz        $t5, . + 4 + (0x16 << 2)
    ctx->pc = 0x495E14u;
    {
        const bool branch_taken_0x495e14 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e14) {
            ctx->pc = 0x495E70u;
            goto label_495e70;
        }
    }
    ctx->pc = 0x495E1Cu;
label_495e1c:
    // 0x495e1c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x495e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495e20: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x495e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x495e24: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x495e24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x495e28: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x495e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x495e2c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x495e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x495e30: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x495e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x495e34: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x495e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x495e38: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x495e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x495e3c: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x495e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x495e40: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x495e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x495e44: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x495e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x495e48: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x495e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x495e4c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x495e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x495e50: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x495e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x495e54: 0x8cc7001c  lw          $a3, 0x1C($a2)
    ctx->pc = 0x495e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x495e58: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x495e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
    // 0x495e5c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x495e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x495e60: 0xc9382b  sltu        $a3, $a2, $t1
    ctx->pc = 0x495e60u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x495e64: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x495E64u;
    {
        const bool branch_taken_0x495e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x495E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495E64u;
            // 0x495e68: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495e64) {
            ctx->pc = 0x495E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495e1c;
        }
    }
    ctx->pc = 0x495E6Cu;
    // 0x495e6c: 0x0  nop
    ctx->pc = 0x495e6cu;
    // NOP
label_495e70:
    // 0x495e70: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x495e70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x495e74: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x495E74u;
    {
        const bool branch_taken_0x495e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e74) {
            ctx->pc = 0x495E98u;
            goto label_495e98;
        }
    }
    ctx->pc = 0x495E7Cu;
label_495e7c:
    // 0x495e7c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x495e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495e80: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x495e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x495e84: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x495e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x495e88: 0xc2382b  sltu        $a3, $a2, $v0
    ctx->pc = 0x495e88u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x495e8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x495e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x495e90: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x495E90u;
    {
        const bool branch_taken_0x495e90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x495e90) {
            ctx->pc = 0x495E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495e7c;
        }
    }
    ctx->pc = 0x495E98u;
label_495e98:
    // 0x495e98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x495e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x495e9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x495e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495ea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x495ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x495ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x495EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495EA4u;
            // 0x495ea8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495EACu;
    // 0x495eac: 0x0  nop
    ctx->pc = 0x495eacu;
    // NOP
}
