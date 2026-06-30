#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D1540
// Address: 0x3d1540 - 0x3d1970
void sub_003D1540_0x3d1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1540_0x3d1540");
#endif

    switch (ctx->pc) {
        case 0x3d16d0u: goto label_3d16d0;
        case 0x3d16dcu: goto label_3d16dc;
        case 0x3d16f4u: goto label_3d16f4;
        case 0x3d1700u: goto label_3d1700;
        case 0x3d173cu: goto label_3d173c;
        case 0x3d1750u: goto label_3d1750;
        case 0x3d176cu: goto label_3d176c;
        case 0x3d1778u: goto label_3d1778;
        case 0x3d1788u: goto label_3d1788;
        case 0x3d1798u: goto label_3d1798;
        case 0x3d17a8u: goto label_3d17a8;
        case 0x3d17b0u: goto label_3d17b0;
        case 0x3d17bcu: goto label_3d17bc;
        case 0x3d17d0u: goto label_3d17d0;
        default: break;
    }

    ctx->pc = 0x3d1540u;

    // 0x3d1540: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3d1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3d1544: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3d1544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3d1548: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d154c: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x3d154cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3d1550: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3d1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3d1554: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3d1554u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1558: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3d155c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d155cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1560: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3d1564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d1564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3d1568: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3d1568u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3d156c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3d156cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3d1570: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3d1570u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3d1574: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3d1574u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3d1578: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d1578u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3d157c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d157cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3d1580: 0x8c8207e4  lw          $v0, 0x7E4($a0)
    ctx->pc = 0x3d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2020)));
    // 0x3d1584: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3d1584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3d1588: 0x8c8307e8  lw          $v1, 0x7E8($a0)
    ctx->pc = 0x3d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2024)));
    // 0x3d158c: 0xc4420de4  lwc1        $f2, 0xDE4($v0)
    ctx->pc = 0x3d158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1590: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x3d1590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x3d1594: 0x2466fff6  addiu       $a2, $v1, -0xA
    ctx->pc = 0x3d1594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x3d1598: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d1598u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d159c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3d159cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x3d15a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d15a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d15a4: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x3d15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x3d15a8: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3d15a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3d15ac: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3d15acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3d15b0: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x3d15b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3d15b4: 0x3c0341cc  lui         $v1, 0x41CC
    ctx->pc = 0x3d15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16844 << 16));
    // 0x3d15b8: 0x4484c000  mtc1        $a0, $f24
    ctx->pc = 0x3d15b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3d15bc: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x3d15bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3d15c0: 0x0  nop
    ctx->pc = 0x3d15c0u;
    // NOP
    // 0x3d15c4: 0x0  nop
    ctx->pc = 0x3d15c4u;
    // NOP
    // 0x3d15c8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D15C8u;
    {
        const bool branch_taken_0x3d15c8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3d15c8) {
            ctx->pc = 0x3D15DCu;
            goto label_3d15dc;
        }
    }
    ctx->pc = 0x3D15D0u;
    // 0x3d15d0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3d15d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d15d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D15D4u;
    {
        const bool branch_taken_0x3d15d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D15D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D15D4u;
            // 0x3d15d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d15d4) {
            ctx->pc = 0x3D15F8u;
            goto label_3d15f8;
        }
    }
    ctx->pc = 0x3D15DCu;
