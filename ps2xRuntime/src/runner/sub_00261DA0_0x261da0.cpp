#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261DA0
// Address: 0x261da0 - 0x261e50
void sub_00261DA0_0x261da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261DA0_0x261da0");
#endif

    switch (ctx->pc) {
        case 0x261da0u: goto label_261da0;
        case 0x261da4u: goto label_261da4;
        case 0x261da8u: goto label_261da8;
        case 0x261dacu: goto label_261dac;
        case 0x261db0u: goto label_261db0;
        case 0x261db4u: goto label_261db4;
        case 0x261db8u: goto label_261db8;
        case 0x261dbcu: goto label_261dbc;
        case 0x261dc0u: goto label_261dc0;
        case 0x261dc4u: goto label_261dc4;
        case 0x261dc8u: goto label_261dc8;
        case 0x261dccu: goto label_261dcc;
        case 0x261dd0u: goto label_261dd0;
        case 0x261dd4u: goto label_261dd4;
        case 0x261dd8u: goto label_261dd8;
        case 0x261ddcu: goto label_261ddc;
        case 0x261de0u: goto label_261de0;
        case 0x261de4u: goto label_261de4;
        case 0x261de8u: goto label_261de8;
        case 0x261decu: goto label_261dec;
        case 0x261df0u: goto label_261df0;
        case 0x261df4u: goto label_261df4;
        case 0x261df8u: goto label_261df8;
        case 0x261dfcu: goto label_261dfc;
        case 0x261e00u: goto label_261e00;
        case 0x261e04u: goto label_261e04;
        case 0x261e08u: goto label_261e08;
        case 0x261e0cu: goto label_261e0c;
        case 0x261e10u: goto label_261e10;
        case 0x261e14u: goto label_261e14;
        case 0x261e18u: goto label_261e18;
        case 0x261e1cu: goto label_261e1c;
        case 0x261e20u: goto label_261e20;
        case 0x261e24u: goto label_261e24;
        case 0x261e28u: goto label_261e28;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e30u: goto label_261e30;
        case 0x261e34u: goto label_261e34;
        case 0x261e38u: goto label_261e38;
        case 0x261e3cu: goto label_261e3c;
        case 0x261e40u: goto label_261e40;
        case 0x261e44u: goto label_261e44;
        case 0x261e48u: goto label_261e48;
        case 0x261e4cu: goto label_261e4c;
        default: break;
    }

    ctx->pc = 0x261da0u;

label_261da0:
    // 0x261da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x261da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_261da4:
    // 0x261da4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x261da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_261da8:
    // 0x261da8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x261da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_261dac:
    // 0x261dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x261dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_261db0:
    // 0x261db0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x261db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261db4:
    // 0x261db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x261db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_261db8:
    // 0x261db8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x261db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261dbc:
    // 0x261dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_261dc0:
    // 0x261dc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x261dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_261dc4:
    // 0x261dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_261dc8:
    // 0x261dc8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x261dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_261dcc:
    // 0x261dcc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x261dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_261dd0:
    // 0x261dd0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_261dd4:
    if (ctx->pc == 0x261DD4u) {
        ctx->pc = 0x261DD4u;
            // 0x261dd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261DD8u;
        goto label_261dd8;
    }
    ctx->pc = 0x261DD0u;
    {
        const bool branch_taken_0x261dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DD0u;
            // 0x261dd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dd0) {
            ctx->pc = 0x261E20u;
            goto label_261e20;
        }
    }
    ctx->pc = 0x261DD8u;
label_261dd8:
    // 0x261dd8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x261dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261ddc:
    // 0x261ddc: 0x0  nop
    ctx->pc = 0x261ddcu;
    // NOP
label_261de0:
    // 0x261de0: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x261de0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_261de4:
    // 0x261de4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x261de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_261de8:
    // 0x261de8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_261dec:
    if (ctx->pc == 0x261DECu) {
        ctx->pc = 0x261DF0u;
        goto label_261df0;
    }
    ctx->pc = 0x261DE8u;
    {
        const bool branch_taken_0x261de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x261de8) {
            ctx->pc = 0x261E08u;
            goto label_261e08;
        }
    }
    ctx->pc = 0x261DF0u;
label_261df0:
    // 0x261df0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x261df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_261df4:
    // 0x261df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261df8:
    // 0x261df8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x261df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_261dfc:
    // 0x261dfc: 0x320f809  jalr        $t9
label_261e00:
    if (ctx->pc == 0x261E00u) {
        ctx->pc = 0x261E00u;
            // 0x261e00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261E04u;
        goto label_261e04;
    }
    ctx->pc = 0x261DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261E04u);
        ctx->pc = 0x261E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DFCu;
            // 0x261e00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x261E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x261E04u; }
            if (ctx->pc != 0x261E04u) { return; }
        }
        }
    }
    ctx->pc = 0x261E04u;
label_261e04:
    // 0x261e04: 0x0  nop
    ctx->pc = 0x261e04u;
    // NOP
label_261e08:
    // 0x261e08: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x261e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_261e0c:
    // 0x261e0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x261e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_261e10:
    // 0x261e10: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x261e10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_261e14:
    // 0x261e14: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_261e18:
    if (ctx->pc == 0x261E18u) {
        ctx->pc = 0x261E18u;
            // 0x261e18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x261E1Cu;
        goto label_261e1c;
    }
    ctx->pc = 0x261E14u;
    {
        const bool branch_taken_0x261e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E14u;
            // 0x261e18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e14) {
            ctx->pc = 0x261DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261de0;
        }
    }
    ctx->pc = 0x261E1Cu;
label_261e1c:
    // 0x261e1c: 0x0  nop
    ctx->pc = 0x261e1cu;
    // NOP
label_261e20:
    // 0x261e20: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x261e20u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
label_261e24:
    // 0x261e24: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x261e24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_261e28:
    // 0x261e28: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x261e28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
label_261e2c:
    // 0x261e2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x261e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_261e30:
    // 0x261e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261e34:
    // 0x261e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_261e38:
    // 0x261e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x261e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261e3c:
    // 0x261e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261e40:
    // 0x261e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_261e44:
    // 0x261e44: 0x3e00008  jr          $ra
label_261e48:
    if (ctx->pc == 0x261E48u) {
        ctx->pc = 0x261E48u;
            // 0x261e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x261E4Cu;
        goto label_261e4c;
    }
    ctx->pc = 0x261E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E44u;
            // 0x261e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261E4Cu;
label_261e4c:
    // 0x261e4c: 0x0  nop
    ctx->pc = 0x261e4cu;
    // NOP
}
