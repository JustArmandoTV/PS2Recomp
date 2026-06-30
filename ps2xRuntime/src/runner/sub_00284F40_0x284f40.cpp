#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284F40
// Address: 0x284f40 - 0x285260
void sub_00284F40_0x284f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F40_0x284f40");
#endif

    switch (ctx->pc) {
        case 0x284facu: goto label_284fac;
        case 0x284fd0u: goto label_284fd0;
        case 0x285020u: goto label_285020;
        case 0x285170u: goto label_285170;
        case 0x285230u: goto label_285230;
        default: break;
    }

    ctx->pc = 0x284f40u;

    // 0x284f40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x284f44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x284f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x284f48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x284f4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284f50: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x284f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284f58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x284f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284f60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x284f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284f68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x284f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284f74: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x284f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x284f78: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x284f7c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x284f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x284f80: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x284f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x284f84: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x284f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x284f88: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x284f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x284f8c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x284F8Cu;
    {
        const bool branch_taken_0x284f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F8Cu;
            // 0x284f90: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f8c) {
            ctx->pc = 0x284FB0u;
            goto label_284fb0;
        }
    }
    ctx->pc = 0x284F94u;
    // 0x284f94: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x284f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x284f98: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x284f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x284f9c: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x284f9cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x284fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fa4: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x284FA4u;
    SET_GPR_U32(ctx, 31, 0x284FACu);
    ctx->pc = 0x284FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FA4u;
            // 0x284fa8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FACu; }
        if (ctx->pc != 0x284FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FACu; }
        if (ctx->pc != 0x284FACu) { return; }
    }
    ctx->pc = 0x284FACu;
label_284fac:
    // 0x284fac: 0x0  nop
    ctx->pc = 0x284facu;
    // NOP
label_284fb0:
    // 0x284fb0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x284fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x284fb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x284fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x284fb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x284fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x284fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x284fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x284fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fc4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x284fc8: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x284FC8u;
    SET_GPR_U32(ctx, 31, 0x284FD0u);
    ctx->pc = 0x284FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FC8u;
            // 0x284fcc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FD0u; }
        if (ctx->pc != 0x284FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FD0u; }
        if (ctx->pc != 0x284FD0u) { return; }
    }
    ctx->pc = 0x284FD0u;
label_284fd0:
    // 0x284fd0: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x284fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284fd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x284fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fd8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x284fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284fdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x284fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fe0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x284fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284fe4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x284fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284fe8: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x284fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x284fec: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x284fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284ff0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x284ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284ff4: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x284ff4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x284ff8: 0x4602299d  msub.s      $f6, $f5, $f2
    ctx->pc = 0x284ff8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x284ffc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x284ffcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x285000: 0x4600095d  msub.s      $f5, $f1, $f0
    ctx->pc = 0x285000u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x285004: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x285004u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x285008: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x285008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x28500c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28500cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285010: 0xe6060004  swc1        $f6, 0x4($s0)
    ctx->pc = 0x285010u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285014: 0xe6050008  swc1        $f5, 0x8($s0)
    ctx->pc = 0x285014u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285018: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x285018u;
    SET_GPR_U32(ctx, 31, 0x285020u);
    ctx->pc = 0x28501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285018u;
            // 0x28501c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285020u; }
        if (ctx->pc != 0x285020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285020u; }
        if (ctx->pc != 0x285020u) { return; }
    }
    ctx->pc = 0x285020u;
label_285020:
    // 0x285020: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x285020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x285024: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x285024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x285028: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x285028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28502c: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x28502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x285030: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x285030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x285034: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x285034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285038: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x285038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28503c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x28503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285044: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x285044u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x285048: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x285048u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x28504c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x28504cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x285050: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x285050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x285054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x285054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285058: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x285058u;
    {
        const bool branch_taken_0x285058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285058) {
            ctx->pc = 0x285090u;
            goto label_285090;
        }
    }
    ctx->pc = 0x285060u;
    // 0x285060: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x285060u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x285064: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x285064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285068: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x285068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28506c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28506cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x285070: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x285070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285074: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x285074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285078: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x285078u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28507c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28507cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285080: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x285080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285084: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x285084u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x285088: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x285088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28508c: 0x0  nop
    ctx->pc = 0x28508cu;
    // NOP
