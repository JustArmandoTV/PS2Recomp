#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B16E0
// Address: 0x3b16e0 - 0x3b2200
void sub_003B16E0_0x3b16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B16E0_0x3b16e0");
#endif

    switch (ctx->pc) {
        case 0x3b199cu: goto label_3b199c;
        case 0x3b1a94u: goto label_3b1a94;
        case 0x3b1b88u: goto label_3b1b88;
        case 0x3b1c74u: goto label_3b1c74;
        case 0x3b1da0u: goto label_3b1da0;
        case 0x3b1e94u: goto label_3b1e94;
        case 0x3b1f80u: goto label_3b1f80;
        case 0x3b20b4u: goto label_3b20b4;
        case 0x3b21c4u: goto label_3b21c4;
        default: break;
    }

    ctx->pc = 0x3b16e0u;

    // 0x3b16e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b16e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b16e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b16e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b16e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3b16ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3b16f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b16f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b16f8: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3b16f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x3b16fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b1700: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x3b1700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x3b1704: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b1708: 0x26949bc0  addiu       $s4, $s4, -0x6440
    ctx->pc = 0x3b1708u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941632));
    // 0x3b170c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1710: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b1710u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b1714: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b1714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b1718: 0x8ca20d78  lw          $v0, 0xD78($a1)
    ctx->pc = 0x3b1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
    // 0x3b171c: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x3b171cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b1720: 0x90510010  lbu         $s1, 0x10($v0)
    ctx->pc = 0x3b1720u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b1724: 0x90500011  lbu         $s0, 0x11($v0)
    ctx->pc = 0x3b1724u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x3b1728: 0x94560012  lhu         $s6, 0x12($v0)
    ctx->pc = 0x3b1728u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x3b172c: 0x2a210064  slti        $at, $s1, 0x64
    ctx->pc = 0x3b172cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b1730: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1730u;
    {
        const bool branch_taken_0x3b1730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1730u;
            // 0x3b1734: 0x26732100  addiu       $s3, $s3, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1730) {
            ctx->pc = 0x3B1744u;
            goto label_3b1744;
        }
    }
    ctx->pc = 0x3B1738u;
    // 0x3b1738: 0x64110063  daddiu      $s1, $zero, 0x63
    ctx->pc = 0x3b1738u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)99);
    // 0x3b173c: 0x6410003b  daddiu      $s0, $zero, 0x3B
    ctx->pc = 0x3b173cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
    // 0x3b1740: 0x641603e7  daddiu      $s6, $zero, 0x3E7
    ctx->pc = 0x3b1740u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_3b1744:
    // 0x3b1744: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3b1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1748: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b1748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b174c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3b174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1750: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b1750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b1754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1758: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3b1758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3b175c: 0x8c480110  lw          $t0, 0x110($v0)
    ctx->pc = 0x3b175cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b1760: 0x1105000f  beq         $t0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B1760u;
    {
        const bool branch_taken_0x3b1760 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x3B1764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1760u;
            // 0x3b1764: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1760) {
            ctx->pc = 0x3B17A0u;
            goto label_3b17a0;
        }
    }
    ctx->pc = 0x3B1768u;
    // 0x3b1768: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b1768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b176c: 0x5105000d  beql        $t0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B176Cu;
    {
        const bool branch_taken_0x3b176c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b176c) {
            ctx->pc = 0x3B1770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B176Cu;
            // 0x3b1770: 0x30e50001  andi        $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B17A4u;
            goto label_3b17a4;
        }
    }
    ctx->pc = 0x3B1774u;
    // 0x3b1774: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b1774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b1778: 0x51050003  beql        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1778u;
    {
        const bool branch_taken_0x3b1778 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b1778) {
            ctx->pc = 0x3B177Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1778u;
            // 0x3b177c: 0x30e50001  andi        $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1788u;
            goto label_3b1788;
        }
    }
    ctx->pc = 0x3B1780u;
    // 0x3b1780: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B1780u;
    {
        const bool branch_taken_0x3b1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1780u;
            // 0x3b1784: 0x84c5000e  lh          $a1, 0xE($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1780) {
            ctx->pc = 0x3B17D8u;
            goto label_3b17d8;
        }
    }
    ctx->pc = 0x3B1788u;
label_3b1788:
    // 0x3b1788: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B1788u;
    {
        const bool branch_taken_0x3b1788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1788) {
            ctx->pc = 0x3B17D4u;
            goto label_3b17d4;
        }
    }
    ctx->pc = 0x3B1790u;
    // 0x3b1790: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3b1790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1798: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B1798u;
    {
        const bool branch_taken_0x3b1798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1798u;
            // 0x3b179c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1798) {
            ctx->pc = 0x3B17D4u;
            goto label_3b17d4;
        }
    }
    ctx->pc = 0x3B17A0u;
label_3b17a0:
    // 0x3b17a0: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x3b17a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3b17a4:
    // 0x3b17a4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B17A4u;
    {
        const bool branch_taken_0x3b17a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b17a4) {
            ctx->pc = 0x3B17A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B17A4u;
            // 0x3b17a8: 0x30e50002  andi        $a1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B17C0u;
            goto label_3b17c0;
        }
    }
    ctx->pc = 0x3B17ACu;
    // 0x3b17ac: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3b17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b17b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b17b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b17b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b17b8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3b17b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3b17bc: 0x30e50002  andi        $a1, $a3, 0x2
    ctx->pc = 0x3b17bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_3b17c0:
    // 0x3b17c0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B17C0u;
    {
        const bool branch_taken_0x3b17c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b17c0) {
            ctx->pc = 0x3B17D4u;
            goto label_3b17d4;
        }
    }
    ctx->pc = 0x3B17C8u;
    // 0x3b17c8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3b17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b17cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b17ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b17d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b17d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3b17d4:
    // 0x3b17d4: 0x84c5000e  lh          $a1, 0xE($a2)
    ctx->pc = 0x3b17d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
