#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00442230
// Address: 0x442230 - 0x442580
void sub_00442230_0x442230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442230_0x442230");
#endif

    switch (ctx->pc) {
        case 0x442290u: goto label_442290;
        case 0x4423f0u: goto label_4423f0;
        case 0x442410u: goto label_442410;
        default: break;
    }

    ctx->pc = 0x442230u;

    // 0x442230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x442230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x442234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x442234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x442238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x442238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44223c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x44223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x442240: 0x10a300c9  beq         $a1, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x442240u;
    {
        const bool branch_taken_0x442240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x442240) {
            ctx->pc = 0x442568u;
            goto label_442568;
        }
    }
    ctx->pc = 0x442248u;
    // 0x442248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x442248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44224c: 0x50a3006a  beql        $a1, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x44224Cu;
    {
        const bool branch_taken_0x44224c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44224c) {
            ctx->pc = 0x442250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44224Cu;
            // 0x442250: 0x8c830034  lw          $v1, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4423F8u;
            goto label_4423f8;
        }
    }
    ctx->pc = 0x442254u;
    // 0x442254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442258: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x442258u;
    {
        const bool branch_taken_0x442258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x442258) {
            ctx->pc = 0x44225Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442258u;
            // 0x44225c: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442278u;
            goto label_442278;
        }
    }
    ctx->pc = 0x442260u;
    // 0x442260: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x442260u;
    {
        const bool branch_taken_0x442260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x442260) {
            ctx->pc = 0x442264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442260u;
            // 0x442264: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442270u;
            goto label_442270;
        }
    }
    ctx->pc = 0x442268u;
    // 0x442268: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x442268u;
    {
        const bool branch_taken_0x442268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442268) {
            ctx->pc = 0x442568u;
            goto label_442568;
        }
    }
    ctx->pc = 0x442270u;
label_442270:
    // 0x442270: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x442270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x442274: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x442274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_442278:
    // 0x442278: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x442278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44227c: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x44227cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x442280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x442280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x442284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442288: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x442288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44228c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x44228cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_442290:
    // 0x442290: 0x2506000c  addiu       $a2, $t0, 0xC
    ctx->pc = 0x442290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x442294: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x442294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x442298: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x442298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x44229c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x44229cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4422a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4422A0u;
    {
        const bool branch_taken_0x4422a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4422A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4422A0u;
            // 0x4422a4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4422a0) {
            ctx->pc = 0x4422ACu;
            goto label_4422ac;
        }
    }
    ctx->pc = 0x4422A8u;
    // 0x4422a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4422a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4422ac:
    // 0x4422ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4422acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4422b0: 0x54600045  bnel        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x4422B0u;
    {
        const bool branch_taken_0x4422b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4422b0) {
            ctx->pc = 0x4422B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4422B0u;
            // 0x4422b4: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4423C8u;
            goto label_4423c8;
        }
    }
    ctx->pc = 0x4422B8u;
    // 0x4422b8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x4422b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4422bc: 0x0  nop
    ctx->pc = 0x4422bcu;
    // NOP
    // 0x4422c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4422c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4422c4: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x4422c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4422c8: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x4422c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4422cc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4422ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4422d0: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x4422d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4422d4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4422d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4422d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4422d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4422dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4422dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4422e0: 0x0  nop
    ctx->pc = 0x4422e0u;
    // NOP
    // 0x4422e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4422e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4422e8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x4422e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4422ec: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4422ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x4422f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4422f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4422f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4422f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4422f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4422f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4422fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4422fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x442300: 0x0  nop
    ctx->pc = 0x442300u;
    // NOP
    // 0x442304: 0xa4830020  sh          $v1, 0x20($a0)
    ctx->pc = 0x442304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x442308: 0x84450006  lh          $a1, 0x6($v0)
    ctx->pc = 0x442308u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x44230c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x44230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442310: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x442310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x442314: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x442314u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442318: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x442318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44231c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x44231cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442320: 0x0  nop
    ctx->pc = 0x442320u;
    // NOP
    // 0x442324: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x442324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442328: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x442328u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x44232c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x44232cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x442330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x442334: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x442334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x442338: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x44233c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x44233cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x442340: 0x0  nop
    ctx->pc = 0x442340u;
    // NOP
    // 0x442344: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x442344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x442348: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x442348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44234c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x44234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442350: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x442350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x442354: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x442354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442358: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x442358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44235c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x44235cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442360: 0x0  nop
    ctx->pc = 0x442360u;
    // NOP
    // 0x442364: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x442364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442368: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x442368u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x44236c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x44236cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x442370: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x442374: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x442374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x442378: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x44237c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x44237cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x442380: 0x0  nop
    ctx->pc = 0x442380u;
    // NOP
    // 0x442384: 0xa4830024  sh          $v1, 0x24($a0)
    ctx->pc = 0x442384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x442388: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x442388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x44238c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x44238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442390: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x442390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x442394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x442394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442398: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x442398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44239c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x44239cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4423a0: 0x0  nop
    ctx->pc = 0x4423a0u;
    // NOP
    // 0x4423a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4423a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4423a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4423a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4423ac: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x4423acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x4423b0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x4423b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4423b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4423b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4423b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4423b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4423bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4423bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4423c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4423C0u;
    {
        const bool branch_taken_0x4423c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4423C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4423C0u;
            // 0x4423c4: 0xa4820026  sh          $v0, 0x26($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4423c0) {
            ctx->pc = 0x4423E8u;
            goto label_4423e8;
        }
    }
    ctx->pc = 0x4423C8u;
