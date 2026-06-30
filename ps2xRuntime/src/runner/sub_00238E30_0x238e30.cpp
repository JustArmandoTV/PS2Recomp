#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238E30
// Address: 0x238e30 - 0x238f40
void sub_00238E30_0x238e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238E30_0x238e30");
#endif

    switch (ctx->pc) {
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        default: break;
    }

    ctx->pc = 0x238e30u;

label_238e30:
    // 0x238e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238e34:
    // 0x238e34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238e38:
    // 0x238e38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_238e3c:
    // 0x238e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_238e40:
    // 0x238e40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238e44:
    // 0x238e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_238e48:
    // 0x238e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238e4c:
    // 0x238e4c: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x238e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_238e50:
    // 0x238e50: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238e54:
    // 0x238e54: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_238e58:
    if (ctx->pc == 0x238E58u) {
        ctx->pc = 0x238E58u;
            // 0x238e58: 0x249000f8  addiu       $s0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->pc = 0x238E5Cu;
        goto label_238e5c;
    }
    ctx->pc = 0x238E54u;
    {
        const bool branch_taken_0x238e54 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x238E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E54u;
            // 0x238e58: 0x249000f8  addiu       $s0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e54) {
            ctx->pc = 0x238E98u;
            goto label_238e98;
        }
    }
    ctx->pc = 0x238E5Cu;
label_238e5c:
    // 0x238e5c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_238e60:
    // 0x238e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238e64:
    // 0x238e64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x238e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_238e68:
    // 0x238e68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238e6c:
    // 0x238e6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_238e70:
    if (ctx->pc == 0x238E70u) {
        ctx->pc = 0x238E74u;
        goto label_238e74;
    }
    ctx->pc = 0x238E6Cu;
    {
        const bool branch_taken_0x238e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238e6c) {
            ctx->pc = 0x238E88u;
            goto label_238e88;
        }
    }
    ctx->pc = 0x238E74u;
label_238e74:
    // 0x238e74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_238e78:
    // 0x238e78: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_238e7c:
    // 0x238e7c: 0x320f809  jalr        $t9
label_238e80:
    if (ctx->pc == 0x238E80u) {
        ctx->pc = 0x238E80u;
            // 0x238e80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238E84u;
        goto label_238e84;
    }
    ctx->pc = 0x238E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238E84u);
        ctx->pc = 0x238E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E7Cu;
            // 0x238e80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238E84u; }
            if (ctx->pc != 0x238E84u) { return; }
        }
        }
    }
    ctx->pc = 0x238E84u;
label_238e84:
    // 0x238e84: 0x0  nop
    ctx->pc = 0x238e84u;
    // NOP
label_238e88:
    // 0x238e88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x238e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_238e8c:
    // 0x238e8c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_238e90:
    if (ctx->pc == 0x238E90u) {
        ctx->pc = 0x238E90u;
            // 0x238e90: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x238E94u;
        goto label_238e94;
    }
    ctx->pc = 0x238E8Cu;
    {
        const bool branch_taken_0x238e8c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x238E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E8Cu;
            // 0x238e90: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e8c) {
            ctx->pc = 0x238E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238e60;
        }
    }
    ctx->pc = 0x238E94u;
label_238e94:
    // 0x238e94: 0x0  nop
    ctx->pc = 0x238e94u;
    // NOP
label_238e98:
    // 0x238e98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238e9c:
    // 0x238e9c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x238e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238ea0:
    // 0x238ea0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_238ea4:
    if (ctx->pc == 0x238EA4u) {
        ctx->pc = 0x238EA8u;
        goto label_238ea8;
    }
    ctx->pc = 0x238EA0u;
    {
        const bool branch_taken_0x238ea0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x238ea0) {
            ctx->pc = 0x238F18u;
            goto label_238f18;
        }
    }
    ctx->pc = 0x238EA8u;