label_3b17d8:
    // 0x3b17d8: 0x86440010  lh          $a0, 0x10($s2)
    ctx->pc = 0x3b17d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3b17dc: 0x92480014  lbu         $t0, 0x14($s2)
    ctx->pc = 0x3b17dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3b17e0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x3b17e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b17e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b17e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b17e8: 0x0  nop
    ctx->pc = 0x3b17e8u;
    // NOP
    // 0x3b17ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b17ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b17f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3b17f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b17f4: 0x0  nop
    ctx->pc = 0x3b17f4u;
    // NOP
    // 0x3b17f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b17f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b17fc: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x3b17fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3b1800: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1800u;
    {
        const bool branch_taken_0x3b1800 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3B1804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1800u;
            // 0x3b1804: 0x46001040  add.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1800) {
            ctx->pc = 0x3B1814u;
            goto label_3b1814;
        }
    }
    ctx->pc = 0x3B1808u;
    // 0x3b1808: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b1808u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b180c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B180Cu;
    {
        const bool branch_taken_0x3b180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B180Cu;
            // 0x3b1810: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b180c) {
            ctx->pc = 0x3B1830u;
            goto label_3b1830;
        }
    }
    ctx->pc = 0x3B1814u;
label_3b1814:
    // 0x3b1814: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x3b1814u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x3b1818: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x3b1818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3b181c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3b181cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b1820: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b1820u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1824: 0x0  nop
    ctx->pc = 0x3b1824u;
    // NOP
    // 0x3b1828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b182c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b182cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1830:
    // 0x3b1830: 0x46000bc1  sub.s       $f15, $f1, $f0
    ctx->pc = 0x3b1830u;
    ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b1834: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x3b1834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x3b1838: 0x9247000d  lbu         $a3, 0xD($s2)
    ctx->pc = 0x3b1838u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x3b183c: 0x84c50012  lh          $a1, 0x12($a2)
    ctx->pc = 0x3b183cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x3b1840: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b1840u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1844: 0x0  nop
    ctx->pc = 0x3b1844u;
    // NOP
    // 0x3b1848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b184c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3b184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3b1850: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x3b1850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b1854: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x3b1854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b1858: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b1858u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b185c: 0x0  nop
    ctx->pc = 0x3b185cu;
    // NOP
    // 0x3b1860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1864: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1864u;
    {
        const bool branch_taken_0x3b1864 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3B1868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1864u;
            // 0x3b1868: 0x46001d40  add.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1864) {
            ctx->pc = 0x3B1878u;
            goto label_3b1878;
        }
    }
    ctx->pc = 0x3B186Cu;
    // 0x3b186c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b186cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1870: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1870u;
    {
        const bool branch_taken_0x3b1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1870u;
            // 0x3b1874: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1870) {
            ctx->pc = 0x3B1894u;
            goto label_3b1894;
        }
    }
    ctx->pc = 0x3B1878u;
label_3b1878:
    // 0x3b1878: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x3b1878u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x3b187c: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x3b187cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3b1880: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3b1880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b1884: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b1884u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1888: 0x0  nop
    ctx->pc = 0x3b1888u;
    // NOP
    // 0x3b188c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1890: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1894:
    // 0x3b1894: 0x90440116  lbu         $a0, 0x116($v0)
    ctx->pc = 0x3b1894u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3b1898: 0x90c7000c  lbu         $a3, 0xC($a2)
    ctx->pc = 0x3b1898u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3b189c: 0x90d50010  lbu         $s5, 0x10($a2)
    ctx->pc = 0x3b189cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b18a0: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x3b18a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3b18a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B18A4u;
    {
        const bool branch_taken_0x3b18a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B18A4u;
            // 0x3b18a8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18a4) {
            ctx->pc = 0x3B18B0u;
            goto label_3b18b0;
        }
    }
    ctx->pc = 0x3B18ACu;
    // 0x3b18ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b18acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b18b0:
    // 0x3b18b0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3b18b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3b18b4: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x3b18b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b18b8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B18B8u;
    {
        const bool branch_taken_0x3b18b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18b8) {
            ctx->pc = 0x3B18BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B18B8u;
            // 0x3b18bc: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B18C8u;
            goto label_3b18c8;
        }
    }
    ctx->pc = 0x3B18C0u;
    // 0x3b18c0: 0x309500ff  andi        $s5, $a0, 0xFF
    ctx->pc = 0x3b18c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b18c4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3b18c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b18c8:
    // 0x3b18c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b18cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B18CCu;
    {
        const bool branch_taken_0x3b18cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B18D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B18CCu;
            // 0x3b18d0: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18cc) {
            ctx->pc = 0x3B18E4u;
            goto label_3b18e4;
        }
    }
    ctx->pc = 0x3B18D4u;
    // 0x3b18d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b18d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b18d8: 0x0  nop
    ctx->pc = 0x3b18d8u;
    // NOP
    // 0x3b18dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b18dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b18e0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3b18e0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b18e4:
    // 0x3b18e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b18e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B18E8u;
    {
        const bool branch_taken_0x3b18e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B18E8u;
            // 0x3b18ec: 0x268503d0  addiu       $a1, $s4, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18e8) {
            ctx->pc = 0x3B18F8u;
            goto label_3b18f8;
        }
    }
    ctx->pc = 0x3B18F0u;
    // 0x3b18f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3b18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b18f4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3b18f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_3b18f8:
    // 0x3b18f8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b18f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b18fc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B18FCu;
    {
        const bool branch_taken_0x3b18fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b18fc) {
            ctx->pc = 0x3B1900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B18FCu;
            // 0x3b1900: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1910u;
            goto label_3b1910;
        }
    }
    ctx->pc = 0x3B1904u;
    // 0x3b1904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1908u;
    {
        const bool branch_taken_0x3b1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1908u;
            // 0x3b190c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1908) {
            ctx->pc = 0x3B1928u;
            goto label_3b1928;
        }
    }
    ctx->pc = 0x3B1910u;