label_285090:
    // 0x285090: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x285090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x285094: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x285094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285098: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x285098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x28509c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x28509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2850a0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2850a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2850a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2850a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850a8: 0x0  nop
    ctx->pc = 0x2850a8u;
    // NOP
    // 0x2850ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2850acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2850b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2850b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2850b4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2850b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2850b8: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2850b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2850bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2850bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2850c0: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x2850C0u;
    {
        const bool branch_taken_0x2850c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2850c0) {
            ctx->pc = 0x2851F8u;
            goto label_2851f8;
        }
    }
    ctx->pc = 0x2850C8u;
    // 0x2850c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2850c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2850cc: 0x0  nop
    ctx->pc = 0x2850ccu;
    // NOP
    // 0x2850d0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2850d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2850d4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2850D4u;
    {
        const bool branch_taken_0x2850d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2850d4) {
            ctx->pc = 0x285100u;
            goto label_285100;
        }
    }
    ctx->pc = 0x2850DCu;
    // 0x2850dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2850e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850e4: 0x0  nop
    ctx->pc = 0x2850e4u;
    // NOP
    // 0x2850e8: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x2850e8u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2850ec: 0x0  nop
    ctx->pc = 0x2850ecu;
    // NOP
    // 0x2850f0: 0x0  nop
    ctx->pc = 0x2850f0u;
    // NOP
    // 0x2850f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2850F4u;
    {
        const bool branch_taken_0x2850f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2850f4) {
            ctx->pc = 0x285100u;
            goto label_285100;
        }
    }
    ctx->pc = 0x2850FCu;
    // 0x2850fc: 0x0  nop
    ctx->pc = 0x2850fcu;
    // NOP
label_285100:
    // 0x285100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x285100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285104: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x285104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x285108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28510c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x28510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x285110: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x285110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x285114: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x285114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285118: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x285118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28511c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28511cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x285120: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x285120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285124: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x285124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285128: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x285128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28512c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28512cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285130: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x285130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285134: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x285134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x285138: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x285138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28513c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x28513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x285140: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x285140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285144: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x285144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285148: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x285148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28514c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x28514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285150: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x285150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285154: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x285154u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x285158: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x285158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28515c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x28515cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x285160: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x285160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x285164: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x285164u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x285168: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x285168u;
    SET_GPR_U32(ctx, 31, 0x285170u);
    ctx->pc = 0x28516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285168u;
            // 0x28516c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285170u; }
        if (ctx->pc != 0x285170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285170u; }
        if (ctx->pc != 0x285170u) { return; }
    }
    ctx->pc = 0x285170u;
label_285170:
    // 0x285170: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x285170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285174: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x285178: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x285178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28517c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x28517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x285180: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x285180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285184: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x285184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x285188: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x285188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x28518c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28518cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x285190: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x285190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x285194: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x285194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x285198: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x285198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28519c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x28519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2851a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2851a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2851a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2851a8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2851a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2851acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2851b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2851b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2851b4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2851b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2851b8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2851b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2851bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2851c0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2851c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2851c4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2851c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2851c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2851c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2851ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2851d0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2851d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2851d4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2851d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2851d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2851d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2851dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2851e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2851e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2851e4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2851e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2851e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2851e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2851ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2851ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2851f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2851F0u;
    {
        const bool branch_taken_0x2851f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851F0u;
            // 0x2851f4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851f0) {
            ctx->pc = 0x285238u;
            goto label_285238;
        }
    }
    ctx->pc = 0x2851F8u;
label_2851f8:
    // 0x2851f8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2851f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2851fc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x285200: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x285200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x285204: 0x2490ffff  addiu       $s0, $a0, -0x1
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x285208: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x285208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28520c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x28520cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285210: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x285210u;
    {
        const bool branch_taken_0x285210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x285210) {
            ctx->pc = 0x285230u;
            goto label_285230;
        }
    }
    ctx->pc = 0x285218u;
    // 0x285218: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28521c: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x28521cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x285220: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x285220u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x285224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285228: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x285228u;
    SET_GPR_U32(ctx, 31, 0x285230u);
    ctx->pc = 0x28522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285228u;
            // 0x28522c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285230u; }
        if (ctx->pc != 0x285230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285230u; }
        if (ctx->pc != 0x285230u) { return; }
    }
    ctx->pc = 0x285230u;
label_285230:
    // 0x285230: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x285230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x285234: 0x0  nop
    ctx->pc = 0x285234u;
    // NOP
label_285238:
    // 0x285238: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x285238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28523c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28523cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285240: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285244: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28524c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28524cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285258: 0x3e00008  jr          $ra
    ctx->pc = 0x285258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285258u;
            // 0x28525c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285260u;
}
