#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AD50
// Address: 0x22ad50 - 0x22ae60
void sub_0022AD50_0x22ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD50_0x22ad50");
#endif

    switch (ctx->pc) {
        case 0x22ad50u: goto label_22ad50;
        case 0x22ad54u: goto label_22ad54;
        case 0x22ad58u: goto label_22ad58;
        case 0x22ad5cu: goto label_22ad5c;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad64u: goto label_22ad64;
        case 0x22ad68u: goto label_22ad68;
        case 0x22ad6cu: goto label_22ad6c;
        case 0x22ad70u: goto label_22ad70;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad78u: goto label_22ad78;
        case 0x22ad7cu: goto label_22ad7c;
        case 0x22ad80u: goto label_22ad80;
        case 0x22ad84u: goto label_22ad84;
        case 0x22ad88u: goto label_22ad88;
        case 0x22ad8cu: goto label_22ad8c;
        case 0x22ad90u: goto label_22ad90;
        case 0x22ad94u: goto label_22ad94;
        case 0x22ad98u: goto label_22ad98;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22ada0u: goto label_22ada0;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ada8u: goto label_22ada8;
        case 0x22adacu: goto label_22adac;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adb4u: goto label_22adb4;
        case 0x22adb8u: goto label_22adb8;
        case 0x22adbcu: goto label_22adbc;
        case 0x22adc0u: goto label_22adc0;
        case 0x22adc4u: goto label_22adc4;
        case 0x22adc8u: goto label_22adc8;
        case 0x22adccu: goto label_22adcc;
        case 0x22add0u: goto label_22add0;
        case 0x22add4u: goto label_22add4;
        case 0x22add8u: goto label_22add8;
        case 0x22addcu: goto label_22addc;
        case 0x22ade0u: goto label_22ade0;
        case 0x22ade4u: goto label_22ade4;
        case 0x22ade8u: goto label_22ade8;
        case 0x22adecu: goto label_22adec;
        case 0x22adf0u: goto label_22adf0;
        case 0x22adf4u: goto label_22adf4;
        case 0x22adf8u: goto label_22adf8;
        case 0x22adfcu: goto label_22adfc;
        case 0x22ae00u: goto label_22ae00;
        case 0x22ae04u: goto label_22ae04;
        case 0x22ae08u: goto label_22ae08;
        case 0x22ae0cu: goto label_22ae0c;
        case 0x22ae10u: goto label_22ae10;
        case 0x22ae14u: goto label_22ae14;
        case 0x22ae18u: goto label_22ae18;
        case 0x22ae1cu: goto label_22ae1c;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae24u: goto label_22ae24;
        case 0x22ae28u: goto label_22ae28;
        case 0x22ae2cu: goto label_22ae2c;
        case 0x22ae30u: goto label_22ae30;
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae38u: goto label_22ae38;
        case 0x22ae3cu: goto label_22ae3c;
        case 0x22ae40u: goto label_22ae40;
        case 0x22ae44u: goto label_22ae44;
        case 0x22ae48u: goto label_22ae48;
        case 0x22ae4cu: goto label_22ae4c;
        case 0x22ae50u: goto label_22ae50;
        case 0x22ae54u: goto label_22ae54;
        case 0x22ae58u: goto label_22ae58;
        case 0x22ae5cu: goto label_22ae5c;
        default: break;
    }

    ctx->pc = 0x22ad50u;

label_22ad50:
    // 0x22ad50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22ad54:
    // 0x22ad54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22ad58:
    // 0x22ad58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ad5c:
    // 0x22ad5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ad60:
    // 0x22ad60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ad64:
    // 0x22ad64: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22ad68:
    // 0x22ad68: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ad6c:
    // 0x22ad6c: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_22ad70:
    if (ctx->pc == 0x22AD70u) {
        ctx->pc = 0x22AD70u;
            // 0x22ad70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AD74u;
        goto label_22ad74;
    }
    ctx->pc = 0x22AD6Cu;
    {
        const bool branch_taken_0x22ad6c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD6Cu;
            // 0x22ad70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad6c) {
            ctx->pc = 0x22ADB0u;
            goto label_22adb0;
        }
    }
    ctx->pc = 0x22AD74u;
label_22ad74:
    // 0x22ad74: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x22ad74u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22ad78:
    // 0x22ad78: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22ad7c:
    // 0x22ad7c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ad80:
    // 0x22ad80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ad84:
    // 0x22ad84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22ad88:
    if (ctx->pc == 0x22AD88u) {
        ctx->pc = 0x22AD8Cu;
        goto label_22ad8c;
    }
    ctx->pc = 0x22AD84u;
    {
        const bool branch_taken_0x22ad84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad84) {
            ctx->pc = 0x22ADA0u;
            goto label_22ada0;
        }
    }
    ctx->pc = 0x22AD8Cu;
label_22ad8c:
    // 0x22ad8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ad8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ad90:
    // 0x22ad90: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22ad94:
    // 0x22ad94: 0x320f809  jalr        $t9
label_22ad98:
    if (ctx->pc == 0x22AD98u) {
        ctx->pc = 0x22AD98u;
            // 0x22ad98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AD9Cu;
        goto label_22ad9c;
    }
    ctx->pc = 0x22AD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22AD9Cu);
        ctx->pc = 0x22AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD94u;
            // 0x22ad98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22AD9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22AD9Cu; }
            if (ctx->pc != 0x22AD9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22AD9Cu;
label_22ad9c:
    // 0x22ad9c: 0x0  nop
    ctx->pc = 0x22ad9cu;
    // NOP
label_22ada0:
    // 0x22ada0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22ada4:
    // 0x22ada4: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_22ada8:
    if (ctx->pc == 0x22ADA8u) {
        ctx->pc = 0x22ADA8u;
            // 0x22ada8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x22ADACu;
        goto label_22adac;
    }
    ctx->pc = 0x22ADA4u;
    {
        const bool branch_taken_0x22ada4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ADA4u;
            // 0x22ada8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ada4) {
            ctx->pc = 0x22AD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ad78;
        }
    }
    ctx->pc = 0x22ADACu;