label_3b1910:
    // 0x3b1910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1914: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b191c: 0x0  nop
    ctx->pc = 0x3b191cu;
    // NOP
    // 0x3b1920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1924: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1928:
    // 0x3b1928: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3b1928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3b192c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B192Cu;
    {
        const bool branch_taken_0x3b192c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B192Cu;
            // 0x3b1930: 0x46007b41  sub.s       $f13, $f15, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b192c) {
            ctx->pc = 0x3B1940u;
            goto label_3b1940;
        }
    }
    ctx->pc = 0x3B1934u;
    // 0x3b1934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1938u;
    {
        const bool branch_taken_0x3b1938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1938u;
            // 0x3b193c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1938) {
            ctx->pc = 0x3B195Cu;
            goto label_3b195c;
        }
    }
    ctx->pc = 0x3B1940u;
label_3b1940:
    // 0x3b1940: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b194c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b194cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1950: 0x0  nop
    ctx->pc = 0x3b1950u;
    // NOP
    // 0x3b1954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1958: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b195c:
    // 0x3b195c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3b195cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3b1960: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b1960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b1964: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3b1964u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3b1968: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1968u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b196c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3b196cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1970: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1974: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1978: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b197c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b197cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1980: 0x0  nop
    ctx->pc = 0x3b1980u;
    // NOP
    // 0x3b1984: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b198c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1990: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1994: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1994u;
    SET_GPR_U32(ctx, 31, 0x3B199Cu);
    ctx->pc = 0x3B1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1994u;
            // 0x3b1998: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B199Cu; }
        if (ctx->pc != 0x3B199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B199Cu; }
        if (ctx->pc != 0x3B199Cu) { return; }
    }
    ctx->pc = 0x3B199Cu;
label_3b199c:
    // 0x3b199c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b19a0: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3b19a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b19a4: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x3b19a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b19a8: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x3b19a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3b19ac: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x3b19acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b19b0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b19b4: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x3b19b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b19b8: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x3b19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3b19bc: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b19bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b19c0: 0x1810  mfhi        $v1
    ctx->pc = 0x3b19c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b19c4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3b19c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3b19c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3b19c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b19cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b19d0: 0x24a3001d  addiu       $v1, $a1, 0x1D
    ctx->pc = 0x3b19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
    // 0x3b19d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b19d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b19dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b19e0: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3b19e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b19e4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b19e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b19e8: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x3b19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3b19ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B19ECu;
    {
        const bool branch_taken_0x3b19ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B19F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B19ECu;
            // 0x3b19f0: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19ec) {
            ctx->pc = 0x3B1A00u;
            goto label_3b1a00;
        }
    }
    ctx->pc = 0x3B19F4u;
    // 0x3b19f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b19f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B19F8u;
    {
        const bool branch_taken_0x3b19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B19FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B19F8u;
            // 0x3b19fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19f8) {
            ctx->pc = 0x3B1A1Cu;
            goto label_3b1a1c;
        }
    }
    ctx->pc = 0x3B1A00u;
label_3b1a00:
    // 0x3b1a00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1a10: 0x0  nop
    ctx->pc = 0x3b1a10u;
    // NOP
    // 0x3b1a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1a18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1a1c:
    // 0x3b1a1c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b1a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1a20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1A20u;
    {
        const bool branch_taken_0x3b1a20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1A20u;
            // 0x3b1a24: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a20) {
            ctx->pc = 0x3B1A34u;
            goto label_3b1a34;
        }
    }
    ctx->pc = 0x3B1A28u;
    // 0x3b1a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1a2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1A2Cu;
    {
        const bool branch_taken_0x3b1a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1A2Cu;
            // 0x3b1a30: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a2c) {
            ctx->pc = 0x3B1A50u;
            goto label_3b1a50;
        }
    }
    ctx->pc = 0x3B1A34u;
label_3b1a34:
    // 0x3b1a34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1a38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1a40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1a44: 0x0  nop
    ctx->pc = 0x3b1a44u;
    // NOP
    // 0x3b1a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1a4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1a50:
    // 0x3b1a50: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1a50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1a54: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1a54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1a58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1a5c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1a60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1a64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a68: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1a68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1a6c: 0x0  nop
    ctx->pc = 0x3b1a6cu;
    // NOP
    // 0x3b1a70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1a7c: 0x0  nop
    ctx->pc = 0x3b1a7cu;
    // NOP
    // 0x3b1a80: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1a84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1a88: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1a8c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1A8Cu;
    SET_GPR_U32(ctx, 31, 0x3B1A94u);
    ctx->pc = 0x3B1A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1A8Cu;
            // 0x3b1a90: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1A94u; }
        if (ctx->pc != 0x3B1A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1A94u; }
        if (ctx->pc != 0x3B1A94u) { return; }
    }
    ctx->pc = 0x3B1A94u;
