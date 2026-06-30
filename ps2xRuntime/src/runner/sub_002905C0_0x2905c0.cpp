#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002905C0
// Address: 0x2905c0 - 0x290f60
void sub_002905C0_0x2905c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002905C0_0x2905c0");
#endif

    switch (ctx->pc) {
        case 0x290eb4u: goto label_290eb4;
        default: break;
    }

    ctx->pc = 0x2905c0u;

    // 0x2905c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2905c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2905c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2905c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2905c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2905cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2905ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2905d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2905d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905d4: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2905d8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2905d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2905dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2905DCu;
    {
        const bool branch_taken_0x2905dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2905E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905DCu;
            // 0x2905e0: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905dc) {
            ctx->pc = 0x2905ECu;
            goto label_2905ec;
        }
    }
    ctx->pc = 0x2905E4u;
    // 0x2905e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2905E4u;
    {
        const bool branch_taken_0x2905e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905E4u;
            // 0x2905e8: 0x46006041  sub.s       $f1, $f12, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905e4) {
            ctx->pc = 0x2905F4u;
            goto label_2905f4;
        }
    }
    ctx->pc = 0x2905ECu;
label_2905ec:
    // 0x2905ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2905ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2905f0: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x2905f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2905f4:
    // 0x2905f4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2905f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2905f8: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x2905f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2905fc: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x2905fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x290600: 0x46000a42  mul.s       $f9, $f1, $f0
    ctx->pc = 0x290600u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290604: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290608: 0xc6070028  lwc1        $f7, 0x28($s0)
    ctx->pc = 0x290608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29060c: 0xc608002c  lwc1        $f8, 0x2C($s0)
    ctx->pc = 0x29060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x290610: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x290610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x290614: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x290614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290618: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x290618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29061c: 0xc604003c  lwc1        $f4, 0x3C($s0)
    ctx->pc = 0x29061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290620: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x290620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x290624: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x290624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x290628: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x290628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x29062c: 0x46033800  add.s       $f0, $f7, $f3
    ctx->pc = 0x29062cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x290630: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x290630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x290634: 0x46044000  add.s       $f0, $f8, $f4
    ctx->pc = 0x290634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x290638: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x290638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x29063c: 0xc60b0034  lwc1        $f11, 0x34($s0)
    ctx->pc = 0x29063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x290640: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x290640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x290644: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x290644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290648: 0x460b581a  mula.s      $f11, $f11
    ctx->pc = 0x290648u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x29064c: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x29064cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x290650: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x290650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x290654: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x290654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290658: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x290658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29065c: 0x4600029c  madd.s      $f10, $f0, $f0
    ctx->pc = 0x29065cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x290660: 0x460b5032  c.eq.s      $f10, $f11
    ctx->pc = 0x290660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290664: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x290664u;
    {
        const bool branch_taken_0x290664 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290664u;
            // 0x290668: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290664) {
            ctx->pc = 0x290688u;
            goto label_290688;
        }
    }
    ctx->pc = 0x29066Cu;
    // 0x29066c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x290670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290674: 0x0  nop
    ctx->pc = 0x290674u;
    // NOP
    // 0x290678: 0x460a02d6  rsqrt.s     $f11, $f0, $f10
    ctx->pc = 0x290678u;
    ctx->f[11] = 1.0f / sqrtf(ctx->f[0]);
    // 0x29067c: 0x0  nop
    ctx->pc = 0x29067cu;
    // NOP
    // 0x290680: 0x0  nop
    ctx->pc = 0x290680u;
    // NOP
    // 0x290684: 0x0  nop
    ctx->pc = 0x290684u;
    // NOP
label_290688:
    // 0x290688: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x290688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290690: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x290690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x290694: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x290694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290698: 0x460b5002  mul.s       $f0, $f10, $f11
    ctx->pc = 0x290698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x29069c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x29069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2906a0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2906a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2906a4: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2906a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2906a8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2906a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2906ac: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2906acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2906b0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2906b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2906b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2906b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2906b8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2906b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2906bc: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2906bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2906c0: 0x45000099  bc1f        . + 4 + (0x99 << 2)
    ctx->pc = 0x2906C0u;
    {
        const bool branch_taken_0x2906c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2906C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906C0u;
            // 0x2906c4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906c0) {
            ctx->pc = 0x290928u;
            goto label_290928;
        }
    }
    ctx->pc = 0x2906C8u;
    // 0x2906c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2906cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2906ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2906d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2906d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2906d8: 0x46090082  mul.s       $f2, $f0, $f9
    ctx->pc = 0x2906d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2906dc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2906dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2906e0: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x2906e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2906e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2906e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906e8: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x2906e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2906ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2906ECu;
    {
        const bool branch_taken_0x2906ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2906F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906ECu;
            // 0x2906f0: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906ec) {
            ctx->pc = 0x2906F8u;
            goto label_2906f8;
        }
    }
    ctx->pc = 0x2906F4u;
    // 0x2906f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2906f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2906f8:
    // 0x2906f8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2906F8u;
    {
        const bool branch_taken_0x2906f8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2906f8) {
            ctx->pc = 0x2906FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2906F8u;
            // 0x2906fc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29070Cu;
            goto label_29070c;
        }
    }
    ctx->pc = 0x290700u;
    // 0x290700: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x290700u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290704u;
    {
        const bool branch_taken_0x290704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290704u;
            // 0x290708: 0x46801aa0  cvt.s.w     $f10, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290704) {
            ctx->pc = 0x290724u;
            goto label_290724;
        }
    }
    ctx->pc = 0x29070Cu;
