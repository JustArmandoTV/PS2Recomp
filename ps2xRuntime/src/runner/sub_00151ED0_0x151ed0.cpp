#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151ED0
// Address: 0x151ed0 - 0x152170
void sub_00151ED0_0x151ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151ED0_0x151ed0");
#endif

    switch (ctx->pc) {
        case 0x151f88u: goto label_151f88;
        case 0x151f98u: goto label_151f98;
        case 0x1520e0u: goto label_1520e0;
        case 0x1520f0u: goto label_1520f0;
        case 0x152100u: goto label_152100;
        case 0x152110u: goto label_152110;
        default: break;
    }

    ctx->pc = 0x151ed0u;

    // 0x151ed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151ed4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x151ed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151edc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x151edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x151ee0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151ee4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151eec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x151eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x151ef0: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151ef4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x151ef8: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x151efc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x151f00: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x151f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x151f04: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x151f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x151f08: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x151f0c: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x151f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x151f10: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F10u;
    {
        const bool branch_taken_0x151f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f10) {
            ctx->pc = 0x151F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F10u;
            // 0x151f14: 0x3c06437f  lui         $a2, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151F28u;
            goto label_151f28;
        }
    }
    ctx->pc = 0x151F18u;
    // 0x151f18: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x151f1c: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x151f1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x151f20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151F20u;
    {
        const bool branch_taken_0x151f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F20u;
            // 0x151f24: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f20) {
            ctx->pc = 0x151F30u;
            goto label_151f30;
        }
    }
    ctx->pc = 0x151F28u;
label_151f28:
    // 0x151f28: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x151f28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x151f2c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_151f30:
    // 0x151f30: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x151f30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x151f34: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x151f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x151f38: 0x54e60047  bnel        $a3, $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x151F38u;
    {
        const bool branch_taken_0x151f38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x151f38) {
            ctx->pc = 0x151F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F38u;
            // 0x151f3c: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152058u;
            goto label_152058;
        }
    }
    ctx->pc = 0x151F40u;
    // 0x151f40: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151f44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x151f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151f48: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x151f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x151f4c: 0x50c50013  beql        $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x151F4Cu;
    {
        const bool branch_taken_0x151f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151f4c) {
            ctx->pc = 0x151F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F4Cu;
            // 0x151f50: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151F9Cu;
            goto label_151f9c;
        }
    }
    ctx->pc = 0x151F54u;
    // 0x151f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f58: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x151F58u;
    {
        const bool branch_taken_0x151f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151f58) {
            ctx->pc = 0x151F98u;
            goto label_151f98;
        }
    }
    ctx->pc = 0x151F60u;
    // 0x151f60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x151f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151f64: 0x50c5000a  beql        $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x151F64u;
    {
        const bool branch_taken_0x151f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151f64) {
            ctx->pc = 0x151F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F64u;
            // 0x151f68: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151F90u;
            goto label_151f90;
        }
    }
    ctx->pc = 0x151F6Cu;
    // 0x151f6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151f70: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151F70u;
    {
        const bool branch_taken_0x151f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151f70) {
            ctx->pc = 0x151F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F70u;
            // 0x151f74: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151F80u;
            goto label_151f80;
        }
    }
    ctx->pc = 0x151F78u;
    // 0x151f78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151F78u;
    {
        const bool branch_taken_0x151f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f78) {
            ctx->pc = 0x151F98u;
            goto label_151f98;
        }
    }
    ctx->pc = 0x151F80u;
label_151f80:
    // 0x151f80: 0xc04d894  jal         func_136250
    ctx->pc = 0x151F80u;
    SET_GPR_U32(ctx, 31, 0x151F88u);
    ctx->pc = 0x151F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F80u;
            // 0x151f84: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F88u; }
        if (ctx->pc != 0x151F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F88u; }
        if (ctx->pc != 0x151F88u) { return; }
    }
    ctx->pc = 0x151F88u;
label_151f88:
    // 0x151f88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151F88u;
    {
        const bool branch_taken_0x151f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f88) {
            ctx->pc = 0x151F98u;
            goto label_151f98;
        }
    }
    ctx->pc = 0x151F90u;
label_151f90:
    // 0x151f90: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x151F90u;
    SET_GPR_U32(ctx, 31, 0x151F98u);
    ctx->pc = 0x151F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F90u;
            // 0x151f94: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F98u; }
        if (ctx->pc != 0x151F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F98u; }
        if (ctx->pc != 0x151F98u) { return; }
    }
    ctx->pc = 0x151F98u;
