#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028FC10
// Address: 0x28fc10 - 0x2905c0
void sub_0028FC10_0x28fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FC10_0x28fc10");
#endif

    switch (ctx->pc) {
        case 0x290510u: goto label_290510;
        default: break;
    }

    ctx->pc = 0x28fc10u;

    // 0x28fc10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fc14: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
    // 0x28fc18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28fc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28fc24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fc28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28fc28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc2c: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x28fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fc30: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28fc34: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x28fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc38: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x28fc38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x28fc3c: 0x46011242  mul.s       $f9, $f2, $f1
    ctx->pc = 0x28fc3cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28fc40: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x28fc40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fc44: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28FC44u;
    {
        const bool branch_taken_0x28fc44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC44u;
            // 0x28fc48: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc44) {
            ctx->pc = 0x28FC54u;
            goto label_28fc54;
        }
    }
    ctx->pc = 0x28FC4Cu;
    // 0x28fc4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FC4Cu;
    {
        const bool branch_taken_0x28fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC4Cu;
            // 0x28fc50: 0xc6050020  lwc1        $f5, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc4c) {
            ctx->pc = 0x28FC5Cu;
            goto label_28fc5c;
        }
    }
    ctx->pc = 0x28FC54u;
label_28fc54:
    // 0x28fc54: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x28fc54u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x28fc58: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x28fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28fc5c:
    // 0x28fc5c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x28fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc60: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x28fc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28fc64: 0xc6070028  lwc1        $f7, 0x28($s0)
    ctx->pc = 0x28fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28fc68: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x28fc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x28fc6c: 0xc608002c  lwc1        $f8, 0x2C($s0)
    ctx->pc = 0x28fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28fc70: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x28fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fc74: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x28fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fc78: 0xc604003c  lwc1        $f4, 0x3C($s0)
    ctx->pc = 0x28fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fc7c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x28fc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x28fc80: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x28fc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x28fc84: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x28fc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x28fc88: 0x46033800  add.s       $f0, $f7, $f3
    ctx->pc = 0x28fc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x28fc8c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x28fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x28fc90: 0x46044000  add.s       $f0, $f8, $f4
    ctx->pc = 0x28fc90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x28fc94: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x28fc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x28fc98: 0xc60b0034  lwc1        $f11, 0x34($s0)
    ctx->pc = 0x28fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28fc9c: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x28fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28fca0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x28fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fca4: 0x460b581a  mula.s      $f11, $f11
    ctx->pc = 0x28fca4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x28fca8: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x28fca8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x28fcac: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28fcacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28fcb0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x28fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fcb4: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x28fcb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x28fcb8: 0x4600029c  madd.s      $f10, $f0, $f0
    ctx->pc = 0x28fcb8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28fcbc: 0x460b5032  c.eq.s      $f10, $f11
    ctx->pc = 0x28fcbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fcc0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28FCC0u;
    {
        const bool branch_taken_0x28fcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28fcc0) {
            ctx->pc = 0x28FCE4u;
            goto label_28fce4;
        }
    }
    ctx->pc = 0x28FCC8u;
    // 0x28fcc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28fccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fcccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fcd0: 0x0  nop
    ctx->pc = 0x28fcd0u;
    // NOP
    // 0x28fcd4: 0x460a02d6  rsqrt.s     $f11, $f0, $f10
    ctx->pc = 0x28fcd4u;
    ctx->f[11] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28fcd8: 0x0  nop
    ctx->pc = 0x28fcd8u;
    // NOP
    // 0x28fcdc: 0x0  nop
    ctx->pc = 0x28fcdcu;
    // NOP
    // 0x28fce0: 0x0  nop
    ctx->pc = 0x28fce0u;
    // NOP
label_28fce4:
    // 0x28fce4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28fce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fcec: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x28fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28fcf0: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x28fcf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fcf4: 0x460b5002  mul.s       $f0, $f10, $f11
    ctx->pc = 0x28fcf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x28fcf8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x28fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x28fcfc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x28fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd00: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28fd00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x28fd04: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x28fd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x28fd08: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x28fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd0c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28fd0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x28fd10: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x28fd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x28fd14: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x28fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd18: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28fd18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x28fd1c: 0x45000099  bc1f        . + 4 + (0x99 << 2)
    ctx->pc = 0x28FD1Cu;
    {
        const bool branch_taken_0x28fd1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD1Cu;
            // 0x28fd20: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd1c) {
            ctx->pc = 0x28FF84u;
            goto label_28ff84;
        }
    }
    ctx->pc = 0x28FD24u;
    // 0x28fd24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28fd28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x28fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x28fd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fd30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fd34: 0x46090082  mul.s       $f2, $f0, $f9
    ctx->pc = 0x28fd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x28fd38: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28fd3c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x28fd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fd40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28fd40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fd44: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x28fd44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fd48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FD48u;
    {
        const bool branch_taken_0x28fd48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD48u;
            // 0x28fd4c: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd48) {
            ctx->pc = 0x28FD54u;
            goto label_28fd54;
        }
    }
    ctx->pc = 0x28FD50u;
    // 0x28fd50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fd54:
    // 0x28fd54: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD54u;
    {
        const bool branch_taken_0x28fd54 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fd54) {
            ctx->pc = 0x28FD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD54u;
            // 0x28fd58: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FD68u;
            goto label_28fd68;
        }
    }
    ctx->pc = 0x28FD5Cu;
    // 0x28fd5c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fd5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fd60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FD60u;
    {
        const bool branch_taken_0x28fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD60u;
            // 0x28fd64: 0x46801aa0  cvt.s.w     $f10, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd60) {
            ctx->pc = 0x28FD80u;
            goto label_28fd80;
        }
    }
    ctx->pc = 0x28FD68u;