label_29070c:
    // 0x29070c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x29070cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290710: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290714: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x290714u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290718: 0x0  nop
    ctx->pc = 0x290718u;
    // NOP
    // 0x29071c: 0x46801aa0  cvt.s.w     $f10, $f3
    ctx->pc = 0x29071cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x290720: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x290720u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_290724:
    // 0x290724: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x290724u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29072c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x29072cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x290730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290730u;
    {
        const bool branch_taken_0x290730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290730u;
            // 0x290734: 0x4605091c  madd.s      $f4, $f1, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290730) {
            ctx->pc = 0x29073Cu;
            goto label_29073c;
        }
    }
    ctx->pc = 0x290738u;
    // 0x290738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29073c:
    // 0x29073c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29073Cu;
    {
        const bool branch_taken_0x29073c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29073c) {
            ctx->pc = 0x290740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29073Cu;
            // 0x290740: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290750u;
            goto label_290750;
        }
    }
    ctx->pc = 0x290744u;
    // 0x290744: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x290744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290748: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290748u;
    {
        const bool branch_taken_0x290748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290748u;
            // 0x29074c: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290748) {
            ctx->pc = 0x290768u;
            goto label_290768;
        }
    }
    ctx->pc = 0x290750u;
label_290750:
    // 0x290750: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290754: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290758: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x290758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29075c: 0x0  nop
    ctx->pc = 0x29075cu;
    // NOP
    // 0x290760: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x290760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290764: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290764u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290768:
    // 0x290768: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x290768u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x29076c: 0x460a28dc  madd.s      $f3, $f5, $f10
    ctx->pc = 0x29076cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x290770: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x290770u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290774: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x290774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290778: 0x46043032  c.eq.s      $f6, $f4
    ctx->pc = 0x290778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29077c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29077Cu;
    {
        const bool branch_taken_0x29077c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29077Cu;
            // 0x290780: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29077c) {
            ctx->pc = 0x290788u;
            goto label_290788;
        }
    }
    ctx->pc = 0x290784u;
    // 0x290784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290788:
    // 0x290788: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290788u;
    {
        const bool branch_taken_0x290788 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290788) {
            ctx->pc = 0x29078Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290788u;
            // 0x29078c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29079Cu;
            goto label_29079c;
        }
    }
    ctx->pc = 0x290790u;
    // 0x290790: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x290790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290794u;
    {
        const bool branch_taken_0x290794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290794u;
            // 0x290798: 0x46801960  cvt.s.w     $f5, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290794) {
            ctx->pc = 0x2907B4u;
            goto label_2907b4;
        }
    }
    ctx->pc = 0x29079Cu;
label_29079c:
    // 0x29079c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x29079cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2907a0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2907a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2907a4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2907a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2907a8: 0x0  nop
    ctx->pc = 0x2907a8u;
    // NOP
    // 0x2907ac: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x2907acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2907b0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2907b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_2907b4:
    // 0x2907b4: 0x46043032  c.eq.s      $f6, $f4
    ctx->pc = 0x2907b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2907b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2907b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2907bc: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x2907bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2907c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2907C0u;
    {
        const bool branch_taken_0x2907c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2907C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907C0u;
            // 0x2907c4: 0x4606091c  madd.s      $f4, $f1, $f6 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907c0) {
            ctx->pc = 0x2907CCu;
            goto label_2907cc;
        }
    }
    ctx->pc = 0x2907C8u;
    // 0x2907c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2907cc:
    // 0x2907cc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2907CCu;
    {
        const bool branch_taken_0x2907cc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2907cc) {
            ctx->pc = 0x2907D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2907CCu;
            // 0x2907d0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2907E0u;
            goto label_2907e0;
        }
    }
    ctx->pc = 0x2907D4u;
    // 0x2907d4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2907d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2907d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2907D8u;
    {
        const bool branch_taken_0x2907d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907D8u;
            // 0x2907dc: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907d8) {
            ctx->pc = 0x2907F8u;
            goto label_2907f8;
        }
    }
    ctx->pc = 0x2907E0u;
