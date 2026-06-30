#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054CF10
// Address: 0x54cf10 - 0x54d150
void sub_0054CF10_0x54cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054CF10_0x54cf10");
#endif

    switch (ctx->pc) {
        case 0x54cf68u: goto label_54cf68;
        case 0x54cfd8u: goto label_54cfd8;
        case 0x54d008u: goto label_54d008;
        case 0x54d038u: goto label_54d038;
        case 0x54d068u: goto label_54d068;
        case 0x54d098u: goto label_54d098;
        case 0x54d0c8u: goto label_54d0c8;
        case 0x54d0f8u: goto label_54d0f8;
        case 0x54d128u: goto label_54d128;
        default: break;
    }

    ctx->pc = 0x54cf10u;

    // 0x54cf10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x54cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x54cf14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x54cf18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x54cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x54cf1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x54cf20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54cf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x54cf24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x54cf24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54cf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54cf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x54cf30: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x54cf30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x54cf34: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x54cf34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x54cf38: 0x2631ead0  addiu       $s1, $s1, -0x1530
    ctx->pc = 0x54cf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961872));
    // 0x54cf3c: 0x8083005c  lb          $v1, 0x5C($a0)
    ctx->pc = 0x54cf3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x54cf40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x54cf44: 0x8c450ec8  lw          $a1, 0xEC8($v0)
    ctx->pc = 0x54cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x54cf48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54cf4c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54cf50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x54cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x54cf54: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54cf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54cf5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54cf60: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x54CF60u;
    SET_GPR_U32(ctx, 31, 0x54CF68u);
    ctx->pc = 0x54CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CF60u;
            // 0x54cf64: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CF68u; }
        if (ctx->pc != 0x54CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CF68u; }
        if (ctx->pc != 0x54CF68u) { return; }
    }
    ctx->pc = 0x54CF68u;
label_54cf68:
    // 0x54cf68: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x54CF68u;
    {
        const bool branch_taken_0x54cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54cf68) {
            ctx->pc = 0x54CF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CF68u;
            // 0x54cf6c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D12Cu;
            goto label_54d12c;
        }
    }
    ctx->pc = 0x54CF70u;
    // 0x54cf70: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x54cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x54cf74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x54cf78: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x54cf7c: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x54cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x54cf80: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x54cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x54cf84: 0x8663006c  lh          $v1, 0x6C($s3)
    ctx->pc = 0x54cf84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x54cf88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x54cf88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x54cf8c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54cf8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x54cf90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x54cf90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x54cf94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x54cf94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x54cf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54cf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54cf9c: 0x0  nop
    ctx->pc = 0x54cf9cu;
    // NOP
    // 0x54cfa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54cfa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x54cfa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x54cfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x54cfa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54cfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x54cfac: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x54cfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x54cfb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x54CFB0u;
    {
        const bool branch_taken_0x54cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CFB0u;
            // 0x54cfb4: 0x8630003a  lh          $s0, 0x3A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cfb0) {
            ctx->pc = 0x54CFBCu;
            goto label_54cfbc;
        }
    }
    ctx->pc = 0x54CFB8u;
    // 0x54cfb8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x54cfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_54cfbc:
    // 0x54cfbc: 0x8627003c  lh          $a3, 0x3C($s1)
    ctx->pc = 0x54cfbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x54cfc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54cfc4: 0x8628003e  lh          $t0, 0x3E($s1)
    ctx->pc = 0x54cfc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x54cfc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54cfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54cfcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x54cfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54cfd0: 0xc153d40  jal         func_54F500
    ctx->pc = 0x54CFD0u;
    SET_GPR_U32(ctx, 31, 0x54CFD8u);
    ctx->pc = 0x54CFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CFD0u;
            // 0x54cfd4: 0x2409ffd9  addiu       $t1, $zero, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54F500u;
    if (runtime->hasFunction(0x54F500u)) {
        auto targetFn = runtime->lookupFunction(0x54F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CFD8u; }
        if (ctx->pc != 0x54CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054F500_0x54f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CFD8u; }
        if (ctx->pc != 0x54CFD8u) { return; }
    }
    ctx->pc = 0x54CFD8u;
label_54cfd8:
    // 0x54cfd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54cfd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54cfdc: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54cfdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54cfe0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54cfe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54cfe4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54cfe8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54cfec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54cff0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54cff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54cff8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54cffc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54cffcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d000: 0xc153c60  jal         func_54F180
    ctx->pc = 0x54D000u;
    SET_GPR_U32(ctx, 31, 0x54D008u);
    ctx->pc = 0x54D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D000u;
            // 0x54d004: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54F180u;
    if (runtime->hasFunction(0x54F180u)) {
        auto targetFn = runtime->lookupFunction(0x54F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D008u; }
        if (ctx->pc != 0x54D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054F180_0x54f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D008u; }
        if (ctx->pc != 0x54D008u) { return; }
    }
    ctx->pc = 0x54D008u;
