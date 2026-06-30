#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037AD50
// Address: 0x37ad50 - 0x37afe0
void sub_0037AD50_0x37ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AD50_0x37ad50");
#endif

    switch (ctx->pc) {
        case 0x37ad50u: goto label_37ad50;
        case 0x37ad54u: goto label_37ad54;
        case 0x37ad58u: goto label_37ad58;
        case 0x37ad5cu: goto label_37ad5c;
        case 0x37ad60u: goto label_37ad60;
        case 0x37ad64u: goto label_37ad64;
        case 0x37ad68u: goto label_37ad68;
        case 0x37ad6cu: goto label_37ad6c;
        case 0x37ad70u: goto label_37ad70;
        case 0x37ad74u: goto label_37ad74;
        case 0x37ad78u: goto label_37ad78;
        case 0x37ad7cu: goto label_37ad7c;
        case 0x37ad80u: goto label_37ad80;
        case 0x37ad84u: goto label_37ad84;
        case 0x37ad88u: goto label_37ad88;
        case 0x37ad8cu: goto label_37ad8c;
        case 0x37ad90u: goto label_37ad90;
        case 0x37ad94u: goto label_37ad94;
        case 0x37ad98u: goto label_37ad98;
        case 0x37ad9cu: goto label_37ad9c;
        case 0x37ada0u: goto label_37ada0;
        case 0x37ada4u: goto label_37ada4;
        case 0x37ada8u: goto label_37ada8;
        case 0x37adacu: goto label_37adac;
        case 0x37adb0u: goto label_37adb0;
        case 0x37adb4u: goto label_37adb4;
        case 0x37adb8u: goto label_37adb8;
        case 0x37adbcu: goto label_37adbc;
        case 0x37adc0u: goto label_37adc0;
        case 0x37adc4u: goto label_37adc4;
        case 0x37adc8u: goto label_37adc8;
        case 0x37adccu: goto label_37adcc;
        case 0x37add0u: goto label_37add0;
        case 0x37add4u: goto label_37add4;
        case 0x37add8u: goto label_37add8;
        case 0x37addcu: goto label_37addc;
        case 0x37ade0u: goto label_37ade0;
        case 0x37ade4u: goto label_37ade4;
        case 0x37ade8u: goto label_37ade8;
        case 0x37adecu: goto label_37adec;
        case 0x37adf0u: goto label_37adf0;
        case 0x37adf4u: goto label_37adf4;
        case 0x37adf8u: goto label_37adf8;
        case 0x37adfcu: goto label_37adfc;
        case 0x37ae00u: goto label_37ae00;
        case 0x37ae04u: goto label_37ae04;
        case 0x37ae08u: goto label_37ae08;
        case 0x37ae0cu: goto label_37ae0c;
        case 0x37ae10u: goto label_37ae10;
        case 0x37ae14u: goto label_37ae14;
        case 0x37ae18u: goto label_37ae18;
        case 0x37ae1cu: goto label_37ae1c;
        case 0x37ae20u: goto label_37ae20;
        case 0x37ae24u: goto label_37ae24;
        case 0x37ae28u: goto label_37ae28;
        case 0x37ae2cu: goto label_37ae2c;
        case 0x37ae30u: goto label_37ae30;
        case 0x37ae34u: goto label_37ae34;
        case 0x37ae38u: goto label_37ae38;
        case 0x37ae3cu: goto label_37ae3c;
        case 0x37ae40u: goto label_37ae40;
        case 0x37ae44u: goto label_37ae44;
        case 0x37ae48u: goto label_37ae48;
        case 0x37ae4cu: goto label_37ae4c;
        case 0x37ae50u: goto label_37ae50;
        case 0x37ae54u: goto label_37ae54;
        case 0x37ae58u: goto label_37ae58;
        case 0x37ae5cu: goto label_37ae5c;
        case 0x37ae60u: goto label_37ae60;
        case 0x37ae64u: goto label_37ae64;
        case 0x37ae68u: goto label_37ae68;
        case 0x37ae6cu: goto label_37ae6c;
        case 0x37ae70u: goto label_37ae70;
        case 0x37ae74u: goto label_37ae74;
        case 0x37ae78u: goto label_37ae78;
        case 0x37ae7cu: goto label_37ae7c;
        case 0x37ae80u: goto label_37ae80;
        case 0x37ae84u: goto label_37ae84;
        case 0x37ae88u: goto label_37ae88;
        case 0x37ae8cu: goto label_37ae8c;
        case 0x37ae90u: goto label_37ae90;
        case 0x37ae94u: goto label_37ae94;
        case 0x37ae98u: goto label_37ae98;
        case 0x37ae9cu: goto label_37ae9c;
        case 0x37aea0u: goto label_37aea0;
        case 0x37aea4u: goto label_37aea4;
        case 0x37aea8u: goto label_37aea8;
        case 0x37aeacu: goto label_37aeac;
        case 0x37aeb0u: goto label_37aeb0;
        case 0x37aeb4u: goto label_37aeb4;
        case 0x37aeb8u: goto label_37aeb8;
        case 0x37aebcu: goto label_37aebc;
        case 0x37aec0u: goto label_37aec0;
        case 0x37aec4u: goto label_37aec4;
        case 0x37aec8u: goto label_37aec8;
        case 0x37aeccu: goto label_37aecc;
        case 0x37aed0u: goto label_37aed0;
        case 0x37aed4u: goto label_37aed4;
        case 0x37aed8u: goto label_37aed8;
        case 0x37aedcu: goto label_37aedc;
        case 0x37aee0u: goto label_37aee0;
        case 0x37aee4u: goto label_37aee4;
        case 0x37aee8u: goto label_37aee8;
        case 0x37aeecu: goto label_37aeec;
        case 0x37aef0u: goto label_37aef0;
        case 0x37aef4u: goto label_37aef4;
        case 0x37aef8u: goto label_37aef8;
        case 0x37aefcu: goto label_37aefc;
        case 0x37af00u: goto label_37af00;
        case 0x37af04u: goto label_37af04;
        case 0x37af08u: goto label_37af08;
        case 0x37af0cu: goto label_37af0c;
        case 0x37af10u: goto label_37af10;
        case 0x37af14u: goto label_37af14;
        case 0x37af18u: goto label_37af18;
        case 0x37af1cu: goto label_37af1c;
        case 0x37af20u: goto label_37af20;
        case 0x37af24u: goto label_37af24;
        case 0x37af28u: goto label_37af28;
        case 0x37af2cu: goto label_37af2c;
        case 0x37af30u: goto label_37af30;
        case 0x37af34u: goto label_37af34;
        case 0x37af38u: goto label_37af38;
        case 0x37af3cu: goto label_37af3c;
        case 0x37af40u: goto label_37af40;
        case 0x37af44u: goto label_37af44;
        case 0x37af48u: goto label_37af48;
        case 0x37af4cu: goto label_37af4c;
        case 0x37af50u: goto label_37af50;
        case 0x37af54u: goto label_37af54;
        case 0x37af58u: goto label_37af58;
        case 0x37af5cu: goto label_37af5c;
        case 0x37af60u: goto label_37af60;
        case 0x37af64u: goto label_37af64;
        case 0x37af68u: goto label_37af68;
        case 0x37af6cu: goto label_37af6c;
        case 0x37af70u: goto label_37af70;
        case 0x37af74u: goto label_37af74;
        case 0x37af78u: goto label_37af78;
        case 0x37af7cu: goto label_37af7c;
        case 0x37af80u: goto label_37af80;
        case 0x37af84u: goto label_37af84;
        case 0x37af88u: goto label_37af88;
        case 0x37af8cu: goto label_37af8c;
        case 0x37af90u: goto label_37af90;
        case 0x37af94u: goto label_37af94;
        case 0x37af98u: goto label_37af98;
        case 0x37af9cu: goto label_37af9c;
        case 0x37afa0u: goto label_37afa0;
        case 0x37afa4u: goto label_37afa4;
        case 0x37afa8u: goto label_37afa8;
        case 0x37afacu: goto label_37afac;
        case 0x37afb0u: goto label_37afb0;
        case 0x37afb4u: goto label_37afb4;
        case 0x37afb8u: goto label_37afb8;
        case 0x37afbcu: goto label_37afbc;
        case 0x37afc0u: goto label_37afc0;
        case 0x37afc4u: goto label_37afc4;
        case 0x37afc8u: goto label_37afc8;
        case 0x37afccu: goto label_37afcc;
        case 0x37afd0u: goto label_37afd0;
        case 0x37afd4u: goto label_37afd4;
        case 0x37afd8u: goto label_37afd8;
        case 0x37afdcu: goto label_37afdc;
        default: break;
    }

    ctx->pc = 0x37ad50u;