label_2907e0:
    // 0x2907e0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2907e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2907e4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2907e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2907e8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2907e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2907ec: 0x0  nop
    ctx->pc = 0x2907ecu;
    // NOP
    // 0x2907f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2907f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2907f4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2907f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2907f8:
    // 0x2907f8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x2907f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2907fc: 0x460530dc  madd.s      $f3, $f6, $f5
    ctx->pc = 0x2907fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x290800: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x290800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x290804: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x290804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290808: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x290808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29080c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29080Cu;
    {
        const bool branch_taken_0x29080c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29080Cu;
            // 0x290810: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29080c) {
            ctx->pc = 0x290818u;
            goto label_290818;
        }
    }
    ctx->pc = 0x290814u;
    // 0x290814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290818:
    // 0x290818: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290818u;
    {
        const bool branch_taken_0x290818 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290818) {
            ctx->pc = 0x29081Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290818u;
            // 0x29081c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29082Cu;
            goto label_29082c;
        }
    }
    ctx->pc = 0x290820u;
    // 0x290820: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x290820u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290824u;
    {
        const bool branch_taken_0x290824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290824u;
            // 0x290828: 0x46801960  cvt.s.w     $f5, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290824) {
            ctx->pc = 0x290844u;
            goto label_290844;
        }
    }
    ctx->pc = 0x29082Cu;
label_29082c:
    // 0x29082c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x29082cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290830: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290834: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x290834u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290838: 0x0  nop
    ctx->pc = 0x290838u;
    // NOP
    // 0x29083c: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x29083cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x290840: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x290840u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_290844:
    // 0x290844: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x290844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29084c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x29084cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x290850: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290850u;
    {
        const bool branch_taken_0x290850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290850u;
            // 0x290854: 0x4607091c  madd.s      $f4, $f1, $f7 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290850) {
            ctx->pc = 0x29085Cu;
            goto label_29085c;
        }
    }
    ctx->pc = 0x290858u;
    // 0x290858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29085c:
    // 0x29085c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29085Cu;
    {
        const bool branch_taken_0x29085c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29085c) {
            ctx->pc = 0x290860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29085Cu;
            // 0x290860: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290870u;
            goto label_290870;
        }
    }
    ctx->pc = 0x290864u;
    // 0x290864: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x290864u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x290868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290868u;
    {
        const bool branch_taken_0x290868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290868u;
            // 0x29086c: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290868) {
            ctx->pc = 0x290888u;
            goto label_290888;
        }
    }
    ctx->pc = 0x290870u;
label_290870:
    // 0x290870: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290874: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290878: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x290878u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29087c: 0x0  nop
    ctx->pc = 0x29087cu;
    // NOP
    // 0x290880: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x290880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290884: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290884u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290888:
    // 0x290888: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x290888u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x29088c: 0x460538dc  madd.s      $f3, $f7, $f5
    ctx->pc = 0x29088cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x290890: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x290890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x290894: 0xc604003c  lwc1        $f4, 0x3C($s0)
    ctx->pc = 0x290894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290898: 0x46044032  c.eq.s      $f8, $f4
    ctx->pc = 0x290898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29089c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29089Cu;
    {
        const bool branch_taken_0x29089c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2908A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29089Cu;
            // 0x2908a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29089c) {
            ctx->pc = 0x2908A8u;
            goto label_2908a8;
        }
    }
    ctx->pc = 0x2908A4u;
    // 0x2908a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2908a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2908a8:
    // 0x2908a8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2908A8u;
            // 0x2908ac: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2908BCu;
            goto label_2908bc;
        }
    }
    ctx->pc = 0x2908B0u;
    // 0x2908b0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2908b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2908b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2908B4u;
    {
        const bool branch_taken_0x2908b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908B4u;
            // 0x2908b8: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908b4) {
            ctx->pc = 0x2908D4u;
            goto label_2908d4;
        }
    }
    ctx->pc = 0x2908BCu;
label_2908bc:
    // 0x2908bc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2908bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2908c0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2908c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2908c4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2908c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2908c8: 0x0  nop
    ctx->pc = 0x2908c8u;
    // NOP
    // 0x2908cc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2908ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2908d0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2908d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2908d4:
    // 0x2908d4: 0x46044032  c.eq.s      $f8, $f4
    ctx->pc = 0x2908d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2908d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2908dc: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x2908dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2908e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2908E0u;
    {
        const bool branch_taken_0x2908e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2908E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908E0u;
            // 0x2908e4: 0x4608089c  madd.s      $f2, $f1, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e0) {
            ctx->pc = 0x2908ECu;
            goto label_2908ec;
        }
    }
    ctx->pc = 0x2908E8u;
    // 0x2908e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2908e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2908ec:
    // 0x2908ec: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2908ECu;
    {
        const bool branch_taken_0x2908ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2908ec) {
            ctx->pc = 0x2908F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2908ECu;
            // 0x2908f0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290900u;
            goto label_290900;
        }
    }
    ctx->pc = 0x2908F4u;
    // 0x2908f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2908f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2908f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2908F8u;
    {
        const bool branch_taken_0x2908f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908F8u;
            // 0x2908fc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908f8) {
            ctx->pc = 0x290918u;
            goto label_290918;
        }
    }
    ctx->pc = 0x290900u;