label_28fd68:
    // 0x28fd68: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fd6c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fd70: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fd70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fd74: 0x0  nop
    ctx->pc = 0x28fd74u;
    // NOP
    // 0x28fd78: 0x46801aa0  cvt.s.w     $f10, $f3
    ctx->pc = 0x28fd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x28fd7c: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x28fd7cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_28fd80:
    // 0x28fd80: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x28fd80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fd84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fd88: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x28fd88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28fd8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FD8Cu;
    {
        const bool branch_taken_0x28fd8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD8Cu;
            // 0x28fd90: 0x4605091c  madd.s      $f4, $f1, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd8c) {
            ctx->pc = 0x28FD98u;
            goto label_28fd98;
        }
    }
    ctx->pc = 0x28FD94u;
    // 0x28fd94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fd98:
    // 0x28fd98: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD98u;
    {
        const bool branch_taken_0x28fd98 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fd98) {
            ctx->pc = 0x28FD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD98u;
            // 0x28fd9c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FDACu;
            goto label_28fdac;
        }
    }
    ctx->pc = 0x28FDA0u;
    // 0x28fda0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fda0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fda4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FDA4u;
    {
        const bool branch_taken_0x28fda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDA4u;
            // 0x28fda8: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fda4) {
            ctx->pc = 0x28FDC4u;
            goto label_28fdc4;
        }
    }
    ctx->pc = 0x28FDACu;
label_28fdac:
    // 0x28fdac: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fdb0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fdb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fdb4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fdb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fdb8: 0x0  nop
    ctx->pc = 0x28fdb8u;
    // NOP
    // 0x28fdbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28fdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28fdc0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28fdc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28fdc4:
    // 0x28fdc4: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x28fdc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28fdc8: 0x460a28dc  madd.s      $f3, $f5, $f10
    ctx->pc = 0x28fdc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x28fdcc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28fdccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28fdd0: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x28fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fdd4: 0x46043032  c.eq.s      $f6, $f4
    ctx->pc = 0x28fdd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fdd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FDD8u;
    {
        const bool branch_taken_0x28fdd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDD8u;
            // 0x28fddc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd8) {
            ctx->pc = 0x28FDE4u;
            goto label_28fde4;
        }
    }
    ctx->pc = 0x28FDE0u;
    // 0x28fde0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fde4:
    // 0x28fde4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FDE4u;
    {
        const bool branch_taken_0x28fde4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fde4) {
            ctx->pc = 0x28FDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDE4u;
            // 0x28fde8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FDF8u;
            goto label_28fdf8;
        }
    }
    ctx->pc = 0x28FDECu;
    // 0x28fdec: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fdecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fdf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FDF0u;
    {
        const bool branch_taken_0x28fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDF0u;
            // 0x28fdf4: 0x46801960  cvt.s.w     $f5, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdf0) {
            ctx->pc = 0x28FE10u;
            goto label_28fe10;
        }
    }
    ctx->pc = 0x28FDF8u;
label_28fdf8:
    // 0x28fdf8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fdf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fdfc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fe00: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fe00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe04: 0x0  nop
    ctx->pc = 0x28fe04u;
    // NOP
    // 0x28fe08: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x28fe08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x28fe0c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x28fe0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_28fe10:
    // 0x28fe10: 0x46043032  c.eq.s      $f6, $f4
    ctx->pc = 0x28fe10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fe14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fe18: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x28fe18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28fe1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FE1Cu;
    {
        const bool branch_taken_0x28fe1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE1Cu;
            // 0x28fe20: 0x4606091c  madd.s      $f4, $f1, $f6 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe1c) {
            ctx->pc = 0x28FE28u;
            goto label_28fe28;
        }
    }
    ctx->pc = 0x28FE24u;
    // 0x28fe24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fe28:
    // 0x28fe28: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE28u;
    {
        const bool branch_taken_0x28fe28 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fe28) {
            ctx->pc = 0x28FE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE28u;
            // 0x28fe2c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FE3Cu;
            goto label_28fe3c;
        }
    }
    ctx->pc = 0x28FE30u;
    // 0x28fe30: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fe30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FE34u;
    {
        const bool branch_taken_0x28fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE34u;
            // 0x28fe38: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe34) {
            ctx->pc = 0x28FE54u;
            goto label_28fe54;
        }
    }
    ctx->pc = 0x28FE3Cu;
