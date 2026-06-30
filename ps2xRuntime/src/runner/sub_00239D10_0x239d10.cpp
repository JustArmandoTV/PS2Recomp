#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239D10
// Address: 0x239d10 - 0x239e20
void sub_00239D10_0x239d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239D10_0x239d10");
#endif

    switch (ctx->pc) {
        case 0x239d10u: goto label_239d10;
        case 0x239d14u: goto label_239d14;
        case 0x239d18u: goto label_239d18;
        case 0x239d1cu: goto label_239d1c;
        case 0x239d20u: goto label_239d20;
        case 0x239d24u: goto label_239d24;
        case 0x239d28u: goto label_239d28;
        case 0x239d2cu: goto label_239d2c;
        case 0x239d30u: goto label_239d30;
        case 0x239d34u: goto label_239d34;
        case 0x239d38u: goto label_239d38;
        case 0x239d3cu: goto label_239d3c;
        case 0x239d40u: goto label_239d40;
        case 0x239d44u: goto label_239d44;
        case 0x239d48u: goto label_239d48;
        case 0x239d4cu: goto label_239d4c;
        case 0x239d50u: goto label_239d50;
        case 0x239d54u: goto label_239d54;
        case 0x239d58u: goto label_239d58;
        case 0x239d5cu: goto label_239d5c;
        case 0x239d60u: goto label_239d60;
        case 0x239d64u: goto label_239d64;
        case 0x239d68u: goto label_239d68;
        case 0x239d6cu: goto label_239d6c;
        case 0x239d70u: goto label_239d70;
        case 0x239d74u: goto label_239d74;
        case 0x239d78u: goto label_239d78;
        case 0x239d7cu: goto label_239d7c;
        case 0x239d80u: goto label_239d80;
        case 0x239d84u: goto label_239d84;
        case 0x239d88u: goto label_239d88;
        case 0x239d8cu: goto label_239d8c;
        case 0x239d90u: goto label_239d90;
        case 0x239d94u: goto label_239d94;
        case 0x239d98u: goto label_239d98;
        case 0x239d9cu: goto label_239d9c;
        case 0x239da0u: goto label_239da0;
        case 0x239da4u: goto label_239da4;
        case 0x239da8u: goto label_239da8;
        case 0x239dacu: goto label_239dac;
        case 0x239db0u: goto label_239db0;
        case 0x239db4u: goto label_239db4;
        case 0x239db8u: goto label_239db8;
        case 0x239dbcu: goto label_239dbc;
        case 0x239dc0u: goto label_239dc0;
        case 0x239dc4u: goto label_239dc4;
        case 0x239dc8u: goto label_239dc8;
        case 0x239dccu: goto label_239dcc;
        case 0x239dd0u: goto label_239dd0;
        case 0x239dd4u: goto label_239dd4;
        case 0x239dd8u: goto label_239dd8;
        case 0x239ddcu: goto label_239ddc;
        case 0x239de0u: goto label_239de0;
        case 0x239de4u: goto label_239de4;
        case 0x239de8u: goto label_239de8;
        case 0x239decu: goto label_239dec;
        case 0x239df0u: goto label_239df0;
        case 0x239df4u: goto label_239df4;
        case 0x239df8u: goto label_239df8;
        case 0x239dfcu: goto label_239dfc;
        case 0x239e00u: goto label_239e00;
        case 0x239e04u: goto label_239e04;
        case 0x239e08u: goto label_239e08;
        case 0x239e0cu: goto label_239e0c;
        case 0x239e10u: goto label_239e10;
        case 0x239e14u: goto label_239e14;
        case 0x239e18u: goto label_239e18;
        case 0x239e1cu: goto label_239e1c;
        default: break;
    }

    ctx->pc = 0x239d10u;

label_239d10:
    // 0x239d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239d14:
    // 0x239d14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239d18:
    // 0x239d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_239d1c:
    // 0x239d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239d20:
    // 0x239d20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x239d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239d24:
    // 0x239d24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239d28:
    // 0x239d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239d2c:
    // 0x239d2c: 0x8c83012c  lw          $v1, 0x12C($a0)
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_239d30:
    // 0x239d30: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239d34:
    // 0x239d34: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_239d38:
    if (ctx->pc == 0x239D38u) {
        ctx->pc = 0x239D38u;
            // 0x239d38: 0x26700128  addiu       $s0, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->pc = 0x239D3Cu;
        goto label_239d3c;
    }
    ctx->pc = 0x239D34u;
    {
        const bool branch_taken_0x239d34 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D34u;
            // 0x239d38: 0x26700128  addiu       $s0, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d34) {
            ctx->pc = 0x239D78u;
            goto label_239d78;
        }
    }
    ctx->pc = 0x239D3Cu;
label_239d3c:
    // 0x239d3c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239d40:
    // 0x239d40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239d44:
    // 0x239d44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239d48:
    // 0x239d48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239d4c:
    // 0x239d4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_239d50:
    if (ctx->pc == 0x239D50u) {
        ctx->pc = 0x239D54u;
        goto label_239d54;
    }
    ctx->pc = 0x239D4Cu;
    {
        const bool branch_taken_0x239d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d4c) {
            ctx->pc = 0x239D68u;
            goto label_239d68;
        }
    }
    ctx->pc = 0x239D54u;
label_239d54:
    // 0x239d54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239d58:
    // 0x239d58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_239d5c:
    // 0x239d5c: 0x320f809  jalr        $t9