label_151f98:
    // 0x151f98: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x151f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151f9c:
    // 0x151f9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151fa0: 0x0  nop
    ctx->pc = 0x151fa0u;
    // NOP
    // 0x151fa4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x151fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151fa8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151FA8u;
    {
        const bool branch_taken_0x151fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151fa8) {
            ctx->pc = 0x151FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151FA8u;
            // 0x151fac: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151FB0u;
label_151fb0:
    // 0x151fb0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x151fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151fb4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fb8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x151fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x151fbc: 0x0  nop
    ctx->pc = 0x151fbcu;
    // NOP
    // 0x151fc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x151fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x151fc4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x151fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151fc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151FC8u;
    {
        const bool branch_taken_0x151fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FC8u;
            // 0x151fcc: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fc8) {
            ctx->pc = 0x151FD8u;
            goto label_151fd8;
        }
    }
    ctx->pc = 0x151FD0u;
    // 0x151fd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151FD0u;
    {
        const bool branch_taken_0x151fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FD0u;
            // 0x151fd4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fd0) {
            ctx->pc = 0x151FE0u;
            goto label_151fe0;
        }
    }
    ctx->pc = 0x151FD8u;
label_151fd8:
    // 0x151fd8: 0x4600a0c6  mov.s       $f3, $f20
    ctx->pc = 0x151fd8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[20]);
    // 0x151fdc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x151fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151fe0:
    // 0x151fe0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fe4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151fe8: 0x0  nop
    ctx->pc = 0x151fe8u;
    // NOP
    // 0x151fec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x151fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x151ff0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x151ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151ff4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151FF4u;
    {
        const bool branch_taken_0x151ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FF4u;
            // 0x151ff8: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ff4) {
            ctx->pc = 0x152004u;
            goto label_152004;
        }
    }
    ctx->pc = 0x151FFCu;
    // 0x151ffc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151FFCu;
    {
        const bool branch_taken_0x151ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FFCu;
            // 0x152000: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ffc) {
            ctx->pc = 0x15200Cu;
            goto label_15200c;
        }
    }
    ctx->pc = 0x152004u;
label_152004:
    // 0x152004: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x152004u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x152008: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x152008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15200c:
    // 0x15200c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x15200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152010: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x152010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152014: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x152014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x152018: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x152018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15201c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x15201cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x152020: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x152020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152024: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x152024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x152028: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x152028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15202c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x15202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x152030: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x152034: 0x54830046  bnel        $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x152034u;
    {
        const bool branch_taken_0x152034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x152034) {
            ctx->pc = 0x152038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152034u;
            // 0x152038: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152150u;
            goto label_152150;
        }
    }
    ctx->pc = 0x15203Cu;
    // 0x15203c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152040: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x152040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x152044: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x152044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152048: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x152048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x15204c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152050: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x152050u;
    {
        const bool branch_taken_0x152050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152050u;
            // 0x152054: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152050) {
            ctx->pc = 0x15214Cu;
            goto label_15214c;
        }
    }
    ctx->pc = 0x152058u;
label_152058:
    // 0x152058: 0x10e60009  beq         $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x152058u;
    {
        const bool branch_taken_0x152058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x15205Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152058u;
            // 0x15205c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152058) {
            ctx->pc = 0x152080u;
            goto label_152080;
        }
    }
    ctx->pc = 0x152060u;
    // 0x152060: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x152064: 0x50e60007  beql        $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x152064u;
    {
        const bool branch_taken_0x152064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x152064) {
            ctx->pc = 0x152068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152064u;
            // 0x152068: 0x26110014  addiu       $s1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152084u;
            goto label_152084;
        }
    }
    ctx->pc = 0x15206Cu;
    // 0x15206c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x152070: 0x50e60004  beql        $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x152070u;
    {
        const bool branch_taken_0x152070 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x152070) {
            ctx->pc = 0x152074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152070u;
            // 0x152074: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152084u;
            goto label_152084;
        }
    }
    ctx->pc = 0x152078u;
    // 0x152078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152078u;
    {
        const bool branch_taken_0x152078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152078) {
            ctx->pc = 0x152084u;
            goto label_152084;
        }
    }
    ctx->pc = 0x152080u;