label_22adac:
    // 0x22adac: 0x0  nop
    ctx->pc = 0x22adacu;
    // NOP
label_22adb0:
    // 0x22adb0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22adb4:
    // 0x22adb4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x22adb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22adb8:
    // 0x22adb8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_22adbc:
    if (ctx->pc == 0x22ADBCu) {
        ctx->pc = 0x22ADC0u;
        goto label_22adc0;
    }
    ctx->pc = 0x22ADB8u;
    {
        const bool branch_taken_0x22adb8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x22adb8) {
            ctx->pc = 0x22AE30u;
            goto label_22ae30;
        }
    }
    ctx->pc = 0x22ADC0u;
label_22adc0:
    // 0x22adc0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22adc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22adc4:
    // 0x22adc4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22adc8:
    // 0x22adc8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22adcc:
    // 0x22adcc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22add0:
    // 0x22add0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_22add4:
    if (ctx->pc == 0x22ADD4u) {
        ctx->pc = 0x22ADD8u;
        goto label_22add8;
    }
    ctx->pc = 0x22ADD0u;
    {
        const bool branch_taken_0x22add0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22add0) {
            ctx->pc = 0x22AE20u;
            goto label_22ae20;
        }
    }
    ctx->pc = 0x22ADD8u;
label_22add8:
    // 0x22add8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22addc:
    // 0x22addc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x22addcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22ade0:
    // 0x22ade0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ade4:
    // 0x22ade4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x22ade4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22ade8:
    // 0x22ade8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_22adec:
    if (ctx->pc == 0x22ADECu) {
        ctx->pc = 0x22ADECu;
            // 0x22adec: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x22ADF0u;
        goto label_22adf0;
    }
    ctx->pc = 0x22ADE8u;
    {
        const bool branch_taken_0x22ade8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ADE8u;
            // 0x22adec: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ade8) {
            ctx->pc = 0x22AE20u;
            goto label_22ae20;
        }
    }
    ctx->pc = 0x22ADF0u;
label_22adf0:
    // 0x22adf0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22adf4:
    // 0x22adf4: 0x0  nop
    ctx->pc = 0x22adf4u;
    // NOP
label_22adf8:
    // 0x22adf8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22adfc:
    // 0x22adfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22adfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22ae00:
    // 0x22ae00: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x22ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22ae04:
    // 0x22ae04: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22ae08:
    // 0x22ae08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22ae0c:
    // 0x22ae0c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22ae10:
    // 0x22ae10: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22ae10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22ae14:
    // 0x22ae14: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22ae18:
    if (ctx->pc == 0x22AE18u) {
        ctx->pc = 0x22AE18u;
            // 0x22ae18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22AE1Cu;
        goto label_22ae1c;
    }
    ctx->pc = 0x22AE14u;
    {
        const bool branch_taken_0x22ae14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE14u;
            // 0x22ae18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae14) {
            ctx->pc = 0x22ADF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22adf8;
        }
    }
    ctx->pc = 0x22AE1Cu;
label_22ae1c:
    // 0x22ae1c: 0x0  nop
    ctx->pc = 0x22ae1cu;
    // NOP
label_22ae20:
    // 0x22ae20: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22ae20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22ae24:
    // 0x22ae24: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_22ae28:
    if (ctx->pc == 0x22AE28u) {
        ctx->pc = 0x22AE28u;
            // 0x22ae28: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x22AE2Cu;
        goto label_22ae2c;
    }
    ctx->pc = 0x22AE24u;
    {
        const bool branch_taken_0x22ae24 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x22AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE24u;
            // 0x22ae28: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae24) {
            ctx->pc = 0x22ADC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22adc4;
        }
    }
    ctx->pc = 0x22AE2Cu;
label_22ae2c:
    // 0x22ae2c: 0x0  nop
    ctx->pc = 0x22ae2cu;
    // NOP
label_22ae30:
    // 0x22ae30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ae34:
    // 0x22ae34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ae34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ae38:
    // 0x22ae38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ae38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ae3c:
    // 0x22ae3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ae3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ae40:
    // 0x22ae40: 0x3e00008  jr          $ra
label_22ae44:
    if (ctx->pc == 0x22AE44u) {
        ctx->pc = 0x22AE44u;
            // 0x22ae44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22AE48u;
        goto label_22ae48;
    }
    ctx->pc = 0x22AE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE40u;
            // 0x22ae44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AE48u;
label_22ae48:
    // 0x22ae48: 0x0  nop
    ctx->pc = 0x22ae48u;
    // NOP
label_22ae4c:
    // 0x22ae4c: 0x0  nop
    ctx->pc = 0x22ae4cu;
    // NOP
label_22ae50:
    // 0x22ae50: 0x3e00008  jr          $ra
label_22ae54:
    if (ctx->pc == 0x22AE54u) {
        ctx->pc = 0x22AE58u;
        goto label_22ae58;
    }
    ctx->pc = 0x22AE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AE58u;
label_22ae58:
    // 0x22ae58: 0x0  nop
    ctx->pc = 0x22ae58u;
    // NOP
label_22ae5c:
    // 0x22ae5c: 0x0  nop
    ctx->pc = 0x22ae5cu;
    // NOP
}
