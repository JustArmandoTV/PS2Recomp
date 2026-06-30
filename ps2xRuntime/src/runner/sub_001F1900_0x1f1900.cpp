#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1900
// Address: 0x1f1900 - 0x1f1b60
void sub_001F1900_0x1f1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1900_0x1f1900");
#endif

    switch (ctx->pc) {
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1904u: goto label_1f1904;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        case 0x1f19f8u: goto label_1f19f8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a00u: goto label_1f1a00;
        case 0x1f1a04u: goto label_1f1a04;
        case 0x1f1a08u: goto label_1f1a08;
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a1cu: goto label_1f1a1c;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a24u: goto label_1f1a24;
        case 0x1f1a28u: goto label_1f1a28;
        case 0x1f1a2cu: goto label_1f1a2c;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a34u: goto label_1f1a34;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a40u: goto label_1f1a40;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a48u: goto label_1f1a48;
        case 0x1f1a4cu: goto label_1f1a4c;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a58u: goto label_1f1a58;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a64u: goto label_1f1a64;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a6cu: goto label_1f1a6c;
        case 0x1f1a70u: goto label_1f1a70;
        case 0x1f1a74u: goto label_1f1a74;
        case 0x1f1a78u: goto label_1f1a78;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a80u: goto label_1f1a80;
        case 0x1f1a84u: goto label_1f1a84;
        case 0x1f1a88u: goto label_1f1a88;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a90u: goto label_1f1a90;
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1aacu: goto label_1f1aac;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ab8u: goto label_1f1ab8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ac0u: goto label_1f1ac0;
        case 0x1f1ac4u: goto label_1f1ac4;
        case 0x1f1ac8u: goto label_1f1ac8;
        case 0x1f1accu: goto label_1f1acc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ad8u: goto label_1f1ad8;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1ae8u: goto label_1f1ae8;
        case 0x1f1aecu: goto label_1f1aec;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1af8u: goto label_1f1af8;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b00u: goto label_1f1b00;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b0cu: goto label_1f1b0c;
        case 0x1f1b10u: goto label_1f1b10;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b18u: goto label_1f1b18;
        case 0x1f1b1cu: goto label_1f1b1c;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b28u: goto label_1f1b28;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1b30u: goto label_1f1b30;
        case 0x1f1b34u: goto label_1f1b34;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b3cu: goto label_1f1b3c;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b44u: goto label_1f1b44;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b4cu: goto label_1f1b4c;
        case 0x1f1b50u: goto label_1f1b50;
        case 0x1f1b54u: goto label_1f1b54;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1b5cu: goto label_1f1b5c;
        default: break;
    }

    ctx->pc = 0x1f1900u;

label_1f1900:
    // 0x1f1900: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f1904:
    // 0x1f1904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f1908:
    // 0x1f1908: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f1908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f190c:
    // 0x1f190c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f1910:
    // 0x1f1910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f1914:
    // 0x1f1914: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f1914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1918:
    // 0x1f1918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f191c:
    // 0x1f191c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f191cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f1920:
    // 0x1f1920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f1924:
    // 0x1f1924: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f1928:
    // 0x1f1928: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1f1928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1f192c:
    // 0x1f192c: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x1f192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
