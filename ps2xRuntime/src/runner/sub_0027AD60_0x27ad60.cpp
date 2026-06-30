#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027AD60
// Address: 0x27ad60 - 0x27af90
void sub_0027AD60_0x27ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AD60_0x27ad60");
#endif

    switch (ctx->pc) {
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad64u: goto label_27ad64;
        case 0x27ad68u: goto label_27ad68;
        case 0x27ad6cu: goto label_27ad6c;
        case 0x27ad70u: goto label_27ad70;
        case 0x27ad74u: goto label_27ad74;
        case 0x27ad78u: goto label_27ad78;
        case 0x27ad7cu: goto label_27ad7c;
        case 0x27ad80u: goto label_27ad80;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad88u: goto label_27ad88;
        case 0x27ad8cu: goto label_27ad8c;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad94u: goto label_27ad94;
        case 0x27ad98u: goto label_27ad98;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada0u: goto label_27ada0;
        case 0x27ada4u: goto label_27ada4;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adacu: goto label_27adac;
        case 0x27adb0u: goto label_27adb0;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adb8u: goto label_27adb8;
        case 0x27adbcu: goto label_27adbc;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adc4u: goto label_27adc4;
        case 0x27adc8u: goto label_27adc8;
        case 0x27adccu: goto label_27adcc;
        case 0x27add0u: goto label_27add0;
        case 0x27add4u: goto label_27add4;
        case 0x27add8u: goto label_27add8;
        case 0x27addcu: goto label_27addc;
        case 0x27ade0u: goto label_27ade0;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ade8u: goto label_27ade8;
        case 0x27adecu: goto label_27adec;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adf4u: goto label_27adf4;
        case 0x27adf8u: goto label_27adf8;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae04u: goto label_27ae04;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae0cu: goto label_27ae0c;
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        default: break;
    }

    ctx->pc = 0x27ad60u;

label_27ad60:
    // 0x27ad60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27ad64:
    // 0x27ad64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_27ad68:
    // 0x27ad68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27ad6c:
    // 0x27ad6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27ad70:
    // 0x27ad70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27ad70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27ad74:
    // 0x27ad74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27ad78:
    // 0x27ad78: 0xc08d654  jal         func_235950
label_27ad7c:
    if (ctx->pc == 0x27AD7Cu) {
        ctx->pc = 0x27AD7Cu;
            // 0x27ad7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27AD80u;
        goto label_27ad80;
    }
    ctx->pc = 0x27AD78u;
    SET_GPR_U32(ctx, 31, 0x27AD80u);
    ctx->pc = 0x27AD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD78u;
            // 0x27ad7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235950u;
    if (runtime->hasFunction(0x235950u)) {
        auto targetFn = runtime->lookupFunction(0x235950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD80u; }
        if (ctx->pc != 0x27AD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235950_0x235950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD80u; }
        if (ctx->pc != 0x27AD80u) { return; }
    }
    ctx->pc = 0x27AD80u;
label_27ad80:
    // 0x27ad80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27ad84:
    // 0x27ad84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27ad88:
    // 0x27ad88: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x27ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_27ad8c:
    // 0x27ad8c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27ad90:
    // 0x27ad90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27ad94:
    // 0x27ad94: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x27ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27ad98:
    // 0x27ad98: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x27ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_27ad9c:
    // 0x27ad9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ada0:
    // 0x27ada0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x27ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_27ada4:
    // 0x27ada4: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x27ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_27ada8:
    // 0x27ada8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x27ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_27adac:
    // 0x27adac: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27adb0:
    // 0x27adb0: 0xc0a7a88  jal         func_29EA20
label_27adb4:
    if (ctx->pc == 0x27ADB4u) {
        ctx->pc = 0x27ADB4u;
            // 0x27adb4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x27ADB8u;
        goto label_27adb8;
    }
    ctx->pc = 0x27ADB0u;
    SET_GPR_U32(ctx, 31, 0x27ADB8u);
    ctx->pc = 0x27ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADB0u;
            // 0x27adb4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    }
    ctx->pc = 0x27ADB8u;
