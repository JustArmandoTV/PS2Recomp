#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B1780
// Address: 0x4b1780 - 0x4b19b0
void sub_004B1780_0x4b1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1780_0x4b1780");
#endif

    switch (ctx->pc) {
        case 0x4b17dcu: goto label_4b17dc;
        case 0x4b1804u: goto label_4b1804;
        case 0x4b18bcu: goto label_4b18bc;
        case 0x4b18ccu: goto label_4b18cc;
        case 0x4b18d4u: goto label_4b18d4;
        case 0x4b1960u: goto label_4b1960;
        default: break;
    }

    ctx->pc = 0x4b1780u;

    // 0x4b1780: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x4b1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x4b1784: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x4b1784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x4b1788: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4b178c: 0x24c63fe0  addiu       $a2, $a2, 0x3FE0
    ctx->pc = 0x4b178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16352));
    // 0x4b1790: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4b1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4b1794: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4b1794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4b1798: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4b1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4b179c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b179cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4b17a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4b17a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4b17a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4b17a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b17ac: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4b17acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4b17b0: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x4b17b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4b17b4: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x4b17b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4b17b8: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x4b17b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4b17bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x4b17bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4b17c0: 0xc48202c0  lwc1        $f2, 0x2C0($a0)
    ctx->pc = 0x4b17c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b17c4: 0xc48102c4  lwc1        $f1, 0x2C4($a0)
    ctx->pc = 0x4b17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b17c8: 0xc48002c8  lwc1        $f0, 0x2C8($a0)
    ctx->pc = 0x4b17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b17cc: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x4b17ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x4b17d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4b17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b17d4: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x4b17d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x4b17d8: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x4b17d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_4b17dc:
    // 0x4b17dc: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x4b17dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b17e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4b17e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4b17e4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4b17e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4b17e8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x4b17e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x4b17ec: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x4b17ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x4b17f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x4b17f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x4b17f4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B17F4u;
    {
        const bool branch_taken_0x4b17f4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4B17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B17F4u;
            // 0x4b17f8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b17f4) {
            ctx->pc = 0x4B17DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b17dc;
        }
    }
    ctx->pc = 0x4B17FCu;
    // 0x4b17fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b17fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1800: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x4b1800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4b1804:
    // 0x4b1804: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x4b1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1808: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x4b1808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b180c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4b180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1810: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x4b1810u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b1814: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4b1814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b1818: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4b1818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4b181c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x4b181cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4b1820: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x4b1820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4b1824: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x4b1824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x4b1828: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4b1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b182c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x4b182cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4b1830: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x4b1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1834: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4b1834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4b1838: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x4b1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b183c: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x4b183cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x4b1840: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x4b1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1844: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x4b1844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x4b1848: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x4b1848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b184c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x4b184cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4b1850: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x4b1850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1854: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x4b1854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x4b1858: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4b1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b185c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x4b185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x4b1860: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x4b1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b1864: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x4b1864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x4b1868: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x4b1868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b186c: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x4b186cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x4b1870: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x4b1870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1874: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x4b1874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x4b1878: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x4b1878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b187c: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x4b187cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x4b1880: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x4b1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1884: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x4b1884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1888: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x4b1888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x4b188c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x4b188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x4b1890: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x4b1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1894: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x4b1894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x4b1898: 0xc6180054  lwc1        $f24, 0x54($s0)
    ctx->pc = 0x4b1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4b189c: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x4b189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x4b18a0: 0xc68c0dc0  lwc1        $f12, 0xDC0($s4)
    ctx->pc = 0x4b18a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b18a4: 0xc6170058  lwc1        $f23, 0x58($s0)
    ctx->pc = 0x4b18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4b18a8: 0xc616005c  lwc1        $f22, 0x5C($s0)
    ctx->pc = 0x4b18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4b18ac: 0xc6150060  lwc1        $f21, 0x60($s0)
    ctx->pc = 0x4b18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b18b0: 0xc6140064  lwc1        $f20, 0x64($s0)
    ctx->pc = 0x4b18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b18b4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x4B18B4u;
    SET_GPR_U32(ctx, 31, 0x4B18BCu);
    ctx->pc = 0x4B18B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B18B4u;
            // 0x4b18b8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18BCu; }
        if (ctx->pc != 0x4B18BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18BCu; }
        if (ctx->pc != 0x4B18BCu) { return; }
    }
    ctx->pc = 0x4B18BCu;
