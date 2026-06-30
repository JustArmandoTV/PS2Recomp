#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1860
// Address: 0x4d1860 - 0x4d1a50
void sub_004D1860_0x4d1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1860_0x4d1860");
#endif

    switch (ctx->pc) {
        case 0x4d1860u: goto label_4d1860;
        case 0x4d1864u: goto label_4d1864;
        case 0x4d1868u: goto label_4d1868;
        case 0x4d186cu: goto label_4d186c;
        case 0x4d1870u: goto label_4d1870;
        case 0x4d1874u: goto label_4d1874;
        case 0x4d1878u: goto label_4d1878;
        case 0x4d187cu: goto label_4d187c;
        case 0x4d1880u: goto label_4d1880;
        case 0x4d1884u: goto label_4d1884;
        case 0x4d1888u: goto label_4d1888;
        case 0x4d188cu: goto label_4d188c;
        case 0x4d1890u: goto label_4d1890;
        case 0x4d1894u: goto label_4d1894;
        case 0x4d1898u: goto label_4d1898;
        case 0x4d189cu: goto label_4d189c;
        case 0x4d18a0u: goto label_4d18a0;
        case 0x4d18a4u: goto label_4d18a4;
        case 0x4d18a8u: goto label_4d18a8;
        case 0x4d18acu: goto label_4d18ac;
        case 0x4d18b0u: goto label_4d18b0;
        case 0x4d18b4u: goto label_4d18b4;
        case 0x4d18b8u: goto label_4d18b8;
        case 0x4d18bcu: goto label_4d18bc;
        case 0x4d18c0u: goto label_4d18c0;
        case 0x4d18c4u: goto label_4d18c4;
        case 0x4d18c8u: goto label_4d18c8;
        case 0x4d18ccu: goto label_4d18cc;
        case 0x4d18d0u: goto label_4d18d0;
        case 0x4d18d4u: goto label_4d18d4;
        case 0x4d18d8u: goto label_4d18d8;
        case 0x4d18dcu: goto label_4d18dc;
        case 0x4d18e0u: goto label_4d18e0;
        case 0x4d18e4u: goto label_4d18e4;
        case 0x4d18e8u: goto label_4d18e8;
        case 0x4d18ecu: goto label_4d18ec;
        case 0x4d18f0u: goto label_4d18f0;
        case 0x4d18f4u: goto label_4d18f4;
        case 0x4d18f8u: goto label_4d18f8;
        case 0x4d18fcu: goto label_4d18fc;
        case 0x4d1900u: goto label_4d1900;
        case 0x4d1904u: goto label_4d1904;
        case 0x4d1908u: goto label_4d1908;
        case 0x4d190cu: goto label_4d190c;
        case 0x4d1910u: goto label_4d1910;
        case 0x4d1914u: goto label_4d1914;
        case 0x4d1918u: goto label_4d1918;
        case 0x4d191cu: goto label_4d191c;
        case 0x4d1920u: goto label_4d1920;
        case 0x4d1924u: goto label_4d1924;
        case 0x4d1928u: goto label_4d1928;
        case 0x4d192cu: goto label_4d192c;
        case 0x4d1930u: goto label_4d1930;
        case 0x4d1934u: goto label_4d1934;
        case 0x4d1938u: goto label_4d1938;
        case 0x4d193cu: goto label_4d193c;
        case 0x4d1940u: goto label_4d1940;
        case 0x4d1944u: goto label_4d1944;
        case 0x4d1948u: goto label_4d1948;
        case 0x4d194cu: goto label_4d194c;
        case 0x4d1950u: goto label_4d1950;
        case 0x4d1954u: goto label_4d1954;
        case 0x4d1958u: goto label_4d1958;
        case 0x4d195cu: goto label_4d195c;
        case 0x4d1960u: goto label_4d1960;
        case 0x4d1964u: goto label_4d1964;
        case 0x4d1968u: goto label_4d1968;
        case 0x4d196cu: goto label_4d196c;
        case 0x4d1970u: goto label_4d1970;
        case 0x4d1974u: goto label_4d1974;
        case 0x4d1978u: goto label_4d1978;
        case 0x4d197cu: goto label_4d197c;
        case 0x4d1980u: goto label_4d1980;
        case 0x4d1984u: goto label_4d1984;
        case 0x4d1988u: goto label_4d1988;
        case 0x4d198cu: goto label_4d198c;
        case 0x4d1990u: goto label_4d1990;
        case 0x4d1994u: goto label_4d1994;
        case 0x4d1998u: goto label_4d1998;
        case 0x4d199cu: goto label_4d199c;
        case 0x4d19a0u: goto label_4d19a0;
        case 0x4d19a4u: goto label_4d19a4;
        case 0x4d19a8u: goto label_4d19a8;
        case 0x4d19acu: goto label_4d19ac;
        case 0x4d19b0u: goto label_4d19b0;
        case 0x4d19b4u: goto label_4d19b4;
        case 0x4d19b8u: goto label_4d19b8;
        case 0x4d19bcu: goto label_4d19bc;
        case 0x4d19c0u: goto label_4d19c0;
        case 0x4d19c4u: goto label_4d19c4;
        case 0x4d19c8u: goto label_4d19c8;
        case 0x4d19ccu: goto label_4d19cc;
        case 0x4d19d0u: goto label_4d19d0;
        case 0x4d19d4u: goto label_4d19d4;
        case 0x4d19d8u: goto label_4d19d8;
        case 0x4d19dcu: goto label_4d19dc;
        case 0x4d19e0u: goto label_4d19e0;
        case 0x4d19e4u: goto label_4d19e4;
        case 0x4d19e8u: goto label_4d19e8;
        case 0x4d19ecu: goto label_4d19ec;
        case 0x4d19f0u: goto label_4d19f0;
        case 0x4d19f4u: goto label_4d19f4;
        case 0x4d19f8u: goto label_4d19f8;
        case 0x4d19fcu: goto label_4d19fc;
        case 0x4d1a00u: goto label_4d1a00;
        case 0x4d1a04u: goto label_4d1a04;
        case 0x4d1a08u: goto label_4d1a08;
        case 0x4d1a0cu: goto label_4d1a0c;
        case 0x4d1a10u: goto label_4d1a10;
        case 0x4d1a14u: goto label_4d1a14;
        case 0x4d1a18u: goto label_4d1a18;
        case 0x4d1a1cu: goto label_4d1a1c;
        case 0x4d1a20u: goto label_4d1a20;
        case 0x4d1a24u: goto label_4d1a24;
        case 0x4d1a28u: goto label_4d1a28;
        case 0x4d1a2cu: goto label_4d1a2c;
        case 0x4d1a30u: goto label_4d1a30;
        case 0x4d1a34u: goto label_4d1a34;
        case 0x4d1a38u: goto label_4d1a38;
        case 0x4d1a3cu: goto label_4d1a3c;
        case 0x4d1a40u: goto label_4d1a40;
        case 0x4d1a44u: goto label_4d1a44;
        case 0x4d1a48u: goto label_4d1a48;
        case 0x4d1a4cu: goto label_4d1a4c;
        default: break;
    }

    ctx->pc = 0x4d1860u;