label_290900:
    // 0x290900: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290904: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290908: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290908u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29090c: 0x0  nop
    ctx->pc = 0x29090cu;
    // NOP
    // 0x290910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290914: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290918:
    // 0x290918: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290918u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29091c: 0x4603405c  madd.s      $f1, $f8, $f3
    ctx->pc = 0x29091cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x290920: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x290920u;
    {
        const bool branch_taken_0x290920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290920u;
            // 0x290924: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290920) {
            ctx->pc = 0x290B90u;
            goto label_290b90;
        }
    }
    ctx->pc = 0x290928u;
label_290928:
    // 0x290928: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x29092c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x290930: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x290930u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x290934: 0x0  nop
    ctx->pc = 0x290934u;
    // NOP
    // 0x290938: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x290938u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x29093c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290944: 0x0  nop
    ctx->pc = 0x290944u;
    // NOP
    // 0x290948: 0x46002981  sub.s       $f6, $f5, $f0
    ctx->pc = 0x290948u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x29094c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x29094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x290950: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x290950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x290954: 0x46015032  c.eq.s      $f10, $f1
    ctx->pc = 0x290954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290958: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290958u;
    {
        const bool branch_taken_0x290958 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290958u;
            // 0x29095c: 0x46060141  sub.s       $f5, $f0, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290958) {
            ctx->pc = 0x290964u;
            goto label_290964;
        }
    }
    ctx->pc = 0x290960u;
    // 0x290960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290964:
    // 0x290964: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290964u;
    {
        const bool branch_taken_0x290964 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290964) {
            ctx->pc = 0x290968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290964u;
            // 0x290968: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290978u;
            goto label_290978;
        }
    }
    ctx->pc = 0x29096Cu;
    // 0x29096c: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x29096cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x290970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290970u;
    {
        const bool branch_taken_0x290970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290970u;
            // 0x290974: 0x46803a20  cvt.s.w     $f8, $f7 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290970) {
            ctx->pc = 0x290990u;
            goto label_290990;
        }
    }
    ctx->pc = 0x290978u;
label_290978:
    // 0x290978: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29097c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29097cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290980: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x290980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x290984: 0x0  nop
    ctx->pc = 0x290984u;
    // NOP
    // 0x290988: 0x46803a20  cvt.s.w     $f8, $f7
    ctx->pc = 0x290988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x29098c: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x29098cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_290990:
    // 0x290990: 0x46015032  c.eq.s      $f10, $f1
    ctx->pc = 0x290990u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290998: 0x4601301a  mula.s      $f6, $f1
    ctx->pc = 0x290998u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29099c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29099Cu;
    {
        const bool branch_taken_0x29099c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2909A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29099Cu;
            // 0x2909a0: 0x460a29dc  madd.s      $f7, $f5, $f10 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29099c) {
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x2909A4u;
    // 0x2909a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2909a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2909a8:
    // 0x2909a8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2909A8u;
    {
        const bool branch_taken_0x2909a8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2909a8) {
            ctx->pc = 0x2909ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2909A8u;
            // 0x2909ac: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2909BCu;
            goto label_2909bc;
        }
    }
    ctx->pc = 0x2909B0u;
    // 0x2909b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2909b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2909b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2909B4u;
    {
        const bool branch_taken_0x2909b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909B4u;
            // 0x2909b8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909b4) {
            ctx->pc = 0x2909D4u;
            goto label_2909d4;
        }
    }
    ctx->pc = 0x2909BCu;
label_2909bc:
    // 0x2909bc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2909bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2909c0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2909c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2909c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2909c8: 0x0  nop
    ctx->pc = 0x2909c8u;
    // NOP
    // 0x2909cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2909ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2909d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2909d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2909d4:
    // 0x2909d4: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x2909d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2909d8: 0x4608505c  madd.s      $f1, $f10, $f8
    ctx->pc = 0x2909d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x2909dc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2909dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2909e0: 0xc6080034  lwc1        $f8, 0x34($s0)
    ctx->pc = 0x2909e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2909e4: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x2909e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2909e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2909E8u;
    {
        const bool branch_taken_0x2909e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2909ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909E8u;
            // 0x2909ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909e8) {
            ctx->pc = 0x2909F4u;
            goto label_2909f4;
        }
    }
    ctx->pc = 0x2909F0u;
    // 0x2909f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2909f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2909f4:
    // 0x2909f4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2909F4u;
    {
        const bool branch_taken_0x2909f4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2909f4) {
            ctx->pc = 0x2909F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2909F4u;
            // 0x2909f8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290A08u;
            goto label_290a08;
        }
    }
    ctx->pc = 0x2909FCu;
    // 0x2909fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2909fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290a00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290A00u;
    {
        const bool branch_taken_0x290a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A00u;
            // 0x290a04: 0x468009e0  cvt.s.w     $f7, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a00) {
            ctx->pc = 0x290A20u;
            goto label_290a20;
        }
    }
    ctx->pc = 0x290A08u;
