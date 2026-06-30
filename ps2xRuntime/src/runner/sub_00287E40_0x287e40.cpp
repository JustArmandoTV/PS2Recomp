#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287E40
// Address: 0x287e40 - 0x288140
void sub_00287E40_0x287e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287E40_0x287e40");
#endif

    switch (ctx->pc) {
        case 0x287e68u: goto label_287e68;
        default: break;
    }

    ctx->pc = 0x287e40u;

    // 0x287e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x287e44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x287e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x287e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x287e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x287e50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x287e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x287e58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x287e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x287e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e60: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x287E60u;
    SET_GPR_U32(ctx, 31, 0x287E68u);
    ctx->pc = 0x287E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287E60u;
            // 0x287e64: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E68u; }
        if (ctx->pc != 0x287E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E68u; }
        if (ctx->pc != 0x287E68u) { return; }
    }
    ctx->pc = 0x287E68u;
label_287e68:
    // 0x287e68: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x287e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287e6c: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x287e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x287e70: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x287e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e74: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x287e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x287e78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x287e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287e7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x287e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287e80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x287e80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x287e84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x287e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287e88: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x287E88u;
    {
        const bool branch_taken_0x287e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287e88) {
            ctx->pc = 0x287F70u;
            goto label_287f70;
        }
    }
    ctx->pc = 0x287E90u;
    // 0x287e90: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x287e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287e94: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x287e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x287e98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287e9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x287e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x287ea0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x287ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287ea4: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x287EA4u;
    {
        const bool branch_taken_0x287ea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287ea4) {
            ctx->pc = 0x287F70u;
            goto label_287f70;
        }
    }
    ctx->pc = 0x287EACu;
    // 0x287eac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x287eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287eb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x287eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x287eb4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x287eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x287eb8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x287eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287ebc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x287ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287ec0: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x287ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287ec4: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x287ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x287ec8: 0x4602201a  mula.s      $f4, $f2
    ctx->pc = 0x287ec8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x287ecc: 0x4605019d  msub.s      $f6, $f0, $f5
    ctx->pc = 0x287eccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x287ed0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x287ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x287ed4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x287ed4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287ed8: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x287ed8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x287edc: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x287edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x287ee0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x287ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x287ee4: 0xe6060004  swc1        $f6, 0x4($s0)
    ctx->pc = 0x287ee4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x287ee8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x287ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x287eec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x287eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x287ef0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x287ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ef4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x287ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287ef8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x287ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287efc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287f00: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287f00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f04: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x287f04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287f08: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x287f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x287f0c: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x287f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287f10: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x287F10u;
    {
        const bool branch_taken_0x287f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287f10) {
            ctx->pc = 0x287F38u;
            goto label_287f38;
        }
    }
    ctx->pc = 0x287F18u;
    // 0x287f18: 0x0  nop
    ctx->pc = 0x287f18u;
    // NOP
    // 0x287f1c: 0x0  nop
    ctx->pc = 0x287f1cu;
    // NOP
    // 0x287f20: 0x46001156  rsqrt.s     $f5, $f2, $f0
    ctx->pc = 0x287f20u;
    ctx->f[5] = 1.0f / sqrtf(ctx->f[2]);
    // 0x287f24: 0x0  nop
    ctx->pc = 0x287f24u;
    // NOP
    // 0x287f28: 0x0  nop
    ctx->pc = 0x287f28u;
    // NOP
    // 0x287f2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287F2Cu;
    {
        const bool branch_taken_0x287f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f2c) {
            ctx->pc = 0x287F38u;
            goto label_287f38;
        }
    }
    ctx->pc = 0x287F34u;
    // 0x287f34: 0x0  nop
    ctx->pc = 0x287f34u;
    // NOP
label_287f38:
    // 0x287f38: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x287f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f3c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x287f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x287f40: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x287f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x287f44: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x287f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f48: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x287f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x287f4c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x287f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x287f50: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x287f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f54: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x287f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x287f58: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x287f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x287f5c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x287f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f60: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x287f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x287f64: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x287F64u;
    {
        const bool branch_taken_0x287f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F64u;
            // 0x287f68: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f64) {
            ctx->pc = 0x288120u;
            goto label_288120;
        }
    }
    ctx->pc = 0x287F6Cu;
    // 0x287f6c: 0x0  nop
    ctx->pc = 0x287f6cu;
    // NOP
