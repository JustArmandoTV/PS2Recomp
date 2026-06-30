#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D860
// Address: 0x28d860 - 0x28de20
void sub_0028D860_0x28d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D860_0x28d860");
#endif

    switch (ctx->pc) {
        case 0x28db04u: goto label_28db04;
        case 0x28db20u: goto label_28db20;
        case 0x28dc00u: goto label_28dc00;
        case 0x28dc18u: goto label_28dc18;
        default: break;
    }

    ctx->pc = 0x28d860u;

    // 0x28d860: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x28d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x28d864: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28d86c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28d870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28d874: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28d874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d878: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d87c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d880: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28d880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d894: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x28d894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28d898: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x28d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d89c: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x28d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x28d8a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d8a4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28d8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d8ac: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x28d8acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28d8b0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x28d8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x28d8b4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x28d8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x28d8b8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x28d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d8bc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x28d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d8c0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x28d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d8c4: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x28d8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x28d8c8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x28d8c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x28d8cc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x28d8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x28d8d0: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x28d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d8d4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x28d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d8d8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x28d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d8dc: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x28d8dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x28d8e0: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x28d8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x28d8e4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x28d8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x28d8e8: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x28d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d8ec: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x28d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d8f0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x28d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d8f4: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x28d8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x28d8f8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x28d8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x28d8fc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x28d8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x28d900: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x28d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d904: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x28d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d908: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x28d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d90c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x28d90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x28d910: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x28d910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x28d914: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x28d914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x28d918: 0xc4a2003c  lwc1        $f2, 0x3C($a1)
    ctx->pc = 0x28d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d91c: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x28d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d920: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x28d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d924: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x28d924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x28d928: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x28d928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x28d92c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x28d92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x28d930: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x28d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d934: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x28d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d938: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x28d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d93c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x28d93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x28d940: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x28d940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x28d944: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28d944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x28d948: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x28d948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d94c: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x28d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d950: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x28d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d954: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x28d954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x28d958: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x28d958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x28d95c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x28d95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x28d960: 0xc4a20060  lwc1        $f2, 0x60($a1)
    ctx->pc = 0x28d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d964: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x28d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d968: 0xc4a00068  lwc1        $f0, 0x68($a1)
    ctx->pc = 0x28d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d96c: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x28d96cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x28d970: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x28d970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x28d974: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x28d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x28d978: 0xc4a2006c  lwc1        $f2, 0x6C($a1)
    ctx->pc = 0x28d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d97c: 0xc4a10070  lwc1        $f1, 0x70($a1)
    ctx->pc = 0x28d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d980: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x28d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d984: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x28d984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x28d988: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x28d988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x28d98c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x28d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x28d990: 0xc4a20078  lwc1        $f2, 0x78($a1)
    ctx->pc = 0x28d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d994: 0xc4a1007c  lwc1        $f1, 0x7C($a1)
    ctx->pc = 0x28d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d998: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x28d998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d99c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x28d99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x28d9a0: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x28d9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x28d9a4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28d9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x28d9a8: 0xc4a20084  lwc1        $f2, 0x84($a1)
    ctx->pc = 0x28d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d9ac: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x28d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d9b0: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x28d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d9b4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x28d9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x28d9b8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x28d9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x28d9bc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x28d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x28d9c0: 0xc4a20090  lwc1        $f2, 0x90($a1)
    ctx->pc = 0x28d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d9c4: 0xc4a10094  lwc1        $f1, 0x94($a1)
    ctx->pc = 0x28d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d9c8: 0xc4a00098  lwc1        $f0, 0x98($a1)
    ctx->pc = 0x28d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d9cc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x28d9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x28d9d0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x28d9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x28d9d4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x28d9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x28d9d8: 0xc4a2009c  lwc1        $f2, 0x9C($a1)
    ctx->pc = 0x28d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d9dc: 0xc4a100a0  lwc1        $f1, 0xA0($a1)
    ctx->pc = 0x28d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d9e0: 0xc4a000a4  lwc1        $f0, 0xA4($a1)
    ctx->pc = 0x28d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d9e4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x28d9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x28d9e8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x28d9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x28d9ec: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x28d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x28d9f0: 0xc4a200a8  lwc1        $f2, 0xA8($a1)
    ctx->pc = 0x28d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d9f4: 0xc4a100ac  lwc1        $f1, 0xAC($a1)
    ctx->pc = 0x28d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d9f8: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x28d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d9fc: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x28d9fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x28da00: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x28da00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x28da04: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x28da04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x28da08: 0xc4a200b4  lwc1        $f2, 0xB4($a1)
    ctx->pc = 0x28da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28da0c: 0xc4a100b8  lwc1        $f1, 0xB8($a1)
    ctx->pc = 0x28da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28da10: 0xc4a000bc  lwc1        $f0, 0xBC($a1)
    ctx->pc = 0x28da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28da14: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x28da14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x28da18: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x28da18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x28da1c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28da20: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x28da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x28da24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28da24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28da28: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28da28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28da2c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28da30: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x28da30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x28da34: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x28da34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x28da38: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x28da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x28da3c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28da40: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x28da40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x28da44: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x28da44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x28da48: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x28da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x28da4c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x28da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x28da50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28da50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28da54: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x28da54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x28da58: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x28da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x28da5c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x28da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x28da60: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x28da60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x28da64: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x28da64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x28da68: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x28da68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x28da6c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x28da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x28da70: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x28da70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x28da74: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x28da74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x28da78: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x28da78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x28da7c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x28da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x28da80: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x28da80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x28da84: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x28da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x28da88: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x28da88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x28da8c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x28da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x28da90: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x28da90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x28da94: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x28da94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x28da98: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x28da98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x28da9c: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x28da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x28daa0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x28daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x28daa4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x28daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x28daa8: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x28daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x28daac: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x28daacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x28dab0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x28dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x28dab4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x28dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x28dab8: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x28dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x28dabc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x28dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x28dac0: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x28dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x28dac4: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x28dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x28dac8: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x28dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x28dacc: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x28daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x28dad0: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x28dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x28dad4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x28dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x28dad8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x28dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x28dadc: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x28dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x28dae0: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x28dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x28dae4: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x28dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x28dae8: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x28dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x28daec: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x28daecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x28daf0: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x28daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x28daf4: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x28daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x28daf8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28daf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28dafc: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x28dafcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28db00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28db04:
    // 0x28db04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28db04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db08: 0x237c821  addu        $t9, $s1, $s7
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x28db0c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x28db0cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db10: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x28db10u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db14: 0x260e0060  addiu       $t6, $s0, 0x60
    ctx->pc = 0x28db14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x28db18: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x28db18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db1c: 0x248c0060  addiu       $t4, $a0, 0x60
    ctx->pc = 0x28db1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_28db20:
    // 0x28db20: 0x3381821  addu        $v1, $t9, $t8
    ctx->pc = 0x28db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x28db24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x28db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28db28: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x28db28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28db2c: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x28db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28db30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28db30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db34: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x28db34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28db38: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x28db38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db3c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x28db3cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x28db40: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db44: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28db44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28db48: 0xe5e40000  swc1        $f4, 0x0($t7)
    ctx->pc = 0x28db48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x28db4c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28db4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28db50: 0xc5e40004  lwc1        $f4, 0x4($t7)
    ctx->pc = 0x28db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28db54: 0xe5a30000  swc1        $f3, 0x0($t5)
    ctx->pc = 0x28db54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x28db58: 0xc5a30004  lwc1        $f3, 0x4($t5)
    ctx->pc = 0x28db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28db5c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28db5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28db60: 0xe5e40004  swc1        $f4, 0x4($t7)
    ctx->pc = 0x28db60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x28db64: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28db64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28db68: 0xc5e40008  lwc1        $f4, 0x8($t7)
    ctx->pc = 0x28db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28db6c: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x28db6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x28db70: 0xc5a30008  lwc1        $f3, 0x8($t5)
    ctx->pc = 0x28db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28db74: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28db74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28db78: 0xe5e40008  swc1        $f4, 0x8($t7)
    ctx->pc = 0x28db78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x28db7c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28db7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28db80: 0xc5e4000c  lwc1        $f4, 0xC($t7)
    ctx->pc = 0x28db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28db84: 0xe5a30008  swc1        $f3, 0x8($t5)
    ctx->pc = 0x28db84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x28db88: 0xc5a3000c  lwc1        $f3, 0xC($t5)
    ctx->pc = 0x28db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28db8c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28db8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28db90: 0xe5e4000c  swc1        $f4, 0xC($t7)
    ctx->pc = 0x28db90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x28db94: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28db94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28db98: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x28db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28db9c: 0xe5a3000c  swc1        $f3, 0xC($t5)
    ctx->pc = 0x28db9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x28dba0: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x28dba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dba4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28dba4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28dba8: 0xe5c40000  swc1        $f4, 0x0($t6)
    ctx->pc = 0x28dba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x28dbac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28dbacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28dbb0: 0xc5c40004  lwc1        $f4, 0x4($t6)
    ctx->pc = 0x28dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dbb4: 0xe5830000  swc1        $f3, 0x0($t4)
    ctx->pc = 0x28dbb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x28dbb8: 0xc5830004  lwc1        $f3, 0x4($t4)
    ctx->pc = 0x28dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dbbc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28dbbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28dbc0: 0xe5c40004  swc1        $f4, 0x4($t6)
    ctx->pc = 0x28dbc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x28dbc4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28dbc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28dbc8: 0xc5c40008  lwc1        $f4, 0x8($t6)
    ctx->pc = 0x28dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dbcc: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x28dbccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x28dbd0: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x28dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dbd4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28dbd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28dbd8: 0xe5c40008  swc1        $f4, 0x8($t6)
    ctx->pc = 0x28dbd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x28dbdc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28dbdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28dbe0: 0xc5c4000c  lwc1        $f4, 0xC($t6)
    ctx->pc = 0x28dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dbe4: 0xe5830008  swc1        $f3, 0x8($t4)
    ctx->pc = 0x28dbe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x28dbe8: 0xc583000c  lwc1        $f3, 0xC($t4)
    ctx->pc = 0x28dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dbec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x28dbecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28dbf0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x28dbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28dbf4: 0xe5c4000c  swc1        $f4, 0xC($t6)
    ctx->pc = 0x28dbf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x28dbf8: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x28dbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x28dbfc: 0x0  nop
    ctx->pc = 0x28dbfcu;
    // NOP
