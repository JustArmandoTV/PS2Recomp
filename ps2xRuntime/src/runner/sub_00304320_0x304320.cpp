#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304320
// Address: 0x304320 - 0x304450
void sub_00304320_0x304320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304320_0x304320");
#endif

    ctx->pc = 0x304320u;

    // 0x304320: 0x84a60026  lh          $a2, 0x26($a1)
    ctx->pc = 0x304320u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x304324: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x304324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x304328: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30432c: 0xc4820c34  lwc1        $f2, 0xC34($a0)
    ctx->pc = 0x30432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304330: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x304330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x304334: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x304334u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304338: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x304338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30433c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30433cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304340: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x304340u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x304344: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x304344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304348: 0x0  nop
    ctx->pc = 0x304348u;
    // NOP
    // 0x30434c: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x30434cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x304350: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x304350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304354: 0x0  nop
    ctx->pc = 0x304354u;
    // NOP
    // 0x304358: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x304358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30435c: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x30435Cu;
    {
        const bool branch_taken_0x30435c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30435c) {
            ctx->pc = 0x304360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30435Cu;
            // 0x304360: 0xc4800de0  lwc1        $f0, 0xDE0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3043D0u;
            goto label_3043d0;
        }
    }
    ctx->pc = 0x304364u;
    // 0x304364: 0x84a30028  lh          $v1, 0x28($a1)
    ctx->pc = 0x304364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x304368: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x304368u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30436c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30436cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304370: 0x0  nop
    ctx->pc = 0x304370u;
    // NOP
    // 0x304374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304378: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x304378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x30437c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30437cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304380: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304380u;
    {
        const bool branch_taken_0x304380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304380) {
            ctx->pc = 0x304384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304380u;
            // 0x304384: 0x84a3002c  lh          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304390u;
            goto label_304390;
        }
    }
    ctx->pc = 0x304388u;
    // 0x304388: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x304388u;
    {
        const bool branch_taken_0x304388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304388u;
            // 0x30438c: 0xe4810de8  swc1        $f1, 0xDE8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304388) {
            ctx->pc = 0x3043CCu;
            goto label_3043cc;
        }
    }
    ctx->pc = 0x304390u;
label_304390:
    // 0x304390: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x304390u;
    {
        const bool branch_taken_0x304390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304390) {
            ctx->pc = 0x3043CCu;
            goto label_3043cc;
        }
    }
    ctx->pc = 0x304398u;
    // 0x304398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30439c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x30439cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x3043a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3043a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3043a4: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3043a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3043a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3043a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3043ac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3043acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3043b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3043b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3043b4: 0x0  nop
    ctx->pc = 0x3043b4u;
    // NOP
    // 0x3043b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3043b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3043bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3043bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3043c0: 0x0  nop
    ctx->pc = 0x3043c0u;
    // NOP
    // 0x3043c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3043c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3043c8: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x3043c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
label_3043cc:
    // 0x3043cc: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3043ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3043d0:
    // 0x3043d0: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3043d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3043d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3043d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3043d8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3043D8u;
    {
        const bool branch_taken_0x3043d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3043d8) {
            ctx->pc = 0x3043DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3043D8u;
            // 0x3043dc: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3043E8u;
            goto label_3043e8;
        }
    }
    ctx->pc = 0x3043E0u;
    // 0x3043e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3043E0u;
    {
        const bool branch_taken_0x3043e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043E0u;
            // 0x3043e4: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043e0) {
            ctx->pc = 0x304430u;
            goto label_304430;
        }
    }
    ctx->pc = 0x3043E8u;
label_3043e8:
    // 0x3043e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3043e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3043ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3043ECu;
    {
        const bool branch_taken_0x3043ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3043ec) {
            ctx->pc = 0x3043F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3043ECu;
            // 0x3043f0: 0xc4800de8  lwc1        $f0, 0xDE8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3043FCu;
            goto label_3043fc;
        }
    }
    ctx->pc = 0x3043F4u;
    // 0x3043f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3043F4u;
    {
        const bool branch_taken_0x3043f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043F4u;
            // 0x3043f8: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043f4) {
            ctx->pc = 0x304430u;
            goto label_304430;
        }
    }
    ctx->pc = 0x3043FCu;
label_3043fc:
    // 0x3043fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3043fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304400: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x304400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
    // 0x304404: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304408: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30440c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30440cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304410: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304410u;
    {
        const bool branch_taken_0x304410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304410) {
            ctx->pc = 0x304414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304410u;
            // 0x304414: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304420u;
            goto label_304420;
        }
    }
    ctx->pc = 0x304418u;
    // 0x304418: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x304418u;
    {
        const bool branch_taken_0x304418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304418u;
            // 0x30441c: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304418) {
            ctx->pc = 0x304430u;
            goto label_304430;
        }
    }
    ctx->pc = 0x304420u;
label_304420:
    // 0x304420: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304424: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304424u;
    {
        const bool branch_taken_0x304424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304424) {
            ctx->pc = 0x304428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304424u;
            // 0x304428: 0xc4810de4  lwc1        $f1, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304434u;
            goto label_304434;
        }
    }
    ctx->pc = 0x30442Cu;
    // 0x30442c: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x30442cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_304430:
    // 0x304430: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304434:
    // 0x304434: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304438: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304438u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30443c: 0x0  nop
    ctx->pc = 0x30443cu;
    // NOP
    // 0x304440: 0x0  nop
    ctx->pc = 0x304440u;
    // NOP
    // 0x304444: 0x3e00008  jr          $ra
    ctx->pc = 0x304444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304444u;
            // 0x304448: 0xe4800dec  swc1        $f0, 0xDEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30444Cu;
    // 0x30444c: 0x0  nop
    ctx->pc = 0x30444cu;
    // NOP
}