label_37ad50:
    // 0x37ad50: 0x3e00008  jr          $ra
label_37ad54:
    if (ctx->pc == 0x37AD54u) {
        ctx->pc = 0x37AD54u;
            // 0x37ad54: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->pc = 0x37AD58u;
        goto label_37ad58;
    }
    ctx->pc = 0x37AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AD50u;
            // 0x37ad54: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37AD58u;
label_37ad58:
    // 0x37ad58: 0x0  nop
    ctx->pc = 0x37ad58u;
    // NOP
label_37ad5c:
    // 0x37ad5c: 0x0  nop
    ctx->pc = 0x37ad5cu;
    // NOP
label_37ad60:
    // 0x37ad60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x37ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_37ad64:
    // 0x37ad64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37ad68:
    // 0x37ad68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37ad6c:
    // 0x37ad6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37ad70:
    // 0x37ad70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37ad74:
    // 0x37ad74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37ad78:
    // 0x37ad78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37ad7c:
    // 0x37ad7c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x37ad7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_37ad80:
    // 0x37ad80: 0x10a30081  beq         $a1, $v1, . + 4 + (0x81 << 2)
label_37ad84:
    if (ctx->pc == 0x37AD84u) {
        ctx->pc = 0x37AD84u;
            // 0x37ad84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AD88u;
        goto label_37ad88;
    }
    ctx->pc = 0x37AD80u;
    {
        const bool branch_taken_0x37ad80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AD80u;
            // 0x37ad84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad80) {
            ctx->pc = 0x37AF88u;
            goto label_37af88;
        }
    }
    ctx->pc = 0x37AD88u;