label_28fe3c:
    // 0x28fe3c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fe40: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fe40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fe44: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fe44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe48: 0x0  nop
    ctx->pc = 0x28fe48u;
    // NOP
    // 0x28fe4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28fe4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28fe50: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28fe50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28fe54:
    // 0x28fe54: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x28fe54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28fe58: 0x460530dc  madd.s      $f3, $f6, $f5
    ctx->pc = 0x28fe58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x28fe5c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x28fe5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28fe60: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x28fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fe64: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x28fe64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fe68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FE68u;
    {
        const bool branch_taken_0x28fe68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE68u;
            // 0x28fe6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe68) {
            ctx->pc = 0x28FE74u;
            goto label_28fe74;
        }
    }
    ctx->pc = 0x28FE70u;
    // 0x28fe70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fe74:
    // 0x28fe74: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE74u;
    {
        const bool branch_taken_0x28fe74 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fe74) {
            ctx->pc = 0x28FE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE74u;
            // 0x28fe78: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FE88u;
            goto label_28fe88;
        }
    }
    ctx->pc = 0x28FE7Cu;
    // 0x28fe7c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fe7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FE80u;
    {
        const bool branch_taken_0x28fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE80u;
            // 0x28fe84: 0x46801960  cvt.s.w     $f5, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe80) {
            ctx->pc = 0x28FEA0u;
            goto label_28fea0;
        }
    }
    ctx->pc = 0x28FE88u;
label_28fe88:
    // 0x28fe88: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fe88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fe8c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fe8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fe90: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fe90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe94: 0x0  nop
    ctx->pc = 0x28fe94u;
    // NOP
    // 0x28fe98: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x28fe98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x28fe9c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x28fe9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_28fea0:
    // 0x28fea0: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x28fea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fea8: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x28fea8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28feac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FEACu;
    {
        const bool branch_taken_0x28feac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEACu;
            // 0x28feb0: 0x4607091c  madd.s      $f4, $f1, $f7 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28feac) {
            ctx->pc = 0x28FEB8u;
            goto label_28feb8;
        }
    }
    ctx->pc = 0x28FEB4u;
    // 0x28feb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28feb8:
    // 0x28feb8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FEB8u;
    {
        const bool branch_taken_0x28feb8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28feb8) {
            ctx->pc = 0x28FEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEB8u;
            // 0x28febc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FECCu;
            goto label_28fecc;
        }
    }
    ctx->pc = 0x28FEC0u;
    // 0x28fec0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28fec0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FEC4u;
    {
        const bool branch_taken_0x28fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEC4u;
            // 0x28fec8: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fec4) {
            ctx->pc = 0x28FEE4u;
            goto label_28fee4;
        }
    }
    ctx->pc = 0x28FECCu;
label_28fecc:
    // 0x28fecc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28feccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fed0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fed4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28fed4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fed8: 0x0  nop
    ctx->pc = 0x28fed8u;
    // NOP
    // 0x28fedc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28fedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28fee0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28fee0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28fee4:
    // 0x28fee4: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x28fee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28fee8: 0x460538dc  madd.s      $f3, $f7, $f5
    ctx->pc = 0x28fee8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x28feec: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x28feecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28fef0: 0xc604003c  lwc1        $f4, 0x3C($s0)
    ctx->pc = 0x28fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fef4: 0x46044032  c.eq.s      $f8, $f4
    ctx->pc = 0x28fef4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fef8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FEF8u;
    {
        const bool branch_taken_0x28fef8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEF8u;
            // 0x28fefc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fef8) {
            ctx->pc = 0x28FF04u;
            goto label_28ff04;
        }
    }
    ctx->pc = 0x28FF00u;
    // 0x28ff00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ff04:
    // 0x28ff04: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FF04u;
    {
        const bool branch_taken_0x28ff04 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28ff04) {
            ctx->pc = 0x28FF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF04u;
            // 0x28ff08: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FF18u;
            goto label_28ff18;
        }
    }
    ctx->pc = 0x28FF0Cu;
    // 0x28ff0c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28ff0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28ff10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FF10u;
    {
        const bool branch_taken_0x28ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF10u;
            // 0x28ff14: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff10) {
            ctx->pc = 0x28FF30u;
            goto label_28ff30;
        }
    }
    ctx->pc = 0x28FF18u;
label_28ff18:
    // 0x28ff18: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28ff18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28ff1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28ff1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28ff20: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28ff20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28ff24: 0x0  nop
    ctx->pc = 0x28ff24u;
    // NOP
    // 0x28ff28: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28ff28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28ff2c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28ff2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28ff30:
    // 0x28ff30: 0x46044032  c.eq.s      $f8, $f4
    ctx->pc = 0x28ff30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ff34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff38: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x28ff38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28ff3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FF3Cu;
    {
        const bool branch_taken_0x28ff3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF3Cu;
            // 0x28ff40: 0x4608089c  madd.s      $f2, $f1, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff3c) {
            ctx->pc = 0x28FF48u;
            goto label_28ff48;
        }
    }
    ctx->pc = 0x28FF44u;
    // 0x28ff44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ff44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ff48:
    // 0x28ff48: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FF48u;
    {
        const bool branch_taken_0x28ff48 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28ff48) {
            ctx->pc = 0x28FF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF48u;
            // 0x28ff4c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FF5Cu;
            goto label_28ff5c;
        }
    }
    ctx->pc = 0x28FF50u;
    // 0x28ff50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28ff50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ff54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FF54u;
    {
        const bool branch_taken_0x28ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF54u;
            // 0x28ff58: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff54) {
            ctx->pc = 0x28FF74u;
            goto label_28ff74;
        }
    }
    ctx->pc = 0x28FF5Cu;
