#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002980C0
// Address: 0x2980c0 - 0x2986c0
void sub_002980C0_0x2980c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002980C0_0x2980c0");
#endif

    switch (ctx->pc) {
        case 0x2982e0u: goto label_2982e0;
        case 0x2982f0u: goto label_2982f0;
        case 0x2982fcu: goto label_2982fc;
        case 0x298408u: goto label_298408;
        case 0x2984c8u: goto label_2984c8;
        case 0x298618u: goto label_298618;
        case 0x29863cu: goto label_29863c;
        case 0x29867cu: goto label_29867c;
        default: break;
    }

    ctx->pc = 0x2980c0u;

    // 0x2980c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2980c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2980c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2980c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2980c8: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2980c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2980cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2980ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2980d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2980d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2980d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2980d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2980d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2980dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2980dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2980e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2980e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2980e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2980e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2980e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2980ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2980f0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2980f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2980f4: 0x4609b036  c.le.s      $f22, $f9
    ctx->pc = 0x2980f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2980f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2980f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2980fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2980fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298100: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x298100u;
    {
        const bool branch_taken_0x298100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298100u;
            // 0x298104: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298100) {
            ctx->pc = 0x298110u;
            goto label_298110;
        }
    }
    ctx->pc = 0x298108u;
    // 0x298108: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x298108u;
    {
        const bool branch_taken_0x298108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298108u;
            // 0x29810c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298108) {
            ctx->pc = 0x298688u;
            goto label_298688;
        }
    }
    ctx->pc = 0x298110u;
label_298110:
    // 0x298110: 0x4609b836  c.le.s      $f23, $f9
    ctx->pc = 0x298110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298114: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x298114u;
    {
        const bool branch_taken_0x298114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298114u;
            // 0x298118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298114) {
            ctx->pc = 0x298128u;
            goto label_298128;
        }
    }
    ctx->pc = 0x29811Cu;
    // 0x29811c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x29811Cu;
    {
        const bool branch_taken_0x29811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29811c) {
            ctx->pc = 0x298688u;
            goto label_298688;
        }
    }
    ctx->pc = 0x298124u;
    // 0x298124: 0x0  nop
    ctx->pc = 0x298124u;
    // NOP