label_287f70:
    // 0x287f70: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x287f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f74: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x287f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287f78: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x287f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287f7c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x287f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x287f80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287f84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f88: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x287f88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287f8c: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x287f8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x287f90: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x287f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287f94: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x287F94u;
    {
        const bool branch_taken_0x287f94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F94u;
            // 0x287f98: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f94) {
            ctx->pc = 0x287FB8u;
            goto label_287fb8;
        }
    }
    ctx->pc = 0x287F9Cu;
    // 0x287f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287fa0: 0x0  nop
    ctx->pc = 0x287fa0u;
    // NOP
    // 0x287fa4: 0x46010196  rsqrt.s     $f6, $f0, $f1
    ctx->pc = 0x287fa4u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[0]);
    // 0x287fa8: 0x0  nop
    ctx->pc = 0x287fa8u;
    // NOP
    // 0x287fac: 0x0  nop
    ctx->pc = 0x287facu;
    // NOP
    // 0x287fb0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x287FB0u;
    {
        const bool branch_taken_0x287fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fb0) {
            ctx->pc = 0x287FB8u;
            goto label_287fb8;
        }
    }
    ctx->pc = 0x287FB8u;
label_287fb8:
    // 0x287fb8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x287fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x287fbc: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x287fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287fc0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x287fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x287fc4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x287fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287fc8: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x287fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x287fcc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x287fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287fd0: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x287fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x287fd4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x287fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287fd8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x287fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287fdc: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x287fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x287fe0: 0x0  nop
    ctx->pc = 0x287fe0u;
    // NOP
    // 0x287fe4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x287fe4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x287fe8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x287fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x287fec: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x287fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x287ff0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x287ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x287ff4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x287ff4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x287ff8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x287ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x287ffc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x287ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x288000: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x288000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x288004: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x288004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288008: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x288008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28800c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x28800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x288010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288014: 0x0  nop
    ctx->pc = 0x288014u;
    // NOP
    // 0x288018: 0x4603081a  mula.s      $f1, $f3
    ctx->pc = 0x288018u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28801c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x28801cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x288020: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x288020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x288024: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x288024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x288028: 0x460321dd  msub.s      $f7, $f4, $f3
    ctx->pc = 0x288028u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28802c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x28802cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x288030: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x288030u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x288034: 0x4603305d  msub.s      $f1, $f6, $f3
    ctx->pc = 0x288034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x288038: 0xe6070004  swc1        $f7, 0x4($s0)
    ctx->pc = 0x288038u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28803c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x28803cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x288040: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288044: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x288044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288048: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x288048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28804c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x28804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288050: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x288050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x288054: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x288054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x288058: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x288058u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28805c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x28805cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x288060: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288064: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x288064u;
    {
        const bool branch_taken_0x288064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288064) {
            ctx->pc = 0x2880A8u;
            goto label_2880a8;
        }
    }
    ctx->pc = 0x28806Cu;
    // 0x28806c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288070: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x288070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288074: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x288074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288078: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x288078u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28807c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28807cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x288080: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x288080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x288084: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x288084u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x288088: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x288088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28808c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28808cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x288090: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x288090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x288094: 0x4603111d  msub.s      $f4, $f2, $f3
    ctx->pc = 0x288094u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x288098: 0xe6060004  swc1        $f6, 0x4($s0)
    ctx->pc = 0x288098u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28809c: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x28809cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2880a0: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x2880a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2880a4: 0x0  nop
    ctx->pc = 0x2880a4u;
    // NOP
label_2880a8:
    // 0x2880a8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2880a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2880ac: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2880acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2880b0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2880b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2880b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2880b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2880b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2880b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2880bc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2880bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2880c0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2880c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2880c4: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x2880c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2880c8: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x2880c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2880cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2880CCu;
    {
        const bool branch_taken_0x2880cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2880cc) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x2880D4u;
    // 0x2880d4: 0x0  nop
    ctx->pc = 0x2880d4u;
    // NOP
    // 0x2880d8: 0x0  nop
    ctx->pc = 0x2880d8u;
    // NOP
    // 0x2880dc: 0x460028d6  rsqrt.s     $f3, $f5, $f0
    ctx->pc = 0x2880dcu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[5]);
    // 0x2880e0: 0x0  nop
    ctx->pc = 0x2880e0u;
    // NOP
    // 0x2880e4: 0x0  nop
    ctx->pc = 0x2880e4u;
    // NOP
    // 0x2880e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2880E8u;
    {
        const bool branch_taken_0x2880e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2880e8) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x2880F0u;
label_2880f0:
    // 0x2880f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2880f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2880f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2880f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2880f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2880f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2880fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2880fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288100: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x288100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x288104: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x288104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x288108: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x288108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28810c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28810cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x288110: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x288110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x288114: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x288114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288118: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x288118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28811c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28811cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_288120:
    // 0x288120: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28812c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28812cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288130: 0x3e00008  jr          $ra
    ctx->pc = 0x288130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288130u;
            // 0x288134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288138u;
    // 0x288138: 0x0  nop
    ctx->pc = 0x288138u;
    // NOP
    // 0x28813c: 0x0  nop
    ctx->pc = 0x28813cu;
    // NOP
}