label_3b1a94:
    // 0x3b1a94: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3b1a94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1a98: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1A98u;
    {
        const bool branch_taken_0x3b1a98 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3b1a98) {
            ctx->pc = 0x3B1A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1A98u;
            // 0x3b1a9c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1AACu;
            goto label_3b1aac;
        }
    }
    ctx->pc = 0x3B1AA0u;
    // 0x3b1aa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b1aa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1aa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1AA4u;
    {
        const bool branch_taken_0x3b1aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1AA4u;
            // 0x3b1aa8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1aa4) {
            ctx->pc = 0x3B1AC4u;
            goto label_3b1ac4;
        }
    }
    ctx->pc = 0x3B1AACu;
label_3b1aac:
    // 0x3b1aac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b1aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b1ab0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ab8: 0x0  nop
    ctx->pc = 0x3b1ab8u;
    // NOP
    // 0x3b1abc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1ac0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1ac0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1ac4:
    // 0x3b1ac4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3b1ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b1ac8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1ac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1acc: 0x2463001d  addiu       $v1, $v1, 0x1D
    ctx->pc = 0x3b1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
    // 0x3b1ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b1ad8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1adc: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3b1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b1ae0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1ae0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1ae4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1AE4u;
    {
        const bool branch_taken_0x3b1ae4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1AE4u;
            // 0x3b1ae8: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ae4) {
            ctx->pc = 0x3B1AF8u;
            goto label_3b1af8;
        }
    }
    ctx->pc = 0x3B1AECu;
    // 0x3b1aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1af0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1AF0u;
    {
        const bool branch_taken_0x3b1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1AF0u;
            // 0x3b1af4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1af0) {
            ctx->pc = 0x3B1B14u;
            goto label_3b1b14;
        }
    }
    ctx->pc = 0x3B1AF8u;
label_3b1af8:
    // 0x3b1af8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1b00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b08: 0x0  nop
    ctx->pc = 0x3b1b08u;
    // NOP
    // 0x3b1b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1b10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1b14:
    // 0x3b1b14: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1B14u;
    {
        const bool branch_taken_0x3b1b14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B1B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1B14u;
            // 0x3b1b18: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b14) {
            ctx->pc = 0x3B1B28u;
            goto label_3b1b28;
        }
    }
    ctx->pc = 0x3B1B1Cu;
    // 0x3b1b1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b1b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1B20u;
    {
        const bool branch_taken_0x3b1b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1B20u;
            // 0x3b1b24: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b20) {
            ctx->pc = 0x3B1B44u;
            goto label_3b1b44;
        }
    }
    ctx->pc = 0x3B1B28u;
label_3b1b28:
    // 0x3b1b28: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3b1b2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b1b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b1b30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b38: 0x0  nop
    ctx->pc = 0x3b1b38u;
    // NOP
    // 0x3b1b3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1b40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1b44:
    // 0x3b1b44: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1b44u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1b48: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1b48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1b4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1b50: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1b50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1b54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1b58: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1b5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b60: 0x0  nop
    ctx->pc = 0x3b1b60u;
    // NOP
    // 0x3b1b64: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b70: 0x0  nop
    ctx->pc = 0x3b1b70u;
    // NOP
    // 0x3b1b74: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1b78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1b78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1b7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1b80: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1B80u;
    SET_GPR_U32(ctx, 31, 0x3B1B88u);
    ctx->pc = 0x3B1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1B80u;
            // 0x3b1b84: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1B88u; }
        if (ctx->pc != 0x3B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1B88u; }
        if (ctx->pc != 0x3B1B88u) { return; }
    }
    ctx->pc = 0x3B1B88u;
label_3b1b88:
    // 0x3b1b88: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b1b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1b8c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1B8Cu;
    {
        const bool branch_taken_0x3b1b8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b1b8c) {
            ctx->pc = 0x3B1B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1B8Cu;
            // 0x3b1b90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1BA0u;
            goto label_3b1ba0;
        }
    }
    ctx->pc = 0x3B1B94u;
    // 0x3b1b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1b98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1B98u;
    {
        const bool branch_taken_0x3b1b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1B98u;
            // 0x3b1b9c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b98) {
            ctx->pc = 0x3B1BB8u;
            goto label_3b1bb8;
        }
    }
    ctx->pc = 0x3B1BA0u;
label_3b1ba0:
    // 0x3b1ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1bac: 0x0  nop
    ctx->pc = 0x3b1bacu;
    // NOP
    // 0x3b1bb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1bb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1bb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1bb8:
    // 0x3b1bb8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1bbc: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1bc4: 0x268502d0  addiu       $a1, $s4, 0x2D0
    ctx->pc = 0x3b1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x3b1bc8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1bc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1bcc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1BCCu;
    {
        const bool branch_taken_0x3b1bcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1BCCu;
            // 0x3b1bd0: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bcc) {
            ctx->pc = 0x3B1BE0u;
            goto label_3b1be0;
        }
    }
    ctx->pc = 0x3B1BD4u;
    // 0x3b1bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1BD8u;
    {
        const bool branch_taken_0x3b1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1BD8u;
            // 0x3b1bdc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bd8) {
            ctx->pc = 0x3B1BFCu;
            goto label_3b1bfc;
        }
    }
    ctx->pc = 0x3B1BE0u;