label_37ad88:
    // 0x37ad88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ad8c:
    // 0x37ad8c: 0x50a3007b  beql        $a1, $v1, . + 4 + (0x7B << 2)
label_37ad90:
    if (ctx->pc == 0x37AD90u) {
        ctx->pc = 0x37AD90u;
            // 0x37ad90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37AD94u;
        goto label_37ad94;
    }
    ctx->pc = 0x37AD8Cu;
    {
        const bool branch_taken_0x37ad8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37ad8c) {
            ctx->pc = 0x37AD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AD8Cu;
            // 0x37ad90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AF7Cu;
            goto label_37af7c;
        }
    }
    ctx->pc = 0x37AD94u;
label_37ad94:
    // 0x37ad94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37ad98:
    // 0x37ad98: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_37ad9c:
    if (ctx->pc == 0x37AD9Cu) {
        ctx->pc = 0x37ADA0u;
        goto label_37ada0;
    }
    ctx->pc = 0x37AD98u;
    {
        const bool branch_taken_0x37ad98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37ad98) {
            ctx->pc = 0x37ADA8u;
            goto label_37ada8;
        }
    }
    ctx->pc = 0x37ADA0u;
label_37ada0:
    // 0x37ada0: 0x10000087  b           . + 4 + (0x87 << 2)
label_37ada4:
    if (ctx->pc == 0x37ADA4u) {
        ctx->pc = 0x37ADA8u;
        goto label_37ada8;
    }
    ctx->pc = 0x37ADA0u;
    {
        const bool branch_taken_0x37ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ada0) {
            ctx->pc = 0x37AFC0u;
            goto label_37afc0;
        }
    }
    ctx->pc = 0x37ADA8u;
label_37ada8:
    // 0x37ada8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_37adac:
    // 0x37adac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37adb0:
    // 0x37adb0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x37adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_37adb4:
    // 0x37adb4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x37adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_37adb8:
    // 0x37adb8: 0x10640081  beq         $v1, $a0, . + 4 + (0x81 << 2)
label_37adbc:
    if (ctx->pc == 0x37ADBCu) {
        ctx->pc = 0x37ADC0u;
        goto label_37adc0;
    }
    ctx->pc = 0x37ADB8u;
    {
        const bool branch_taken_0x37adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37adb8) {
            ctx->pc = 0x37AFC0u;
            goto label_37afc0;
        }
    }
    ctx->pc = 0x37ADC0u;
label_37adc0:
    // 0x37adc0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x37adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_37adc4:
    // 0x37adc4: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x37adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
label_37adc8:
    // 0x37adc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37adcc:
    // 0x37adcc: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x37adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_37add0:
    // 0x37add0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x37add0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37add4:
    // 0x37add4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37add4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37add8:
    // 0x37add8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37add8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37addc:
    // 0x37addc: 0xc0b6df0  jal         func_2DB7C0
label_37ade0:
    if (ctx->pc == 0x37ADE0u) {
        ctx->pc = 0x37ADE0u;
            // 0x37ade0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x37ADE4u;
        goto label_37ade4;
    }
    ctx->pc = 0x37ADDCu;
    SET_GPR_U32(ctx, 31, 0x37ADE4u);
    ctx->pc = 0x37ADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ADDCu;
            // 0x37ade0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ADE4u; }
        if (ctx->pc != 0x37ADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ADE4u; }
        if (ctx->pc != 0x37ADE4u) { return; }
    }
    ctx->pc = 0x37ADE4u;
label_37ade4:
    // 0x37ade4: 0xc0d46a0  jal         func_351A80
label_37ade8:
    if (ctx->pc == 0x37ADE8u) {
        ctx->pc = 0x37ADE8u;
            // 0x37ade8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x37ADECu;
        goto label_37adec;
    }
    ctx->pc = 0x37ADE4u;
    SET_GPR_U32(ctx, 31, 0x37ADECu);
    ctx->pc = 0x37ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ADE4u;
            // 0x37ade8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ADECu; }
        if (ctx->pc != 0x37ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ADECu; }
        if (ctx->pc != 0x37ADECu) { return; }
    }
    ctx->pc = 0x37ADECu;