label_298128:
    // 0x298128: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x298128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29812c: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x29812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298130: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x298130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298134: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x298134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298138: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x298138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29813c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x29813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298140: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x298140u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x298144: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x298144u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298148: 0x460219c1  sub.s       $f7, $f3, $f2
    ctx->pc = 0x298148u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x29814c: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x29814cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x298150: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x298150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x298154: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x298154u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298158: 0x4606301c  madd.s      $f0, $f6, $f6
    ctx->pc = 0x298158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x29815c: 0x46000504  c1          0x504
    ctx->pc = 0x29815cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x298160: 0x0  nop
    ctx->pc = 0x298160u;
    // NOP
    // 0x298164: 0x0  nop
    ctx->pc = 0x298164u;
    // NOP
    // 0x298168: 0x4609a036  c.le.s      $f20, $f9
    ctx->pc = 0x298168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29816c: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x29816Cu;
    {
        const bool branch_taken_0x29816c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29816c) {
            ctx->pc = 0x298360u;
            goto label_298360;
        }
    }
    ctx->pc = 0x298174u;
    // 0x298174: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x298174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298178: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x298178u;
    {
        const bool branch_taken_0x298178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298178u;
            // 0x29817c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298178) {
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x298180u;
    // 0x298180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298184: 0x0  nop
    ctx->pc = 0x298184u;
    // NOP
    // 0x298188: 0x46000a56  rsqrt.s     $f9, $f1, $f0
    ctx->pc = 0x298188u;
    ctx->f[9] = 1.0f / sqrtf(ctx->f[1]);
    // 0x29818c: 0x0  nop
    ctx->pc = 0x29818cu;
    // NOP
    // 0x298190: 0x0  nop
    ctx->pc = 0x298190u;
    // NOP
    // 0x298194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298194u;
    {
        const bool branch_taken_0x298194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298194) {
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x29819Cu;
    // 0x29819c: 0x0  nop
    ctx->pc = 0x29819cu;
    // NOP
label_2981a0:
    // 0x2981a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2981a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2981a4: 0x2463d700  addiu       $v1, $v1, -0x2900
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956800));
    // 0x2981a8: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x2981ac: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2981acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2981b0: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x2981b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x2981b4: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x2981b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x2981b8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2981b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2981bc: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x2981bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x2981c0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2981c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2981c4: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x2981c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2981c8: 0x46043842  mul.s       $f1, $f7, $f4
    ctx->pc = 0x2981c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2981cc: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x2981ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x2981d0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2981d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2981d4: 0x4603331c  madd.s      $f12, $f6, $f3
    ctx->pc = 0x2981d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x2981d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981dc: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x2981dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x2981e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2981e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2981e4: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x2981E4u;
    {
        const bool branch_taken_0x2981e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2981e4) {
            ctx->pc = 0x298308u;
            goto label_298308;
        }
    }
    ctx->pc = 0x2981ECu;
    // 0x2981ec: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x2981ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2981f0: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2981f4: 0x4607181d  msub.s      $f0, $f3, $f7
    ctx->pc = 0x2981f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x2981f8: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2981f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2981fc: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x2981fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x298200: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x298200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x298204: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x298204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x298208: 0x4606281d  msub.s      $f0, $f5, $f6
    ctx->pc = 0x298208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x29820c: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x29820cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x298210: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x298210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x298214: 0x4608201d  msub.s      $f0, $f4, $f8
    ctx->pc = 0x298214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x298218: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x298218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29821c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29821cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x298220: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x298220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x298224: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x298224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298228: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x298228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29822c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x29822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298230: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x298230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x298234: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x298234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x298238: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x298238u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29823c: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x29823cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x298240: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x298240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298244: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x298244u;
    {
        const bool branch_taken_0x298244 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x298248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298244u;
            // 0x298248: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298244) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x29824Cu;
    // 0x29824c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298250: 0x0  nop
    ctx->pc = 0x298250u;
    // NOP
    // 0x298254: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x298254u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x298258: 0x0  nop
    ctx->pc = 0x298258u;
    // NOP
    // 0x29825c: 0x0  nop
    ctx->pc = 0x29825cu;
    // NOP
    // 0x298260: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x298260u;
    {
        const bool branch_taken_0x298260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298260) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x298268u;
label_298268:
    // 0x298268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29826c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x29826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298274: 0x46006085  abs.s       $f2, $f12
    ctx->pc = 0x298274u;
    ctx->f[2] = FPU_ABS_S(ctx->f[12]);
    // 0x298278: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x298278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29827c: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x29827cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x298280: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x298280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x298284: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x298284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298288: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x298288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29828c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x298290: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x298290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298294: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x298294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x298298: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x298298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29829c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2982a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2982a4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2982A4u;
    {
        const bool branch_taken_0x2982a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2982A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982A4u;
            // 0x2982a8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982a4) {
            ctx->pc = 0x2982D8u;
            goto label_2982d8;
        }
    }
    ctx->pc = 0x2982ACu;
    // 0x2982ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2982acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2982b0: 0x0  nop
    ctx->pc = 0x2982b0u;
    // NOP
    // 0x2982b4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2982b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2982b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2982B8u;
    {
        const bool branch_taken_0x2982b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2982BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982B8u;
            // 0x2982bc: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982b8) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x2982C0u;
    // 0x2982c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2982C0u;
    {
        const bool branch_taken_0x2982c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982c0) {
            ctx->pc = 0x2982D0u;
            goto label_2982d0;
        }
    }
    ctx->pc = 0x2982C8u;
label_2982c8:
    // 0x2982c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2982c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2982cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2982ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2982d0:
    // 0x2982d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2982D0u;
    {
        const bool branch_taken_0x2982d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982D0u;
            // 0x2982d4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982d0) {
            ctx->pc = 0x2982E4u;
            goto label_2982e4;
        }
    }
    ctx->pc = 0x2982D8u;
label_2982d8:
    // 0x2982d8: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x2982D8u;
    SET_GPR_U32(ctx, 31, 0x2982E0u);
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982E0u; }
        if (ctx->pc != 0x2982E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982E0u; }
        if (ctx->pc != 0x2982E0u) { return; }
    }
    ctx->pc = 0x2982E0u;
