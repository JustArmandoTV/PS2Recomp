#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5D00
// Address: 0x4f5d00 - 0x4f5e70
void sub_004F5D00_0x4f5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5D00_0x4f5d00");
#endif

    switch (ctx->pc) {
        case 0x4f5d20u: goto label_4f5d20;
        case 0x4f5d54u: goto label_4f5d54;
        case 0x4f5d68u: goto label_4f5d68;
        case 0x4f5de4u: goto label_4f5de4;
        case 0x4f5e38u: goto label_4f5e38;
        default: break;
    }

    ctx->pc = 0x4f5d00u;

    // 0x4f5d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5d04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f5d08: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4f5d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4f5d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f5d10: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x4f5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x4f5d14: 0x10650052  beq         $v1, $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x4F5D14u;
    {
        const bool branch_taken_0x4f5d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4F5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5D14u;
            // 0x4f5d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d14) {
            ctx->pc = 0x4F5E60u;
            goto label_4f5e60;
        }
    }
    ctx->pc = 0x4F5D1Cu;
    // 0x4f5d1c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x4f5d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_4f5d20:
    // 0x4f5d20: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x4f5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4f5d24: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x4f5d24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x4f5d28: 0x90a5000d  lbu         $a1, 0xD($a1)
    ctx->pc = 0x4f5d28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x4f5d2c: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x4f5d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x4f5d30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f5d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f5d34: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x4f5d34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f5d38: 0xe3282b  sltu        $a1, $a3, $v1
    ctx->pc = 0x4f5d38u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f5d3c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F5D3Cu;
    {
        const bool branch_taken_0x4f5d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5D3Cu;
            // 0x4f5d40: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d3c) {
            ctx->pc = 0x4F5D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5d20;
        }
    }
    ctx->pc = 0x4F5D44u;
    // 0x4f5d44: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x4f5d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f5d48: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4F5D48u;
    {
        const bool branch_taken_0x4f5d48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5D48u;
            // 0x4f5d4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d48) {
            ctx->pc = 0x4F5DD0u;
            goto label_4f5dd0;
        }
    }
    ctx->pc = 0x4F5D50u;
    // 0x4f5d50: 0x27ac0000  addiu       $t4, $sp, 0x0
    ctx->pc = 0x4f5d50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_4f5d54:
    // 0x4f5d54: 0x254d0001  addiu       $t5, $t2, 0x1
    ctx->pc = 0x4f5d54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4f5d58: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x4f5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x4f5d5c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x4f5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x4f5d60: 0x24ab0000  addiu       $t3, $a1, 0x0
    ctx->pc = 0x4f5d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x4f5d64: 0x0  nop
    ctx->pc = 0x4f5d64u;
    // NOP
label_4f5d68:
    // 0x4f5d68: 0x85860002  lh          $a2, 0x2($t4)
    ctx->pc = 0x4f5d68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x4f5d6c: 0x85650002  lh          $a1, 0x2($t3)
    ctx->pc = 0x4f5d6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x4f5d70: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x4f5d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4f5d74: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x4F5D74u;
    {
        const bool branch_taken_0x4f5d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5d74) {
            ctx->pc = 0x4F5DB0u;
            goto label_4f5db0;
        }
    }
    ctx->pc = 0x4F5D7Cu;
    // 0x4f5d7c: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x4f5d7cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5d80: 0x91870001  lbu         $a3, 0x1($t4)
    ctx->pc = 0x4f5d80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x4f5d84: 0x85860002  lh          $a2, 0x2($t4)
    ctx->pc = 0x4f5d84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x4f5d88: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x4f5d88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5d8c: 0xa1850000  sb          $a1, 0x0($t4)
    ctx->pc = 0x4f5d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4f5d90: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x4f5d90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x4f5d94: 0xa1850001  sb          $a1, 0x1($t4)
    ctx->pc = 0x4f5d94u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x4f5d98: 0x85650002  lh          $a1, 0x2($t3)
    ctx->pc = 0x4f5d98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x4f5d9c: 0xa5850002  sh          $a1, 0x2($t4)
    ctx->pc = 0x4f5d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f5da0: 0xa1680000  sb          $t0, 0x0($t3)
    ctx->pc = 0x4f5da0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x4f5da4: 0xa1670001  sb          $a3, 0x1($t3)
    ctx->pc = 0x4f5da4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x4f5da8: 0xa5660002  sh          $a2, 0x2($t3)
    ctx->pc = 0x4f5da8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f5dac: 0x0  nop
    ctx->pc = 0x4f5dacu;
    // NOP