label_37adec:
    // 0x37adec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37adecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37adf0:
    // 0x37adf0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_37adf4:
    if (ctx->pc == 0x37ADF4u) {
        ctx->pc = 0x37ADF4u;
            // 0x37adf4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37ADF8u;
        goto label_37adf8;
    }
    ctx->pc = 0x37ADF0u;
    {
        const bool branch_taken_0x37adf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37adf0) {
            ctx->pc = 0x37ADF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37ADF0u;
            // 0x37adf4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AE14u;
            goto label_37ae14;
        }
    }
    ctx->pc = 0x37ADF8u;
label_37adf8:
    // 0x37adf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37adfc:
    // 0x37adfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37adfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ae00:
    // 0x37ae00: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x37ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37ae04:
    // 0x37ae04: 0xc0804bc  jal         func_2012F0
label_37ae08:
    if (ctx->pc == 0x37AE08u) {
        ctx->pc = 0x37AE08u;
            // 0x37ae08: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x37AE0Cu;
        goto label_37ae0c;
    }
    ctx->pc = 0x37AE04u;
    SET_GPR_U32(ctx, 31, 0x37AE0Cu);
    ctx->pc = 0x37AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE04u;
            // 0x37ae08: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE0Cu; }
        if (ctx->pc != 0x37AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE0Cu; }
        if (ctx->pc != 0x37AE0Cu) { return; }
    }
    ctx->pc = 0x37AE0Cu;
label_37ae0c:
    // 0x37ae0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37ae0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ae10:
    // 0x37ae10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37ae14:
    // 0x37ae14: 0xc0892d0  jal         func_224B40
label_37ae18:
    if (ctx->pc == 0x37AE18u) {
        ctx->pc = 0x37AE1Cu;
        goto label_37ae1c;
    }
    ctx->pc = 0x37AE14u;
    SET_GPR_U32(ctx, 31, 0x37AE1Cu);
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE1Cu; }
        if (ctx->pc != 0x37AE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE1Cu; }
        if (ctx->pc != 0x37AE1Cu) { return; }
    }
    ctx->pc = 0x37AE1Cu;
label_37ae1c:
    // 0x37ae1c: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x37ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
label_37ae20:
    // 0x37ae20: 0x3c03c138  lui         $v1, 0xC138
    ctx->pc = 0x37ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49464 << 16));
label_37ae24:
    // 0x37ae24: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x37ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
label_37ae28:
    // 0x37ae28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_37ae2c:
    // 0x37ae2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37ae30:
    // 0x37ae30: 0x3c024311  lui         $v0, 0x4311
    ctx->pc = 0x37ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17169 << 16));
label_37ae34:
    // 0x37ae34: 0x3442199a  ori         $v0, $v0, 0x199A
    ctx->pc = 0x37ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6554);
label_37ae38:
    // 0x37ae38: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x37ae38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37ae3c:
    // 0x37ae3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37ae3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37ae40:
    // 0x37ae40: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37ae40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37ae44:
    // 0x37ae44: 0xc0b6e3c  jal         func_2DB8F0
label_37ae48:
    if (ctx->pc == 0x37AE48u) {
        ctx->pc = 0x37AE48u;
            // 0x37ae48: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->pc = 0x37AE4Cu;
        goto label_37ae4c;
    }
    ctx->pc = 0x37AE44u;
    SET_GPR_U32(ctx, 31, 0x37AE4Cu);
    ctx->pc = 0x37AE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE44u;
            // 0x37ae48: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE4Cu; }
        if (ctx->pc != 0x37AE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE4Cu; }
        if (ctx->pc != 0x37AE4Cu) { return; }
    }
    ctx->pc = 0x37AE4Cu;
label_37ae4c:
    // 0x37ae4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_37ae50:
    // 0x37ae50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x37ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_37ae54:
    // 0x37ae54: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x37ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_37ae58:
    // 0x37ae58: 0xc0dec40  jal         func_37B100
label_37ae5c:
    if (ctx->pc == 0x37AE5Cu) {
        ctx->pc = 0x37AE5Cu;
            // 0x37ae5c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x37AE60u;
        goto label_37ae60;
    }
    ctx->pc = 0x37AE58u;
    SET_GPR_U32(ctx, 31, 0x37AE60u);
    ctx->pc = 0x37AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE58u;
            // 0x37ae5c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B100u;
    if (runtime->hasFunction(0x37B100u)) {
        auto targetFn = runtime->lookupFunction(0x37B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE60u; }
        if (ctx->pc != 0x37AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B100_0x37b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE60u; }
        if (ctx->pc != 0x37AE60u) { return; }
    }
    ctx->pc = 0x37AE60u;