label_3d15dc:
    // 0x3d15dc: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x3d15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3d15e0: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3d15e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3d15e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d15e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d15e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d15e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d15ec: 0x0  nop
    ctx->pc = 0x3d15ecu;
    // NOP
    // 0x3d15f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d15f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d15f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d15f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d15f8:
    // 0x3d15f8: 0x0  nop
    ctx->pc = 0x3d15f8u;
    // NOP
    // 0x3d15fc: 0x0  nop
    ctx->pc = 0x3d15fcu;
    // NOP
    // 0x3d1600: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x3d1600u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[0];
    // 0x3d1604: 0x8c450d6c  lw          $a1, 0xD6C($v0)
    ctx->pc = 0x3d1604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x3d1608: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3d1608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3d160c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3d160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x3d1610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d1610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1614: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3d1614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d1618: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x3d1618u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x3d161c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d161cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1620: 0xc462c958  lwc1        $f2, -0x36A8($v1)
    ctx->pc = 0x3d1620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1624: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3d1624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1628: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3d1628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d162c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3D162Cu;
    {
        const bool branch_taken_0x3d162c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D162Cu;
            // 0x3d1630: 0x46011642  mul.s       $f25, $f2, $f1 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d162c) {
            ctx->pc = 0x3D16BCu;
            goto label_3d16bc;
        }
    }
    ctx->pc = 0x3D1634u;
    // 0x3d1634: 0x3c034023  lui         $v1, 0x4023
    ctx->pc = 0x3d1634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16419 << 16));
    // 0x3d1638: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x3d1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x3d163c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d163cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1640: 0x0  nop
    ctx->pc = 0x3d1640u;
    // NOP
    // 0x3d1644: 0x460305c2  mul.s       $f23, $f0, $f3
    ctx->pc = 0x3d1644u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3d1648: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3d1648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3d164c: 0x0  nop
    ctx->pc = 0x3d164cu;
    // NOP
    // 0x3d1650: 0x4617a832  c.eq.s      $f21, $f23
    ctx->pc = 0x3d1650u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1654: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x3D1654u;
    {
        const bool branch_taken_0x3d1654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1654) {
            ctx->pc = 0x3D1658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1654u;
            // 0x3d1658: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D16BCu;
            goto label_3d16bc;
        }
    }
    ctx->pc = 0x3D165Cu;
    // 0x3d165c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3d165cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3d1660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1664: 0x0  nop
    ctx->pc = 0x3d1664u;
    // NOP
    // 0x3d1668: 0x4600bd43  div.s       $f21, $f23, $f0
    ctx->pc = 0x3d1668u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[21] = ctx->f[23] / ctx->f[0];
    // 0x3d166c: 0x0  nop
    ctx->pc = 0x3d166cu;
    // NOP
    // 0x3d1670: 0x0  nop
    ctx->pc = 0x3d1670u;
    // NOP
    // 0x3d1674: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1674u;
    {
        const bool branch_taken_0x3d1674 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3d1674) {
            ctx->pc = 0x3D1688u;
            goto label_3d1688;
        }
    }
    ctx->pc = 0x3D167Cu;
    // 0x3d167c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3d167cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1680u;
    {
        const bool branch_taken_0x3d1680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1680u;
            // 0x3d1684: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1680) {
            ctx->pc = 0x3D16A4u;
            goto label_3d16a4;
        }
    }
    ctx->pc = 0x3D1688u;
label_3d1688:
    // 0x3d1688: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x3d1688u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3d168c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3d168cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3d1690: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d1694: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d1694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1698: 0x0  nop
    ctx->pc = 0x3d1698u;
    // NOP
    // 0x3d169c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d169cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d16a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d16a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d16a4:
    // 0x3d16a4: 0x0  nop
    ctx->pc = 0x3d16a4u;
    // NOP
    // 0x3d16a8: 0x0  nop
    ctx->pc = 0x3d16a8u;
    // NOP
    // 0x3d16ac: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x3d16acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[0];
    // 0x3d16b0: 0x0  nop
    ctx->pc = 0x3d16b0u;
    // NOP
    // 0x3d16b4: 0x0  nop
    ctx->pc = 0x3d16b4u;
    // NOP
    // 0x3d16b8: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x3d16b8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_3d16bc:
    // 0x3d16bc: 0xc44c02e0  lwc1        $f12, 0x2E0($v0)
    ctx->pc = 0x3d16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d16c0: 0xc44d02e4  lwc1        $f13, 0x2E4($v0)
    ctx->pc = 0x3d16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d16c4: 0xc44e02e8  lwc1        $f14, 0x2E8($v0)
    ctx->pc = 0x3d16c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3d16c8: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3D16C8u;
    SET_GPR_U32(ctx, 31, 0x3D16D0u);
    ctx->pc = 0x3D16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D16C8u;
            // 0x3d16cc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16D0u; }
        if (ctx->pc != 0x3D16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16D0u; }
        if (ctx->pc != 0x3D16D0u) { return; }
    }
    ctx->pc = 0x3D16D0u;
label_3d16d0:
    // 0x3d16d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d16d4: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3D16D4u;
    SET_GPR_U32(ctx, 31, 0x3D16DCu);
    ctx->pc = 0x3D16D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D16D4u;
            // 0x3d16d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16DCu; }
        if (ctx->pc != 0x3D16DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16DCu; }
        if (ctx->pc != 0x3D16DCu) { return; }
    }
    ctx->pc = 0x3D16DCu;
