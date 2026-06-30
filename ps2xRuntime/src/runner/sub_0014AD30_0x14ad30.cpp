#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AD30
// Address: 0x14ad30 - 0x14b050
void sub_0014AD30_0x14ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD30_0x14ad30");
#endif

    switch (ctx->pc) {
        case 0x14ad94u: goto label_14ad94;
        case 0x14ada0u: goto label_14ada0;
        case 0x14adb0u: goto label_14adb0;
        case 0x14adb8u: goto label_14adb8;
        case 0x14adc8u: goto label_14adc8;
        case 0x14adf4u: goto label_14adf4;
        case 0x14ae18u: goto label_14ae18;
        case 0x14ae44u: goto label_14ae44;
        case 0x14ae54u: goto label_14ae54;
        case 0x14ae6cu: goto label_14ae6c;
        case 0x14ae84u: goto label_14ae84;
        case 0x14ae90u: goto label_14ae90;
        case 0x14aea8u: goto label_14aea8;
        case 0x14aec8u: goto label_14aec8;
        case 0x14aee0u: goto label_14aee0;
        case 0x14aefcu: goto label_14aefc;
        case 0x14af04u: goto label_14af04;
        case 0x14af10u: goto label_14af10;
        case 0x14af1cu: goto label_14af1c;
        case 0x14af38u: goto label_14af38;
        case 0x14af44u: goto label_14af44;
        case 0x14af58u: goto label_14af58;
        case 0x14af68u: goto label_14af68;
        case 0x14af78u: goto label_14af78;
        case 0x14af9cu: goto label_14af9c;
        case 0x14afa8u: goto label_14afa8;
        case 0x14afb8u: goto label_14afb8;
        case 0x14afd4u: goto label_14afd4;
        case 0x14aff0u: goto label_14aff0;
        case 0x14b00cu: goto label_14b00c;
        default: break;
    }

    ctx->pc = 0x14ad30u;

    // 0x14ad30: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x14ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x14ad34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14ad38: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x14ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x14ad3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14ad40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14ad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14ad48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14ad48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14ad50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14ad50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14ad58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14ad58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14ad60: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x14ad60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad64: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x14ad64u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14ad68: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x14ad68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad6c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x14ad6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14ad70: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14ad74: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x14ad74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x14ad78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14ad7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14ad80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14ad80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14ad84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14ad84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14ad88: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14ad88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14ad8c: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14AD8Cu;
    SET_GPR_U32(ctx, 31, 0x14AD94u);
    ctx->pc = 0x14AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD8Cu;
            // 0x14ad90: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD94u; }
        if (ctx->pc != 0x14AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD94u; }
        if (ctx->pc != 0x14AD94u) { return; }
    }
    ctx->pc = 0x14AD94u;
label_14ad94:
    // 0x14ad94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ad98: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x14AD98u;
    SET_GPR_U32(ctx, 31, 0x14ADA0u);
    ctx->pc = 0x14AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD98u;
            // 0x14ad9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADA0u; }
        if (ctx->pc != 0x14ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADA0u; }
        if (ctx->pc != 0x14ADA0u) { return; }
    }
    ctx->pc = 0x14ADA0u;
label_14ada0:
    // 0x14ada0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14ada4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x14ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ada8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x14ADA8u;
    SET_GPR_U32(ctx, 31, 0x14ADB0u);
    ctx->pc = 0x14ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADA8u;
            // 0x14adac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB0u; }
        if (ctx->pc != 0x14ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB0u; }
        if (ctx->pc != 0x14ADB0u) { return; }
    }
    ctx->pc = 0x14ADB0u;
label_14adb0:
    // 0x14adb0: 0xc04cc14  jal         func_133050
    ctx->pc = 0x14ADB0u;
    SET_GPR_U32(ctx, 31, 0x14ADB8u);
    ctx->pc = 0x14ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADB0u;
            // 0x14adb4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB8u; }
        if (ctx->pc != 0x14ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB8u; }
        if (ctx->pc != 0x14ADB8u) { return; }
    }
    ctx->pc = 0x14ADB8u;