label_2982e0:
    // 0x2982e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2982e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2982e4:
    // 0x2982e4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2982e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2982e8: 0xc0a3788  jal         func_28DE20
    ctx->pc = 0x2982E8u;
    SET_GPR_U32(ctx, 31, 0x2982F0u);
    ctx->pc = 0x2982ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982E8u;
            // 0x2982ec: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DE20u;
    if (runtime->hasFunction(0x28DE20u)) {
        auto targetFn = runtime->lookupFunction(0x28DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982F0u; }
        if (ctx->pc != 0x2982F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DE20_0x28de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982F0u; }
        if (ctx->pc != 0x2982F0u) { return; }
    }
    ctx->pc = 0x2982F0u;
label_2982f0:
    // 0x2982f0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2982f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2982f4: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x2982F4u;
    SET_GPR_U32(ctx, 31, 0x2982FCu);
    ctx->pc = 0x2982F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982F4u;
            // 0x2982f8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982FCu; }
        if (ctx->pc != 0x2982FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982FCu; }
        if (ctx->pc != 0x2982FCu) { return; }
    }
    ctx->pc = 0x2982FCu;
label_2982fc:
    // 0x2982fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2982FCu;
    {
        const bool branch_taken_0x2982fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982fc) {
            ctx->pc = 0x298368u;
            goto label_298368;
        }
    }
    ctx->pc = 0x298304u;
    // 0x298304: 0x0  nop
    ctx->pc = 0x298304u;
    // NOP
label_298308:
    // 0x298308: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x298308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x29830c: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x29830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x298310: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x298310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x298314: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x298314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x298318: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x298318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29831c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29831cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x298320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298324: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x298324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x298328: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x298328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x29832c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29832cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x298330: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x298330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x298334: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298338: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x29833c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x29833cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x298340: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x298340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x298344: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x298344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x298348: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x298348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x29834c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x29834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x298350: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x298350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x298354: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x298354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x298358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298358u;
    {
        const bool branch_taken_0x298358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298358u;
            // 0x29835c: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298358) {
            ctx->pc = 0x298368u;
            goto label_298368;
        }
    }
    ctx->pc = 0x298360u;
label_298360:
    // 0x298360: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x298360u;
    {
        const bool branch_taken_0x298360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298360u;
            // 0x298364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298360) {
            ctx->pc = 0x298688u;
            goto label_298688;
        }
    }
    ctx->pc = 0x298368u;
label_298368:
    // 0x298368: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x298368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29836c: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x29836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298370: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x298370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x298374: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x298374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298378: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x298378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x29837c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29837cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298380: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x298380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x298384: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x298384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298388: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x298388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x29838c: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x29838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x298390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x298390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x298394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298398: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x298398u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x29839c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2983a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2983a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2983a4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x2983a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2983a8: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2983a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2983ac: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2983acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2983b0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2983b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2983b4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2983b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2983b8: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x2983b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2983bc: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x2983bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2983c0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2983c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2983c4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2983c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2983c8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2983c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2983cc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2983ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2983d0: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x2983d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2983d4: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2983d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2983d8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2983d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2983dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2983dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2983e0: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x2983e0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2983e4: 0xe7a80150  swc1        $f8, 0x150($sp)
    ctx->pc = 0x2983e4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2983e8: 0xe7a60154  swc1        $f6, 0x154($sp)
    ctx->pc = 0x2983e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2983ec: 0xe7a40158  swc1        $f4, 0x158($sp)
    ctx->pc = 0x2983ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2983f0: 0xe7a2015c  swc1        $f2, 0x15C($sp)
    ctx->pc = 0x2983f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2983f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2983f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2983f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2983f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2983fc: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x2983fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x298400: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x298400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x298404: 0x0  nop
    ctx->pc = 0x298404u;
    // NOP