label_28ff5c:
    // 0x28ff5c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28ff5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28ff60: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28ff60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28ff64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28ff64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ff68: 0x0  nop
    ctx->pc = 0x28ff68u;
    // NOP
    // 0x28ff6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28ff6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28ff70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28ff70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28ff74:
    // 0x28ff74: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28ff74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28ff78: 0x4603405c  madd.s      $f1, $f8, $f3
    ctx->pc = 0x28ff78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x28ff7c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x28FF7Cu;
    {
        const bool branch_taken_0x28ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF7Cu;
            // 0x28ff80: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff7c) {
            ctx->pc = 0x2901ECu;
            goto label_2901ec;
        }
    }
    ctx->pc = 0x28FF84u;
label_28ff84:
    // 0x28ff84: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x28ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x28ff88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28ff8c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x28ff8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28ff90: 0x0  nop
    ctx->pc = 0x28ff90u;
    // NOP
    // 0x28ff94: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x28ff94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x28ff98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ffa0: 0x0  nop
    ctx->pc = 0x28ffa0u;
    // NOP
    // 0x28ffa4: 0x46002981  sub.s       $f6, $f5, $f0
    ctx->pc = 0x28ffa4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x28ffa8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x28ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28ffac: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x28ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28ffb0: 0x46015032  c.eq.s      $f10, $f1
    ctx->pc = 0x28ffb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ffb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FFB4u;
    {
        const bool branch_taken_0x28ffb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFB4u;
            // 0x28ffb8: 0x46060141  sub.s       $f5, $f0, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb4) {
            ctx->pc = 0x28FFC0u;
            goto label_28ffc0;
        }
    }
    ctx->pc = 0x28FFBCu;
    // 0x28ffbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ffc0:
    // 0x28ffc0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FFC0u;
    {
        const bool branch_taken_0x28ffc0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28ffc0) {
            ctx->pc = 0x28FFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFC0u;
            // 0x28ffc4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28FFC8u;
    // 0x28ffc8: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x28ffc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x28ffcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FFCCu;
    {
        const bool branch_taken_0x28ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFCCu;
            // 0x28ffd0: 0x46803a20  cvt.s.w     $f8, $f7 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffcc) {
            ctx->pc = 0x28FFECu;
            goto label_28ffec;
        }
    }
    ctx->pc = 0x28FFD4u;
label_28ffd4:
    // 0x28ffd4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28ffd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28ffd8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28ffd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28ffdc: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x28ffdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x28ffe0: 0x0  nop
    ctx->pc = 0x28ffe0u;
    // NOP
    // 0x28ffe4: 0x46803a20  cvt.s.w     $f8, $f7
    ctx->pc = 0x28ffe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x28ffe8: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x28ffe8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_28ffec:
    // 0x28ffec: 0x46015032  c.eq.s      $f10, $f1
    ctx->pc = 0x28ffecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fff4: 0x4601301a  mula.s      $f6, $f1
    ctx->pc = 0x28fff4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28fff8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FFF8u;
    {
        const bool branch_taken_0x28fff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFF8u;
            // 0x28fffc: 0x460a29dc  madd.s      $f7, $f5, $f10 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fff8) {
            ctx->pc = 0x290004u;
            goto label_290004;
        }
    }
    ctx->pc = 0x290000u;
    // 0x290000: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290004:
    // 0x290004: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290004u;
    {
        const bool branch_taken_0x290004 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290004) {
            ctx->pc = 0x290008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290004u;
            // 0x290008: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290018u;
            goto label_290018;
        }
    }
    ctx->pc = 0x29000Cu;
    // 0x29000c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29000cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290010u;
    {
        const bool branch_taken_0x290010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290010u;
            // 0x290014: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290010) {
            ctx->pc = 0x290030u;
            goto label_290030;
        }
    }
    ctx->pc = 0x290018u;
label_290018:
    // 0x290018: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29001c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29001cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290020: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290020u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290024: 0x0  nop
    ctx->pc = 0x290024u;
    // NOP
    // 0x290028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29002c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29002cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290030:
    // 0x290030: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x290030u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x290034: 0x4608505c  madd.s      $f1, $f10, $f8
    ctx->pc = 0x290034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x290038: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x290038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29003c: 0xc6080034  lwc1        $f8, 0x34($s0)
    ctx->pc = 0x29003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x290040: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x290040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290044: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290044u;
    {
        const bool branch_taken_0x290044 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290044u;
            // 0x290048: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290044) {
            ctx->pc = 0x290050u;
            goto label_290050;
        }
    }
    ctx->pc = 0x29004Cu;
    // 0x29004c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290050:
    // 0x290050: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290050u;
    {
        const bool branch_taken_0x290050 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290050) {
            ctx->pc = 0x290054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290050u;
            // 0x290054: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290064u;
            goto label_290064;
        }
    }
    ctx->pc = 0x290058u;
    // 0x290058: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29005c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29005Cu;
    {
        const bool branch_taken_0x29005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29005Cu;
            // 0x290060: 0x468009e0  cvt.s.w     $f7, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29005c) {
            ctx->pc = 0x29007Cu;
            goto label_29007c;
        }
    }
    ctx->pc = 0x290064u;