label_4d1860:
    // 0x4d1860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d1864:
    // 0x4d1864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d1868:
    // 0x4d1868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d186c:
    // 0x4d186c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d1870:
    // 0x4d1870: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x4d1870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1874:
    // 0x4d1874: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x4d1874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1878:
    // 0x4d1878: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
label_4d187c:
    if (ctx->pc == 0x4D187Cu) {
        ctx->pc = 0x4D187Cu;
            // 0x4d187c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1880u;
        goto label_4d1880;
    }
    ctx->pc = 0x4D1878u;
    {
        const bool branch_taken_0x4d1878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1878u;
            // 0x4d187c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1878) {
            ctx->pc = 0x4D1A34u;
            goto label_4d1a34;
        }
    }
    ctx->pc = 0x4D1880u;
label_4d1880:
    // 0x4d1880: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4d1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1884:
    // 0x4d1884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d1884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d1888:
    // 0x4d1888: 0x0  nop
    ctx->pc = 0x4d1888u;
    // NOP
label_4d188c:
    // 0x4d188c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d188cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1890:
    // 0x4d1890: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4d1894:
    if (ctx->pc == 0x4D1894u) {
        ctx->pc = 0x4D1898u;
        goto label_4d1898;
    }
    ctx->pc = 0x4D1890u;
    {
        const bool branch_taken_0x4d1890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d1890) {
            ctx->pc = 0x4D18A0u;
            goto label_4d18a0;
        }
    }
    ctx->pc = 0x4D1898u;
