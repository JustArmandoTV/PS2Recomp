#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00389410
// Address: 0x389410 - 0x3895b0
void sub_00389410_0x389410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389410_0x389410");
#endif

    ctx->pc = 0x389410u;

    // 0x389410: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x389410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x389414: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x389414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x389418: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x389418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38941c: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x38941Cu;
    {
        const bool branch_taken_0x38941c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38941c) {
            ctx->pc = 0x38959Cu;
            goto label_38959c;
        }
    }
    ctx->pc = 0x389424u;
    // 0x389424: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x389424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x389428: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x389428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x38942c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x38942cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x389430: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x389430u;
    {
        const bool branch_taken_0x389430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389430u;
            // 0x389434: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389430) {
            ctx->pc = 0x389464u;
            goto label_389464;
        }
    }
    ctx->pc = 0x389438u;
    // 0x389438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38943c: 0x0  nop
    ctx->pc = 0x38943cu;
    // NOP
    // 0x389440: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x389440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x389444u;
    {
        const bool branch_taken_0x389444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389444u;
            // 0x389448: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389444) {
            ctx->pc = 0x389450u;
            goto label_389450;
        }
    }
    ctx->pc = 0x38944Cu;
    // 0x38944c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38944cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389450:
    // 0x389450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x389450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x389454: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x389454u;
    {
        const bool branch_taken_0x389454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389454) {
            ctx->pc = 0x389458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389454u;
            // 0x389458: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x389468u;
            goto label_389468;
        }
    }
    ctx->pc = 0x38945Cu;
    // 0x38945c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x38945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389460: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x389460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_389464:
    // 0x389464: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x389464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389468:
    // 0x389468: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x389468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38946c: 0x0  nop
    ctx->pc = 0x38946cu;
    // NOP
    // 0x389470: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x389470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389474: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x389474u;
    {
        const bool branch_taken_0x389474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389474) {
            ctx->pc = 0x3894A4u;
            goto label_3894a4;
        }
    }
    ctx->pc = 0x38947Cu;
    // 0x38947c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x389480: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x389480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x389484: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x389484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389488: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x389488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38948c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38948cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x389490: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x389490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389494: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x389494u;
    {
        const bool branch_taken_0x389494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389494u;
            // 0x389498: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389494) {
            ctx->pc = 0x3894B8u;
            goto label_3894b8;
        }
    }
    ctx->pc = 0x38949Cu;
    // 0x38949c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38949Cu;
    {
        const bool branch_taken_0x38949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38949Cu;
            // 0x3894a0: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38949c) {
            ctx->pc = 0x3894B8u;
            goto label_3894b8;
        }
    }
    ctx->pc = 0x3894A4u;
label_3894a4:
    // 0x3894a4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x3894a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3894a8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3894A8u;
    {
        const bool branch_taken_0x3894a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3894a8) {
            ctx->pc = 0x3894ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3894A8u;
            // 0x3894ac: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3894BCu;
            goto label_3894bc;
        }
    }
    ctx->pc = 0x3894B0u;
    // 0x3894b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3894b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3894b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3894b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3894b8:
    // 0x3894b8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3894b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3894bc:
    // 0x3894bc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3894bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3894c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3894c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3894c4: 0x0  nop
    ctx->pc = 0x3894c4u;
    // NOP
    // 0x3894c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3894c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3894cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3894CCu;
    {
        const bool branch_taken_0x3894cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3894D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3894CCu;
            // 0x3894d0: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894cc) {
            ctx->pc = 0x3894ECu;
            goto label_3894ec;
        }
    }
    ctx->pc = 0x3894D4u;
    // 0x3894d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3894d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3894d8: 0x0  nop
    ctx->pc = 0x3894d8u;
    // NOP
    // 0x3894dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3894dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3894e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3894E0u;
    {
        const bool branch_taken_0x3894e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3894e0) {
            ctx->pc = 0x3894ECu;
            goto label_3894ec;
        }
    }
    ctx->pc = 0x3894E8u;
    // 0x3894e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3894e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3894ec:
    // 0x3894ec: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3894ECu;
    {
        const bool branch_taken_0x3894ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3894ec) {
            ctx->pc = 0x3894F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3894ECu;
            // 0x3894f0: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x389504u;
            goto label_389504;
        }
    }
    ctx->pc = 0x3894F4u;
    // 0x3894f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3894f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3894f8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3894fc: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x3894fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x389500: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x389500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389504:
    // 0x389504: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x389504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389508: 0x0  nop
    ctx->pc = 0x389508u;
    // NOP
    // 0x38950c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x38950cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389510: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x389510u;
    {
        const bool branch_taken_0x389510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389510) {
            ctx->pc = 0x389540u;
            goto label_389540;
        }
    }
    ctx->pc = 0x389518u;
    // 0x389518: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x389518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x38951c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x389520: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x389520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389524: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x389524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389528: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x389528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38952c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x38952cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389530: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x389530u;
    {
        const bool branch_taken_0x389530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389530u;
            // 0x389534: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389530) {
            ctx->pc = 0x389554u;
            goto label_389554;
        }
    }
    ctx->pc = 0x389538u;
    // 0x389538: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x389538u;
    {
        const bool branch_taken_0x389538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389538u;
            // 0x38953c: 0xe4820008  swc1        $f2, 0x8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389538) {
            ctx->pc = 0x389554u;
            goto label_389554;
        }
    }
    ctx->pc = 0x389540u;
label_389540:
    // 0x389540: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x389540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389544: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x389544u;
    {
        const bool branch_taken_0x389544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389544) {
            ctx->pc = 0x389548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389544u;
            // 0x389548: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x389558u;
            goto label_389558;
        }
    }
    ctx->pc = 0x38954Cu;
    // 0x38954c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x38954cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x389550: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x389550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_389554:
    // 0x389554: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x389554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389558:
    // 0x389558: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x389558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x38955c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38955cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389560: 0x0  nop
    ctx->pc = 0x389560u;
    // NOP
    // 0x389564: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x389564u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389568: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x389568u;
    {
        const bool branch_taken_0x389568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389568u;
            // 0x38956c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389568) {
            ctx->pc = 0x389588u;
            goto label_389588;
        }
    }
    ctx->pc = 0x389570u;
    // 0x389570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389574: 0x0  nop
    ctx->pc = 0x389574u;
    // NOP
    // 0x389578: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x389578u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38957c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x38957Cu;
    {
        const bool branch_taken_0x38957c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38957c) {
            ctx->pc = 0x389588u;
            goto label_389588;
        }
    }
    ctx->pc = 0x389584u;
    // 0x389584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389588:
    // 0x389588: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389588u;
    {
        const bool branch_taken_0x389588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x389588) {
            ctx->pc = 0x38959Cu;
            goto label_38959c;
        }
    }
    ctx->pc = 0x389590u;
    // 0x389590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x389590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x389594: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x389594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x389598: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x389598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
label_38959c:
    // 0x38959c: 0x3e00008  jr          $ra
    ctx->pc = 0x38959Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3895A4u;
    // 0x3895a4: 0x0  nop
    ctx->pc = 0x3895a4u;
    // NOP
    // 0x3895a8: 0x0  nop
    ctx->pc = 0x3895a8u;
    // NOP
    // 0x3895ac: 0x0  nop
    ctx->pc = 0x3895acu;
    // NOP
}