label_27adb8:
    // 0x27adb8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x27adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27adbc:
    // 0x27adbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27adbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27adc0:
    // 0x27adc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27adc4:
    if (ctx->pc == 0x27ADC4u) {
        ctx->pc = 0x27ADC4u;
            // 0x27adc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x27ADC8u;
        goto label_27adc8;
    }
    ctx->pc = 0x27ADC0u;
    {
        const bool branch_taken_0x27adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADC0u;
            // 0x27adc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adc0) {
            ctx->pc = 0x27ADD0u;
            goto label_27add0;
        }
    }
    ctx->pc = 0x27ADC8u;
label_27adc8:
    // 0x27adc8: 0xc0a0564  jal         func_281590
label_27adcc:
    if (ctx->pc == 0x27ADCCu) {
        ctx->pc = 0x27ADCCu;
            // 0x27adcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27ADD0u;
        goto label_27add0;
    }
    ctx->pc = 0x27ADC8u;
    SET_GPR_U32(ctx, 31, 0x27ADD0u);
    ctx->pc = 0x27ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADC8u;
            // 0x27adcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281590u;
    if (runtime->hasFunction(0x281590u)) {
        auto targetFn = runtime->lookupFunction(0x281590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD0u; }
        if (ctx->pc != 0x27ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281590_0x281590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD0u; }
        if (ctx->pc != 0x27ADD0u) { return; }
    }
    ctx->pc = 0x27ADD0u;
label_27add0:
    // 0x27add0: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x27add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_27add4:
    // 0x27add4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x27add4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_27add8:
    // 0x27add8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x27add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_27addc:
    // 0x27addc: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x27addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_27ade0:
    // 0x27ade0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27ade4:
    // 0x27ade4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27ade8:
    // 0x27ade8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x27ade8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27adec:
    // 0x27adec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_27adf0:
    if (ctx->pc == 0x27ADF0u) {
        ctx->pc = 0x27ADF4u;
        goto label_27adf4;
    }
    ctx->pc = 0x27ADECu;
    {
        const bool branch_taken_0x27adec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27adec) {
            ctx->pc = 0x27AE10u;
            goto label_27ae10;
        }
    }
    ctx->pc = 0x27ADF4u;
label_27adf4:
    // 0x27adf4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x27adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_27adf8:
    // 0x27adf8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x27adf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27adfc:
    // 0x27adfc: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x27adfcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_27ae00:
    // 0x27ae00: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x27ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_27ae04:
    // 0x27ae04: 0xc0a725c  jal         func_29C970
label_27ae08:
    if (ctx->pc == 0x27AE08u) {
        ctx->pc = 0x27AE08u;
            // 0x27ae08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x27AE0Cu;
        goto label_27ae0c;
    }
    ctx->pc = 0x27AE04u;
    SET_GPR_U32(ctx, 31, 0x27AE0Cu);
    ctx->pc = 0x27AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE04u;
            // 0x27ae08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE0Cu; }
        if (ctx->pc != 0x27AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE0Cu; }
        if (ctx->pc != 0x27AE0Cu) { return; }
    }
    ctx->pc = 0x27AE0Cu;
label_27ae0c:
    // 0x27ae0c: 0x0  nop
    ctx->pc = 0x27ae0cu;
    // NOP
label_27ae10:
    // 0x27ae10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ae10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ae14:
    // 0x27ae14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27ae18:
    // 0x27ae18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ae18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ae1c:
    // 0x27ae1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ae1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ae20:
    // 0x27ae20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ae20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27ae24:
    // 0x27ae24: 0x3e00008  jr          $ra
label_27ae28:
    if (ctx->pc == 0x27AE28u) {
        ctx->pc = 0x27AE28u;
            // 0x27ae28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x27AE2Cu;
        goto label_27ae2c;
    }
    ctx->pc = 0x27AE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE24u;
            // 0x27ae28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AE2Cu;