label_4f5db0:
    // 0x4f5db0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4f5db0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4f5db4: 0x1a3282b  sltu        $a1, $t5, $v1
    ctx->pc = 0x4f5db4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f5db8: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4F5DB8u;
    {
        const bool branch_taken_0x4f5db8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5DB8u;
            // 0x4f5dbc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5db8) {
            ctx->pc = 0x4F5D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5d68;
        }
    }
    ctx->pc = 0x4F5DC0u;
    // 0x4f5dc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4f5dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4f5dc4: 0x149282b  sltu        $a1, $t2, $t1
    ctx->pc = 0x4f5dc4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4f5dc8: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4F5DC8u;
    {
        const bool branch_taken_0x4f5dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5DC8u;
            // 0x4f5dcc: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5dc8) {
            ctx->pc = 0x4F5D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5d54;
        }
    }
    ctx->pc = 0x4F5DD0u;
label_4f5dd0:
    // 0x4f5dd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4f5dd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5dd4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4F5DD4u;
    {
        const bool branch_taken_0x4f5dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5DD4u;
            // 0x4f5dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5dd4) {
            ctx->pc = 0x4F5E30u;
            goto label_4f5e30;
        }
    }
    ctx->pc = 0x4F5DDCu;
    // 0x4f5ddc: 0x27a90000  addiu       $t1, $sp, 0x0
    ctx->pc = 0x4f5ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x4f5de0: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x4f5de0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4f5de4:
    // 0x4f5de4: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5DE4u;
    {
        const bool branch_taken_0x4f5de4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f5de4) {
            ctx->pc = 0x4F5DF8u;
            goto label_4f5df8;
        }
    }
    ctx->pc = 0x4F5DECu;
    // 0x4f5dec: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x4f5decu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4f5df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F5DF0u;
    {
        const bool branch_taken_0x4f5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5DF0u;
            // 0x4f5df4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5df0) {
            ctx->pc = 0x4F5E08u;
            goto label_4f5e08;
        }
    }
    ctx->pc = 0x4F5DF8u;
label_4f5df8:
    // 0x4f5df8: 0x85260002  lh          $a2, 0x2($t1)
    ctx->pc = 0x4f5df8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4f5dfc: 0x8525fffe  lh          $a1, -0x2($t1)
    ctx->pc = 0x4f5dfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
    // 0x4f5e00: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x4f5e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x4f5e04: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x4f5e04u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f5e08:
    // 0x4f5e08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5E08u;
    {
        const bool branch_taken_0x4f5e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5e08) {
            ctx->pc = 0x4F5E18u;
            goto label_4f5e18;
        }
    }
    ctx->pc = 0x4F5E10u;
    // 0x4f5e10: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x4f5e10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4f5e14: 0x0  nop
    ctx->pc = 0x4f5e14u;
    // NOP
label_4f5e18:
    // 0x4f5e18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f5e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4f5e1c: 0xa12a0001  sb          $t2, 0x1($t1)
    ctx->pc = 0x4f5e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x4f5e20: 0x103282b  sltu        $a1, $t0, $v1
    ctx->pc = 0x4f5e20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f5e24: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4F5E24u;
    {
        const bool branch_taken_0x4f5e24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5E24u;
            // 0x4f5e28: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5e24) {
            ctx->pc = 0x4F5DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5de4;
        }
    }
    ctx->pc = 0x4F5E2Cu;
    // 0x4f5e2c: 0x0  nop
    ctx->pc = 0x4f5e2cu;
    // NOP
label_4f5e30:
    // 0x4f5e30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4f5e30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5e34: 0x27ab0000  addiu       $t3, $sp, 0x0
    ctx->pc = 0x4f5e34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_4f5e38:
    // 0x4f5e38: 0x91680000  lbu         $t0, 0x0($t3)
    ctx->pc = 0x4f5e38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5e3c: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x4f5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4f5e40: 0x91690001  lbu         $t1, 0x1($t3)
    ctx->pc = 0x4f5e40u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x4f5e44: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4f5e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4f5e48: 0x143282b  sltu        $a1, $t2, $v1
    ctx->pc = 0x4f5e48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f5e4c: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x4f5e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4f5e50: 0xa0e90015  sb          $t1, 0x15($a3)
    ctx->pc = 0x4f5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 9));
    // 0x4f5e54: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4f5e54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4f5e58: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4F5E58u;
    {
        const bool branch_taken_0x4f5e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5E58u;
            // 0x4f5e5c: 0xa0c8001d  sb          $t0, 0x1D($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 29), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5e58) {
            ctx->pc = 0x4F5E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5e38;
        }
    }
    ctx->pc = 0x4F5E60u;
label_4f5e60:
    // 0x4f5e60: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5E60u;
            // 0x4f5e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5E68u;
    // 0x4f5e68: 0x0  nop
    ctx->pc = 0x4f5e68u;
    // NOP
    // 0x4f5e6c: 0x0  nop
    ctx->pc = 0x4f5e6cu;
    // NOP
}