label_28dc00:
    // 0x28dc00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28dc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc04: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x28dc04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc08: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x28dc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc0c: 0x25460060  addiu       $a2, $t2, 0x60
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x28dc10: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x28dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc14: 0x25230060  addiu       $v1, $t1, 0x60
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
label_28dc18:
    // 0x28dc18: 0x16750003  bne         $s3, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DC18u;
    {
        const bool branch_taken_0x28dc18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x28dc18) {
            ctx->pc = 0x28DC28u;
            goto label_28dc28;
        }
    }
    ctx->pc = 0x28DC20u;
    // 0x28dc20: 0x12540055  beq         $s2, $s4, . + 4 + (0x55 << 2)
    ctx->pc = 0x28DC20u;
    {
        const bool branch_taken_0x28dc20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x28dc20) {
            ctx->pc = 0x28DD78u;
            goto label_28dd78;
        }
    }
    ctx->pc = 0x28DC28u;
label_28dc28:
    // 0x28dc28: 0x118b021  addu        $s6, $t0, $t8
    ctx->pc = 0x28dc28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x28dc2c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x28dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dc30: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x28dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dc34: 0xc5e50000  lwc1        $f5, 0x0($t7)
    ctx->pc = 0x28dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dc38: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28dc38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x28dc3c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dc3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dc40: 0x460508dc  madd.s      $f3, $f1, $f5
    ctx->pc = 0x28dc40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x28dc44: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x28dc44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x28dc48: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x28dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dc4c: 0xc5e60004  lwc1        $f6, 0x4($t7)
    ctx->pc = 0x28dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dc50: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x28dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dc54: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dc54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dc58: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dc58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dc5c: 0xe4e50004  swc1        $f5, 0x4($a3)
    ctx->pc = 0x28dc5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x28dc60: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x28dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dc64: 0xc5e60008  lwc1        $f6, 0x8($t7)
    ctx->pc = 0x28dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dc68: 0xc5a40000  lwc1        $f4, 0x0($t5)
    ctx->pc = 0x28dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dc6c: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dc6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dc70: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dc70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dc74: 0xe4e50008  swc1        $f5, 0x8($a3)
    ctx->pc = 0x28dc74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x28dc78: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x28dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dc7c: 0xc5e6000c  lwc1        $f6, 0xC($t7)
    ctx->pc = 0x28dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dc80: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dc80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dc84: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dc84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dc88: 0xe4e5000c  swc1        $f5, 0xC($a3)
    ctx->pc = 0x28dc88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x28dc8c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x28dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dc90: 0xc5c60000  lwc1        $f6, 0x0($t6)
    ctx->pc = 0x28dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dc94: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dc94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dc98: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dc98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dc9c: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x28dc9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x28dca0: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x28dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dca4: 0xc5c60004  lwc1        $f6, 0x4($t6)
    ctx->pc = 0x28dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dca8: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dca8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dcac: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dcacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dcb0: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x28dcb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x28dcb4: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x28dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dcb8: 0xc5c60008  lwc1        $f6, 0x8($t6)
    ctx->pc = 0x28dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dcbc: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dcbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dcc0: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dcc0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dcc4: 0xe4c50008  swc1        $f5, 0x8($a2)
    ctx->pc = 0x28dcc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x28dcc8: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x28dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28dccc: 0xc5c6000c  lwc1        $f6, 0xC($t6)
    ctx->pc = 0x28dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28dcd0: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x28dcd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28dcd4: 0x4606095c  madd.s      $f5, $f1, $f6
    ctx->pc = 0x28dcd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x28dcd8: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dcd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dcdc: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dcdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dce0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x28dce0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28dce4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x28dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dce8: 0xc5a40004  lwc1        $f4, 0x4($t5)
    ctx->pc = 0x28dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dcec: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x28dcecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x28dcf0: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dcf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dcf4: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dcf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dcf8: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x28dcf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x28dcfc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x28dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd00: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x28dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd04: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd08: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dd08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd0c: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x28dd0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x28dd10: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x28dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd14: 0xc5a4000c  lwc1        $f4, 0xC($t5)
    ctx->pc = 0x28dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd18: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd1c: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dd1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd20: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x28dd20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x28dd24: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd28: 0xc5840000  lwc1        $f4, 0x0($t4)
    ctx->pc = 0x28dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd2c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd30: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dd30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd34: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28dd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28dd38: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x28dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd3c: 0xc5840004  lwc1        $f4, 0x4($t4)
    ctx->pc = 0x28dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd40: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd44: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dd44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd48: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x28dd48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28dd4c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x28dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd50: 0xc5840008  lwc1        $f4, 0x8($t4)
    ctx->pc = 0x28dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd54: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd58: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x28dd58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd5c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x28dd5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28dd60: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x28dd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd64: 0xc584000c  lwc1        $f4, 0xC($t4)
    ctx->pc = 0x28dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dd68: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x28dd68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28dd6c: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x28dd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x28dd70: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x28dd70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28dd74: 0x0  nop
    ctx->pc = 0x28dd74u;
    // NOP