label_27ae2c:
    // 0x27ae2c: 0x0  nop
    ctx->pc = 0x27ae2cu;
    // NOP
label_27ae30:
    // 0x27ae30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27ae34:
    // 0x27ae34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27ae38:
    // 0x27ae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27ae3c:
    // 0x27ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27ae40:
    // 0x27ae40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ae40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ae44:
    // 0x27ae44: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_27ae48:
    if (ctx->pc == 0x27AE48u) {
        ctx->pc = 0x27AE48u;
            // 0x27ae48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27AE4Cu;
        goto label_27ae4c;
    }
    ctx->pc = 0x27AE44u;
    {
        const bool branch_taken_0x27ae44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE44u;
            // 0x27ae48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae44) {
            ctx->pc = 0x27AEF0u;
            goto label_27aef0;
        }
    }
    ctx->pc = 0x27AE4Cu;
label_27ae4c:
    // 0x27ae4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27ae50:
    // 0x27ae50: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x27ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_27ae54:
    // 0x27ae54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_27ae58:
    // 0x27ae58: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_27ae5c:
    // 0x27ae5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_27ae60:
    if (ctx->pc == 0x27AE60u) {
        ctx->pc = 0x27AE64u;
        goto label_27ae64;
    }
    ctx->pc = 0x27AE5Cu;
    {
        const bool branch_taken_0x27ae5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae5c) {
            ctx->pc = 0x27AE78u;
            goto label_27ae78;
        }
    }
    ctx->pc = 0x27AE64u;
label_27ae64:
    // 0x27ae64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ae64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ae68:
    // 0x27ae68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27ae6c:
    // 0x27ae6c: 0x320f809  jalr        $t9
label_27ae70:
    if (ctx->pc == 0x27AE70u) {
        ctx->pc = 0x27AE70u;
            // 0x27ae70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27AE74u;
        goto label_27ae74;
    }
    ctx->pc = 0x27AE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AE74u);
        ctx->pc = 0x27AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE6Cu;
            // 0x27ae70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27AE74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27AE74u; }
            if (ctx->pc != 0x27AE74u) { return; }
        }
        }
    }
    ctx->pc = 0x27AE74u;
label_27ae74:
    // 0x27ae74: 0x0  nop
    ctx->pc = 0x27ae74u;
    // NOP
label_27ae78:
    // 0x27ae78: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x27ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_27ae7c:
    // 0x27ae7c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_27ae80:
    if (ctx->pc == 0x27AE80u) {
        ctx->pc = 0x27AE84u;
        goto label_27ae84;
    }
    ctx->pc = 0x27AE7Cu;
    {
        const bool branch_taken_0x27ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae7c) {
            ctx->pc = 0x27AEC0u;
            goto label_27aec0;
        }
    }
    ctx->pc = 0x27AE84u;
label_27ae84:
    // 0x27ae84: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x27ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_27ae88:
    // 0x27ae88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27ae8c:
    // 0x27ae8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27ae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27ae90:
    // 0x27ae90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27ae94:
    if (ctx->pc == 0x27AE94u) {
        ctx->pc = 0x27AE98u;
        goto label_27ae98;
    }
    ctx->pc = 0x27AE90u;
    {
        const bool branch_taken_0x27ae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ae90) {
            ctx->pc = 0x27AEC0u;
            goto label_27aec0;
        }
    }
    ctx->pc = 0x27AE98u;
label_27ae98:
    // 0x27ae98: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x27ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_27ae9c:
    // 0x27ae9c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27aea0:
    // 0x27aea0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27aea4:
    // 0x27aea4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27aea8:
    // 0x27aea8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x27aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_27aeac:
    // 0x27aeac: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27aeb0:
    // 0x27aeb0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27aeb4:
    // 0x27aeb4: 0xc0a7ab4  jal         func_29EAD0