label_4d1898:
    // 0x4d1898: 0x10000067  b           . + 4 + (0x67 << 2)
label_4d189c:
    if (ctx->pc == 0x4D189Cu) {
        ctx->pc = 0x4D189Cu;
            // 0x4d189c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D18A0u;
        goto label_4d18a0;
    }
    ctx->pc = 0x4D1898u;
    {
        const bool branch_taken_0x4d1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1898u;
            // 0x4d189c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1898) {
            ctx->pc = 0x4D1A38u;
            goto label_4d1a38;
        }
    }
    ctx->pc = 0x4D18A0u;
label_4d18a0:
    // 0x4d18a0: 0xc0e393c  jal         func_38E4F0
label_4d18a4:
    if (ctx->pc == 0x4D18A4u) {
        ctx->pc = 0x4D18A8u;
        goto label_4d18a8;
    }
    ctx->pc = 0x4D18A0u;
    SET_GPR_U32(ctx, 31, 0x4D18A8u);
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18A8u; }
        if (ctx->pc != 0x4D18A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18A8u; }
        if (ctx->pc != 0x4D18A8u) { return; }
    }
    ctx->pc = 0x4D18A8u;
label_4d18a8:
    // 0x4d18a8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d18ac:
    // 0x4d18ac: 0xc603013c  lwc1        $f3, 0x13C($s0)
    ctx->pc = 0x4d18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d18b0:
    // 0x4d18b0: 0xc6020138  lwc1        $f2, 0x138($s0)
    ctx->pc = 0x4d18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d18b4:
    // 0x4d18b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4d18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d18b8:
    // 0x4d18b8: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4d18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d18bc:
    // 0x4d18bc: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x4d18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d18c0:
    // 0x4d18c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4d18c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d18c4:
    // 0x4d18c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d18c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d18c8:
    // 0x4d18c8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4d18c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d18cc:
    // 0x4d18cc: 0xc0892a0  jal         func_224A80
label_4d18d0:
    if (ctx->pc == 0x4D18D0u) {
        ctx->pc = 0x4D18D0u;
            // 0x4d18d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4D18D4u;
        goto label_4d18d4;
    }
    ctx->pc = 0x4D18CCu;
    SET_GPR_U32(ctx, 31, 0x4D18D4u);
    ctx->pc = 0x4D18D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D18CCu;
            // 0x4d18d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18D4u; }
        if (ctx->pc != 0x4D18D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18D4u; }
        if (ctx->pc != 0x4D18D4u) { return; }
    }
    ctx->pc = 0x4D18D4u;
label_4d18d4:
    // 0x4d18d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d18d8:
    // 0x4d18d8: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x4d18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d18dc:
    // 0x4d18dc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4d18dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d18e0:
    // 0x4d18e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4d18e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d18e4:
    // 0x4d18e4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x4d18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d18e8:
    // 0x4d18e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4d18e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4d18ec:
    // 0x4d18ec: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4d18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4d18f0:
    // 0x4d18f0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d18f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4d18f4:
    // 0x4d18f4: 0xc089290  jal         func_224A40
label_4d18f8:
    if (ctx->pc == 0x4D18F8u) {
        ctx->pc = 0x4D18F8u;
            // 0x4d18f8: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4D18FCu;
        goto label_4d18fc;
    }
    ctx->pc = 0x4D18F4u;
    SET_GPR_U32(ctx, 31, 0x4D18FCu);
    ctx->pc = 0x4D18F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D18F4u;
            // 0x4d18f8: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18FCu; }
        if (ctx->pc != 0x4D18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D18FCu; }
        if (ctx->pc != 0x4D18FCu) { return; }
    }
    ctx->pc = 0x4D18FCu;
label_4d18fc:
    // 0x4d18fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4d18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d1900:
    // 0x4d1900: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4d1900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4d1904:
    // 0x4d1904: 0xa20200d1  sb          $v0, 0xD1($s0)
    ctx->pc = 0x4d1904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 2));
label_4d1908:
    // 0x4d1908: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x4d1908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
