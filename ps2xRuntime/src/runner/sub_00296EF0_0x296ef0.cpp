#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296EF0
// Address: 0x296ef0 - 0x2980c0
void sub_00296EF0_0x296ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296EF0_0x296ef0");
#endif

    switch (ctx->pc) {
        case 0x297130u: goto label_297130;
        case 0x297140u: goto label_297140;
        case 0x29714cu: goto label_29714c;
        case 0x2972d8u: goto label_2972d8;
        case 0x29757cu: goto label_29757c;
        case 0x2975bcu: goto label_2975bc;
        case 0x297890u: goto label_297890;
        case 0x297990u: goto label_297990;
        case 0x297a04u: goto label_297a04;
        case 0x297a20u: goto label_297a20;
        case 0x297a5cu: goto label_297a5c;
        case 0x297d30u: goto label_297d30;
        case 0x297e2cu: goto label_297e2c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297eb0u: goto label_297eb0;
        case 0x297edcu: goto label_297edc;
        case 0x298024u: goto label_298024;
        case 0x298068u: goto label_298068;
        default: break;
    }

    ctx->pc = 0x296ef0u;

    // 0x296ef0: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x296ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
    // 0x296ef4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x296ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x296ef8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x296ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x296efc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x296efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x296f00: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x296f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x296f04: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x296f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x296f08: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x296f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x296f0c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x296f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x296f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x296f14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x296f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x296f18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x296f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x296f1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x296f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x296f20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f28: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x296f28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x296f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x296f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f30: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x296f30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x296f34: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x296f34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x296f38: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x296f38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x296f3c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x296f3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x296f40: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x296f40u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x296f44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x296f44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x296f48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x296f4c: 0x4607b036  c.le.s      $f22, $f7
    ctx->pc = 0x296f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296f50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x296F50u;
    {
        const bool branch_taken_0x296f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F50u;
            // 0x296f54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f50) {
            ctx->pc = 0x296F60u;
            goto label_296f60;
        }
    }
    ctx->pc = 0x296F58u;
    // 0x296f58: 0x10000445  b           . + 4 + (0x445 << 2)
    ctx->pc = 0x296F58u;
    {
        const bool branch_taken_0x296f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F58u;
            // 0x296f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f58) {
            ctx->pc = 0x298070u;
            goto label_298070;
        }
    }
    ctx->pc = 0x296F60u;
label_296f60:
    // 0x296f60: 0x4607a036  c.le.s      $f20, $f7
    ctx->pc = 0x296f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296f64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x296F64u;
    {
        const bool branch_taken_0x296f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F64u;
            // 0x296f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f64) {
            ctx->pc = 0x296F78u;
            goto label_296f78;
        }
    }
    ctx->pc = 0x296F6Cu;
    // 0x296f6c: 0x10000440  b           . + 4 + (0x440 << 2)
    ctx->pc = 0x296F6Cu;
    {
        const bool branch_taken_0x296f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f6c) {
            ctx->pc = 0x298070u;
            goto label_298070;
        }
    }
    ctx->pc = 0x296F74u;
    // 0x296f74: 0x0  nop
    ctx->pc = 0x296f74u;
    // NOP
label_296f78:
    // 0x296f78: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x296f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x296f7c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x296f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296f80: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x296f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x296f84: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x296f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x296f88: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x296f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296f8c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x296f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296f90: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x296f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x296f94: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x296f94u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x296f98: 0x46032241  sub.s       $f9, $f4, $f3
    ctx->pc = 0x296f98u;
    ctx->f[9] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x296f9c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x296f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x296fa0: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x296fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x296fa4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x296fa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x296fa8: 0x4608401c  madd.s      $f0, $f8, $f8
    ctx->pc = 0x296fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x296fac: 0x46000544  c1          0x544
    ctx->pc = 0x296facu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x296fb0: 0x0  nop
    ctx->pc = 0x296fb0u;
    // NOP
    // 0x296fb4: 0x0  nop
    ctx->pc = 0x296fb4u;
    // NOP
    // 0x296fb8: 0x4607a836  c.le.s      $f21, $f7
    ctx->pc = 0x296fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296fbc: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x296FBCu;
    {
        const bool branch_taken_0x296fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296fbc) {
            ctx->pc = 0x2971B0u;
            goto label_2971b0;
        }
    }
    ctx->pc = 0x296FC4u;
    // 0x296fc4: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x296fc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296fc8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x296FC8u;
    {
        const bool branch_taken_0x296fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x296FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296FC8u;
            // 0x296fcc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fc8) {
            ctx->pc = 0x296FF0u;
            goto label_296ff0;
        }
    }
    ctx->pc = 0x296FD0u;
    // 0x296fd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x296fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x296fd4: 0x0  nop
    ctx->pc = 0x296fd4u;
    // NOP
    // 0x296fd8: 0x460011d6  rsqrt.s     $f7, $f2, $f0
    ctx->pc = 0x296fd8u;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[2]);
    // 0x296fdc: 0x0  nop
    ctx->pc = 0x296fdcu;
    // NOP
    // 0x296fe0: 0x0  nop
    ctx->pc = 0x296fe0u;
    // NOP
    // 0x296fe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296FE4u;
    {
        const bool branch_taken_0x296fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296fe4) {
            ctx->pc = 0x296FF0u;
            goto label_296ff0;
        }
    }
    ctx->pc = 0x296FECu;
    // 0x296fec: 0x0  nop
    ctx->pc = 0x296fecu;
    // NOP