label_3d16dc:
    // 0x3d16dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d16e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d16e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d16e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d16e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d16e8: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x3d16e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x3d16ec: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3D16ECu;
    SET_GPR_U32(ctx, 31, 0x3D16F4u);
    ctx->pc = 0x3D16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D16ECu;
            // 0x3d16f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16F4u; }
        if (ctx->pc != 0x3D16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D16F4u; }
        if (ctx->pc != 0x3D16F4u) { return; }
    }
    ctx->pc = 0x3D16F4u;
label_3d16f4:
    // 0x3d16f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3d16f8: 0xc04cce4  jal         func_133390
    ctx->pc = 0x3D16F8u;
    SET_GPR_U32(ctx, 31, 0x3D1700u);
    ctx->pc = 0x3D16FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D16F8u;
            // 0x3d16fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1700u; }
        if (ctx->pc != 0x3D1700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1700u; }
        if (ctx->pc != 0x3D1700u) { return; }
    }
    ctx->pc = 0x3D1700u;
label_3d1700:
    // 0x3d1700: 0x8e6207e4  lw          $v0, 0x7E4($s3)
    ctx->pc = 0x3d1700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2020)));
    // 0x3d1704: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x3d1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1708: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3d1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d170c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1710: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x3d1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1714: 0xc44302c0  lwc1        $f3, 0x2C0($v0)
    ctx->pc = 0x3d1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d1718: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x3d1718u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3d171c: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x3d171cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3d1720: 0xc44202c4  lwc1        $f2, 0x2C4($v0)
    ctx->pc = 0x3d1720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1724: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x3d1724u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3d1728: 0xe7ad0084  swc1        $f13, 0x84($sp)
    ctx->pc = 0x3d1728u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3d172c: 0xc44102c8  lwc1        $f1, 0x2C8($v0)
    ctx->pc = 0x3d172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1730: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x3d1730u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d1734: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3D1734u;
    SET_GPR_U32(ctx, 31, 0x3D173Cu);
    ctx->pc = 0x3D1738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1734u;
            // 0x3d1738: 0xe7ae0088  swc1        $f14, 0x88($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D173Cu; }
        if (ctx->pc != 0x3D173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D173Cu; }
        if (ctx->pc != 0x3D173Cu) { return; }
    }
    ctx->pc = 0x3D173Cu;
label_3d173c:
    // 0x3d173c: 0x8e6207e4  lw          $v0, 0x7E4($s3)
    ctx->pc = 0x3d173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2020)));
    // 0x3d1740: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d1740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1744: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1748: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3D1748u;
    SET_GPR_U32(ctx, 31, 0x3D1750u);
    ctx->pc = 0x3D174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1748u;
            // 0x3d174c: 0x244608e0  addiu       $a2, $v0, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1750u; }
        if (ctx->pc != 0x3D1750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1750u; }
        if (ctx->pc != 0x3D1750u) { return; }
    }
    ctx->pc = 0x3D1750u;
label_3d1750:
    // 0x3d1750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d1754: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d1754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1758: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d1758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d175c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d175cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1760: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d1760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d1764: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3D1764u;
    SET_GPR_U32(ctx, 31, 0x3D176Cu);
    ctx->pc = 0x3D1768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1764u;
            // 0x3d1768: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D176Cu; }
        if (ctx->pc != 0x3D176Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D176Cu; }
        if (ctx->pc != 0x3D176Cu) { return; }
    }
    ctx->pc = 0x3D176Cu;
label_3d176c:
    // 0x3d176c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x3d176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d1770: 0xc04cce0  jal         func_133380
    ctx->pc = 0x3D1770u;
    SET_GPR_U32(ctx, 31, 0x3D1778u);
    ctx->pc = 0x3D1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1770u;
            // 0x3d1774: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133380u;
    if (runtime->hasFunction(0x133380u)) {
        auto targetFn = runtime->lookupFunction(0x133380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1778u; }
        if (ctx->pc != 0x3D1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133380_0x133380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1778u; }
        if (ctx->pc != 0x3D1778u) { return; }
    }
    ctx->pc = 0x3D1778u;
label_3d1778:
    // 0x3d1778: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d1778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3d177c: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x3d177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d1780: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3D1780u;
    SET_GPR_U32(ctx, 31, 0x3D1788u);
    ctx->pc = 0x3D1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1780u;
            // 0x3d1784: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1788u; }
        if (ctx->pc != 0x3D1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1788u; }
        if (ctx->pc != 0x3D1788u) { return; }
    }
    ctx->pc = 0x3D1788u;