label_290a08:
    // 0x290a08: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290a0c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290a10: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290a10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290a14: 0x0  nop
    ctx->pc = 0x290a14u;
    // NOP
    // 0x290a18: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x290a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x290a1c: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x290a1cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_290a20:
    // 0x290a20: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x290a20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290a24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a28: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x290a28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x290a2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290A2Cu;
    {
        const bool branch_taken_0x290a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A2Cu;
            // 0x290a30: 0x4608289c  madd.s      $f2, $f5, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a2c) {
            ctx->pc = 0x290A38u;
            goto label_290a38;
        }
    }
    ctx->pc = 0x290A34u;
    // 0x290a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a38:
    // 0x290a38: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290A38u;
    {
        const bool branch_taken_0x290a38 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290a38) {
            ctx->pc = 0x290A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290A38u;
            // 0x290a3c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290A4Cu;
            goto label_290a4c;
        }
    }
    ctx->pc = 0x290A40u;
    // 0x290a40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290a40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290a44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290A44u;
    {
        const bool branch_taken_0x290a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A44u;
            // 0x290a48: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a44) {
            ctx->pc = 0x290A64u;
            goto label_290a64;
        }
    }
    ctx->pc = 0x290A4Cu;
label_290a4c:
    // 0x290a4c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290a50: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290a54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290a54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290a58: 0x0  nop
    ctx->pc = 0x290a58u;
    // NOP
    // 0x290a5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290a60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290a60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290a64:
    // 0x290a64: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290a64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290a68: 0x4607405c  madd.s      $f1, $f8, $f7
    ctx->pc = 0x290a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x290a6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x290a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x290a70: 0xc6080038  lwc1        $f8, 0x38($s0)
    ctx->pc = 0x290a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x290a74: 0x46034032  c.eq.s      $f8, $f3
    ctx->pc = 0x290a74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290a78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290A78u;
    {
        const bool branch_taken_0x290a78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A78u;
            // 0x290a7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a78) {
            ctx->pc = 0x290A84u;
            goto label_290a84;
        }
    }
    ctx->pc = 0x290A80u;
    // 0x290a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a84:
    // 0x290a84: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290A84u;
    {
        const bool branch_taken_0x290a84 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290a84) {
            ctx->pc = 0x290A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290A84u;
            // 0x290a88: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290A98u;
            goto label_290a98;
        }
    }
    ctx->pc = 0x290A8Cu;
    // 0x290a8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290a8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290a90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290A90u;
    {
        const bool branch_taken_0x290a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A90u;
            // 0x290a94: 0x468009e0  cvt.s.w     $f7, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a90) {
            ctx->pc = 0x290AB0u;
            goto label_290ab0;
        }
    }
    ctx->pc = 0x290A98u;
label_290a98:
    // 0x290a98: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290a9c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290aa0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290aa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290aa4: 0x0  nop
    ctx->pc = 0x290aa4u;
    // NOP
    // 0x290aa8: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x290aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x290aac: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x290aacu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_290ab0:
    // 0x290ab0: 0x46034032  c.eq.s      $f8, $f3
    ctx->pc = 0x290ab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ab8: 0x4603301a  mula.s      $f6, $f3
    ctx->pc = 0x290ab8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x290abc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290ABCu;
    {
        const bool branch_taken_0x290abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290ABCu;
            // 0x290ac0: 0x4608289c  madd.s      $f2, $f5, $f8 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290abc) {
            ctx->pc = 0x290AC8u;
            goto label_290ac8;
        }
    }
    ctx->pc = 0x290AC4u;
    // 0x290ac4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290ac8:
    // 0x290ac8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290AC8u;
    {
        const bool branch_taken_0x290ac8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290ac8) {
            ctx->pc = 0x290ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290AC8u;
            // 0x290acc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290ADCu;
            goto label_290adc;
        }
    }
    ctx->pc = 0x290AD0u;
    // 0x290ad0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290ad0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290ad4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290AD4u;
    {
        const bool branch_taken_0x290ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290AD4u;
            // 0x290ad8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ad4) {
            ctx->pc = 0x290AF4u;
            goto label_290af4;
        }
    }
    ctx->pc = 0x290ADCu;
label_290adc:
    // 0x290adc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290ae0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290ae4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290ae4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290ae8: 0x0  nop
    ctx->pc = 0x290ae8u;
    // NOP
    // 0x290aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290af0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290af4:
    // 0x290af4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290af4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290af8: 0x4607405c  madd.s      $f1, $f8, $f7
    ctx->pc = 0x290af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x290afc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x290afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x290b00: 0xc607003c  lwc1        $f7, 0x3C($s0)
    ctx->pc = 0x290b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x290b04: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x290b04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290b08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290B08u;
    {
        const bool branch_taken_0x290b08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B08u;
            // 0x290b0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b08) {
            ctx->pc = 0x290B14u;
            goto label_290b14;
        }
    }
    ctx->pc = 0x290B10u;
    // 0x290b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290b14:
    // 0x290b14: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290B14u;
    {
        const bool branch_taken_0x290b14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290b14) {
            ctx->pc = 0x290B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290B14u;
            // 0x290b18: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290B28u;
            goto label_290b28;
        }
    }
    ctx->pc = 0x290B1Cu;
    // 0x290b1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290B20u;
    {
        const bool branch_taken_0x290b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B20u;
            // 0x290b24: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b20) {
            ctx->pc = 0x290B40u;
            goto label_290b40;
        }
    }
    ctx->pc = 0x290B28u;