label_296ff0:
    // 0x296ff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x296ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x296ff4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x296ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x296ff8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x296ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x296ffc: 0x46074a42  mul.s       $f9, $f9, $f7
    ctx->pc = 0x296ffcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x297000: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x297000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x297004: 0x0  nop
    ctx->pc = 0x297004u;
    // NOP
    // 0x297008: 0x46074202  mul.s       $f8, $f8, $f7
    ctx->pc = 0x297008u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x29700c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x297010: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x297010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x297014: 0x46020942  mul.s       $f5, $f1, $f2
    ctx->pc = 0x297014u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x297018: 0x46024902  mul.s       $f4, $f9, $f2
    ctx->pc = 0x297018u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x29701c: 0x460641c2  mul.s       $f7, $f8, $f6
    ctx->pc = 0x29701cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x297020: 0x460428c0  add.s       $f3, $f5, $f4
    ctx->pc = 0x297020u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x297024: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x297024u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x297028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29702c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x29702cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x297030: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x297030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297034: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x297034u;
    {
        const bool branch_taken_0x297034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297034u;
            // 0x297038: 0x46052001  sub.s       $f0, $f4, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297034) {
            ctx->pc = 0x297158u;
            goto label_297158;
        }
    }
    ctx->pc = 0x29703Cu;
    // 0x29703c: 0x27a50504  addiu       $a1, $sp, 0x504
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1284));
    // 0x297040: 0x27a40508  addiu       $a0, $sp, 0x508
    ctx->pc = 0x297040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
    // 0x297044: 0x27a3050c  addiu       $v1, $sp, 0x50C
    ctx->pc = 0x297044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
    // 0x297048: 0x46081102  mul.s       $f4, $f2, $f8
    ctx->pc = 0x297048u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x29704c: 0x460930c2  mul.s       $f3, $f6, $f9
    ctx->pc = 0x29704cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x297050: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x297050u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x297054: 0xe7a30500  swc1        $f3, 0x500($sp)
    ctx->pc = 0x297054u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
    // 0x297058: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x297058u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29705c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x29705cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x297060: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x297060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297064: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x297064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x297068: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x297068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29706c: 0xc7a00504  lwc1        $f0, 0x504($sp)
    ctx->pc = 0x29706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297070: 0xc7a30500  lwc1        $f3, 0x500($sp)
    ctx->pc = 0x297070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297074: 0xc7a40508  lwc1        $f4, 0x508($sp)
    ctx->pc = 0x297074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x297078: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x297078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29707c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x29707cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x297080: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x297080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x297084: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x297084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x297088: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x297088u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29708c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x29708Cu;
    {
        const bool branch_taken_0x29708c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29708c) {
            ctx->pc = 0x2970B0u;
            goto label_2970b0;
        }
    }
    ctx->pc = 0x297094u;
    // 0x297094: 0x0  nop
    ctx->pc = 0x297094u;
    // NOP
    // 0x297098: 0x0  nop
    ctx->pc = 0x297098u;
    // NOP
    // 0x29709c: 0x46003096  rsqrt.s     $f2, $f6, $f0
    ctx->pc = 0x29709cu;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[6]);
    // 0x2970a0: 0x0  nop
    ctx->pc = 0x2970a0u;
    // NOP
    // 0x2970a4: 0x0  nop
    ctx->pc = 0x2970a4u;
    // NOP
    // 0x2970a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2970A8u;
    {
        const bool branch_taken_0x2970a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2970a8) {
            ctx->pc = 0x2970B0u;
            goto label_2970b0;
        }
    }
    ctx->pc = 0x2970B0u;
label_2970b0:
    // 0x2970b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2970b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2970b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2970b8: 0xc7a40500  lwc1        $f4, 0x500($sp)
    ctx->pc = 0x2970b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2970bc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x2970bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2970c0: 0x4600485c  madd.s      $f1, $f9, $f0
    ctx->pc = 0x2970c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
    // 0x2970c4: 0x46013b00  add.s       $f12, $f7, $f1
    ctx->pc = 0x2970c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2970c8: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x2970c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2970cc: 0xe7a10500  swc1        $f1, 0x500($sp)
    ctx->pc = 0x2970ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
    // 0x2970d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2970d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2970d4: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x2970d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x2970d8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2970d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2970dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2970dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2970e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2970e4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2970e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2970e8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2970e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2970ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2970f0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2970f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2970f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2970f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2970f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2970fc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2970FCu;
    {
        const bool branch_taken_0x2970fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x297100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2970FCu;
            // 0x297100: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970fc) {
            ctx->pc = 0x297128u;
            goto label_297128;
        }
    }
    ctx->pc = 0x297104u;
    // 0x297104: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x297104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297108: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x297108u;
    {
        const bool branch_taken_0x297108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297108u;
            // 0x29710c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297108) {
            ctx->pc = 0x297118u;
            goto label_297118;
        }
    }
    ctx->pc = 0x297110u;
    // 0x297110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297110u;
    {
        const bool branch_taken_0x297110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297110) {
            ctx->pc = 0x297120u;
            goto label_297120;
        }
    }
    ctx->pc = 0x297118u;
label_297118:
    // 0x297118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x297118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29711c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29711cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297120:
    // 0x297120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297120u;
    {
        const bool branch_taken_0x297120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297120u;
            // 0x297124: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297120) {
            ctx->pc = 0x297134u;
            goto label_297134;
        }
    }
    ctx->pc = 0x297128u;
label_297128:
    // 0x297128: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x297128u;
    SET_GPR_U32(ctx, 31, 0x297130u);
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297130u; }
        if (ctx->pc != 0x297130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297130u; }
        if (ctx->pc != 0x297130u) { return; }
    }
    ctx->pc = 0x297130u;
label_297130:
    // 0x297130: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x297130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_297134:
    // 0x297134: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x297134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x297138: 0xc0a3788  jal         func_28DE20
    ctx->pc = 0x297138u;
    SET_GPR_U32(ctx, 31, 0x297140u);
    ctx->pc = 0x29713Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297138u;
            // 0x29713c: 0x27a50500  addiu       $a1, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DE20u;
    if (runtime->hasFunction(0x28DE20u)) {
        auto targetFn = runtime->lookupFunction(0x28DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297140u; }
        if (ctx->pc != 0x297140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DE20_0x28de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297140u; }
        if (ctx->pc != 0x297140u) { return; }
    }
    ctx->pc = 0x297140u;
label_297140:
    // 0x297140: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x297144: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x297144u;
    SET_GPR_U32(ctx, 31, 0x29714Cu);
    ctx->pc = 0x297148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297144u;
            // 0x297148: 0x27a504f0  addiu       $a1, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29714Cu; }
        if (ctx->pc != 0x29714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29714Cu; }
        if (ctx->pc != 0x29714Cu) { return; }
    }
    ctx->pc = 0x29714Cu;
label_29714c:
    // 0x29714c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29714Cu;
    {
        const bool branch_taken_0x29714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29714c) {
            ctx->pc = 0x297208u;
            goto label_297208;
        }
    }
    ctx->pc = 0x297154u;
    // 0x297154: 0x0  nop
    ctx->pc = 0x297154u;
    // NOP
label_297158:
    // 0x297158: 0x27a30520  addiu       $v1, $sp, 0x520
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x29715c: 0xe7a20510  swc1        $f2, 0x510($sp)
    ctx->pc = 0x29715cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
    // 0x297160: 0x27a20530  addiu       $v0, $sp, 0x530
    ctx->pc = 0x297160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x297164: 0xe7a20514  swc1        $f2, 0x514($sp)
    ctx->pc = 0x297164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    // 0x297168: 0xe7a20518  swc1        $f2, 0x518($sp)
    ctx->pc = 0x297168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
    // 0x29716c: 0xe7a2051c  swc1        $f2, 0x51C($sp)
    ctx->pc = 0x29716cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1308), bits); }
    // 0x297170: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x297170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297174: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x297174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x297178: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x297178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29717c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x29717cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x297180: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x297180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297184: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x297184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x297188: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x297188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29718c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x29718cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x297190: 0xe7a60510  swc1        $f6, 0x510($sp)
    ctx->pc = 0x297190u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
    // 0x297194: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x297194u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x297198: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x297198u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29719c: 0xe7a2054c  swc1        $f2, 0x54C($sp)
    ctx->pc = 0x29719cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1356), bits); }
    // 0x2971a0: 0xe7a20548  swc1        $f2, 0x548($sp)
    ctx->pc = 0x2971a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
    // 0x2971a4: 0xe7a20544  swc1        $f2, 0x544($sp)
    ctx->pc = 0x2971a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1348), bits); }
    // 0x2971a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2971A8u;
    {
        const bool branch_taken_0x2971a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2971ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2971A8u;
            // 0x2971ac: 0xe7a20540  swc1        $f2, 0x540($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971a8) {
            ctx->pc = 0x297208u;
            goto label_297208;
        }
    }
    ctx->pc = 0x2971B0u;