label_238ea8:
    // 0x238ea8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x238ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_238eac:
    // 0x238eac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238eb0:
    // 0x238eb0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_238eb4:
    // 0x238eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x238eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238eb8:
    // 0x238eb8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_238ebc:
    if (ctx->pc == 0x238EBCu) {
        ctx->pc = 0x238EC0u;
        goto label_238ec0;
    }
    ctx->pc = 0x238EB8u;
    {
        const bool branch_taken_0x238eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238eb8) {
            ctx->pc = 0x238F08u;
            goto label_238f08;
        }
    }
    ctx->pc = 0x238EC0u;
label_238ec0:
    // 0x238ec0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238ec4:
    // 0x238ec4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x238ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_238ec8:
    // 0x238ec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238ecc:
    // 0x238ecc: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x238eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_238ed0:
    // 0x238ed0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_238ed4:
    if (ctx->pc == 0x238ED4u) {
        ctx->pc = 0x238ED4u;
            // 0x238ed4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x238ED8u;
        goto label_238ed8;
    }
    ctx->pc = 0x238ED0u;
    {
        const bool branch_taken_0x238ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x238ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238ED0u;
            // 0x238ed4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ed0) {
            ctx->pc = 0x238F08u;
            goto label_238f08;
        }
    }
    ctx->pc = 0x238ED8u;
label_238ed8:
    // 0x238ed8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x238ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_238edc:
    // 0x238edc: 0x0  nop
    ctx->pc = 0x238edcu;
    // NOP
label_238ee0:
    // 0x238ee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238ee4:
    // 0x238ee4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x238ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_238ee8:
    // 0x238ee8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_238eec:
    // 0x238eec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_238ef0:
    // 0x238ef0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x238ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_238ef4:
    // 0x238ef4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238ef8:
    // 0x238ef8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x238ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_238efc:
    // 0x238efc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_238f00:
    if (ctx->pc == 0x238F00u) {
        ctx->pc = 0x238F00u;
            // 0x238f00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x238F04u;
        goto label_238f04;
    }
    ctx->pc = 0x238EFCu;
    {
        const bool branch_taken_0x238efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238EFCu;
            // 0x238f00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238efc) {
            ctx->pc = 0x238EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238ee0;
        }
    }
    ctx->pc = 0x238F04u;
label_238f04:
    // 0x238f04: 0x0  nop
    ctx->pc = 0x238f04u;
    // NOP
label_238f08:
    // 0x238f08: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x238f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_238f0c:
    // 0x238f0c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_238f10:
    if (ctx->pc == 0x238F10u) {
        ctx->pc = 0x238F10u;
            // 0x238f10: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x238F14u;
        goto label_238f14;
    }
    ctx->pc = 0x238F0Cu;
    {
        const bool branch_taken_0x238f0c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x238F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F0Cu;
            // 0x238f10: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f0c) {
            ctx->pc = 0x238EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238eac;
        }
    }
    ctx->pc = 0x238F14u;
label_238f14:
    // 0x238f14: 0x0  nop
    ctx->pc = 0x238f14u;
    // NOP
label_238f18:
    // 0x238f18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_238f1c:
    // 0x238f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238f20:
    // 0x238f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238f24:
    // 0x238f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238f28:
    // 0x238f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238f2c:
    // 0x238f2c: 0x3e00008  jr          $ra
label_238f30:
    if (ctx->pc == 0x238F30u) {
        ctx->pc = 0x238F30u;
            // 0x238f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x238F34u;
        goto label_238f34;
    }
    ctx->pc = 0x238F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F2Cu;
            // 0x238f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238F34u;
label_238f34:
    // 0x238f34: 0x0  nop
    ctx->pc = 0x238f34u;
    // NOP
label_238f38:
    // 0x238f38: 0x0  nop
    ctx->pc = 0x238f38u;
    // NOP
label_238f3c:
    // 0x238f3c: 0x0  nop
    ctx->pc = 0x238f3cu;
    // NOP
}