label_239d60:
    if (ctx->pc == 0x239D60u) {
        ctx->pc = 0x239D60u;
            // 0x239d60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239D64u;
        goto label_239d64;
    }
    ctx->pc = 0x239D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239D64u);
        ctx->pc = 0x239D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239D64u; }
            if (ctx->pc != 0x239D64u) { return; }
        }
        }
    }
    ctx->pc = 0x239D64u;
label_239d64:
    // 0x239d64: 0x0  nop
    ctx->pc = 0x239d64u;
    // NOP
label_239d68:
    // 0x239d68: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_239d6c:
    // 0x239d6c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_239d70:
    if (ctx->pc == 0x239D70u) {
        ctx->pc = 0x239D70u;
            // 0x239d70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239D74u;
        goto label_239d74;
    }
    ctx->pc = 0x239D6Cu;
    {
        const bool branch_taken_0x239d6c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D6Cu;
            // 0x239d70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d6c) {
            ctx->pc = 0x239D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239d40;
        }
    }
    ctx->pc = 0x239D74u;
label_239d74:
    // 0x239d74: 0x0  nop
    ctx->pc = 0x239d74u;
    // NOP
label_239d78:
    // 0x239d78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239d7c:
    // 0x239d7c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239d80:
    // 0x239d80: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239d84:
    if (ctx->pc == 0x239D84u) {
        ctx->pc = 0x239D88u;
        goto label_239d88;
    }
    ctx->pc = 0x239D80u;
    {
        const bool branch_taken_0x239d80 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239d80) {
            ctx->pc = 0x239DF8u;
            goto label_239df8;
        }
    }
    ctx->pc = 0x239D88u;
label_239d88:
    // 0x239d88: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239d8c:
    // 0x239d8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239d90:
    // 0x239d90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239d94:
    // 0x239d94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239d98:
    // 0x239d98: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_239d9c:
    if (ctx->pc == 0x239D9Cu) {
        ctx->pc = 0x239DA0u;
        goto label_239da0;
    }
    ctx->pc = 0x239D98u;
    {
        const bool branch_taken_0x239d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d98) {
            ctx->pc = 0x239DE8u;
            goto label_239de8;
        }
    }
    ctx->pc = 0x239DA0u;
label_239da0:
    // 0x239da0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239da4:
    // 0x239da4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239da8:
    // 0x239da8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239dac:
    // 0x239dac: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239db0:
    // 0x239db0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239db4:
    if (ctx->pc == 0x239DB4u) {
        ctx->pc = 0x239DB4u;
            // 0x239db4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239DB8u;
        goto label_239db8;
    }
    ctx->pc = 0x239DB0u;
    {
        const bool branch_taken_0x239db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DB0u;
            // 0x239db4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239db0) {
            ctx->pc = 0x239DE8u;
            goto label_239de8;
        }
    }
    ctx->pc = 0x239DB8u;
label_239db8:
    // 0x239db8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239dbc:
    // 0x239dbc: 0x0  nop
    ctx->pc = 0x239dbcu;
    // NOP
label_239dc0:
    // 0x239dc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239dc4:
    // 0x239dc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239dc8:
    // 0x239dc8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239dcc:
    // 0x239dcc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239dd0:
    // 0x239dd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239dd4:
    // 0x239dd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239dd8:
    // 0x239dd8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239dd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239ddc:
    // 0x239ddc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239de0:
    if (ctx->pc == 0x239DE0u) {
        ctx->pc = 0x239DE0u;
            // 0x239de0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239DE4u;
        goto label_239de4;
    }
    ctx->pc = 0x239DDCu;
    {
        const bool branch_taken_0x239ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DDCu;
            // 0x239de0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ddc) {
            ctx->pc = 0x239DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239dc0;
        }
    }
    ctx->pc = 0x239DE4u;
label_239de4:
    // 0x239de4: 0x0  nop
    ctx->pc = 0x239de4u;
    // NOP
label_239de8:
    // 0x239de8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_239dec:
    // 0x239dec: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239df0:
    if (ctx->pc == 0x239DF0u) {
        ctx->pc = 0x239DF0u;
            // 0x239df0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239DF4u;
        goto label_239df4;
    }
    ctx->pc = 0x239DECu;
    {
        const bool branch_taken_0x239dec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DECu;
            // 0x239df0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dec) {
            ctx->pc = 0x239D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239d8c;
        }
    }
    ctx->pc = 0x239DF4u;
label_239df4:
    // 0x239df4: 0x0  nop
    ctx->pc = 0x239df4u;
    // NOP
label_239df8:
    // 0x239df8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239dfc:
    // 0x239dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239e00:
    // 0x239e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239e04:
    // 0x239e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239e08:
    // 0x239e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239e0c:
    // 0x239e0c: 0x3e00008  jr          $ra
label_239e10:
    if (ctx->pc == 0x239E10u) {
        ctx->pc = 0x239E10u;
            // 0x239e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239E14u;
        goto label_239e14;
    }
    ctx->pc = 0x239E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E0Cu;
            // 0x239e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239E14u;
label_239e14:
    // 0x239e14: 0x0  nop
    ctx->pc = 0x239e14u;
    // NOP
label_239e18:
    // 0x239e18: 0x0  nop
    ctx->pc = 0x239e18u;
    // NOP
label_239e1c:
    // 0x239e1c: 0x0  nop
    ctx->pc = 0x239e1cu;
    // NOP
}