label_2971b0:
    // 0x2971b0: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2971b4: 0xe7a70514  swc1        $f7, 0x514($sp)
    ctx->pc = 0x2971b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    // 0x2971b8: 0x27a30530  addiu       $v1, $sp, 0x530
    ctx->pc = 0x2971b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x2971bc: 0xe7a70518  swc1        $f7, 0x518($sp)
    ctx->pc = 0x2971bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
    // 0x2971c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2971c4: 0xe7a7051c  swc1        $f7, 0x51C($sp)
    ctx->pc = 0x2971c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1308), bits); }
    // 0x2971c8: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x2971c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2971cc: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x2971ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2971d0: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x2971d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2971d4: 0xe487000c  swc1        $f7, 0xC($a0)
    ctx->pc = 0x2971d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2971d8: 0xe4670000  swc1        $f7, 0x0($v1)
    ctx->pc = 0x2971d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2971dc: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x2971dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2971e0: 0xe4670008  swc1        $f7, 0x8($v1)
    ctx->pc = 0x2971e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2971e4: 0xe467000c  swc1        $f7, 0xC($v1)
    ctx->pc = 0x2971e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2971e8: 0xafa20510  sw          $v0, 0x510($sp)
    ctx->pc = 0x2971e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 2));
    // 0x2971ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2971ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2971f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2971f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2971f4: 0xe7a7054c  swc1        $f7, 0x54C($sp)
    ctx->pc = 0x2971f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1356), bits); }
    // 0x2971f8: 0xe7a70548  swc1        $f7, 0x548($sp)
    ctx->pc = 0x2971f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
    // 0x2971fc: 0xe7a70544  swc1        $f7, 0x544($sp)
    ctx->pc = 0x2971fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1348), bits); }
    // 0x297200: 0xe7a70540  swc1        $f7, 0x540($sp)
    ctx->pc = 0x297200u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    // 0x297204: 0x0  nop
    ctx->pc = 0x297204u;
    // NOP