label_298408:
    // 0x298408: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x298408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29840c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29840cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x298410: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x298410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x298414: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x298414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x298418: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x298418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x29841c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29841cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x298420: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x298420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x298424: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x298424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x298428: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x298428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x29842c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x29842cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x298430: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x298430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x298434: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x298434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x298438: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x298438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x29843c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x29843cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x298440: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x298440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x298444: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x298444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x298448: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x298448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x29844c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x29844cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x298450: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x298450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x298454: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x298454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x298458: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x298458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x29845c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x29845cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x298460: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x298460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x298464: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x298464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x298468: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x298468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x29846c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x29846cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x298470: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x298470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x298474: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x298474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x298478: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x298478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x29847c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x29847cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x298480: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x298480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x298484: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x298484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x298488: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x298488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x29848c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x29848cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x298490: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x298490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x298494: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x298494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x298498: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x298498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x29849c: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x29849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2984a0: 0x1482ffd9  bne         $a0, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2984A0u;
    {
        const bool branch_taken_0x2984a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2984A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2984A0u;
            // 0x2984a4: 0x27b00068  addiu       $s0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984a0) {
            ctx->pc = 0x298408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298408;
        }
    }
    ctx->pc = 0x2984A8u;
    // 0x2984a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2984ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2984acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2984b0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2984b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2984b4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2984b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2984b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2984B8u;
    {
        const bool branch_taken_0x2984b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2984BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2984B8u;
            // 0x2984bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984b8) {
            ctx->pc = 0x2984C8u;
            goto label_2984c8;
        }
    }
    ctx->pc = 0x2984C0u;
    // 0x2984c0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2984C0u;
    SET_GPR_U32(ctx, 31, 0x2984C8u);
    ctx->pc = 0x2984C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984C0u;
            // 0x2984c4: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984C8u; }
        if (ctx->pc != 0x2984C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984C8u; }
        if (ctx->pc != 0x2984C8u) { return; }
    }
    ctx->pc = 0x2984C8u;
label_2984c8:
    // 0x2984c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2984cc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2984ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2984d0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2984d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2984d4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2984d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2984d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2984dc: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x2984dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2984e0: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x2984e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2984e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984e8: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2984ec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2984ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2984f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2984f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2984f4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2984f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2984f8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2984fc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2984fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x298500: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x298500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x298504: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298508: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x298508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29850c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x29850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298510: 0x4617b942  mul.s       $f5, $f23, $f23
    ctx->pc = 0x298510u;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x298514: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x298518: 0xe6430050  swc1        $f3, 0x50($s2)
    ctx->pc = 0x298518u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x29851c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x298520: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x298520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298524: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x298524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x298528: 0xe6430054  swc1        $f3, 0x54($s2)
    ctx->pc = 0x298528u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x29852c: 0x4604a0c3  div.s       $f3, $f20, $f4
    ctx->pc = 0x29852cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[4];
    // 0x298530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298534: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x298534u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x298538: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x298538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x29853c: 0xc7a50128  lwc1        $f5, 0x128($sp)
    ctx->pc = 0x29853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298540: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x298540u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x298544: 0xe6450058  swc1        $f5, 0x58($s2)
    ctx->pc = 0x298544u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x298548: 0xc7a5012c  lwc1        $f5, 0x12C($sp)
    ctx->pc = 0x298548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29854c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x29854cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x298550: 0xe645005c  swc1        $f5, 0x5C($s2)
    ctx->pc = 0x298550u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x298554: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x298554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298558: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x298558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29855c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29855cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x298560: 0xe6450060  swc1        $f5, 0x60($s2)
    ctx->pc = 0x298560u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x298564: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x298564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298568: 0xe6450064  swc1        $f5, 0x64($s2)
    ctx->pc = 0x298568u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x29856c: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x29856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298570: 0xe6450068  swc1        $f5, 0x68($s2)
    ctx->pc = 0x298570u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x298574: 0xc524000c  lwc1        $f4, 0xC($t1)
    ctx->pc = 0x298574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298578: 0xe644006c  swc1        $f4, 0x6C($s2)
    ctx->pc = 0x298578u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x29857c: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x29857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298580: 0xe6440070  swc1        $f4, 0x70($s2)
    ctx->pc = 0x298580u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x298584: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x298584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298588: 0xe6440074  swc1        $f4, 0x74($s2)
    ctx->pc = 0x298588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x29858c: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x29858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298590: 0xe6440078  swc1        $f4, 0x78($s2)
    ctx->pc = 0x298590u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x298594: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x298594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298598: 0xe644007c  swc1        $f4, 0x7C($s2)
    ctx->pc = 0x298598u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x29859c: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x29859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2985a0: 0xe6430080  swc1        $f3, 0x80($s2)
    ctx->pc = 0x2985a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x2985a4: 0xc7a30154  lwc1        $f3, 0x154($sp)
    ctx->pc = 0x2985a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2985a8: 0xe6430084  swc1        $f3, 0x84($s2)
    ctx->pc = 0x2985a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x2985ac: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x2985acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2985b0: 0xe6430088  swc1        $f3, 0x88($s2)
    ctx->pc = 0x2985b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2985b4: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x2985b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2985b8: 0xe643008c  swc1        $f3, 0x8C($s2)
    ctx->pc = 0x2985b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2985bc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2985bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2985c0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2985c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x2985c4: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2985c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2985c8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2985c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x2985cc: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2985ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2985d0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2985d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2985d4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2985d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x2985d8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x2985d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x2985dc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2985dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2985e0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2985e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2985e4: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2985e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2985e8: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2985e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x2985ec: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2985ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x2985f0: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x2985f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x2985f4: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2985f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2985f8: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2985f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x2985fc: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x2985fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x298600: 0xae460034  sw          $a2, 0x34($s2)
    ctx->pc = 0x298600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 6));
    // 0x298604: 0xae460048  sw          $a2, 0x48($s2)
    ctx->pc = 0x298604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 6));
    // 0x298608: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x298608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x29860c: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x29860cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x298610: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x298610u;
    SET_GPR_U32(ctx, 31, 0x298618u);
    ctx->pc = 0x298614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298610u;
            // 0x298614: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298618u; }
        if (ctx->pc != 0x298618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298618u; }
        if (ctx->pc != 0x298618u) { return; }
    }
    ctx->pc = 0x298618u;