label_54d008:
    // 0x54d008: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d008u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d00c: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d00cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d010: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d014: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d018: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d01c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d028: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d02c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d02cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d030: 0xc153b08  jal         func_54EC20
    ctx->pc = 0x54D030u;
    SET_GPR_U32(ctx, 31, 0x54D038u);
    ctx->pc = 0x54D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D030u;
            // 0x54d034: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54EC20u;
    if (runtime->hasFunction(0x54EC20u)) {
        auto targetFn = runtime->lookupFunction(0x54EC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D038u; }
        if (ctx->pc != 0x54D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054EC20_0x54ec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D038u; }
        if (ctx->pc != 0x54D038u) { return; }
    }
    ctx->pc = 0x54D038u;
label_54d038:
    // 0x54d038: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d038u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d03c: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d03cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d040: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d044: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d048: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d04c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d058: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d05c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d05cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d060: 0xc153a1c  jal         func_54E870
    ctx->pc = 0x54D060u;
    SET_GPR_U32(ctx, 31, 0x54D068u);
    ctx->pc = 0x54D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D060u;
            // 0x54d064: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54E870u;
    if (runtime->hasFunction(0x54E870u)) {
        auto targetFn = runtime->lookupFunction(0x54E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D068u; }
        if (ctx->pc != 0x54D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054E870_0x54e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D068u; }
        if (ctx->pc != 0x54D068u) { return; }
    }
    ctx->pc = 0x54D068u;
label_54d068:
    // 0x54d068: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d068u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d06c: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d06cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d070: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d074: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d078: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d07c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d080: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d088: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d08c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d08cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d090: 0xc153928  jal         func_54E4A0
    ctx->pc = 0x54D090u;
    SET_GPR_U32(ctx, 31, 0x54D098u);
    ctx->pc = 0x54D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D090u;
            // 0x54d094: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54E4A0u;
    if (runtime->hasFunction(0x54E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x54E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D098u; }
        if (ctx->pc != 0x54D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054E4A0_0x54e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D098u; }
        if (ctx->pc != 0x54D098u) { return; }
    }
    ctx->pc = 0x54D098u;
label_54d098:
    // 0x54d098: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d098u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d09c: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d09cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d0a0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d0a4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d0a8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d0ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d0b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d0bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d0bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d0c0: 0xc153790  jal         func_54DE40
    ctx->pc = 0x54D0C0u;
    SET_GPR_U32(ctx, 31, 0x54D0C8u);
    ctx->pc = 0x54D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D0C0u;
            // 0x54d0c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54DE40u;
    if (runtime->hasFunction(0x54DE40u)) {
        auto targetFn = runtime->lookupFunction(0x54DE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D0C8u; }
        if (ctx->pc != 0x54D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054DE40_0x54de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D0C8u; }
        if (ctx->pc != 0x54D0C8u) { return; }
    }
    ctx->pc = 0x54D0C8u;
label_54d0c8:
    // 0x54d0c8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d0c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d0cc: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d0ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d0d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d0d4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d0d8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d0dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d0e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d0e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d0ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d0ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d0f0: 0xc1535d8  jal         func_54D760
    ctx->pc = 0x54D0F0u;
    SET_GPR_U32(ctx, 31, 0x54D0F8u);
    ctx->pc = 0x54D0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D0F0u;
            // 0x54d0f4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54D760u;
    if (runtime->hasFunction(0x54D760u)) {
        auto targetFn = runtime->lookupFunction(0x54D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D0F8u; }
        if (ctx->pc != 0x54D0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054D760_0x54d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D0F8u; }
        if (ctx->pc != 0x54D0F8u) { return; }
    }
    ctx->pc = 0x54D0F8u;
label_54d0f8:
    // 0x54d0f8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d0f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d0fc: 0x8263005c  lb          $v1, 0x5C($s3)
    ctx->pc = 0x54d0fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x54d100: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54d100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x54d104: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x54d108: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x54d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x54d10c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x54d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54d110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x54d114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54d118: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54d118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x54d11c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d11cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54d120: 0xc153454  jal         func_54D150
    ctx->pc = 0x54D120u;
    SET_GPR_U32(ctx, 31, 0x54D128u);
    ctx->pc = 0x54D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D120u;
            // 0x54d124: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x54D150u;
    if (runtime->hasFunction(0x54D150u)) {
        auto targetFn = runtime->lookupFunction(0x54D150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D128u; }
        if (ctx->pc != 0x54D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054D150_0x54d150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D128u; }
        if (ctx->pc != 0x54D128u) { return; }
    }
    ctx->pc = 0x54D128u;
label_54d128:
    // 0x54d128: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x54d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_54d12c:
    // 0x54d12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54d12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x54d130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x54d130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x54d134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54d134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x54d138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54d138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x54d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x54D13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D13Cu;
            // 0x54d140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54D144u;
    // 0x54d144: 0x0  nop
    ctx->pc = 0x54d144u;
    // NOP
    // 0x54d148: 0x0  nop
    ctx->pc = 0x54d148u;
    // NOP
    // 0x54d14c: 0x0  nop
    ctx->pc = 0x54d14cu;
    // NOP
}