label_297208:
    // 0x297208: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29720c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29720cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297210: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x297214: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x297214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x297218: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x297218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x29721c: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x29721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x297220: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x297220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x297224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297228: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x297228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29722c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29722cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297230: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x297230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x297234: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x297234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x297238: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x297238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29723c: 0x34430003  ori         $v1, $v0, 0x3
    ctx->pc = 0x29723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x297240: 0x27a20338  addiu       $v0, $sp, 0x338
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x297244: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297248: 0x4600a682  mul.s       $f26, $f20, $f0
    ctx->pc = 0x297248u;
    ctx->f[26] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29724c: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x29724cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x297250: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x297250u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297254: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x297254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x297258: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29725c: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x29725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x297260: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297264: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x297264u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x297268: 0x4600ae42  mul.s       $f25, $f21, $f0
    ctx->pc = 0x297268u;
    ctx->f[25] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29726c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x29726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x297270: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x297270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x297274: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x297274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297278: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x297278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29727c: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x29727cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x297280: 0x27b00334  addiu       $s0, $sp, 0x334
    ctx->pc = 0x297280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
    // 0x297284: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x297284u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x297288: 0xafa50330  sw          $a1, 0x330($sp)
    ctx->pc = 0x297288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 5));
    // 0x29728c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x29728cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x297290: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x297290u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x297294: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x297294u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x297298: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x297298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29729c: 0x461ab002  mul.s       $f0, $f22, $f26
    ctx->pc = 0x29729cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[26]);
    // 0x2972a0: 0x4619d040  add.s       $f1, $f26, $f25
    ctx->pc = 0x2972a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
    // 0x2972a4: 0x46010603  div.s       $f24, $f0, $f1
    ctx->pc = 0x2972a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[24] = ctx->f[0] / ctx->f[1];
    // 0x2972a8: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x2972a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2972ac: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x2972acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
    // 0x2972b0: 0xe7a80540  swc1        $f8, 0x540($sp)
    ctx->pc = 0x2972b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    // 0x2972b4: 0xe7a60544  swc1        $f6, 0x544($sp)
    ctx->pc = 0x2972b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1348), bits); }
    // 0x2972b8: 0xe7a40548  swc1        $f4, 0x548($sp)
    ctx->pc = 0x2972b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
    // 0x2972bc: 0xe7a2054c  swc1        $f2, 0x54C($sp)
    ctx->pc = 0x2972bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1356), bits); }
    // 0x2972c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2972c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2972c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2972c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2972c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2972c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2972cc: 0x24c201c0  addiu       $v0, $a2, 0x1C0
    ctx->pc = 0x2972ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
    // 0x2972d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2972d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2972d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2972d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2972d8:
    // 0x2972d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2972d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2972dc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2972dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2972e0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2972e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2972e4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2972e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2972e8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2972e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2972ec: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2972ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2972f0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2972f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2972f4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2972f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x2972f8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2972f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x2972fc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2972fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x297300: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x297300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x297304: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x297304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x297308: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x297308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x29730c: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x29730cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x297310: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x297310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x297314: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x297314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x297318: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x297318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x29731c: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x29731cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x297320: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x297320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x297324: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x297324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x297328: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x297328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x29732c: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x29732cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x297330: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x297330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x297334: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x297334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x297338: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x297338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x29733c: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x29733cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x297340: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x297340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x297344: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x297344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x297348: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x297348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x29734c: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x29734cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x297350: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x297350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
    // 0x297354: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x297354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x297358: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x297358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
    // 0x29735c: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x29735cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x297360: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x297360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x297364: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x297364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x297368: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x297368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x29736c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x29736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x297370: 0x14a2ffd9  bne         $a1, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x297370u;
    {
        const bool branch_taken_0x297370 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x297370) {
            ctx->pc = 0x2972D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2972d8;
        }
    }
    ctx->pc = 0x297378u;
    // 0x297378: 0xe7a102a0  swc1        $f1, 0x2A0($sp)
    ctx->pc = 0x297378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x29737c: 0x27a202a4  addiu       $v0, $sp, 0x2A4
    ctx->pc = 0x29737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
    // 0x297380: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297384: 0x27b402bc  addiu       $s4, $sp, 0x2BC
    ctx->pc = 0x297384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x297388: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x297388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29738c: 0x27be02b8  addiu       $fp, $sp, 0x2B8
    ctx->pc = 0x29738cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x297390: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x297390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x297394: 0x27b502b4  addiu       $s5, $sp, 0x2B4
    ctx->pc = 0x297394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x297398: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x297398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29739c: 0x27b102b0  addiu       $s1, $sp, 0x2B0
    ctx->pc = 0x29739cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2973a0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2973a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2973a4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x2973a8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2973a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2973ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2973acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2973b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2973b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2973b4: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2973b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2973b8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2973b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2973bc: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x2973c0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2973c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2973c4: 0x27aa02f0  addiu       $t2, $sp, 0x2F0
    ctx->pc = 0x2973c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x2973c8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2973c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2973cc: 0x27a6032c  addiu       $a2, $sp, 0x32C
    ctx->pc = 0x2973ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x2973d0: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2973d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2973d4: 0x27a70328  addiu       $a3, $sp, 0x328
    ctx->pc = 0x2973d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
    // 0x2973d8: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2973d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2973dc: 0x27a80324  addiu       $t0, $sp, 0x324
    ctx->pc = 0x2973dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x2973e0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2973e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2973e4: 0x27a90320  addiu       $t1, $sp, 0x320
    ctx->pc = 0x2973e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2973e8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2973e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2973ec: 0x27b30520  addiu       $s3, $sp, 0x520
    ctx->pc = 0x2973ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2973f0: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2973f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2973f4: 0x27b20530  addiu       $s2, $sp, 0x530
    ctx->pc = 0x2973f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x2973f8: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2973f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2973fc: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x2973fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x297400: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x297400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x297404: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x297404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x297408: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x297408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x29740c: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x29740cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x297410: 0xe5410010  swc1        $f1, 0x10($t2)
    ctx->pc = 0x297410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x297414: 0xe5410014  swc1        $f1, 0x14($t2)
    ctx->pc = 0x297414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x297418: 0xe5410018  swc1        $f1, 0x18($t2)
    ctx->pc = 0x297418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x29741c: 0xe541001c  swc1        $f1, 0x1C($t2)
    ctx->pc = 0x29741cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x297420: 0xe5410020  swc1        $f1, 0x20($t2)
    ctx->pc = 0x297420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x297424: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x297424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x297428: 0xe5410024  swc1        $f1, 0x24($t2)
    ctx->pc = 0x297428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
    // 0x29742c: 0xe5410028  swc1        $f1, 0x28($t2)
    ctx->pc = 0x29742cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x297430: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x297434: 0xe541002c  swc1        $f1, 0x2C($t2)
    ctx->pc = 0x297434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
    // 0x297438: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x297438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29743c: 0x4614a142  mul.s       $f5, $f20, $f20
    ctx->pc = 0x29743cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x297440: 0x27a20514  addiu       $v0, $sp, 0x514
    ctx->pc = 0x297440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
    // 0x297444: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x297444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297448: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x297448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x29744c: 0xe5400014  swc1        $f0, 0x14($t2)
    ctx->pc = 0x29744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x297450: 0xe5400028  swc1        $f0, 0x28($t2)
    ctx->pc = 0x297450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x297454: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x297454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x297458: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x297458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29745c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x29745cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x297460: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x297460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x297464: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x297464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x297468: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x297468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x29746c: 0xc7a50510  lwc1        $f5, 0x510($sp)
    ctx->pc = 0x29746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x297470: 0x4606adc3  div.s       $f23, $f21, $f6
    ctx->pc = 0x297470u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[23] = ctx->f[21] / ctx->f[6];
    // 0x297474: 0xe5450000  swc1        $f5, 0x0($t2)
    ctx->pc = 0x297474u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x297478: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x297478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29747c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x29747cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x297480: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x297480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x297484: 0xe7a502f4  swc1        $f5, 0x2F4($sp)
    ctx->pc = 0x297484u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
    // 0x297488: 0x27a20518  addiu       $v0, $sp, 0x518
    ctx->pc = 0x297488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
    // 0x29748c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x29748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x297490: 0xe7a502f8  swc1        $f5, 0x2F8($sp)
    ctx->pc = 0x297490u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x297494: 0x27a2051c  addiu       $v0, $sp, 0x51C
    ctx->pc = 0x297494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
    // 0x297498: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x297498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29749c: 0xe7a502fc  swc1        $f5, 0x2FC($sp)
    ctx->pc = 0x29749cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
    // 0x2974a0: 0x27a20540  addiu       $v0, $sp, 0x540
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x2974a4: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2974a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2974a8: 0xe7a50300  swc1        $f5, 0x300($sp)
    ctx->pc = 0x2974a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x2974ac: 0x4615b942  mul.s       $f5, $f23, $f21
    ctx->pc = 0x2974acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2974b0: 0x46062943  div.s       $f5, $f5, $f6
    ctx->pc = 0x2974b0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[6];
    // 0x2974b4: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x2974b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2974b8: 0x46042903  div.s       $f4, $f5, $f4
    ctx->pc = 0x2974b8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[4] = ctx->f[5] / ctx->f[4];
    // 0x2974bc: 0xe7a70304  swc1        $f7, 0x304($sp)
    ctx->pc = 0x2974bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
    // 0x2974c0: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x2974c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2974c4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2974c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2974c8: 0xe7a60308  swc1        $f6, 0x308($sp)
    ctx->pc = 0x2974c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x2974cc: 0xc666000c  lwc1        $f6, 0xC($s3)
    ctx->pc = 0x2974ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2974d0: 0xe7a6030c  swc1        $f6, 0x30C($sp)
    ctx->pc = 0x2974d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x2974d4: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x2974d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2974d8: 0xe7a60310  swc1        $f6, 0x310($sp)
    ctx->pc = 0x2974d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x2974dc: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2974dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2974e0: 0xe7a60314  swc1        $f6, 0x314($sp)
    ctx->pc = 0x2974e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
    // 0x2974e4: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2974e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2974e8: 0xe7a50318  swc1        $f5, 0x318($sp)
    ctx->pc = 0x2974e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x2974ec: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x2974ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2974f0: 0xe7a5031c  swc1        $f5, 0x31C($sp)
    ctx->pc = 0x2974f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
    // 0x2974f4: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2974f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2974f8: 0xe5250000  swc1        $f5, 0x0($t1)
    ctx->pc = 0x2974f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2974fc: 0x27a20544  addiu       $v0, $sp, 0x544
    ctx->pc = 0x2974fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
    // 0x297500: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x297500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x297504: 0xe5050000  swc1        $f5, 0x0($t0)
    ctx->pc = 0x297504u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x297508: 0x27a20548  addiu       $v0, $sp, 0x548
    ctx->pc = 0x297508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
    // 0x29750c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x29750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x297510: 0xe4e50000  swc1        $f5, 0x0($a3)
    ctx->pc = 0x297510u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x297514: 0x27a2054c  addiu       $v0, $sp, 0x54C
    ctx->pc = 0x297514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x297518: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x297518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29751c: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x29751cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x297520: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x297520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x297524: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x297524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x297528: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x297528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x29752c: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x29752cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x297530: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x297530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x297534: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x297534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x297538: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x297538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x29753c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x29753cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x297540: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x297540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x297544: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x297544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x297548: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x297548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x29754c: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x29754cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x297550: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x297550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x297554: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x297554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x297558: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x297558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x29755c: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x29755cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x297560: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x297560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x297564: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x297564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x297568: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x297568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x29756c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x29756cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x297570: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x297570u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x297574: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x297574u;
    SET_GPR_U32(ctx, 31, 0x29757Cu);
    ctx->pc = 0x297578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297574u;
            // 0x297578: 0xe4820028  swc1        $f2, 0x28($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29757Cu; }
        if (ctx->pc != 0x29757Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29757Cu; }
        if (ctx->pc != 0x29757Cu) { return; }
    }
    ctx->pc = 0x29757Cu;