label_3b1be0:
    // 0x3b1be0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1be4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1be8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1bf0: 0x0  nop
    ctx->pc = 0x3b1bf0u;
    // NOP
    // 0x3b1bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1bf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1bfc:
    // 0x3b1bfc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3b1bfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b1c00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1C00u;
    {
        const bool branch_taken_0x3b1c00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1C00u;
            // 0x3b1c04: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c00) {
            ctx->pc = 0x3B1C14u;
            goto label_3b1c14;
        }
    }
    ctx->pc = 0x3B1C08u;
    // 0x3b1c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1C0Cu;
    {
        const bool branch_taken_0x3b1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1C0Cu;
            // 0x3b1c10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c0c) {
            ctx->pc = 0x3B1C30u;
            goto label_3b1c30;
        }
    }
    ctx->pc = 0x3B1C14u;
label_3b1c14:
    // 0x3b1c14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c24: 0x0  nop
    ctx->pc = 0x3b1c24u;
    // NOP
    // 0x3b1c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1c2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1c30:
    // 0x3b1c30: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1c30u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1c34: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1c34u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1c38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1c3c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1c40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1c44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c48: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1c48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c4c: 0x0  nop
    ctx->pc = 0x3b1c4cu;
    // NOP
    // 0x3b1c50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c5c: 0x0  nop
    ctx->pc = 0x3b1c5cu;
    // NOP
    // 0x3b1c60: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1c64: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1c64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1c68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1c6c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1C6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1C74u);
    ctx->pc = 0x3B1C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1C6Cu;
            // 0x3b1c70: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1C74u; }
        if (ctx->pc != 0x3B1C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1C74u; }
        if (ctx->pc != 0x3B1C74u) { return; }
    }
    ctx->pc = 0x3B1C74u;
label_3b1c74:
    // 0x3b1c74: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3b1c74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b1c78: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1C78u;
    {
        const bool branch_taken_0x3b1c78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b1c78) {
            ctx->pc = 0x3B1C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1C78u;
            // 0x3b1c7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1C8Cu;
            goto label_3b1c8c;
        }
    }
    ctx->pc = 0x3B1C80u;
    // 0x3b1c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1C84u;
    {
        const bool branch_taken_0x3b1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1C84u;
            // 0x3b1c88: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c84) {
            ctx->pc = 0x3B1CA4u;
            goto label_3b1ca4;
        }
    }
    ctx->pc = 0x3B1C8Cu;
label_3b1c8c:
    // 0x3b1c8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1c98: 0x0  nop
    ctx->pc = 0x3b1c98u;
    // NOP
    // 0x3b1c9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1ca0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1ca0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1ca4:
    // 0x3b1ca4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b1ca8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3b1ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3b1cac: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b1cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b1cb0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b1cb4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b1cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b1cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1cbc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1cc0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1cc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1cc4: 0x1810  mfhi        $v1
    ctx->pc = 0x3b1cc4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b1cc8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1ccc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3b1cccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3b1cd0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3b1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b1cd4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b1cd8: 0x24a3001d  addiu       $v1, $a1, 0x1D
    ctx->pc = 0x3b1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
    // 0x3b1cdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1ce0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b1ce4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b1ce8: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3b1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b1cec: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b1cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b1cf0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x3b1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3b1cf4: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3b1cf4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3b1cf8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1CF8u;
    {
        const bool branch_taken_0x3b1cf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1CF8u;
            // 0x3b1cfc: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1cf8) {
            ctx->pc = 0x3B1D0Cu;
            goto label_3b1d0c;
        }
    }
    ctx->pc = 0x3B1D00u;
    // 0x3b1d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1D04u;
    {
        const bool branch_taken_0x3b1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1D04u;
            // 0x3b1d08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d04) {
            ctx->pc = 0x3B1D28u;
            goto label_3b1d28;
        }
    }
    ctx->pc = 0x3B1D0Cu;
label_3b1d0c:
    // 0x3b1d0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1d14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d1c: 0x0  nop
    ctx->pc = 0x3b1d1cu;
    // NOP
    // 0x3b1d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1d24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1d28:
    // 0x3b1d28: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b1d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1d2c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1D2Cu;
    {
        const bool branch_taken_0x3b1d2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1D2Cu;
            // 0x3b1d30: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d2c) {
            ctx->pc = 0x3B1D40u;
            goto label_3b1d40;
        }
    }
    ctx->pc = 0x3B1D34u;
    // 0x3b1d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1D38u;
    {
        const bool branch_taken_0x3b1d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1D38u;
            // 0x3b1d3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d38) {
            ctx->pc = 0x3B1D5Cu;
            goto label_3b1d5c;
        }
    }
    ctx->pc = 0x3B1D40u;
label_3b1d40:
    // 0x3b1d40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1d44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1d48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d50: 0x0  nop
    ctx->pc = 0x3b1d50u;
    // NOP
    // 0x3b1d54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1d58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1d5c:
    // 0x3b1d5c: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1d5cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1d60: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1d60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1d64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1d68: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1d6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1d70: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d74: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1d74u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d78: 0x0  nop
    ctx->pc = 0x3b1d78u;
    // NOP
    // 0x3b1d7c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1d88: 0x0  nop
    ctx->pc = 0x3b1d88u;
    // NOP
    // 0x3b1d8c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1d90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1d94: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1d98: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1D98u;
    SET_GPR_U32(ctx, 31, 0x3B1DA0u);
    ctx->pc = 0x3B1D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1D98u;
            // 0x3b1d9c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1DA0u; }
        if (ctx->pc != 0x3B1DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1DA0u; }
        if (ctx->pc != 0x3B1DA0u) { return; }
    }
    ctx->pc = 0x3B1DA0u;
