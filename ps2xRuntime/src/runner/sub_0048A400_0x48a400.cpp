#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A400
// Address: 0x48a400 - 0x48a610
void sub_0048A400_0x48a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A400_0x48a400");
#endif

    switch (ctx->pc) {
        case 0x48a5b4u: goto label_48a5b4;
        case 0x48a5c4u: goto label_48a5c4;
        case 0x48a5d4u: goto label_48a5d4;
        case 0x48a5ecu: goto label_48a5ec;
        default: break;
    }

    ctx->pc = 0x48a400u;

    // 0x48a400: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48a404: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x48a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
    // 0x48a408: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48a408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x48a40c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x48a40cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a410: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48a414: 0x2442f8d8  addiu       $v0, $v0, -0x728
    ctx->pc = 0x48a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
    // 0x48a418: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x48a418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x48a41c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48a41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48a420: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x48a420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x48a424: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x48a424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x48a428: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x48a428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x48a42c: 0xac8a00b8  sw          $t2, 0xB8($a0)
    ctx->pc = 0x48a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 10));
    // 0x48a430: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48a434: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x48a434u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a438: 0x0  nop
    ctx->pc = 0x48a438u;
    // NOP
    // 0x48a43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a440: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x48a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48a444: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48a448: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x48a448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x48a44c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48a450: 0xac8200cc  sw          $v0, 0xCC($a0)
    ctx->pc = 0x48a450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 2));
    // 0x48a454: 0xe48100d0  swc1        $f1, 0xD0($a0)
    ctx->pc = 0x48a454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x48a458: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x48A458u;
    {
        const bool branch_taken_0x48a458 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A458u;
            // 0x48a45c: 0xe48000d4  swc1        $f0, 0xD4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a458) {
            ctx->pc = 0x48A468u;
            goto label_48a468;
        }
    }
    ctx->pc = 0x48A460u;
    // 0x48a460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48A460u;
    {
        const bool branch_taken_0x48a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a460) {
            ctx->pc = 0x48A470u;
            goto label_48a470;
        }
    }
    ctx->pc = 0x48A468u;
label_48a468:
    // 0x48a468: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48a46c: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x48a46cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48a470:
    // 0x48a470: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x48a470u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a47c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48A47Cu;
    {
        const bool branch_taken_0x48a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A47Cu;
            // 0x48a480: 0xe48000d8  swc1        $f0, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a47c) {
            ctx->pc = 0x48A48Cu;
            goto label_48a48c;
        }
    }
    ctx->pc = 0x48A484u;
    // 0x48a484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48A484u;
    {
        const bool branch_taken_0x48a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a484) {
            ctx->pc = 0x48A494u;
            goto label_48a494;
        }
    }
    ctx->pc = 0x48A48Cu;