label_298618:
    // 0x298618: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x298618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x29861c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29861cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298620: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x298620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x298624: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x298624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x298628: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x298628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x29862c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x29862cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x298630: 0xe6550000  swc1        $f21, 0x0($s2)
    ctx->pc = 0x298630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x298634: 0xc0a61b0  jal         func_2986C0
    ctx->pc = 0x298634u;
    SET_GPR_U32(ctx, 31, 0x29863Cu);
    ctx->pc = 0x298638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298634u;
            // 0x298638: 0xe6560004  swc1        $f22, 0x4($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2986C0u;
    if (runtime->hasFunction(0x2986C0u)) {
        auto targetFn = runtime->lookupFunction(0x2986C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29863Cu; }
        if (ctx->pc != 0x29863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986C0_0x2986c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29863Cu; }
        if (ctx->pc != 0x29863Cu) { return; }
    }
    ctx->pc = 0x29863Cu;
label_29863c:
    // 0x29863c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298640: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x298640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x298644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x298644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x298648: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x298648u;
    {
        const bool branch_taken_0x298648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298648) {
            ctx->pc = 0x298680u;
            goto label_298680;
        }
    }
    ctx->pc = 0x298650u;
    // 0x298650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298654: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x298658: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x29865c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x298660: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x298660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298664: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x298664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x298668: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x298668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x29866c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29866cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x298670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298674: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x298674u;
    SET_GPR_U32(ctx, 31, 0x29867Cu);
    ctx->pc = 0x298678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298674u;
            // 0x298678: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29867Cu; }
        if (ctx->pc != 0x29867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29867Cu; }
        if (ctx->pc != 0x29867Cu) { return; }
    }
    ctx->pc = 0x29867Cu;
label_29867c:
    // 0x29867c: 0x0  nop
    ctx->pc = 0x29867cu;
    // NOP
label_298680:
    // 0x298680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298684: 0x0  nop
    ctx->pc = 0x298684u;
    // NOP
label_298688:
    // 0x298688: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x298688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29868c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29868cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298690: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x298690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x298694: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x298694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298698: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x298698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29869c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29869cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2986a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2986a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2986a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2986a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2986a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2986ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2986ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2986B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2986ACu;
            // 0x2986b0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2986B4u;
    // 0x2986b4: 0x0  nop
    ctx->pc = 0x2986b4u;
    // NOP
    // 0x2986b8: 0x0  nop
    ctx->pc = 0x2986b8u;
    // NOP
    // 0x2986bc: 0x0  nop
    ctx->pc = 0x2986bcu;
    // NOP
}