label_290064:
    // 0x290064: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290068: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29006c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29006cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290070: 0x0  nop
    ctx->pc = 0x290070u;
    // NOP
    // 0x290074: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x290074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x290078: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x290078u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_29007c:
    // 0x29007c: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x29007cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290084: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x290084u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x290088: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290088u;
    {
        const bool branch_taken_0x290088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290088u;
            // 0x29008c: 0x4608289c  madd.s      $f2, $f5, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290088) {
            ctx->pc = 0x290094u;
            goto label_290094;
        }
    }
    ctx->pc = 0x290090u;
    // 0x290090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290094:
    // 0x290094: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290094u;
    {
        const bool branch_taken_0x290094 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290094) {
            ctx->pc = 0x290098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290094u;
            // 0x290098: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2900A8u;
            goto label_2900a8;
        }
    }
    ctx->pc = 0x29009Cu;
    // 0x29009c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29009cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2900a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2900A0u;
    {
        const bool branch_taken_0x2900a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900A0u;
            // 0x2900a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900a0) {
            ctx->pc = 0x2900C0u;
            goto label_2900c0;
        }
    }
    ctx->pc = 0x2900A8u;
label_2900a8:
    // 0x2900a8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2900a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2900ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2900acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2900b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2900b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2900b4: 0x0  nop
    ctx->pc = 0x2900b4u;
    // NOP
    // 0x2900b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2900b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2900bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2900bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2900c0:
    // 0x2900c0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2900c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2900c4: 0x4607405c  madd.s      $f1, $f8, $f7
    ctx->pc = 0x2900c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x2900c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2900c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2900cc: 0xc6080038  lwc1        $f8, 0x38($s0)
    ctx->pc = 0x2900ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2900d0: 0x46034032  c.eq.s      $f8, $f3
    ctx->pc = 0x2900d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2900d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2900D4u;
    {
        const bool branch_taken_0x2900d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2900D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900D4u;
            // 0x2900d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900d4) {
            ctx->pc = 0x2900E0u;
            goto label_2900e0;
        }
    }
    ctx->pc = 0x2900DCu;
    // 0x2900dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2900dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2900e0:
    // 0x2900e0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2900E0u;
    {
        const bool branch_taken_0x2900e0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2900e0) {
            ctx->pc = 0x2900E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2900E0u;
            // 0x2900e4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2900F4u;
            goto label_2900f4;
        }
    }
    ctx->pc = 0x2900E8u;
    // 0x2900e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2900e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2900ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2900ECu;
    {
        const bool branch_taken_0x2900ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900ECu;
            // 0x2900f0: 0x468009e0  cvt.s.w     $f7, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900ec) {
            ctx->pc = 0x29010Cu;
            goto label_29010c;
        }
    }
    ctx->pc = 0x2900F4u;
label_2900f4:
    // 0x2900f4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2900f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2900f8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2900fc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2900fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290100: 0x0  nop
    ctx->pc = 0x290100u;
    // NOP
    // 0x290104: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x290104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x290108: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x290108u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_29010c:
    // 0x29010c: 0x46034032  c.eq.s      $f8, $f3
    ctx->pc = 0x29010cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290114: 0x4603301a  mula.s      $f6, $f3
    ctx->pc = 0x290114u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x290118: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290118u;
    {
        const bool branch_taken_0x290118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290118u;
            // 0x29011c: 0x4608289c  madd.s      $f2, $f5, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290118) {
            ctx->pc = 0x290124u;
            goto label_290124;
        }
    }
    ctx->pc = 0x290120u;
    // 0x290120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290124:
    // 0x290124: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290124u;
    {
        const bool branch_taken_0x290124 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290124) {
            ctx->pc = 0x290128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290124u;
            // 0x290128: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290138u;
            goto label_290138;
        }
    }
    ctx->pc = 0x29012Cu;
    // 0x29012c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29012cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290130u;
    {
        const bool branch_taken_0x290130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290130u;
            // 0x290134: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290130) {
            ctx->pc = 0x290150u;
            goto label_290150;
        }
    }
    ctx->pc = 0x290138u;
label_290138:
    // 0x290138: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29013c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29013cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290140: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290140u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290144: 0x0  nop
    ctx->pc = 0x290144u;
    // NOP
    // 0x290148: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29014c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29014cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290150:
    // 0x290150: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290150u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290154: 0x4607405c  madd.s      $f1, $f8, $f7
    ctx->pc = 0x290154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x290158: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x290158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29015c: 0xc607003c  lwc1        $f7, 0x3C($s0)
    ctx->pc = 0x29015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x290160: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x290160u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290164: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290164u;
    {
        const bool branch_taken_0x290164 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290164u;
            // 0x290168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290164) {
            ctx->pc = 0x290170u;
            goto label_290170;
        }
    }
    ctx->pc = 0x29016Cu;
    // 0x29016c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290170:
    // 0x290170: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290170u;
    {
        const bool branch_taken_0x290170 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290170) {
            ctx->pc = 0x290174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290170u;
            // 0x290174: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290184u;
            goto label_290184;
        }
    }
    ctx->pc = 0x290178u;
    // 0x290178: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290178u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29017c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29017Cu;
    {
        const bool branch_taken_0x29017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29017Cu;
            // 0x290180: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29017c) {
            ctx->pc = 0x29019Cu;
            goto label_29019c;
        }
    }
    ctx->pc = 0x290184u;