label_1f1930:
    // 0x1f1930: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f1934:
    // 0x1f1934: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1f1934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1f1938:
    // 0x1f1938: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f1938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f193c:
    // 0x1f193c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x1f193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_1f1940:
    // 0x1f1940: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f1944:
    // 0x1f1944: 0xc4ec0028  lwc1        $f12, 0x28($a3)
    ctx->pc = 0x1f1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f1948:
    // 0x1f1948: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x1f1948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f194c:
    // 0x1f194c: 0xc4a40044  lwc1        $f4, 0x44($a1)
    ctx->pc = 0x1f194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f1950:
    // 0x1f1950: 0xc4a30054  lwc1        $f3, 0x54($a1)
    ctx->pc = 0x1f1950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1954:
    // 0x1f1954: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x1f1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1958:
    // 0x1f1958: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x1f1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f195c:
    // 0x1f195c: 0x46032201  sub.s       $f8, $f4, $f3
    ctx->pc = 0x1f195cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1f1960:
    // 0x1f1960: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x1f1960u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1f1964:
    // 0x1f1964: 0xc4a3005c  lwc1        $f3, 0x5C($a1)
    ctx->pc = 0x1f1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1968:
    // 0x1f1968: 0xc4a4004c  lwc1        $f4, 0x4C($a1)
    ctx->pc = 0x1f1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f196c:
    // 0x1f196c: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x1f196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1970:
    // 0x1f1970: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x1f1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1974:
    // 0x1f1974: 0x460361c2  mul.s       $f7, $f12, $f3
    ctx->pc = 0x1f1974u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1f1978:
    // 0x1f1978: 0x46032141  sub.s       $f5, $f4, $f3
    ctx->pc = 0x1f1978u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1f197c:
    // 0x1f197c: 0x460012c1  sub.s       $f11, $f2, $f0
    ctx->pc = 0x1f197cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1f1980:
    // 0x1f1980: 0x46083902  mul.s       $f4, $f7, $f8
    ctx->pc = 0x1f1980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_1f1984:
    // 0x1f1984: 0x460638c2  mul.s       $f3, $f7, $f6
    ctx->pc = 0x1f1984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_1f1988:
    // 0x1f1988: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x1f1988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_1f198c:
    // 0x1f198c: 0xc4c80054  lwc1        $f8, 0x54($a2)
    ctx->pc = 0x1f198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f1990:
    // 0x1f1990: 0xc4c60044  lwc1        $f6, 0x44($a2)
    ctx->pc = 0x1f1990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f1994:
    // 0x1f1994: 0xc4c50058  lwc1        $f5, 0x58($a2)
    ctx->pc = 0x1f1994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f1998:
    // 0x1f1998: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x1f1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f199c:
    // 0x1f199c: 0x46064281  sub.s       $f10, $f8, $f6
    ctx->pc = 0x1f199cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
label_1f19a0:
    // 0x1f19a0: 0x46002a41  sub.s       $f9, $f5, $f0
    ctx->pc = 0x1f19a0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f19a4:
    // 0x1f19a4: 0xc4c8005c  lwc1        $f8, 0x5C($a2)
    ctx->pc = 0x1f19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f19a8:
    // 0x1f19a8: 0xc4c0004c  lwc1        $f0, 0x4C($a2)
    ctx->pc = 0x1f19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f19ac:
    // 0x1f19ac: 0xc4a50040  lwc1        $f5, 0x40($a1)
    ctx->pc = 0x1f19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f19b0:
    // 0x1f19b0: 0x46086182  mul.s       $f6, $f12, $f8
    ctx->pc = 0x1f19b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_1f19b4:
    // 0x1f19b4: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x1f19b4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_1f19b8:
    // 0x1f19b8: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x1f19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f19bc:
    // 0x1f19bc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1f19bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f19c0:
    // 0x1f19c0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1f19c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f19c4:
    // 0x1f19c4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f19c8:
    // 0x1f19c8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1f19c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f19cc:
    // 0x1f19cc: 0x460b301c  madd.s      $f0, $f6, $f11
    ctx->pc = 0x1f19ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[11]));
label_1f19d0:
    // 0x1f19d0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f19d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f19d4:
    // 0x1f19d4: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x1f19d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1f19d8:
    // 0x1f19d8: 0x460a301c  madd.s      $f0, $f6, $f10
    ctx->pc = 0x1f19d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_1f19dc:
    // 0x1f19dc: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x1f19dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f19e0:
    // 0x1f19e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f19e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f19e4:
    // 0x1f19e4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1f19e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1f19e8:
    // 0x1f19e8: 0x4609301c  madd.s      $f0, $f6, $f9
    ctx->pc = 0x1f19e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[9]));