label_4423c8:
    // 0x4423c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4423c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4423cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4423ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4423d0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4423d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4423d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4423d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4423d8: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x4423d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4423dc: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x4423DCu;
    {
        const bool branch_taken_0x4423dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4423E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4423DCu;
            // 0x4423e0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4423dc) {
            ctx->pc = 0x442290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_442290;
        }
    }
    ctx->pc = 0x4423E4u;
    // 0x4423e4: 0x0  nop
    ctx->pc = 0x4423e4u;
    // NOP
label_4423e8:
    // 0x4423e8: 0xc110960  jal         func_442580
    ctx->pc = 0x4423E8u;
    SET_GPR_U32(ctx, 31, 0x4423F0u);
    ctx->pc = 0x442580u;
    if (runtime->hasFunction(0x442580u)) {
        auto targetFn = runtime->lookupFunction(0x442580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4423F0u; }
        if (ctx->pc != 0x4423F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442580_0x442580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4423F0u; }
        if (ctx->pc != 0x4423F0u) { return; }
    }
    ctx->pc = 0x4423F0u;
label_4423f0:
    // 0x4423f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x4423F0u;
    {
        const bool branch_taken_0x4423f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4423f0) {
            ctx->pc = 0x442568u;
            goto label_442568;
        }
    }
    ctx->pc = 0x4423F8u;