label_290184:
    // 0x290184: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290188: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29018c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29018cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290190: 0x0  nop
    ctx->pc = 0x290190u;
    // NOP
    // 0x290194: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x290194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290198: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290198u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_29019c:
    // 0x29019c: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x29019cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2901a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2901a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2901a4: 0x4604301a  mula.s      $f6, $f4
    ctx->pc = 0x2901a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2901a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2901A8u;
    {
        const bool branch_taken_0x2901a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2901ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901A8u;
            // 0x2901ac: 0x4607289c  madd.s      $f2, $f5, $f7 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901a8) {
            ctx->pc = 0x2901B4u;
            goto label_2901b4;
        }
    }
    ctx->pc = 0x2901B0u;
    // 0x2901b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2901b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2901b4:
    // 0x2901b4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2901B4u;
    {
        const bool branch_taken_0x2901b4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2901b4) {
            ctx->pc = 0x2901B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2901B4u;
            // 0x2901b8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2901C8u;
            goto label_2901c8;
        }
    }
    ctx->pc = 0x2901BCu;
    // 0x2901bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2901bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2901c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2901C0u;
    {
        const bool branch_taken_0x2901c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901C0u;
            // 0x2901c4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901c0) {
            ctx->pc = 0x2901E0u;
            goto label_2901e0;
        }
    }
    ctx->pc = 0x2901C8u;
label_2901c8:
    // 0x2901c8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2901c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2901cc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2901ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2901d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2901d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2901d4: 0x0  nop
    ctx->pc = 0x2901d4u;
    // NOP
    // 0x2901d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2901d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2901dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2901dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2901e0:
    // 0x2901e0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2901e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2901e4: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x2901e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x2901e8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2901e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2901ec:
    // 0x2901ec: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2901ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2901f0: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x2901f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2901f4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2901f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2901f8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x2901f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2901fc: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2901fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x290200: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x290200u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x290204: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x290204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290208: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x290208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29020c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x29020cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x290210: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x290210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290214: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x290214u;
    {
        const bool branch_taken_0x290214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290214) {
            ctx->pc = 0x290234u;
            goto label_290234;
        }
    }
    ctx->pc = 0x29021Cu;
    // 0x29021c: 0x0  nop
    ctx->pc = 0x29021cu;
    // NOP
    // 0x290220: 0x0  nop
    ctx->pc = 0x290220u;
    // NOP
    // 0x290224: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x290224u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
    // 0x290228: 0x0  nop
    ctx->pc = 0x290228u;
    // NOP
    // 0x29022c: 0x0  nop
    ctx->pc = 0x29022cu;
    // NOP
    // 0x290230: 0x0  nop
    ctx->pc = 0x290230u;
    // NOP
label_290234:
    // 0x290234: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290238: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x290238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29023c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x29023cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x290240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290244: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290248: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x290248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x29024c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x29024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290250: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290254: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x290254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x290258: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x290258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29025c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29025cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290260: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x290260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x290264: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x290264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290268: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29026c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x29026cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x290270: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290274: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x290274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290278: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x290278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29027c: 0x46090843  div.s       $f1, $f1, $f9
    ctx->pc = 0x29027cu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[9];
    // 0x290280: 0x0  nop
    ctx->pc = 0x290280u;
    // NOP
    // 0x290284: 0x0  nop
    ctx->pc = 0x290284u;
    // NOP
    // 0x290288: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x290288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29028c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29028Cu;
    {
        const bool branch_taken_0x29028c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29028c) {
            ctx->pc = 0x290298u;
            goto label_290298;
        }
    }
    ctx->pc = 0x290294u;
    // 0x290294: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290298:
    // 0x290298: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290298u;
    {
        const bool branch_taken_0x290298 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290298) {
            ctx->pc = 0x29029Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290298u;
            // 0x29029c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2902ACu;
            goto label_2902ac;
        }
    }
    ctx->pc = 0x2902A0u;
    // 0x2902a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2902a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2902a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2902A4u;
    {
        const bool branch_taken_0x2902a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902A4u;
            // 0x2902a8: 0x46801120  cvt.s.w     $f4, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902a4) {
            ctx->pc = 0x2902C4u;
            goto label_2902c4;
        }
    }
    ctx->pc = 0x2902ACu;