label_1f19ec:
    // 0x1f19ec: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x1f19ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f19f0:
    // 0x1f19f0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1f19f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f19f4:
    // 0x1f19f4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f19f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f19f8:
    // 0x1f19f8: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x1f19f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f19fc:
    // 0x1f19fc: 0x4608301c  madd.s      $f0, $f6, $f8
    ctx->pc = 0x1f19fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_1f1a00:
    // 0x1f1a00: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f1a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f1a04:
    // 0x1f1a04: 0xc4a1009c  lwc1        $f1, 0x9C($a1)
    ctx->pc = 0x1f1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1a08:
    // 0x1f1a08: 0xc4c0009c  lwc1        $f0, 0x9C($a2)
    ctx->pc = 0x1f1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1a0c:
    // 0x1f1a0c: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x1f1a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1a10:
    // 0x1f1a10: 0x460138c2  mul.s       $f3, $f7, $f1
    ctx->pc = 0x1f1a10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_1f1a14:
    // 0x1f1a14: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1f1a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1f1a18:
    // 0x1f1a18: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x1f1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1a1c:
    // 0x1f1a1c: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x1f1a1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f1a20:
    // 0x1f1a20: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f1a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1f1a24:
    // 0x1f1a24: 0xc0a45a0  jal         func_291680
label_1f1a28:
    if (ctx->pc == 0x1F1A28u) {
        ctx->pc = 0x1F1A28u;
            // 0x1f1a28: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x1F1A2Cu;
        goto label_1f1a2c;
    }
    ctx->pc = 0x1F1A24u;
    SET_GPR_U32(ctx, 31, 0x1F1A2Cu);
    ctx->pc = 0x1F1A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A24u;
            // 0x1f1a28: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A2Cu; }
        if (ctx->pc != 0x1F1A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A2Cu; }
        if (ctx->pc != 0x1F1A2Cu) { return; }
    }
    ctx->pc = 0x1F1A2Cu;
label_1f1a2c:
    // 0x1f1a2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f1a30:
    // 0x1f1a30: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1f1a34:
    // 0x1f1a34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f1a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f1a38:
    // 0x1f1a38: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1f1a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1f1a3c:
    // 0x1f1a3c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1f1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f1a40:
    // 0x1f1a40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f1a44:
    // 0x1f1a44: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f1a48:
    // 0x1f1a48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f1a4c:
    // 0x1f1a4c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1f1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1f1a50:
    // 0x1f1a50: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1f1a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1f1a54:
    // 0x1f1a54: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1f1a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1a58:
    // 0x1f1a58: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1f1a58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1f1a5c:
    // 0x1f1a5c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1f1a60:
    if (ctx->pc == 0x1F1A60u) {
        ctx->pc = 0x1F1A60u;
            // 0x1f1a60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x1F1A64u;
        goto label_1f1a64;
    }
    ctx->pc = 0x1F1A5Cu;
    {
        const bool branch_taken_0x1f1a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a5c) {
            ctx->pc = 0x1F1A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A5Cu;
            // 0x1f1a60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A6Cu;
            goto label_1f1a6c;
        }
    }
    ctx->pc = 0x1F1A64u;
label_1f1a64:
    // 0x1f1a64: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f1a68:
    if (ctx->pc == 0x1F1A68u) {
        ctx->pc = 0x1F1A68u;
            // 0x1f1a68: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x1F1A6Cu;
        goto label_1f1a6c;
    }
    ctx->pc = 0x1F1A64u;
    {
        const bool branch_taken_0x1f1a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A64u;
            // 0x1f1a68: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a64) {
            ctx->pc = 0x1F1A78u;
            goto label_1f1a78;
        }
    }
    ctx->pc = 0x1F1A6Cu;
label_1f1a6c:
    // 0x1f1a6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f1a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f1a70:
    // 0x1f1a70: 0x320f809  jalr        $t9