label_37ae60:
    // 0x37ae60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37ae64:
    // 0x37ae64: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x37ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_37ae68:
    // 0x37ae68: 0xc0dec30  jal         func_37B0C0
label_37ae6c:
    if (ctx->pc == 0x37AE6Cu) {
        ctx->pc = 0x37AE6Cu;
            // 0x37ae6c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x37AE70u;
        goto label_37ae70;
    }
    ctx->pc = 0x37AE68u;
    SET_GPR_U32(ctx, 31, 0x37AE70u);
    ctx->pc = 0x37AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE68u;
            // 0x37ae6c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B0C0u;
    if (runtime->hasFunction(0x37B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x37B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE70u; }
        if (ctx->pc != 0x37AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B0C0_0x37b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE70u; }
        if (ctx->pc != 0x37AE70u) { return; }
    }
    ctx->pc = 0x37AE70u;
label_37ae70:
    // 0x37ae70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ae70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ae74:
    // 0x37ae74: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_37ae78:
    if (ctx->pc == 0x37AE78u) {
        ctx->pc = 0x37AE7Cu;
        goto label_37ae7c;
    }
    ctx->pc = 0x37AE74u;
    {
        const bool branch_taken_0x37ae74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ae74) {
            ctx->pc = 0x37AE90u;
            goto label_37ae90;
        }
    }
    ctx->pc = 0x37AE7Cu;
label_37ae7c:
    // 0x37ae7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ae80:
    // 0x37ae80: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x37ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37ae84:
    // 0x37ae84: 0xc0dec14  jal         func_37B050
label_37ae88:
    if (ctx->pc == 0x37AE88u) {
        ctx->pc = 0x37AE88u;
            // 0x37ae88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AE8Cu;
        goto label_37ae8c;
    }
    ctx->pc = 0x37AE84u;
    SET_GPR_U32(ctx, 31, 0x37AE8Cu);
    ctx->pc = 0x37AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE84u;
            // 0x37ae88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B050u;
    if (runtime->hasFunction(0x37B050u)) {
        auto targetFn = runtime->lookupFunction(0x37B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE8Cu; }
        if (ctx->pc != 0x37AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B050_0x37b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE8Cu; }
        if (ctx->pc != 0x37AE8Cu) { return; }
    }
    ctx->pc = 0x37AE8Cu;
label_37ae8c:
    // 0x37ae8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ae8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ae90:
    // 0x37ae90: 0xc0b6e84  jal         func_2DBA10
label_37ae94:
    if (ctx->pc == 0x37AE94u) {
        ctx->pc = 0x37AE98u;
        goto label_37ae98;
    }
    ctx->pc = 0x37AE90u;
    SET_GPR_U32(ctx, 31, 0x37AE98u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE98u; }
        if (ctx->pc != 0x37AE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AE98u; }
        if (ctx->pc != 0x37AE98u) { return; }
    }
    ctx->pc = 0x37AE98u;
label_37ae98:
    // 0x37ae98: 0xc0b6e24  jal         func_2DB890
label_37ae9c:
    if (ctx->pc == 0x37AE9Cu) {
        ctx->pc = 0x37AE9Cu;
            // 0x37ae9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AEA0u;
        goto label_37aea0;
    }
    ctx->pc = 0x37AE98u;
    SET_GPR_U32(ctx, 31, 0x37AEA0u);
    ctx->pc = 0x37AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AE98u;
            // 0x37ae9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB890u;
    if (runtime->hasFunction(0x2DB890u)) {
        auto targetFn = runtime->lookupFunction(0x2DB890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEA0u; }
        if (ctx->pc != 0x37AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB890_0x2db890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEA0u; }
        if (ctx->pc != 0x37AEA0u) { return; }
    }
    ctx->pc = 0x37AEA0u;
label_37aea0:
    // 0x37aea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37aea4:
    // 0x37aea4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37aea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37aea8:
    // 0x37aea8: 0xc08c164  jal         func_230590
label_37aeac:
    if (ctx->pc == 0x37AEACu) {
        ctx->pc = 0x37AEACu;
            // 0x37aeac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37AEB0u;
        goto label_37aeb0;
    }
    ctx->pc = 0x37AEA8u;
    SET_GPR_U32(ctx, 31, 0x37AEB0u);
    ctx->pc = 0x37AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEA8u;
            // 0x37aeac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEB0u; }
        if (ctx->pc != 0x37AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEB0u; }
        if (ctx->pc != 0x37AEB0u) { return; }
    }
    ctx->pc = 0x37AEB0u;
label_37aeb0:
    // 0x37aeb0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x37aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_37aeb4:
    // 0x37aeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37aeb8:
    // 0x37aeb8: 0xc0dec10  jal         func_37B040