label_290b28:
    // 0x290b28: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290b2c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290b30: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290b30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290b34: 0x0  nop
    ctx->pc = 0x290b34u;
    // NOP
    // 0x290b38: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x290b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290b3c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290b3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290b40:
    // 0x290b40: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x290b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b48: 0x4604301a  mula.s      $f6, $f4
    ctx->pc = 0x290b48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x290b4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290B4Cu;
    {
        const bool branch_taken_0x290b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B4Cu;
            // 0x290b50: 0x4607289c  madd.s      $f2, $f5, $f7 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b4c) {
            ctx->pc = 0x290B58u;
            goto label_290b58;
        }
    }
    ctx->pc = 0x290B54u;
    // 0x290b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290b58:
    // 0x290b58: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290B58u;
    {
        const bool branch_taken_0x290b58 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290b58) {
            ctx->pc = 0x290B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290B58u;
            // 0x290b5c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290B6Cu;
            goto label_290b6c;
        }
    }
    ctx->pc = 0x290B60u;
    // 0x290b60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290b60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290B64u;
    {
        const bool branch_taken_0x290b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B64u;
            // 0x290b68: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b64) {
            ctx->pc = 0x290B84u;
            goto label_290b84;
        }
    }
    ctx->pc = 0x290B6Cu;
label_290b6c:
    // 0x290b6c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290b70: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290b74: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290b74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290b78: 0x0  nop
    ctx->pc = 0x290b78u;
    // NOP
    // 0x290b7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290b80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290b84:
    // 0x290b84: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290b84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290b88: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x290b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x290b8c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x290b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_290b90:
    // 0x290b90: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x290b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290b94: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x290b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290b98: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x290b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b9c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x290b9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x290ba0: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x290ba0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x290ba4: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x290ba4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x290ba8: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x290ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x290bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290bb0: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x290bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x290bb4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x290bb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290bb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x290BB8u;
    {
        const bool branch_taken_0x290bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290bb8) {
            ctx->pc = 0x290BD8u;
            goto label_290bd8;
        }
    }
    ctx->pc = 0x290BC0u;
    // 0x290bc0: 0x0  nop
    ctx->pc = 0x290bc0u;
    // NOP
    // 0x290bc4: 0x0  nop
    ctx->pc = 0x290bc4u;
    // NOP
    // 0x290bc8: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x290bc8u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
    // 0x290bcc: 0x0  nop
    ctx->pc = 0x290bccu;
    // NOP
    // 0x290bd0: 0x0  nop
    ctx->pc = 0x290bd0u;
    // NOP
    // 0x290bd4: 0x0  nop
    ctx->pc = 0x290bd4u;
    // NOP
label_290bd8:
    // 0x290bd8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bdc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x290be0: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x290be0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x290be4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290be4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290be8: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x290be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x290bec: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x290becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290bf4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x290bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x290bf8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x290bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290c00: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x290c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x290c04: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x290c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290c0c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x290c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x290c10: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c14: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x290c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x290c18: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x290c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c1c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x290c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x290c20: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x290c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c24: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x290c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x290c28: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x290c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c2c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x290c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x290c30: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x290c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290c34: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x290c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290c38: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290c3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290C3Cu;
    {
        const bool branch_taken_0x290c3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C3Cu;
            // 0x290c40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c3c) {
            ctx->pc = 0x290C48u;
            goto label_290c48;
        }
    }
    ctx->pc = 0x290C44u;
    // 0x290c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290c48:
    // 0x290c48: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C48u;
    {
        const bool branch_taken_0x290c48 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290c48) {
            ctx->pc = 0x290C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C48u;
            // 0x290c4c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290C50u;
    // 0x290c50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290c50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290C54u;
    {
        const bool branch_taken_0x290c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C54u;
            // 0x290c58: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c54) {
            ctx->pc = 0x290C74u;
            goto label_290c74;
        }
    }
    ctx->pc = 0x290C5Cu;
label_290c5c:
    // 0x290c5c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290c60: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290c64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290c64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290c68: 0x0  nop
    ctx->pc = 0x290c68u;
    // NOP
    // 0x290c6c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x290c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290c70: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290c70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290c74:
    // 0x290c74: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290c74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290c7c: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x290c7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x290c80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290C80u;
    {
        const bool branch_taken_0x290c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C80u;
            // 0x290c84: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c80) {
            ctx->pc = 0x290C8Cu;
            goto label_290c8c;
        }
    }
    ctx->pc = 0x290C88u;
    // 0x290c88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290c8c:
    // 0x290c8c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C8Cu;
    {
        const bool branch_taken_0x290c8c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290c8c) {
            ctx->pc = 0x290C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C8Cu;
            // 0x290c90: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290CA0u;
            goto label_290ca0;
        }
    }
    ctx->pc = 0x290C94u;
    // 0x290c94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290c94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290c98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290C98u;
    {
        const bool branch_taken_0x290c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C98u;
            // 0x290c9c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c98) {
            ctx->pc = 0x290CB8u;
            goto label_290cb8;
        }
    }
    ctx->pc = 0x290CA0u;
