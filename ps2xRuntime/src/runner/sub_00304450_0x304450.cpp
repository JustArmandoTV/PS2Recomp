#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304450
// Address: 0x304450 - 0x304570
void sub_00304450_0x304450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304450_0x304450");
#endif

    ctx->pc = 0x304450u;

    // 0x304450: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x304450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x304454: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x304454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x304458: 0xc4810e14  lwc1        $f1, 0xE14($a0)
    ctx->pc = 0x304458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30445c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x30445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304460: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304464: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x304464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x304468: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x304468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x30446c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30446cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304470: 0xe4800e14  swc1        $f0, 0xE14($a0)
    ctx->pc = 0x304470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3604), bits); }
    // 0x304474: 0x84a30026  lh          $v1, 0x26($a1)
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x304478: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30447c: 0x58c0001b  blezl       $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x30447Cu;
    {
        const bool branch_taken_0x30447c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x30447c) {
            ctx->pc = 0x304480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30447Cu;
            // 0x304480: 0xc4800de0  lwc1        $f0, 0xDE0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3044ECu;
            goto label_3044ec;
        }
    }
    ctx->pc = 0x304484u;
    // 0x304484: 0x84a30028  lh          $v1, 0x28($a1)
    ctx->pc = 0x304484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x304488: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x304488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30448c: 0x5c600003  bgtzl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30448Cu;
    {
        const bool branch_taken_0x30448c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x30448c) {
            ctx->pc = 0x304490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30448Cu;
            // 0x304490: 0x84a3002c  lh          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30449Cu;
            goto label_30449c;
        }
    }
    ctx->pc = 0x304494u;
    // 0x304494: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x304494u;
    {
        const bool branch_taken_0x304494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304494u;
            // 0x304498: 0xac800de8  sw          $zero, 0xDE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304494) {
            ctx->pc = 0x3044E8u;
            goto label_3044e8;
        }
    }
    ctx->pc = 0x30449Cu;
label_30449c:
    // 0x30449c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30449Cu;
    {
        const bool branch_taken_0x30449c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30449c) {
            ctx->pc = 0x3044E8u;
            goto label_3044e8;
        }
    }
    ctx->pc = 0x3044A4u;
    // 0x3044a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3044a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044a8: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x3044a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x3044ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3044acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3044b0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3044b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3044b4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3044b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3044b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3044b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3044bc: 0x0  nop
    ctx->pc = 0x3044bcu;
    // NOP
    // 0x3044c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3044c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3044c4: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3044c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3044c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3044c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3044cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3044ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044d0: 0x0  nop
    ctx->pc = 0x3044d0u;
    // NOP
    // 0x3044d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3044d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3044d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3044d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044dc: 0x0  nop
    ctx->pc = 0x3044dcu;
    // NOP
    // 0x3044e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3044e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3044e4: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x3044e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
label_3044e8:
    // 0x3044e8: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3044e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3044ec:
    // 0x3044ec: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3044ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3044f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3044f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3044f4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3044F4u;
    {
        const bool branch_taken_0x3044f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3044f4) {
            ctx->pc = 0x3044F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3044F4u;
            // 0x3044f8: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304504u;
            goto label_304504;
        }
    }
    ctx->pc = 0x3044FCu;
    // 0x3044fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3044FCu;
    {
        const bool branch_taken_0x3044fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044FCu;
            // 0x304500: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044fc) {
            ctx->pc = 0x30454Cu;
            goto label_30454c;
        }
    }
    ctx->pc = 0x304504u;
label_304504:
    // 0x304504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304508: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304508u;
    {
        const bool branch_taken_0x304508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304508) {
            ctx->pc = 0x30450Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304508u;
            // 0x30450c: 0xc4800de8  lwc1        $f0, 0xDE8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304518u;
            goto label_304518;
        }
    }
    ctx->pc = 0x304510u;
    // 0x304510: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x304510u;
    {
        const bool branch_taken_0x304510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304510u;
            // 0x304514: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304510) {
            ctx->pc = 0x30454Cu;
            goto label_30454c;
        }
    }
    ctx->pc = 0x304518u;
label_304518:
    // 0x304518: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30451c: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x30451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
    // 0x304520: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304524: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x304528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30452c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x30452Cu;
    {
        const bool branch_taken_0x30452c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30452c) {
            ctx->pc = 0x304530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30452Cu;
            // 0x304530: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30453Cu;
            goto label_30453c;
        }
    }
    ctx->pc = 0x304534u;
    // 0x304534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x304534u;
    {
        const bool branch_taken_0x304534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304534u;
            // 0x304538: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304534) {
            ctx->pc = 0x30454Cu;
            goto label_30454c;
        }
    }
    ctx->pc = 0x30453Cu;
label_30453c:
    // 0x30453c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30453cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304540: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304540u;
    {
        const bool branch_taken_0x304540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304540) {
            ctx->pc = 0x304544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304540u;
            // 0x304544: 0xc4810de4  lwc1        $f1, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304550u;
            goto label_304550;
        }
    }
    ctx->pc = 0x304548u;
    // 0x304548: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x304548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_30454c:
    // 0x30454c: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x30454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304550:
    // 0x304550: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304554: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304554u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x304558: 0x0  nop
    ctx->pc = 0x304558u;
    // NOP
    // 0x30455c: 0x0  nop
    ctx->pc = 0x30455cu;
    // NOP
    // 0x304560: 0x3e00008  jr          $ra
    ctx->pc = 0x304560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304560u;
            // 0x304564: 0xe4800dec  swc1        $f0, 0xDEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304568u;
    // 0x304568: 0x0  nop
    ctx->pc = 0x304568u;
    // NOP
    // 0x30456c: 0x0  nop
    ctx->pc = 0x30456cu;
    // NOP
}