label_3d1788:
    // 0x3d1788: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x3d1788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d178c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3d178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d1790: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x3D1790u;
    SET_GPR_U32(ctx, 31, 0x3D1798u);
    ctx->pc = 0x3D1794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1790u;
            // 0x3d1794: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1798u; }
        if (ctx->pc != 0x3D1798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1798u; }
        if (ctx->pc != 0x3D1798u) { return; }
    }
    ctx->pc = 0x3D1798u;
label_3d1798:
    // 0x3d1798: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d1798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d179c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3d179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3d17a0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3D17A0u;
    SET_GPR_U32(ctx, 31, 0x3D17A8u);
    ctx->pc = 0x3D17A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D17A0u;
            // 0x3d17a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17A8u; }
        if (ctx->pc != 0x3D17A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17A8u; }
        if (ctx->pc != 0x3D17A8u) { return; }
    }
    ctx->pc = 0x3D17A8u;
label_3d17a8:
    // 0x3d17a8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3d17a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d17acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d17b0:
    // 0x3d17b0: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x3d17b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x3d17b4: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D17B4u;
    SET_GPR_U32(ctx, 31, 0x3D17BCu);
    ctx->pc = 0x3D17B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D17B4u;
            // 0x3d17b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17BCu; }
        if (ctx->pc != 0x3D17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17BCu; }
        if (ctx->pc != 0x3D17BCu) { return; }
    }
    ctx->pc = 0x3D17BCu;
label_3d17bc:
    // 0x3d17bc: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3d17c0: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x3d17c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d17c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3d17c8: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D17C8u;
    SET_GPR_U32(ctx, 31, 0x3D17D0u);
    ctx->pc = 0x3D17CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D17C8u;
            // 0x3d17cc: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17D0u; }
        if (ctx->pc != 0x3D17D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D17D0u; }
        if (ctx->pc != 0x3D17D0u) { return; }
    }
    ctx->pc = 0x3D17D0u;
label_3d17d0:
    // 0x3d17d0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d17d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d17d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d17d8: 0x0  nop
    ctx->pc = 0x3d17d8u;
    // NOP
    // 0x3d17dc: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x3d17dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d17e0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3D17E0u;
    {
        const bool branch_taken_0x3d17e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d17e0) {
            ctx->pc = 0x3D17E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D17E0u;
            // 0x3d17e4: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D17F8u;
            goto label_3d17f8;
        }
    }
    ctx->pc = 0x3D17E8u;
    // 0x3d17e8: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d17e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d17ec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3d17ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d17f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D17F0u;
    {
        const bool branch_taken_0x3d17f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D17F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D17F0u;
            // 0x3d17f4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d17f0) {
            ctx->pc = 0x3D1810u;
            goto label_3d1810;
        }
    }
    ctx->pc = 0x3D17F8u;
label_3d17f8:
    // 0x3d17f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d17fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d17fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d1800: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3d1800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d1804: 0x0  nop
    ctx->pc = 0x3d1804u;
    // NOP
    // 0x3d1808: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d180c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3d180cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3d1810:
    // 0x3d1810: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3d1810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3d1814: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3d1814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3d1818: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3d1818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d181c: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x3d181cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x3d1820: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3d1820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3d1824: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3d1824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x3d1828: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d1828u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d182c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3d182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3d1830: 0xe638007c  swc1        $f24, 0x7C($s1)
    ctx->pc = 0x3d1830u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x3d1834: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3d1834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3d1838: 0xe6380064  swc1        $f24, 0x64($s1)
    ctx->pc = 0x3d1838u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x3d183c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d183cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1840: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x3d1840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x3d1844: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x3d1844u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x3d1848: 0x4602c036  c.le.s      $f24, $f2
    ctx->pc = 0x3d1848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d184c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1850: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1850u;
    {
        const bool branch_taken_0x3d1850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1850u;
            // 0x3d1854: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1850) {
            ctx->pc = 0x3D1860u;
            goto label_3d1860;
        }
    }
    ctx->pc = 0x3D1858u;
    // 0x3d1858: 0x46000e06  mov.s       $f24, $f1
    ctx->pc = 0x3d1858u;
    ctx->f[24] = FPU_MOV_S(ctx->f[1]);
    // 0x3d185c: 0x0  nop
    ctx->pc = 0x3d185cu;
    // NOP