label_3b1da0:
    // 0x3b1da0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3b1da0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1da4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1DA4u;
    {
        const bool branch_taken_0x3b1da4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3b1da4) {
            ctx->pc = 0x3B1DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1DA4u;
            // 0x3b1da8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1DB8u;
            goto label_3b1db8;
        }
    }
    ctx->pc = 0x3B1DACu;
    // 0x3b1dac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b1dacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1DB0u;
    {
        const bool branch_taken_0x3b1db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1DB0u;
            // 0x3b1db4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1db0) {
            ctx->pc = 0x3B1DD0u;
            goto label_3b1dd0;
        }
    }
    ctx->pc = 0x3B1DB8u;
label_3b1db8:
    // 0x3b1db8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b1db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b1dbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1dc4: 0x0  nop
    ctx->pc = 0x3b1dc4u;
    // NOP
    // 0x3b1dc8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1dcc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1dccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1dd0:
    // 0x3b1dd0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3b1dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3b1dd4: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1dd8: 0x2463001d  addiu       $v1, $v1, 0x1D
    ctx->pc = 0x3b1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
    // 0x3b1ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1de0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b1de4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1de8: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3b1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b1dec: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1decu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1df0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1DF0u;
    {
        const bool branch_taken_0x3b1df0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1DF0u;
            // 0x3b1df4: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1df0) {
            ctx->pc = 0x3B1E04u;
            goto label_3b1e04;
        }
    }
    ctx->pc = 0x3B1DF8u;
    // 0x3b1df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1DFCu;
    {
        const bool branch_taken_0x3b1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1DFCu;
            // 0x3b1e00: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1dfc) {
            ctx->pc = 0x3B1E20u;
            goto label_3b1e20;
        }
    }
    ctx->pc = 0x3B1E04u;
label_3b1e04:
    // 0x3b1e04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1e0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1e14: 0x0  nop
    ctx->pc = 0x3b1e14u;
    // NOP
    // 0x3b1e18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1e1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1e20:
    // 0x3b1e20: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1E20u;
    {
        const bool branch_taken_0x3b1e20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1E20u;
            // 0x3b1e24: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e20) {
            ctx->pc = 0x3B1E34u;
            goto label_3b1e34;
        }
    }
    ctx->pc = 0x3B1E28u;
    // 0x3b1e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b1e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1e2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1E2Cu;
    {
        const bool branch_taken_0x3b1e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1E2Cu;
            // 0x3b1e30: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e2c) {
            ctx->pc = 0x3B1E50u;
            goto label_3b1e50;
        }
    }
    ctx->pc = 0x3B1E34u;
label_3b1e34:
    // 0x3b1e34: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3b1e38: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b1e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b1e3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1e40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1e40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1e44: 0x0  nop
    ctx->pc = 0x3b1e44u;
    // NOP
    // 0x3b1e48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1e4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1e50:
    // 0x3b1e50: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1e50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1e54: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1e54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1e58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1e5c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1e64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e68: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1e68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1e6c: 0x0  nop
    ctx->pc = 0x3b1e6cu;
    // NOP
    // 0x3b1e70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1e7c: 0x0  nop
    ctx->pc = 0x3b1e7cu;
    // NOP
    // 0x3b1e80: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1e84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1e88: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1e8c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1E8Cu;
    SET_GPR_U32(ctx, 31, 0x3B1E94u);
    ctx->pc = 0x3B1E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1E8Cu;
            // 0x3b1e90: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1E94u; }
        if (ctx->pc != 0x3B1E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1E94u; }
        if (ctx->pc != 0x3B1E94u) { return; }
    }
    ctx->pc = 0x3B1E94u;
label_3b1e94:
    // 0x3b1e94: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b1e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b1e98: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1E98u;
    {
        const bool branch_taken_0x3b1e98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b1e98) {
            ctx->pc = 0x3B1E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1E98u;
            // 0x3b1e9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1EACu;
            goto label_3b1eac;
        }
    }
    ctx->pc = 0x3B1EA0u;
    // 0x3b1ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ea4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1EA4u;
    {
        const bool branch_taken_0x3b1ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1EA4u;
            // 0x3b1ea8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ea4) {
            ctx->pc = 0x3B1EC4u;
            goto label_3b1ec4;
        }
    }
    ctx->pc = 0x3B1EACu;
label_3b1eac:
    // 0x3b1eac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1eb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1eb8: 0x0  nop
    ctx->pc = 0x3b1eb8u;
    // NOP
    // 0x3b1ebc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1ec0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1ec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1ec4:
    // 0x3b1ec4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1ec8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1ec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ed0: 0x268502e0  addiu       $a1, $s4, 0x2E0
    ctx->pc = 0x3b1ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
    // 0x3b1ed4: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1ed4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1ed8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1ED8u;
    {
        const bool branch_taken_0x3b1ed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1ED8u;
            // 0x3b1edc: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ed8) {
            ctx->pc = 0x3B1EECu;
            goto label_3b1eec;
        }
    }
    ctx->pc = 0x3B1EE0u;
    // 0x3b1ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1EE4u;
    {
        const bool branch_taken_0x3b1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1EE4u;
            // 0x3b1ee8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ee4) {
            ctx->pc = 0x3B1F08u;
            goto label_3b1f08;
        }
    }
    ctx->pc = 0x3B1EECu;