label_290ca0:
    // 0x290ca0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290ca4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290ca8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290ca8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290cac: 0x0  nop
    ctx->pc = 0x290cacu;
    // NOP
    // 0x290cb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290cb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290cb8:
    // 0x290cb8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290cb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290cbc: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x290cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x290cc0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x290cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290cc4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x290cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290cc8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x290cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290ccc: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290cccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290cd0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290CD0u;
    {
        const bool branch_taken_0x290cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290CD0u;
            // 0x290cd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cd0) {
            ctx->pc = 0x290CDCu;
            goto label_290cdc;
        }
    }
    ctx->pc = 0x290CD8u;
    // 0x290cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290cdc:
    // 0x290cdc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290CDCu;
    {
        const bool branch_taken_0x290cdc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290cdc) {
            ctx->pc = 0x290CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290CDCu;
            // 0x290ce0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290CF0u;
            goto label_290cf0;
        }
    }
    ctx->pc = 0x290CE4u;
    // 0x290ce4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290ce4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290CE8u;
    {
        const bool branch_taken_0x290ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290CE8u;
            // 0x290cec: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ce8) {
            ctx->pc = 0x290D08u;
            goto label_290d08;
        }
    }
    ctx->pc = 0x290CF0u;
label_290cf0:
    // 0x290cf0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290cf4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290cf8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290cf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290cfc: 0x0  nop
    ctx->pc = 0x290cfcu;
    // NOP
    // 0x290d00: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x290d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290d04: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290d04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290d08:
    // 0x290d08: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290d08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290d10: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x290d10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x290d14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290D14u;
    {
        const bool branch_taken_0x290d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D14u;
            // 0x290d18: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d14) {
            ctx->pc = 0x290D20u;
            goto label_290d20;
        }
    }
    ctx->pc = 0x290D1Cu;
    // 0x290d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d20:
    // 0x290d20: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290D20u;
    {
        const bool branch_taken_0x290d20 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290d20) {
            ctx->pc = 0x290D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290D20u;
            // 0x290d24: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290D28u;
    // 0x290d28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290d28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290D2Cu;
    {
        const bool branch_taken_0x290d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D2Cu;
            // 0x290d30: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d2c) {
            ctx->pc = 0x290D4Cu;
            goto label_290d4c;
        }
    }
    ctx->pc = 0x290D34u;
label_290d34:
    // 0x290d34: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290d38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290d3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290d3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d40: 0x0  nop
    ctx->pc = 0x290d40u;
    // NOP
    // 0x290d44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290d48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290d4c:
    // 0x290d4c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290d4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290d50: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x290d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x290d54: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x290d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x290d58: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x290d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290d5c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x290d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290d60: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290d64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290D64u;
    {
        const bool branch_taken_0x290d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D64u;
            // 0x290d68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d64) {
            ctx->pc = 0x290D70u;
            goto label_290d70;
        }
    }
    ctx->pc = 0x290D6Cu;
    // 0x290d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d70:
    // 0x290d70: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290D70u;
            // 0x290d74: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290D84u;
            goto label_290d84;
        }
    }
    ctx->pc = 0x290D78u;
    // 0x290d78: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290d78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290D7Cu;
    {
        const bool branch_taken_0x290d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D7Cu;
            // 0x290d80: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d7c) {
            ctx->pc = 0x290D9Cu;
            goto label_290d9c;
        }
    }
    ctx->pc = 0x290D84u;
label_290d84:
    // 0x290d84: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290d88: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290d8c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290d8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d90: 0x0  nop
    ctx->pc = 0x290d90u;
    // NOP
    // 0x290d94: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x290d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290d98: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x290d98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_290d9c:
    // 0x290d9c: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x290d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290da4: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x290da4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x290da8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290DA8u;
    {
        const bool branch_taken_0x290da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DA8u;
            // 0x290dac: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290da8) {
            ctx->pc = 0x290DB4u;
            goto label_290db4;
        }
    }
    ctx->pc = 0x290DB0u;
    // 0x290db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290db4:
    // 0x290db4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290DB4u;
    {
        const bool branch_taken_0x290db4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x290db4) {
            ctx->pc = 0x290DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290DB4u;
            // 0x290db8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290DC8u;
            goto label_290dc8;
        }
    }
    ctx->pc = 0x290DBCu;
    // 0x290dbc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290dbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290dc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290DC0u;
    {
        const bool branch_taken_0x290dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DC0u;
            // 0x290dc4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dc0) {
            ctx->pc = 0x290DE0u;
            goto label_290de0;
        }
    }
    ctx->pc = 0x290DC8u;
