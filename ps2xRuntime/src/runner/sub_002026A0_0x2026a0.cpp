#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002026A0
// Address: 0x2026a0 - 0x202850
void sub_002026A0_0x2026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002026A0_0x2026a0");
#endif

    ctx->pc = 0x2026a0u;

    // 0x2026a0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2026a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2026a4: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x2026a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2026a8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2026a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026ac: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2026acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2026b0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2026b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2026b4: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x2026b4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2026b8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2026b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2026bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2026bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026c0: 0x46021a81  sub.s       $f10, $f3, $f2
    ctx->pc = 0x2026c0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2026c4: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2026c4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2026c8: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x2026c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2026cc: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x2026ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2026d0: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x2026d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2026d4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2026d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2026d8: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x2026d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2026dc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2026dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2026e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2026e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026e4: 0x4605101e  madda.s     $f2, $f5
    ctx->pc = 0x2026e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x2026e8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2026e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2026ec: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x2026ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x2026f0: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x2026f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x2026f4: 0x460a101e  madda.s     $f2, $f10
    ctx->pc = 0x2026f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[10]));
    // 0x2026f8: 0x460800dc  madd.s      $f3, $f0, $f8
    ctx->pc = 0x2026f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x2026fc: 0x4609381a  mula.s      $f7, $f9
    ctx->pc = 0x2026fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x202700: 0x460a281e  madda.s     $f5, $f10
    ctx->pc = 0x202700u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x202704: 0x46080a1c  madd.s      $f8, $f1, $f8
    ctx->pc = 0x202704u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x202708: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x202708u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x20270c: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x20270cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x202710: 0x4601095c  madd.s      $f5, $f1, $f1
    ctx->pc = 0x202710u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x202714: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x202714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x202718: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x202718u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x20271c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x20271cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x202720: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x202720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x202724: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x202724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x202728: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x202728u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20272c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20272cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x202730: 0x46001185  abs.s       $f6, $f2
    ctx->pc = 0x202730u;
    ctx->f[6] = FPU_ABS_S(ctx->f[2]);
    // 0x202734: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x202734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x202738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x202738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20273c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20273cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202740: 0x0  nop
    ctx->pc = 0x202740u;
    // NOP
    // 0x202744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202748: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x202748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20274c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x20274Cu;
    {
        const bool branch_taken_0x20274c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20274c) {
            ctx->pc = 0x202750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20274Cu;
            // 0x202750: 0xe5240000  swc1        $f4, 0x0($t1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x202770u;
            goto label_202770;
        }
    }
    ctx->pc = 0x202754u;
    // 0x202754: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x202754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x202758: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x202758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x20275c: 0x460c401d  msub.s      $f0, $f8, $f12
    ctx->pc = 0x20275cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[12]));
    // 0x202760: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x202760u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x202764: 0x0  nop
    ctx->pc = 0x202764u;
    // NOP
    // 0x202768: 0x0  nop
    ctx->pc = 0x202768u;
    // NOP
    // 0x20276c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x20276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_202770:
    // 0x202770: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x202770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202774: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x202774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x202778: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x202778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20277c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x20277cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x202780: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x202780u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x202784: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x202784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x202788: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x202788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20278c: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x20278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x202790: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x202790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202794: 0x46005818  adda.s      $f11, $f0
    ctx->pc = 0x202794u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x202798: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x202798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20279c: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x20279cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2027a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2027a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2027a4: 0x46075818  adda.s      $f11, $f7
    ctx->pc = 0x2027a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x2027a8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2027a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2027ac: 0x46011a9c  madd.s      $f10, $f3, $f1
    ctx->pc = 0x2027acu;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2027b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2027b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2027b4: 0x46055818  adda.s      $f11, $f5
    ctx->pc = 0x2027b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2027b8: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2027b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2027bc: 0x46001a5c  madd.s      $f9, $f3, $f0
    ctx->pc = 0x2027bcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2027c0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2027c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2027c4: 0x46045818  adda.s      $f11, $f4
    ctx->pc = 0x2027c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2027c8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2027c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2027cc: 0x46011a1c  madd.s      $f8, $f3, $f1
    ctx->pc = 0x2027ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2027d0: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x2027d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2027d4: 0x46005818  adda.s      $f11, $f0
    ctx->pc = 0x2027d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x2027d8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2027d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2027dc: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2027dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2027e0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2027e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2027e4: 0x4602315c  madd.s      $f5, $f6, $f2
    ctx->pc = 0x2027e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x2027e8: 0x46045818  adda.s      $f11, $f4
    ctx->pc = 0x2027e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2027ec: 0x4601311c  madd.s      $f4, $f6, $f1
    ctx->pc = 0x2027ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x2027f0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2027f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2027f4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2027f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2027f8: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x2027f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2027fc: 0x46035818  adda.s      $f11, $f3
    ctx->pc = 0x2027fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x202800: 0x460030dc  madd.s      $f3, $f6, $f0
    ctx->pc = 0x202800u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x202804: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x202804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202808: 0x46075818  adda.s      $f11, $f7
    ctx->pc = 0x202808u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x20280c: 0x46056041  sub.s       $f1, $f12, $f5
    ctx->pc = 0x20280cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x202810: 0x4600309c  madd.s      $f2, $f6, $f0
    ctx->pc = 0x202810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x202814: 0x46045001  sub.s       $f0, $f10, $f4
    ctx->pc = 0x202814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x202818: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x202818u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20281c: 0xe56c0000  swc1        $f12, 0x0($t3)
    ctx->pc = 0x20281cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x202820: 0xe56a0004  swc1        $f10, 0x4($t3)
    ctx->pc = 0x202820u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x202824: 0xe5690008  swc1        $f9, 0x8($t3)
    ctx->pc = 0x202824u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x202828: 0xe568000c  swc1        $f8, 0xC($t3)
    ctx->pc = 0x202828u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x20282c: 0xe5850000  swc1        $f5, 0x0($t4)
    ctx->pc = 0x20282cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x202830: 0xe5840004  swc1        $f4, 0x4($t4)
    ctx->pc = 0x202830u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x202834: 0xe5830008  swc1        $f3, 0x8($t4)
    ctx->pc = 0x202834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x202838: 0x46034801  sub.s       $f0, $f9, $f3
    ctx->pc = 0x202838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x20283c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x20283cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x202840: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x202840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x202844: 0xe582000c  swc1        $f2, 0xC($t4)
    ctx->pc = 0x202844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x202848: 0x3e00008  jr          $ra
    ctx->pc = 0x202848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202848u;
            // 0x20284c: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202850u;
}