label_1f1a74:
    if (ctx->pc == 0x1F1A74u) {
        ctx->pc = 0x1F1A78u;
        goto label_1f1a78;
    }
    ctx->pc = 0x1F1A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1A78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A78u; }
            if (ctx->pc != 0x1F1A78u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1A78u;
label_1f1a78:
    // 0x1f1a78: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1f1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1f1a7c:
    // 0x1f1a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a80:
    // 0x1f1a80: 0x1a000017  blez        $s0, . + 4 + (0x17 << 2)
label_1f1a84:
    if (ctx->pc == 0x1F1A84u) {
        ctx->pc = 0x1F1A84u;
            // 0x1f1a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A88u;
        goto label_1f1a88;
    }
    ctx->pc = 0x1F1A80u;
    {
        const bool branch_taken_0x1f1a80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F1A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A80u;
            // 0x1f1a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a80) {
            ctx->pc = 0x1F1AE0u;
            goto label_1f1ae0;
        }
    }
    ctx->pc = 0x1F1A88u;
label_1f1a88:
    // 0x1f1a88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1a8c:
    // 0x1f1a8c: 0x2ce10100  sltiu       $at, $a3, 0x100
    ctx->pc = 0x1f1a8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1f1a90:
    // 0x1f1a90: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_1f1a94:
    if (ctx->pc == 0x1F1A94u) {
        ctx->pc = 0x1F1A94u;
            // 0x1f1a94: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A98u;
        goto label_1f1a98;
    }
    ctx->pc = 0x1F1A90u;
    {
        const bool branch_taken_0x1f1a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a90) {
            ctx->pc = 0x1F1A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A90u;
            // 0x1f1a94: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1AB4u;
            goto label_1f1ab4;
        }
    }
    ctx->pc = 0x1F1A98u;
label_1f1a98:
    // 0x1f1a98: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
label_1f1a9c:
    // 0x1f1a9c: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x1f1a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_1f1aa0:
    // 0x1f1aa0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1f1aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f1aa4:
    // 0x1f1aa4: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1f1aa8:
    // 0x1f1aa8: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x1f1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1f1aac:
    // 0x1f1aac: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1f1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1ab0:
    // 0x1f1ab0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f1ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1f1ab4:
    // 0x1f1ab4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f1ab8:
    if (ctx->pc == 0x1F1AB8u) {
        ctx->pc = 0x1F1ABCu;
        goto label_1f1abc;
    }
    ctx->pc = 0x1F1AB4u;
    {
        const bool branch_taken_0x1f1ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ab4) {
            ctx->pc = 0x1F1AD0u;
            goto label_1f1ad0;
        }
    }
    ctx->pc = 0x1F1ABCu;
label_1f1abc:
    // 0x1f1abc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f1ac0:
    // 0x1f1ac0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1ac4:
    // 0x1f1ac4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f1ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f1ac8:
    // 0x1f1ac8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1f1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1f1acc:
    // 0x1f1acc: 0x0  nop
    ctx->pc = 0x1f1accu;
    // NOP
label_1f1ad0:
    // 0x1f1ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f1ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f1ad4:
    // 0x1f1ad4: 0xf0182a  slt         $v1, $a3, $s0
    ctx->pc = 0x1f1ad4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1f1ad8:
    // 0x1f1ad8: 0x5460ffed  bnel        $v1, $zero, . + 4 + (-0x13 << 2)
label_1f1adc:
    if (ctx->pc == 0x1F1ADCu) {
        ctx->pc = 0x1F1ADCu;
            // 0x1f1adc: 0x2ce10100  sltiu       $at, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->pc = 0x1F1AE0u;
        goto label_1f1ae0;
    }
    ctx->pc = 0x1F1AD8u;
    {
        const bool branch_taken_0x1f1ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ad8) {
            ctx->pc = 0x1F1ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AD8u;
            // 0x1f1adc: 0x2ce10100  sltiu       $at, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1a90;
        }
    }
    ctx->pc = 0x1F1AE0u;