label_14adb8:
    // 0x14adb8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x14adb8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x14adbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adc0: 0xc052c14  jal         func_14B050
    ctx->pc = 0x14ADC0u;
    SET_GPR_U32(ctx, 31, 0x14ADC8u);
    ctx->pc = 0x14ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADC0u;
            // 0x14adc4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B050u;
    if (runtime->hasFunction(0x14B050u)) {
        auto targetFn = runtime->lookupFunction(0x14B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADC8u; }
        if (ctx->pc != 0x14ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B050_0x14b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADC8u; }
        if (ctx->pc != 0x14ADC8u) { return; }
    }
    ctx->pc = 0x14ADC8u;
label_14adc8:
    // 0x14adc8: 0xc6980000  lwc1        $f24, 0x0($s4)
    ctx->pc = 0x14adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14adcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14add0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14add0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14add4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14add8: 0xc6570000  lwc1        $f23, 0x0($s2)
    ctx->pc = 0x14add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14addc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14addcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ade0: 0x46186b03  div.s       $f12, $f13, $f24
    ctx->pc = 0x14ade0u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[24];
    // 0x14ade4: 0x0  nop
    ctx->pc = 0x14ade4u;
    // NOP
    // 0x14ade8: 0x0  nop
    ctx->pc = 0x14ade8u;
    // NOP
    // 0x14adec: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14ADECu;
    SET_GPR_U32(ctx, 31, 0x14ADF4u);
    ctx->pc = 0x14ADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADECu;
            // 0x14adf0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADF4u; }
        if (ctx->pc != 0x14ADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADF4u; }
        if (ctx->pc != 0x14ADF4u) { return; }
    }
    ctx->pc = 0x14ADF4u;
label_14adf4:
    // 0x14adf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14adf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14adf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14adfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14ae00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae04: 0x46176b03  div.s       $f12, $f13, $f23
    ctx->pc = 0x14ae04u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[23];
    // 0x14ae08: 0x0  nop
    ctx->pc = 0x14ae08u;
    // NOP
    // 0x14ae0c: 0x0  nop
    ctx->pc = 0x14ae0cu;
    // NOP
    // 0x14ae10: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14AE10u;
    SET_GPR_U32(ctx, 31, 0x14AE18u);
    ctx->pc = 0x14AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE10u;
            // 0x14ae14: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE18u; }
        if (ctx->pc != 0x14AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE18u; }
        if (ctx->pc != 0x14AE18u) { return; }
    }
    ctx->pc = 0x14AE18u;
label_14ae18:
    // 0x14ae18: 0x4618bdc2  mul.s       $f23, $f23, $f24
    ctx->pc = 0x14ae18u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x14ae1c: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x14ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x14ae20: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x14ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x14ae24: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x14ae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x14ae28: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x14ae28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14ae2c: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x14ae2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x14ae30: 0x4617cd42  mul.s       $f21, $f25, $f23
    ctx->pc = 0x14ae30u;
    ctx->f[21] = FPU_MUL_S(ctx->f[25], ctx->f[23]);
    // 0x14ae34: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x14ae34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x14ae38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14ae38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14ae3c: 0xc052c40  jal         func_14B100
    ctx->pc = 0x14AE3Cu;
    SET_GPR_U32(ctx, 31, 0x14AE44u);
    ctx->pc = 0x14AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE3Cu;
            // 0x14ae40: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B100u;
    if (runtime->hasFunction(0x14B100u)) {
        auto targetFn = runtime->lookupFunction(0x14B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE44u; }
        if (ctx->pc != 0x14AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B100_0x14b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE44u; }
        if (ctx->pc != 0x14AE44u) { return; }
    }
    ctx->pc = 0x14AE44u;
label_14ae44:
    // 0x14ae44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14ae44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae4c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14AE4Cu;
    SET_GPR_U32(ctx, 31, 0x14AE54u);
    ctx->pc = 0x14AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE4Cu;
            // 0x14ae50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE54u; }
        if (ctx->pc != 0x14AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE54u; }
        if (ctx->pc != 0x14AE54u) { return; }
    }
    ctx->pc = 0x14AE54u;