label_27aeb8:
    if (ctx->pc == 0x27AEB8u) {
        ctx->pc = 0x27AEB8u;
            // 0x27aeb8: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x27AEBCu;
        goto label_27aebc;
    }
    ctx->pc = 0x27AEB4u;
    SET_GPR_U32(ctx, 31, 0x27AEBCu);
    ctx->pc = 0x27AEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEB4u;
            // 0x27aeb8: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEBCu; }
        if (ctx->pc != 0x27AEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEBCu; }
        if (ctx->pc != 0x27AEBCu) { return; }
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0x0  nop
    ctx->pc = 0x27aebcu;
    // NOP
label_27aec0:
    // 0x27aec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27aec4:
    // 0x27aec4: 0xc08d66c  jal         func_2359B0
label_27aec8:
    if (ctx->pc == 0x27AEC8u) {
        ctx->pc = 0x27AEC8u;
            // 0x27aec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27AECCu;
        goto label_27aecc;
    }
    ctx->pc = 0x27AEC4u;
    SET_GPR_U32(ctx, 31, 0x27AECCu);
    ctx->pc = 0x27AEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEC4u;
            // 0x27aec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2359B0u;
    if (runtime->hasFunction(0x2359B0u)) {
        auto targetFn = runtime->lookupFunction(0x2359B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AECCu; }
        if (ctx->pc != 0x27AECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002359B0_0x2359b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AECCu; }
        if (ctx->pc != 0x27AECCu) { return; }
    }
    ctx->pc = 0x27AECCu;
label_27aecc:
    // 0x27aecc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x27aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_27aed0:
    // 0x27aed0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27aed0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_27aed4:
    // 0x27aed4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_27aed8:
    if (ctx->pc == 0x27AED8u) {
        ctx->pc = 0x27AED8u;
            // 0x27aed8: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27AEDCu;
        goto label_27aedc;
    }
    ctx->pc = 0x27AED4u;
    {
        const bool branch_taken_0x27aed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AED4u;
            // 0x27aed8: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aed4) {
            ctx->pc = 0x27AEF0u;
            goto label_27aef0;
        }
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x27aedcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_27aee0:
    // 0x27aee0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27aee4:
    // 0x27aee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27aee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27aee8:
    // 0x27aee8: 0xc0a7ab4  jal         func_29EAD0
label_27aeec:
    if (ctx->pc == 0x27AEECu) {
        ctx->pc = 0x27AEECu;
            // 0x27aeec: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x27AEF0u;
        goto label_27aef0;
    }
    ctx->pc = 0x27AEE8u;
    SET_GPR_U32(ctx, 31, 0x27AEF0u);
    ctx->pc = 0x27AEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEE8u;
            // 0x27aeec: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEF0u; }
        if (ctx->pc != 0x27AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEF0u; }
        if (ctx->pc != 0x27AEF0u) { return; }
    }
    ctx->pc = 0x27AEF0u;
label_27aef0:
    // 0x27aef0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27aef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27aef4:
    // 0x27aef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27aef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27aef8:
    // 0x27aef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27aef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27aefc:
    // 0x27aefc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27aefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27af00:
    // 0x27af00: 0x3e00008  jr          $ra
label_27af04:
    if (ctx->pc == 0x27AF04u) {
        ctx->pc = 0x27AF04u;
            // 0x27af04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x27AF08u;
        goto label_27af08;
    }
    ctx->pc = 0x27AF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF00u;
            // 0x27af04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AF08u;
label_27af08:
    // 0x27af08: 0x0  nop
    ctx->pc = 0x27af08u;
    // NOP
label_27af0c:
    // 0x27af0c: 0x0  nop
    ctx->pc = 0x27af0cu;
    // NOP