label_2902ac:
    // 0x2902ac: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2902acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2902b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2902b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2902b4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2902b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2902b8: 0x0  nop
    ctx->pc = 0x2902b8u;
    // NOP
    // 0x2902bc: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x2902bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2902c0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2902c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_2902c4:
    // 0x2902c4: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x2902c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2902c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2902cc: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x2902ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2902d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2902D0u;
    {
        const bool branch_taken_0x2902d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2902D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902D0u;
            // 0x2902d4: 0x460500dc  madd.s      $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902d0) {
            ctx->pc = 0x2902DCu;
            goto label_2902dc;
        }
    }
    ctx->pc = 0x2902D8u;
    // 0x2902d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2902d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2902dc:
    // 0x2902dc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2902DCu;
    {
        const bool branch_taken_0x2902dc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2902dc) {
            ctx->pc = 0x2902E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2902DCu;
            // 0x2902e0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902E4u;
    // 0x2902e4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2902e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2902e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2902E8u;
    {
        const bool branch_taken_0x2902e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902E8u;
            // 0x2902ec: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902e8) {
            ctx->pc = 0x290308u;
            goto label_290308;
        }
    }
    ctx->pc = 0x2902F0u;
label_2902f0:
    // 0x2902f0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2902f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2902f4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2902f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2902f8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2902f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2902fc: 0x0  nop
    ctx->pc = 0x2902fcu;
    // NOP
    // 0x290300: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290304: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x290304u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_290308:
    // 0x290308: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x290308u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29030c: 0x4604289c  madd.s      $f2, $f5, $f4
    ctx->pc = 0x29030cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x290310: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x290310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290314: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x290314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290318: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x290318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29031c: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x29031cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290320u;
    {
        const bool branch_taken_0x290320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290320u;
            // 0x290324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290320) {
            ctx->pc = 0x29032Cu;
            goto label_29032c;
        }
    }
    ctx->pc = 0x290328u;
    // 0x290328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29032c:
    // 0x29032c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29032Cu;
    {
        const bool branch_taken_0x29032c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29032c) {
            ctx->pc = 0x290330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29032Cu;
            // 0x290330: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290340u;
            goto label_290340;
        }
    }
    ctx->pc = 0x290334u;
    // 0x290334: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x290334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290338: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290338u;
    {
        const bool branch_taken_0x290338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290338u;
            // 0x29033c: 0x46801120  cvt.s.w     $f4, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290338) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x290340u;
label_290340:
    // 0x290340: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290344: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290348: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x290348u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29034c: 0x0  nop
    ctx->pc = 0x29034cu;
    // NOP
    // 0x290350: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x290350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x290354: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x290354u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_290358:
    // 0x290358: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x290358u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29035c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290360: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x290360u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x290364: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290364u;
    {
        const bool branch_taken_0x290364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290364u;
            // 0x290368: 0x460500dc  madd.s      $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290364) {
            ctx->pc = 0x290370u;
            goto label_290370;
        }
    }
    ctx->pc = 0x29036Cu;
    // 0x29036c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290370:
    // 0x290370: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290370u;
    {
        const bool branch_taken_0x290370 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290370) {
            ctx->pc = 0x290374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290370u;
            // 0x290374: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290384u;
            goto label_290384;
        }
    }
    ctx->pc = 0x290378u;
    // 0x290378: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x290378u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29037c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29037Cu;
    {
        const bool branch_taken_0x29037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29037Cu;
            // 0x290380: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29037c) {
            ctx->pc = 0x29039Cu;
            goto label_29039c;
        }
    }
    ctx->pc = 0x290384u;
label_290384:
    // 0x290384: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290388: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29038c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x29038cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290390: 0x0  nop
    ctx->pc = 0x290390u;
    // NOP
    // 0x290394: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290398: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x290398u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29039c:
    // 0x29039c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x29039cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2903a0: 0x4604289c  madd.s      $f2, $f5, $f4
    ctx->pc = 0x2903a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2903a4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2903a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2903a8: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x2903a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2903ac: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2903acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2903b0: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x2903b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2903b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2903B4u;
    {
        const bool branch_taken_0x2903b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2903B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903B4u;
            // 0x2903b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903b4) {
            ctx->pc = 0x2903C0u;
            goto label_2903c0;
        }
    }
    ctx->pc = 0x2903BCu;
    // 0x2903bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2903bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2903c0:
    // 0x2903c0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2903C0u;
    {
        const bool branch_taken_0x2903c0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2903c0) {
            ctx->pc = 0x2903C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2903C0u;
            // 0x2903c4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2903D4u;
            goto label_2903d4;
        }
    }
    ctx->pc = 0x2903C8u;
    // 0x2903c8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2903c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2903cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2903CCu;
    {
        const bool branch_taken_0x2903cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903CCu;
            // 0x2903d0: 0x46801120  cvt.s.w     $f4, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903cc) {
            ctx->pc = 0x2903ECu;
            goto label_2903ec;
        }
    }
    ctx->pc = 0x2903D4u;
label_2903d4:
    // 0x2903d4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2903d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2903d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2903d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2903dc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2903dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2903e0: 0x0  nop
    ctx->pc = 0x2903e0u;
    // NOP
    // 0x2903e4: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x2903e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2903e8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2903e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_2903ec:
    // 0x2903ec: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x2903ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2903f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2903f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903f4: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x2903f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2903f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2903F8u;
    {
        const bool branch_taken_0x2903f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2903FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903F8u;
            // 0x2903fc: 0x460500dc  madd.s      $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903f8) {
            ctx->pc = 0x290404u;
            goto label_290404;
        }
    }
    ctx->pc = 0x290400u;
    // 0x290400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290404:
    // 0x290404: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290404u;
    {
        const bool branch_taken_0x290404 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290404) {
            ctx->pc = 0x290408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290404u;
            // 0x290408: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290418u;
            goto label_290418;
        }
    }
    ctx->pc = 0x29040Cu;
    // 0x29040c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29040cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290410u;
    {
        const bool branch_taken_0x290410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290410u;
            // 0x290414: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290410) {
            ctx->pc = 0x290430u;
            goto label_290430;
        }
    }
    ctx->pc = 0x290418u;