label_37aebc:
    if (ctx->pc == 0x37AEBCu) {
        ctx->pc = 0x37AEBCu;
            // 0x37aebc: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
        ctx->pc = 0x37AEC0u;
        goto label_37aec0;
    }
    ctx->pc = 0x37AEB8u;
    SET_GPR_U32(ctx, 31, 0x37AEC0u);
    ctx->pc = 0x37AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEB8u;
            // 0x37aebc: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B040u;
    if (runtime->hasFunction(0x37B040u)) {
        auto targetFn = runtime->lookupFunction(0x37B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEC0u; }
        if (ctx->pc != 0x37AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B040_0x37b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEC0u; }
        if (ctx->pc != 0x37AEC0u) { return; }
    }
    ctx->pc = 0x37AEC0u;
label_37aec0:
    // 0x37aec0: 0xc08d414  jal         func_235050
label_37aec4:
    if (ctx->pc == 0x37AEC4u) {
        ctx->pc = 0x37AEC4u;
            // 0x37aec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AEC8u;
        goto label_37aec8;
    }
    ctx->pc = 0x37AEC0u;
    SET_GPR_U32(ctx, 31, 0x37AEC8u);
    ctx->pc = 0x37AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEC0u;
            // 0x37aec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEC8u; }
        if (ctx->pc != 0x37AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEC8u; }
        if (ctx->pc != 0x37AEC8u) { return; }
    }
    ctx->pc = 0x37AEC8u;
label_37aec8:
    // 0x37aec8: 0xc0debf8  jal         func_37AFE0
label_37aecc:
    if (ctx->pc == 0x37AECCu) {
        ctx->pc = 0x37AECCu;
            // 0x37aecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AED0u;
        goto label_37aed0;
    }
    ctx->pc = 0x37AEC8u;
    SET_GPR_U32(ctx, 31, 0x37AED0u);
    ctx->pc = 0x37AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEC8u;
            // 0x37aecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37AFE0u;
    if (runtime->hasFunction(0x37AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x37AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AED0u; }
        if (ctx->pc != 0x37AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037AFE0_0x37afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AED0u; }
        if (ctx->pc != 0x37AED0u) { return; }
    }
    ctx->pc = 0x37AED0u;
label_37aed0:
    // 0x37aed0: 0xc0775b0  jal         func_1DD6C0
label_37aed4:
    if (ctx->pc == 0x37AED4u) {
        ctx->pc = 0x37AED8u;
        goto label_37aed8;
    }
    ctx->pc = 0x37AED0u;
    SET_GPR_U32(ctx, 31, 0x37AED8u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AED8u; }
        if (ctx->pc != 0x37AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AED8u; }
        if (ctx->pc != 0x37AED8u) { return; }
    }
    ctx->pc = 0x37AED8u;
label_37aed8:
    // 0x37aed8: 0xc0775ac  jal         func_1DD6B0
label_37aedc:
    if (ctx->pc == 0x37AEDCu) {
        ctx->pc = 0x37AEDCu;
            // 0x37aedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AEE0u;
        goto label_37aee0;
    }
    ctx->pc = 0x37AED8u;
    SET_GPR_U32(ctx, 31, 0x37AEE0u);
    ctx->pc = 0x37AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AED8u;
            // 0x37aedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEE0u; }
        if (ctx->pc != 0x37AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEE0u; }
        if (ctx->pc != 0x37AEE0u) { return; }
    }
    ctx->pc = 0x37AEE0u;
label_37aee0:
    // 0x37aee0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x37aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_37aee4:
    // 0x37aee4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_37aee8:
    if (ctx->pc == 0x37AEE8u) {
        ctx->pc = 0x37AEE8u;
            // 0x37aee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AEECu;
        goto label_37aeec;
    }
    ctx->pc = 0x37AEE4u;
    {
        const bool branch_taken_0x37aee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37aee4) {
            ctx->pc = 0x37AEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEE4u;
            // 0x37aee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AF38u;
            goto label_37af38;
        }
    }
    ctx->pc = 0x37AEECu;
label_37aeec:
    // 0x37aeec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37aef0:
    // 0x37aef0: 0xc0dc47c  jal         func_3711F0
label_37aef4:
    if (ctx->pc == 0x37AEF4u) {
        ctx->pc = 0x37AEF4u;
            // 0x37aef4: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x37AEF8u;
        goto label_37aef8;
    }
    ctx->pc = 0x37AEF0u;
    SET_GPR_U32(ctx, 31, 0x37AEF8u);
    ctx->pc = 0x37AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEF0u;
            // 0x37aef4: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEF8u; }
        if (ctx->pc != 0x37AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AEF8u; }
        if (ctx->pc != 0x37AEF8u) { return; }
    }
    ctx->pc = 0x37AEF8u;