label_27af10:
    // 0x27af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27af14:
    // 0x27af14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27af18:
    // 0x27af18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27af1c:
    // 0x27af1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27af1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27af20:
    // 0x27af20: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_27af24:
    if (ctx->pc == 0x27AF24u) {
        ctx->pc = 0x27AF24u;
            // 0x27af24: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x27AF28u;
        goto label_27af28;
    }
    ctx->pc = 0x27AF20u;
    {
        const bool branch_taken_0x27af20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF20u;
            // 0x27af24: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af20) {
            ctx->pc = 0x27AF78u;
            goto label_27af78;
        }
    }
    ctx->pc = 0x27AF28u;
label_27af28:
    // 0x27af28: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
label_27af2c:
    // 0x27af2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_27af30:
    if (ctx->pc == 0x27AF30u) {
        ctx->pc = 0x27AF30u;
            // 0x27af30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x27AF34u;
        goto label_27af34;
    }
    ctx->pc = 0x27AF2Cu;
    {
        const bool branch_taken_0x27af2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF2Cu;
            // 0x27af30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af2c) {
            ctx->pc = 0x27AF50u;
            goto label_27af50;
        }
    }
    ctx->pc = 0x27AF34u;
label_27af34:
    // 0x27af34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27af38:
    // 0x27af38: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x27af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_27af3c:
    // 0x27af3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_27af40:
    if (ctx->pc == 0x27AF40u) {
        ctx->pc = 0x27AF40u;
            // 0x27af40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x27AF44u;
        goto label_27af44;
    }
    ctx->pc = 0x27AF3Cu;
    {
        const bool branch_taken_0x27af3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF3Cu;
            // 0x27af40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af3c) {
            ctx->pc = 0x27AF50u;
            goto label_27af50;
        }
    }
    ctx->pc = 0x27AF44u;
label_27af44:
    // 0x27af44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27af48:
    // 0x27af48: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_27af4c:
    // 0x27af4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27af50:
    // 0x27af50: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x27af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_27af54:
    // 0x27af54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27af54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_27af58:
    // 0x27af58: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_27af5c:
    if (ctx->pc == 0x27AF5Cu) {
        ctx->pc = 0x27AF5Cu;
            // 0x27af5c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27AF60u;
        goto label_27af60;
    }
    ctx->pc = 0x27AF58u;
    {
        const bool branch_taken_0x27af58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF58u;
            // 0x27af5c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af58) {
            ctx->pc = 0x27AF78u;
            goto label_27af78;
        }
    }
    ctx->pc = 0x27AF60u;
label_27af60:
    // 0x27af60: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x27af60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_27af64:
    // 0x27af64: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27af68:
    // 0x27af68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27af6c:
    // 0x27af6c: 0xc0a7ab4  jal         func_29EAD0
label_27af70:
    if (ctx->pc == 0x27AF70u) {
        ctx->pc = 0x27AF70u;
            // 0x27af70: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x27AF74u;
        goto label_27af74;
    }
    ctx->pc = 0x27AF6Cu;
    SET_GPR_U32(ctx, 31, 0x27AF74u);
    ctx->pc = 0x27AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF6Cu;
            // 0x27af70: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF74u; }
        if (ctx->pc != 0x27AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF74u; }
        if (ctx->pc != 0x27AF74u) { return; }
    }
    ctx->pc = 0x27AF74u;
label_27af74:
    // 0x27af74: 0x0  nop
    ctx->pc = 0x27af74u;
    // NOP
label_27af78:
    // 0x27af78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27af78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27af7c:
    // 0x27af7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27af7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27af80:
    // 0x27af80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27af80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27af84:
    // 0x27af84: 0x3e00008  jr          $ra
label_27af88:
    if (ctx->pc == 0x27AF88u) {
        ctx->pc = 0x27AF88u;
            // 0x27af88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x27AF8Cu;
        goto label_27af8c;
    }
    ctx->pc = 0x27AF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF84u;
            // 0x27af88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AF8Cu;
label_27af8c:
    // 0x27af8c: 0x0  nop
    ctx->pc = 0x27af8cu;
    // NOP
}