label_152080:
    // 0x152080: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_152084:
    // 0x152084: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x152084u;
    {
        const bool branch_taken_0x152084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x152084) {
            ctx->pc = 0x15214Cu;
            goto label_15214c;
        }
    }
    ctx->pc = 0x15208Cu;
    // 0x15208c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x152090: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x152094: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x152094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x152098: 0x50c5001b  beql        $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x152098u;
    {
        const bool branch_taken_0x152098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x152098) {
            ctx->pc = 0x15209Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152098u;
            // 0x15209c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152108u;
            goto label_152108;
        }
    }
    ctx->pc = 0x1520A0u;
    // 0x1520a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1520a4: 0x50c50014  beql        $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1520A4u;
    {
        const bool branch_taken_0x1520a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1520a4) {
            ctx->pc = 0x1520A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1520A4u;
            // 0x1520a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1520F8u;
            goto label_1520f8;
        }
    }
    ctx->pc = 0x1520ACu;
    // 0x1520ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1520acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1520b0: 0x50c5000d  beql        $a2, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1520B0u;
    {
        const bool branch_taken_0x1520b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1520b0) {
            ctx->pc = 0x1520B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1520B0u;
            // 0x1520b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1520E8u;
            goto label_1520e8;
        }
    }
    ctx->pc = 0x1520B8u;
    // 0x1520b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1520b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1520bc: 0x50c50006  beql        $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1520BCu;
    {
        const bool branch_taken_0x1520bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1520bc) {
            ctx->pc = 0x1520C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1520BCu;
            // 0x1520c0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1520D8u;
            goto label_1520d8;
        }
    }
    ctx->pc = 0x1520C4u;
    // 0x1520c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1520c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1520c8: 0x50c30012  beql        $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1520C8u;
    {
        const bool branch_taken_0x1520c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1520c8) {
            ctx->pc = 0x1520CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1520C8u;
            // 0x1520cc: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x152114u;
            goto label_152114;
        }
    }
    ctx->pc = 0x1520D0u;
    // 0x1520d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1520D0u;
    {
        const bool branch_taken_0x1520d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520d0) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x1520D8u;
label_1520d8:
    // 0x1520d8: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1520D8u;
    SET_GPR_U32(ctx, 31, 0x1520E0u);
    ctx->pc = 0x1520DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520D8u;
            // 0x1520dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520E0u; }
        if (ctx->pc != 0x1520E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520E0u; }
        if (ctx->pc != 0x1520E0u) { return; }
    }
    ctx->pc = 0x1520E0u;
label_1520e0:
    // 0x1520e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1520E0u;
    {
        const bool branch_taken_0x1520e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520e0) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x1520E8u;
label_1520e8:
    // 0x1520e8: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x1520E8u;
    SET_GPR_U32(ctx, 31, 0x1520F0u);
    ctx->pc = 0x1520ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520E8u;
            // 0x1520ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520F0u; }
        if (ctx->pc != 0x1520F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520F0u; }
        if (ctx->pc != 0x1520F0u) { return; }
    }
    ctx->pc = 0x1520F0u;
label_1520f0:
    // 0x1520f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1520F0u;
    {
        const bool branch_taken_0x1520f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520f0) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x1520F8u;
label_1520f8:
    // 0x1520f8: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x1520F8u;
    SET_GPR_U32(ctx, 31, 0x152100u);
    ctx->pc = 0x1520FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520F8u;
            // 0x1520fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152100u; }
        if (ctx->pc != 0x152100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152100u; }
        if (ctx->pc != 0x152100u) { return; }
    }
    ctx->pc = 0x152100u;
label_152100:
    // 0x152100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152100) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x152108u;
label_152108:
    // 0x152108: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x152108u;
    SET_GPR_U32(ctx, 31, 0x152110u);
    ctx->pc = 0x15210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152108u;
            // 0x15210c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152110u; }
        if (ctx->pc != 0x152110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152110u; }
        if (ctx->pc != 0x152110u) { return; }
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x152110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_152114:
    // 0x152114: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152118: 0x0  nop
    ctx->pc = 0x152118u;
    // NOP
    // 0x15211c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15211cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152120: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x152120u;
    {
        const bool branch_taken_0x152120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152120) {
            ctx->pc = 0x152124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152120u;
            // 0x152124: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x152128u;
            goto label_152128;
        }
    }
    ctx->pc = 0x152128u;
label_152128:
    // 0x152128: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x152128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15212c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x152130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x152134: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x152134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x152138: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x152138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15213c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15213Cu;
    {
        const bool branch_taken_0x15213c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15213c) {
            ctx->pc = 0x15214Cu;
            goto label_15214c;
        }
    }
    ctx->pc = 0x152144u;
    // 0x152144: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x152144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152148: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x152148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_15214c:
    // 0x15214c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15214cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_152150:
    // 0x152150: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152154: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15215c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15215cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152160: 0x3e00008  jr          $ra
    ctx->pc = 0x152160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152160u;
            // 0x152164: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152168u;
    // 0x152168: 0x0  nop
    ctx->pc = 0x152168u;
    // NOP
    // 0x15216c: 0x0  nop
    ctx->pc = 0x15216cu;
    // NOP
}