label_3b1eec:
    // 0x3b1eec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1ef4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1efc: 0x0  nop
    ctx->pc = 0x3b1efcu;
    // NOP
    // 0x3b1f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1f04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1f08:
    // 0x3b1f08: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3b1f08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b1f0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1F0Cu;
    {
        const bool branch_taken_0x3b1f0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1F0Cu;
            // 0x3b1f10: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f0c) {
            ctx->pc = 0x3B1F20u;
            goto label_3b1f20;
        }
    }
    ctx->pc = 0x3B1F14u;
    // 0x3b1f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1F18u;
    {
        const bool branch_taken_0x3b1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1F18u;
            // 0x3b1f1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f18) {
            ctx->pc = 0x3B1F3Cu;
            goto label_3b1f3c;
        }
    }
    ctx->pc = 0x3B1F20u;
label_3b1f20:
    // 0x3b1f20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b1f24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1f28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1f30: 0x0  nop
    ctx->pc = 0x3b1f30u;
    // NOP
    // 0x3b1f34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b1f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b1f38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b1f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b1f3c:
    // 0x3b1f3c: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b1f3cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b1f40: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b1f40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1f44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b1f48: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b1f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b1f4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1f50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b1f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f54: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b1f54u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1f58: 0x0  nop
    ctx->pc = 0x3b1f58u;
    // NOP
    // 0x3b1f5c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b1f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b1f60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1f68: 0x0  nop
    ctx->pc = 0x3b1f68u;
    // NOP
    // 0x3b1f6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b1f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b1f70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b1f70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1f74: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b1f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b1f78: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B1F78u;
    SET_GPR_U32(ctx, 31, 0x3B1F80u);
    ctx->pc = 0x3B1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1F78u;
            // 0x3b1f7c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1F80u; }
        if (ctx->pc != 0x3B1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1F80u; }
        if (ctx->pc != 0x3B1F80u) { return; }
    }
    ctx->pc = 0x3B1F80u;
label_3b1f80:
    // 0x3b1f80: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3b1f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b1f84: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1F84u;
    {
        const bool branch_taken_0x3b1f84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b1f84) {
            ctx->pc = 0x3B1F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1F84u;
            // 0x3b1f88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1F98u;
            goto label_3b1f98;
        }
    }
    ctx->pc = 0x3B1F8Cu;
    // 0x3b1f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1F90u;
    {
        const bool branch_taken_0x3b1f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1F90u;
            // 0x3b1f94: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f90) {
            ctx->pc = 0x3B1FB0u;
            goto label_3b1fb0;
        }
    }
    ctx->pc = 0x3B1F98u;
label_3b1f98:
    // 0x3b1f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b1f9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b1f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b1fa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b1fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1fa4: 0x0  nop
    ctx->pc = 0x3b1fa4u;
    // NOP
    // 0x3b1fa8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b1fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b1fac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b1facu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b1fb0:
    // 0x3b1fb0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3b1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3b1fb4: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x3b1fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x3b1fb8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3b1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3b1fbc: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3b1fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b1fc0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b1fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b1fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1fc8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1fcc: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b1fccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b1fd0: 0x1810  mfhi        $v1
    ctx->pc = 0x3b1fd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b1fd4: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b1fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b1fd8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x3b1fd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x3b1fdc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3b1fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b1fe0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b1fe4: 0x24a3001d  addiu       $v1, $a1, 0x1D
    ctx->pc = 0x3b1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
    // 0x3b1fe8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1fec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b1ff0: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3b1ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b1ff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b1ff8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b1ffc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b2000: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3b2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b2004: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x3b2004u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3b2008: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3b2008u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3b200c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B200Cu;
    {
        const bool branch_taken_0x3b200c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B200Cu;
            // 0x3b2010: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b200c) {
            ctx->pc = 0x3B2020u;
            goto label_3b2020;
        }
    }
    ctx->pc = 0x3B2014u;
    // 0x3b2014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2018u;
    {
        const bool branch_taken_0x3b2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2018u;
            // 0x3b201c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2018) {
            ctx->pc = 0x3B203Cu;
            goto label_3b203c;
        }
    }
    ctx->pc = 0x3B2020u;
label_3b2020:
    // 0x3b2020: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b2020u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b2024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b2028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b2028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b202c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b202cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2030: 0x0  nop
    ctx->pc = 0x3b2030u;
    // NOP
    // 0x3b2034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b2038: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b203c:
    // 0x3b203c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b203cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b2040: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2040u;
    {
        const bool branch_taken_0x3b2040 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2040u;
            // 0x3b2044: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2040) {
            ctx->pc = 0x3B2054u;
            goto label_3b2054;
        }
    }
    ctx->pc = 0x3B2048u;
    // 0x3b2048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b204c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B204Cu;
    {
        const bool branch_taken_0x3b204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B204Cu;
            // 0x3b2050: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b204c) {
            ctx->pc = 0x3B2070u;
            goto label_3b2070;
        }
    }
    ctx->pc = 0x3B2054u;