label_48a48c:
    // 0x48a48c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48a490: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48a494:
    // 0x48a494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a498: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48a498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x48a49c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a4a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48a4a4: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x48a4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x48a4a8: 0xac8800e0  sw          $t0, 0xE0($a0)
    ctx->pc = 0x48a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 8));
    // 0x48a4ac: 0xac8900e4  sw          $t1, 0xE4($a0)
    ctx->pc = 0x48a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 9));
    // 0x48a4b0: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x48a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x48a4b4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x48a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x48a4b8: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x48a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x48a4bc: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x48a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x48a4c0: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x48a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
    // 0x48a4c4: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48A4C4u;
    {
        const bool branch_taken_0x48a4c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x48A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A4C4u;
            // 0x48a4c8: 0xac8300c4  sw          $v1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4c4) {
            ctx->pc = 0x48A500u;
            goto label_48a500;
        }
    }
    ctx->pc = 0x48A4CCu;
    // 0x48a4cc: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x48a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a4d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x48a4d4: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x48a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x48a4d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48a4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x48a4dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x48a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x48a4e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48a4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x48a4e4: 0x0  nop
    ctx->pc = 0x48a4e4u;
    // NOP
    // 0x48a4e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x48a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a4ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48a4ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x48a4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a4f4: 0x0  nop
    ctx->pc = 0x48a4f4u;
    // NOP
    // 0x48a4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a4fc: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x48a4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_48a500:
    // 0x48a500: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48a504: 0x54e2000f  bnel        $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A504u;
    {
        const bool branch_taken_0x48a504 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x48a504) {
            ctx->pc = 0x48A508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A504u;
            // 0x48a508: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A544u;
            goto label_48a544;
        }
    }
    ctx->pc = 0x48A50Cu;
    // 0x48a50c: 0xc48000dc  lwc1        $f0, 0xDC($a0)
    ctx->pc = 0x48a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a510: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x48a514: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x48a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x48a518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48a518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x48a51c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x48a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x48a520: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48a520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x48a524: 0x0  nop
    ctx->pc = 0x48a524u;
    // NOP
    // 0x48a528: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x48a528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a52c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48a52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x48a530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48a534: 0x0  nop
    ctx->pc = 0x48a534u;
    // NOP
    // 0x48a538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a53c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x48a53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x48a540: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x48a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_48a544:
    // 0x48a544: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x48A544u;
    {
        const bool branch_taken_0x48a544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a544) {
            ctx->pc = 0x48A548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A544u;
            // 0x48a548: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A554u;
            goto label_48a554;
        }
    }
    ctx->pc = 0x48A54Cu;
    // 0x48a54c: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x48a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x48a550: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x48a550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48a554:
    // 0x48a554: 0x3e00008  jr          $ra
    ctx->pc = 0x48A554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A55Cu;
    // 0x48a55c: 0x0  nop
    ctx->pc = 0x48a55cu;
    // NOP
    // 0x48a560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48a564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48a568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48a56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48a570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48a570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a574: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x48A574u;
    {
        const bool branch_taken_0x48a574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A574u;
            // 0x48a578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a574) {
            ctx->pc = 0x48A5ECu;
            goto label_48a5ec;
        }
    }
    ctx->pc = 0x48A57Cu;
    // 0x48a57c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48a580: 0x2442f8d8  addiu       $v0, $v0, -0x728
    ctx->pc = 0x48a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
    // 0x48a584: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x48a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x48a588: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x48a588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x48a58c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48A58Cu;
    {
        const bool branch_taken_0x48a58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a58c) {
            ctx->pc = 0x48A590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A58Cu;
            // 0x48a590: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A5CCu;
            goto label_48a5cc;
        }
    }
    ctx->pc = 0x48A594u;
    // 0x48a594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a598: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a59c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48a5a0: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48a5a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48a5a4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48A5A4u;
    {
        const bool branch_taken_0x48a5a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a5a4) {
            ctx->pc = 0x48A5BCu;
            goto label_48a5bc;
        }
    }
    ctx->pc = 0x48A5ACu;
    // 0x48a5ac: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48A5ACu;
    SET_GPR_U32(ctx, 31, 0x48A5B4u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5B4u; }
        if (ctx->pc != 0x48A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5B4u; }
        if (ctx->pc != 0x48A5B4u) { return; }
    }
    ctx->pc = 0x48A5B4u;
label_48a5b4:
    // 0x48a5b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A5B4u;
    {
        const bool branch_taken_0x48a5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A5B4u;
            // 0x48a5b8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a5b4) {
            ctx->pc = 0x48A5C8u;
            goto label_48a5c8;
        }
    }
    ctx->pc = 0x48A5BCu;
label_48a5bc:
    // 0x48a5bc: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48A5BCu;
    SET_GPR_U32(ctx, 31, 0x48A5C4u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5C4u; }
        if (ctx->pc != 0x48A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5C4u; }
        if (ctx->pc != 0x48A5C4u) { return; }
    }
    ctx->pc = 0x48A5C4u;
label_48a5c4:
    // 0x48a5c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x48a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_48a5c8:
    // 0x48a5c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x48a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48a5cc:
    // 0x48a5cc: 0xc04e7d4  jal         func_139F50
    ctx->pc = 0x48A5CCu;
    SET_GPR_U32(ctx, 31, 0x48A5D4u);
    ctx->pc = 0x48A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A5CCu;
            // 0x48a5d0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139F50u;
    if (runtime->hasFunction(0x139F50u)) {
        auto targetFn = runtime->lookupFunction(0x139F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5D4u; }
        if (ctx->pc != 0x48A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139F50_0x139f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5D4u; }
        if (ctx->pc != 0x48A5D4u) { return; }
    }
    ctx->pc = 0x48A5D4u;
label_48a5d4:
    // 0x48a5d4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x48a5d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48a5d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48a5dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48A5DCu;
    {
        const bool branch_taken_0x48a5dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48a5dc) {
            ctx->pc = 0x48A5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A5DCu;
            // 0x48a5e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A5F0u;
            goto label_48a5f0;
        }
    }
    ctx->pc = 0x48A5E4u;
    // 0x48a5e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48A5E4u;
    SET_GPR_U32(ctx, 31, 0x48A5ECu);
    ctx->pc = 0x48A5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A5E4u;
            // 0x48a5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5ECu; }
        if (ctx->pc != 0x48A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A5ECu; }
        if (ctx->pc != 0x48A5ECu) { return; }
    }
    ctx->pc = 0x48A5ECu;
label_48a5ec:
    // 0x48a5ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48a5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a5f0:
    // 0x48a5f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x48A5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A5FCu;
            // 0x48a600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A604u;
    // 0x48a604: 0x0  nop
    ctx->pc = 0x48a604u;
    // NOP
    // 0x48a608: 0x0  nop
    ctx->pc = 0x48a608u;
    // NOP
    // 0x48a60c: 0x0  nop
    ctx->pc = 0x48a60cu;
    // NOP
}