label_37aef8:
    // 0x37aef8: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x37aef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_37aefc:
    // 0x37aefc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_37af00:
    if (ctx->pc == 0x37AF00u) {
        ctx->pc = 0x37AF00u;
            // 0x37af00: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x37AF04u;
        goto label_37af04;
    }
    ctx->pc = 0x37AEFCu;
    {
        const bool branch_taken_0x37aefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37aefc) {
            ctx->pc = 0x37AF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AEFCu;
            // 0x37af00: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AF14u;
            goto label_37af14;
        }
    }
    ctx->pc = 0x37AF04u;
label_37af04:
    // 0x37af04: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x37af04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_37af08:
    // 0x37af08: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_37af0c:
    if (ctx->pc == 0x37AF0Cu) {
        ctx->pc = 0x37AF0Cu;
            // 0x37af0c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x37AF10u;
        goto label_37af10;
    }
    ctx->pc = 0x37AF08u;
    {
        const bool branch_taken_0x37af08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37af08) {
            ctx->pc = 0x37AF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF08u;
            // 0x37af0c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AF20u;
            goto label_37af20;
        }
    }
    ctx->pc = 0x37AF10u;
label_37af10:
    // 0x37af10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x37af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_37af14:
    // 0x37af14: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_37af18:
    if (ctx->pc == 0x37AF18u) {
        ctx->pc = 0x37AF1Cu;
        goto label_37af1c;
    }
    ctx->pc = 0x37AF14u;
    {
        const bool branch_taken_0x37af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37af14) {
            ctx->pc = 0x37AF34u;
            goto label_37af34;
        }
    }
    ctx->pc = 0x37AF1Cu;
label_37af1c:
    // 0x37af1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37af1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37af20:
    // 0x37af20: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x37af20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_37af24:
    // 0x37af24: 0x320f809  jalr        $t9
label_37af28:
    if (ctx->pc == 0x37AF28u) {
        ctx->pc = 0x37AF28u;
            // 0x37af28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AF2Cu;
        goto label_37af2c;
    }
    ctx->pc = 0x37AF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37AF2Cu);
        ctx->pc = 0x37AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF24u;
            // 0x37af28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37AF2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37AF2Cu; }
            if (ctx->pc != 0x37AF2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37AF2Cu;
label_37af2c:
    // 0x37af2c: 0x10000024  b           . + 4 + (0x24 << 2)
label_37af30:
    if (ctx->pc == 0x37AF30u) {
        ctx->pc = 0x37AF34u;
        goto label_37af34;
    }
    ctx->pc = 0x37AF2Cu;
    {
        const bool branch_taken_0x37af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af2c) {
            ctx->pc = 0x37AFC0u;
            goto label_37afc0;
        }
    }
    ctx->pc = 0x37AF34u;
label_37af34:
    // 0x37af34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37af38:
    // 0x37af38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37af3c:
    // 0x37af3c: 0xc0dec68  jal         func_37B1A0
label_37af40:
    if (ctx->pc == 0x37AF40u) {
        ctx->pc = 0x37AF40u;
            // 0x37af40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37AF44u;
        goto label_37af44;
    }
    ctx->pc = 0x37AF3Cu;
    SET_GPR_U32(ctx, 31, 0x37AF44u);
    ctx->pc = 0x37AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF3Cu;
            // 0x37af40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A0u;
    if (runtime->hasFunction(0x37B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x37B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF44u; }
        if (ctx->pc != 0x37AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B1A0_0x37b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF44u; }
        if (ctx->pc != 0x37AF44u) { return; }
    }
    ctx->pc = 0x37AF44u;
label_37af44:
    // 0x37af44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37af48:
    // 0x37af48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37af4c:
    // 0x37af4c: 0xc0dec68  jal         func_37B1A0
label_37af50:
    if (ctx->pc == 0x37AF50u) {
        ctx->pc = 0x37AF50u;
            // 0x37af50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x37AF54u;
        goto label_37af54;
    }
    ctx->pc = 0x37AF4Cu;
    SET_GPR_U32(ctx, 31, 0x37AF54u);
    ctx->pc = 0x37AF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF4Cu;
            // 0x37af50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A0u;
    if (runtime->hasFunction(0x37B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x37B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF54u; }
        if (ctx->pc != 0x37AF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B1A0_0x37b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF54u; }
        if (ctx->pc != 0x37AF54u) { return; }
    }
    ctx->pc = 0x37AF54u;
label_37af54:
    // 0x37af54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37af58:
    // 0x37af58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37af58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37af5c:
    // 0x37af5c: 0xc0dec68  jal         func_37B1A0
