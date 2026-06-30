#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00442580
// Address: 0x442580 - 0x442730
void sub_00442580_0x442580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442580_0x442580");
#endif

    switch (ctx->pc) {
        case 0x4425c8u: goto label_4425c8;
        default: break;
    }

    ctx->pc = 0x442580u;

    // 0x442580: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x442580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x442584: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x442584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x442588: 0x0  nop
    ctx->pc = 0x442588u;
    // NOP
    // 0x44258c: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x44258cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x442590: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x442590u;
    {
        const bool branch_taken_0x442590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x442594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442590u;
            // 0x442594: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x442590) {
            ctx->pc = 0x4425B4u;
            goto label_4425b4;
        }
    }
    ctx->pc = 0x442598u;
    // 0x442598: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x442598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x44259c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x44259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4425a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4425a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4425a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4425a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4425a8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4425A8u;
    {
        const bool branch_taken_0x4425a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4425a8) {
            ctx->pc = 0x4425ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4425A8u;
            // 0x4425ac: 0x8c880038  lw          $t0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4425B8u;
            goto label_4425b8;
        }
    }
    ctx->pc = 0x4425B0u;
    // 0x4425b0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4425b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4425b4:
    // 0x4425b4: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x4425b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_4425b8:
    // 0x4425b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4425b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4425bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4425bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4425c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4425c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4425c4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x4425c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4425c8:
    // 0x4425c8: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x4425c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x4425cc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x4425ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4425d0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4425d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4425d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4425d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4425d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4425D8u;
    {
        const bool branch_taken_0x4425d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4425DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4425D8u;
            // 0x4425dc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425d8) {
            ctx->pc = 0x4425E4u;
            goto label_4425e4;
        }
    }
    ctx->pc = 0x4425E0u;
    // 0x4425e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4425e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4425e4:
    // 0x4425e4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x4425e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x4425e8: 0x54a00045  bnel        $a1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x4425E8u;
    {
        const bool branch_taken_0x4425e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4425e8) {
            ctx->pc = 0x4425ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4425E8u;
            // 0x4425ec: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442700u;
            goto label_442700;
        }
    }
    ctx->pc = 0x4425F0u;
    // 0x4425f0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x4425f0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4425f4: 0x0  nop
    ctx->pc = 0x4425f4u;
    // NOP
    // 0x4425f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4425f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4425fc: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x4425fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x442600: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x442600u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x442604: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x442604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442608: 0x84e50004  lh          $a1, 0x4($a3)
    ctx->pc = 0x442608u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x44260c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x44260cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442610: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x442610u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x442614: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x442614u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442618: 0x0  nop
    ctx->pc = 0x442618u;
    // NOP
    // 0x44261c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x44261cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442620: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x442620u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x442624: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x442624u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x442628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x44262c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x44262cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x442630: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x442634: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x442634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x442638: 0x0  nop
    ctx->pc = 0x442638u;
    // NOP
    // 0x44263c: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x44263cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x442640: 0x84660006  lh          $a2, 0x6($v1)
    ctx->pc = 0x442640u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x442644: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x442644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442648: 0x84e50006  lh          $a1, 0x6($a3)
    ctx->pc = 0x442648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x44264c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x44264cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442650: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x442650u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x442654: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x442654u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442658: 0x0  nop
    ctx->pc = 0x442658u;
    // NOP
    // 0x44265c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x44265cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442660: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x442660u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x442664: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x442664u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x442668: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x44266c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x44266cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x442670: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x442674: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x442674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x442678: 0x0  nop
    ctx->pc = 0x442678u;
    // NOP
    // 0x44267c: 0xa485002e  sh          $a1, 0x2E($a0)
    ctx->pc = 0x44267cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x442680: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x442680u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x442684: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x442684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442688: 0x84e50008  lh          $a1, 0x8($a3)
    ctx->pc = 0x442688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x44268c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x44268cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442690: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x442690u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x442694: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x442694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442698: 0x0  nop
    ctx->pc = 0x442698u;
    // NOP
    // 0x44269c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x44269cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4426a0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x4426a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4426a4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4426a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x4426a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4426a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4426ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4426acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4426b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4426b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4426b4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4426b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4426b8: 0x0  nop
    ctx->pc = 0x4426b8u;
    // NOP
    // 0x4426bc: 0xa4850030  sh          $a1, 0x30($a0)
    ctx->pc = 0x4426bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x4426c0: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x4426c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x4426c4: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x4426c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4426c8: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x4426c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x4426cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4426ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4426d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4426d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4426d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4426d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4426d8: 0x0  nop
    ctx->pc = 0x4426d8u;
    // NOP
    // 0x4426dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4426dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4426e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4426e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4426e4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x4426e4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x4426e8: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x4426e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4426ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4426ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4426f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4426f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4426f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4426f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4426f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4426F8u;
    {
        const bool branch_taken_0x4426f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4426FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4426F8u;
            // 0x4426fc: 0xa4830032  sh          $v1, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4426f8) {
            ctx->pc = 0x442720u;
            goto label_442720;
        }
    }
    ctx->pc = 0x442700u;
label_442700:
    // 0x442700: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x442700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x442704: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x442704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x442708: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x442708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x44270c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x44270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x442710: 0x145282a  slt         $a1, $t2, $a1
    ctx->pc = 0x442710u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x442714: 0x14a0ffac  bnez        $a1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x442714u;
    {
        const bool branch_taken_0x442714 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x442718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442714u;
            // 0x442718: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442714) {
            ctx->pc = 0x4425C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4425c8;
        }
    }
    ctx->pc = 0x44271Cu;
    // 0x44271c: 0x0  nop
    ctx->pc = 0x44271cu;
    // NOP
label_442720:
    // 0x442720: 0x3e00008  jr          $ra
    ctx->pc = 0x442720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442728u;
    // 0x442728: 0x0  nop
    ctx->pc = 0x442728u;
    // NOP
    // 0x44272c: 0x0  nop
    ctx->pc = 0x44272cu;
    // NOP
}