label_4b18bc:
    // 0x4b18bc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4b18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x4b18c0: 0x26850890  addiu       $a1, $s4, 0x890
    ctx->pc = 0x4b18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x4b18c4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4B18C4u;
    SET_GPR_U32(ctx, 31, 0x4B18CCu);
    ctx->pc = 0x4B18C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B18C4u;
            // 0x4b18c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18CCu; }
        if (ctx->pc != 0x4B18CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18CCu; }
        if (ctx->pc != 0x4B18CCu) { return; }
    }
    ctx->pc = 0x4B18CCu;
label_4b18cc:
    // 0x4b18cc: 0xc040180  jal         func_100600
    ctx->pc = 0x4B18CCu;
    SET_GPR_U32(ctx, 31, 0x4B18D4u);
    ctx->pc = 0x4B18D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B18CCu;
            // 0x4b18d0: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18D4u; }
        if (ctx->pc != 0x4B18D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B18D4u; }
        if (ctx->pc != 0x4B18D4u) { return; }
    }
    ctx->pc = 0x4B18D4u;
label_4b18d4:
    // 0x4b18d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18d8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4B18D8u;
    {
        const bool branch_taken_0x4b18d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b18d8) {
            ctx->pc = 0x4B1960u;
            goto label_4b1960;
        }
    }
    ctx->pc = 0x4B18E0u;
    // 0x4b18e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4b18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4b18e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b18e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b18e8: 0x0  nop
    ctx->pc = 0x4b18e8u;
    // NOP
    // 0x4b18ec: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x4b18ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b18f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4B18F0u;
    {
        const bool branch_taken_0x4b18f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b18f0) {
            ctx->pc = 0x4B18F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B18F0u;
            // 0x4b18f4: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1908u;
            goto label_4b1908;
        }
    }
    ctx->pc = 0x4B18F8u;
    // 0x4b18f8: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b18f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b18fc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4b18fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4b1900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B1900u;
    {
        const bool branch_taken_0x4b1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1900u;
            // 0x4b1904: 0x27a301c0  addiu       $v1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1900) {
            ctx->pc = 0x4B1920u;
            goto label_4b1920;
        }
    }
    ctx->pc = 0x4B1908u;
label_4b1908:
    // 0x4b1908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4b1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4b190c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b190cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b1910: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4b1910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4b1914: 0x0  nop
    ctx->pc = 0x4b1914u;
    // NOP
    // 0x4b1918: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4b1918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4b191c: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x4b191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4b1920:
    // 0x4b1920: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x4b1920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x4b1924: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4b1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x4b1928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b1928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b192c: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x4b192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x4b1930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b1930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1934: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4b1934u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x4b1938: 0x26870890  addiu       $a3, $s4, 0x890
    ctx->pc = 0x4b1938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x4b193c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x4b193cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x4b1940: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x4b1940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x4b1944: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x4b1944u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x4b1948: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x4b1948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x4b194c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x4b194cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x4b1950: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x4b1950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x4b1954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b1954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b1958: 0xc0db488  jal         func_36D220
    ctx->pc = 0x4B1958u;
    SET_GPR_U32(ctx, 31, 0x4B1960u);
    ctx->pc = 0x4B195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1958u;
            // 0x4b195c: 0x27ab0190  addiu       $t3, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1960u; }
        if (ctx->pc != 0x4B1960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1960u; }
        if (ctx->pc != 0x4B1960u) { return; }
    }
    ctx->pc = 0x4B1960u;
label_4b1960:
    // 0x4b1960: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b1960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4b1964: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x4b1964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b1968: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
    ctx->pc = 0x4B1968u;
    {
        const bool branch_taken_0x4b1968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1968u;
            // 0x4b196c: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1968) {
            ctx->pc = 0x4B1804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b1804;
        }
    }
    ctx->pc = 0x4B1970u;
    // 0x4b1970: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b1974: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4b1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4b1978: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4b1978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b197c: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x4b197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4b1980: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4b1980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b1984: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x4b1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4b1988: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4b1988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b198c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x4b198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b1990: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4b1990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1994: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x4b1994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b1998: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b1998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b199c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B199Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B19A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B199Cu;
            // 0x4b19a0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B19A4u;
    // 0x4b19a4: 0x0  nop
    ctx->pc = 0x4b19a4u;
    // NOP
    // 0x4b19a8: 0x0  nop
    ctx->pc = 0x4b19a8u;
    // NOP
    // 0x4b19ac: 0x0  nop
    ctx->pc = 0x4b19acu;
    // NOP
}