label_4423f8:
    // 0x4423f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4423f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4423fc: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x4423fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x442400: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x442400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x442404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442408: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x442408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44240c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x44240cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_442410:
    // 0x442410: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x442410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x442414: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x442414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x442418: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x442418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x44241c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x44241cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x442420: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x442420u;
    {
        const bool branch_taken_0x442420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x442424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442420u;
            // 0x442424: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442420) {
            ctx->pc = 0x44242Cu;
            goto label_44242c;
        }
    }
    ctx->pc = 0x442428u;
    // 0x442428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x442428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44242c:
    // 0x44242c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x44242cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x442430: 0x54a00045  bnel        $a1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x442430u;
    {
        const bool branch_taken_0x442430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x442430) {
            ctx->pc = 0x442434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442430u;
            // 0x442434: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442548u;
            goto label_442548;
        }
    }
    ctx->pc = 0x442438u;
    // 0x442438: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x442438u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x44243c: 0x0  nop
    ctx->pc = 0x44243cu;
    // NOP
    // 0x442440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x442444: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x442444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x442448: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x442448u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x44244c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x44244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442450: 0x84e50004  lh          $a1, 0x4($a3)
    ctx->pc = 0x442450u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x442454: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x442454u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442458: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x442458u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44245c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x44245cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442460: 0x0  nop
    ctx->pc = 0x442460u;
    // NOP
    // 0x442464: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x442464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442468: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x442468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x44246c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x44246cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x442470: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x442470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x442474: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x442474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x442478: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x44247c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x44247cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x442480: 0x0  nop
    ctx->pc = 0x442480u;
    // NOP
    // 0x442484: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x442484u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x442488: 0x84660006  lh          $a2, 0x6($v1)
    ctx->pc = 0x442488u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x44248c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x44248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442490: 0x84e50006  lh          $a1, 0x6($a3)
    ctx->pc = 0x442490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x442494: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x442494u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442498: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x442498u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44249c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x44249cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4424a0: 0x0  nop
    ctx->pc = 0x4424a0u;
    // NOP
    // 0x4424a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4424a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4424a8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x4424a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4424ac: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4424acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x4424b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4424b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4424b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4424b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4424b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4424b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4424bc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4424bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4424c0: 0x0  nop
    ctx->pc = 0x4424c0u;
    // NOP
    // 0x4424c4: 0xa485002e  sh          $a1, 0x2E($a0)
    ctx->pc = 0x4424c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x4424c8: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x4424c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4424cc: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x4424ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4424d0: 0x84e50008  lh          $a1, 0x8($a3)
    ctx->pc = 0x4424d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4424d4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4424d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4424d8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4424d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4424dc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x4424dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4424e0: 0x0  nop
    ctx->pc = 0x4424e0u;
    // NOP
    // 0x4424e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4424e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4424e8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x4424e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4424ec: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4424ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x4424f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4424f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4424f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4424f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4424f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4424f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4424fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4424fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x442500: 0x0  nop
    ctx->pc = 0x442500u;
    // NOP
    // 0x442504: 0xa4850030  sh          $a1, 0x30($a0)
    ctx->pc = 0x442504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x442508: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x442508u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x44250c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x44250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x442510: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x442510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x442514: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x442514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x442518: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x442518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44251c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x44251cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x442520: 0x0  nop
    ctx->pc = 0x442520u;
    // NOP
    // 0x442524: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x442524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x442528: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x442528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x44252c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x44252cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x442530: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x442530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442534: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x442534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x442538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x442538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x44253c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x44253cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x442540: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x442540u;
    {
        const bool branch_taken_0x442540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442540u;
            // 0x442544: 0xa4830032  sh          $v1, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442540) {
            ctx->pc = 0x442568u;
            goto label_442568;
        }
    }
    ctx->pc = 0x442548u;
label_442548:
    // 0x442548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x442548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x44254c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x44254cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x442550: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x442550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x442554: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x442554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x442558: 0x145282a  slt         $a1, $t2, $a1
    ctx->pc = 0x442558u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x44255c: 0x14a0ffac  bnez        $a1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x44255Cu;
    {
        const bool branch_taken_0x44255c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x442560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44255Cu;
            // 0x442560: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44255c) {
            ctx->pc = 0x442410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_442410;
        }
    }
    ctx->pc = 0x442564u;
    // 0x442564: 0x0  nop
    ctx->pc = 0x442564u;
    // NOP
label_442568:
    // 0x442568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x442568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44256c: 0x3e00008  jr          $ra
    ctx->pc = 0x44256Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44256Cu;
            // 0x442570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442574u;
    // 0x442574: 0x0  nop
    ctx->pc = 0x442574u;
    // NOP
    // 0x442578: 0x0  nop
    ctx->pc = 0x442578u;
    // NOP
    // 0x44257c: 0x0  nop
    ctx->pc = 0x44257cu;
    // NOP
}