label_29757c:
    // 0x29757c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x29757cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x297580: 0x27a202a4  addiu       $v0, $sp, 0x2A4
    ctx->pc = 0x297580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
    // 0x297584: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x297584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x297588: 0x27b70338  addiu       $s7, $sp, 0x338
    ctx->pc = 0x297588u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x29758c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x29758cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x297590: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x297590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x297594: 0xe7b902a0  swc1        $f25, 0x2A0($sp)
    ctx->pc = 0x297594u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x297598: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x297598u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29759c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x29759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2975a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2975a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2975a4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2975a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2975a8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2975a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2975ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2975ACu;
    {
        const bool branch_taken_0x2975ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2975B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975ACu;
            // 0x2975b0: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975ac) {
            ctx->pc = 0x2975C0u;
            goto label_2975c0;
        }
    }
    ctx->pc = 0x2975B4u;
    // 0x2975b4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2975B4u;
    SET_GPR_U32(ctx, 31, 0x2975BCu);
    ctx->pc = 0x2975B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2975B4u;
            // 0x2975b8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975BCu; }
        if (ctx->pc != 0x2975BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975BCu; }
        if (ctx->pc != 0x2975BCu) { return; }
    }
    ctx->pc = 0x2975BCu;
label_2975bc:
    // 0x2975bc: 0x0  nop
    ctx->pc = 0x2975bcu;
    // NOP
label_2975c0:
    // 0x2975c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2975c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2975c4: 0x27a802c0  addiu       $t0, $sp, 0x2C0
    ctx->pc = 0x2975c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x2975c8: 0x27a702f0  addiu       $a3, $sp, 0x2F0
    ctx->pc = 0x2975c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x2975cc: 0x27b50230  addiu       $s5, $sp, 0x230
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2975d0: 0x27b40260  addiu       $s4, $sp, 0x260
    ctx->pc = 0x2975d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2975d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2975d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2975d8: 0x27be0290  addiu       $fp, $sp, 0x290
    ctx->pc = 0x2975d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2975dc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2975e0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2975e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2975e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2975e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2975e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2975e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2975ec: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x2975ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975f0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2975f4: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x2975f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2975f8: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2975f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2975fc: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x2975fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x297600: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x297600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x297604: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297608: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x297608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29760c: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x29760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297610: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x297610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x297614: 0xc7a002b0  lwc1        $f0, 0x2B0($sp)
    ctx->pc = 0x297614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297618: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x297618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x29761c: 0xc7a002b4  lwc1        $f0, 0x2B4($sp)
    ctx->pc = 0x29761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297620: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x297620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x297624: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x297624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297628: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x297628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29762c: 0xc7a002bc  lwc1        $f0, 0x2BC($sp)
    ctx->pc = 0x29762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297630: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x297630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x297634: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x297634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297638: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x297638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x29763c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x29763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297640: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x297640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x297644: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x297644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297648: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x297648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x29764c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x29764cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297650: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x297650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x297654: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x297654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297658: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x297658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x29765c: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x29765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297660: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x297660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x297664: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x297664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297668: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x297668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x29766c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x29766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297670: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x297670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x297674: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x297674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297678: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x297678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x29767c: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x29767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297680: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x297680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x297684: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x297684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297688: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x297688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x29768c: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x29768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297690: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x297690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x297694: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x297694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297698: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x297698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x29769c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x29769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976a0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2976a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2976a4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2976a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976a8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2976a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2976ac: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2976acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976b0: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x2976b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2976b4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x2976b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976b8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2976b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2976bc: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x2976bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976c0: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2976c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2976c4: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2976c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976c8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2976c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2976cc: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x2976ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976d0: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2976d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2976d4: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x2976d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976d8: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2976d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2976dc: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x2976dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976e0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2976e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2976e4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x2976e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976e8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2976e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2976ec: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x2976ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976f0: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2976f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2976f4: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x2976f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976f8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2976f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2976fc: 0xc7a00324  lwc1        $f0, 0x324($sp)
    ctx->pc = 0x2976fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297700: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x297700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x297704: 0xc7a00328  lwc1        $f0, 0x328($sp)
    ctx->pc = 0x297704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297708: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x297708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x29770c: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x29770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297710: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x297710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x297714: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x297714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x297718: 0x27a20214  addiu       $v0, $sp, 0x214
    ctx->pc = 0x297718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x29771c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29771cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297720: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x297724: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297728: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x297728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x29772c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29772cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297730: 0x27a20224  addiu       $v0, $sp, 0x224
    ctx->pc = 0x297730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x297734: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297738: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x297738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x29773c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29773cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297740: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x297740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x297744: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x297744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x297748: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x297748u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x29774c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x29774cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x297750: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x297750u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x297754: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x297754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x297758: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x297758u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x29775c: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x29775cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x297760: 0xaea0001c  sw          $zero, 0x1C($s5)
    ctx->pc = 0x297760u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
    // 0x297764: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x297764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x297768: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x297768u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x29776c: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x29776cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x297770: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x297770u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x297774: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x297774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x297778: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x297778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x29777c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x29777cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x297780: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x297780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x297784: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x297784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x297788: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x297788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x29778c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x29778cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x297790: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x297790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x297794: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x297794u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x297798: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x297798u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x29779c: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x29779cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x2977a0: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x2977a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x2977a4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2977a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2977a8: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x2977a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x2977ac: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x2977acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
    // 0x2977b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2977b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2977b4: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x2977b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2977b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2977b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2977bc: 0x27a20294  addiu       $v0, $sp, 0x294
    ctx->pc = 0x2977bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    // 0x2977c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2977c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2977c4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2977c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2977c8: 0x27a20514  addiu       $v0, $sp, 0x514
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
    // 0x2977cc: 0xc7a00510  lwc1        $f0, 0x510($sp)
    ctx->pc = 0x2977ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977d0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2977d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2977d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2977d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977d8: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x2977d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    // 0x2977dc: 0x27a20518  addiu       $v0, $sp, 0x518
    ctx->pc = 0x2977dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
    // 0x2977e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2977e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977e4: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2977e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2977e8: 0x27a2051c  addiu       $v0, $sp, 0x51C
    ctx->pc = 0x2977e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
    // 0x2977ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2977ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977f0: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x2977f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x2977f4: 0x27a20540  addiu       $v0, $sp, 0x540
    ctx->pc = 0x2977f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x2977f8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2977f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977fc: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x2977fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x297800: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x297800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297804: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x297804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x297808: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x297808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29780c: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x29780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x297810: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x297810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297814: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x297814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x297818: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x297818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29781c: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x29781cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x297820: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x297820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297824: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x297824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x297828: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x297828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29782c: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x29782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x297830: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x297830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297834: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x297834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x297838: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x297838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29783c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x29783cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x297840: 0x27a20544  addiu       $v0, $sp, 0x544
    ctx->pc = 0x297840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
    // 0x297844: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x297844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297848: 0x27a20294  addiu       $v0, $sp, 0x294
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    // 0x29784c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29784cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297850: 0x27a20548  addiu       $v0, $sp, 0x548
    ctx->pc = 0x297850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
    // 0x297854: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x297854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297858: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x297858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x29785c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297860: 0x27a2054c  addiu       $v0, $sp, 0x54C
    ctx->pc = 0x297860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x297864: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x297864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297868: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x297868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x29786c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297870: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x297870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
    // 0x297874: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x297874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x297878: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29787c: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x297880: 0xe4570000  swc1        $f23, 0x0($v0)
    ctx->pc = 0x297880u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297884: 0x27a2020c  addiu       $v0, $sp, 0x20C
    ctx->pc = 0x297884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x297888: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x297888u;
    SET_GPR_U32(ctx, 31, 0x297890u);
    ctx->pc = 0x29788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297888u;
            // 0x29788c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297890u; }
        if (ctx->pc != 0x297890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297890u; }
        if (ctx->pc != 0x297890u) { return; }
    }
    ctx->pc = 0x297890u;