label_4d190c:
    // 0x4d190c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4d190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4d1910:
    // 0x4d1910: 0xa20200d7  sb          $v0, 0xD7($s0)
    ctx->pc = 0x4d1910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 2));
label_4d1914:
    // 0x4d1914: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d1918:
    // 0x4d1918: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4d1918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4d191c:
    // 0x4d191c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1920:
    // 0x4d1920: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4d1920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4d1924:
    // 0x4d1924: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4d1928:
    // 0x4d1928: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4d192c:
    // 0x4d192c: 0xc6060100  lwc1        $f6, 0x100($s0)
    ctx->pc = 0x4d192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4d1930:
    // 0x4d1930: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4d1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d1934:
    // 0x4d1934: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d1938:
    // 0x4d1938: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x4d1938u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d193c:
    // 0x4d193c: 0xc6050104  lwc1        $f5, 0x104($s0)
    ctx->pc = 0x4d193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4d1940:
    // 0x4d1940: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x4d1940u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d1944:
    // 0x4d1944: 0xc6040108  lwc1        $f4, 0x108($s0)
    ctx->pc = 0x4d1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4d1948:
    // 0x4d1948: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x4d1948u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d194c:
    // 0x4d194c: 0xc603010c  lwc1        $f3, 0x10C($s0)
    ctx->pc = 0x4d194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d1950:
    // 0x4d1950: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x4d1950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4d1954:
    // 0x4d1954: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4d1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1958:
    // 0x4d1958: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4d1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d195c:
    // 0x4d195c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4d195cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4d1960:
    // 0x4d1960: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4d1960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4d1964:
    // 0x4d1964: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d1964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d1968:
    // 0x4d1968: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4d1968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4d196c:
    // 0x4d196c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4d196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d1970:
    // 0x4d1970: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4d1970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4d1974:
    // 0x4d1974: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4d1974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4d1978:
    // 0x4d1978: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4d1978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d197c:
    // 0x4d197c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4d197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4d1980:
    // 0x4d1980: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d1980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1984:
    // 0x4d1984: 0xc088b74  jal         func_222DD0
label_4d1988:
    if (ctx->pc == 0x4D1988u) {
        ctx->pc = 0x4D1988u;
            // 0x4d1988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D198Cu;
        goto label_4d198c;
    }
    ctx->pc = 0x4D1984u;
    SET_GPR_U32(ctx, 31, 0x4D198Cu);
    ctx->pc = 0x4D1988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1984u;
            // 0x4d1988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D198Cu; }
        if (ctx->pc != 0x4D198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D198Cu; }
        if (ctx->pc != 0x4D198Cu) { return; }
    }
    ctx->pc = 0x4D198Cu;
label_4d198c:
    // 0x4d198c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d198cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d1990:
    // 0x4d1990: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d1990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d1994:
    // 0x4d1994: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d1994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d1998:
    // 0x4d1998: 0x320f809  jalr        $t9