label_14ae54:
    // 0x14ae54: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AE54u;
    {
        const bool branch_taken_0x14ae54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae54) {
            ctx->pc = 0x14AE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE54u;
            // 0x14ae58: 0xc7a0014c  lwc1        $f0, 0x14C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AE74u;
            goto label_14ae74;
        }
    }
    ctx->pc = 0x14AE5Cu;
    // 0x14ae5c: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x14ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ae60: 0xc7ad0148  lwc1        $f13, 0x148($sp)
    ctx->pc = 0x14ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ae64: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x14AE64u;
    SET_GPR_U32(ctx, 31, 0x14AE6Cu);
    ctx->pc = 0x14AE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE64u;
            // 0x14ae68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE6Cu; }
        if (ctx->pc != 0x14AE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2C0_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE6Cu; }
        if (ctx->pc != 0x14AE6Cu) { return; }
    }
    ctx->pc = 0x14AE6Cu;
label_14ae6c:
    // 0x14ae6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14AE6Cu;
    {
        const bool branch_taken_0x14ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE6Cu;
            // 0x14ae70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae6c) {
            ctx->pc = 0x14AE88u;
            goto label_14ae88;
        }
    }
    ctx->pc = 0x14AE74u;
label_14ae74:
    // 0x14ae74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae78: 0xc7ad0148  lwc1        $f13, 0x148($sp)
    ctx->pc = 0x14ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ae7c: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x14AE7Cu;
    SET_GPR_U32(ctx, 31, 0x14AE84u);
    ctx->pc = 0x14AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE7Cu;
            // 0x14ae80: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE84u; }
        if (ctx->pc != 0x14AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2C0_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE84u; }
        if (ctx->pc != 0x14AE84u) { return; }
    }
    ctx->pc = 0x14AE84u;
label_14ae84:
    // 0x14ae84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14ae88:
    // 0x14ae88: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14AE88u;
    SET_GPR_U32(ctx, 31, 0x14AE90u);
    ctx->pc = 0x14AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE88u;
            // 0x14ae8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE90u; }
        if (ctx->pc != 0x14AE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE90u; }
        if (ctx->pc != 0x14AE90u) { return; }
    }
    ctx->pc = 0x14AE90u;
label_14ae90:
    // 0x14ae90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x14ae90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14ae94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14ae98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14ae9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14aea0: 0xc04ce64  jal         func_133990
    ctx->pc = 0x14AEA0u;
    SET_GPR_U32(ctx, 31, 0x14AEA8u);
    ctx->pc = 0x14AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEA0u;
            // 0x14aea4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEA8u; }
        if (ctx->pc != 0x14AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEA8u; }
        if (ctx->pc != 0x14AEA8u) { return; }
    }
    ctx->pc = 0x14AEA8u;
label_14aea8:
    // 0x14aea8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AEA8u;
    {
        const bool branch_taken_0x14aea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aea8) {
            ctx->pc = 0x14AEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEA8u;
            // 0x14aeac: 0xc7a00140  lwc1        $f0, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AED0u;
            goto label_14aed0;
        }
    }
    ctx->pc = 0x14AEB0u;
    // 0x14aeb0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x14aeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aeb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeb8: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x14aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aebc: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x14aebcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x14aec0: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x14AEC0u;
    SET_GPR_U32(ctx, 31, 0x14AEC8u);
    ctx->pc = 0x14AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEC0u;
            // 0x14aec4: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEC8u; }
        if (ctx->pc != 0x14AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2C0_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEC8u; }
        if (ctx->pc != 0x14AEC8u) { return; }
    }
    ctx->pc = 0x14AEC8u;
label_14aec8:
    // 0x14aec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14AEC8u;
    {
        const bool branch_taken_0x14aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEC8u;
            // 0x14aecc: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aec8) {
            ctx->pc = 0x14AEE4u;
            goto label_14aee4;
        }
    }
    ctx->pc = 0x14AED0u;