label_297890:
    // 0x297890: 0xc7a20200  lwc1        $f2, 0x200($sp)
    ctx->pc = 0x297890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297894: 0x3c023ec0  lui         $v0, 0x3EC0
    ctx->pc = 0x297894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16064 << 16));
    // 0x297898: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x297898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29789c: 0x27b101d0  addiu       $s1, $sp, 0x1D0
    ctx->pc = 0x29789cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2978a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2978a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2978a4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2978a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2978a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2978a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2978ac: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x2978acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x2978b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2978b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2978b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2978b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2978b8: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x2978b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2978bc: 0xc6820034  lwc1        $f2, 0x34($s4)
    ctx->pc = 0x2978bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2978c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2978c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2978c4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x2978c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x2978c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2978c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2978cc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2978ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2978d0: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x2978d4: 0xc6820038  lwc1        $f2, 0x38($s4)
    ctx->pc = 0x2978d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2978d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2978d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2978dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2978dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2978e0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2978e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2978e4: 0x27a2020c  addiu       $v0, $sp, 0x20C
    ctx->pc = 0x2978e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x2978e8: 0xc682003c  lwc1        $f2, 0x3C($s4)
    ctx->pc = 0x2978e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2978ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2978ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2978f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2978f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2978f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2978f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2978f8: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2978f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2978fc: 0x27a20294  addiu       $v0, $sp, 0x294
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    // 0x297900: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x297900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x297904: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x297904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297908: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29790c: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x29790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297910: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x297910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x297914: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297918: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x297918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29791c: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x29791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x297920: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297924: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x297928: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29792c: 0x27a20224  addiu       $v0, $sp, 0x224
    ctx->pc = 0x29792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x297930: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297934: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x297934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x297938: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29793c: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x29793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x297940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297944: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x297944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x297948: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x297948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x29794c: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x29794cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x297950: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x297950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x297954: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x297954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x297958: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x297958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x29795c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29795cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x297960: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x297960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x297964: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x297964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x297968: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x297968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x29796c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x29796cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x297970: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x297970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x297974: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x297974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x297978: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x297978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x29797c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x29797cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x297980: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x297980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x297984: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x297984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x297988: 0xc0a562c  jal         func_2958B0
    ctx->pc = 0x297988u;
    SET_GPR_U32(ctx, 31, 0x297990u);
    ctx->pc = 0x29798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297988u;
            // 0x29798c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297990u; }
        if (ctx->pc != 0x297990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297990u; }
        if (ctx->pc != 0x297990u) { return; }
    }
    ctx->pc = 0x297990u;
label_297990:
    // 0x297990: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x297990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x297998: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29799c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2979a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2979a4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2979a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2979a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2979a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979ac: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2979acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2979b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2979b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979b4: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2979b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2979b8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2979b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979bc: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x2979bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x2979c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2979c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979c4: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2979c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2979c8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2979c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979cc: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2979ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x2979d0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2979d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979d4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2979d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2979d8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2979d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979dc: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x2979dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x2979e0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2979e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979e4: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x2979e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2979e8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2979e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979ec: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x2979ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x2979f0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2979f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979f4: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x2979f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2979f8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2979f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979fc: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x2979FCu;
    SET_GPR_U32(ctx, 31, 0x297A04u);
    ctx->pc = 0x297A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2979FCu;
            // 0x297a00: 0xe7a0025c  swc1        $f0, 0x25C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A04u; }
        if (ctx->pc != 0x297A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A04u; }
        if (ctx->pc != 0x297A04u) { return; }
    }
    ctx->pc = 0x297A04u;
label_297a04:
    // 0x297a04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x297a08: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x297a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x297a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x297a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a14: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x297a14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x297a18: 0xc0a665c  jal         func_299970
    ctx->pc = 0x297A18u;
    SET_GPR_U32(ctx, 31, 0x297A20u);
    ctx->pc = 0x297A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A18u;
            // 0x297a1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299970u;
    if (runtime->hasFunction(0x299970u)) {
        auto targetFn = runtime->lookupFunction(0x299970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A20u; }
        if (ctx->pc != 0x297A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299970_0x299970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A20u; }
        if (ctx->pc != 0x297A20u) { return; }
    }
    ctx->pc = 0x297A20u;
label_297a20:
    // 0x297a20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x297a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a28: 0x0  nop
    ctx->pc = 0x297a28u;
    // NOP
    // 0x297a2c: 0x461a0582  mul.s       $f22, $f0, $f26
    ctx->pc = 0x297a2cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x297a30: 0x27a20214  addiu       $v0, $sp, 0x214
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x297a34: 0xe7b60210  swc1        $f22, 0x210($sp)
    ctx->pc = 0x297a34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x297a38: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x297a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297a3c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x297a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x297a40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a44: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x297a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x297a48: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x297a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x297a4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297A4Cu;
    {
        const bool branch_taken_0x297a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x297A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A4Cu;
            // 0x297a50: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a4c) {
            ctx->pc = 0x297A60u;
            goto label_297a60;
        }
    }
    ctx->pc = 0x297A54u;
    // 0x297a54: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x297A54u;
    SET_GPR_U32(ctx, 31, 0x297A5Cu);
    ctx->pc = 0x297A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A54u;
            // 0x297a58: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A5Cu; }
        if (ctx->pc != 0x297A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A5Cu; }
        if (ctx->pc != 0x297A5Cu) { return; }
    }
    ctx->pc = 0x297A5Cu;
label_297a5c:
    // 0x297a5c: 0x0  nop
    ctx->pc = 0x297a5cu;
    // NOP
