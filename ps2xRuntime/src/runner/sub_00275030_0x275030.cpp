#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275030
// Address: 0x275030 - 0x275190
void sub_00275030_0x275030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275030_0x275030");
#endif

    switch (ctx->pc) {
        case 0x275078u: goto label_275078;
        case 0x27508cu: goto label_27508c;
        case 0x2750c0u: goto label_2750c0;
        case 0x275158u: goto label_275158;
        default: break;
    }

    ctx->pc = 0x275030u;

    // 0x275030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x275030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x275034: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x275034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x275038: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x275038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27503c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x275040: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x275040u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275044: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x275044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275048: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x275048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27504c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275058: 0xa3a6007c  sb          $a2, 0x7C($sp)
    ctx->pc = 0x275058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 6));
    // 0x27505c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x27505Cu;
    {
        const bool branch_taken_0x27505c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x275060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27505Cu;
            // 0x275060: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27505c) {
            ctx->pc = 0x27506Cu;
            goto label_27506c;
        }
    }
    ctx->pc = 0x275064u;
    // 0x275064: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x275064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x275068: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_27506c:
    // 0x27506c: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x27506Cu;
    {
        const bool branch_taken_0x27506c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x27506c) {
            ctx->pc = 0x275098u;
            goto label_275098;
        }
    }
    ctx->pc = 0x275074u;
    // 0x275074: 0x0  nop
    ctx->pc = 0x275074u;
    // NOP
label_275078:
    // 0x275078: 0x83a7007c  lb          $a3, 0x7C($sp)
    ctx->pc = 0x275078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x27507c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275084: 0xc09d464  jal         func_275190
    ctx->pc = 0x275084u;
    SET_GPR_U32(ctx, 31, 0x27508Cu);
    ctx->pc = 0x275088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275084u;
            // 0x275088: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275190u;
    if (runtime->hasFunction(0x275190u)) {
        auto targetFn = runtime->lookupFunction(0x275190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27508Cu; }
        if (ctx->pc != 0x27508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275190_0x275190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27508Cu; }
        if (ctx->pc != 0x27508Cu) { return; }
    }
    ctx->pc = 0x27508Cu;
label_27508c:
    // 0x27508c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27508cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x275090: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x275090u;
    {
        const bool branch_taken_0x275090 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x275090) {
            ctx->pc = 0x275078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_275078;
        }
    }
    ctx->pc = 0x275098u;
label_275098:
    // 0x275098: 0x1a800031  blez        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x275098u;
    {
        const bool branch_taken_0x275098 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x275098) {
            ctx->pc = 0x275160u;
            goto label_275160;
        }
    }
    ctx->pc = 0x2750A0u;
    // 0x2750a0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2750a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2750a4: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2750a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2750a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2750ac: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2750b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2750b4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2750b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2750b8: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x2750b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2750bc: 0x0  nop
    ctx->pc = 0x2750bcu;
    // NOP
label_2750c0:
    // 0x2750c0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2750c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2750c4: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x2750c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2750c8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2750c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2750cc: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x2750ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2750d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2750d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750d4: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x2750d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2750d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2750d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2750dc: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2750dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2750e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2750e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750e4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2750e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2750e8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2750e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2750ec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2750ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2750f0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2750f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2750f4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2750f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2750f8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2750f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2750fc: 0x8e62ffec  lw          $v0, -0x14($s3)
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967276)));
    // 0x275100: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x275100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x275104: 0x8e62fff0  lw          $v0, -0x10($s3)
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967280)));
    // 0x275108: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x275108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x27510c: 0xc661fff4  lwc1        $f1, -0xC($s3)
    ctx->pc = 0x27510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275110: 0xc660fff8  lwc1        $f0, -0x8($s3)
    ctx->pc = 0x275110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275114: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x275114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x275118: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x275118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x27511c: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x275120: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x275120u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x275124: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x275124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275128: 0xae62ffec  sw          $v0, -0x14($s3)
    ctx->pc = 0x275128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967276), GPR_U32(ctx, 2));
    // 0x27512c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x275130: 0xae62fff0  sw          $v0, -0x10($s3)
    ctx->pc = 0x275130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967280), GPR_U32(ctx, 2));
    // 0x275134: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275138: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x275138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27513c: 0xe661fff4  swc1        $f1, -0xC($s3)
    ctx->pc = 0x27513cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294967284), bits); }
    // 0x275140: 0xe660fff8  swc1        $f0, -0x8($s3)
    ctx->pc = 0x275140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294967288), bits); }
    // 0x275144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x275144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275148: 0xae62fffc  sw          $v0, -0x4($s3)
    ctx->pc = 0x275148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 2));
    // 0x27514c: 0x83a7007c  lb          $a3, 0x7C($sp)
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x275150: 0xc09d464  jal         func_275190
    ctx->pc = 0x275150u;
    SET_GPR_U32(ctx, 31, 0x275158u);
    ctx->pc = 0x275154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275150u;
            // 0x275154: 0x2673ffec  addiu       $s3, $s3, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275190u;
    if (runtime->hasFunction(0x275190u)) {
        auto targetFn = runtime->lookupFunction(0x275190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275158u; }
        if (ctx->pc != 0x275158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275190_0x275190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275158u; }
        if (ctx->pc != 0x275158u) { return; }
    }
    ctx->pc = 0x275158u;
label_275158:
    // 0x275158: 0x1e80ffd9  bgtz        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x275158u;
    {
        const bool branch_taken_0x275158 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x275158) {
            ctx->pc = 0x2750C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2750c0;
        }
    }
    ctx->pc = 0x275160u;
label_275160:
    // 0x275160: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x275160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275164: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x275164u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275168: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27516c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27516cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27517c: 0x3e00008  jr          $ra
    ctx->pc = 0x27517Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27517Cu;
            // 0x275180: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275184u;
    // 0x275184: 0x0  nop
    ctx->pc = 0x275184u;
    // NOP
    // 0x275188: 0x0  nop
    ctx->pc = 0x275188u;
    // NOP
    // 0x27518c: 0x0  nop
    ctx->pc = 0x27518cu;
    // NOP
}