label_290418:
    // 0x290418: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29041c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290420: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x290420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290424: 0x0  nop
    ctx->pc = 0x290424u;
    // NOP
    // 0x290428: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29042c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x29042cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_290430:
    // 0x290430: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x290430u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x290434: 0x4604289c  madd.s      $f2, $f5, $f4
    ctx->pc = 0x290434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x290438: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x290438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29043c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x29043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290440: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x290440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290444: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x290444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290448: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290448u;
    {
        const bool branch_taken_0x290448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290448u;
            // 0x29044c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290448) {
            ctx->pc = 0x290454u;
            goto label_290454;
        }
    }
    ctx->pc = 0x290450u;
    // 0x290450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290454:
    // 0x290454: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290454u;
    {
        const bool branch_taken_0x290454 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x290454) {
            ctx->pc = 0x290458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290454u;
            // 0x290458: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290468u;
            goto label_290468;
        }
    }
    ctx->pc = 0x29045Cu;
    // 0x29045c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x29045cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290460u;
            // 0x290464: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290460) {
            ctx->pc = 0x290480u;
            goto label_290480;
        }
    }
    ctx->pc = 0x290468u;
label_290468:
    // 0x290468: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x290468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x29046c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29046cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x290470: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x290470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290474: 0x0  nop
    ctx->pc = 0x290474u;
    // NOP
    // 0x290478: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x290478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29047c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x29047cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290480:
    // 0x290480: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x290480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290488: 0x4605481a  mula.s      $f9, $f5
    ctx->pc = 0x290488u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x29048c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29048Cu;
    {
        const bool branch_taken_0x29048c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29048Cu;
            // 0x290490: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29048c) {
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x290494u;
    // 0x290494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x290494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290498:
    // 0x290498: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290498u;
    {
        const bool branch_taken_0x290498 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x290498) {
            ctx->pc = 0x29049Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290498u;
            // 0x29049c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2904ACu;
            goto label_2904ac;
        }
    }
    ctx->pc = 0x2904A0u;
    // 0x2904a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2904a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2904a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2904A4u;
    {
        const bool branch_taken_0x2904a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904A4u;
            // 0x2904a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904a4) {
            ctx->pc = 0x2904C4u;
            goto label_2904c4;
        }
    }
    ctx->pc = 0x2904ACu;
label_2904ac:
    // 0x2904ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2904b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2904b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2904b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2904b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2904b8: 0x0  nop
    ctx->pc = 0x2904b8u;
    // NOP
    // 0x2904bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2904bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2904c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2904c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2904c4:
    // 0x2904c4: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x2904c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2904c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2904c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904cc: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x2904ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2904d0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2904d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2904d4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2904d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2904d8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2904d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2904dc: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x2904dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2904e0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2904e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2904e4: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2904e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2904e8: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x2904e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2904ec: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2904ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2904f0: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2904f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2904f4: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x2904f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2904f8: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2904f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2904fc: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2904fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x290500: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x290500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290504: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x290504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x290508: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x290508u;
    SET_GPR_U32(ctx, 31, 0x290510u);
    ctx->pc = 0x29050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290508u;
            // 0x29050c: 0xe620009c  swc1        $f0, 0x9C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290510u; }
        if (ctx->pc != 0x290510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290510u; }
        if (ctx->pc != 0x290510u) { return; }
    }
    ctx->pc = 0x290510u;
label_290510:
    // 0x290510: 0xc6080044  lwc1        $f8, 0x44($s0)
    ctx->pc = 0x290510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x290514: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x290514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x290518: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x290518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29051c: 0xc6090040  lwc1        $f9, 0x40($s0)
    ctx->pc = 0x29051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x290520: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x290520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290524: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x290524u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x290528: 0xc6070048  lwc1        $f7, 0x48($s0)
    ctx->pc = 0x290528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29052c: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x29052cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x290530: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x290530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290534: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x290534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290538: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x290538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29053c: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x29053cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x290540: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x290540u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x290544: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x290544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290548: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x290548u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x29054c: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x29054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290550: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x290550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x290554: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x290554u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x290558: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x290558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29055c: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x29055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290560: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x290560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290564: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x290564u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x290568: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x290568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29056c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x29056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x290570: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x290570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290574: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x290574u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x290578: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x290578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x29057c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x29057cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x290580: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x290580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x290584: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x290584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290588: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x290588u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29058c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x29058cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x290590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290594: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x290594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x290598: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x290598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29059c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x29059cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2905a0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2905a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2905a4: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2905a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2905a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2905a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2905ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2905acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2905b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2905b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2905b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2905B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2905B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905B4u;
            // 0x2905b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2905BCu;
    // 0x2905bc: 0x0  nop
    ctx->pc = 0x2905bcu;
    // NOP
}