label_297a60:
    // 0x297a60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x297a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a64: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x297a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x297a68: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x297a6c: 0x27b40140  addiu       $s4, $sp, 0x140
    ctx->pc = 0x297a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x297a70: 0x27b10170  addiu       $s1, $sp, 0x170
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x297a74: 0x27be01a4  addiu       $fp, $sp, 0x1A4
    ctx->pc = 0x297a74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x297a78: 0x27b501a0  addiu       $s5, $sp, 0x1A0
    ctx->pc = 0x297a78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x297a7c: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x297a7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x297a80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x297a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x297a84: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x297a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x297a88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x297a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x297a8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x297a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x297a90: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x297a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x297a94: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x297a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x297a98: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x297a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x297a9c: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x297a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297aa0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x297aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x297aa4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x297aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297aa8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x297aac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297ab0: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x297ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x297ab4: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x297ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ab8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x297ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x297abc: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x297abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ac0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x297ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x297ac4: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x297ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ac8: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x297ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x297acc: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x297accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ad0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x297ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x297ad4: 0xc7a1022c  lwc1        $f1, 0x22C($sp)
    ctx->pc = 0x297ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ad8: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x297ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x297adc: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x297adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ae0: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x297ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x297ae4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x297ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ae8: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x297ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x297aec: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x297aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297af0: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x297af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x297af4: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x297af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297af8: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x297af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x297afc: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x297afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b00: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x297b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x297b04: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x297b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b08: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x297b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x297b0c: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x297b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b10: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x297b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x297b14: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x297b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b18: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x297b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x297b1c: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x297b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b20: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x297b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x297b24: 0xc5010024  lwc1        $f1, 0x24($t0)
    ctx->pc = 0x297b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b28: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x297b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x297b2c: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x297b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b30: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x297b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x297b34: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x297b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b38: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x297b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x297b3c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x297b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b40: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x297b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x297b44: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x297b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b48: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x297b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x297b4c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x297b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b50: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x297b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x297b54: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x297b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b58: 0xe441005c  swc1        $f1, 0x5C($v0)
    ctx->pc = 0x297b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x297b5c: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x297b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b60: 0xe4410060  swc1        $f1, 0x60($v0)
    ctx->pc = 0x297b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x297b64: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x297b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b68: 0xe4410064  swc1        $f1, 0x64($v0)
    ctx->pc = 0x297b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x297b6c: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x297b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b70: 0xe4410068  swc1        $f1, 0x68($v0)
    ctx->pc = 0x297b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x297b74: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x297b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b78: 0xe441006c  swc1        $f1, 0x6C($v0)
    ctx->pc = 0x297b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x297b7c: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x297b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b80: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x297b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x297b84: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x297b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b88: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x297b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x297b8c: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x297b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b90: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x297b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x297b94: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x297b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b98: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x297b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x297b9c: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x297b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ba0: 0xe4410080  swc1        $f1, 0x80($v0)
    ctx->pc = 0x297ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x297ba4: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x297ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ba8: 0xe4410084  swc1        $f1, 0x84($v0)
    ctx->pc = 0x297ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x297bac: 0xc7a10298  lwc1        $f1, 0x298($sp)
    ctx->pc = 0x297bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297bb0: 0xe4410088  swc1        $f1, 0x88($v0)
    ctx->pc = 0x297bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x297bb4: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x297bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297bb8: 0xe441008c  swc1        $f1, 0x8C($v0)
    ctx->pc = 0x297bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x297bbc: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x297bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x297bc0: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x297bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x297bc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297bc8: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x297bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x297bcc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297bd0: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x297bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x297bd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297bd8: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x297bdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297be0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x297be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x297be4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297be8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x297be8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x297bec: 0x27a201ac  addiu       $v0, $sp, 0x1AC
    ctx->pc = 0x297becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x297bf0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x297bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x297bf4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x297bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x297bf8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x297bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x297bfc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x297bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x297c00: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x297c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x297c04: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x297c04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x297c08: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x297c08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x297c0c: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x297c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x297c10: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x297c10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x297c14: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x297c14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x297c18: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x297c18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x297c1c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x297c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x297c20: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x297c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x297c24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x297c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x297c28: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x297c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x297c2c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x297c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x297c30: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x297c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x297c34: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x297c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x297c38: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x297c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x297c3c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x297c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x297c40: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x297c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x297c44: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x297c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x297c48: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x297c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x297c4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x297c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x297c50: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x297c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x297c54: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x297c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x297c58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297c5c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x297c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x297c60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297c64: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x297c64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x297c68: 0x27a20514  addiu       $v0, $sp, 0x514
    ctx->pc = 0x297c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
    // 0x297c6c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x297c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x297c70: 0xc7a10510  lwc1        $f1, 0x510($sp)
    ctx->pc = 0x297c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c74: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x297c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x297c78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c7c: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x297c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x297c80: 0x27a20518  addiu       $v0, $sp, 0x518
    ctx->pc = 0x297c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
    // 0x297c84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c88: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x297c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x297c8c: 0x27a2051c  addiu       $v0, $sp, 0x51C
    ctx->pc = 0x297c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
    // 0x297c90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c94: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x297c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x297c98: 0x27a20540  addiu       $v0, $sp, 0x540
    ctx->pc = 0x297c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x297c9c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x297c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ca0: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x297ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x297ca4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x297ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ca8: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x297ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x297cac: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x297cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cb0: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x297cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x297cb4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x297cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cb8: 0xe7a1018c  swc1        $f1, 0x18C($sp)
    ctx->pc = 0x297cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x297cbc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x297cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cc0: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x297cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x297cc4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x297cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cc8: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x297cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x297ccc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x297cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cd0: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x297cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x297cd4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x297cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cd8: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x297cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x297cdc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ce0: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x297ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x297ce4: 0x27a20544  addiu       $v0, $sp, 0x544
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
    // 0x297ce8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cec: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x297cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x297cf0: 0x27a20548  addiu       $v0, $sp, 0x548
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
    // 0x297cf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297cf8: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x297cfc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d00: 0x27a2054c  addiu       $v0, $sp, 0x54C
    ctx->pc = 0x297d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x297d04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d08: 0x27a201ac  addiu       $v0, $sp, 0x1AC
    ctx->pc = 0x297d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x297d0c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d10: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x297d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x297d14: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x297d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x297d18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297d1c: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x297d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x297d20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d24: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x297d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x297d28: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x297D28u;
    SET_GPR_U32(ctx, 31, 0x297D30u);
    ctx->pc = 0x297D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D28u;
            // 0x297d2c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D30u; }
        if (ctx->pc != 0x297D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D30u; }
        if (ctx->pc != 0x297D30u) { return; }
    }
    ctx->pc = 0x297D30u;
label_297d30:
    // 0x297d30: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x297d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297d34: 0x3c02bec0  lui         $v0, 0xBEC0
    ctx->pc = 0x297d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48832 << 16));
    // 0x297d38: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x297d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d3c: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x297d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x297d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297d44: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x297d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x297d48: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x297d48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x297d4c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x297d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x297d50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297d54: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x297d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x297d58: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x297d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x297d5c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x297d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297d60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x297d64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x297d68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x297d68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x297d6c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d70: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x297d74: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x297d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297d78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x297d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x297d80: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d84: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x297d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x297d88: 0xc622003c  lwc1        $f2, 0x3C($s1)
    ctx->pc = 0x297d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297d8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x297d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x297d94: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297d98: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x297d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d9c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x297da0: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x297da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x297da4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x297da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297da8: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x297da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x297dac: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x297dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297db0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297db4: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x297db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297db8: 0x27a201ac  addiu       $v0, $sp, 0x1AC
    ctx->pc = 0x297db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x297dbc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x297dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297dc0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x297dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x297dc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297dc8: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x297dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x297dcc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297dd0: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x297dd4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297dd8: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x297ddc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297de0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x297de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x297de4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x297de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x297de8: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x297de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x297dec: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x297decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x297df0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x297df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x297df4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x297df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x297df8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x297df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x297dfc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x297dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x297e00: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x297e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x297e04: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x297e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x297e08: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x297e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x297e0c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x297e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x297e10: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x297e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x297e14: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x297e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x297e18: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x297e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x297e1c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x297e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x297e20: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x297e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x297e24: 0xc0a562c  jal         func_2958B0
    ctx->pc = 0x297E24u;
    SET_GPR_U32(ctx, 31, 0x297E2Cu);
    ctx->pc = 0x297E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E24u;
            // 0x297e28: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E2Cu; }
        if (ctx->pc != 0x297E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E2Cu; }
        if (ctx->pc != 0x297E2Cu) { return; }
    }
    ctx->pc = 0x297E2Cu;