label_290dc8:
    // 0x290dc8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x290dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x290dcc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290dd0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290dd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290dd4: 0x0  nop
    ctx->pc = 0x290dd4u;
    // NOP
    // 0x290dd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290ddc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290de0:
    // 0x290de0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290de0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290de4: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x290de4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x290de8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x290de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x290dec: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x290decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290df0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x290df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290df4: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x290df4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290df8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290DF8u;
    {
        const bool branch_taken_0x290df8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DF8u;
            // 0x290dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df8) {
            ctx->pc = 0x290E04u;
            goto label_290e04;
        }
    }
    ctx->pc = 0x290E00u;
    // 0x290e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290e04:
    // 0x290e04: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290E04u;
    {
        const bool branch_taken_0x290e04 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x290e04) {
            ctx->pc = 0x290E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290E04u;
            // 0x290e08: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290E18u;
            goto label_290e18;
        }
    }
    ctx->pc = 0x290E0Cu;
    // 0x290e0c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x290e0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290e10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290E10u;
    {
        const bool branch_taken_0x290e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290E10u;
            // 0x290e14: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e10) {
            ctx->pc = 0x290E30u;
            goto label_290e30;
        }
    }
    ctx->pc = 0x290E18u;
label_290e18:
    // 0x290e18: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x290e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x290e1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x290e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x290e20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x290e20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290e24: 0x0  nop
    ctx->pc = 0x290e24u;
    // NOP
    // 0x290e28: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x290e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290e2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x290e2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_290e30:
    // 0x290e30: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x290e30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290e38: 0x4604481a  mula.s      $f9, $f4
    ctx->pc = 0x290e38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x290e3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x290E3Cu;
    {
        const bool branch_taken_0x290e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290E3Cu;
            // 0x290e40: 0x4603005c  madd.s      $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e3c) {
            ctx->pc = 0x290E48u;
            goto label_290e48;
        }
    }
    ctx->pc = 0x290E44u;
    // 0x290e44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x290e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290e48:
    // 0x290e48: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290E48u;
    {
        const bool branch_taken_0x290e48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x290e48) {
            ctx->pc = 0x290E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290E48u;
            // 0x290e4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290E5Cu;
            goto label_290e5c;
        }
    }
    ctx->pc = 0x290E50u;
    // 0x290e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290E54u;
    {
        const bool branch_taken_0x290e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290E54u;
            // 0x290e58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e54) {
            ctx->pc = 0x290E74u;
            goto label_290e74;
        }
    }
    ctx->pc = 0x290E5Cu;
label_290e5c:
    // 0x290e5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x290e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x290e60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x290e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x290e64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x290e64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e68: 0x0  nop
    ctx->pc = 0x290e68u;
    // NOP
    // 0x290e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290e70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x290e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_290e74:
    // 0x290e74: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x290e74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e7c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x290e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x290e80: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x290e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x290e84: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x290e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x290e88: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x290e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e8c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x290e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x290e90: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x290e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e94: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x290e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x290e98: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x290e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e9c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x290e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x290ea0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x290ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ea4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x290ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x290ea8: 0xe60c000c  swc1        $f12, 0xC($s0)
    ctx->pc = 0x290ea8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x290eac: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x290EACu;
    SET_GPR_U32(ctx, 31, 0x290EB4u);
    ctx->pc = 0x290EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EACu;
            // 0x290eb0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EB4u; }
        if (ctx->pc != 0x290EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EB4u; }
        if (ctx->pc != 0x290EB4u) { return; }
    }
    ctx->pc = 0x290EB4u;
label_290eb4:
    // 0x290eb4: 0xc6080044  lwc1        $f8, 0x44($s0)
    ctx->pc = 0x290eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x290eb8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x290eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x290ebc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x290ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ec0: 0xc6090040  lwc1        $f9, 0x40($s0)
    ctx->pc = 0x290ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x290ec4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x290ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ec8: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x290ec8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x290ecc: 0xc6070048  lwc1        $f7, 0x48($s0)
    ctx->pc = 0x290eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x290ed0: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x290ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x290ed4: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x290ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290ed8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x290ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290edc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x290edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ee0: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x290ee0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x290ee4: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x290ee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x290ee8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x290ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290eec: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x290eecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x290ef0: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x290ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290ef4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x290ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x290ef8: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x290ef8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x290efc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x290efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290f00: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x290f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290f04: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x290f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290f08: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x290f08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x290f0c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x290f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x290f10: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x290f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x290f14: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x290f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f18: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x290f18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x290f1c: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x290f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x290f20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x290f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x290f24: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x290f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x290f28: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x290f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f2c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x290f2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x290f30: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x290f30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x290f34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290f38: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x290f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x290f3c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x290f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f40: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x290f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x290f44: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x290f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x290f48: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x290f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x290f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x290f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290f58: 0x3e00008  jr          $ra
    ctx->pc = 0x290F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F58u;
            // 0x290f5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290F60u;
}