label_1f1ae0:
    // 0x1f1ae0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1f1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f1ae4:
    // 0x1f1ae4: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f1ae8:
    // 0x1f1ae8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f1aec:
    // 0x1f1aec: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f1af0:
    // 0x1f1af0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1f1af4:
    if (ctx->pc == 0x1F1AF4u) {
        ctx->pc = 0x1F1AF4u;
            // 0x1f1af4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F1AF8u;
        goto label_1f1af8;
    }
    ctx->pc = 0x1F1AF0u;
    {
        const bool branch_taken_0x1f1af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AF0u;
            // 0x1f1af4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1af0) {
            ctx->pc = 0x1F1AFCu;
            goto label_1f1afc;
        }
    }
    ctx->pc = 0x1F1AF8u;
label_1f1af8:
    // 0x1f1af8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1f1af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f1afc:
    // 0x1f1afc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1f1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f1b00:
    // 0x1f1b00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f1b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b04:
    // 0x1f1b04: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f1b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b08:
    // 0x1f1b08: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1f1b08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b0c:
    // 0x1f1b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b10:
    // 0x1f1b10: 0xc091cc4  jal         func_247310
label_1f1b14:
    if (ctx->pc == 0x1F1B14u) {
        ctx->pc = 0x1F1B14u;
            // 0x1f1b14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F1B18u;
        goto label_1f1b18;
    }
    ctx->pc = 0x1F1B10u;
    SET_GPR_U32(ctx, 31, 0x1F1B18u);
    ctx->pc = 0x1F1B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B10u;
            // 0x1f1b14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B18u; }
        if (ctx->pc != 0x1F1B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B18u; }
        if (ctx->pc != 0x1F1B18u) { return; }
    }
    ctx->pc = 0x1F1B18u;
label_1f1b18:
    // 0x1f1b18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f1b1c:
    // 0x1f1b1c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f1b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f1b20:
    // 0x1f1b20: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_1f1b24:
    // 0x1f1b24: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1f1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1f1b28:
    // 0x1f1b28: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1f1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1f1b2c:
    // 0x1f1b2c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_1f1b30:
    if (ctx->pc == 0x1F1B30u) {
        ctx->pc = 0x1F1B30u;
            // 0x1f1b30: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F1B34u;
        goto label_1f1b34;
    }
    ctx->pc = 0x1F1B2Cu;
    {
        const bool branch_taken_0x1f1b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1b2c) {
            ctx->pc = 0x1F1B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B2Cu;
            // 0x1f1b30: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B48u;
            goto label_1f1b48;
        }
    }
    ctx->pc = 0x1F1B34u;
label_1f1b34:
    // 0x1f1b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1b38:
    // 0x1f1b38: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f1b3c:
    // 0x1f1b3c: 0x320f809  jalr        $t9
label_1f1b40:
    if (ctx->pc == 0x1F1B40u) {
        ctx->pc = 0x1F1B44u;
        goto label_1f1b44;
    }
    ctx->pc = 0x1F1B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1B44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B44u; }
            if (ctx->pc != 0x1F1B44u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1B44u;
label_1f1b44:
    // 0x1f1b44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1b48:
    // 0x1f1b48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1b4c:
    // 0x1f1b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1b50:
    // 0x1f1b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1b54:
    // 0x1f1b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1b58:
    // 0x1f1b58: 0x3e00008  jr          $ra
label_1f1b5c:
    if (ctx->pc == 0x1F1B5Cu) {
        ctx->pc = 0x1F1B5Cu;
            // 0x1f1b5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1F1B60u;
        goto label_fallthrough_0x1f1b58;
    }
    ctx->pc = 0x1F1B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B58u;
            // 0x1f1b5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f1b58:
    ctx->pc = 0x1F1B60u;
}