label_37af60:
    if (ctx->pc == 0x37AF60u) {
        ctx->pc = 0x37AF60u;
            // 0x37af60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AF64u;
        goto label_37af64;
    }
    ctx->pc = 0x37AF5Cu;
    SET_GPR_U32(ctx, 31, 0x37AF64u);
    ctx->pc = 0x37AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF5Cu;
            // 0x37af60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A0u;
    if (runtime->hasFunction(0x37B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x37B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF64u; }
        if (ctx->pc != 0x37AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B1A0_0x37b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AF64u; }
        if (ctx->pc != 0x37AF64u) { return; }
    }
    ctx->pc = 0x37AF64u;
label_37af64:
    // 0x37af64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37af64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37af68:
    // 0x37af68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_37af6c:
    // 0x37af6c: 0x320f809  jalr        $t9
label_37af70:
    if (ctx->pc == 0x37AF70u) {
        ctx->pc = 0x37AF70u;
            // 0x37af70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AF74u;
        goto label_37af74;
    }
    ctx->pc = 0x37AF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37AF74u);
        ctx->pc = 0x37AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AF6Cu;
            // 0x37af70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37AF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37AF74u; }
            if (ctx->pc != 0x37AF74u) { return; }
        }
        }
    }
    ctx->pc = 0x37AF74u;
label_37af74:
    // 0x37af74: 0x10000012  b           . + 4 + (0x12 << 2)
label_37af78:
    if (ctx->pc == 0x37AF78u) {
        ctx->pc = 0x37AF7Cu;
        goto label_37af7c;
    }
    ctx->pc = 0x37AF74u;
    {
        const bool branch_taken_0x37af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af74) {
            ctx->pc = 0x37AFC0u;
            goto label_37afc0;
        }
    }
    ctx->pc = 0x37AF7Cu;
label_37af7c:
    // 0x37af7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x37af7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_37af80:
    // 0x37af80: 0x320f809  jalr        $t9
label_37af84:
    if (ctx->pc == 0x37AF84u) {
        ctx->pc = 0x37AF88u;
        goto label_37af88;
    }
    ctx->pc = 0x37AF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37AF88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37AF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37AF88u; }
            if (ctx->pc != 0x37AF88u) { return; }
        }
        }
    }
    ctx->pc = 0x37AF88u;
label_37af88:
    // 0x37af88: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x37af88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_37af8c:
    // 0x37af8c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_37af90:
    if (ctx->pc == 0x37AF90u) {
        ctx->pc = 0x37AF94u;
        goto label_37af94;
    }
    ctx->pc = 0x37AF8Cu;
    {
        const bool branch_taken_0x37af8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af8c) {
            ctx->pc = 0x37AFC0u;
            goto label_37afc0;
        }
    }
    ctx->pc = 0x37AF94u;
label_37af94:
    // 0x37af94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37af94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37af98:
    // 0x37af98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37af98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37af9c:
    // 0x37af9c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x37af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_37afa0:
    // 0x37afa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_37afa4:
    // 0x37afa4: 0xc0e3658  jal         func_38D960
label_37afa8:
    if (ctx->pc == 0x37AFA8u) {
        ctx->pc = 0x37AFA8u;
            // 0x37afa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x37AFACu;
        goto label_37afac;
    }
    ctx->pc = 0x37AFA4u;
    SET_GPR_U32(ctx, 31, 0x37AFACu);
    ctx->pc = 0x37AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AFA4u;
            // 0x37afa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AFACu; }
        if (ctx->pc != 0x37AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AFACu; }
        if (ctx->pc != 0x37AFACu) { return; }
    }
    ctx->pc = 0x37AFACu;
label_37afac:
    // 0x37afac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37afacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37afb0:
    // 0x37afb0: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x37afb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37afb4:
    // 0x37afb4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_37afb8:
    if (ctx->pc == 0x37AFB8u) {
        ctx->pc = 0x37AFB8u;
            // 0x37afb8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x37AFBCu;
        goto label_37afbc;
    }
    ctx->pc = 0x37AFB4u;
    {
        const bool branch_taken_0x37afb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AFB4u;
            // 0x37afb8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37afb4) {
            ctx->pc = 0x37AF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37af9c;
        }
    }
    ctx->pc = 0x37AFBCu;
label_37afbc:
    // 0x37afbc: 0x0  nop
    ctx->pc = 0x37afbcu;
    // NOP
label_37afc0:
    // 0x37afc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37afc4:
    // 0x37afc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37afc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37afc8:
    // 0x37afc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37afc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37afcc:
    // 0x37afcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37afccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37afd0:
    // 0x37afd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37afd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37afd4:
    // 0x37afd4: 0x3e00008  jr          $ra
label_37afd8:
    if (ctx->pc == 0x37AFD8u) {
        ctx->pc = 0x37AFD8u;
            // 0x37afd8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x37AFDCu;
        goto label_37afdc;
    }
    ctx->pc = 0x37AFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AFD4u;
            // 0x37afd8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37AFDCu;
label_37afdc:
    // 0x37afdc: 0x0  nop
    ctx->pc = 0x37afdcu;
    // NOP
}