label_28dd78:
    // 0x28dd78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28dd7c: 0x2a560003  slti        $s6, $s2, 0x3
    ctx->pc = 0x28dd7cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28dd80: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x28dd84: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x28dd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x28dd88: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x28dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x28dd8c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x28dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28dd90: 0x16c0ffa1  bnez        $s6, . + 4 + (-0x5F << 2)
    ctx->pc = 0x28DD90u;
    {
        const bool branch_taken_0x28dd90 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD90u;
            // 0x28dd94: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd90) {
            ctx->pc = 0x28DC18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28dc18;
        }
    }
    ctx->pc = 0x28DD98u;
    // 0x28dd98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28dd98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28dd9c: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x28dd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
    // 0x28dda0: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x28dda0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28dda4: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x28dda8: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x28DDA8u;
    {
        const bool branch_taken_0x28dda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDA8u;
            // 0x28ddac: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dda8) {
            ctx->pc = 0x28DC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28dc00;
        }
    }
    ctx->pc = 0x28DDB0u;
    // 0x28ddb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28ddb4: 0x27390010  addiu       $t9, $t9, 0x10
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x28ddb8: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x28ddb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28ddbc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x28ddbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x28ddc0: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x28ddc4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x28ddc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x28ddc8: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x28ddc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x28ddcc: 0x1460ff54  bnez        $v1, . + 4 + (-0xAC << 2)
    ctx->pc = 0x28DDCCu;
    {
        const bool branch_taken_0x28ddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDCCu;
            // 0x28ddd0: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddcc) {
            ctx->pc = 0x28DB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28db20;
        }
    }
    ctx->pc = 0x28DDD4u;
    // 0x28ddd4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28ddd8: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x28ddd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x28dddc: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x28dddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28dde0: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x28dde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x28dde4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28dde8: 0x1460ff46  bnez        $v1, . + 4 + (-0xBA << 2)
    ctx->pc = 0x28DDE8u;
    {
        const bool branch_taken_0x28dde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDE8u;
            // 0x28ddec: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dde8) {
            ctx->pc = 0x28DB04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28db04;
        }
    }
    ctx->pc = 0x28DDF0u;
    // 0x28ddf0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28ddf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ddf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28ddf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ddf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ddf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ddfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ddfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28de00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28de00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28de04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28de04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28de08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28de08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28de0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28de0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28de14: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE14u;
            // 0x28de18: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DE1Cu;
    // 0x28de1c: 0x0  nop
    ctx->pc = 0x28de1cu;
    // NOP
}