label_4d199c:
    if (ctx->pc == 0x4D199Cu) {
        ctx->pc = 0x4D199Cu;
            // 0x4d199c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D19A0u;
        goto label_4d19a0;
    }
    ctx->pc = 0x4D1998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D19A0u);
        ctx->pc = 0x4D199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1998u;
            // 0x4d199c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D19A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D19A0u; }
            if (ctx->pc != 0x4D19A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D19A0u;
label_4d19a0:
    // 0x4d19a0: 0xc60600f0  lwc1        $f6, 0xF0($s0)
    ctx->pc = 0x4d19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4d19a4:
    // 0x4d19a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4d19a8:
    // 0x4d19a8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4d19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4d19ac:
    // 0x4d19ac: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x4d19acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d19b0:
    // 0x4d19b0: 0xc60500f4  lwc1        $f5, 0xF4($s0)
    ctx->pc = 0x4d19b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4d19b4:
    // 0x4d19b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d19b8:
    // 0x4d19b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d19bc:
    // 0x4d19bc: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x4d19bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d19c0:
    // 0x4d19c0: 0xc60400f8  lwc1        $f4, 0xF8($s0)
    ctx->pc = 0x4d19c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4d19c4:
    // 0x4d19c4: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x4d19c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d19c8:
    // 0x4d19c8: 0xc60300fc  lwc1        $f3, 0xFC($s0)
    ctx->pc = 0x4d19c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d19cc:
    // 0x4d19cc: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x4d19ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4d19d0:
    // 0x4d19d0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4d19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d19d4:
    // 0x4d19d4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4d19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d19d8:
    // 0x4d19d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4d19d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4d19dc:
    // 0x4d19dc: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4d19dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4d19e0:
    // 0x4d19e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d19e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d19e4:
    // 0x4d19e4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4d19e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4d19e8:
    // 0x4d19e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4d19e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d19ec:
    // 0x4d19ec: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4d19ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4d19f0:
    // 0x4d19f0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4d19f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4d19f4:
    // 0x4d19f4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4d19f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d19f8:
    // 0x4d19f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4d19f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4d19fc:
    // 0x4d19fc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d19fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1a00:
    // 0x4d1a00: 0xc088b74  jal         func_222DD0
label_4d1a04:
    if (ctx->pc == 0x4D1A04u) {
        ctx->pc = 0x4D1A04u;
            // 0x4d1a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A08u;
        goto label_4d1a08;
    }
    ctx->pc = 0x4D1A00u;
    SET_GPR_U32(ctx, 31, 0x4D1A08u);
    ctx->pc = 0x4D1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A00u;
            // 0x4d1a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1A08u; }
        if (ctx->pc != 0x4D1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1A08u; }
        if (ctx->pc != 0x4D1A08u) { return; }
    }
    ctx->pc = 0x4D1A08u;
label_4d1a08:
    // 0x4d1a08: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d1a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d1a0c:
    // 0x4d1a0c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d1a10:
    // 0x4d1a10: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d1a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d1a14:
    // 0x4d1a14: 0x320f809  jalr        $t9
label_4d1a18:
    if (ctx->pc == 0x4D1A18u) {
        ctx->pc = 0x4D1A18u;
            // 0x4d1a18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D1A1Cu;
        goto label_4d1a1c;
    }
    ctx->pc = 0x4D1A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1A1Cu);
        ctx->pc = 0x4D1A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A14u;
            // 0x4d1a18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1A1Cu; }
            if (ctx->pc != 0x4D1A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D1A1Cu;
label_4d1a1c:
    // 0x4d1a1c: 0xc088b74  jal         func_222DD0
label_4d1a20:
    if (ctx->pc == 0x4D1A20u) {
        ctx->pc = 0x4D1A20u;
            // 0x4d1a20: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4D1A24u;
        goto label_4d1a24;
    }
    ctx->pc = 0x4D1A1Cu;
    SET_GPR_U32(ctx, 31, 0x4D1A24u);
    ctx->pc = 0x4D1A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A1Cu;
            // 0x4d1a20: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1A24u; }
        if (ctx->pc != 0x4D1A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1A24u; }
        if (ctx->pc != 0x4D1A24u) { return; }
    }
    ctx->pc = 0x4D1A24u;
label_4d1a24:
    // 0x4d1a24: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4d1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4d1a28:
    // 0x4d1a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1a2c:
    // 0x4d1a2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4d1a30:
    if (ctx->pc == 0x4D1A30u) {
        ctx->pc = 0x4D1A30u;
            // 0x4d1a30: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x4D1A34u;
        goto label_4d1a34;
    }
    ctx->pc = 0x4D1A2Cu;
    {
        const bool branch_taken_0x4d1a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A2Cu;
            // 0x4d1a30: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a2c) {
            ctx->pc = 0x4D1A38u;
            goto label_4d1a38;
        }
    }
    ctx->pc = 0x4D1A34u;
label_4d1a34:
    // 0x4d1a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d1a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1a38:
    // 0x4d1a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d1a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1a3c:
    // 0x4d1a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d1a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1a40:
    // 0x4d1a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1a44:
    // 0x4d1a44: 0x3e00008  jr          $ra
label_4d1a48:
    if (ctx->pc == 0x4D1A48u) {
        ctx->pc = 0x4D1A48u;
            // 0x4d1a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D1A4Cu;
        goto label_4d1a4c;
    }
    ctx->pc = 0x4D1A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A44u;
            // 0x4d1a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1A4Cu;
label_4d1a4c:
    // 0x4d1a4c: 0x0  nop
    ctx->pc = 0x4d1a4cu;
    // NOP
}