label_14aed0:
    // 0x14aed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aed4: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x14aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14aed8: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x14AED8u;
    SET_GPR_U32(ctx, 31, 0x14AEE0u);
    ctx->pc = 0x14AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AED8u;
            // 0x14aedc: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE0u; }
        if (ctx->pc != 0x14AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2C0_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE0u; }
        if (ctx->pc != 0x14AEE0u) { return; }
    }
    ctx->pc = 0x14AEE0u;
label_14aee0:
    // 0x14aee0: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x14aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_14aee4:
    // 0x14aee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aee8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x14aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x14aeec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aef0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14aef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aef4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14AEF4u;
    SET_GPR_U32(ctx, 31, 0x14AEFCu);
    ctx->pc = 0x14AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEF4u;
            // 0x14aef8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEFCu; }
        if (ctx->pc != 0x14AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEFCu; }
        if (ctx->pc != 0x14AEFCu) { return; }
    }
    ctx->pc = 0x14AEFCu;
label_14aefc:
    // 0x14aefc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14AEFCu;
    SET_GPR_U32(ctx, 31, 0x14AF04u);
    ctx->pc = 0x14AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEFCu;
            // 0x14af00: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF04u; }
        if (ctx->pc != 0x14AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF04u; }
        if (ctx->pc != 0x14AF04u) { return; }
    }
    ctx->pc = 0x14AF04u;
label_14af04:
    // 0x14af04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14af08: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14AF08u;
    SET_GPR_U32(ctx, 31, 0x14AF10u);
    ctx->pc = 0x14AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF08u;
            // 0x14af0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF10u; }
        if (ctx->pc != 0x14AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF10u; }
        if (ctx->pc != 0x14AF10u) { return; }
    }
    ctx->pc = 0x14AF10u;
label_14af10:
    // 0x14af10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af14: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14AF14u;
    SET_GPR_U32(ctx, 31, 0x14AF1Cu);
    ctx->pc = 0x14AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF14u;
            // 0x14af18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF1Cu; }
        if (ctx->pc != 0x14AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF1Cu; }
        if (ctx->pc != 0x14AF1Cu) { return; }
    }
    ctx->pc = 0x14AF1Cu;
label_14af1c:
    // 0x14af1c: 0x4615a540  add.s       $f21, $f20, $f21
    ctx->pc = 0x14af1cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x14af20: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x14af20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14af24: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x14AF24u;
    {
        const bool branch_taken_0x14af24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14af24) {
            ctx->pc = 0x14AF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF24u;
            // 0x14af28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AFACu;
            goto label_14afac;
        }
    }
    ctx->pc = 0x14AF2Cu;
    // 0x14af2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14af30: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14AF30u;
    SET_GPR_U32(ctx, 31, 0x14AF38u);
    ctx->pc = 0x14AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF30u;
            // 0x14af34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF38u; }
        if (ctx->pc != 0x14AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF38u; }
        if (ctx->pc != 0x14AF38u) { return; }
    }
    ctx->pc = 0x14AF38u;
label_14af38:
    // 0x14af38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14af3c: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14AF3Cu;
    SET_GPR_U32(ctx, 31, 0x14AF44u);
    ctx->pc = 0x14AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF3Cu;
            // 0x14af40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF44u; }
        if (ctx->pc != 0x14AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF44u; }
        if (ctx->pc != 0x14AF44u) { return; }
    }
    ctx->pc = 0x14AF44u;
label_14af44:
    // 0x14af44: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x14af44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x14af48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14af4c: 0x46170302  mul.s       $f12, $f0, $f23
    ctx->pc = 0x14af4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x14af50: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x14AF50u;
    SET_GPR_U32(ctx, 31, 0x14AF58u);
    ctx->pc = 0x14AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF50u;
            // 0x14af54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF58u; }
        if (ctx->pc != 0x14AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF58u; }
        if (ctx->pc != 0x14AF58u) { return; }
    }
    ctx->pc = 0x14AF58u;
label_14af58:
    // 0x14af58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14af58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14af5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14af5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14af60: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x14AF60u;
    SET_GPR_U32(ctx, 31, 0x14AF68u);
    ctx->pc = 0x14AF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF60u;
            // 0x14af64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF68u; }
        if (ctx->pc != 0x14AF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF68u; }
        if (ctx->pc != 0x14AF68u) { return; }
    }
    ctx->pc = 0x14AF68u;