label_3b2054:
    // 0x3b2054: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b2054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b2058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b205c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b205cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b2060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2064: 0x0  nop
    ctx->pc = 0x3b2064u;
    // NOP
    // 0x3b2068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b206c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b206cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2070:
    // 0x3b2070: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b2070u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b2074: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3b2074u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b2078: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b207c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b207cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b2080: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2084: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b2084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2088: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b2088u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b208c: 0x0  nop
    ctx->pc = 0x3b208cu;
    // NOP
    // 0x3b2090: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b2090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b2094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b209c: 0x0  nop
    ctx->pc = 0x3b209cu;
    // NOP
    // 0x3b20a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b20a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b20a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b20a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b20a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b20a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b20ac: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B20ACu;
    SET_GPR_U32(ctx, 31, 0x3B20B4u);
    ctx->pc = 0x3B20B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B20ACu;
            // 0x3b20b0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B20B4u; }
        if (ctx->pc != 0x3B20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B20B4u; }
        if (ctx->pc != 0x3B20B4u) { return; }
    }
    ctx->pc = 0x3B20B4u;
label_3b20b4:
    // 0x3b20b4: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x3b20b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b20b8: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B20B8u;
    {
        const bool branch_taken_0x3b20b8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3b20b8) {
            ctx->pc = 0x3B20BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B20B8u;
            // 0x3b20bc: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B20CCu;
            goto label_3b20cc;
        }
    }
    ctx->pc = 0x3B20C0u;
    // 0x3b20c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3b20c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b20c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B20C4u;
    {
        const bool branch_taken_0x3b20c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B20C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B20C4u;
            // 0x3b20c8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b20c4) {
            ctx->pc = 0x3B20E4u;
            goto label_3b20e4;
        }
    }
    ctx->pc = 0x3B20CCu;
label_3b20cc:
    // 0x3b20cc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3b20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3b20d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b20d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b20d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b20d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b20d8: 0x0  nop
    ctx->pc = 0x3b20d8u;
    // NOP
    // 0x3b20dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b20dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b20e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b20e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b20e4:
    // 0x3b20e4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b20e8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3b20e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b20ec: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b20ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b20f0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3b20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b20f4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b20f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b20f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b20f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b20fc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3b20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2100: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b2100u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3b2104: 0x1810  mfhi        $v1
    ctx->pc = 0x3b2104u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b2108: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3b2108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3b210c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3b210cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3b2110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b2110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b2114: 0x2463001d  addiu       $v1, $v1, 0x1D
    ctx->pc = 0x3b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
    // 0x3b2118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b2118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3b211c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3b211cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3b2120: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2120u;
    {
        const bool branch_taken_0x3b2120 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2120u;
            // 0x3b2124: 0x2832821  addu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2120) {
            ctx->pc = 0x3B2134u;
            goto label_3b2134;
        }
    }
    ctx->pc = 0x3B2128u;
    // 0x3b2128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b212c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B212Cu;
    {
        const bool branch_taken_0x3b212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B212Cu;
            // 0x3b2130: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b212c) {
            ctx->pc = 0x3B2150u;
            goto label_3b2150;
        }
    }
    ctx->pc = 0x3B2134u;
label_3b2134:
    // 0x3b2134: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b2134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b2138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b213c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b2140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2144: 0x0  nop
    ctx->pc = 0x3b2144u;
    // NOP
    // 0x3b2148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b214c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b214cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2150:
    // 0x3b2150: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2150u;
    {
        const bool branch_taken_0x3b2150 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3B2154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2150u;
            // 0x3b2154: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2150) {
            ctx->pc = 0x3B2164u;
            goto label_3b2164;
        }
    }
    ctx->pc = 0x3B2158u;
    // 0x3b2158: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3b2158u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b215c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B215Cu;
    {
        const bool branch_taken_0x3b215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B215Cu;
            // 0x3b2160: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b215c) {
            ctx->pc = 0x3B2180u;
            goto label_3b2180;
        }
    }
    ctx->pc = 0x3B2164u;
label_3b2164:
    // 0x3b2164: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3b2164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3b2168: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3b2168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3b216c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b2170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2174: 0x0  nop
    ctx->pc = 0x3b2174u;
    // NOP
    // 0x3b2178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b217c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b217cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2180:
    // 0x3b2180: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b2180u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b2184: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x3b2184u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b2188: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b218c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3b218cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3b2190: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b2190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b2194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b219c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b219cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b21a0: 0x0  nop
    ctx->pc = 0x3b21a0u;
    // NOP
    // 0x3b21a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b21a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b21a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b21a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b21ac: 0x0  nop
    ctx->pc = 0x3b21acu;
    // NOP
    // 0x3b21b0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b21b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b21b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b21b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b21b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b21b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b21bc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B21BCu;
    SET_GPR_U32(ctx, 31, 0x3B21C4u);
    ctx->pc = 0x3B21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B21BCu;
            // 0x3b21c0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B21C4u; }
        if (ctx->pc != 0x3B21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B21C4u; }
        if (ctx->pc != 0x3B21C4u) { return; }
    }
    ctx->pc = 0x3B21C4u;
label_3b21c4:
    // 0x3b21c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b21c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b21c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b21cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b21ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b21d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b21d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b21d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b21d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b21d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b21dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b21dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b21e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b21e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b21e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b21e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b21e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b21e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b21ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B21ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B21F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B21ECu;
            // 0x3b21f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B21F4u;
    // 0x3b21f4: 0x0  nop
    ctx->pc = 0x3b21f4u;
    // NOP
    // 0x3b21f8: 0x0  nop
    ctx->pc = 0x3b21f8u;
    // NOP
    // 0x3b21fc: 0x0  nop
    ctx->pc = 0x3b21fcu;
    // NOP
}