label_3d1860:
    // 0x3d1860: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x3d1860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3d1864: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D1864u;
    {
        const bool branch_taken_0x3d1864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1864) {
            ctx->pc = 0x3D1890u;
            goto label_3d1890;
        }
    }
    ctx->pc = 0x3D186Cu;
    // 0x3d186c: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x3d186cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x3d1870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d1870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1874: 0x0  nop
    ctx->pc = 0x3d1874u;
    // NOP
    // 0x3d1878: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x3d1878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d187c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3D187Cu;
    {
        const bool branch_taken_0x3d187c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d187c) {
            ctx->pc = 0x3D18A8u;
            goto label_3d18a8;
        }
    }
    ctx->pc = 0x3D1884u;
    // 0x3d1884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1884u;
    {
        const bool branch_taken_0x3d1884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1884u;
            // 0x3d1888: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1884) {
            ctx->pc = 0x3D18A8u;
            goto label_3d18a8;
        }
    }
    ctx->pc = 0x3D188Cu;
    // 0x3d188c: 0x0  nop
    ctx->pc = 0x3d188cu;
    // NOP
label_3d1890:
    // 0x3d1890: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x3d1890u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x3d1894: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x3d1894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1898: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1898u;
    {
        const bool branch_taken_0x3d1898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1898) {
            ctx->pc = 0x3D18A8u;
            goto label_3d18a8;
        }
    }
    ctx->pc = 0x3D18A0u;
    // 0x3d18a0: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x3d18a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x3d18a4: 0x0  nop
    ctx->pc = 0x3d18a4u;
    // NOP
label_3d18a8:
    // 0x3d18a8: 0x8e6407e8  lw          $a0, 0x7E8($s3)
    ctx->pc = 0x3d18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2024)));
    // 0x3d18ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d18acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3d18b0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x3d18b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3d18b4: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x3d18b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d18b8: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3D18B8u;
    {
        const bool branch_taken_0x3d18b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D18BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D18B8u;
            // 0x3d18bc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18b8) {
            ctx->pc = 0x3D17B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d17b0;
        }
    }
    ctx->pc = 0x3D18C0u;
    // 0x3d18c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d18c4: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x3d18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d18c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d18c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d18cc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3d18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3d18d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d18d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d18d8: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x3d18d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d18dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D18DCu;
    {
        const bool branch_taken_0x3d18dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D18E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D18DCu;
            // 0x3d18e0: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18dc) {
            ctx->pc = 0x3D18F4u;
            goto label_3d18f4;
        }
    }
    ctx->pc = 0x3D18E4u;
    // 0x3d18e4: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d18e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d18e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3d18e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d18ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D18ECu;
    {
        const bool branch_taken_0x3d18ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D18F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D18ECu;
            // 0x3d18f0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18ec) {
            ctx->pc = 0x3D1910u;
            goto label_3d1910;
        }
    }
    ctx->pc = 0x3D18F4u;
label_3d18f4:
    // 0x3d18f4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x3d18f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3d18f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d18fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d18fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d1900: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3d1900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d1904: 0x0  nop
    ctx->pc = 0x3d1904u;
    // NOP
    // 0x3d1908: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d190c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3d190cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3d1910:
    // 0x3d1910: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3d1910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3d1914: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x3d1914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3d1918: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3d1918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3d191c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3d191cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d1920: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x3d1920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x3d1924: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x3d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x3d1928: 0xae6007d4  sw          $zero, 0x7D4($s3)
    ctx->pc = 0x3d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2004), GPR_U32(ctx, 0));
    // 0x3d192c: 0xae6007d8  sw          $zero, 0x7D8($s3)
    ctx->pc = 0x3d192cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2008), GPR_U32(ctx, 0));
    // 0x3d1930: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d1934: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3d1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3d1938: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3d1938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d193c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3d193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3d1940: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d1940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d1944: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3d1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3d1948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d1948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d194c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3d194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3d1950: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d1950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1954: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3d1958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d195c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D195Cu;
            // 0x3d1960: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1964u;
    // 0x3d1964: 0x0  nop
    ctx->pc = 0x3d1964u;
    // NOP
    // 0x3d1968: 0x0  nop
    ctx->pc = 0x3d1968u;
    // NOP
    // 0x3d196c: 0x0  nop
    ctx->pc = 0x3d196cu;
    // NOP
}