label_14af68:
    // 0x14af68: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14af6c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x14af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14af70: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x14AF70u;
    SET_GPR_U32(ctx, 31, 0x14AF78u);
    ctx->pc = 0x14AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF70u;
            // 0x14af74: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF78u; }
        if (ctx->pc != 0x14AF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF78u; }
        if (ctx->pc != 0x14AF78u) { return; }
    }
    ctx->pc = 0x14AF78u;
label_14af78:
    // 0x14af78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14af7c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14af80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14af80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14af84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af88: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x14af88u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x14af8c: 0x0  nop
    ctx->pc = 0x14af8cu;
    // NOP
    // 0x14af90: 0x0  nop
    ctx->pc = 0x14af90u;
    // NOP
    // 0x14af94: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x14AF94u;
    SET_GPR_U32(ctx, 31, 0x14AF9Cu);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF9Cu; }
        if (ctx->pc != 0x14AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF9Cu; }
        if (ctx->pc != 0x14AF9Cu) { return; }
    }
    ctx->pc = 0x14AF9Cu;
label_14af9c:
    // 0x14af9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afa0: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x14AFA0u;
    SET_GPR_U32(ctx, 31, 0x14AFA8u);
    ctx->pc = 0x14AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFA0u;
            // 0x14afa4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFA8u; }
        if (ctx->pc != 0x14AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFA8u; }
        if (ctx->pc != 0x14AFA8u) { return; }
    }
    ctx->pc = 0x14AFA8u;
label_14afa8:
    // 0x14afa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14afa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14afac:
    // 0x14afac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14afacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afb0: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14AFB0u;
    SET_GPR_U32(ctx, 31, 0x14AFB8u);
    ctx->pc = 0x14AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFB0u;
            // 0x14afb4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFB8u; }
        if (ctx->pc != 0x14AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFB8u; }
        if (ctx->pc != 0x14AFB8u) { return; }
    }
    ctx->pc = 0x14AFB8u;
label_14afb8:
    // 0x14afb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14afbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14afc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14afc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afc8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x14afc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x14afcc: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14AFCCu;
    SET_GPR_U32(ctx, 31, 0x14AFD4u);
    ctx->pc = 0x14AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFCCu;
            // 0x14afd0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFD4u; }
        if (ctx->pc != 0x14AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFD4u; }
        if (ctx->pc != 0x14AFD4u) { return; }
    }
    ctx->pc = 0x14AFD4u;
label_14afd4:
    // 0x14afd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14afd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14afdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14afe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14afe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afe4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x14afe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x14afe8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14AFE8u;
    SET_GPR_U32(ctx, 31, 0x14AFF0u);
    ctx->pc = 0x14AFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFE8u;
            // 0x14afec: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF0u; }
        if (ctx->pc != 0x14AFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF0u; }
        if (ctx->pc != 0x14AFF0u) { return; }
    }
    ctx->pc = 0x14AFF0u;
label_14aff0:
    // 0x14aff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14aff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aff8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14aff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14affc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b000: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x14b000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x14b004: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14B004u;
    SET_GPR_U32(ctx, 31, 0x14B00Cu);
    ctx->pc = 0x14B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B004u;
            // 0x14b008: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B00Cu; }
        if (ctx->pc != 0x14B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B00Cu; }
        if (ctx->pc != 0x14B00Cu) { return; }
    }
    ctx->pc = 0x14B00Cu;
label_14b00c:
    // 0x14b00c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b010: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x14b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14b014: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x14b014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b018: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x14b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14b01c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14b01cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b020: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x14b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14b024: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14b024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b028: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14b02c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14b02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b030: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14b034: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14b034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b038: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b03c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14b03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b040: 0x3e00008  jr          $ra
    ctx->pc = 0x14B040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B040u;
            // 0x14b044: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B048u;
    // 0x14b048: 0x0  nop
    ctx->pc = 0x14b048u;
    // NOP
    // 0x14b04c: 0x0  nop
    ctx->pc = 0x14b04cu;
    // NOP
}