label_297e2c:
    // 0x297e2c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x297e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x297e34: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x297e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x297e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297e40: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x297e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x297e44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x297e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e48: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x297e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x297e4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x297e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e50: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x297e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x297e54: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x297e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e58: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x297e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x297e5c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x297e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e60: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x297e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x297e64: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x297e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e68: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x297e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x297e6c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x297e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e70: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x297e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x297e74: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x297e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e78: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x297e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x297e7c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x297e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e80: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x297e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x297e84: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x297e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e88: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x297e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x297e8c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x297e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e90: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x297e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x297e94: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x297e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e98: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x297E98u;
    SET_GPR_U32(ctx, 31, 0x297EA0u);
    ctx->pc = 0x297E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E98u;
            // 0x297e9c: 0xe7a0016c  swc1        $f0, 0x16C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA0u; }
        if (ctx->pc != 0x297EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA0u; }
        if (ctx->pc != 0x297EA0u) { return; }
    }
    ctx->pc = 0x297EA0u;
label_297ea0:
    // 0x297ea0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x297ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x297ea4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x297ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ea8: 0xc0a665c  jal         func_299970
    ctx->pc = 0x297EA8u;
    SET_GPR_U32(ctx, 31, 0x297EB0u);
    ctx->pc = 0x297EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EA8u;
            // 0x297eac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299970u;
    if (runtime->hasFunction(0x299970u)) {
        auto targetFn = runtime->lookupFunction(0x299970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EB0u; }
        if (ctx->pc != 0x297EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299970_0x299970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EB0u; }
        if (ctx->pc != 0x297EB0u) { return; }
    }
    ctx->pc = 0x297EB0u;
label_297eb0:
    // 0x297eb0: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x297eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x297eb4: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x297eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x297eb8: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x297eb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297ebc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x297ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x297ec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297ec4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x297ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x297ec8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x297ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x297ecc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297ECCu;
    {
        const bool branch_taken_0x297ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x297ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297ECCu;
            // 0x297ed0: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ecc) {
            ctx->pc = 0x297EE0u;
            goto label_297ee0;
        }
    }
    ctx->pc = 0x297ED4u;
    // 0x297ed4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x297ED4u;
    SET_GPR_U32(ctx, 31, 0x297EDCu);
    ctx->pc = 0x297ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297ED4u;
            // 0x297ed8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EDCu; }
        if (ctx->pc != 0x297EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EDCu; }
        if (ctx->pc != 0x297EDCu) { return; }
    }
    ctx->pc = 0x297EDCu;
label_297edc:
    // 0x297edc: 0x0  nop
    ctx->pc = 0x297edcu;
    // NOP
label_297ee0:
    // 0x297ee0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x297ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297ee4: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x297ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x297ee8: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x297ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x297eec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x297eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ef0: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x297ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x297ef4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x297ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x297ef8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x297efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x297efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x297f00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x297f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x297f04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x297f08: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x297f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x297f0c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x297f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297f14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297f18: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x297f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x297f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x297f20: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x297f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f24: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x297f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x297f28: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x297f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f2c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x297f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x297f30: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x297f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f34: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x297f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x297f38: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x297f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f3c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x297f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x297f40: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x297f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f44: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x297f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x297f48: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x297f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f4c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x297f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x297f50: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x297f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f54: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x297f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x297f58: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x297f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f5c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x297f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x297f60: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x297f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f64: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x297f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x297f68: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x297f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f6c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x297f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x297f70: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x297f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f74: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x297f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x297f78: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x297f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f7c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x297f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x297f80: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x297f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f84: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x297f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x297f88: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x297f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x297f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x297f90: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x297f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f94: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x297f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x297f98: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x297f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f9c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x297f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x297fa0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x297fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fa4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x297fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x297fa8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x297fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fac: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x297facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x297fb0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x297fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fb4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x297fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x297fb8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x297fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fbc: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x297fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x297fc0: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x297fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fc4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x297fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x297fc8: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x297fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fcc: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x297fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x297fd0: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x297fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fd4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x297fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x297fd8: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x297fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fdc: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x297fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x297fe0: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x297fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fe4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x297fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x297fe8: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x297fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fec: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x297fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x297ff0: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x297ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ff4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x297ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x297ff8: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x297ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ffc: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x297ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x298000: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x298000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298004: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x298004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x298008: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x298008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29800c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x29800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x298010: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x298010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298014: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x298014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x298018: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x298018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29801c: 0xc0a61b0  jal         func_2986C0
    ctx->pc = 0x29801Cu;
    SET_GPR_U32(ctx, 31, 0x298024u);
    ctx->pc = 0x298020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29801Cu;
            // 0x298020: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2986C0u;
    if (runtime->hasFunction(0x2986C0u)) {
        auto targetFn = runtime->lookupFunction(0x2986C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298024u; }
        if (ctx->pc != 0x298024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986C0_0x2986c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298024u; }
        if (ctx->pc != 0x298024u) { return; }
    }
    ctx->pc = 0x298024u;
label_298024:
    // 0x298024: 0x27a20338  addiu       $v0, $sp, 0x338
    ctx->pc = 0x298024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x298028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x298028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29802c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x298030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x298030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x298034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298034u;
    {
        const bool branch_taken_0x298034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298034) {
            ctx->pc = 0x298068u;
            goto label_298068;
        }
    }
    ctx->pc = 0x29803Cu;
    // 0x29803c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x29803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x298040: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x298040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x298044: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x298044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x298048: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29804c: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x29804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x298050: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x298050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x298054: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x298054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x298058: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x298058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29805c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298060: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x298060u;
    SET_GPR_U32(ctx, 31, 0x298068u);
    ctx->pc = 0x298064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298060u;
            // 0x298064: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298068u; }
        if (ctx->pc != 0x298068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298068u; }
        if (ctx->pc != 0x298068u) { return; }
    }
    ctx->pc = 0x298068u;
label_298068:
    // 0x298068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29806c: 0x0  nop
    ctx->pc = 0x29806cu;
    // NOP
label_298070:
    // 0x298070: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x298070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x298074: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x298074u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298078: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x298078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29807c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x29807cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298080: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x298080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298084: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x298084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298088: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x298088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29808c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x29808cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298090: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x298090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x298094: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x298094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298098: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x298098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29809c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x29809cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2980a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2980a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2980a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2980a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2980a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2980a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2980ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2980acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2980b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2980b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2980b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2980B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2980B4u;
            // 0x2980b8: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2980BCu;
    // 0x2980bc: 0x0  nop
    ctx->pc = 0x2980bcu;
    // NOP
}
